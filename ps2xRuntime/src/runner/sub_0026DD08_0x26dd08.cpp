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

// Function: sub_0026DD08
// Address: 0x26dd08 - 0x26e5f8
void sub_0026DD08_0x26dd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DD08_0x26dd08");
#endif

    switch (ctx->pc) {
        case 0x26dd08u: goto label_26dd08;
        case 0x26dd0cu: goto label_26dd0c;
        case 0x26dd10u: goto label_26dd10;
        case 0x26dd14u: goto label_26dd14;
        case 0x26dd18u: goto label_26dd18;
        case 0x26dd1cu: goto label_26dd1c;
        case 0x26dd20u: goto label_26dd20;
        case 0x26dd24u: goto label_26dd24;
        case 0x26dd28u: goto label_26dd28;
        case 0x26dd2cu: goto label_26dd2c;
        case 0x26dd30u: goto label_26dd30;
        case 0x26dd34u: goto label_26dd34;
        case 0x26dd38u: goto label_26dd38;
        case 0x26dd3cu: goto label_26dd3c;
        case 0x26dd40u: goto label_26dd40;
        case 0x26dd44u: goto label_26dd44;
        case 0x26dd48u: goto label_26dd48;
        case 0x26dd4cu: goto label_26dd4c;
        case 0x26dd50u: goto label_26dd50;
        case 0x26dd54u: goto label_26dd54;
        case 0x26dd58u: goto label_26dd58;
        case 0x26dd5cu: goto label_26dd5c;
        case 0x26dd60u: goto label_26dd60;
        case 0x26dd64u: goto label_26dd64;
        case 0x26dd68u: goto label_26dd68;
        case 0x26dd6cu: goto label_26dd6c;
        case 0x26dd70u: goto label_26dd70;
        case 0x26dd74u: goto label_26dd74;
        case 0x26dd78u: goto label_26dd78;
        case 0x26dd7cu: goto label_26dd7c;
        case 0x26dd80u: goto label_26dd80;
        case 0x26dd84u: goto label_26dd84;
        case 0x26dd88u: goto label_26dd88;
        case 0x26dd8cu: goto label_26dd8c;
        case 0x26dd90u: goto label_26dd90;
        case 0x26dd94u: goto label_26dd94;
        case 0x26dd98u: goto label_26dd98;
        case 0x26dd9cu: goto label_26dd9c;
        case 0x26dda0u: goto label_26dda0;
        case 0x26dda4u: goto label_26dda4;
        case 0x26dda8u: goto label_26dda8;
        case 0x26ddacu: goto label_26ddac;
        case 0x26ddb0u: goto label_26ddb0;
        case 0x26ddb4u: goto label_26ddb4;
        case 0x26ddb8u: goto label_26ddb8;
        case 0x26ddbcu: goto label_26ddbc;
        case 0x26ddc0u: goto label_26ddc0;
        case 0x26ddc4u: goto label_26ddc4;
        case 0x26ddc8u: goto label_26ddc8;
        case 0x26ddccu: goto label_26ddcc;
        case 0x26ddd0u: goto label_26ddd0;
        case 0x26ddd4u: goto label_26ddd4;
        case 0x26ddd8u: goto label_26ddd8;
        case 0x26dddcu: goto label_26dddc;
        case 0x26dde0u: goto label_26dde0;
        case 0x26dde4u: goto label_26dde4;
        case 0x26dde8u: goto label_26dde8;
        case 0x26ddecu: goto label_26ddec;
        case 0x26ddf0u: goto label_26ddf0;
        case 0x26ddf4u: goto label_26ddf4;
        case 0x26ddf8u: goto label_26ddf8;
        case 0x26ddfcu: goto label_26ddfc;
        case 0x26de00u: goto label_26de00;
        case 0x26de04u: goto label_26de04;
        case 0x26de08u: goto label_26de08;
        case 0x26de0cu: goto label_26de0c;
        case 0x26de10u: goto label_26de10;
        case 0x26de14u: goto label_26de14;
        case 0x26de18u: goto label_26de18;
        case 0x26de1cu: goto label_26de1c;
        case 0x26de20u: goto label_26de20;
        case 0x26de24u: goto label_26de24;
        case 0x26de28u: goto label_26de28;
        case 0x26de2cu: goto label_26de2c;
        case 0x26de30u: goto label_26de30;
        case 0x26de34u: goto label_26de34;
        case 0x26de38u: goto label_26de38;
        case 0x26de3cu: goto label_26de3c;
        case 0x26de40u: goto label_26de40;
        case 0x26de44u: goto label_26de44;
        case 0x26de48u: goto label_26de48;
        case 0x26de4cu: goto label_26de4c;
        case 0x26de50u: goto label_26de50;
        case 0x26de54u: goto label_26de54;
        case 0x26de58u: goto label_26de58;
        case 0x26de5cu: goto label_26de5c;
        case 0x26de60u: goto label_26de60;
        case 0x26de64u: goto label_26de64;
        case 0x26de68u: goto label_26de68;
        case 0x26de6cu: goto label_26de6c;
        case 0x26de70u: goto label_26de70;
        case 0x26de74u: goto label_26de74;
        case 0x26de78u: goto label_26de78;
        case 0x26de7cu: goto label_26de7c;
        case 0x26de80u: goto label_26de80;
        case 0x26de84u: goto label_26de84;
        case 0x26de88u: goto label_26de88;
        case 0x26de8cu: goto label_26de8c;
        case 0x26de90u: goto label_26de90;
        case 0x26de94u: goto label_26de94;
        case 0x26de98u: goto label_26de98;
        case 0x26de9cu: goto label_26de9c;
        case 0x26dea0u: goto label_26dea0;
        case 0x26dea4u: goto label_26dea4;
        case 0x26dea8u: goto label_26dea8;
        case 0x26deacu: goto label_26deac;
        case 0x26deb0u: goto label_26deb0;
        case 0x26deb4u: goto label_26deb4;
        case 0x26deb8u: goto label_26deb8;
        case 0x26debcu: goto label_26debc;
        case 0x26dec0u: goto label_26dec0;
        case 0x26dec4u: goto label_26dec4;
        case 0x26dec8u: goto label_26dec8;
        case 0x26deccu: goto label_26decc;
        case 0x26ded0u: goto label_26ded0;
        case 0x26ded4u: goto label_26ded4;
        case 0x26ded8u: goto label_26ded8;
        case 0x26dedcu: goto label_26dedc;
        case 0x26dee0u: goto label_26dee0;
        case 0x26dee4u: goto label_26dee4;
        case 0x26dee8u: goto label_26dee8;
        case 0x26deecu: goto label_26deec;
        case 0x26def0u: goto label_26def0;
        case 0x26def4u: goto label_26def4;
        case 0x26def8u: goto label_26def8;
        case 0x26defcu: goto label_26defc;
        case 0x26df00u: goto label_26df00;
        case 0x26df04u: goto label_26df04;
        case 0x26df08u: goto label_26df08;
        case 0x26df0cu: goto label_26df0c;
        case 0x26df10u: goto label_26df10;
        case 0x26df14u: goto label_26df14;
        case 0x26df18u: goto label_26df18;
        case 0x26df1cu: goto label_26df1c;
        case 0x26df20u: goto label_26df20;
        case 0x26df24u: goto label_26df24;
        case 0x26df28u: goto label_26df28;
        case 0x26df2cu: goto label_26df2c;
        case 0x26df30u: goto label_26df30;
        case 0x26df34u: goto label_26df34;
        case 0x26df38u: goto label_26df38;
        case 0x26df3cu: goto label_26df3c;
        case 0x26df40u: goto label_26df40;
        case 0x26df44u: goto label_26df44;
        case 0x26df48u: goto label_26df48;
        case 0x26df4cu: goto label_26df4c;
        case 0x26df50u: goto label_26df50;
        case 0x26df54u: goto label_26df54;
        case 0x26df58u: goto label_26df58;
        case 0x26df5cu: goto label_26df5c;
        case 0x26df60u: goto label_26df60;
        case 0x26df64u: goto label_26df64;
        case 0x26df68u: goto label_26df68;
        case 0x26df6cu: goto label_26df6c;
        case 0x26df70u: goto label_26df70;
        case 0x26df74u: goto label_26df74;
        case 0x26df78u: goto label_26df78;
        case 0x26df7cu: goto label_26df7c;
        case 0x26df80u: goto label_26df80;
        case 0x26df84u: goto label_26df84;
        case 0x26df88u: goto label_26df88;
        case 0x26df8cu: goto label_26df8c;
        case 0x26df90u: goto label_26df90;
        case 0x26df94u: goto label_26df94;
        case 0x26df98u: goto label_26df98;
        case 0x26df9cu: goto label_26df9c;
        case 0x26dfa0u: goto label_26dfa0;
        case 0x26dfa4u: goto label_26dfa4;
        case 0x26dfa8u: goto label_26dfa8;
        case 0x26dfacu: goto label_26dfac;
        case 0x26dfb0u: goto label_26dfb0;
        case 0x26dfb4u: goto label_26dfb4;
        case 0x26dfb8u: goto label_26dfb8;
        case 0x26dfbcu: goto label_26dfbc;
        case 0x26dfc0u: goto label_26dfc0;
        case 0x26dfc4u: goto label_26dfc4;
        case 0x26dfc8u: goto label_26dfc8;
        case 0x26dfccu: goto label_26dfcc;
        case 0x26dfd0u: goto label_26dfd0;
        case 0x26dfd4u: goto label_26dfd4;
        case 0x26dfd8u: goto label_26dfd8;
        case 0x26dfdcu: goto label_26dfdc;
        case 0x26dfe0u: goto label_26dfe0;
        case 0x26dfe4u: goto label_26dfe4;
        case 0x26dfe8u: goto label_26dfe8;
        case 0x26dfecu: goto label_26dfec;
        case 0x26dff0u: goto label_26dff0;
        case 0x26dff4u: goto label_26dff4;
        case 0x26dff8u: goto label_26dff8;
        case 0x26dffcu: goto label_26dffc;
        case 0x26e000u: goto label_26e000;
        case 0x26e004u: goto label_26e004;
        case 0x26e008u: goto label_26e008;
        case 0x26e00cu: goto label_26e00c;
        case 0x26e010u: goto label_26e010;
        case 0x26e014u: goto label_26e014;
        case 0x26e018u: goto label_26e018;
        case 0x26e01cu: goto label_26e01c;
        case 0x26e020u: goto label_26e020;
        case 0x26e024u: goto label_26e024;
        case 0x26e028u: goto label_26e028;
        case 0x26e02cu: goto label_26e02c;
        case 0x26e030u: goto label_26e030;
        case 0x26e034u: goto label_26e034;
        case 0x26e038u: goto label_26e038;
        case 0x26e03cu: goto label_26e03c;
        case 0x26e040u: goto label_26e040;
        case 0x26e044u: goto label_26e044;
        case 0x26e048u: goto label_26e048;
        case 0x26e04cu: goto label_26e04c;
        case 0x26e050u: goto label_26e050;
        case 0x26e054u: goto label_26e054;
        case 0x26e058u: goto label_26e058;
        case 0x26e05cu: goto label_26e05c;
        case 0x26e060u: goto label_26e060;
        case 0x26e064u: goto label_26e064;
        case 0x26e068u: goto label_26e068;
        case 0x26e06cu: goto label_26e06c;
        case 0x26e070u: goto label_26e070;
        case 0x26e074u: goto label_26e074;
        case 0x26e078u: goto label_26e078;
        case 0x26e07cu: goto label_26e07c;
        case 0x26e080u: goto label_26e080;
        case 0x26e084u: goto label_26e084;
        case 0x26e088u: goto label_26e088;
        case 0x26e08cu: goto label_26e08c;
        case 0x26e090u: goto label_26e090;
        case 0x26e094u: goto label_26e094;
        case 0x26e098u: goto label_26e098;
        case 0x26e09cu: goto label_26e09c;
        case 0x26e0a0u: goto label_26e0a0;
        case 0x26e0a4u: goto label_26e0a4;
        case 0x26e0a8u: goto label_26e0a8;
        case 0x26e0acu: goto label_26e0ac;
        case 0x26e0b0u: goto label_26e0b0;
        case 0x26e0b4u: goto label_26e0b4;
        case 0x26e0b8u: goto label_26e0b8;
        case 0x26e0bcu: goto label_26e0bc;
        case 0x26e0c0u: goto label_26e0c0;
        case 0x26e0c4u: goto label_26e0c4;
        case 0x26e0c8u: goto label_26e0c8;
        case 0x26e0ccu: goto label_26e0cc;
        case 0x26e0d0u: goto label_26e0d0;
        case 0x26e0d4u: goto label_26e0d4;
        case 0x26e0d8u: goto label_26e0d8;
        case 0x26e0dcu: goto label_26e0dc;
        case 0x26e0e0u: goto label_26e0e0;
        case 0x26e0e4u: goto label_26e0e4;
        case 0x26e0e8u: goto label_26e0e8;
        case 0x26e0ecu: goto label_26e0ec;
        case 0x26e0f0u: goto label_26e0f0;
        case 0x26e0f4u: goto label_26e0f4;
        case 0x26e0f8u: goto label_26e0f8;
        case 0x26e0fcu: goto label_26e0fc;
        case 0x26e100u: goto label_26e100;
        case 0x26e104u: goto label_26e104;
        case 0x26e108u: goto label_26e108;
        case 0x26e10cu: goto label_26e10c;
        case 0x26e110u: goto label_26e110;
        case 0x26e114u: goto label_26e114;
        case 0x26e118u: goto label_26e118;
        case 0x26e11cu: goto label_26e11c;
        case 0x26e120u: goto label_26e120;
        case 0x26e124u: goto label_26e124;
        case 0x26e128u: goto label_26e128;
        case 0x26e12cu: goto label_26e12c;
        case 0x26e130u: goto label_26e130;
        case 0x26e134u: goto label_26e134;
        case 0x26e138u: goto label_26e138;
        case 0x26e13cu: goto label_26e13c;
        case 0x26e140u: goto label_26e140;
        case 0x26e144u: goto label_26e144;
        case 0x26e148u: goto label_26e148;
        case 0x26e14cu: goto label_26e14c;
        case 0x26e150u: goto label_26e150;
        case 0x26e154u: goto label_26e154;
        case 0x26e158u: goto label_26e158;
        case 0x26e15cu: goto label_26e15c;
        case 0x26e160u: goto label_26e160;
        case 0x26e164u: goto label_26e164;
        case 0x26e168u: goto label_26e168;
        case 0x26e16cu: goto label_26e16c;
        case 0x26e170u: goto label_26e170;
        case 0x26e174u: goto label_26e174;
        case 0x26e178u: goto label_26e178;
        case 0x26e17cu: goto label_26e17c;
        case 0x26e180u: goto label_26e180;
        case 0x26e184u: goto label_26e184;
        case 0x26e188u: goto label_26e188;
        case 0x26e18cu: goto label_26e18c;
        case 0x26e190u: goto label_26e190;
        case 0x26e194u: goto label_26e194;
        case 0x26e198u: goto label_26e198;
        case 0x26e19cu: goto label_26e19c;
        case 0x26e1a0u: goto label_26e1a0;
        case 0x26e1a4u: goto label_26e1a4;
        case 0x26e1a8u: goto label_26e1a8;
        case 0x26e1acu: goto label_26e1ac;
        case 0x26e1b0u: goto label_26e1b0;
        case 0x26e1b4u: goto label_26e1b4;
        case 0x26e1b8u: goto label_26e1b8;
        case 0x26e1bcu: goto label_26e1bc;
        case 0x26e1c0u: goto label_26e1c0;
        case 0x26e1c4u: goto label_26e1c4;
        case 0x26e1c8u: goto label_26e1c8;
        case 0x26e1ccu: goto label_26e1cc;
        case 0x26e1d0u: goto label_26e1d0;
        case 0x26e1d4u: goto label_26e1d4;
        case 0x26e1d8u: goto label_26e1d8;
        case 0x26e1dcu: goto label_26e1dc;
        case 0x26e1e0u: goto label_26e1e0;
        case 0x26e1e4u: goto label_26e1e4;
        case 0x26e1e8u: goto label_26e1e8;
        case 0x26e1ecu: goto label_26e1ec;
        case 0x26e1f0u: goto label_26e1f0;
        case 0x26e1f4u: goto label_26e1f4;
        case 0x26e1f8u: goto label_26e1f8;
        case 0x26e1fcu: goto label_26e1fc;
        case 0x26e200u: goto label_26e200;
        case 0x26e204u: goto label_26e204;
        case 0x26e208u: goto label_26e208;
        case 0x26e20cu: goto label_26e20c;
        case 0x26e210u: goto label_26e210;
        case 0x26e214u: goto label_26e214;
        case 0x26e218u: goto label_26e218;
        case 0x26e21cu: goto label_26e21c;
        case 0x26e220u: goto label_26e220;
        case 0x26e224u: goto label_26e224;
        case 0x26e228u: goto label_26e228;
        case 0x26e22cu: goto label_26e22c;
        case 0x26e230u: goto label_26e230;
        case 0x26e234u: goto label_26e234;
        case 0x26e238u: goto label_26e238;
        case 0x26e23cu: goto label_26e23c;
        case 0x26e240u: goto label_26e240;
        case 0x26e244u: goto label_26e244;
        case 0x26e248u: goto label_26e248;
        case 0x26e24cu: goto label_26e24c;
        case 0x26e250u: goto label_26e250;
        case 0x26e254u: goto label_26e254;
        case 0x26e258u: goto label_26e258;
        case 0x26e25cu: goto label_26e25c;
        case 0x26e260u: goto label_26e260;
        case 0x26e264u: goto label_26e264;
        case 0x26e268u: goto label_26e268;
        case 0x26e26cu: goto label_26e26c;
        case 0x26e270u: goto label_26e270;
        case 0x26e274u: goto label_26e274;
        case 0x26e278u: goto label_26e278;
        case 0x26e27cu: goto label_26e27c;
        case 0x26e280u: goto label_26e280;
        case 0x26e284u: goto label_26e284;
        case 0x26e288u: goto label_26e288;
        case 0x26e28cu: goto label_26e28c;
        case 0x26e290u: goto label_26e290;
        case 0x26e294u: goto label_26e294;
        case 0x26e298u: goto label_26e298;
        case 0x26e29cu: goto label_26e29c;
        case 0x26e2a0u: goto label_26e2a0;
        case 0x26e2a4u: goto label_26e2a4;
        case 0x26e2a8u: goto label_26e2a8;
        case 0x26e2acu: goto label_26e2ac;
        case 0x26e2b0u: goto label_26e2b0;
        case 0x26e2b4u: goto label_26e2b4;
        case 0x26e2b8u: goto label_26e2b8;
        case 0x26e2bcu: goto label_26e2bc;
        case 0x26e2c0u: goto label_26e2c0;
        case 0x26e2c4u: goto label_26e2c4;
        case 0x26e2c8u: goto label_26e2c8;
        case 0x26e2ccu: goto label_26e2cc;
        case 0x26e2d0u: goto label_26e2d0;
        case 0x26e2d4u: goto label_26e2d4;
        case 0x26e2d8u: goto label_26e2d8;
        case 0x26e2dcu: goto label_26e2dc;
        case 0x26e2e0u: goto label_26e2e0;
        case 0x26e2e4u: goto label_26e2e4;
        case 0x26e2e8u: goto label_26e2e8;
        case 0x26e2ecu: goto label_26e2ec;
        case 0x26e2f0u: goto label_26e2f0;
        case 0x26e2f4u: goto label_26e2f4;
        case 0x26e2f8u: goto label_26e2f8;
        case 0x26e2fcu: goto label_26e2fc;
        case 0x26e300u: goto label_26e300;
        case 0x26e304u: goto label_26e304;
        case 0x26e308u: goto label_26e308;
        case 0x26e30cu: goto label_26e30c;
        case 0x26e310u: goto label_26e310;
        case 0x26e314u: goto label_26e314;
        case 0x26e318u: goto label_26e318;
        case 0x26e31cu: goto label_26e31c;
        case 0x26e320u: goto label_26e320;
        case 0x26e324u: goto label_26e324;
        case 0x26e328u: goto label_26e328;
        case 0x26e32cu: goto label_26e32c;
        case 0x26e330u: goto label_26e330;
        case 0x26e334u: goto label_26e334;
        case 0x26e338u: goto label_26e338;
        case 0x26e33cu: goto label_26e33c;
        case 0x26e340u: goto label_26e340;
        case 0x26e344u: goto label_26e344;
        case 0x26e348u: goto label_26e348;
        case 0x26e34cu: goto label_26e34c;
        case 0x26e350u: goto label_26e350;
        case 0x26e354u: goto label_26e354;
        case 0x26e358u: goto label_26e358;
        case 0x26e35cu: goto label_26e35c;
        case 0x26e360u: goto label_26e360;
        case 0x26e364u: goto label_26e364;
        case 0x26e368u: goto label_26e368;
        case 0x26e36cu: goto label_26e36c;
        case 0x26e370u: goto label_26e370;
        case 0x26e374u: goto label_26e374;
        case 0x26e378u: goto label_26e378;
        case 0x26e37cu: goto label_26e37c;
        case 0x26e380u: goto label_26e380;
        case 0x26e384u: goto label_26e384;
        case 0x26e388u: goto label_26e388;
        case 0x26e38cu: goto label_26e38c;
        case 0x26e390u: goto label_26e390;
        case 0x26e394u: goto label_26e394;
        case 0x26e398u: goto label_26e398;
        case 0x26e39cu: goto label_26e39c;
        case 0x26e3a0u: goto label_26e3a0;
        case 0x26e3a4u: goto label_26e3a4;
        case 0x26e3a8u: goto label_26e3a8;
        case 0x26e3acu: goto label_26e3ac;
        case 0x26e3b0u: goto label_26e3b0;
        case 0x26e3b4u: goto label_26e3b4;
        case 0x26e3b8u: goto label_26e3b8;
        case 0x26e3bcu: goto label_26e3bc;
        case 0x26e3c0u: goto label_26e3c0;
        case 0x26e3c4u: goto label_26e3c4;
        case 0x26e3c8u: goto label_26e3c8;
        case 0x26e3ccu: goto label_26e3cc;
        case 0x26e3d0u: goto label_26e3d0;
        case 0x26e3d4u: goto label_26e3d4;
        case 0x26e3d8u: goto label_26e3d8;
        case 0x26e3dcu: goto label_26e3dc;
        case 0x26e3e0u: goto label_26e3e0;
        case 0x26e3e4u: goto label_26e3e4;
        case 0x26e3e8u: goto label_26e3e8;
        case 0x26e3ecu: goto label_26e3ec;
        case 0x26e3f0u: goto label_26e3f0;
        case 0x26e3f4u: goto label_26e3f4;
        case 0x26e3f8u: goto label_26e3f8;
        case 0x26e3fcu: goto label_26e3fc;
        case 0x26e400u: goto label_26e400;
        case 0x26e404u: goto label_26e404;
        case 0x26e408u: goto label_26e408;
        case 0x26e40cu: goto label_26e40c;
        case 0x26e410u: goto label_26e410;
        case 0x26e414u: goto label_26e414;
        case 0x26e418u: goto label_26e418;
        case 0x26e41cu: goto label_26e41c;
        case 0x26e420u: goto label_26e420;
        case 0x26e424u: goto label_26e424;
        case 0x26e428u: goto label_26e428;
        case 0x26e42cu: goto label_26e42c;
        case 0x26e430u: goto label_26e430;
        case 0x26e434u: goto label_26e434;
        case 0x26e438u: goto label_26e438;
        case 0x26e43cu: goto label_26e43c;
        case 0x26e440u: goto label_26e440;
        case 0x26e444u: goto label_26e444;
        case 0x26e448u: goto label_26e448;
        case 0x26e44cu: goto label_26e44c;
        case 0x26e450u: goto label_26e450;
        case 0x26e454u: goto label_26e454;
        case 0x26e458u: goto label_26e458;
        case 0x26e45cu: goto label_26e45c;
        case 0x26e460u: goto label_26e460;
        case 0x26e464u: goto label_26e464;
        case 0x26e468u: goto label_26e468;
        case 0x26e46cu: goto label_26e46c;
        case 0x26e470u: goto label_26e470;
        case 0x26e474u: goto label_26e474;
        case 0x26e478u: goto label_26e478;
        case 0x26e47cu: goto label_26e47c;
        case 0x26e480u: goto label_26e480;
        case 0x26e484u: goto label_26e484;
        case 0x26e488u: goto label_26e488;
        case 0x26e48cu: goto label_26e48c;
        case 0x26e490u: goto label_26e490;
        case 0x26e494u: goto label_26e494;
        case 0x26e498u: goto label_26e498;
        case 0x26e49cu: goto label_26e49c;
        case 0x26e4a0u: goto label_26e4a0;
        case 0x26e4a4u: goto label_26e4a4;
        case 0x26e4a8u: goto label_26e4a8;
        case 0x26e4acu: goto label_26e4ac;
        case 0x26e4b0u: goto label_26e4b0;
        case 0x26e4b4u: goto label_26e4b4;
        case 0x26e4b8u: goto label_26e4b8;
        case 0x26e4bcu: goto label_26e4bc;
        case 0x26e4c0u: goto label_26e4c0;
        case 0x26e4c4u: goto label_26e4c4;
        case 0x26e4c8u: goto label_26e4c8;
        case 0x26e4ccu: goto label_26e4cc;
        case 0x26e4d0u: goto label_26e4d0;
        case 0x26e4d4u: goto label_26e4d4;
        case 0x26e4d8u: goto label_26e4d8;
        case 0x26e4dcu: goto label_26e4dc;
        case 0x26e4e0u: goto label_26e4e0;
        case 0x26e4e4u: goto label_26e4e4;
        case 0x26e4e8u: goto label_26e4e8;
        case 0x26e4ecu: goto label_26e4ec;
        case 0x26e4f0u: goto label_26e4f0;
        case 0x26e4f4u: goto label_26e4f4;
        case 0x26e4f8u: goto label_26e4f8;
        case 0x26e4fcu: goto label_26e4fc;
        case 0x26e500u: goto label_26e500;
        case 0x26e504u: goto label_26e504;
        case 0x26e508u: goto label_26e508;
        case 0x26e50cu: goto label_26e50c;
        case 0x26e510u: goto label_26e510;
        case 0x26e514u: goto label_26e514;
        case 0x26e518u: goto label_26e518;
        case 0x26e51cu: goto label_26e51c;
        case 0x26e520u: goto label_26e520;
        case 0x26e524u: goto label_26e524;
        case 0x26e528u: goto label_26e528;
        case 0x26e52cu: goto label_26e52c;
        case 0x26e530u: goto label_26e530;
        case 0x26e534u: goto label_26e534;
        case 0x26e538u: goto label_26e538;
        case 0x26e53cu: goto label_26e53c;
        case 0x26e540u: goto label_26e540;
        case 0x26e544u: goto label_26e544;
        case 0x26e548u: goto label_26e548;
        case 0x26e54cu: goto label_26e54c;
        case 0x26e550u: goto label_26e550;
        case 0x26e554u: goto label_26e554;
        case 0x26e558u: goto label_26e558;
        case 0x26e55cu: goto label_26e55c;
        case 0x26e560u: goto label_26e560;
        case 0x26e564u: goto label_26e564;
        case 0x26e568u: goto label_26e568;
        case 0x26e56cu: goto label_26e56c;
        case 0x26e570u: goto label_26e570;
        case 0x26e574u: goto label_26e574;
        case 0x26e578u: goto label_26e578;
        case 0x26e57cu: goto label_26e57c;
        case 0x26e580u: goto label_26e580;
        case 0x26e584u: goto label_26e584;
        case 0x26e588u: goto label_26e588;
        case 0x26e58cu: goto label_26e58c;
        case 0x26e590u: goto label_26e590;
        case 0x26e594u: goto label_26e594;
        case 0x26e598u: goto label_26e598;
        case 0x26e59cu: goto label_26e59c;
        case 0x26e5a0u: goto label_26e5a0;
        case 0x26e5a4u: goto label_26e5a4;
        case 0x26e5a8u: goto label_26e5a8;
        case 0x26e5acu: goto label_26e5ac;
        case 0x26e5b0u: goto label_26e5b0;
        case 0x26e5b4u: goto label_26e5b4;
        case 0x26e5b8u: goto label_26e5b8;
        case 0x26e5bcu: goto label_26e5bc;
        case 0x26e5c0u: goto label_26e5c0;
        case 0x26e5c4u: goto label_26e5c4;
        case 0x26e5c8u: goto label_26e5c8;
        case 0x26e5ccu: goto label_26e5cc;
        case 0x26e5d0u: goto label_26e5d0;
        case 0x26e5d4u: goto label_26e5d4;
        case 0x26e5d8u: goto label_26e5d8;
        case 0x26e5dcu: goto label_26e5dc;
        case 0x26e5e0u: goto label_26e5e0;
        case 0x26e5e4u: goto label_26e5e4;
        case 0x26e5e8u: goto label_26e5e8;
        case 0x26e5ecu: goto label_26e5ec;
        case 0x26e5f0u: goto label_26e5f0;
        case 0x26e5f4u: goto label_26e5f4;
        default: break;
    }

    ctx->pc = 0x26dd08u;

label_26dd08:
    // 0x26dd08: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x26dd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_26dd0c:
    // 0x26dd0c: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x26dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_26dd10:
    // 0x26dd10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26dd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26dd14:
    // 0x26dd14: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x26dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_26dd18:
    // 0x26dd18: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x26dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_26dd1c:
    // 0x26dd1c: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x26dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_26dd20:
    // 0x26dd20: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x26dd20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_26dd24:
    // 0x26dd24: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x26dd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_26dd28:
    // 0x26dd28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x26dd28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dd2c:
    // 0x26dd2c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x26dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_26dd30:
    // 0x26dd30: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x26dd30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26dd34:
    // 0x26dd34: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x26dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_26dd38:
    // 0x26dd38: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x26dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_26dd3c:
    // 0x26dd3c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x26dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_26dd40:
    // 0x26dd40: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x26dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_26dd44:
    // 0x26dd44: 0xe7b801e0  swc1        $f24, 0x1E0($sp)
    ctx->pc = 0x26dd44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_26dd48:
    // 0x26dd48: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x26dd48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_26dd4c:
    // 0x26dd4c: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x26dd4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_26dd50:
    // 0x26dd50: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x26dd50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_26dd54:
    // 0x26dd54: 0xc0874fa  jal         func_21D3E8
label_26dd58:
    if (ctx->pc == 0x26DD58u) {
        ctx->pc = 0x26DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD54u;
        // 0x26dd58: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD5Cu;
        goto label_26dd5c;
    }
    ctx->pc = 0x26DD54u;
    SET_GPR_U32(ctx, 31, 0x26DD5Cu);
    ctx->pc = 0x26DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD54u;
    // 0x26dd58: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x26DD54u, 0x26DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD5Cu;
label_26dd5c:
    // 0x26dd5c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x26dd5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_26dd60:
    // 0x26dd60: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x26dd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_26dd64:
    // 0x26dd64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26dd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26dd68:
    // 0x26dd68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26dd6c:
    // 0x26dd6c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_26dd70:
    // 0x26dd70: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x26dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_26dd74:
    // 0x26dd74: 0xc0cd8ec  jal         func_3363B0
label_26dd78:
    if (ctx->pc == 0x26DD78u) {
        ctx->pc = 0x26DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD74u;
        // 0x26dd78: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD7Cu;
        goto label_26dd7c;
    }
    ctx->pc = 0x26DD74u;
    SET_GPR_U32(ctx, 31, 0x26DD7Cu);
    ctx->pc = 0x26DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD74u;
    // 0x26dd78: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x26DD74u, 0x26DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD7Cu;
label_26dd7c:
    // 0x26dd7c: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x26dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26dd80:
    // 0x26dd80: 0xc0cd5ea  jal         func_3357A8
label_26dd84:
    if (ctx->pc == 0x26DD84u) {
        ctx->pc = 0x26DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD80u;
        // 0x26dd84: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD88u;
        goto label_26dd88;
    }
    ctx->pc = 0x26DD80u;
    SET_GPR_U32(ctx, 31, 0x26DD88u);
    ctx->pc = 0x26DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD80u;
    // 0x26dd84: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x26DD80u, 0x26DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD88u;
label_26dd88:
    // 0x26dd88: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x26dd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_26dd8c:
    // 0x26dd8c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26dd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_26dd90:
    // 0x26dd90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26dd90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26dd94:
    // 0x26dd94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26dd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26dd98:
    // 0x26dd98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26dd9c:
    // 0x26dd9c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x26dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_26dda0:
    // 0x26dda0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26dda4:
    // 0x26dda4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26dda4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26dda8:
    // 0x26dda8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26dda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ddac:
    // 0x26ddac: 0x0  nop
    ctx->pc = 0x26ddacu;
    // NOP
label_26ddb0:
    // 0x26ddb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26ddb4:
    if (ctx->pc == 0x26DDB4u) {
        ctx->pc = 0x26DDB8u;
        goto label_26ddb8;
    }
    ctx->pc = 0x26DDB0u;
    {
        const bool branch_taken_0x26ddb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ddb0) {
            ctx->pc = 0x26DDCCu;
            goto label_26ddcc;
        }
    }
    ctx->pc = 0x26DDB8u;
label_26ddb8:
    // 0x26ddb8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x26ddb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_26ddbc:
    // 0x26ddbc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26ddbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26ddc0:
    // 0x26ddc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ddc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ddc4:
    // 0x26ddc4: 0x0  nop
    ctx->pc = 0x26ddc4u;
    // NOP
label_26ddc8:
    // 0x26ddc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26ddc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26ddcc:
    // 0x26ddcc: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x26ddccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_26ddd0:
    // 0x26ddd0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26ddd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26ddd4:
    // 0x26ddd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ddd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ddd8:
    // 0x26ddd8: 0x0  nop
    ctx->pc = 0x26ddd8u;
    // NOP
label_26dddc:
    // 0x26dddc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26dde0:
    // 0x26dde0: 0x0  nop
    ctx->pc = 0x26dde0u;
    // NOP
label_26dde4:
    // 0x26dde4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26dde8:
    if (ctx->pc == 0x26DDE8u) {
        ctx->pc = 0x26DDECu;
        goto label_26ddec;
    }
    ctx->pc = 0x26DDE4u;
    {
        const bool branch_taken_0x26dde4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dde4) {
            ctx->pc = 0x26DE00u;
            goto label_26de00;
        }
    }
    ctx->pc = 0x26DDECu;
label_26ddec:
    // 0x26ddec: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x26ddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_26ddf0:
    // 0x26ddf0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26ddf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26ddf4:
    // 0x26ddf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ddf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ddf8:
    // 0x26ddf8: 0x0  nop
    ctx->pc = 0x26ddf8u;
    // NOP
label_26ddfc:
    // 0x26ddfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ddfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26de00:
    // 0x26de00: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26de00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_26de04:
    // 0x26de04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26de04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26de08:
    // 0x26de08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26de08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26de0c:
    // 0x26de0c: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x26de0cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_26de10:
    // 0x26de10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26de10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26de14:
    // 0x26de14: 0x0  nop
    ctx->pc = 0x26de14u;
    // NOP
label_26de18:
    // 0x26de18: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_26de1c:
    if (ctx->pc == 0x26DE1Cu) {
        ctx->pc = 0x26DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE18u;
        // 0x26de1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE20u;
        goto label_26de20;
    }
    ctx->pc = 0x26DE18u;
    {
        const bool branch_taken_0x26de18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE18u;
        // 0x26de1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de18) {
            ctx->pc = 0x26DE60u;
            goto label_26de60;
        }
    }
    ctx->pc = 0x26DE20u;
label_26de20:
    // 0x26de20: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x26de20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_26de24:
    // 0x26de24: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x26de24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_26de28:
    // 0x26de28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26de28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26de2c:
    // 0x26de2c: 0x0  nop
    ctx->pc = 0x26de2cu;
    // NOP
label_26de30:
    // 0x26de30: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26de30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26de34:
    // 0x26de34: 0x0  nop
    ctx->pc = 0x26de34u;
    // NOP
label_26de38:
    // 0x26de38: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_26de3c:
    if (ctx->pc == 0x26DE3Cu) {
        ctx->pc = 0x26DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE38u;
        // 0x26de3c: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE40u;
        goto label_26de40;
    }
    ctx->pc = 0x26DE38u;
    {
        const bool branch_taken_0x26de38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE38u;
        // 0x26de3c: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de38) {
            ctx->pc = 0x26DE60u;
            goto label_26de60;
        }
    }
    ctx->pc = 0x26DE40u;
label_26de40:
    // 0x26de40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26de40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26de44:
    // 0x26de44: 0x0  nop
    ctx->pc = 0x26de44u;
    // NOP
label_26de48:
    // 0x26de48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26de48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26de4c:
    // 0x26de4c: 0x0  nop
    ctx->pc = 0x26de4cu;
    // NOP
label_26de50:
    // 0x26de50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_26de54:
    if (ctx->pc == 0x26DE54u) {
        ctx->pc = 0x26DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE50u;
        // 0x26de54: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE58u;
        goto label_26de58;
    }
    ctx->pc = 0x26DE50u;
    {
        const bool branch_taken_0x26de50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE50u;
        // 0x26de54: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de50) {
            ctx->pc = 0x26DE60u;
            goto label_26de60;
        }
    }
    ctx->pc = 0x26DE58u;
label_26de58:
    // 0x26de58: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x26de58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26de5c:
    // 0x26de5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26de60:
    // 0x26de60: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_26de64:
    // 0x26de64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x26de64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_26de68:
    // 0x26de68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26de68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26de6c:
    // 0x26de6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26de6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26de70:
    // 0x26de70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26de70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26de74:
    // 0x26de74: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x26de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_26de78:
    // 0x26de78: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x26de78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_26de7c:
    // 0x26de7c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x26de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_26de80:
    // 0x26de80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26de84:
    // 0x26de84: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x26de84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_26de88:
    // 0x26de88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x26de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_26de8c:
    // 0x26de8c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x26de8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_26de90:
    // 0x26de90: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x26de90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_26de94:
    // 0x26de94: 0x16e30017  bne         $s7, $v1, . + 4 + (0x17 << 2)
label_26de98:
    if (ctx->pc == 0x26DE98u) {
        ctx->pc = 0x26DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE94u;
        // 0x26de98: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE9Cu;
        goto label_26de9c;
    }
    ctx->pc = 0x26DE94u;
    {
        const bool branch_taken_0x26de94 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x26DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE94u;
        // 0x26de98: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de94) {
            ctx->pc = 0x26DEF4u;
            goto label_26def4;
        }
    }
    ctx->pc = 0x26DE9Cu;
label_26de9c:
    // 0x26de9c: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x26de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_26dea0:
    // 0x26dea0: 0xc095142  jal         func_254508
label_26dea4:
    if (ctx->pc == 0x26DEA4u) {
        ctx->pc = 0x26DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA0u;
        // 0x26dea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEA8u;
        goto label_26dea8;
    }
    ctx->pc = 0x26DEA0u;
    SET_GPR_U32(ctx, 31, 0x26DEA8u);
    ctx->pc = 0x26DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEA0u;
    // 0x26dea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x26DEA0u, 0x26DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEA8u;
label_26dea8:
    // 0x26dea8: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x26dea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26deac:
    // 0x26deac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26deacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26deb0:
    // 0x26deb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26deb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26deb4:
    // 0x26deb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26deb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26deb8:
    // 0x26deb8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26deb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_26debc:
    // 0x26debc: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x26debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_26dec0:
    // 0x26dec0: 0x27c64b00  addiu       $a2, $fp, 0x4B00
    ctx->pc = 0x26dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_26dec4:
    // 0x26dec4: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x26dec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_26dec8:
    // 0x26dec8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_26decc:
    // 0x26decc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ded0:
    // 0x26ded0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x26ded0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26ded4:
    // 0x26ded4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26ded4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26ded8:
    // 0x26ded8: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x26ded8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_26dedc:
    // 0x26dedc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_26dee0:
    // 0x26dee0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_26dee4:
    // 0x26dee4: 0xc0cd8ec  jal         func_3363B0
label_26dee8:
    if (ctx->pc == 0x26DEE8u) {
        ctx->pc = 0x26DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEE4u;
        // 0x26dee8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEECu;
        goto label_26deec;
    }
    ctx->pc = 0x26DEE4u;
    SET_GPR_U32(ctx, 31, 0x26DEECu);
    ctx->pc = 0x26DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEE4u;
    // 0x26dee8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x26DEE4u, 0x26DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEECu;
label_26deec:
    // 0x26deec: 0x10000030  b           . + 4 + (0x30 << 2)
label_26def0:
    if (ctx->pc == 0x26DEF0u) {
        ctx->pc = 0x26DEF4u;
        goto label_26def4;
    }
    ctx->pc = 0x26DEECu;
    {
        const bool branch_taken_0x26deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26deec) {
            ctx->pc = 0x26DFB0u;
            goto label_26dfb0;
        }
    }
    ctx->pc = 0x26DEF4u;
label_26def4:
    // 0x26def4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_26def8:
    // 0x26def8: 0x16e20017  bne         $s7, $v0, . + 4 + (0x17 << 2)
label_26defc:
    if (ctx->pc == 0x26DEFCu) {
        ctx->pc = 0x26DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEF8u;
        // 0x26defc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF00u;
        goto label_26df00;
    }
    ctx->pc = 0x26DEF8u;
    {
        const bool branch_taken_0x26def8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEF8u;
        // 0x26defc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26def8) {
            ctx->pc = 0x26DF58u;
            goto label_26df58;
        }
    }
    ctx->pc = 0x26DF00u;
label_26df00:
    // 0x26df00: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x26df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_26df04:
    // 0x26df04: 0xc095142  jal         func_254508
label_26df08:
    if (ctx->pc == 0x26DF08u) {
        ctx->pc = 0x26DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF04u;
        // 0x26df08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF0Cu;
        goto label_26df0c;
    }
    ctx->pc = 0x26DF04u;
    SET_GPR_U32(ctx, 31, 0x26DF0Cu);
    ctx->pc = 0x26DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF04u;
    // 0x26df08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x26DF04u, 0x26DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF0Cu;
label_26df0c:
    // 0x26df0c: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x26df0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26df10:
    // 0x26df10: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26df14:
    // 0x26df14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26df14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26df18:
    // 0x26df18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26df18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26df1c:
    // 0x26df1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26df1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_26df20:
    // 0x26df20: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_26df24:
    // 0x26df24: 0x27c64b00  addiu       $a2, $fp, 0x4B00
    ctx->pc = 0x26df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_26df28:
    // 0x26df28: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x26df28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_26df2c:
    // 0x26df2c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x26df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_26df30:
    // 0x26df30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26df34:
    // 0x26df34: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x26df34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26df38:
    // 0x26df38: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26df38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26df3c:
    // 0x26df3c: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x26df3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_26df40:
    // 0x26df40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26df40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_26df44:
    // 0x26df44: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_26df48:
    // 0x26df48: 0xc0cd8c2  jal         func_336308
label_26df4c:
    if (ctx->pc == 0x26DF4Cu) {
        ctx->pc = 0x26DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF48u;
        // 0x26df4c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF50u;
        goto label_26df50;
    }
    ctx->pc = 0x26DF48u;
    SET_GPR_U32(ctx, 31, 0x26DF50u);
    ctx->pc = 0x26DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF48u;
    // 0x26df4c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x26DF48u, 0x26DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF50u;
label_26df50:
    // 0x26df50: 0x10000037  b           . + 4 + (0x37 << 2)
label_26df54:
    if (ctx->pc == 0x26DF54u) {
        ctx->pc = 0x26DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF50u;
        // 0x26df54: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF58u;
        goto label_26df58;
    }
    ctx->pc = 0x26DF50u;
    {
        const bool branch_taken_0x26df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF50u;
        // 0x26df54: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df50) {
            ctx->pc = 0x26E030u;
            goto label_26e030;
        }
    }
    ctx->pc = 0x26DF58u;
label_26df58:
    // 0x26df58: 0x56e20021  bnel        $s7, $v0, . + 4 + (0x21 << 2)
label_26df5c:
    if (ctx->pc == 0x26DF5Cu) {
        ctx->pc = 0x26DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF58u;
        // 0x26df5c: 0x2405009b  addiu       $a1, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF60u;
        goto label_26df60;
    }
    ctx->pc = 0x26DF58u;
    {
        const bool branch_taken_0x26df58 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x26df58) {
            ctx->pc = 0x26DF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DF58u;
            // 0x26df5c: 0x2405009b  addiu       $a1, $zero, 0x9B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DFE0u;
            goto label_26dfe0;
        }
    }
    ctx->pc = 0x26DF60u;
label_26df60:
    // 0x26df60: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_26df64:
    // 0x26df64: 0xc095142  jal         func_254508
label_26df68:
    if (ctx->pc == 0x26DF68u) {
        ctx->pc = 0x26DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF64u;
        // 0x26df68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF6Cu;
        goto label_26df6c;
    }
    ctx->pc = 0x26DF64u;
    SET_GPR_U32(ctx, 31, 0x26DF6Cu);
    ctx->pc = 0x26DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF64u;
    // 0x26df68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x26DF64u, 0x26DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF6Cu;
label_26df6c:
    // 0x26df6c: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x26df6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26df70:
    // 0x26df70: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26df70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26df74:
    // 0x26df74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26df74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26df78:
    // 0x26df78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26df78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26df7c:
    // 0x26df7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26df7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_26df80:
    // 0x26df80: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x26df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_26df84:
    // 0x26df84: 0x27c64b00  addiu       $a2, $fp, 0x4B00
    ctx->pc = 0x26df84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_26df88:
    // 0x26df88: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x26df88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_26df8c:
    // 0x26df8c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_26df90:
    // 0x26df90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26df90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26df94:
    // 0x26df94: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x26df94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26df98:
    // 0x26df98: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26df98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26df9c:
    // 0x26df9c: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x26df9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_26dfa0:
    // 0x26dfa0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_26dfa4:
    // 0x26dfa4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_26dfa8:
    // 0x26dfa8: 0xc0cd8c2  jal         func_336308
label_26dfac:
    if (ctx->pc == 0x26DFACu) {
        ctx->pc = 0x26DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFA8u;
        // 0x26dfac: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DFB0u;
        goto label_26dfb0;
    }
    ctx->pc = 0x26DFA8u;
    SET_GPR_U32(ctx, 31, 0x26DFB0u);
    ctx->pc = 0x26DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFA8u;
    // 0x26dfac: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x26DFA8u, 0x26DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFB0u;
label_26dfb0:
    // 0x26dfb0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26dfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_26dfb4:
    // 0x26dfb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26dfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26dfb8:
    // 0x26dfb8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x26dfb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26dfbc:
    // 0x26dfbc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x26dfbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_26dfc0:
    // 0x26dfc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26dfc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26dfc4:
    // 0x26dfc4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x26dfc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_26dfc8:
    // 0x26dfc8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26dfc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26dfcc:
    // 0x26dfcc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x26dfccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_26dfd0:
    // 0x26dfd0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x26dfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_26dfd4:
    // 0x26dfd4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x26dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_26dfd8:
    // 0x26dfd8: 0x10000016  b           . + 4 + (0x16 << 2)
label_26dfdc:
    if (ctx->pc == 0x26DFDCu) {
        ctx->pc = 0x26DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFD8u;
        // 0x26dfdc: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DFE0u;
        goto label_26dfe0;
    }
    ctx->pc = 0x26DFD8u;
    {
        const bool branch_taken_0x26dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFD8u;
        // 0x26dfdc: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfd8) {
            ctx->pc = 0x26E034u;
            goto label_26e034;
        }
    }
    ctx->pc = 0x26DFE0u;
label_26dfe0:
    // 0x26dfe0: 0xc095142  jal         func_254508
label_26dfe4:
    if (ctx->pc == 0x26DFE4u) {
        ctx->pc = 0x26DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFE0u;
        // 0x26dfe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DFE8u;
        goto label_26dfe8;
    }
    ctx->pc = 0x26DFE0u;
    SET_GPR_U32(ctx, 31, 0x26DFE8u);
    ctx->pc = 0x26DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFE0u;
    // 0x26dfe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x26DFE0u, 0x26DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFE8u;
label_26dfe8:
    // 0x26dfe8: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x26dfe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26dfec:
    // 0x26dfec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26dfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26dff0:
    // 0x26dff0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26dff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26dff4:
    // 0x26dff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26dff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26dff8:
    // 0x26dff8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26dff8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_26dffc:
    // 0x26dffc: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x26dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_26e000:
    // 0x26e000: 0x27c64b00  addiu       $a2, $fp, 0x4B00
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_26e004:
    // 0x26e004: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x26e004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_26e008:
    // 0x26e008: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x26e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_26e00c:
    // 0x26e00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e010:
    // 0x26e010: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x26e010u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26e014:
    // 0x26e014: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26e014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26e018:
    // 0x26e018: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x26e018u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_26e01c:
    // 0x26e01c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_26e020:
    // 0x26e020: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26e020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_26e024:
    // 0x26e024: 0xc0cd8ec  jal         func_3363B0
label_26e028:
    if (ctx->pc == 0x26E028u) {
        ctx->pc = 0x26E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E024u;
        // 0x26e028: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E02Cu;
        goto label_26e02c;
    }
    ctx->pc = 0x26E024u;
    SET_GPR_U32(ctx, 31, 0x26E02Cu);
    ctx->pc = 0x26E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E024u;
    // 0x26e028: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x26E024u, 0x26E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E02Cu;
label_26e02c:
    // 0x26e02c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x26e02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26e030:
    // 0x26e030: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x26e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_26e034:
    // 0x26e034: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26e038:
    // 0x26e038: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26e038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_26e03c:
    // 0x26e03c: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x26e03cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_26e040:
    // 0x26e040: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x26e040u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_26e044:
    // 0x26e044: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x26e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_26e048:
    // 0x26e048: 0x40f809  jalr        $v0
label_26e04c:
    if (ctx->pc == 0x26E04Cu) {
        ctx->pc = 0x26E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E048u;
        // 0x26e04c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E050u;
        goto label_26e050;
    }
    ctx->pc = 0x26E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E050u);
        ctx->pc = 0x26E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E048u;
        // 0x26e04c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E048u, 0x26E050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E050u;
label_26e050:
    // 0x26e050: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x26e050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26e054:
    // 0x26e054: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x26e054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26e058:
    // 0x26e058: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x26e058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26e05c:
    // 0x26e05c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26e05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26e060:
    // 0x26e060: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e064:
    // 0x26e064: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e068:
    // 0x26e068: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x26e068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26e06c:
    // 0x26e06c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x26e06cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_26e070:
    // 0x26e070: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x26e070u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_26e074:
    // 0x26e074: 0x8ec447c4  lw          $a0, 0x47C4($s6)
    ctx->pc = 0x26e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18372)));
label_26e078:
    // 0x26e078: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x26e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_26e07c:
    // 0x26e07c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e080:
    // 0x26e080: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x26e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_26e084:
    // 0x26e084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e088:
    // 0x26e088: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x26e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_26e08c:
    // 0x26e08c: 0xc1036e2  jal         func_40DB88
label_26e090:
    if (ctx->pc == 0x26E090u) {
        ctx->pc = 0x26E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E08Cu;
        // 0x26e090: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E094u;
        goto label_26e094;
    }
    ctx->pc = 0x26E08Cu;
    SET_GPR_U32(ctx, 31, 0x26E094u);
    ctx->pc = 0x26E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E08Cu;
    // 0x26e090: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x26E08Cu, 0x26E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E094u;
label_26e094:
    // 0x26e094: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_26e098:
    // 0x26e098: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_26e09c:
    if (ctx->pc == 0x26E09Cu) {
        ctx->pc = 0x26E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E098u;
        // 0x26e09c: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0A0u;
        goto label_26e0a0;
    }
    ctx->pc = 0x26E098u;
    {
        const bool branch_taken_0x26e098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E098u;
        // 0x26e09c: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e098) {
            ctx->pc = 0x26E0F8u;
            goto label_26e0f8;
        }
    }
    ctx->pc = 0x26E0A0u;
label_26e0a0:
    // 0x26e0a0: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x26e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_26e0a4:
    // 0x26e0a4: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x26e0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_26e0a8:
    // 0x26e0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26e0ac:
    // 0x26e0ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26e0b0:
    // 0x26e0b0: 0xc12e29c  jal         func_4B8A70
label_26e0b4:
    if (ctx->pc == 0x26E0B4u) {
        ctx->pc = 0x26E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0B0u;
        // 0x26e0b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0B8u;
        goto label_26e0b8;
    }
    ctx->pc = 0x26E0B0u;
    SET_GPR_U32(ctx, 31, 0x26E0B8u);
    ctx->pc = 0x26E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0B0u;
    // 0x26e0b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x26E0B0u, 0x26E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0B8u;
label_26e0b8:
    // 0x26e0b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26e0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26e0bc:
    // 0x26e0bc: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x26e0bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_26e0c0:
    // 0x26e0c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26e0c4:
    // 0x26e0c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26e0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26e0c8:
    // 0x26e0c8: 0xc12e310  jal         func_4B8C40
label_26e0cc:
    if (ctx->pc == 0x26E0CCu) {
        ctx->pc = 0x26E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0C8u;
        // 0x26e0cc: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0D0u;
        goto label_26e0d0;
    }
    ctx->pc = 0x26E0C8u;
    SET_GPR_U32(ctx, 31, 0x26E0D0u);
    ctx->pc = 0x26E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0C8u;
    // 0x26e0cc: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x26E0C8u, 0x26E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0D0u;
label_26e0d0:
    // 0x26e0d0: 0x8ec447c4  lw          $a0, 0x47C4($s6)
    ctx->pc = 0x26e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18372)));
label_26e0d4:
    // 0x26e0d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26e0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e0d8:
    // 0x26e0d8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26e0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26e0dc:
    // 0x26e0dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26e0e0:
    // 0x26e0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e0e4:
    // 0x26e0e4: 0xc1036e2  jal         func_40DB88
label_26e0e8:
    if (ctx->pc == 0x26E0E8u) {
        ctx->pc = 0x26E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0E4u;
        // 0x26e0e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0ECu;
        goto label_26e0ec;
    }
    ctx->pc = 0x26E0E4u;
    SET_GPR_U32(ctx, 31, 0x26E0ECu);
    ctx->pc = 0x26E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0E4u;
    // 0x26e0e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x26E0E4u, 0x26E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0ECu;
label_26e0ec:
    // 0x26e0ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_26e0f0:
    // 0x26e0f0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_26e0f4:
    if (ctx->pc == 0x26E0F4u) {
        ctx->pc = 0x26E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0F0u;
        // 0x26e0f4: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0F8u;
        goto label_26e0f8;
    }
    ctx->pc = 0x26E0F0u;
    {
        const bool branch_taken_0x26e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0F0u;
        // 0x26e0f4: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0f0) {
            ctx->pc = 0x26E188u;
            goto label_26e188;
        }
    }
    ctx->pc = 0x26E0F8u;
label_26e0f8:
    // 0x26e0f8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x26e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_26e0fc:
    // 0x26e0fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x26e0fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26e100:
    // 0x26e100: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x26e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_26e104:
    // 0x26e104: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x26e104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_26e108:
    // 0x26e108: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26e108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e10c:
    // 0x26e10c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x26e10cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e110:
    // 0x26e110: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x26e110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e114:
    // 0x26e114: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x26e114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e118:
    // 0x26e118: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x26e118u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_26e11c:
    // 0x26e11c: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x26e11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
label_26e120:
    // 0x26e120: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x26e120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_26e124:
    // 0x26e124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e128:
    // 0x26e128: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x26e128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_26e12c:
    // 0x26e12c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x26e12cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26e130:
    // 0x26e130: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x26e130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_26e134:
    // 0x26e134: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e138:
    // 0x26e138: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x26e138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e13c:
    // 0x26e13c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x26e13cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e140:
    // 0x26e140: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x26e140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e144:
    // 0x26e144: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x26e144u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_26e148:
    // 0x26e148: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x26e148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26e14c:
    // 0x26e14c: 0xc12e29c  jal         func_4B8A70
label_26e150:
    if (ctx->pc == 0x26E150u) {
        ctx->pc = 0x26E154u;
        goto label_26e154;
    }
    ctx->pc = 0x26E14Cu;
    SET_GPR_U32(ctx, 31, 0x26E154u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x26E14Cu, 0x26E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E154u;
label_26e154:
    // 0x26e154: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26e154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26e158:
    // 0x26e158: 0x0  nop
    ctx->pc = 0x26e158u;
    // NOP
label_26e15c:
    // 0x26e15c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_26e160:
    if (ctx->pc == 0x26E160u) {
        ctx->pc = 0x26E164u;
        goto label_26e164;
    }
    ctx->pc = 0x26E15Cu;
    {
        const bool branch_taken_0x26e15c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e15c) {
            ctx->pc = 0x26E188u;
            goto label_26e188;
        }
    }
    ctx->pc = 0x26E164u;
label_26e164:
    // 0x26e164: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_26e168:
    // 0x26e168: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x26e168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
label_26e16c:
    // 0x26e16c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e170:
    // 0x26e170: 0xc12e29c  jal         func_4B8A70
label_26e174:
    if (ctx->pc == 0x26E174u) {
        ctx->pc = 0x26E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E170u;
        // 0x26e174: 0xc7b70054  lwc1        $f23, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E178u;
        goto label_26e178;
    }
    ctx->pc = 0x26E170u;
    SET_GPR_U32(ctx, 31, 0x26E178u);
    ctx->pc = 0x26E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E170u;
    // 0x26e174: 0xc7b70054  lwc1        $f23, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x26E170u, 0x26E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E178u;
label_26e178:
    // 0x26e178: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x26e178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26e17c:
    // 0x26e17c: 0x0  nop
    ctx->pc = 0x26e17cu;
    // NOP
label_26e180:
    // 0x26e180: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_26e184:
    if (ctx->pc == 0x26E184u) {
        ctx->pc = 0x26E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E180u;
        // 0x26e184: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E188u;
        goto label_26e188;
    }
    ctx->pc = 0x26E180u;
    {
        const bool branch_taken_0x26e180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e180) {
            ctx->pc = 0x26E184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E180u;
            // 0x26e184: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E188u;
            goto label_26e188;
        }
    }
    ctx->pc = 0x26E188u;
label_26e188:
    // 0x26e188: 0xc0e409a  jal         func_390268
label_26e18c:
    if (ctx->pc == 0x26E18Cu) {
        ctx->pc = 0x26E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E188u;
        // 0x26e18c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E190u;
        goto label_26e190;
    }
    ctx->pc = 0x26E188u;
    SET_GPR_U32(ctx, 31, 0x26E190u);
    ctx->pc = 0x26E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E188u;
    // 0x26e18c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26E188u, 0x26E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E190u;
label_26e190:
    // 0x26e190: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x26e190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26e194:
    // 0x26e194: 0x0  nop
    ctx->pc = 0x26e194u;
    // NOP
label_26e198:
    // 0x26e198: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_26e19c:
    if (ctx->pc == 0x26E19Cu) {
        ctx->pc = 0x26E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E198u;
        // 0x26e19c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1A0u;
        goto label_26e1a0;
    }
    ctx->pc = 0x26E198u;
    {
        const bool branch_taken_0x26e198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E198u;
        // 0x26e19c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e198) {
            ctx->pc = 0x26E1A8u;
            goto label_26e1a8;
        }
    }
    ctx->pc = 0x26E1A0u;
label_26e1a0:
    // 0x26e1a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_26e1a4:
    if (ctx->pc == 0x26E1A4u) {
        ctx->pc = 0x26E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1A0u;
        // 0x26e1a4: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1A8u;
        goto label_26e1a8;
    }
    ctx->pc = 0x26E1A0u;
    {
        const bool branch_taken_0x26e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1A0u;
        // 0x26e1a4: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1a0) {
            ctx->pc = 0x26E1CCu;
            goto label_26e1cc;
        }
    }
    ctx->pc = 0x26E1A8u;
label_26e1a8:
    // 0x26e1a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x26e1a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26e1ac:
    // 0x26e1ac: 0x4404b800  mfc1        $a0, $f23
    ctx->pc = 0x26e1acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_26e1b0:
    // 0x26e1b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e1b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e1b4:
    // 0x26e1b4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x26e1b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_26e1b8:
    // 0x26e1b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26e1b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26e1bc:
    // 0x26e1bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x26e1bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_26e1c0:
    // 0x26e1c0: 0x7e4205c0  sq          $v0, 0x5C0($s2)
    ctx->pc = 0x26e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1472), GPR_VEC(ctx, 2));
label_26e1c4:
    // 0x26e1c4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x26e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_26e1c8:
    // 0x26e1c8: 0x7e4305c0  sq          $v1, 0x5C0($s2)
    ctx->pc = 0x26e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1472), GPR_VEC(ctx, 3));
label_26e1cc:
    // 0x26e1cc: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x26e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_26e1d0:
    // 0x26e1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e1d4:
    // 0x26e1d4: 0x24560093  addiu       $s6, $v0, 0x93
    ctx->pc = 0x26e1d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 147));
label_26e1d8:
    // 0x26e1d8: 0xa24303bd  sb          $v1, 0x3BD($s2)
    ctx->pc = 0x26e1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 957), (uint8_t)GPR_U32(ctx, 3));
label_26e1dc:
    // 0x26e1dc: 0xc088e70  jal         func_2239C0
label_26e1e0:
    if (ctx->pc == 0x26E1E0u) {
        ctx->pc = 0x26E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1DCu;
        // 0x26e1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1E4u;
        goto label_26e1e4;
    }
    ctx->pc = 0x26E1DCu;
    SET_GPR_U32(ctx, 31, 0x26E1E4u);
    ctx->pc = 0x26E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1DCu;
    // 0x26e1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x26E1DCu, 0x26E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1E4u;
label_26e1e4:
    // 0x26e1e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_26e1e8:
    if (ctx->pc == 0x26E1E8u) {
        ctx->pc = 0x26E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1E4u;
        // 0x26e1e8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1ECu;
        goto label_26e1ec;
    }
    ctx->pc = 0x26E1E4u;
    {
        const bool branch_taken_0x26e1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1E4u;
        // 0x26e1e8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1e4) {
            ctx->pc = 0x26E22Cu;
            goto label_26e22c;
        }
    }
    ctx->pc = 0x26E1ECu;
label_26e1ec:
    // 0x26e1ec: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x26e1ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_26e1f0:
    // 0x26e1f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26e1f4:
    // 0x26e1f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26e1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26e1f8:
    // 0x26e1f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26e1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26e1fc:
    // 0x26e1fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26e1fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26e200:
    // 0x26e200: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_26e204:
    if (ctx->pc == 0x26E204u) {
        ctx->pc = 0x26E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E200u;
        // 0x26e204: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E208u;
        goto label_26e208;
    }
    ctx->pc = 0x26E200u;
    {
        const bool branch_taken_0x26e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E200u;
        // 0x26e204: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e200) {
            ctx->pc = 0x26E230u;
            goto label_26e230;
        }
    }
    ctx->pc = 0x26E208u;
label_26e208:
    // 0x26e208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e20c:
    // 0x26e20c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26e20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e210:
    // 0x26e210: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x26e210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26e214:
    // 0x26e214: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26e218:
    // 0x26e218: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26e218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e21c:
    // 0x26e21c: 0xc098ce0  jal         func_263380
label_26e220:
    if (ctx->pc == 0x26E220u) {
        ctx->pc = 0x26E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E21Cu;
        // 0x26e220: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E224u;
        goto label_26e224;
    }
    ctx->pc = 0x26E21Cu;
    SET_GPR_U32(ctx, 31, 0x26E224u);
    ctx->pc = 0x26E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E21Cu;
    // 0x26e220: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263380u, 0x26E21Cu, 0x26E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E224u;
label_26e224:
    // 0x26e224: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_26e228:
    if (ctx->pc == 0x26E228u) {
        ctx->pc = 0x26E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E224u;
        // 0x26e228: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E22Cu;
        goto label_26e22c;
    }
    ctx->pc = 0x26E224u;
    {
        const bool branch_taken_0x26e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E224u;
        // 0x26e228: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e224) {
            ctx->pc = 0x26E5B4u;
            goto label_26e5b4;
        }
    }
    ctx->pc = 0x26E22Cu;
label_26e22c:
    // 0x26e22c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_26e230:
    // 0x26e230: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_26e234:
    if (ctx->pc == 0x26E234u) {
        ctx->pc = 0x26E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E230u;
        // 0x26e234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E238u;
        goto label_26e238;
    }
    ctx->pc = 0x26E230u;
    {
        const bool branch_taken_0x26e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E230u;
        // 0x26e234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e230) {
            ctx->pc = 0x26E59Cu;
            goto label_26e59c;
        }
    }
    ctx->pc = 0x26E238u;
label_26e238:
    // 0x26e238: 0x12970024  beq         $s4, $s7, . + 4 + (0x24 << 2)
label_26e23c:
    if (ctx->pc == 0x26E23Cu) {
        ctx->pc = 0x26E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E238u;
        // 0x26e23c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E240u;
        goto label_26e240;
    }
    ctx->pc = 0x26E238u;
    {
        const bool branch_taken_0x26e238 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 23));
        ctx->pc = 0x26E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E238u;
        // 0x26e23c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e238) {
            ctx->pc = 0x26E2CCu;
            goto label_26e2cc;
        }
    }
    ctx->pc = 0x26E240u;
label_26e240:
    // 0x26e240: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26e244:
    // 0x26e244: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x26e244u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_26e248:
    // 0x26e248: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_26e24c:
    // 0x26e24c: 0x60f809  jalr        $v1
label_26e250:
    if (ctx->pc == 0x26E250u) {
        ctx->pc = 0x26E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E24Cu;
        // 0x26e250: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E254u;
        goto label_26e254;
    }
    ctx->pc = 0x26E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26E254u);
        ctx->pc = 0x26E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E24Cu;
        // 0x26e250: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E24Cu, 0x26E254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E254u;
label_26e254:
    // 0x26e254: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e258:
    // 0x26e258: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_26e25c:
    // 0x26e25c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x26e25cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26e260:
    // 0x26e260: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26e260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26e264:
    // 0x26e264: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26e264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26e268:
    // 0x26e268: 0x2688fffc  addiu       $t0, $s4, -0x4
    ctx->pc = 0x26e268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_26e26c:
    // 0x26e26c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e26cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e270:
    // 0x26e270: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e274:
    // 0x26e274: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26e274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26e278:
    // 0x26e278: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x26e278u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_26e27c:
    // 0x26e27c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26e27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26e280:
    // 0x26e280: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26e280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26e284:
    // 0x26e284: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e288:
    // 0x26e288: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x26e288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26e28c:
    // 0x26e28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e290:
    // 0x26e290: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x26e290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e294:
    // 0x26e294: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26e294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e298:
    // 0x26e298: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x26e298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26e29c:
    // 0x26e29c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x26e29cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_26e2a0:
    // 0x26e2a0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x26e2a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_26e2a4:
    // 0x26e2a4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x26e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_26e2a8:
    // 0x26e2a8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x26e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_26e2ac:
    // 0x26e2ac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x26e2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26e2b0:
    // 0x26e2b0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x26e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_26e2b4:
    // 0x26e2b4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x26e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_26e2b8:
    // 0x26e2b8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x26e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_26e2bc:
    // 0x26e2bc: 0xc09d670  jal         func_2759C0
label_26e2c0:
    if (ctx->pc == 0x26E2C0u) {
        ctx->pc = 0x26E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2BCu;
        // 0x26e2c0: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E2C4u;
        goto label_26e2c4;
    }
    ctx->pc = 0x26E2BCu;
    SET_GPR_U32(ctx, 31, 0x26E2C4u);
    ctx->pc = 0x26E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2BCu;
    // 0x26e2c0: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x26E2BCu, 0x26E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2C4u;
label_26e2c4:
    // 0x26e2c4: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_26e2c8:
    if (ctx->pc == 0x26E2C8u) {
        ctx->pc = 0x26E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2C4u;
        // 0x26e2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E2CCu;
        goto label_26e2cc;
    }
    ctx->pc = 0x26E2C4u;
    {
        const bool branch_taken_0x26e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2C4u;
        // 0x26e2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2c4) {
            ctx->pc = 0x26E59Cu;
            goto label_26e59c;
        }
    }
    ctx->pc = 0x26E2CCu;
label_26e2cc:
    // 0x26e2cc: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x26e2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_26e2d0:
    // 0x26e2d0: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_26e2d4:
    // 0x26e2d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26e2d8:
    // 0x26e2d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26e2dc:
    // 0x26e2dc: 0xc12e29c  jal         func_4B8A70
label_26e2e0:
    if (ctx->pc == 0x26E2E0u) {
        ctx->pc = 0x26E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2DCu;
        // 0x26e2e0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E2E4u;
        goto label_26e2e4;
    }
    ctx->pc = 0x26E2DCu;
    SET_GPR_U32(ctx, 31, 0x26E2E4u);
    ctx->pc = 0x26E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2DCu;
    // 0x26e2e0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x26E2DCu, 0x26E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2E4u;
label_26e2e4:
    // 0x26e2e4: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x26e2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_26e2e8:
    // 0x26e2e8: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x26e2e8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_26e2ec:
    // 0x26e2ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26e2f0:
    // 0x26e2f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26e2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26e2f4:
    // 0x26e2f4: 0xc12e310  jal         func_4B8C40
label_26e2f8:
    if (ctx->pc == 0x26E2F8u) {
        ctx->pc = 0x26E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2F4u;
        // 0x26e2f8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E2FCu;
        goto label_26e2fc;
    }
    ctx->pc = 0x26E2F4u;
    SET_GPR_U32(ctx, 31, 0x26E2FCu);
    ctx->pc = 0x26E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2F4u;
    // 0x26e2f8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x26E2F4u, 0x26E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2FCu;
label_26e2fc:
    // 0x26e2fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26e2fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26e300:
    // 0x26e300: 0xc0cd5ea  jal         func_3357A8
label_26e304:
    if (ctx->pc == 0x26E304u) {
        ctx->pc = 0x26E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E300u;
        // 0x26e304: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E308u;
        goto label_26e308;
    }
    ctx->pc = 0x26E300u;
    SET_GPR_U32(ctx, 31, 0x26E308u);
    ctx->pc = 0x26E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E300u;
    // 0x26e304: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x26E300u, 0x26E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E308u;
label_26e308:
    // 0x26e308: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_26e30c:
    if (ctx->pc == 0x26E30Cu) {
        ctx->pc = 0x26E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E308u;
        // 0x26e30c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E310u;
        goto label_26e310;
    }
    ctx->pc = 0x26E308u;
    {
        const bool branch_taken_0x26e308 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x26E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E308u;
        // 0x26e30c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e308) {
            ctx->pc = 0x26E324u;
            goto label_26e324;
        }
    }
    ctx->pc = 0x26E310u;
label_26e310:
    // 0x26e310: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x26e310u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26e314:
    // 0x26e314: 0x0  nop
    ctx->pc = 0x26e314u;
    // NOP
label_26e318:
    // 0x26e318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26e318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26e31c:
    // 0x26e31c: 0x10000008  b           . + 4 + (0x8 << 2)
label_26e320:
    if (ctx->pc == 0x26E320u) {
        ctx->pc = 0x26E324u;
        goto label_26e324;
    }
    ctx->pc = 0x26E31Cu;
    {
        const bool branch_taken_0x26e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e31c) {
            ctx->pc = 0x26E340u;
            goto label_26e340;
        }
    }
    ctx->pc = 0x26E324u;
label_26e324:
    // 0x26e324: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x26e324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_26e328:
    // 0x26e328: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x26e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_26e32c:
    // 0x26e32c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26e330:
    // 0x26e330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26e330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26e334:
    // 0x26e334: 0x0  nop
    ctx->pc = 0x26e334u;
    // NOP
label_26e338:
    // 0x26e338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26e338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26e33c:
    // 0x26e33c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26e33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26e340:
    // 0x26e340: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26e340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_26e344:
    // 0x26e344: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26e344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26e348:
    // 0x26e348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26e34c:
    // 0x26e34c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_26e350:
    // 0x26e350: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26e350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26e354:
    // 0x26e354: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x26e354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_26e358:
    // 0x26e358: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26e358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26e35c:
    // 0x26e35c: 0x460065c0  add.s       $f23, $f12, $f0
    ctx->pc = 0x26e35cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_26e360:
    // 0x26e360: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x26e360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26e364:
    // 0x26e364: 0x0  nop
    ctx->pc = 0x26e364u;
    // NOP
label_26e368:
    // 0x26e368: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26e36c:
    if (ctx->pc == 0x26E36Cu) {
        ctx->pc = 0x26E370u;
        goto label_26e370;
    }
    ctx->pc = 0x26E368u;
    {
        const bool branch_taken_0x26e368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e368) {
            ctx->pc = 0x26E384u;
            goto label_26e384;
        }
    }
    ctx->pc = 0x26E370u;
label_26e370:
    // 0x26e370: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x26e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_26e374:
    // 0x26e374: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26e374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26e378:
    // 0x26e378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26e37c:
    // 0x26e37c: 0x0  nop
    ctx->pc = 0x26e37cu;
    // NOP
label_26e380:
    // 0x26e380: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x26e380u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_26e384:
    // 0x26e384: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x26e384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_26e388:
    // 0x26e388: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26e388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26e38c:
    // 0x26e38c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26e390:
    // 0x26e390: 0x0  nop
    ctx->pc = 0x26e390u;
    // NOP
label_26e394:
    // 0x26e394: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x26e394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26e398:
    // 0x26e398: 0x0  nop
    ctx->pc = 0x26e398u;
    // NOP
label_26e39c:
    // 0x26e39c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26e3a0:
    if (ctx->pc == 0x26E3A0u) {
        ctx->pc = 0x26E3A4u;
        goto label_26e3a4;
    }
    ctx->pc = 0x26E39Cu;
    {
        const bool branch_taken_0x26e39c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e39c) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E3A4u;
label_26e3a4:
    // 0x26e3a4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_26e3a8:
    // 0x26e3a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26e3a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26e3ac:
    // 0x26e3ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26e3b0:
    // 0x26e3b0: 0x0  nop
    ctx->pc = 0x26e3b0u;
    // NOP
label_26e3b4:
    // 0x26e3b4: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x26e3b4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_26e3b8:
    // 0x26e3b8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x26e3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_26e3bc:
    // 0x26e3bc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26e3bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_26e3c0:
    // 0x26e3c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x26e3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_26e3c4:
    // 0x26e3c4: 0xc08f3dc  jal         func_23CF70
label_26e3c8:
    if (ctx->pc == 0x26E3C8u) {
        ctx->pc = 0x26E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3C4u;
        // 0x26e3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E3CCu;
        goto label_26e3cc;
    }
    ctx->pc = 0x26E3C4u;
    SET_GPR_U32(ctx, 31, 0x26E3CCu);
    ctx->pc = 0x26E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3C4u;
    // 0x26e3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x26E3C4u, 0x26E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3CCu;
label_26e3cc:
    // 0x26e3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e3d0:
    // 0x26e3d0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x26e3d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_26e3d4:
    // 0x26e3d4: 0xc08f3e2  jal         func_23CF88
label_26e3d8:
    if (ctx->pc == 0x26E3D8u) {
        ctx->pc = 0x26E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3D4u;
        // 0x26e3d8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E3DCu;
        goto label_26e3dc;
    }
    ctx->pc = 0x26E3D4u;
    SET_GPR_U32(ctx, 31, 0x26E3DCu);
    ctx->pc = 0x26E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3D4u;
    // 0x26e3d8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x26E3D4u, 0x26E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3DCu;
label_26e3dc:
    // 0x26e3dc: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x26e3dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_26e3e0:
    // 0x26e3e0: 0x27c64b00  addiu       $a2, $fp, 0x4B00
    ctx->pc = 0x26e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_26e3e4:
    // 0x26e3e4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x26e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_26e3e8:
    // 0x26e3e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26e3ec:
    // 0x26e3ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26e3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_26e3f0:
    // 0x26e3f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_26e3f4:
    // 0x26e3f4: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x26e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_26e3f8:
    // 0x26e3f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_26e3fc:
    // 0x26e3fc: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x26e3fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26e400:
    // 0x26e400: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x26e400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_26e404:
    // 0x26e404: 0x4615bd42  mul.s       $f21, $f23, $f21
    ctx->pc = 0x26e404u;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_26e408:
    // 0x26e408: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x26e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_26e40c:
    // 0x26e40c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26e40cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26e410:
    // 0x26e410: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x26e410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_26e414:
    // 0x26e414: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x26e414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_26e418:
    // 0x26e418: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_26e41c:
    // 0x26e41c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x26e41cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26e420:
    // 0x26e420: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x26e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
label_26e424:
    // 0x26e424: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_26e428:
    // 0x26e428: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x26e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
label_26e42c:
    // 0x26e42c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_26e430:
    // 0x26e430: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26e430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_26e434:
    // 0x26e434: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26e434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26e438:
    // 0x26e438: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e43c:
    // 0x26e43c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x26e43cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_26e440:
    // 0x26e440: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x26e440u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26e444:
    // 0x26e444: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x26e444u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_26e448:
    // 0x26e448: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x26e448u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_26e44c:
    // 0x26e44c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x26e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_26e450:
    // 0x26e450: 0xc12e310  jal         func_4B8C40
label_26e454:
    if (ctx->pc == 0x26E454u) {
        ctx->pc = 0x26E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E450u;
        // 0x26e454: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E458u;
        goto label_26e458;
    }
    ctx->pc = 0x26E450u;
    SET_GPR_U32(ctx, 31, 0x26E458u);
    ctx->pc = 0x26E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E450u;
    // 0x26e454: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x26E450u, 0x26E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E458u;
label_26e458:
    // 0x26e458: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26e458u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26e45c:
    // 0x26e45c: 0xc12e29c  jal         func_4B8A70
label_26e460:
    if (ctx->pc == 0x26E460u) {
        ctx->pc = 0x26E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E45Cu;
        // 0x26e460: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E464u;
        goto label_26e464;
    }
    ctx->pc = 0x26E45Cu;
    SET_GPR_U32(ctx, 31, 0x26E464u);
    ctx->pc = 0x26E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E45Cu;
    // 0x26e460: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x26E45Cu, 0x26E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E464u;
label_26e464:
    // 0x26e464: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x26e464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_26e468:
    // 0x26e468: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x26e468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_26e46c:
    // 0x26e46c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e46cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e470:
    // 0x26e470: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x26e470u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_26e474:
    // 0x26e474: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26e474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26e478:
    // 0x26e478: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x26e478u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_26e47c:
    // 0x26e47c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x26e47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_26e480:
    // 0x26e480: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x26e480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_26e484:
    // 0x26e484: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x26e484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26e488:
    // 0x26e488: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x26e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26e48c:
    // 0x26e48c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x26e48cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e490:
    // 0x26e490: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x26e490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26e494:
    // 0x26e494: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x26e494u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_26e498:
    // 0x26e498: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x26e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e49c:
    // 0x26e49c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x26e49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26e4a0:
    // 0x26e4a0: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x26e4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_26e4a4:
    // 0x26e4a4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x26e4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_26e4a8:
    // 0x26e4a8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x26e4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_26e4ac:
    // 0x26e4ac: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x26e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_26e4b0:
    // 0x26e4b0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x26e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_26e4b4:
    // 0x26e4b4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x26e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_26e4b8:
    // 0x26e4b8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x26e4b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26e4bc:
    // 0x26e4bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e4bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e4c0:
    // 0x26e4c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e4c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e4c4:
    // 0x26e4c4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x26e4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e4c8:
    // 0x26e4c8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x26e4c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26e4cc:
    // 0x26e4cc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x26e4ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e4d0:
    // 0x26e4d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x26e4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e4d4:
    // 0x26e4d4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x26e4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26e4d8:
    // 0x26e4d8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x26e4d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e4dc:
    // 0x26e4dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x26e4dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e4e0:
    // 0x26e4e0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x26e4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e4e4:
    // 0x26e4e4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x26e4e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e4e8:
    // 0x26e4e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x26e4e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_26e4ec:
    // 0x26e4ec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x26e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_26e4f0:
    // 0x26e4f0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x26e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_26e4f4:
    // 0x26e4f4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x26e4f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_26e4f8:
    // 0x26e4f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x26e4f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e4fc:
    // 0x26e4fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e4fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26e500:
    // 0x26e500: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x26e500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e504:
    // 0x26e504: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x26e504u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26e508:
    // 0x26e508: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x26e508u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e50c:
    // 0x26e50c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x26e50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e510:
    // 0x26e510: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x26e510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e514:
    // 0x26e514: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x26e514u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_26e518:
    // 0x26e518: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x26e518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e51c:
    // 0x26e51c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26e51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e520:
    // 0x26e520: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x26e520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26e524:
    // 0x26e524: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x26e524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e528:
    // 0x26e528: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x26e528u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26e52c:
    // 0x26e52c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x26e52cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_26e530:
    // 0x26e530: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x26e530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e534:
    // 0x26e534: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x26e534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26e538:
    // 0x26e538: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x26e538u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_26e53c:
    // 0x26e53c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x26e53cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26e540:
    // 0x26e540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e544:
    // 0x26e544: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x26e544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_26e548:
    // 0x26e548: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26e548u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26e54c:
    // 0x26e54c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x26e54cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26e550:
    // 0x26e550: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x26e550u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_26e554:
    // 0x26e554: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x26e554u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_26e558:
    // 0x26e558: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x26e558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_26e55c:
    // 0x26e55c: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x26e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_26e560:
    // 0x26e560: 0x4618bdc0  add.s       $f23, $f23, $f24
    ctx->pc = 0x26e560u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
label_26e564:
    // 0x26e564: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x26e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
label_26e568:
    // 0x26e568: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x26e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
label_26e56c:
    // 0x26e56c: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x26e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
label_26e570:
    // 0x26e570: 0xc08f3dc  jal         func_23CF70
label_26e574:
    if (ctx->pc == 0x26E574u) {
        ctx->pc = 0x26E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E570u;
        // 0x26e574: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E578u;
        goto label_26e578;
    }
    ctx->pc = 0x26E570u;
    SET_GPR_U32(ctx, 31, 0x26E578u);
    ctx->pc = 0x26E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E570u;
    // 0x26e574: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x26E570u, 0x26E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E578u;
label_26e578:
    // 0x26e578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e57c:
    // 0x26e57c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26e57cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_26e580:
    // 0x26e580: 0xc08f4ae  jal         func_23D2B8
label_26e584:
    if (ctx->pc == 0x26E584u) {
        ctx->pc = 0x26E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E580u;
        // 0x26e584: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E588u;
        goto label_26e588;
    }
    ctx->pc = 0x26E580u;
    SET_GPR_U32(ctx, 31, 0x26E588u);
    ctx->pc = 0x26E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E580u;
    // 0x26e584: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x26E580u, 0x26E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E588u;
label_26e588:
    // 0x26e588: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26e588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_26e58c:
    // 0x26e58c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x26e58cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_26e590:
    // 0x26e590: 0xc08f3e2  jal         func_23CF88
label_26e594:
    if (ctx->pc == 0x26E594u) {
        ctx->pc = 0x26E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E590u;
        // 0x26e594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E598u;
        goto label_26e598;
    }
    ctx->pc = 0x26E590u;
    SET_GPR_U32(ctx, 31, 0x26E598u);
    ctx->pc = 0x26E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E590u;
    // 0x26e594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x26E590u, 0x26E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E598u;
label_26e598:
    // 0x26e598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e59c:
    // 0x26e59c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26e59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e5a0:
    // 0x26e5a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26e5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26e5a4:
    // 0x26e5a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e5a8:
    // 0x26e5a8: 0xc098ab2  jal         func_262AC8
label_26e5ac:
    if (ctx->pc == 0x26E5ACu) {
        ctx->pc = 0x26E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5A8u;
        // 0x26e5ac: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E5B0u;
        goto label_26e5b0;
    }
    ctx->pc = 0x26E5A8u;
    SET_GPR_U32(ctx, 31, 0x26E5B0u);
    ctx->pc = 0x26E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5A8u;
    // 0x26e5ac: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x26E5A8u, 0x26E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5B0u;
label_26e5b0:
    // 0x26e5b0: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x26e5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_26e5b4:
    // 0x26e5b4: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x26e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_26e5b8:
    // 0x26e5b8: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x26e5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_26e5bc:
    // 0x26e5bc: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x26e5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_26e5c0:
    // 0x26e5c0: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x26e5c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_26e5c4:
    // 0x26e5c4: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x26e5c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_26e5c8:
    // 0x26e5c8: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x26e5c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_26e5cc:
    // 0x26e5cc: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x26e5ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_26e5d0:
    // 0x26e5d0: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x26e5d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_26e5d4:
    // 0x26e5d4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x26e5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_26e5d8:
    // 0x26e5d8: 0xc7b801e0  lwc1        $f24, 0x1E0($sp)
    ctx->pc = 0x26e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_26e5dc:
    // 0x26e5dc: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x26e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_26e5e0:
    // 0x26e5e0: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x26e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26e5e4:
    // 0x26e5e4: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x26e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26e5e8:
    // 0x26e5e8: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x26e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26e5ec:
    // 0x26e5ec: 0x3e00008  jr          $ra
label_26e5f0:
    if (ctx->pc == 0x26E5F0u) {
        ctx->pc = 0x26E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5ECu;
        // 0x26e5f0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E5F4u;
        goto label_26e5f4;
    }
    ctx->pc = 0x26E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5ECu;
        // 0x26e5f0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E5F4u;
label_26e5f4:
    // 0x26e5f4: 0x0  nop
    ctx->pc = 0x26e5f4u;
    // NOP
    ctx->pc = 0x26e5f8u;
}
