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

// Function: sub_0019A1B8
// Address: 0x19a1b8 - 0x19a648
void sub_0019A1B8_0x19a1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A1B8_0x19a1b8");
#endif

    switch (ctx->pc) {
        case 0x19a1b8u: goto label_19a1b8;
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1c4u: goto label_19a1c4;
        case 0x19a1c8u: goto label_19a1c8;
        case 0x19a1ccu: goto label_19a1cc;
        case 0x19a1d0u: goto label_19a1d0;
        case 0x19a1d4u: goto label_19a1d4;
        case 0x19a1d8u: goto label_19a1d8;
        case 0x19a1dcu: goto label_19a1dc;
        case 0x19a1e0u: goto label_19a1e0;
        case 0x19a1e4u: goto label_19a1e4;
        case 0x19a1e8u: goto label_19a1e8;
        case 0x19a1ecu: goto label_19a1ec;
        case 0x19a1f0u: goto label_19a1f0;
        case 0x19a1f4u: goto label_19a1f4;
        case 0x19a1f8u: goto label_19a1f8;
        case 0x19a1fcu: goto label_19a1fc;
        case 0x19a200u: goto label_19a200;
        case 0x19a204u: goto label_19a204;
        case 0x19a208u: goto label_19a208;
        case 0x19a20cu: goto label_19a20c;
        case 0x19a210u: goto label_19a210;
        case 0x19a214u: goto label_19a214;
        case 0x19a218u: goto label_19a218;
        case 0x19a21cu: goto label_19a21c;
        case 0x19a220u: goto label_19a220;
        case 0x19a224u: goto label_19a224;
        case 0x19a228u: goto label_19a228;
        case 0x19a22cu: goto label_19a22c;
        case 0x19a230u: goto label_19a230;
        case 0x19a234u: goto label_19a234;
        case 0x19a238u: goto label_19a238;
        case 0x19a23cu: goto label_19a23c;
        case 0x19a240u: goto label_19a240;
        case 0x19a244u: goto label_19a244;
        case 0x19a248u: goto label_19a248;
        case 0x19a24cu: goto label_19a24c;
        case 0x19a250u: goto label_19a250;
        case 0x19a254u: goto label_19a254;
        case 0x19a258u: goto label_19a258;
        case 0x19a25cu: goto label_19a25c;
        case 0x19a260u: goto label_19a260;
        case 0x19a264u: goto label_19a264;
        case 0x19a268u: goto label_19a268;
        case 0x19a26cu: goto label_19a26c;
        case 0x19a270u: goto label_19a270;
        case 0x19a274u: goto label_19a274;
        case 0x19a278u: goto label_19a278;
        case 0x19a27cu: goto label_19a27c;
        case 0x19a280u: goto label_19a280;
        case 0x19a284u: goto label_19a284;
        case 0x19a288u: goto label_19a288;
        case 0x19a28cu: goto label_19a28c;
        case 0x19a290u: goto label_19a290;
        case 0x19a294u: goto label_19a294;
        case 0x19a298u: goto label_19a298;
        case 0x19a29cu: goto label_19a29c;
        case 0x19a2a0u: goto label_19a2a0;
        case 0x19a2a4u: goto label_19a2a4;
        case 0x19a2a8u: goto label_19a2a8;
        case 0x19a2acu: goto label_19a2ac;
        case 0x19a2b0u: goto label_19a2b0;
        case 0x19a2b4u: goto label_19a2b4;
        case 0x19a2b8u: goto label_19a2b8;
        case 0x19a2bcu: goto label_19a2bc;
        case 0x19a2c0u: goto label_19a2c0;
        case 0x19a2c4u: goto label_19a2c4;
        case 0x19a2c8u: goto label_19a2c8;
        case 0x19a2ccu: goto label_19a2cc;
        case 0x19a2d0u: goto label_19a2d0;
        case 0x19a2d4u: goto label_19a2d4;
        case 0x19a2d8u: goto label_19a2d8;
        case 0x19a2dcu: goto label_19a2dc;
        case 0x19a2e0u: goto label_19a2e0;
        case 0x19a2e4u: goto label_19a2e4;
        case 0x19a2e8u: goto label_19a2e8;
        case 0x19a2ecu: goto label_19a2ec;
        case 0x19a2f0u: goto label_19a2f0;
        case 0x19a2f4u: goto label_19a2f4;
        case 0x19a2f8u: goto label_19a2f8;
        case 0x19a2fcu: goto label_19a2fc;
        case 0x19a300u: goto label_19a300;
        case 0x19a304u: goto label_19a304;
        case 0x19a308u: goto label_19a308;
        case 0x19a30cu: goto label_19a30c;
        case 0x19a310u: goto label_19a310;
        case 0x19a314u: goto label_19a314;
        case 0x19a318u: goto label_19a318;
        case 0x19a31cu: goto label_19a31c;
        case 0x19a320u: goto label_19a320;
        case 0x19a324u: goto label_19a324;
        case 0x19a328u: goto label_19a328;
        case 0x19a32cu: goto label_19a32c;
        case 0x19a330u: goto label_19a330;
        case 0x19a334u: goto label_19a334;
        case 0x19a338u: goto label_19a338;
        case 0x19a33cu: goto label_19a33c;
        case 0x19a340u: goto label_19a340;
        case 0x19a344u: goto label_19a344;
        case 0x19a348u: goto label_19a348;
        case 0x19a34cu: goto label_19a34c;
        case 0x19a350u: goto label_19a350;
        case 0x19a354u: goto label_19a354;
        case 0x19a358u: goto label_19a358;
        case 0x19a35cu: goto label_19a35c;
        case 0x19a360u: goto label_19a360;
        case 0x19a364u: goto label_19a364;
        case 0x19a368u: goto label_19a368;
        case 0x19a36cu: goto label_19a36c;
        case 0x19a370u: goto label_19a370;
        case 0x19a374u: goto label_19a374;
        case 0x19a378u: goto label_19a378;
        case 0x19a37cu: goto label_19a37c;
        case 0x19a380u: goto label_19a380;
        case 0x19a384u: goto label_19a384;
        case 0x19a388u: goto label_19a388;
        case 0x19a38cu: goto label_19a38c;
        case 0x19a390u: goto label_19a390;
        case 0x19a394u: goto label_19a394;
        case 0x19a398u: goto label_19a398;
        case 0x19a39cu: goto label_19a39c;
        case 0x19a3a0u: goto label_19a3a0;
        case 0x19a3a4u: goto label_19a3a4;
        case 0x19a3a8u: goto label_19a3a8;
        case 0x19a3acu: goto label_19a3ac;
        case 0x19a3b0u: goto label_19a3b0;
        case 0x19a3b4u: goto label_19a3b4;
        case 0x19a3b8u: goto label_19a3b8;
        case 0x19a3bcu: goto label_19a3bc;
        case 0x19a3c0u: goto label_19a3c0;
        case 0x19a3c4u: goto label_19a3c4;
        case 0x19a3c8u: goto label_19a3c8;
        case 0x19a3ccu: goto label_19a3cc;
        case 0x19a3d0u: goto label_19a3d0;
        case 0x19a3d4u: goto label_19a3d4;
        case 0x19a3d8u: goto label_19a3d8;
        case 0x19a3dcu: goto label_19a3dc;
        case 0x19a3e0u: goto label_19a3e0;
        case 0x19a3e4u: goto label_19a3e4;
        case 0x19a3e8u: goto label_19a3e8;
        case 0x19a3ecu: goto label_19a3ec;
        case 0x19a3f0u: goto label_19a3f0;
        case 0x19a3f4u: goto label_19a3f4;
        case 0x19a3f8u: goto label_19a3f8;
        case 0x19a3fcu: goto label_19a3fc;
        case 0x19a400u: goto label_19a400;
        case 0x19a404u: goto label_19a404;
        case 0x19a408u: goto label_19a408;
        case 0x19a40cu: goto label_19a40c;
        case 0x19a410u: goto label_19a410;
        case 0x19a414u: goto label_19a414;
        case 0x19a418u: goto label_19a418;
        case 0x19a41cu: goto label_19a41c;
        case 0x19a420u: goto label_19a420;
        case 0x19a424u: goto label_19a424;
        case 0x19a428u: goto label_19a428;
        case 0x19a42cu: goto label_19a42c;
        case 0x19a430u: goto label_19a430;
        case 0x19a434u: goto label_19a434;
        case 0x19a438u: goto label_19a438;
        case 0x19a43cu: goto label_19a43c;
        case 0x19a440u: goto label_19a440;
        case 0x19a444u: goto label_19a444;
        case 0x19a448u: goto label_19a448;
        case 0x19a44cu: goto label_19a44c;
        case 0x19a450u: goto label_19a450;
        case 0x19a454u: goto label_19a454;
        case 0x19a458u: goto label_19a458;
        case 0x19a45cu: goto label_19a45c;
        case 0x19a460u: goto label_19a460;
        case 0x19a464u: goto label_19a464;
        case 0x19a468u: goto label_19a468;
        case 0x19a46cu: goto label_19a46c;
        case 0x19a470u: goto label_19a470;
        case 0x19a474u: goto label_19a474;
        case 0x19a478u: goto label_19a478;
        case 0x19a47cu: goto label_19a47c;
        case 0x19a480u: goto label_19a480;
        case 0x19a484u: goto label_19a484;
        case 0x19a488u: goto label_19a488;
        case 0x19a48cu: goto label_19a48c;
        case 0x19a490u: goto label_19a490;
        case 0x19a494u: goto label_19a494;
        case 0x19a498u: goto label_19a498;
        case 0x19a49cu: goto label_19a49c;
        case 0x19a4a0u: goto label_19a4a0;
        case 0x19a4a4u: goto label_19a4a4;
        case 0x19a4a8u: goto label_19a4a8;
        case 0x19a4acu: goto label_19a4ac;
        case 0x19a4b0u: goto label_19a4b0;
        case 0x19a4b4u: goto label_19a4b4;
        case 0x19a4b8u: goto label_19a4b8;
        case 0x19a4bcu: goto label_19a4bc;
        case 0x19a4c0u: goto label_19a4c0;
        case 0x19a4c4u: goto label_19a4c4;
        case 0x19a4c8u: goto label_19a4c8;
        case 0x19a4ccu: goto label_19a4cc;
        case 0x19a4d0u: goto label_19a4d0;
        case 0x19a4d4u: goto label_19a4d4;
        case 0x19a4d8u: goto label_19a4d8;
        case 0x19a4dcu: goto label_19a4dc;
        case 0x19a4e0u: goto label_19a4e0;
        case 0x19a4e4u: goto label_19a4e4;
        case 0x19a4e8u: goto label_19a4e8;
        case 0x19a4ecu: goto label_19a4ec;
        case 0x19a4f0u: goto label_19a4f0;
        case 0x19a4f4u: goto label_19a4f4;
        case 0x19a4f8u: goto label_19a4f8;
        case 0x19a4fcu: goto label_19a4fc;
        case 0x19a500u: goto label_19a500;
        case 0x19a504u: goto label_19a504;
        case 0x19a508u: goto label_19a508;
        case 0x19a50cu: goto label_19a50c;
        case 0x19a510u: goto label_19a510;
        case 0x19a514u: goto label_19a514;
        case 0x19a518u: goto label_19a518;
        case 0x19a51cu: goto label_19a51c;
        case 0x19a520u: goto label_19a520;
        case 0x19a524u: goto label_19a524;
        case 0x19a528u: goto label_19a528;
        case 0x19a52cu: goto label_19a52c;
        case 0x19a530u: goto label_19a530;
        case 0x19a534u: goto label_19a534;
        case 0x19a538u: goto label_19a538;
        case 0x19a53cu: goto label_19a53c;
        case 0x19a540u: goto label_19a540;
        case 0x19a544u: goto label_19a544;
        case 0x19a548u: goto label_19a548;
        case 0x19a54cu: goto label_19a54c;
        case 0x19a550u: goto label_19a550;
        case 0x19a554u: goto label_19a554;
        case 0x19a558u: goto label_19a558;
        case 0x19a55cu: goto label_19a55c;
        case 0x19a560u: goto label_19a560;
        case 0x19a564u: goto label_19a564;
        case 0x19a568u: goto label_19a568;
        case 0x19a56cu: goto label_19a56c;
        case 0x19a570u: goto label_19a570;
        case 0x19a574u: goto label_19a574;
        case 0x19a578u: goto label_19a578;
        case 0x19a57cu: goto label_19a57c;
        case 0x19a580u: goto label_19a580;
        case 0x19a584u: goto label_19a584;
        case 0x19a588u: goto label_19a588;
        case 0x19a58cu: goto label_19a58c;
        case 0x19a590u: goto label_19a590;
        case 0x19a594u: goto label_19a594;
        case 0x19a598u: goto label_19a598;
        case 0x19a59cu: goto label_19a59c;
        case 0x19a5a0u: goto label_19a5a0;
        case 0x19a5a4u: goto label_19a5a4;
        case 0x19a5a8u: goto label_19a5a8;
        case 0x19a5acu: goto label_19a5ac;
        case 0x19a5b0u: goto label_19a5b0;
        case 0x19a5b4u: goto label_19a5b4;
        case 0x19a5b8u: goto label_19a5b8;
        case 0x19a5bcu: goto label_19a5bc;
        case 0x19a5c0u: goto label_19a5c0;
        case 0x19a5c4u: goto label_19a5c4;
        case 0x19a5c8u: goto label_19a5c8;
        case 0x19a5ccu: goto label_19a5cc;
        case 0x19a5d0u: goto label_19a5d0;
        case 0x19a5d4u: goto label_19a5d4;
        case 0x19a5d8u: goto label_19a5d8;
        case 0x19a5dcu: goto label_19a5dc;
        case 0x19a5e0u: goto label_19a5e0;
        case 0x19a5e4u: goto label_19a5e4;
        case 0x19a5e8u: goto label_19a5e8;
        case 0x19a5ecu: goto label_19a5ec;
        case 0x19a5f0u: goto label_19a5f0;
        case 0x19a5f4u: goto label_19a5f4;
        case 0x19a5f8u: goto label_19a5f8;
        case 0x19a5fcu: goto label_19a5fc;
        case 0x19a600u: goto label_19a600;
        case 0x19a604u: goto label_19a604;
        case 0x19a608u: goto label_19a608;
        case 0x19a60cu: goto label_19a60c;
        case 0x19a610u: goto label_19a610;
        case 0x19a614u: goto label_19a614;
        case 0x19a618u: goto label_19a618;
        case 0x19a61cu: goto label_19a61c;
        case 0x19a620u: goto label_19a620;
        case 0x19a624u: goto label_19a624;
        case 0x19a628u: goto label_19a628;
        case 0x19a62cu: goto label_19a62c;
        case 0x19a630u: goto label_19a630;
        case 0x19a634u: goto label_19a634;
        case 0x19a638u: goto label_19a638;
        case 0x19a63cu: goto label_19a63c;
        case 0x19a640u: goto label_19a640;
        case 0x19a644u: goto label_19a644;
        default: break;
    }

    ctx->pc = 0x19a1b8u;

label_19a1b8:
    // 0x19a1b8: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_19a1bc:
    // 0x19a1bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19a1c0:
    // 0x19a1c0: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x19a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_19a1c4:
    // 0x19a1c4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x19a1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_19a1c8:
    // 0x19a1c8: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x19a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_19a1cc:
    // 0x19a1cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19a1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19a1d0:
    // 0x19a1d0: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x19a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_19a1d4:
    // 0x19a1d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19a1d8:
    // 0x19a1d8: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x19a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_19a1dc:
    // 0x19a1dc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_19a1e0:
    // 0x19a1e0: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x19a1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_19a1e4:
    // 0x19a1e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19a1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19a1e8:
    // 0x19a1e8: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_19a1ec:
    // 0x19a1ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19a1ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a1f0:
    // 0x19a1f0: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x19a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_19a1f4:
    // 0x19a1f4: 0x24a53888  addiu       $a1, $a1, 0x3888
    ctx->pc = 0x19a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14472));
label_19a1f8:
    // 0x19a1f8: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x19a1f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_19a1fc:
    // 0x19a1fc: 0x25083898  addiu       $t0, $t0, 0x3898
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14488));
label_19a200:
    // 0x19a200: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x19a200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_19a204:
    // 0x19a204: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_19a208:
    // 0x19a208: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x19a208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_19a20c:
    // 0x19a20c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19a210:
    // 0x19a210: 0x24090089  addiu       $t1, $zero, 0x89
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_19a214:
    // 0x19a214: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19a214u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a218:
    // 0x19a218: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_19a21c:
    // 0x19a21c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19a21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19a220:
    // 0x19a220: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19a224:
    // 0x19a224: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_19a228:
    // 0x19a228: 0x40f809  jalr        $v0
label_19a22c:
    if (ctx->pc == 0x19A22Cu) {
        ctx->pc = 0x19A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A228u;
        // 0x19a22c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A230u;
        goto label_19a230;
    }
    ctx->pc = 0x19A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A230u);
        ctx->pc = 0x19A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A228u;
        // 0x19a22c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A228u, 0x19A230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A230u;
label_19a230:
    // 0x19a230: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19a230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a234:
    // 0x19a234: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_19a238:
    if (ctx->pc == 0x19A238u) {
        ctx->pc = 0x19A23Cu;
        goto label_19a23c;
    }
    ctx->pc = 0x19A234u;
    {
        const bool branch_taken_0x19a234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a234) {
            ctx->pc = 0x19A248u;
            goto label_19a248;
        }
    }
    ctx->pc = 0x19A23Cu;
label_19a23c:
    // 0x19a23c: 0xc0686fe  jal         func_1A1BF8
label_19a240:
    if (ctx->pc == 0x19A240u) {
        ctx->pc = 0x19A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A23Cu;
        // 0x19a240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A244u;
        goto label_19a244;
    }
    ctx->pc = 0x19A23Cu;
    SET_GPR_U32(ctx, 31, 0x19A244u);
    ctx->pc = 0x19A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A23Cu;
    // 0x19a240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x19A23Cu, 0x19A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A244u;
label_19a244:
    // 0x19a244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19a244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a248:
    // 0x19a248: 0x56000027  bnel        $s0, $zero, . + 4 + (0x27 << 2)
label_19a24c:
    if (ctx->pc == 0x19A24Cu) {
        ctx->pc = 0x19A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A248u;
        // 0x19a24c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A250u;
        goto label_19a250;
    }
    ctx->pc = 0x19A248u;
    {
        const bool branch_taken_0x19a248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a248) {
            ctx->pc = 0x19A24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A248u;
            // 0x19a24c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2E8u;
            goto label_19a2e8;
        }
    }
    ctx->pc = 0x19A250u;
label_19a250:
    // 0x19a250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19a254:
    // 0x19a254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a258:
    // 0x19a258: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19a25c:
    // 0x19a25c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_19a260:
    // 0x19a260: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19a260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a264:
    // 0x19a264: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x19a264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_19a268:
    // 0x19a268: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x19a268u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_19a26c:
    // 0x19a26c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_19a270:
    // 0x19a270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a274:
    // 0x19a274: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x19a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19a278:
    // 0x19a278: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19a278u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_19a27c:
    // 0x19a27c: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x19a27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_19a280:
    // 0x19a280: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x19a280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_19a284:
    // 0x19a284: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19a284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a288:
    // 0x19a288: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a28c:
    // 0x19a28c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19a290:
    // 0x19a290: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a294:
    // 0x19a294: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x19a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_19a298:
    // 0x19a298: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x19a298u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_19a29c:
    // 0x19a29c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19a29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_19a2a0:
    // 0x19a2a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19a2a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a2a4:
    // 0x19a2a4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x19a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19a2a8:
    // 0x19a2a8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x19a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_19a2ac:
    // 0x19a2ac: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19a2b0:
    // 0x19a2b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_19a2b4:
    // 0x19a2b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19a2b8:
    // 0x19a2b8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_19a2bc:
    // 0x19a2bc: 0x40f809  jalr        $v0
label_19a2c0:
    if (ctx->pc == 0x19A2C0u) {
        ctx->pc = 0x19A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2BCu;
        // 0x19a2c0: 0x8e490000  lw          $t1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2C4u;
        goto label_19a2c4;
    }
    ctx->pc = 0x19A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A2C4u);
        ctx->pc = 0x19A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2BCu;
        // 0x19a2c0: 0x8e490000  lw          $t1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A2BCu, 0x19A2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A2C4u;
label_19a2c4:
    // 0x19a2c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19a2c8:
    // 0x19a2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a2cc:
    // 0x19a2cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a2d0:
    // 0x19a2d0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_19a2d4:
    // 0x19a2d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19a2d8:
    // 0x19a2d8: 0x40f809  jalr        $v0
label_19a2dc:
    if (ctx->pc == 0x19A2DCu) {
        ctx->pc = 0x19A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2D8u;
        // 0x19a2dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2E0u;
        goto label_19a2e0;
    }
    ctx->pc = 0x19A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A2E0u);
        ctx->pc = 0x19A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2D8u;
        // 0x19a2dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A2D8u, 0x19A2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A2E0u;
label_19a2e0:
    // 0x19a2e0: 0x100000cd  b           . + 4 + (0xCD << 2)
label_19a2e4:
    if (ctx->pc == 0x19A2E4u) {
        ctx->pc = 0x19A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2E0u;
        // 0x19a2e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2E8u;
        goto label_19a2e8;
    }
    ctx->pc = 0x19A2E0u;
    {
        const bool branch_taken_0x19a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2E0u;
        // 0x19a2e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2e0) {
            ctx->pc = 0x19A618u;
            goto label_19a618;
        }
    }
    ctx->pc = 0x19A2E8u;
label_19a2e8:
    // 0x19a2e8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x19a2e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a2ec:
    // 0x19a2ec: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_19a2f0:
    // 0x19a2f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19a2f4:
    // 0x19a2f4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19a2f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_19a2f8:
    // 0x19a2f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a2fc:
    // 0x19a2fc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_19a300:
    // 0x19a300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19a300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a304:
    // 0x19a304: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19a304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19a308:
    // 0x19a308: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19a30c:
    // 0x19a30c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_19a310:
    // 0x19a310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19a310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a314:
    // 0x19a314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19a318:
    // 0x19a318: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19a318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19a31c:
    // 0x19a31c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x19a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_19a320:
    // 0x19a320: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19a324:
    // 0x19a324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19a324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19a328:
    // 0x19a328: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_19a32c:
    // 0x19a32c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x19a32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_19a330:
    // 0x19a330: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19a330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19a334:
    // 0x19a334: 0x40f809  jalr        $v0
label_19a338:
    if (ctx->pc == 0x19A338u) {
        ctx->pc = 0x19A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A334u;
        // 0x19a338: 0x8e490000  lw          $t1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A33Cu;
        goto label_19a33c;
    }
    ctx->pc = 0x19A334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A33Cu);
        ctx->pc = 0x19A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A334u;
        // 0x19a338: 0x8e490000  lw          $t1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A334u, 0x19A33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A33Cu;
label_19a33c:
    // 0x19a33c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x19a33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a340:
    // 0x19a340: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x19a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a344:
    // 0x19a344: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x19a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a348:
    // 0x19a348: 0xc6060018  lwc1        $f6, 0x18($s0)
    ctx->pc = 0x19a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19a34c:
    // 0x19a34c: 0xc607001c  lwc1        $f7, 0x1C($s0)
    ctx->pc = 0x19a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19a350:
    // 0x19a350: 0xc6080020  lwc1        $f8, 0x20($s0)
    ctx->pc = 0x19a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_19a354:
    // 0x19a354: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x19a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19a358:
    // 0x19a358: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x19a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19a35c:
    // 0x19a35c: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x19a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19a360:
    // 0x19a360: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x19a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19a364:
    // 0x19a364: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x19a364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_19a368:
    // 0x19a368: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x19a368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_19a36c:
    // 0x19a36c: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x19a36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_19a370:
    // 0x19a370: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x19a370u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_19a374:
    // 0x19a374: 0xe7a70054  swc1        $f7, 0x54($sp)
    ctx->pc = 0x19a374u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_19a378:
    // 0x19a378: 0xe7a80058  swc1        $f8, 0x58($sp)
    ctx->pc = 0x19a378u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_19a37c:
    // 0x19a37c: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x19a37cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_19a380:
    // 0x19a380: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x19a380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_19a384:
    // 0x19a384: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x19a384u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_19a388:
    // 0x19a388: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x19a388u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_19a38c:
    // 0x19a38c: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x19a38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_19a390:
    // 0x19a390: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x19a390u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19a394:
    // 0x19a394: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x19a394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19a398:
    // 0x19a398: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19a398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a39c:
    // 0x19a39c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x19a39cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_19a3a0:
    // 0x19a3a0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a3a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a3a4:
    // 0x19a3a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a3a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a3a8:
    // 0x19a3a8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x19a3a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a3ac:
    // 0x19a3ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x19a3acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19a3b0:
    // 0x19a3b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19a3b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19a3b4:
    // 0x19a3b4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x19a3b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_19a3b8:
    // 0x19a3b8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a3b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a3bc:
    // 0x19a3bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a3bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a3c0:
    // 0x19a3c0: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x19a3c0u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a3c4:
    // 0x19a3c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19a3c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a3c8:
    // 0x19a3c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x19a3c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3cc:
    // 0x19a3cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19a3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3d0:
    // 0x19a3d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x19a3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3d4:
    // 0x19a3d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19a3d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19a3d8:
    // 0x19a3d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x19a3d8u;
    // VWAITQ (Q already resolved in this runtime)
label_19a3dc:
    // 0x19a3dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x19a3dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3e0:
    // 0x19a3e0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x19a3e0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_19a3e4:
    // 0x19a3e4: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x19a3e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_19a3e8:
    // 0x19a3e8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x19a3e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3ec:
    // 0x19a3ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19a3ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3f0:
    // 0x19a3f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x19a3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a3f4:
    // 0x19a3f4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19a3f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19a3f8:
    // 0x19a3f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x19a3f8u;
    // VWAITQ (Q already resolved in this runtime)
label_19a3fc:
    // 0x19a3fc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x19a3fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a400:
    // 0x19a400: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x19a400u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_19a404:
    // 0x19a404: 0x7faa0120  sq          $t2, 0x120($sp)
    ctx->pc = 0x19a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 10));
label_19a408:
    // 0x19a408: 0x7faa0110  sq          $t2, 0x110($sp)
    ctx->pc = 0x19a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 10));
label_19a40c:
    // 0x19a40c: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x19a40cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_19a410:
    // 0x19a410: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19a410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a414:
    // 0x19a414: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x19a414u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19a418:
    // 0x19a418: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x19a418u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a41c:
    // 0x19a41c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x19a41cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a420:
    // 0x19a420: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x19a420u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19a424:
    // 0x19a424: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x19a424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19a428:
    // 0x19a428: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x19a428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a42c:
    // 0x19a42c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19a42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a430:
    // 0x19a430: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19a430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a434:
    // 0x19a434: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19a434u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_19a438:
    // 0x19a438: 0x4a0003bf  vwaitq
    ctx->pc = 0x19a438u;
    // VWAITQ (Q already resolved in this runtime)
label_19a43c:
    // 0x19a43c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x19a43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a440:
    // 0x19a440: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x19a440u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_19a444:
    // 0x19a444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a448:
    // 0x19a448: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x19a448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_19a44c:
    // 0x19a44c: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x19a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_19a450:
    // 0x19a450: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x19a450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_19a454:
    // 0x19a454: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x19a454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_19a458:
    // 0x19a458: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a45c:
    // 0x19a45c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19a45cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_19a460:
    // 0x19a460: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x19a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_19a464:
    // 0x19a464: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19a464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a468:
    // 0x19a468: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x19a468u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_19a46c:
    // 0x19a46c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a46cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a470:
    // 0x19a470: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x19a470u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_19a474:
    // 0x19a474: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x19a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_19a478:
    // 0x19a478: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19a478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_19a47c:
    // 0x19a47c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a47cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19a480:
    // 0x19a480: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a484:
    // 0x19a484: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a484u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a488:
    // 0x19a488: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x19a488u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a48c:
    // 0x19a48c: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x19a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
label_19a490:
    // 0x19a490: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19a490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_19a494:
    // 0x19a494: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x19a494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_19a498:
    // 0x19a498: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a49c:
    // 0x19a49c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a49cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a4a0:
    // 0x19a4a0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x19a4a0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a4a4:
    // 0x19a4a4: 0x7faa0130  sq          $t2, 0x130($sp)
    ctx->pc = 0x19a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 10));
label_19a4a8:
    // 0x19a4a8: 0x7faa0060  sq          $t2, 0x60($sp)
    ctx->pc = 0x19a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
label_19a4ac:
    // 0x19a4ac: 0x7fa80180  sq          $t0, 0x180($sp)
    ctx->pc = 0x19a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 8));
label_19a4b0:
    // 0x19a4b0: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_19a4b4:
    // 0x19a4b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19a4b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19a4b8:
    // 0x19a4b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a4bc:
    // 0x19a4bc: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x19a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_19a4c0:
    // 0x19a4c0: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x19a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_19a4c4:
    // 0x19a4c4: 0x7fa40140  sq          $a0, 0x140($sp)
    ctx->pc = 0x19a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 4));
label_19a4c8:
    // 0x19a4c8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19a4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19a4cc:
    // 0x19a4cc: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x19a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_19a4d0:
    // 0x19a4d0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x19a4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_19a4d4:
    // 0x19a4d4: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x19a4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_19a4d8:
    // 0x19a4d8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x19a4d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_19a4dc:
    // 0x19a4dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a4e0:
    // 0x19a4e0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x19a4e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_19a4e4:
    // 0x19a4e4: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x19a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
label_19a4e8:
    // 0x19a4e8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x19a4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_19a4ec:
    // 0x19a4ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19a4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a4f0:
    // 0x19a4f0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a4f4:
    // 0x19a4f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a4f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a4f8:
    // 0x19a4f8: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x19a4f8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a4fc:
    // 0x19a4fc: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x19a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
label_19a500:
    // 0x19a500: 0x46090834  c.lt.s      $f1, $f9
    ctx->pc = 0x19a500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a504:
    // 0x19a504: 0x7fa90110  sq          $t1, 0x110($sp)
    ctx->pc = 0x19a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 9));
label_19a508:
    // 0x19a508: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x19a508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_19a50c:
    // 0x19a50c: 0x7fa40150  sq          $a0, 0x150($sp)
    ctx->pc = 0x19a50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 4));
label_19a510:
    // 0x19a510: 0x7fa50140  sq          $a1, 0x140($sp)
    ctx->pc = 0x19a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 5));
label_19a514:
    // 0x19a514: 0x7fa80170  sq          $t0, 0x170($sp)
    ctx->pc = 0x19a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 8));
label_19a518:
    // 0x19a518: 0x7fa40120  sq          $a0, 0x120($sp)
    ctx->pc = 0x19a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 4));
label_19a51c:
    // 0x19a51c: 0x7fa50160  sq          $a1, 0x160($sp)
    ctx->pc = 0x19a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 5));
label_19a520:
    // 0x19a520: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x19a520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
label_19a524:
    // 0x19a524: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x19a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
label_19a528:
    // 0x19a528: 0x7fa700c0  sq          $a3, 0xC0($sp)
    ctx->pc = 0x19a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 7));
label_19a52c:
    // 0x19a52c: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x19a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
label_19a530:
    // 0x19a530: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x19a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
label_19a534:
    // 0x19a534: 0x7fa600c0  sq          $a2, 0xC0($sp)
    ctx->pc = 0x19a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
label_19a538:
    // 0x19a538: 0x7fa90170  sq          $t1, 0x170($sp)
    ctx->pc = 0x19a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 9));
label_19a53c:
    // 0x19a53c: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x19a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
label_19a540:
    // 0x19a540: 0x7fa70160  sq          $a3, 0x160($sp)
    ctx->pc = 0x19a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 7));
label_19a544:
    // 0x19a544: 0x7fa70150  sq          $a3, 0x150($sp)
    ctx->pc = 0x19a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 7));
label_19a548:
    // 0x19a548: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x19a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_19a54c:
    // 0x19a54c: 0x7fa60140  sq          $a2, 0x140($sp)
    ctx->pc = 0x19a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 6));
label_19a550:
    // 0x19a550: 0x7fa60130  sq          $a2, 0x130($sp)
    ctx->pc = 0x19a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 6));
label_19a554:
    // 0x19a554: 0x7fa60110  sq          $a2, 0x110($sp)
    ctx->pc = 0x19a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 6));
label_19a558:
    // 0x19a558: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_19a55c:
    if (ctx->pc == 0x19A55Cu) {
        ctx->pc = 0x19A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A558u;
        // 0x19a55c: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A560u;
        goto label_19a560;
    }
    ctx->pc = 0x19A558u;
    {
        const bool branch_taken_0x19a558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A558u;
        // 0x19a55c: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a558) {
            ctx->pc = 0x19A594u;
            goto label_19a594;
        }
    }
    ctx->pc = 0x19A560u;
label_19a560:
    // 0x19a560: 0x0  nop
    ctx->pc = 0x19a560u;
    // NOP
label_19a564:
    // 0x19a564: 0x0  nop
    ctx->pc = 0x19a564u;
    // NOP
label_19a568:
    // 0x19a568: 0x46014803  div.s       $f0, $f9, $f1
    ctx->pc = 0x19a568u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[9], ctx->f[1]); }
label_19a56c:
    // 0x19a56c: 0xe6090024  swc1        $f9, 0x24($s0)
    ctx->pc = 0x19a56cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_19a570:
    // 0x19a570: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19a570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19a574:
    // 0x19a574: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x19a574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_19a578:
    // 0x19a578: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19a578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a57c:
    // 0x19a57c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a580:
    // 0x19a580: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19a580u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_19a584:
    // 0x19a584: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x19a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_19a588:
    // 0x19a588: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x19a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_19a58c:
    // 0x19a58c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x19a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_19a590:
    // 0x19a590: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x19a590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_19a594:
    // 0x19a594: 0x46091034  c.lt.s      $f2, $f9
    ctx->pc = 0x19a594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a598:
    // 0x19a598: 0x0  nop
    ctx->pc = 0x19a598u;
    // NOP
label_19a59c:
    // 0x19a59c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_19a5a0:
    if (ctx->pc == 0x19A5A0u) {
        ctx->pc = 0x19A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A59Cu;
        // 0x19a5a0: 0x7ba20070  lq          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A5A4u;
        goto label_19a5a4;
    }
    ctx->pc = 0x19A59Cu;
    {
        const bool branch_taken_0x19a59c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A59Cu;
        // 0x19a5a0: 0x7ba20070  lq          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a59c) {
            ctx->pc = 0x19A5D4u;
            goto label_19a5d4;
        }
    }
    ctx->pc = 0x19A5A4u;
label_19a5a4:
    // 0x19a5a4: 0x0  nop
    ctx->pc = 0x19a5a4u;
    // NOP
label_19a5a8:
    // 0x19a5a8: 0x0  nop
    ctx->pc = 0x19a5a8u;
    // NOP
label_19a5ac:
    // 0x19a5ac: 0x46024803  div.s       $f0, $f9, $f2
    ctx->pc = 0x19a5acu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[9], ctx->f[2]); }
label_19a5b0:
    // 0x19a5b0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19a5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19a5b4:
    // 0x19a5b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19a5b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19a5b8:
    // 0x19a5b8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x19a5b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_19a5bc:
    // 0x19a5bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a5c0:
    // 0x19a5c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19a5c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_19a5c4:
    // 0x19a5c4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x19a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_19a5c8:
    // 0x19a5c8: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x19a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_19a5cc:
    // 0x19a5cc: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x19a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_19a5d0:
    // 0x19a5d0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x19a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_19a5d4:
    // 0x19a5d4: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x19a5d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19a5d8:
    // 0x19a5d8: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x19a5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_19a5dc:
    // 0x19a5dc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x19a5dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19a5e0:
    // 0x19a5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a5e4:
    // 0x19a5e4: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x19a5e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19a5e8:
    // 0x19a5e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x19a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19a5ec:
    // 0x19a5ec: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x19a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_19a5f0:
    // 0x19a5f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x19a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_19a5f4:
    // 0x19a5f4: 0xc0cda36  jal         func_3368D8
label_19a5f8:
    if (ctx->pc == 0x19A5F8u) {
        ctx->pc = 0x19A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5F4u;
        // 0x19a5f8: 0x7fa60090  sq          $a2, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A5FCu;
        goto label_19a5fc;
    }
    ctx->pc = 0x19A5F4u;
    SET_GPR_U32(ctx, 31, 0x19A5FCu);
    ctx->pc = 0x19A5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5F4u;
    // 0x19a5f8: 0x7fa60090  sq          $a2, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x19A5F4u, 0x19A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5FCu;
label_19a5fc:
    // 0x19a5fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19a600:
    // 0x19a600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a604:
    // 0x19a604: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_19a608:
    // 0x19a608: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_19a60c:
    // 0x19a60c: 0x60f809  jalr        $v1
label_19a610:
    if (ctx->pc == 0x19A610u) {
        ctx->pc = 0x19A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A60Cu;
        // 0x19a610: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A614u;
        goto label_19a614;
    }
    ctx->pc = 0x19A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A614u);
        ctx->pc = 0x19A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A60Cu;
        // 0x19a610: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A60Cu, 0x19A614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A614u;
label_19a614:
    // 0x19a614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a618:
    // 0x19a618: 0xc066eec  jal         func_19BBB0
label_19a61c:
    if (ctx->pc == 0x19A61Cu) {
        ctx->pc = 0x19A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A618u;
        // 0x19a61c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A620u;
        goto label_19a620;
    }
    ctx->pc = 0x19A618u;
    SET_GPR_U32(ctx, 31, 0x19A620u);
    ctx->pc = 0x19A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A618u;
    // 0x19a61c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBB0u, 0x19A618u, 0x19A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A620u;
label_19a620:
    // 0x19a620: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x19a620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_19a624:
    // 0x19a624: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x19a624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_19a628:
    // 0x19a628: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x19a628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_19a62c:
    // 0x19a62c: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x19a62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_19a630:
    // 0x19a630: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x19a630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_19a634:
    // 0x19a634: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x19a634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_19a638:
    // 0x19a638: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x19a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19a63c:
    // 0x19a63c: 0x3e00008  jr          $ra
label_19a640:
    if (ctx->pc == 0x19A640u) {
        ctx->pc = 0x19A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A63Cu;
        // 0x19a640: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A644u;
        goto label_19a644;
    }
    ctx->pc = 0x19A63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A63Cu;
        // 0x19a640: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A644u;
label_19a644:
    // 0x19a644: 0x0  nop
    ctx->pc = 0x19a644u;
    // NOP
    ctx->pc = 0x19a648u;
}
