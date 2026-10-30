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

// Function: sub_002ED360
// Address: 0x2ed360 - 0x2ed498
void sub_002ED360_0x2ed360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED360_0x2ed360");
#endif

    switch (ctx->pc) {
        case 0x2ed360u: goto label_2ed360;
        case 0x2ed364u: goto label_2ed364;
        case 0x2ed368u: goto label_2ed368;
        case 0x2ed36cu: goto label_2ed36c;
        case 0x2ed370u: goto label_2ed370;
        case 0x2ed374u: goto label_2ed374;
        case 0x2ed378u: goto label_2ed378;
        case 0x2ed37cu: goto label_2ed37c;
        case 0x2ed380u: goto label_2ed380;
        case 0x2ed384u: goto label_2ed384;
        case 0x2ed388u: goto label_2ed388;
        case 0x2ed38cu: goto label_2ed38c;
        case 0x2ed390u: goto label_2ed390;
        case 0x2ed394u: goto label_2ed394;
        case 0x2ed398u: goto label_2ed398;
        case 0x2ed39cu: goto label_2ed39c;
        case 0x2ed3a0u: goto label_2ed3a0;
        case 0x2ed3a4u: goto label_2ed3a4;
        case 0x2ed3a8u: goto label_2ed3a8;
        case 0x2ed3acu: goto label_2ed3ac;
        case 0x2ed3b0u: goto label_2ed3b0;
        case 0x2ed3b4u: goto label_2ed3b4;
        case 0x2ed3b8u: goto label_2ed3b8;
        case 0x2ed3bcu: goto label_2ed3bc;
        case 0x2ed3c0u: goto label_2ed3c0;
        case 0x2ed3c4u: goto label_2ed3c4;
        case 0x2ed3c8u: goto label_2ed3c8;
        case 0x2ed3ccu: goto label_2ed3cc;
        case 0x2ed3d0u: goto label_2ed3d0;
        case 0x2ed3d4u: goto label_2ed3d4;
        case 0x2ed3d8u: goto label_2ed3d8;
        case 0x2ed3dcu: goto label_2ed3dc;
        case 0x2ed3e0u: goto label_2ed3e0;
        case 0x2ed3e4u: goto label_2ed3e4;
        case 0x2ed3e8u: goto label_2ed3e8;
        case 0x2ed3ecu: goto label_2ed3ec;
        case 0x2ed3f0u: goto label_2ed3f0;
        case 0x2ed3f4u: goto label_2ed3f4;
        case 0x2ed3f8u: goto label_2ed3f8;
        case 0x2ed3fcu: goto label_2ed3fc;
        case 0x2ed400u: goto label_2ed400;
        case 0x2ed404u: goto label_2ed404;
        case 0x2ed408u: goto label_2ed408;
        case 0x2ed40cu: goto label_2ed40c;
        case 0x2ed410u: goto label_2ed410;
        case 0x2ed414u: goto label_2ed414;
        case 0x2ed418u: goto label_2ed418;
        case 0x2ed41cu: goto label_2ed41c;
        case 0x2ed420u: goto label_2ed420;
        case 0x2ed424u: goto label_2ed424;
        case 0x2ed428u: goto label_2ed428;
        case 0x2ed42cu: goto label_2ed42c;
        case 0x2ed430u: goto label_2ed430;
        case 0x2ed434u: goto label_2ed434;
        case 0x2ed438u: goto label_2ed438;
        case 0x2ed43cu: goto label_2ed43c;
        case 0x2ed440u: goto label_2ed440;
        case 0x2ed444u: goto label_2ed444;
        case 0x2ed448u: goto label_2ed448;
        case 0x2ed44cu: goto label_2ed44c;
        case 0x2ed450u: goto label_2ed450;
        case 0x2ed454u: goto label_2ed454;
        case 0x2ed458u: goto label_2ed458;
        case 0x2ed45cu: goto label_2ed45c;
        case 0x2ed460u: goto label_2ed460;
        case 0x2ed464u: goto label_2ed464;
        case 0x2ed468u: goto label_2ed468;
        case 0x2ed46cu: goto label_2ed46c;
        case 0x2ed470u: goto label_2ed470;
        case 0x2ed474u: goto label_2ed474;
        case 0x2ed478u: goto label_2ed478;
        case 0x2ed47cu: goto label_2ed47c;
        case 0x2ed480u: goto label_2ed480;
        case 0x2ed484u: goto label_2ed484;
        case 0x2ed488u: goto label_2ed488;
        case 0x2ed48cu: goto label_2ed48c;
        case 0x2ed490u: goto label_2ed490;
        case 0x2ed494u: goto label_2ed494;
        default: break;
    }

    ctx->pc = 0x2ed360u;

label_2ed360:
    // 0x2ed360: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ed360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ed364:
    // 0x2ed364: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2ed364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2ed368:
    // 0x2ed368: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ed368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ed36c:
    // 0x2ed36c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ed36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed370:
    // 0x2ed370: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2ed370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2ed374:
    // 0x2ed374: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x2ed374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2ed378:
    // 0x2ed378: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2ed378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2ed37c:
    // 0x2ed37c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ed37cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed380:
    // 0x2ed380: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2ed380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2ed384:
    // 0x2ed384: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2ed384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ed388:
    // 0x2ed388: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2ed388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2ed38c:
    // 0x2ed38c: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x2ed38cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ed390:
    // 0x2ed390: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2ed390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2ed394:
    // 0x2ed394: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x2ed394u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_2ed398:
    // 0x2ed398: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2ed398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2ed39c:
    // 0x2ed39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ed3a0:
    // 0x2ed3a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2ed3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2ed3a4:
    // 0x2ed3a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ed3a8:
    if (ctx->pc == 0x2ED3A8u) {
        ctx->pc = 0x2ED3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3A4u;
        // 0x2ed3a8: 0x9251002c  lbu         $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED3ACu;
        goto label_2ed3ac;
    }
    ctx->pc = 0x2ED3A4u;
    {
        const bool branch_taken_0x2ed3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3A4u;
        // 0x2ed3a8: 0x9251002c  lbu         $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3a4) {
            ctx->pc = 0x2ED3B8u;
            goto label_2ed3b8;
        }
    }
    ctx->pc = 0x2ED3ACu;
label_2ed3ac:
    // 0x2ed3ac: 0x0  nop
    ctx->pc = 0x2ed3acu;
    // NOP
label_2ed3b0:
    // 0x2ed3b0: 0x56750023  bnel        $s3, $s5, . + 4 + (0x23 << 2)
label_2ed3b4:
    if (ctx->pc == 0x2ED3B4u) {
        ctx->pc = 0x2ED3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3B0u;
        // 0x2ed3b4: 0xa251002c  sb          $s1, 0x2C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED3B8u;
        goto label_2ed3b8;
    }
    ctx->pc = 0x2ED3B0u;
    {
        const bool branch_taken_0x2ed3b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x2ed3b0) {
            ctx->pc = 0x2ED3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3B0u;
            // 0x2ed3b4: 0xa251002c  sb          $s1, 0x2C($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2ED3B8u;
label_2ed3b8:
    // 0x2ed3b8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ed3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ed3bc:
    // 0x2ed3bc: 0x30710007  andi        $s1, $v1, 0x7
    ctx->pc = 0x2ed3bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2ed3c0:
    // 0x2ed3c0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2ed3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2ed3c4:
    // 0x2ed3c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ed3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2ed3c8:
    // 0x2ed3c8: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ed3c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed3cc:
    // 0x2ed3cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ed3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ed3d0:
    // 0x2ed3d0: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
label_2ed3d4:
    if (ctx->pc == 0x2ED3D4u) {
        ctx->pc = 0x2ED3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3D0u;
        // 0x2ed3d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED3D8u;
        goto label_2ed3d8;
    }
    ctx->pc = 0x2ED3D0u;
    {
        const bool branch_taken_0x2ed3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3D0u;
        // 0x2ed3d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3d0) {
            ctx->pc = 0x2ED430u;
            goto label_2ed430;
        }
    }
    ctx->pc = 0x2ED3D8u;
label_2ed3d8:
    // 0x2ed3d8: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x2ed3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_2ed3dc:
    // 0x2ed3dc: 0xc0e44cc  jal         func_391330
label_2ed3e0:
    if (ctx->pc == 0x2ED3E0u) {
        ctx->pc = 0x2ED3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3DCu;
        // 0x2ed3e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED3E4u;
        goto label_2ed3e4;
    }
    ctx->pc = 0x2ED3DCu;
    SET_GPR_U32(ctx, 31, 0x2ED3E4u);
    ctx->pc = 0x2ED3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3DCu;
    // 0x2ed3e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2ED3DCu, 0x2ED3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3E4u;
label_2ed3e4:
    // 0x2ed3e4: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x2ed3e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_2ed3e8:
    // 0x2ed3e8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2ed3e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ed3ec:
    // 0x2ed3ec: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_2ed3f0:
    if (ctx->pc == 0x2ED3F0u) {
        ctx->pc = 0x2ED3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3ECu;
        // 0x2ed3f0: 0x9242002c  lbu         $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED3F4u;
        goto label_2ed3f4;
    }
    ctx->pc = 0x2ED3ECu;
    {
        const bool branch_taken_0x2ed3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3ec) {
            ctx->pc = 0x2ED3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3ECu;
            // 0x2ed3f0: 0x9242002c  lbu         $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED434u;
            goto label_2ed434;
        }
    }
    ctx->pc = 0x2ED3F4u;
label_2ed3f4:
    // 0x2ed3f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ed3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ed3f8:
    // 0x2ed3f8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ed3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ed3fc:
    // 0x2ed3fc: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2ed3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2ed400:
    // 0x2ed400: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2ed404:
    if (ctx->pc == 0x2ED404u) {
        ctx->pc = 0x2ED404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED400u;
        // 0x2ed404: 0x9242002c  lbu         $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED408u;
        goto label_2ed408;
    }
    ctx->pc = 0x2ED400u;
    {
        const bool branch_taken_0x2ed400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed400) {
            ctx->pc = 0x2ED404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED400u;
            // 0x2ed404: 0x9242002c  lbu         $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED434u;
            goto label_2ed434;
        }
    }
    ctx->pc = 0x2ED408u;
label_2ed408:
    // 0x2ed408: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ed40c:
    // 0x2ed40c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2ed40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2ed410:
    // 0x2ed410: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ed410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ed414:
    // 0x2ed414: 0x40f809  jalr        $v0
label_2ed418:
    if (ctx->pc == 0x2ED418u) {
        ctx->pc = 0x2ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED414u;
        // 0x2ed418: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED41Cu;
        goto label_2ed41c;
    }
    ctx->pc = 0x2ED414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED41Cu);
        ctx->pc = 0x2ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED414u;
        // 0x2ed418: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED414u, 0x2ED41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED41Cu;
label_2ed41c:
    // 0x2ed41c: 0x54570005  bnel        $v0, $s7, . + 4 + (0x5 << 2)
label_2ed420:
    if (ctx->pc == 0x2ED420u) {
        ctx->pc = 0x2ED420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED41Cu;
        // 0x2ed420: 0x9242002c  lbu         $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED424u;
        goto label_2ed424;
    }
    ctx->pc = 0x2ED41Cu;
    {
        const bool branch_taken_0x2ed41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2ed41c) {
            ctx->pc = 0x2ED420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED41Cu;
            // 0x2ed420: 0x9242002c  lbu         $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED434u;
            goto label_2ed434;
        }
    }
    ctx->pc = 0x2ED424u;
label_2ed424:
    // 0x2ed424: 0xc0c29a0  jal         func_30A680
label_2ed428:
    if (ctx->pc == 0x2ED428u) {
        ctx->pc = 0x2ED428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED424u;
        // 0x2ed428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED42Cu;
        goto label_2ed42c;
    }
    ctx->pc = 0x2ED424u;
    SET_GPR_U32(ctx, 31, 0x2ED42Cu);
    ctx->pc = 0x2ED428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED424u;
    // 0x2ed428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A680u, 0x2ED424u, 0x2ED42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED42Cu;
label_2ed42c:
    // 0x2ed42c: 0x2a2980a  movz        $s3, $s5, $v0
    ctx->pc = 0x2ed42cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
label_2ed430:
    // 0x2ed430: 0x9242002c  lbu         $v0, 0x2C($s2)
    ctx->pc = 0x2ed430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2ed434:
    // 0x2ed434: 0x1622ffde  bne         $s1, $v0, . + 4 + (-0x22 << 2)
label_2ed438:
    if (ctx->pc == 0x2ED438u) {
        ctx->pc = 0x2ED43Cu;
        goto label_2ed43c;
    }
    ctx->pc = 0x2ED434u;
    {
        const bool branch_taken_0x2ed434 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed434) {
            ctx->pc = 0x2ED3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed3b0;
        }
    }
    ctx->pc = 0x2ED43Cu;
label_2ed43c:
    // 0x2ed43c: 0xa251002c  sb          $s1, 0x2C($s2)
    ctx->pc = 0x2ed43cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 17));
label_2ed440:
    // 0x2ed440: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ed440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ed444:
    // 0x2ed444: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2ed444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2ed448:
    // 0x2ed448: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ed448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2ed44c:
    // 0x2ed44c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2ed44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2ed450:
    // 0x2ed450: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ed450u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed454:
    // 0x2ed454: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_2ed458:
    if (ctx->pc == 0x2ED458u) {
        ctx->pc = 0x2ED458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED454u;
        // 0x2ed458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED45Cu;
        goto label_2ed45c;
    }
    ctx->pc = 0x2ED454u;
    {
        const bool branch_taken_0x2ed454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED454u;
        // 0x2ed458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed454) {
            ctx->pc = 0x2ED468u;
            goto label_2ed468;
        }
    }
    ctx->pc = 0x2ED45Cu;
label_2ed45c:
    // 0x2ed45c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ed45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ed460:
    // 0x2ed460: 0xc0e4546  jal         func_391518
label_2ed464:
    if (ctx->pc == 0x2ED464u) {
        ctx->pc = 0x2ED464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED460u;
        // 0x2ed464: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED468u;
        goto label_2ed468;
    }
    ctx->pc = 0x2ED460u;
    SET_GPR_U32(ctx, 31, 0x2ED468u);
    ctx->pc = 0x2ED464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED460u;
    // 0x2ed464: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x2ED460u, 0x2ED468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED468u;
label_2ed468:
    // 0x2ed468: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2ed468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ed46c:
    // 0x2ed46c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2ed46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ed470:
    // 0x2ed470: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2ed470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ed474:
    // 0x2ed474: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2ed474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ed478:
    // 0x2ed478: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ed478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ed47c:
    // 0x2ed47c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2ed47cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ed480:
    // 0x2ed480: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2ed480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ed484:
    // 0x2ed484: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2ed484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed488:
    // 0x2ed488: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2ed488u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed48c:
    // 0x2ed48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed490:
    // 0x2ed490: 0x3e00008  jr          $ra
label_2ed494:
    if (ctx->pc == 0x2ED494u) {
        ctx->pc = 0x2ED494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED490u;
        // 0x2ed494: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED498u;
        goto label_fallthrough_0x2ed490;
    }
    ctx->pc = 0x2ED490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED490u;
        // 0x2ed494: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed490:
    ctx->pc = 0x2ED498u;
}
