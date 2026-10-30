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

// Function: sub_0038A010
// Address: 0x38a010 - 0x38a4d8
void sub_0038A010_0x38a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A010_0x38a010");
#endif

    switch (ctx->pc) {
        case 0x38a010u: goto label_38a010;
        case 0x38a014u: goto label_38a014;
        case 0x38a018u: goto label_38a018;
        case 0x38a01cu: goto label_38a01c;
        case 0x38a020u: goto label_38a020;
        case 0x38a024u: goto label_38a024;
        case 0x38a028u: goto label_38a028;
        case 0x38a02cu: goto label_38a02c;
        case 0x38a030u: goto label_38a030;
        case 0x38a034u: goto label_38a034;
        case 0x38a038u: goto label_38a038;
        case 0x38a03cu: goto label_38a03c;
        case 0x38a040u: goto label_38a040;
        case 0x38a044u: goto label_38a044;
        case 0x38a048u: goto label_38a048;
        case 0x38a04cu: goto label_38a04c;
        case 0x38a050u: goto label_38a050;
        case 0x38a054u: goto label_38a054;
        case 0x38a058u: goto label_38a058;
        case 0x38a05cu: goto label_38a05c;
        case 0x38a060u: goto label_38a060;
        case 0x38a064u: goto label_38a064;
        case 0x38a068u: goto label_38a068;
        case 0x38a06cu: goto label_38a06c;
        case 0x38a070u: goto label_38a070;
        case 0x38a074u: goto label_38a074;
        case 0x38a078u: goto label_38a078;
        case 0x38a07cu: goto label_38a07c;
        case 0x38a080u: goto label_38a080;
        case 0x38a084u: goto label_38a084;
        case 0x38a088u: goto label_38a088;
        case 0x38a08cu: goto label_38a08c;
        case 0x38a090u: goto label_38a090;
        case 0x38a094u: goto label_38a094;
        case 0x38a098u: goto label_38a098;
        case 0x38a09cu: goto label_38a09c;
        case 0x38a0a0u: goto label_38a0a0;
        case 0x38a0a4u: goto label_38a0a4;
        case 0x38a0a8u: goto label_38a0a8;
        case 0x38a0acu: goto label_38a0ac;
        case 0x38a0b0u: goto label_38a0b0;
        case 0x38a0b4u: goto label_38a0b4;
        case 0x38a0b8u: goto label_38a0b8;
        case 0x38a0bcu: goto label_38a0bc;
        case 0x38a0c0u: goto label_38a0c0;
        case 0x38a0c4u: goto label_38a0c4;
        case 0x38a0c8u: goto label_38a0c8;
        case 0x38a0ccu: goto label_38a0cc;
        case 0x38a0d0u: goto label_38a0d0;
        case 0x38a0d4u: goto label_38a0d4;
        case 0x38a0d8u: goto label_38a0d8;
        case 0x38a0dcu: goto label_38a0dc;
        case 0x38a0e0u: goto label_38a0e0;
        case 0x38a0e4u: goto label_38a0e4;
        case 0x38a0e8u: goto label_38a0e8;
        case 0x38a0ecu: goto label_38a0ec;
        case 0x38a0f0u: goto label_38a0f0;
        case 0x38a0f4u: goto label_38a0f4;
        case 0x38a0f8u: goto label_38a0f8;
        case 0x38a0fcu: goto label_38a0fc;
        case 0x38a100u: goto label_38a100;
        case 0x38a104u: goto label_38a104;
        case 0x38a108u: goto label_38a108;
        case 0x38a10cu: goto label_38a10c;
        case 0x38a110u: goto label_38a110;
        case 0x38a114u: goto label_38a114;
        case 0x38a118u: goto label_38a118;
        case 0x38a11cu: goto label_38a11c;
        case 0x38a120u: goto label_38a120;
        case 0x38a124u: goto label_38a124;
        case 0x38a128u: goto label_38a128;
        case 0x38a12cu: goto label_38a12c;
        case 0x38a130u: goto label_38a130;
        case 0x38a134u: goto label_38a134;
        case 0x38a138u: goto label_38a138;
        case 0x38a13cu: goto label_38a13c;
        case 0x38a140u: goto label_38a140;
        case 0x38a144u: goto label_38a144;
        case 0x38a148u: goto label_38a148;
        case 0x38a14cu: goto label_38a14c;
        case 0x38a150u: goto label_38a150;
        case 0x38a154u: goto label_38a154;
        case 0x38a158u: goto label_38a158;
        case 0x38a15cu: goto label_38a15c;
        case 0x38a160u: goto label_38a160;
        case 0x38a164u: goto label_38a164;
        case 0x38a168u: goto label_38a168;
        case 0x38a16cu: goto label_38a16c;
        case 0x38a170u: goto label_38a170;
        case 0x38a174u: goto label_38a174;
        case 0x38a178u: goto label_38a178;
        case 0x38a17cu: goto label_38a17c;
        case 0x38a180u: goto label_38a180;
        case 0x38a184u: goto label_38a184;
        case 0x38a188u: goto label_38a188;
        case 0x38a18cu: goto label_38a18c;
        case 0x38a190u: goto label_38a190;
        case 0x38a194u: goto label_38a194;
        case 0x38a198u: goto label_38a198;
        case 0x38a19cu: goto label_38a19c;
        case 0x38a1a0u: goto label_38a1a0;
        case 0x38a1a4u: goto label_38a1a4;
        case 0x38a1a8u: goto label_38a1a8;
        case 0x38a1acu: goto label_38a1ac;
        case 0x38a1b0u: goto label_38a1b0;
        case 0x38a1b4u: goto label_38a1b4;
        case 0x38a1b8u: goto label_38a1b8;
        case 0x38a1bcu: goto label_38a1bc;
        case 0x38a1c0u: goto label_38a1c0;
        case 0x38a1c4u: goto label_38a1c4;
        case 0x38a1c8u: goto label_38a1c8;
        case 0x38a1ccu: goto label_38a1cc;
        case 0x38a1d0u: goto label_38a1d0;
        case 0x38a1d4u: goto label_38a1d4;
        case 0x38a1d8u: goto label_38a1d8;
        case 0x38a1dcu: goto label_38a1dc;
        case 0x38a1e0u: goto label_38a1e0;
        case 0x38a1e4u: goto label_38a1e4;
        case 0x38a1e8u: goto label_38a1e8;
        case 0x38a1ecu: goto label_38a1ec;
        case 0x38a1f0u: goto label_38a1f0;
        case 0x38a1f4u: goto label_38a1f4;
        case 0x38a1f8u: goto label_38a1f8;
        case 0x38a1fcu: goto label_38a1fc;
        case 0x38a200u: goto label_38a200;
        case 0x38a204u: goto label_38a204;
        case 0x38a208u: goto label_38a208;
        case 0x38a20cu: goto label_38a20c;
        case 0x38a210u: goto label_38a210;
        case 0x38a214u: goto label_38a214;
        case 0x38a218u: goto label_38a218;
        case 0x38a21cu: goto label_38a21c;
        case 0x38a220u: goto label_38a220;
        case 0x38a224u: goto label_38a224;
        case 0x38a228u: goto label_38a228;
        case 0x38a22cu: goto label_38a22c;
        case 0x38a230u: goto label_38a230;
        case 0x38a234u: goto label_38a234;
        case 0x38a238u: goto label_38a238;
        case 0x38a23cu: goto label_38a23c;
        case 0x38a240u: goto label_38a240;
        case 0x38a244u: goto label_38a244;
        case 0x38a248u: goto label_38a248;
        case 0x38a24cu: goto label_38a24c;
        case 0x38a250u: goto label_38a250;
        case 0x38a254u: goto label_38a254;
        case 0x38a258u: goto label_38a258;
        case 0x38a25cu: goto label_38a25c;
        case 0x38a260u: goto label_38a260;
        case 0x38a264u: goto label_38a264;
        case 0x38a268u: goto label_38a268;
        case 0x38a26cu: goto label_38a26c;
        case 0x38a270u: goto label_38a270;
        case 0x38a274u: goto label_38a274;
        case 0x38a278u: goto label_38a278;
        case 0x38a27cu: goto label_38a27c;
        case 0x38a280u: goto label_38a280;
        case 0x38a284u: goto label_38a284;
        case 0x38a288u: goto label_38a288;
        case 0x38a28cu: goto label_38a28c;
        case 0x38a290u: goto label_38a290;
        case 0x38a294u: goto label_38a294;
        case 0x38a298u: goto label_38a298;
        case 0x38a29cu: goto label_38a29c;
        case 0x38a2a0u: goto label_38a2a0;
        case 0x38a2a4u: goto label_38a2a4;
        case 0x38a2a8u: goto label_38a2a8;
        case 0x38a2acu: goto label_38a2ac;
        case 0x38a2b0u: goto label_38a2b0;
        case 0x38a2b4u: goto label_38a2b4;
        case 0x38a2b8u: goto label_38a2b8;
        case 0x38a2bcu: goto label_38a2bc;
        case 0x38a2c0u: goto label_38a2c0;
        case 0x38a2c4u: goto label_38a2c4;
        case 0x38a2c8u: goto label_38a2c8;
        case 0x38a2ccu: goto label_38a2cc;
        case 0x38a2d0u: goto label_38a2d0;
        case 0x38a2d4u: goto label_38a2d4;
        case 0x38a2d8u: goto label_38a2d8;
        case 0x38a2dcu: goto label_38a2dc;
        case 0x38a2e0u: goto label_38a2e0;
        case 0x38a2e4u: goto label_38a2e4;
        case 0x38a2e8u: goto label_38a2e8;
        case 0x38a2ecu: goto label_38a2ec;
        case 0x38a2f0u: goto label_38a2f0;
        case 0x38a2f4u: goto label_38a2f4;
        case 0x38a2f8u: goto label_38a2f8;
        case 0x38a2fcu: goto label_38a2fc;
        case 0x38a300u: goto label_38a300;
        case 0x38a304u: goto label_38a304;
        case 0x38a308u: goto label_38a308;
        case 0x38a30cu: goto label_38a30c;
        case 0x38a310u: goto label_38a310;
        case 0x38a314u: goto label_38a314;
        case 0x38a318u: goto label_38a318;
        case 0x38a31cu: goto label_38a31c;
        case 0x38a320u: goto label_38a320;
        case 0x38a324u: goto label_38a324;
        case 0x38a328u: goto label_38a328;
        case 0x38a32cu: goto label_38a32c;
        case 0x38a330u: goto label_38a330;
        case 0x38a334u: goto label_38a334;
        case 0x38a338u: goto label_38a338;
        case 0x38a33cu: goto label_38a33c;
        case 0x38a340u: goto label_38a340;
        case 0x38a344u: goto label_38a344;
        case 0x38a348u: goto label_38a348;
        case 0x38a34cu: goto label_38a34c;
        case 0x38a350u: goto label_38a350;
        case 0x38a354u: goto label_38a354;
        case 0x38a358u: goto label_38a358;
        case 0x38a35cu: goto label_38a35c;
        case 0x38a360u: goto label_38a360;
        case 0x38a364u: goto label_38a364;
        case 0x38a368u: goto label_38a368;
        case 0x38a36cu: goto label_38a36c;
        case 0x38a370u: goto label_38a370;
        case 0x38a374u: goto label_38a374;
        case 0x38a378u: goto label_38a378;
        case 0x38a37cu: goto label_38a37c;
        case 0x38a380u: goto label_38a380;
        case 0x38a384u: goto label_38a384;
        case 0x38a388u: goto label_38a388;
        case 0x38a38cu: goto label_38a38c;
        case 0x38a390u: goto label_38a390;
        case 0x38a394u: goto label_38a394;
        case 0x38a398u: goto label_38a398;
        case 0x38a39cu: goto label_38a39c;
        case 0x38a3a0u: goto label_38a3a0;
        case 0x38a3a4u: goto label_38a3a4;
        case 0x38a3a8u: goto label_38a3a8;
        case 0x38a3acu: goto label_38a3ac;
        case 0x38a3b0u: goto label_38a3b0;
        case 0x38a3b4u: goto label_38a3b4;
        case 0x38a3b8u: goto label_38a3b8;
        case 0x38a3bcu: goto label_38a3bc;
        case 0x38a3c0u: goto label_38a3c0;
        case 0x38a3c4u: goto label_38a3c4;
        case 0x38a3c8u: goto label_38a3c8;
        case 0x38a3ccu: goto label_38a3cc;
        case 0x38a3d0u: goto label_38a3d0;
        case 0x38a3d4u: goto label_38a3d4;
        case 0x38a3d8u: goto label_38a3d8;
        case 0x38a3dcu: goto label_38a3dc;
        case 0x38a3e0u: goto label_38a3e0;
        case 0x38a3e4u: goto label_38a3e4;
        case 0x38a3e8u: goto label_38a3e8;
        case 0x38a3ecu: goto label_38a3ec;
        case 0x38a3f0u: goto label_38a3f0;
        case 0x38a3f4u: goto label_38a3f4;
        case 0x38a3f8u: goto label_38a3f8;
        case 0x38a3fcu: goto label_38a3fc;
        case 0x38a400u: goto label_38a400;
        case 0x38a404u: goto label_38a404;
        case 0x38a408u: goto label_38a408;
        case 0x38a40cu: goto label_38a40c;
        case 0x38a410u: goto label_38a410;
        case 0x38a414u: goto label_38a414;
        case 0x38a418u: goto label_38a418;
        case 0x38a41cu: goto label_38a41c;
        case 0x38a420u: goto label_38a420;
        case 0x38a424u: goto label_38a424;
        case 0x38a428u: goto label_38a428;
        case 0x38a42cu: goto label_38a42c;
        case 0x38a430u: goto label_38a430;
        case 0x38a434u: goto label_38a434;
        case 0x38a438u: goto label_38a438;
        case 0x38a43cu: goto label_38a43c;
        case 0x38a440u: goto label_38a440;
        case 0x38a444u: goto label_38a444;
        case 0x38a448u: goto label_38a448;
        case 0x38a44cu: goto label_38a44c;
        case 0x38a450u: goto label_38a450;
        case 0x38a454u: goto label_38a454;
        case 0x38a458u: goto label_38a458;
        case 0x38a45cu: goto label_38a45c;
        case 0x38a460u: goto label_38a460;
        case 0x38a464u: goto label_38a464;
        case 0x38a468u: goto label_38a468;
        case 0x38a46cu: goto label_38a46c;
        case 0x38a470u: goto label_38a470;
        case 0x38a474u: goto label_38a474;
        case 0x38a478u: goto label_38a478;
        case 0x38a47cu: goto label_38a47c;
        case 0x38a480u: goto label_38a480;
        case 0x38a484u: goto label_38a484;
        case 0x38a488u: goto label_38a488;
        case 0x38a48cu: goto label_38a48c;
        case 0x38a490u: goto label_38a490;
        case 0x38a494u: goto label_38a494;
        case 0x38a498u: goto label_38a498;
        case 0x38a49cu: goto label_38a49c;
        case 0x38a4a0u: goto label_38a4a0;
        case 0x38a4a4u: goto label_38a4a4;
        case 0x38a4a8u: goto label_38a4a8;
        case 0x38a4acu: goto label_38a4ac;
        case 0x38a4b0u: goto label_38a4b0;
        case 0x38a4b4u: goto label_38a4b4;
        case 0x38a4b8u: goto label_38a4b8;
        case 0x38a4bcu: goto label_38a4bc;
        case 0x38a4c0u: goto label_38a4c0;
        case 0x38a4c4u: goto label_38a4c4;
        case 0x38a4c8u: goto label_38a4c8;
        case 0x38a4ccu: goto label_38a4cc;
        case 0x38a4d0u: goto label_38a4d0;
        case 0x38a4d4u: goto label_38a4d4;
        default: break;
    }

    ctx->pc = 0x38a010u;

label_38a010:
    // 0x38a010: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x38a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_38a014:
    // 0x38a014: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x38a014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a018:
    // 0x38a018: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x38a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_38a01c:
    // 0x38a01c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x38a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_38a020:
    // 0x38a020: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x38a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_38a024:
    // 0x38a024: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x38a024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38a028:
    // 0x38a028: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x38a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_38a02c:
    // 0x38a02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a030:
    // 0x38a030: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x38a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_38a034:
    // 0x38a034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38a034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a038:
    // 0x38a038: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38a03c:
    // 0x38a03c: 0x1262004  sllv        $a0, $a2, $t1
    ctx->pc = 0x38a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
label_38a040:
    // 0x38a040: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x38a040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_38a044:
    // 0x38a044: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x38a044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
label_38a048:
    // 0x38a048: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x38a048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_38a04c:
    // 0x38a04c: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x38a04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_38a050:
    // 0x38a050: 0x24080168  addiu       $t0, $zero, 0x168
    ctx->pc = 0x38a050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_38a054:
    // 0x38a054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38a054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38a058:
    // 0x38a058: 0x8e0211f4  lw          $v0, 0x11F4($s0)
    ctx->pc = 0x38a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
label_38a05c:
    // 0x38a05c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x38a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_38a060:
    // 0x38a060: 0xae0211f4  sw          $v0, 0x11F4($s0)
    ctx->pc = 0x38a060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4596), GPR_U32(ctx, 2));
label_38a064:
    // 0x38a064: 0xa2460096  sb          $a2, 0x96($s2)
    ctx->pc = 0x38a064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 150), (uint8_t)GPR_U32(ctx, 6));
label_38a068:
    // 0x38a068: 0xa6480094  sh          $t0, 0x94($s2)
    ctx->pc = 0x38a068u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 8));
label_38a06c:
    // 0x38a06c: 0x8e041300  lw          $a0, 0x1300($s0)
    ctx->pc = 0x38a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4864)));
label_38a070:
    // 0x38a070: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_38a074:
    if (ctx->pc == 0x38A074u) {
        ctx->pc = 0x38A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A070u;
        // 0x38a074: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A078u;
        goto label_38a078;
    }
    ctx->pc = 0x38A070u;
    {
        const bool branch_taken_0x38a070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A070u;
        // 0x38a074: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a070) {
            ctx->pc = 0x38A09Cu;
            goto label_38a09c;
        }
    }
    ctx->pc = 0x38A078u;
label_38a078:
    // 0x38a078: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x38a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_38a07c:
    // 0x38a07c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38a080:
    if (ctx->pc == 0x38A080u) {
        ctx->pc = 0x38A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A07Cu;
        // 0x38a080: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A084u;
        goto label_38a084;
    }
    ctx->pc = 0x38A07Cu;
    {
        const bool branch_taken_0x38a07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A07Cu;
        // 0x38a080: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a07c) {
            ctx->pc = 0x38A09Cu;
            goto label_38a09c;
        }
    }
    ctx->pc = 0x38A084u;
label_38a084:
    // 0x38a084: 0x25260019  addiu       $a2, $t1, 0x19
    ctx->pc = 0x38a084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 25));
label_38a088:
    // 0x38a088: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x38a088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_38a08c:
    // 0x38a08c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a090:
    // 0x38a090: 0x122300b  movn        $a2, $t1, $v0
    ctx->pc = 0x38a090u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
label_38a094:
    // 0x38a094: 0xc05c976  jal         func_1725D8
label_38a098:
    if (ctx->pc == 0x38A098u) {
        ctx->pc = 0x38A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A094u;
        // 0x38a098: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A09Cu;
        goto label_38a09c;
    }
    ctx->pc = 0x38A094u;
    SET_GPR_U32(ctx, 31, 0x38A09Cu);
    ctx->pc = 0x38A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A094u;
    // 0x38a098: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1725D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725D8u, 0x38A094u, 0x38A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A09Cu;
label_38a09c:
    // 0x38a09c: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_38a0a0:
    if (ctx->pc == 0x38A0A0u) {
        ctx->pc = 0x38A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A09Cu;
        // 0x38a0a0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A0A4u;
        goto label_38a0a4;
    }
    ctx->pc = 0x38A09Cu;
    {
        const bool branch_taken_0x38a09c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A09Cu;
        // 0x38a0a0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a09c) {
            ctx->pc = 0x38A16Cu;
            goto label_38a16c;
        }
    }
    ctx->pc = 0x38A0A4u;
label_38a0a4:
    // 0x38a0a4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x38a0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_38a0a8:
    // 0x38a0a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38a0ac:
    // 0x38a0ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38a0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38a0b0:
    // 0x38a0b0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38a0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38a0b4:
    // 0x38a0b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a0b8:
    // 0x38a0b8: 0x24c61740  addiu       $a2, $a2, 0x1740
    ctx->pc = 0x38a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
label_38a0bc:
    // 0x38a0bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a0c0:
    // 0x38a0c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x38a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38a0c4:
    // 0x38a0c4: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x38a0c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_38a0c8:
    // 0x38a0c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38a0c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_38a0cc:
    // 0x38a0cc: 0x7e430040  sq          $v1, 0x40($s2)
    ctx->pc = 0x38a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 3));
label_38a0d0:
    // 0x38a0d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x38a0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_38a0d4:
    // 0x38a0d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x38a0d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38a0d8:
    // 0x38a0d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38a0d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a0dc:
    // 0x38a0dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38a0dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a0e0:
    // 0x38a0e0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a0e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a0e4:
    // 0x38a0e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a0e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a0e8:
    // 0x38a0e8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38a0e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a0ec:
    // 0x38a0ec: 0x7e430040  sq          $v1, 0x40($s2)
    ctx->pc = 0x38a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 3));
label_38a0f0:
    // 0x38a0f0: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x38a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_38a0f4:
    // 0x38a0f4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x38a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_38a0f8:
    // 0x38a0f8: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x38a0f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_38a0fc:
    // 0x38a0fc: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a0fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a100:
    // 0x38a100: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a104:
    // 0x38a104: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x38a104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_38a108:
    // 0x38a108: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a10c:
    // 0x38a10c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a10cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a110:
    // 0x38a110: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a110u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a114:
    // 0x38a114: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a114u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a118:
    // 0x38a118: 0xc0e8b48  jal         func_3A2D20
label_38a11c:
    if (ctx->pc == 0x38A11Cu) {
        ctx->pc = 0x38A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A118u;
        // 0x38a11c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A120u;
        goto label_38a120;
    }
    ctx->pc = 0x38A118u;
    SET_GPR_U32(ctx, 31, 0x38A120u);
    ctx->pc = 0x38A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A118u;
    // 0x38a11c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38A118u, 0x38A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A120u;
label_38a120:
    // 0x38a120: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a124:
    // 0x38a124: 0xc0e8b58  jal         func_3A2D60
label_38a128:
    if (ctx->pc == 0x38A128u) {
        ctx->pc = 0x38A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A124u;
        // 0x38a128: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A12Cu;
        goto label_38a12c;
    }
    ctx->pc = 0x38A124u;
    SET_GPR_U32(ctx, 31, 0x38A12Cu);
    ctx->pc = 0x38A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A124u;
    // 0x38a128: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38A124u, 0x38A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A12Cu;
label_38a12c:
    // 0x38a12c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a130:
    // 0x38a130: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x38a130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_38a134:
    // 0x38a134: 0xc0e8b90  jal         func_3A2E40
label_38a138:
    if (ctx->pc == 0x38A138u) {
        ctx->pc = 0x38A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A134u;
        // 0x38a138: 0x24a5e278  addiu       $a1, $a1, -0x1D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A13Cu;
        goto label_38a13c;
    }
    ctx->pc = 0x38A134u;
    SET_GPR_U32(ctx, 31, 0x38A13Cu);
    ctx->pc = 0x38A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A134u;
    // 0x38a138: 0x24a5e278  addiu       $a1, $a1, -0x1D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x38A134u, 0x38A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A13Cu;
label_38a13c:
    // 0x38a13c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a140:
    // 0x38a140: 0xc0e8b50  jal         func_3A2D40
label_38a144:
    if (ctx->pc == 0x38A144u) {
        ctx->pc = 0x38A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A140u;
        // 0x38a144: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A148u;
        goto label_38a148;
    }
    ctx->pc = 0x38A140u;
    SET_GPR_U32(ctx, 31, 0x38A148u);
    ctx->pc = 0x38A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A140u;
    // 0x38a144: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38A140u, 0x38A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A148u;
label_38a148:
    // 0x38a148: 0x52200064  beql        $s1, $zero, . + 4 + (0x64 << 2)
label_38a14c:
    if (ctx->pc == 0x38A14Cu) {
        ctx->pc = 0x38A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A148u;
        // 0x38a14c: 0x7a420040  lq          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A150u;
        goto label_38a150;
    }
    ctx->pc = 0x38A148u;
    {
        const bool branch_taken_0x38a148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a148) {
            ctx->pc = 0x38A14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A148u;
            // 0x38a14c: 0x7a420040  lq          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A2DCu;
            goto label_38a2dc;
        }
    }
    ctx->pc = 0x38A150u;
label_38a150:
    // 0x38a150: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38a150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a154:
    // 0x38a154: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38a154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38a158:
    // 0x38a158: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38a15c:
    // 0x38a15c: 0x40f809  jalr        $v0
label_38a160:
    if (ctx->pc == 0x38A160u) {
        ctx->pc = 0x38A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A15Cu;
        // 0x38a160: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A164u;
        goto label_38a164;
    }
    ctx->pc = 0x38A15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38A164u);
        ctx->pc = 0x38A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A15Cu;
        // 0x38a160: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A15Cu, 0x38A164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A164u;
label_38a164:
    // 0x38a164: 0x1000005c  b           . + 4 + (0x5C << 2)
label_38a168:
    if (ctx->pc == 0x38A168u) {
        ctx->pc = 0x38A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A164u;
        // 0x38a168: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A16Cu;
        goto label_38a16c;
    }
    ctx->pc = 0x38A164u;
    {
        const bool branch_taken_0x38a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A164u;
        // 0x38a168: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a164) {
            ctx->pc = 0x38A2D8u;
            goto label_38a2d8;
        }
    }
    ctx->pc = 0x38A16Cu;
label_38a16c:
    // 0x38a16c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38a170:
    // 0x38a170: 0xc0cd940  jal         func_336500
label_38a174:
    if (ctx->pc == 0x38A174u) {
        ctx->pc = 0x38A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A170u;
        // 0x38a174: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A178u;
        goto label_38a178;
    }
    ctx->pc = 0x38A170u;
    SET_GPR_U32(ctx, 31, 0x38A178u);
    ctx->pc = 0x38A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A170u;
    // 0x38a174: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38A170u, 0x38A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A178u;
label_38a178:
    // 0x38a178: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38a17c:
    // 0x38a17c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38a17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38a180:
    // 0x38a180: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x38a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_38a184:
    // 0x38a184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38a188:
    // 0x38a188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a18c:
    // 0x38a18c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38a190:
    // 0x38a190: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x38a190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_38a194:
    // 0x38a194: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x38a194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_38a198:
    // 0x38a198: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x38a198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_38a19c:
    // 0x38a19c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_38a1a0:
    // 0x38a1a0: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x38a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_38a1a4:
    // 0x38a1a4: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x38a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_38a1a8:
    // 0x38a1a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38a1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_38a1ac:
    // 0x38a1ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38a1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38a1b0:
    // 0x38a1b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38a1b4:
    if (ctx->pc == 0x38A1B4u) {
        ctx->pc = 0x38A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1B0u;
        // 0x38a1b4: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A1B8u;
        goto label_38a1b8;
    }
    ctx->pc = 0x38A1B0u;
    {
        const bool branch_taken_0x38a1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1B0u;
        // 0x38a1b4: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a1b0) {
            ctx->pc = 0x38A1D8u;
            goto label_38a1d8;
        }
    }
    ctx->pc = 0x38A1B8u;
label_38a1b8:
    // 0x38a1b8: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a1bc:
    // 0x38a1bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a1bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a1c0:
    // 0x38a1c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a1c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a1c4:
    // 0x38a1c4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a1c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a1c8:
    // 0x38a1c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a1c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a1cc:
    // 0x38a1cc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a1ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a1d0:
    // 0x38a1d0: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a1d4:
    // 0x38a1d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a1d8:
    // 0x38a1d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38a1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_38a1dc:
    // 0x38a1dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_38a1e0:
    // 0x38a1e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38a1e4:
    if (ctx->pc == 0x38A1E4u) {
        ctx->pc = 0x38A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1E0u;
        // 0x38a1e4: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A1E8u;
        goto label_38a1e8;
    }
    ctx->pc = 0x38A1E0u;
    {
        const bool branch_taken_0x38a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1E0u;
        // 0x38a1e4: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a1e0) {
            ctx->pc = 0x38A208u;
            goto label_38a208;
        }
    }
    ctx->pc = 0x38A1E8u;
label_38a1e8:
    // 0x38a1e8: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a1e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a1ec:
    // 0x38a1ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a1ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a1f0:
    // 0x38a1f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a1f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a1f4:
    // 0x38a1f4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a1f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a1f8:
    // 0x38a1f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a1f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a1fc:
    // 0x38a1fc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a1fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a200:
    // 0x38a200: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a200u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a204:
    // 0x38a204: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a208:
    // 0x38a208: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38a208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_38a20c:
    // 0x38a20c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38a210:
    // 0x38a210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38a214:
    if (ctx->pc == 0x38A214u) {
        ctx->pc = 0x38A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A210u;
        // 0x38a214: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A218u;
        goto label_38a218;
    }
    ctx->pc = 0x38A210u;
    {
        const bool branch_taken_0x38a210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A210u;
        // 0x38a214: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a210) {
            ctx->pc = 0x38A238u;
            goto label_38a238;
        }
    }
    ctx->pc = 0x38A218u;
label_38a218:
    // 0x38a218: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a21c:
    // 0x38a21c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a21cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a220:
    // 0x38a220: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a220u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a224:
    // 0x38a224: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a228:
    // 0x38a228: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a228u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a22c:
    // 0x38a22c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a22cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a230:
    // 0x38a230: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a230u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a234:
    // 0x38a234: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a238:
    // 0x38a238: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38a238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_38a23c:
    // 0x38a23c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38a240:
    // 0x38a240: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38a244:
    if (ctx->pc == 0x38A244u) {
        ctx->pc = 0x38A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A240u;
        // 0x38a244: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A248u;
        goto label_38a248;
    }
    ctx->pc = 0x38A240u;
    {
        const bool branch_taken_0x38a240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A240u;
        // 0x38a244: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a240) {
            ctx->pc = 0x38A268u;
            goto label_38a268;
        }
    }
    ctx->pc = 0x38A248u;
label_38a248:
    // 0x38a248: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a24c:
    // 0x38a24c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a24cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a250:
    // 0x38a250: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a254:
    // 0x38a254: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a258:
    // 0x38a258: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a258u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a25c:
    // 0x38a25c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a25cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a260:
    // 0x38a260: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a260u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a264:
    // 0x38a264: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a268:
    // 0x38a268: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38a268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_38a26c:
    // 0x38a26c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x38a26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_38a270:
    // 0x38a270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38a274:
    if (ctx->pc == 0x38A274u) {
        ctx->pc = 0x38A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A270u;
        // 0x38a274: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A278u;
        goto label_38a278;
    }
    ctx->pc = 0x38A270u;
    {
        const bool branch_taken_0x38a270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A270u;
        // 0x38a274: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a270) {
            ctx->pc = 0x38A298u;
            goto label_38a298;
        }
    }
    ctx->pc = 0x38A278u;
label_38a278:
    // 0x38a278: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a27c:
    // 0x38a27c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a280:
    // 0x38a280: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a284:
    // 0x38a284: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a288:
    // 0x38a288: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a288u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a28c:
    // 0x38a28c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a28cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a290:
    // 0x38a290: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a290u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a294:
    // 0x38a294: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a298:
    // 0x38a298: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38a298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_38a29c:
    // 0x38a29c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x38a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_38a2a0:
    // 0x38a2a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38a2a4:
    if (ctx->pc == 0x38A2A4u) {
        ctx->pc = 0x38A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2A0u;
        // 0x38a2a4: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A2A8u;
        goto label_38a2a8;
    }
    ctx->pc = 0x38A2A0u;
    {
        const bool branch_taken_0x38a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2A0u;
        // 0x38a2a4: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a2a0) {
            ctx->pc = 0x38A2C8u;
            goto label_38a2c8;
        }
    }
    ctx->pc = 0x38A2A8u;
label_38a2a8:
    // 0x38a2a8: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a2ac:
    // 0x38a2ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a2acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a2b0:
    // 0x38a2b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a2b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a2b4:
    // 0x38a2b4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38a2b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a2b8:
    // 0x38a2b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38a2b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38a2bc:
    // 0x38a2bc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38a2bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38a2c0:
    // 0x38a2c0: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a2c4:
    // 0x38a2c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38a2c8:
    // 0x38a2c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38a2cc:
    // 0x38a2cc: 0x24421720  addiu       $v0, $v0, 0x1720
    ctx->pc = 0x38a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
label_38a2d0:
    // 0x38a2d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38a2d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38a2d4:
    // 0x38a2d4: 0x7e430050  sq          $v1, 0x50($s2)
    ctx->pc = 0x38a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 3));
label_38a2d8:
    // 0x38a2d8: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a2d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a2dc:
    // 0x38a2dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a2dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a2e0:
    // 0x38a2e0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38a2e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a2e4:
    // 0x38a2e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38a2e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a2e8:
    // 0x38a2e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38a2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38a2ec:
    // 0x38a2ec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38a2ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_38a2f0:
    // 0x38a2f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x38a2f0u;
    // VWAITQ (Q already resolved in this runtime)
label_38a2f4:
    // 0x38a2f4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38a2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38a2f8:
    // 0x38a2f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38a2f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_38a2fc:
    // 0x38a2fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x38a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_38a300:
    // 0x38a300: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38a300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38a304:
    // 0x38a304: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a304u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a308:
    // 0x38a308: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_38a30c:
    if (ctx->pc == 0x38A30Cu) {
        ctx->pc = 0x38A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A308u;
        // 0x38a30c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A310u;
        goto label_38a310;
    }
    ctx->pc = 0x38A308u;
    {
        const bool branch_taken_0x38a308 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A308u;
        // 0x38a30c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a308) {
            ctx->pc = 0x38A318u;
            goto label_38a318;
        }
    }
    ctx->pc = 0x38A310u;
label_38a310:
    // 0x38a310: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x38a310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_38a314:
    // 0x38a314: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38a314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38a318:
    // 0x38a318: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x38a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_38a31c:
    // 0x38a31c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38a31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38a320:
    // 0x38a320: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_38a324:
    if (ctx->pc == 0x38A324u) {
        ctx->pc = 0x38A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A320u;
        // 0x38a324: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A328u;
        goto label_38a328;
    }
    ctx->pc = 0x38A320u;
    {
        const bool branch_taken_0x38a320 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A320u;
        // 0x38a324: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a320) {
            ctx->pc = 0x38A330u;
            goto label_38a330;
        }
    }
    ctx->pc = 0x38A328u;
label_38a328:
    // 0x38a328: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x38a328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_38a32c:
    // 0x38a32c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38a32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38a330:
    // 0x38a330: 0x2450b8a8  addiu       $s0, $v0, -0x4758
    ctx->pc = 0x38a330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
label_38a334:
    // 0x38a334: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38a334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38a338:
    // 0x38a338: 0xc0cd538  jal         func_3354E0
label_38a33c:
    if (ctx->pc == 0x38A33Cu) {
        ctx->pc = 0x38A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A338u;
        // 0x38a33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A340u;
        goto label_38a340;
    }
    ctx->pc = 0x38A338u;
    SET_GPR_U32(ctx, 31, 0x38A340u);
    ctx->pc = 0x38A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A338u;
    // 0x38a33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x38A338u, 0x38A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A340u;
label_38a340:
    // 0x38a340: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x38a340u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_38a344:
    // 0x38a344: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x38a344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_38a348:
    // 0x38a348: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38a348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38a34c:
    // 0x38a34c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x38a34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_38a350:
    // 0x38a350: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x38a350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_38a354:
    // 0x38a354: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38a354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38a358:
    // 0x38a358: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38a358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38a35c:
    // 0x38a35c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x38a35cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38a360:
    // 0x38a360: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38a360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38a364:
    // 0x38a364: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38a364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38a368:
    // 0x38a368: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38a368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38a36c:
    // 0x38a36c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38a36cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_38a370:
    // 0x38a370: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x38a370u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_38a374:
    // 0x38a374: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_38a378:
    if (ctx->pc == 0x38A378u) {
        ctx->pc = 0x38A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A374u;
        // 0x38a378: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A37Cu;
        goto label_38a37c;
    }
    ctx->pc = 0x38A374u;
    {
        const bool branch_taken_0x38a374 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A374u;
        // 0x38a378: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a374) {
            ctx->pc = 0x38A388u;
            goto label_38a388;
        }
    }
    ctx->pc = 0x38A37Cu;
label_38a37c:
    // 0x38a37c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x38a37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_38a380:
    // 0x38a380: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x38a380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_38a384:
    // 0x38a384: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38a384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38a388:
    // 0x38a388: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x38a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_38a38c:
    // 0x38a38c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x38a38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_38a390:
    // 0x38a390: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38a390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38a394:
    // 0x38a394: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
label_38a398:
    if (ctx->pc == 0x38A398u) {
        ctx->pc = 0x38A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A394u;
        // 0x38a398: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A39Cu;
        goto label_38a39c;
    }
    ctx->pc = 0x38A394u;
    {
        const bool branch_taken_0x38a394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a394) {
            ctx->pc = 0x38A398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A394u;
            // 0x38a398: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A3B0u;
            goto label_38a3b0;
        }
    }
    ctx->pc = 0x38A39Cu;
label_38a39c:
    // 0x38a39c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x38a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_38a3a0:
    // 0x38a3a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x38a3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_38a3a4:
    // 0x38a3a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38a3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38a3a8:
    // 0x38a3a8: 0x0  nop
    ctx->pc = 0x38a3a8u;
    // NOP
label_38a3ac:
    // 0x38a3ac: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x38a3acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_38a3b0:
    // 0x38a3b0: 0xc0cd538  jal         func_3354E0
label_38a3b4:
    if (ctx->pc == 0x38A3B4u) {
        ctx->pc = 0x38A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3B0u;
        // 0x38a3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A3B8u;
        goto label_38a3b8;
    }
    ctx->pc = 0x38A3B0u;
    SET_GPR_U32(ctx, 31, 0x38A3B8u);
    ctx->pc = 0x38A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A3B0u;
    // 0x38a3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x38A3B0u, 0x38A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A3B8u;
label_38a3b8:
    // 0x38a3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a3bc:
    // 0x38a3bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x38a3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_38a3c0:
    // 0x38a3c0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x38a3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_38a3c4:
    // 0x38a3c4: 0xc0cd538  jal         func_3354E0
label_38a3c8:
    if (ctx->pc == 0x38A3C8u) {
        ctx->pc = 0x38A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3C4u;
        // 0x38a3c8: 0xe6400080  swc1        $f0, 0x80($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A3CCu;
        goto label_38a3cc;
    }
    ctx->pc = 0x38A3C4u;
    SET_GPR_U32(ctx, 31, 0x38A3CCu);
    ctx->pc = 0x38A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A3C4u;
    // 0x38a3c8: 0xe6400080  swc1        $f0, 0x80($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x38A3C4u, 0x38A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A3CCu;
label_38a3cc:
    // 0x38a3cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x38a3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_38a3d0:
    // 0x38a3d0: 0x4600ad00  add.s       $f20, $f21, $f0
    ctx->pc = 0x38a3d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_38a3d4:
    // 0x38a3d4: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_38a3d8:
    if (ctx->pc == 0x38A3D8u) {
        ctx->pc = 0x38A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3D4u;
        // 0x38a3d8: 0xe6540050  swc1        $f20, 0x50($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A3DCu;
        goto label_38a3dc;
    }
    ctx->pc = 0x38A3D4u;
    {
        const bool branch_taken_0x38a3d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3D4u;
        // 0x38a3d8: 0xe6540050  swc1        $f20, 0x50($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a3d4) {
            ctx->pc = 0x38A43Cu;
            goto label_38a43c;
        }
    }
    ctx->pc = 0x38A3DCu;
label_38a3dc:
    // 0x38a3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a3e0:
    // 0x38a3e0: 0xc0cd4ee  jal         func_3353B8
label_38a3e4:
    if (ctx->pc == 0x38A3E4u) {
        ctx->pc = 0x38A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3E0u;
        // 0x38a3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A3E8u;
        goto label_38a3e8;
    }
    ctx->pc = 0x38A3E0u;
    SET_GPR_U32(ctx, 31, 0x38A3E8u);
    ctx->pc = 0x38A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A3E0u;
    // 0x38a3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x38A3E0u, 0x38A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A3E8u;
label_38a3e8:
    // 0x38a3e8: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x38a3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_38a3ec:
    // 0x38a3ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a3f0:
    // 0x38a3f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_38a3f4:
    if (ctx->pc == 0x38A3F4u) {
        ctx->pc = 0x38A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3F0u;
        // 0x38a3f4: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A3F8u;
        goto label_38a3f8;
    }
    ctx->pc = 0x38A3F0u;
    {
        const bool branch_taken_0x38a3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a3f0) {
            ctx->pc = 0x38A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A3F0u;
            // 0x38a3f4: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A408u;
            goto label_38a408;
        }
    }
    ctx->pc = 0x38A3F8u;
label_38a3f8:
    // 0x38a3f8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x38a3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_38a3fc:
    // 0x38a3fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a400:
    // 0x38a400: 0x0  nop
    ctx->pc = 0x38a400u;
    // NOP
label_38a404:
    // 0x38a404: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x38a404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_38a408:
    // 0x38a408: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x38a408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_38a40c:
    // 0x38a40c: 0x2624b8a8  addiu       $a0, $s1, -0x4758
    ctx->pc = 0x38a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949032));
label_38a410:
    // 0x38a410: 0xc6540050  lwc1        $f20, 0x50($s2)
    ctx->pc = 0x38a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38a414:
    // 0x38a414: 0xc0cd4ee  jal         func_3353B8
label_38a418:
    if (ctx->pc == 0x38A418u) {
        ctx->pc = 0x38A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A414u;
        // 0x38a418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A41Cu;
        goto label_38a41c;
    }
    ctx->pc = 0x38A414u;
    SET_GPR_U32(ctx, 31, 0x38A41Cu);
    ctx->pc = 0x38A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A414u;
    // 0x38a418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x38A414u, 0x38A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A41Cu;
label_38a41c:
    // 0x38a41c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x38a41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_38a420:
    // 0x38a420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a424:
    // 0x38a424: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_38a428:
    if (ctx->pc == 0x38A428u) {
        ctx->pc = 0x38A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A424u;
        // 0x38a428: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A42Cu;
        goto label_38a42c;
    }
    ctx->pc = 0x38A424u;
    {
        const bool branch_taken_0x38a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a424) {
            ctx->pc = 0x38A428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A424u;
            // 0x38a428: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A4ACu;
            goto label_38a4ac;
        }
    }
    ctx->pc = 0x38A42Cu;
label_38a42c:
    // 0x38a42c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38a42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38a430:
    // 0x38a430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a434:
    // 0x38a434: 0x1000001d  b           . + 4 + (0x1D << 2)
label_38a438:
    if (ctx->pc == 0x38A438u) {
        ctx->pc = 0x38A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A434u;
        // 0x38a438: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A43Cu;
        goto label_38a43c;
    }
    ctx->pc = 0x38A434u;
    {
        const bool branch_taken_0x38a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A434u;
        // 0x38a438: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a434) {
            ctx->pc = 0x38A4ACu;
            goto label_38a4ac;
        }
    }
    ctx->pc = 0x38A43Cu;
label_38a43c:
    // 0x38a43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a440:
    // 0x38a440: 0xc0cd4ee  jal         func_3353B8
label_38a444:
    if (ctx->pc == 0x38A444u) {
        ctx->pc = 0x38A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A440u;
        // 0x38a444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A448u;
        goto label_38a448;
    }
    ctx->pc = 0x38A440u;
    SET_GPR_U32(ctx, 31, 0x38A448u);
    ctx->pc = 0x38A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A440u;
    // 0x38a444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x38A440u, 0x38A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A448u;
label_38a448:
    // 0x38a448: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x38a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_38a44c:
    // 0x38a44c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38a44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38a450:
    // 0x38a450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a454:
    // 0x38a454: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_38a458:
    if (ctx->pc == 0x38A458u) {
        ctx->pc = 0x38A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A454u;
        // 0x38a458: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A45Cu;
        goto label_38a45c;
    }
    ctx->pc = 0x38A454u;
    {
        const bool branch_taken_0x38a454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a454) {
            ctx->pc = 0x38A458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A454u;
            // 0x38a458: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A470u;
            goto label_38a470;
        }
    }
    ctx->pc = 0x38A45Cu;
label_38a45c:
    // 0x38a45c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x38a45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_38a460:
    // 0x38a460: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38a460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38a464:
    // 0x38a464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a468:
    // 0x38a468: 0x0  nop
    ctx->pc = 0x38a468u;
    // NOP
label_38a46c:
    // 0x38a46c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x38a46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_38a470:
    // 0x38a470: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x38a470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_38a474:
    // 0x38a474: 0x2624b8a8  addiu       $a0, $s1, -0x4758
    ctx->pc = 0x38a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949032));
label_38a478:
    // 0x38a478: 0xc6540050  lwc1        $f20, 0x50($s2)
    ctx->pc = 0x38a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38a47c:
    // 0x38a47c: 0xc0cd4ee  jal         func_3353B8
label_38a480:
    if (ctx->pc == 0x38A480u) {
        ctx->pc = 0x38A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A47Cu;
        // 0x38a480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A484u;
        goto label_38a484;
    }
    ctx->pc = 0x38A47Cu;
    SET_GPR_U32(ctx, 31, 0x38A484u);
    ctx->pc = 0x38A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A47Cu;
    // 0x38a480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x38A47Cu, 0x38A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A484u;
label_38a484:
    // 0x38a484: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x38a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_38a488:
    // 0x38a488: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38a488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38a48c:
    // 0x38a48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a490:
    // 0x38a490: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_38a494:
    if (ctx->pc == 0x38A494u) {
        ctx->pc = 0x38A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A490u;
        // 0x38a494: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A498u;
        goto label_38a498;
    }
    ctx->pc = 0x38A490u;
    {
        const bool branch_taken_0x38a490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a490) {
            ctx->pc = 0x38A494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A490u;
            // 0x38a494: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A4ACu;
            goto label_38a4ac;
        }
    }
    ctx->pc = 0x38A498u;
label_38a498:
    // 0x38a498: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x38a498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_38a49c:
    // 0x38a49c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38a49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38a4a0:
    // 0x38a4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a4a4:
    // 0x38a4a4: 0x0  nop
    ctx->pc = 0x38a4a4u;
    // NOP
label_38a4a8:
    // 0x38a4a8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x38a4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_38a4ac:
    // 0x38a4ac: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x38a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_38a4b0:
    // 0x38a4b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38a4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38a4b4:
    // 0x38a4b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x38a4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38a4b8:
    // 0x38a4b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x38a4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38a4bc:
    // 0x38a4bc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x38a4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38a4c0:
    // 0x38a4c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38a4c4:
    // 0x38a4c4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x38a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38a4c8:
    // 0x38a4c8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x38a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38a4cc:
    // 0x38a4cc: 0x3e00008  jr          $ra
label_38a4d0:
    if (ctx->pc == 0x38A4D0u) {
        ctx->pc = 0x38A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4CCu;
        // 0x38a4d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A4D4u;
        goto label_38a4d4;
    }
    ctx->pc = 0x38A4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4CCu;
        // 0x38a4d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A4D4u;
label_38a4d4:
    // 0x38a4d4: 0x0  nop
    ctx->pc = 0x38a4d4u;
    // NOP
    ctx->pc = 0x38a4d8u;
}
