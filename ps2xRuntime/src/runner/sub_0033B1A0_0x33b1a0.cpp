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

// Function: sub_0033B1A0
// Address: 0x33b1a0 - 0x33b650
void sub_0033B1A0_0x33b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B1A0_0x33b1a0");
#endif

    switch (ctx->pc) {
        case 0x33b1a0u: goto label_33b1a0;
        case 0x33b1a4u: goto label_33b1a4;
        case 0x33b1a8u: goto label_33b1a8;
        case 0x33b1acu: goto label_33b1ac;
        case 0x33b1b0u: goto label_33b1b0;
        case 0x33b1b4u: goto label_33b1b4;
        case 0x33b1b8u: goto label_33b1b8;
        case 0x33b1bcu: goto label_33b1bc;
        case 0x33b1c0u: goto label_33b1c0;
        case 0x33b1c4u: goto label_33b1c4;
        case 0x33b1c8u: goto label_33b1c8;
        case 0x33b1ccu: goto label_33b1cc;
        case 0x33b1d0u: goto label_33b1d0;
        case 0x33b1d4u: goto label_33b1d4;
        case 0x33b1d8u: goto label_33b1d8;
        case 0x33b1dcu: goto label_33b1dc;
        case 0x33b1e0u: goto label_33b1e0;
        case 0x33b1e4u: goto label_33b1e4;
        case 0x33b1e8u: goto label_33b1e8;
        case 0x33b1ecu: goto label_33b1ec;
        case 0x33b1f0u: goto label_33b1f0;
        case 0x33b1f4u: goto label_33b1f4;
        case 0x33b1f8u: goto label_33b1f8;
        case 0x33b1fcu: goto label_33b1fc;
        case 0x33b200u: goto label_33b200;
        case 0x33b204u: goto label_33b204;
        case 0x33b208u: goto label_33b208;
        case 0x33b20cu: goto label_33b20c;
        case 0x33b210u: goto label_33b210;
        case 0x33b214u: goto label_33b214;
        case 0x33b218u: goto label_33b218;
        case 0x33b21cu: goto label_33b21c;
        case 0x33b220u: goto label_33b220;
        case 0x33b224u: goto label_33b224;
        case 0x33b228u: goto label_33b228;
        case 0x33b22cu: goto label_33b22c;
        case 0x33b230u: goto label_33b230;
        case 0x33b234u: goto label_33b234;
        case 0x33b238u: goto label_33b238;
        case 0x33b23cu: goto label_33b23c;
        case 0x33b240u: goto label_33b240;
        case 0x33b244u: goto label_33b244;
        case 0x33b248u: goto label_33b248;
        case 0x33b24cu: goto label_33b24c;
        case 0x33b250u: goto label_33b250;
        case 0x33b254u: goto label_33b254;
        case 0x33b258u: goto label_33b258;
        case 0x33b25cu: goto label_33b25c;
        case 0x33b260u: goto label_33b260;
        case 0x33b264u: goto label_33b264;
        case 0x33b268u: goto label_33b268;
        case 0x33b26cu: goto label_33b26c;
        case 0x33b270u: goto label_33b270;
        case 0x33b274u: goto label_33b274;
        case 0x33b278u: goto label_33b278;
        case 0x33b27cu: goto label_33b27c;
        case 0x33b280u: goto label_33b280;
        case 0x33b284u: goto label_33b284;
        case 0x33b288u: goto label_33b288;
        case 0x33b28cu: goto label_33b28c;
        case 0x33b290u: goto label_33b290;
        case 0x33b294u: goto label_33b294;
        case 0x33b298u: goto label_33b298;
        case 0x33b29cu: goto label_33b29c;
        case 0x33b2a0u: goto label_33b2a0;
        case 0x33b2a4u: goto label_33b2a4;
        case 0x33b2a8u: goto label_33b2a8;
        case 0x33b2acu: goto label_33b2ac;
        case 0x33b2b0u: goto label_33b2b0;
        case 0x33b2b4u: goto label_33b2b4;
        case 0x33b2b8u: goto label_33b2b8;
        case 0x33b2bcu: goto label_33b2bc;
        case 0x33b2c0u: goto label_33b2c0;
        case 0x33b2c4u: goto label_33b2c4;
        case 0x33b2c8u: goto label_33b2c8;
        case 0x33b2ccu: goto label_33b2cc;
        case 0x33b2d0u: goto label_33b2d0;
        case 0x33b2d4u: goto label_33b2d4;
        case 0x33b2d8u: goto label_33b2d8;
        case 0x33b2dcu: goto label_33b2dc;
        case 0x33b2e0u: goto label_33b2e0;
        case 0x33b2e4u: goto label_33b2e4;
        case 0x33b2e8u: goto label_33b2e8;
        case 0x33b2ecu: goto label_33b2ec;
        case 0x33b2f0u: goto label_33b2f0;
        case 0x33b2f4u: goto label_33b2f4;
        case 0x33b2f8u: goto label_33b2f8;
        case 0x33b2fcu: goto label_33b2fc;
        case 0x33b300u: goto label_33b300;
        case 0x33b304u: goto label_33b304;
        case 0x33b308u: goto label_33b308;
        case 0x33b30cu: goto label_33b30c;
        case 0x33b310u: goto label_33b310;
        case 0x33b314u: goto label_33b314;
        case 0x33b318u: goto label_33b318;
        case 0x33b31cu: goto label_33b31c;
        case 0x33b320u: goto label_33b320;
        case 0x33b324u: goto label_33b324;
        case 0x33b328u: goto label_33b328;
        case 0x33b32cu: goto label_33b32c;
        case 0x33b330u: goto label_33b330;
        case 0x33b334u: goto label_33b334;
        case 0x33b338u: goto label_33b338;
        case 0x33b33cu: goto label_33b33c;
        case 0x33b340u: goto label_33b340;
        case 0x33b344u: goto label_33b344;
        case 0x33b348u: goto label_33b348;
        case 0x33b34cu: goto label_33b34c;
        case 0x33b350u: goto label_33b350;
        case 0x33b354u: goto label_33b354;
        case 0x33b358u: goto label_33b358;
        case 0x33b35cu: goto label_33b35c;
        case 0x33b360u: goto label_33b360;
        case 0x33b364u: goto label_33b364;
        case 0x33b368u: goto label_33b368;
        case 0x33b36cu: goto label_33b36c;
        case 0x33b370u: goto label_33b370;
        case 0x33b374u: goto label_33b374;
        case 0x33b378u: goto label_33b378;
        case 0x33b37cu: goto label_33b37c;
        case 0x33b380u: goto label_33b380;
        case 0x33b384u: goto label_33b384;
        case 0x33b388u: goto label_33b388;
        case 0x33b38cu: goto label_33b38c;
        case 0x33b390u: goto label_33b390;
        case 0x33b394u: goto label_33b394;
        case 0x33b398u: goto label_33b398;
        case 0x33b39cu: goto label_33b39c;
        case 0x33b3a0u: goto label_33b3a0;
        case 0x33b3a4u: goto label_33b3a4;
        case 0x33b3a8u: goto label_33b3a8;
        case 0x33b3acu: goto label_33b3ac;
        case 0x33b3b0u: goto label_33b3b0;
        case 0x33b3b4u: goto label_33b3b4;
        case 0x33b3b8u: goto label_33b3b8;
        case 0x33b3bcu: goto label_33b3bc;
        case 0x33b3c0u: goto label_33b3c0;
        case 0x33b3c4u: goto label_33b3c4;
        case 0x33b3c8u: goto label_33b3c8;
        case 0x33b3ccu: goto label_33b3cc;
        case 0x33b3d0u: goto label_33b3d0;
        case 0x33b3d4u: goto label_33b3d4;
        case 0x33b3d8u: goto label_33b3d8;
        case 0x33b3dcu: goto label_33b3dc;
        case 0x33b3e0u: goto label_33b3e0;
        case 0x33b3e4u: goto label_33b3e4;
        case 0x33b3e8u: goto label_33b3e8;
        case 0x33b3ecu: goto label_33b3ec;
        case 0x33b3f0u: goto label_33b3f0;
        case 0x33b3f4u: goto label_33b3f4;
        case 0x33b3f8u: goto label_33b3f8;
        case 0x33b3fcu: goto label_33b3fc;
        case 0x33b400u: goto label_33b400;
        case 0x33b404u: goto label_33b404;
        case 0x33b408u: goto label_33b408;
        case 0x33b40cu: goto label_33b40c;
        case 0x33b410u: goto label_33b410;
        case 0x33b414u: goto label_33b414;
        case 0x33b418u: goto label_33b418;
        case 0x33b41cu: goto label_33b41c;
        case 0x33b420u: goto label_33b420;
        case 0x33b424u: goto label_33b424;
        case 0x33b428u: goto label_33b428;
        case 0x33b42cu: goto label_33b42c;
        case 0x33b430u: goto label_33b430;
        case 0x33b434u: goto label_33b434;
        case 0x33b438u: goto label_33b438;
        case 0x33b43cu: goto label_33b43c;
        case 0x33b440u: goto label_33b440;
        case 0x33b444u: goto label_33b444;
        case 0x33b448u: goto label_33b448;
        case 0x33b44cu: goto label_33b44c;
        case 0x33b450u: goto label_33b450;
        case 0x33b454u: goto label_33b454;
        case 0x33b458u: goto label_33b458;
        case 0x33b45cu: goto label_33b45c;
        case 0x33b460u: goto label_33b460;
        case 0x33b464u: goto label_33b464;
        case 0x33b468u: goto label_33b468;
        case 0x33b46cu: goto label_33b46c;
        case 0x33b470u: goto label_33b470;
        case 0x33b474u: goto label_33b474;
        case 0x33b478u: goto label_33b478;
        case 0x33b47cu: goto label_33b47c;
        case 0x33b480u: goto label_33b480;
        case 0x33b484u: goto label_33b484;
        case 0x33b488u: goto label_33b488;
        case 0x33b48cu: goto label_33b48c;
        case 0x33b490u: goto label_33b490;
        case 0x33b494u: goto label_33b494;
        case 0x33b498u: goto label_33b498;
        case 0x33b49cu: goto label_33b49c;
        case 0x33b4a0u: goto label_33b4a0;
        case 0x33b4a4u: goto label_33b4a4;
        case 0x33b4a8u: goto label_33b4a8;
        case 0x33b4acu: goto label_33b4ac;
        case 0x33b4b0u: goto label_33b4b0;
        case 0x33b4b4u: goto label_33b4b4;
        case 0x33b4b8u: goto label_33b4b8;
        case 0x33b4bcu: goto label_33b4bc;
        case 0x33b4c0u: goto label_33b4c0;
        case 0x33b4c4u: goto label_33b4c4;
        case 0x33b4c8u: goto label_33b4c8;
        case 0x33b4ccu: goto label_33b4cc;
        case 0x33b4d0u: goto label_33b4d0;
        case 0x33b4d4u: goto label_33b4d4;
        case 0x33b4d8u: goto label_33b4d8;
        case 0x33b4dcu: goto label_33b4dc;
        case 0x33b4e0u: goto label_33b4e0;
        case 0x33b4e4u: goto label_33b4e4;
        case 0x33b4e8u: goto label_33b4e8;
        case 0x33b4ecu: goto label_33b4ec;
        case 0x33b4f0u: goto label_33b4f0;
        case 0x33b4f4u: goto label_33b4f4;
        case 0x33b4f8u: goto label_33b4f8;
        case 0x33b4fcu: goto label_33b4fc;
        case 0x33b500u: goto label_33b500;
        case 0x33b504u: goto label_33b504;
        case 0x33b508u: goto label_33b508;
        case 0x33b50cu: goto label_33b50c;
        case 0x33b510u: goto label_33b510;
        case 0x33b514u: goto label_33b514;
        case 0x33b518u: goto label_33b518;
        case 0x33b51cu: goto label_33b51c;
        case 0x33b520u: goto label_33b520;
        case 0x33b524u: goto label_33b524;
        case 0x33b528u: goto label_33b528;
        case 0x33b52cu: goto label_33b52c;
        case 0x33b530u: goto label_33b530;
        case 0x33b534u: goto label_33b534;
        case 0x33b538u: goto label_33b538;
        case 0x33b53cu: goto label_33b53c;
        case 0x33b540u: goto label_33b540;
        case 0x33b544u: goto label_33b544;
        case 0x33b548u: goto label_33b548;
        case 0x33b54cu: goto label_33b54c;
        case 0x33b550u: goto label_33b550;
        case 0x33b554u: goto label_33b554;
        case 0x33b558u: goto label_33b558;
        case 0x33b55cu: goto label_33b55c;
        case 0x33b560u: goto label_33b560;
        case 0x33b564u: goto label_33b564;
        case 0x33b568u: goto label_33b568;
        case 0x33b56cu: goto label_33b56c;
        case 0x33b570u: goto label_33b570;
        case 0x33b574u: goto label_33b574;
        case 0x33b578u: goto label_33b578;
        case 0x33b57cu: goto label_33b57c;
        case 0x33b580u: goto label_33b580;
        case 0x33b584u: goto label_33b584;
        case 0x33b588u: goto label_33b588;
        case 0x33b58cu: goto label_33b58c;
        case 0x33b590u: goto label_33b590;
        case 0x33b594u: goto label_33b594;
        case 0x33b598u: goto label_33b598;
        case 0x33b59cu: goto label_33b59c;
        case 0x33b5a0u: goto label_33b5a0;
        case 0x33b5a4u: goto label_33b5a4;
        case 0x33b5a8u: goto label_33b5a8;
        case 0x33b5acu: goto label_33b5ac;
        case 0x33b5b0u: goto label_33b5b0;
        case 0x33b5b4u: goto label_33b5b4;
        case 0x33b5b8u: goto label_33b5b8;
        case 0x33b5bcu: goto label_33b5bc;
        case 0x33b5c0u: goto label_33b5c0;
        case 0x33b5c4u: goto label_33b5c4;
        case 0x33b5c8u: goto label_33b5c8;
        case 0x33b5ccu: goto label_33b5cc;
        case 0x33b5d0u: goto label_33b5d0;
        case 0x33b5d4u: goto label_33b5d4;
        case 0x33b5d8u: goto label_33b5d8;
        case 0x33b5dcu: goto label_33b5dc;
        case 0x33b5e0u: goto label_33b5e0;
        case 0x33b5e4u: goto label_33b5e4;
        case 0x33b5e8u: goto label_33b5e8;
        case 0x33b5ecu: goto label_33b5ec;
        case 0x33b5f0u: goto label_33b5f0;
        case 0x33b5f4u: goto label_33b5f4;
        case 0x33b5f8u: goto label_33b5f8;
        case 0x33b5fcu: goto label_33b5fc;
        case 0x33b600u: goto label_33b600;
        case 0x33b604u: goto label_33b604;
        case 0x33b608u: goto label_33b608;
        case 0x33b60cu: goto label_33b60c;
        case 0x33b610u: goto label_33b610;
        case 0x33b614u: goto label_33b614;
        case 0x33b618u: goto label_33b618;
        case 0x33b61cu: goto label_33b61c;
        case 0x33b620u: goto label_33b620;
        case 0x33b624u: goto label_33b624;
        case 0x33b628u: goto label_33b628;
        case 0x33b62cu: goto label_33b62c;
        case 0x33b630u: goto label_33b630;
        case 0x33b634u: goto label_33b634;
        case 0x33b638u: goto label_33b638;
        case 0x33b63cu: goto label_33b63c;
        case 0x33b640u: goto label_33b640;
        case 0x33b644u: goto label_33b644;
        case 0x33b648u: goto label_33b648;
        case 0x33b64cu: goto label_33b64c;
        default: break;
    }

    ctx->pc = 0x33b1a0u;

label_33b1a0:
    // 0x33b1a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_33b1a4:
    // 0x33b1a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x33b1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33b1a8:
    // 0x33b1a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x33b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_33b1ac:
    // 0x33b1ac: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x33b1acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b1b0:
    // 0x33b1b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33b1b4:
    // 0x33b1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33b1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b1b8:
    // 0x33b1b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x33b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_33b1bc:
    // 0x33b1bc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b1c0:
    // 0x33b1c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x33b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_33b1c4:
    // 0x33b1c4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x33b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_33b1c8:
    // 0x33b1c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x33b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_33b1cc:
    // 0x33b1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33b1d0:
    // 0x33b1d0: 0x8e2e0030  lw          $t6, 0x30($s1)
    ctx->pc = 0x33b1d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33b1d4:
    // 0x33b1d4: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x33b1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b1d8:
    // 0x33b1d8: 0xee1023  subu        $v0, $a3, $t6
    ctx->pc = 0x33b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_33b1dc:
    // 0x33b1dc: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x33b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_33b1e0:
    // 0x33b1e0: 0x1e2202a  slt         $a0, $t7, $v0
    ctx->pc = 0x33b1e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33b1e4:
    // 0x33b1e4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x33b1e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_33b1e8:
    // 0x33b1e8: 0x34a83  sra         $t1, $v1, 10
    ctx->pc = 0x33b1e8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 10));
label_33b1ec:
    // 0x33b1ec: 0x25330001  addiu       $s3, $t1, 0x1
    ctx->pc = 0x33b1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_33b1f0:
    // 0x33b1f0: 0x2656018  mult        $t4, $s3, $a1
    ctx->pc = 0x33b1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_33b1f4:
    // 0x33b1f4: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x33b1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_33b1f8:
    // 0x33b1f8: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x33b1f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_33b1fc:
    // 0x33b1fc: 0x554000a2  bnel        $t2, $zero, . + 4 + (0xA2 << 2)
label_33b200:
    if (ctx->pc == 0x33B200u) {
        ctx->pc = 0x33B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1FCu;
        // 0x33b200: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B204u;
        goto label_33b204;
    }
    ctx->pc = 0x33B1FCu;
    {
        const bool branch_taken_0x33b1fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b1fc) {
            ctx->pc = 0x33B200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B1FCu;
            // 0x33b200: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B488u;
            goto label_33b488;
        }
    }
    ctx->pc = 0x33B204u;
label_33b204:
    // 0x33b204: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x33b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33b208:
    // 0x33b208: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x33b208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33b20c:
    // 0x33b20c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33b210:
    // 0x33b210: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x33b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33b214:
    // 0x33b214: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x33b214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_33b218:
    // 0x33b218: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x33b218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33b21c:
    // 0x33b21c: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x33b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_33b220:
    // 0x33b220: 0x266282a  slt         $a1, $s3, $a2
    ctx->pc = 0x33b220u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33b224:
    // 0x33b224: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33b224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33b228:
    // 0x33b228: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x33b228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33b22c:
    // 0x33b22c: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x33b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_33b230:
    // 0x33b230: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x33b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_33b234:
    // 0x33b234: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33b234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33b238:
    // 0x33b238: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33b23c:
    // 0x33b23c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_33b240:
    if (ctx->pc == 0x33B240u) {
        ctx->pc = 0x33B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B23Cu;
        // 0x33b240: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B244u;
        goto label_33b244;
    }
    ctx->pc = 0x33B23Cu;
    {
        const bool branch_taken_0x33b23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B23Cu;
        // 0x33b240: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b23c) {
            ctx->pc = 0x33B270u;
            goto label_33b270;
        }
    }
    ctx->pc = 0x33B244u;
label_33b244:
    // 0x33b244: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x33b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33b248:
    // 0x33b248: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33b248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b24c:
    // 0x33b24c: 0xc41818  mult        $v1, $a2, $a0
    ctx->pc = 0x33b24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b250:
    // 0x33b250: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x33b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33b254:
    // 0x33b254: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x33b254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33b258:
    // 0x33b258: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x33b258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33b25c:
    // 0x33b25c: 0x0  nop
    ctx->pc = 0x33b25cu;
    // NOP
label_33b260:
    // 0x33b260: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_33b264:
    if (ctx->pc == 0x33B264u) {
        ctx->pc = 0x33B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B260u;
        // 0x33b264: 0xc41818  mult        $v1, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B268u;
        goto label_33b268;
    }
    ctx->pc = 0x33B260u;
    {
        const bool branch_taken_0x33b260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B260u;
        // 0x33b264: 0xc41818  mult        $v1, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b260) {
            ctx->pc = 0x33B250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b250;
        }
    }
    ctx->pc = 0x33B268u;
label_33b268:
    // 0x33b268: 0x1000000f  b           . + 4 + (0xF << 2)
label_33b26c:
    if (ctx->pc == 0x33B26Cu) {
        ctx->pc = 0x33B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B268u;
        // 0x33b26c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B270u;
        goto label_33b270;
    }
    ctx->pc = 0x33B268u;
    {
        const bool branch_taken_0x33b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B268u;
        // 0x33b26c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b268) {
            ctx->pc = 0x33B2A8u;
            goto label_33b2a8;
        }
    }
    ctx->pc = 0x33B270u;
label_33b270:
    // 0x33b270: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x33b270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33b274:
    // 0x33b274: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x33b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b278:
    // 0x33b278: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33b278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b27c:
    // 0x33b27c: 0xc32818  mult        $a1, $a2, $v1
    ctx->pc = 0x33b27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_33b280:
    // 0x33b280: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x33b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_33b284:
    // 0x33b284: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x33b284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33b288:
    // 0x33b288: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_33b28c:
    if (ctx->pc == 0x33B28Cu) {
        ctx->pc = 0x33B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B288u;
        // 0x33b28c: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B290u;
        goto label_33b290;
    }
    ctx->pc = 0x33B288u;
    {
        const bool branch_taken_0x33b288 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B288u;
        // 0x33b28c: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b288) {
            ctx->pc = 0x33B298u;
            goto label_33b298;
        }
    }
    ctx->pc = 0x33B290u;
label_33b290:
    // 0x33b290: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_33b294:
    if (ctx->pc == 0x33B294u) {
        ctx->pc = 0x33B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B290u;
        // 0x33b294: 0xc32818  mult        $a1, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B298u;
        goto label_33b298;
    }
    ctx->pc = 0x33B290u;
    {
        const bool branch_taken_0x33b290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B290u;
        // 0x33b294: 0xc32818  mult        $a1, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b290) {
            ctx->pc = 0x33B280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b280;
        }
    }
    ctx->pc = 0x33B298u;
label_33b298:
    // 0x33b298: 0xc32818  mult        $a1, $a2, $v1
    ctx->pc = 0x33b298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_33b29c:
    // 0x33b29c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x33b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33b2a0:
    // 0x33b2a0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x33b2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33b2a4:
    // 0x33b2a4: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x33b2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b2a8:
    // 0x33b2a8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b2ac:
    // 0x33b2ac: 0xc83818  mult        $a3, $a2, $t0
    ctx->pc = 0x33b2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_33b2b0:
    // 0x33b2b0: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x33b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_33b2b4:
    // 0x33b2b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x33b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33b2b8:
    // 0x33b2b8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x33b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_33b2bc:
    // 0x33b2bc: 0x56620008  bnel        $s3, $v0, . + 4 + (0x8 << 2)
label_33b2c0:
    if (ctx->pc == 0x33B2C0u) {
        ctx->pc = 0x33B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2BCu;
        // 0x33b2c0: 0x2682818  mult        $a1, $s3, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B2C4u;
        goto label_33b2c4;
    }
    ctx->pc = 0x33B2BCu;
    {
        const bool branch_taken_0x33b2bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b2bc) {
            ctx->pc = 0x33B2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B2BCu;
            // 0x33b2c0: 0x2682818  mult        $a1, $s3, $t0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B2E0u;
            goto label_33b2e0;
        }
    }
    ctx->pc = 0x33B2C4u;
label_33b2c4:
    // 0x33b2c4: 0x2681018  mult        $v0, $s3, $t0
    ctx->pc = 0x33b2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33b2c8:
    // 0x33b2c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33b2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33b2cc:
    // 0x33b2cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33b2d0:
    // 0x33b2d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33b2d4:
    // 0x33b2d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33b2d8:
    // 0x33b2d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_33b2dc:
    if (ctx->pc == 0x33B2DCu) {
        ctx->pc = 0x33B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2D8u;
        // 0x33b2dc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B2E0u;
        goto label_33b2e0;
    }
    ctx->pc = 0x33B2D8u;
    {
        const bool branch_taken_0x33b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2D8u;
        // 0x33b2dc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2d8) {
            ctx->pc = 0x33B33Cu;
            goto label_33b33c;
        }
    }
    ctx->pc = 0x33B2E0u;
label_33b2e0:
    // 0x33b2e0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x33b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33b2e4:
    // 0x33b2e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33b2e8:
    // 0x33b2e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b2ec:
    // 0x33b2ec: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b2f0:
    // 0x33b2f0: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x33b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_33b2f4:
    // 0x33b2f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33b2f8:
    // 0x33b2f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33b2fc:
    // 0x33b2fc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x33b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_33b300:
    // 0x33b300: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b304:
    // 0x33b304: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33b308:
    // 0x33b308: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x33b308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_33b30c:
    // 0x33b30c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b310:
    // 0x33b310: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x33b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_33b314:
    // 0x33b314: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x33b314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
label_33b318:
    // 0x33b318: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x33b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b31c:
    // 0x33b31c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x33b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33b320:
    // 0x33b320: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33b324:
    // 0x33b324: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x33b324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b328:
    // 0x33b328: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33b32c:
    // 0x33b32c: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x33b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
label_33b330:
    // 0x33b330: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33b334:
    // 0x33b334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33b338:
    // 0x33b338: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x33b338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_33b33c:
    // 0x33b33c: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x33b33cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b340:
    // 0x33b340: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x33b340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b344:
    // 0x33b344: 0x275a018  mult        $s4, $s3, $s5
    ctx->pc = 0x33b344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_33b348:
    // 0x33b348: 0x2862021  addu        $a0, $s4, $a2
    ctx->pc = 0x33b348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_33b34c:
    // 0x33b34c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x33b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33b350:
    // 0x33b350: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33b354:
    // 0x33b354: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x33b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_33b358:
    // 0x33b358: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_33b35c:
    if (ctx->pc == 0x33B35Cu) {
        ctx->pc = 0x33B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B358u;
        // 0x33b35c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B360u;
        goto label_33b360;
    }
    ctx->pc = 0x33B358u;
    {
        const bool branch_taken_0x33b358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b358) {
            ctx->pc = 0x33B35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B358u;
            // 0x33b35c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B3B8u;
            goto label_33b3b8;
        }
    }
    ctx->pc = 0x33B360u;
label_33b360:
    // 0x33b360: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x33b360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33b364:
    // 0x33b364: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x33b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_33b368:
    // 0x33b368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33b36c:
    // 0x33b36c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33b370:
    // 0x33b370: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b374:
    // 0x33b374: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x33b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b378:
    // 0x33b378: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x33b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_33b37c:
    // 0x33b37c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33b380:
    // 0x33b380: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x33b380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b384:
    // 0x33b384: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33b388:
    // 0x33b388: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33b38c:
    // 0x33b38c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x33b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_33b390:
    // 0x33b390: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x33b390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b394:
    // 0x33b394: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x33b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_33b398:
    // 0x33b398: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33b39c:
    // 0x33b39c: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x33b39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b3a0:
    // 0x33b3a0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33b3a4:
    // 0x33b3a4: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x33b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
label_33b3a8:
    // 0x33b3a8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33b3ac:
    // 0x33b3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33b3b0:
    // 0x33b3b0: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x33b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_33b3b4:
    // 0x33b3b4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b3b8:
    // 0x33b3b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33b3bc:
    // 0x33b3bc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x33b3bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b3c0:
    // 0x33b3c0: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x33b3c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_33b3c4:
    // 0x33b3c4: 0x54600098  bnel        $v1, $zero, . + 4 + (0x98 << 2)
label_33b3c8:
    if (ctx->pc == 0x33B3C8u) {
        ctx->pc = 0x33B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3C4u;
        // 0x33b3c8: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B3CCu;
        goto label_33b3cc;
    }
    ctx->pc = 0x33B3C4u;
    {
        const bool branch_taken_0x33b3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b3c4) {
            ctx->pc = 0x33B3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3C4u;
            // 0x33b3c8: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B628u;
            goto label_33b628;
        }
    }
    ctx->pc = 0x33B3CCu;
label_33b3cc:
    // 0x33b3cc: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x33b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_33b3d0:
    // 0x33b3d0: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x33b3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_33b3d4:
    // 0x33b3d4: 0x56020094  bnel        $s0, $v0, . + 4 + (0x94 << 2)
label_33b3d8:
    if (ctx->pc == 0x33B3D8u) {
        ctx->pc = 0x33B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3D4u;
        // 0x33b3d8: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B3DCu;
        goto label_33b3dc;
    }
    ctx->pc = 0x33B3D4u;
    {
        const bool branch_taken_0x33b3d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b3d4) {
            ctx->pc = 0x33B3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3D4u;
            // 0x33b3d8: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B628u;
            goto label_33b628;
        }
    }
    ctx->pc = 0x33B3DCu;
label_33b3dc:
    // 0x33b3dc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x33b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33b3e0:
    // 0x33b3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b3e4:
    // 0x33b3e4: 0x40f809  jalr        $v0
label_33b3e8:
    if (ctx->pc == 0x33B3E8u) {
        ctx->pc = 0x33B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3E4u;
        // 0x33b3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B3ECu;
        goto label_33b3ec;
    }
    ctx->pc = 0x33B3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B3ECu);
        ctx->pc = 0x33B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3E4u;
        // 0x33b3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B3E4u, 0x33B3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B3ECu;
label_33b3ec:
    // 0x33b3ec: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x33b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33b3f0:
    // 0x33b3f0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x33b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33b3f4:
    // 0x33b3f4: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x33b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_33b3f8:
    // 0x33b3f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33b3fc:
    // 0x33b3fc: 0x5444008a  bnel        $v0, $a0, . + 4 + (0x8A << 2)
label_33b400:
    if (ctx->pc == 0x33B400u) {
        ctx->pc = 0x33B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3FCu;
        // 0x33b400: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B404u;
        goto label_33b404;
    }
    ctx->pc = 0x33B3FCu;
    {
        const bool branch_taken_0x33b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x33b3fc) {
            ctx->pc = 0x33B400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3FCu;
            // 0x33b400: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B628u;
            goto label_33b628;
        }
    }
    ctx->pc = 0x33B404u;
label_33b404:
    // 0x33b404: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x33b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_33b408:
    // 0x33b408: 0x128280  sll         $s0, $s2, 10
    ctx->pc = 0x33b408u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
label_33b40c:
    // 0x33b40c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x33b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33b410:
    // 0x33b410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b414:
    // 0x33b414: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x33b414u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_33b418:
    // 0x33b418: 0x102823  negu        $a1, $s0
    ctx->pc = 0x33b418u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_33b41c:
    // 0x33b41c: 0x40f809  jalr        $v0
label_33b420:
    if (ctx->pc == 0x33B420u) {
        ctx->pc = 0x33B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B41Cu;
        // 0x33b420: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B424u;
        goto label_33b424;
    }
    ctx->pc = 0x33B41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B424u);
        ctx->pc = 0x33B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B41Cu;
        // 0x33b420: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B41Cu, 0x33B424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B424u;
label_33b424:
    // 0x33b424: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33b424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b428:
    // 0x33b428: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x33b428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_33b42c:
    // 0x33b42c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33b430:
    // 0x33b430: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x33b430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33b434:
    // 0x33b434: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x33b434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b438:
    // 0x33b438: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x33b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33b43c:
    // 0x33b43c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x33b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_33b440:
    // 0x33b440: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b444:
    // 0x33b444: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x33b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_33b448:
    // 0x33b448: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33b44c:
    // 0x33b44c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x33b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33b450:
    // 0x33b450: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x33b450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b454:
    // 0x33b454: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x33b454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33b458:
    // 0x33b458: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x33b458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_33b45c:
    // 0x33b45c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b460:
    // 0x33b460: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x33b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33b464:
    // 0x33b464: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x33b464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33b468:
    // 0x33b468: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x33b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_33b46c:
    // 0x33b46c: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x33b46cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33b470:
    // 0x33b470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33b474:
    // 0x33b474: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x33b474u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_33b478:
    // 0x33b478: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x33b478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_33b47c:
    // 0x33b47c: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x33b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
label_33b480:
    // 0x33b480: 0x10000069  b           . + 4 + (0x69 << 2)
label_33b484:
    if (ctx->pc == 0x33B484u) {
        ctx->pc = 0x33B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B480u;
        // 0x33b484: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B488u;
        goto label_33b488;
    }
    ctx->pc = 0x33B480u;
    {
        const bool branch_taken_0x33b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B480u;
        // 0x33b484: 0xae330034  sw          $s3, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b480) {
            ctx->pc = 0x33B628u;
            goto label_33b628;
        }
    }
    ctx->pc = 0x33B488u;
label_33b488:
    // 0x33b488: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x33b488u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b48c:
    // 0x33b48c: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x33b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33b490:
    // 0x33b490: 0x14d3004  sllv        $a2, $t5, $t2
    ctx->pc = 0x33b490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 10) & 0x1F));
label_33b494:
    // 0x33b494: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x33b494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33b498:
    // 0x33b498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33b49c:
    // 0x33b49c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x33b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33b4a0:
    // 0x33b4a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_33b4a4:
    // 0x33b4a4: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x33b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_33b4a8:
    // 0x33b4a8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x33b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33b4ac:
    // 0x33b4ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33b4b0:
    // 0x33b4b0: 0xae240044  sw          $a0, 0x44($s1)
    ctx->pc = 0x33b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
label_33b4b4:
    // 0x33b4b4: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x33b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_33b4b8:
    // 0x33b4b8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x33b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_33b4bc:
    // 0x33b4bc: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x33b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
label_33b4c0:
    // 0x33b4c0: 0x1423007  srav        $a2, $v0, $t2
    ctx->pc = 0x33b4c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
label_33b4c4:
    // 0x33b4c4: 0x92280  sll         $a0, $t1, 10
    ctx->pc = 0x33b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
label_33b4c8:
    // 0x33b4c8: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x33b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_33b4cc:
    // 0x33b4cc: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x33b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_33b4d0:
    // 0x33b4d0: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x33b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
label_33b4d4:
    // 0x33b4d4: 0x8d680004  lw          $t0, 0x4($t3)
    ctx->pc = 0x33b4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_33b4d8:
    // 0x33b4d8: 0x1421004  sllv        $v0, $v0, $t2
    ctx->pc = 0x33b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
label_33b4dc:
    // 0x33b4dc: 0x1503002e  bne         $t0, $v1, . + 4 + (0x2E << 2)
label_33b4e0:
    if (ctx->pc == 0x33B4E0u) {
        ctx->pc = 0x33B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4DCu;
        // 0x33b4e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B4E4u;
        goto label_33b4e4;
    }
    ctx->pc = 0x33B4DCu;
    {
        const bool branch_taken_0x33b4dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x33B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4DCu;
        // 0x33b4e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4dc) {
            ctx->pc = 0x33B598u;
            goto label_33b598;
        }
    }
    ctx->pc = 0x33B4E4u;
label_33b4e4:
    // 0x33b4e4: 0x1a6102a  slt         $v0, $t5, $a2
    ctx->pc = 0x33b4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33b4e8:
    // 0x33b4e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33b4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b4ec:
    // 0x33b4ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33b4f0:
    if (ctx->pc == 0x33B4F0u) {
        ctx->pc = 0x33B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4ECu;
        // 0x33b4f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B4F4u;
        goto label_33b4f4;
    }
    ctx->pc = 0x33B4ECu;
    {
        const bool branch_taken_0x33b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4ECu;
        // 0x33b4f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4ec) {
            ctx->pc = 0x33B510u;
            goto label_33b510;
        }
    }
    ctx->pc = 0x33B4F4u;
label_33b4f4:
    // 0x33b4f4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x33b4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33b4f8:
    // 0x33b4f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_33b4fc:
    // 0x33b4fc: 0x0  nop
    ctx->pc = 0x33b4fcu;
    // NOP
label_33b500:
    // 0x33b500: 0x0  nop
    ctx->pc = 0x33b500u;
    // NOP
label_33b504:
    // 0x33b504: 0x0  nop
    ctx->pc = 0x33b504u;
    // NOP
label_33b508:
    // 0x33b508: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
label_33b50c:
    if (ctx->pc == 0x33B50Cu) {
        ctx->pc = 0x33B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B508u;
        // 0x33b50c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B510u;
        goto label_33b510;
    }
    ctx->pc = 0x33B508u;
    {
        const bool branch_taken_0x33b508 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B508u;
        // 0x33b50c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b508) {
            ctx->pc = 0x33B4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b4f8;
        }
    }
    ctx->pc = 0x33B510u;
label_33b510:
    // 0x33b510: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_33b514:
    if (ctx->pc == 0x33B514u) {
        ctx->pc = 0x33B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B510u;
        // 0x33b514: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B518u;
        goto label_33b518;
    }
    ctx->pc = 0x33B510u;
    {
        const bool branch_taken_0x33b510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B510u;
        // 0x33b514: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b510) {
            ctx->pc = 0x33B520u;
            goto label_33b520;
        }
    }
    ctx->pc = 0x33B518u;
label_33b518:
    // 0x33b518: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33b51c:
    // 0x33b51c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x33b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_33b520:
    // 0x33b520: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b524:
    // 0x33b524: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33b524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b528:
    // 0x33b528: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x33b528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b52c:
    // 0x33b52c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b530:
    // 0x33b530: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x33b530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_33b534:
    // 0x33b534: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x33b534u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
label_33b538:
    // 0x33b538: 0x1484007  srav        $t0, $t0, $t2
    ctx->pc = 0x33b538u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
label_33b53c:
    // 0x33b53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b540:
    // 0x33b540: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x33b540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33b544:
    // 0x33b544: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x33b544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_33b548:
    // 0x33b548: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b54c:
    // 0x33b54c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33b550:
    // 0x33b550: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x33b550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_33b554:
    // 0x33b554: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x33b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33b558:
    // 0x33b558: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x33b558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33b55c:
    // 0x33b55c: 0x8e27004c  lw          $a3, 0x4C($s1)
    ctx->pc = 0x33b55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33b560:
    // 0x33b560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33b564:
    // 0x33b564: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x33b564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33b568:
    // 0x33b568: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x33b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
label_33b56c:
    // 0x33b56c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x33b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33b570:
    // 0x33b570: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x33b570u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_33b574:
    // 0x33b574: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x33b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
label_33b578:
    // 0x33b578: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x33b578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_33b57c:
    // 0x33b57c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x33b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_33b580:
    // 0x33b580: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x33b580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
label_33b584:
    // 0x33b584: 0xae27004c  sw          $a3, 0x4C($s1)
    ctx->pc = 0x33b584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 7));
label_33b588:
    // 0x33b588: 0xc0ced94  jal         func_33B650
label_33b58c:
    if (ctx->pc == 0x33B58Cu) {
        ctx->pc = 0x33B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B588u;
        // 0x33b58c: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B590u;
        goto label_33b590;
    }
    ctx->pc = 0x33B588u;
    SET_GPR_U32(ctx, 31, 0x33B590u);
    ctx->pc = 0x33B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B588u;
    // 0x33b58c: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x33B588u, 0x33B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B590u;
label_33b590:
    // 0x33b590: 0x10000026  b           . + 4 + (0x26 << 2)
label_33b594:
    if (ctx->pc == 0x33B594u) {
        ctx->pc = 0x33B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B590u;
        // 0x33b594: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B598u;
        goto label_33b598;
    }
    ctx->pc = 0x33B590u;
    {
        const bool branch_taken_0x33b590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B590u;
        // 0x33b594: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b590) {
            ctx->pc = 0x33B62Cu;
            goto label_33b62c;
        }
    }
    ctx->pc = 0x33B598u;
label_33b598:
    // 0x33b598: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_33b59c:
    if (ctx->pc == 0x33B59Cu) {
        ctx->pc = 0x33B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B598u;
        // 0x33b59c: 0x1e7182a  slt         $v1, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B5A0u;
        goto label_33b5a0;
    }
    ctx->pc = 0x33B598u;
    {
        const bool branch_taken_0x33b598 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B598u;
        // 0x33b59c: 0x1e7182a  slt         $v1, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b598) {
            ctx->pc = 0x33B5D4u;
            goto label_33b5d4;
        }
    }
    ctx->pc = 0x33B5A0u;
label_33b5a0:
    // 0x33b5a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33b5a4:
    // 0x33b5a4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x33b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_33b5a8:
    // 0x33b5a8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_33b5ac:
    // 0x33b5ac: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x33b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_33b5b0:
    // 0x33b5b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33b5b4:
    // 0x33b5b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33b5b8:
    if (ctx->pc == 0x33B5B8u) {
        ctx->pc = 0x33B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5B4u;
        // 0x33b5b8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B5BCu;
        goto label_33b5bc;
    }
    ctx->pc = 0x33B5B4u;
    {
        const bool branch_taken_0x33b5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b5b4) {
            ctx->pc = 0x33B5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B5B4u;
            // 0x33b5b8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B5BCu;
            goto label_33b5bc;
        }
    }
    ctx->pc = 0x33B5BCu;
label_33b5bc:
    // 0x33b5bc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b5c0:
    // 0x33b5c0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x33b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_33b5c4:
    // 0x33b5c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33b5c8:
    // 0x33b5c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33b5cc:
    // 0x33b5cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_33b5d0:
    if (ctx->pc == 0x33B5D0u) {
        ctx->pc = 0x33B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5CCu;
        // 0x33b5d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B5D4u;
        goto label_33b5d4;
    }
    ctx->pc = 0x33B5CCu;
    {
        const bool branch_taken_0x33b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5CCu;
        // 0x33b5d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5cc) {
            ctx->pc = 0x33B628u;
            goto label_33b628;
        }
    }
    ctx->pc = 0x33B5D4u;
label_33b5d4:
    // 0x33b5d4: 0x24e203ff  addiu       $v0, $a3, 0x3FF
    ctx->pc = 0x33b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1023));
label_33b5d8:
    // 0x33b5d8: 0xad6d0004  sw          $t5, 0x4($t3)
    ctx->pc = 0x33b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 13));
label_33b5dc:
    // 0x33b5dc: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x33b5dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
label_33b5e0:
    // 0x33b5e0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33b5e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33b5e4:
    // 0x33b5e4: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x33b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_33b5e8:
    // 0x33b5e8: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x33b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33b5ec:
    // 0x33b5ec: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33b5f0:
    // 0x33b5f0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x33b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_33b5f4:
    // 0x33b5f4: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x33b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_33b5f8:
    // 0x33b5f8: 0x1421007  srav        $v0, $v0, $t2
    ctx->pc = 0x33b5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
label_33b5fc:
    // 0x33b5fc: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x33b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_33b600:
    // 0x33b600: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33b600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_33b604:
    // 0x33b604: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x33b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_33b608:
    // 0x33b608: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x33b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_33b60c:
    // 0x33b60c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x33b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_33b610:
    // 0x33b610: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x33b610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_33b614:
    // 0x33b614: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_33b618:
    // 0x33b618: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x33b618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_33b61c:
    // 0x33b61c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33b620:
    // 0x33b620: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_33b624:
    if (ctx->pc == 0x33B624u) {
        ctx->pc = 0x33B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B620u;
        // 0x33b624: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B628u;
        goto label_33b628;
    }
    ctx->pc = 0x33B620u;
    {
        const bool branch_taken_0x33b620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b620) {
            ctx->pc = 0x33B624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B620u;
            // 0x33b624: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B628u;
            goto label_33b628;
        }
    }
    ctx->pc = 0x33B628u;
label_33b628:
    // 0x33b628: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x33b628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33b62c:
    // 0x33b62c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x33b62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33b630:
    // 0x33b630: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33b630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33b634:
    // 0x33b634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33b638:
    // 0x33b638: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x33b638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33b63c:
    // 0x33b63c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x33b63cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33b640:
    // 0x33b640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b644:
    // 0x33b644: 0x3e00008  jr          $ra
label_33b648:
    if (ctx->pc == 0x33B648u) {
        ctx->pc = 0x33B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B644u;
        // 0x33b648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B64Cu;
        goto label_33b64c;
    }
    ctx->pc = 0x33B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B644u;
        // 0x33b648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B64Cu;
label_33b64c:
    // 0x33b64c: 0x0  nop
    ctx->pc = 0x33b64cu;
    // NOP
    ctx->pc = 0x33b650u;
}
