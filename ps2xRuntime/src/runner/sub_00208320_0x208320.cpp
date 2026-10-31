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

// Function: sub_00208320
// Address: 0x208320 - 0x208430
void sub_00208320_0x208320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208320_0x208320");
#endif

    switch (ctx->pc) {
        case 0x208320u: goto label_208320;
        case 0x208324u: goto label_208324;
        case 0x208328u: goto label_208328;
        case 0x20832cu: goto label_20832c;
        case 0x208330u: goto label_208330;
        case 0x208334u: goto label_208334;
        case 0x208338u: goto label_208338;
        case 0x20833cu: goto label_20833c;
        case 0x208340u: goto label_208340;
        case 0x208344u: goto label_208344;
        case 0x208348u: goto label_208348;
        case 0x20834cu: goto label_20834c;
        case 0x208350u: goto label_208350;
        case 0x208354u: goto label_208354;
        case 0x208358u: goto label_208358;
        case 0x20835cu: goto label_20835c;
        case 0x208360u: goto label_208360;
        case 0x208364u: goto label_208364;
        case 0x208368u: goto label_208368;
        case 0x20836cu: goto label_20836c;
        case 0x208370u: goto label_208370;
        case 0x208374u: goto label_208374;
        case 0x208378u: goto label_208378;
        case 0x20837cu: goto label_20837c;
        case 0x208380u: goto label_208380;
        case 0x208384u: goto label_208384;
        case 0x208388u: goto label_208388;
        case 0x20838cu: goto label_20838c;
        case 0x208390u: goto label_208390;
        case 0x208394u: goto label_208394;
        case 0x208398u: goto label_208398;
        case 0x20839cu: goto label_20839c;
        case 0x2083a0u: goto label_2083a0;
        case 0x2083a4u: goto label_2083a4;
        case 0x2083a8u: goto label_2083a8;
        case 0x2083acu: goto label_2083ac;
        case 0x2083b0u: goto label_2083b0;
        case 0x2083b4u: goto label_2083b4;
        case 0x2083b8u: goto label_2083b8;
        case 0x2083bcu: goto label_2083bc;
        case 0x2083c0u: goto label_2083c0;
        case 0x2083c4u: goto label_2083c4;
        case 0x2083c8u: goto label_2083c8;
        case 0x2083ccu: goto label_2083cc;
        case 0x2083d0u: goto label_2083d0;
        case 0x2083d4u: goto label_2083d4;
        case 0x2083d8u: goto label_2083d8;
        case 0x2083dcu: goto label_2083dc;
        case 0x2083e0u: goto label_2083e0;
        case 0x2083e4u: goto label_2083e4;
        case 0x2083e8u: goto label_2083e8;
        case 0x2083ecu: goto label_2083ec;
        case 0x2083f0u: goto label_2083f0;
        case 0x2083f4u: goto label_2083f4;
        case 0x2083f8u: goto label_2083f8;
        case 0x2083fcu: goto label_2083fc;
        case 0x208400u: goto label_208400;
        case 0x208404u: goto label_208404;
        case 0x208408u: goto label_208408;
        case 0x20840cu: goto label_20840c;
        case 0x208410u: goto label_208410;
        case 0x208414u: goto label_208414;
        case 0x208418u: goto label_208418;
        case 0x20841cu: goto label_20841c;
        case 0x208420u: goto label_208420;
        case 0x208424u: goto label_208424;
        case 0x208428u: goto label_208428;
        case 0x20842cu: goto label_20842c;
        default: break;
    }

    ctx->pc = 0x208320u;

label_208320:
    // 0x208320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_208324:
    // 0x208324: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x208324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_208328:
    // 0x208328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x208328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20832c:
    // 0x20832c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_208330:
    // 0x208330: 0xc06a38c  jal         func_1A8E30
label_208334:
    if (ctx->pc == 0x208334u) {
        ctx->pc = 0x208334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208330u;
        // 0x208334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208338u;
        goto label_208338;
    }
    ctx->pc = 0x208330u;
    SET_GPR_U32(ctx, 31, 0x208338u);
    ctx->pc = 0x208334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208330u;
    // 0x208334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x208330u, 0x208338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208338u;
label_208338:
    // 0x208338: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x208338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20833c:
    // 0x20833c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20833cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_208340:
    // 0x208340: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x208340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_208344:
    // 0x208344: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x208344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_208348:
    // 0x208348: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x208348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20834c:
    // 0x20834c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20834cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_208350:
    // 0x208350: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x208350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_208354:
    // 0x208354: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x208354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_208358:
    // 0x208358: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x208358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20835c:
    // 0x20835c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20835cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_208360:
    // 0x208360: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_208364:
    // 0x208364: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x208364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_208368:
    // 0x208368: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x208368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20836c:
    // 0x20836c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20836cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_208370:
    // 0x208370: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_208374:
    // 0x208374: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x208374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_208378:
    // 0x208378: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20837c:
    // 0x20837c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20837cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_208380:
    // 0x208380: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x208380u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_208384:
    // 0x208384: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x208384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_208388:
    // 0x208388: 0x24a58c80  addiu       $a1, $a1, -0x7380
    ctx->pc = 0x208388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937728));
label_20838c:
    // 0x20838c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20838cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_208390:
    // 0x208390: 0x25088c88  addiu       $t0, $t0, -0x7378
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937736));
label_208394:
    // 0x208394: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x208394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_208398:
    // 0x208398: 0x254a8cb0  addiu       $t2, $t2, -0x7350
    ctx->pc = 0x208398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937776));
label_20839c:
    // 0x20839c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20839cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2083a0:
    // 0x2083a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2083a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2083a4:
    // 0x2083a4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2083a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2083a8:
    // 0x2083a8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_2083ac:
    // 0x2083ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2083acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2083b0:
    // 0x2083b0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2083b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2083b4:
    // 0x2083b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2083b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2083b8:
    // 0x2083b8: 0x40f809  jalr        $v0
label_2083bc:
    if (ctx->pc == 0x2083BCu) {
        ctx->pc = 0x2083BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B8u;
        // 0x2083bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083C0u;
        goto label_2083c0;
    }
    ctx->pc = 0x2083B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2083C0u);
        ctx->pc = 0x2083BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B8u;
        // 0x2083bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2083B8u, 0x2083C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2083C0u;
label_2083c0:
    // 0x2083c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2083c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2083c4:
    // 0x2083c4: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2083c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_2083c8:
    // 0x2083c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2083c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2083cc:
    // 0x2083cc: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x2083ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_2083d0:
    // 0x2083d0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x2083d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_2083d4:
    // 0x2083d4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x2083d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_2083d8:
    // 0x2083d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2083d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2083dc:
    // 0x2083dc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2083dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2083e0:
    // 0x2083e0: 0x2508e138  addiu       $t0, $t0, -0x1EC8
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959416));
label_2083e4:
    // 0x2083e4: 0x24e7e160  addiu       $a3, $a3, -0x1EA0
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959456));
label_2083e8:
    // 0x2083e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2083e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2083ec:
    // 0x2083ec: 0x24a5e190  addiu       $a1, $a1, -0x1E70
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959504));
label_2083f0:
    // 0x2083f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2083f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2083f4:
    // 0x2083f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2083f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2083f8:
    // 0x2083f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2083f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2083fc:
    // 0x2083fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2083fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208400:
    // 0x208400: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x208400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_208404:
    // 0x208404: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x208404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_208408:
    // 0x208408: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20840c:
    // 0x20840c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208410:
    // 0x208410: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x208410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_208414:
    // 0x208414: 0xae08006c  sw          $t0, 0x6C($s0)
    ctx->pc = 0x208414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
label_208418:
    // 0x208418: 0xae070088  sw          $a3, 0x88($s0)
    ctx->pc = 0x208418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 7));
label_20841c:
    // 0x20841c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20841cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_208420:
    // 0x208420: 0xae0600a0  sw          $a2, 0xA0($s0)
    ctx->pc = 0x208420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 6));
label_208424:
    // 0x208424: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x208424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_208428:
    // 0x208428: 0x3e00008  jr          $ra
label_20842c:
    if (ctx->pc == 0x20842Cu) {
        ctx->pc = 0x20842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208428u;
        // 0x20842c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208430u;
        goto label_fallthrough_0x208428;
    }
    ctx->pc = 0x208428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208428u;
        // 0x20842c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208428:
    ctx->pc = 0x208430u;
}
