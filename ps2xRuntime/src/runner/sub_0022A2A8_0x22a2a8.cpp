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

// Function: sub_0022A2A8
// Address: 0x22a2a8 - 0x22a770
void sub_0022A2A8_0x22a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A2A8_0x22a2a8");
#endif

    switch (ctx->pc) {
        case 0x22a2a8u: goto label_22a2a8;
        case 0x22a2acu: goto label_22a2ac;
        case 0x22a2b0u: goto label_22a2b0;
        case 0x22a2b4u: goto label_22a2b4;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2bcu: goto label_22a2bc;
        case 0x22a2c0u: goto label_22a2c0;
        case 0x22a2c4u: goto label_22a2c4;
        case 0x22a2c8u: goto label_22a2c8;
        case 0x22a2ccu: goto label_22a2cc;
        case 0x22a2d0u: goto label_22a2d0;
        case 0x22a2d4u: goto label_22a2d4;
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e0u: goto label_22a2e0;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2ecu: goto label_22a2ec;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a2f4u: goto label_22a2f4;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a2fcu: goto label_22a2fc;
        case 0x22a300u: goto label_22a300;
        case 0x22a304u: goto label_22a304;
        case 0x22a308u: goto label_22a308;
        case 0x22a30cu: goto label_22a30c;
        case 0x22a310u: goto label_22a310;
        case 0x22a314u: goto label_22a314;
        case 0x22a318u: goto label_22a318;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a320u: goto label_22a320;
        case 0x22a324u: goto label_22a324;
        case 0x22a328u: goto label_22a328;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a330u: goto label_22a330;
        case 0x22a334u: goto label_22a334;
        case 0x22a338u: goto label_22a338;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a340u: goto label_22a340;
        case 0x22a344u: goto label_22a344;
        case 0x22a348u: goto label_22a348;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a350u: goto label_22a350;
        case 0x22a354u: goto label_22a354;
        case 0x22a358u: goto label_22a358;
        case 0x22a35cu: goto label_22a35c;
        case 0x22a360u: goto label_22a360;
        case 0x22a364u: goto label_22a364;
        case 0x22a368u: goto label_22a368;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a370u: goto label_22a370;
        case 0x22a374u: goto label_22a374;
        case 0x22a378u: goto label_22a378;
        case 0x22a37cu: goto label_22a37c;
        case 0x22a380u: goto label_22a380;
        case 0x22a384u: goto label_22a384;
        case 0x22a388u: goto label_22a388;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a390u: goto label_22a390;
        case 0x22a394u: goto label_22a394;
        case 0x22a398u: goto label_22a398;
        case 0x22a39cu: goto label_22a39c;
        case 0x22a3a0u: goto label_22a3a0;
        case 0x22a3a4u: goto label_22a3a4;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3acu: goto label_22a3ac;
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        case 0x22a488u: goto label_22a488;
        case 0x22a48cu: goto label_22a48c;
        case 0x22a490u: goto label_22a490;
        case 0x22a494u: goto label_22a494;
        case 0x22a498u: goto label_22a498;
        case 0x22a49cu: goto label_22a49c;
        case 0x22a4a0u: goto label_22a4a0;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4a8u: goto label_22a4a8;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b0u: goto label_22a4b0;
        case 0x22a4b4u: goto label_22a4b4;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4bcu: goto label_22a4bc;
        case 0x22a4c0u: goto label_22a4c0;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4c8u: goto label_22a4c8;
        case 0x22a4ccu: goto label_22a4cc;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4d4u: goto label_22a4d4;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a4dcu: goto label_22a4dc;
        case 0x22a4e0u: goto label_22a4e0;
        case 0x22a4e4u: goto label_22a4e4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a4ecu: goto label_22a4ec;
        case 0x22a4f0u: goto label_22a4f0;
        case 0x22a4f4u: goto label_22a4f4;
        case 0x22a4f8u: goto label_22a4f8;
        case 0x22a4fcu: goto label_22a4fc;
        case 0x22a500u: goto label_22a500;
        case 0x22a504u: goto label_22a504;
        case 0x22a508u: goto label_22a508;
        case 0x22a50cu: goto label_22a50c;
        case 0x22a510u: goto label_22a510;
        case 0x22a514u: goto label_22a514;
        case 0x22a518u: goto label_22a518;
        case 0x22a51cu: goto label_22a51c;
        case 0x22a520u: goto label_22a520;
        case 0x22a524u: goto label_22a524;
        case 0x22a528u: goto label_22a528;
        case 0x22a52cu: goto label_22a52c;
        case 0x22a530u: goto label_22a530;
        case 0x22a534u: goto label_22a534;
        case 0x22a538u: goto label_22a538;
        case 0x22a53cu: goto label_22a53c;
        case 0x22a540u: goto label_22a540;
        case 0x22a544u: goto label_22a544;
        case 0x22a548u: goto label_22a548;
        case 0x22a54cu: goto label_22a54c;
        case 0x22a550u: goto label_22a550;
        case 0x22a554u: goto label_22a554;
        case 0x22a558u: goto label_22a558;
        case 0x22a55cu: goto label_22a55c;
        case 0x22a560u: goto label_22a560;
        case 0x22a564u: goto label_22a564;
        case 0x22a568u: goto label_22a568;
        case 0x22a56cu: goto label_22a56c;
        case 0x22a570u: goto label_22a570;
        case 0x22a574u: goto label_22a574;
        case 0x22a578u: goto label_22a578;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a580u: goto label_22a580;
        case 0x22a584u: goto label_22a584;
        case 0x22a588u: goto label_22a588;
        case 0x22a58cu: goto label_22a58c;
        case 0x22a590u: goto label_22a590;
        case 0x22a594u: goto label_22a594;
        case 0x22a598u: goto label_22a598;
        case 0x22a59cu: goto label_22a59c;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a5a4u: goto label_22a5a4;
        case 0x22a5a8u: goto label_22a5a8;
        case 0x22a5acu: goto label_22a5ac;
        case 0x22a5b0u: goto label_22a5b0;
        case 0x22a5b4u: goto label_22a5b4;
        case 0x22a5b8u: goto label_22a5b8;
        case 0x22a5bcu: goto label_22a5bc;
        case 0x22a5c0u: goto label_22a5c0;
        case 0x22a5c4u: goto label_22a5c4;
        case 0x22a5c8u: goto label_22a5c8;
        case 0x22a5ccu: goto label_22a5cc;
        case 0x22a5d0u: goto label_22a5d0;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5d8u: goto label_22a5d8;
        case 0x22a5dcu: goto label_22a5dc;
        case 0x22a5e0u: goto label_22a5e0;
        case 0x22a5e4u: goto label_22a5e4;
        case 0x22a5e8u: goto label_22a5e8;
        case 0x22a5ecu: goto label_22a5ec;
        case 0x22a5f0u: goto label_22a5f0;
        case 0x22a5f4u: goto label_22a5f4;
        case 0x22a5f8u: goto label_22a5f8;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a600u: goto label_22a600;
        case 0x22a604u: goto label_22a604;
        case 0x22a608u: goto label_22a608;
        case 0x22a60cu: goto label_22a60c;
        case 0x22a610u: goto label_22a610;
        case 0x22a614u: goto label_22a614;
        case 0x22a618u: goto label_22a618;
        case 0x22a61cu: goto label_22a61c;
        case 0x22a620u: goto label_22a620;
        case 0x22a624u: goto label_22a624;
        case 0x22a628u: goto label_22a628;
        case 0x22a62cu: goto label_22a62c;
        case 0x22a630u: goto label_22a630;
        case 0x22a634u: goto label_22a634;
        case 0x22a638u: goto label_22a638;
        case 0x22a63cu: goto label_22a63c;
        case 0x22a640u: goto label_22a640;
        case 0x22a644u: goto label_22a644;
        case 0x22a648u: goto label_22a648;
        case 0x22a64cu: goto label_22a64c;
        case 0x22a650u: goto label_22a650;
        case 0x22a654u: goto label_22a654;
        case 0x22a658u: goto label_22a658;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a660u: goto label_22a660;
        case 0x22a664u: goto label_22a664;
        case 0x22a668u: goto label_22a668;
        case 0x22a66cu: goto label_22a66c;
        case 0x22a670u: goto label_22a670;
        case 0x22a674u: goto label_22a674;
        case 0x22a678u: goto label_22a678;
        case 0x22a67cu: goto label_22a67c;
        case 0x22a680u: goto label_22a680;
        case 0x22a684u: goto label_22a684;
        case 0x22a688u: goto label_22a688;
        case 0x22a68cu: goto label_22a68c;
        case 0x22a690u: goto label_22a690;
        case 0x22a694u: goto label_22a694;
        case 0x22a698u: goto label_22a698;
        case 0x22a69cu: goto label_22a69c;
        case 0x22a6a0u: goto label_22a6a0;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6a8u: goto label_22a6a8;
        case 0x22a6acu: goto label_22a6ac;
        case 0x22a6b0u: goto label_22a6b0;
        case 0x22a6b4u: goto label_22a6b4;
        case 0x22a6b8u: goto label_22a6b8;
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a6c0u: goto label_22a6c0;
        case 0x22a6c4u: goto label_22a6c4;
        case 0x22a6c8u: goto label_22a6c8;
        case 0x22a6ccu: goto label_22a6cc;
        case 0x22a6d0u: goto label_22a6d0;
        case 0x22a6d4u: goto label_22a6d4;
        case 0x22a6d8u: goto label_22a6d8;
        case 0x22a6dcu: goto label_22a6dc;
        case 0x22a6e0u: goto label_22a6e0;
        case 0x22a6e4u: goto label_22a6e4;
        case 0x22a6e8u: goto label_22a6e8;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a6f0u: goto label_22a6f0;
        case 0x22a6f4u: goto label_22a6f4;
        case 0x22a6f8u: goto label_22a6f8;
        case 0x22a6fcu: goto label_22a6fc;
        case 0x22a700u: goto label_22a700;
        case 0x22a704u: goto label_22a704;
        case 0x22a708u: goto label_22a708;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a710u: goto label_22a710;
        case 0x22a714u: goto label_22a714;
        case 0x22a718u: goto label_22a718;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a720u: goto label_22a720;
        case 0x22a724u: goto label_22a724;
        case 0x22a728u: goto label_22a728;
        case 0x22a72cu: goto label_22a72c;
        case 0x22a730u: goto label_22a730;
        case 0x22a734u: goto label_22a734;
        case 0x22a738u: goto label_22a738;
        case 0x22a73cu: goto label_22a73c;
        case 0x22a740u: goto label_22a740;
        case 0x22a744u: goto label_22a744;
        case 0x22a748u: goto label_22a748;
        case 0x22a74cu: goto label_22a74c;
        case 0x22a750u: goto label_22a750;
        case 0x22a754u: goto label_22a754;
        case 0x22a758u: goto label_22a758;
        case 0x22a75cu: goto label_22a75c;
        case 0x22a760u: goto label_22a760;
        case 0x22a764u: goto label_22a764;
        case 0x22a768u: goto label_22a768;
        case 0x22a76cu: goto label_22a76c;
        default: break;
    }

    ctx->pc = 0x22a2a8u;

label_22a2a8:
    // 0x22a2a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_22a2ac:
    // 0x22a2ac: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_22a2b0:
    // 0x22a2b0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x22a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_22a2b4:
    // 0x22a2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a2b8:
    // 0x22a2b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_22a2bc:
    // 0x22a2bc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x22a2bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22a2c0:
    // 0x22a2c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_22a2c4:
    // 0x22a2c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x22a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_22a2c8:
    // 0x22a2c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x22a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_22a2cc:
    // 0x22a2cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22a2d0:
    // 0x22a2d0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x22a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_22a2d4:
    // 0x22a2d4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x22a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_22a2d8:
    // 0x22a2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22a2dc:
    // 0x22a2dc: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_22a2e0:
    if (ctx->pc == 0x22A2E0u) {
        ctx->pc = 0x22A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2DCu;
        // 0x22a2e0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2E4u;
        goto label_22a2e4;
    }
    ctx->pc = 0x22A2DCu;
    {
        const bool branch_taken_0x22a2dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2DCu;
        // 0x22a2e0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2dc) {
            ctx->pc = 0x22A340u;
            goto label_22a340;
        }
    }
    ctx->pc = 0x22A2E4u;
label_22a2e4:
    // 0x22a2e4: 0x263000c4  addiu       $s0, $s1, 0xC4
    ctx->pc = 0x22a2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_22a2e8:
    // 0x22a2e8: 0xc0e409a  jal         func_390268
label_22a2ec:
    if (ctx->pc == 0x22A2ECu) {
        ctx->pc = 0x22A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2E8u;
        // 0x22a2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2F0u;
        goto label_22a2f0;
    }
    ctx->pc = 0x22A2E8u;
    SET_GPR_U32(ctx, 31, 0x22A2F0u);
    ctx->pc = 0x22A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2E8u;
    // 0x22a2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22A2E8u, 0x22A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2F0u;
label_22a2f0:
    // 0x22a2f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22a2f4:
    if (ctx->pc == 0x22A2F4u) {
        ctx->pc = 0x22A2F8u;
        goto label_22a2f8;
    }
    ctx->pc = 0x22A2F0u;
    {
        const bool branch_taken_0x22a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2f0) {
            ctx->pc = 0x22A310u;
            goto label_22a310;
        }
    }
    ctx->pc = 0x22A2F8u;
label_22a2f8:
    // 0x22a2f8: 0xc0e409a  jal         func_390268
label_22a2fc:
    if (ctx->pc == 0x22A2FCu) {
        ctx->pc = 0x22A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2F8u;
        // 0x22a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A300u;
        goto label_22a300;
    }
    ctx->pc = 0x22A2F8u;
    SET_GPR_U32(ctx, 31, 0x22A300u);
    ctx->pc = 0x22A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2F8u;
    // 0x22a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22A2F8u, 0x22A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A300u;
label_22a300:
    // 0x22a300: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x22a300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_22a304:
    // 0x22a304: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x22a304u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_22a308:
    // 0x22a308: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_22a30c:
    if (ctx->pc == 0x22A30Cu) {
        ctx->pc = 0x22A310u;
        goto label_22a310;
    }
    ctx->pc = 0x22A308u;
    {
        const bool branch_taken_0x22a308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a308) {
            ctx->pc = 0x22A338u;
            goto label_22a338;
        }
    }
    ctx->pc = 0x22A310u;
label_22a310:
    // 0x22a310: 0xc089a76  jal         func_2269D8
label_22a314:
    if (ctx->pc == 0x22A314u) {
        ctx->pc = 0x22A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A310u;
        // 0x22a314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A318u;
        goto label_22a318;
    }
    ctx->pc = 0x22A310u;
    SET_GPR_U32(ctx, 31, 0x22A318u);
    ctx->pc = 0x22A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A310u;
    // 0x22a314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22A310u, 0x22A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A318u;
label_22a318:
    // 0x22a318: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22a31c:
    if (ctx->pc == 0x22A31Cu) {
        ctx->pc = 0x22A320u;
        goto label_22a320;
    }
    ctx->pc = 0x22A318u;
    {
        const bool branch_taken_0x22a318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a318) {
            ctx->pc = 0x22A340u;
            goto label_22a340;
        }
    }
    ctx->pc = 0x22A320u;
label_22a320:
    // 0x22a320: 0xc089a76  jal         func_2269D8
label_22a324:
    if (ctx->pc == 0x22A324u) {
        ctx->pc = 0x22A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A320u;
        // 0x22a324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A328u;
        goto label_22a328;
    }
    ctx->pc = 0x22A320u;
    SET_GPR_U32(ctx, 31, 0x22A328u);
    ctx->pc = 0x22A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A320u;
    // 0x22a324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22A320u, 0x22A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A328u;
label_22a328:
    // 0x22a328: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x22a328u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_22a32c:
    // 0x22a32c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x22a32cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_22a330:
    // 0x22a330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_22a334:
    if (ctx->pc == 0x22A334u) {
        ctx->pc = 0x22A338u;
        goto label_22a338;
    }
    ctx->pc = 0x22A330u;
    {
        const bool branch_taken_0x22a330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a330) {
            ctx->pc = 0x22A340u;
            goto label_22a340;
        }
    }
    ctx->pc = 0x22A338u;
label_22a338:
    // 0x22a338: 0xc0962a2  jal         func_258A88
label_22a33c:
    if (ctx->pc == 0x22A33Cu) {
        ctx->pc = 0x22A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A338u;
        // 0x22a33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A340u;
        goto label_22a340;
    }
    ctx->pc = 0x22A338u;
    SET_GPR_U32(ctx, 31, 0x22A340u);
    ctx->pc = 0x22A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A338u;
    // 0x22a33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x22A338u, 0x22A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A340u;
label_22a340:
    // 0x22a340: 0xc0874fa  jal         func_21D3E8
label_22a344:
    if (ctx->pc == 0x22A344u) {
        ctx->pc = 0x22A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A340u;
        // 0x22a344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A348u;
        goto label_22a348;
    }
    ctx->pc = 0x22A340u;
    SET_GPR_U32(ctx, 31, 0x22A348u);
    ctx->pc = 0x22A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A340u;
    // 0x22a344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22A340u, 0x22A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A348u;
label_22a348:
    // 0x22a348: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x22a348u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a34c:
    // 0x22a34c: 0x82e40019  lb          $a0, 0x19($s7)
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 25)));
label_22a350:
    // 0x22a350: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_22a354:
    if (ctx->pc == 0x22A354u) {
        ctx->pc = 0x22A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A350u;
        // 0x22a354: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A358u;
        goto label_22a358;
    }
    ctx->pc = 0x22A350u;
    {
        const bool branch_taken_0x22a350 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x22A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A350u;
        // 0x22a354: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a350) {
            ctx->pc = 0x22A370u;
            goto label_22a370;
        }
    }
    ctx->pc = 0x22A358u;
label_22a358:
    // 0x22a358: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x22a358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_22a35c:
    // 0x22a35c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x22a35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22a360:
    // 0x22a360: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_22a364:
    // 0x22a364: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22a368:
    // 0x22a368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a36c:
    // 0x22a36c: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x22a36cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
label_22a370:
    // 0x22a370: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x22a370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_22a374:
    // 0x22a374: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x22a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_22a378:
    // 0x22a378: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22a378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a37c:
    // 0x22a37c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22a37cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22a380:
    // 0x22a380: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_22a384:
    if (ctx->pc == 0x22A384u) {
        ctx->pc = 0x22A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A380u;
        // 0x22a384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A388u;
        goto label_22a388;
    }
    ctx->pc = 0x22A380u;
    {
        const bool branch_taken_0x22a380 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A380u;
        // 0x22a384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a380) {
            ctx->pc = 0x22A3D8u;
            goto label_22a3d8;
        }
    }
    ctx->pc = 0x22A388u;
label_22a388:
    // 0x22a388: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x22a388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_22a38c:
    // 0x22a38c: 0x0  nop
    ctx->pc = 0x22a38cu;
    // NOP
label_22a390:
    // 0x22a390: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a394:
    // 0x22a394: 0xc0e409a  jal         func_390268
label_22a398:
    if (ctx->pc == 0x22A398u) {
        ctx->pc = 0x22A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A394u;
        // 0x22a398: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A39Cu;
        goto label_22a39c;
    }
    ctx->pc = 0x22A394u;
    SET_GPR_U32(ctx, 31, 0x22A39Cu);
    ctx->pc = 0x22A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A394u;
    // 0x22a398: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22A394u, 0x22A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A39Cu;
label_22a39c:
    // 0x22a39c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22a3a0:
    if (ctx->pc == 0x22A3A0u) {
        ctx->pc = 0x22A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A39Cu;
        // 0x22a3a0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3A4u;
        goto label_22a3a4;
    }
    ctx->pc = 0x22A39Cu;
    {
        const bool branch_taken_0x22a39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A39Cu;
        // 0x22a3a0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a39c) {
            ctx->pc = 0x22A3C4u;
            goto label_22a3c4;
        }
    }
    ctx->pc = 0x22A3A4u;
label_22a3a4:
    // 0x22a3a4: 0xc087502  jal         func_21D408
label_22a3a8:
    if (ctx->pc == 0x22A3A8u) {
        ctx->pc = 0x22A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3A4u;
        // 0x22a3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3ACu;
        goto label_22a3ac;
    }
    ctx->pc = 0x22A3A4u;
    SET_GPR_U32(ctx, 31, 0x22A3ACu);
    ctx->pc = 0x22A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3A4u;
    // 0x22a3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22A3A4u, 0x22A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3ACu;
label_22a3ac:
    // 0x22a3ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a3b0:
    // 0x22a3b0: 0xc0a3bd2  jal         func_28EF48
label_22a3b4:
    if (ctx->pc == 0x22A3B4u) {
        ctx->pc = 0x22A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3B0u;
        // 0x22a3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3B8u;
        goto label_22a3b8;
    }
    ctx->pc = 0x22A3B0u;
    SET_GPR_U32(ctx, 31, 0x22A3B8u);
    ctx->pc = 0x22A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3B0u;
    // 0x22a3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x22A3B0u, 0x22A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3B8u;
label_22a3b8:
    // 0x22a3b8: 0xc13782a  jal         func_4DE0A8
label_22a3bc:
    if (ctx->pc == 0x22A3BCu) {
        ctx->pc = 0x22A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3B8u;
        // 0x22a3bc: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3C0u;
        goto label_22a3c0;
    }
    ctx->pc = 0x22A3B8u;
    SET_GPR_U32(ctx, 31, 0x22A3C0u);
    ctx->pc = 0x22A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3B8u;
    // 0x22a3bc: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x22A3B8u, 0x22A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3C0u;
label_22a3c0:
    // 0x22a3c0: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x22a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a3c4:
    // 0x22a3c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22a3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22a3c8:
    // 0x22a3c8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22a3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22a3cc:
    // 0x22a3cc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x22a3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22a3d0:
    // 0x22a3d0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_22a3d4:
    if (ctx->pc == 0x22A3D4u) {
        ctx->pc = 0x22A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D0u;
        // 0x22a3d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3D8u;
        goto label_22a3d8;
    }
    ctx->pc = 0x22A3D0u;
    {
        const bool branch_taken_0x22a3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D0u;
        // 0x22a3d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3d0) {
            ctx->pc = 0x22A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a390;
        }
    }
    ctx->pc = 0x22A3D8u;
label_22a3d8:
    // 0x22a3d8: 0xc087502  jal         func_21D408
label_22a3dc:
    if (ctx->pc == 0x22A3DCu) {
        ctx->pc = 0x22A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D8u;
        // 0x22a3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3E0u;
        goto label_22a3e0;
    }
    ctx->pc = 0x22A3D8u;
    SET_GPR_U32(ctx, 31, 0x22A3E0u);
    ctx->pc = 0x22A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3D8u;
    // 0x22a3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22A3D8u, 0x22A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3E0u;
label_22a3e0:
    // 0x22a3e0: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_22a3e4:
    // 0x22a3e4: 0xc08a200  jal         func_228800
label_22a3e8:
    if (ctx->pc == 0x22A3E8u) {
        ctx->pc = 0x22A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3E4u;
        // 0x22a3e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3ECu;
        goto label_22a3ec;
    }
    ctx->pc = 0x22A3E4u;
    SET_GPR_U32(ctx, 31, 0x22A3ECu);
    ctx->pc = 0x22A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3E4u;
    // 0x22a3e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x22A3E4u, 0x22A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3ECu;
label_22a3ec:
    // 0x22a3ec: 0x9223019d  lbu         $v1, 0x19D($s1)
    ctx->pc = 0x22a3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 413)));
label_22a3f0:
    // 0x22a3f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22a3f4:
    if (ctx->pc == 0x22A3F4u) {
        ctx->pc = 0x22A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3F0u;
        // 0x22a3f4: 0x9056011a  lbu         $s6, 0x11A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3F8u;
        goto label_22a3f8;
    }
    ctx->pc = 0x22A3F0u;
    {
        const bool branch_taken_0x22a3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3F0u;
        // 0x22a3f4: 0x9056011a  lbu         $s6, 0x11A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3f0) {
            ctx->pc = 0x22A404u;
            goto label_22a404;
        }
    }
    ctx->pc = 0x22A3F8u;
label_22a3f8:
    // 0x22a3f8: 0x3ac20003  xori        $v0, $s6, 0x3
    ctx->pc = 0x22a3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)3);
label_22a3fc:
    // 0x22a3fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_22a400:
    if (ctx->pc == 0x22A400u) {
        ctx->pc = 0x22A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3FCu;
        // 0x22a400: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A404u;
        goto label_22a404;
    }
    ctx->pc = 0x22A3FCu;
    {
        const bool branch_taken_0x22a3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a3fc) {
            ctx->pc = 0x22A400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A3FCu;
            // 0x22a400: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A404u;
            goto label_22a404;
        }
    }
    ctx->pc = 0x22A404u;
label_22a404:
    // 0x22a404: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22a404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22a408:
    // 0x22a408: 0xc0a33ae  jal         func_28CEB8
label_22a40c:
    if (ctx->pc == 0x22A40Cu) {
        ctx->pc = 0x22A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A408u;
        // 0x22a40c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A410u;
        goto label_22a410;
    }
    ctx->pc = 0x22A408u;
    SET_GPR_U32(ctx, 31, 0x22A410u);
    ctx->pc = 0x22A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A408u;
    // 0x22a40c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x22A408u, 0x22A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A410u;
label_22a410:
    // 0x22a410: 0xc0a36c8  jal         func_28DB20
label_22a414:
    if (ctx->pc == 0x22A414u) {
        ctx->pc = 0x22A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A410u;
        // 0x22a414: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A418u;
        goto label_22a418;
    }
    ctx->pc = 0x22A410u;
    SET_GPR_U32(ctx, 31, 0x22A418u);
    ctx->pc = 0x22A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A410u;
    // 0x22a414: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x22A410u, 0x22A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A418u;
label_22a418:
    // 0x22a418: 0xc0a3644  jal         func_28D910
label_22a41c:
    if (ctx->pc == 0x22A41Cu) {
        ctx->pc = 0x22A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A418u;
        // 0x22a41c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A420u;
        goto label_22a420;
    }
    ctx->pc = 0x22A418u;
    SET_GPR_U32(ctx, 31, 0x22A420u);
    ctx->pc = 0x22A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A418u;
    // 0x22a41c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x22A418u, 0x22A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A420u;
label_22a420:
    // 0x22a420: 0xc0934d0  jal         func_24D340
label_22a424:
    if (ctx->pc == 0x22A424u) {
        ctx->pc = 0x22A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A420u;
        // 0x22a424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A428u;
        goto label_22a428;
    }
    ctx->pc = 0x22A420u;
    SET_GPR_U32(ctx, 31, 0x22A428u);
    ctx->pc = 0x22A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A420u;
    // 0x22a424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D340u, 0x22A420u, 0x22A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A428u;
label_22a428:
    // 0x22a428: 0xc088ac6  jal         func_222B18
label_22a42c:
    if (ctx->pc == 0x22A42Cu) {
        ctx->pc = 0x22A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A428u;
        // 0x22a42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A430u;
        goto label_22a430;
    }
    ctx->pc = 0x22A428u;
    SET_GPR_U32(ctx, 31, 0x22A430u);
    ctx->pc = 0x22A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A428u;
    // 0x22a42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22A428u, 0x22A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A430u;
label_22a430:
    // 0x22a430: 0xc10614c  jal         func_418530
label_22a434:
    if (ctx->pc == 0x22A434u) {
        ctx->pc = 0x22A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A430u;
        // 0x22a434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A438u;
        goto label_22a438;
    }
    ctx->pc = 0x22A430u;
    SET_GPR_U32(ctx, 31, 0x22A438u);
    ctx->pc = 0x22A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A430u;
    // 0x22a434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418530u, 0x22A430u, 0x22A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A438u;
label_22a438:
    // 0x22a438: 0x13c00016  beqz        $fp, . + 4 + (0x16 << 2)
label_22a43c:
    if (ctx->pc == 0x22A43Cu) {
        ctx->pc = 0x22A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A438u;
        // 0x22a43c: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A440u;
        goto label_22a440;
    }
    ctx->pc = 0x22A438u;
    {
        const bool branch_taken_0x22a438 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A438u;
        // 0x22a43c: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a438) {
            ctx->pc = 0x22A494u;
            goto label_22a494;
        }
    }
    ctx->pc = 0x22A440u;
label_22a440:
    // 0x22a440: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22a440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22a444:
    // 0x22a444: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_22a448:
    if (ctx->pc == 0x22A448u) {
        ctx->pc = 0x22A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A444u;
        // 0x22a448: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A44Cu;
        goto label_22a44c;
    }
    ctx->pc = 0x22A444u;
    {
        const bool branch_taken_0x22a444 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A444u;
        // 0x22a448: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a444) {
            ctx->pc = 0x22A474u;
            goto label_22a474;
        }
    }
    ctx->pc = 0x22A44Cu;
label_22a44c:
    // 0x22a44c: 0xc108b68  jal         func_422DA0
label_22a450:
    if (ctx->pc == 0x22A450u) {
        ctx->pc = 0x22A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A44Cu;
        // 0x22a450: 0x2604e490  addiu       $a0, $s0, -0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A454u;
        goto label_22a454;
    }
    ctx->pc = 0x22A44Cu;
    SET_GPR_U32(ctx, 31, 0x22A454u);
    ctx->pc = 0x22A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A44Cu;
    // 0x22a450: 0x2604e490  addiu       $a0, $s0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422DA0u, 0x22A44Cu, 0x22A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A454u;
label_22a454:
    // 0x22a454: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x22a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22a458:
    // 0x22a458: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22a458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22a45c:
    // 0x22a45c: 0x24830840  addiu       $v1, $a0, 0x840
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_22a460:
    // 0x22a460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22a464:
    // 0x22a464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22a464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22a468:
    // 0x22a468: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x22a468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_22a46c:
    // 0x22a46c: 0xc071e24  jal         func_1C7890
label_22a470:
    if (ctx->pc == 0x22A470u) {
        ctx->pc = 0x22A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A46Cu;
        // 0x22a470: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A474u;
        goto label_22a474;
    }
    ctx->pc = 0x22A46Cu;
    SET_GPR_U32(ctx, 31, 0x22A474u);
    ctx->pc = 0x22A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A46Cu;
    // 0x22a470: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7890u, 0x22A46Cu, 0x22A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A474u;
label_22a474:
    // 0x22a474: 0x2604e490  addiu       $a0, $s0, -0x1B70
    ctx->pc = 0x22a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_22a478:
    // 0x22a478: 0xc108a5c  jal         func_422970
label_22a47c:
    if (ctx->pc == 0x22A47Cu) {
        ctx->pc = 0x22A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A478u;
        // 0x22a47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A480u;
        goto label_22a480;
    }
    ctx->pc = 0x22A478u;
    SET_GPR_U32(ctx, 31, 0x22A480u);
    ctx->pc = 0x22A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A478u;
    // 0x22a47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422970u, 0x22A478u, 0x22A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A480u;
label_22a480:
    // 0x22a480: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x22a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a484:
    // 0x22a484: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22a488:
    // 0x22a488: 0xc107b18  jal         func_41EC60
label_22a48c:
    if (ctx->pc == 0x22A48Cu) {
        ctx->pc = 0x22A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A488u;
        // 0x22a48c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A490u;
        goto label_22a490;
    }
    ctx->pc = 0x22A488u;
    SET_GPR_U32(ctx, 31, 0x22A490u);
    ctx->pc = 0x22A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A488u;
    // 0x22a48c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EC60u, 0x22A488u, 0x22A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A490u;
label_22a490:
    // 0x22a490: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a494:
    // 0x22a494: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x22a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_22a498:
    // 0x22a498: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_22a49c:
    if (ctx->pc == 0x22A49Cu) {
        ctx->pc = 0x22A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A498u;
        // 0x22a49c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4A0u;
        goto label_22a4a0;
    }
    ctx->pc = 0x22A498u;
    {
        const bool branch_taken_0x22a498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A498u;
        // 0x22a49c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a498) {
            ctx->pc = 0x22A52Cu;
            goto label_22a52c;
        }
    }
    ctx->pc = 0x22A4A0u;
label_22a4a0:
    // 0x22a4a0: 0xc089b98  jal         func_226E60
label_22a4a4:
    if (ctx->pc == 0x22A4A4u) {
        ctx->pc = 0x22A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A0u;
        // 0x22a4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4A8u;
        goto label_22a4a8;
    }
    ctx->pc = 0x22A4A0u;
    SET_GPR_U32(ctx, 31, 0x22A4A8u);
    ctx->pc = 0x22A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4A0u;
    // 0x22a4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x22A4A0u, 0x22A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4A8u;
label_22a4a8:
    // 0x22a4a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22a4ac:
    if (ctx->pc == 0x22A4ACu) {
        ctx->pc = 0x22A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A8u;
        // 0x22a4ac: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4B0u;
        goto label_22a4b0;
    }
    ctx->pc = 0x22A4A8u;
    {
        const bool branch_taken_0x22a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A8u;
        // 0x22a4ac: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4a8) {
            ctx->pc = 0x22A4D4u;
            goto label_22a4d4;
        }
    }
    ctx->pc = 0x22A4B0u;
label_22a4b0:
    // 0x22a4b0: 0xc089b98  jal         func_226E60
label_22a4b4:
    if (ctx->pc == 0x22A4B4u) {
        ctx->pc = 0x22A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4B0u;
        // 0x22a4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4B8u;
        goto label_22a4b8;
    }
    ctx->pc = 0x22A4B0u;
    SET_GPR_U32(ctx, 31, 0x22A4B8u);
    ctx->pc = 0x22A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4B0u;
    // 0x22a4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x22A4B0u, 0x22A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4B8u;
label_22a4b8:
    // 0x22a4b8: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x22a4b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_22a4bc:
    // 0x22a4bc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x22a4bcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_22a4c0:
    // 0x22a4c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22a4c4:
    if (ctx->pc == 0x22A4C4u) {
        ctx->pc = 0x22A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4C0u;
        // 0x22a4c4: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4C8u;
        goto label_22a4c8;
    }
    ctx->pc = 0x22A4C0u;
    {
        const bool branch_taken_0x22a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4C0u;
        // 0x22a4c4: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4c0) {
            ctx->pc = 0x22A4D4u;
            goto label_22a4d4;
        }
    }
    ctx->pc = 0x22A4C8u;
label_22a4c8:
    // 0x22a4c8: 0xc089bdc  jal         func_226F70
label_22a4cc:
    if (ctx->pc == 0x22A4CCu) {
        ctx->pc = 0x22A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4C8u;
        // 0x22a4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4D0u;
        goto label_22a4d0;
    }
    ctx->pc = 0x22A4C8u;
    SET_GPR_U32(ctx, 31, 0x22A4D0u);
    ctx->pc = 0x22A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4C8u;
    // 0x22a4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x22A4C8u, 0x22A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4D0u;
label_22a4d0:
    // 0x22a4d0: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x22a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a4d4:
    // 0x22a4d4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22a4d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22a4d8:
    // 0x22a4d8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_22a4dc:
    if (ctx->pc == 0x22A4DCu) {
        ctx->pc = 0x22A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4D8u;
        // 0x22a4dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4E0u;
        goto label_22a4e0;
    }
    ctx->pc = 0x22A4D8u;
    {
        const bool branch_taken_0x22a4d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4D8u;
        // 0x22a4dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4d8) {
            ctx->pc = 0x22A528u;
            goto label_22a528;
        }
    }
    ctx->pc = 0x22A4E0u;
label_22a4e0:
    // 0x22a4e0: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x22a4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_22a4e4:
    // 0x22a4e4: 0x0  nop
    ctx->pc = 0x22a4e4u;
    // NOP
label_22a4e8:
    // 0x22a4e8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x22a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a4ec:
    // 0x22a4ec: 0xc0e409a  jal         func_390268
label_22a4f0:
    if (ctx->pc == 0x22A4F0u) {
        ctx->pc = 0x22A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4ECu;
        // 0x22a4f0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4F4u;
        goto label_22a4f4;
    }
    ctx->pc = 0x22A4ECu;
    SET_GPR_U32(ctx, 31, 0x22A4F4u);
    ctx->pc = 0x22A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4ECu;
    // 0x22a4f0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22A4ECu, 0x22A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4F4u;
label_22a4f4:
    // 0x22a4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a4f8:
    // 0x22a4f8: 0xc089b98  jal         func_226E60
label_22a4fc:
    if (ctx->pc == 0x22A4FCu) {
        ctx->pc = 0x22A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F8u;
        // 0x22a4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A500u;
        goto label_22a500;
    }
    ctx->pc = 0x22A4F8u;
    SET_GPR_U32(ctx, 31, 0x22A500u);
    ctx->pc = 0x22A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4F8u;
    // 0x22a4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x22A4F8u, 0x22A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A500u;
label_22a500:
    // 0x22a500: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
label_22a504:
    if (ctx->pc == 0x22A504u) {
        ctx->pc = 0x22A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A500u;
        // 0x22a504: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A508u;
        goto label_22a508;
    }
    ctx->pc = 0x22A500u;
    {
        const bool branch_taken_0x22a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x22A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A500u;
        // 0x22a504: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a500) {
            ctx->pc = 0x22A514u;
            goto label_22a514;
        }
    }
    ctx->pc = 0x22A508u;
label_22a508:
    // 0x22a508: 0xc089bdc  jal         func_226F70
label_22a50c:
    if (ctx->pc == 0x22A50Cu) {
        ctx->pc = 0x22A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A508u;
        // 0x22a50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A510u;
        goto label_22a510;
    }
    ctx->pc = 0x22A508u;
    SET_GPR_U32(ctx, 31, 0x22A510u);
    ctx->pc = 0x22A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A508u;
    // 0x22a50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x22A508u, 0x22A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A510u;
label_22a510:
    // 0x22a510: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a514:
    // 0x22a514: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22a514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22a518:
    // 0x22a518: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22a51c:
    // 0x22a51c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x22a51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22a520:
    // 0x22a520: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_22a524:
    if (ctx->pc == 0x22A524u) {
        ctx->pc = 0x22A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A520u;
        // 0x22a524: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A528u;
        goto label_22a528;
    }
    ctx->pc = 0x22A520u;
    {
        const bool branch_taken_0x22a520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A520u;
        // 0x22a524: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a520) {
            ctx->pc = 0x22A4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a4e8;
        }
    }
    ctx->pc = 0x22A528u;
label_22a528:
    // 0x22a528: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22a528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22a52c:
    // 0x22a52c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x22a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22a530:
    // 0x22a530: 0x24b20840  addiu       $s2, $a1, 0x840
    ctx->pc = 0x22a530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
label_22a534:
    // 0x22a534: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x22a534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22a538:
    // 0x22a538: 0xc10671a  jal         func_419C68
label_22a53c:
    if (ctx->pc == 0x22A53Cu) {
        ctx->pc = 0x22A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A538u;
        // 0x22a53c: 0x822501b0  lb          $a1, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A540u;
        goto label_22a540;
    }
    ctx->pc = 0x22A538u;
    SET_GPR_U32(ctx, 31, 0x22A540u);
    ctx->pc = 0x22A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A538u;
    // 0x22a53c: 0x822501b0  lb          $a1, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C68u, 0x22A538u, 0x22A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A540u;
label_22a540:
    // 0x22a540: 0x8e300380  lw          $s0, 0x380($s1)
    ctx->pc = 0x22a540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22a544:
    // 0x22a544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a548:
    // 0x22a548: 0xc06c900  jal         func_1B2400
label_22a54c:
    if (ctx->pc == 0x22A54Cu) {
        ctx->pc = 0x22A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A548u;
        // 0x22a54c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A550u;
        goto label_22a550;
    }
    ctx->pc = 0x22A548u;
    SET_GPR_U32(ctx, 31, 0x22A550u);
    ctx->pc = 0x22A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A548u;
    // 0x22a54c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2400u, 0x22A548u, 0x22A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A550u;
label_22a550:
    // 0x22a550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a554:
    // 0x22a554: 0xc06c8bc  jal         func_1B22F0
label_22a558:
    if (ctx->pc == 0x22A558u) {
        ctx->pc = 0x22A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A554u;
        // 0x22a558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A55Cu;
        goto label_22a55c;
    }
    ctx->pc = 0x22A554u;
    SET_GPR_U32(ctx, 31, 0x22A55Cu);
    ctx->pc = 0x22A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A554u;
    // 0x22a558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B22F0u, 0x22A554u, 0x22A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A55Cu;
label_22a55c:
    // 0x22a55c: 0xae330380  sw          $s3, 0x380($s1)
    ctx->pc = 0x22a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 19));
label_22a560:
    // 0x22a560: 0x8ea2020c  lw          $v0, 0x20C($s5)
    ctx->pc = 0x22a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
label_22a564:
    // 0x22a564: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x22a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_22a568:
    // 0x22a568: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_22a56c:
    if (ctx->pc == 0x22A56Cu) {
        ctx->pc = 0x22A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A568u;
        // 0x22a56c: 0xa2f30019  sb          $s3, 0x19($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 25), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A570u;
        goto label_22a570;
    }
    ctx->pc = 0x22A568u;
    {
        const bool branch_taken_0x22a568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a568) {
            ctx->pc = 0x22A56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A568u;
            // 0x22a56c: 0xa2f30019  sb          $s3, 0x19($s7) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 23), 25), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A580u;
            goto label_22a580;
        }
    }
    ctx->pc = 0x22A570u;
label_22a570:
    // 0x22a570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a574:
    // 0x22a574: 0xc06ce58  jal         func_1B3960
label_22a578:
    if (ctx->pc == 0x22A578u) {
        ctx->pc = 0x22A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A574u;
        // 0x22a578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A57Cu;
        goto label_22a57c;
    }
    ctx->pc = 0x22A574u;
    SET_GPR_U32(ctx, 31, 0x22A57Cu);
    ctx->pc = 0x22A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A574u;
    // 0x22a578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3960u, 0x22A574u, 0x22A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A57Cu;
label_22a57c:
    // 0x22a57c: 0xa2f30019  sb          $s3, 0x19($s7)
    ctx->pc = 0x22a57cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 25), (uint8_t)GPR_U32(ctx, 19));
label_22a580:
    // 0x22a580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a584:
    // 0x22a584: 0xa2e0001b  sb          $zero, 0x1B($s7)
    ctx->pc = 0x22a584u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 27), (uint8_t)GPR_U32(ctx, 0));
label_22a588:
    // 0x22a588: 0xc0598c2  jal         func_166308
label_22a58c:
    if (ctx->pc == 0x22A58Cu) {
        ctx->pc = 0x22A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A588u;
        // 0x22a58c: 0x8ea4020c  lw          $a0, 0x20C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A590u;
        goto label_22a590;
    }
    ctx->pc = 0x22A588u;
    SET_GPR_U32(ctx, 31, 0x22A590u);
    ctx->pc = 0x22A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A588u;
    // 0x22a58c: 0x8ea4020c  lw          $a0, 0x20C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166308u, 0x22A588u, 0x22A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A590u;
label_22a590:
    // 0x22a590: 0xc088ad6  jal         func_222B58
label_22a594:
    if (ctx->pc == 0x22A594u) {
        ctx->pc = 0x22A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A590u;
        // 0x22a594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A598u;
        goto label_22a598;
    }
    ctx->pc = 0x22A590u;
    SET_GPR_U32(ctx, 31, 0x22A598u);
    ctx->pc = 0x22A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A590u;
    // 0x22a594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x22A590u, 0x22A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A598u;
label_22a598:
    // 0x22a598: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x22a598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_22a59c:
    // 0x22a59c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22a5a0:
    if (ctx->pc == 0x22A5A0u) {
        ctx->pc = 0x22A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A59Cu;
        // 0x22a5a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5A4u;
        goto label_22a5a4;
    }
    ctx->pc = 0x22A59Cu;
    {
        const bool branch_taken_0x22a59c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A59Cu;
        // 0x22a5a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a59c) {
            ctx->pc = 0x22A5B8u;
            goto label_22a5b8;
        }
    }
    ctx->pc = 0x22A5A4u;
label_22a5a4:
    // 0x22a5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a5a8:
    // 0x22a5a8: 0x0  nop
    ctx->pc = 0x22a5a8u;
    // NOP
label_22a5ac:
    // 0x22a5ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a5b0:
    // 0x22a5b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_22a5b4:
    if (ctx->pc == 0x22A5B4u) {
        ctx->pc = 0x22A5B8u;
        goto label_22a5b8;
    }
    ctx->pc = 0x22A5B0u;
    {
        const bool branch_taken_0x22a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5b0) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x22A5B8u;
label_22a5b8:
    // 0x22a5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22a5bc:
    // 0x22a5bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22a5c0:
    // 0x22a5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a5c4:
    // 0x22a5c4: 0x0  nop
    ctx->pc = 0x22a5c4u;
    // NOP
label_22a5c8:
    // 0x22a5c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a5cc:
    // 0x22a5cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22a5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22a5d0:
    // 0x22a5d0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x22a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_22a5d4:
    // 0x22a5d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22a5d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_22a5d8:
    // 0x22a5d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a5dc:
    // 0x22a5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a5e0:
    // 0x22a5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22a5e4:
    // 0x22a5e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22a5e8:
    // 0x22a5e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22a5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22a5ec:
    // 0x22a5ec: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x22a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a5f0:
    // 0x22a5f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22a5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_22a5f4:
    // 0x22a5f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22a5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22a5f8:
    // 0x22a5f8: 0x84a20144  lh          $v0, 0x144($a1)
    ctx->pc = 0x22a5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 324)));
label_22a5fc:
    // 0x22a5fc: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x22a5fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_22a600:
    // 0x22a600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a604:
    // 0x22a604: 0x0  nop
    ctx->pc = 0x22a604u;
    // NOP
label_22a608:
    // 0x22a608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a60c:
    // 0x22a60c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22a610:
    // 0x22a610: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22a610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_22a614:
    // 0x22a614: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_22a618:
    // 0x22a618: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x22a618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22a61c:
    // 0x22a61c: 0xa4a20144  sh          $v0, 0x144($a1)
    ctx->pc = 0x22a61cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 324), (uint16_t)GPR_U32(ctx, 2));
label_22a620:
    // 0x22a620: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a624:
    // 0x22a624: 0x84620146  lh          $v0, 0x146($v1)
    ctx->pc = 0x22a624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
label_22a628:
    // 0x22a628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a62c:
    // 0x22a62c: 0x0  nop
    ctx->pc = 0x22a62cu;
    // NOP
label_22a630:
    // 0x22a630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a634:
    // 0x22a634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22a638:
    // 0x22a638: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22a638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_22a63c:
    // 0x22a63c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a63cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_22a640:
    // 0x22a640: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22a640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22a644:
    // 0x22a644: 0xc088c1a  jal         func_223068
label_22a648:
    if (ctx->pc == 0x22A648u) {
        ctx->pc = 0x22A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A644u;
        // 0x22a648: 0xa4620146  sh          $v0, 0x146($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 326), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A64Cu;
        goto label_22a64c;
    }
    ctx->pc = 0x22A644u;
    SET_GPR_U32(ctx, 31, 0x22A64Cu);
    ctx->pc = 0x22A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A644u;
    // 0x22a648: 0xa4620146  sh          $v0, 0x146($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 326), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x22A644u, 0x22A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A64Cu;
label_22a64c:
    // 0x22a64c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a650:
    // 0x22a650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a654:
    // 0x22a654: 0xc088c62  jal         func_223188
label_22a658:
    if (ctx->pc == 0x22A658u) {
        ctx->pc = 0x22A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A654u;
        // 0x22a658: 0xa4620148  sh          $v0, 0x148($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A65Cu;
        goto label_22a65c;
    }
    ctx->pc = 0x22A654u;
    SET_GPR_U32(ctx, 31, 0x22A65Cu);
    ctx->pc = 0x22A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A654u;
    // 0x22a658: 0xa4620148  sh          $v0, 0x148($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223188u, 0x22A654u, 0x22A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A65Cu;
label_22a65c:
    // 0x22a65c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a660:
    // 0x22a660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a664:
    // 0x22a664: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22a668:
    // 0x22a668: 0xc08a6e4  jal         func_229B90
label_22a66c:
    if (ctx->pc == 0x22A66Cu) {
        ctx->pc = 0x22A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A668u;
        // 0x22a66c: 0xa462014a  sh          $v0, 0x14A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A670u;
        goto label_22a670;
    }
    ctx->pc = 0x22A668u;
    SET_GPR_U32(ctx, 31, 0x22A670u);
    ctx->pc = 0x22A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A668u;
    // 0x22a66c: 0xa462014a  sh          $v0, 0x14A($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B90u, 0x22A668u, 0x22A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A670u;
label_22a670:
    // 0x22a670: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a674:
    // 0x22a674: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22a674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22a678:
    // 0x22a678: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22a67c:
    // 0x22a67c: 0x40f809  jalr        $v0
label_22a680:
    if (ctx->pc == 0x22A680u) {
        ctx->pc = 0x22A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A67Cu;
        // 0x22a680: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A684u;
        goto label_22a684;
    }
    ctx->pc = 0x22A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A684u);
        ctx->pc = 0x22A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A67Cu;
        // 0x22a680: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A67Cu, 0x22A684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A684u;
label_22a684:
    // 0x22a684: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_22a688:
    if (ctx->pc == 0x22A688u) {
        ctx->pc = 0x22A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A684u;
        // 0x22a688: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A68Cu;
        goto label_22a68c;
    }
    ctx->pc = 0x22A684u;
    {
        const bool branch_taken_0x22a684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a684) {
            ctx->pc = 0x22A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A684u;
            // 0x22a688: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A6E0u;
            goto label_22a6e0;
        }
    }
    ctx->pc = 0x22A68Cu;
label_22a68c:
    // 0x22a68c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a690:
    // 0x22a690: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22a690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22a694:
    // 0x22a694: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22a698:
    // 0x22a698: 0x40f809  jalr        $v0
label_22a69c:
    if (ctx->pc == 0x22A69Cu) {
        ctx->pc = 0x22A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A698u;
        // 0x22a69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6A0u;
        goto label_22a6a0;
    }
    ctx->pc = 0x22A698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A6A0u);
        ctx->pc = 0x22A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A698u;
        // 0x22a69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A698u, 0x22A6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A6A0u;
label_22a6a0:
    // 0x22a6a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22a6a4:
    // 0x22a6a4: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x22a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_22a6a8:
    // 0x22a6a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22a6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22a6ac:
    // 0x22a6ac: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22a6b0:
    // 0x22a6b0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x22a6b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_22a6b4:
    // 0x22a6b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22a6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22a6b8:
    // 0x22a6b8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x22a6b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22a6bc:
    // 0x22a6bc: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x22a6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22a6c0:
    // 0x22a6c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a6c4:
    // 0x22a6c4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22a6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22a6c8:
    // 0x22a6c8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22a6cc:
    // 0x22a6cc: 0x40f809  jalr        $v0
label_22a6d0:
    if (ctx->pc == 0x22A6D0u) {
        ctx->pc = 0x22A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6CCu;
        // 0x22a6d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6D4u;
        goto label_22a6d4;
    }
    ctx->pc = 0x22A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A6D4u);
        ctx->pc = 0x22A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6CCu;
        // 0x22a6d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A6CCu, 0x22A6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A6D4u;
label_22a6d4:
    // 0x22a6d4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x22a6d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a6d8:
    // 0x22a6d8: 0x7c430060  sq          $v1, 0x60($v0)
    ctx->pc = 0x22a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 3));
label_22a6dc:
    // 0x22a6dc: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x22a6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_22a6e0:
    // 0x22a6e0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x22a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_22a6e4:
    // 0x22a6e4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x22a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_22a6e8:
    // 0x22a6e8: 0x3c05fdff  lui         $a1, 0xFDFF
    ctx->pc = 0x22a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65023 << 16));
label_22a6ec:
    // 0x22a6ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x22a6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_22a6f0:
    // 0x22a6f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22a6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22a6f4:
    // 0x22a6f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22a6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22a6f8:
    // 0x22a6f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_22a6fc:
    // 0x22a6fc: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x22a6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_22a700:
    // 0x22a700: 0x12c60003  beq         $s6, $a2, . + 4 + (0x3 << 2)
label_22a704:
    if (ctx->pc == 0x22A704u) {
        ctx->pc = 0x22A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A700u;
        // 0x22a704: 0xfe2400e0  sd          $a0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A708u;
        goto label_22a708;
    }
    ctx->pc = 0x22A700u;
    {
        const bool branch_taken_0x22a700 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 6));
        ctx->pc = 0x22A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A700u;
        // 0x22a704: 0xfe2400e0  sd          $a0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a700) {
            ctx->pc = 0x22A710u;
            goto label_22a710;
        }
    }
    ctx->pc = 0x22A708u;
label_22a708:
    // 0x22a708: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
label_22a70c:
    if (ctx->pc == 0x22A70Cu) {
        ctx->pc = 0x22A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A708u;
        // 0x22a70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A710u;
        goto label_22a710;
    }
    ctx->pc = 0x22A708u;
    {
        const bool branch_taken_0x22a708 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a708) {
            ctx->pc = 0x22A70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A708u;
            // 0x22a70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A724u;
            goto label_22a724;
        }
    }
    ctx->pc = 0x22A710u;
label_22a710:
    // 0x22a710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a714:
    // 0x22a714: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22a718:
    // 0x22a718: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x22a718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_22a71c:
    // 0x22a71c: 0x10000004  b           . + 4 + (0x4 << 2)
label_22a720:
    if (ctx->pc == 0x22A720u) {
        ctx->pc = 0x22A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A71Cu;
        // 0x22a720: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A724u;
        goto label_22a724;
    }
    ctx->pc = 0x22A71Cu;
    {
        const bool branch_taken_0x22a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A71Cu;
        // 0x22a720: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a71c) {
            ctx->pc = 0x22A730u;
            goto label_22a730;
        }
    }
    ctx->pc = 0x22A724u;
label_22a724:
    // 0x22a724: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_22a728:
    if (ctx->pc == 0x22A728u) {
        ctx->pc = 0x22A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A724u;
        // 0x22a728: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A72Cu;
        goto label_22a72c;
    }
    ctx->pc = 0x22A724u;
    {
        const bool branch_taken_0x22a724 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A724u;
        // 0x22a728: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a724) {
            ctx->pc = 0x22A734u;
            goto label_22a734;
        }
    }
    ctx->pc = 0x22A72Cu;
label_22a72c:
    // 0x22a72c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x22a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_22a730:
    // 0x22a730: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x22a730u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_22a734:
    // 0x22a734: 0xc088b26  jal         func_222C98
label_22a738:
    if (ctx->pc == 0x22A738u) {
        ctx->pc = 0x22A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A734u;
        // 0x22a738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A73Cu;
        goto label_22a73c;
    }
    ctx->pc = 0x22A734u;
    SET_GPR_U32(ctx, 31, 0x22A73Cu);
    ctx->pc = 0x22A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A734u;
    // 0x22a738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222C98u, 0x22A734u, 0x22A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A73Cu;
label_22a73c:
    // 0x22a73c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22a73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22a740:
    // 0x22a740: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22a740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22a744:
    // 0x22a744: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22a744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22a748:
    // 0x22a748: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x22a748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22a74c:
    // 0x22a74c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22a74cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22a750:
    // 0x22a750: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22a750u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22a754:
    // 0x22a754: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x22a754u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22a758:
    // 0x22a758: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x22a758u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a75c:
    // 0x22a75c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x22a75cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a760:
    // 0x22a760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a764:
    // 0x22a764: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22a768:
    // 0x22a768: 0x3e00008  jr          $ra
label_22a76c:
    if (ctx->pc == 0x22A76Cu) {
        ctx->pc = 0x22A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A768u;
        // 0x22a76c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A770u;
        goto label_fallthrough_0x22a768;
    }
    ctx->pc = 0x22A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A768u;
        // 0x22a76c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22a768:
    ctx->pc = 0x22A770u;
}
