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

// Function: sub_0021DE48
// Address: 0x21de48 - 0x21e3a8
void sub_0021DE48_0x21de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DE48_0x21de48");
#endif

    switch (ctx->pc) {
        case 0x21de48u: goto label_21de48;
        case 0x21de4cu: goto label_21de4c;
        case 0x21de50u: goto label_21de50;
        case 0x21de54u: goto label_21de54;
        case 0x21de58u: goto label_21de58;
        case 0x21de5cu: goto label_21de5c;
        case 0x21de60u: goto label_21de60;
        case 0x21de64u: goto label_21de64;
        case 0x21de68u: goto label_21de68;
        case 0x21de6cu: goto label_21de6c;
        case 0x21de70u: goto label_21de70;
        case 0x21de74u: goto label_21de74;
        case 0x21de78u: goto label_21de78;
        case 0x21de7cu: goto label_21de7c;
        case 0x21de80u: goto label_21de80;
        case 0x21de84u: goto label_21de84;
        case 0x21de88u: goto label_21de88;
        case 0x21de8cu: goto label_21de8c;
        case 0x21de90u: goto label_21de90;
        case 0x21de94u: goto label_21de94;
        case 0x21de98u: goto label_21de98;
        case 0x21de9cu: goto label_21de9c;
        case 0x21dea0u: goto label_21dea0;
        case 0x21dea4u: goto label_21dea4;
        case 0x21dea8u: goto label_21dea8;
        case 0x21deacu: goto label_21deac;
        case 0x21deb0u: goto label_21deb0;
        case 0x21deb4u: goto label_21deb4;
        case 0x21deb8u: goto label_21deb8;
        case 0x21debcu: goto label_21debc;
        case 0x21dec0u: goto label_21dec0;
        case 0x21dec4u: goto label_21dec4;
        case 0x21dec8u: goto label_21dec8;
        case 0x21deccu: goto label_21decc;
        case 0x21ded0u: goto label_21ded0;
        case 0x21ded4u: goto label_21ded4;
        case 0x21ded8u: goto label_21ded8;
        case 0x21dedcu: goto label_21dedc;
        case 0x21dee0u: goto label_21dee0;
        case 0x21dee4u: goto label_21dee4;
        case 0x21dee8u: goto label_21dee8;
        case 0x21deecu: goto label_21deec;
        case 0x21def0u: goto label_21def0;
        case 0x21def4u: goto label_21def4;
        case 0x21def8u: goto label_21def8;
        case 0x21defcu: goto label_21defc;
        case 0x21df00u: goto label_21df00;
        case 0x21df04u: goto label_21df04;
        case 0x21df08u: goto label_21df08;
        case 0x21df0cu: goto label_21df0c;
        case 0x21df10u: goto label_21df10;
        case 0x21df14u: goto label_21df14;
        case 0x21df18u: goto label_21df18;
        case 0x21df1cu: goto label_21df1c;
        case 0x21df20u: goto label_21df20;
        case 0x21df24u: goto label_21df24;
        case 0x21df28u: goto label_21df28;
        case 0x21df2cu: goto label_21df2c;
        case 0x21df30u: goto label_21df30;
        case 0x21df34u: goto label_21df34;
        case 0x21df38u: goto label_21df38;
        case 0x21df3cu: goto label_21df3c;
        case 0x21df40u: goto label_21df40;
        case 0x21df44u: goto label_21df44;
        case 0x21df48u: goto label_21df48;
        case 0x21df4cu: goto label_21df4c;
        case 0x21df50u: goto label_21df50;
        case 0x21df54u: goto label_21df54;
        case 0x21df58u: goto label_21df58;
        case 0x21df5cu: goto label_21df5c;
        case 0x21df60u: goto label_21df60;
        case 0x21df64u: goto label_21df64;
        case 0x21df68u: goto label_21df68;
        case 0x21df6cu: goto label_21df6c;
        case 0x21df70u: goto label_21df70;
        case 0x21df74u: goto label_21df74;
        case 0x21df78u: goto label_21df78;
        case 0x21df7cu: goto label_21df7c;
        case 0x21df80u: goto label_21df80;
        case 0x21df84u: goto label_21df84;
        case 0x21df88u: goto label_21df88;
        case 0x21df8cu: goto label_21df8c;
        case 0x21df90u: goto label_21df90;
        case 0x21df94u: goto label_21df94;
        case 0x21df98u: goto label_21df98;
        case 0x21df9cu: goto label_21df9c;
        case 0x21dfa0u: goto label_21dfa0;
        case 0x21dfa4u: goto label_21dfa4;
        case 0x21dfa8u: goto label_21dfa8;
        case 0x21dfacu: goto label_21dfac;
        case 0x21dfb0u: goto label_21dfb0;
        case 0x21dfb4u: goto label_21dfb4;
        case 0x21dfb8u: goto label_21dfb8;
        case 0x21dfbcu: goto label_21dfbc;
        case 0x21dfc0u: goto label_21dfc0;
        case 0x21dfc4u: goto label_21dfc4;
        case 0x21dfc8u: goto label_21dfc8;
        case 0x21dfccu: goto label_21dfcc;
        case 0x21dfd0u: goto label_21dfd0;
        case 0x21dfd4u: goto label_21dfd4;
        case 0x21dfd8u: goto label_21dfd8;
        case 0x21dfdcu: goto label_21dfdc;
        case 0x21dfe0u: goto label_21dfe0;
        case 0x21dfe4u: goto label_21dfe4;
        case 0x21dfe8u: goto label_21dfe8;
        case 0x21dfecu: goto label_21dfec;
        case 0x21dff0u: goto label_21dff0;
        case 0x21dff4u: goto label_21dff4;
        case 0x21dff8u: goto label_21dff8;
        case 0x21dffcu: goto label_21dffc;
        case 0x21e000u: goto label_21e000;
        case 0x21e004u: goto label_21e004;
        case 0x21e008u: goto label_21e008;
        case 0x21e00cu: goto label_21e00c;
        case 0x21e010u: goto label_21e010;
        case 0x21e014u: goto label_21e014;
        case 0x21e018u: goto label_21e018;
        case 0x21e01cu: goto label_21e01c;
        case 0x21e020u: goto label_21e020;
        case 0x21e024u: goto label_21e024;
        case 0x21e028u: goto label_21e028;
        case 0x21e02cu: goto label_21e02c;
        case 0x21e030u: goto label_21e030;
        case 0x21e034u: goto label_21e034;
        case 0x21e038u: goto label_21e038;
        case 0x21e03cu: goto label_21e03c;
        case 0x21e040u: goto label_21e040;
        case 0x21e044u: goto label_21e044;
        case 0x21e048u: goto label_21e048;
        case 0x21e04cu: goto label_21e04c;
        case 0x21e050u: goto label_21e050;
        case 0x21e054u: goto label_21e054;
        case 0x21e058u: goto label_21e058;
        case 0x21e05cu: goto label_21e05c;
        case 0x21e060u: goto label_21e060;
        case 0x21e064u: goto label_21e064;
        case 0x21e068u: goto label_21e068;
        case 0x21e06cu: goto label_21e06c;
        case 0x21e070u: goto label_21e070;
        case 0x21e074u: goto label_21e074;
        case 0x21e078u: goto label_21e078;
        case 0x21e07cu: goto label_21e07c;
        case 0x21e080u: goto label_21e080;
        case 0x21e084u: goto label_21e084;
        case 0x21e088u: goto label_21e088;
        case 0x21e08cu: goto label_21e08c;
        case 0x21e090u: goto label_21e090;
        case 0x21e094u: goto label_21e094;
        case 0x21e098u: goto label_21e098;
        case 0x21e09cu: goto label_21e09c;
        case 0x21e0a0u: goto label_21e0a0;
        case 0x21e0a4u: goto label_21e0a4;
        case 0x21e0a8u: goto label_21e0a8;
        case 0x21e0acu: goto label_21e0ac;
        case 0x21e0b0u: goto label_21e0b0;
        case 0x21e0b4u: goto label_21e0b4;
        case 0x21e0b8u: goto label_21e0b8;
        case 0x21e0bcu: goto label_21e0bc;
        case 0x21e0c0u: goto label_21e0c0;
        case 0x21e0c4u: goto label_21e0c4;
        case 0x21e0c8u: goto label_21e0c8;
        case 0x21e0ccu: goto label_21e0cc;
        case 0x21e0d0u: goto label_21e0d0;
        case 0x21e0d4u: goto label_21e0d4;
        case 0x21e0d8u: goto label_21e0d8;
        case 0x21e0dcu: goto label_21e0dc;
        case 0x21e0e0u: goto label_21e0e0;
        case 0x21e0e4u: goto label_21e0e4;
        case 0x21e0e8u: goto label_21e0e8;
        case 0x21e0ecu: goto label_21e0ec;
        case 0x21e0f0u: goto label_21e0f0;
        case 0x21e0f4u: goto label_21e0f4;
        case 0x21e0f8u: goto label_21e0f8;
        case 0x21e0fcu: goto label_21e0fc;
        case 0x21e100u: goto label_21e100;
        case 0x21e104u: goto label_21e104;
        case 0x21e108u: goto label_21e108;
        case 0x21e10cu: goto label_21e10c;
        case 0x21e110u: goto label_21e110;
        case 0x21e114u: goto label_21e114;
        case 0x21e118u: goto label_21e118;
        case 0x21e11cu: goto label_21e11c;
        case 0x21e120u: goto label_21e120;
        case 0x21e124u: goto label_21e124;
        case 0x21e128u: goto label_21e128;
        case 0x21e12cu: goto label_21e12c;
        case 0x21e130u: goto label_21e130;
        case 0x21e134u: goto label_21e134;
        case 0x21e138u: goto label_21e138;
        case 0x21e13cu: goto label_21e13c;
        case 0x21e140u: goto label_21e140;
        case 0x21e144u: goto label_21e144;
        case 0x21e148u: goto label_21e148;
        case 0x21e14cu: goto label_21e14c;
        case 0x21e150u: goto label_21e150;
        case 0x21e154u: goto label_21e154;
        case 0x21e158u: goto label_21e158;
        case 0x21e15cu: goto label_21e15c;
        case 0x21e160u: goto label_21e160;
        case 0x21e164u: goto label_21e164;
        case 0x21e168u: goto label_21e168;
        case 0x21e16cu: goto label_21e16c;
        case 0x21e170u: goto label_21e170;
        case 0x21e174u: goto label_21e174;
        case 0x21e178u: goto label_21e178;
        case 0x21e17cu: goto label_21e17c;
        case 0x21e180u: goto label_21e180;
        case 0x21e184u: goto label_21e184;
        case 0x21e188u: goto label_21e188;
        case 0x21e18cu: goto label_21e18c;
        case 0x21e190u: goto label_21e190;
        case 0x21e194u: goto label_21e194;
        case 0x21e198u: goto label_21e198;
        case 0x21e19cu: goto label_21e19c;
        case 0x21e1a0u: goto label_21e1a0;
        case 0x21e1a4u: goto label_21e1a4;
        case 0x21e1a8u: goto label_21e1a8;
        case 0x21e1acu: goto label_21e1ac;
        case 0x21e1b0u: goto label_21e1b0;
        case 0x21e1b4u: goto label_21e1b4;
        case 0x21e1b8u: goto label_21e1b8;
        case 0x21e1bcu: goto label_21e1bc;
        case 0x21e1c0u: goto label_21e1c0;
        case 0x21e1c4u: goto label_21e1c4;
        case 0x21e1c8u: goto label_21e1c8;
        case 0x21e1ccu: goto label_21e1cc;
        case 0x21e1d0u: goto label_21e1d0;
        case 0x21e1d4u: goto label_21e1d4;
        case 0x21e1d8u: goto label_21e1d8;
        case 0x21e1dcu: goto label_21e1dc;
        case 0x21e1e0u: goto label_21e1e0;
        case 0x21e1e4u: goto label_21e1e4;
        case 0x21e1e8u: goto label_21e1e8;
        case 0x21e1ecu: goto label_21e1ec;
        case 0x21e1f0u: goto label_21e1f0;
        case 0x21e1f4u: goto label_21e1f4;
        case 0x21e1f8u: goto label_21e1f8;
        case 0x21e1fcu: goto label_21e1fc;
        case 0x21e200u: goto label_21e200;
        case 0x21e204u: goto label_21e204;
        case 0x21e208u: goto label_21e208;
        case 0x21e20cu: goto label_21e20c;
        case 0x21e210u: goto label_21e210;
        case 0x21e214u: goto label_21e214;
        case 0x21e218u: goto label_21e218;
        case 0x21e21cu: goto label_21e21c;
        case 0x21e220u: goto label_21e220;
        case 0x21e224u: goto label_21e224;
        case 0x21e228u: goto label_21e228;
        case 0x21e22cu: goto label_21e22c;
        case 0x21e230u: goto label_21e230;
        case 0x21e234u: goto label_21e234;
        case 0x21e238u: goto label_21e238;
        case 0x21e23cu: goto label_21e23c;
        case 0x21e240u: goto label_21e240;
        case 0x21e244u: goto label_21e244;
        case 0x21e248u: goto label_21e248;
        case 0x21e24cu: goto label_21e24c;
        case 0x21e250u: goto label_21e250;
        case 0x21e254u: goto label_21e254;
        case 0x21e258u: goto label_21e258;
        case 0x21e25cu: goto label_21e25c;
        case 0x21e260u: goto label_21e260;
        case 0x21e264u: goto label_21e264;
        case 0x21e268u: goto label_21e268;
        case 0x21e26cu: goto label_21e26c;
        case 0x21e270u: goto label_21e270;
        case 0x21e274u: goto label_21e274;
        case 0x21e278u: goto label_21e278;
        case 0x21e27cu: goto label_21e27c;
        case 0x21e280u: goto label_21e280;
        case 0x21e284u: goto label_21e284;
        case 0x21e288u: goto label_21e288;
        case 0x21e28cu: goto label_21e28c;
        case 0x21e290u: goto label_21e290;
        case 0x21e294u: goto label_21e294;
        case 0x21e298u: goto label_21e298;
        case 0x21e29cu: goto label_21e29c;
        case 0x21e2a0u: goto label_21e2a0;
        case 0x21e2a4u: goto label_21e2a4;
        case 0x21e2a8u: goto label_21e2a8;
        case 0x21e2acu: goto label_21e2ac;
        case 0x21e2b0u: goto label_21e2b0;
        case 0x21e2b4u: goto label_21e2b4;
        case 0x21e2b8u: goto label_21e2b8;
        case 0x21e2bcu: goto label_21e2bc;
        case 0x21e2c0u: goto label_21e2c0;
        case 0x21e2c4u: goto label_21e2c4;
        case 0x21e2c8u: goto label_21e2c8;
        case 0x21e2ccu: goto label_21e2cc;
        case 0x21e2d0u: goto label_21e2d0;
        case 0x21e2d4u: goto label_21e2d4;
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e2dcu: goto label_21e2dc;
        case 0x21e2e0u: goto label_21e2e0;
        case 0x21e2e4u: goto label_21e2e4;
        case 0x21e2e8u: goto label_21e2e8;
        case 0x21e2ecu: goto label_21e2ec;
        case 0x21e2f0u: goto label_21e2f0;
        case 0x21e2f4u: goto label_21e2f4;
        case 0x21e2f8u: goto label_21e2f8;
        case 0x21e2fcu: goto label_21e2fc;
        case 0x21e300u: goto label_21e300;
        case 0x21e304u: goto label_21e304;
        case 0x21e308u: goto label_21e308;
        case 0x21e30cu: goto label_21e30c;
        case 0x21e310u: goto label_21e310;
        case 0x21e314u: goto label_21e314;
        case 0x21e318u: goto label_21e318;
        case 0x21e31cu: goto label_21e31c;
        case 0x21e320u: goto label_21e320;
        case 0x21e324u: goto label_21e324;
        case 0x21e328u: goto label_21e328;
        case 0x21e32cu: goto label_21e32c;
        case 0x21e330u: goto label_21e330;
        case 0x21e334u: goto label_21e334;
        case 0x21e338u: goto label_21e338;
        case 0x21e33cu: goto label_21e33c;
        case 0x21e340u: goto label_21e340;
        case 0x21e344u: goto label_21e344;
        case 0x21e348u: goto label_21e348;
        case 0x21e34cu: goto label_21e34c;
        case 0x21e350u: goto label_21e350;
        case 0x21e354u: goto label_21e354;
        case 0x21e358u: goto label_21e358;
        case 0x21e35cu: goto label_21e35c;
        case 0x21e360u: goto label_21e360;
        case 0x21e364u: goto label_21e364;
        case 0x21e368u: goto label_21e368;
        case 0x21e36cu: goto label_21e36c;
        case 0x21e370u: goto label_21e370;
        case 0x21e374u: goto label_21e374;
        case 0x21e378u: goto label_21e378;
        case 0x21e37cu: goto label_21e37c;
        case 0x21e380u: goto label_21e380;
        case 0x21e384u: goto label_21e384;
        case 0x21e388u: goto label_21e388;
        case 0x21e38cu: goto label_21e38c;
        case 0x21e390u: goto label_21e390;
        case 0x21e394u: goto label_21e394;
        case 0x21e398u: goto label_21e398;
        case 0x21e39cu: goto label_21e39c;
        case 0x21e3a0u: goto label_21e3a0;
        case 0x21e3a4u: goto label_21e3a4;
        default: break;
    }

    ctx->pc = 0x21de48u;

label_21de48:
    // 0x21de48: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x21de48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_21de4c:
    // 0x21de4c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x21de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_21de50:
    // 0x21de50: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_21de54:
    // 0x21de54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21de54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21de58:
    // 0x21de58: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x21de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_21de5c:
    // 0x21de5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21de5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21de60:
    // 0x21de60: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x21de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_21de64:
    // 0x21de64: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x21de64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21de68:
    // 0x21de68: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x21de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_21de6c:
    // 0x21de6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21de6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21de70:
    // 0x21de70: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x21de70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_21de74:
    // 0x21de74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21de74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21de78:
    // 0x21de78: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_21de7c:
    // 0x21de7c: 0x26b40090  addiu       $s4, $s5, 0x90
    ctx->pc = 0x21de7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_21de80:
    // 0x21de80: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21de84:
    // 0x21de84: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x21de84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_21de88:
    // 0x21de88: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21de88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21de8c:
    // 0x21de8c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x21de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_21de90:
    // 0x21de90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_21de94:
    // 0x21de94: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x21de94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_21de98:
    // 0x21de98: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x21de98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_21de9c:
    // 0x21de9c: 0xc047e6c  jal         func_11F9B0
label_21dea0:
    if (ctx->pc == 0x21DEA0u) {
        ctx->pc = 0x21DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE9Cu;
        // 0x21dea0: 0xafa80044  sw          $t0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEA4u;
        goto label_21dea4;
    }
    ctx->pc = 0x21DE9Cu;
    SET_GPR_U32(ctx, 31, 0x21DEA4u);
    ctx->pc = 0x21DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE9Cu;
    // 0x21dea0: 0xafa80044  sw          $t0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x21DE9Cu, 0x21DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEA4u;
label_21dea4:
    // 0x21dea4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x21dea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_21dea8:
    // 0x21dea8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21dea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21deac:
    // 0x21deac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21deacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21deb0:
    // 0x21deb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21deb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21deb4:
    // 0x21deb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21deb8:
    // 0x21deb8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x21deb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_21debc:
    // 0x21debc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_21dec0:
    // 0x21dec0: 0x40f809  jalr        $v0
label_21dec4:
    if (ctx->pc == 0x21DEC4u) {
        ctx->pc = 0x21DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEC0u;
        // 0x21dec4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEC8u;
        goto label_21dec8;
    }
    ctx->pc = 0x21DEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DEC8u);
        ctx->pc = 0x21DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEC0u;
        // 0x21dec4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DEC0u, 0x21DEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DEC8u;
label_21dec8:
    // 0x21dec8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x21dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_21decc:
    // 0x21decc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ded0:
    // 0x21ded0: 0x24764b00  addiu       $s6, $v1, 0x4B00
    ctx->pc = 0x21ded0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_21ded4:
    // 0x21ded4: 0x0  nop
    ctx->pc = 0x21ded4u;
    // NOP
label_21ded8:
    // 0x21ded8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21dedc:
    // 0x21dedc: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x21dedcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_21dee0:
    // 0x21dee0: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x21dee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_21dee4:
    // 0x21dee4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x21dee4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_21dee8:
    // 0x21dee8: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x21dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_21deec:
    // 0x21deec: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21def0:
    // 0x21def0: 0x40f809  jalr        $v0
label_21def4:
    if (ctx->pc == 0x21DEF4u) {
        ctx->pc = 0x21DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEF0u;
        // 0x21def4: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEF8u;
        goto label_21def8;
    }
    ctx->pc = 0x21DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DEF8u);
        ctx->pc = 0x21DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEF0u;
        // 0x21def4: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DEF0u, 0x21DEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DEF8u;
label_21def8:
    // 0x21def8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x21def8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21defc:
    // 0x21defc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21df00:
    // 0x21df00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21df00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21df04:
    // 0x21df04: 0x84e40170  lh          $a0, 0x170($a3)
    ctx->pc = 0x21df04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 368)));
label_21df08:
    // 0x21df08: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x21df08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_21df0c:
    // 0x21df0c: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x21df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_21df10:
    // 0x21df10: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21df14:
    // 0x21df14: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21df14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21df18:
    // 0x21df18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21df18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21df1c:
    // 0x21df1c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21df1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21df20:
    // 0x21df20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21df20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21df24:
    // 0x21df24: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21df24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21df28:
    // 0x21df28: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x21df28u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_21df2c:
    // 0x21df2c: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x21df2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21df30:
    // 0x21df30: 0x40f809  jalr        $v0
label_21df34:
    if (ctx->pc == 0x21DF34u) {
        ctx->pc = 0x21DF38u;
        goto label_21df38;
    }
    ctx->pc = 0x21DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DF38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF30u, 0x21DF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DF38u;
label_21df38:
    // 0x21df38: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21df3c:
    // 0x21df3c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x21df3cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21df40:
    // 0x21df40: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x21df40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21df44:
    // 0x21df44: 0x0  nop
    ctx->pc = 0x21df44u;
    // NOP
label_21df48:
    // 0x21df48: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_21df4c:
    if (ctx->pc == 0x21DF4Cu) {
        ctx->pc = 0x21DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF48u;
        // 0x21df4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF50u;
        goto label_21df50;
    }
    ctx->pc = 0x21DF48u;
    {
        const bool branch_taken_0x21df48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF48u;
        // 0x21df4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df48) {
            ctx->pc = 0x21E0A8u;
            goto label_21e0a8;
        }
    }
    ctx->pc = 0x21DF50u;
label_21df50:
    // 0x21df50: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x21df50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_21df54:
    // 0x21df54: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_21df58:
    if (ctx->pc == 0x21DF58u) {
        ctx->pc = 0x21DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF54u;
        // 0x21df58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF5Cu;
        goto label_21df5c;
    }
    ctx->pc = 0x21DF54u;
    {
        const bool branch_taken_0x21df54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF54u;
        // 0x21df58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df54) {
            ctx->pc = 0x21DED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ded8;
        }
    }
    ctx->pc = 0x21DF5Cu;
label_21df5c:
    // 0x21df5c: 0x12e0003c  beqz        $s7, . + 4 + (0x3C << 2)
label_21df60:
    if (ctx->pc == 0x21DF60u) {
        ctx->pc = 0x21DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF5Cu;
        // 0x21df60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF64u;
        goto label_21df64;
    }
    ctx->pc = 0x21DF5Cu;
    {
        const bool branch_taken_0x21df5c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF5Cu;
        // 0x21df60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df5c) {
            ctx->pc = 0x21E050u;
            goto label_21e050;
        }
    }
    ctx->pc = 0x21DF64u;
label_21df64:
    // 0x21df64: 0xc047e6c  jal         func_11F9B0
label_21df68:
    if (ctx->pc == 0x21DF68u) {
        ctx->pc = 0x21DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF64u;
        // 0x21df68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF6Cu;
        goto label_21df6c;
    }
    ctx->pc = 0x21DF64u;
    SET_GPR_U32(ctx, 31, 0x21DF6Cu);
    ctx->pc = 0x21DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF64u;
    // 0x21df68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x21DF64u, 0x21DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF6Cu;
label_21df6c:
    // 0x21df6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21df6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21df70:
    // 0x21df70: 0x122000fe  beqz        $s1, . + 4 + (0xFE << 2)
label_21df74:
    if (ctx->pc == 0x21DF74u) {
        ctx->pc = 0x21DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF70u;
        // 0x21df74: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF78u;
        goto label_21df78;
    }
    ctx->pc = 0x21DF70u;
    {
        const bool branch_taken_0x21df70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF70u;
        // 0x21df74: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df70) {
            ctx->pc = 0x21E36Cu;
            goto label_21e36c;
        }
    }
    ctx->pc = 0x21DF78u;
label_21df78:
    // 0x21df78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21df7c:
    // 0x21df7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21df80:
    // 0x21df80: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x21df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_21df84:
    // 0x21df84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21df84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21df88:
    // 0x21df88: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x21df88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_21df8c:
    // 0x21df8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21df8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21df90:
    // 0x21df90: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_21df94:
    // 0x21df94: 0x26b40090  addiu       $s4, $s5, 0x90
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_21df98:
    // 0x21df98: 0x60f809  jalr        $v1
label_21df9c:
    if (ctx->pc == 0x21DF9Cu) {
        ctx->pc = 0x21DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF98u;
        // 0x21df9c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFA0u;
        goto label_21dfa0;
    }
    ctx->pc = 0x21DF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21DFA0u);
        ctx->pc = 0x21DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF98u;
        // 0x21df9c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF98u, 0x21DFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DFA0u;
label_21dfa0:
    // 0x21dfa0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21dfa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21dfa4:
    // 0x21dfa4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x21dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_21dfa8:
    // 0x21dfa8: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x21dfa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21dfac:
    // 0x21dfac: 0x24764b00  addiu       $s6, $v1, 0x4B00
    ctx->pc = 0x21dfacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_21dfb0:
    // 0x21dfb0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21dfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21dfb4:
    // 0x21dfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21dfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dfb8:
    // 0x21dfb8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x21dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_21dfbc:
    // 0x21dfbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21dfc0:
    // 0x21dfc0: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x21dfc0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_21dfc4:
    // 0x21dfc4: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x21dfc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_21dfc8:
    // 0x21dfc8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x21dfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_21dfcc:
    // 0x21dfcc: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_21dfd0:
    // 0x21dfd0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21dfd4:
    // 0x21dfd4: 0x40f809  jalr        $v0
label_21dfd8:
    if (ctx->pc == 0x21DFD8u) {
        ctx->pc = 0x21DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD4u;
        // 0x21dfd8: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFDCu;
        goto label_21dfdc;
    }
    ctx->pc = 0x21DFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DFDCu);
        ctx->pc = 0x21DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD4u;
        // 0x21dfd8: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DFD4u, 0x21DFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DFDCu;
label_21dfdc:
    // 0x21dfdc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x21dfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21dfe0:
    // 0x21dfe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21dfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21dfe4:
    // 0x21dfe4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21dfe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21dfe8:
    // 0x21dfe8: 0x84e40170  lh          $a0, 0x170($a3)
    ctx->pc = 0x21dfe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 368)));
label_21dfec:
    // 0x21dfec: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x21dfecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_21dff0:
    // 0x21dff0: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x21dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_21dff4:
    // 0x21dff4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21dff8:
    // 0x21dff8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21dff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21dffc:
    // 0x21dffc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21dffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21e000:
    // 0x21e000: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21e000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21e004:
    // 0x21e004: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21e004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21e008:
    // 0x21e008: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21e008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21e00c:
    // 0x21e00c: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x21e00cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_21e010:
    // 0x21e010: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x21e010u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21e014:
    // 0x21e014: 0x40f809  jalr        $v0
label_21e018:
    if (ctx->pc == 0x21E018u) {
        ctx->pc = 0x21E01Cu;
        goto label_21e01c;
    }
    ctx->pc = 0x21E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E01Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E014u, 0x21E01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E01Cu;
label_21e01c:
    // 0x21e01c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21e020:
    // 0x21e020: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x21e020u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21e024:
    // 0x21e024: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x21e024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21e028:
    // 0x21e028: 0x0  nop
    ctx->pc = 0x21e028u;
    // NOP
label_21e02c:
    // 0x21e02c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_21e030:
    if (ctx->pc == 0x21E030u) {
        ctx->pc = 0x21E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E02Cu;
        // 0x21e030: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E034u;
        goto label_21e034;
    }
    ctx->pc = 0x21E02Cu;
    {
        const bool branch_taken_0x21e02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E02Cu;
        // 0x21e030: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e02c) {
            ctx->pc = 0x21E0A0u;
            goto label_21e0a0;
        }
    }
    ctx->pc = 0x21E034u;
label_21e034:
    // 0x21e034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e038:
    // 0x21e038: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x21e038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_21e03c:
    // 0x21e03c: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_21e040:
    if (ctx->pc == 0x21E040u) {
        ctx->pc = 0x21E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E03Cu;
        // 0x21e040: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E044u;
        goto label_21e044;
    }
    ctx->pc = 0x21E03Cu;
    {
        const bool branch_taken_0x21e03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e03c) {
            ctx->pc = 0x21E040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E03Cu;
            // 0x21e040: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dfc0;
        }
    }
    ctx->pc = 0x21E044u;
label_21e044:
    // 0x21e044: 0x16e000ca  bnez        $s7, . + 4 + (0xCA << 2)
label_21e048:
    if (ctx->pc == 0x21E048u) {
        ctx->pc = 0x21E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E044u;
        // 0x21e048: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E04Cu;
        goto label_21e04c;
    }
    ctx->pc = 0x21E044u;
    {
        const bool branch_taken_0x21e044 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E044u;
        // 0x21e048: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e044) {
            ctx->pc = 0x21E370u;
            goto label_21e370;
        }
    }
    ctx->pc = 0x21E04Cu;
label_21e04c:
    // 0x21e04c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21e050:
    // 0x21e050: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x21e050u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_21e054:
    // 0x21e054: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x21e054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_21e058:
    // 0x21e058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e05c:
    // 0x21e05c: 0xc0e8b48  jal         func_3A2D20
label_21e060:
    if (ctx->pc == 0x21E060u) {
        ctx->pc = 0x21E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E05Cu;
        // 0x21e060: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E064u;
        goto label_21e064;
    }
    ctx->pc = 0x21E05Cu;
    SET_GPR_U32(ctx, 31, 0x21E064u);
    ctx->pc = 0x21E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E05Cu;
    // 0x21e060: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21E05Cu, 0x21E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E064u;
label_21e064:
    // 0x21e064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e068:
    // 0x21e068: 0xc10c313  jal         func_430C4C
label_21e06c:
    if (ctx->pc == 0x21E06Cu) {
        ctx->pc = 0x21E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E068u;
        // 0x21e06c: 0x2605a990  addiu       $a1, $s0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E070u;
        goto label_21e070;
    }
    ctx->pc = 0x21E068u;
    SET_GPR_U32(ctx, 31, 0x21E070u);
    ctx->pc = 0x21E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E068u;
    // 0x21e06c: 0x2605a990  addiu       $a1, $s0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E068u, 0x21E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E070u;
label_21e070:
    // 0x21e070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_21e074:
    if (ctx->pc == 0x21E074u) {
        ctx->pc = 0x21E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E070u;
        // 0x21e074: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E078u;
        goto label_21e078;
    }
    ctx->pc = 0x21E070u;
    {
        const bool branch_taken_0x21e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E070u;
        // 0x21e074: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e070) {
            ctx->pc = 0x21E094u;
            goto label_21e094;
        }
    }
    ctx->pc = 0x21E078u;
label_21e078:
    // 0x21e078: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21e078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21e07c:
    // 0x21e07c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e080:
    // 0x21e080: 0xc10c313  jal         func_430C4C
label_21e084:
    if (ctx->pc == 0x21E084u) {
        ctx->pc = 0x21E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E080u;
        // 0x21e084: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E088u;
        goto label_21e088;
    }
    ctx->pc = 0x21E080u;
    SET_GPR_U32(ctx, 31, 0x21E088u);
    ctx->pc = 0x21E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E080u;
    // 0x21e084: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E080u, 0x21E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E088u;
label_21e088:
    // 0x21e088: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_21e08c:
    if (ctx->pc == 0x21E08Cu) {
        ctx->pc = 0x21E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E088u;
        // 0x21e08c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E090u;
        goto label_21e090;
    }
    ctx->pc = 0x21E088u;
    {
        const bool branch_taken_0x21e088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E088u;
        // 0x21e08c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e088) {
            ctx->pc = 0x21E0B0u;
            goto label_21e0b0;
        }
    }
    ctx->pc = 0x21E090u;
label_21e090:
    // 0x21e090: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e094:
    // 0x21e094: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x21e094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_21e098:
    // 0x21e098: 0x1000000e  b           . + 4 + (0xE << 2)
label_21e09c:
    if (ctx->pc == 0x21E09Cu) {
        ctx->pc = 0x21E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E098u;
        // 0x21e09c: 0x8ea50640  lw          $a1, 0x640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0A0u;
        goto label_21e0a0;
    }
    ctx->pc = 0x21E098u;
    {
        const bool branch_taken_0x21e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E098u;
        // 0x21e09c: 0x8ea50640  lw          $a1, 0x640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e098) {
            ctx->pc = 0x21E0D4u;
            goto label_21e0d4;
        }
    }
    ctx->pc = 0x21E0A0u;
label_21e0a0:
    // 0x21e0a0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_21e0a4:
    if (ctx->pc == 0x21E0A4u) {
        ctx->pc = 0x21E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A0u;
        // 0x21e0a4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0A8u;
        goto label_21e0a8;
    }
    ctx->pc = 0x21E0A0u;
    {
        const bool branch_taken_0x21e0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A0u;
        // 0x21e0a4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0a0) {
            ctx->pc = 0x21E044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e044;
        }
    }
    ctx->pc = 0x21E0A8u;
label_21e0a8:
    // 0x21e0a8: 0x1000ffac  b           . + 4 + (-0x54 << 2)
label_21e0ac:
    if (ctx->pc == 0x21E0ACu) {
        ctx->pc = 0x21E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A8u;
        // 0x21e0ac: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0B0u;
        goto label_21e0b0;
    }
    ctx->pc = 0x21E0A8u;
    {
        const bool branch_taken_0x21e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A8u;
        // 0x21e0ac: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0a8) {
            ctx->pc = 0x21DF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21df5c;
        }
    }
    ctx->pc = 0x21E0B0u;
label_21e0b0:
    // 0x21e0b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e0b4:
    // 0x21e0b4: 0x2445a9a0  addiu       $a1, $v0, -0x5660
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_21e0b8:
    // 0x21e0b8: 0xc10c313  jal         func_430C4C
label_21e0bc:
    if (ctx->pc == 0x21E0BCu) {
        ctx->pc = 0x21E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0B8u;
        // 0x21e0bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0C0u;
        goto label_21e0c0;
    }
    ctx->pc = 0x21E0B8u;
    SET_GPR_U32(ctx, 31, 0x21E0C0u);
    ctx->pc = 0x21E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0B8u;
    // 0x21e0bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E0B8u, 0x21E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0C0u;
label_21e0c0:
    // 0x21e0c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_21e0c4:
    if (ctx->pc == 0x21E0C4u) {
        ctx->pc = 0x21E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0C0u;
        // 0x21e0c4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0C8u;
        goto label_21e0c8;
    }
    ctx->pc = 0x21E0C0u;
    {
        const bool branch_taken_0x21e0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0C0u;
        // 0x21e0c4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0c0) {
            ctx->pc = 0x21E0E4u;
            goto label_21e0e4;
        }
    }
    ctx->pc = 0x21E0C8u;
label_21e0c8:
    // 0x21e0c8: 0x3c05ffef  lui         $a1, 0xFFEF
    ctx->pc = 0x21e0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
label_21e0cc:
    // 0x21e0cc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e0d0:
    // 0x21e0d0: 0x34a5efef  ori         $a1, $a1, 0xEFEF
    ctx->pc = 0x21e0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61423);
label_21e0d4:
    // 0x21e0d4: 0xc0e8b68  jal         func_3A2DA0
label_21e0d8:
    if (ctx->pc == 0x21E0D8u) {
        ctx->pc = 0x21E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0D4u;
        // 0x21e0d8: 0x3c120056  lui         $s2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0DCu;
        goto label_21e0dc;
    }
    ctx->pc = 0x21E0D4u;
    SET_GPR_U32(ctx, 31, 0x21E0DCu);
    ctx->pc = 0x21E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0D4u;
    // 0x21e0d8: 0x3c120056  lui         $s2, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)86 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E0D4u, 0x21E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0DCu;
label_21e0dc:
    // 0x21e0dc: 0x10000036  b           . + 4 + (0x36 << 2)
label_21e0e0:
    if (ctx->pc == 0x21E0E0u) {
        ctx->pc = 0x21E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0DCu;
        // 0x21e0e0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0E4u;
        goto label_21e0e4;
    }
    ctx->pc = 0x21E0DCu;
    {
        const bool branch_taken_0x21e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0DCu;
        // 0x21e0e0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0dc) {
            ctx->pc = 0x21E1B8u;
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E0E4u;
label_21e0e4:
    // 0x21e0e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e0e8:
    // 0x21e0e8: 0x2445a9a8  addiu       $a1, $v0, -0x5658
    ctx->pc = 0x21e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945192));
label_21e0ec:
    // 0x21e0ec: 0xc10c313  jal         func_430C4C
label_21e0f0:
    if (ctx->pc == 0x21E0F0u) {
        ctx->pc = 0x21E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0ECu;
        // 0x21e0f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0F4u;
        goto label_21e0f4;
    }
    ctx->pc = 0x21E0ECu;
    SET_GPR_U32(ctx, 31, 0x21E0F4u);
    ctx->pc = 0x21E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0ECu;
    // 0x21e0f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E0ECu, 0x21E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0F4u;
label_21e0f4:
    // 0x21e0f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_21e0f8:
    if (ctx->pc == 0x21E0F8u) {
        ctx->pc = 0x21E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0F4u;
        // 0x21e0f8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0FCu;
        goto label_21e0fc;
    }
    ctx->pc = 0x21E0F4u;
    {
        const bool branch_taken_0x21e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0F4u;
        // 0x21e0f8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0f4) {
            ctx->pc = 0x21E150u;
            goto label_21e150;
        }
    }
    ctx->pc = 0x21E0FCu;
label_21e0fc:
    // 0x21e0fc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21e100:
    // 0x21e100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e104:
    // 0x21e104: 0xc10c313  jal         func_430C4C
label_21e108:
    if (ctx->pc == 0x21E108u) {
        ctx->pc = 0x21E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E104u;
        // 0x21e108: 0x24a5a9b0  addiu       $a1, $a1, -0x5650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E10Cu;
        goto label_21e10c;
    }
    ctx->pc = 0x21E104u;
    SET_GPR_U32(ctx, 31, 0x21E10Cu);
    ctx->pc = 0x21E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E104u;
    // 0x21e108: 0x24a5a9b0  addiu       $a1, $a1, -0x5650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E104u, 0x21E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E10Cu;
label_21e10c:
    // 0x21e10c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_21e110:
    if (ctx->pc == 0x21E110u) {
        ctx->pc = 0x21E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E10Cu;
        // 0x21e110: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E114u;
        goto label_21e114;
    }
    ctx->pc = 0x21E10Cu;
    {
        const bool branch_taken_0x21e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E10Cu;
        // 0x21e110: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e10c) {
            ctx->pc = 0x21E138u;
            goto label_21e138;
        }
    }
    ctx->pc = 0x21E114u;
label_21e114:
    // 0x21e114: 0xc088bfe  jal         func_222FF8
label_21e118:
    if (ctx->pc == 0x21E118u) {
        ctx->pc = 0x21E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E114u;
        // 0x21e118: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E11Cu;
        goto label_21e11c;
    }
    ctx->pc = 0x21E114u;
    SET_GPR_U32(ctx, 31, 0x21E11Cu);
    ctx->pc = 0x21E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E114u;
    // 0x21e118: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x21E114u, 0x21E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E11Cu;
label_21e11c:
    // 0x21e11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e120:
    // 0x21e120: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_21e124:
    if (ctx->pc == 0x21E124u) {
        ctx->pc = 0x21E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E120u;
        // 0x21e124: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E128u;
        goto label_21e128;
    }
    ctx->pc = 0x21E120u;
    {
        const bool branch_taken_0x21e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E120u;
        // 0x21e124: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e120) {
            ctx->pc = 0x21E150u;
            goto label_21e150;
        }
    }
    ctx->pc = 0x21E128u;
label_21e128:
    // 0x21e128: 0xc0e8b68  jal         func_3A2DA0
label_21e12c:
    if (ctx->pc == 0x21E12Cu) {
        ctx->pc = 0x21E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E128u;
        // 0x21e12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E130u;
        goto label_21e130;
    }
    ctx->pc = 0x21E128u;
    SET_GPR_U32(ctx, 31, 0x21E130u);
    ctx->pc = 0x21E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E128u;
    // 0x21e12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E128u, 0x21E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E130u;
label_21e130:
    // 0x21e130: 0x10000021  b           . + 4 + (0x21 << 2)
label_21e134:
    if (ctx->pc == 0x21E134u) {
        ctx->pc = 0x21E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E130u;
        // 0x21e134: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E138u;
        goto label_21e138;
    }
    ctx->pc = 0x21E130u;
    {
        const bool branch_taken_0x21e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E130u;
        // 0x21e134: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e130) {
            ctx->pc = 0x21E1B8u;
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E138u;
label_21e138:
    // 0x21e138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e13c:
    // 0x21e13c: 0xc10c313  jal         func_430C4C
label_21e140:
    if (ctx->pc == 0x21E140u) {
        ctx->pc = 0x21E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E13Cu;
        // 0x21e140: 0x24a5a9b8  addiu       $a1, $a1, -0x5648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E144u;
        goto label_21e144;
    }
    ctx->pc = 0x21E13Cu;
    SET_GPR_U32(ctx, 31, 0x21E144u);
    ctx->pc = 0x21E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E13Cu;
    // 0x21e140: 0x24a5a9b8  addiu       $a1, $a1, -0x5648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E13Cu, 0x21E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E144u;
label_21e144:
    // 0x21e144: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21e148:
    if (ctx->pc == 0x21E148u) {
        ctx->pc = 0x21E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E144u;
        // 0x21e148: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E14Cu;
        goto label_21e14c;
    }
    ctx->pc = 0x21E144u;
    {
        const bool branch_taken_0x21e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e144) {
            ctx->pc = 0x21E148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E144u;
            // 0x21e148: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E160u;
            goto label_21e160;
        }
    }
    ctx->pc = 0x21E14Cu;
label_21e14c:
    // 0x21e14c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e150:
    // 0x21e150: 0xc0e8b68  jal         func_3A2DA0
label_21e154:
    if (ctx->pc == 0x21E154u) {
        ctx->pc = 0x21E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E150u;
        // 0x21e154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E158u;
        goto label_21e158;
    }
    ctx->pc = 0x21E150u;
    SET_GPR_U32(ctx, 31, 0x21E158u);
    ctx->pc = 0x21E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E150u;
    // 0x21e154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E150u, 0x21E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E158u;
label_21e158:
    // 0x21e158: 0x10000017  b           . + 4 + (0x17 << 2)
label_21e15c:
    if (ctx->pc == 0x21E15Cu) {
        ctx->pc = 0x21E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E158u;
        // 0x21e15c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E160u;
        goto label_21e160;
    }
    ctx->pc = 0x21E158u;
    {
        const bool branch_taken_0x21e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E158u;
        // 0x21e15c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e158) {
            ctx->pc = 0x21E1B8u;
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E160u;
label_21e160:
    // 0x21e160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e164:
    // 0x21e164: 0xc10c313  jal         func_430C4C
label_21e168:
    if (ctx->pc == 0x21E168u) {
        ctx->pc = 0x21E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E164u;
        // 0x21e168: 0x24a5a9c0  addiu       $a1, $a1, -0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E16Cu;
        goto label_21e16c;
    }
    ctx->pc = 0x21E164u;
    SET_GPR_U32(ctx, 31, 0x21E16Cu);
    ctx->pc = 0x21E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E164u;
    // 0x21e168: 0x24a5a9c0  addiu       $a1, $a1, -0x5640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E164u, 0x21E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E16Cu;
label_21e16c:
    // 0x21e16c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21e170:
    if (ctx->pc == 0x21E170u) {
        ctx->pc = 0x21E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E16Cu;
        // 0x21e170: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E174u;
        goto label_21e174;
    }
    ctx->pc = 0x21E16Cu;
    {
        const bool branch_taken_0x21e16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e16c) {
            ctx->pc = 0x21E170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E16Cu;
            // 0x21e170: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E188u;
            goto label_21e188;
        }
    }
    ctx->pc = 0x21E174u;
label_21e174:
    // 0x21e174: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e178:
    // 0x21e178: 0xc0e8b68  jal         func_3A2DA0
label_21e17c:
    if (ctx->pc == 0x21E17Cu) {
        ctx->pc = 0x21E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E178u;
        // 0x21e17c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E180u;
        goto label_21e180;
    }
    ctx->pc = 0x21E178u;
    SET_GPR_U32(ctx, 31, 0x21E180u);
    ctx->pc = 0x21E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E178u;
    // 0x21e17c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E178u, 0x21E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E180u;
label_21e180:
    // 0x21e180: 0x1000000d  b           . + 4 + (0xD << 2)
label_21e184:
    if (ctx->pc == 0x21E184u) {
        ctx->pc = 0x21E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E180u;
        // 0x21e184: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E188u;
        goto label_21e188;
    }
    ctx->pc = 0x21E180u;
    {
        const bool branch_taken_0x21e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E180u;
        // 0x21e184: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e180) {
            ctx->pc = 0x21E1B8u;
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E188u;
label_21e188:
    // 0x21e188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e18c:
    // 0x21e18c: 0xc10c313  jal         func_430C4C
label_21e190:
    if (ctx->pc == 0x21E190u) {
        ctx->pc = 0x21E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E18Cu;
        // 0x21e190: 0x24a5a9c8  addiu       $a1, $a1, -0x5638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E194u;
        goto label_21e194;
    }
    ctx->pc = 0x21E18Cu;
    SET_GPR_U32(ctx, 31, 0x21E194u);
    ctx->pc = 0x21E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E18Cu;
    // 0x21e190: 0x24a5a9c8  addiu       $a1, $a1, -0x5638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E18Cu, 0x21E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E194u;
label_21e194:
    // 0x21e194: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_21e198:
    if (ctx->pc == 0x21E198u) {
        ctx->pc = 0x21E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E194u;
        // 0x21e198: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E19Cu;
        goto label_21e19c;
    }
    ctx->pc = 0x21E194u;
    {
        const bool branch_taken_0x21e194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E194u;
        // 0x21e198: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e194) {
            ctx->pc = 0x21E1ACu;
            goto label_21e1ac;
        }
    }
    ctx->pc = 0x21E19Cu;
label_21e19c:
    // 0x21e19c: 0xc0e8b68  jal         func_3A2DA0
label_21e1a0:
    if (ctx->pc == 0x21E1A0u) {
        ctx->pc = 0x21E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E19Cu;
        // 0x21e1a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1A4u;
        goto label_21e1a4;
    }
    ctx->pc = 0x21E19Cu;
    SET_GPR_U32(ctx, 31, 0x21E1A4u);
    ctx->pc = 0x21E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E19Cu;
    // 0x21e1a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E19Cu, 0x21E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1A4u;
label_21e1a4:
    // 0x21e1a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_21e1a8:
    if (ctx->pc == 0x21E1A8u) {
        ctx->pc = 0x21E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1A4u;
        // 0x21e1a8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1ACu;
        goto label_21e1ac;
    }
    ctx->pc = 0x21E1A4u;
    {
        const bool branch_taken_0x21e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1A4u;
        // 0x21e1a8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1a4) {
            ctx->pc = 0x21E1B8u;
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E1ACu;
label_21e1ac:
    // 0x21e1ac: 0xc0e8b68  jal         func_3A2DA0
label_21e1b0:
    if (ctx->pc == 0x21E1B0u) {
        ctx->pc = 0x21E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1ACu;
        // 0x21e1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1B4u;
        goto label_21e1b4;
    }
    ctx->pc = 0x21E1ACu;
    SET_GPR_U32(ctx, 31, 0x21E1B4u);
    ctx->pc = 0x21E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1ACu;
    // 0x21e1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E1ACu, 0x21E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1B4u;
label_21e1b4:
    // 0x21e1b4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e1b8:
    // 0x21e1b8: 0xc0e8b70  jal         func_3A2DC0
label_21e1bc:
    if (ctx->pc == 0x21E1BCu) {
        ctx->pc = 0x21E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1B8u;
        // 0x21e1bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1C0u;
        goto label_21e1c0;
    }
    ctx->pc = 0x21E1B8u;
    SET_GPR_U32(ctx, 31, 0x21E1C0u);
    ctx->pc = 0x21E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1B8u;
    // 0x21e1bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21E1B8u, 0x21E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1C0u;
label_21e1c0:
    // 0x21e1c0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e1c4:
    // 0x21e1c4: 0xc0e8b68  jal         func_3A2DA0
label_21e1c8:
    if (ctx->pc == 0x21E1C8u) {
        ctx->pc = 0x21E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1C4u;
        // 0x21e1c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1CCu;
        goto label_21e1cc;
    }
    ctx->pc = 0x21E1C4u;
    SET_GPR_U32(ctx, 31, 0x21E1CCu);
    ctx->pc = 0x21E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1C4u;
    // 0x21e1c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E1C4u, 0x21E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1CCu;
label_21e1cc:
    // 0x21e1cc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x21e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21e1d0:
    // 0x21e1d0: 0xc0e8b58  jal         func_3A2D60
label_21e1d4:
    if (ctx->pc == 0x21E1D4u) {
        ctx->pc = 0x21E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1D0u;
        // 0x21e1d4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1D8u;
        goto label_21e1d8;
    }
    ctx->pc = 0x21E1D0u;
    SET_GPR_U32(ctx, 31, 0x21E1D8u);
    ctx->pc = 0x21E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1D0u;
    // 0x21e1d4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21E1D0u, 0x21E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1D8u;
label_21e1d8:
    // 0x21e1d8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e1dc:
    // 0x21e1dc: 0xc0e8b58  jal         func_3A2D60
label_21e1e0:
    if (ctx->pc == 0x21E1E0u) {
        ctx->pc = 0x21E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1DCu;
        // 0x21e1e0: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1E4u;
        goto label_21e1e4;
    }
    ctx->pc = 0x21E1DCu;
    SET_GPR_U32(ctx, 31, 0x21E1E4u);
    ctx->pc = 0x21E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1DCu;
    // 0x21e1e0: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21E1DCu, 0x21E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1E4u;
label_21e1e4:
    // 0x21e1e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e1e8:
    // 0x21e1e8: 0xc10c313  jal         func_430C4C
label_21e1ec:
    if (ctx->pc == 0x21E1ECu) {
        ctx->pc = 0x21E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1E8u;
        // 0x21e1ec: 0x2605a9a0  addiu       $a1, $s0, -0x5660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1F0u;
        goto label_21e1f0;
    }
    ctx->pc = 0x21E1E8u;
    SET_GPR_U32(ctx, 31, 0x21E1F0u);
    ctx->pc = 0x21E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1E8u;
    // 0x21e1ec: 0x2605a9a0  addiu       $a1, $s0, -0x5660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E1E8u, 0x21E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1F0u;
label_21e1f0:
    // 0x21e1f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21e1f4:
    if (ctx->pc == 0x21E1F4u) {
        ctx->pc = 0x21E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1F0u;
        // 0x21e1f4: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1F8u;
        goto label_21e1f8;
    }
    ctx->pc = 0x21E1F0u;
    {
        const bool branch_taken_0x21e1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1F0u;
        // 0x21e1f4: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1f0) {
            ctx->pc = 0x21E20Cu;
            goto label_21e20c;
        }
    }
    ctx->pc = 0x21E1F8u;
label_21e1f8:
    // 0x21e1f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e1fc:
    // 0x21e1fc: 0xc10c313  jal         func_430C4C
label_21e200:
    if (ctx->pc == 0x21E200u) {
        ctx->pc = 0x21E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1FCu;
        // 0x21e200: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E204u;
        goto label_21e204;
    }
    ctx->pc = 0x21E1FCu;
    SET_GPR_U32(ctx, 31, 0x21E204u);
    ctx->pc = 0x21E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1FCu;
    // 0x21e200: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E1FCu, 0x21E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E204u;
label_21e204:
    // 0x21e204: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21e208:
    if (ctx->pc == 0x21E208u) {
        ctx->pc = 0x21E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E204u;
        // 0x21e208: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E20Cu;
        goto label_21e20c;
    }
    ctx->pc = 0x21E204u;
    {
        const bool branch_taken_0x21e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E204u;
        // 0x21e208: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e204) {
            ctx->pc = 0x21E220u;
            goto label_21e220;
        }
    }
    ctx->pc = 0x21E20Cu;
label_21e20c:
    // 0x21e20c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e210:
    // 0x21e210: 0xc0e8b68  jal         func_3A2DA0
label_21e214:
    if (ctx->pc == 0x21E214u) {
        ctx->pc = 0x21E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E210u;
        // 0x21e214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E218u;
        goto label_21e218;
    }
    ctx->pc = 0x21E210u;
    SET_GPR_U32(ctx, 31, 0x21E218u);
    ctx->pc = 0x21E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E210u;
    // 0x21e214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E210u, 0x21E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E218u;
label_21e218:
    // 0x21e218: 0x10000004  b           . + 4 + (0x4 << 2)
label_21e21c:
    if (ctx->pc == 0x21E21Cu) {
        ctx->pc = 0x21E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E218u;
        // 0x21e21c: 0x2645a9a8  addiu       $a1, $s2, -0x5658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E220u;
        goto label_21e220;
    }
    ctx->pc = 0x21E218u;
    {
        const bool branch_taken_0x21e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E218u;
        // 0x21e21c: 0x2645a9a8  addiu       $a1, $s2, -0x5658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e218) {
            ctx->pc = 0x21E22Cu;
            goto label_21e22c;
        }
    }
    ctx->pc = 0x21E220u;
label_21e220:
    // 0x21e220: 0xc0e8b68  jal         func_3A2DA0
label_21e224:
    if (ctx->pc == 0x21E224u) {
        ctx->pc = 0x21E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E220u;
        // 0x21e224: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E228u;
        goto label_21e228;
    }
    ctx->pc = 0x21E220u;
    SET_GPR_U32(ctx, 31, 0x21E228u);
    ctx->pc = 0x21E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E220u;
    // 0x21e224: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21E220u, 0x21E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E228u;
label_21e228:
    // 0x21e228: 0x2645a9a8  addiu       $a1, $s2, -0x5658
    ctx->pc = 0x21e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945192));
label_21e22c:
    // 0x21e22c: 0xc10c313  jal         func_430C4C
label_21e230:
    if (ctx->pc == 0x21E230u) {
        ctx->pc = 0x21E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E22Cu;
        // 0x21e230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E234u;
        goto label_21e234;
    }
    ctx->pc = 0x21E22Cu;
    SET_GPR_U32(ctx, 31, 0x21E234u);
    ctx->pc = 0x21E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E22Cu;
    // 0x21e230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E22Cu, 0x21E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E234u;
label_21e234:
    // 0x21e234: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21e238:
    if (ctx->pc == 0x21E238u) {
        ctx->pc = 0x21E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E234u;
        // 0x21e238: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E23Cu;
        goto label_21e23c;
    }
    ctx->pc = 0x21E234u;
    {
        const bool branch_taken_0x21e234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E234u;
        // 0x21e238: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e234) {
            ctx->pc = 0x21E254u;
            goto label_21e254;
        }
    }
    ctx->pc = 0x21E23Cu;
label_21e23c:
    // 0x21e23c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21e23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21e240:
    // 0x21e240: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e244:
    // 0x21e244: 0xc0e8b90  jal         func_3A2E40
label_21e248:
    if (ctx->pc == 0x21E248u) {
        ctx->pc = 0x21E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E244u;
        // 0x21e248: 0x24a5a9d0  addiu       $a1, $a1, -0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E24Cu;
        goto label_21e24c;
    }
    ctx->pc = 0x21E244u;
    SET_GPR_U32(ctx, 31, 0x21E24Cu);
    ctx->pc = 0x21E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E244u;
    // 0x21e248: 0x24a5a9d0  addiu       $a1, $a1, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21E244u, 0x21E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E24Cu;
label_21e24c:
    // 0x21e24c: 0x10000045  b           . + 4 + (0x45 << 2)
label_21e250:
    if (ctx->pc == 0x21E250u) {
        ctx->pc = 0x21E254u;
        goto label_21e254;
    }
    ctx->pc = 0x21E24Cu;
    {
        const bool branch_taken_0x21e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e24c) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E254u;
label_21e254:
    // 0x21e254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e258:
    // 0x21e258: 0xc10c313  jal         func_430C4C
label_21e25c:
    if (ctx->pc == 0x21E25Cu) {
        ctx->pc = 0x21E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E258u;
        // 0x21e25c: 0x24a5a9d8  addiu       $a1, $a1, -0x5628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E260u;
        goto label_21e260;
    }
    ctx->pc = 0x21E258u;
    SET_GPR_U32(ctx, 31, 0x21E260u);
    ctx->pc = 0x21E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E258u;
    // 0x21e25c: 0x24a5a9d8  addiu       $a1, $a1, -0x5628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E258u, 0x21E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E260u;
label_21e260:
    // 0x21e260: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_21e264:
    if (ctx->pc == 0x21E264u) {
        ctx->pc = 0x21E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E260u;
        // 0x21e264: 0x2605a9a0  addiu       $a1, $s0, -0x5660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E268u;
        goto label_21e268;
    }
    ctx->pc = 0x21E260u;
    {
        const bool branch_taken_0x21e260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e260) {
            ctx->pc = 0x21E264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E260u;
            // 0x21e264: 0x2605a9a0  addiu       $a1, $s0, -0x5660 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945184));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E290u;
            goto label_21e290;
        }
    }
    ctx->pc = 0x21E268u;
label_21e268:
    // 0x21e268: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21e268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21e26c:
    // 0x21e26c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_21e270:
    // 0x21e270: 0x84640454  lh          $a0, 0x454($v1)
    ctx->pc = 0x21e270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
label_21e274:
    // 0x21e274: 0x1480003b  bnez        $a0, . + 4 + (0x3B << 2)
label_21e278:
    if (ctx->pc == 0x21E278u) {
        ctx->pc = 0x21E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E274u;
        // 0x21e278: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E27Cu;
        goto label_21e27c;
    }
    ctx->pc = 0x21E274u;
    {
        const bool branch_taken_0x21e274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E274u;
        // 0x21e278: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e274) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E27Cu;
label_21e27c:
    // 0x21e27c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e280:
    // 0x21e280: 0xc0e8b90  jal         func_3A2E40
label_21e284:
    if (ctx->pc == 0x21E284u) {
        ctx->pc = 0x21E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E280u;
        // 0x21e284: 0x24a5a9e0  addiu       $a1, $a1, -0x5620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E288u;
        goto label_21e288;
    }
    ctx->pc = 0x21E280u;
    SET_GPR_U32(ctx, 31, 0x21E288u);
    ctx->pc = 0x21E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E280u;
    // 0x21e284: 0x24a5a9e0  addiu       $a1, $a1, -0x5620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21E280u, 0x21E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E288u;
label_21e288:
    // 0x21e288: 0x10000036  b           . + 4 + (0x36 << 2)
label_21e28c:
    if (ctx->pc == 0x21E28Cu) {
        ctx->pc = 0x21E290u;
        goto label_21e290;
    }
    ctx->pc = 0x21E288u;
    {
        const bool branch_taken_0x21e288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e288) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E290u;
label_21e290:
    // 0x21e290: 0xc10c313  jal         func_430C4C
label_21e294:
    if (ctx->pc == 0x21E294u) {
        ctx->pc = 0x21E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E290u;
        // 0x21e294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E298u;
        goto label_21e298;
    }
    ctx->pc = 0x21E290u;
    SET_GPR_U32(ctx, 31, 0x21E298u);
    ctx->pc = 0x21E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E290u;
    // 0x21e294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E290u, 0x21E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E298u;
label_21e298:
    // 0x21e298: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21e29c:
    if (ctx->pc == 0x21E29Cu) {
        ctx->pc = 0x21E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E298u;
        // 0x21e29c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2A0u;
        goto label_21e2a0;
    }
    ctx->pc = 0x21E298u;
    {
        const bool branch_taken_0x21e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E298u;
        // 0x21e29c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e298) {
            ctx->pc = 0x21E2B4u;
            goto label_21e2b4;
        }
    }
    ctx->pc = 0x21E2A0u;
label_21e2a0:
    // 0x21e2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e2a4:
    // 0x21e2a4: 0xc10c313  jal         func_430C4C
label_21e2a8:
    if (ctx->pc == 0x21E2A8u) {
        ctx->pc = 0x21E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2A4u;
        // 0x21e2a8: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2ACu;
        goto label_21e2ac;
    }
    ctx->pc = 0x21E2A4u;
    SET_GPR_U32(ctx, 31, 0x21E2ACu);
    ctx->pc = 0x21E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2A4u;
    // 0x21e2a8: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E2A4u, 0x21E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2ACu;
label_21e2ac:
    // 0x21e2ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21e2b0:
    if (ctx->pc == 0x21E2B0u) {
        ctx->pc = 0x21E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2ACu;
        // 0x21e2b0: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2B4u;
        goto label_21e2b4;
    }
    ctx->pc = 0x21E2ACu;
    {
        const bool branch_taken_0x21e2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2ACu;
        // 0x21e2b0: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2ac) {
            ctx->pc = 0x21E2C8u;
            goto label_21e2c8;
        }
    }
    ctx->pc = 0x21E2B4u;
label_21e2b4:
    // 0x21e2b4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e2b8:
    // 0x21e2b8: 0xc0e8b90  jal         func_3A2E40
label_21e2bc:
    if (ctx->pc == 0x21E2BCu) {
        ctx->pc = 0x21E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2B8u;
        // 0x21e2bc: 0x2685a990  addiu       $a1, $s4, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2C0u;
        goto label_21e2c0;
    }
    ctx->pc = 0x21E2B8u;
    SET_GPR_U32(ctx, 31, 0x21E2C0u);
    ctx->pc = 0x21E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2B8u;
    // 0x21e2bc: 0x2685a990  addiu       $a1, $s4, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21E2B8u, 0x21E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2C0u;
label_21e2c0:
    // 0x21e2c0: 0x10000028  b           . + 4 + (0x28 << 2)
label_21e2c4:
    if (ctx->pc == 0x21E2C4u) {
        ctx->pc = 0x21E2C8u;
        goto label_21e2c8;
    }
    ctx->pc = 0x21E2C0u;
    {
        const bool branch_taken_0x21e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e2c0) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E2C8u;
label_21e2c8:
    // 0x21e2c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e2cc:
    // 0x21e2cc: 0xc10c313  jal         func_430C4C
label_21e2d0:
    if (ctx->pc == 0x21E2D0u) {
        ctx->pc = 0x21E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2CCu;
        // 0x21e2d0: 0x24a5a9f8  addiu       $a1, $a1, -0x5608 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2D4u;
        goto label_21e2d4;
    }
    ctx->pc = 0x21E2CCu;
    SET_GPR_U32(ctx, 31, 0x21E2D4u);
    ctx->pc = 0x21E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2CCu;
    // 0x21e2d0: 0x24a5a9f8  addiu       $a1, $a1, -0x5608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E2CCu, 0x21E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2D4u;
label_21e2d4:
    // 0x21e2d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21e2d8:
    if (ctx->pc == 0x21E2D8u) {
        ctx->pc = 0x21E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2D4u;
        // 0x21e2d8: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2DCu;
        goto label_21e2dc;
    }
    ctx->pc = 0x21E2D4u;
    {
        const bool branch_taken_0x21e2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2D4u;
        // 0x21e2d8: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2d4) {
            ctx->pc = 0x21E2F4u;
            goto label_21e2f4;
        }
    }
    ctx->pc = 0x21E2DCu;
label_21e2dc:
    // 0x21e2dc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21e2e0:
    // 0x21e2e0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e2e4:
    // 0x21e2e4: 0xc0e8b90  jal         func_3A2E40
label_21e2e8:
    if (ctx->pc == 0x21E2E8u) {
        ctx->pc = 0x21E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2E4u;
        // 0x21e2e8: 0x24a5aa00  addiu       $a1, $a1, -0x5600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2ECu;
        goto label_21e2ec;
    }
    ctx->pc = 0x21E2E4u;
    SET_GPR_U32(ctx, 31, 0x21E2ECu);
    ctx->pc = 0x21E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2E4u;
    // 0x21e2e8: 0x24a5aa00  addiu       $a1, $a1, -0x5600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21E2E4u, 0x21E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2ECu;
label_21e2ec:
    // 0x21e2ec: 0x1000001d  b           . + 4 + (0x1D << 2)
label_21e2f0:
    if (ctx->pc == 0x21E2F0u) {
        ctx->pc = 0x21E2F4u;
        goto label_21e2f4;
    }
    ctx->pc = 0x21E2ECu;
    {
        const bool branch_taken_0x21e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e2ec) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E2F4u;
label_21e2f4:
    // 0x21e2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e2f8:
    // 0x21e2f8: 0xc10c313  jal         func_430C4C
label_21e2fc:
    if (ctx->pc == 0x21E2FCu) {
        ctx->pc = 0x21E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2F8u;
        // 0x21e2fc: 0x24a5aa18  addiu       $a1, $a1, -0x55E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E300u;
        goto label_21e300;
    }
    ctx->pc = 0x21E2F8u;
    SET_GPR_U32(ctx, 31, 0x21E300u);
    ctx->pc = 0x21E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2F8u;
    // 0x21e2fc: 0x24a5aa18  addiu       $a1, $a1, -0x55E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E2F8u, 0x21E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E300u;
label_21e300:
    // 0x21e300: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_21e304:
    if (ctx->pc == 0x21E304u) {
        ctx->pc = 0x21E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E300u;
        // 0x21e304: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E308u;
        goto label_21e308;
    }
    ctx->pc = 0x21E300u;
    {
        const bool branch_taken_0x21e300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E300u;
        // 0x21e304: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e300) {
            ctx->pc = 0x21E344u;
            goto label_21e344;
        }
    }
    ctx->pc = 0x21E308u;
label_21e308:
    // 0x21e308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e30c:
    // 0x21e30c: 0xc10c313  jal         func_430C4C
label_21e310:
    if (ctx->pc == 0x21E310u) {
        ctx->pc = 0x21E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E30Cu;
        // 0x21e310: 0x24a5a9b8  addiu       $a1, $a1, -0x5648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E314u;
        goto label_21e314;
    }
    ctx->pc = 0x21E30Cu;
    SET_GPR_U32(ctx, 31, 0x21E314u);
    ctx->pc = 0x21E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E30Cu;
    // 0x21e310: 0x24a5a9b8  addiu       $a1, $a1, -0x5648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E30Cu, 0x21E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E314u;
label_21e314:
    // 0x21e314: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_21e318:
    if (ctx->pc == 0x21E318u) {
        ctx->pc = 0x21E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E314u;
        // 0x21e318: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E31Cu;
        goto label_21e31c;
    }
    ctx->pc = 0x21E314u;
    {
        const bool branch_taken_0x21e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E314u;
        // 0x21e318: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e314) {
            ctx->pc = 0x21E344u;
            goto label_21e344;
        }
    }
    ctx->pc = 0x21E31Cu;
label_21e31c:
    // 0x21e31c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e320:
    // 0x21e320: 0xc10c313  jal         func_430C4C
label_21e324:
    if (ctx->pc == 0x21E324u) {
        ctx->pc = 0x21E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E320u;
        // 0x21e324: 0x24a5a9c0  addiu       $a1, $a1, -0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E328u;
        goto label_21e328;
    }
    ctx->pc = 0x21E320u;
    SET_GPR_U32(ctx, 31, 0x21E328u);
    ctx->pc = 0x21E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E320u;
    // 0x21e324: 0x24a5a9c0  addiu       $a1, $a1, -0x5640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E320u, 0x21E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E328u;
label_21e328:
    // 0x21e328: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21e32c:
    if (ctx->pc == 0x21E32Cu) {
        ctx->pc = 0x21E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E328u;
        // 0x21e32c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E330u;
        goto label_21e330;
    }
    ctx->pc = 0x21E328u;
    {
        const bool branch_taken_0x21e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E328u;
        // 0x21e32c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e328) {
            ctx->pc = 0x21E344u;
            goto label_21e344;
        }
    }
    ctx->pc = 0x21E330u;
label_21e330:
    // 0x21e330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e334:
    // 0x21e334: 0xc10c313  jal         func_430C4C
label_21e338:
    if (ctx->pc == 0x21E338u) {
        ctx->pc = 0x21E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E334u;
        // 0x21e338: 0x24a5a9c8  addiu       $a1, $a1, -0x5638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E33Cu;
        goto label_21e33c;
    }
    ctx->pc = 0x21E334u;
    SET_GPR_U32(ctx, 31, 0x21E33Cu);
    ctx->pc = 0x21E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E334u;
    // 0x21e338: 0x24a5a9c8  addiu       $a1, $a1, -0x5638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21E334u, 0x21E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E33Cu;
label_21e33c:
    // 0x21e33c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21e340:
    if (ctx->pc == 0x21E340u) {
        ctx->pc = 0x21E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E33Cu;
        // 0x21e340: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E344u;
        goto label_21e344;
    }
    ctx->pc = 0x21E33Cu;
    {
        const bool branch_taken_0x21e33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E33Cu;
        // 0x21e340: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e33c) {
            ctx->pc = 0x21E35Cu;
            goto label_21e35c;
        }
    }
    ctx->pc = 0x21E344u;
label_21e344:
    // 0x21e344: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21e344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21e348:
    // 0x21e348: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21e34c:
    // 0x21e34c: 0xc0e8b90  jal         func_3A2E40
label_21e350:
    if (ctx->pc == 0x21E350u) {
        ctx->pc = 0x21E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E34Cu;
        // 0x21e350: 0x24a5aa20  addiu       $a1, $a1, -0x55E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E354u;
        goto label_21e354;
    }
    ctx->pc = 0x21E34Cu;
    SET_GPR_U32(ctx, 31, 0x21E354u);
    ctx->pc = 0x21E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E34Cu;
    // 0x21e350: 0x24a5aa20  addiu       $a1, $a1, -0x55E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21E34Cu, 0x21E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E354u;
label_21e354:
    // 0x21e354: 0x10000003  b           . + 4 + (0x3 << 2)
label_21e358:
    if (ctx->pc == 0x21E358u) {
        ctx->pc = 0x21E35Cu;
        goto label_21e35c;
    }
    ctx->pc = 0x21E354u;
    {
        const bool branch_taken_0x21e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e354) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E35Cu;
label_21e35c:
    // 0x21e35c: 0xc0e8b90  jal         func_3A2E40
label_21e360:
    if (ctx->pc == 0x21E360u) {
        ctx->pc = 0x21E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E35Cu;
        // 0x21e360: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E364u;
        goto label_21e364;
    }
    ctx->pc = 0x21E35Cu;
    SET_GPR_U32(ctx, 31, 0x21E364u);
    ctx->pc = 0x21E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E35Cu;
    // 0x21e360: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21E35Cu, 0x21E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E364u;
label_21e364:
    // 0x21e364: 0xc0e8b50  jal         func_3A2D40
label_21e368:
    if (ctx->pc == 0x21E368u) {
        ctx->pc = 0x21E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E364u;
        // 0x21e368: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E36Cu;
        goto label_21e36c;
    }
    ctx->pc = 0x21E364u;
    SET_GPR_U32(ctx, 31, 0x21E36Cu);
    ctx->pc = 0x21E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E364u;
    // 0x21e368: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21E364u, 0x21E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E36Cu;
label_21e36c:
    // 0x21e36c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x21e36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21e370:
    // 0x21e370: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x21e370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21e374:
    // 0x21e374: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x21e374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21e378:
    // 0x21e378: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x21e378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21e37c:
    // 0x21e37c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x21e37cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21e380:
    // 0x21e380: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x21e380u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21e384:
    // 0x21e384: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x21e384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21e388:
    // 0x21e388: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21e388u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21e38c:
    // 0x21e38c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x21e38cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21e390:
    // 0x21e390: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21e394:
    // 0x21e394: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x21e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21e398:
    // 0x21e398: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x21e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21e39c:
    // 0x21e39c: 0x3e00008  jr          $ra
label_21e3a0:
    if (ctx->pc == 0x21E3A0u) {
        ctx->pc = 0x21E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E39Cu;
        // 0x21e3a0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3A4u;
        goto label_21e3a4;
    }
    ctx->pc = 0x21E39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E39Cu;
        // 0x21e3a0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E3A4u;
label_21e3a4:
    // 0x21e3a4: 0x0  nop
    ctx->pc = 0x21e3a4u;
    // NOP
    ctx->pc = 0x21e3a8u;
}
