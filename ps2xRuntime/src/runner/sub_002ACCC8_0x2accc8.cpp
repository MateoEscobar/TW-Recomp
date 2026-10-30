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

// Function: sub_002ACCC8
// Address: 0x2accc8 - 0x2ad2c0
void sub_002ACCC8_0x2accc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACCC8_0x2accc8");
#endif

    switch (ctx->pc) {
        case 0x2accc8u: goto label_2accc8;
        case 0x2accccu: goto label_2acccc;
        case 0x2accd0u: goto label_2accd0;
        case 0x2accd4u: goto label_2accd4;
        case 0x2accd8u: goto label_2accd8;
        case 0x2accdcu: goto label_2accdc;
        case 0x2acce0u: goto label_2acce0;
        case 0x2acce4u: goto label_2acce4;
        case 0x2acce8u: goto label_2acce8;
        case 0x2accecu: goto label_2accec;
        case 0x2accf0u: goto label_2accf0;
        case 0x2accf4u: goto label_2accf4;
        case 0x2accf8u: goto label_2accf8;
        case 0x2accfcu: goto label_2accfc;
        case 0x2acd00u: goto label_2acd00;
        case 0x2acd04u: goto label_2acd04;
        case 0x2acd08u: goto label_2acd08;
        case 0x2acd0cu: goto label_2acd0c;
        case 0x2acd10u: goto label_2acd10;
        case 0x2acd14u: goto label_2acd14;
        case 0x2acd18u: goto label_2acd18;
        case 0x2acd1cu: goto label_2acd1c;
        case 0x2acd20u: goto label_2acd20;
        case 0x2acd24u: goto label_2acd24;
        case 0x2acd28u: goto label_2acd28;
        case 0x2acd2cu: goto label_2acd2c;
        case 0x2acd30u: goto label_2acd30;
        case 0x2acd34u: goto label_2acd34;
        case 0x2acd38u: goto label_2acd38;
        case 0x2acd3cu: goto label_2acd3c;
        case 0x2acd40u: goto label_2acd40;
        case 0x2acd44u: goto label_2acd44;
        case 0x2acd48u: goto label_2acd48;
        case 0x2acd4cu: goto label_2acd4c;
        case 0x2acd50u: goto label_2acd50;
        case 0x2acd54u: goto label_2acd54;
        case 0x2acd58u: goto label_2acd58;
        case 0x2acd5cu: goto label_2acd5c;
        case 0x2acd60u: goto label_2acd60;
        case 0x2acd64u: goto label_2acd64;
        case 0x2acd68u: goto label_2acd68;
        case 0x2acd6cu: goto label_2acd6c;
        case 0x2acd70u: goto label_2acd70;
        case 0x2acd74u: goto label_2acd74;
        case 0x2acd78u: goto label_2acd78;
        case 0x2acd7cu: goto label_2acd7c;
        case 0x2acd80u: goto label_2acd80;
        case 0x2acd84u: goto label_2acd84;
        case 0x2acd88u: goto label_2acd88;
        case 0x2acd8cu: goto label_2acd8c;
        case 0x2acd90u: goto label_2acd90;
        case 0x2acd94u: goto label_2acd94;
        case 0x2acd98u: goto label_2acd98;
        case 0x2acd9cu: goto label_2acd9c;
        case 0x2acda0u: goto label_2acda0;
        case 0x2acda4u: goto label_2acda4;
        case 0x2acda8u: goto label_2acda8;
        case 0x2acdacu: goto label_2acdac;
        case 0x2acdb0u: goto label_2acdb0;
        case 0x2acdb4u: goto label_2acdb4;
        case 0x2acdb8u: goto label_2acdb8;
        case 0x2acdbcu: goto label_2acdbc;
        case 0x2acdc0u: goto label_2acdc0;
        case 0x2acdc4u: goto label_2acdc4;
        case 0x2acdc8u: goto label_2acdc8;
        case 0x2acdccu: goto label_2acdcc;
        case 0x2acdd0u: goto label_2acdd0;
        case 0x2acdd4u: goto label_2acdd4;
        case 0x2acdd8u: goto label_2acdd8;
        case 0x2acddcu: goto label_2acddc;
        case 0x2acde0u: goto label_2acde0;
        case 0x2acde4u: goto label_2acde4;
        case 0x2acde8u: goto label_2acde8;
        case 0x2acdecu: goto label_2acdec;
        case 0x2acdf0u: goto label_2acdf0;
        case 0x2acdf4u: goto label_2acdf4;
        case 0x2acdf8u: goto label_2acdf8;
        case 0x2acdfcu: goto label_2acdfc;
        case 0x2ace00u: goto label_2ace00;
        case 0x2ace04u: goto label_2ace04;
        case 0x2ace08u: goto label_2ace08;
        case 0x2ace0cu: goto label_2ace0c;
        case 0x2ace10u: goto label_2ace10;
        case 0x2ace14u: goto label_2ace14;
        case 0x2ace18u: goto label_2ace18;
        case 0x2ace1cu: goto label_2ace1c;
        case 0x2ace20u: goto label_2ace20;
        case 0x2ace24u: goto label_2ace24;
        case 0x2ace28u: goto label_2ace28;
        case 0x2ace2cu: goto label_2ace2c;
        case 0x2ace30u: goto label_2ace30;
        case 0x2ace34u: goto label_2ace34;
        case 0x2ace38u: goto label_2ace38;
        case 0x2ace3cu: goto label_2ace3c;
        case 0x2ace40u: goto label_2ace40;
        case 0x2ace44u: goto label_2ace44;
        case 0x2ace48u: goto label_2ace48;
        case 0x2ace4cu: goto label_2ace4c;
        case 0x2ace50u: goto label_2ace50;
        case 0x2ace54u: goto label_2ace54;
        case 0x2ace58u: goto label_2ace58;
        case 0x2ace5cu: goto label_2ace5c;
        case 0x2ace60u: goto label_2ace60;
        case 0x2ace64u: goto label_2ace64;
        case 0x2ace68u: goto label_2ace68;
        case 0x2ace6cu: goto label_2ace6c;
        case 0x2ace70u: goto label_2ace70;
        case 0x2ace74u: goto label_2ace74;
        case 0x2ace78u: goto label_2ace78;
        case 0x2ace7cu: goto label_2ace7c;
        case 0x2ace80u: goto label_2ace80;
        case 0x2ace84u: goto label_2ace84;
        case 0x2ace88u: goto label_2ace88;
        case 0x2ace8cu: goto label_2ace8c;
        case 0x2ace90u: goto label_2ace90;
        case 0x2ace94u: goto label_2ace94;
        case 0x2ace98u: goto label_2ace98;
        case 0x2ace9cu: goto label_2ace9c;
        case 0x2acea0u: goto label_2acea0;
        case 0x2acea4u: goto label_2acea4;
        case 0x2acea8u: goto label_2acea8;
        case 0x2aceacu: goto label_2aceac;
        case 0x2aceb0u: goto label_2aceb0;
        case 0x2aceb4u: goto label_2aceb4;
        case 0x2aceb8u: goto label_2aceb8;
        case 0x2acebcu: goto label_2acebc;
        case 0x2acec0u: goto label_2acec0;
        case 0x2acec4u: goto label_2acec4;
        case 0x2acec8u: goto label_2acec8;
        case 0x2aceccu: goto label_2acecc;
        case 0x2aced0u: goto label_2aced0;
        case 0x2aced4u: goto label_2aced4;
        case 0x2aced8u: goto label_2aced8;
        case 0x2acedcu: goto label_2acedc;
        case 0x2acee0u: goto label_2acee0;
        case 0x2acee4u: goto label_2acee4;
        case 0x2acee8u: goto label_2acee8;
        case 0x2aceecu: goto label_2aceec;
        case 0x2acef0u: goto label_2acef0;
        case 0x2acef4u: goto label_2acef4;
        case 0x2acef8u: goto label_2acef8;
        case 0x2acefcu: goto label_2acefc;
        case 0x2acf00u: goto label_2acf00;
        case 0x2acf04u: goto label_2acf04;
        case 0x2acf08u: goto label_2acf08;
        case 0x2acf0cu: goto label_2acf0c;
        case 0x2acf10u: goto label_2acf10;
        case 0x2acf14u: goto label_2acf14;
        case 0x2acf18u: goto label_2acf18;
        case 0x2acf1cu: goto label_2acf1c;
        case 0x2acf20u: goto label_2acf20;
        case 0x2acf24u: goto label_2acf24;
        case 0x2acf28u: goto label_2acf28;
        case 0x2acf2cu: goto label_2acf2c;
        case 0x2acf30u: goto label_2acf30;
        case 0x2acf34u: goto label_2acf34;
        case 0x2acf38u: goto label_2acf38;
        case 0x2acf3cu: goto label_2acf3c;
        case 0x2acf40u: goto label_2acf40;
        case 0x2acf44u: goto label_2acf44;
        case 0x2acf48u: goto label_2acf48;
        case 0x2acf4cu: goto label_2acf4c;
        case 0x2acf50u: goto label_2acf50;
        case 0x2acf54u: goto label_2acf54;
        case 0x2acf58u: goto label_2acf58;
        case 0x2acf5cu: goto label_2acf5c;
        case 0x2acf60u: goto label_2acf60;
        case 0x2acf64u: goto label_2acf64;
        case 0x2acf68u: goto label_2acf68;
        case 0x2acf6cu: goto label_2acf6c;
        case 0x2acf70u: goto label_2acf70;
        case 0x2acf74u: goto label_2acf74;
        case 0x2acf78u: goto label_2acf78;
        case 0x2acf7cu: goto label_2acf7c;
        case 0x2acf80u: goto label_2acf80;
        case 0x2acf84u: goto label_2acf84;
        case 0x2acf88u: goto label_2acf88;
        case 0x2acf8cu: goto label_2acf8c;
        case 0x2acf90u: goto label_2acf90;
        case 0x2acf94u: goto label_2acf94;
        case 0x2acf98u: goto label_2acf98;
        case 0x2acf9cu: goto label_2acf9c;
        case 0x2acfa0u: goto label_2acfa0;
        case 0x2acfa4u: goto label_2acfa4;
        case 0x2acfa8u: goto label_2acfa8;
        case 0x2acfacu: goto label_2acfac;
        case 0x2acfb0u: goto label_2acfb0;
        case 0x2acfb4u: goto label_2acfb4;
        case 0x2acfb8u: goto label_2acfb8;
        case 0x2acfbcu: goto label_2acfbc;
        case 0x2acfc0u: goto label_2acfc0;
        case 0x2acfc4u: goto label_2acfc4;
        case 0x2acfc8u: goto label_2acfc8;
        case 0x2acfccu: goto label_2acfcc;
        case 0x2acfd0u: goto label_2acfd0;
        case 0x2acfd4u: goto label_2acfd4;
        case 0x2acfd8u: goto label_2acfd8;
        case 0x2acfdcu: goto label_2acfdc;
        case 0x2acfe0u: goto label_2acfe0;
        case 0x2acfe4u: goto label_2acfe4;
        case 0x2acfe8u: goto label_2acfe8;
        case 0x2acfecu: goto label_2acfec;
        case 0x2acff0u: goto label_2acff0;
        case 0x2acff4u: goto label_2acff4;
        case 0x2acff8u: goto label_2acff8;
        case 0x2acffcu: goto label_2acffc;
        case 0x2ad000u: goto label_2ad000;
        case 0x2ad004u: goto label_2ad004;
        case 0x2ad008u: goto label_2ad008;
        case 0x2ad00cu: goto label_2ad00c;
        case 0x2ad010u: goto label_2ad010;
        case 0x2ad014u: goto label_2ad014;
        case 0x2ad018u: goto label_2ad018;
        case 0x2ad01cu: goto label_2ad01c;
        case 0x2ad020u: goto label_2ad020;
        case 0x2ad024u: goto label_2ad024;
        case 0x2ad028u: goto label_2ad028;
        case 0x2ad02cu: goto label_2ad02c;
        case 0x2ad030u: goto label_2ad030;
        case 0x2ad034u: goto label_2ad034;
        case 0x2ad038u: goto label_2ad038;
        case 0x2ad03cu: goto label_2ad03c;
        case 0x2ad040u: goto label_2ad040;
        case 0x2ad044u: goto label_2ad044;
        case 0x2ad048u: goto label_2ad048;
        case 0x2ad04cu: goto label_2ad04c;
        case 0x2ad050u: goto label_2ad050;
        case 0x2ad054u: goto label_2ad054;
        case 0x2ad058u: goto label_2ad058;
        case 0x2ad05cu: goto label_2ad05c;
        case 0x2ad060u: goto label_2ad060;
        case 0x2ad064u: goto label_2ad064;
        case 0x2ad068u: goto label_2ad068;
        case 0x2ad06cu: goto label_2ad06c;
        case 0x2ad070u: goto label_2ad070;
        case 0x2ad074u: goto label_2ad074;
        case 0x2ad078u: goto label_2ad078;
        case 0x2ad07cu: goto label_2ad07c;
        case 0x2ad080u: goto label_2ad080;
        case 0x2ad084u: goto label_2ad084;
        case 0x2ad088u: goto label_2ad088;
        case 0x2ad08cu: goto label_2ad08c;
        case 0x2ad090u: goto label_2ad090;
        case 0x2ad094u: goto label_2ad094;
        case 0x2ad098u: goto label_2ad098;
        case 0x2ad09cu: goto label_2ad09c;
        case 0x2ad0a0u: goto label_2ad0a0;
        case 0x2ad0a4u: goto label_2ad0a4;
        case 0x2ad0a8u: goto label_2ad0a8;
        case 0x2ad0acu: goto label_2ad0ac;
        case 0x2ad0b0u: goto label_2ad0b0;
        case 0x2ad0b4u: goto label_2ad0b4;
        case 0x2ad0b8u: goto label_2ad0b8;
        case 0x2ad0bcu: goto label_2ad0bc;
        case 0x2ad0c0u: goto label_2ad0c0;
        case 0x2ad0c4u: goto label_2ad0c4;
        case 0x2ad0c8u: goto label_2ad0c8;
        case 0x2ad0ccu: goto label_2ad0cc;
        case 0x2ad0d0u: goto label_2ad0d0;
        case 0x2ad0d4u: goto label_2ad0d4;
        case 0x2ad0d8u: goto label_2ad0d8;
        case 0x2ad0dcu: goto label_2ad0dc;
        case 0x2ad0e0u: goto label_2ad0e0;
        case 0x2ad0e4u: goto label_2ad0e4;
        case 0x2ad0e8u: goto label_2ad0e8;
        case 0x2ad0ecu: goto label_2ad0ec;
        case 0x2ad0f0u: goto label_2ad0f0;
        case 0x2ad0f4u: goto label_2ad0f4;
        case 0x2ad0f8u: goto label_2ad0f8;
        case 0x2ad0fcu: goto label_2ad0fc;
        case 0x2ad100u: goto label_2ad100;
        case 0x2ad104u: goto label_2ad104;
        case 0x2ad108u: goto label_2ad108;
        case 0x2ad10cu: goto label_2ad10c;
        case 0x2ad110u: goto label_2ad110;
        case 0x2ad114u: goto label_2ad114;
        case 0x2ad118u: goto label_2ad118;
        case 0x2ad11cu: goto label_2ad11c;
        case 0x2ad120u: goto label_2ad120;
        case 0x2ad124u: goto label_2ad124;
        case 0x2ad128u: goto label_2ad128;
        case 0x2ad12cu: goto label_2ad12c;
        case 0x2ad130u: goto label_2ad130;
        case 0x2ad134u: goto label_2ad134;
        case 0x2ad138u: goto label_2ad138;
        case 0x2ad13cu: goto label_2ad13c;
        case 0x2ad140u: goto label_2ad140;
        case 0x2ad144u: goto label_2ad144;
        case 0x2ad148u: goto label_2ad148;
        case 0x2ad14cu: goto label_2ad14c;
        case 0x2ad150u: goto label_2ad150;
        case 0x2ad154u: goto label_2ad154;
        case 0x2ad158u: goto label_2ad158;
        case 0x2ad15cu: goto label_2ad15c;
        case 0x2ad160u: goto label_2ad160;
        case 0x2ad164u: goto label_2ad164;
        case 0x2ad168u: goto label_2ad168;
        case 0x2ad16cu: goto label_2ad16c;
        case 0x2ad170u: goto label_2ad170;
        case 0x2ad174u: goto label_2ad174;
        case 0x2ad178u: goto label_2ad178;
        case 0x2ad17cu: goto label_2ad17c;
        case 0x2ad180u: goto label_2ad180;
        case 0x2ad184u: goto label_2ad184;
        case 0x2ad188u: goto label_2ad188;
        case 0x2ad18cu: goto label_2ad18c;
        case 0x2ad190u: goto label_2ad190;
        case 0x2ad194u: goto label_2ad194;
        case 0x2ad198u: goto label_2ad198;
        case 0x2ad19cu: goto label_2ad19c;
        case 0x2ad1a0u: goto label_2ad1a0;
        case 0x2ad1a4u: goto label_2ad1a4;
        case 0x2ad1a8u: goto label_2ad1a8;
        case 0x2ad1acu: goto label_2ad1ac;
        case 0x2ad1b0u: goto label_2ad1b0;
        case 0x2ad1b4u: goto label_2ad1b4;
        case 0x2ad1b8u: goto label_2ad1b8;
        case 0x2ad1bcu: goto label_2ad1bc;
        case 0x2ad1c0u: goto label_2ad1c0;
        case 0x2ad1c4u: goto label_2ad1c4;
        case 0x2ad1c8u: goto label_2ad1c8;
        case 0x2ad1ccu: goto label_2ad1cc;
        case 0x2ad1d0u: goto label_2ad1d0;
        case 0x2ad1d4u: goto label_2ad1d4;
        case 0x2ad1d8u: goto label_2ad1d8;
        case 0x2ad1dcu: goto label_2ad1dc;
        case 0x2ad1e0u: goto label_2ad1e0;
        case 0x2ad1e4u: goto label_2ad1e4;
        case 0x2ad1e8u: goto label_2ad1e8;
        case 0x2ad1ecu: goto label_2ad1ec;
        case 0x2ad1f0u: goto label_2ad1f0;
        case 0x2ad1f4u: goto label_2ad1f4;
        case 0x2ad1f8u: goto label_2ad1f8;
        case 0x2ad1fcu: goto label_2ad1fc;
        case 0x2ad200u: goto label_2ad200;
        case 0x2ad204u: goto label_2ad204;
        case 0x2ad208u: goto label_2ad208;
        case 0x2ad20cu: goto label_2ad20c;
        case 0x2ad210u: goto label_2ad210;
        case 0x2ad214u: goto label_2ad214;
        case 0x2ad218u: goto label_2ad218;
        case 0x2ad21cu: goto label_2ad21c;
        case 0x2ad220u: goto label_2ad220;
        case 0x2ad224u: goto label_2ad224;
        case 0x2ad228u: goto label_2ad228;
        case 0x2ad22cu: goto label_2ad22c;
        case 0x2ad230u: goto label_2ad230;
        case 0x2ad234u: goto label_2ad234;
        case 0x2ad238u: goto label_2ad238;
        case 0x2ad23cu: goto label_2ad23c;
        case 0x2ad240u: goto label_2ad240;
        case 0x2ad244u: goto label_2ad244;
        case 0x2ad248u: goto label_2ad248;
        case 0x2ad24cu: goto label_2ad24c;
        case 0x2ad250u: goto label_2ad250;
        case 0x2ad254u: goto label_2ad254;
        case 0x2ad258u: goto label_2ad258;
        case 0x2ad25cu: goto label_2ad25c;
        case 0x2ad260u: goto label_2ad260;
        case 0x2ad264u: goto label_2ad264;
        case 0x2ad268u: goto label_2ad268;
        case 0x2ad26cu: goto label_2ad26c;
        case 0x2ad270u: goto label_2ad270;
        case 0x2ad274u: goto label_2ad274;
        case 0x2ad278u: goto label_2ad278;
        case 0x2ad27cu: goto label_2ad27c;
        case 0x2ad280u: goto label_2ad280;
        case 0x2ad284u: goto label_2ad284;
        case 0x2ad288u: goto label_2ad288;
        case 0x2ad28cu: goto label_2ad28c;
        case 0x2ad290u: goto label_2ad290;
        case 0x2ad294u: goto label_2ad294;
        case 0x2ad298u: goto label_2ad298;
        case 0x2ad29cu: goto label_2ad29c;
        case 0x2ad2a0u: goto label_2ad2a0;
        case 0x2ad2a4u: goto label_2ad2a4;
        case 0x2ad2a8u: goto label_2ad2a8;
        case 0x2ad2acu: goto label_2ad2ac;
        case 0x2ad2b0u: goto label_2ad2b0;
        case 0x2ad2b4u: goto label_2ad2b4;
        case 0x2ad2b8u: goto label_2ad2b8;
        case 0x2ad2bcu: goto label_2ad2bc;
        default: break;
    }

    ctx->pc = 0x2accc8u;

label_2accc8:
    // 0x2accc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2accc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2acccc:
    // 0x2acccc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2accccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2accd0:
    // 0x2accd0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2accd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2accd4:
    // 0x2accd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2accd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2accd8:
    // 0x2accd8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2accd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2accdc:
    // 0x2accdc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2accdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2acce0:
    // 0x2acce0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2acce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2acce4:
    // 0x2acce4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2acce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2acce8:
    // 0x2acce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2acce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2accec:
    // 0x2accec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2accecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2accf0:
    // 0x2accf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2accf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2accf4:
    // 0x2accf4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2accf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2accf8:
    // 0x2accf8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2accf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2accfc:
    // 0x2accfc: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_2acd00:
    if (ctx->pc == 0x2ACD00u) {
        ctx->pc = 0x2ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCFCu;
        // 0x2acd00: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD04u;
        goto label_2acd04;
    }
    ctx->pc = 0x2ACCFCu;
    {
        const bool branch_taken_0x2accfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCFCu;
        // 0x2acd00: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2accfc) {
            ctx->pc = 0x2ACE50u;
            goto label_2ace50;
        }
    }
    ctx->pc = 0x2ACD04u;
label_2acd04:
    // 0x2acd04: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2acd04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2acd08:
    // 0x2acd08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2acd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2acd0c:
    // 0x2acd0c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2acd10:
    // 0x2acd10: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2acd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2acd14:
    // 0x2acd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2acd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2acd18:
    // 0x2acd18: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2acd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2acd1c:
    // 0x2acd1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2acd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2acd20:
    // 0x2acd20: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2acd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2acd24:
    // 0x2acd24: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2acd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2acd28:
    // 0x2acd28: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2acd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2acd2c:
    // 0x2acd2c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2acd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2acd30:
    // 0x2acd30: 0xc1067b8  jal         func_419EE0
label_2acd34:
    if (ctx->pc == 0x2ACD34u) {
        ctx->pc = 0x2ACD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD30u;
        // 0x2acd34: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD38u;
        goto label_2acd38;
    }
    ctx->pc = 0x2ACD30u;
    SET_GPR_U32(ctx, 31, 0x2ACD38u);
    ctx->pc = 0x2ACD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD30u;
    // 0x2acd34: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2ACD30u, 0x2ACD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD38u;
label_2acd38:
    // 0x2acd38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acd3c:
    // 0x2acd3c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_2acd40:
    if (ctx->pc == 0x2ACD40u) {
        ctx->pc = 0x2ACD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD3Cu;
        // 0x2acd40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD44u;
        goto label_2acd44;
    }
    ctx->pc = 0x2ACD3Cu;
    {
        const bool branch_taken_0x2acd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD3Cu;
        // 0x2acd40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd3c) {
            ctx->pc = 0x2ACD88u;
            goto label_2acd88;
        }
    }
    ctx->pc = 0x2ACD44u;
label_2acd44:
    // 0x2acd44: 0xc087502  jal         func_21D408
label_2acd48:
    if (ctx->pc == 0x2ACD48u) {
        ctx->pc = 0x2ACD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD44u;
        // 0x2acd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD4Cu;
        goto label_2acd4c;
    }
    ctx->pc = 0x2ACD44u;
    SET_GPR_U32(ctx, 31, 0x2ACD4Cu);
    ctx->pc = 0x2ACD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD44u;
    // 0x2acd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ACD44u, 0x2ACD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD4Cu;
label_2acd4c:
    // 0x2acd4c: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2acd4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2acd50:
    // 0x2acd50: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_2acd54:
    if (ctx->pc == 0x2ACD54u) {
        ctx->pc = 0x2ACD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD50u;
        // 0x2acd54: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD58u;
        goto label_2acd58;
    }
    ctx->pc = 0x2ACD50u;
    {
        const bool branch_taken_0x2acd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd50) {
            ctx->pc = 0x2ACD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACD50u;
            // 0x2acd54: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD8Cu;
            goto label_2acd8c;
        }
    }
    ctx->pc = 0x2ACD58u;
label_2acd58:
    // 0x2acd58: 0xc08a05a  jal         func_228168
label_2acd5c:
    if (ctx->pc == 0x2ACD5Cu) {
        ctx->pc = 0x2ACD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD58u;
        // 0x2acd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD60u;
        goto label_2acd60;
    }
    ctx->pc = 0x2ACD58u;
    SET_GPR_U32(ctx, 31, 0x2ACD60u);
    ctx->pc = 0x2ACD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD58u;
    // 0x2acd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2ACD58u, 0x2ACD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD60u;
label_2acd60:
    // 0x2acd60: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2acd64:
    if (ctx->pc == 0x2ACD64u) {
        ctx->pc = 0x2ACD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD60u;
        // 0x2acd64: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD68u;
        goto label_2acd68;
    }
    ctx->pc = 0x2ACD60u;
    {
        const bool branch_taken_0x2acd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd60) {
            ctx->pc = 0x2ACD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACD60u;
            // 0x2acd64: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD8Cu;
            goto label_2acd8c;
        }
    }
    ctx->pc = 0x2ACD68u;
label_2acd68:
    // 0x2acd68: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2acd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2acd6c:
    // 0x2acd6c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2acd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2acd70:
    // 0x2acd70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2acd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2acd74:
    // 0x2acd74: 0x0  nop
    ctx->pc = 0x2acd74u;
    // NOP
label_2acd78:
    // 0x2acd78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acd78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2acd7c:
    // 0x2acd7c: 0x0  nop
    ctx->pc = 0x2acd7cu;
    // NOP
label_2acd80:
    // 0x2acd80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2acd84:
    if (ctx->pc == 0x2ACD84u) {
        ctx->pc = 0x2ACD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD80u;
        // 0x2acd84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD88u;
        goto label_2acd88;
    }
    ctx->pc = 0x2ACD80u;
    {
        const bool branch_taken_0x2acd80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2acd80) {
            ctx->pc = 0x2ACD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACD80u;
            // 0x2acd84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD88u;
            goto label_2acd88;
        }
    }
    ctx->pc = 0x2ACD88u;
label_2acd88:
    // 0x2acd88: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x2acd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_2acd8c:
    // 0x2acd8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2acd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2acd90:
    // 0x2acd90: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_2acd94:
    if (ctx->pc == 0x2ACD94u) {
        ctx->pc = 0x2ACD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD90u;
        // 0x2acd94: 0xa2330033  sb          $s3, 0x33($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACD98u;
        goto label_2acd98;
    }
    ctx->pc = 0x2ACD90u;
    {
        const bool branch_taken_0x2acd90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD90u;
        // 0x2acd94: 0xa2330033  sb          $s3, 0x33($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd90) {
            ctx->pc = 0x2ACE4Cu;
            goto label_2ace4c;
        }
    }
    ctx->pc = 0x2ACD98u;
label_2acd98:
    // 0x2acd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acd9c:
    // 0x2acd9c: 0x5662002c  bnel        $s3, $v0, . + 4 + (0x2C << 2)
label_2acda0:
    if (ctx->pc == 0x2ACDA0u) {
        ctx->pc = 0x2ACDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD9Cu;
        // 0x2acda0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACDA4u;
        goto label_2acda4;
    }
    ctx->pc = 0x2ACD9Cu;
    {
        const bool branch_taken_0x2acd9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2acd9c) {
            ctx->pc = 0x2ACDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACD9Cu;
            // 0x2acda0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE50u;
            goto label_2ace50;
        }
    }
    ctx->pc = 0x2ACDA4u;
label_2acda4:
    // 0x2acda4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2acda8:
    // 0x2acda8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2acda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2acdac:
    // 0x2acdac: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2acdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2acdb0:
    // 0x2acdb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2acdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acdb4:
    // 0x2acdb4: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2acdb8:
    // 0x2acdb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2acdb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2acdbc:
    // 0x2acdbc: 0xc0a6800  jal         func_29A000
label_2acdc0:
    if (ctx->pc == 0x2ACDC0u) {
        ctx->pc = 0x2ACDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDBCu;
        // 0x2acdc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACDC4u;
        goto label_2acdc4;
    }
    ctx->pc = 0x2ACDBCu;
    SET_GPR_U32(ctx, 31, 0x2ACDC4u);
    ctx->pc = 0x2ACDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDBCu;
    // 0x2acdc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2ACDBCu, 0x2ACDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDC4u;
label_2acdc4:
    // 0x2acdc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2acdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2acdc8:
    // 0x2acdc8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2acdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2acdcc:
    // 0x2acdcc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2acdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2acdd0:
    // 0x2acdd0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2acdd4:
    if (ctx->pc == 0x2ACDD4u) {
        ctx->pc = 0x2ACDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDD0u;
        // 0x2acdd4: 0xde220038  ld          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACDD8u;
        goto label_2acdd8;
    }
    ctx->pc = 0x2ACDD0u;
    {
        const bool branch_taken_0x2acdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acdd0) {
            ctx->pc = 0x2ACDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACDD0u;
            // 0x2acdd4: 0xde220038  ld          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE10u;
            goto label_2ace10;
        }
    }
    ctx->pc = 0x2ACDD8u;
label_2acdd8:
    // 0x2acdd8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2acdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2acddc:
    // 0x2acddc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2acddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2acde0:
    // 0x2acde0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2acde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2acde4:
    // 0x2acde4: 0x0  nop
    ctx->pc = 0x2acde4u;
    // NOP
label_2acde8:
    // 0x2acde8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2acdec:
    // 0x2acdec: 0x0  nop
    ctx->pc = 0x2acdecu;
    // NOP
label_2acdf0:
    // 0x2acdf0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2acdf4:
    if (ctx->pc == 0x2ACDF4u) {
        ctx->pc = 0x2ACDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDF0u;
        // 0x2acdf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACDF8u;
        goto label_2acdf8;
    }
    ctx->pc = 0x2ACDF0u;
    {
        const bool branch_taken_0x2acdf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDF0u;
        // 0x2acdf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdf0) {
            ctx->pc = 0x2ACE0Cu;
            goto label_2ace0c;
        }
    }
    ctx->pc = 0x2ACDF8u;
label_2acdf8:
    // 0x2acdf8: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x2acdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_2acdfc:
    // 0x2acdfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2acdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ace00:
    // 0x2ace00: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2ace00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2ace04:
    // 0x2ace04: 0xc0a6800  jal         func_29A000
label_2ace08:
    if (ctx->pc == 0x2ACE08u) {
        ctx->pc = 0x2ACE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE04u;
        // 0x2ace08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE0Cu;
        goto label_2ace0c;
    }
    ctx->pc = 0x2ACE04u;
    SET_GPR_U32(ctx, 31, 0x2ACE0Cu);
    ctx->pc = 0x2ACE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE04u;
    // 0x2ace08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2ACE04u, 0x2ACE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE0Cu;
label_2ace0c:
    // 0x2ace0c: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x2ace0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_2ace10:
    // 0x2ace10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ace10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ace14:
    // 0x2ace14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ace14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2ace18:
    // 0x2ace18: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2ace18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2ace1c:
    // 0x2ace1c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2ace1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
label_2ace20:
    // 0x2ace20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ace20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ace24:
    // 0x2ace24: 0x5444000a  bnel        $v0, $a0, . + 4 + (0xA << 2)
label_2ace28:
    if (ctx->pc == 0x2ACE28u) {
        ctx->pc = 0x2ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE24u;
        // 0x2ace28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE2Cu;
        goto label_2ace2c;
    }
    ctx->pc = 0x2ACE24u;
    {
        const bool branch_taken_0x2ace24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ace24) {
            ctx->pc = 0x2ACE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE24u;
            // 0x2ace28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE50u;
            goto label_2ace50;
        }
    }
    ctx->pc = 0x2ACE2Cu;
label_2ace2c:
    // 0x2ace2c: 0xc087502  jal         func_21D408
label_2ace30:
    if (ctx->pc == 0x2ACE30u) {
        ctx->pc = 0x2ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE2Cu;
        // 0x2ace30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE34u;
        goto label_2ace34;
    }
    ctx->pc = 0x2ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE34u);
    ctx->pc = 0x2ACE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE2Cu;
    // 0x2ace30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ACE2Cu, 0x2ACE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE34u;
label_2ace34:
    // 0x2ace34: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2ace34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ace38:
    // 0x2ace38: 0xc059856  jal         func_166158
label_2ace3c:
    if (ctx->pc == 0x2ACE3Cu) {
        ctx->pc = 0x2ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE38u;
        // 0x2ace3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE40u;
        goto label_2ace40;
    }
    ctx->pc = 0x2ACE38u;
    SET_GPR_U32(ctx, 31, 0x2ACE40u);
    ctx->pc = 0x2ACE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE38u;
    // 0x2ace3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x2ACE38u, 0x2ACE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE40u;
label_2ace40:
    // 0x2ace40: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2ace40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2ace44:
    // 0x2ace44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2ace48:
    if (ctx->pc == 0x2ACE48u) {
        ctx->pc = 0x2ACE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE44u;
        // 0x2ace48: 0xa220003c  sb          $zero, 0x3C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE4Cu;
        goto label_2ace4c;
    }
    ctx->pc = 0x2ACE44u;
    {
        const bool branch_taken_0x2ace44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ace44) {
            ctx->pc = 0x2ACE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE44u;
            // 0x2ace48: 0xa220003c  sb          $zero, 0x3C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE4Cu;
            goto label_2ace4c;
        }
    }
    ctx->pc = 0x2ACE4Cu;
label_2ace4c:
    // 0x2ace4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ace4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ace50:
    // 0x2ace50: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ace50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ace54:
    // 0x2ace54: 0x1c40010f  bgtz        $v0, . + 4 + (0x10F << 2)
label_2ace58:
    if (ctx->pc == 0x2ACE58u) {
        ctx->pc = 0x2ACE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE54u;
        // 0x2ace58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE5Cu;
        goto label_2ace5c;
    }
    ctx->pc = 0x2ACE54u;
    {
        const bool branch_taken_0x2ace54 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2ACE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE54u;
        // 0x2ace58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace54) {
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2ACE5Cu;
label_2ace5c:
    // 0x2ace5c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2ace5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2ace60:
    // 0x2ace60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ace64:
    if (ctx->pc == 0x2ACE64u) {
        ctx->pc = 0x2ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE60u;
        // 0x2ace64: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE68u;
        goto label_2ace68;
    }
    ctx->pc = 0x2ACE60u;
    {
        const bool branch_taken_0x2ace60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ace60) {
            ctx->pc = 0x2ACE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE60u;
            // 0x2ace64: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE68u;
            goto label_2ace68;
        }
    }
    ctx->pc = 0x2ACE68u;
label_2ace68:
    // 0x2ace68: 0xc093390  jal         func_24CE40
label_2ace6c:
    if (ctx->pc == 0x2ACE6Cu) {
        ctx->pc = 0x2ACE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE68u;
        // 0x2ace6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE70u;
        goto label_2ace70;
    }
    ctx->pc = 0x2ACE68u;
    SET_GPR_U32(ctx, 31, 0x2ACE70u);
    ctx->pc = 0x2ACE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE68u;
    // 0x2ace6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x2ACE68u, 0x2ACE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE70u;
label_2ace70:
    // 0x2ace70: 0x9222003d  lbu         $v0, 0x3D($s1)
    ctx->pc = 0x2ace70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_2ace74:
    // 0x2ace74: 0x5453004e  bnel        $v0, $s3, . + 4 + (0x4E << 2)
label_2ace78:
    if (ctx->pc == 0x2ACE78u) {
        ctx->pc = 0x2ACE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE74u;
        // 0x2ace78: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE7Cu;
        goto label_2ace7c;
    }
    ctx->pc = 0x2ACE74u;
    {
        const bool branch_taken_0x2ace74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ace74) {
            ctx->pc = 0x2ACE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE74u;
            // 0x2ace78: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACFB0u;
            goto label_2acfb0;
        }
    }
    ctx->pc = 0x2ACE7Cu;
label_2ace7c:
    // 0x2ace7c: 0x9222003e  lbu         $v0, 0x3E($s1)
    ctx->pc = 0x2ace7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_2ace80:
    // 0x2ace80: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_2ace84:
    if (ctx->pc == 0x2ACE84u) {
        ctx->pc = 0x2ACE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE80u;
        // 0x2ace84: 0x92220033  lbu         $v0, 0x33($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE88u;
        goto label_2ace88;
    }
    ctx->pc = 0x2ACE80u;
    {
        const bool branch_taken_0x2ace80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ace80) {
            ctx->pc = 0x2ACE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE80u;
            // 0x2ace84: 0x92220033  lbu         $v0, 0x33($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACEF8u;
            goto label_2acef8;
        }
    }
    ctx->pc = 0x2ACE88u;
label_2ace88:
    // 0x2ace88: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ace88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ace8c:
    // 0x2ace8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ace8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ace90:
    // 0x2ace90: 0xc089998  jal         func_226660
label_2ace94:
    if (ctx->pc == 0x2ACE94u) {
        ctx->pc = 0x2ACE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE90u;
        // 0x2ace94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACE98u;
        goto label_2ace98;
    }
    ctx->pc = 0x2ACE90u;
    SET_GPR_U32(ctx, 31, 0x2ACE98u);
    ctx->pc = 0x2ACE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE90u;
    // 0x2ace94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2ACE90u, 0x2ACE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE98u;
label_2ace98:
    // 0x2ace98: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
label_2ace9c:
    if (ctx->pc == 0x2ACE9Cu) {
        ctx->pc = 0x2ACEA0u;
        goto label_2acea0;
    }
    ctx->pc = 0x2ACE98u;
    {
        const bool branch_taken_0x2ace98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ace98) {
            ctx->pc = 0x2ACED0u;
            goto label_2aced0;
        }
    }
    ctx->pc = 0x2ACEA0u;
label_2acea0:
    // 0x2acea0: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x2acea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2acea4:
    // 0x2acea4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2acea8:
    if (ctx->pc == 0x2ACEA8u) {
        ctx->pc = 0x2ACEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEA4u;
        // 0x2acea8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACEACu;
        goto label_2aceac;
    }
    ctx->pc = 0x2ACEA4u;
    {
        const bool branch_taken_0x2acea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEA4u;
        // 0x2acea8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acea4) {
            ctx->pc = 0x2ACED0u;
            goto label_2aced0;
        }
    }
    ctx->pc = 0x2ACEACu;
label_2aceac:
    // 0x2aceac: 0xc05dc0e  jal         func_177038
label_2aceb0:
    if (ctx->pc == 0x2ACEB0u) {
        ctx->pc = 0x2ACEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEACu;
        // 0x2aceb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACEB4u;
        goto label_2aceb4;
    }
    ctx->pc = 0x2ACEACu;
    SET_GPR_U32(ctx, 31, 0x2ACEB4u);
    ctx->pc = 0x2ACEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEACu;
    // 0x2aceb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2ACEACu, 0x2ACEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEB4u;
label_2aceb4:
    // 0x2aceb4: 0xc05d484  jal         func_175210
label_2aceb8:
    if (ctx->pc == 0x2ACEB8u) {
        ctx->pc = 0x2ACEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEB4u;
        // 0x2aceb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACEBCu;
        goto label_2acebc;
    }
    ctx->pc = 0x2ACEB4u;
    SET_GPR_U32(ctx, 31, 0x2ACEBCu);
    ctx->pc = 0x2ACEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEB4u;
    // 0x2aceb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2ACEB4u, 0x2ACEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEBCu;
label_2acebc:
    // 0x2acebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2acec0:
    // 0x2acec0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2acec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2acec4:
    // 0x2acec4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2acec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2acec8:
    // 0x2acec8: 0xa0f809  jalr        $a1
label_2acecc:
    if (ctx->pc == 0x2ACECCu) {
        ctx->pc = 0x2ACECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEC8u;
        // 0x2acecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACED0u;
        goto label_2aced0;
    }
    ctx->pc = 0x2ACEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2ACED0u);
        ctx->pc = 0x2ACECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEC8u;
        // 0x2acecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACEC8u, 0x2ACED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACED0u;
label_2aced0:
    // 0x2aced0: 0xc08a0ea  jal         func_2283A8
label_2aced4:
    if (ctx->pc == 0x2ACED4u) {
        ctx->pc = 0x2ACED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACED0u;
        // 0x2aced4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACED8u;
        goto label_2aced8;
    }
    ctx->pc = 0x2ACED0u;
    SET_GPR_U32(ctx, 31, 0x2ACED8u);
    ctx->pc = 0x2ACED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACED0u;
    // 0x2aced4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283A8u, 0x2ACED0u, 0x2ACED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACED8u;
label_2aced8:
    // 0x2aced8: 0xc08bcf2  jal         func_22F3C8
label_2acedc:
    if (ctx->pc == 0x2ACEDCu) {
        ctx->pc = 0x2ACEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACED8u;
        // 0x2acedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACEE0u;
        goto label_2acee0;
    }
    ctx->pc = 0x2ACED8u;
    SET_GPR_U32(ctx, 31, 0x2ACEE0u);
    ctx->pc = 0x2ACEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACED8u;
    // 0x2acedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x2ACED8u, 0x2ACEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEE0u;
label_2acee0:
    // 0x2acee0: 0xc097ddc  jal         func_25F770
label_2acee4:
    if (ctx->pc == 0x2ACEE4u) {
        ctx->pc = 0x2ACEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEE0u;
        // 0x2acee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACEE8u;
        goto label_2acee8;
    }
    ctx->pc = 0x2ACEE0u;
    SET_GPR_U32(ctx, 31, 0x2ACEE8u);
    ctx->pc = 0x2ACEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEE0u;
    // 0x2acee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2ACEE0u, 0x2ACEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEE8u;
label_2acee8:
    // 0x2acee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2acee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aceec:
    // 0x2aceec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aceecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acef0:
    // 0x2acef0: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_2acef4:
    if (ctx->pc == 0x2ACEF4u) {
        ctx->pc = 0x2ACEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEF0u;
        // 0x2acef4: 0xa223003e  sb          $v1, 0x3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACEF8u;
        goto label_2acef8;
    }
    ctx->pc = 0x2ACEF0u;
    {
        const bool branch_taken_0x2acef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEF0u;
        // 0x2acef4: 0xa223003e  sb          $v1, 0x3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acef0) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2ACEF8u;
label_2acef8:
    // 0x2acef8: 0x1453001e  bne         $v0, $s3, . + 4 + (0x1E << 2)
label_2acefc:
    if (ctx->pc == 0x2ACEFCu) {
        ctx->pc = 0x2ACEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEF8u;
        // 0x2acefc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF00u;
        goto label_2acf00;
    }
    ctx->pc = 0x2ACEF8u;
    {
        const bool branch_taken_0x2acef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2ACEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEF8u;
        // 0x2acefc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acef8) {
            ctx->pc = 0x2ACF74u;
            goto label_2acf74;
        }
    }
    ctx->pc = 0x2ACF00u;
label_2acf00:
    // 0x2acf00: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2acf00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2acf04:
    // 0x2acf04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2acf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2acf08:
    // 0x2acf08: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2acf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2acf0c:
    // 0x2acf0c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2acf0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2acf10:
    // 0x2acf10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2acf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2acf14:
    // 0x2acf14: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2acf14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2acf18:
    // 0x2acf18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2acf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2acf1c:
    // 0x2acf1c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2acf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2acf20:
    // 0x2acf20: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2acf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2acf24:
    // 0x2acf24: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2acf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2acf28:
    // 0x2acf28: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2acf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2acf2c:
    // 0x2acf2c: 0xc1067b8  jal         func_419EE0
label_2acf30:
    if (ctx->pc == 0x2ACF30u) {
        ctx->pc = 0x2ACF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF2Cu;
        // 0x2acf30: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF34u;
        goto label_2acf34;
    }
    ctx->pc = 0x2ACF2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF34u);
    ctx->pc = 0x2ACF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF2Cu;
    // 0x2acf30: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2ACF2Cu, 0x2ACF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF34u;
label_2acf34:
    // 0x2acf34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acf38:
    // 0x2acf38: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2acf3c:
    if (ctx->pc == 0x2ACF3Cu) {
        ctx->pc = 0x2ACF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF38u;
        // 0x2acf3c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF40u;
        goto label_2acf40;
    }
    ctx->pc = 0x2ACF38u;
    {
        const bool branch_taken_0x2acf38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF38u;
        // 0x2acf3c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf38) {
            ctx->pc = 0x2ACF70u;
            goto label_2acf70;
        }
    }
    ctx->pc = 0x2ACF40u;
label_2acf40:
    // 0x2acf40: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x2acf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_2acf44:
    // 0x2acf44: 0xc043d5e  jal         func_10F578
label_2acf48:
    if (ctx->pc == 0x2ACF48u) {
        ctx->pc = 0x2ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF44u;
        // 0x2acf48: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF4Cu;
        goto label_2acf4c;
    }
    ctx->pc = 0x2ACF44u;
    SET_GPR_U32(ctx, 31, 0x2ACF4Cu);
    ctx->pc = 0x2ACF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF44u;
    // 0x2acf48: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2ACF44u, 0x2ACF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF4Cu;
label_2acf4c:
    // 0x2acf4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2acf4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2acf50:
    // 0x2acf50: 0x105300d0  beq         $v0, $s3, . + 4 + (0xD0 << 2)
label_2acf54:
    if (ctx->pc == 0x2ACF54u) {
        ctx->pc = 0x2ACF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF50u;
        // 0x2acf54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF58u;
        goto label_2acf58;
    }
    ctx->pc = 0x2ACF50u;
    {
        const bool branch_taken_0x2acf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2ACF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF50u;
        // 0x2acf54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf50) {
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2ACF58u;
label_2acf58:
    // 0x2acf58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2acf5c:
    // 0x2acf5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2acf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2acf60:
    // 0x2acf60: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2acf64:
    // 0x2acf64: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2acf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2acf68:
    // 0x2acf68: 0xc0a6800  jal         func_29A000
label_2acf6c:
    if (ctx->pc == 0x2ACF6Cu) {
        ctx->pc = 0x2ACF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF68u;
        // 0x2acf6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF70u;
        goto label_2acf70;
    }
    ctx->pc = 0x2ACF68u;
    SET_GPR_U32(ctx, 31, 0x2ACF70u);
    ctx->pc = 0x2ACF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF68u;
    // 0x2acf6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2ACF68u, 0x2ACF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF70u;
label_2acf70:
    // 0x2acf70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2acf74:
    // 0x2acf74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2acf78:
    // 0x2acf78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2acf78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2acf7c:
    // 0x2acf7c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2acf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2acf80:
    // 0x2acf80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2acf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2acf84:
    // 0x2acf84: 0x240500b6  addiu       $a1, $zero, 0xB6
    ctx->pc = 0x2acf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
label_2acf88:
    // 0x2acf88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acf8c:
    // 0x2acf8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2acf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acf90:
    // 0x2acf90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2acf90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acf94:
    // 0x2acf94: 0xc088178  jal         func_2205E0
label_2acf98:
    if (ctx->pc == 0x2ACF98u) {
        ctx->pc = 0x2ACF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF94u;
        // 0x2acf98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACF9Cu;
        goto label_2acf9c;
    }
    ctx->pc = 0x2ACF94u;
    SET_GPR_U32(ctx, 31, 0x2ACF9Cu);
    ctx->pc = 0x2ACF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF94u;
    // 0x2acf98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ACF94u, 0x2ACF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF9Cu;
label_2acf9c:
    // 0x2acf9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2acf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2acfa0:
    // 0x2acfa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2acfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acfa4:
    // 0x2acfa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2acfa8:
    // 0x2acfa8: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2acfac:
    if (ctx->pc == 0x2ACFACu) {
        ctx->pc = 0x2ACFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFA8u;
        // 0x2acfac: 0xa08302d8  sb          $v1, 0x2D8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 728), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACFB0u;
        goto label_2acfb0;
    }
    ctx->pc = 0x2ACFA8u;
    {
        const bool branch_taken_0x2acfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFA8u;
        // 0x2acfac: 0xa08302d8  sb          $v1, 0x2D8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 728), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfa8) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2ACFB0u;
label_2acfb0:
    // 0x2acfb0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2acfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2acfb4:
    // 0x2acfb4: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2acfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2acfb8:
    // 0x2acfb8: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x2acfb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2acfbc:
    // 0x2acfbc: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x2acfbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2acfc0:
    // 0x2acfc0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2acfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2acfc4:
    // 0x2acfc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2acfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2acfc8:
    // 0x2acfc8: 0xc0cdb38  jal         func_336CE0
label_2acfcc:
    if (ctx->pc == 0x2ACFCCu) {
        ctx->pc = 0x2ACFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFC8u;
        // 0x2acfcc: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACFD0u;
        goto label_2acfd0;
    }
    ctx->pc = 0x2ACFC8u;
    SET_GPR_U32(ctx, 31, 0x2ACFD0u);
    ctx->pc = 0x2ACFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFC8u;
    // 0x2acfcc: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2ACFC8u, 0x2ACFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFD0u;
label_2acfd0:
    // 0x2acfd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2acfd4:
    // 0x2acfd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2acfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2acfd8:
    // 0x2acfd8: 0x0  nop
    ctx->pc = 0x2acfd8u;
    // NOP
label_2acfdc:
    // 0x2acfdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acfdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2acfe0:
    // 0x2acfe0: 0x0  nop
    ctx->pc = 0x2acfe0u;
    // NOP
label_2acfe4:
    // 0x2acfe4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_2acfe8:
    if (ctx->pc == 0x2ACFE8u) {
        ctx->pc = 0x2ACFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFE4u;
        // 0x2acfe8: 0x92340035  lbu         $s4, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACFECu;
        goto label_2acfec;
    }
    ctx->pc = 0x2ACFE4u;
    {
        const bool branch_taken_0x2acfe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2acfe4) {
            ctx->pc = 0x2ACFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACFE4u;
            // 0x2acfe8: 0x92340035  lbu         $s4, 0x35($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD030u;
            goto label_2ad030;
        }
    }
    ctx->pc = 0x2ACFECu;
label_2acfec:
    // 0x2acfec: 0xc0a367c  jal         func_28D9F0
label_2acff0:
    if (ctx->pc == 0x2ACFF0u) {
        ctx->pc = 0x2ACFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFECu;
        // 0x2acff0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACFF4u;
        goto label_2acff4;
    }
    ctx->pc = 0x2ACFECu;
    SET_GPR_U32(ctx, 31, 0x2ACFF4u);
    ctx->pc = 0x2ACFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFECu;
    // 0x2acff0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ACFECu, 0x2ACFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFF4u;
label_2acff4:
    // 0x2acff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acff8:
    // 0x2acff8: 0x108000a6  beqz        $a0, . + 4 + (0xA6 << 2)
label_2acffc:
    if (ctx->pc == 0x2ACFFCu) {
        ctx->pc = 0x2ACFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFF8u;
        // 0x2acffc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD000u;
        goto label_2ad000;
    }
    ctx->pc = 0x2ACFF8u;
    {
        const bool branch_taken_0x2acff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFF8u;
        // 0x2acffc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acff8) {
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2AD000u;
label_2ad000:
    // 0x2ad000: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ad000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad004:
    // 0x2ad004: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2ad004u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ad008:
    // 0x2ad008: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ad008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ad00c:
    // 0x2ad00c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ad00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ad010:
    // 0x2ad010: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ad014:
    // 0x2ad014: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ad014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ad018:
    // 0x2ad018: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ad018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad01c:
    // 0x2ad01c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ad01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad020:
    // 0x2ad020: 0xc0bee7a  jal         func_2FB9E8
label_2ad024:
    if (ctx->pc == 0x2AD024u) {
        ctx->pc = 0x2AD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD020u;
        // 0x2ad024: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD028u;
        goto label_2ad028;
    }
    ctx->pc = 0x2AD020u;
    SET_GPR_U32(ctx, 31, 0x2AD028u);
    ctx->pc = 0x2AD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD020u;
    // 0x2ad024: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AD020u, 0x2AD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD028u;
label_2ad028:
    // 0x2ad028: 0x1000009b  b           . + 4 + (0x9B << 2)
label_2ad02c:
    if (ctx->pc == 0x2AD02Cu) {
        ctx->pc = 0x2AD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD028u;
        // 0x2ad02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD030u;
        goto label_2ad030;
    }
    ctx->pc = 0x2AD028u;
    {
        const bool branch_taken_0x2ad028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD028u;
        // 0x2ad02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad028) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD030u;
label_2ad030:
    // 0x2ad030: 0x56930029  bnel        $s4, $s3, . + 4 + (0x29 << 2)
label_2ad034:
    if (ctx->pc == 0x2AD034u) {
        ctx->pc = 0x2AD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD030u;
        // 0x2ad034: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD038u;
        goto label_2ad038;
    }
    ctx->pc = 0x2AD030u;
    {
        const bool branch_taken_0x2ad030 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ad030) {
            ctx->pc = 0x2AD034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD030u;
            // 0x2ad034: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD0D8u;
            goto label_2ad0d8;
        }
    }
    ctx->pc = 0x2AD038u;
label_2ad038:
    // 0x2ad038: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2ad038u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2ad03c:
    // 0x2ad03c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ad040:
    // 0x2ad040: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ad040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ad044:
    // 0x2ad044: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2ad044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_2ad048:
    // 0x2ad048: 0xc0cd8ec  jal         func_3363B0
label_2ad04c:
    if (ctx->pc == 0x2AD04Cu) {
        ctx->pc = 0x2AD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD048u;
        // 0x2ad04c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD050u;
        goto label_2ad050;
    }
    ctx->pc = 0x2AD048u;
    SET_GPR_U32(ctx, 31, 0x2AD050u);
    ctx->pc = 0x2AD04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD048u;
    // 0x2ad04c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2AD048u, 0x2AD050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD050u;
label_2ad050:
    // 0x2ad050: 0xc0cd766  jal         func_335D98
label_2ad054:
    if (ctx->pc == 0x2AD054u) {
        ctx->pc = 0x2AD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD050u;
        // 0x2ad054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD058u;
        goto label_2ad058;
    }
    ctx->pc = 0x2AD050u;
    SET_GPR_U32(ctx, 31, 0x2AD058u);
    ctx->pc = 0x2AD054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD050u;
    // 0x2ad054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2AD050u, 0x2AD058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD058u;
label_2ad058:
    // 0x2ad058: 0xc62d0020  lwc1        $f13, 0x20($s1)
    ctx->pc = 0x2ad058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2ad05c:
    // 0x2ad05c: 0xc0cdd2e  jal         func_3374B8
label_2ad060:
    if (ctx->pc == 0x2AD060u) {
        ctx->pc = 0x2AD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD05Cu;
        // 0x2ad060: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD064u;
        goto label_2ad064;
    }
    ctx->pc = 0x2AD05Cu;
    SET_GPR_U32(ctx, 31, 0x2AD064u);
    ctx->pc = 0x2AD060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD05Cu;
    // 0x2ad060: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2AD05Cu, 0x2AD064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD064u;
label_2ad064:
    // 0x2ad064: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2ad064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2ad068:
    // 0x2ad068: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ad068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2ad06c:
    // 0x2ad06c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ad070:
    // 0x2ad070: 0x0  nop
    ctx->pc = 0x2ad070u;
    // NOP
label_2ad074:
    // 0x2ad074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad078:
    // 0x2ad078: 0x0  nop
    ctx->pc = 0x2ad078u;
    // NOP
label_2ad07c:
    // 0x2ad07c: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2ad080:
    if (ctx->pc == 0x2AD080u) {
        ctx->pc = 0x2AD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD07Cu;
        // 0x2ad080: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD084u;
        goto label_2ad084;
    }
    ctx->pc = 0x2AD07Cu;
    {
        const bool branch_taken_0x2ad07c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad07c) {
            ctx->pc = 0x2AD080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD07Cu;
            // 0x2ad080: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD0C0u;
            goto label_2ad0c0;
        }
    }
    ctx->pc = 0x2AD084u;
label_2ad084:
    // 0x2ad084: 0xc0a367c  jal         func_28D9F0
label_2ad088:
    if (ctx->pc == 0x2AD088u) {
        ctx->pc = 0x2AD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD084u;
        // 0x2ad088: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD08Cu;
        goto label_2ad08c;
    }
    ctx->pc = 0x2AD084u;
    SET_GPR_U32(ctx, 31, 0x2AD08Cu);
    ctx->pc = 0x2AD088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD084u;
    // 0x2ad088: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AD084u, 0x2AD08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD08Cu;
label_2ad08c:
    // 0x2ad08c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad090:
    // 0x2ad090: 0x12000081  beqz        $s0, . + 4 + (0x81 << 2)
label_2ad094:
    if (ctx->pc == 0x2AD094u) {
        ctx->pc = 0x2AD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD090u;
        // 0x2ad094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD098u;
        goto label_2ad098;
    }
    ctx->pc = 0x2AD090u;
    {
        const bool branch_taken_0x2ad090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD090u;
        // 0x2ad094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad090) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD098u;
label_2ad098:
    // 0x2ad098: 0xc0884f6  jal         func_2213D8
label_2ad09c:
    if (ctx->pc == 0x2AD09Cu) {
        ctx->pc = 0x2AD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD098u;
        // 0x2ad09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0A0u;
        goto label_2ad0a0;
    }
    ctx->pc = 0x2AD098u;
    SET_GPR_U32(ctx, 31, 0x2AD0A0u);
    ctx->pc = 0x2AD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD098u;
    // 0x2ad09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2AD098u, 0x2AD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0A0u;
label_2ad0a0:
    // 0x2ad0a0: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2ad0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ad0a4:
    // 0x2ad0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad0a8:
    // 0x2ad0a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ad0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad0ac:
    // 0x2ad0ac: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ad0acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2ad0b0:
    // 0x2ad0b0: 0xc0bf70a  jal         func_2FDC28
label_2ad0b4:
    if (ctx->pc == 0x2AD0B4u) {
        ctx->pc = 0x2AD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B0u;
        // 0x2ad0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0B8u;
        goto label_2ad0b8;
    }
    ctx->pc = 0x2AD0B0u;
    SET_GPR_U32(ctx, 31, 0x2AD0B8u);
    ctx->pc = 0x2AD0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0B0u;
    // 0x2ad0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2AD0B0u, 0x2AD0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0B8u;
label_2ad0b8:
    // 0x2ad0b8: 0x10000077  b           . + 4 + (0x77 << 2)
label_2ad0bc:
    if (ctx->pc == 0x2AD0BCu) {
        ctx->pc = 0x2AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B8u;
        // 0x2ad0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0C0u;
        goto label_2ad0c0;
    }
    ctx->pc = 0x2AD0B8u;
    {
        const bool branch_taken_0x2ad0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B8u;
        // 0x2ad0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0b8) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD0C0u;
label_2ad0c0:
    // 0x2ad0c0: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
label_2ad0c4:
    if (ctx->pc == 0x2AD0C4u) {
        ctx->pc = 0x2AD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0C0u;
        // 0x2ad0c4: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0C8u;
        goto label_2ad0c8;
    }
    ctx->pc = 0x2AD0C0u;
    {
        const bool branch_taken_0x2ad0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ad0c0) {
            ctx->pc = 0x2AD0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD0C0u;
            // 0x2ad0c4: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD0D8u;
            goto label_2ad0d8;
        }
    }
    ctx->pc = 0x2AD0C8u;
label_2ad0c8:
    // 0x2ad0c8: 0xc0ab278  jal         func_2AC9E0
label_2ad0cc:
    if (ctx->pc == 0x2AD0CCu) {
        ctx->pc = 0x2AD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0C8u;
        // 0x2ad0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0D0u;
        goto label_2ad0d0;
    }
    ctx->pc = 0x2AD0C8u;
    SET_GPR_U32(ctx, 31, 0x2AD0D0u);
    ctx->pc = 0x2AD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0C8u;
    // 0x2ad0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9E0u, 0x2AD0C8u, 0x2AD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0D0u;
label_2ad0d0:
    // 0x2ad0d0: 0x10000071  b           . + 4 + (0x71 << 2)
label_2ad0d4:
    if (ctx->pc == 0x2AD0D4u) {
        ctx->pc = 0x2AD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0D0u;
        // 0x2ad0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0D8u;
        goto label_2ad0d8;
    }
    ctx->pc = 0x2AD0D0u;
    {
        const bool branch_taken_0x2ad0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0D0u;
        // 0x2ad0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0d0) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD0D8u;
label_2ad0d8:
    // 0x2ad0d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ad0dc:
    // 0x2ad0dc: 0x54620047  bnel        $v1, $v0, . + 4 + (0x47 << 2)
label_2ad0e0:
    if (ctx->pc == 0x2AD0E0u) {
        ctx->pc = 0x2AD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0DCu;
        // 0x2ad0e0: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0E4u;
        goto label_2ad0e4;
    }
    ctx->pc = 0x2AD0DCu;
    {
        const bool branch_taken_0x2ad0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad0dc) {
            ctx->pc = 0x2AD0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD0DCu;
            // 0x2ad0e0: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD1FCu;
            goto label_2ad1fc;
        }
    }
    ctx->pc = 0x2AD0E4u;
label_2ad0e4:
    // 0x2ad0e4: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2ad0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2ad0e8:
    // 0x2ad0e8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2ad0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_2ad0ec:
    // 0x2ad0ec: 0xc043d5e  jal         func_10F578
label_2ad0f0:
    if (ctx->pc == 0x2AD0F0u) {
        ctx->pc = 0x2AD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0ECu;
        // 0x2ad0f0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0F4u;
        goto label_2ad0f4;
    }
    ctx->pc = 0x2AD0ECu;
    SET_GPR_U32(ctx, 31, 0x2AD0F4u);
    ctx->pc = 0x2AD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0ECu;
    // 0x2ad0f0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2AD0ECu, 0x2AD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0F4u;
label_2ad0f4:
    // 0x2ad0f4: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_2ad0f8:
    if (ctx->pc == 0x2AD0F8u) {
        ctx->pc = 0x2AD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0F4u;
        // 0x2ad0f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD0FCu;
        goto label_2ad0fc;
    }
    ctx->pc = 0x2AD0F4u;
    {
        const bool branch_taken_0x2ad0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0F4u;
        // 0x2ad0f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0f4) {
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2AD0FCu;
label_2ad0fc:
    // 0x2ad0fc: 0xa24301b2  sb          $v1, 0x1B2($s2)
    ctx->pc = 0x2ad0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 3));
label_2ad100:
    // 0x2ad100: 0x9222003c  lbu         $v0, 0x3C($s1)
    ctx->pc = 0x2ad100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_2ad104:
    // 0x2ad104: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2ad108:
    if (ctx->pc == 0x2AD108u) {
        ctx->pc = 0x2AD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD104u;
        // 0x2ad108: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD10Cu;
        goto label_2ad10c;
    }
    ctx->pc = 0x2AD104u;
    {
        const bool branch_taken_0x2ad104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD104u;
        // 0x2ad108: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad104) {
            ctx->pc = 0x2AD110u;
            goto label_2ad110;
        }
    }
    ctx->pc = 0x2AD10Cu;
label_2ad10c:
    // 0x2ad10c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ad110:
    // 0x2ad110: 0xc067b9c  jal         func_19EE70
label_2ad114:
    if (ctx->pc == 0x2AD114u) {
        ctx->pc = 0x2AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD110u;
        // 0x2ad114: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD118u;
        goto label_2ad118;
    }
    ctx->pc = 0x2AD110u;
    SET_GPR_U32(ctx, 31, 0x2AD118u);
    ctx->pc = 0x2AD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD110u;
    // 0x2ad114: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2AD110u, 0x2AD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD118u;
label_2ad118:
    // 0x2ad118: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ad118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad11c:
    // 0x2ad11c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ad120:
    // 0x2ad120: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2ad120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ad124:
    // 0x2ad124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad128:
    // 0x2ad128: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x2ad128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_2ad12c:
    // 0x2ad12c: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x2ad12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_2ad130:
    // 0x2ad130: 0x60f809  jalr        $v1
label_2ad134:
    if (ctx->pc == 0x2AD134u) {
        ctx->pc = 0x2AD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD130u;
        // 0x2ad134: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD138u;
        goto label_2ad138;
    }
    ctx->pc = 0x2AD130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD138u);
        ctx->pc = 0x2AD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD130u;
        // 0x2ad134: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD130u, 0x2AD138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD138u;
label_2ad138:
    // 0x2ad138: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x2ad138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_2ad13c:
    // 0x2ad13c: 0x5450002e  bnel        $v0, $s0, . + 4 + (0x2E << 2)
label_2ad140:
    if (ctx->pc == 0x2AD140u) {
        ctx->pc = 0x2AD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD13Cu;
        // 0x2ad140: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD144u;
        goto label_2ad144;
    }
    ctx->pc = 0x2AD13Cu;
    {
        const bool branch_taken_0x2ad13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ad13c) {
            ctx->pc = 0x2AD140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD13Cu;
            // 0x2ad140: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD1F8u;
            goto label_2ad1f8;
        }
    }
    ctx->pc = 0x2AD144u;
label_2ad144:
    // 0x2ad144: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad148:
    // 0x2ad148: 0xc0a2fd0  jal         func_28BF40
label_2ad14c:
    if (ctx->pc == 0x2AD14Cu) {
        ctx->pc = 0x2AD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD148u;
        // 0x2ad14c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD150u;
        goto label_2ad150;
    }
    ctx->pc = 0x2AD148u;
    SET_GPR_U32(ctx, 31, 0x2AD150u);
    ctx->pc = 0x2AD14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD148u;
    // 0x2ad14c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2AD148u, 0x2AD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD150u;
label_2ad150:
    // 0x2ad150: 0x5450002a  bnel        $v0, $s0, . + 4 + (0x2A << 2)
label_2ad154:
    if (ctx->pc == 0x2AD154u) {
        ctx->pc = 0x2AD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD150u;
        // 0x2ad154: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD158u;
        goto label_2ad158;
    }
    ctx->pc = 0x2AD150u;
    {
        const bool branch_taken_0x2ad150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ad150) {
            ctx->pc = 0x2AD154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD150u;
            // 0x2ad154: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD1FCu;
            goto label_2ad1fc;
        }
    }
    ctx->pc = 0x2AD158u;
label_2ad158:
    // 0x2ad158: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2ad158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2ad15c:
    // 0x2ad15c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2ad160:
    if (ctx->pc == 0x2AD160u) {
        ctx->pc = 0x2AD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD15Cu;
        // 0x2ad160: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD164u;
        goto label_2ad164;
    }
    ctx->pc = 0x2AD15Cu;
    {
        const bool branch_taken_0x2ad15c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD15Cu;
        // 0x2ad160: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad15c) {
            ctx->pc = 0x2AD178u;
            goto label_2ad178;
        }
    }
    ctx->pc = 0x2AD164u;
label_2ad164:
    // 0x2ad164: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ad164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ad168:
    // 0x2ad168: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ad168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ad16c:
    // 0x2ad16c: 0x24632ee0  addiu       $v1, $v1, 0x2EE0
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
label_2ad170:
    // 0x2ad170: 0x10000021  b           . + 4 + (0x21 << 2)
label_2ad174:
    if (ctx->pc == 0x2AD174u) {
        ctx->pc = 0x2AD174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD170u;
        // 0x2ad174: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD178u;
        goto label_2ad178;
    }
    ctx->pc = 0x2AD170u;
    {
        const bool branch_taken_0x2ad170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD170u;
        // 0x2ad174: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad170) {
            ctx->pc = 0x2AD1F8u;
            goto label_2ad1f8;
        }
    }
    ctx->pc = 0x2AD178u;
label_2ad178:
    // 0x2ad178: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ad178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ad17c:
    // 0x2ad17c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ad17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ad180:
    // 0x2ad180: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2ad180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ad184:
    // 0x2ad184: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2ad188:
    if (ctx->pc == 0x2AD188u) {
        ctx->pc = 0x2AD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD184u;
        // 0x2ad188: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD18Cu;
        goto label_2ad18c;
    }
    ctx->pc = 0x2AD184u;
    {
        const bool branch_taken_0x2ad184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD184u;
        // 0x2ad188: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad184) {
            ctx->pc = 0x2AD1F8u;
            goto label_2ad1f8;
        }
    }
    ctx->pc = 0x2AD18Cu;
label_2ad18c:
    // 0x2ad18c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2ad18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2ad190:
    // 0x2ad190: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2ad190u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ad194:
    // 0x2ad194: 0xc0a47b4  jal         func_291ED0
label_2ad198:
    if (ctx->pc == 0x2AD198u) {
        ctx->pc = 0x2AD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD194u;
        // 0x2ad198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD19Cu;
        goto label_2ad19c;
    }
    ctx->pc = 0x2AD194u;
    SET_GPR_U32(ctx, 31, 0x2AD19Cu);
    ctx->pc = 0x2AD198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD194u;
    // 0x2ad198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AD194u, 0x2AD19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD19Cu;
label_2ad19c:
    // 0x2ad19c: 0x1450003e  bne         $v0, $s0, . + 4 + (0x3E << 2)
label_2ad1a0:
    if (ctx->pc == 0x2AD1A0u) {
        ctx->pc = 0x2AD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD19Cu;
        // 0x2ad1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD1A4u;
        goto label_2ad1a4;
    }
    ctx->pc = 0x2AD19Cu;
    {
        const bool branch_taken_0x2ad19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD19Cu;
        // 0x2ad1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad19c) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD1A4u;
label_2ad1a4:
    // 0x2ad1a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ad1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ad1a8:
    // 0x2ad1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ad1ac:
    // 0x2ad1ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ad1b0:
    // 0x2ad1b0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ad1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ad1b4:
    // 0x2ad1b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ad1b8:
    // 0x2ad1b8: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x2ad1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_2ad1bc:
    // 0x2ad1bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad1c0:
    // 0x2ad1c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad1c4:
    // 0x2ad1c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ad1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad1c8:
    // 0x2ad1c8: 0xc088178  jal         func_2205E0
label_2ad1cc:
    if (ctx->pc == 0x2AD1CCu) {
        ctx->pc = 0x2AD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1C8u;
        // 0x2ad1cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD1D0u;
        goto label_2ad1d0;
    }
    ctx->pc = 0x2AD1C8u;
    SET_GPR_U32(ctx, 31, 0x2AD1D0u);
    ctx->pc = 0x2AD1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD1C8u;
    // 0x2ad1cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AD1C8u, 0x2AD1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD1D0u;
label_2ad1d0:
    // 0x2ad1d0: 0x16300031  bne         $s1, $s0, . + 4 + (0x31 << 2)
label_2ad1d4:
    if (ctx->pc == 0x2AD1D4u) {
        ctx->pc = 0x2AD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1D0u;
        // 0x2ad1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD1D8u;
        goto label_2ad1d8;
    }
    ctx->pc = 0x2AD1D0u;
    {
        const bool branch_taken_0x2ad1d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1D0u;
        // 0x2ad1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1d0) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD1D8u;
label_2ad1d8:
    // 0x2ad1d8: 0xa24001b2  sb          $zero, 0x1B2($s2)
    ctx->pc = 0x2ad1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
label_2ad1dc:
    // 0x2ad1dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ad1e0:
    // 0x2ad1e0: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2ad1e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2ad1e4:
    // 0x2ad1e4: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2ad1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2ad1e8:
    // 0x2ad1e8: 0x60f809  jalr        $v1
label_2ad1ec:
    if (ctx->pc == 0x2AD1ECu) {
        ctx->pc = 0x2AD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1E8u;
        // 0x2ad1ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD1F0u;
        goto label_2ad1f0;
    }
    ctx->pc = 0x2AD1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD1F0u);
        ctx->pc = 0x2AD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1E8u;
        // 0x2ad1ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD1E8u, 0x2AD1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD1F0u;
label_2ad1f0:
    // 0x2ad1f0: 0x10000029  b           . + 4 + (0x29 << 2)
label_2ad1f4:
    if (ctx->pc == 0x2AD1F4u) {
        ctx->pc = 0x2AD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1F0u;
        // 0x2ad1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD1F8u;
        goto label_2ad1f8;
    }
    ctx->pc = 0x2AD1F0u;
    {
        const bool branch_taken_0x2ad1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1F0u;
        // 0x2ad1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1f0) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD1F8u;
label_2ad1f8:
    // 0x2ad1f8: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2ad1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_2ad1fc:
    // 0x2ad1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad200:
    // 0x2ad200: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2ad204:
    if (ctx->pc == 0x2AD204u) {
        ctx->pc = 0x2AD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD200u;
        // 0x2ad204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD208u;
        goto label_2ad208;
    }
    ctx->pc = 0x2AD200u;
    {
        const bool branch_taken_0x2ad200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD200u;
        // 0x2ad204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad200) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD208u;
label_2ad208:
    // 0x2ad208: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x2ad208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_2ad20c:
    // 0x2ad20c: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
label_2ad210:
    if (ctx->pc == 0x2AD210u) {
        ctx->pc = 0x2AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD20Cu;
        // 0x2ad210: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD214u;
        goto label_2ad214;
    }
    ctx->pc = 0x2AD20Cu;
    {
        const bool branch_taken_0x2ad20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ad20c) {
            ctx->pc = 0x2AD210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD20Cu;
            // 0x2ad210: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2AD214u;
label_2ad214:
    // 0x2ad214: 0x82230036  lb          $v1, 0x36($s1)
    ctx->pc = 0x2ad214u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_2ad218:
    // 0x2ad218: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ad218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ad21c:
    // 0x2ad21c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_2ad220:
    if (ctx->pc == 0x2AD220u) {
        ctx->pc = 0x2AD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD21Cu;
        // 0x2ad220: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD224u;
        goto label_2ad224;
    }
    ctx->pc = 0x2AD21Cu;
    {
        const bool branch_taken_0x2ad21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad21c) {
            ctx->pc = 0x2AD220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD21Cu;
            // 0x2ad220: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD250u;
            goto label_2ad250;
        }
    }
    ctx->pc = 0x2AD224u;
label_2ad224:
    // 0x2ad224: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ad224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ad228:
    // 0x2ad228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ad22c:
    // 0x2ad22c: 0xc089998  jal         func_226660
label_2ad230:
    if (ctx->pc == 0x2AD230u) {
        ctx->pc = 0x2AD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD22Cu;
        // 0x2ad230: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD234u;
        goto label_2ad234;
    }
    ctx->pc = 0x2AD22Cu;
    SET_GPR_U32(ctx, 31, 0x2AD234u);
    ctx->pc = 0x2AD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD22Cu;
    // 0x2ad230: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2AD22Cu, 0x2AD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD234u;
label_2ad234:
    // 0x2ad234: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2ad238:
    if (ctx->pc == 0x2AD238u) {
        ctx->pc = 0x2AD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD234u;
        // 0x2ad238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD23Cu;
        goto label_2ad23c;
    }
    ctx->pc = 0x2AD234u;
    {
        const bool branch_taken_0x2ad234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD234u;
        // 0x2ad238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad234) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD23Cu;
label_2ad23c:
    // 0x2ad23c: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x2ad23cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
label_2ad240:
    // 0x2ad240: 0xc0ab25c  jal         func_2AC970
label_2ad244:
    if (ctx->pc == 0x2AD244u) {
        ctx->pc = 0x2AD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD240u;
        // 0x2ad244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD248u;
        goto label_2ad248;
    }
    ctx->pc = 0x2AD240u;
    SET_GPR_U32(ctx, 31, 0x2AD248u);
    ctx->pc = 0x2AD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD240u;
    // 0x2ad244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC970u, 0x2AD240u, 0x2AD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD248u;
label_2ad248:
    // 0x2ad248: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ad24c:
    if (ctx->pc == 0x2AD24Cu) {
        ctx->pc = 0x2AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD248u;
        // 0x2ad24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD250u;
        goto label_2ad250;
    }
    ctx->pc = 0x2AD248u;
    {
        const bool branch_taken_0x2ad248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD248u;
        // 0x2ad24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad248) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD250u;
label_2ad250:
    // 0x2ad250: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2ad254:
    if (ctx->pc == 0x2AD254u) {
        ctx->pc = 0x2AD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD250u;
        // 0x2ad254: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD258u;
        goto label_2ad258;
    }
    ctx->pc = 0x2AD250u;
    {
        const bool branch_taken_0x2ad250 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD250u;
        // 0x2ad254: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad250) {
            ctx->pc = 0x2AD26Cu;
            goto label_2ad26c;
        }
    }
    ctx->pc = 0x2AD258u;
label_2ad258:
    // 0x2ad258: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ad258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ad25c:
    // 0x2ad25c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ad25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ad260:
    // 0x2ad260: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2ad260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_2ad264:
    // 0x2ad264: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ad268:
    if (ctx->pc == 0x2AD268u) {
        ctx->pc = 0x2AD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD264u;
        // 0x2ad268: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD26Cu;
        goto label_2ad26c;
    }
    ctx->pc = 0x2AD264u;
    {
        const bool branch_taken_0x2ad264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD264u;
        // 0x2ad268: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad264) {
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2AD26Cu;
label_2ad26c:
    // 0x2ad26c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ad26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ad270:
    // 0x2ad270: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ad270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ad274:
    // 0x2ad274: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2ad274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ad278:
    // 0x2ad278: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2ad27c:
    if (ctx->pc == 0x2AD27Cu) {
        ctx->pc = 0x2AD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD278u;
        // 0x2ad27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD280u;
        goto label_2ad280;
    }
    ctx->pc = 0x2AD278u;
    {
        const bool branch_taken_0x2ad278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD278u;
        // 0x2ad27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad278) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD280u;
label_2ad280:
    // 0x2ad280: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2ad280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2ad284:
    // 0x2ad284: 0xc0ab240  jal         func_2AC900
label_2ad288:
    if (ctx->pc == 0x2AD288u) {
        ctx->pc = 0x2AD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD284u;
        // 0x2ad288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD28Cu;
        goto label_2ad28c;
    }
    ctx->pc = 0x2AD284u;
    SET_GPR_U32(ctx, 31, 0x2AD28Cu);
    ctx->pc = 0x2AD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD284u;
    // 0x2ad288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC900u, 0x2AD284u, 0x2AD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD28Cu;
label_2ad28c:
    // 0x2ad28c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ad290:
    if (ctx->pc == 0x2AD290u) {
        ctx->pc = 0x2AD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD28Cu;
        // 0x2ad290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD294u;
        goto label_2ad294;
    }
    ctx->pc = 0x2AD28Cu;
    {
        const bool branch_taken_0x2ad28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD28Cu;
        // 0x2ad290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad28c) {
            ctx->pc = 0x2AD298u;
            goto label_2ad298;
        }
    }
    ctx->pc = 0x2AD294u;
label_2ad294:
    // 0x2ad294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad298:
    // 0x2ad298: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ad298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ad29c:
    // 0x2ad29c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ad29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ad2a0:
    // 0x2ad2a0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2ad2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad2a4:
    // 0x2ad2a4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ad2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ad2a8:
    // 0x2ad2a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ad2a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ad2ac:
    // 0x2ad2ac: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2ad2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ad2b0:
    // 0x2ad2b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad2b4:
    // 0x2ad2b4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2ad2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ad2b8:
    // 0x2ad2b8: 0x3e00008  jr          $ra
label_2ad2bc:
    if (ctx->pc == 0x2AD2BCu) {
        ctx->pc = 0x2AD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2B8u;
        // 0x2ad2bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD2C0u;
        goto label_fallthrough_0x2ad2b8;
    }
    ctx->pc = 0x2AD2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2B8u;
        // 0x2ad2bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad2b8:
    ctx->pc = 0x2AD2C0u;
}
