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

// Function: sub_002CB348
// Address: 0x2cb348 - 0x2cb520
void sub_002CB348_0x2cb348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB348_0x2cb348");
#endif

    switch (ctx->pc) {
        case 0x2cb348u: goto label_2cb348;
        case 0x2cb34cu: goto label_2cb34c;
        case 0x2cb350u: goto label_2cb350;
        case 0x2cb354u: goto label_2cb354;
        case 0x2cb358u: goto label_2cb358;
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb360u: goto label_2cb360;
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb368u: goto label_2cb368;
        case 0x2cb36cu: goto label_2cb36c;
        case 0x2cb370u: goto label_2cb370;
        case 0x2cb374u: goto label_2cb374;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb37cu: goto label_2cb37c;
        case 0x2cb380u: goto label_2cb380;
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb388u: goto label_2cb388;
        case 0x2cb38cu: goto label_2cb38c;
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb39cu: goto label_2cb39c;
        case 0x2cb3a0u: goto label_2cb3a0;
        case 0x2cb3a4u: goto label_2cb3a4;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3acu: goto label_2cb3ac;
        case 0x2cb3b0u: goto label_2cb3b0;
        case 0x2cb3b4u: goto label_2cb3b4;
        case 0x2cb3b8u: goto label_2cb3b8;
        case 0x2cb3bcu: goto label_2cb3bc;
        case 0x2cb3c0u: goto label_2cb3c0;
        case 0x2cb3c4u: goto label_2cb3c4;
        case 0x2cb3c8u: goto label_2cb3c8;
        case 0x2cb3ccu: goto label_2cb3cc;
        case 0x2cb3d0u: goto label_2cb3d0;
        case 0x2cb3d4u: goto label_2cb3d4;
        case 0x2cb3d8u: goto label_2cb3d8;
        case 0x2cb3dcu: goto label_2cb3dc;
        case 0x2cb3e0u: goto label_2cb3e0;
        case 0x2cb3e4u: goto label_2cb3e4;
        case 0x2cb3e8u: goto label_2cb3e8;
        case 0x2cb3ecu: goto label_2cb3ec;
        case 0x2cb3f0u: goto label_2cb3f0;
        case 0x2cb3f4u: goto label_2cb3f4;
        case 0x2cb3f8u: goto label_2cb3f8;
        case 0x2cb3fcu: goto label_2cb3fc;
        case 0x2cb400u: goto label_2cb400;
        case 0x2cb404u: goto label_2cb404;
        case 0x2cb408u: goto label_2cb408;
        case 0x2cb40cu: goto label_2cb40c;
        case 0x2cb410u: goto label_2cb410;
        case 0x2cb414u: goto label_2cb414;
        case 0x2cb418u: goto label_2cb418;
        case 0x2cb41cu: goto label_2cb41c;
        case 0x2cb420u: goto label_2cb420;
        case 0x2cb424u: goto label_2cb424;
        case 0x2cb428u: goto label_2cb428;
        case 0x2cb42cu: goto label_2cb42c;
        case 0x2cb430u: goto label_2cb430;
        case 0x2cb434u: goto label_2cb434;
        case 0x2cb438u: goto label_2cb438;
        case 0x2cb43cu: goto label_2cb43c;
        case 0x2cb440u: goto label_2cb440;
        case 0x2cb444u: goto label_2cb444;
        case 0x2cb448u: goto label_2cb448;
        case 0x2cb44cu: goto label_2cb44c;
        case 0x2cb450u: goto label_2cb450;
        case 0x2cb454u: goto label_2cb454;
        case 0x2cb458u: goto label_2cb458;
        case 0x2cb45cu: goto label_2cb45c;
        case 0x2cb460u: goto label_2cb460;
        case 0x2cb464u: goto label_2cb464;
        case 0x2cb468u: goto label_2cb468;
        case 0x2cb46cu: goto label_2cb46c;
        case 0x2cb470u: goto label_2cb470;
        case 0x2cb474u: goto label_2cb474;
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb47cu: goto label_2cb47c;
        case 0x2cb480u: goto label_2cb480;
        case 0x2cb484u: goto label_2cb484;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb48cu: goto label_2cb48c;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb494u: goto label_2cb494;
        case 0x2cb498u: goto label_2cb498;
        case 0x2cb49cu: goto label_2cb49c;
        case 0x2cb4a0u: goto label_2cb4a0;
        case 0x2cb4a4u: goto label_2cb4a4;
        case 0x2cb4a8u: goto label_2cb4a8;
        case 0x2cb4acu: goto label_2cb4ac;
        case 0x2cb4b0u: goto label_2cb4b0;
        case 0x2cb4b4u: goto label_2cb4b4;
        case 0x2cb4b8u: goto label_2cb4b8;
        case 0x2cb4bcu: goto label_2cb4bc;
        case 0x2cb4c0u: goto label_2cb4c0;
        case 0x2cb4c4u: goto label_2cb4c4;
        case 0x2cb4c8u: goto label_2cb4c8;
        case 0x2cb4ccu: goto label_2cb4cc;
        case 0x2cb4d0u: goto label_2cb4d0;
        case 0x2cb4d4u: goto label_2cb4d4;
        case 0x2cb4d8u: goto label_2cb4d8;
        case 0x2cb4dcu: goto label_2cb4dc;
        case 0x2cb4e0u: goto label_2cb4e0;
        case 0x2cb4e4u: goto label_2cb4e4;
        case 0x2cb4e8u: goto label_2cb4e8;
        case 0x2cb4ecu: goto label_2cb4ec;
        case 0x2cb4f0u: goto label_2cb4f0;
        case 0x2cb4f4u: goto label_2cb4f4;
        case 0x2cb4f8u: goto label_2cb4f8;
        case 0x2cb4fcu: goto label_2cb4fc;
        case 0x2cb500u: goto label_2cb500;
        case 0x2cb504u: goto label_2cb504;
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb50cu: goto label_2cb50c;
        case 0x2cb510u: goto label_2cb510;
        case 0x2cb514u: goto label_2cb514;
        case 0x2cb518u: goto label_2cb518;
        case 0x2cb51cu: goto label_2cb51c;
        default: break;
    }

    ctx->pc = 0x2cb348u;

label_2cb348:
    // 0x2cb348: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cb348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2cb34c:
    // 0x2cb34c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2cb350:
    // 0x2cb350: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cb350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2cb354:
    // 0x2cb354: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2cb358:
    // 0x2cb358: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cb358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2cb35c:
    // 0x2cb35c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cb35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb360:
    // 0x2cb360: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cb360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2cb364:
    // 0x2cb364: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2cb364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2cb368:
    // 0x2cb368: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cb368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2cb36c:
    // 0x2cb36c: 0x24421890  addiu       $v0, $v0, 0x1890
    ctx->pc = 0x2cb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6288));
label_2cb370:
    // 0x2cb370: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2cb370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2cb374:
    // 0x2cb374: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2cb374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_2cb378:
    // 0x2cb378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cb37c:
    // 0x2cb37c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cb37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cb380:
    // 0x2cb380: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x2cb380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
label_2cb384:
    // 0x2cb384: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cb384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cb388:
    // 0x2cb388: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x2cb388u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
label_2cb38c:
    // 0x2cb38c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2cb38cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2cb390:
    // 0x2cb390: 0x8c68b734  lw          $t0, -0x48CC($v1)
    ctx->pc = 0x2cb390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2cb394:
    // 0x2cb394: 0xae470018  sw          $a3, 0x18($s2)
    ctx->pc = 0x2cb394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
label_2cb398:
    // 0x2cb398: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2cb398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_2cb39c:
    // 0x2cb39c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x2cb39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
label_2cb3a0:
    // 0x2cb3a0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2cb3a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cb3a4:
    // 0x2cb3a4: 0x8d020048  lw          $v0, 0x48($t0)
    ctx->pc = 0x2cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
label_2cb3a8:
    // 0x2cb3a8: 0xa640001c  sh          $zero, 0x1C($s2)
    ctx->pc = 0x2cb3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 0));
label_2cb3ac:
    // 0x2cb3ac: 0xc0a367c  jal         func_28D9F0
label_2cb3b0:
    if (ctx->pc == 0x2CB3B0u) {
        ctx->pc = 0x2CB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3ACu;
        // 0x2cb3b0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3B4u;
        goto label_2cb3b4;
    }
    ctx->pc = 0x2CB3ACu;
    SET_GPR_U32(ctx, 31, 0x2CB3B4u);
    ctx->pc = 0x2CB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3ACu;
    // 0x2cb3b0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB3ACu, 0x2CB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3B4u;
label_2cb3b4:
    // 0x2cb3b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2cb3b8:
    if (ctx->pc == 0x2CB3B8u) {
        ctx->pc = 0x2CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3B4u;
        // 0x2cb3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3BCu;
        goto label_2cb3bc;
    }
    ctx->pc = 0x2CB3B4u;
    {
        const bool branch_taken_0x2cb3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3B4u;
        // 0x2cb3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3b4) {
            ctx->pc = 0x2CB3C8u;
            goto label_2cb3c8;
        }
    }
    ctx->pc = 0x2CB3BCu;
label_2cb3bc:
    // 0x2cb3bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cb3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb3c0:
    // 0x2cb3c0: 0xc0bf3ca  jal         func_2FCF28
label_2cb3c4:
    if (ctx->pc == 0x2CB3C4u) {
        ctx->pc = 0x2CB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3C0u;
        // 0x2cb3c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3C8u;
        goto label_2cb3c8;
    }
    ctx->pc = 0x2CB3C0u;
    SET_GPR_U32(ctx, 31, 0x2CB3C8u);
    ctx->pc = 0x2CB3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3C0u;
    // 0x2cb3c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2CB3C0u, 0x2CB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3C8u;
label_2cb3c8:
    // 0x2cb3c8: 0xc0a367c  jal         func_28D9F0
label_2cb3cc:
    if (ctx->pc == 0x2CB3CCu) {
        ctx->pc = 0x2CB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3C8u;
        // 0x2cb3cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3D0u;
        goto label_2cb3d0;
    }
    ctx->pc = 0x2CB3C8u;
    SET_GPR_U32(ctx, 31, 0x2CB3D0u);
    ctx->pc = 0x2CB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3C8u;
    // 0x2cb3cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB3C8u, 0x2CB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3D0u;
label_2cb3d0:
    // 0x2cb3d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3d4:
    // 0x2cb3d4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2cb3d8:
    if (ctx->pc == 0x2CB3D8u) {
        ctx->pc = 0x2CB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3D4u;
        // 0x2cb3d8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3DCu;
        goto label_2cb3dc;
    }
    ctx->pc = 0x2CB3D4u;
    {
        const bool branch_taken_0x2cb3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb3d4) {
            ctx->pc = 0x2CB3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB3D4u;
            // 0x2cb3d8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB414u;
            goto label_2cb414;
        }
    }
    ctx->pc = 0x2CB3DCu;
label_2cb3dc:
    // 0x2cb3dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cb3e0:
    // 0x2cb3e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3e4:
    // 0x2cb3e4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2cb3e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2cb3e8:
    // 0x2cb3e8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2cb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2cb3ec:
    // 0x2cb3ec: 0x60f809  jalr        $v1
label_2cb3f0:
    if (ctx->pc == 0x2CB3F0u) {
        ctx->pc = 0x2CB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3ECu;
        // 0x2cb3f0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3F4u;
        goto label_2cb3f4;
    }
    ctx->pc = 0x2CB3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CB3F4u);
        ctx->pc = 0x2CB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3ECu;
        // 0x2cb3f0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB3ECu, 0x2CB3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB3F4u;
label_2cb3f4:
    // 0x2cb3f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cb3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb3f8:
    // 0x2cb3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3fc:
    // 0x2cb3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cb3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cb400:
    // 0x2cb400: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cb400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cb404:
    // 0x2cb404: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cb404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cb408:
    // 0x2cb408: 0xc0bf800  jal         func_2FE000
label_2cb40c:
    if (ctx->pc == 0x2CB40Cu) {
        ctx->pc = 0x2CB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB408u;
        // 0x2cb40c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB410u;
        goto label_2cb410;
    }
    ctx->pc = 0x2CB408u;
    SET_GPR_U32(ctx, 31, 0x2CB410u);
    ctx->pc = 0x2CB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB408u;
    // 0x2cb40c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CB408u, 0x2CB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB410u;
label_2cb410:
    // 0x2cb410: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cb410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cb414:
    // 0x2cb414: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb418:
    // 0x2cb418: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb41c:
    // 0x2cb41c: 0x40f809  jalr        $v0
label_2cb420:
    if (ctx->pc == 0x2CB420u) {
        ctx->pc = 0x2CB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB41Cu;
        // 0x2cb420: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB424u;
        goto label_2cb424;
    }
    ctx->pc = 0x2CB41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB424u);
        ctx->pc = 0x2CB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB41Cu;
        // 0x2cb420: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB41Cu, 0x2CB424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB424u;
label_2cb424:
    // 0x2cb424: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2cb424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2cb428:
    // 0x2cb428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cb428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cb42c:
    // 0x2cb42c: 0x8c43a058  lw          $v1, -0x5FA8($v0)
    ctx->pc = 0x2cb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942808)));
label_2cb430:
    // 0x2cb430: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_2cb434:
    if (ctx->pc == 0x2CB434u) {
        ctx->pc = 0x2CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB430u;
        // 0x2cb434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB438u;
        goto label_2cb438;
    }
    ctx->pc = 0x2CB430u;
    {
        const bool branch_taken_0x2cb430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB430u;
        // 0x2cb434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb430) {
            ctx->pc = 0x2CB4FCu;
            goto label_2cb4fc;
        }
    }
    ctx->pc = 0x2CB438u;
label_2cb438:
    // 0x2cb438: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_2cb43c:
    if (ctx->pc == 0x2CB43Cu) {
        ctx->pc = 0x2CB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB438u;
        // 0x2cb43c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB440u;
        goto label_2cb440;
    }
    ctx->pc = 0x2CB438u;
    {
        const bool branch_taken_0x2cb438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB438u;
        // 0x2cb43c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb438) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB440u;
label_2cb440:
    // 0x2cb440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb444:
    // 0x2cb444: 0xc08c978  jal         func_2325E0
label_2cb448:
    if (ctx->pc == 0x2CB448u) {
        ctx->pc = 0x2CB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB444u;
        // 0x2cb448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB44Cu;
        goto label_2cb44c;
    }
    ctx->pc = 0x2CB444u;
    SET_GPR_U32(ctx, 31, 0x2CB44Cu);
    ctx->pc = 0x2CB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB444u;
    // 0x2cb448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2325E0u, 0x2CB444u, 0x2CB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB44Cu;
label_2cb44c:
    // 0x2cb44c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cb450:
    // 0x2cb450: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb454:
    // 0x2cb454: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb458:
    // 0x2cb458: 0x40f809  jalr        $v0
label_2cb45c:
    if (ctx->pc == 0x2CB45Cu) {
        ctx->pc = 0x2CB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB458u;
        // 0x2cb45c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB460u;
        goto label_2cb460;
    }
    ctx->pc = 0x2CB458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB460u);
        ctx->pc = 0x2CB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB458u;
        // 0x2cb45c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB458u, 0x2CB460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB460u;
label_2cb460:
    // 0x2cb460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb464:
    // 0x2cb464: 0xc0a48cc  jal         func_292330
label_2cb468:
    if (ctx->pc == 0x2CB468u) {
        ctx->pc = 0x2CB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB464u;
        // 0x2cb468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB46Cu;
        goto label_2cb46c;
    }
    ctx->pc = 0x2CB464u;
    SET_GPR_U32(ctx, 31, 0x2CB46Cu);
    ctx->pc = 0x2CB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB464u;
    // 0x2cb468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2CB464u, 0x2CB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB46Cu;
label_2cb46c:
    // 0x2cb46c: 0xc087502  jal         func_21D408
label_2cb470:
    if (ctx->pc == 0x2CB470u) {
        ctx->pc = 0x2CB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB46Cu;
        // 0x2cb470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB474u;
        goto label_2cb474;
    }
    ctx->pc = 0x2CB46Cu;
    SET_GPR_U32(ctx, 31, 0x2CB474u);
    ctx->pc = 0x2CB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB46Cu;
    // 0x2cb470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB46Cu, 0x2CB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB474u;
label_2cb474:
    // 0x2cb474: 0xc0a367c  jal         func_28D9F0
label_2cb478:
    if (ctx->pc == 0x2CB478u) {
        ctx->pc = 0x2CB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB474u;
        // 0x2cb478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB47Cu;
        goto label_2cb47c;
    }
    ctx->pc = 0x2CB474u;
    SET_GPR_U32(ctx, 31, 0x2CB47Cu);
    ctx->pc = 0x2CB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB474u;
    // 0x2cb478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB474u, 0x2CB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB47Cu;
label_2cb47c:
    // 0x2cb47c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb480:
    // 0x2cb480: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2cb484:
    if (ctx->pc == 0x2CB484u) {
        ctx->pc = 0x2CB488u;
        goto label_2cb488;
    }
    ctx->pc = 0x2CB480u;
    {
        const bool branch_taken_0x2cb480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb480) {
            ctx->pc = 0x2CB4A0u;
            goto label_2cb4a0;
        }
    }
    ctx->pc = 0x2CB488u;
label_2cb488:
    // 0x2cb488: 0xc087502  jal         func_21D408
label_2cb48c:
    if (ctx->pc == 0x2CB48Cu) {
        ctx->pc = 0x2CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB488u;
        // 0x2cb48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB490u;
        goto label_2cb490;
    }
    ctx->pc = 0x2CB488u;
    SET_GPR_U32(ctx, 31, 0x2CB490u);
    ctx->pc = 0x2CB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB488u;
    // 0x2cb48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB488u, 0x2CB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB490u;
label_2cb490:
    // 0x2cb490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb494:
    // 0x2cb494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cb494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb498:
    // 0x2cb498: 0xc0bf3ca  jal         func_2FCF28
label_2cb49c:
    if (ctx->pc == 0x2CB49Cu) {
        ctx->pc = 0x2CB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB498u;
        // 0x2cb49c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4A0u;
        goto label_2cb4a0;
    }
    ctx->pc = 0x2CB498u;
    SET_GPR_U32(ctx, 31, 0x2CB4A0u);
    ctx->pc = 0x2CB49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB498u;
    // 0x2cb49c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2CB498u, 0x2CB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4A0u;
label_2cb4a0:
    // 0x2cb4a0: 0xc087502  jal         func_21D408
label_2cb4a4:
    if (ctx->pc == 0x2CB4A4u) {
        ctx->pc = 0x2CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A0u;
        // 0x2cb4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4A8u;
        goto label_2cb4a8;
    }
    ctx->pc = 0x2CB4A0u;
    SET_GPR_U32(ctx, 31, 0x2CB4A8u);
    ctx->pc = 0x2CB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4A0u;
    // 0x2cb4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB4A0u, 0x2CB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4A8u;
label_2cb4a8:
    // 0x2cb4a8: 0xc0a367c  jal         func_28D9F0
label_2cb4ac:
    if (ctx->pc == 0x2CB4ACu) {
        ctx->pc = 0x2CB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A8u;
        // 0x2cb4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4B0u;
        goto label_2cb4b0;
    }
    ctx->pc = 0x2CB4A8u;
    SET_GPR_U32(ctx, 31, 0x2CB4B0u);
    ctx->pc = 0x2CB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4A8u;
    // 0x2cb4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB4A8u, 0x2CB4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4B0u;
label_2cb4b0:
    // 0x2cb4b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cb4b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4b4:
    // 0x2cb4b4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2cb4b8:
    if (ctx->pc == 0x2CB4B8u) {
        ctx->pc = 0x2CB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B4u;
        // 0x2cb4b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4BCu;
        goto label_2cb4bc;
    }
    ctx->pc = 0x2CB4B4u;
    {
        const bool branch_taken_0x2cb4b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B4u;
        // 0x2cb4b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4b4) {
            ctx->pc = 0x2CB500u;
            goto label_2cb500;
        }
    }
    ctx->pc = 0x2CB4BCu;
label_2cb4bc:
    // 0x2cb4bc: 0xc087502  jal         func_21D408
label_2cb4c0:
    if (ctx->pc == 0x2CB4C0u) {
        ctx->pc = 0x2CB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4BCu;
        // 0x2cb4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4C4u;
        goto label_2cb4c4;
    }
    ctx->pc = 0x2CB4BCu;
    SET_GPR_U32(ctx, 31, 0x2CB4C4u);
    ctx->pc = 0x2CB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4BCu;
    // 0x2cb4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB4BCu, 0x2CB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4C4u;
label_2cb4c4:
    // 0x2cb4c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cb4c8:
    // 0x2cb4c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4cc:
    // 0x2cb4cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4d0:
    // 0x2cb4d0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2cb4d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2cb4d4:
    // 0x2cb4d4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2cb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2cb4d8:
    // 0x2cb4d8: 0x40f809  jalr        $v0
label_2cb4dc:
    if (ctx->pc == 0x2CB4DCu) {
        ctx->pc = 0x2CB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4D8u;
        // 0x2cb4dc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4E0u;
        goto label_2cb4e0;
    }
    ctx->pc = 0x2CB4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB4E0u);
        ctx->pc = 0x2CB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4D8u;
        // 0x2cb4dc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB4D8u, 0x2CB4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB4E0u;
label_2cb4e0:
    // 0x2cb4e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cb4e4:
    // 0x2cb4e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cb4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cb4e8:
    // 0x2cb4e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cb4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4ec:
    // 0x2cb4ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4f0:
    // 0x2cb4f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cb4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4f4:
    // 0x2cb4f4: 0xc0bf800  jal         func_2FE000
label_2cb4f8:
    if (ctx->pc == 0x2CB4F8u) {
        ctx->pc = 0x2CB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4F4u;
        // 0x2cb4f8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4FCu;
        goto label_2cb4fc;
    }
    ctx->pc = 0x2CB4F4u;
    SET_GPR_U32(ctx, 31, 0x2CB4FCu);
    ctx->pc = 0x2CB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4F4u;
    // 0x2cb4f8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CB4F4u, 0x2CB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4FCu;
label_2cb4fc:
    // 0x2cb4fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2cb4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cb500:
    // 0x2cb500: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cb500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cb504:
    // 0x2cb504: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cb504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cb508:
    // 0x2cb508: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cb508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cb50c:
    // 0x2cb50c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cb50cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb510:
    // 0x2cb510: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2cb510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb514:
    // 0x2cb514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb518:
    // 0x2cb518: 0x3e00008  jr          $ra
label_2cb51c:
    if (ctx->pc == 0x2CB51Cu) {
        ctx->pc = 0x2CB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB518u;
        // 0x2cb51c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB520u;
        goto label_fallthrough_0x2cb518;
    }
    ctx->pc = 0x2CB518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB518u;
        // 0x2cb51c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cb518:
    ctx->pc = 0x2CB520u;
}
