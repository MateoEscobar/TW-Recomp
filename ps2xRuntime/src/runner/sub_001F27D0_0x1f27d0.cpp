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

// Function: sub_001F27D0
// Address: 0x1f27d0 - 0x1f28d8
void sub_001F27D0_0x1f27d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F27D0_0x1f27d0");
#endif

    switch (ctx->pc) {
        case 0x1f27d0u: goto label_1f27d0;
        case 0x1f27d4u: goto label_1f27d4;
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f27dcu: goto label_1f27dc;
        case 0x1f27e0u: goto label_1f27e0;
        case 0x1f27e4u: goto label_1f27e4;
        case 0x1f27e8u: goto label_1f27e8;
        case 0x1f27ecu: goto label_1f27ec;
        case 0x1f27f0u: goto label_1f27f0;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f27f8u: goto label_1f27f8;
        case 0x1f27fcu: goto label_1f27fc;
        case 0x1f2800u: goto label_1f2800;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2808u: goto label_1f2808;
        case 0x1f280cu: goto label_1f280c;
        case 0x1f2810u: goto label_1f2810;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2818u: goto label_1f2818;
        case 0x1f281cu: goto label_1f281c;
        case 0x1f2820u: goto label_1f2820;
        case 0x1f2824u: goto label_1f2824;
        case 0x1f2828u: goto label_1f2828;
        case 0x1f282cu: goto label_1f282c;
        case 0x1f2830u: goto label_1f2830;
        case 0x1f2834u: goto label_1f2834;
        case 0x1f2838u: goto label_1f2838;
        case 0x1f283cu: goto label_1f283c;
        case 0x1f2840u: goto label_1f2840;
        case 0x1f2844u: goto label_1f2844;
        case 0x1f2848u: goto label_1f2848;
        case 0x1f284cu: goto label_1f284c;
        case 0x1f2850u: goto label_1f2850;
        case 0x1f2854u: goto label_1f2854;
        case 0x1f2858u: goto label_1f2858;
        case 0x1f285cu: goto label_1f285c;
        case 0x1f2860u: goto label_1f2860;
        case 0x1f2864u: goto label_1f2864;
        case 0x1f2868u: goto label_1f2868;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f2870u: goto label_1f2870;
        case 0x1f2874u: goto label_1f2874;
        case 0x1f2878u: goto label_1f2878;
        case 0x1f287cu: goto label_1f287c;
        case 0x1f2880u: goto label_1f2880;
        case 0x1f2884u: goto label_1f2884;
        case 0x1f2888u: goto label_1f2888;
        case 0x1f288cu: goto label_1f288c;
        case 0x1f2890u: goto label_1f2890;
        case 0x1f2894u: goto label_1f2894;
        case 0x1f2898u: goto label_1f2898;
        case 0x1f289cu: goto label_1f289c;
        case 0x1f28a0u: goto label_1f28a0;
        case 0x1f28a4u: goto label_1f28a4;
        case 0x1f28a8u: goto label_1f28a8;
        case 0x1f28acu: goto label_1f28ac;
        case 0x1f28b0u: goto label_1f28b0;
        case 0x1f28b4u: goto label_1f28b4;
        case 0x1f28b8u: goto label_1f28b8;
        case 0x1f28bcu: goto label_1f28bc;
        case 0x1f28c0u: goto label_1f28c0;
        case 0x1f28c4u: goto label_1f28c4;
        case 0x1f28c8u: goto label_1f28c8;
        case 0x1f28ccu: goto label_1f28cc;
        case 0x1f28d0u: goto label_1f28d0;
        case 0x1f28d4u: goto label_1f28d4;
        default: break;
    }

    ctx->pc = 0x1f27d0u;

label_1f27d0:
    // 0x1f27d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f27d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f27d4:
    // 0x1f27d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f27d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f27d8:
    // 0x1f27d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f27dc:
    // 0x1f27dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f27dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f27e0:
    // 0x1f27e0: 0xc06a38c  jal         func_1A8E30
label_1f27e4:
    if (ctx->pc == 0x1F27E4u) {
        ctx->pc = 0x1F27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27E0u;
        // 0x1f27e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27E8u;
        goto label_1f27e8;
    }
    ctx->pc = 0x1F27E0u;
    SET_GPR_U32(ctx, 31, 0x1F27E8u);
    ctx->pc = 0x1F27E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27E0u;
    // 0x1f27e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1F27E0u, 0x1F27E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27E8u;
label_1f27e8:
    // 0x1f27e8: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1f27ec:
    // 0x1f27ec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f27f0:
    // 0x1f27f0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f27f4:
    // 0x1f27f4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1f27f8:
    // 0x1f27f8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1f27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1f27fc:
    // 0x1f27fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1f2800:
    // 0x1f2800: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1f2804:
    // 0x1f2804: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1f2808:
    // 0x1f2808: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f280c:
    // 0x1f280c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1f280cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1f2810:
    // 0x1f2810: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1f2810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1f2814:
    // 0x1f2814: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f2814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f2818:
    // 0x1f2818: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f2818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f281c:
    // 0x1f281c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1f281cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1f2820:
    // 0x1f2820: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f2820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f2824:
    // 0x1f2824: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f2824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1f2828:
    // 0x1f2828: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f2828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f282c:
    // 0x1f282c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f282cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1f2830:
    // 0x1f2830: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1f2834:
    // 0x1f2834: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1f2834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1f2838:
    // 0x1f2838: 0x24a57318  addiu       $a1, $a1, 0x7318
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29464));
label_1f283c:
    // 0x1f283c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f2840:
    // 0x1f2840: 0x25087320  addiu       $t0, $t0, 0x7320
    ctx->pc = 0x1f2840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29472));
label_1f2844:
    // 0x1f2844: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f2844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1f2848:
    // 0x1f2848: 0x254a7348  addiu       $t2, $t2, 0x7348
    ctx->pc = 0x1f2848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29512));
label_1f284c:
    // 0x1f284c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f2850:
    // 0x1f2850: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f2850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f2854:
    // 0x1f2854: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f2854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f2858:
    // 0x1f2858: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1f2858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f285c:
    // 0x1f285c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f285cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2860:
    // 0x1f2860: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f2860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f2864:
    // 0x1f2864: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f2864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f2868:
    // 0x1f2868: 0x40f809  jalr        $v0
label_1f286c:
    if (ctx->pc == 0x1F286Cu) {
        ctx->pc = 0x1F286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2868u;
        // 0x1f286c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2870u;
        goto label_1f2870;
    }
    ctx->pc = 0x1F2868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2870u);
        ctx->pc = 0x1F286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2868u;
        // 0x1f286c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2868u, 0x1F2870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2870u;
label_1f2870:
    // 0x1f2870: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f2870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1f2874:
    // 0x1f2874: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1f2874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1f2878:
    // 0x1f2878: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1f2878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1f287c:
    // 0x1f287c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f287cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f2880:
    // 0x1f2880: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1f2880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1f2884:
    // 0x1f2884: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f2888:
    // 0x1f2888: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f2888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f288c:
    // 0x1f288c: 0x24e7cff8  addiu       $a3, $a3, -0x3008
    ctx->pc = 0x1f288cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955000));
label_1f2890:
    // 0x1f2890: 0x24c6d020  addiu       $a2, $a2, -0x2FE0
    ctx->pc = 0x1f2890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955040));
label_1f2894:
    // 0x1f2894: 0x24a5d050  addiu       $a1, $a1, -0x2FB0
    ctx->pc = 0x1f2894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955088));
label_1f2898:
    // 0x1f2898: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f289c:
    // 0x1f289c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f289cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f28a0:
    // 0x1f28a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f28a4:
    // 0x1f28a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1f28a8:
    // 0x1f28a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f28ac:
    // 0x1f28ac: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1f28acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1f28b0:
    // 0x1f28b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f28b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f28b4:
    // 0x1f28b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f28b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f28b8:
    // 0x1f28b8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1f28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1f28bc:
    // 0x1f28bc: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x1f28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_1f28c0:
    // 0x1f28c0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1f28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_1f28c4:
    // 0x1f28c4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1f28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1f28c8:
    // 0x1f28c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f28c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f28cc:
    // 0x1f28cc: 0x3e00008  jr          $ra
label_1f28d0:
    if (ctx->pc == 0x1F28D0u) {
        ctx->pc = 0x1F28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28CCu;
        // 0x1f28d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28D4u;
        goto label_1f28d4;
    }
    ctx->pc = 0x1F28CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28CCu;
        // 0x1f28d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F28CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F28D4u;
label_1f28d4:
    // 0x1f28d4: 0x0  nop
    ctx->pc = 0x1f28d4u;
    // NOP
    ctx->pc = 0x1f28d8u;
}
