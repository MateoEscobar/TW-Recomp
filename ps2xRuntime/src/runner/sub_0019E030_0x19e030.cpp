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

// Function: sub_0019E030
// Address: 0x19e030 - 0x19e5f8
void sub_0019E030_0x19e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E030_0x19e030");
#endif

    switch (ctx->pc) {
        case 0x19e030u: goto label_19e030;
        case 0x19e034u: goto label_19e034;
        case 0x19e038u: goto label_19e038;
        case 0x19e03cu: goto label_19e03c;
        case 0x19e040u: goto label_19e040;
        case 0x19e044u: goto label_19e044;
        case 0x19e048u: goto label_19e048;
        case 0x19e04cu: goto label_19e04c;
        case 0x19e050u: goto label_19e050;
        case 0x19e054u: goto label_19e054;
        case 0x19e058u: goto label_19e058;
        case 0x19e05cu: goto label_19e05c;
        case 0x19e060u: goto label_19e060;
        case 0x19e064u: goto label_19e064;
        case 0x19e068u: goto label_19e068;
        case 0x19e06cu: goto label_19e06c;
        case 0x19e070u: goto label_19e070;
        case 0x19e074u: goto label_19e074;
        case 0x19e078u: goto label_19e078;
        case 0x19e07cu: goto label_19e07c;
        case 0x19e080u: goto label_19e080;
        case 0x19e084u: goto label_19e084;
        case 0x19e088u: goto label_19e088;
        case 0x19e08cu: goto label_19e08c;
        case 0x19e090u: goto label_19e090;
        case 0x19e094u: goto label_19e094;
        case 0x19e098u: goto label_19e098;
        case 0x19e09cu: goto label_19e09c;
        case 0x19e0a0u: goto label_19e0a0;
        case 0x19e0a4u: goto label_19e0a4;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0acu: goto label_19e0ac;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0b8u: goto label_19e0b8;
        case 0x19e0bcu: goto label_19e0bc;
        case 0x19e0c0u: goto label_19e0c0;
        case 0x19e0c4u: goto label_19e0c4;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0ccu: goto label_19e0cc;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0dcu: goto label_19e0dc;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e0e4u: goto label_19e0e4;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e0ecu: goto label_19e0ec;
        case 0x19e0f0u: goto label_19e0f0;
        case 0x19e0f4u: goto label_19e0f4;
        case 0x19e0f8u: goto label_19e0f8;
        case 0x19e0fcu: goto label_19e0fc;
        case 0x19e100u: goto label_19e100;
        case 0x19e104u: goto label_19e104;
        case 0x19e108u: goto label_19e108;
        case 0x19e10cu: goto label_19e10c;
        case 0x19e110u: goto label_19e110;
        case 0x19e114u: goto label_19e114;
        case 0x19e118u: goto label_19e118;
        case 0x19e11cu: goto label_19e11c;
        case 0x19e120u: goto label_19e120;
        case 0x19e124u: goto label_19e124;
        case 0x19e128u: goto label_19e128;
        case 0x19e12cu: goto label_19e12c;
        case 0x19e130u: goto label_19e130;
        case 0x19e134u: goto label_19e134;
        case 0x19e138u: goto label_19e138;
        case 0x19e13cu: goto label_19e13c;
        case 0x19e140u: goto label_19e140;
        case 0x19e144u: goto label_19e144;
        case 0x19e148u: goto label_19e148;
        case 0x19e14cu: goto label_19e14c;
        case 0x19e150u: goto label_19e150;
        case 0x19e154u: goto label_19e154;
        case 0x19e158u: goto label_19e158;
        case 0x19e15cu: goto label_19e15c;
        case 0x19e160u: goto label_19e160;
        case 0x19e164u: goto label_19e164;
        case 0x19e168u: goto label_19e168;
        case 0x19e16cu: goto label_19e16c;
        case 0x19e170u: goto label_19e170;
        case 0x19e174u: goto label_19e174;
        case 0x19e178u: goto label_19e178;
        case 0x19e17cu: goto label_19e17c;
        case 0x19e180u: goto label_19e180;
        case 0x19e184u: goto label_19e184;
        case 0x19e188u: goto label_19e188;
        case 0x19e18cu: goto label_19e18c;
        case 0x19e190u: goto label_19e190;
        case 0x19e194u: goto label_19e194;
        case 0x19e198u: goto label_19e198;
        case 0x19e19cu: goto label_19e19c;
        case 0x19e1a0u: goto label_19e1a0;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1a8u: goto label_19e1a8;
        case 0x19e1acu: goto label_19e1ac;
        case 0x19e1b0u: goto label_19e1b0;
        case 0x19e1b4u: goto label_19e1b4;
        case 0x19e1b8u: goto label_19e1b8;
        case 0x19e1bcu: goto label_19e1bc;
        case 0x19e1c0u: goto label_19e1c0;
        case 0x19e1c4u: goto label_19e1c4;
        case 0x19e1c8u: goto label_19e1c8;
        case 0x19e1ccu: goto label_19e1cc;
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1d8u: goto label_19e1d8;
        case 0x19e1dcu: goto label_19e1dc;
        case 0x19e1e0u: goto label_19e1e0;
        case 0x19e1e4u: goto label_19e1e4;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e1f0u: goto label_19e1f0;
        case 0x19e1f4u: goto label_19e1f4;
        case 0x19e1f8u: goto label_19e1f8;
        case 0x19e1fcu: goto label_19e1fc;
        case 0x19e200u: goto label_19e200;
        case 0x19e204u: goto label_19e204;
        case 0x19e208u: goto label_19e208;
        case 0x19e20cu: goto label_19e20c;
        case 0x19e210u: goto label_19e210;
        case 0x19e214u: goto label_19e214;
        case 0x19e218u: goto label_19e218;
        case 0x19e21cu: goto label_19e21c;
        case 0x19e220u: goto label_19e220;
        case 0x19e224u: goto label_19e224;
        case 0x19e228u: goto label_19e228;
        case 0x19e22cu: goto label_19e22c;
        case 0x19e230u: goto label_19e230;
        case 0x19e234u: goto label_19e234;
        case 0x19e238u: goto label_19e238;
        case 0x19e23cu: goto label_19e23c;
        case 0x19e240u: goto label_19e240;
        case 0x19e244u: goto label_19e244;
        case 0x19e248u: goto label_19e248;
        case 0x19e24cu: goto label_19e24c;
        case 0x19e250u: goto label_19e250;
        case 0x19e254u: goto label_19e254;
        case 0x19e258u: goto label_19e258;
        case 0x19e25cu: goto label_19e25c;
        case 0x19e260u: goto label_19e260;
        case 0x19e264u: goto label_19e264;
        case 0x19e268u: goto label_19e268;
        case 0x19e26cu: goto label_19e26c;
        case 0x19e270u: goto label_19e270;
        case 0x19e274u: goto label_19e274;
        case 0x19e278u: goto label_19e278;
        case 0x19e27cu: goto label_19e27c;
        case 0x19e280u: goto label_19e280;
        case 0x19e284u: goto label_19e284;
        case 0x19e288u: goto label_19e288;
        case 0x19e28cu: goto label_19e28c;
        case 0x19e290u: goto label_19e290;
        case 0x19e294u: goto label_19e294;
        case 0x19e298u: goto label_19e298;
        case 0x19e29cu: goto label_19e29c;
        case 0x19e2a0u: goto label_19e2a0;
        case 0x19e2a4u: goto label_19e2a4;
        case 0x19e2a8u: goto label_19e2a8;
        case 0x19e2acu: goto label_19e2ac;
        case 0x19e2b0u: goto label_19e2b0;
        case 0x19e2b4u: goto label_19e2b4;
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e2bcu: goto label_19e2bc;
        case 0x19e2c0u: goto label_19e2c0;
        case 0x19e2c4u: goto label_19e2c4;
        case 0x19e2c8u: goto label_19e2c8;
        case 0x19e2ccu: goto label_19e2cc;
        case 0x19e2d0u: goto label_19e2d0;
        case 0x19e2d4u: goto label_19e2d4;
        case 0x19e2d8u: goto label_19e2d8;
        case 0x19e2dcu: goto label_19e2dc;
        case 0x19e2e0u: goto label_19e2e0;
        case 0x19e2e4u: goto label_19e2e4;
        case 0x19e2e8u: goto label_19e2e8;
        case 0x19e2ecu: goto label_19e2ec;
        case 0x19e2f0u: goto label_19e2f0;
        case 0x19e2f4u: goto label_19e2f4;
        case 0x19e2f8u: goto label_19e2f8;
        case 0x19e2fcu: goto label_19e2fc;
        case 0x19e300u: goto label_19e300;
        case 0x19e304u: goto label_19e304;
        case 0x19e308u: goto label_19e308;
        case 0x19e30cu: goto label_19e30c;
        case 0x19e310u: goto label_19e310;
        case 0x19e314u: goto label_19e314;
        case 0x19e318u: goto label_19e318;
        case 0x19e31cu: goto label_19e31c;
        case 0x19e320u: goto label_19e320;
        case 0x19e324u: goto label_19e324;
        case 0x19e328u: goto label_19e328;
        case 0x19e32cu: goto label_19e32c;
        case 0x19e330u: goto label_19e330;
        case 0x19e334u: goto label_19e334;
        case 0x19e338u: goto label_19e338;
        case 0x19e33cu: goto label_19e33c;
        case 0x19e340u: goto label_19e340;
        case 0x19e344u: goto label_19e344;
        case 0x19e348u: goto label_19e348;
        case 0x19e34cu: goto label_19e34c;
        case 0x19e350u: goto label_19e350;
        case 0x19e354u: goto label_19e354;
        case 0x19e358u: goto label_19e358;
        case 0x19e35cu: goto label_19e35c;
        case 0x19e360u: goto label_19e360;
        case 0x19e364u: goto label_19e364;
        case 0x19e368u: goto label_19e368;
        case 0x19e36cu: goto label_19e36c;
        case 0x19e370u: goto label_19e370;
        case 0x19e374u: goto label_19e374;
        case 0x19e378u: goto label_19e378;
        case 0x19e37cu: goto label_19e37c;
        case 0x19e380u: goto label_19e380;
        case 0x19e384u: goto label_19e384;
        case 0x19e388u: goto label_19e388;
        case 0x19e38cu: goto label_19e38c;
        case 0x19e390u: goto label_19e390;
        case 0x19e394u: goto label_19e394;
        case 0x19e398u: goto label_19e398;
        case 0x19e39cu: goto label_19e39c;
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3a4u: goto label_19e3a4;
        case 0x19e3a8u: goto label_19e3a8;
        case 0x19e3acu: goto label_19e3ac;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3b4u: goto label_19e3b4;
        case 0x19e3b8u: goto label_19e3b8;
        case 0x19e3bcu: goto label_19e3bc;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3c4u: goto label_19e3c4;
        case 0x19e3c8u: goto label_19e3c8;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d0u: goto label_19e3d0;
        case 0x19e3d4u: goto label_19e3d4;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3dcu: goto label_19e3dc;
        case 0x19e3e0u: goto label_19e3e0;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e3e8u: goto label_19e3e8;
        case 0x19e3ecu: goto label_19e3ec;
        case 0x19e3f0u: goto label_19e3f0;
        case 0x19e3f4u: goto label_19e3f4;
        case 0x19e3f8u: goto label_19e3f8;
        case 0x19e3fcu: goto label_19e3fc;
        case 0x19e400u: goto label_19e400;
        case 0x19e404u: goto label_19e404;
        case 0x19e408u: goto label_19e408;
        case 0x19e40cu: goto label_19e40c;
        case 0x19e410u: goto label_19e410;
        case 0x19e414u: goto label_19e414;
        case 0x19e418u: goto label_19e418;
        case 0x19e41cu: goto label_19e41c;
        case 0x19e420u: goto label_19e420;
        case 0x19e424u: goto label_19e424;
        case 0x19e428u: goto label_19e428;
        case 0x19e42cu: goto label_19e42c;
        case 0x19e430u: goto label_19e430;
        case 0x19e434u: goto label_19e434;
        case 0x19e438u: goto label_19e438;
        case 0x19e43cu: goto label_19e43c;
        case 0x19e440u: goto label_19e440;
        case 0x19e444u: goto label_19e444;
        case 0x19e448u: goto label_19e448;
        case 0x19e44cu: goto label_19e44c;
        case 0x19e450u: goto label_19e450;
        case 0x19e454u: goto label_19e454;
        case 0x19e458u: goto label_19e458;
        case 0x19e45cu: goto label_19e45c;
        case 0x19e460u: goto label_19e460;
        case 0x19e464u: goto label_19e464;
        case 0x19e468u: goto label_19e468;
        case 0x19e46cu: goto label_19e46c;
        case 0x19e470u: goto label_19e470;
        case 0x19e474u: goto label_19e474;
        case 0x19e478u: goto label_19e478;
        case 0x19e47cu: goto label_19e47c;
        case 0x19e480u: goto label_19e480;
        case 0x19e484u: goto label_19e484;
        case 0x19e488u: goto label_19e488;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e490u: goto label_19e490;
        case 0x19e494u: goto label_19e494;
        case 0x19e498u: goto label_19e498;
        case 0x19e49cu: goto label_19e49c;
        case 0x19e4a0u: goto label_19e4a0;
        case 0x19e4a4u: goto label_19e4a4;
        case 0x19e4a8u: goto label_19e4a8;
        case 0x19e4acu: goto label_19e4ac;
        case 0x19e4b0u: goto label_19e4b0;
        case 0x19e4b4u: goto label_19e4b4;
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4c0u: goto label_19e4c0;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ccu: goto label_19e4cc;
        case 0x19e4d0u: goto label_19e4d0;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e4d8u: goto label_19e4d8;
        case 0x19e4dcu: goto label_19e4dc;
        case 0x19e4e0u: goto label_19e4e0;
        case 0x19e4e4u: goto label_19e4e4;
        case 0x19e4e8u: goto label_19e4e8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e4f4u: goto label_19e4f4;
        case 0x19e4f8u: goto label_19e4f8;
        case 0x19e4fcu: goto label_19e4fc;
        case 0x19e500u: goto label_19e500;
        case 0x19e504u: goto label_19e504;
        case 0x19e508u: goto label_19e508;
        case 0x19e50cu: goto label_19e50c;
        case 0x19e510u: goto label_19e510;
        case 0x19e514u: goto label_19e514;
        case 0x19e518u: goto label_19e518;
        case 0x19e51cu: goto label_19e51c;
        case 0x19e520u: goto label_19e520;
        case 0x19e524u: goto label_19e524;
        case 0x19e528u: goto label_19e528;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e530u: goto label_19e530;
        case 0x19e534u: goto label_19e534;
        case 0x19e538u: goto label_19e538;
        case 0x19e53cu: goto label_19e53c;
        case 0x19e540u: goto label_19e540;
        case 0x19e544u: goto label_19e544;
        case 0x19e548u: goto label_19e548;
        case 0x19e54cu: goto label_19e54c;
        case 0x19e550u: goto label_19e550;
        case 0x19e554u: goto label_19e554;
        case 0x19e558u: goto label_19e558;
        case 0x19e55cu: goto label_19e55c;
        case 0x19e560u: goto label_19e560;
        case 0x19e564u: goto label_19e564;
        case 0x19e568u: goto label_19e568;
        case 0x19e56cu: goto label_19e56c;
        case 0x19e570u: goto label_19e570;
        case 0x19e574u: goto label_19e574;
        case 0x19e578u: goto label_19e578;
        case 0x19e57cu: goto label_19e57c;
        case 0x19e580u: goto label_19e580;
        case 0x19e584u: goto label_19e584;
        case 0x19e588u: goto label_19e588;
        case 0x19e58cu: goto label_19e58c;
        case 0x19e590u: goto label_19e590;
        case 0x19e594u: goto label_19e594;
        case 0x19e598u: goto label_19e598;
        case 0x19e59cu: goto label_19e59c;
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5a4u: goto label_19e5a4;
        case 0x19e5a8u: goto label_19e5a8;
        case 0x19e5acu: goto label_19e5ac;
        case 0x19e5b0u: goto label_19e5b0;
        case 0x19e5b4u: goto label_19e5b4;
        case 0x19e5b8u: goto label_19e5b8;
        case 0x19e5bcu: goto label_19e5bc;
        case 0x19e5c0u: goto label_19e5c0;
        case 0x19e5c4u: goto label_19e5c4;
        case 0x19e5c8u: goto label_19e5c8;
        case 0x19e5ccu: goto label_19e5cc;
        case 0x19e5d0u: goto label_19e5d0;
        case 0x19e5d4u: goto label_19e5d4;
        case 0x19e5d8u: goto label_19e5d8;
        case 0x19e5dcu: goto label_19e5dc;
        case 0x19e5e0u: goto label_19e5e0;
        case 0x19e5e4u: goto label_19e5e4;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e5ecu: goto label_19e5ec;
        case 0x19e5f0u: goto label_19e5f0;
        case 0x19e5f4u: goto label_19e5f4;
        default: break;
    }

    ctx->pc = 0x19e030u;

label_19e030:
    // 0x19e030: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_19e034:
    // 0x19e034: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e038:
    // 0x19e038: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x19e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_19e03c:
    // 0x19e03c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x19e03cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_19e040:
    // 0x19e040: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x19e040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_19e044:
    // 0x19e044: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e048:
    // 0x19e048: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x19e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_19e04c:
    // 0x19e04c: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x19e04cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_19e050:
    // 0x19e050: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x19e050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_19e054:
    // 0x19e054: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x19e054u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_19e058:
    // 0x19e058: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x19e058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_19e05c:
    // 0x19e05c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x19e05cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_19e060:
    // 0x19e060: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x19e060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_19e064:
    // 0x19e064: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x19e064u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_19e068:
    // 0x19e068: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x19e068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_19e06c:
    // 0x19e06c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x19e06cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_19e070:
    // 0x19e070: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19e070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_19e074:
    // 0x19e074: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19e074u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19e078:
    // 0x19e078: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x19e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_19e07c:
    // 0x19e07c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x19e07cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_19e080:
    // 0x19e080: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x19e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_19e084:
    // 0x19e084: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x19e084u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_19e088:
    // 0x19e088: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19e08c:
    // 0x19e08c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x19e08cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_19e090:
    // 0x19e090: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x19e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_19e094:
    // 0x19e094: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19e094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_19e098:
    // 0x19e098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e09c:
    // 0x19e09c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x19e09cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_19e0a0:
    // 0x19e0a0: 0x8c6f0120  lw          $t7, 0x120($v1)
    ctx->pc = 0x19e0a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_19e0a4:
    // 0x19e0a4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x19e0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_19e0a8:
    // 0x19e0a8: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x19e0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
label_19e0ac:
    // 0x19e0ac: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x19e0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_19e0b0:
    // 0x19e0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e0b4:
    // 0x19e0b4: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x19e0b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_19e0b8:
    // 0x19e0b8: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x19e0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_19e0bc:
    // 0x19e0bc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x19e0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_19e0c0:
    // 0x19e0c0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x19e0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_19e0c4:
    // 0x19e0c4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x19e0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_19e0c8:
    // 0x19e0c8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19e0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_19e0cc:
    // 0x19e0cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19e0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19e0d0:
    // 0x19e0d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19e0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e0d4:
    // 0x19e0d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e0d8:
    // 0x19e0d8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x19e0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_19e0dc:
    // 0x19e0dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19e0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19e0e0:
    // 0x19e0e0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x19e0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_19e0e4:
    // 0x19e0e4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x19e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_19e0e8:
    // 0x19e0e8: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x19e0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_19e0ec:
    // 0x19e0ec: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x19e0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_19e0f0:
    // 0x19e0f0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x19e0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_19e0f4:
    // 0x19e0f4: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x19e0f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e0f8:
    // 0x19e0f8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x19e0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_19e0fc:
    // 0x19e0fc: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x19e0fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
label_19e100:
    // 0x19e100: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x19e100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_19e104:
    // 0x19e104: 0x1a0a82d  daddu       $s5, $t5, $zero
    ctx->pc = 0x19e104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_19e108:
    // 0x19e108: 0x3c014097  lui         $at, 0x4097
    ctx->pc = 0x19e108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16535 << 16));
label_19e10c:
    // 0x19e10c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x19e10cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_19e110:
    // 0x19e110: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19e110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19e114:
    // 0x19e114: 0x180c82d  daddu       $t9, $t4, $zero
    ctx->pc = 0x19e114u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_19e118:
    // 0x19e118: 0x3c013f55  lui         $at, 0x3F55
    ctx->pc = 0x19e118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16213 << 16));
label_19e11c:
    // 0x19e11c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19e11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_19e120:
    // 0x19e120: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x19e120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_19e124:
    // 0x19e124: 0x140c02d  daddu       $t8, $t2, $zero
    ctx->pc = 0x19e124u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19e128:
    // 0x19e128: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x19e128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
label_19e12c:
    // 0x19e12c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x19e12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_19e130:
    // 0x19e130: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19e130u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e134:
    // 0x19e134: 0x3c013f6a  lui         $at, 0x3F6A
    ctx->pc = 0x19e134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16234 << 16));
label_19e138:
    // 0x19e138: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x19e138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_19e13c:
    // 0x19e13c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19e13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_19e140:
    // 0x19e140: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x19e140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_19e144:
    // 0x19e144: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19e144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19e148:
    // 0x19e148: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19e148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_19e14c:
    // 0x19e14c: 0x3c014079  lui         $at, 0x4079
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16505 << 16));
label_19e150:
    // 0x19e150: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19e150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19e154:
    // 0x19e154: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19e154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19e158:
    // 0x19e158: 0xe441cf94  swc1        $f1, -0x306C($v0)
    ctx->pc = 0x19e158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954900), bits); }
label_19e15c:
    // 0x19e15c: 0xe462cf74  swc1        $f2, -0x308C($v1)
    ctx->pc = 0x19e15cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954868), bits); }
label_19e160:
    // 0x19e160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e164:
    // 0x19e164: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x19e164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_19e168:
    // 0x19e168: 0xe68ccf64  swc1        $f12, -0x309C($s4)
    ctx->pc = 0x19e168u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294954852), bits); }
label_19e16c:
    // 0x19e16c: 0xe66acf68  swc1        $f10, -0x3098($s3)
    ctx->pc = 0x19e16cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294954856), bits); }
label_19e170:
    // 0x19e170: 0xe64bcf6c  swc1        $f11, -0x3094($s2)
    ctx->pc = 0x19e170u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294954860), bits); }
label_19e174:
    // 0x19e174: 0xe608cf70  swc1        $f8, -0x3090($s0)
    ctx->pc = 0x19e174u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954864), bits); }
label_19e178:
    // 0x19e178: 0xacc0cf78  sw          $zero, -0x3088($a2)
    ctx->pc = 0x19e178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954872), GPR_U32(ctx, 0));
label_19e17c:
    // 0x19e17c: 0xe6e7cf7c  swc1        $f7, -0x3084($s7)
    ctx->pc = 0x19e17cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954876), bits); }
label_19e180:
    // 0x19e180: 0xe5a6cf84  swc1        $f6, -0x307C($t5)
    ctx->pc = 0x19e180u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294954884), bits); }
label_19e184:
    // 0x19e184: 0xe585cf8c  swc1        $f5, -0x3074($t4)
    ctx->pc = 0x19e184u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294954892), bits); }
label_19e188:
    // 0x19e188: 0xe520cf90  swc1        $f0, -0x3070($t1)
    ctx->pc = 0x19e188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294954896), bits); }
label_19e18c:
    // 0x19e18c: 0xe544cf98  swc1        $f4, -0x3068($t2)
    ctx->pc = 0x19e18cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294954904), bits); }
label_19e190:
    // 0x19e190: 0xe503cf9c  swc1        $f3, -0x3064($t0)
    ctx->pc = 0x19e190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954908), bits); }
label_19e194:
    // 0x19e194: 0xe4e9cfa4  swc1        $f9, -0x305C($a3)
    ctx->pc = 0x19e194u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954916), bits); }
label_19e198:
    // 0x19e198: 0xe620cf80  swc1        $f0, -0x3080($s1)
    ctx->pc = 0x19e198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294954880), bits); }
label_19e19c:
    // 0x19e19c: 0xe5c0cf88  swc1        $f0, -0x3078($t6)
    ctx->pc = 0x19e19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294954888), bits); }
label_19e1a0:
    // 0x19e1a0: 0x15e20006  bne         $t7, $v0, . + 4 + (0x6 << 2)
label_19e1a4:
    if (ctx->pc == 0x19E1A4u) {
        ctx->pc = 0x19E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1A0u;
        // 0x19e1a4: 0xe569cfa0  swc1        $f9, -0x3060($t3) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954912), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1A8u;
        goto label_19e1a8;
    }
    ctx->pc = 0x19E1A0u;
    {
        const bool branch_taken_0x19e1a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1A0u;
        // 0x19e1a4: 0xe569cfa0  swc1        $f9, -0x3060($t3) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1a0) {
            ctx->pc = 0x19E1BCu;
            goto label_19e1bc;
        }
    }
    ctx->pc = 0x19E1A8u;
label_19e1a8:
    // 0x19e1a8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x19e1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_19e1ac:
    // 0x19e1ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19e1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19e1b0:
    // 0x19e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e1b4:
    // 0x19e1b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_19e1b8:
    if (ctx->pc == 0x19E1B8u) {
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0xe700cf98  swc1        $f0, -0x3068($t8) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294954904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1BCu;
        goto label_19e1bc;
    }
    ctx->pc = 0x19E1B4u;
    {
        const bool branch_taken_0x19e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0xe700cf98  swc1        $f0, -0x3068($t8) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294954904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1b4) {
            ctx->pc = 0x19E1DCu;
            goto label_19e1dc;
        }
    }
    ctx->pc = 0x19E1BCu;
label_19e1bc:
    // 0x19e1bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e1c0:
    // 0x19e1c0: 0x55e20006  bnel        $t7, $v0, . + 4 + (0x6 << 2)
label_19e1c4:
    if (ctx->pc == 0x19E1C4u) {
        ctx->pc = 0x19E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1C0u;
        // 0x19e1c4: 0xaf00cf98  sw          $zero, -0x3068($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4294954904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1C8u;
        goto label_19e1c8;
    }
    ctx->pc = 0x19E1C0u;
    {
        const bool branch_taken_0x19e1c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e1c0) {
            ctx->pc = 0x19E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E1C0u;
            // 0x19e1c4: 0xaf00cf98  sw          $zero, -0x3068($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 4294954904), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E1DCu;
            goto label_19e1dc;
        }
    }
    ctx->pc = 0x19E1C8u;
label_19e1c8:
    // 0x19e1c8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_19e1cc:
    // 0x19e1cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19e1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19e1d0:
    // 0x19e1d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e1d4:
    // 0x19e1d4: 0x0  nop
    ctx->pc = 0x19e1d4u;
    // NOP
label_19e1d8:
    // 0x19e1d8: 0xe700cf98  swc1        $f0, -0x3068($t8)
    ctx->pc = 0x19e1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294954904), bits); }
label_19e1dc:
    // 0x19e1dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e1e0:
    // 0x19e1e0: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x19e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_19e1e4:
    // 0x19e1e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19e1e8:
    // 0x19e1e8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x19e1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_19e1ec:
    // 0x19e1ec: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_19e1f0:
    if (ctx->pc == 0x19E1F0u) {
        ctx->pc = 0x19E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1ECu;
        // 0x19e1f0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1F4u;
        goto label_19e1f4;
    }
    ctx->pc = 0x19E1ECu;
    {
        const bool branch_taken_0x19e1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1ECu;
        // 0x19e1f0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1ec) {
            ctx->pc = 0x19E2D8u;
            goto label_19e2d8;
        }
    }
    ctx->pc = 0x19E1F4u;
label_19e1f4:
    // 0x19e1f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_19e1f8:
    if (ctx->pc == 0x19E1F8u) {
        ctx->pc = 0x19E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1F4u;
        // 0x19e1f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1FCu;
        goto label_19e1fc;
    }
    ctx->pc = 0x19E1F4u;
    {
        const bool branch_taken_0x19e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1F4u;
        // 0x19e1f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1f4) {
            ctx->pc = 0x19E240u;
            goto label_19e240;
        }
    }
    ctx->pc = 0x19E1FCu;
label_19e1fc:
    // 0x19e1fc: 0xc700cf98  lwc1        $f0, -0x3068($t8)
    ctx->pc = 0x19e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e200:
    // 0x19e200: 0xc6e2cf7c  lwc1        $f2, -0x3084($s7)
    ctx->pc = 0x19e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294954876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e204:
    // 0x19e204: 0xc6a4cf84  lwc1        $f4, -0x307C($s5)
    ctx->pc = 0x19e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294954884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19e208:
    // 0x19e208: 0xc725cf8c  lwc1        $f5, -0x3074($t9)
    ctx->pc = 0x19e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4294954892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19e20c:
    // 0x19e20c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19e20cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_19e210:
    // 0x19e210: 0xc443cf64  lwc1        $f3, -0x309C($v0)
    ctx->pc = 0x19e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e214:
    // 0x19e214: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19e214u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_19e218:
    // 0x19e218: 0xc7c1cf6c  lwc1        $f1, -0x3094($fp)
    ctx->pc = 0x19e218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294954860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e21c:
    // 0x19e21c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19e21cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19e220:
    // 0x19e220: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x19e220u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_19e224:
    // 0x19e224: 0xe6e2cf7c  swc1        $f2, -0x3084($s7)
    ctx->pc = 0x19e224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954876), bits); }
label_19e228:
    // 0x19e228: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19e228u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19e22c:
    // 0x19e22c: 0xe6a4cf84  swc1        $f4, -0x307C($s5)
    ctx->pc = 0x19e22cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294954884), bits); }
label_19e230:
    // 0x19e230: 0xe725cf8c  swc1        $f5, -0x3074($t9)
    ctx->pc = 0x19e230u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294954892), bits); }
label_19e234:
    // 0x19e234: 0xe443cf64  swc1        $f3, -0x309C($v0)
    ctx->pc = 0x19e234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954852), bits); }
label_19e238:
    // 0x19e238: 0x1000009c  b           . + 4 + (0x9C << 2)
label_19e23c:
    if (ctx->pc == 0x19E23Cu) {
        ctx->pc = 0x19E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E238u;
        // 0x19e23c: 0xe7c1cf6c  swc1        $f1, -0x3094($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294954860), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E240u;
        goto label_19e240;
    }
    ctx->pc = 0x19E238u;
    {
        const bool branch_taken_0x19e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E238u;
        // 0x19e23c: 0xe7c1cf6c  swc1        $f1, -0x3094($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294954860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e238) {
            ctx->pc = 0x19E4ACu;
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E240u;
label_19e240:
    // 0x19e240: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e244:
    // 0x19e244: 0xc700cf98  lwc1        $f0, -0x3068($t8)
    ctx->pc = 0x19e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e248:
    // 0x19e248: 0xc463cf64  lwc1        $f3, -0x309C($v1)
    ctx->pc = 0x19e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e24c:
    // 0x19e24c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e250:
    // 0x19e250: 0xc7c4cf6c  lwc1        $f4, -0x3094($fp)
    ctx->pc = 0x19e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294954860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19e254:
    // 0x19e254: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e258:
    // 0x19e258: 0xc6e6cf7c  lwc1        $f6, -0x3084($s7)
    ctx->pc = 0x19e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294954876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19e25c:
    // 0x19e25c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x19e25cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_19e260:
    // 0x19e260: 0xc6a7cf84  lwc1        $f7, -0x307C($s5)
    ctx->pc = 0x19e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294954884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19e264:
    // 0x19e264: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19e264u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_19e268:
    // 0x19e268: 0xc725cf8c  lwc1        $f5, -0x3074($t9)
    ctx->pc = 0x19e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4294954892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19e26c:
    // 0x19e26c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x19e26cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_19e270:
    // 0x19e270: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x19e270u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_19e274:
    // 0x19e274: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x19e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_19e278:
    // 0x19e278: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19e278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_19e27c:
    // 0x19e27c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e280:
    // 0x19e280: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19e280u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19e284:
    // 0x19e284: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x19e284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_19e288:
    // 0x19e288: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x19e288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_19e28c:
    // 0x19e28c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19e28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19e290:
    // 0x19e290: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x19e290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_19e294:
    // 0x19e294: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x19e294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_19e298:
    // 0x19e298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e29c:
    // 0x19e29c: 0xe441cf68  swc1        $f1, -0x3098($v0)
    ctx->pc = 0x19e29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954856), bits); }
label_19e2a0:
    // 0x19e2a0: 0xe460cf70  swc1        $f0, -0x3090($v1)
    ctx->pc = 0x19e2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954864), bits); }
label_19e2a4:
    // 0x19e2a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e2a8:
    // 0x19e2a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e2ac:
    // 0x19e2ac: 0xe442cf90  swc1        $f2, -0x3070($v0)
    ctx->pc = 0x19e2acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954896), bits); }
label_19e2b0:
    // 0x19e2b0: 0xe463cf64  swc1        $f3, -0x309C($v1)
    ctx->pc = 0x19e2b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954852), bits); }
label_19e2b4:
    // 0x19e2b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e2b8:
    // 0x19e2b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e2bc:
    // 0x19e2bc: 0xe7c4cf6c  swc1        $f4, -0x3094($fp)
    ctx->pc = 0x19e2bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294954860), bits); }
label_19e2c0:
    // 0x19e2c0: 0xe6e6cf7c  swc1        $f6, -0x3084($s7)
    ctx->pc = 0x19e2c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954876), bits); }
label_19e2c4:
    // 0x19e2c4: 0xe6a7cf84  swc1        $f7, -0x307C($s5)
    ctx->pc = 0x19e2c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294954884), bits); }
label_19e2c8:
    // 0x19e2c8: 0xe725cf8c  swc1        $f5, -0x3074($t9)
    ctx->pc = 0x19e2c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294954892), bits); }
label_19e2cc:
    // 0x19e2cc: 0xe442cf80  swc1        $f2, -0x3080($v0)
    ctx->pc = 0x19e2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954880), bits); }
label_19e2d0:
    // 0x19e2d0: 0x10000076  b           . + 4 + (0x76 << 2)
label_19e2d4:
    if (ctx->pc == 0x19E2D4u) {
        ctx->pc = 0x19E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2D0u;
        // 0x19e2d4: 0xe462cf88  swc1        $f2, -0x3078($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2D8u;
        goto label_19e2d8;
    }
    ctx->pc = 0x19E2D0u;
    {
        const bool branch_taken_0x19e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2D0u;
        // 0x19e2d4: 0xe462cf88  swc1        $f2, -0x3078($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2d0) {
            ctx->pc = 0x19E4ACu;
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E2D8u;
label_19e2d8:
    // 0x19e2d8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x19e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_19e2dc:
    // 0x19e2dc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_19e2e0:
    if (ctx->pc == 0x19E2E0u) {
        ctx->pc = 0x19E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2DCu;
        // 0x19e2e0: 0xc700cf98  lwc1        $f0, -0x3068($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2E4u;
        goto label_19e2e4;
    }
    ctx->pc = 0x19E2DCu;
    {
        const bool branch_taken_0x19e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2DCu;
        // 0x19e2e0: 0xc700cf98  lwc1        $f0, -0x3068($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2dc) {
            ctx->pc = 0x19E384u;
            goto label_19e384;
        }
    }
    ctx->pc = 0x19E2E4u;
label_19e2e4:
    // 0x19e2e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e2e8:
    // 0x19e2e8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x19e2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_19e2ec:
    // 0x19e2ec: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x19e2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
label_19e2f0:
    // 0x19e2f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19e2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19e2f4:
    // 0x19e2f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e2f8:
    // 0x19e2f8: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x19e2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
label_19e2fc:
    // 0x19e2fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19e2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_19e300:
    // 0x19e300: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x19e300u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_19e304:
    // 0x19e304: 0x3c013f6f  lui         $at, 0x3F6F
    ctx->pc = 0x19e304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16239 << 16));
label_19e308:
    // 0x19e308: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x19e308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_19e30c:
    // 0x19e30c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19e30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_19e310:
    // 0x19e310: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x19e310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
label_19e314:
    // 0x19e314: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x19e314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
label_19e318:
    // 0x19e318: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19e318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19e31c:
    // 0x19e31c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19e31cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_19e320:
    // 0x19e320: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x19e320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_19e324:
    // 0x19e324: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x19e324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_19e328:
    // 0x19e328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e32c:
    // 0x19e32c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19e32cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19e330:
    // 0x19e330: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x19e330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_19e334:
    // 0x19e334: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x19e334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_19e338:
    // 0x19e338: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19e338u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_19e33c:
    // 0x19e33c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19e33cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19e340:
    // 0x19e340: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x19e340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_19e344:
    // 0x19e344: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x19e344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_19e348:
    // 0x19e348: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x19e348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_19e34c:
    // 0x19e34c: 0x3c013e7e  lui         $at, 0x3E7E
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15998 << 16));
label_19e350:
    // 0x19e350: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x19e350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
label_19e354:
    // 0x19e354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e358:
    // 0x19e358: 0xe446cf68  swc1        $f6, -0x3098($v0)
    ctx->pc = 0x19e358u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954856), bits); }
label_19e35c:
    // 0x19e35c: 0xe463cf64  swc1        $f3, -0x309C($v1)
    ctx->pc = 0x19e35cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954852), bits); }
label_19e360:
    // 0x19e360: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e364:
    // 0x19e364: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x19e364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_19e368:
    // 0x19e368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19e368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19e36c:
    // 0x19e36c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x19e36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_19e370:
    // 0x19e370: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x19e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_19e374:
    // 0x19e374: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19e374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19e378:
    // 0x19e378: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x19e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_19e37c:
    // 0x19e37c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_19e380:
    if (ctx->pc == 0x19E380u) {
        ctx->pc = 0x19E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E37Cu;
        // 0x19e380: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E384u;
        goto label_19e384;
    }
    ctx->pc = 0x19E37Cu;
    {
        const bool branch_taken_0x19e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E37Cu;
        // 0x19e380: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e37c) {
            ctx->pc = 0x19E42Cu;
            goto label_19e42c;
        }
    }
    ctx->pc = 0x19E384u;
label_19e384:
    // 0x19e384: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x19e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_19e388:
    // 0x19e388: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_19e38c:
    if (ctx->pc == 0x19E38Cu) {
        ctx->pc = 0x19E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E388u;
        // 0x19e38c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E390u;
        goto label_19e390;
    }
    ctx->pc = 0x19E388u;
    {
        const bool branch_taken_0x19e388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E388u;
        // 0x19e38c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e388) {
            ctx->pc = 0x19E468u;
            goto label_19e468;
        }
    }
    ctx->pc = 0x19E390u;
label_19e390:
    // 0x19e390: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x19e390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_19e394:
    // 0x19e394: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19e394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19e398:
    // 0x19e398: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19e398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19e39c:
    // 0x19e39c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e3a0:
    // 0x19e3a0: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x19e3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_19e3a4:
    // 0x19e3a4: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x19e3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_19e3a8:
    // 0x19e3a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19e3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_19e3ac:
    // 0x19e3ac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x19e3acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_19e3b0:
    // 0x19e3b0: 0x3c013f62  lui         $at, 0x3F62
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16226 << 16));
label_19e3b4:
    // 0x19e3b4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x19e3b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_19e3b8:
    // 0x19e3b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19e3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_19e3bc:
    // 0x19e3bc: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x19e3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
label_19e3c0:
    // 0x19e3c0: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x19e3c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_19e3c4:
    // 0x19e3c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19e3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19e3c8:
    // 0x19e3c8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19e3c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_19e3cc:
    // 0x19e3cc: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x19e3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
label_19e3d0:
    // 0x19e3d0: 0x34210a3e  ori         $at, $at, 0xA3E
    ctx->pc = 0x19e3d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2622);
label_19e3d4:
    // 0x19e3d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e3d8:
    // 0x19e3d8: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19e3d8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19e3dc:
    // 0x19e3dc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_19e3e0:
    // 0x19e3e0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x19e3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_19e3e4:
    // 0x19e3e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19e3e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_19e3e8:
    // 0x19e3e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19e3e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19e3ec:
    // 0x19e3ec: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_19e3f0:
    // 0x19e3f0: 0x3421147a  ori         $at, $at, 0x147A
    ctx->pc = 0x19e3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5242);
label_19e3f4:
    // 0x19e3f4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x19e3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_19e3f8:
    // 0x19e3f8: 0x3c013e7e  lui         $at, 0x3E7E
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15998 << 16));
label_19e3fc:
    // 0x19e3fc: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x19e3fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
label_19e400:
    // 0x19e400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e404:
    // 0x19e404: 0xe446cf68  swc1        $f6, -0x3098($v0)
    ctx->pc = 0x19e404u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954856), bits); }
label_19e408:
    // 0x19e408: 0xe463cf64  swc1        $f3, -0x309C($v1)
    ctx->pc = 0x19e408u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954852), bits); }
label_19e40c:
    // 0x19e40c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e410:
    // 0x19e410: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e414:
    // 0x19e414: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_19e418:
    // 0x19e418: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19e418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19e41c:
    // 0x19e41c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x19e41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_19e420:
    // 0x19e420: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_19e424:
    // 0x19e424: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19e424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19e428:
    // 0x19e428: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x19e428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_19e42c:
    // 0x19e42c: 0xe440cf70  swc1        $f0, -0x3090($v0)
    ctx->pc = 0x19e42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954864), bits); }
label_19e430:
    // 0x19e430: 0xe467cf80  swc1        $f7, -0x3080($v1)
    ctx->pc = 0x19e430u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954880), bits); }
label_19e434:
    // 0x19e434: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e438:
    // 0x19e438: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e43c:
    // 0x19e43c: 0xe448cfa0  swc1        $f8, -0x3060($v0)
    ctx->pc = 0x19e43cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954912), bits); }
label_19e440:
    // 0x19e440: 0xe469cfa4  swc1        $f9, -0x305C($v1)
    ctx->pc = 0x19e440u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954916), bits); }
label_19e444:
    // 0x19e444: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e448:
    // 0x19e448: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e44c:
    // 0x19e44c: 0xe7c4cf6c  swc1        $f4, -0x3094($fp)
    ctx->pc = 0x19e44cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294954860), bits); }
label_19e450:
    // 0x19e450: 0xe6e5cf7c  swc1        $f5, -0x3084($s7)
    ctx->pc = 0x19e450u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954876), bits); }
label_19e454:
    // 0x19e454: 0xe6a2cf84  swc1        $f2, -0x307C($s5)
    ctx->pc = 0x19e454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294954884), bits); }
label_19e458:
    // 0x19e458: 0xe721cf8c  swc1        $f1, -0x3074($t9)
    ctx->pc = 0x19e458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294954892), bits); }
label_19e45c:
    // 0x19e45c: 0xe447cf90  swc1        $f7, -0x3070($v0)
    ctx->pc = 0x19e45cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954896), bits); }
label_19e460:
    // 0x19e460: 0x10000012  b           . + 4 + (0x12 << 2)
label_19e464:
    if (ctx->pc == 0x19E464u) {
        ctx->pc = 0x19E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E460u;
        // 0x19e464: 0xe467cf88  swc1        $f7, -0x3078($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E468u;
        goto label_19e468;
    }
    ctx->pc = 0x19E460u;
    {
        const bool branch_taken_0x19e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E460u;
        // 0x19e464: 0xe467cf88  swc1        $f7, -0x3078($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e460) {
            ctx->pc = 0x19E4ACu;
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E468u;
label_19e468:
    // 0x19e468: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e46c:
    // 0x19e46c: 0xc700cf98  lwc1        $f0, -0x3068($t8)
    ctx->pc = 0x19e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e470:
    // 0x19e470: 0xc442cf64  lwc1        $f2, -0x309C($v0)
    ctx->pc = 0x19e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e474:
    // 0x19e474: 0xc7c4cf6c  lwc1        $f4, -0x3094($fp)
    ctx->pc = 0x19e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294954860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19e478:
    // 0x19e478: 0xc6e5cf7c  lwc1        $f5, -0x3084($s7)
    ctx->pc = 0x19e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294954876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19e47c:
    // 0x19e47c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19e47cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_19e480:
    // 0x19e480: 0xc6a3cf84  lwc1        $f3, -0x307C($s5)
    ctx->pc = 0x19e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294954884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e484:
    // 0x19e484: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19e484u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_19e488:
    // 0x19e488: 0xc721cf8c  lwc1        $f1, -0x3074($t9)
    ctx->pc = 0x19e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4294954892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e48c:
    // 0x19e48c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19e48cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_19e490:
    // 0x19e490: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x19e490u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_19e494:
    // 0x19e494: 0xe442cf64  swc1        $f2, -0x309C($v0)
    ctx->pc = 0x19e494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954852), bits); }
label_19e498:
    // 0x19e498: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19e498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19e49c:
    // 0x19e49c: 0xe7c4cf6c  swc1        $f4, -0x3094($fp)
    ctx->pc = 0x19e49cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294954860), bits); }
label_19e4a0:
    // 0x19e4a0: 0xe6e5cf7c  swc1        $f5, -0x3084($s7)
    ctx->pc = 0x19e4a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954876), bits); }
label_19e4a4:
    // 0x19e4a4: 0xe6a3cf84  swc1        $f3, -0x307C($s5)
    ctx->pc = 0x19e4a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294954884), bits); }
label_19e4a8:
    // 0x19e4a8: 0xe721cf8c  swc1        $f1, -0x3074($t9)
    ctx->pc = 0x19e4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294954892), bits); }
label_19e4ac:
    // 0x19e4ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e4b0:
    // 0x19e4b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x19e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19e4b4:
    // 0x19e4b4: 0xc46ccf9c  lwc1        $f12, -0x3064($v1)
    ctx->pc = 0x19e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19e4b8:
    // 0x19e4b8: 0x26d200d0  addiu       $s2, $s6, 0xD0
    ctx->pc = 0x19e4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_19e4bc:
    // 0x19e4bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19e4bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e4c0:
    // 0x19e4c0: 0xc05e602  jal         func_179808
label_19e4c4:
    if (ctx->pc == 0x19E4C4u) {
        ctx->pc = 0x19E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4C0u;
        // 0x19e4c4: 0x241400bf  addiu       $s4, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4C8u;
        goto label_19e4c8;
    }
    ctx->pc = 0x19E4C0u;
    SET_GPR_U32(ctx, 31, 0x19E4C8u);
    ctx->pc = 0x19E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4C0u;
    // 0x19e4c4: 0x241400bf  addiu       $s4, $zero, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x19E4C0u, 0x19E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4C8u;
label_19e4c8:
    // 0x19e4c8: 0x241e0020  addiu       $fp, $zero, 0x20
    ctx->pc = 0x19e4c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19e4cc:
    // 0x19e4cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_19e4d0:
    // 0x19e4d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19e4d4:
    // 0x19e4d4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x19e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_19e4d8:
    // 0x19e4d8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19e4dc:
    // 0x19e4dc: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x19e4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_19e4e0:
    // 0x19e4e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e4e4:
    // 0x19e4e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19e4e8:
    // 0x19e4e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19e4e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e4ec:
    // 0x19e4ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19e4ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e4f0:
    // 0x19e4f0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19e4f4:
    // 0x19e4f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e4f8:
    // 0x19e4f8: 0xc073418  jal         func_1CD060
label_19e4fc:
    if (ctx->pc == 0x19E4FCu) {
        ctx->pc = 0x19E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4F8u;
        // 0x19e4fc: 0x241300ff  addiu       $s3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E500u;
        goto label_19e500;
    }
    ctx->pc = 0x19E4F8u;
    SET_GPR_U32(ctx, 31, 0x19E500u);
    ctx->pc = 0x19E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4F8u;
    // 0x19e4fc: 0x241300ff  addiu       $s3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x19E4F8u, 0x19E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E500u;
label_19e500:
    // 0x19e500: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e504:
    // 0x19e504: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
label_19e508:
    // 0x19e508: 0xc067b9c  jal         func_19EE70
label_19e50c:
    if (ctx->pc == 0x19E50Cu) {
        ctx->pc = 0x19E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E508u;
        // 0x19e50c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E510u;
        goto label_19e510;
    }
    ctx->pc = 0x19E508u;
    SET_GPR_U32(ctx, 31, 0x19E510u);
    ctx->pc = 0x19E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E508u;
    // 0x19e50c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x19E508u, 0x19E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E510u;
label_19e510:
    // 0x19e510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19e510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e514:
    // 0x19e514: 0xc073478  jal         func_1CD1E0
label_19e518:
    if (ctx->pc == 0x19E518u) {
        ctx->pc = 0x19E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E514u;
        // 0x19e518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E51Cu;
        goto label_19e51c;
    }
    ctx->pc = 0x19E514u;
    SET_GPR_U32(ctx, 31, 0x19E51Cu);
    ctx->pc = 0x19E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E514u;
    // 0x19e518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x19E514u, 0x19E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E51Cu;
label_19e51c:
    // 0x19e51c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x19e51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19e520:
    // 0x19e520: 0xa3b40030  sb          $s4, 0x30($sp)
    ctx->pc = 0x19e520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 20));
label_19e524:
    // 0x19e524: 0x0  nop
    ctx->pc = 0x19e524u;
    // NOP
label_19e528:
    // 0x19e528: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e52c:
    // 0x19e52c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_19e530:
    // 0x19e530: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e534:
    // 0x19e534: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x19e534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
label_19e538:
    // 0x19e538: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x19e538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19e53c:
    // 0x19e53c: 0xa23e0002  sb          $fp, 0x2($s1)
    ctx->pc = 0x19e53cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 30));
label_19e540:
    // 0x19e540: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x19e540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e544:
    // 0x19e544: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x19e544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
label_19e548:
    // 0x19e548: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19e548u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e54c:
    // 0x19e54c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x19e54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_19e550:
    // 0x19e550: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19e550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19e554:
    // 0x19e554: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19e554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e558:
    // 0x19e558: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19e558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_19e55c:
    // 0x19e55c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19e560:
    // 0x19e560: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x19e560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_19e564:
    // 0x19e564: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_19e568:
    // 0x19e568: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_19e56c:
    // 0x19e56c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19e570:
    // 0x19e570: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x19e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
label_19e574:
    // 0x19e574: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19e578:
    // 0x19e578: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x19e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_19e57c:
    // 0x19e57c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_19e580:
    // 0x19e580: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x19e580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_19e584:
    // 0x19e584: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19e584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19e588:
    // 0x19e588: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x19e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_19e58c:
    // 0x19e58c: 0x60f809  jalr        $v1
label_19e590:
    if (ctx->pc == 0x19E590u) {
        ctx->pc = 0x19E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E58Cu;
        // 0x19e590: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E594u;
        goto label_19e594;
    }
    ctx->pc = 0x19E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E594u);
        ctx->pc = 0x19E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E58Cu;
        // 0x19e590: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E58Cu, 0x19E594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E594u;
label_19e594:
    // 0x19e594: 0x2ea20003  sltiu       $v0, $s5, 0x3
    ctx->pc = 0x19e594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19e598:
    // 0x19e598: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
label_19e59c:
    if (ctx->pc == 0x19E59Cu) {
        ctx->pc = 0x19E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E598u;
        // 0x19e59c: 0xa3b40030  sb          $s4, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5A0u;
        goto label_19e5a0;
    }
    ctx->pc = 0x19E598u;
    {
        const bool branch_taken_0x19e598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e598) {
            ctx->pc = 0x19E59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E598u;
            // 0x19e59c: 0xa3b40030  sb          $s4, 0x30($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e528;
        }
    }
    ctx->pc = 0x19E5A0u;
label_19e5a0:
    // 0x19e5a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19e5a4:
    // 0x19e5a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e5a8:
    // 0x19e5a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19e5ac:
    // 0x19e5ac: 0xa2c303d0  sb          $v1, 0x3D0($s6)
    ctx->pc = 0x19e5acu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 976), (uint8_t)GPR_U32(ctx, 3));
label_19e5b0:
    // 0x19e5b0: 0xaec203d4  sw          $v0, 0x3D4($s6)
    ctx->pc = 0x19e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 980), GPR_U32(ctx, 2));
label_19e5b4:
    // 0x19e5b4: 0xa2c003d1  sb          $zero, 0x3D1($s6)
    ctx->pc = 0x19e5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 977), (uint8_t)GPR_U32(ctx, 0));
label_19e5b8:
    // 0x19e5b8: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x19e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_19e5bc:
    // 0x19e5bc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x19e5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_19e5c0:
    // 0x19e5c0: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x19e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_19e5c4:
    // 0x19e5c4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x19e5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19e5c8:
    // 0x19e5c8: 0xaec303d8  sw          $v1, 0x3D8($s6)
    ctx->pc = 0x19e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 984), GPR_U32(ctx, 3));
label_19e5cc:
    // 0x19e5cc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x19e5ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19e5d0:
    // 0x19e5d0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x19e5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19e5d4:
    // 0x19e5d4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x19e5d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19e5d8:
    // 0x19e5d8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x19e5d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19e5dc:
    // 0x19e5dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19e5dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19e5e0:
    // 0x19e5e0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x19e5e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19e5e4:
    // 0x19e5e4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x19e5e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19e5e8:
    // 0x19e5e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19e5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e5ec:
    // 0x19e5ec: 0x3e00008  jr          $ra
label_19e5f0:
    if (ctx->pc == 0x19E5F0u) {
        ctx->pc = 0x19E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5ECu;
        // 0x19e5f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5F4u;
        goto label_19e5f4;
    }
    ctx->pc = 0x19E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5ECu;
        // 0x19e5f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E5F4u;
label_19e5f4:
    // 0x19e5f4: 0x0  nop
    ctx->pc = 0x19e5f4u;
    // NOP
    ctx->pc = 0x19e5f8u;
}
