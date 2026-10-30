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

// Function: sub_001E8368
// Address: 0x1e8368 - 0x1e85e8
void sub_001E8368_0x1e8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8368_0x1e8368");
#endif

    switch (ctx->pc) {
        case 0x1e8368u: goto label_1e8368;
        case 0x1e836cu: goto label_1e836c;
        case 0x1e8370u: goto label_1e8370;
        case 0x1e8374u: goto label_1e8374;
        case 0x1e8378u: goto label_1e8378;
        case 0x1e837cu: goto label_1e837c;
        case 0x1e8380u: goto label_1e8380;
        case 0x1e8384u: goto label_1e8384;
        case 0x1e8388u: goto label_1e8388;
        case 0x1e838cu: goto label_1e838c;
        case 0x1e8390u: goto label_1e8390;
        case 0x1e8394u: goto label_1e8394;
        case 0x1e8398u: goto label_1e8398;
        case 0x1e839cu: goto label_1e839c;
        case 0x1e83a0u: goto label_1e83a0;
        case 0x1e83a4u: goto label_1e83a4;
        case 0x1e83a8u: goto label_1e83a8;
        case 0x1e83acu: goto label_1e83ac;
        case 0x1e83b0u: goto label_1e83b0;
        case 0x1e83b4u: goto label_1e83b4;
        case 0x1e83b8u: goto label_1e83b8;
        case 0x1e83bcu: goto label_1e83bc;
        case 0x1e83c0u: goto label_1e83c0;
        case 0x1e83c4u: goto label_1e83c4;
        case 0x1e83c8u: goto label_1e83c8;
        case 0x1e83ccu: goto label_1e83cc;
        case 0x1e83d0u: goto label_1e83d0;
        case 0x1e83d4u: goto label_1e83d4;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e83dcu: goto label_1e83dc;
        case 0x1e83e0u: goto label_1e83e0;
        case 0x1e83e4u: goto label_1e83e4;
        case 0x1e83e8u: goto label_1e83e8;
        case 0x1e83ecu: goto label_1e83ec;
        case 0x1e83f0u: goto label_1e83f0;
        case 0x1e83f4u: goto label_1e83f4;
        case 0x1e83f8u: goto label_1e83f8;
        case 0x1e83fcu: goto label_1e83fc;
        case 0x1e8400u: goto label_1e8400;
        case 0x1e8404u: goto label_1e8404;
        case 0x1e8408u: goto label_1e8408;
        case 0x1e840cu: goto label_1e840c;
        case 0x1e8410u: goto label_1e8410;
        case 0x1e8414u: goto label_1e8414;
        case 0x1e8418u: goto label_1e8418;
        case 0x1e841cu: goto label_1e841c;
        case 0x1e8420u: goto label_1e8420;
        case 0x1e8424u: goto label_1e8424;
        case 0x1e8428u: goto label_1e8428;
        case 0x1e842cu: goto label_1e842c;
        case 0x1e8430u: goto label_1e8430;
        case 0x1e8434u: goto label_1e8434;
        case 0x1e8438u: goto label_1e8438;
        case 0x1e843cu: goto label_1e843c;
        case 0x1e8440u: goto label_1e8440;
        case 0x1e8444u: goto label_1e8444;
        case 0x1e8448u: goto label_1e8448;
        case 0x1e844cu: goto label_1e844c;
        case 0x1e8450u: goto label_1e8450;
        case 0x1e8454u: goto label_1e8454;
        case 0x1e8458u: goto label_1e8458;
        case 0x1e845cu: goto label_1e845c;
        case 0x1e8460u: goto label_1e8460;
        case 0x1e8464u: goto label_1e8464;
        case 0x1e8468u: goto label_1e8468;
        case 0x1e846cu: goto label_1e846c;
        case 0x1e8470u: goto label_1e8470;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e8478u: goto label_1e8478;
        case 0x1e847cu: goto label_1e847c;
        case 0x1e8480u: goto label_1e8480;
        case 0x1e8484u: goto label_1e8484;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e848cu: goto label_1e848c;
        case 0x1e8490u: goto label_1e8490;
        case 0x1e8494u: goto label_1e8494;
        case 0x1e8498u: goto label_1e8498;
        case 0x1e849cu: goto label_1e849c;
        case 0x1e84a0u: goto label_1e84a0;
        case 0x1e84a4u: goto label_1e84a4;
        case 0x1e84a8u: goto label_1e84a8;
        case 0x1e84acu: goto label_1e84ac;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84b4u: goto label_1e84b4;
        case 0x1e84b8u: goto label_1e84b8;
        case 0x1e84bcu: goto label_1e84bc;
        case 0x1e84c0u: goto label_1e84c0;
        case 0x1e84c4u: goto label_1e84c4;
        case 0x1e84c8u: goto label_1e84c8;
        case 0x1e84ccu: goto label_1e84cc;
        case 0x1e84d0u: goto label_1e84d0;
        case 0x1e84d4u: goto label_1e84d4;
        case 0x1e84d8u: goto label_1e84d8;
        case 0x1e84dcu: goto label_1e84dc;
        case 0x1e84e0u: goto label_1e84e0;
        case 0x1e84e4u: goto label_1e84e4;
        case 0x1e84e8u: goto label_1e84e8;
        case 0x1e84ecu: goto label_1e84ec;
        case 0x1e84f0u: goto label_1e84f0;
        case 0x1e84f4u: goto label_1e84f4;
        case 0x1e84f8u: goto label_1e84f8;
        case 0x1e84fcu: goto label_1e84fc;
        case 0x1e8500u: goto label_1e8500;
        case 0x1e8504u: goto label_1e8504;
        case 0x1e8508u: goto label_1e8508;
        case 0x1e850cu: goto label_1e850c;
        case 0x1e8510u: goto label_1e8510;
        case 0x1e8514u: goto label_1e8514;
        case 0x1e8518u: goto label_1e8518;
        case 0x1e851cu: goto label_1e851c;
        case 0x1e8520u: goto label_1e8520;
        case 0x1e8524u: goto label_1e8524;
        case 0x1e8528u: goto label_1e8528;
        case 0x1e852cu: goto label_1e852c;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8534u: goto label_1e8534;
        case 0x1e8538u: goto label_1e8538;
        case 0x1e853cu: goto label_1e853c;
        case 0x1e8540u: goto label_1e8540;
        case 0x1e8544u: goto label_1e8544;
        case 0x1e8548u: goto label_1e8548;
        case 0x1e854cu: goto label_1e854c;
        case 0x1e8550u: goto label_1e8550;
        case 0x1e8554u: goto label_1e8554;
        case 0x1e8558u: goto label_1e8558;
        case 0x1e855cu: goto label_1e855c;
        case 0x1e8560u: goto label_1e8560;
        case 0x1e8564u: goto label_1e8564;
        case 0x1e8568u: goto label_1e8568;
        case 0x1e856cu: goto label_1e856c;
        case 0x1e8570u: goto label_1e8570;
        case 0x1e8574u: goto label_1e8574;
        case 0x1e8578u: goto label_1e8578;
        case 0x1e857cu: goto label_1e857c;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e8584u: goto label_1e8584;
        case 0x1e8588u: goto label_1e8588;
        case 0x1e858cu: goto label_1e858c;
        case 0x1e8590u: goto label_1e8590;
        case 0x1e8594u: goto label_1e8594;
        case 0x1e8598u: goto label_1e8598;
        case 0x1e859cu: goto label_1e859c;
        case 0x1e85a0u: goto label_1e85a0;
        case 0x1e85a4u: goto label_1e85a4;
        case 0x1e85a8u: goto label_1e85a8;
        case 0x1e85acu: goto label_1e85ac;
        case 0x1e85b0u: goto label_1e85b0;
        case 0x1e85b4u: goto label_1e85b4;
        case 0x1e85b8u: goto label_1e85b8;
        case 0x1e85bcu: goto label_1e85bc;
        case 0x1e85c0u: goto label_1e85c0;
        case 0x1e85c4u: goto label_1e85c4;
        case 0x1e85c8u: goto label_1e85c8;
        case 0x1e85ccu: goto label_1e85cc;
        case 0x1e85d0u: goto label_1e85d0;
        case 0x1e85d4u: goto label_1e85d4;
        case 0x1e85d8u: goto label_1e85d8;
        case 0x1e85dcu: goto label_1e85dc;
        case 0x1e85e0u: goto label_1e85e0;
        case 0x1e85e4u: goto label_1e85e4;
        default: break;
    }

    ctx->pc = 0x1e8368u;

label_1e8368:
    // 0x1e8368: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1e836c:
    // 0x1e836c: 0x3c0a000c  lui         $t2, 0xC
    ctx->pc = 0x1e836cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12 << 16));
label_1e8370:
    // 0x1e8370: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e8370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1e8374:
    // 0x1e8374: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1e8374u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_1e8378:
    // 0x1e8378: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1e837c:
    // 0x1e837c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1e837cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e8380:
    // 0x1e8380: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1e8384:
    // 0x1e8384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8388:
    // 0x1e8388: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1e838c:
    // 0x1e838c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1e838cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e8390:
    // 0x1e8390: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1e8390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8394:
    // 0x1e8394: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e8394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1e8398:
    // 0x1e8398: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1e839c:
    // 0x1e839c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e83a0:
    // 0x1e83a0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e83a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1e83a4:
    // 0x1e83a4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e83a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1e83a8:
    // 0x1e83a8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1e83a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e83ac:
    // 0x1e83ac: 0x354a0003  ori         $t2, $t2, 0x3
    ctx->pc = 0x1e83acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)3);
label_1e83b0:
    // 0x1e83b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e83b4:
    // 0x1e83b4: 0xc079e26  jal         func_1E7898
label_1e83b8:
    if (ctx->pc == 0x1E83B8u) {
        ctx->pc = 0x1E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B4u;
        // 0x1e83b8: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83BCu;
        goto label_1e83bc;
    }
    ctx->pc = 0x1E83B4u;
    SET_GPR_U32(ctx, 31, 0x1E83BCu);
    ctx->pc = 0x1E83B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83B4u;
    // 0x1e83b8: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7898u, 0x1E83B4u, 0x1E83BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83BCu;
label_1e83bc:
    // 0x1e83bc: 0x26330390  addiu       $s3, $s1, 0x390
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
label_1e83c0:
    // 0x1e83c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e83c4:
    // 0x1e83c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1e83c8:
    // 0x1e83c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e83c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e83cc:
    // 0x1e83cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e83ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e83d0:
    // 0x1e83d0: 0x8c52d310  lw          $s2, -0x2CF0($v0)
    ctx->pc = 0x1e83d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1e83d4:
    // 0x1e83d4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e83d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e83d8:
    // 0x1e83d8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e83dc:
    // 0x1e83dc: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1e83dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
label_1e83e0:
    // 0x1e83e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e83e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e83e4:
    // 0x1e83e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e83e8:
    // 0x1e83e8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1e83e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e83ec:
    // 0x1e83ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e83f0:
    // 0x1e83f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e83f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e83f4:
    // 0x1e83f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e83f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e83f8:
    // 0x1e83f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e83f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e83fc:
    // 0x1e83fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e83fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8400:
    // 0x1e8400: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e8400u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e8404:
    // 0x1e8404: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e8404u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8408:
    // 0x1e8408: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e8408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e840c:
    // 0x1e840c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e840cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8410:
    // 0x1e8410: 0xc06876e  jal         func_1A1DB8
label_1e8414:
    if (ctx->pc == 0x1E8414u) {
        ctx->pc = 0x1E8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8410u;
        // 0x1e8414: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8418u;
        goto label_1e8418;
    }
    ctx->pc = 0x1E8410u;
    SET_GPR_U32(ctx, 31, 0x1E8418u);
    ctx->pc = 0x1E8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8410u;
    // 0x1e8414: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E8410u, 0x1E8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8418u;
label_1e8418:
    // 0x1e8418: 0x3c013da7  lui         $at, 0x3DA7
    ctx->pc = 0x1e8418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15783 << 16));
label_1e841c:
    // 0x1e841c: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x1e841cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
label_1e8420:
    // 0x1e8420: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e8420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e8424:
    // 0x1e8424: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x1e8424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e8428:
    // 0x1e8428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e8428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e842c:
    // 0x1e842c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1e842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e8430:
    // 0x1e8430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8434:
    // 0x1e8434: 0x26330790  addiu       $s3, $s1, 0x790
    ctx->pc = 0x1e8434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
label_1e8438:
    // 0x1e8438: 0xc068848  jal         func_1A2120
label_1e843c:
    if (ctx->pc == 0x1E843Cu) {
        ctx->pc = 0x1E843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8438u;
        // 0x1e843c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8440u;
        goto label_1e8440;
    }
    ctx->pc = 0x1E8438u;
    SET_GPR_U32(ctx, 31, 0x1E8440u);
    ctx->pc = 0x1E843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8438u;
    // 0x1e843c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E8438u, 0x1E8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8440u;
label_1e8440:
    // 0x1e8440: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e8444:
    // 0x1e8444: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1e8444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1e8448:
    // 0x1e8448: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1e8448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1e844c:
    // 0x1e844c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e844cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8450:
    // 0x1e8450: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e8450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e8454:
    // 0x1e8454: 0x26300490  addiu       $s0, $s1, 0x490
    ctx->pc = 0x1e8454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_1e8458:
    // 0x1e8458: 0xc05e602  jal         func_179808
label_1e845c:
    if (ctx->pc == 0x1E845Cu) {
        ctx->pc = 0x1E845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8458u;
        // 0x1e845c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8460u;
        goto label_1e8460;
    }
    ctx->pc = 0x1E8458u;
    SET_GPR_U32(ctx, 31, 0x1E8460u);
    ctx->pc = 0x1E845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8458u;
    // 0x1e845c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E8458u, 0x1E8460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8460u;
label_1e8460:
    // 0x1e8460: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e8460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e8464:
    // 0x1e8464: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8468:
    // 0x1e8468: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e8468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e846c:
    // 0x1e846c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8470:
    // 0x1e8470: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8474:
    // 0x1e8474: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8478:
    // 0x1e8478: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e847c:
    // 0x1e847c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1e847cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1e8480:
    // 0x1e8480: 0xc073418  jal         func_1CD060
label_1e8484:
    if (ctx->pc == 0x1E8484u) {
        ctx->pc = 0x1E8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8480u;
        // 0x1e8484: 0x26240a00  addiu       $a0, $s1, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8488u;
        goto label_1e8488;
    }
    ctx->pc = 0x1E8480u;
    SET_GPR_U32(ctx, 31, 0x1E8488u);
    ctx->pc = 0x1E8484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8480u;
    // 0x1e8484: 0x26240a00  addiu       $a0, $s1, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1E8480u, 0x1E8488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8488u;
label_1e8488:
    // 0x1e8488: 0x3c013fc7  lui         $at, 0x3FC7
    ctx->pc = 0x1e8488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16327 << 16));
label_1e848c:
    // 0x1e848c: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x1e848cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
label_1e8490:
    // 0x1e8490: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e8490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8494:
    // 0x1e8494: 0xc05e602  jal         func_179808
label_1e8498:
    if (ctx->pc == 0x1E8498u) {
        ctx->pc = 0x1E8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8494u;
        // 0x1e8498: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E849Cu;
        goto label_1e849c;
    }
    ctx->pc = 0x1E8494u;
    SET_GPR_U32(ctx, 31, 0x1E849Cu);
    ctx->pc = 0x1E8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8494u;
    // 0x1e8498: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E8494u, 0x1E849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E849Cu;
label_1e849c:
    // 0x1e849c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1e849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1e84a0:
    // 0x1e84a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e84a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e84a4:
    // 0x1e84a4: 0x26240ad0  addiu       $a0, $s1, 0xAD0
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2768));
label_1e84a8:
    // 0x1e84a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e84a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e84ac:
    // 0x1e84ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e84b0:
    // 0x1e84b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e84b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e84b4:
    // 0x1e84b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e84b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e84b8:
    // 0x1e84b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e84b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e84bc:
    // 0x1e84bc: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1e84bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1e84c0:
    // 0x1e84c0: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1e84c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1e84c4:
    // 0x1e84c4: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x1e84c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1e84c8:
    // 0x1e84c8: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x1e84c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1e84cc:
    // 0x1e84cc: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1e84ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e84d0:
    // 0x1e84d0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1e84d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e84d4:
    // 0x1e84d4: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x1e84d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e84d8:
    // 0x1e84d8: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x1e84d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e84dc:
    // 0x1e84dc: 0xc073418  jal         func_1CD060
label_1e84e0:
    if (ctx->pc == 0x1E84E0u) {
        ctx->pc = 0x1E84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84DCu;
        // 0x1e84e0: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84E4u;
        goto label_1e84e4;
    }
    ctx->pc = 0x1E84DCu;
    SET_GPR_U32(ctx, 31, 0x1E84E4u);
    ctx->pc = 0x1E84E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84DCu;
    // 0x1e84e0: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1E84DCu, 0x1E84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84E4u;
label_1e84e4:
    // 0x1e84e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e84e8:
    // 0x1e84e8: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1e84e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e84ec:
    // 0x1e84ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e84f0:
    // 0x1e84f0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e84f4:
    // 0x1e84f4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e84f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e84f8:
    // 0x1e84f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e84f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e84fc:
    // 0x1e84fc: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1e84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_1e8500:
    // 0x1e8500: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e8500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8504:
    // 0x1e8504: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x1e8504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1e8508:
    // 0x1e8508: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1e850c:
    // 0x1e850c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e8510:
    // 0x1e8510: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8514:
    // 0x1e8514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8518:
    // 0x1e8518: 0x40f809  jalr        $v0
label_1e851c:
    if (ctx->pc == 0x1E851Cu) {
        ctx->pc = 0x1E851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8518u;
        // 0x1e851c: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8520u;
        goto label_1e8520;
    }
    ctx->pc = 0x1E8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8520u);
        ctx->pc = 0x1E851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8518u;
        // 0x1e851c: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8518u, 0x1E8520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8520u;
label_1e8520:
    // 0x1e8520: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1e8520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1e8524:
    // 0x1e8524: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8528:
    // 0x1e8528: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
label_1e852c:
    // 0x1e852c: 0x8da6d260  lw          $a2, -0x2DA0($t5)
    ctx->pc = 0x1e852cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294955616)));
label_1e8530:
    // 0x1e8530: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e8530u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e8534:
    // 0x1e8534: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e8534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e8538:
    // 0x1e8538: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e8538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e853c:
    // 0x1e853c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e8540:
    // 0x1e8540: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8544:
    // 0x1e8544: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e8544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e8548:
    // 0x1e8548: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1e854c:
    // 0x1e854c: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x1e854cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
label_1e8550:
    // 0x1e8550: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e8550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8554:
    // 0x1e8554: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e8554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1e8558:
    // 0x1e8558: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e8558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e855c:
    // 0x1e855c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e855cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8560:
    // 0x1e8560: 0x24090054  addiu       $t1, $zero, 0x54
    ctx->pc = 0x1e8560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1e8564:
    // 0x1e8564: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e8564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e8568:
    // 0x1e8568: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e8568u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e856c:
    // 0x1e856c: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1e856cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
label_1e8570:
    // 0x1e8570: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1e8570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
label_1e8574:
    // 0x1e8574: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e8574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e8578:
    // 0x1e8578: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e8578u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e857c:
    // 0x1e857c: 0x26b500d0  addiu       $s5, $s5, 0xD0
    ctx->pc = 0x1e857cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
label_1e8580:
    // 0x1e8580: 0x40f809  jalr        $v0
label_1e8584:
    if (ctx->pc == 0x1E8584u) {
        ctx->pc = 0x1E8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8580u;
        // 0x1e8584: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8588u;
        goto label_1e8588;
    }
    ctx->pc = 0x1E8580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8588u);
        ctx->pc = 0x1E8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8580u;
        // 0x1e8584: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8580u, 0x1E8588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8588u;
label_1e8588:
    // 0x1e8588: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e8588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e858c:
    // 0x1e858c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8590:
    // 0x1e8590: 0xc44cf2dc  lwc1        $f12, -0xD24($v0)
    ctx->pc = 0x1e8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e8594:
    // 0x1e8594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8598:
    // 0x1e8598: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1e859c:
    // 0x1e859c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1e859cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_1e85a0:
    // 0x1e85a0: 0xc068848  jal         func_1A2120
label_1e85a4:
    if (ctx->pc == 0x1E85A4u) {
        ctx->pc = 0x1E85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85A0u;
        // 0x1e85a4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85A8u;
        goto label_1e85a8;
    }
    ctx->pc = 0x1E85A0u;
    SET_GPR_U32(ctx, 31, 0x1E85A8u);
    ctx->pc = 0x1E85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E85A0u;
    // 0x1e85a4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E85A0u, 0x1E85A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E85A8u;
label_1e85a8:
    // 0x1e85a8: 0x2ee20003  sltiu       $v0, $s7, 0x3
    ctx->pc = 0x1e85a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e85ac:
    // 0x1e85ac: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
label_1e85b0:
    if (ctx->pc == 0x1E85B0u) {
        ctx->pc = 0x1E85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85ACu;
        // 0x1e85b0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85B4u;
        goto label_1e85b4;
    }
    ctx->pc = 0x1E85ACu;
    {
        const bool branch_taken_0x1e85ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e85ac) {
            ctx->pc = 0x1E85B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E85ACu;
            // 0x1e85b0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E84E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e84e8;
        }
    }
    ctx->pc = 0x1E85B4u;
label_1e85b4:
    // 0x1e85b4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e85b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e85b8:
    // 0x1e85b8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e85b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e85bc:
    // 0x1e85bc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e85bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e85c0:
    // 0x1e85c0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e85c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e85c4:
    // 0x1e85c4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e85c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e85c8:
    // 0x1e85c8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e85c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e85cc:
    // 0x1e85cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e85ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e85d0:
    // 0x1e85d0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e85d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e85d4:
    // 0x1e85d4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e85d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e85d8:
    // 0x1e85d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e85d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e85dc:
    // 0x1e85dc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1e85dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e85e0:
    // 0x1e85e0: 0x3e00008  jr          $ra
label_1e85e4:
    if (ctx->pc == 0x1E85E4u) {
        ctx->pc = 0x1E85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85E0u;
        // 0x1e85e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85E8u;
        goto label_fallthrough_0x1e85e0;
    }
    ctx->pc = 0x1E85E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85E0u;
        // 0x1e85e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E85E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e85e0:
    ctx->pc = 0x1E85E8u;
}
