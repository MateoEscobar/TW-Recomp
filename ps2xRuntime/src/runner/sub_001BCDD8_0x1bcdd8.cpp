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

// Function: sub_001BCDD8
// Address: 0x1bcdd8 - 0x1bd428
void sub_001BCDD8_0x1bcdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCDD8_0x1bcdd8");
#endif

    switch (ctx->pc) {
        case 0x1bcdd8u: goto label_1bcdd8;
        case 0x1bcddcu: goto label_1bcddc;
        case 0x1bcde0u: goto label_1bcde0;
        case 0x1bcde4u: goto label_1bcde4;
        case 0x1bcde8u: goto label_1bcde8;
        case 0x1bcdecu: goto label_1bcdec;
        case 0x1bcdf0u: goto label_1bcdf0;
        case 0x1bcdf4u: goto label_1bcdf4;
        case 0x1bcdf8u: goto label_1bcdf8;
        case 0x1bcdfcu: goto label_1bcdfc;
        case 0x1bce00u: goto label_1bce00;
        case 0x1bce04u: goto label_1bce04;
        case 0x1bce08u: goto label_1bce08;
        case 0x1bce0cu: goto label_1bce0c;
        case 0x1bce10u: goto label_1bce10;
        case 0x1bce14u: goto label_1bce14;
        case 0x1bce18u: goto label_1bce18;
        case 0x1bce1cu: goto label_1bce1c;
        case 0x1bce20u: goto label_1bce20;
        case 0x1bce24u: goto label_1bce24;
        case 0x1bce28u: goto label_1bce28;
        case 0x1bce2cu: goto label_1bce2c;
        case 0x1bce30u: goto label_1bce30;
        case 0x1bce34u: goto label_1bce34;
        case 0x1bce38u: goto label_1bce38;
        case 0x1bce3cu: goto label_1bce3c;
        case 0x1bce40u: goto label_1bce40;
        case 0x1bce44u: goto label_1bce44;
        case 0x1bce48u: goto label_1bce48;
        case 0x1bce4cu: goto label_1bce4c;
        case 0x1bce50u: goto label_1bce50;
        case 0x1bce54u: goto label_1bce54;
        case 0x1bce58u: goto label_1bce58;
        case 0x1bce5cu: goto label_1bce5c;
        case 0x1bce60u: goto label_1bce60;
        case 0x1bce64u: goto label_1bce64;
        case 0x1bce68u: goto label_1bce68;
        case 0x1bce6cu: goto label_1bce6c;
        case 0x1bce70u: goto label_1bce70;
        case 0x1bce74u: goto label_1bce74;
        case 0x1bce78u: goto label_1bce78;
        case 0x1bce7cu: goto label_1bce7c;
        case 0x1bce80u: goto label_1bce80;
        case 0x1bce84u: goto label_1bce84;
        case 0x1bce88u: goto label_1bce88;
        case 0x1bce8cu: goto label_1bce8c;
        case 0x1bce90u: goto label_1bce90;
        case 0x1bce94u: goto label_1bce94;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bcea0u: goto label_1bcea0;
        case 0x1bcea4u: goto label_1bcea4;
        case 0x1bcea8u: goto label_1bcea8;
        case 0x1bceacu: goto label_1bceac;
        case 0x1bceb0u: goto label_1bceb0;
        case 0x1bceb4u: goto label_1bceb4;
        case 0x1bceb8u: goto label_1bceb8;
        case 0x1bcebcu: goto label_1bcebc;
        case 0x1bcec0u: goto label_1bcec0;
        case 0x1bcec4u: goto label_1bcec4;
        case 0x1bcec8u: goto label_1bcec8;
        case 0x1bceccu: goto label_1bcecc;
        case 0x1bced0u: goto label_1bced0;
        case 0x1bced4u: goto label_1bced4;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcedcu: goto label_1bcedc;
        case 0x1bcee0u: goto label_1bcee0;
        case 0x1bcee4u: goto label_1bcee4;
        case 0x1bcee8u: goto label_1bcee8;
        case 0x1bceecu: goto label_1bceec;
        case 0x1bcef0u: goto label_1bcef0;
        case 0x1bcef4u: goto label_1bcef4;
        case 0x1bcef8u: goto label_1bcef8;
        case 0x1bcefcu: goto label_1bcefc;
        case 0x1bcf00u: goto label_1bcf00;
        case 0x1bcf04u: goto label_1bcf04;
        case 0x1bcf08u: goto label_1bcf08;
        case 0x1bcf0cu: goto label_1bcf0c;
        case 0x1bcf10u: goto label_1bcf10;
        case 0x1bcf14u: goto label_1bcf14;
        case 0x1bcf18u: goto label_1bcf18;
        case 0x1bcf1cu: goto label_1bcf1c;
        case 0x1bcf20u: goto label_1bcf20;
        case 0x1bcf24u: goto label_1bcf24;
        case 0x1bcf28u: goto label_1bcf28;
        case 0x1bcf2cu: goto label_1bcf2c;
        case 0x1bcf30u: goto label_1bcf30;
        case 0x1bcf34u: goto label_1bcf34;
        case 0x1bcf38u: goto label_1bcf38;
        case 0x1bcf3cu: goto label_1bcf3c;
        case 0x1bcf40u: goto label_1bcf40;
        case 0x1bcf44u: goto label_1bcf44;
        case 0x1bcf48u: goto label_1bcf48;
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf50u: goto label_1bcf50;
        case 0x1bcf54u: goto label_1bcf54;
        case 0x1bcf58u: goto label_1bcf58;
        case 0x1bcf5cu: goto label_1bcf5c;
        case 0x1bcf60u: goto label_1bcf60;
        case 0x1bcf64u: goto label_1bcf64;
        case 0x1bcf68u: goto label_1bcf68;
        case 0x1bcf6cu: goto label_1bcf6c;
        case 0x1bcf70u: goto label_1bcf70;
        case 0x1bcf74u: goto label_1bcf74;
        case 0x1bcf78u: goto label_1bcf78;
        case 0x1bcf7cu: goto label_1bcf7c;
        case 0x1bcf80u: goto label_1bcf80;
        case 0x1bcf84u: goto label_1bcf84;
        case 0x1bcf88u: goto label_1bcf88;
        case 0x1bcf8cu: goto label_1bcf8c;
        case 0x1bcf90u: goto label_1bcf90;
        case 0x1bcf94u: goto label_1bcf94;
        case 0x1bcf98u: goto label_1bcf98;
        case 0x1bcf9cu: goto label_1bcf9c;
        case 0x1bcfa0u: goto label_1bcfa0;
        case 0x1bcfa4u: goto label_1bcfa4;
        case 0x1bcfa8u: goto label_1bcfa8;
        case 0x1bcfacu: goto label_1bcfac;
        case 0x1bcfb0u: goto label_1bcfb0;
        case 0x1bcfb4u: goto label_1bcfb4;
        case 0x1bcfb8u: goto label_1bcfb8;
        case 0x1bcfbcu: goto label_1bcfbc;
        case 0x1bcfc0u: goto label_1bcfc0;
        case 0x1bcfc4u: goto label_1bcfc4;
        case 0x1bcfc8u: goto label_1bcfc8;
        case 0x1bcfccu: goto label_1bcfcc;
        case 0x1bcfd0u: goto label_1bcfd0;
        case 0x1bcfd4u: goto label_1bcfd4;
        case 0x1bcfd8u: goto label_1bcfd8;
        case 0x1bcfdcu: goto label_1bcfdc;
        case 0x1bcfe0u: goto label_1bcfe0;
        case 0x1bcfe4u: goto label_1bcfe4;
        case 0x1bcfe8u: goto label_1bcfe8;
        case 0x1bcfecu: goto label_1bcfec;
        case 0x1bcff0u: goto label_1bcff0;
        case 0x1bcff4u: goto label_1bcff4;
        case 0x1bcff8u: goto label_1bcff8;
        case 0x1bcffcu: goto label_1bcffc;
        case 0x1bd000u: goto label_1bd000;
        case 0x1bd004u: goto label_1bd004;
        case 0x1bd008u: goto label_1bd008;
        case 0x1bd00cu: goto label_1bd00c;
        case 0x1bd010u: goto label_1bd010;
        case 0x1bd014u: goto label_1bd014;
        case 0x1bd018u: goto label_1bd018;
        case 0x1bd01cu: goto label_1bd01c;
        case 0x1bd020u: goto label_1bd020;
        case 0x1bd024u: goto label_1bd024;
        case 0x1bd028u: goto label_1bd028;
        case 0x1bd02cu: goto label_1bd02c;
        case 0x1bd030u: goto label_1bd030;
        case 0x1bd034u: goto label_1bd034;
        case 0x1bd038u: goto label_1bd038;
        case 0x1bd03cu: goto label_1bd03c;
        case 0x1bd040u: goto label_1bd040;
        case 0x1bd044u: goto label_1bd044;
        case 0x1bd048u: goto label_1bd048;
        case 0x1bd04cu: goto label_1bd04c;
        case 0x1bd050u: goto label_1bd050;
        case 0x1bd054u: goto label_1bd054;
        case 0x1bd058u: goto label_1bd058;
        case 0x1bd05cu: goto label_1bd05c;
        case 0x1bd060u: goto label_1bd060;
        case 0x1bd064u: goto label_1bd064;
        case 0x1bd068u: goto label_1bd068;
        case 0x1bd06cu: goto label_1bd06c;
        case 0x1bd070u: goto label_1bd070;
        case 0x1bd074u: goto label_1bd074;
        case 0x1bd078u: goto label_1bd078;
        case 0x1bd07cu: goto label_1bd07c;
        case 0x1bd080u: goto label_1bd080;
        case 0x1bd084u: goto label_1bd084;
        case 0x1bd088u: goto label_1bd088;
        case 0x1bd08cu: goto label_1bd08c;
        case 0x1bd090u: goto label_1bd090;
        case 0x1bd094u: goto label_1bd094;
        case 0x1bd098u: goto label_1bd098;
        case 0x1bd09cu: goto label_1bd09c;
        case 0x1bd0a0u: goto label_1bd0a0;
        case 0x1bd0a4u: goto label_1bd0a4;
        case 0x1bd0a8u: goto label_1bd0a8;
        case 0x1bd0acu: goto label_1bd0ac;
        case 0x1bd0b0u: goto label_1bd0b0;
        case 0x1bd0b4u: goto label_1bd0b4;
        case 0x1bd0b8u: goto label_1bd0b8;
        case 0x1bd0bcu: goto label_1bd0bc;
        case 0x1bd0c0u: goto label_1bd0c0;
        case 0x1bd0c4u: goto label_1bd0c4;
        case 0x1bd0c8u: goto label_1bd0c8;
        case 0x1bd0ccu: goto label_1bd0cc;
        case 0x1bd0d0u: goto label_1bd0d0;
        case 0x1bd0d4u: goto label_1bd0d4;
        case 0x1bd0d8u: goto label_1bd0d8;
        case 0x1bd0dcu: goto label_1bd0dc;
        case 0x1bd0e0u: goto label_1bd0e0;
        case 0x1bd0e4u: goto label_1bd0e4;
        case 0x1bd0e8u: goto label_1bd0e8;
        case 0x1bd0ecu: goto label_1bd0ec;
        case 0x1bd0f0u: goto label_1bd0f0;
        case 0x1bd0f4u: goto label_1bd0f4;
        case 0x1bd0f8u: goto label_1bd0f8;
        case 0x1bd0fcu: goto label_1bd0fc;
        case 0x1bd100u: goto label_1bd100;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd10cu: goto label_1bd10c;
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd114u: goto label_1bd114;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd11cu: goto label_1bd11c;
        case 0x1bd120u: goto label_1bd120;
        case 0x1bd124u: goto label_1bd124;
        case 0x1bd128u: goto label_1bd128;
        case 0x1bd12cu: goto label_1bd12c;
        case 0x1bd130u: goto label_1bd130;
        case 0x1bd134u: goto label_1bd134;
        case 0x1bd138u: goto label_1bd138;
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd140u: goto label_1bd140;
        case 0x1bd144u: goto label_1bd144;
        case 0x1bd148u: goto label_1bd148;
        case 0x1bd14cu: goto label_1bd14c;
        case 0x1bd150u: goto label_1bd150;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd158u: goto label_1bd158;
        case 0x1bd15cu: goto label_1bd15c;
        case 0x1bd160u: goto label_1bd160;
        case 0x1bd164u: goto label_1bd164;
        case 0x1bd168u: goto label_1bd168;
        case 0x1bd16cu: goto label_1bd16c;
        case 0x1bd170u: goto label_1bd170;
        case 0x1bd174u: goto label_1bd174;
        case 0x1bd178u: goto label_1bd178;
        case 0x1bd17cu: goto label_1bd17c;
        case 0x1bd180u: goto label_1bd180;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd188u: goto label_1bd188;
        case 0x1bd18cu: goto label_1bd18c;
        case 0x1bd190u: goto label_1bd190;
        case 0x1bd194u: goto label_1bd194;
        case 0x1bd198u: goto label_1bd198;
        case 0x1bd19cu: goto label_1bd19c;
        case 0x1bd1a0u: goto label_1bd1a0;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1a8u: goto label_1bd1a8;
        case 0x1bd1acu: goto label_1bd1ac;
        case 0x1bd1b0u: goto label_1bd1b0;
        case 0x1bd1b4u: goto label_1bd1b4;
        case 0x1bd1b8u: goto label_1bd1b8;
        case 0x1bd1bcu: goto label_1bd1bc;
        case 0x1bd1c0u: goto label_1bd1c0;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1c8u: goto label_1bd1c8;
        case 0x1bd1ccu: goto label_1bd1cc;
        case 0x1bd1d0u: goto label_1bd1d0;
        case 0x1bd1d4u: goto label_1bd1d4;
        case 0x1bd1d8u: goto label_1bd1d8;
        case 0x1bd1dcu: goto label_1bd1dc;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1e4u: goto label_1bd1e4;
        case 0x1bd1e8u: goto label_1bd1e8;
        case 0x1bd1ecu: goto label_1bd1ec;
        case 0x1bd1f0u: goto label_1bd1f0;
        case 0x1bd1f4u: goto label_1bd1f4;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd1fcu: goto label_1bd1fc;
        case 0x1bd200u: goto label_1bd200;
        case 0x1bd204u: goto label_1bd204;
        case 0x1bd208u: goto label_1bd208;
        case 0x1bd20cu: goto label_1bd20c;
        case 0x1bd210u: goto label_1bd210;
        case 0x1bd214u: goto label_1bd214;
        case 0x1bd218u: goto label_1bd218;
        case 0x1bd21cu: goto label_1bd21c;
        case 0x1bd220u: goto label_1bd220;
        case 0x1bd224u: goto label_1bd224;
        case 0x1bd228u: goto label_1bd228;
        case 0x1bd22cu: goto label_1bd22c;
        case 0x1bd230u: goto label_1bd230;
        case 0x1bd234u: goto label_1bd234;
        case 0x1bd238u: goto label_1bd238;
        case 0x1bd23cu: goto label_1bd23c;
        case 0x1bd240u: goto label_1bd240;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd248u: goto label_1bd248;
        case 0x1bd24cu: goto label_1bd24c;
        case 0x1bd250u: goto label_1bd250;
        case 0x1bd254u: goto label_1bd254;
        case 0x1bd258u: goto label_1bd258;
        case 0x1bd25cu: goto label_1bd25c;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd264u: goto label_1bd264;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd26cu: goto label_1bd26c;
        case 0x1bd270u: goto label_1bd270;
        case 0x1bd274u: goto label_1bd274;
        case 0x1bd278u: goto label_1bd278;
        case 0x1bd27cu: goto label_1bd27c;
        case 0x1bd280u: goto label_1bd280;
        case 0x1bd284u: goto label_1bd284;
        case 0x1bd288u: goto label_1bd288;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd290u: goto label_1bd290;
        case 0x1bd294u: goto label_1bd294;
        case 0x1bd298u: goto label_1bd298;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2a0u: goto label_1bd2a0;
        case 0x1bd2a4u: goto label_1bd2a4;
        case 0x1bd2a8u: goto label_1bd2a8;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2b0u: goto label_1bd2b0;
        case 0x1bd2b4u: goto label_1bd2b4;
        case 0x1bd2b8u: goto label_1bd2b8;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2c0u: goto label_1bd2c0;
        case 0x1bd2c4u: goto label_1bd2c4;
        case 0x1bd2c8u: goto label_1bd2c8;
        case 0x1bd2ccu: goto label_1bd2cc;
        case 0x1bd2d0u: goto label_1bd2d0;
        case 0x1bd2d4u: goto label_1bd2d4;
        case 0x1bd2d8u: goto label_1bd2d8;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2e0u: goto label_1bd2e0;
        case 0x1bd2e4u: goto label_1bd2e4;
        case 0x1bd2e8u: goto label_1bd2e8;
        case 0x1bd2ecu: goto label_1bd2ec;
        case 0x1bd2f0u: goto label_1bd2f0;
        case 0x1bd2f4u: goto label_1bd2f4;
        case 0x1bd2f8u: goto label_1bd2f8;
        case 0x1bd2fcu: goto label_1bd2fc;
        case 0x1bd300u: goto label_1bd300;
        case 0x1bd304u: goto label_1bd304;
        case 0x1bd308u: goto label_1bd308;
        case 0x1bd30cu: goto label_1bd30c;
        case 0x1bd310u: goto label_1bd310;
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd318u: goto label_1bd318;
        case 0x1bd31cu: goto label_1bd31c;
        case 0x1bd320u: goto label_1bd320;
        case 0x1bd324u: goto label_1bd324;
        case 0x1bd328u: goto label_1bd328;
        case 0x1bd32cu: goto label_1bd32c;
        case 0x1bd330u: goto label_1bd330;
        case 0x1bd334u: goto label_1bd334;
        case 0x1bd338u: goto label_1bd338;
        case 0x1bd33cu: goto label_1bd33c;
        case 0x1bd340u: goto label_1bd340;
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd348u: goto label_1bd348;
        case 0x1bd34cu: goto label_1bd34c;
        case 0x1bd350u: goto label_1bd350;
        case 0x1bd354u: goto label_1bd354;
        case 0x1bd358u: goto label_1bd358;
        case 0x1bd35cu: goto label_1bd35c;
        case 0x1bd360u: goto label_1bd360;
        case 0x1bd364u: goto label_1bd364;
        case 0x1bd368u: goto label_1bd368;
        case 0x1bd36cu: goto label_1bd36c;
        case 0x1bd370u: goto label_1bd370;
        case 0x1bd374u: goto label_1bd374;
        case 0x1bd378u: goto label_1bd378;
        case 0x1bd37cu: goto label_1bd37c;
        case 0x1bd380u: goto label_1bd380;
        case 0x1bd384u: goto label_1bd384;
        case 0x1bd388u: goto label_1bd388;
        case 0x1bd38cu: goto label_1bd38c;
        case 0x1bd390u: goto label_1bd390;
        case 0x1bd394u: goto label_1bd394;
        case 0x1bd398u: goto label_1bd398;
        case 0x1bd39cu: goto label_1bd39c;
        case 0x1bd3a0u: goto label_1bd3a0;
        case 0x1bd3a4u: goto label_1bd3a4;
        case 0x1bd3a8u: goto label_1bd3a8;
        case 0x1bd3acu: goto label_1bd3ac;
        case 0x1bd3b0u: goto label_1bd3b0;
        case 0x1bd3b4u: goto label_1bd3b4;
        case 0x1bd3b8u: goto label_1bd3b8;
        case 0x1bd3bcu: goto label_1bd3bc;
        case 0x1bd3c0u: goto label_1bd3c0;
        case 0x1bd3c4u: goto label_1bd3c4;
        case 0x1bd3c8u: goto label_1bd3c8;
        case 0x1bd3ccu: goto label_1bd3cc;
        case 0x1bd3d0u: goto label_1bd3d0;
        case 0x1bd3d4u: goto label_1bd3d4;
        case 0x1bd3d8u: goto label_1bd3d8;
        case 0x1bd3dcu: goto label_1bd3dc;
        case 0x1bd3e0u: goto label_1bd3e0;
        case 0x1bd3e4u: goto label_1bd3e4;
        case 0x1bd3e8u: goto label_1bd3e8;
        case 0x1bd3ecu: goto label_1bd3ec;
        case 0x1bd3f0u: goto label_1bd3f0;
        case 0x1bd3f4u: goto label_1bd3f4;
        case 0x1bd3f8u: goto label_1bd3f8;
        case 0x1bd3fcu: goto label_1bd3fc;
        case 0x1bd400u: goto label_1bd400;
        case 0x1bd404u: goto label_1bd404;
        case 0x1bd408u: goto label_1bd408;
        case 0x1bd40cu: goto label_1bd40c;
        case 0x1bd410u: goto label_1bd410;
        case 0x1bd414u: goto label_1bd414;
        case 0x1bd418u: goto label_1bd418;
        case 0x1bd41cu: goto label_1bd41c;
        case 0x1bd420u: goto label_1bd420;
        case 0x1bd424u: goto label_1bd424;
        default: break;
    }

    ctx->pc = 0x1bcdd8u;

label_1bcdd8:
    // 0x1bcdd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bcddc:
    // 0x1bcddc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1bcddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1bcde0:
    // 0x1bcde0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bcde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1bcde4:
    // 0x1bcde4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bcde8:
    // 0x1bcde8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bcde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1bcdec:
    // 0x1bcdec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bcdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1bcdf0:
    // 0x1bcdf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bcdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bcdf4:
    // 0x1bcdf4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1bcdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1bcdf8:
    // 0x1bcdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bcdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bcdfc:
    // 0x1bcdfc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1bce00:
    // 0x1bce00: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
label_1bce04:
    if (ctx->pc == 0x1BCE04u) {
        ctx->pc = 0x1BCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE00u;
        // 0x1bce04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE08u;
        goto label_1bce08;
    }
    ctx->pc = 0x1BCE00u;
    {
        const bool branch_taken_0x1bce00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE00u;
        // 0x1bce04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce00) {
            ctx->pc = 0x1BD408u;
            goto label_1bd408;
        }
    }
    ctx->pc = 0x1BCE08u;
label_1bce08:
    // 0x1bce08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bce0c:
    // 0x1bce0c: 0xaea006a8  sw          $zero, 0x6A8($s5)
    ctx->pc = 0x1bce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 0));
label_1bce10:
    // 0x1bce10: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1bce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1bce14:
    // 0x1bce14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bce18:
    // 0x1bce18: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1bce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1bce1c:
    // 0x1bce1c: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_1bce20:
    if (ctx->pc == 0x1BCE20u) {
        ctx->pc = 0x1BCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE1Cu;
        // 0x1bce20: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE24u;
        goto label_1bce24;
    }
    ctx->pc = 0x1BCE1Cu;
    {
        const bool branch_taken_0x1bce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE1Cu;
        // 0x1bce20: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce1c) {
            ctx->pc = 0x1BD0CCu;
            goto label_1bd0cc;
        }
    }
    ctx->pc = 0x1BCE24u;
label_1bce24:
    // 0x1bce24: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_1bce28:
    if (ctx->pc == 0x1BCE28u) {
        ctx->pc = 0x1BCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE24u;
        // 0x1bce28: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE2Cu;
        goto label_1bce2c;
    }
    ctx->pc = 0x1BCE24u;
    {
        const bool branch_taken_0x1bce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE24u;
        // 0x1bce28: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce24) {
            ctx->pc = 0x1BCF84u;
            goto label_1bcf84;
        }
    }
    ctx->pc = 0x1BCE2Cu;
label_1bce2c:
    // 0x1bce2c: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1bce2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1bce30:
    // 0x1bce30: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x1bce30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
label_1bce34:
    // 0x1bce34: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1bce34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1bce38:
    // 0x1bce38: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x1bce38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
label_1bce3c:
    // 0x1bce3c: 0x3421ac08  ori         $at, $at, 0xAC08
    ctx->pc = 0x1bce3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44040);
label_1bce40:
    // 0x1bce40: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1bce44:
    // 0x1bce44: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1bce48:
    // 0x1bce48: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1bce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_1bce4c:
    // 0x1bce4c: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x1bce4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
label_1bce50:
    // 0x1bce50: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bce50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bce54:
    // 0x1bce54: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1bce54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1bce58:
    // 0x1bce58: 0x3c013d89  lui         $at, 0x3D89
    ctx->pc = 0x1bce58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15753 << 16));
label_1bce5c:
    // 0x1bce5c: 0x3421374c  ori         $at, $at, 0x374C
    ctx->pc = 0x1bce5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14156);
label_1bce60:
    // 0x1bce60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bce60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bce64:
    // 0x1bce64: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1bce68:
    // 0x1bce68: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bce6c:
    // 0x1bce6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bce6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bce70:
    // 0x1bce70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bce70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bce74:
    // 0x1bce74: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bce74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1bce78:
    // 0x1bce78: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1bce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
label_1bce7c:
    // 0x1bce7c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bce7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bce80:
    // 0x1bce80: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bce80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1bce84:
    // 0x1bce84: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1bce84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1bce88:
    // 0x1bce88: 0x3c01bb03  lui         $at, 0xBB03
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47875 << 16));
label_1bce8c:
    // 0x1bce8c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bce8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bce90:
    // 0x1bce90: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bce90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1bce94:
    // 0x1bce94: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1bce94u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1bce98:
    // 0x1bce98: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1bce9c:
    // 0x1bce9c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bce9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1bcea0:
    // 0x1bcea0: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1bcea0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1bcea4:
    // 0x1bcea4: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1bcea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1bcea8:
    // 0x1bcea8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bcea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bceac:
    // 0x1bceac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bceacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1bceb0:
    // 0x1bceb0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1bceb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1bceb4:
    // 0x1bceb4: 0x3c013d65  lui         $at, 0x3D65
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15717 << 16));
label_1bceb8:
    // 0x1bceb8: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1bceb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1bcebc:
    // 0x1bcebc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bcebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1bcec0:
    // 0x1bcec0: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1bcec4:
    // 0x1bcec4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_1bcec8:
    // 0x1bcec8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bcec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bcecc:
    // 0x1bcecc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bceccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1bced0:
    // 0x1bced0: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1bced0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1bced4:
    // 0x1bced4: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1bced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1bced8:
    // 0x1bced8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bced8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1bcedc:
    // 0x1bcedc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bcedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1bcee0:
    // 0x1bcee0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1bcee4:
    // 0x1bcee4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bcee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1bcee8:
    // 0x1bcee8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bcee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bceec:
    // 0x1bceec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bceecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1bcef0:
    // 0x1bcef0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bcef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1bcef4:
    // 0x1bcef4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bcef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1bcef8:
    // 0x1bcef8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bcef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bcefc:
    // 0x1bcefc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bcefcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1bcf00:
    // 0x1bcf00: 0x3c013c44  lui         $at, 0x3C44
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15428 << 16));
label_1bcf04:
    // 0x1bcf04: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1bcf04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1bcf08:
    // 0x1bcf08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bcf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcf0c:
    // 0x1bcf0c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bcf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bcf10:
    // 0x1bcf10: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
label_1bcf14:
    // 0x1bcf14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bcf14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bcf18:
    // 0x1bcf18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bcf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bcf1c:
    // 0x1bcf1c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1bcf20:
    // 0x1bcf20: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1bcf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_1bcf24:
    // 0x1bcf24: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1bcf24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1bcf28:
    // 0x1bcf28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcf2c:
    // 0x1bcf2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bcf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bcf30:
    // 0x1bcf30: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bcf30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bcf34:
    // 0x1bcf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcf38:
    // 0x1bcf38: 0xe690e850  swc1        $f16, -0x17B0($s4)
    ctx->pc = 0x1bcf38u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294961232), bits); }
label_1bcf3c:
    // 0x1bcf3c: 0xe66fe854  swc1        $f15, -0x17AC($s3)
    ctx->pc = 0x1bcf3cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294961236), bits); }
label_1bcf40:
    // 0x1bcf40: 0xe64ee858  swc1        $f14, -0x17A8($s2)
    ctx->pc = 0x1bcf40u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294961240), bits); }
label_1bcf44:
    // 0x1bcf44: 0xe62de85c  swc1        $f13, -0x17A4($s1)
    ctx->pc = 0x1bcf44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294961244), bits); }
label_1bcf48:
    // 0x1bcf48: 0xe60ce860  swc1        $f12, -0x17A0($s0)
    ctx->pc = 0x1bcf48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294961248), bits); }
label_1bcf4c:
    // 0x1bcf4c: 0xe5ebe864  swc1        $f11, -0x179C($t7)
    ctx->pc = 0x1bcf4cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294961252), bits); }
label_1bcf50:
    // 0x1bcf50: 0xe5cae868  swc1        $f10, -0x1798($t6)
    ctx->pc = 0x1bcf50u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294961256), bits); }
label_1bcf54:
    // 0x1bcf54: 0xe5a9e86c  swc1        $f9, -0x1794($t5)
    ctx->pc = 0x1bcf54u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294961260), bits); }
label_1bcf58:
    // 0x1bcf58: 0xe588e870  swc1        $f8, -0x1790($t4)
    ctx->pc = 0x1bcf58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294961264), bits); }
label_1bcf5c:
    // 0x1bcf5c: 0xe567e874  swc1        $f7, -0x178C($t3)
    ctx->pc = 0x1bcf5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294961268), bits); }
label_1bcf60:
    // 0x1bcf60: 0xe546e878  swc1        $f6, -0x1788($t2)
    ctx->pc = 0x1bcf60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294961272), bits); }
label_1bcf64:
    // 0x1bcf64: 0xe525e87c  swc1        $f5, -0x1784($t1)
    ctx->pc = 0x1bcf64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294961276), bits); }
label_1bcf68:
    // 0x1bcf68: 0xe504e880  swc1        $f4, -0x1780($t0)
    ctx->pc = 0x1bcf68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961280), bits); }
label_1bcf6c:
    // 0x1bcf6c: 0xe4e3e884  swc1        $f3, -0x177C($a3)
    ctx->pc = 0x1bcf6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961284), bits); }
label_1bcf70:
    // 0x1bcf70: 0xe4c2e888  swc1        $f2, -0x1778($a2)
    ctx->pc = 0x1bcf70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961288), bits); }
label_1bcf74:
    // 0x1bcf74: 0xe4a1e88c  swc1        $f1, -0x1774($a1)
    ctx->pc = 0x1bcf74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961292), bits); }
label_1bcf78:
    // 0x1bcf78: 0xe460e890  swc1        $f0, -0x1770($v1)
    ctx->pc = 0x1bcf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961296), bits); }
label_1bcf7c:
    // 0x1bcf7c: 0x10000101  b           . + 4 + (0x101 << 2)
label_1bcf80:
    if (ctx->pc == 0x1BCF80u) {
        ctx->pc = 0x1BCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF7Cu;
        // 0x1bcf80: 0xac82e894  sw          $v0, -0x176C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF84u;
        goto label_1bcf84;
    }
    ctx->pc = 0x1BCF7Cu;
    {
        const bool branch_taken_0x1bcf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF7Cu;
        // 0x1bcf80: 0xac82e894  sw          $v0, -0x176C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf7c) {
            ctx->pc = 0x1BD384u;
            goto label_1bd384;
        }
    }
    ctx->pc = 0x1BCF84u;
label_1bcf84:
    // 0x1bcf84: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bcf88:
    // 0x1bcf88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bcf88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bcf8c:
    // 0x1bcf8c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bcf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1bcf90:
    // 0x1bcf90: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1bcf94:
    // 0x1bcf94: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x1bcf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
label_1bcf98:
    // 0x1bcf98: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1bcf98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1bcf9c:
    // 0x1bcf9c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bcf9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bcfa0:
    // 0x1bcfa0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1bcfa4:
    // 0x1bcfa4: 0x3c013e31  lui         $at, 0x3E31
    ctx->pc = 0x1bcfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15921 << 16));
label_1bcfa8:
    // 0x1bcfa8: 0x342126e9  ori         $at, $at, 0x26E9
    ctx->pc = 0x1bcfa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9961);
label_1bcfac:
    // 0x1bcfac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bcfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bcfb0:
    // 0x1bcfb0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bcfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1bcfb4:
    // 0x1bcfb4: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x1bcfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_1bcfb8:
    // 0x1bcfb8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1bcfb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1bcfbc:
    // 0x1bcfbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bcfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bcfc0:
    // 0x1bcfc0: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1bcfc0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1bcfc4:
    // 0x1bcfc4: 0x3c013d69  lui         $at, 0x3D69
    ctx->pc = 0x1bcfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15721 << 16));
label_1bcfc8:
    // 0x1bcfc8: 0x342178d5  ori         $at, $at, 0x78D5
    ctx->pc = 0x1bcfc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30933);
label_1bcfcc:
    // 0x1bcfcc: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bcfccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1bcfd0:
    // 0x1bcfd0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1bcfd0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1bcfd4:
    // 0x1bcfd4: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1bcfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
label_1bcfd8:
    // 0x1bcfd8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bcfd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bcfdc:
    // 0x1bcfdc: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bcfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1bcfe0:
    // 0x1bcfe0: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1bcfe0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1bcfe4:
    // 0x1bcfe4: 0x3c01bb03  lui         $at, 0xBB03
    ctx->pc = 0x1bcfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47875 << 16));
label_1bcfe8:
    // 0x1bcfe8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bcfe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bcfec:
    // 0x1bcfec: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bcfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1bcff0:
    // 0x1bcff0: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1bcff4:
    // 0x1bcff4: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1bcff8:
    // 0x1bcff8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1bcff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1bcffc:
    // 0x1bcffc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bcffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1bd000:
    // 0x1bd000: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1bd004:
    // 0x1bd004: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1bd004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1bd008:
    // 0x1bd008: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bd00c:
    // 0x1bd00c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bd00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1bd010:
    // 0x1bd010: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1bd010u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1bd014:
    // 0x1bd014: 0x3c013d65  lui         $at, 0x3D65
    ctx->pc = 0x1bd014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15717 << 16));
label_1bd018:
    // 0x1bd018: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1bd018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1bd01c:
    // 0x1bd01c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bd01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1bd020:
    // 0x1bd020: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1bd024:
    // 0x1bd024: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1bd024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1bd028:
    // 0x1bd028: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bd028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1bd02c:
    // 0x1bd02c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bd02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1bd030:
    // 0x1bd030: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1bd034:
    // 0x1bd034: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_1bd038:
    // 0x1bd038: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1bd038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1bd03c:
    // 0x1bd03c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bd03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1bd040:
    // 0x1bd040: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bd040u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1bd044:
    // 0x1bd044: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bd044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1bd048:
    // 0x1bd048: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bd048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bd04c:
    // 0x1bd04c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bd04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bd050:
    // 0x1bd050: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1bd054:
    // 0x1bd054: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bd054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1bd058:
    // 0x1bd058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bd05c:
    // 0x1bd05c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bd060:
    // 0x1bd060: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_1bd064:
    // 0x1bd064: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bd064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1bd068:
    // 0x1bd068: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bd068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bd06c:
    // 0x1bd06c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bd070:
    // 0x1bd070: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bd070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1bd074:
    // 0x1bd074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd078:
    // 0x1bd078: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd07c:
    // 0x1bd07c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd080:
    // 0x1bd080: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bd080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1bd084:
    // 0x1bd084: 0xe64ee850  swc1        $f14, -0x17B0($s2)
    ctx->pc = 0x1bd084u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294961232), bits); }
label_1bd088:
    // 0x1bd088: 0xe62de854  swc1        $f13, -0x17AC($s1)
    ctx->pc = 0x1bd088u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294961236), bits); }
label_1bd08c:
    // 0x1bd08c: 0xe60ce858  swc1        $f12, -0x17A8($s0)
    ctx->pc = 0x1bd08cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294961240), bits); }
label_1bd090:
    // 0x1bd090: 0xe5ebe85c  swc1        $f11, -0x17A4($t7)
    ctx->pc = 0x1bd090u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294961244), bits); }
label_1bd094:
    // 0x1bd094: 0xe5cae864  swc1        $f10, -0x179C($t6)
    ctx->pc = 0x1bd094u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294961252), bits); }
label_1bd098:
    // 0x1bd098: 0xe5a9e868  swc1        $f9, -0x1798($t5)
    ctx->pc = 0x1bd098u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294961256), bits); }
label_1bd09c:
    // 0x1bd09c: 0xe588e86c  swc1        $f8, -0x1794($t4)
    ctx->pc = 0x1bd09cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294961260), bits); }
label_1bd0a0:
    // 0x1bd0a0: 0xe567e870  swc1        $f7, -0x1790($t3)
    ctx->pc = 0x1bd0a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294961264), bits); }
label_1bd0a4:
    // 0x1bd0a4: 0xe546e874  swc1        $f6, -0x178C($t2)
    ctx->pc = 0x1bd0a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294961268), bits); }
label_1bd0a8:
    // 0x1bd0a8: 0xe525e878  swc1        $f5, -0x1788($t1)
    ctx->pc = 0x1bd0a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294961272), bits); }
label_1bd0ac:
    // 0x1bd0ac: 0xe504e87c  swc1        $f4, -0x1784($t0)
    ctx->pc = 0x1bd0acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961276), bits); }
label_1bd0b0:
    // 0x1bd0b0: 0xe4e3e880  swc1        $f3, -0x1780($a3)
    ctx->pc = 0x1bd0b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961280), bits); }
label_1bd0b4:
    // 0x1bd0b4: 0xe4c1e884  swc1        $f1, -0x177C($a2)
    ctx->pc = 0x1bd0b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961284), bits); }
label_1bd0b8:
    // 0x1bd0b8: 0xe48fe888  swc1        $f15, -0x1778($a0)
    ctx->pc = 0x1bd0b8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961288), bits); }
label_1bd0bc:
    // 0x1bd0bc: 0xe442e88c  swc1        $f2, -0x1774($v0)
    ctx->pc = 0x1bd0bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961292), bits); }
label_1bd0c0:
    // 0x1bd0c0: 0xe460e890  swc1        $f0, -0x1770($v1)
    ctx->pc = 0x1bd0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961296), bits); }
label_1bd0c4:
    // 0x1bd0c4: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1bd0c8:
    if (ctx->pc == 0x1BD0C8u) {
        ctx->pc = 0x1BD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0C4u;
        // 0x1bd0c8: 0xe66fe860  swc1        $f15, -0x17A0($s3) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294961248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD0CCu;
        goto label_1bd0cc;
    }
    ctx->pc = 0x1BD0C4u;
    {
        const bool branch_taken_0x1bd0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0C4u;
        // 0x1bd0c8: 0xe66fe860  swc1        $f15, -0x17A0($s3) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294961248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0c4) {
            ctx->pc = 0x1BD380u;
            goto label_1bd380;
        }
    }
    ctx->pc = 0x1BD0CCu;
label_1bd0cc:
    // 0x1bd0cc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1bd0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1bd0d0:
    // 0x1bd0d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd0d4:
    if (ctx->pc == 0x1BD0D4u) {
        ctx->pc = 0x1BD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0D0u;
        // 0x1bd0d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD0D8u;
        goto label_1bd0d8;
    }
    ctx->pc = 0x1BD0D0u;
    {
        const bool branch_taken_0x1bd0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0D0u;
        // 0x1bd0d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0d0) {
            ctx->pc = 0x1BD0E4u;
            goto label_1bd0e4;
        }
    }
    ctx->pc = 0x1BD0D8u;
label_1bd0d8:
    // 0x1bd0d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd0dc:
    // 0x1bd0dc: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_1bd0e0:
    if (ctx->pc == 0x1BD0E0u) {
        ctx->pc = 0x1BD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0DCu;
        // 0x1bd0e0: 0xac62e894  sw          $v0, -0x176C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD0E4u;
        goto label_1bd0e4;
    }
    ctx->pc = 0x1BD0DCu;
    {
        const bool branch_taken_0x1bd0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0DCu;
        // 0x1bd0e0: 0xac62e894  sw          $v0, -0x176C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0dc) {
            ctx->pc = 0x1BD384u;
            goto label_1bd384;
        }
    }
    ctx->pc = 0x1BD0E4u;
label_1bd0e4:
    // 0x1bd0e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1bd0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1bd0e8:
    // 0x1bd0e8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_1bd0ec:
    if (ctx->pc == 0x1BD0ECu) {
        ctx->pc = 0x1BD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0E8u;
        // 0x1bd0ec: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD0F0u;
        goto label_1bd0f0;
    }
    ctx->pc = 0x1BD0E8u;
    {
        const bool branch_taken_0x1bd0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0E8u;
        // 0x1bd0ec: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0e8) {
            ctx->pc = 0x1BD244u;
            goto label_1bd244;
        }
    }
    ctx->pc = 0x1BD0F0u;
label_1bd0f0:
    // 0x1bd0f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bd0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bd0f4:
    // 0x1bd0f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd0f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bd0f8:
    // 0x1bd0f8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bd0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1bd0fc:
    // 0x1bd0fc: 0x3c013f5a  lui         $at, 0x3F5A
    ctx->pc = 0x1bd0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16218 << 16));
label_1bd100:
    // 0x1bd100: 0x34211cac  ori         $at, $at, 0x1CAC
    ctx->pc = 0x1bd100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7340);
label_1bd104:
    // 0x1bd104: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bd104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bd108:
    // 0x1bd108: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1bd108u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1bd10c:
    // 0x1bd10c: 0x3c013cb4  lui         $at, 0x3CB4
    ctx->pc = 0x1bd10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15540 << 16));
label_1bd110:
    // 0x1bd110: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x1bd110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
label_1bd114:
    // 0x1bd114: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bd114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bd118:
    // 0x1bd118: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1bd118u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1bd11c:
    // 0x1bd11c: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
label_1bd120:
    // 0x1bd120: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1bd120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1bd124:
    // 0x1bd124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bd128:
    // 0x1bd128: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bd128u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1bd12c:
    // 0x1bd12c: 0x3c013da9  lui         $at, 0x3DA9
    ctx->pc = 0x1bd12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15785 << 16));
label_1bd130:
    // 0x1bd130: 0x3421fbe7  ori         $at, $at, 0xFBE7
    ctx->pc = 0x1bd130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64487);
label_1bd134:
    // 0x1bd134: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bd134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1bd138:
    // 0x1bd138: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1bd138u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1bd13c:
    // 0x1bd13c: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1bd13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
label_1bd140:
    // 0x1bd140: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bd144:
    // 0x1bd144: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bd144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1bd148:
    // 0x1bd148: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1bd148u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1bd14c:
    // 0x1bd14c: 0x3c013ed8  lui         $at, 0x3ED8
    ctx->pc = 0x1bd14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16088 << 16));
label_1bd150:
    // 0x1bd150: 0x34219375  ori         $at, $at, 0x9375
    ctx->pc = 0x1bd150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37749);
label_1bd154:
    // 0x1bd154: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bd154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1bd158:
    // 0x1bd158: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1bd158u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1bd15c:
    // 0x1bd15c: 0x3c013d69  lui         $at, 0x3D69
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15721 << 16));
label_1bd160:
    // 0x1bd160: 0x342178d5  ori         $at, $at, 0x78D5
    ctx->pc = 0x1bd160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30933);
label_1bd164:
    // 0x1bd164: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bd164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1bd168:
    // 0x1bd168: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1bd16c:
    // 0x1bd16c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1bd16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1bd170:
    // 0x1bd170: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bd174:
    // 0x1bd174: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bd174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1bd178:
    // 0x1bd178: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1bd178u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1bd17c:
    // 0x1bd17c: 0x3c013fd1  lui         $at, 0x3FD1
    ctx->pc = 0x1bd17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16337 << 16));
label_1bd180:
    // 0x1bd180: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1bd180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1bd184:
    // 0x1bd184: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bd184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1bd188:
    // 0x1bd188: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1bd18c:
    // 0x1bd18c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1bd18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1bd190:
    // 0x1bd190: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bd190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bd194:
    // 0x1bd194: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bd194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1bd198:
    // 0x1bd198: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1bd198u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1bd19c:
    // 0x1bd19c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1bd19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1bd1a0:
    // 0x1bd1a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bd1a4:
    // 0x1bd1a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bd1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1bd1a8:
    // 0x1bd1a8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1bd1ac:
    // 0x1bd1ac: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_1bd1b0:
    // 0x1bd1b0: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x1bd1b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_1bd1b4:
    // 0x1bd1b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bd1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bd1b8:
    // 0x1bd1b8: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bd1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1bd1bc:
    // 0x1bd1bc: 0x3c013c70  lui         $at, 0x3C70
    ctx->pc = 0x1bd1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15472 << 16));
label_1bd1c0:
    // 0x1bd1c0: 0x3421d845  ori         $at, $at, 0xD845
    ctx->pc = 0x1bd1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55365);
label_1bd1c4:
    // 0x1bd1c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bd1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bd1c8:
    // 0x1bd1c8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bd1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1bd1cc:
    // 0x1bd1cc: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1bd1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1bd1d0:
    // 0x1bd1d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bd1d4:
    // 0x1bd1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bd1d8:
    // 0x1bd1d8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bd1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bd1dc:
    // 0x1bd1dc: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1bd1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1bd1e0:
    // 0x1bd1e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bd1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bd1e4:
    // 0x1bd1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd1e8:
    // 0x1bd1e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd1ec:
    // 0x1bd1ec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bd1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bd1f0:
    // 0x1bd1f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bd1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1bd1f4:
    // 0x1bd1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd1f8:
    // 0x1bd1f8: 0xe66ee850  swc1        $f14, -0x17B0($s3)
    ctx->pc = 0x1bd1f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294961232), bits); }
label_1bd1fc:
    // 0x1bd1fc: 0xe64de854  swc1        $f13, -0x17AC($s2)
    ctx->pc = 0x1bd1fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294961236), bits); }
label_1bd200:
    // 0x1bd200: 0xe62ce858  swc1        $f12, -0x17A8($s1)
    ctx->pc = 0x1bd200u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294961240), bits); }
label_1bd204:
    // 0x1bd204: 0xe60ae85c  swc1        $f10, -0x17A4($s0)
    ctx->pc = 0x1bd204u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294961244), bits); }
label_1bd208:
    // 0x1bd208: 0xe5efe864  swc1        $f15, -0x179C($t7)
    ctx->pc = 0x1bd208u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294961252), bits); }
label_1bd20c:
    // 0x1bd20c: 0xe5cbe868  swc1        $f11, -0x1798($t6)
    ctx->pc = 0x1bd20cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294961256), bits); }
label_1bd210:
    // 0x1bd210: 0xe5a9e86c  swc1        $f9, -0x1794($t5)
    ctx->pc = 0x1bd210u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294961260), bits); }
label_1bd214:
    // 0x1bd214: 0xe588e870  swc1        $f8, -0x1790($t4)
    ctx->pc = 0x1bd214u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294961264), bits); }
label_1bd218:
    // 0x1bd218: 0xe567e874  swc1        $f7, -0x178C($t3)
    ctx->pc = 0x1bd218u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294961268), bits); }
label_1bd21c:
    // 0x1bd21c: 0xe546e878  swc1        $f6, -0x1788($t2)
    ctx->pc = 0x1bd21cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294961272), bits); }
label_1bd220:
    // 0x1bd220: 0xe525e87c  swc1        $f5, -0x1784($t1)
    ctx->pc = 0x1bd220u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294961276), bits); }
label_1bd224:
    // 0x1bd224: 0xe504e880  swc1        $f4, -0x1780($t0)
    ctx->pc = 0x1bd224u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961280), bits); }
label_1bd228:
    // 0x1bd228: 0xe4e3e884  swc1        $f3, -0x177C($a3)
    ctx->pc = 0x1bd228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961284), bits); }
label_1bd22c:
    // 0x1bd22c: 0xe4c2e888  swc1        $f2, -0x1778($a2)
    ctx->pc = 0x1bd22cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961288), bits); }
label_1bd230:
    // 0x1bd230: 0xe461e88c  swc1        $f1, -0x1774($v1)
    ctx->pc = 0x1bd230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961292), bits); }
label_1bd234:
    // 0x1bd234: 0xe480e890  swc1        $f0, -0x1770($a0)
    ctx->pc = 0x1bd234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961296), bits); }
label_1bd238:
    // 0x1bd238: 0xaca2e894  sw          $v0, -0x176C($a1)
    ctx->pc = 0x1bd238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961300), GPR_U32(ctx, 2));
label_1bd23c:
    // 0x1bd23c: 0x10000051  b           . + 4 + (0x51 << 2)
label_1bd240:
    if (ctx->pc == 0x1BD240u) {
        ctx->pc = 0x1BD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD23Cu;
        // 0x1bd240: 0xe68fe860  swc1        $f15, -0x17A0($s4) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294961248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD244u;
        goto label_1bd244;
    }
    ctx->pc = 0x1BD23Cu;
    {
        const bool branch_taken_0x1bd23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD23Cu;
        // 0x1bd240: 0xe68fe860  swc1        $f15, -0x17A0($s4) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294961248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd23c) {
            ctx->pc = 0x1BD384u;
            goto label_1bd384;
        }
    }
    ctx->pc = 0x1BD244u;
label_1bd244:
    // 0x1bd244: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1bd248:
    // 0x1bd248: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bd24c:
    // 0x1bd24c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bd24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bd250:
    // 0x1bd250: 0x3c013da9  lui         $at, 0x3DA9
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15785 << 16));
label_1bd254:
    // 0x1bd254: 0x3421fbe7  ori         $at, $at, 0xFBE7
    ctx->pc = 0x1bd254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64487);
label_1bd258:
    // 0x1bd258: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bd258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bd25c:
    // 0x1bd25c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1bd260:
    // 0x1bd260: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x1bd260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
label_1bd264:
    // 0x1bd264: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bd264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1bd268:
    // 0x1bd268: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bd26c:
    // 0x1bd26c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1bd26cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1bd270:
    // 0x1bd270: 0x3c013d97  lui         $at, 0x3D97
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15767 << 16));
label_1bd274:
    // 0x1bd274: 0x34218d50  ori         $at, $at, 0x8D50
    ctx->pc = 0x1bd274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36176);
label_1bd278:
    // 0x1bd278: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1bd278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1bd27c:
    // 0x1bd27c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bd27cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1bd280:
    // 0x1bd280: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bd280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bd284:
    // 0x1bd284: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bd288:
    // 0x1bd288: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1bd288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1bd28c:
    // 0x1bd28c: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1bd28cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1bd290:
    // 0x1bd290: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
label_1bd294:
    // 0x1bd294: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bd298:
    // 0x1bd298: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1bd298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1bd29c:
    // 0x1bd29c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1bd29cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1bd2a0:
    // 0x1bd2a0: 0x3c01bb03  lui         $at, 0xBB03
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47875 << 16));
label_1bd2a4:
    // 0x1bd2a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bd2a8:
    // 0x1bd2a8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1bd2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1bd2ac:
    // 0x1bd2ac: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1bd2acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1bd2b0:
    // 0x1bd2b0: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1bd2b4:
    // 0x1bd2b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1bd2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1bd2b8:
    // 0x1bd2b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1bd2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1bd2bc:
    // 0x1bd2bc: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1bd2bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1bd2c0:
    // 0x1bd2c0: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x1bd2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_1bd2c4:
    // 0x1bd2c4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bd2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1bd2c8:
    // 0x1bd2c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1bd2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1bd2cc:
    // 0x1bd2cc: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1bd2d0:
    // 0x1bd2d0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1bd2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1bd2d4:
    // 0x1bd2d4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bd2d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1bd2d8:
    // 0x1bd2d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1bd2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1bd2dc:
    // 0x1bd2dc: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1bd2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1bd2e0:
    // 0x1bd2e0: 0x3c013f8f  lui         $at, 0x3F8F
    ctx->pc = 0x1bd2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16271 << 16));
label_1bd2e4:
    // 0x1bd2e4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bd2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1bd2e8:
    // 0x1bd2e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bd2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1bd2ec:
    // 0x1bd2ec: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1bd2f0:
    // 0x1bd2f0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1bd2f4:
    // 0x1bd2f4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bd2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1bd2f8:
    // 0x1bd2f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bd2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bd2fc:
    // 0x1bd2fc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1bd300:
    // 0x1bd300: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_1bd304:
    // 0x1bd304: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x1bd304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_1bd308:
    // 0x1bd308: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bd308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bd30c:
    // 0x1bd30c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bd30cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bd310:
    // 0x1bd310: 0x3c013c70  lui         $at, 0x3C70
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15472 << 16));
label_1bd314:
    // 0x1bd314: 0x3421d845  ori         $at, $at, 0xD845
    ctx->pc = 0x1bd314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55365);
label_1bd318:
    // 0x1bd318: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bd31c:
    // 0x1bd31c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bd320:
    // 0x1bd320: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x1bd320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
label_1bd324:
    // 0x1bd324: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1bd324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1bd328:
    // 0x1bd328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd32c:
    // 0x1bd32c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd330:
    // 0x1bd330: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1bd334:
    // 0x1bd334: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd338:
    // 0x1bd338: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1bd33c:
    // 0x1bd33c: 0xe64de854  swc1        $f13, -0x17AC($s2)
    ctx->pc = 0x1bd33cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294961236), bits); }
label_1bd340:
    // 0x1bd340: 0xe62ce858  swc1        $f12, -0x17A8($s1)
    ctx->pc = 0x1bd340u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294961240), bits); }
label_1bd344:
    // 0x1bd344: 0xe60be85c  swc1        $f11, -0x17A4($s0)
    ctx->pc = 0x1bd344u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294961244), bits); }
label_1bd348:
    // 0x1bd348: 0xe5eae860  swc1        $f10, -0x17A0($t7)
    ctx->pc = 0x1bd348u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294961248), bits); }
label_1bd34c:
    // 0x1bd34c: 0xe5c9e864  swc1        $f9, -0x179C($t6)
    ctx->pc = 0x1bd34cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294961252), bits); }
label_1bd350:
    // 0x1bd350: 0xe5a8e868  swc1        $f8, -0x1798($t5)
    ctx->pc = 0x1bd350u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294961256), bits); }
label_1bd354:
    // 0x1bd354: 0xe587e86c  swc1        $f7, -0x1794($t4)
    ctx->pc = 0x1bd354u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294961260), bits); }
label_1bd358:
    // 0x1bd358: 0xe566e870  swc1        $f6, -0x1790($t3)
    ctx->pc = 0x1bd358u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294961264), bits); }
label_1bd35c:
    // 0x1bd35c: 0xe545e874  swc1        $f5, -0x178C($t2)
    ctx->pc = 0x1bd35cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294961268), bits); }
label_1bd360:
    // 0x1bd360: 0xe524e878  swc1        $f4, -0x1788($t1)
    ctx->pc = 0x1bd360u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294961272), bits); }
label_1bd364:
    // 0x1bd364: 0xe502e87c  swc1        $f2, -0x1784($t0)
    ctx->pc = 0x1bd364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961276), bits); }
label_1bd368:
    // 0x1bd368: 0xe4cee880  swc1        $f14, -0x1780($a2)
    ctx->pc = 0x1bd368u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961280), bits); }
label_1bd36c:
    // 0x1bd36c: 0xe483e884  swc1        $f3, -0x177C($a0)
    ctx->pc = 0x1bd36cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961284), bits); }
label_1bd370:
    // 0x1bd370: 0xe461e888  swc1        $f1, -0x1778($v1)
    ctx->pc = 0x1bd370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961288), bits); }
label_1bd374:
    // 0x1bd374: 0xe440e890  swc1        $f0, -0x1770($v0)
    ctx->pc = 0x1bd374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961296), bits); }
label_1bd378:
    // 0x1bd378: 0xe66ee850  swc1        $f14, -0x17B0($s3)
    ctx->pc = 0x1bd378u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294961232), bits); }
label_1bd37c:
    // 0x1bd37c: 0xace0e88c  sw          $zero, -0x1774($a3)
    ctx->pc = 0x1bd37cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961292), GPR_U32(ctx, 0));
label_1bd380:
    // 0x1bd380: 0xaca0e894  sw          $zero, -0x176C($a1)
    ctx->pc = 0x1bd380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961300), GPR_U32(ctx, 0));
label_1bd384:
    // 0x1bd384: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1bd388:
    // 0x1bd388: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1bd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bd38c:
    // 0x1bd38c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1bd38cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_1bd390:
    // 0x1bd390: 0xa2a0069c  sb          $zero, 0x69C($s5)
    ctx->pc = 0x1bd390u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1692), (uint8_t)GPR_U32(ctx, 0));
label_1bd394:
    // 0x1bd394: 0xaea006a0  sw          $zero, 0x6A0($s5)
    ctx->pc = 0x1bd394u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1696), GPR_U32(ctx, 0));
label_1bd398:
    // 0x1bd398: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bd398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bd39c:
    // 0x1bd39c: 0xaeb00090  sw          $s0, 0x90($s5)
    ctx->pc = 0x1bd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 16));
label_1bd3a0:
    // 0x1bd3a0: 0xc06f16a  jal         func_1BC5A8
label_1bd3a4:
    if (ctx->pc == 0x1BD3A4u) {
        ctx->pc = 0x1BD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3A0u;
        // 0x1bd3a4: 0xaea20698  sw          $v0, 0x698($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD3A8u;
        goto label_1bd3a8;
    }
    ctx->pc = 0x1BD3A0u;
    SET_GPR_U32(ctx, 31, 0x1BD3A8u);
    ctx->pc = 0x1BD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3A0u;
    // 0x1bd3a4: 0xaea20698  sw          $v0, 0x698($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC5A8u, 0x1BD3A0u, 0x1BD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3A8u;
label_1bd3a8:
    // 0x1bd3a8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1bd3ac:
    // 0x1bd3ac: 0xaeb00580  sw          $s0, 0x580($s5)
    ctx->pc = 0x1bd3acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1408), GPR_U32(ctx, 16));
label_1bd3b0:
    // 0x1bd3b0: 0x2442c100  addiu       $v0, $v0, -0x3F00
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
label_1bd3b4:
    // 0x1bd3b4: 0xaea006a4  sw          $zero, 0x6A4($s5)
    ctx->pc = 0x1bd3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1700), GPR_U32(ctx, 0));
label_1bd3b8:
    // 0x1bd3b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1bd3bc:
    // 0x1bd3bc: 0xaea00584  sw          $zero, 0x584($s5)
    ctx->pc = 0x1bd3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1412), GPR_U32(ctx, 0));
label_1bd3c0:
    // 0x1bd3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd3c4:
    // 0x1bd3c4: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1bd3c8:
    // 0x1bd3c8: 0xc06ba26  jal         func_1AE898
label_1bd3cc:
    if (ctx->pc == 0x1BD3CCu) {
        ctx->pc = 0x1BD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3C8u;
        // 0x1bd3cc: 0xaea20088  sw          $v0, 0x88($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD3D0u;
        goto label_1bd3d0;
    }
    ctx->pc = 0x1BD3C8u;
    SET_GPR_U32(ctx, 31, 0x1BD3D0u);
    ctx->pc = 0x1BD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3C8u;
    // 0x1bd3cc: 0xaea20088  sw          $v0, 0x88($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1BD3C8u, 0x1BD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3D0u;
label_1bd3d0:
    // 0x1bd3d0: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x1bd3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_1bd3d4:
    // 0x1bd3d4: 0xc06f312  jal         func_1BCC48
label_1bd3d8:
    if (ctx->pc == 0x1BD3D8u) {
        ctx->pc = 0x1BD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3D4u;
        // 0x1bd3d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD3DCu;
        goto label_1bd3dc;
    }
    ctx->pc = 0x1BD3D4u;
    SET_GPR_U32(ctx, 31, 0x1BD3DCu);
    ctx->pc = 0x1BD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3D4u;
    // 0x1bd3d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCC48u, 0x1BD3D4u, 0x1BD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3DCu;
label_1bd3dc:
    // 0x1bd3dc: 0xc06f704  jal         func_1BDC10
label_1bd3e0:
    if (ctx->pc == 0x1BD3E0u) {
        ctx->pc = 0x1BD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3DCu;
        // 0x1bd3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD3E4u;
        goto label_1bd3e4;
    }
    ctx->pc = 0x1BD3DCu;
    SET_GPR_U32(ctx, 31, 0x1BD3E4u);
    ctx->pc = 0x1BD3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3DCu;
    // 0x1bd3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC10u, 0x1BD3DCu, 0x1BD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3E4u;
label_1bd3e4:
    // 0x1bd3e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1bd3e8:
    // 0x1bd3e8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1bd3ec:
    // 0x1bd3ec: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1bd3f0:
    // 0x1bd3f0: 0x60f809  jalr        $v1
label_1bd3f4:
    if (ctx->pc == 0x1BD3F4u) {
        ctx->pc = 0x1BD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3F0u;
        // 0x1bd3f4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD3F8u;
        goto label_1bd3f8;
    }
    ctx->pc = 0x1BD3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD3F8u);
        ctx->pc = 0x1BD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3F0u;
        // 0x1bd3f4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD3F0u, 0x1BD3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD3F8u;
label_1bd3f8:
    // 0x1bd3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd3fc:
    // 0x1bd3fc: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1bd3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_1bd400:
    // 0x1bd400: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1bd400u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1bd404:
    // 0x1bd404: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bd404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bd408:
    // 0x1bd408: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bd408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bd40c:
    // 0x1bd40c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bd40cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bd410:
    // 0x1bd410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bd410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bd414:
    // 0x1bd414: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1bd414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd418:
    // 0x1bd418: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1bd418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd41c:
    // 0x1bd41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd420:
    // 0x1bd420: 0x3e00008  jr          $ra
label_1bd424:
    if (ctx->pc == 0x1BD424u) {
        ctx->pc = 0x1BD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD420u;
        // 0x1bd424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD428u;
        goto label_fallthrough_0x1bd420;
    }
    ctx->pc = 0x1BD420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD420u;
        // 0x1bd424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bd420:
    ctx->pc = 0x1BD428u;
}
