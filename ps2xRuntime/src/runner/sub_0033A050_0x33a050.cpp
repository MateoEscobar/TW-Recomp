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

// Function: sub_0033A050
// Address: 0x33a050 - 0x33a640
void sub_0033A050_0x33a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A050_0x33a050");
#endif

    switch (ctx->pc) {
        case 0x33a050u: goto label_33a050;
        case 0x33a054u: goto label_33a054;
        case 0x33a058u: goto label_33a058;
        case 0x33a05cu: goto label_33a05c;
        case 0x33a060u: goto label_33a060;
        case 0x33a064u: goto label_33a064;
        case 0x33a068u: goto label_33a068;
        case 0x33a06cu: goto label_33a06c;
        case 0x33a070u: goto label_33a070;
        case 0x33a074u: goto label_33a074;
        case 0x33a078u: goto label_33a078;
        case 0x33a07cu: goto label_33a07c;
        case 0x33a080u: goto label_33a080;
        case 0x33a084u: goto label_33a084;
        case 0x33a088u: goto label_33a088;
        case 0x33a08cu: goto label_33a08c;
        case 0x33a090u: goto label_33a090;
        case 0x33a094u: goto label_33a094;
        case 0x33a098u: goto label_33a098;
        case 0x33a09cu: goto label_33a09c;
        case 0x33a0a0u: goto label_33a0a0;
        case 0x33a0a4u: goto label_33a0a4;
        case 0x33a0a8u: goto label_33a0a8;
        case 0x33a0acu: goto label_33a0ac;
        case 0x33a0b0u: goto label_33a0b0;
        case 0x33a0b4u: goto label_33a0b4;
        case 0x33a0b8u: goto label_33a0b8;
        case 0x33a0bcu: goto label_33a0bc;
        case 0x33a0c0u: goto label_33a0c0;
        case 0x33a0c4u: goto label_33a0c4;
        case 0x33a0c8u: goto label_33a0c8;
        case 0x33a0ccu: goto label_33a0cc;
        case 0x33a0d0u: goto label_33a0d0;
        case 0x33a0d4u: goto label_33a0d4;
        case 0x33a0d8u: goto label_33a0d8;
        case 0x33a0dcu: goto label_33a0dc;
        case 0x33a0e0u: goto label_33a0e0;
        case 0x33a0e4u: goto label_33a0e4;
        case 0x33a0e8u: goto label_33a0e8;
        case 0x33a0ecu: goto label_33a0ec;
        case 0x33a0f0u: goto label_33a0f0;
        case 0x33a0f4u: goto label_33a0f4;
        case 0x33a0f8u: goto label_33a0f8;
        case 0x33a0fcu: goto label_33a0fc;
        case 0x33a100u: goto label_33a100;
        case 0x33a104u: goto label_33a104;
        case 0x33a108u: goto label_33a108;
        case 0x33a10cu: goto label_33a10c;
        case 0x33a110u: goto label_33a110;
        case 0x33a114u: goto label_33a114;
        case 0x33a118u: goto label_33a118;
        case 0x33a11cu: goto label_33a11c;
        case 0x33a120u: goto label_33a120;
        case 0x33a124u: goto label_33a124;
        case 0x33a128u: goto label_33a128;
        case 0x33a12cu: goto label_33a12c;
        case 0x33a130u: goto label_33a130;
        case 0x33a134u: goto label_33a134;
        case 0x33a138u: goto label_33a138;
        case 0x33a13cu: goto label_33a13c;
        case 0x33a140u: goto label_33a140;
        case 0x33a144u: goto label_33a144;
        case 0x33a148u: goto label_33a148;
        case 0x33a14cu: goto label_33a14c;
        case 0x33a150u: goto label_33a150;
        case 0x33a154u: goto label_33a154;
        case 0x33a158u: goto label_33a158;
        case 0x33a15cu: goto label_33a15c;
        case 0x33a160u: goto label_33a160;
        case 0x33a164u: goto label_33a164;
        case 0x33a168u: goto label_33a168;
        case 0x33a16cu: goto label_33a16c;
        case 0x33a170u: goto label_33a170;
        case 0x33a174u: goto label_33a174;
        case 0x33a178u: goto label_33a178;
        case 0x33a17cu: goto label_33a17c;
        case 0x33a180u: goto label_33a180;
        case 0x33a184u: goto label_33a184;
        case 0x33a188u: goto label_33a188;
        case 0x33a18cu: goto label_33a18c;
        case 0x33a190u: goto label_33a190;
        case 0x33a194u: goto label_33a194;
        case 0x33a198u: goto label_33a198;
        case 0x33a19cu: goto label_33a19c;
        case 0x33a1a0u: goto label_33a1a0;
        case 0x33a1a4u: goto label_33a1a4;
        case 0x33a1a8u: goto label_33a1a8;
        case 0x33a1acu: goto label_33a1ac;
        case 0x33a1b0u: goto label_33a1b0;
        case 0x33a1b4u: goto label_33a1b4;
        case 0x33a1b8u: goto label_33a1b8;
        case 0x33a1bcu: goto label_33a1bc;
        case 0x33a1c0u: goto label_33a1c0;
        case 0x33a1c4u: goto label_33a1c4;
        case 0x33a1c8u: goto label_33a1c8;
        case 0x33a1ccu: goto label_33a1cc;
        case 0x33a1d0u: goto label_33a1d0;
        case 0x33a1d4u: goto label_33a1d4;
        case 0x33a1d8u: goto label_33a1d8;
        case 0x33a1dcu: goto label_33a1dc;
        case 0x33a1e0u: goto label_33a1e0;
        case 0x33a1e4u: goto label_33a1e4;
        case 0x33a1e8u: goto label_33a1e8;
        case 0x33a1ecu: goto label_33a1ec;
        case 0x33a1f0u: goto label_33a1f0;
        case 0x33a1f4u: goto label_33a1f4;
        case 0x33a1f8u: goto label_33a1f8;
        case 0x33a1fcu: goto label_33a1fc;
        case 0x33a200u: goto label_33a200;
        case 0x33a204u: goto label_33a204;
        case 0x33a208u: goto label_33a208;
        case 0x33a20cu: goto label_33a20c;
        case 0x33a210u: goto label_33a210;
        case 0x33a214u: goto label_33a214;
        case 0x33a218u: goto label_33a218;
        case 0x33a21cu: goto label_33a21c;
        case 0x33a220u: goto label_33a220;
        case 0x33a224u: goto label_33a224;
        case 0x33a228u: goto label_33a228;
        case 0x33a22cu: goto label_33a22c;
        case 0x33a230u: goto label_33a230;
        case 0x33a234u: goto label_33a234;
        case 0x33a238u: goto label_33a238;
        case 0x33a23cu: goto label_33a23c;
        case 0x33a240u: goto label_33a240;
        case 0x33a244u: goto label_33a244;
        case 0x33a248u: goto label_33a248;
        case 0x33a24cu: goto label_33a24c;
        case 0x33a250u: goto label_33a250;
        case 0x33a254u: goto label_33a254;
        case 0x33a258u: goto label_33a258;
        case 0x33a25cu: goto label_33a25c;
        case 0x33a260u: goto label_33a260;
        case 0x33a264u: goto label_33a264;
        case 0x33a268u: goto label_33a268;
        case 0x33a26cu: goto label_33a26c;
        case 0x33a270u: goto label_33a270;
        case 0x33a274u: goto label_33a274;
        case 0x33a278u: goto label_33a278;
        case 0x33a27cu: goto label_33a27c;
        case 0x33a280u: goto label_33a280;
        case 0x33a284u: goto label_33a284;
        case 0x33a288u: goto label_33a288;
        case 0x33a28cu: goto label_33a28c;
        case 0x33a290u: goto label_33a290;
        case 0x33a294u: goto label_33a294;
        case 0x33a298u: goto label_33a298;
        case 0x33a29cu: goto label_33a29c;
        case 0x33a2a0u: goto label_33a2a0;
        case 0x33a2a4u: goto label_33a2a4;
        case 0x33a2a8u: goto label_33a2a8;
        case 0x33a2acu: goto label_33a2ac;
        case 0x33a2b0u: goto label_33a2b0;
        case 0x33a2b4u: goto label_33a2b4;
        case 0x33a2b8u: goto label_33a2b8;
        case 0x33a2bcu: goto label_33a2bc;
        case 0x33a2c0u: goto label_33a2c0;
        case 0x33a2c4u: goto label_33a2c4;
        case 0x33a2c8u: goto label_33a2c8;
        case 0x33a2ccu: goto label_33a2cc;
        case 0x33a2d0u: goto label_33a2d0;
        case 0x33a2d4u: goto label_33a2d4;
        case 0x33a2d8u: goto label_33a2d8;
        case 0x33a2dcu: goto label_33a2dc;
        case 0x33a2e0u: goto label_33a2e0;
        case 0x33a2e4u: goto label_33a2e4;
        case 0x33a2e8u: goto label_33a2e8;
        case 0x33a2ecu: goto label_33a2ec;
        case 0x33a2f0u: goto label_33a2f0;
        case 0x33a2f4u: goto label_33a2f4;
        case 0x33a2f8u: goto label_33a2f8;
        case 0x33a2fcu: goto label_33a2fc;
        case 0x33a300u: goto label_33a300;
        case 0x33a304u: goto label_33a304;
        case 0x33a308u: goto label_33a308;
        case 0x33a30cu: goto label_33a30c;
        case 0x33a310u: goto label_33a310;
        case 0x33a314u: goto label_33a314;
        case 0x33a318u: goto label_33a318;
        case 0x33a31cu: goto label_33a31c;
        case 0x33a320u: goto label_33a320;
        case 0x33a324u: goto label_33a324;
        case 0x33a328u: goto label_33a328;
        case 0x33a32cu: goto label_33a32c;
        case 0x33a330u: goto label_33a330;
        case 0x33a334u: goto label_33a334;
        case 0x33a338u: goto label_33a338;
        case 0x33a33cu: goto label_33a33c;
        case 0x33a340u: goto label_33a340;
        case 0x33a344u: goto label_33a344;
        case 0x33a348u: goto label_33a348;
        case 0x33a34cu: goto label_33a34c;
        case 0x33a350u: goto label_33a350;
        case 0x33a354u: goto label_33a354;
        case 0x33a358u: goto label_33a358;
        case 0x33a35cu: goto label_33a35c;
        case 0x33a360u: goto label_33a360;
        case 0x33a364u: goto label_33a364;
        case 0x33a368u: goto label_33a368;
        case 0x33a36cu: goto label_33a36c;
        case 0x33a370u: goto label_33a370;
        case 0x33a374u: goto label_33a374;
        case 0x33a378u: goto label_33a378;
        case 0x33a37cu: goto label_33a37c;
        case 0x33a380u: goto label_33a380;
        case 0x33a384u: goto label_33a384;
        case 0x33a388u: goto label_33a388;
        case 0x33a38cu: goto label_33a38c;
        case 0x33a390u: goto label_33a390;
        case 0x33a394u: goto label_33a394;
        case 0x33a398u: goto label_33a398;
        case 0x33a39cu: goto label_33a39c;
        case 0x33a3a0u: goto label_33a3a0;
        case 0x33a3a4u: goto label_33a3a4;
        case 0x33a3a8u: goto label_33a3a8;
        case 0x33a3acu: goto label_33a3ac;
        case 0x33a3b0u: goto label_33a3b0;
        case 0x33a3b4u: goto label_33a3b4;
        case 0x33a3b8u: goto label_33a3b8;
        case 0x33a3bcu: goto label_33a3bc;
        case 0x33a3c0u: goto label_33a3c0;
        case 0x33a3c4u: goto label_33a3c4;
        case 0x33a3c8u: goto label_33a3c8;
        case 0x33a3ccu: goto label_33a3cc;
        case 0x33a3d0u: goto label_33a3d0;
        case 0x33a3d4u: goto label_33a3d4;
        case 0x33a3d8u: goto label_33a3d8;
        case 0x33a3dcu: goto label_33a3dc;
        case 0x33a3e0u: goto label_33a3e0;
        case 0x33a3e4u: goto label_33a3e4;
        case 0x33a3e8u: goto label_33a3e8;
        case 0x33a3ecu: goto label_33a3ec;
        case 0x33a3f0u: goto label_33a3f0;
        case 0x33a3f4u: goto label_33a3f4;
        case 0x33a3f8u: goto label_33a3f8;
        case 0x33a3fcu: goto label_33a3fc;
        case 0x33a400u: goto label_33a400;
        case 0x33a404u: goto label_33a404;
        case 0x33a408u: goto label_33a408;
        case 0x33a40cu: goto label_33a40c;
        case 0x33a410u: goto label_33a410;
        case 0x33a414u: goto label_33a414;
        case 0x33a418u: goto label_33a418;
        case 0x33a41cu: goto label_33a41c;
        case 0x33a420u: goto label_33a420;
        case 0x33a424u: goto label_33a424;
        case 0x33a428u: goto label_33a428;
        case 0x33a42cu: goto label_33a42c;
        case 0x33a430u: goto label_33a430;
        case 0x33a434u: goto label_33a434;
        case 0x33a438u: goto label_33a438;
        case 0x33a43cu: goto label_33a43c;
        case 0x33a440u: goto label_33a440;
        case 0x33a444u: goto label_33a444;
        case 0x33a448u: goto label_33a448;
        case 0x33a44cu: goto label_33a44c;
        case 0x33a450u: goto label_33a450;
        case 0x33a454u: goto label_33a454;
        case 0x33a458u: goto label_33a458;
        case 0x33a45cu: goto label_33a45c;
        case 0x33a460u: goto label_33a460;
        case 0x33a464u: goto label_33a464;
        case 0x33a468u: goto label_33a468;
        case 0x33a46cu: goto label_33a46c;
        case 0x33a470u: goto label_33a470;
        case 0x33a474u: goto label_33a474;
        case 0x33a478u: goto label_33a478;
        case 0x33a47cu: goto label_33a47c;
        case 0x33a480u: goto label_33a480;
        case 0x33a484u: goto label_33a484;
        case 0x33a488u: goto label_33a488;
        case 0x33a48cu: goto label_33a48c;
        case 0x33a490u: goto label_33a490;
        case 0x33a494u: goto label_33a494;
        case 0x33a498u: goto label_33a498;
        case 0x33a49cu: goto label_33a49c;
        case 0x33a4a0u: goto label_33a4a0;
        case 0x33a4a4u: goto label_33a4a4;
        case 0x33a4a8u: goto label_33a4a8;
        case 0x33a4acu: goto label_33a4ac;
        case 0x33a4b0u: goto label_33a4b0;
        case 0x33a4b4u: goto label_33a4b4;
        case 0x33a4b8u: goto label_33a4b8;
        case 0x33a4bcu: goto label_33a4bc;
        case 0x33a4c0u: goto label_33a4c0;
        case 0x33a4c4u: goto label_33a4c4;
        case 0x33a4c8u: goto label_33a4c8;
        case 0x33a4ccu: goto label_33a4cc;
        case 0x33a4d0u: goto label_33a4d0;
        case 0x33a4d4u: goto label_33a4d4;
        case 0x33a4d8u: goto label_33a4d8;
        case 0x33a4dcu: goto label_33a4dc;
        case 0x33a4e0u: goto label_33a4e0;
        case 0x33a4e4u: goto label_33a4e4;
        case 0x33a4e8u: goto label_33a4e8;
        case 0x33a4ecu: goto label_33a4ec;
        case 0x33a4f0u: goto label_33a4f0;
        case 0x33a4f4u: goto label_33a4f4;
        case 0x33a4f8u: goto label_33a4f8;
        case 0x33a4fcu: goto label_33a4fc;
        case 0x33a500u: goto label_33a500;
        case 0x33a504u: goto label_33a504;
        case 0x33a508u: goto label_33a508;
        case 0x33a50cu: goto label_33a50c;
        case 0x33a510u: goto label_33a510;
        case 0x33a514u: goto label_33a514;
        case 0x33a518u: goto label_33a518;
        case 0x33a51cu: goto label_33a51c;
        case 0x33a520u: goto label_33a520;
        case 0x33a524u: goto label_33a524;
        case 0x33a528u: goto label_33a528;
        case 0x33a52cu: goto label_33a52c;
        case 0x33a530u: goto label_33a530;
        case 0x33a534u: goto label_33a534;
        case 0x33a538u: goto label_33a538;
        case 0x33a53cu: goto label_33a53c;
        case 0x33a540u: goto label_33a540;
        case 0x33a544u: goto label_33a544;
        case 0x33a548u: goto label_33a548;
        case 0x33a54cu: goto label_33a54c;
        case 0x33a550u: goto label_33a550;
        case 0x33a554u: goto label_33a554;
        case 0x33a558u: goto label_33a558;
        case 0x33a55cu: goto label_33a55c;
        case 0x33a560u: goto label_33a560;
        case 0x33a564u: goto label_33a564;
        case 0x33a568u: goto label_33a568;
        case 0x33a56cu: goto label_33a56c;
        case 0x33a570u: goto label_33a570;
        case 0x33a574u: goto label_33a574;
        case 0x33a578u: goto label_33a578;
        case 0x33a57cu: goto label_33a57c;
        case 0x33a580u: goto label_33a580;
        case 0x33a584u: goto label_33a584;
        case 0x33a588u: goto label_33a588;
        case 0x33a58cu: goto label_33a58c;
        case 0x33a590u: goto label_33a590;
        case 0x33a594u: goto label_33a594;
        case 0x33a598u: goto label_33a598;
        case 0x33a59cu: goto label_33a59c;
        case 0x33a5a0u: goto label_33a5a0;
        case 0x33a5a4u: goto label_33a5a4;
        case 0x33a5a8u: goto label_33a5a8;
        case 0x33a5acu: goto label_33a5ac;
        case 0x33a5b0u: goto label_33a5b0;
        case 0x33a5b4u: goto label_33a5b4;
        case 0x33a5b8u: goto label_33a5b8;
        case 0x33a5bcu: goto label_33a5bc;
        case 0x33a5c0u: goto label_33a5c0;
        case 0x33a5c4u: goto label_33a5c4;
        case 0x33a5c8u: goto label_33a5c8;
        case 0x33a5ccu: goto label_33a5cc;
        case 0x33a5d0u: goto label_33a5d0;
        case 0x33a5d4u: goto label_33a5d4;
        case 0x33a5d8u: goto label_33a5d8;
        case 0x33a5dcu: goto label_33a5dc;
        case 0x33a5e0u: goto label_33a5e0;
        case 0x33a5e4u: goto label_33a5e4;
        case 0x33a5e8u: goto label_33a5e8;
        case 0x33a5ecu: goto label_33a5ec;
        case 0x33a5f0u: goto label_33a5f0;
        case 0x33a5f4u: goto label_33a5f4;
        case 0x33a5f8u: goto label_33a5f8;
        case 0x33a5fcu: goto label_33a5fc;
        case 0x33a600u: goto label_33a600;
        case 0x33a604u: goto label_33a604;
        case 0x33a608u: goto label_33a608;
        case 0x33a60cu: goto label_33a60c;
        case 0x33a610u: goto label_33a610;
        case 0x33a614u: goto label_33a614;
        case 0x33a618u: goto label_33a618;
        case 0x33a61cu: goto label_33a61c;
        case 0x33a620u: goto label_33a620;
        case 0x33a624u: goto label_33a624;
        case 0x33a628u: goto label_33a628;
        case 0x33a62cu: goto label_33a62c;
        case 0x33a630u: goto label_33a630;
        case 0x33a634u: goto label_33a634;
        case 0x33a638u: goto label_33a638;
        case 0x33a63cu: goto label_33a63c;
        default: break;
    }

    ctx->pc = 0x33a050u;

label_33a050:
    // 0x33a050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x33a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_33a054:
    // 0x33a054: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x33a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_33a058:
    // 0x33a058: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33a05c:
    // 0x33a05c: 0x24900048  addiu       $s0, $a0, 0x48
    ctx->pc = 0x33a05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_33a060:
    // 0x33a060: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x33a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_33a064:
    // 0x33a064: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x33a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_33a068:
    // 0x33a068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33a068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a06c:
    // 0x33a06c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x33a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_33a070:
    // 0x33a070: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x33a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_33a074:
    // 0x33a074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_33a078:
    // 0x33a078: 0xc13c372  jal         func_4F0DC8
label_33a07c:
    if (ctx->pc == 0x33A07Cu) {
        ctx->pc = 0x33A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A078u;
        // 0x33a07c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A080u;
        goto label_33a080;
    }
    ctx->pc = 0x33A078u;
    SET_GPR_U32(ctx, 31, 0x33A080u);
    ctx->pc = 0x33A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A078u;
    // 0x33a07c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0DC8u, 0x33A078u, 0x33A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A080u;
label_33a080:
    // 0x33a080: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a084:
    // 0x33a084: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33a084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33a088:
    // 0x33a088: 0x10c20164  beq         $a2, $v0, . + 4 + (0x164 << 2)
label_33a08c:
    if (ctx->pc == 0x33A08Cu) {
        ctx->pc = 0x33A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A088u;
        // 0x33a08c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A090u;
        goto label_33a090;
    }
    ctx->pc = 0x33A088u;
    {
        const bool branch_taken_0x33a088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A088u;
        // 0x33a08c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a088) {
            ctx->pc = 0x33A61Cu;
            goto label_33a61c;
        }
    }
    ctx->pc = 0x33A090u;
label_33a090:
    // 0x33a090: 0x8cd10014  lw          $s1, 0x14($a2)
    ctx->pc = 0x33a090u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_33a094:
    // 0x33a094: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a098:
    // 0x33a098: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x33a098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_33a09c:
    // 0x33a09c: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x33a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_33a0a0:
    // 0x33a0a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a0a4:
    // 0x33a0a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x33a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33a0a8:
    // 0x33a0a8: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x33a0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_33a0ac:
    // 0x33a0ac: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x33a0acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_33a0b0:
    // 0x33a0b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_33a0b4:
    if (ctx->pc == 0x33A0B4u) {
        ctx->pc = 0x33A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0B0u;
        // 0x33a0b4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0B8u;
        goto label_33a0b8;
    }
    ctx->pc = 0x33A0B0u;
    {
        const bool branch_taken_0x33a0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0B0u;
        // 0x33a0b4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0b0) {
            ctx->pc = 0x33A0C0u;
            goto label_33a0c0;
        }
    }
    ctx->pc = 0x33A0B8u;
label_33a0b8:
    // 0x33a0b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a0bc:
    if (ctx->pc == 0x33A0BCu) {
        ctx->pc = 0x33A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0B8u;
        // 0x33a0bc: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0C0u;
        goto label_33a0c0;
    }
    ctx->pc = 0x33A0B8u;
    {
        const bool branch_taken_0x33a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0B8u;
        // 0x33a0bc: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0b8) {
            ctx->pc = 0x33A0D0u;
            goto label_33a0d0;
        }
    }
    ctx->pc = 0x33A0C0u;
label_33a0c0:
    // 0x33a0c0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x33a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_33a0c4:
    // 0x33a0c4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_33a0c8:
    if (ctx->pc == 0x33A0C8u) {
        ctx->pc = 0x33A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0C4u;
        // 0x33a0c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0CCu;
        goto label_33a0cc;
    }
    ctx->pc = 0x33A0C4u;
    {
        const bool branch_taken_0x33a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a0c4) {
            ctx->pc = 0x33A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A0C4u;
            // 0x33a0c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A0DCu;
            goto label_33a0dc;
        }
    }
    ctx->pc = 0x33A0CCu;
label_33a0cc:
    // 0x33a0cc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x33a0ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33a0d0:
    // 0x33a0d0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x33a0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_33a0d4:
    // 0x33a0d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_33a0d8:
    if (ctx->pc == 0x33A0D8u) {
        ctx->pc = 0x33A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0D4u;
        // 0x33a0d8: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0DCu;
        goto label_33a0dc;
    }
    ctx->pc = 0x33A0D4u;
    {
        const bool branch_taken_0x33a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0D4u;
        // 0x33a0d8: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0d4) {
            ctx->pc = 0x33A10Cu;
            goto label_33a10c;
        }
    }
    ctx->pc = 0x33A0DCu;
label_33a0dc:
    // 0x33a0dc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x33a0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_33a0e0:
    // 0x33a0e0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x33a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33a0e4:
    // 0x33a0e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33a0e8:
    if (ctx->pc == 0x33A0E8u) {
        ctx->pc = 0x33A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0E4u;
        // 0x33a0e8: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0ECu;
        goto label_33a0ec;
    }
    ctx->pc = 0x33A0E4u;
    {
        const bool branch_taken_0x33a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0E4u;
        // 0x33a0e8: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0e4) {
            ctx->pc = 0x33A108u;
            goto label_33a108;
        }
    }
    ctx->pc = 0x33A0ECu;
label_33a0ec:
    // 0x33a0ec: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x33a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33a0f0:
    // 0x33a0f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x33a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33a0f4:
    // 0x33a0f4: 0x0  nop
    ctx->pc = 0x33a0f4u;
    // NOP
label_33a0f8:
    // 0x33a0f8: 0x0  nop
    ctx->pc = 0x33a0f8u;
    // NOP
label_33a0fc:
    // 0x33a0fc: 0x0  nop
    ctx->pc = 0x33a0fcu;
    // NOP
label_33a100:
    // 0x33a100: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33a104:
    if (ctx->pc == 0x33A104u) {
        ctx->pc = 0x33A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A100u;
        // 0x33a104: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A108u;
        goto label_33a108;
    }
    ctx->pc = 0x33A100u;
    {
        const bool branch_taken_0x33a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a100) {
            ctx->pc = 0x33A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A100u;
            // 0x33a104: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a0f0;
        }
    }
    ctx->pc = 0x33A108u;
label_33a108:
    // 0x33a108: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x33a108u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_33a10c:
    // 0x33a10c: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_33a110:
    if (ctx->pc == 0x33A110u) {
        ctx->pc = 0x33A114u;
        goto label_33a114;
    }
    ctx->pc = 0x33A10Cu;
    {
        const bool branch_taken_0x33a10c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x33a10c) {
            ctx->pc = 0x33A198u;
            goto label_33a198;
        }
    }
    ctx->pc = 0x33A114u;
label_33a114:
    // 0x33a114: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x33a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33a118:
    // 0x33a118: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33a118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_33a11c:
    // 0x33a11c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x33a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33a120:
    // 0x33a120: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33a120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_33a124:
    // 0x33a124: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33a128:
    // 0x33a128: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_33a12c:
    if (ctx->pc == 0x33A12Cu) {
        ctx->pc = 0x33A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A128u;
        // 0x33a12c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A130u;
        goto label_33a130;
    }
    ctx->pc = 0x33A128u;
    {
        const bool branch_taken_0x33a128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A128u;
        // 0x33a12c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a128) {
            ctx->pc = 0x33A154u;
            goto label_33a154;
        }
    }
    ctx->pc = 0x33A130u;
label_33a130:
    // 0x33a130: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_33a134:
    if (ctx->pc == 0x33A134u) {
        ctx->pc = 0x33A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A130u;
        // 0x33a134: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A138u;
        goto label_33a138;
    }
    ctx->pc = 0x33A130u;
    {
        const bool branch_taken_0x33a130 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A130u;
        // 0x33a134: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a130) {
            ctx->pc = 0x33A13Cu;
            goto label_33a13c;
        }
    }
    ctx->pc = 0x33A138u;
label_33a138:
    // 0x33a138: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x33a138u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_33a13c:
    // 0x33a13c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33a140:
    // 0x33a140: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x33a140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_33a144:
    // 0x33a144: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x33a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33a148:
    // 0x33a148: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x33a148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_33a14c:
    // 0x33a14c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33a150:
    // 0x33a150: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33a150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_33a154:
    // 0x33a154: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a158:
    // 0x33a158: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_33a15c:
    if (ctx->pc == 0x33A15Cu) {
        ctx->pc = 0x33A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A158u;
        // 0x33a15c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A160u;
        goto label_33a160;
    }
    ctx->pc = 0x33A158u;
    {
        const bool branch_taken_0x33a158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x33a158) {
            ctx->pc = 0x33A15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A158u;
            // 0x33a15c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A168u;
            goto label_33a168;
        }
    }
    ctx->pc = 0x33A160u;
label_33a160:
    // 0x33a160: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a164:
    if (ctx->pc == 0x33A164u) {
        ctx->pc = 0x33A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A160u;
        // 0x33a164: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A168u;
        goto label_33a168;
    }
    ctx->pc = 0x33A160u;
    {
        const bool branch_taken_0x33a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A160u;
        // 0x33a164: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a160) {
            ctx->pc = 0x33A178u;
            goto label_33a178;
        }
    }
    ctx->pc = 0x33A168u;
label_33a168:
    // 0x33a168: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a16c:
    // 0x33a16c: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_33a170:
    if (ctx->pc == 0x33A170u) {
        ctx->pc = 0x33A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A16Cu;
        // 0x33a170: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A174u;
        goto label_33a174;
    }
    ctx->pc = 0x33A16Cu;
    {
        const bool branch_taken_0x33a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x33a16c) {
            ctx->pc = 0x33A170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A16Cu;
            // 0x33a170: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A178u;
            goto label_33a178;
        }
    }
    ctx->pc = 0x33A174u;
label_33a174:
    // 0x33a174: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x33a174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_33a178:
    // 0x33a178: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33a17c:
    // 0x33a17c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x33a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33a180:
    // 0x33a180: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x33a180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_33a184:
    // 0x33a184: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33a188:
    // 0x33a188: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33a188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_33a18c:
    // 0x33a18c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x33a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_33a190:
    // 0x33a190: 0x10000034  b           . + 4 + (0x34 << 2)
label_33a194:
    if (ctx->pc == 0x33A194u) {
        ctx->pc = 0x33A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A190u;
        // 0x33a194: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A198u;
        goto label_33a198;
    }
    ctx->pc = 0x33A190u;
    {
        const bool branch_taken_0x33a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A190u;
        // 0x33a194: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a190) {
            ctx->pc = 0x33A264u;
            goto label_33a264;
        }
    }
    ctx->pc = 0x33A198u;
label_33a198:
    // 0x33a198: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_33a19c:
    if (ctx->pc == 0x33A19Cu) {
        ctx->pc = 0x33A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A198u;
        // 0x33a19c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1A0u;
        goto label_33a1a0;
    }
    ctx->pc = 0x33A198u;
    {
        const bool branch_taken_0x33a198 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A198u;
        // 0x33a19c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a198) {
            ctx->pc = 0x33A1A4u;
            goto label_33a1a4;
        }
    }
    ctx->pc = 0x33A1A0u;
label_33a1a0:
    // 0x33a1a0: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x33a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_33a1a4:
    // 0x33a1a4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a1a8:
    // 0x33a1a8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_33a1ac:
    if (ctx->pc == 0x33A1ACu) {
        ctx->pc = 0x33A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1A8u;
        // 0x33a1ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1B0u;
        goto label_33a1b0;
    }
    ctx->pc = 0x33A1A8u;
    {
        const bool branch_taken_0x33a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x33a1a8) {
            ctx->pc = 0x33A1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A1A8u;
            // 0x33a1ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A1B8u;
            goto label_33a1b8;
        }
    }
    ctx->pc = 0x33A1B0u;
label_33a1b0:
    // 0x33a1b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a1b4:
    if (ctx->pc == 0x33A1B4u) {
        ctx->pc = 0x33A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1B0u;
        // 0x33a1b4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1B8u;
        goto label_33a1b8;
    }
    ctx->pc = 0x33A1B0u;
    {
        const bool branch_taken_0x33a1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1B0u;
        // 0x33a1b4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1b0) {
            ctx->pc = 0x33A1C8u;
            goto label_33a1c8;
        }
    }
    ctx->pc = 0x33A1B8u;
label_33a1b8:
    // 0x33a1b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a1bc:
    // 0x33a1bc: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_33a1c0:
    if (ctx->pc == 0x33A1C0u) {
        ctx->pc = 0x33A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1BCu;
        // 0x33a1c0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1C4u;
        goto label_33a1c4;
    }
    ctx->pc = 0x33A1BCu;
    {
        const bool branch_taken_0x33a1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x33a1bc) {
            ctx->pc = 0x33A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A1BCu;
            // 0x33a1c0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A1C8u;
            goto label_33a1c8;
        }
    }
    ctx->pc = 0x33A1C4u;
label_33a1c4:
    // 0x33a1c4: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x33a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_33a1c8:
    // 0x33a1c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33a1cc:
    // 0x33a1cc: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_33a1d0:
    if (ctx->pc == 0x33A1D0u) {
        ctx->pc = 0x33A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1CCu;
        // 0x33a1d0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1D4u;
        goto label_33a1d4;
    }
    ctx->pc = 0x33A1CCu;
    {
        const bool branch_taken_0x33a1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x33a1cc) {
            ctx->pc = 0x33A1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A1CCu;
            // 0x33a1d0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A218u;
            goto label_33a218;
        }
    }
    ctx->pc = 0x33A1D4u;
label_33a1d4:
    // 0x33a1d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33a1d8:
    // 0x33a1d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_33a1dc:
    if (ctx->pc == 0x33A1DCu) {
        ctx->pc = 0x33A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1D8u;
        // 0x33a1dc: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1E0u;
        goto label_33a1e0;
    }
    ctx->pc = 0x33A1D8u;
    {
        const bool branch_taken_0x33a1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a1d8) {
            ctx->pc = 0x33A1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A1D8u;
            // 0x33a1dc: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A1ECu;
            goto label_33a1ec;
        }
    }
    ctx->pc = 0x33A1E0u;
label_33a1e0:
    // 0x33a1e0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33a1e4:
    // 0x33a1e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_33a1e8:
    if (ctx->pc == 0x33A1E8u) {
        ctx->pc = 0x33A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1E4u;
        // 0x33a1e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1ECu;
        goto label_33a1ec;
    }
    ctx->pc = 0x33A1E4u;
    {
        const bool branch_taken_0x33a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1E4u;
        // 0x33a1e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1e4) {
            ctx->pc = 0x33A214u;
            goto label_33a214;
        }
    }
    ctx->pc = 0x33A1ECu;
label_33a1ec:
    // 0x33a1ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33a1f0:
    if (ctx->pc == 0x33A1F0u) {
        ctx->pc = 0x33A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1ECu;
        // 0x33a1f0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1F4u;
        goto label_33a1f4;
    }
    ctx->pc = 0x33A1ECu;
    {
        const bool branch_taken_0x33a1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1ECu;
        // 0x33a1f0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1ec) {
            ctx->pc = 0x33A210u;
            goto label_33a210;
        }
    }
    ctx->pc = 0x33A1F4u;
label_33a1f4:
    // 0x33a1f4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x33a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a1f8:
    // 0x33a1f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a1fc:
    // 0x33a1fc: 0x0  nop
    ctx->pc = 0x33a1fcu;
    // NOP
label_33a200:
    // 0x33a200: 0x0  nop
    ctx->pc = 0x33a200u;
    // NOP
label_33a204:
    // 0x33a204: 0x0  nop
    ctx->pc = 0x33a204u;
    // NOP
label_33a208:
    // 0x33a208: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33a20c:
    if (ctx->pc == 0x33A20Cu) {
        ctx->pc = 0x33A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A208u;
        // 0x33a20c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A210u;
        goto label_33a210;
    }
    ctx->pc = 0x33A208u;
    {
        const bool branch_taken_0x33a208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a208) {
            ctx->pc = 0x33A20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A208u;
            // 0x33a20c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a1f8;
        }
    }
    ctx->pc = 0x33A210u;
label_33a210:
    // 0x33a210: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33a210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_33a214:
    // 0x33a214: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x33a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33a218:
    // 0x33a218: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_33a21c:
    if (ctx->pc == 0x33A21Cu) {
        ctx->pc = 0x33A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A218u;
        // 0x33a21c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A220u;
        goto label_33a220;
    }
    ctx->pc = 0x33A218u;
    {
        const bool branch_taken_0x33a218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x33a218) {
            ctx->pc = 0x33A21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A218u;
            // 0x33a21c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A268u;
            goto label_33a268;
        }
    }
    ctx->pc = 0x33A220u;
label_33a220:
    // 0x33a220: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x33a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33a224:
    // 0x33a224: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_33a228:
    if (ctx->pc == 0x33A228u) {
        ctx->pc = 0x33A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A224u;
        // 0x33a228: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A22Cu;
        goto label_33a22c;
    }
    ctx->pc = 0x33A224u;
    {
        const bool branch_taken_0x33a224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a224) {
            ctx->pc = 0x33A228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A224u;
            // 0x33a228: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A238u;
            goto label_33a238;
        }
    }
    ctx->pc = 0x33A22Cu;
label_33a22c:
    // 0x33a22c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33a230:
    // 0x33a230: 0x1000000c  b           . + 4 + (0xC << 2)
label_33a234:
    if (ctx->pc == 0x33A234u) {
        ctx->pc = 0x33A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A230u;
        // 0x33a234: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A238u;
        goto label_33a238;
    }
    ctx->pc = 0x33A230u;
    {
        const bool branch_taken_0x33a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A230u;
        // 0x33a234: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a230) {
            ctx->pc = 0x33A264u;
            goto label_33a264;
        }
    }
    ctx->pc = 0x33A238u;
label_33a238:
    // 0x33a238: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_33a23c:
    if (ctx->pc == 0x33A23Cu) {
        ctx->pc = 0x33A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A238u;
        // 0x33a23c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A240u;
        goto label_33a240;
    }
    ctx->pc = 0x33A238u;
    {
        const bool branch_taken_0x33a238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A238u;
        // 0x33a23c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a238) {
            ctx->pc = 0x33A260u;
            goto label_33a260;
        }
    }
    ctx->pc = 0x33A240u;
label_33a240:
    // 0x33a240: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33a240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33a244:
    // 0x33a244: 0x0  nop
    ctx->pc = 0x33a244u;
    // NOP
label_33a248:
    // 0x33a248: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33a24c:
    // 0x33a24c: 0x0  nop
    ctx->pc = 0x33a24cu;
    // NOP
label_33a250:
    // 0x33a250: 0x0  nop
    ctx->pc = 0x33a250u;
    // NOP
label_33a254:
    // 0x33a254: 0x0  nop
    ctx->pc = 0x33a254u;
    // NOP
label_33a258:
    // 0x33a258: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33a25c:
    if (ctx->pc == 0x33A25Cu) {
        ctx->pc = 0x33A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A258u;
        // 0x33a25c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A260u;
        goto label_33a260;
    }
    ctx->pc = 0x33A258u;
    {
        const bool branch_taken_0x33a258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a258) {
            ctx->pc = 0x33A25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A258u;
            // 0x33a25c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a248;
        }
    }
    ctx->pc = 0x33A260u;
label_33a260:
    // 0x33a260: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x33a260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_33a264:
    // 0x33a264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33a268:
    // 0x33a268: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_33a26c:
    if (ctx->pc == 0x33A26Cu) {
        ctx->pc = 0x33A270u;
        goto label_33a270;
    }
    ctx->pc = 0x33A268u;
    {
        const bool branch_taken_0x33a268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a268) {
            ctx->pc = 0x33A5B4u;
            goto label_33a5b4;
        }
    }
    ctx->pc = 0x33A270u;
label_33a270:
    // 0x33a270: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_33a274:
    if (ctx->pc == 0x33A274u) {
        ctx->pc = 0x33A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A270u;
        // 0x33a274: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A278u;
        goto label_33a278;
    }
    ctx->pc = 0x33A270u;
    {
        const bool branch_taken_0x33a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A270u;
        // 0x33a274: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a270) {
            ctx->pc = 0x33A588u;
            goto label_33a588;
        }
    }
    ctx->pc = 0x33A278u;
label_33a278:
    // 0x33a278: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_33a27c:
    if (ctx->pc == 0x33A27Cu) {
        ctx->pc = 0x33A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A278u;
        // 0x33a27c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A280u;
        goto label_33a280;
    }
    ctx->pc = 0x33A278u;
    {
        const bool branch_taken_0x33a278 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A278u;
        // 0x33a27c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a278) {
            ctx->pc = 0x33A3FCu;
            goto label_33a3fc;
        }
    }
    ctx->pc = 0x33A280u;
label_33a280:
    // 0x33a280: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x33a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33a284:
    // 0x33a284: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33a288:
    // 0x33a288: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_33a28c:
    if (ctx->pc == 0x33A28Cu) {
        ctx->pc = 0x33A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A288u;
        // 0x33a28c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A290u;
        goto label_33a290;
    }
    ctx->pc = 0x33A288u;
    {
        const bool branch_taken_0x33a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a288) {
            ctx->pc = 0x33A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A288u;
            // 0x33a28c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A2F0u;
            goto label_33a2f0;
        }
    }
    ctx->pc = 0x33A290u;
label_33a290:
    // 0x33a290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a294:
    // 0x33a294: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33a294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33a298:
    // 0x33a298: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x33a298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_33a29c:
    // 0x33a29c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x33a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33a2a0:
    // 0x33a2a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a2a4:
    // 0x33a2a4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x33a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_33a2a8:
    // 0x33a2a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a2ac:
    // 0x33a2ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a2b0:
    if (ctx->pc == 0x33A2B0u) {
        ctx->pc = 0x33A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2ACu;
        // 0x33a2b0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2B4u;
        goto label_33a2b4;
    }
    ctx->pc = 0x33A2ACu;
    {
        const bool branch_taken_0x33a2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a2ac) {
            ctx->pc = 0x33A2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A2ACu;
            // 0x33a2b0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A2B4u;
            goto label_33a2b4;
        }
    }
    ctx->pc = 0x33A2B4u;
label_33a2b4:
    // 0x33a2b4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33a2b8:
    // 0x33a2b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33a2bc:
    // 0x33a2bc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x33a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a2c0:
    // 0x33a2c0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_33a2c4:
    if (ctx->pc == 0x33A2C4u) {
        ctx->pc = 0x33A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2C0u;
        // 0x33a2c4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2C8u;
        goto label_33a2c8;
    }
    ctx->pc = 0x33A2C0u;
    {
        const bool branch_taken_0x33a2c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a2c0) {
            ctx->pc = 0x33A2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A2C0u;
            // 0x33a2c4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A2D0u;
            goto label_33a2d0;
        }
    }
    ctx->pc = 0x33A2C8u;
label_33a2c8:
    // 0x33a2c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a2cc:
    if (ctx->pc == 0x33A2CCu) {
        ctx->pc = 0x33A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2C8u;
        // 0x33a2cc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2D0u;
        goto label_33a2d0;
    }
    ctx->pc = 0x33A2C8u;
    {
        const bool branch_taken_0x33a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2C8u;
        // 0x33a2cc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a2c8) {
            ctx->pc = 0x33A2E0u;
            goto label_33a2e0;
        }
    }
    ctx->pc = 0x33A2D0u;
label_33a2d0:
    // 0x33a2d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a2d4:
    // 0x33a2d4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_33a2d8:
    if (ctx->pc == 0x33A2D8u) {
        ctx->pc = 0x33A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2D4u;
        // 0x33a2d8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2DCu;
        goto label_33a2dc;
    }
    ctx->pc = 0x33A2D4u;
    {
        const bool branch_taken_0x33a2d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a2d4) {
            ctx->pc = 0x33A2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A2D4u;
            // 0x33a2d8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A2E0u;
            goto label_33a2e0;
        }
    }
    ctx->pc = 0x33A2DCu;
label_33a2dc:
    // 0x33a2dc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x33a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_33a2e0:
    // 0x33a2e0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x33a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_33a2e4:
    // 0x33a2e4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x33a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_33a2e8:
    // 0x33a2e8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x33a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33a2ec:
    // 0x33a2ec: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x33a2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a2f0:
    // 0x33a2f0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_33a2f4:
    if (ctx->pc == 0x33A2F4u) {
        ctx->pc = 0x33A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2F0u;
        // 0x33a2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2F8u;
        goto label_33a2f8;
    }
    ctx->pc = 0x33A2F0u;
    {
        const bool branch_taken_0x33a2f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2F0u;
        // 0x33a2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a2f0) {
            ctx->pc = 0x33A304u;
            goto label_33a304;
        }
    }
    ctx->pc = 0x33A2F8u;
label_33a2f8:
    // 0x33a2f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x33a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33a2fc:
    // 0x33a2fc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_33a300:
    if (ctx->pc == 0x33A300u) {
        ctx->pc = 0x33A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2FCu;
        // 0x33a300: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A304u;
        goto label_33a304;
    }
    ctx->pc = 0x33A2FCu;
    {
        const bool branch_taken_0x33a2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2FCu;
        // 0x33a300: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a2fc) {
            ctx->pc = 0x33A31Cu;
            goto label_33a31c;
        }
    }
    ctx->pc = 0x33A304u;
label_33a304:
    // 0x33a304: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x33a304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a308:
    // 0x33a308: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_33a30c:
    if (ctx->pc == 0x33A30Cu) {
        ctx->pc = 0x33A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A308u;
        // 0x33a30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A310u;
        goto label_33a310;
    }
    ctx->pc = 0x33A308u;
    {
        const bool branch_taken_0x33a308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A308u;
        // 0x33a30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a308) {
            ctx->pc = 0x33A494u;
            goto label_33a494;
        }
    }
    ctx->pc = 0x33A310u;
label_33a310:
    // 0x33a310: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33a314:
    // 0x33a314: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_33a318:
    if (ctx->pc == 0x33A318u) {
        ctx->pc = 0x33A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A314u;
        // 0x33a318: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A31Cu;
        goto label_33a31c;
    }
    ctx->pc = 0x33A314u;
    {
        const bool branch_taken_0x33a314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a314) {
            ctx->pc = 0x33A318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A314u;
            // 0x33a318: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A498u;
            goto label_33a498;
        }
    }
    ctx->pc = 0x33A31Cu;
label_33a31c:
    // 0x33a31c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_33a320:
    if (ctx->pc == 0x33A320u) {
        ctx->pc = 0x33A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A31Cu;
        // 0x33a320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A324u;
        goto label_33a324;
    }
    ctx->pc = 0x33A31Cu;
    {
        const bool branch_taken_0x33a31c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A31Cu;
        // 0x33a320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a31c) {
            ctx->pc = 0x33A330u;
            goto label_33a330;
        }
    }
    ctx->pc = 0x33A324u;
label_33a324:
    // 0x33a324: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33a328:
    // 0x33a328: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_33a32c:
    if (ctx->pc == 0x33A32Cu) {
        ctx->pc = 0x33A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A328u;
        // 0x33a32c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A330u;
        goto label_33a330;
    }
    ctx->pc = 0x33A328u;
    {
        const bool branch_taken_0x33a328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a328) {
            ctx->pc = 0x33A32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A328u;
            // 0x33a32c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A394u;
            goto label_33a394;
        }
    }
    ctx->pc = 0x33A330u;
label_33a330:
    // 0x33a330: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_33a334:
    if (ctx->pc == 0x33A334u) {
        ctx->pc = 0x33A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A330u;
        // 0x33a334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A338u;
        goto label_33a338;
    }
    ctx->pc = 0x33A330u;
    {
        const bool branch_taken_0x33a330 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A330u;
        // 0x33a334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a330) {
            ctx->pc = 0x33A33Cu;
            goto label_33a33c;
        }
    }
    ctx->pc = 0x33A338u;
label_33a338:
    // 0x33a338: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x33a338u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_33a33c:
    // 0x33a33c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x33a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a340:
    // 0x33a340: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33a340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_33a344:
    // 0x33a344: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33a348:
    // 0x33a348: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33a348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_33a34c:
    // 0x33a34c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33a350:
    // 0x33a350: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a354:
    if (ctx->pc == 0x33A354u) {
        ctx->pc = 0x33A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A350u;
        // 0x33a354: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A358u;
        goto label_33a358;
    }
    ctx->pc = 0x33A350u;
    {
        const bool branch_taken_0x33a350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a350) {
            ctx->pc = 0x33A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A350u;
            // 0x33a354: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A358u;
            goto label_33a358;
        }
    }
    ctx->pc = 0x33A358u;
label_33a358:
    // 0x33a358: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33a35c:
    // 0x33a35c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_33a360:
    // 0x33a360: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x33a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a364:
    // 0x33a364: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_33a368:
    if (ctx->pc == 0x33A368u) {
        ctx->pc = 0x33A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A364u;
        // 0x33a368: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A36Cu;
        goto label_33a36c;
    }
    ctx->pc = 0x33A364u;
    {
        const bool branch_taken_0x33a364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a364) {
            ctx->pc = 0x33A368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A364u;
            // 0x33a368: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A374u;
            goto label_33a374;
        }
    }
    ctx->pc = 0x33A36Cu;
label_33a36c:
    // 0x33a36c: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a370:
    if (ctx->pc == 0x33A370u) {
        ctx->pc = 0x33A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A36Cu;
        // 0x33a370: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A374u;
        goto label_33a374;
    }
    ctx->pc = 0x33A36Cu;
    {
        const bool branch_taken_0x33a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A36Cu;
        // 0x33a370: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a36c) {
            ctx->pc = 0x33A384u;
            goto label_33a384;
        }
    }
    ctx->pc = 0x33A374u;
label_33a374:
    // 0x33a374: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33a378:
    // 0x33a378: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_33a37c:
    if (ctx->pc == 0x33A37Cu) {
        ctx->pc = 0x33A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A378u;
        // 0x33a37c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A380u;
        goto label_33a380;
    }
    ctx->pc = 0x33A378u;
    {
        const bool branch_taken_0x33a378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a378) {
            ctx->pc = 0x33A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A378u;
            // 0x33a37c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A384u;
            goto label_33a384;
        }
    }
    ctx->pc = 0x33A380u;
label_33a380:
    // 0x33a380: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x33a380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_33a384:
    // 0x33a384: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x33a384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_33a388:
    // 0x33a388: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x33a388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_33a38c:
    // 0x33a38c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x33a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33a390:
    // 0x33a390: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33a394:
    // 0x33a394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a398:
    // 0x33a398: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33a398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33a39c:
    // 0x33a39c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_33a3a0:
    // 0x33a3a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a3a4:
    // 0x33a3a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a3a8:
    if (ctx->pc == 0x33A3A8u) {
        ctx->pc = 0x33A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3A4u;
        // 0x33a3a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A3ACu;
        goto label_33a3ac;
    }
    ctx->pc = 0x33A3A4u;
    {
        const bool branch_taken_0x33a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a3a4) {
            ctx->pc = 0x33A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A3A4u;
            // 0x33a3a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A3ACu;
            goto label_33a3ac;
        }
    }
    ctx->pc = 0x33A3ACu;
label_33a3ac:
    // 0x33a3ac: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x33a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33a3b0:
    // 0x33a3b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a3b4:
    // 0x33a3b4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x33a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_33a3b8:
    // 0x33a3b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a3bc:
    // 0x33a3bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a3c0:
    if (ctx->pc == 0x33A3C0u) {
        ctx->pc = 0x33A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3BCu;
        // 0x33a3c0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A3C4u;
        goto label_33a3c4;
    }
    ctx->pc = 0x33A3BCu;
    {
        const bool branch_taken_0x33a3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a3bc) {
            ctx->pc = 0x33A3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A3BCu;
            // 0x33a3c0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A3C4u;
            goto label_33a3c4;
        }
    }
    ctx->pc = 0x33A3C4u;
label_33a3c4:
    // 0x33a3c4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33a3c8:
    // 0x33a3c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33a3cc:
    // 0x33a3cc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x33a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a3d0:
    // 0x33a3d0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_33a3d4:
    if (ctx->pc == 0x33A3D4u) {
        ctx->pc = 0x33A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3D0u;
        // 0x33a3d4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A3D8u;
        goto label_33a3d8;
    }
    ctx->pc = 0x33A3D0u;
    {
        const bool branch_taken_0x33a3d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a3d0) {
            ctx->pc = 0x33A3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A3D0u;
            // 0x33a3d4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A3E0u;
            goto label_33a3e0;
        }
    }
    ctx->pc = 0x33A3D8u;
label_33a3d8:
    // 0x33a3d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a3dc:
    if (ctx->pc == 0x33A3DCu) {
        ctx->pc = 0x33A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3D8u;
        // 0x33a3dc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A3E0u;
        goto label_33a3e0;
    }
    ctx->pc = 0x33A3D8u;
    {
        const bool branch_taken_0x33a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3D8u;
        // 0x33a3dc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3d8) {
            ctx->pc = 0x33A3F0u;
            goto label_33a3f0;
        }
    }
    ctx->pc = 0x33A3E0u;
label_33a3e0:
    // 0x33a3e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a3e4:
    // 0x33a3e4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_33a3e8:
    if (ctx->pc == 0x33A3E8u) {
        ctx->pc = 0x33A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3E4u;
        // 0x33a3e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A3ECu;
        goto label_33a3ec;
    }
    ctx->pc = 0x33A3E4u;
    {
        const bool branch_taken_0x33a3e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a3e4) {
            ctx->pc = 0x33A3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A3E4u;
            // 0x33a3e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A3F0u;
            goto label_33a3f0;
        }
    }
    ctx->pc = 0x33A3ECu;
label_33a3ec:
    // 0x33a3ec: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x33a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_33a3f0:
    // 0x33a3f0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x33a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_33a3f4:
    // 0x33a3f4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_33a3f8:
    if (ctx->pc == 0x33A3F8u) {
        ctx->pc = 0x33A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3F4u;
        // 0x33a3f8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A3FCu;
        goto label_33a3fc;
    }
    ctx->pc = 0x33A3F4u;
    {
        const bool branch_taken_0x33a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3F4u;
        // 0x33a3f8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3f4) {
            ctx->pc = 0x33A5A8u;
            goto label_33a5a8;
        }
    }
    ctx->pc = 0x33A3FCu;
label_33a3fc:
    // 0x33a3fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33a400:
    // 0x33a400: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_33a404:
    if (ctx->pc == 0x33A404u) {
        ctx->pc = 0x33A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A400u;
        // 0x33a404: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A408u;
        goto label_33a408;
    }
    ctx->pc = 0x33A400u;
    {
        const bool branch_taken_0x33a400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a400) {
            ctx->pc = 0x33A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A400u;
            // 0x33a404: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A468u;
            goto label_33a468;
        }
    }
    ctx->pc = 0x33A408u;
label_33a408:
    // 0x33a408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a40c:
    // 0x33a40c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33a410:
    // 0x33a410: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x33a410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_33a414:
    // 0x33a414: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x33a414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33a418:
    // 0x33a418: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a41c:
    // 0x33a41c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x33a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_33a420:
    // 0x33a420: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a424:
    // 0x33a424: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a428:
    if (ctx->pc == 0x33A428u) {
        ctx->pc = 0x33A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A424u;
        // 0x33a428: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A42Cu;
        goto label_33a42c;
    }
    ctx->pc = 0x33A424u;
    {
        const bool branch_taken_0x33a424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a424) {
            ctx->pc = 0x33A428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A424u;
            // 0x33a428: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A42Cu;
            goto label_33a42c;
        }
    }
    ctx->pc = 0x33A42Cu;
label_33a42c:
    // 0x33a42c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33a430:
    // 0x33a430: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33a430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33a434:
    // 0x33a434: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x33a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a438:
    // 0x33a438: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_33a43c:
    if (ctx->pc == 0x33A43Cu) {
        ctx->pc = 0x33A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A438u;
        // 0x33a43c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A440u;
        goto label_33a440;
    }
    ctx->pc = 0x33A438u;
    {
        const bool branch_taken_0x33a438 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a438) {
            ctx->pc = 0x33A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A438u;
            // 0x33a43c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A448u;
            goto label_33a448;
        }
    }
    ctx->pc = 0x33A440u;
label_33a440:
    // 0x33a440: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a444:
    if (ctx->pc == 0x33A444u) {
        ctx->pc = 0x33A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A440u;
        // 0x33a444: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A448u;
        goto label_33a448;
    }
    ctx->pc = 0x33A440u;
    {
        const bool branch_taken_0x33a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A440u;
        // 0x33a444: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a440) {
            ctx->pc = 0x33A458u;
            goto label_33a458;
        }
    }
    ctx->pc = 0x33A448u;
label_33a448:
    // 0x33a448: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33a44c:
    // 0x33a44c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_33a450:
    if (ctx->pc == 0x33A450u) {
        ctx->pc = 0x33A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A44Cu;
        // 0x33a450: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A454u;
        goto label_33a454;
    }
    ctx->pc = 0x33A44Cu;
    {
        const bool branch_taken_0x33a44c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a44c) {
            ctx->pc = 0x33A450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A44Cu;
            // 0x33a450: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A458u;
            goto label_33a458;
        }
    }
    ctx->pc = 0x33A454u;
label_33a454:
    // 0x33a454: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x33a454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_33a458:
    // 0x33a458: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x33a458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_33a45c:
    // 0x33a45c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x33a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_33a460:
    // 0x33a460: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x33a460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33a464:
    // 0x33a464: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x33a464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a468:
    // 0x33a468: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_33a46c:
    if (ctx->pc == 0x33A46Cu) {
        ctx->pc = 0x33A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A468u;
        // 0x33a46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A470u;
        goto label_33a470;
    }
    ctx->pc = 0x33A468u;
    {
        const bool branch_taken_0x33a468 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A468u;
        // 0x33a46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a468) {
            ctx->pc = 0x33A47Cu;
            goto label_33a47c;
        }
    }
    ctx->pc = 0x33A470u;
label_33a470:
    // 0x33a470: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x33a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33a474:
    // 0x33a474: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_33a478:
    if (ctx->pc == 0x33A478u) {
        ctx->pc = 0x33A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A474u;
        // 0x33a478: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A47Cu;
        goto label_33a47c;
    }
    ctx->pc = 0x33A474u;
    {
        const bool branch_taken_0x33a474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A474u;
        // 0x33a478: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a474) {
            ctx->pc = 0x33A4A4u;
            goto label_33a4a4;
        }
    }
    ctx->pc = 0x33A47Cu;
label_33a47c:
    // 0x33a47c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x33a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a480:
    // 0x33a480: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_33a484:
    if (ctx->pc == 0x33A484u) {
        ctx->pc = 0x33A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A480u;
        // 0x33a484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A488u;
        goto label_33a488;
    }
    ctx->pc = 0x33A480u;
    {
        const bool branch_taken_0x33a480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A480u;
        // 0x33a484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a480) {
            ctx->pc = 0x33A494u;
            goto label_33a494;
        }
    }
    ctx->pc = 0x33A488u;
label_33a488:
    // 0x33a488: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33a488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33a48c:
    // 0x33a48c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_33a490:
    if (ctx->pc == 0x33A490u) {
        ctx->pc = 0x33A494u;
        goto label_33a494;
    }
    ctx->pc = 0x33A48Cu;
    {
        const bool branch_taken_0x33a48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a48c) {
            ctx->pc = 0x33A4A4u;
            goto label_33a4a4;
        }
    }
    ctx->pc = 0x33A494u;
label_33a494:
    // 0x33a494: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33a494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_33a498:
    // 0x33a498: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x33a498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33a49c:
    // 0x33a49c: 0x10000039  b           . + 4 + (0x39 << 2)
label_33a4a0:
    if (ctx->pc == 0x33A4A0u) {
        ctx->pc = 0x33A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A49Cu;
        // 0x33a4a0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4A4u;
        goto label_33a4a4;
    }
    ctx->pc = 0x33A49Cu;
    {
        const bool branch_taken_0x33a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A49Cu;
        // 0x33a4a0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a49c) {
            ctx->pc = 0x33A584u;
            goto label_33a584;
        }
    }
    ctx->pc = 0x33A4A4u;
label_33a4a4:
    // 0x33a4a4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_33a4a8:
    if (ctx->pc == 0x33A4A8u) {
        ctx->pc = 0x33A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4A4u;
        // 0x33a4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4ACu;
        goto label_33a4ac;
    }
    ctx->pc = 0x33A4A4u;
    {
        const bool branch_taken_0x33a4a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4A4u;
        // 0x33a4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4a4) {
            ctx->pc = 0x33A4B8u;
            goto label_33a4b8;
        }
    }
    ctx->pc = 0x33A4ACu;
label_33a4ac:
    // 0x33a4ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33a4b0:
    // 0x33a4b0: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_33a4b4:
    if (ctx->pc == 0x33A4B4u) {
        ctx->pc = 0x33A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4B0u;
        // 0x33a4b4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4B8u;
        goto label_33a4b8;
    }
    ctx->pc = 0x33A4B0u;
    {
        const bool branch_taken_0x33a4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a4b0) {
            ctx->pc = 0x33A4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A4B0u;
            // 0x33a4b4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A51Cu;
            goto label_33a51c;
        }
    }
    ctx->pc = 0x33A4B8u;
label_33a4b8:
    // 0x33a4b8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_33a4bc:
    if (ctx->pc == 0x33A4BCu) {
        ctx->pc = 0x33A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4B8u;
        // 0x33a4bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4C0u;
        goto label_33a4c0;
    }
    ctx->pc = 0x33A4B8u;
    {
        const bool branch_taken_0x33a4b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4B8u;
        // 0x33a4bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4b8) {
            ctx->pc = 0x33A4C4u;
            goto label_33a4c4;
        }
    }
    ctx->pc = 0x33A4C0u;
label_33a4c0:
    // 0x33a4c0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x33a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_33a4c4:
    // 0x33a4c4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x33a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a4c8:
    // 0x33a4c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_33a4cc:
    // 0x33a4cc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x33a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33a4d0:
    // 0x33a4d0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x33a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_33a4d4:
    // 0x33a4d4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x33a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33a4d8:
    // 0x33a4d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a4dc:
    if (ctx->pc == 0x33A4DCu) {
        ctx->pc = 0x33A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4D8u;
        // 0x33a4dc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4E0u;
        goto label_33a4e0;
    }
    ctx->pc = 0x33A4D8u;
    {
        const bool branch_taken_0x33a4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a4d8) {
            ctx->pc = 0x33A4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A4D8u;
            // 0x33a4dc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A4E0u;
            goto label_33a4e0;
        }
    }
    ctx->pc = 0x33A4E0u;
label_33a4e0:
    // 0x33a4e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33a4e4:
    // 0x33a4e4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_33a4e8:
    // 0x33a4e8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x33a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a4ec:
    // 0x33a4ec: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_33a4f0:
    if (ctx->pc == 0x33A4F0u) {
        ctx->pc = 0x33A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4ECu;
        // 0x33a4f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4F4u;
        goto label_33a4f4;
    }
    ctx->pc = 0x33A4ECu;
    {
        const bool branch_taken_0x33a4ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a4ec) {
            ctx->pc = 0x33A4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A4ECu;
            // 0x33a4f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A4FCu;
            goto label_33a4fc;
        }
    }
    ctx->pc = 0x33A4F4u;
label_33a4f4:
    // 0x33a4f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a4f8:
    if (ctx->pc == 0x33A4F8u) {
        ctx->pc = 0x33A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4F4u;
        // 0x33a4f8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4FCu;
        goto label_33a4fc;
    }
    ctx->pc = 0x33A4F4u;
    {
        const bool branch_taken_0x33a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4F4u;
        // 0x33a4f8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4f4) {
            ctx->pc = 0x33A50Cu;
            goto label_33a50c;
        }
    }
    ctx->pc = 0x33A4FCu;
label_33a4fc:
    // 0x33a4fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33a500:
    // 0x33a500: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_33a504:
    if (ctx->pc == 0x33A504u) {
        ctx->pc = 0x33A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A500u;
        // 0x33a504: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A508u;
        goto label_33a508;
    }
    ctx->pc = 0x33A500u;
    {
        const bool branch_taken_0x33a500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a500) {
            ctx->pc = 0x33A504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A500u;
            // 0x33a504: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A50Cu;
            goto label_33a50c;
        }
    }
    ctx->pc = 0x33A508u;
label_33a508:
    // 0x33a508: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x33a508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_33a50c:
    // 0x33a50c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x33a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_33a510:
    // 0x33a510: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x33a510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_33a514:
    // 0x33a514: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x33a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33a518:
    // 0x33a518: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33a51c:
    // 0x33a51c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a520:
    // 0x33a520: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33a520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33a524:
    // 0x33a524: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33a524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_33a528:
    // 0x33a528: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33a52c:
    // 0x33a52c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a530:
    if (ctx->pc == 0x33A530u) {
        ctx->pc = 0x33A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A52Cu;
        // 0x33a530: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A534u;
        goto label_33a534;
    }
    ctx->pc = 0x33A52Cu;
    {
        const bool branch_taken_0x33a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a52c) {
            ctx->pc = 0x33A530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A52Cu;
            // 0x33a530: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A534u;
            goto label_33a534;
        }
    }
    ctx->pc = 0x33A534u;
label_33a534:
    // 0x33a534: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x33a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33a538:
    // 0x33a538: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a53c:
    // 0x33a53c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x33a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_33a540:
    // 0x33a540: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a544:
    // 0x33a544: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33a548:
    if (ctx->pc == 0x33A548u) {
        ctx->pc = 0x33A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A544u;
        // 0x33a548: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A54Cu;
        goto label_33a54c;
    }
    ctx->pc = 0x33A544u;
    {
        const bool branch_taken_0x33a544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a544) {
            ctx->pc = 0x33A548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A544u;
            // 0x33a548: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A54Cu;
            goto label_33a54c;
        }
    }
    ctx->pc = 0x33A54Cu;
label_33a54c:
    // 0x33a54c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33a550:
    // 0x33a550: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33a550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33a554:
    // 0x33a554: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x33a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a558:
    // 0x33a558: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_33a55c:
    if (ctx->pc == 0x33A55Cu) {
        ctx->pc = 0x33A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A558u;
        // 0x33a55c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A560u;
        goto label_33a560;
    }
    ctx->pc = 0x33A558u;
    {
        const bool branch_taken_0x33a558 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a558) {
            ctx->pc = 0x33A55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A558u;
            // 0x33a55c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A568u;
            goto label_33a568;
        }
    }
    ctx->pc = 0x33A560u;
label_33a560:
    // 0x33a560: 0x10000005  b           . + 4 + (0x5 << 2)
label_33a564:
    if (ctx->pc == 0x33A564u) {
        ctx->pc = 0x33A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A560u;
        // 0x33a564: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A568u;
        goto label_33a568;
    }
    ctx->pc = 0x33A560u;
    {
        const bool branch_taken_0x33a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A560u;
        // 0x33a564: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a560) {
            ctx->pc = 0x33A578u;
            goto label_33a578;
        }
    }
    ctx->pc = 0x33A568u;
label_33a568:
    // 0x33a568: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33a56c:
    // 0x33a56c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_33a570:
    if (ctx->pc == 0x33A570u) {
        ctx->pc = 0x33A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A56Cu;
        // 0x33a570: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A574u;
        goto label_33a574;
    }
    ctx->pc = 0x33A56Cu;
    {
        const bool branch_taken_0x33a56c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a56c) {
            ctx->pc = 0x33A570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A56Cu;
            // 0x33a570: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A578u;
            goto label_33a578;
        }
    }
    ctx->pc = 0x33A574u;
label_33a574:
    // 0x33a574: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x33a574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_33a578:
    // 0x33a578: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x33a578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_33a57c:
    // 0x33a57c: 0x1000000a  b           . + 4 + (0xA << 2)
label_33a580:
    if (ctx->pc == 0x33A580u) {
        ctx->pc = 0x33A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A57Cu;
        // 0x33a580: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A584u;
        goto label_33a584;
    }
    ctx->pc = 0x33A57Cu;
    {
        const bool branch_taken_0x33a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A57Cu;
        // 0x33a580: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a57c) {
            ctx->pc = 0x33A5A8u;
            goto label_33a5a8;
        }
    }
    ctx->pc = 0x33A584u;
label_33a584:
    // 0x33a584: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33a588:
    // 0x33a588: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_33a58c:
    if (ctx->pc == 0x33A58Cu) {
        ctx->pc = 0x33A590u;
        goto label_33a590;
    }
    ctx->pc = 0x33A588u;
    {
        const bool branch_taken_0x33a588 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a588) {
            ctx->pc = 0x33A5A8u;
            goto label_33a5a8;
        }
    }
    ctx->pc = 0x33A590u;
label_33a590:
    // 0x33a590: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_33a594:
    if (ctx->pc == 0x33A594u) {
        ctx->pc = 0x33A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A590u;
        // 0x33a594: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A598u;
        goto label_33a598;
    }
    ctx->pc = 0x33A590u;
    {
        const bool branch_taken_0x33a590 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a590) {
            ctx->pc = 0x33A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A590u;
            // 0x33a594: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a278;
        }
    }
    ctx->pc = 0x33A598u;
label_33a598:
    // 0x33a598: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_33a59c:
    // 0x33a59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a5a0:
    // 0x33a5a0: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_33a5a4:
    if (ctx->pc == 0x33A5A4u) {
        ctx->pc = 0x33A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5A0u;
        // 0x33a5a4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5A8u;
        goto label_33a5a8;
    }
    ctx->pc = 0x33A5A0u;
    {
        const bool branch_taken_0x33a5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a5a0) {
            ctx->pc = 0x33A5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A5A0u;
            // 0x33a5a4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a278;
        }
    }
    ctx->pc = 0x33A5A8u;
label_33a5a8:
    // 0x33a5a8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_33a5ac:
    if (ctx->pc == 0x33A5ACu) {
        ctx->pc = 0x33A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5A8u;
        // 0x33a5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5B0u;
        goto label_33a5b0;
    }
    ctx->pc = 0x33A5A8u;
    {
        const bool branch_taken_0x33a5a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5A8u;
        // 0x33a5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5a8) {
            ctx->pc = 0x33A5B4u;
            goto label_33a5b4;
        }
    }
    ctx->pc = 0x33A5B0u;
label_33a5b0:
    // 0x33a5b0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x33a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_33a5b4:
    // 0x33a5b4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_33a5b8:
    if (ctx->pc == 0x33A5B8u) {
        ctx->pc = 0x33A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5B4u;
        // 0x33a5b8: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5BCu;
        goto label_33a5bc;
    }
    ctx->pc = 0x33A5B4u;
    {
        const bool branch_taken_0x33a5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5B4u;
        // 0x33a5b8: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5b4) {
            ctx->pc = 0x33A5E0u;
            goto label_33a5e0;
        }
    }
    ctx->pc = 0x33A5BCu;
label_33a5bc:
    // 0x33a5bc: 0x8e4227e4  lw          $v0, 0x27E4($s2)
    ctx->pc = 0x33a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_33a5c0:
    // 0x33a5c0: 0x24c66ea0  addiu       $a2, $a2, 0x6EA0
    ctx->pc = 0x33a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28320));
label_33a5c4:
    // 0x33a5c4: 0x24070091  addiu       $a3, $zero, 0x91
    ctx->pc = 0x33a5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_33a5c8:
    // 0x33a5c8: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x33a5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33a5cc:
    // 0x33a5cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x33a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33a5d0:
    // 0x33a5d0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x33a5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_33a5d4:
    // 0x33a5d4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x33a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_33a5d8:
    // 0x33a5d8: 0x60f809  jalr        $v1
label_33a5dc:
    if (ctx->pc == 0x33A5DCu) {
        ctx->pc = 0x33A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5D8u;
        // 0x33a5dc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5E0u;
        goto label_33a5e0;
    }
    ctx->pc = 0x33A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33A5E0u);
        ctx->pc = 0x33A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5D8u;
        // 0x33a5dc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A5D8u, 0x33A5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A5E0u;
label_33a5e0:
    // 0x33a5e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33a5e4:
    // 0x33a5e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a5e8:
    // 0x33a5e8: 0x8e4327e4  lw          $v1, 0x27E4($s2)
    ctx->pc = 0x33a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_33a5ec:
    // 0x33a5ec: 0x26666e68  addiu       $a2, $s3, 0x6E68
    ctx->pc = 0x33a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28264));
label_33a5f0:
    // 0x33a5f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33a5f4:
    // 0x33a5f4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x33a5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_33a5f8:
    // 0x33a5f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x33a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_33a5fc:
    // 0x33a5fc: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x33a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33a600:
    // 0x33a600: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x33a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33a604:
    // 0x33a604: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x33a604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_33a608:
    // 0x33a608: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x33a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_33a60c:
    // 0x33a60c: 0x60f809  jalr        $v1
label_33a610:
    if (ctx->pc == 0x33A610u) {
        ctx->pc = 0x33A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A60Cu;
        // 0x33a610: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A614u;
        goto label_33a614;
    }
    ctx->pc = 0x33A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33A614u);
        ctx->pc = 0x33A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A60Cu;
        // 0x33a610: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A60Cu, 0x33A614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A614u;
label_33a614:
    // 0x33a614: 0x10000002  b           . + 4 + (0x2 << 2)
label_33a618:
    if (ctx->pc == 0x33A618u) {
        ctx->pc = 0x33A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A614u;
        // 0x33a618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A61Cu;
        goto label_33a61c;
    }
    ctx->pc = 0x33A614u;
    {
        const bool branch_taken_0x33a614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A614u;
        // 0x33a618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a614) {
            ctx->pc = 0x33A620u;
            goto label_33a620;
        }
    }
    ctx->pc = 0x33A61Cu;
label_33a61c:
    // 0x33a61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33a61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a620:
    // 0x33a620: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x33a620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33a624:
    // 0x33a624: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x33a624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33a628:
    // 0x33a628: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x33a628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33a62c:
    // 0x33a62c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x33a62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33a630:
    // 0x33a630: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33a630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33a634:
    // 0x33a634: 0x3e00008  jr          $ra
label_33a638:
    if (ctx->pc == 0x33A638u) {
        ctx->pc = 0x33A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A634u;
        // 0x33a638: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A63Cu;
        goto label_33a63c;
    }
    ctx->pc = 0x33A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A634u;
        // 0x33a638: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A63Cu;
label_33a63c:
    // 0x33a63c: 0x0  nop
    ctx->pc = 0x33a63cu;
    // NOP
    ctx->pc = 0x33a640u;
}
