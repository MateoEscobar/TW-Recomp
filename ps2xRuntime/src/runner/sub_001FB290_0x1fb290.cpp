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

// Function: sub_001FB290
// Address: 0x1fb290 - 0x1fb790
void sub_001FB290_0x1fb290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB290_0x1fb290");
#endif

    switch (ctx->pc) {
        case 0x1fb290u: goto label_1fb290;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb298u: goto label_1fb298;
        case 0x1fb29cu: goto label_1fb29c;
        case 0x1fb2a0u: goto label_1fb2a0;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2a8u: goto label_1fb2a8;
        case 0x1fb2acu: goto label_1fb2ac;
        case 0x1fb2b0u: goto label_1fb2b0;
        case 0x1fb2b4u: goto label_1fb2b4;
        case 0x1fb2b8u: goto label_1fb2b8;
        case 0x1fb2bcu: goto label_1fb2bc;
        case 0x1fb2c0u: goto label_1fb2c0;
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2c8u: goto label_1fb2c8;
        case 0x1fb2ccu: goto label_1fb2cc;
        case 0x1fb2d0u: goto label_1fb2d0;
        case 0x1fb2d4u: goto label_1fb2d4;
        case 0x1fb2d8u: goto label_1fb2d8;
        case 0x1fb2dcu: goto label_1fb2dc;
        case 0x1fb2e0u: goto label_1fb2e0;
        case 0x1fb2e4u: goto label_1fb2e4;
        case 0x1fb2e8u: goto label_1fb2e8;
        case 0x1fb2ecu: goto label_1fb2ec;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb2f4u: goto label_1fb2f4;
        case 0x1fb2f8u: goto label_1fb2f8;
        case 0x1fb2fcu: goto label_1fb2fc;
        case 0x1fb300u: goto label_1fb300;
        case 0x1fb304u: goto label_1fb304;
        case 0x1fb308u: goto label_1fb308;
        case 0x1fb30cu: goto label_1fb30c;
        case 0x1fb310u: goto label_1fb310;
        case 0x1fb314u: goto label_1fb314;
        case 0x1fb318u: goto label_1fb318;
        case 0x1fb31cu: goto label_1fb31c;
        case 0x1fb320u: goto label_1fb320;
        case 0x1fb324u: goto label_1fb324;
        case 0x1fb328u: goto label_1fb328;
        case 0x1fb32cu: goto label_1fb32c;
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        case 0x1fb4d8u: goto label_1fb4d8;
        case 0x1fb4dcu: goto label_1fb4dc;
        case 0x1fb4e0u: goto label_1fb4e0;
        case 0x1fb4e4u: goto label_1fb4e4;
        case 0x1fb4e8u: goto label_1fb4e8;
        case 0x1fb4ecu: goto label_1fb4ec;
        case 0x1fb4f0u: goto label_1fb4f0;
        case 0x1fb4f4u: goto label_1fb4f4;
        case 0x1fb4f8u: goto label_1fb4f8;
        case 0x1fb4fcu: goto label_1fb4fc;
        case 0x1fb500u: goto label_1fb500;
        case 0x1fb504u: goto label_1fb504;
        case 0x1fb508u: goto label_1fb508;
        case 0x1fb50cu: goto label_1fb50c;
        case 0x1fb510u: goto label_1fb510;
        case 0x1fb514u: goto label_1fb514;
        case 0x1fb518u: goto label_1fb518;
        case 0x1fb51cu: goto label_1fb51c;
        case 0x1fb520u: goto label_1fb520;
        case 0x1fb524u: goto label_1fb524;
        case 0x1fb528u: goto label_1fb528;
        case 0x1fb52cu: goto label_1fb52c;
        case 0x1fb530u: goto label_1fb530;
        case 0x1fb534u: goto label_1fb534;
        case 0x1fb538u: goto label_1fb538;
        case 0x1fb53cu: goto label_1fb53c;
        case 0x1fb540u: goto label_1fb540;
        case 0x1fb544u: goto label_1fb544;
        case 0x1fb548u: goto label_1fb548;
        case 0x1fb54cu: goto label_1fb54c;
        case 0x1fb550u: goto label_1fb550;
        case 0x1fb554u: goto label_1fb554;
        case 0x1fb558u: goto label_1fb558;
        case 0x1fb55cu: goto label_1fb55c;
        case 0x1fb560u: goto label_1fb560;
        case 0x1fb564u: goto label_1fb564;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb56cu: goto label_1fb56c;
        case 0x1fb570u: goto label_1fb570;
        case 0x1fb574u: goto label_1fb574;
        case 0x1fb578u: goto label_1fb578;
        case 0x1fb57cu: goto label_1fb57c;
        case 0x1fb580u: goto label_1fb580;
        case 0x1fb584u: goto label_1fb584;
        case 0x1fb588u: goto label_1fb588;
        case 0x1fb58cu: goto label_1fb58c;
        case 0x1fb590u: goto label_1fb590;
        case 0x1fb594u: goto label_1fb594;
        case 0x1fb598u: goto label_1fb598;
        case 0x1fb59cu: goto label_1fb59c;
        case 0x1fb5a0u: goto label_1fb5a0;
        case 0x1fb5a4u: goto label_1fb5a4;
        case 0x1fb5a8u: goto label_1fb5a8;
        case 0x1fb5acu: goto label_1fb5ac;
        case 0x1fb5b0u: goto label_1fb5b0;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb5b8u: goto label_1fb5b8;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5c0u: goto label_1fb5c0;
        case 0x1fb5c4u: goto label_1fb5c4;
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb5ccu: goto label_1fb5cc;
        case 0x1fb5d0u: goto label_1fb5d0;
        case 0x1fb5d4u: goto label_1fb5d4;
        case 0x1fb5d8u: goto label_1fb5d8;
        case 0x1fb5dcu: goto label_1fb5dc;
        case 0x1fb5e0u: goto label_1fb5e0;
        case 0x1fb5e4u: goto label_1fb5e4;
        case 0x1fb5e8u: goto label_1fb5e8;
        case 0x1fb5ecu: goto label_1fb5ec;
        case 0x1fb5f0u: goto label_1fb5f0;
        case 0x1fb5f4u: goto label_1fb5f4;
        case 0x1fb5f8u: goto label_1fb5f8;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb600u: goto label_1fb600;
        case 0x1fb604u: goto label_1fb604;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb60cu: goto label_1fb60c;
        case 0x1fb610u: goto label_1fb610;
        case 0x1fb614u: goto label_1fb614;
        case 0x1fb618u: goto label_1fb618;
        case 0x1fb61cu: goto label_1fb61c;
        case 0x1fb620u: goto label_1fb620;
        case 0x1fb624u: goto label_1fb624;
        case 0x1fb628u: goto label_1fb628;
        case 0x1fb62cu: goto label_1fb62c;
        case 0x1fb630u: goto label_1fb630;
        case 0x1fb634u: goto label_1fb634;
        case 0x1fb638u: goto label_1fb638;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb640u: goto label_1fb640;
        case 0x1fb644u: goto label_1fb644;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb64cu: goto label_1fb64c;
        case 0x1fb650u: goto label_1fb650;
        case 0x1fb654u: goto label_1fb654;
        case 0x1fb658u: goto label_1fb658;
        case 0x1fb65cu: goto label_1fb65c;
        case 0x1fb660u: goto label_1fb660;
        case 0x1fb664u: goto label_1fb664;
        case 0x1fb668u: goto label_1fb668;
        case 0x1fb66cu: goto label_1fb66c;
        case 0x1fb670u: goto label_1fb670;
        case 0x1fb674u: goto label_1fb674;
        case 0x1fb678u: goto label_1fb678;
        case 0x1fb67cu: goto label_1fb67c;
        case 0x1fb680u: goto label_1fb680;
        case 0x1fb684u: goto label_1fb684;
        case 0x1fb688u: goto label_1fb688;
        case 0x1fb68cu: goto label_1fb68c;
        case 0x1fb690u: goto label_1fb690;
        case 0x1fb694u: goto label_1fb694;
        case 0x1fb698u: goto label_1fb698;
        case 0x1fb69cu: goto label_1fb69c;
        case 0x1fb6a0u: goto label_1fb6a0;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6a8u: goto label_1fb6a8;
        case 0x1fb6acu: goto label_1fb6ac;
        case 0x1fb6b0u: goto label_1fb6b0;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb6bcu: goto label_1fb6bc;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb6c4u: goto label_1fb6c4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6ccu: goto label_1fb6cc;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6d4u: goto label_1fb6d4;
        case 0x1fb6d8u: goto label_1fb6d8;
        case 0x1fb6dcu: goto label_1fb6dc;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e4u: goto label_1fb6e4;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6ecu: goto label_1fb6ec;
        case 0x1fb6f0u: goto label_1fb6f0;
        case 0x1fb6f4u: goto label_1fb6f4;
        case 0x1fb6f8u: goto label_1fb6f8;
        case 0x1fb6fcu: goto label_1fb6fc;
        case 0x1fb700u: goto label_1fb700;
        case 0x1fb704u: goto label_1fb704;
        case 0x1fb708u: goto label_1fb708;
        case 0x1fb70cu: goto label_1fb70c;
        case 0x1fb710u: goto label_1fb710;
        case 0x1fb714u: goto label_1fb714;
        case 0x1fb718u: goto label_1fb718;
        case 0x1fb71cu: goto label_1fb71c;
        case 0x1fb720u: goto label_1fb720;
        case 0x1fb724u: goto label_1fb724;
        case 0x1fb728u: goto label_1fb728;
        case 0x1fb72cu: goto label_1fb72c;
        case 0x1fb730u: goto label_1fb730;
        case 0x1fb734u: goto label_1fb734;
        case 0x1fb738u: goto label_1fb738;
        case 0x1fb73cu: goto label_1fb73c;
        case 0x1fb740u: goto label_1fb740;
        case 0x1fb744u: goto label_1fb744;
        case 0x1fb748u: goto label_1fb748;
        case 0x1fb74cu: goto label_1fb74c;
        case 0x1fb750u: goto label_1fb750;
        case 0x1fb754u: goto label_1fb754;
        case 0x1fb758u: goto label_1fb758;
        case 0x1fb75cu: goto label_1fb75c;
        case 0x1fb760u: goto label_1fb760;
        case 0x1fb764u: goto label_1fb764;
        case 0x1fb768u: goto label_1fb768;
        case 0x1fb76cu: goto label_1fb76c;
        case 0x1fb770u: goto label_1fb770;
        case 0x1fb774u: goto label_1fb774;
        case 0x1fb778u: goto label_1fb778;
        case 0x1fb77cu: goto label_1fb77c;
        case 0x1fb780u: goto label_1fb780;
        case 0x1fb784u: goto label_1fb784;
        case 0x1fb788u: goto label_1fb788;
        case 0x1fb78cu: goto label_1fb78c;
        default: break;
    }

    ctx->pc = 0x1fb290u;

label_1fb290:
    // 0x1fb290: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1fb290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1fb294:
    // 0x1fb294: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1fb294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1fb298:
    // 0x1fb298: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1fb298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1fb29c:
    // 0x1fb29c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fb29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2a0:
    // 0x1fb2a0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1fb2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1fb2a4:
    // 0x1fb2a4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1fb2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1fb2a8:
    // 0x1fb2a8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1fb2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1fb2ac:
    // 0x1fb2ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1fb2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1fb2b0:
    // 0x1fb2b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fb2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fb2b4:
    // 0x1fb2b4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1fb2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1fb2b8:
    // 0x1fb2b8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1fb2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1fb2bc:
    // 0x1fb2bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fb2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fb2c0:
    // 0x1fb2c0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1fb2c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1fb2c4:
    // 0x1fb2c4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1fb2c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1fb2c8:
    // 0x1fb2c8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1fb2c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1fb2cc:
    // 0x1fb2cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1fb2d0:
    // 0x1fb2d0: 0x14400121  bnez        $v0, . + 4 + (0x121 << 2)
label_1fb2d4:
    if (ctx->pc == 0x1FB2D4u) {
        ctx->pc = 0x1FB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2D0u;
        // 0x1fb2d4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2D8u;
        goto label_1fb2d8;
    }
    ctx->pc = 0x1FB2D0u;
    {
        const bool branch_taken_0x1fb2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2D0u;
        // 0x1fb2d4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2d0) {
            ctx->pc = 0x1FB758u;
            goto label_1fb758;
        }
    }
    ctx->pc = 0x1FB2D8u;
label_1fb2d8:
    // 0x1fb2d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fb2dc:
    // 0x1fb2dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fb2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fb2e0:
    // 0x1fb2e0: 0xc07ec92  jal         func_1FB248
label_1fb2e4:
    if (ctx->pc == 0x1FB2E4u) {
        ctx->pc = 0x1FB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2E0u;
        // 0x1fb2e4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2E8u;
        goto label_1fb2e8;
    }
    ctx->pc = 0x1FB2E0u;
    SET_GPR_U32(ctx, 31, 0x1FB2E8u);
    ctx->pc = 0x1FB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2E0u;
    // 0x1fb2e4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB248u, 0x1FB2E0u, 0x1FB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2E8u;
label_1fb2e8:
    // 0x1fb2e8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1fb2ec:
    // 0x1fb2ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fb2f0:
    // 0x1fb2f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fb2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fb2f4:
    // 0x1fb2f4: 0x2484ef80  addiu       $a0, $a0, -0x1080
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
label_1fb2f8:
    // 0x1fb2f8: 0xc080ada  jal         func_202B68
label_1fb2fc:
    if (ctx->pc == 0x1FB2FCu) {
        ctx->pc = 0x1FB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2F8u;
        // 0x1fb2fc: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB300u;
        goto label_1fb300;
    }
    ctx->pc = 0x1FB2F8u;
    SET_GPR_U32(ctx, 31, 0x1FB300u);
    ctx->pc = 0x1FB2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2F8u;
    // 0x1fb2fc: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B68u, 0x1FB2F8u, 0x1FB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB300u;
label_1fb300:
    // 0x1fb300: 0x26167d28  addiu       $s6, $s0, 0x7D28
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 32040));
label_1fb304:
    // 0x1fb304: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1fb304u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fb308:
    // 0x1fb308: 0xc07f728  jal         func_1FDCA0
label_1fb30c:
    if (ctx->pc == 0x1FB30Cu) {
        ctx->pc = 0x1FB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB308u;
        // 0x1fb30c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB310u;
        goto label_1fb310;
    }
    ctx->pc = 0x1FB308u;
    SET_GPR_U32(ctx, 31, 0x1FB310u);
    ctx->pc = 0x1FB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB308u;
    // 0x1fb30c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1FB308u, 0x1FB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB310u;
label_1fb310:
    // 0x1fb310: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1fb310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fb314:
    // 0x1fb314: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fb318:
    // 0x1fb318: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x1fb318u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1fb31c:
    // 0x1fb31c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb320:
    // 0x1fb320: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fb320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fb324:
    // 0x1fb324: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fb328:
    // 0x1fb328: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fb328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1fb32c:
    // 0x1fb32c: 0x24a57d18  addiu       $a1, $a1, 0x7D18
    ctx->pc = 0x1fb32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32024));
label_1fb330:
    // 0x1fb330: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1fb330u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fb334:
    // 0x1fb334: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fb334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fb338:
    // 0x1fb338: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fb338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fb33c:
    // 0x1fb33c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1fb33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fb340:
    // 0x1fb340: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fb344:
    // 0x1fb344: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1fb344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1fb348:
    // 0x1fb348: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb34c:
    // 0x1fb34c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fb34cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb350:
    // 0x1fb350: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fb350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fb354:
    // 0x1fb354: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fb354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fb358:
    // 0x1fb358: 0x40f809  jalr        $v0
label_1fb35c:
    if (ctx->pc == 0x1FB35Cu) {
        ctx->pc = 0x1FB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB358u;
        // 0x1fb35c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB360u;
        goto label_1fb360;
    }
    ctx->pc = 0x1FB358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB360u);
        ctx->pc = 0x1FB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB358u;
        // 0x1fb35c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB358u, 0x1FB360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB360u;
label_1fb360:
    // 0x1fb360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fb364:
    if (ctx->pc == 0x1FB364u) {
        ctx->pc = 0x1FB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB360u;
        // 0x1fb364: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB368u;
        goto label_1fb368;
    }
    ctx->pc = 0x1FB360u;
    {
        const bool branch_taken_0x1fb360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB360u;
        // 0x1fb364: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb360) {
            ctx->pc = 0x1FB374u;
            goto label_1fb374;
        }
    }
    ctx->pc = 0x1FB368u;
label_1fb368:
    // 0x1fb368: 0xc0733e2  jal         func_1CCF88
label_1fb36c:
    if (ctx->pc == 0x1FB36Cu) {
        ctx->pc = 0x1FB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB368u;
        // 0x1fb36c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB370u;
        goto label_1fb370;
    }
    ctx->pc = 0x1FB368u;
    SET_GPR_U32(ctx, 31, 0x1FB370u);
    ctx->pc = 0x1FB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB368u;
    // 0x1fb36c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1FB368u, 0x1FB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB370u;
label_1fb370:
    // 0x1fb370: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fb374:
    // 0x1fb374: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1fb374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1fb378:
    // 0x1fb378: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1fb378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1fb37c:
    // 0x1fb37c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fb37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb380:
    // 0x1fb380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb384:
    // 0x1fb384: 0xc05e602  jal         func_179808
label_1fb388:
    if (ctx->pc == 0x1FB388u) {
        ctx->pc = 0x1FB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB384u;
        // 0x1fb388: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB38Cu;
        goto label_1fb38c;
    }
    ctx->pc = 0x1FB384u;
    SET_GPR_U32(ctx, 31, 0x1FB38Cu);
    ctx->pc = 0x1FB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB384u;
    // 0x1fb388: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1FB384u, 0x1FB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB38Cu;
label_1fb38c:
    // 0x1fb38c: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1fb38cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_1fb390:
    // 0x1fb390: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1fb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1fb394:
    // 0x1fb394: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fb394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fb398:
    // 0x1fb398: 0x8e27d310  lw          $a3, -0x2CF0($s1)
    ctx->pc = 0x1fb398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955792)));
label_1fb39c:
    // 0x1fb39c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fb39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3a0:
    // 0x1fb3a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fb3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb3a4:
    // 0x1fb3a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fb3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb3a8:
    // 0x1fb3a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fb3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb3ac:
    // 0x1fb3ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fb3acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3b0:
    // 0x1fb3b0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fb3b4:
    // 0x1fb3b4: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1fb3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fb3b8:
    // 0x1fb3b8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1fb3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1fb3bc:
    // 0x1fb3bc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1fb3bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3c0:
    // 0x1fb3c0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fb3c4:
    // 0x1fb3c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fb3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3c8:
    // 0x1fb3c8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fb3cc:
    // 0x1fb3cc: 0x40f809  jalr        $v0
label_1fb3d0:
    if (ctx->pc == 0x1FB3D0u) {
        ctx->pc = 0x1FB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3CCu;
        // 0x1fb3d0: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3D4u;
        goto label_1fb3d4;
    }
    ctx->pc = 0x1FB3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB3D4u);
        ctx->pc = 0x1FB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3CCu;
        // 0x1fb3d0: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB3CCu, 0x1FB3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB3D4u;
label_1fb3d4:
    // 0x1fb3d4: 0xc067b9c  jal         func_19EE70
label_1fb3d8:
    if (ctx->pc == 0x1FB3D8u) {
        ctx->pc = 0x1FB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D4u;
        // 0x1fb3d8: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3DCu;
        goto label_1fb3dc;
    }
    ctx->pc = 0x1FB3D4u;
    SET_GPR_U32(ctx, 31, 0x1FB3DCu);
    ctx->pc = 0x1FB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3D4u;
    // 0x1fb3d8: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB3D4u, 0x1FB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3DCu;
label_1fb3dc:
    // 0x1fb3dc: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1fb3e0:
    // 0x1fb3e0: 0xc073478  jal         func_1CD1E0
label_1fb3e4:
    if (ctx->pc == 0x1FB3E4u) {
        ctx->pc = 0x1FB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3E0u;
        // 0x1fb3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3E8u;
        goto label_1fb3e8;
    }
    ctx->pc = 0x1FB3E0u;
    SET_GPR_U32(ctx, 31, 0x1FB3E8u);
    ctx->pc = 0x1FB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3E0u;
    // 0x1fb3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FB3E0u, 0x1FB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3E8u;
label_1fb3e8:
    // 0x1fb3e8: 0xc07f734  jal         func_1FDCD0
label_1fb3ec:
    if (ctx->pc == 0x1FB3ECu) {
        ctx->pc = 0x1FB3F0u;
        goto label_1fb3f0;
    }
    ctx->pc = 0x1FB3E8u;
    SET_GPR_U32(ctx, 31, 0x1FB3F0u);
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1FB3E8u, 0x1FB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3F0u;
label_1fb3f0:
    // 0x1fb3f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1fb3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fb3f4:
    // 0x1fb3f4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fb3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fb3f8:
    // 0x1fb3f8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1fb3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1fb3fc:
    // 0x1fb3fc: 0x24a57d60  addiu       $a1, $a1, 0x7D60
    ctx->pc = 0x1fb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32096));
label_1fb400:
    // 0x1fb400: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x1fb400u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1fb404:
    // 0x1fb404: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1fb404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fb408:
    // 0x1fb408: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1fb408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1fb40c:
    // 0x1fb40c: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1fb40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1fb410:
    // 0x1fb410: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1fb410u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1fb414:
    // 0x1fb414: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fb414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fb418:
    // 0x1fb418: 0x24090037  addiu       $t1, $zero, 0x37
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1fb41c:
    // 0x1fb41c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fb41cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb420:
    // 0x1fb420: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fb424:
    // 0x1fb424: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fb424u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb428:
    // 0x1fb428: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fb428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fb42c:
    // 0x1fb42c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fb430:
    // 0x1fb430: 0x40f809  jalr        $v0
label_1fb434:
    if (ctx->pc == 0x1FB434u) {
        ctx->pc = 0x1FB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB430u;
        // 0x1fb434: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB438u;
        goto label_1fb438;
    }
    ctx->pc = 0x1FB430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB438u);
        ctx->pc = 0x1FB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB430u;
        // 0x1fb434: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB430u, 0x1FB438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB438u;
label_1fb438:
    // 0x1fb438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fb43c:
    if (ctx->pc == 0x1FB43Cu) {
        ctx->pc = 0x1FB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB438u;
        // 0x1fb43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB440u;
        goto label_1fb440;
    }
    ctx->pc = 0x1FB438u;
    {
        const bool branch_taken_0x1fb438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB438u;
        // 0x1fb43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb438) {
            ctx->pc = 0x1FB44Cu;
            goto label_1fb44c;
        }
    }
    ctx->pc = 0x1FB440u;
label_1fb440:
    // 0x1fb440: 0xc073a9c  jal         func_1CEA70
label_1fb444:
    if (ctx->pc == 0x1FB444u) {
        ctx->pc = 0x1FB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB440u;
        // 0x1fb444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB448u;
        goto label_1fb448;
    }
    ctx->pc = 0x1FB440u;
    SET_GPR_U32(ctx, 31, 0x1FB448u);
    ctx->pc = 0x1FB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB440u;
    // 0x1fb444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1FB440u, 0x1FB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB448u;
label_1fb448:
    // 0x1fb448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb44c:
    // 0x1fb44c: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x1fb44cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
label_1fb450:
    // 0x1fb450: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fb450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb454:
    // 0x1fb454: 0xc073ad0  jal         func_1CEB40
label_1fb458:
    if (ctx->pc == 0x1FB458u) {
        ctx->pc = 0x1FB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB454u;
        // 0x1fb458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB45Cu;
        goto label_1fb45c;
    }
    ctx->pc = 0x1FB454u;
    SET_GPR_U32(ctx, 31, 0x1FB45Cu);
    ctx->pc = 0x1FB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB454u;
    // 0x1fb458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1FB454u, 0x1FB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB45Cu;
label_1fb45c:
    // 0x1fb45c: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_1fb460:
    if (ctx->pc == 0x1FB460u) {
        ctx->pc = 0x1FB464u;
        goto label_1fb464;
    }
    ctx->pc = 0x1FB45Cu;
    {
        const bool branch_taken_0x1fb45c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb45c) {
            ctx->pc = 0x1FB480u;
            goto label_1fb480;
        }
    }
    ctx->pc = 0x1FB464u;
label_1fb464:
    // 0x1fb464: 0xc067b9c  jal         func_19EE70
label_1fb468:
    if (ctx->pc == 0x1FB468u) {
        ctx->pc = 0x1FB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB464u;
        // 0x1fb468: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB46Cu;
        goto label_1fb46c;
    }
    ctx->pc = 0x1FB464u;
    SET_GPR_U32(ctx, 31, 0x1FB46Cu);
    ctx->pc = 0x1FB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB464u;
    // 0x1fb468: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB464u, 0x1FB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB46Cu;
label_1fb46c:
    // 0x1fb46c: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1fb46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1fb470:
    // 0x1fb470: 0xc073b0a  jal         func_1CEC28
label_1fb474:
    if (ctx->pc == 0x1FB474u) {
        ctx->pc = 0x1FB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB470u;
        // 0x1fb474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB478u;
        goto label_1fb478;
    }
    ctx->pc = 0x1FB470u;
    SET_GPR_U32(ctx, 31, 0x1FB478u);
    ctx->pc = 0x1FB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB470u;
    // 0x1fb474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1FB470u, 0x1FB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB478u;
label_1fb478:
    // 0x1fb478: 0x10000006  b           . + 4 + (0x6 << 2)
label_1fb47c:
    if (ctx->pc == 0x1FB47Cu) {
        ctx->pc = 0x1FB480u;
        goto label_1fb480;
    }
    ctx->pc = 0x1FB478u;
    {
        const bool branch_taken_0x1fb478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb478) {
            ctx->pc = 0x1FB494u;
            goto label_1fb494;
        }
    }
    ctx->pc = 0x1FB480u;
label_1fb480:
    // 0x1fb480: 0xc067b9c  jal         func_19EE70
label_1fb484:
    if (ctx->pc == 0x1FB484u) {
        ctx->pc = 0x1FB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB480u;
        // 0x1fb484: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB488u;
        goto label_1fb488;
    }
    ctx->pc = 0x1FB480u;
    SET_GPR_U32(ctx, 31, 0x1FB488u);
    ctx->pc = 0x1FB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB480u;
    // 0x1fb484: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB480u, 0x1FB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB488u;
label_1fb488:
    // 0x1fb488: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1fb488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1fb48c:
    // 0x1fb48c: 0xc073b0a  jal         func_1CEC28
label_1fb490:
    if (ctx->pc == 0x1FB490u) {
        ctx->pc = 0x1FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB48Cu;
        // 0x1fb490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB494u;
        goto label_1fb494;
    }
    ctx->pc = 0x1FB48Cu;
    SET_GPR_U32(ctx, 31, 0x1FB494u);
    ctx->pc = 0x1FB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB48Cu;
    // 0x1fb490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1FB48Cu, 0x1FB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB494u;
label_1fb494:
    // 0x1fb494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fb494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fb498:
    // 0x1fb498: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fb498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fb49c:
    // 0x1fb49c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1fb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1fb4a0:
    // 0x1fb4a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fb4a4:
    // 0x1fb4a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fb4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fb4a8:
    // 0x1fb4a8: 0x24507d28  addiu       $s0, $v0, 0x7D28
    ctx->pc = 0x1fb4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32040));
label_1fb4ac:
    // 0x1fb4ac: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1fb4acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fb4b0:
    // 0x1fb4b0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fb4b4:
    // 0x1fb4b4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1fb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1fb4b8:
    // 0x1fb4b8: 0x24090041  addiu       $t1, $zero, 0x41
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1fb4bc:
    // 0x1fb4bc: 0xe6750008  swc1        $f21, 0x8($s3)
    ctx->pc = 0x1fb4bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1fb4c0:
    // 0x1fb4c0: 0x24a57d70  addiu       $a1, $a1, 0x7D70
    ctx->pc = 0x1fb4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32112));
label_1fb4c4:
    // 0x1fb4c4: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1fb4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1fb4c8:
    // 0x1fb4c8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fb4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fb4cc:
    // 0x1fb4cc: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1fb4d0:
    // 0x1fb4d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fb4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fb4d4:
    // 0x1fb4d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fb4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4d8:
    // 0x1fb4d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fb4d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4dc:
    // 0x1fb4dc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fb4e0:
    // 0x1fb4e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fb4e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4e4:
    // 0x1fb4e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fb4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fb4e8:
    // 0x1fb4e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fb4ec:
    // 0x1fb4ec: 0x40f809  jalr        $v0
label_1fb4f0:
    if (ctx->pc == 0x1FB4F0u) {
        ctx->pc = 0x1FB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4ECu;
        // 0x1fb4f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4F4u;
        goto label_1fb4f4;
    }
    ctx->pc = 0x1FB4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB4F4u);
        ctx->pc = 0x1FB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4ECu;
        // 0x1fb4f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB4ECu, 0x1FB4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB4F4u;
label_1fb4f4:
    // 0x1fb4f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1fb4f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4f8:
    // 0x1fb4f8: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1fb4fc:
    if (ctx->pc == 0x1FB4FCu) {
        ctx->pc = 0x1FB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4F8u;
        // 0x1fb4fc: 0xae490090  sw          $t1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB500u;
        goto label_1fb500;
    }
    ctx->pc = 0x1FB4F8u;
    {
        const bool branch_taken_0x1fb4f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4f8) {
            ctx->pc = 0x1FB4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB4F8u;
            // 0x1fb4fc: 0xae490090  sw          $t1, 0x90($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB510u;
            goto label_1fb510;
        }
    }
    ctx->pc = 0x1FB500u;
label_1fb500:
    // 0x1fb500: 0xc0705aa  jal         func_1C16A8
label_1fb504:
    if (ctx->pc == 0x1FB504u) {
        ctx->pc = 0x1FB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB500u;
        // 0x1fb504: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB508u;
        goto label_1fb508;
    }
    ctx->pc = 0x1FB500u;
    SET_GPR_U32(ctx, 31, 0x1FB508u);
    ctx->pc = 0x1FB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB500u;
    // 0x1fb504: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1FB500u, 0x1FB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB508u;
label_1fb508:
    // 0x1fb508: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1fb508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb50c:
    // 0x1fb50c: 0xae490090  sw          $t1, 0x90($s2)
    ctx->pc = 0x1fb50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
label_1fb510:
    // 0x1fb510: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1fb510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fb514:
    // 0x1fb514: 0x8fc6d310  lw          $a2, -0x2CF0($fp)
    ctx->pc = 0x1fb514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294955792)));
label_1fb518:
    // 0x1fb518: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1fb518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fb51c:
    // 0x1fb51c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1fb520:
    // 0x1fb520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fb520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fb524:
    // 0x1fb524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fb524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb528:
    // 0x1fb528: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1fb52c:
    // 0x1fb52c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fb52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1fb530:
    // 0x1fb530: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1fb530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1fb534:
    // 0x1fb534: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1fb538:
    // 0x1fb538: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1fb538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1fb53c:
    // 0x1fb53c: 0x40f809  jalr        $v0
label_1fb540:
    if (ctx->pc == 0x1FB540u) {
        ctx->pc = 0x1FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB53Cu;
        // 0x1fb540: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB544u;
        goto label_1fb544;
    }
    ctx->pc = 0x1FB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB544u);
        ctx->pc = 0x1FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB53Cu;
        // 0x1fb540: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB53Cu, 0x1FB544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB544u;
label_1fb544:
    // 0x1fb544: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fb544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fb548:
    // 0x1fb548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb54c:
    // 0x1fb54c: 0xc10c1fa  jal         func_4307E8
label_1fb550:
    if (ctx->pc == 0x1FB550u) {
        ctx->pc = 0x1FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB54Cu;
        // 0x1fb550: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB554u;
        goto label_1fb554;
    }
    ctx->pc = 0x1FB54Cu;
    SET_GPR_U32(ctx, 31, 0x1FB554u);
    ctx->pc = 0x1FB550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB54Cu;
    // 0x1fb550: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1FB54Cu, 0x1FB554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB554u;
label_1fb554:
    // 0x1fb554: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1fb554u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1fb558:
    // 0x1fb558: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fb55c:
    // 0x1fb55c: 0x24a57d88  addiu       $a1, $a1, 0x7D88
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32136));
label_1fb560:
    // 0x1fb560: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fb560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb564:
    // 0x1fb564: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fb568:
    // 0x1fb568: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fb568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fb56c:
    // 0x1fb56c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fb56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fb570:
    // 0x1fb570: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1fb574:
    // 0x1fb574: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fb574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fb578:
    // 0x1fb578: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fb578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb57c:
    // 0x1fb57c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fb580:
    // 0x1fb580: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fb580u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb584:
    // 0x1fb584: 0x40f809  jalr        $v0
label_1fb588:
    if (ctx->pc == 0x1FB588u) {
        ctx->pc = 0x1FB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB584u;
        // 0x1fb588: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB58Cu;
        goto label_1fb58c;
    }
    ctx->pc = 0x1FB584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB58Cu);
        ctx->pc = 0x1FB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB584u;
        // 0x1fb588: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB584u, 0x1FB58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB58Cu;
label_1fb58c:
    // 0x1fb58c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fb590:
    if (ctx->pc == 0x1FB590u) {
        ctx->pc = 0x1FB594u;
        goto label_1fb594;
    }
    ctx->pc = 0x1FB58Cu;
    {
        const bool branch_taken_0x1fb58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb58c) {
            ctx->pc = 0x1FB59Cu;
            goto label_1fb59c;
        }
    }
    ctx->pc = 0x1FB594u;
label_1fb594:
    // 0x1fb594: 0xc074fbc  jal         func_1D3EF0
label_1fb598:
    if (ctx->pc == 0x1FB598u) {
        ctx->pc = 0x1FB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB594u;
        // 0x1fb598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB59Cu;
        goto label_1fb59c;
    }
    ctx->pc = 0x1FB594u;
    SET_GPR_U32(ctx, 31, 0x1FB59Cu);
    ctx->pc = 0x1FB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB594u;
    // 0x1fb598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1FB594u, 0x1FB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB59Cu;
label_1fb59c:
    // 0x1fb59c: 0xc07f72c  jal         func_1FDCB0
label_1fb5a0:
    if (ctx->pc == 0x1FB5A0u) {
        ctx->pc = 0x1FB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB59Cu;
        // 0x1fb5a0: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5A4u;
        goto label_1fb5a4;
    }
    ctx->pc = 0x1FB59Cu;
    SET_GPR_U32(ctx, 31, 0x1FB5A4u);
    ctx->pc = 0x1FB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB59Cu;
    // 0x1fb5a0: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCB0u, 0x1FB59Cu, 0x1FB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5A4u;
label_1fb5a4:
    // 0x1fb5a4: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1fb5a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1fb5a8:
    // 0x1fb5a8: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1fb5a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fb5ac:
    // 0x1fb5ac: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1fb5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1fb5b0:
    // 0x1fb5b0: 0x12e00029  beqz        $s7, . + 4 + (0x29 << 2)
label_1fb5b4:
    if (ctx->pc == 0x1FB5B4u) {
        ctx->pc = 0x1FB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5B0u;
        // 0x1fb5b4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5B8u;
        goto label_1fb5b8;
    }
    ctx->pc = 0x1FB5B0u;
    {
        const bool branch_taken_0x1fb5b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5B0u;
        // 0x1fb5b4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5b0) {
            ctx->pc = 0x1FB658u;
            goto label_1fb658;
        }
    }
    ctx->pc = 0x1FB5B8u;
label_1fb5b8:
    // 0x1fb5b8: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1fb5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fb5bc:
    // 0x1fb5bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb5c0:
    // 0x1fb5c0: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb5c4:
    // 0x1fb5c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fb5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fb5c8:
    // 0x1fb5c8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fb5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1fb5cc:
    // 0x1fb5cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb5d0:
    // 0x1fb5d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1fb5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1fb5d4:
    // 0x1fb5d4: 0xc075044  jal         func_1D4110
label_1fb5d8:
    if (ctx->pc == 0x1FB5D8u) {
        ctx->pc = 0x1FB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5D4u;
        // 0x1fb5d8: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5DCu;
        goto label_1fb5dc;
    }
    ctx->pc = 0x1FB5D4u;
    SET_GPR_U32(ctx, 31, 0x1FB5DCu);
    ctx->pc = 0x1FB5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5D4u;
    // 0x1fb5d8: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1FB5D4u, 0x1FB5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5DCu;
label_1fb5dc:
    // 0x1fb5dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fb5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb5e0:
    // 0x1fb5e0: 0xc067b9c  jal         func_19EE70
label_1fb5e4:
    if (ctx->pc == 0x1FB5E4u) {
        ctx->pc = 0x1FB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5E0u;
        // 0x1fb5e4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5E8u;
        goto label_1fb5e8;
    }
    ctx->pc = 0x1FB5E0u;
    SET_GPR_U32(ctx, 31, 0x1FB5E8u);
    ctx->pc = 0x1FB5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5E0u;
    // 0x1fb5e4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB5E0u, 0x1FB5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5E8u;
label_1fb5e8:
    // 0x1fb5e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fb5ec:
    // 0x1fb5ec: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb5f0:
    // 0x1fb5f0: 0x8c70d320  lw          $s0, -0x2CE0($v1)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1fb5f4:
    // 0x1fb5f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb5f8:
    // 0x1fb5f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb5fc:
    // 0x1fb5fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb600:
    // 0x1fb600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb604:
    // 0x1fb604: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fb604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb608:
    // 0x1fb608: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb60c:
    // 0x1fb60c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fb60cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb610:
    // 0x1fb610: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1fb610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fb614:
    // 0x1fb614: 0xc07508c  jal         func_1D4230
label_1fb618:
    if (ctx->pc == 0x1FB618u) {
        ctx->pc = 0x1FB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB614u;
        // 0x1fb618: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB61Cu;
        goto label_1fb61c;
    }
    ctx->pc = 0x1FB614u;
    SET_GPR_U32(ctx, 31, 0x1FB61Cu);
    ctx->pc = 0x1FB618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB614u;
    // 0x1fb618: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FB614u, 0x1FB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB61Cu;
label_1fb61c:
    // 0x1fb61c: 0xc067b9c  jal         func_19EE70
label_1fb620:
    if (ctx->pc == 0x1FB620u) {
        ctx->pc = 0x1FB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB61Cu;
        // 0x1fb620: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB624u;
        goto label_1fb624;
    }
    ctx->pc = 0x1FB61Cu;
    SET_GPR_U32(ctx, 31, 0x1FB624u);
    ctx->pc = 0x1FB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB61Cu;
    // 0x1fb620: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB61Cu, 0x1FB624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB624u;
label_1fb624:
    // 0x1fb624: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb628:
    // 0x1fb628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb62c:
    // 0x1fb62c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1fb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1fb630:
    // 0x1fb630: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb634:
    // 0x1fb634: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fb634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb638:
    // 0x1fb638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb63c:
    // 0x1fb63c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fb63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb640:
    // 0x1fb640: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb644:
    // 0x1fb644: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fb644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb648:
    // 0x1fb648: 0xc07508c  jal         func_1D4230
label_1fb64c:
    if (ctx->pc == 0x1FB64Cu) {
        ctx->pc = 0x1FB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB648u;
        // 0x1fb64c: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB650u;
        goto label_1fb650;
    }
    ctx->pc = 0x1FB648u;
    SET_GPR_U32(ctx, 31, 0x1FB650u);
    ctx->pc = 0x1FB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB648u;
    // 0x1fb64c: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FB648u, 0x1FB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB650u;
label_1fb650:
    // 0x1fb650: 0x10000036  b           . + 4 + (0x36 << 2)
label_1fb654:
    if (ctx->pc == 0x1FB654u) {
        ctx->pc = 0x1FB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB650u;
        // 0x1fb654: 0x8e450094  lw          $a1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB658u;
        goto label_1fb658;
    }
    ctx->pc = 0x1FB650u;
    {
        const bool branch_taken_0x1fb650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB650u;
        // 0x1fb654: 0x8e450094  lw          $a1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb650) {
            ctx->pc = 0x1FB72Cu;
            goto label_1fb72c;
        }
    }
    ctx->pc = 0x1FB658u;
label_1fb658:
    // 0x1fb658: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fb658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb65c:
    // 0x1fb65c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb660:
    // 0x1fb660: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fb660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1fb664:
    // 0x1fb664: 0xc07f730  jal         func_1FDCC0
label_1fb668:
    if (ctx->pc == 0x1FB668u) {
        ctx->pc = 0x1FB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB664u;
        // 0x1fb668: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB66Cu;
        goto label_1fb66c;
    }
    ctx->pc = 0x1FB664u;
    SET_GPR_U32(ctx, 31, 0x1FB66Cu);
    ctx->pc = 0x1FB668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB664u;
    // 0x1fb668: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCC0u, 0x1FB664u, 0x1FB66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB66Cu;
label_1fb66c:
    // 0x1fb66c: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb670:
    // 0x1fb670: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1fb670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1fb674:
    // 0x1fb674: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fb674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fb678:
    // 0x1fb678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb67c:
    // 0x1fb67c: 0xc075044  jal         func_1D4110
label_1fb680:
    if (ctx->pc == 0x1FB680u) {
        ctx->pc = 0x1FB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB67Cu;
        // 0x1fb680: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB684u;
        goto label_1fb684;
    }
    ctx->pc = 0x1FB67Cu;
    SET_GPR_U32(ctx, 31, 0x1FB684u);
    ctx->pc = 0x1FB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB67Cu;
    // 0x1fb680: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1FB67Cu, 0x1FB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB684u;
label_1fb684:
    // 0x1fb684: 0xc067b9c  jal         func_19EE70
label_1fb688:
    if (ctx->pc == 0x1FB688u) {
        ctx->pc = 0x1FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB684u;
        // 0x1fb688: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB68Cu;
        goto label_1fb68c;
    }
    ctx->pc = 0x1FB684u;
    SET_GPR_U32(ctx, 31, 0x1FB68Cu);
    ctx->pc = 0x1FB688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB684u;
    // 0x1fb688: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB684u, 0x1FB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB68Cu;
label_1fb68c:
    // 0x1fb68c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fb68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fb690:
    // 0x1fb690: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb694:
    // 0x1fb694: 0x8c70d320  lw          $s0, -0x2CE0($v1)
    ctx->pc = 0x1fb694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1fb698:
    // 0x1fb698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb69c:
    // 0x1fb69c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1fb69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1fb6a0:
    // 0x1fb6a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb6a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb6a4:
    // 0x1fb6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb6a8:
    // 0x1fb6a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6ac:
    // 0x1fb6ac: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fb6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb6b0:
    // 0x1fb6b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb6b4:
    // 0x1fb6b4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fb6b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6b8:
    // 0x1fb6b8: 0xc07508c  jal         func_1D4230
label_1fb6bc:
    if (ctx->pc == 0x1FB6BCu) {
        ctx->pc = 0x1FB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6B8u;
        // 0x1fb6bc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6C0u;
        goto label_1fb6c0;
    }
    ctx->pc = 0x1FB6B8u;
    SET_GPR_U32(ctx, 31, 0x1FB6C0u);
    ctx->pc = 0x1FB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6B8u;
    // 0x1fb6bc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FB6B8u, 0x1FB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6C0u;
label_1fb6c0:
    // 0x1fb6c0: 0xc067b9c  jal         func_19EE70
label_1fb6c4:
    if (ctx->pc == 0x1FB6C4u) {
        ctx->pc = 0x1FB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C0u;
        // 0x1fb6c4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6C8u;
        goto label_1fb6c8;
    }
    ctx->pc = 0x1FB6C0u;
    SET_GPR_U32(ctx, 31, 0x1FB6C8u);
    ctx->pc = 0x1FB6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6C0u;
    // 0x1fb6c4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB6C0u, 0x1FB6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6C8u;
label_1fb6c8:
    // 0x1fb6c8: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb6cc:
    // 0x1fb6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6d0:
    // 0x1fb6d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb6d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb6d4:
    // 0x1fb6d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6d8:
    // 0x1fb6d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fb6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb6dc:
    // 0x1fb6dc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fb6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb6e0:
    // 0x1fb6e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fb6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb6e4:
    // 0x1fb6e4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fb6e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6e8:
    // 0x1fb6e8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1fb6e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fb6ec:
    // 0x1fb6ec: 0xc07508c  jal         func_1D4230
label_1fb6f0:
    if (ctx->pc == 0x1FB6F0u) {
        ctx->pc = 0x1FB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6ECu;
        // 0x1fb6f0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6F4u;
        goto label_1fb6f4;
    }
    ctx->pc = 0x1FB6ECu;
    SET_GPR_U32(ctx, 31, 0x1FB6F4u);
    ctx->pc = 0x1FB6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6ECu;
    // 0x1fb6f0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FB6ECu, 0x1FB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6F4u;
label_1fb6f4:
    // 0x1fb6f4: 0xc067b9c  jal         func_19EE70
label_1fb6f8:
    if (ctx->pc == 0x1FB6F8u) {
        ctx->pc = 0x1FB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F4u;
        // 0x1fb6f8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6FCu;
        goto label_1fb6fc;
    }
    ctx->pc = 0x1FB6F4u;
    SET_GPR_U32(ctx, 31, 0x1FB6FCu);
    ctx->pc = 0x1FB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6F4u;
    // 0x1fb6f8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB6F4u, 0x1FB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6FCu;
label_1fb6fc:
    // 0x1fb6fc: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1fb6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb700:
    // 0x1fb700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb704:
    // 0x1fb704: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1fb704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1fb708:
    // 0x1fb708: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb70c:
    // 0x1fb70c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fb70cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb710:
    // 0x1fb710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb714:
    // 0x1fb714: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb718:
    // 0x1fb718: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fb718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb71c:
    // 0x1fb71c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fb71cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb720:
    // 0x1fb720: 0xc07508c  jal         func_1D4230
label_1fb724:
    if (ctx->pc == 0x1FB724u) {
        ctx->pc = 0x1FB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB720u;
        // 0x1fb724: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB728u;
        goto label_1fb728;
    }
    ctx->pc = 0x1FB720u;
    SET_GPR_U32(ctx, 31, 0x1FB728u);
    ctx->pc = 0x1FB724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB720u;
    // 0x1fb724: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FB720u, 0x1FB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB728u;
label_1fb728:
    // 0x1fb728: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1fb72c:
    // 0x1fb72c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb730:
    // 0x1fb730: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1fb730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1fb734:
    // 0x1fb734: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1fb734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1fb738:
    // 0x1fb738: 0x60f809  jalr        $v1
label_1fb73c:
    if (ctx->pc == 0x1FB73Cu) {
        ctx->pc = 0x1FB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB738u;
        // 0x1fb73c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB740u;
        goto label_1fb740;
    }
    ctx->pc = 0x1FB738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB740u);
        ctx->pc = 0x1FB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB738u;
        // 0x1fb73c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB738u, 0x1FB740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB740u;
label_1fb740:
    // 0x1fb740: 0xc07f990  jal         func_1FE640
label_1fb744:
    if (ctx->pc == 0x1FB744u) {
        ctx->pc = 0x1FB748u;
        goto label_1fb748;
    }
    ctx->pc = 0x1FB740u;
    SET_GPR_U32(ctx, 31, 0x1FB748u);
    ctx->pc = 0x1FE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE640u, 0x1FB740u, 0x1FB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB748u;
label_1fb748:
    // 0x1fb748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb74c:
    // 0x1fb74c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1fb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1fb750:
    // 0x1fb750: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fb750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1fb754:
    // 0x1fb754: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1fb754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1fb758:
    // 0x1fb758: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1fb758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1fb75c:
    // 0x1fb75c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1fb75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1fb760:
    // 0x1fb760: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1fb760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1fb764:
    // 0x1fb764: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1fb764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fb768:
    // 0x1fb768: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1fb768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb76c:
    // 0x1fb76c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fb76cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb770:
    // 0x1fb770: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1fb770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb774:
    // 0x1fb774: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1fb774u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb778:
    // 0x1fb778: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fb778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb77c:
    // 0x1fb77c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1fb77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fb780:
    // 0x1fb780: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1fb780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fb784:
    // 0x1fb784: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1fb784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fb788:
    // 0x1fb788: 0x3e00008  jr          $ra
label_1fb78c:
    if (ctx->pc == 0x1FB78Cu) {
        ctx->pc = 0x1FB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB788u;
        // 0x1fb78c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB790u;
        goto label_fallthrough_0x1fb788;
    }
    ctx->pc = 0x1FB788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB788u;
        // 0x1fb78c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb788:
    ctx->pc = 0x1FB790u;
}
