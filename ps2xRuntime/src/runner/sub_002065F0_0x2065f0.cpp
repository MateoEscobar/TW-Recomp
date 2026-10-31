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

// Function: sub_002065F0
// Address: 0x2065f0 - 0x2066f8
void sub_002065F0_0x2065f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002065F0_0x2065f0");
#endif

    switch (ctx->pc) {
        case 0x2065f0u: goto label_2065f0;
        case 0x2065f4u: goto label_2065f4;
        case 0x2065f8u: goto label_2065f8;
        case 0x2065fcu: goto label_2065fc;
        case 0x206600u: goto label_206600;
        case 0x206604u: goto label_206604;
        case 0x206608u: goto label_206608;
        case 0x20660cu: goto label_20660c;
        case 0x206610u: goto label_206610;
        case 0x206614u: goto label_206614;
        case 0x206618u: goto label_206618;
        case 0x20661cu: goto label_20661c;
        case 0x206620u: goto label_206620;
        case 0x206624u: goto label_206624;
        case 0x206628u: goto label_206628;
        case 0x20662cu: goto label_20662c;
        case 0x206630u: goto label_206630;
        case 0x206634u: goto label_206634;
        case 0x206638u: goto label_206638;
        case 0x20663cu: goto label_20663c;
        case 0x206640u: goto label_206640;
        case 0x206644u: goto label_206644;
        case 0x206648u: goto label_206648;
        case 0x20664cu: goto label_20664c;
        case 0x206650u: goto label_206650;
        case 0x206654u: goto label_206654;
        case 0x206658u: goto label_206658;
        case 0x20665cu: goto label_20665c;
        case 0x206660u: goto label_206660;
        case 0x206664u: goto label_206664;
        case 0x206668u: goto label_206668;
        case 0x20666cu: goto label_20666c;
        case 0x206670u: goto label_206670;
        case 0x206674u: goto label_206674;
        case 0x206678u: goto label_206678;
        case 0x20667cu: goto label_20667c;
        case 0x206680u: goto label_206680;
        case 0x206684u: goto label_206684;
        case 0x206688u: goto label_206688;
        case 0x20668cu: goto label_20668c;
        case 0x206690u: goto label_206690;
        case 0x206694u: goto label_206694;
        case 0x206698u: goto label_206698;
        case 0x20669cu: goto label_20669c;
        case 0x2066a0u: goto label_2066a0;
        case 0x2066a4u: goto label_2066a4;
        case 0x2066a8u: goto label_2066a8;
        case 0x2066acu: goto label_2066ac;
        case 0x2066b0u: goto label_2066b0;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066b8u: goto label_2066b8;
        case 0x2066bcu: goto label_2066bc;
        case 0x2066c0u: goto label_2066c0;
        case 0x2066c4u: goto label_2066c4;
        case 0x2066c8u: goto label_2066c8;
        case 0x2066ccu: goto label_2066cc;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066d4u: goto label_2066d4;
        case 0x2066d8u: goto label_2066d8;
        case 0x2066dcu: goto label_2066dc;
        case 0x2066e0u: goto label_2066e0;
        case 0x2066e4u: goto label_2066e4;
        case 0x2066e8u: goto label_2066e8;
        case 0x2066ecu: goto label_2066ec;
        case 0x2066f0u: goto label_2066f0;
        case 0x2066f4u: goto label_2066f4;
        default: break;
    }

    ctx->pc = 0x2065f0u;

label_2065f0:
    // 0x2065f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2065f4:
    // 0x2065f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2065f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2065f8:
    // 0x2065f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2065f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2065fc:
    // 0x2065fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2065fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_206600:
    // 0x206600: 0xc06a38c  jal         func_1A8E30
label_206604:
    if (ctx->pc == 0x206604u) {
        ctx->pc = 0x206604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206600u;
        // 0x206604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206608u;
        goto label_206608;
    }
    ctx->pc = 0x206600u;
    SET_GPR_U32(ctx, 31, 0x206608u);
    ctx->pc = 0x206604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206600u;
    // 0x206604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x206600u, 0x206608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206608u;
label_206608:
    // 0x206608: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x206608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20660c:
    // 0x20660c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20660cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_206610:
    // 0x206610: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x206610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_206614:
    // 0x206614: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_206618:
    // 0x206618: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x206618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20661c:
    // 0x20661c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20661cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_206620:
    // 0x206620: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_206624:
    // 0x206624: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x206624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_206628:
    // 0x206628: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20662c:
    // 0x20662c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20662cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_206630:
    // 0x206630: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_206634:
    // 0x206634: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x206634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_206638:
    // 0x206638: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20663c:
    // 0x20663c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20663cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_206640:
    // 0x206640: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x206640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_206644:
    // 0x206644: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x206644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_206648:
    // 0x206648: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20664c:
    // 0x20664c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20664cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_206650:
    // 0x206650: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_206654:
    // 0x206654: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x206654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_206658:
    // 0x206658: 0x24a588e0  addiu       $a1, $a1, -0x7720
    ctx->pc = 0x206658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936800));
label_20665c:
    // 0x20665c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_206660:
    // 0x206660: 0x250888e8  addiu       $t0, $t0, -0x7718
    ctx->pc = 0x206660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936808));
label_206664:
    // 0x206664: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x206664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_206668:
    // 0x206668: 0x254a8910  addiu       $t2, $t2, -0x76F0
    ctx->pc = 0x206668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936848));
label_20666c:
    // 0x20666c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206670:
    // 0x206670: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x206670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206674:
    // 0x206674: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x206674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_206678:
    // 0x206678: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20667c:
    // 0x20667c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20667cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206680:
    // 0x206680: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_206684:
    // 0x206684: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x206684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_206688:
    // 0x206688: 0x40f809  jalr        $v0
label_20668c:
    if (ctx->pc == 0x20668Cu) {
        ctx->pc = 0x20668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206688u;
        // 0x20668c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206690u;
        goto label_206690;
    }
    ctx->pc = 0x206688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206690u);
        ctx->pc = 0x20668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206688u;
        // 0x20668c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206688u, 0x206690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206690u;
label_206690:
    // 0x206690: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x206690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_206694:
    // 0x206694: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x206694u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_206698:
    // 0x206698: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x206698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20669c:
    // 0x20669c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_2066a0:
    // 0x2066a0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x2066a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_2066a4:
    // 0x2066a4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_2066a8:
    // 0x2066a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2066a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2066ac:
    // 0x2066ac: 0x24e7de08  addiu       $a3, $a3, -0x21F8
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958600));
label_2066b0:
    // 0x2066b0: 0x24c6de30  addiu       $a2, $a2, -0x21D0
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958640));
label_2066b4:
    // 0x2066b4: 0x24a5de60  addiu       $a1, $a1, -0x21A0
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958688));
label_2066b8:
    // 0x2066b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2066b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2066bc:
    // 0x2066bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2066bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2066c0:
    // 0x2066c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2066c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2066c4:
    // 0x2066c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2066c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2066c8:
    // 0x2066c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2066c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2066cc:
    // 0x2066cc: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x2066ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_2066d0:
    // 0x2066d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2066d4:
    // 0x2066d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2066d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2066d8:
    // 0x2066d8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x2066d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_2066dc:
    // 0x2066dc: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x2066dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_2066e0:
    // 0x2066e0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x2066e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_2066e4:
    // 0x2066e4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2066e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2066e8:
    // 0x2066e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2066e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2066ec:
    // 0x2066ec: 0x3e00008  jr          $ra
label_2066f0:
    if (ctx->pc == 0x2066F0u) {
        ctx->pc = 0x2066F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066ECu;
        // 0x2066f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2066F4u;
        goto label_2066f4;
    }
    ctx->pc = 0x2066ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2066F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066ECu;
        // 0x2066f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2066ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2066F4u;
label_2066f4:
    // 0x2066f4: 0x0  nop
    ctx->pc = 0x2066f4u;
    // NOP
    ctx->pc = 0x2066f8u;
}
