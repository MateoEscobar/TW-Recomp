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

// Function: sub_001582E0
// Address: 0x1582e0 - 0x158488
void sub_001582E0_0x1582e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001582E0_0x1582e0");
#endif

    switch (ctx->pc) {
        case 0x1582e0u: goto label_1582e0;
        case 0x1582e4u: goto label_1582e4;
        case 0x1582e8u: goto label_1582e8;
        case 0x1582ecu: goto label_1582ec;
        case 0x1582f0u: goto label_1582f0;
        case 0x1582f4u: goto label_1582f4;
        case 0x1582f8u: goto label_1582f8;
        case 0x1582fcu: goto label_1582fc;
        case 0x158300u: goto label_158300;
        case 0x158304u: goto label_158304;
        case 0x158308u: goto label_158308;
        case 0x15830cu: goto label_15830c;
        case 0x158310u: goto label_158310;
        case 0x158314u: goto label_158314;
        case 0x158318u: goto label_158318;
        case 0x15831cu: goto label_15831c;
        case 0x158320u: goto label_158320;
        case 0x158324u: goto label_158324;
        case 0x158328u: goto label_158328;
        case 0x15832cu: goto label_15832c;
        case 0x158330u: goto label_158330;
        case 0x158334u: goto label_158334;
        case 0x158338u: goto label_158338;
        case 0x15833cu: goto label_15833c;
        case 0x158340u: goto label_158340;
        case 0x158344u: goto label_158344;
        case 0x158348u: goto label_158348;
        case 0x15834cu: goto label_15834c;
        case 0x158350u: goto label_158350;
        case 0x158354u: goto label_158354;
        case 0x158358u: goto label_158358;
        case 0x15835cu: goto label_15835c;
        case 0x158360u: goto label_158360;
        case 0x158364u: goto label_158364;
        case 0x158368u: goto label_158368;
        case 0x15836cu: goto label_15836c;
        case 0x158370u: goto label_158370;
        case 0x158374u: goto label_158374;
        case 0x158378u: goto label_158378;
        case 0x15837cu: goto label_15837c;
        case 0x158380u: goto label_158380;
        case 0x158384u: goto label_158384;
        case 0x158388u: goto label_158388;
        case 0x15838cu: goto label_15838c;
        case 0x158390u: goto label_158390;
        case 0x158394u: goto label_158394;
        case 0x158398u: goto label_158398;
        case 0x15839cu: goto label_15839c;
        case 0x1583a0u: goto label_1583a0;
        case 0x1583a4u: goto label_1583a4;
        case 0x1583a8u: goto label_1583a8;
        case 0x1583acu: goto label_1583ac;
        case 0x1583b0u: goto label_1583b0;
        case 0x1583b4u: goto label_1583b4;
        case 0x1583b8u: goto label_1583b8;
        case 0x1583bcu: goto label_1583bc;
        case 0x1583c0u: goto label_1583c0;
        case 0x1583c4u: goto label_1583c4;
        case 0x1583c8u: goto label_1583c8;
        case 0x1583ccu: goto label_1583cc;
        case 0x1583d0u: goto label_1583d0;
        case 0x1583d4u: goto label_1583d4;
        case 0x1583d8u: goto label_1583d8;
        case 0x1583dcu: goto label_1583dc;
        case 0x1583e0u: goto label_1583e0;
        case 0x1583e4u: goto label_1583e4;
        case 0x1583e8u: goto label_1583e8;
        case 0x1583ecu: goto label_1583ec;
        case 0x1583f0u: goto label_1583f0;
        case 0x1583f4u: goto label_1583f4;
        case 0x1583f8u: goto label_1583f8;
        case 0x1583fcu: goto label_1583fc;
        case 0x158400u: goto label_158400;
        case 0x158404u: goto label_158404;
        case 0x158408u: goto label_158408;
        case 0x15840cu: goto label_15840c;
        case 0x158410u: goto label_158410;
        case 0x158414u: goto label_158414;
        case 0x158418u: goto label_158418;
        case 0x15841cu: goto label_15841c;
        case 0x158420u: goto label_158420;
        case 0x158424u: goto label_158424;
        case 0x158428u: goto label_158428;
        case 0x15842cu: goto label_15842c;
        case 0x158430u: goto label_158430;
        case 0x158434u: goto label_158434;
        case 0x158438u: goto label_158438;
        case 0x15843cu: goto label_15843c;
        case 0x158440u: goto label_158440;
        case 0x158444u: goto label_158444;
        case 0x158448u: goto label_158448;
        case 0x15844cu: goto label_15844c;
        case 0x158450u: goto label_158450;
        case 0x158454u: goto label_158454;
        case 0x158458u: goto label_158458;
        case 0x15845cu: goto label_15845c;
        case 0x158460u: goto label_158460;
        case 0x158464u: goto label_158464;
        case 0x158468u: goto label_158468;
        case 0x15846cu: goto label_15846c;
        case 0x158470u: goto label_158470;
        case 0x158474u: goto label_158474;
        case 0x158478u: goto label_158478;
        case 0x15847cu: goto label_15847c;
        case 0x158480u: goto label_158480;
        case 0x158484u: goto label_158484;
        default: break;
    }

    ctx->pc = 0x1582e0u;

label_1582e0:
    // 0x1582e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1582e4:
    // 0x1582e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1582e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1582e8:
    // 0x1582e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1582e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1582ec:
    // 0x1582ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1582ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1582f0:
    // 0x1582f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1582f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1582f4:
    // 0x1582f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1582f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1582f8:
    // 0x1582f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1582f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1582fc:
    // 0x1582fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_158300:
    // 0x158300: 0x8e03aa84  lw          $v1, -0x557C($s0)
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_158304:
    // 0x158304: 0x3c120003  lui         $s2, 0x3
    ctx->pc = 0x158304u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
label_158308:
    // 0x158308: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x158308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_15830c:
    // 0x15830c: 0x36528000  ori         $s2, $s2, 0x8000
    ctx->pc = 0x15830cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
label_158310:
    // 0x158310: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x158310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_158314:
    // 0x158314: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158318:
    // 0x158318: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15831c:
    // 0x15831c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15831cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158320:
    // 0x158320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_158324:
    // 0x158324: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x158324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_158328:
    // 0x158328: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x158328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15832c:
    // 0x15832c: 0xac517a58  sw          $s1, 0x7A58($v0)
    ctx->pc = 0x15832cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31320), GPR_U32(ctx, 17));
label_158330:
    // 0x158330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158334:
    // 0x158334: 0xc044432  jal         func_1110C8
label_158338:
    if (ctx->pc == 0x158338u) {
        ctx->pc = 0x158338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158334u;
        // 0x158338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15833Cu;
        goto label_15833c;
    }
    ctx->pc = 0x158334u;
    SET_GPR_U32(ctx, 31, 0x15833Cu);
    ctx->pc = 0x158338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158334u;
    // 0x158338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110C8u, 0x158334u, 0x15833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15833Cu;
label_15833c:
    // 0x15833c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x15833cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_158340:
    // 0x158340: 0x8e03aa84  lw          $v1, -0x557C($s0)
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_158344:
    // 0x158344: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x158344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_158348:
    // 0x158348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15834c:
    // 0x15834c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15834cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158350:
    // 0x158350: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x158350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_158354:
    // 0x158354: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x158354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_158358:
    // 0x158358: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x158358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15835c:
    // 0x15835c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15835cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_158360:
    // 0x158360: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x158360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_158364:
    // 0x158364: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_158368:
    // 0x158368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x158368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15836c:
    // 0x15836c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_158370:
    // 0x158370: 0xe4407a5c  swc1        $f0, 0x7A5C($v0)
    ctx->pc = 0x158370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 31324), bits); }
label_158374:
    // 0x158374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x158374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158378:
    // 0x158378: 0xe4417aac  swc1        $f1, 0x7AAC($v0)
    ctx->pc = 0x158378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 31404), bits); }
label_15837c:
    // 0x15837c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15837cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158380:
    // 0x158380: 0xe4427ab0  swc1        $f2, 0x7AB0($v0)
    ctx->pc = 0x158380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 31408), bits); }
label_158384:
    // 0x158384: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x158384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158388:
    // 0x158388: 0xac517ab4  sw          $s1, 0x7AB4($v0)
    ctx->pc = 0x158388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31412), GPR_U32(ctx, 17));
label_15838c:
    // 0x15838c: 0xace0c754  sw          $zero, -0x38AC($a3)
    ctx->pc = 0x15838cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952788), GPR_U32(ctx, 0));
label_158390:
    // 0x158390: 0xc10c1fa  jal         func_4307E8
label_158394:
    if (ctx->pc == 0x158394u) {
        ctx->pc = 0x158394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158390u;
        // 0x158394: 0xac714270  sw          $s1, 0x4270($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17008), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158398u;
        goto label_158398;
    }
    ctx->pc = 0x158390u;
    SET_GPR_U32(ctx, 31, 0x158398u);
    ctx->pc = 0x158394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158390u;
    // 0x158394: 0xac714270  sw          $s1, 0x4270($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 17008), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x158390u, 0x158398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158398u;
label_158398:
    // 0x158398: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x158398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_15839c:
    // 0x15839c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15839cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1583a0:
    // 0x1583a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1583a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1583a4:
    // 0x1583a4: 0xc044132  jal         func_1104C8
label_1583a8:
    if (ctx->pc == 0x1583A8u) {
        ctx->pc = 0x1583A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583A4u;
        // 0x1583a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583ACu;
        goto label_1583ac;
    }
    ctx->pc = 0x1583A4u;
    SET_GPR_U32(ctx, 31, 0x1583ACu);
    ctx->pc = 0x1583A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583A4u;
    // 0x1583a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104C8u, 0x1583A4u, 0x1583ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583ACu;
label_1583ac:
    // 0x1583ac: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1583acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1583b0:
    // 0x1583b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1583b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1583b4:
    // 0x1583b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1583b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1583b8:
    // 0x1583b8: 0xc044132  jal         func_1104C8
label_1583bc:
    if (ctx->pc == 0x1583BCu) {
        ctx->pc = 0x1583BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583B8u;
        // 0x1583bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583C0u;
        goto label_1583c0;
    }
    ctx->pc = 0x1583B8u;
    SET_GPR_U32(ctx, 31, 0x1583C0u);
    ctx->pc = 0x1583BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583B8u;
    // 0x1583bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104C8u, 0x1583B8u, 0x1583C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583C0u;
label_1583c0:
    // 0x1583c0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1583c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1583c4:
    // 0x1583c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1583c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1583c8:
    // 0x1583c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1583c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1583cc:
    // 0x1583cc: 0xc044132  jal         func_1104C8
label_1583d0:
    if (ctx->pc == 0x1583D0u) {
        ctx->pc = 0x1583D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583CCu;
        // 0x1583d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583D4u;
        goto label_1583d4;
    }
    ctx->pc = 0x1583CCu;
    SET_GPR_U32(ctx, 31, 0x1583D4u);
    ctx->pc = 0x1583D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583CCu;
    // 0x1583d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104C8u, 0x1583CCu, 0x1583D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583D4u;
label_1583d4:
    // 0x1583d4: 0xc051660  jal         func_145980
label_1583d8:
    if (ctx->pc == 0x1583D8u) {
        ctx->pc = 0x1583D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583D4u;
        // 0x1583d8: 0x8e64b734  lw          $a0, -0x48CC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583DCu;
        goto label_1583dc;
    }
    ctx->pc = 0x1583D4u;
    SET_GPR_U32(ctx, 31, 0x1583DCu);
    ctx->pc = 0x1583D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583D4u;
    // 0x1583d8: 0x8e64b734  lw          $a0, -0x48CC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x1583D4u, 0x1583DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583DCu;
label_1583dc:
    // 0x1583dc: 0x8e62b734  lw          $v0, -0x48CC($s3)
    ctx->pc = 0x1583dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_1583e0:
    // 0x1583e0: 0xac51005c  sw          $s1, 0x5C($v0)
    ctx->pc = 0x1583e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 17));
label_1583e4:
    // 0x1583e4: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1583e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_1583e8:
    // 0x1583e8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1583e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1583ec:
    // 0x1583ec: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1583f0:
    // 0x1583f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1583f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1583f4:
    // 0x1583f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1583f8:
    // 0x1583f8: 0x40f809  jalr        $v0
label_1583fc:
    if (ctx->pc == 0x1583FCu) {
        ctx->pc = 0x1583FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583F8u;
        // 0x1583fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158400u;
        goto label_158400;
    }
    ctx->pc = 0x1583F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158400u);
        ctx->pc = 0x1583FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583F8u;
        // 0x1583fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1583F8u, 0x158400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158400u;
label_158400:
    // 0x158400: 0xc05152a  jal         func_1454A8
label_158404:
    if (ctx->pc == 0x158404u) {
        ctx->pc = 0x158408u;
        goto label_158408;
    }
    ctx->pc = 0x158400u;
    SET_GPR_U32(ctx, 31, 0x158408u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x158400u, 0x158408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158408u;
label_158408:
    // 0x158408: 0xc057fa4  jal         func_15FE90
label_15840c:
    if (ctx->pc == 0x15840Cu) {
        ctx->pc = 0x158410u;
        goto label_158410;
    }
    ctx->pc = 0x158408u;
    SET_GPR_U32(ctx, 31, 0x158410u);
    ctx->pc = 0x15FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE90u, 0x158408u, 0x158410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158410u;
label_158410:
    // 0x158410: 0x8e02aa84  lw          $v0, -0x557C($s0)
    ctx->pc = 0x158410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_158414:
    // 0x158414: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_158418:
    // 0x158418: 0x8e64b734  lw          $a0, -0x48CC($s3)
    ctx->pc = 0x158418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_15841c:
    // 0x15841c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x15841cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_158420:
    // 0x158420: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x158420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_158424:
    // 0x158424: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x158424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_158428:
    // 0x158428: 0xac407a58  sw          $zero, 0x7A58($v0)
    ctx->pc = 0x158428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31320), GPR_U32(ctx, 0));
label_15842c:
    // 0x15842c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15842cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_158430:
    // 0x158430: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158434:
    // 0x158434: 0xace0c550  sw          $zero, -0x3AB0($a3)
    ctx->pc = 0x158434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952272), GPR_U32(ctx, 0));
label_158438:
    // 0x158438: 0xacc0c554  sw          $zero, -0x3AAC($a2)
    ctx->pc = 0x158438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952276), GPR_U32(ctx, 0));
label_15843c:
    // 0x15843c: 0xac60c55c  sw          $zero, -0x3AA4($v1)
    ctx->pc = 0x15843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952284), GPR_U32(ctx, 0));
label_158440:
    // 0x158440: 0xaca0c558  sw          $zero, -0x3AA8($a1)
    ctx->pc = 0x158440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952280), GPR_U32(ctx, 0));
label_158444:
    // 0x158444: 0xc051660  jal         func_145980
label_158448:
    if (ctx->pc == 0x158448u) {
        ctx->pc = 0x158448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158444u;
        // 0x158448: 0xac40c560  sw          $zero, -0x3AA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15844Cu;
        goto label_15844c;
    }
    ctx->pc = 0x158444u;
    SET_GPR_U32(ctx, 31, 0x15844Cu);
    ctx->pc = 0x158448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158444u;
    // 0x158448: 0xac40c560  sw          $zero, -0x3AA0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x158444u, 0x15844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15844Cu;
label_15844c:
    // 0x15844c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158450:
    // 0x158450: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_158454:
    // 0x158454: 0xc106918  jal         func_41A460
label_158458:
    if (ctx->pc == 0x158458u) {
        ctx->pc = 0x158458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158454u;
        // 0x158458: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15845Cu;
        goto label_15845c;
    }
    ctx->pc = 0x158454u;
    SET_GPR_U32(ctx, 31, 0x15845Cu);
    ctx->pc = 0x158458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158454u;
    // 0x158458: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A460u, 0x158454u, 0x15845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15845Cu;
label_15845c:
    // 0x15845c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x15845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_158460:
    // 0x158460: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x158460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_158464:
    // 0x158464: 0xa2820028  sb          $v0, 0x28($s4)
    ctx->pc = 0x158464u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
label_158468:
    // 0x158468: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x158468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15846c:
    // 0x15846c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15846cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_158470:
    // 0x158470: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_158474:
    // 0x158474: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x158474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_158478:
    // 0x158478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15847c:
    // 0x15847c: 0x3e00008  jr          $ra
label_158480:
    if (ctx->pc == 0x158480u) {
        ctx->pc = 0x158480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15847Cu;
        // 0x158480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158484u;
        goto label_158484;
    }
    ctx->pc = 0x15847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15847Cu;
        // 0x158480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158484u;
label_158484:
    // 0x158484: 0x0  nop
    ctx->pc = 0x158484u;
    // NOP
    ctx->pc = 0x158488u;
}
