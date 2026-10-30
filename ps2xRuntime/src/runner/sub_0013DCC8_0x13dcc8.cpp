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

// Function: sub_0013DCC8
// Address: 0x13dcc8 - 0x13e708
void sub_0013DCC8_0x13dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DCC8_0x13dcc8");
#endif

    switch (ctx->pc) {
        case 0x13dcc8u: goto label_13dcc8;
        case 0x13dcccu: goto label_13dccc;
        case 0x13dcd0u: goto label_13dcd0;
        case 0x13dcd4u: goto label_13dcd4;
        case 0x13dcd8u: goto label_13dcd8;
        case 0x13dcdcu: goto label_13dcdc;
        case 0x13dce0u: goto label_13dce0;
        case 0x13dce4u: goto label_13dce4;
        case 0x13dce8u: goto label_13dce8;
        case 0x13dcecu: goto label_13dcec;
        case 0x13dcf0u: goto label_13dcf0;
        case 0x13dcf4u: goto label_13dcf4;
        case 0x13dcf8u: goto label_13dcf8;
        case 0x13dcfcu: goto label_13dcfc;
        case 0x13dd00u: goto label_13dd00;
        case 0x13dd04u: goto label_13dd04;
        case 0x13dd08u: goto label_13dd08;
        case 0x13dd0cu: goto label_13dd0c;
        case 0x13dd10u: goto label_13dd10;
        case 0x13dd14u: goto label_13dd14;
        case 0x13dd18u: goto label_13dd18;
        case 0x13dd1cu: goto label_13dd1c;
        case 0x13dd20u: goto label_13dd20;
        case 0x13dd24u: goto label_13dd24;
        case 0x13dd28u: goto label_13dd28;
        case 0x13dd2cu: goto label_13dd2c;
        case 0x13dd30u: goto label_13dd30;
        case 0x13dd34u: goto label_13dd34;
        case 0x13dd38u: goto label_13dd38;
        case 0x13dd3cu: goto label_13dd3c;
        case 0x13dd40u: goto label_13dd40;
        case 0x13dd44u: goto label_13dd44;
        case 0x13dd48u: goto label_13dd48;
        case 0x13dd4cu: goto label_13dd4c;
        case 0x13dd50u: goto label_13dd50;
        case 0x13dd54u: goto label_13dd54;
        case 0x13dd58u: goto label_13dd58;
        case 0x13dd5cu: goto label_13dd5c;
        case 0x13dd60u: goto label_13dd60;
        case 0x13dd64u: goto label_13dd64;
        case 0x13dd68u: goto label_13dd68;
        case 0x13dd6cu: goto label_13dd6c;
        case 0x13dd70u: goto label_13dd70;
        case 0x13dd74u: goto label_13dd74;
        case 0x13dd78u: goto label_13dd78;
        case 0x13dd7cu: goto label_13dd7c;
        case 0x13dd80u: goto label_13dd80;
        case 0x13dd84u: goto label_13dd84;
        case 0x13dd88u: goto label_13dd88;
        case 0x13dd8cu: goto label_13dd8c;
        case 0x13dd90u: goto label_13dd90;
        case 0x13dd94u: goto label_13dd94;
        case 0x13dd98u: goto label_13dd98;
        case 0x13dd9cu: goto label_13dd9c;
        case 0x13dda0u: goto label_13dda0;
        case 0x13dda4u: goto label_13dda4;
        case 0x13dda8u: goto label_13dda8;
        case 0x13ddacu: goto label_13ddac;
        case 0x13ddb0u: goto label_13ddb0;
        case 0x13ddb4u: goto label_13ddb4;
        case 0x13ddb8u: goto label_13ddb8;
        case 0x13ddbcu: goto label_13ddbc;
        case 0x13ddc0u: goto label_13ddc0;
        case 0x13ddc4u: goto label_13ddc4;
        case 0x13ddc8u: goto label_13ddc8;
        case 0x13ddccu: goto label_13ddcc;
        case 0x13ddd0u: goto label_13ddd0;
        case 0x13ddd4u: goto label_13ddd4;
        case 0x13ddd8u: goto label_13ddd8;
        case 0x13dddcu: goto label_13dddc;
        case 0x13dde0u: goto label_13dde0;
        case 0x13dde4u: goto label_13dde4;
        case 0x13dde8u: goto label_13dde8;
        case 0x13ddecu: goto label_13ddec;
        case 0x13ddf0u: goto label_13ddf0;
        case 0x13ddf4u: goto label_13ddf4;
        case 0x13ddf8u: goto label_13ddf8;
        case 0x13ddfcu: goto label_13ddfc;
        case 0x13de00u: goto label_13de00;
        case 0x13de04u: goto label_13de04;
        case 0x13de08u: goto label_13de08;
        case 0x13de0cu: goto label_13de0c;
        case 0x13de10u: goto label_13de10;
        case 0x13de14u: goto label_13de14;
        case 0x13de18u: goto label_13de18;
        case 0x13de1cu: goto label_13de1c;
        case 0x13de20u: goto label_13de20;
        case 0x13de24u: goto label_13de24;
        case 0x13de28u: goto label_13de28;
        case 0x13de2cu: goto label_13de2c;
        case 0x13de30u: goto label_13de30;
        case 0x13de34u: goto label_13de34;
        case 0x13de38u: goto label_13de38;
        case 0x13de3cu: goto label_13de3c;
        case 0x13de40u: goto label_13de40;
        case 0x13de44u: goto label_13de44;
        case 0x13de48u: goto label_13de48;
        case 0x13de4cu: goto label_13de4c;
        case 0x13de50u: goto label_13de50;
        case 0x13de54u: goto label_13de54;
        case 0x13de58u: goto label_13de58;
        case 0x13de5cu: goto label_13de5c;
        case 0x13de60u: goto label_13de60;
        case 0x13de64u: goto label_13de64;
        case 0x13de68u: goto label_13de68;
        case 0x13de6cu: goto label_13de6c;
        case 0x13de70u: goto label_13de70;
        case 0x13de74u: goto label_13de74;
        case 0x13de78u: goto label_13de78;
        case 0x13de7cu: goto label_13de7c;
        case 0x13de80u: goto label_13de80;
        case 0x13de84u: goto label_13de84;
        case 0x13de88u: goto label_13de88;
        case 0x13de8cu: goto label_13de8c;
        case 0x13de90u: goto label_13de90;
        case 0x13de94u: goto label_13de94;
        case 0x13de98u: goto label_13de98;
        case 0x13de9cu: goto label_13de9c;
        case 0x13dea0u: goto label_13dea0;
        case 0x13dea4u: goto label_13dea4;
        case 0x13dea8u: goto label_13dea8;
        case 0x13deacu: goto label_13deac;
        case 0x13deb0u: goto label_13deb0;
        case 0x13deb4u: goto label_13deb4;
        case 0x13deb8u: goto label_13deb8;
        case 0x13debcu: goto label_13debc;
        case 0x13dec0u: goto label_13dec0;
        case 0x13dec4u: goto label_13dec4;
        case 0x13dec8u: goto label_13dec8;
        case 0x13deccu: goto label_13decc;
        case 0x13ded0u: goto label_13ded0;
        case 0x13ded4u: goto label_13ded4;
        case 0x13ded8u: goto label_13ded8;
        case 0x13dedcu: goto label_13dedc;
        case 0x13dee0u: goto label_13dee0;
        case 0x13dee4u: goto label_13dee4;
        case 0x13dee8u: goto label_13dee8;
        case 0x13deecu: goto label_13deec;
        case 0x13def0u: goto label_13def0;
        case 0x13def4u: goto label_13def4;
        case 0x13def8u: goto label_13def8;
        case 0x13defcu: goto label_13defc;
        case 0x13df00u: goto label_13df00;
        case 0x13df04u: goto label_13df04;
        case 0x13df08u: goto label_13df08;
        case 0x13df0cu: goto label_13df0c;
        case 0x13df10u: goto label_13df10;
        case 0x13df14u: goto label_13df14;
        case 0x13df18u: goto label_13df18;
        case 0x13df1cu: goto label_13df1c;
        case 0x13df20u: goto label_13df20;
        case 0x13df24u: goto label_13df24;
        case 0x13df28u: goto label_13df28;
        case 0x13df2cu: goto label_13df2c;
        case 0x13df30u: goto label_13df30;
        case 0x13df34u: goto label_13df34;
        case 0x13df38u: goto label_13df38;
        case 0x13df3cu: goto label_13df3c;
        case 0x13df40u: goto label_13df40;
        case 0x13df44u: goto label_13df44;
        case 0x13df48u: goto label_13df48;
        case 0x13df4cu: goto label_13df4c;
        case 0x13df50u: goto label_13df50;
        case 0x13df54u: goto label_13df54;
        case 0x13df58u: goto label_13df58;
        case 0x13df5cu: goto label_13df5c;
        case 0x13df60u: goto label_13df60;
        case 0x13df64u: goto label_13df64;
        case 0x13df68u: goto label_13df68;
        case 0x13df6cu: goto label_13df6c;
        case 0x13df70u: goto label_13df70;
        case 0x13df74u: goto label_13df74;
        case 0x13df78u: goto label_13df78;
        case 0x13df7cu: goto label_13df7c;
        case 0x13df80u: goto label_13df80;
        case 0x13df84u: goto label_13df84;
        case 0x13df88u: goto label_13df88;
        case 0x13df8cu: goto label_13df8c;
        case 0x13df90u: goto label_13df90;
        case 0x13df94u: goto label_13df94;
        case 0x13df98u: goto label_13df98;
        case 0x13df9cu: goto label_13df9c;
        case 0x13dfa0u: goto label_13dfa0;
        case 0x13dfa4u: goto label_13dfa4;
        case 0x13dfa8u: goto label_13dfa8;
        case 0x13dfacu: goto label_13dfac;
        case 0x13dfb0u: goto label_13dfb0;
        case 0x13dfb4u: goto label_13dfb4;
        case 0x13dfb8u: goto label_13dfb8;
        case 0x13dfbcu: goto label_13dfbc;
        case 0x13dfc0u: goto label_13dfc0;
        case 0x13dfc4u: goto label_13dfc4;
        case 0x13dfc8u: goto label_13dfc8;
        case 0x13dfccu: goto label_13dfcc;
        case 0x13dfd0u: goto label_13dfd0;
        case 0x13dfd4u: goto label_13dfd4;
        case 0x13dfd8u: goto label_13dfd8;
        case 0x13dfdcu: goto label_13dfdc;
        case 0x13dfe0u: goto label_13dfe0;
        case 0x13dfe4u: goto label_13dfe4;
        case 0x13dfe8u: goto label_13dfe8;
        case 0x13dfecu: goto label_13dfec;
        case 0x13dff0u: goto label_13dff0;
        case 0x13dff4u: goto label_13dff4;
        case 0x13dff8u: goto label_13dff8;
        case 0x13dffcu: goto label_13dffc;
        case 0x13e000u: goto label_13e000;
        case 0x13e004u: goto label_13e004;
        case 0x13e008u: goto label_13e008;
        case 0x13e00cu: goto label_13e00c;
        case 0x13e010u: goto label_13e010;
        case 0x13e014u: goto label_13e014;
        case 0x13e018u: goto label_13e018;
        case 0x13e01cu: goto label_13e01c;
        case 0x13e020u: goto label_13e020;
        case 0x13e024u: goto label_13e024;
        case 0x13e028u: goto label_13e028;
        case 0x13e02cu: goto label_13e02c;
        case 0x13e030u: goto label_13e030;
        case 0x13e034u: goto label_13e034;
        case 0x13e038u: goto label_13e038;
        case 0x13e03cu: goto label_13e03c;
        case 0x13e040u: goto label_13e040;
        case 0x13e044u: goto label_13e044;
        case 0x13e048u: goto label_13e048;
        case 0x13e04cu: goto label_13e04c;
        case 0x13e050u: goto label_13e050;
        case 0x13e054u: goto label_13e054;
        case 0x13e058u: goto label_13e058;
        case 0x13e05cu: goto label_13e05c;
        case 0x13e060u: goto label_13e060;
        case 0x13e064u: goto label_13e064;
        case 0x13e068u: goto label_13e068;
        case 0x13e06cu: goto label_13e06c;
        case 0x13e070u: goto label_13e070;
        case 0x13e074u: goto label_13e074;
        case 0x13e078u: goto label_13e078;
        case 0x13e07cu: goto label_13e07c;
        case 0x13e080u: goto label_13e080;
        case 0x13e084u: goto label_13e084;
        case 0x13e088u: goto label_13e088;
        case 0x13e08cu: goto label_13e08c;
        case 0x13e090u: goto label_13e090;
        case 0x13e094u: goto label_13e094;
        case 0x13e098u: goto label_13e098;
        case 0x13e09cu: goto label_13e09c;
        case 0x13e0a0u: goto label_13e0a0;
        case 0x13e0a4u: goto label_13e0a4;
        case 0x13e0a8u: goto label_13e0a8;
        case 0x13e0acu: goto label_13e0ac;
        case 0x13e0b0u: goto label_13e0b0;
        case 0x13e0b4u: goto label_13e0b4;
        case 0x13e0b8u: goto label_13e0b8;
        case 0x13e0bcu: goto label_13e0bc;
        case 0x13e0c0u: goto label_13e0c0;
        case 0x13e0c4u: goto label_13e0c4;
        case 0x13e0c8u: goto label_13e0c8;
        case 0x13e0ccu: goto label_13e0cc;
        case 0x13e0d0u: goto label_13e0d0;
        case 0x13e0d4u: goto label_13e0d4;
        case 0x13e0d8u: goto label_13e0d8;
        case 0x13e0dcu: goto label_13e0dc;
        case 0x13e0e0u: goto label_13e0e0;
        case 0x13e0e4u: goto label_13e0e4;
        case 0x13e0e8u: goto label_13e0e8;
        case 0x13e0ecu: goto label_13e0ec;
        case 0x13e0f0u: goto label_13e0f0;
        case 0x13e0f4u: goto label_13e0f4;
        case 0x13e0f8u: goto label_13e0f8;
        case 0x13e0fcu: goto label_13e0fc;
        case 0x13e100u: goto label_13e100;
        case 0x13e104u: goto label_13e104;
        case 0x13e108u: goto label_13e108;
        case 0x13e10cu: goto label_13e10c;
        case 0x13e110u: goto label_13e110;
        case 0x13e114u: goto label_13e114;
        case 0x13e118u: goto label_13e118;
        case 0x13e11cu: goto label_13e11c;
        case 0x13e120u: goto label_13e120;
        case 0x13e124u: goto label_13e124;
        case 0x13e128u: goto label_13e128;
        case 0x13e12cu: goto label_13e12c;
        case 0x13e130u: goto label_13e130;
        case 0x13e134u: goto label_13e134;
        case 0x13e138u: goto label_13e138;
        case 0x13e13cu: goto label_13e13c;
        case 0x13e140u: goto label_13e140;
        case 0x13e144u: goto label_13e144;
        case 0x13e148u: goto label_13e148;
        case 0x13e14cu: goto label_13e14c;
        case 0x13e150u: goto label_13e150;
        case 0x13e154u: goto label_13e154;
        case 0x13e158u: goto label_13e158;
        case 0x13e15cu: goto label_13e15c;
        case 0x13e160u: goto label_13e160;
        case 0x13e164u: goto label_13e164;
        case 0x13e168u: goto label_13e168;
        case 0x13e16cu: goto label_13e16c;
        case 0x13e170u: goto label_13e170;
        case 0x13e174u: goto label_13e174;
        case 0x13e178u: goto label_13e178;
        case 0x13e17cu: goto label_13e17c;
        case 0x13e180u: goto label_13e180;
        case 0x13e184u: goto label_13e184;
        case 0x13e188u: goto label_13e188;
        case 0x13e18cu: goto label_13e18c;
        case 0x13e190u: goto label_13e190;
        case 0x13e194u: goto label_13e194;
        case 0x13e198u: goto label_13e198;
        case 0x13e19cu: goto label_13e19c;
        case 0x13e1a0u: goto label_13e1a0;
        case 0x13e1a4u: goto label_13e1a4;
        case 0x13e1a8u: goto label_13e1a8;
        case 0x13e1acu: goto label_13e1ac;
        case 0x13e1b0u: goto label_13e1b0;
        case 0x13e1b4u: goto label_13e1b4;
        case 0x13e1b8u: goto label_13e1b8;
        case 0x13e1bcu: goto label_13e1bc;
        case 0x13e1c0u: goto label_13e1c0;
        case 0x13e1c4u: goto label_13e1c4;
        case 0x13e1c8u: goto label_13e1c8;
        case 0x13e1ccu: goto label_13e1cc;
        case 0x13e1d0u: goto label_13e1d0;
        case 0x13e1d4u: goto label_13e1d4;
        case 0x13e1d8u: goto label_13e1d8;
        case 0x13e1dcu: goto label_13e1dc;
        case 0x13e1e0u: goto label_13e1e0;
        case 0x13e1e4u: goto label_13e1e4;
        case 0x13e1e8u: goto label_13e1e8;
        case 0x13e1ecu: goto label_13e1ec;
        case 0x13e1f0u: goto label_13e1f0;
        case 0x13e1f4u: goto label_13e1f4;
        case 0x13e1f8u: goto label_13e1f8;
        case 0x13e1fcu: goto label_13e1fc;
        case 0x13e200u: goto label_13e200;
        case 0x13e204u: goto label_13e204;
        case 0x13e208u: goto label_13e208;
        case 0x13e20cu: goto label_13e20c;
        case 0x13e210u: goto label_13e210;
        case 0x13e214u: goto label_13e214;
        case 0x13e218u: goto label_13e218;
        case 0x13e21cu: goto label_13e21c;
        case 0x13e220u: goto label_13e220;
        case 0x13e224u: goto label_13e224;
        case 0x13e228u: goto label_13e228;
        case 0x13e22cu: goto label_13e22c;
        case 0x13e230u: goto label_13e230;
        case 0x13e234u: goto label_13e234;
        case 0x13e238u: goto label_13e238;
        case 0x13e23cu: goto label_13e23c;
        case 0x13e240u: goto label_13e240;
        case 0x13e244u: goto label_13e244;
        case 0x13e248u: goto label_13e248;
        case 0x13e24cu: goto label_13e24c;
        case 0x13e250u: goto label_13e250;
        case 0x13e254u: goto label_13e254;
        case 0x13e258u: goto label_13e258;
        case 0x13e25cu: goto label_13e25c;
        case 0x13e260u: goto label_13e260;
        case 0x13e264u: goto label_13e264;
        case 0x13e268u: goto label_13e268;
        case 0x13e26cu: goto label_13e26c;
        case 0x13e270u: goto label_13e270;
        case 0x13e274u: goto label_13e274;
        case 0x13e278u: goto label_13e278;
        case 0x13e27cu: goto label_13e27c;
        case 0x13e280u: goto label_13e280;
        case 0x13e284u: goto label_13e284;
        case 0x13e288u: goto label_13e288;
        case 0x13e28cu: goto label_13e28c;
        case 0x13e290u: goto label_13e290;
        case 0x13e294u: goto label_13e294;
        case 0x13e298u: goto label_13e298;
        case 0x13e29cu: goto label_13e29c;
        case 0x13e2a0u: goto label_13e2a0;
        case 0x13e2a4u: goto label_13e2a4;
        case 0x13e2a8u: goto label_13e2a8;
        case 0x13e2acu: goto label_13e2ac;
        case 0x13e2b0u: goto label_13e2b0;
        case 0x13e2b4u: goto label_13e2b4;
        case 0x13e2b8u: goto label_13e2b8;
        case 0x13e2bcu: goto label_13e2bc;
        case 0x13e2c0u: goto label_13e2c0;
        case 0x13e2c4u: goto label_13e2c4;
        case 0x13e2c8u: goto label_13e2c8;
        case 0x13e2ccu: goto label_13e2cc;
        case 0x13e2d0u: goto label_13e2d0;
        case 0x13e2d4u: goto label_13e2d4;
        case 0x13e2d8u: goto label_13e2d8;
        case 0x13e2dcu: goto label_13e2dc;
        case 0x13e2e0u: goto label_13e2e0;
        case 0x13e2e4u: goto label_13e2e4;
        case 0x13e2e8u: goto label_13e2e8;
        case 0x13e2ecu: goto label_13e2ec;
        case 0x13e2f0u: goto label_13e2f0;
        case 0x13e2f4u: goto label_13e2f4;
        case 0x13e2f8u: goto label_13e2f8;
        case 0x13e2fcu: goto label_13e2fc;
        case 0x13e300u: goto label_13e300;
        case 0x13e304u: goto label_13e304;
        case 0x13e308u: goto label_13e308;
        case 0x13e30cu: goto label_13e30c;
        case 0x13e310u: goto label_13e310;
        case 0x13e314u: goto label_13e314;
        case 0x13e318u: goto label_13e318;
        case 0x13e31cu: goto label_13e31c;
        case 0x13e320u: goto label_13e320;
        case 0x13e324u: goto label_13e324;
        case 0x13e328u: goto label_13e328;
        case 0x13e32cu: goto label_13e32c;
        case 0x13e330u: goto label_13e330;
        case 0x13e334u: goto label_13e334;
        case 0x13e338u: goto label_13e338;
        case 0x13e33cu: goto label_13e33c;
        case 0x13e340u: goto label_13e340;
        case 0x13e344u: goto label_13e344;
        case 0x13e348u: goto label_13e348;
        case 0x13e34cu: goto label_13e34c;
        case 0x13e350u: goto label_13e350;
        case 0x13e354u: goto label_13e354;
        case 0x13e358u: goto label_13e358;
        case 0x13e35cu: goto label_13e35c;
        case 0x13e360u: goto label_13e360;
        case 0x13e364u: goto label_13e364;
        case 0x13e368u: goto label_13e368;
        case 0x13e36cu: goto label_13e36c;
        case 0x13e370u: goto label_13e370;
        case 0x13e374u: goto label_13e374;
        case 0x13e378u: goto label_13e378;
        case 0x13e37cu: goto label_13e37c;
        case 0x13e380u: goto label_13e380;
        case 0x13e384u: goto label_13e384;
        case 0x13e388u: goto label_13e388;
        case 0x13e38cu: goto label_13e38c;
        case 0x13e390u: goto label_13e390;
        case 0x13e394u: goto label_13e394;
        case 0x13e398u: goto label_13e398;
        case 0x13e39cu: goto label_13e39c;
        case 0x13e3a0u: goto label_13e3a0;
        case 0x13e3a4u: goto label_13e3a4;
        case 0x13e3a8u: goto label_13e3a8;
        case 0x13e3acu: goto label_13e3ac;
        case 0x13e3b0u: goto label_13e3b0;
        case 0x13e3b4u: goto label_13e3b4;
        case 0x13e3b8u: goto label_13e3b8;
        case 0x13e3bcu: goto label_13e3bc;
        case 0x13e3c0u: goto label_13e3c0;
        case 0x13e3c4u: goto label_13e3c4;
        case 0x13e3c8u: goto label_13e3c8;
        case 0x13e3ccu: goto label_13e3cc;
        case 0x13e3d0u: goto label_13e3d0;
        case 0x13e3d4u: goto label_13e3d4;
        case 0x13e3d8u: goto label_13e3d8;
        case 0x13e3dcu: goto label_13e3dc;
        case 0x13e3e0u: goto label_13e3e0;
        case 0x13e3e4u: goto label_13e3e4;
        case 0x13e3e8u: goto label_13e3e8;
        case 0x13e3ecu: goto label_13e3ec;
        case 0x13e3f0u: goto label_13e3f0;
        case 0x13e3f4u: goto label_13e3f4;
        case 0x13e3f8u: goto label_13e3f8;
        case 0x13e3fcu: goto label_13e3fc;
        case 0x13e400u: goto label_13e400;
        case 0x13e404u: goto label_13e404;
        case 0x13e408u: goto label_13e408;
        case 0x13e40cu: goto label_13e40c;
        case 0x13e410u: goto label_13e410;
        case 0x13e414u: goto label_13e414;
        case 0x13e418u: goto label_13e418;
        case 0x13e41cu: goto label_13e41c;
        case 0x13e420u: goto label_13e420;
        case 0x13e424u: goto label_13e424;
        case 0x13e428u: goto label_13e428;
        case 0x13e42cu: goto label_13e42c;
        case 0x13e430u: goto label_13e430;
        case 0x13e434u: goto label_13e434;
        case 0x13e438u: goto label_13e438;
        case 0x13e43cu: goto label_13e43c;
        case 0x13e440u: goto label_13e440;
        case 0x13e444u: goto label_13e444;
        case 0x13e448u: goto label_13e448;
        case 0x13e44cu: goto label_13e44c;
        case 0x13e450u: goto label_13e450;
        case 0x13e454u: goto label_13e454;
        case 0x13e458u: goto label_13e458;
        case 0x13e45cu: goto label_13e45c;
        case 0x13e460u: goto label_13e460;
        case 0x13e464u: goto label_13e464;
        case 0x13e468u: goto label_13e468;
        case 0x13e46cu: goto label_13e46c;
        case 0x13e470u: goto label_13e470;
        case 0x13e474u: goto label_13e474;
        case 0x13e478u: goto label_13e478;
        case 0x13e47cu: goto label_13e47c;
        case 0x13e480u: goto label_13e480;
        case 0x13e484u: goto label_13e484;
        case 0x13e488u: goto label_13e488;
        case 0x13e48cu: goto label_13e48c;
        case 0x13e490u: goto label_13e490;
        case 0x13e494u: goto label_13e494;
        case 0x13e498u: goto label_13e498;
        case 0x13e49cu: goto label_13e49c;
        case 0x13e4a0u: goto label_13e4a0;
        case 0x13e4a4u: goto label_13e4a4;
        case 0x13e4a8u: goto label_13e4a8;
        case 0x13e4acu: goto label_13e4ac;
        case 0x13e4b0u: goto label_13e4b0;
        case 0x13e4b4u: goto label_13e4b4;
        case 0x13e4b8u: goto label_13e4b8;
        case 0x13e4bcu: goto label_13e4bc;
        case 0x13e4c0u: goto label_13e4c0;
        case 0x13e4c4u: goto label_13e4c4;
        case 0x13e4c8u: goto label_13e4c8;
        case 0x13e4ccu: goto label_13e4cc;
        case 0x13e4d0u: goto label_13e4d0;
        case 0x13e4d4u: goto label_13e4d4;
        case 0x13e4d8u: goto label_13e4d8;
        case 0x13e4dcu: goto label_13e4dc;
        case 0x13e4e0u: goto label_13e4e0;
        case 0x13e4e4u: goto label_13e4e4;
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4ecu: goto label_13e4ec;
        case 0x13e4f0u: goto label_13e4f0;
        case 0x13e4f4u: goto label_13e4f4;
        case 0x13e4f8u: goto label_13e4f8;
        case 0x13e4fcu: goto label_13e4fc;
        case 0x13e500u: goto label_13e500;
        case 0x13e504u: goto label_13e504;
        case 0x13e508u: goto label_13e508;
        case 0x13e50cu: goto label_13e50c;
        case 0x13e510u: goto label_13e510;
        case 0x13e514u: goto label_13e514;
        case 0x13e518u: goto label_13e518;
        case 0x13e51cu: goto label_13e51c;
        case 0x13e520u: goto label_13e520;
        case 0x13e524u: goto label_13e524;
        case 0x13e528u: goto label_13e528;
        case 0x13e52cu: goto label_13e52c;
        case 0x13e530u: goto label_13e530;
        case 0x13e534u: goto label_13e534;
        case 0x13e538u: goto label_13e538;
        case 0x13e53cu: goto label_13e53c;
        case 0x13e540u: goto label_13e540;
        case 0x13e544u: goto label_13e544;
        case 0x13e548u: goto label_13e548;
        case 0x13e54cu: goto label_13e54c;
        case 0x13e550u: goto label_13e550;
        case 0x13e554u: goto label_13e554;
        case 0x13e558u: goto label_13e558;
        case 0x13e55cu: goto label_13e55c;
        case 0x13e560u: goto label_13e560;
        case 0x13e564u: goto label_13e564;
        case 0x13e568u: goto label_13e568;
        case 0x13e56cu: goto label_13e56c;
        case 0x13e570u: goto label_13e570;
        case 0x13e574u: goto label_13e574;
        case 0x13e578u: goto label_13e578;
        case 0x13e57cu: goto label_13e57c;
        case 0x13e580u: goto label_13e580;
        case 0x13e584u: goto label_13e584;
        case 0x13e588u: goto label_13e588;
        case 0x13e58cu: goto label_13e58c;
        case 0x13e590u: goto label_13e590;
        case 0x13e594u: goto label_13e594;
        case 0x13e598u: goto label_13e598;
        case 0x13e59cu: goto label_13e59c;
        case 0x13e5a0u: goto label_13e5a0;
        case 0x13e5a4u: goto label_13e5a4;
        case 0x13e5a8u: goto label_13e5a8;
        case 0x13e5acu: goto label_13e5ac;
        case 0x13e5b0u: goto label_13e5b0;
        case 0x13e5b4u: goto label_13e5b4;
        case 0x13e5b8u: goto label_13e5b8;
        case 0x13e5bcu: goto label_13e5bc;
        case 0x13e5c0u: goto label_13e5c0;
        case 0x13e5c4u: goto label_13e5c4;
        case 0x13e5c8u: goto label_13e5c8;
        case 0x13e5ccu: goto label_13e5cc;
        case 0x13e5d0u: goto label_13e5d0;
        case 0x13e5d4u: goto label_13e5d4;
        case 0x13e5d8u: goto label_13e5d8;
        case 0x13e5dcu: goto label_13e5dc;
        case 0x13e5e0u: goto label_13e5e0;
        case 0x13e5e4u: goto label_13e5e4;
        case 0x13e5e8u: goto label_13e5e8;
        case 0x13e5ecu: goto label_13e5ec;
        case 0x13e5f0u: goto label_13e5f0;
        case 0x13e5f4u: goto label_13e5f4;
        case 0x13e5f8u: goto label_13e5f8;
        case 0x13e5fcu: goto label_13e5fc;
        case 0x13e600u: goto label_13e600;
        case 0x13e604u: goto label_13e604;
        case 0x13e608u: goto label_13e608;
        case 0x13e60cu: goto label_13e60c;
        case 0x13e610u: goto label_13e610;
        case 0x13e614u: goto label_13e614;
        case 0x13e618u: goto label_13e618;
        case 0x13e61cu: goto label_13e61c;
        case 0x13e620u: goto label_13e620;
        case 0x13e624u: goto label_13e624;
        case 0x13e628u: goto label_13e628;
        case 0x13e62cu: goto label_13e62c;
        case 0x13e630u: goto label_13e630;
        case 0x13e634u: goto label_13e634;
        case 0x13e638u: goto label_13e638;
        case 0x13e63cu: goto label_13e63c;
        case 0x13e640u: goto label_13e640;
        case 0x13e644u: goto label_13e644;
        case 0x13e648u: goto label_13e648;
        case 0x13e64cu: goto label_13e64c;
        case 0x13e650u: goto label_13e650;
        case 0x13e654u: goto label_13e654;
        case 0x13e658u: goto label_13e658;
        case 0x13e65cu: goto label_13e65c;
        case 0x13e660u: goto label_13e660;
        case 0x13e664u: goto label_13e664;
        case 0x13e668u: goto label_13e668;
        case 0x13e66cu: goto label_13e66c;
        case 0x13e670u: goto label_13e670;
        case 0x13e674u: goto label_13e674;
        case 0x13e678u: goto label_13e678;
        case 0x13e67cu: goto label_13e67c;
        case 0x13e680u: goto label_13e680;
        case 0x13e684u: goto label_13e684;
        case 0x13e688u: goto label_13e688;
        case 0x13e68cu: goto label_13e68c;
        case 0x13e690u: goto label_13e690;
        case 0x13e694u: goto label_13e694;
        case 0x13e698u: goto label_13e698;
        case 0x13e69cu: goto label_13e69c;
        case 0x13e6a0u: goto label_13e6a0;
        case 0x13e6a4u: goto label_13e6a4;
        case 0x13e6a8u: goto label_13e6a8;
        case 0x13e6acu: goto label_13e6ac;
        case 0x13e6b0u: goto label_13e6b0;
        case 0x13e6b4u: goto label_13e6b4;
        case 0x13e6b8u: goto label_13e6b8;
        case 0x13e6bcu: goto label_13e6bc;
        case 0x13e6c0u: goto label_13e6c0;
        case 0x13e6c4u: goto label_13e6c4;
        case 0x13e6c8u: goto label_13e6c8;
        case 0x13e6ccu: goto label_13e6cc;
        case 0x13e6d0u: goto label_13e6d0;
        case 0x13e6d4u: goto label_13e6d4;
        case 0x13e6d8u: goto label_13e6d8;
        case 0x13e6dcu: goto label_13e6dc;
        case 0x13e6e0u: goto label_13e6e0;
        case 0x13e6e4u: goto label_13e6e4;
        case 0x13e6e8u: goto label_13e6e8;
        case 0x13e6ecu: goto label_13e6ec;
        case 0x13e6f0u: goto label_13e6f0;
        case 0x13e6f4u: goto label_13e6f4;
        case 0x13e6f8u: goto label_13e6f8;
        case 0x13e6fcu: goto label_13e6fc;
        case 0x13e700u: goto label_13e700;
        case 0x13e704u: goto label_13e704;
        default: break;
    }

    ctx->pc = 0x13dcc8u;

label_13dcc8:
    // 0x13dcc8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x13dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_13dccc:
    // 0x13dccc: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x13dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_13dcd0:
    // 0x13dcd0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x13dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_13dcd4:
    // 0x13dcd4: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x13dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_13dcd8:
    // 0x13dcd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13dcd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13dcdc:
    // 0x13dcdc: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x13dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_13dce0:
    // 0x13dce0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x13dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_13dce4:
    // 0x13dce4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x13dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_13dce8:
    // 0x13dce8: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x13dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_13dcec:
    // 0x13dcec: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x13dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_13dcf0:
    // 0x13dcf0: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x13dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_13dcf4:
    // 0x13dcf4: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x13dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_13dcf8:
    // 0x13dcf8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x13dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_13dcfc:
    // 0x13dcfc: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x13dcfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_13dd00:
    // 0x13dd00: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x13dd00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_13dd04:
    // 0x13dd04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13dd08:
    // 0x13dd08: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13dd08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13dd0c:
    // 0x13dd0c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13dd10:
    // 0x13dd10: 0x40f809  jalr        $v0
label_13dd14:
    if (ctx->pc == 0x13DD14u) {
        ctx->pc = 0x13DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD10u;
        // 0x13dd14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DD18u;
        goto label_13dd18;
    }
    ctx->pc = 0x13DD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DD18u);
        ctx->pc = 0x13DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD10u;
        // 0x13dd14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD10u, 0x13DD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DD18u;
label_13dd18:
    // 0x13dd18: 0x86650352  lh          $a1, 0x352($s3)
    ctx->pc = 0x13dd18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 850)));
label_13dd1c:
    // 0x13dd1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13dd20:
    // 0x13dd20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13dd20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13dd24:
    // 0x13dd24: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13dd28:
    // 0x13dd28: 0xb33021  addu        $a2, $a1, $s3
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_13dd2c:
    // 0x13dd2c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x13dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_13dd30:
    // 0x13dd30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13dd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13dd34:
    // 0x13dd34: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13dd38:
    // 0x13dd38: 0xc136afa  jal         func_4DABE8
label_13dd3c:
    if (ctx->pc == 0x13DD3Cu) {
        ctx->pc = 0x13DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD38u;
        // 0x13dd3c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DD40u;
        goto label_13dd40;
    }
    ctx->pc = 0x13DD38u;
    SET_GPR_U32(ctx, 31, 0x13DD40u);
    ctx->pc = 0x13DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD38u;
    // 0x13dd3c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DD38u, 0x13DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD40u;
label_13dd40:
    // 0x13dd40: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13dd40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13dd44:
    // 0x13dd44: 0x926403e7  lbu         $a0, 0x3E7($s3)
    ctx->pc = 0x13dd44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 999)));
label_13dd48:
    // 0x13dd48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13dd48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13dd4c:
    // 0x13dd4c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x13dd4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13dd50:
    // 0x13dd50: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13dd50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13dd54:
    // 0x13dd54: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x13dd54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13dd58:
    // 0x13dd58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13dd58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13dd5c:
    // 0x13dd5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13dd5cu;
    // VWAITQ (Q already resolved in this runtime)
label_13dd60:
    // 0x13dd60: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13dd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13dd64:
    // 0x13dd64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13dd64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_13dd68:
    // 0x13dd68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13dd6c:
    // 0x13dd6c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x13dd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_13dd70:
    // 0x13dd70: 0x10800065  beqz        $a0, . + 4 + (0x65 << 2)
label_13dd74:
    if (ctx->pc == 0x13DD74u) {
        ctx->pc = 0x13DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD70u;
        // 0x13dd74: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DD78u;
        goto label_13dd78;
    }
    ctx->pc = 0x13DD70u;
    {
        const bool branch_taken_0x13dd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD70u;
        // 0x13dd74: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd70) {
            ctx->pc = 0x13DF08u;
            goto label_13df08;
        }
    }
    ctx->pc = 0x13DD78u;
label_13dd78:
    // 0x13dd78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13dd7c:
    // 0x13dd7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13dd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13dd80:
    // 0x13dd80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13dd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13dd84:
    // 0x13dd84: 0x26650340  addiu       $a1, $s3, 0x340
    ctx->pc = 0x13dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_13dd88:
    // 0x13dd88: 0x26700180  addiu       $s0, $s3, 0x180
    ctx->pc = 0x13dd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
label_13dd8c:
    // 0x13dd8c: 0xe66001a4  swc1        $f0, 0x1A4($s3)
    ctx->pc = 0x13dd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 420), bits); }
label_13dd90:
    // 0x13dd90: 0xc04eeb4  jal         func_13BAD0
label_13dd94:
    if (ctx->pc == 0x13DD94u) {
        ctx->pc = 0x13DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD90u;
        // 0x13dd94: 0x267202f0  addiu       $s2, $s3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DD98u;
        goto label_13dd98;
    }
    ctx->pc = 0x13DD90u;
    SET_GPR_U32(ctx, 31, 0x13DD98u);
    ctx->pc = 0x13DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD90u;
    // 0x13dd94: 0x267202f0  addiu       $s2, $s3, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAD0u, 0x13DD90u, 0x13DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD98u;
label_13dd98:
    // 0x13dd98: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x13dd98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13dd9c:
    // 0x13dd9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13dd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13dda0:
    // 0x13dda0: 0xc04fee8  jal         func_13FBA0
label_13dda4:
    if (ctx->pc == 0x13DDA4u) {
        ctx->pc = 0x13DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDA0u;
        // 0x13dda4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDA8u;
        goto label_13dda8;
    }
    ctx->pc = 0x13DDA0u;
    SET_GPR_U32(ctx, 31, 0x13DDA8u);
    ctx->pc = 0x13DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDA0u;
    // 0x13dda4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FBA0u, 0x13DDA0u, 0x13DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDA8u;
label_13dda8:
    // 0x13dda8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x13dda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13ddac:
    // 0x13ddac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13ddacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ddb0:
    // 0x13ddb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ddb4:
    // 0x13ddb4: 0xc0500c2  jal         func_140308
label_13ddb8:
    if (ctx->pc == 0x13DDB8u) {
        ctx->pc = 0x13DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDB4u;
        // 0x13ddb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDBCu;
        goto label_13ddbc;
    }
    ctx->pc = 0x13DDB4u;
    SET_GPR_U32(ctx, 31, 0x13DDBCu);
    ctx->pc = 0x13DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDB4u;
    // 0x13ddb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140308u, 0x13DDB4u, 0x13DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDBCu;
label_13ddbc:
    // 0x13ddbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13ddbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ddc0:
    // 0x13ddc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13ddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13ddc4:
    // 0x13ddc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13ddc8:
    // 0x13ddc8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13ddcc:
    // 0x13ddcc: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x13ddccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_13ddd0:
    // 0x13ddd0: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x13ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_13ddd4:
    // 0x13ddd4: 0x40f809  jalr        $v0
label_13ddd8:
    if (ctx->pc == 0x13DDD8u) {
        ctx->pc = 0x13DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDD4u;
        // 0x13ddd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDDCu;
        goto label_13dddc;
    }
    ctx->pc = 0x13DDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DDDCu);
        ctx->pc = 0x13DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDD4u;
        // 0x13ddd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDD4u, 0x13DDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DDDCu;
label_13dddc:
    // 0x13dddc: 0x7a630180  lq          $v1, 0x180($s3)
    ctx->pc = 0x13dddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 384)));
label_13dde0:
    // 0x13dde0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13dde4:
    // 0x13dde4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13dde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13dde8:
    // 0x13dde8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13dde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13ddec:
    // 0x13ddec: 0xc136afa  jal         func_4DABE8
label_13ddf0:
    if (ctx->pc == 0x13DDF0u) {
        ctx->pc = 0x13DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDECu;
        // 0x13ddf0: 0x7e6302f0  sq          $v1, 0x2F0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 752), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDF4u;
        goto label_13ddf4;
    }
    ctx->pc = 0x13DDECu;
    SET_GPR_U32(ctx, 31, 0x13DDF4u);
    ctx->pc = 0x13DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDECu;
    // 0x13ddf0: 0x7e6302f0  sq          $v1, 0x2F0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 752), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DDECu, 0x13DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDF4u;
label_13ddf4:
    // 0x13ddf4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x13ddf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13ddf8:
    // 0x13ddf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13ddfc:
    // 0x13ddfc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13ddfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13de00:
    // 0x13de00: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13de00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13de04:
    // 0x13de04: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13de04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13de08:
    // 0x13de08: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13de08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13de0c:
    // 0x13de0c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13de0cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13de10:
    // 0x13de10: 0x4a0003bf  vwaitq
    ctx->pc = 0x13de10u;
    // VWAITQ (Q already resolved in this runtime)
label_13de14:
    // 0x13de14: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13de14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13de18:
    // 0x13de18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13de18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13de1c:
    // 0x13de1c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13de1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_13de20:
    // 0x13de20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13de20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13de24:
    // 0x13de24: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_13de28:
    // 0x13de28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13de28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13de2c:
    // 0x13de2c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x13de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_13de30:
    // 0x13de30: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13de34:
    // 0x13de34: 0xc136b24  jal         func_4DAC90
label_13de38:
    if (ctx->pc == 0x13DE38u) {
        ctx->pc = 0x13DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE34u;
        // 0x13de38: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE3Cu;
        goto label_13de3c;
    }
    ctx->pc = 0x13DE34u;
    SET_GPR_U32(ctx, 31, 0x13DE3Cu);
    ctx->pc = 0x13DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE34u;
    // 0x13de38: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13DE34u, 0x13DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE3Cu;
label_13de3c:
    // 0x13de3c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13de3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13de40:
    // 0x13de40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13de44:
    // 0x13de44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13de44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13de48:
    // 0x13de48: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13de48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13de4c:
    // 0x13de4c: 0xc136b18  jal         func_4DAC60
label_13de50:
    if (ctx->pc == 0x13DE50u) {
        ctx->pc = 0x13DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE4Cu;
        // 0x13de50: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE54u;
        goto label_13de54;
    }
    ctx->pc = 0x13DE4Cu;
    SET_GPR_U32(ctx, 31, 0x13DE54u);
    ctx->pc = 0x13DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE4Cu;
    // 0x13de50: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13DE4Cu, 0x13DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE54u;
label_13de54:
    // 0x13de54: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13de54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13de58:
    // 0x13de58: 0xc66c0368  lwc1        $f12, 0x368($s3)
    ctx->pc = 0x13de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13de5c:
    // 0x13de5c: 0x7e6202f0  sq          $v0, 0x2F0($s3)
    ctx->pc = 0x13de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 752), GPR_VEC(ctx, 2));
label_13de60:
    // 0x13de60: 0xc12e34c  jal         func_4B8D30
label_13de64:
    if (ctx->pc == 0x13DE64u) {
        ctx->pc = 0x13DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE60u;
        // 0x13de64: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE68u;
        goto label_13de68;
    }
    ctx->pc = 0x13DE60u;
    SET_GPR_U32(ctx, 31, 0x13DE68u);
    ctx->pc = 0x13DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE60u;
    // 0x13de64: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x13DE60u, 0x13DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE68u;
label_13de68:
    // 0x13de68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13de68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13de6c:
    // 0x13de6c: 0xc66102f8  lwc1        $f1, 0x2F8($s3)
    ctx->pc = 0x13de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13de70:
    // 0x13de70: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x13de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
label_13de74:
    // 0x13de74: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x13de74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_13de78:
    // 0x13de78: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x13de78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13de7c:
    // 0x13de7c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x13de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13de80:
    // 0x13de80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13de80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13de84:
    // 0x13de84: 0xe66102f8  swc1        $f1, 0x2F8($s3)
    ctx->pc = 0x13de84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 760), bits); }
label_13de88:
    // 0x13de88: 0x7a6202f0  lq          $v0, 0x2F0($s3)
    ctx->pc = 0x13de88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
label_13de8c:
    // 0x13de8c: 0x7e620310  sq          $v0, 0x310($s3)
    ctx->pc = 0x13de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), GPR_VEC(ctx, 2));
label_13de90:
    // 0x13de90: 0x84900092  lh          $s0, 0x92($a0)
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_13de94:
    // 0x13de94: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x13de94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_13de98:
    // 0x13de98: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x13de98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_13de9c:
    // 0x13de9c: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x13de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_13dea0:
    // 0x13dea0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13dea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_13dea4:
    // 0x13dea4: 0x40f809  jalr        $v0
label_13dea8:
    if (ctx->pc == 0x13DEA8u) {
        ctx->pc = 0x13DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEA4u;
        // 0x13dea8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DEACu;
        goto label_13deac;
    }
    ctx->pc = 0x13DEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DEACu);
        ctx->pc = 0x13DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEA4u;
        // 0x13dea8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DEA4u, 0x13DEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DEACu;
label_13deac:
    // 0x13deac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13deacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13deb0:
    // 0x13deb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13deb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13deb4:
    // 0x13deb4: 0xc136afa  jal         func_4DABE8
label_13deb8:
    if (ctx->pc == 0x13DEB8u) {
        ctx->pc = 0x13DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEB4u;
        // 0x13deb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DEBCu;
        goto label_13debc;
    }
    ctx->pc = 0x13DEB4u;
    SET_GPR_U32(ctx, 31, 0x13DEBCu);
    ctx->pc = 0x13DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEB4u;
    // 0x13deb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DEB4u, 0x13DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEBCu;
label_13debc:
    // 0x13debc: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x13debcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13dec0:
    // 0x13dec0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13dec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13dec4:
    // 0x13dec4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13dec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13dec8:
    // 0x13dec8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13dec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13decc:
    // 0x13decc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x13deccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_13ded0:
    // 0x13ded0: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x13ded0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13ded4:
    // 0x13ded4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x13ded4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_13ded8:
    // 0x13ded8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13ded8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13dedc:
    // 0x13dedc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13dedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_13dee0:
    // 0x13dee0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x13dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_13dee4:
    // 0x13dee4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x13dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13dee8:
    // 0x13dee8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13deec:
    // 0x13deec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13deecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13def0:
    // 0x13def0: 0x0  nop
    ctx->pc = 0x13def0u;
    // NOP
label_13def4:
    // 0x13def4: 0x450001d8  bc1f        . + 4 + (0x1D8 << 2)
label_13def8:
    if (ctx->pc == 0x13DEF8u) {
        ctx->pc = 0x13DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEF4u;
        // 0x13def8: 0xa26003ea  sb          $zero, 0x3EA($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1002), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DEFCu;
        goto label_13defc;
    }
    ctx->pc = 0x13DEF4u;
    {
        const bool branch_taken_0x13def4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEF4u;
        // 0x13def8: 0xa26003ea  sb          $zero, 0x3EA($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1002), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13def4) {
            ctx->pc = 0x13E658u;
            goto label_13e658;
        }
    }
    ctx->pc = 0x13DEFCu;
label_13defc:
    // 0x13defc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13df00:
    // 0x13df00: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_13df04:
    if (ctx->pc == 0x13DF04u) {
        ctx->pc = 0x13DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF00u;
        // 0x13df04: 0xa26203ea  sb          $v0, 0x3EA($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1002), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF08u;
        goto label_13df08;
    }
    ctx->pc = 0x13DF00u;
    {
        const bool branch_taken_0x13df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF00u;
        // 0x13df04: 0xa26203ea  sb          $v0, 0x3EA($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1002), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df00) {
            ctx->pc = 0x13E658u;
            goto label_13e658;
        }
    }
    ctx->pc = 0x13DF08u;
label_13df08:
    // 0x13df08: 0x8e650348  lw          $a1, 0x348($s3)
    ctx->pc = 0x13df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 840)));
label_13df0c:
    // 0x13df0c: 0x10a001d2  beqz        $a1, . + 4 + (0x1D2 << 2)
label_13df10:
    if (ctx->pc == 0x13DF10u) {
        ctx->pc = 0x13DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF0Cu;
        // 0x13df10: 0x267502f0  addiu       $s5, $s3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF14u;
        goto label_13df14;
    }
    ctx->pc = 0x13DF0Cu;
    {
        const bool branch_taken_0x13df0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF0Cu;
        // 0x13df10: 0x267502f0  addiu       $s5, $s3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df0c) {
            ctx->pc = 0x13E658u;
            goto label_13e658;
        }
    }
    ctx->pc = 0x13DF14u;
label_13df14:
    // 0x13df14: 0x7a6202f0  lq          $v0, 0x2F0($s3)
    ctx->pc = 0x13df14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
label_13df18:
    // 0x13df18: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x13df18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_13df1c:
    // 0x13df1c: 0xc47492a0  lwc1        $f20, -0x6D60($v1)
    ctx->pc = 0x13df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13df20:
    // 0x13df20: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x13df20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13df24:
    // 0x13df24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13df24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13df28:
    // 0x13df28: 0x26770340  addiu       $s7, $s3, 0x340
    ctx->pc = 0x13df28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_13df2c:
    // 0x13df2c: 0x26620320  addiu       $v0, $s3, 0x320
    ctx->pc = 0x13df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_13df30:
    // 0x13df30: 0x26740180  addiu       $s4, $s3, 0x180
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
label_13df34:
    // 0x13df34: 0x8e760340  lw          $s6, 0x340($s3)
    ctx->pc = 0x13df34u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
label_13df38:
    // 0x13df38: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13df3c:
    // 0x13df3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13df3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13df40:
    // 0x13df40: 0x1480003f  bnez        $a0, . + 4 + (0x3F << 2)
label_13df44:
    if (ctx->pc == 0x13DF44u) {
        ctx->pc = 0x13DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF40u;
        // 0x13df44: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF48u;
        goto label_13df48;
    }
    ctx->pc = 0x13DF40u;
    {
        const bool branch_taken_0x13df40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF40u;
        // 0x13df44: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df40) {
            ctx->pc = 0x13E040u;
            goto label_13e040;
        }
    }
    ctx->pc = 0x13DF48u;
label_13df48:
    // 0x13df48: 0x18a0003d  blez        $a1, . + 4 + (0x3D << 2)
label_13df4c:
    if (ctx->pc == 0x13DF4Cu) {
        ctx->pc = 0x13DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF48u;
        // 0x13df4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF50u;
        goto label_13df50;
    }
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF48u;
        // 0x13df4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13E040u;
            goto label_13e040;
        }
    }
    ctx->pc = 0x13DF50u;
label_13df50:
    // 0x13df50: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_13df54:
    // 0x13df54: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x13df54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_13df58:
    // 0x13df58: 0x247e4b00  addiu       $fp, $v1, 0x4B00
    ctx->pc = 0x13df58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13df5c:
    // 0x13df5c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x13df5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13df60:
    // 0x13df60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13df64:
    // 0x13df64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13df64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13df68:
    // 0x13df68: 0x86660352  lh          $a2, 0x352($s3)
    ctx->pc = 0x13df68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 850)));
label_13df6c:
    // 0x13df6c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x13df6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13df70:
    // 0x13df70: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13df74:
    // 0x13df74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13df74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_13df78:
    // 0x13df78: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x13df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_13df7c:
    // 0x13df7c: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_13df80:
    // 0x13df80: 0xc136afa  jal         func_4DABE8
label_13df84:
    if (ctx->pc == 0x13DF84u) {
        ctx->pc = 0x13DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF80u;
        // 0x13df84: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF88u;
        goto label_13df88;
    }
    ctx->pc = 0x13DF80u;
    SET_GPR_U32(ctx, 31, 0x13DF88u);
    ctx->pc = 0x13DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF80u;
    // 0x13df84: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DF80u, 0x13DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF88u;
label_13df88:
    // 0x13df88: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13df88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13df8c:
    // 0x13df8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13df90:
    // 0x13df90: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x13df90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13df94:
    // 0x13df94: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13df98:
    // 0x13df98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13df98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13df9c:
    // 0x13df9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13df9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13dfa0:
    // 0x13dfa0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13dfa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dfa4:
    // 0x13dfa4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13dfa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dfa8:
    // 0x13dfa8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13dfa8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13dfac:
    // 0x13dfac: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13dfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_13dfb0:
    // 0x13dfb0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13dfb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13dfb4:
    // 0x13dfb4: 0xc136b24  jal         func_4DAC90
label_13dfb8:
    if (ctx->pc == 0x13DFB8u) {
        ctx->pc = 0x13DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFB4u;
        // 0x13dfb8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DFBCu;
        goto label_13dfbc;
    }
    ctx->pc = 0x13DFB4u;
    SET_GPR_U32(ctx, 31, 0x13DFBCu);
    ctx->pc = 0x13DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFB4u;
    // 0x13dfb8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13DFB4u, 0x13DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFBCu;
label_13dfbc:
    // 0x13dfbc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13dfbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13dfc0:
    // 0x13dfc0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x13dfc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13dfc4:
    // 0x13dfc4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13dfc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13dfc8:
    // 0x13dfc8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13dfc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dfcc:
    // 0x13dfcc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13dfccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dfd0:
    // 0x13dfd0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13dfd0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13dfd4:
    // 0x13dfd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x13dfd4u;
    // VWAITQ (Q already resolved in this runtime)
label_13dfd8:
    // 0x13dfd8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13dfd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dfdc:
    // 0x13dfdc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13dfdcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13dfe0:
    // 0x13dfe0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13dfe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13dfe4:
    // 0x13dfe4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13dfe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13dfe8:
    // 0x13dfe8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x13dfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dfec:
    // 0x13dfec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13dfecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dff0:
    // 0x13dff0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13dff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dff4:
    // 0x13dff4: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13dff4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13dff8:
    // 0x13dff8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13dff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13dffc:
    // 0x13dffc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x13dffcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e000:
    // 0x13e000: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_13e004:
    // 0x13e004: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x13e004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e008:
    // 0x13e008: 0x0  nop
    ctx->pc = 0x13e008u;
    // NOP
label_13e00c:
    // 0x13e00c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13e010:
    if (ctx->pc == 0x13E010u) {
        ctx->pc = 0x13E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E00Cu;
        // 0x13e010: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E014u;
        goto label_13e014;
    }
    ctx->pc = 0x13E00Cu;
    {
        const bool branch_taken_0x13e00c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E00Cu;
        // 0x13e010: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e00c) {
            ctx->pc = 0x13E018u;
            goto label_13e018;
        }
    }
    ctx->pc = 0x13E014u;
label_13e014:
    // 0x13e014: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13e014u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_13e018:
    // 0x13e018: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x13e018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e01c:
    // 0x13e01c: 0x0  nop
    ctx->pc = 0x13e01cu;
    // NOP
label_13e020:
    // 0x13e020: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_13e024:
    if (ctx->pc == 0x13E024u) {
        ctx->pc = 0x13E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E020u;
        // 0x13e024: 0x8e620348  lw          $v0, 0x348($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E028u;
        goto label_13e028;
    }
    ctx->pc = 0x13E020u;
    {
        const bool branch_taken_0x13e020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E020u;
        // 0x13e024: 0x8e620348  lw          $v0, 0x348($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e020) {
            ctx->pc = 0x13E030u;
            goto label_13e030;
        }
    }
    ctx->pc = 0x13E028u;
label_13e028:
    // 0x13e028: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13e02c:
    // 0x13e02c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x13e02cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_13e030:
    // 0x13e030: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13e034:
    // 0x13e034: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13e034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13e038:
    // 0x13e038: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_13e03c:
    if (ctx->pc == 0x13E03Cu) {
        ctx->pc = 0x13E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E038u;
        // 0x13e03c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E040u;
        goto label_13e040;
    }
    ctx->pc = 0x13E038u;
    {
        const bool branch_taken_0x13e038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E038u;
        // 0x13e03c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e038) {
            ctx->pc = 0x13DF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13df60;
        }
    }
    ctx->pc = 0x13E040u;
label_13e040:
    // 0x13e040: 0x926603ea  lbu         $a2, 0x3EA($s3)
    ctx->pc = 0x13e040u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1002)));
label_13e044:
    // 0x13e044: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e048:
    // 0x13e048: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13e048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e04c:
    // 0x13e04c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e050:
    // 0x13e050: 0x2cc70001  sltiu       $a3, $a2, 0x1
    ctx->pc = 0x13e050u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13e054:
    // 0x13e054: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e058:
    // 0x13e058: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13e058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e05c:
    // 0x13e05c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13e05cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e060:
    // 0x13e060: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13e060u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13e064:
    // 0x13e064: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13e064u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13e068:
    // 0x13e068: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e068u;
    // VWAITQ (Q already resolved in this runtime)
label_13e06c:
    // 0x13e06c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13e06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13e070:
    // 0x13e070: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13e070u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13e074:
    // 0x13e074: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13e074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_13e078:
    // 0x13e078: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x13e078u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_13e07c:
    // 0x13e07c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13e080:
    // 0x13e080: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x13e080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13e084:
    // 0x13e084: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13e084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13e088:
    // 0x13e088: 0xc05035a  jal         func_140D68
label_13e08c:
    if (ctx->pc == 0x13E08Cu) {
        ctx->pc = 0x13E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E088u;
        // 0x13e08c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E090u;
        goto label_13e090;
    }
    ctx->pc = 0x13E088u;
    SET_GPR_U32(ctx, 31, 0x13E090u);
    ctx->pc = 0x13E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E088u;
    // 0x13e08c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D68u, 0x13E088u, 0x13E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E090u;
label_13e090:
    // 0x13e090: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x13e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_13e094:
    // 0x13e094: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x13e094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_13e098:
    // 0x13e098: 0x86d00092  lh          $s0, 0x92($s6)
    ctx->pc = 0x13e098u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_13e09c:
    // 0x13e09c: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x13e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13e0a0:
    // 0x13e0a0: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x13e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13e0a4:
    // 0x13e0a4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x13e0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_13e0a8:
    // 0x13e0a8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x13e0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_13e0ac:
    // 0x13e0ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e0b0:
    // 0x13e0b0: 0x24c51740  addiu       $a1, $a2, 0x1740
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
label_13e0b4:
    // 0x13e0b4: 0xc136b24  jal         func_4DAC90
label_13e0b8:
    if (ctx->pc == 0x13E0B8u) {
        ctx->pc = 0x13E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0B4u;
        // 0x13e0b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0BCu;
        goto label_13e0bc;
    }
    ctx->pc = 0x13E0B4u;
    SET_GPR_U32(ctx, 31, 0x13E0BCu);
    ctx->pc = 0x13E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0B4u;
    // 0x13e0b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13E0B4u, 0x13E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0BCu;
label_13e0bc:
    // 0x13e0bc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13e0bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e0c0:
    // 0x13e0c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e0c4:
    // 0x13e0c4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x13e0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13e0c8:
    // 0x13e0c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e0cc:
    // 0x13e0cc: 0xc136b18  jal         func_4DAC60
label_13e0d0:
    if (ctx->pc == 0x13E0D0u) {
        ctx->pc = 0x13E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0CCu;
        // 0x13e0d0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0D4u;
        goto label_13e0d4;
    }
    ctx->pc = 0x13E0CCu;
    SET_GPR_U32(ctx, 31, 0x13E0D4u);
    ctx->pc = 0x13E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0CCu;
    // 0x13e0d0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13E0CCu, 0x13E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0D4u;
label_13e0d4:
    // 0x13e0d4: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x13e0d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e0d8:
    // 0x13e0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13e0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e0dc:
    // 0x13e0dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13e0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e0e0:
    // 0x13e0e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e0e4:
    // 0x13e0e4: 0x7e630180  sq          $v1, 0x180($s3)
    ctx->pc = 0x13e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 384), GPR_VEC(ctx, 3));
label_13e0e8:
    // 0x13e0e8: 0xc04fee8  jal         func_13FBA0
label_13e0ec:
    if (ctx->pc == 0x13E0ECu) {
        ctx->pc = 0x13E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0E8u;
        // 0x13e0ec: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0F0u;
        goto label_13e0f0;
    }
    ctx->pc = 0x13E0E8u;
    SET_GPR_U32(ctx, 31, 0x13E0F0u);
    ctx->pc = 0x13E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0E8u;
    // 0x13e0ec: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FBA0u, 0x13E0E8u, 0x13E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0F0u;
label_13e0f0:
    // 0x13e0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13e0f4:
    // 0x13e0f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13e0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e0f8:
    // 0x13e0f8: 0xc0500c2  jal         func_140308
label_13e0fc:
    if (ctx->pc == 0x13E0FCu) {
        ctx->pc = 0x13E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0F8u;
        // 0x13e0fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E100u;
        goto label_13e100;
    }
    ctx->pc = 0x13E0F8u;
    SET_GPR_U32(ctx, 31, 0x13E100u);
    ctx->pc = 0x13E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0F8u;
    // 0x13e0fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140308u, 0x13E0F8u, 0x13E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E100u;
label_13e100:
    // 0x13e100: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13e100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13e104:
    // 0x13e104: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e108:
    // 0x13e108: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13e108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13e10c:
    // 0x13e10c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e110:
    // 0x13e110: 0xc136afa  jal         func_4DABE8
label_13e114:
    if (ctx->pc == 0x13E114u) {
        ctx->pc = 0x13E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E110u;
        // 0x13e114: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E118u;
        goto label_13e118;
    }
    ctx->pc = 0x13E110u;
    SET_GPR_U32(ctx, 31, 0x13E118u);
    ctx->pc = 0x13E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E110u;
    // 0x13e114: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E110u, 0x13E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E118u;
label_13e118:
    // 0x13e118: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x13e118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13e11c:
    // 0x13e11c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e120:
    // 0x13e120: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13e120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e124:
    // 0x13e124: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13e124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e128:
    // 0x13e128: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13e128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e12c:
    // 0x13e12c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13e12cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13e130:
    // 0x13e130: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13e130u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13e134:
    // 0x13e134: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e134u;
    // VWAITQ (Q already resolved in this runtime)
label_13e138:
    // 0x13e138: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13e138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13e13c:
    // 0x13e13c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13e13cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13e140:
    // 0x13e140: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13e140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_13e144:
    // 0x13e144: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13e144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13e148:
    // 0x13e148: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_13e14c:
    // 0x13e14c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e150:
    // 0x13e150: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x13e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_13e154:
    // 0x13e154: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x13e154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_13e158:
    // 0x13e158: 0xc136b24  jal         func_4DAC90
label_13e15c:
    if (ctx->pc == 0x13E15Cu) {
        ctx->pc = 0x13E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E158u;
        // 0x13e15c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E160u;
        goto label_13e160;
    }
    ctx->pc = 0x13E158u;
    SET_GPR_U32(ctx, 31, 0x13E160u);
    ctx->pc = 0x13E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E158u;
    // 0x13e15c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13E158u, 0x13E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E160u;
label_13e160:
    // 0x13e160: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13e160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13e164:
    // 0x13e164: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e168:
    // 0x13e168: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13e168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13e16c:
    // 0x13e16c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e170:
    // 0x13e170: 0xc136b18  jal         func_4DAC60
label_13e174:
    if (ctx->pc == 0x13E174u) {
        ctx->pc = 0x13E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E170u;
        // 0x13e174: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E178u;
        goto label_13e178;
    }
    ctx->pc = 0x13E170u;
    SET_GPR_U32(ctx, 31, 0x13E178u);
    ctx->pc = 0x13E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E170u;
    // 0x13e174: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13E170u, 0x13E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E178u;
label_13e178:
    // 0x13e178: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13e178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13e17c:
    // 0x13e17c: 0xc66c0368  lwc1        $f12, 0x368($s3)
    ctx->pc = 0x13e17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13e180:
    // 0x13e180: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13e184:
    // 0x13e184: 0xc12e34c  jal         func_4B8D30
label_13e188:
    if (ctx->pc == 0x13E188u) {
        ctx->pc = 0x13E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E184u;
        // 0x13e188: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E18Cu;
        goto label_13e18c;
    }
    ctx->pc = 0x13E184u;
    SET_GPR_U32(ctx, 31, 0x13E18Cu);
    ctx->pc = 0x13E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E184u;
    // 0x13e188: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x13E184u, 0x13E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E18Cu;
label_13e18c:
    // 0x13e18c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13e18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13e190:
    // 0x13e190: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x13e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e194:
    // 0x13e194: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e198:
    // 0x13e198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13e198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13e19c:
    // 0x13e19c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13e19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e1a0:
    // 0x13e1a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13e1a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13e1a4:
    // 0x13e1a4: 0xc136afa  jal         func_4DABE8
label_13e1a8:
    if (ctx->pc == 0x13E1A8u) {
        ctx->pc = 0x13E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1A4u;
        // 0x13e1a8: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E1ACu;
        goto label_13e1ac;
    }
    ctx->pc = 0x13E1A4u;
    SET_GPR_U32(ctx, 31, 0x13E1ACu);
    ctx->pc = 0x13E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E1A4u;
    // 0x13e1a8: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E1A4u, 0x13E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E1ACu;
label_13e1ac:
    // 0x13e1ac: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x13e1acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13e1b0:
    // 0x13e1b0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13e1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13e1b4:
    // 0x13e1b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e1b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e1b8:
    // 0x13e1b8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13e1b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e1bc:
    // 0x13e1bc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13e1bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e1c0:
    // 0x13e1c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e1c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e1c4:
    // 0x13e1c4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13e1c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e1c8:
    // 0x13e1c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13e1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e1cc:
    // 0x13e1cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13e1ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e1d0:
    // 0x13e1d0: 0x0  nop
    ctx->pc = 0x13e1d0u;
    // NOP
label_13e1d4:
    // 0x13e1d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e1d8:
    // 0x13e1d8: 0x0  nop
    ctx->pc = 0x13e1d8u;
    // NOP
label_13e1dc:
    // 0x13e1dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_13e1e0:
    if (ctx->pc == 0x13E1E0u) {
        ctx->pc = 0x13E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1DCu;
        // 0x13e1e0: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E1E4u;
        goto label_13e1e4;
    }
    ctx->pc = 0x13E1DCu;
    {
        const bool branch_taken_0x13e1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1DCu;
        // 0x13e1e0: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1dc) {
            ctx->pc = 0x13E1F4u;
            goto label_13e1f4;
        }
    }
    ctx->pc = 0x13E1E4u;
label_13e1e4:
    // 0x13e1e4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13e1e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13e1e8:
    // 0x13e1e8: 0x926303e4  lbu         $v1, 0x3E4($s3)
    ctx->pc = 0x13e1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 996)));
label_13e1ec:
    // 0x13e1ec: 0x7e620310  sq          $v0, 0x310($s3)
    ctx->pc = 0x13e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), GPR_VEC(ctx, 2));
label_13e1f0:
    // 0x13e1f0: 0x2c710001  sltiu       $s1, $v1, 0x1
    ctx->pc = 0x13e1f0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13e1f4:
    // 0x13e1f4: 0x86620352  lh          $v0, 0x352($s3)
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 850)));
label_13e1f8:
    // 0x13e1f8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_13e1fc:
    if (ctx->pc == 0x13E1FCu) {
        ctx->pc = 0x13E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1F8u;
        // 0x13e1fc: 0x86660350  lh          $a2, 0x350($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E200u;
        goto label_13e200;
    }
    ctx->pc = 0x13E1F8u;
    {
        const bool branch_taken_0x13e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1f8) {
            ctx->pc = 0x13E1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E1F8u;
            // 0x13e1fc: 0x86660350  lh          $a2, 0x350($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E26Cu;
            goto label_13e26c;
        }
    }
    ctx->pc = 0x13E200u;
label_13e200:
    // 0x13e200: 0x266601e0  addiu       $a2, $s3, 0x1E0
    ctx->pc = 0x13e200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_13e204:
    // 0x13e204: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e208:
    // 0x13e208: 0xc136afa  jal         func_4DABE8
label_13e20c:
    if (ctx->pc == 0x13E20Cu) {
        ctx->pc = 0x13E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E208u;
        // 0x13e20c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E210u;
        goto label_13e210;
    }
    ctx->pc = 0x13E208u;
    SET_GPR_U32(ctx, 31, 0x13E210u);
    ctx->pc = 0x13E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E208u;
    // 0x13e20c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E208u, 0x13E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E210u;
label_13e210:
    // 0x13e210: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13e210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e214:
    // 0x13e214: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e218:
    // 0x13e218: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13e218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e21c:
    // 0x13e21c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e220:
    // 0x13e220: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13e220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e224:
    // 0x13e224: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13e224u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e228:
    // 0x13e228: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13e228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_13e22c:
    // 0x13e22c: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x13e22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_13e230:
    // 0x13e230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13e230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e234:
    // 0x13e234: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x13e234u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e238:
    // 0x13e238: 0x0  nop
    ctx->pc = 0x13e238u;
    // NOP
label_13e23c:
    // 0x13e23c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e240:
    // 0x13e240: 0x0  nop
    ctx->pc = 0x13e240u;
    // NOP
label_13e244:
    // 0x13e244: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_13e248:
    if (ctx->pc == 0x13E248u) {
        ctx->pc = 0x13E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E244u;
        // 0x13e248: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E24Cu;
        goto label_13e24c;
    }
    ctx->pc = 0x13E244u;
    {
        const bool branch_taken_0x13e244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E244u;
        // 0x13e248: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e244) {
            ctx->pc = 0x13E264u;
            goto label_13e264;
        }
    }
    ctx->pc = 0x13E24Cu;
label_13e24c:
    // 0x13e24c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_13e250:
    // 0x13e250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e254:
    // 0x13e254: 0x7a6201e0  lq          $v0, 0x1E0($s3)
    ctx->pc = 0x13e254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 480)));
label_13e258:
    // 0x13e258: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13e258u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_13e25c:
    // 0x13e25c: 0x10000024  b           . + 4 + (0x24 << 2)
label_13e260:
    if (ctx->pc == 0x13E260u) {
        ctx->pc = 0x13E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E25Cu;
        // 0x13e260: 0xa26303e4  sb          $v1, 0x3E4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 996), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E264u;
        goto label_13e264;
    }
    ctx->pc = 0x13E25Cu;
    {
        const bool branch_taken_0x13e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E25Cu;
        // 0x13e260: 0xa26303e4  sb          $v1, 0x3E4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 996), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e25c) {
            ctx->pc = 0x13E2F0u;
            goto label_13e2f0;
        }
    }
    ctx->pc = 0x13E264u;
label_13e264:
    // 0x13e264: 0x86660350  lh          $a2, 0x350($s3)
    ctx->pc = 0x13e264u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 848)));
label_13e268:
    // 0x13e268: 0x86620352  lh          $v0, 0x352($s3)
    ctx->pc = 0x13e268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 850)));
label_13e26c:
    // 0x13e26c: 0x24c3fffe  addiu       $v1, $a2, -0x2
    ctx->pc = 0x13e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_13e270:
    // 0x13e270: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13e270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13e274:
    // 0x13e274: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_13e278:
    if (ctx->pc == 0x13E278u) {
        ctx->pc = 0x13E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E274u;
        // 0x13e278: 0x926203e4  lbu         $v0, 0x3E4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E27Cu;
        goto label_13e27c;
    }
    ctx->pc = 0x13E274u;
    {
        const bool branch_taken_0x13e274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e274) {
            ctx->pc = 0x13E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E274u;
            // 0x13e278: 0x926203e4  lbu         $v0, 0x3E4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E2F4u;
            goto label_13e2f4;
        }
    }
    ctx->pc = 0x13E27Cu;
label_13e27c:
    // 0x13e27c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13e280:
    // 0x13e280: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13e284:
    // 0x13e284: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x13e284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_13e288:
    // 0x13e288: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e28c:
    // 0x13e28c: 0xc136afa  jal         func_4DABE8
label_13e290:
    if (ctx->pc == 0x13E290u) {
        ctx->pc = 0x13E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E28Cu;
        // 0x13e290: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E294u;
        goto label_13e294;
    }
    ctx->pc = 0x13E28Cu;
    SET_GPR_U32(ctx, 31, 0x13E294u);
    ctx->pc = 0x13E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E28Cu;
    // 0x13e290: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E28Cu, 0x13E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E294u;
label_13e294:
    // 0x13e294: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13e294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13e298:
    // 0x13e298: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e29c:
    // 0x13e29c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13e29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e2a0:
    // 0x13e2a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e2a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e2a4:
    // 0x13e2a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13e2a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e2a8:
    // 0x13e2a8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13e2a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e2ac:
    // 0x13e2ac: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_13e2b0:
    // 0x13e2b0: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x13e2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_13e2b4:
    // 0x13e2b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13e2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e2b8:
    // 0x13e2b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x13e2b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e2bc:
    // 0x13e2bc: 0x0  nop
    ctx->pc = 0x13e2bcu;
    // NOP
label_13e2c0:
    // 0x13e2c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e2c4:
    // 0x13e2c4: 0x0  nop
    ctx->pc = 0x13e2c4u;
    // NOP
label_13e2c8:
    // 0x13e2c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_13e2cc:
    if (ctx->pc == 0x13E2CCu) {
        ctx->pc = 0x13E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2C8u;
        // 0x13e2cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2D0u;
        goto label_13e2d0;
    }
    ctx->pc = 0x13E2C8u;
    {
        const bool branch_taken_0x13e2c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2C8u;
        // 0x13e2cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2c8) {
            ctx->pc = 0x13E2F0u;
            goto label_13e2f0;
        }
    }
    ctx->pc = 0x13E2D0u;
label_13e2d0:
    // 0x13e2d0: 0x86620350  lh          $v0, 0x350($s3)
    ctx->pc = 0x13e2d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 848)));
label_13e2d4:
    // 0x13e2d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e2d8:
    // 0x13e2d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13e2dc:
    // 0x13e2dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_13e2e0:
    // 0x13e2e0: 0x784301d0  lq          $v1, 0x1D0($v0)
    ctx->pc = 0x13e2e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 464)));
label_13e2e4:
    // 0x13e2e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_13e2e8:
    // 0x13e2e8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_13e2ec:
    // 0x13e2ec: 0xa26403e4  sb          $a0, 0x3E4($s3)
    ctx->pc = 0x13e2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 996), (uint8_t)GPR_U32(ctx, 4));
label_13e2f0:
    // 0x13e2f0: 0x926203e4  lbu         $v0, 0x3E4($s3)
    ctx->pc = 0x13e2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 996)));
label_13e2f4:
    // 0x13e2f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e2f8:
    // 0x13e2f8: 0x162300b9  bne         $s1, $v1, . + 4 + (0xB9 << 2)
label_13e2fc:
    if (ctx->pc == 0x13E2FCu) {
        ctx->pc = 0x13E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2F8u;
        // 0x13e2fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E300u;
        goto label_13e300;
    }
    ctx->pc = 0x13E2F8u;
    {
        const bool branch_taken_0x13e2f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x13E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2F8u;
        // 0x13e2fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2f8) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E300u;
label_13e300:
    // 0x13e300: 0x544000b8  bnel        $v0, $zero, . + 4 + (0xB8 << 2)
label_13e304:
    if (ctx->pc == 0x13E304u) {
        ctx->pc = 0x13E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E300u;
        // 0x13e304: 0x7a6202f0  lq          $v0, 0x2F0($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E308u;
        goto label_13e308;
    }
    ctx->pc = 0x13E300u;
    {
        const bool branch_taken_0x13e300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e300) {
            ctx->pc = 0x13E304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E300u;
            // 0x13e304: 0x7a6202f0  lq          $v0, 0x2F0($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E5E4u;
            goto label_13e5e4;
        }
    }
    ctx->pc = 0x13E308u;
label_13e308:
    // 0x13e308: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13e30c:
    // 0x13e30c: 0xc0e87c0  jal         func_3A1F00
label_13e310:
    if (ctx->pc == 0x13E310u) {
        ctx->pc = 0x13E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E30Cu;
        // 0x13e310: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E314u;
        goto label_13e314;
    }
    ctx->pc = 0x13E30Cu;
    SET_GPR_U32(ctx, 31, 0x13E314u);
    ctx->pc = 0x13E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E30Cu;
    // 0x13e310: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x13E30Cu, 0x13E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E314u;
label_13e314:
    // 0x13e314: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13e314u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13e318:
    // 0x13e318: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e31c:
    // 0x13e31c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13e31cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13e320:
    // 0x13e320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e324:
    // 0x13e324: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e328:
    // 0x13e328: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13e328u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e32c:
    // 0x13e32c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13e32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e330:
    // 0x13e330: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e334:
    // 0x13e334: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13e334u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e338:
    // 0x13e338: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x13e338u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13e33c:
    // 0x13e33c: 0xc136afa  jal         func_4DABE8
label_13e340:
    if (ctx->pc == 0x13E340u) {
        ctx->pc = 0x13E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E33Cu;
        // 0x13e340: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E344u;
        goto label_13e344;
    }
    ctx->pc = 0x13E33Cu;
    SET_GPR_U32(ctx, 31, 0x13E344u);
    ctx->pc = 0x13E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E33Cu;
    // 0x13e340: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E33Cu, 0x13E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E344u;
label_13e344:
    // 0x13e344: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13e344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e348:
    // 0x13e348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e34c:
    // 0x13e34c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e34cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e350:
    // 0x13e350: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13e350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e354:
    // 0x13e354: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e358:
    // 0x13e358: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13e358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e35c:
    // 0x13e35c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e35cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13e360:
    // 0x13e360: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e360u;
    // VWAITQ (Q already resolved in this runtime)
label_13e364:
    // 0x13e364: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13e364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e368:
    // 0x13e368: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13e368u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e36c:
    // 0x13e36c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13e370:
    // 0x13e370: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x13e370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13e374:
    // 0x13e374: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13e374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e378:
    // 0x13e378: 0xc136afa  jal         func_4DABE8
label_13e37c:
    if (ctx->pc == 0x13E37Cu) {
        ctx->pc = 0x13E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E378u;
        // 0x13e37c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E380u;
        goto label_13e380;
    }
    ctx->pc = 0x13E378u;
    SET_GPR_U32(ctx, 31, 0x13E380u);
    ctx->pc = 0x13E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E378u;
    // 0x13e37c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E378u, 0x13E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E380u;
label_13e380:
    // 0x13e380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13e380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e384:
    // 0x13e384: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x13e384u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13e388:
    // 0x13e388: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13e388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e38c:
    // 0x13e38c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13e38cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e390:
    // 0x13e390: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x13e390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e394:
    // 0x13e394: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13e394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e398:
    // 0x13e398: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x13e398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e39c:
    // 0x13e39c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13e39cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13e3a0:
    // 0x13e3a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e3a0u;
    // VWAITQ (Q already resolved in this runtime)
label_13e3a4:
    // 0x13e3a4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13e3a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13e3a8:
    // 0x13e3a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13e3a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13e3ac:
    // 0x13e3ac: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13e3b0:
    // 0x13e3b0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x13e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_13e3b4:
    // 0x13e3b4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x13e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_13e3b8:
    // 0x13e3b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_13e3bc:
    if (ctx->pc == 0x13E3BCu) {
        ctx->pc = 0x13E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3B8u;
        // 0x13e3bc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3C0u;
        goto label_13e3c0;
    }
    ctx->pc = 0x13E3B8u;
    {
        const bool branch_taken_0x13e3b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3B8u;
        // 0x13e3bc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3b8) {
            ctx->pc = 0x13E3CCu;
            goto label_13e3cc;
        }
    }
    ctx->pc = 0x13E3C0u;
label_13e3c0:
    // 0x13e3c0: 0xc66001a4  lwc1        $f0, 0x1A4($s3)
    ctx->pc = 0x13e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e3c4:
    // 0x13e3c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_13e3c8:
    if (ctx->pc == 0x13E3C8u) {
        ctx->pc = 0x13E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3C4u;
        // 0x13e3c8: 0x4600a040  add.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3CCu;
        goto label_13e3cc;
    }
    ctx->pc = 0x13E3C4u;
    {
        const bool branch_taken_0x13e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3C4u;
        // 0x13e3c8: 0x4600a040  add.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3c4) {
            ctx->pc = 0x13E3D0u;
            goto label_13e3d0;
        }
    }
    ctx->pc = 0x13E3CCu;
label_13e3cc:
    // 0x13e3cc: 0xc66101a4  lwc1        $f1, 0x1A4($s3)
    ctx->pc = 0x13e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e3d0:
    // 0x13e3d0: 0xc66001a0  lwc1        $f0, 0x1A0($s3)
    ctx->pc = 0x13e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e3d4:
    // 0x13e3d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e3d8:
    // 0x13e3d8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x13e3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_13e3dc:
    // 0x13e3dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13e3e0:
    // 0x13e3e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13e3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13e3e4:
    // 0x13e3e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13e3e8:
    // 0x13e3e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13e3ec:
    // 0x13e3ec: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x13e3ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_13e3f0:
    // 0x13e3f0: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x13e3f0u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
label_13e3f4:
    // 0x13e3f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13e3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13e3f8:
    // 0x13e3f8: 0xc136b24  jal         func_4DAC90
label_13e3fc:
    if (ctx->pc == 0x13E3FCu) {
        ctx->pc = 0x13E400u;
        goto label_13e400;
    }
    ctx->pc = 0x13E3F8u;
    SET_GPR_U32(ctx, 31, 0x13E400u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13E3F8u, 0x13E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E400u;
label_13e400:
    // 0x13e400: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13e400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13e404:
    // 0x13e404: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e408:
    // 0x13e408: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x13e408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13e40c:
    // 0x13e40c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e410:
    // 0x13e410: 0xc136b18  jal         func_4DAC60
label_13e414:
    if (ctx->pc == 0x13E414u) {
        ctx->pc = 0x13E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E410u;
        // 0x13e414: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E418u;
        goto label_13e418;
    }
    ctx->pc = 0x13E410u;
    SET_GPR_U32(ctx, 31, 0x13E418u);
    ctx->pc = 0x13E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E410u;
    // 0x13e414: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13E410u, 0x13E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E418u;
label_13e418:
    // 0x13e418: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13e418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13e41c:
    // 0x13e41c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e420:
    // 0x13e420: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13e420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e424:
    // 0x13e424: 0x7e6202f0  sq          $v0, 0x2F0($s3)
    ctx->pc = 0x13e424u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 752), GPR_VEC(ctx, 2));
label_13e428:
    // 0x13e428: 0xc04fee8  jal         func_13FBA0
label_13e42c:
    if (ctx->pc == 0x13E42Cu) {
        ctx->pc = 0x13E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E428u;
        // 0x13e42c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E430u;
        goto label_13e430;
    }
    ctx->pc = 0x13E428u;
    SET_GPR_U32(ctx, 31, 0x13E430u);
    ctx->pc = 0x13E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E428u;
    // 0x13e42c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FBA0u, 0x13E428u, 0x13E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E430u;
label_13e430:
    // 0x13e430: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x13e430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e434:
    // 0x13e434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13e434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e438:
    // 0x13e438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e43c:
    // 0x13e43c: 0xc0500c2  jal         func_140308
label_13e440:
    if (ctx->pc == 0x13E440u) {
        ctx->pc = 0x13E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E43Cu;
        // 0x13e440: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E444u;
        goto label_13e444;
    }
    ctx->pc = 0x13E43Cu;
    SET_GPR_U32(ctx, 31, 0x13E444u);
    ctx->pc = 0x13E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E43Cu;
    // 0x13e440: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140308u, 0x13E43Cu, 0x13E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E444u;
label_13e444:
    // 0x13e444: 0xc66003cc  lwc1        $f0, 0x3CC($s3)
    ctx->pc = 0x13e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e448:
    // 0x13e448: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13e448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e44c:
    // 0x13e44c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13e44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e450:
    // 0x13e450: 0x0  nop
    ctx->pc = 0x13e450u;
    // NOP
label_13e454:
    // 0x13e454: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_13e458:
    if (ctx->pc == 0x13E458u) {
        ctx->pc = 0x13E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E454u;
        // 0x13e458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E45Cu;
        goto label_13e45c;
    }
    ctx->pc = 0x13E454u;
    {
        const bool branch_taken_0x13e454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E454u;
        // 0x13e458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e454) {
            ctx->pc = 0x13E548u;
            goto label_13e548;
        }
    }
    ctx->pc = 0x13E45Cu;
label_13e45c:
    // 0x13e45c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13e460:
    // 0x13e460: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13e464:
    // 0x13e464: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13e468:
    // 0x13e468: 0x40f809  jalr        $v0
label_13e46c:
    if (ctx->pc == 0x13E46Cu) {
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E470u;
        goto label_13e470;
    }
    ctx->pc = 0x13E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E470u);
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E468u, 0x13E470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E470u;
label_13e470:
    // 0x13e470: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13e474:
    // 0x13e474: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e478:
    // 0x13e478: 0xc136afa  jal         func_4DABE8
label_13e47c:
    if (ctx->pc == 0x13E47Cu) {
        ctx->pc = 0x13E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E478u;
        // 0x13e47c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E480u;
        goto label_13e480;
    }
    ctx->pc = 0x13E478u;
    SET_GPR_U32(ctx, 31, 0x13E480u);
    ctx->pc = 0x13E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E478u;
    // 0x13e47c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E478u, 0x13E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E480u;
label_13e480:
    // 0x13e480: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13e480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13e484:
    // 0x13e484: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13e484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13e488:
    // 0x13e488: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_13e48c:
    // 0x13e48c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13e490:
    // 0x13e490: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13e494:
    // 0x13e494: 0x40f809  jalr        $v0
label_13e498:
    if (ctx->pc == 0x13E498u) {
        ctx->pc = 0x13E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E494u;
        // 0x13e498: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E49Cu;
        goto label_13e49c;
    }
    ctx->pc = 0x13E494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E49Cu);
        ctx->pc = 0x13E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E494u;
        // 0x13e498: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E494u, 0x13E49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E49Cu;
label_13e49c:
    // 0x13e49c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e4a0:
    // 0x13e4a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e4a4:
    // 0x13e4a4: 0xc136afa  jal         func_4DABE8
label_13e4a8:
    if (ctx->pc == 0x13E4A8u) {
        ctx->pc = 0x13E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4A4u;
        // 0x13e4a8: 0x26660330  addiu       $a2, $s3, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4ACu;
        goto label_13e4ac;
    }
    ctx->pc = 0x13E4A4u;
    SET_GPR_U32(ctx, 31, 0x13E4ACu);
    ctx->pc = 0x13E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4A4u;
    // 0x13e4a8: 0x26660330  addiu       $a2, $s3, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E4A4u, 0x13E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4ACu;
label_13e4ac:
    // 0x13e4ac: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13e4acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13e4b0:
    // 0x13e4b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13e4b4:
    // 0x13e4b4: 0xc66c03cc  lwc1        $f12, 0x3CC($s3)
    ctx->pc = 0x13e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13e4b8:
    // 0x13e4b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e4bc:
    // 0x13e4bc: 0xc136b24  jal         func_4DAC90
label_13e4c0:
    if (ctx->pc == 0x13E4C0u) {
        ctx->pc = 0x13E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4BCu;
        // 0x13e4c0: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4C4u;
        goto label_13e4c4;
    }
    ctx->pc = 0x13E4BCu;
    SET_GPR_U32(ctx, 31, 0x13E4C4u);
    ctx->pc = 0x13E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4BCu;
    // 0x13e4c0: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13E4BCu, 0x13E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4C4u;
label_13e4c4:
    // 0x13e4c4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x13e4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13e4c8:
    // 0x13e4c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13e4cc:
    // 0x13e4cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e4d0:
    // 0x13e4d0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13e4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e4d4:
    // 0x13e4d4: 0xc136b18  jal         func_4DAC60
label_13e4d8:
    if (ctx->pc == 0x13E4D8u) {
        ctx->pc = 0x13E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4D4u;
        // 0x13e4d8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4DCu;
        goto label_13e4dc;
    }
    ctx->pc = 0x13E4D4u;
    SET_GPR_U32(ctx, 31, 0x13E4DCu);
    ctx->pc = 0x13E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4D4u;
    // 0x13e4d8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13E4D4u, 0x13E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4DCu;
label_13e4dc:
    // 0x13e4dc: 0xc66103cc  lwc1        $f1, 0x3CC($s3)
    ctx->pc = 0x13e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e4e0:
    // 0x13e4e0: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x13e4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_13e4e4:
    // 0x13e4e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x13e4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_13e4e8:
    // 0x13e4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e4ec:
    // 0x13e4ec: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13e4ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e4f0:
    // 0x13e4f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13e4f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13e4f4:
    // 0x13e4f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e4f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e4f8:
    // 0x13e4f8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13e4f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e4fc:
    // 0x13e4fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e500:
    // 0x13e500: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13e500u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e504:
    // 0x13e504: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x13e504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_13e508:
    // 0x13e508: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x13e508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_13e50c:
    // 0x13e50c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13e50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13e510:
    // 0x13e510: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13e510u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e514:
    // 0x13e514: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x13e514u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13e518:
    // 0x13e518: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x13e518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e51c:
    // 0x13e51c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x13e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_13e520:
    // 0x13e520: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_13e524:
    if (ctx->pc == 0x13E524u) {
        ctx->pc = 0x13E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E520u;
        // 0x13e524: 0xe66103cc  swc1        $f1, 0x3CC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E528u;
        goto label_13e528;
    }
    ctx->pc = 0x13E520u;
    {
        const bool branch_taken_0x13e520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E520u;
        // 0x13e524: 0xe66103cc  swc1        $f1, 0x3CC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e520) {
            ctx->pc = 0x13E544u;
            goto label_13e544;
        }
    }
    ctx->pc = 0x13E528u;
label_13e528:
    // 0x13e528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13e52c:
    // 0x13e52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e530:
    // 0x13e530: 0x0  nop
    ctx->pc = 0x13e530u;
    // NOP
label_13e534:
    // 0x13e534: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e538:
    // 0x13e538: 0x0  nop
    ctx->pc = 0x13e538u;
    // NOP
label_13e53c:
    // 0x13e53c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_13e540:
    if (ctx->pc == 0x13E540u) {
        ctx->pc = 0x13E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E53Cu;
        // 0x13e540: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E544u;
        goto label_13e544;
    }
    ctx->pc = 0x13E53Cu;
    {
        const bool branch_taken_0x13e53c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e53c) {
            ctx->pc = 0x13E540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E53Cu;
            // 0x13e540: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E548u;
            goto label_13e548;
        }
    }
    ctx->pc = 0x13E544u;
label_13e544:
    // 0x13e544: 0xe67403cc  swc1        $f20, 0x3CC($s3)
    ctx->pc = 0x13e544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 972), bits); }
label_13e548:
    // 0x13e548: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e54c:
    // 0x13e54c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13e54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e550:
    // 0x13e550: 0xc136afa  jal         func_4DABE8
label_13e554:
    if (ctx->pc == 0x13E554u) {
        ctx->pc = 0x13E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E550u;
        // 0x13e554: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E558u;
        goto label_13e558;
    }
    ctx->pc = 0x13E550u;
    SET_GPR_U32(ctx, 31, 0x13E558u);
    ctx->pc = 0x13E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E550u;
    // 0x13e554: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E550u, 0x13E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E558u;
label_13e558:
    // 0x13e558: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x13e558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13e55c:
    // 0x13e55c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e560:
    // 0x13e560: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13e560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e564:
    // 0x13e564: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13e564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e568:
    // 0x13e568: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13e568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13e56c:
    // 0x13e56c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13e56cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13e570:
    // 0x13e570: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13e570u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13e574:
    // 0x13e574: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e574u;
    // VWAITQ (Q already resolved in this runtime)
label_13e578:
    // 0x13e578: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13e578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13e57c:
    // 0x13e57c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13e57cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13e580:
    // 0x13e580: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13e580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_13e584:
    // 0x13e584: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13e584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13e588:
    // 0x13e588: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_13e58c:
    // 0x13e58c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e590:
    // 0x13e590: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x13e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_13e594:
    // 0x13e594: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x13e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_13e598:
    // 0x13e598: 0xc136b24  jal         func_4DAC90
label_13e59c:
    if (ctx->pc == 0x13E59Cu) {
        ctx->pc = 0x13E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E598u;
        // 0x13e59c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5A0u;
        goto label_13e5a0;
    }
    ctx->pc = 0x13E598u;
    SET_GPR_U32(ctx, 31, 0x13E5A0u);
    ctx->pc = 0x13E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E598u;
    // 0x13e59c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13E598u, 0x13E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E5A0u;
label_13e5a0:
    // 0x13e5a0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13e5a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13e5a4:
    // 0x13e5a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e5a8:
    // 0x13e5a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e5ac:
    // 0x13e5ac: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13e5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13e5b0:
    // 0x13e5b0: 0xc136b18  jal         func_4DAC60
label_13e5b4:
    if (ctx->pc == 0x13E5B4u) {
        ctx->pc = 0x13E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5B0u;
        // 0x13e5b4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5B8u;
        goto label_13e5b8;
    }
    ctx->pc = 0x13E5B0u;
    SET_GPR_U32(ctx, 31, 0x13E5B8u);
    ctx->pc = 0x13E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5B0u;
    // 0x13e5b4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13E5B0u, 0x13E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E5B8u;
label_13e5b8:
    // 0x13e5b8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13e5b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13e5bc:
    // 0x13e5bc: 0xc66c0368  lwc1        $f12, 0x368($s3)
    ctx->pc = 0x13e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13e5c0:
    // 0x13e5c0: 0x7e6202f0  sq          $v0, 0x2F0($s3)
    ctx->pc = 0x13e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 752), GPR_VEC(ctx, 2));
label_13e5c4:
    // 0x13e5c4: 0xc12e34c  jal         func_4B8D30
label_13e5c8:
    if (ctx->pc == 0x13E5C8u) {
        ctx->pc = 0x13E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5C4u;
        // 0x13e5c8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5CCu;
        goto label_13e5cc;
    }
    ctx->pc = 0x13E5C4u;
    SET_GPR_U32(ctx, 31, 0x13E5CCu);
    ctx->pc = 0x13E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5C4u;
    // 0x13e5c8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x13E5C4u, 0x13E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E5CCu;
label_13e5cc:
    // 0x13e5cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13e5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13e5d0:
    // 0x13e5d0: 0xc66102f8  lwc1        $f1, 0x2F8($s3)
    ctx->pc = 0x13e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e5d4:
    // 0x13e5d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13e5d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13e5d8:
    // 0x13e5d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_13e5dc:
    if (ctx->pc == 0x13E5DCu) {
        ctx->pc = 0x13E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5D8u;
        // 0x13e5dc: 0xe66102f8  swc1        $f1, 0x2F8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 760), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5E0u;
        goto label_13e5e0;
    }
    ctx->pc = 0x13E5D8u;
    {
        const bool branch_taken_0x13e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5D8u;
        // 0x13e5dc: 0xe66102f8  swc1        $f1, 0x2F8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5d8) {
            ctx->pc = 0x13E5E8u;
            goto label_13e5e8;
        }
    }
    ctx->pc = 0x13E5E0u;
label_13e5e0:
    // 0x13e5e0: 0x7a6202f0  lq          $v0, 0x2F0($s3)
    ctx->pc = 0x13e5e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
label_13e5e4:
    // 0x13e5e4: 0x7e620310  sq          $v0, 0x310($s3)
    ctx->pc = 0x13e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), GPR_VEC(ctx, 2));
label_13e5e8:
    // 0x13e5e8: 0xc6620358  lwc1        $f2, 0x358($s3)
    ctx->pc = 0x13e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e5ec:
    // 0x13e5ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13e5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e5f0:
    // 0x13e5f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13e5f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e5f4:
    // 0x13e5f4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x13e5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e5f8:
    // 0x13e5f8: 0x0  nop
    ctx->pc = 0x13e5f8u;
    // NOP
label_13e5fc:
    // 0x13e5fc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_13e600:
    if (ctx->pc == 0x13E600u) {
        ctx->pc = 0x13E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5FCu;
        // 0x13e600: 0x7e6202e0  sq          $v0, 0x2E0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E604u;
        goto label_13e604;
    }
    ctx->pc = 0x13E5FCu;
    {
        const bool branch_taken_0x13e5fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5FCu;
        // 0x13e600: 0x7e6202e0  sq          $v0, 0x2E0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5fc) {
            ctx->pc = 0x13E640u;
            goto label_13e640;
        }
    }
    ctx->pc = 0x13E604u;
label_13e604:
    // 0x13e604: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x13e604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
label_13e608:
    // 0x13e608: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x13e608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_13e60c:
    // 0x13e60c: 0x24c44b00  addiu       $a0, $a2, 0x4B00
    ctx->pc = 0x13e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_13e610:
    // 0x13e610: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x13e610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e614:
    // 0x13e614: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_13e618:
    // 0x13e618: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13e61c:
    // 0x13e61c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13e620:
    // 0x13e620: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x13e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e624:
    // 0x13e624: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13e624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13e628:
    // 0x13e628: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13e628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e62c:
    // 0x13e62c: 0x0  nop
    ctx->pc = 0x13e62cu;
    // NOP
label_13e630:
    // 0x13e630: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_13e634:
    if (ctx->pc == 0x13E634u) {
        ctx->pc = 0x13E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E630u;
        // 0x13e634: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E638u;
        goto label_13e638;
    }
    ctx->pc = 0x13E630u;
    {
        const bool branch_taken_0x13e630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e630) {
            ctx->pc = 0x13E634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E630u;
            // 0x13e634: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E644u;
            goto label_13e644;
        }
    }
    ctx->pc = 0x13E638u;
label_13e638:
    // 0x13e638: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x13e638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_13e63c:
    // 0x13e63c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x13e63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_13e640:
    // 0x13e640: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13e644:
    // 0x13e644: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e648:
    // 0x13e648: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x13e648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_13e64c:
    // 0x13e64c: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_13e650:
    // 0x13e650: 0x60f809  jalr        $v1
label_13e654:
    if (ctx->pc == 0x13E654u) {
        ctx->pc = 0x13E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E650u;
        // 0x13e654: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E658u;
        goto label_13e658;
    }
    ctx->pc = 0x13E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13E658u);
        ctx->pc = 0x13E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E650u;
        // 0x13e654: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E650u, 0x13E658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E658u;
label_13e658:
    // 0x13e658: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13e658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e65c:
    // 0x13e65c: 0xc0484a6  jal         func_121298
label_13e660:
    if (ctx->pc == 0x13E660u) {
        ctx->pc = 0x13E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E65Cu;
        // 0x13e660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E664u;
        goto label_13e664;
    }
    ctx->pc = 0x13E65Cu;
    SET_GPR_U32(ctx, 31, 0x13E664u);
    ctx->pc = 0x13E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E65Cu;
    // 0x13e660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x13E65Cu, 0x13E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E664u;
label_13e664:
    // 0x13e664: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13e668:
    // 0x13e668: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13e668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13e66c:
    // 0x13e66c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13e670:
    // 0x13e670: 0x40f809  jalr        $v0
label_13e674:
    if (ctx->pc == 0x13E674u) {
        ctx->pc = 0x13E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E670u;
        // 0x13e674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E678u;
        goto label_13e678;
    }
    ctx->pc = 0x13E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E678u);
        ctx->pc = 0x13E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E670u;
        // 0x13e674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E670u, 0x13E678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E678u;
label_13e678:
    // 0x13e678: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13e678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13e67c:
    // 0x13e67c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x13e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13e680:
    // 0x13e680: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x13e680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_13e684:
    // 0x13e684: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x13e684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_13e688:
    // 0x13e688: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x13e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_13e68c:
    // 0x13e68c: 0x40f809  jalr        $v0
label_13e690:
    if (ctx->pc == 0x13E690u) {
        ctx->pc = 0x13E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E68Cu;
        // 0x13e690: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E694u;
        goto label_13e694;
    }
    ctx->pc = 0x13E68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E694u);
        ctx->pc = 0x13E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E68Cu;
        // 0x13e690: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E68Cu, 0x13E694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E694u;
label_13e694:
    // 0x13e694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e698:
    // 0x13e698: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13e698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e69c:
    // 0x13e69c: 0xc0cdc0a  jal         func_337028
label_13e6a0:
    if (ctx->pc == 0x13E6A0u) {
        ctx->pc = 0x13E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E69Cu;
        // 0x13e6a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6A4u;
        goto label_13e6a4;
    }
    ctx->pc = 0x13E69Cu;
    SET_GPR_U32(ctx, 31, 0x13E6A4u);
    ctx->pc = 0x13E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E69Cu;
    // 0x13e6a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x13E69Cu, 0x13E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6A4u;
label_13e6a4:
    // 0x13e6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13e6a8:
    if (ctx->pc == 0x13E6A8u) {
        ctx->pc = 0x13E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A4u;
        // 0x13e6a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6ACu;
        goto label_13e6ac;
    }
    ctx->pc = 0x13E6A4u;
    {
        const bool branch_taken_0x13e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A4u;
        // 0x13e6a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6a4) {
            ctx->pc = 0x13E6BCu;
            goto label_13e6bc;
        }
    }
    ctx->pc = 0x13E6ACu;
label_13e6ac:
    // 0x13e6ac: 0xc0cd972  jal         func_3365C8
label_13e6b0:
    if (ctx->pc == 0x13E6B0u) {
        ctx->pc = 0x13E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6ACu;
        // 0x13e6b0: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6B4u;
        goto label_13e6b4;
    }
    ctx->pc = 0x13E6ACu;
    SET_GPR_U32(ctx, 31, 0x13E6B4u);
    ctx->pc = 0x13E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6ACu;
    // 0x13e6b0: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x13E6ACu, 0x13E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6B4u;
label_13e6b4:
    // 0x13e6b4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13e6b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13e6b8:
    // 0x13e6b8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x13e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_13e6bc:
    // 0x13e6bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13e6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e6c0:
    // 0x13e6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e6c4:
    // 0x13e6c4: 0xc048314  jal         func_120C50
label_13e6c8:
    if (ctx->pc == 0x13E6C8u) {
        ctx->pc = 0x13E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C4u;
        // 0x13e6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6CCu;
        goto label_13e6cc;
    }
    ctx->pc = 0x13E6C4u;
    SET_GPR_U32(ctx, 31, 0x13E6CCu);
    ctx->pc = 0x13E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6C4u;
    // 0x13e6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x13E6C4u, 0x13E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6CCu;
label_13e6cc:
    // 0x13e6cc: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x13e6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_13e6d0:
    // 0x13e6d0: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x13e6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_13e6d4:
    // 0x13e6d4: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x13e6d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_13e6d8:
    // 0x13e6d8: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x13e6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_13e6dc:
    // 0x13e6dc: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x13e6dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13e6e0:
    // 0x13e6e0: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x13e6e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_13e6e4:
    // 0x13e6e4: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x13e6e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_13e6e8:
    // 0x13e6e8: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x13e6e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_13e6ec:
    // 0x13e6ec: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x13e6ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_13e6f0:
    // 0x13e6f0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x13e6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_13e6f4:
    // 0x13e6f4: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x13e6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13e6f8:
    // 0x13e6f8: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x13e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13e6fc:
    // 0x13e6fc: 0x3e00008  jr          $ra
label_13e700:
    if (ctx->pc == 0x13E700u) {
        ctx->pc = 0x13E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6FCu;
        // 0x13e700: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E704u;
        goto label_13e704;
    }
    ctx->pc = 0x13E6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6FCu;
        // 0x13e700: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E704u;
label_13e704:
    // 0x13e704: 0x0  nop
    ctx->pc = 0x13e704u;
    // NOP
    ctx->pc = 0x13e708u;
}
