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

// Function: sub_004B2818
// Address: 0x4b2818 - 0x4b2938
void sub_004B2818_0x4b2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2818_0x4b2818");
#endif

    switch (ctx->pc) {
        case 0x4b2818u: goto label_4b2818;
        case 0x4b281cu: goto label_4b281c;
        case 0x4b2820u: goto label_4b2820;
        case 0x4b2824u: goto label_4b2824;
        case 0x4b2828u: goto label_4b2828;
        case 0x4b282cu: goto label_4b282c;
        case 0x4b2830u: goto label_4b2830;
        case 0x4b2834u: goto label_4b2834;
        case 0x4b2838u: goto label_4b2838;
        case 0x4b283cu: goto label_4b283c;
        case 0x4b2840u: goto label_4b2840;
        case 0x4b2844u: goto label_4b2844;
        case 0x4b2848u: goto label_4b2848;
        case 0x4b284cu: goto label_4b284c;
        case 0x4b2850u: goto label_4b2850;
        case 0x4b2854u: goto label_4b2854;
        case 0x4b2858u: goto label_4b2858;
        case 0x4b285cu: goto label_4b285c;
        case 0x4b2860u: goto label_4b2860;
        case 0x4b2864u: goto label_4b2864;
        case 0x4b2868u: goto label_4b2868;
        case 0x4b286cu: goto label_4b286c;
        case 0x4b2870u: goto label_4b2870;
        case 0x4b2874u: goto label_4b2874;
        case 0x4b2878u: goto label_4b2878;
        case 0x4b287cu: goto label_4b287c;
        case 0x4b2880u: goto label_4b2880;
        case 0x4b2884u: goto label_4b2884;
        case 0x4b2888u: goto label_4b2888;
        case 0x4b288cu: goto label_4b288c;
        case 0x4b2890u: goto label_4b2890;
        case 0x4b2894u: goto label_4b2894;
        case 0x4b2898u: goto label_4b2898;
        case 0x4b289cu: goto label_4b289c;
        case 0x4b28a0u: goto label_4b28a0;
        case 0x4b28a4u: goto label_4b28a4;
        case 0x4b28a8u: goto label_4b28a8;
        case 0x4b28acu: goto label_4b28ac;
        case 0x4b28b0u: goto label_4b28b0;
        case 0x4b28b4u: goto label_4b28b4;
        case 0x4b28b8u: goto label_4b28b8;
        case 0x4b28bcu: goto label_4b28bc;
        case 0x4b28c0u: goto label_4b28c0;
        case 0x4b28c4u: goto label_4b28c4;
        case 0x4b28c8u: goto label_4b28c8;
        case 0x4b28ccu: goto label_4b28cc;
        case 0x4b28d0u: goto label_4b28d0;
        case 0x4b28d4u: goto label_4b28d4;
        case 0x4b28d8u: goto label_4b28d8;
        case 0x4b28dcu: goto label_4b28dc;
        case 0x4b28e0u: goto label_4b28e0;
        case 0x4b28e4u: goto label_4b28e4;
        case 0x4b28e8u: goto label_4b28e8;
        case 0x4b28ecu: goto label_4b28ec;
        case 0x4b28f0u: goto label_4b28f0;
        case 0x4b28f4u: goto label_4b28f4;
        case 0x4b28f8u: goto label_4b28f8;
        case 0x4b28fcu: goto label_4b28fc;
        case 0x4b2900u: goto label_4b2900;
        case 0x4b2904u: goto label_4b2904;
        case 0x4b2908u: goto label_4b2908;
        case 0x4b290cu: goto label_4b290c;
        case 0x4b2910u: goto label_4b2910;
        case 0x4b2914u: goto label_4b2914;
        case 0x4b2918u: goto label_4b2918;
        case 0x4b291cu: goto label_4b291c;
        case 0x4b2920u: goto label_4b2920;
        case 0x4b2924u: goto label_4b2924;
        case 0x4b2928u: goto label_4b2928;
        case 0x4b292cu: goto label_4b292c;
        case 0x4b2930u: goto label_4b2930;
        case 0x4b2934u: goto label_4b2934;
        default: break;
    }

    ctx->pc = 0x4b2818u;

label_4b2818:
    // 0x4b2818: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b2818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4b281c:
    // 0x4b281c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4b2820:
    // 0x4b2820: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4b2820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_4b2824:
    // 0x4b2824: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4b2824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_4b2828:
    // 0x4b2828: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b2828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b282c:
    // 0x4b282c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4b2830:
    // 0x4b2830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b2830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b2834:
    // 0x4b2834: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4b2834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_4b2838:
    // 0x4b2838: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4b2838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_4b283c:
    // 0x4b283c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_4b2840:
    if (ctx->pc == 0x4B2840u) {
        ctx->pc = 0x4B2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B283Cu;
        // 0x4b2840: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2844u;
        goto label_4b2844;
    }
    ctx->pc = 0x4B283Cu;
    {
        const bool branch_taken_0x4b283c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B283Cu;
        // 0x4b2840: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b283c) {
            ctx->pc = 0x4B2858u;
            goto label_4b2858;
        }
    }
    ctx->pc = 0x4B2844u;
label_4b2844:
    // 0x4b2844: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b2844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b2848:
    // 0x4b2848: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b2848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_4b284c:
    // 0x4b284c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b284cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4b2850:
    // 0x4b2850: 0x10000013  b           . + 4 + (0x13 << 2)
label_4b2854:
    if (ctx->pc == 0x4B2854u) {
        ctx->pc = 0x4B2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2850u;
        // 0x4b2854: 0x24530b00  addiu       $s3, $v0, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2858u;
        goto label_4b2858;
    }
    ctx->pc = 0x4B2850u;
    {
        const bool branch_taken_0x4b2850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2850u;
        // 0x4b2854: 0x24530b00  addiu       $s3, $v0, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2850) {
            ctx->pc = 0x4B28A0u;
            goto label_4b28a0;
        }
    }
    ctx->pc = 0x4B2858u;
label_4b2858:
    // 0x4b2858: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4b2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4b285c:
    // 0x4b285c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_4b2860:
    if (ctx->pc == 0x4B2860u) {
        ctx->pc = 0x4B2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B285Cu;
        // 0x4b2860: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2864u;
        goto label_4b2864;
    }
    ctx->pc = 0x4B285Cu;
    {
        const bool branch_taken_0x4b285c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B285Cu;
        // 0x4b2860: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b285c) {
            ctx->pc = 0x4B2878u;
            goto label_4b2878;
        }
    }
    ctx->pc = 0x4B2864u;
label_4b2864:
    // 0x4b2864: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b2864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b2868:
    // 0x4b2868: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b2868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_4b286c:
    // 0x4b286c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b286cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4b2870:
    // 0x4b2870: 0x1000000b  b           . + 4 + (0xB << 2)
label_4b2874:
    if (ctx->pc == 0x4B2874u) {
        ctx->pc = 0x4B2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2870u;
        // 0x4b2874: 0x24530b10  addiu       $s3, $v0, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2878u;
        goto label_4b2878;
    }
    ctx->pc = 0x4B2870u;
    {
        const bool branch_taken_0x4b2870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2870u;
        // 0x4b2874: 0x24530b10  addiu       $s3, $v0, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2870) {
            ctx->pc = 0x4B28A0u;
            goto label_4b28a0;
        }
    }
    ctx->pc = 0x4B2878u;
label_4b2878:
    // 0x4b2878: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b2878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_4b287c:
    // 0x4b287c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b287cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4b2880:
    // 0x4b2880: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x4b2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_4b2884:
    // 0x4b2884: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x4b2884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_4b2888:
    // 0x4b2888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4b2888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4b288c:
    // 0x4b288c: 0x0  nop
    ctx->pc = 0x4b288cu;
    // NOP
label_4b2890:
    // 0x4b2890: 0x0  nop
    ctx->pc = 0x4b2890u;
    // NOP
label_4b2894:
    // 0x4b2894: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_4b2898:
    if (ctx->pc == 0x4B2898u) {
        ctx->pc = 0x4B289Cu;
        goto label_4b289c;
    }
    ctx->pc = 0x4B2894u;
    {
        const bool branch_taken_0x4b2894 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x4b2894) {
            ctx->pc = 0x4B2880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2880;
        }
    }
    ctx->pc = 0x4B289Cu;
label_4b289c:
    // 0x4b289c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x4b289cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4b28a0:
    // 0x4b28a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4b28a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b28a4:
    // 0x4b28a4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x4b28a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_4b28a8:
    // 0x4b28a8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_4b28ac:
    if (ctx->pc == 0x4B28ACu) {
        ctx->pc = 0x4B28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28A8u;
        // 0x4b28ac: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B28B0u;
        goto label_4b28b0;
    }
    ctx->pc = 0x4B28A8u;
    {
        const bool branch_taken_0x4b28a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28A8u;
        // 0x4b28ac: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28a8) {
            ctx->pc = 0x4B28E4u;
            goto label_4b28e4;
        }
    }
    ctx->pc = 0x4B28B0u;
label_4b28b0:
    // 0x4b28b0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x4b28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4b28b4:
    // 0x4b28b4: 0x0  nop
    ctx->pc = 0x4b28b4u;
    // NOP
label_4b28b8:
    // 0x4b28b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b28bc:
    // 0x4b28bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b28bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b28c0:
    // 0x4b28c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b28c4:
    // 0x4b28c4: 0x40f809  jalr        $v0
label_4b28c8:
    if (ctx->pc == 0x4B28C8u) {
        ctx->pc = 0x4B28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28C4u;
        // 0x4b28c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B28CCu;
        goto label_4b28cc;
    }
    ctx->pc = 0x4B28C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B28CCu);
        ctx->pc = 0x4B28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28C4u;
        // 0x4b28c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B28C4u, 0x4B28CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B28CCu;
label_4b28cc:
    // 0x4b28cc: 0x1454000d  bne         $v0, $s4, . + 4 + (0xD << 2)
label_4b28d0:
    if (ctx->pc == 0x4B28D0u) {
        ctx->pc = 0x4B28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28CCu;
        // 0x4b28d0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B28D4u;
        goto label_4b28d4;
    }
    ctx->pc = 0x4B28CCu;
    {
        const bool branch_taken_0x4b28cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x4B28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28CCu;
        // 0x4b28d0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28cc) {
            ctx->pc = 0x4B2904u;
            goto label_4b2904;
        }
    }
    ctx->pc = 0x4B28D4u;
label_4b28d4:
    // 0x4b28d4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x4b28d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_4b28d8:
    // 0x4b28d8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x4b28d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_4b28dc:
    // 0x4b28dc: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_4b28e0:
    if (ctx->pc == 0x4B28E0u) {
        ctx->pc = 0x4B28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28DCu;
        // 0x4b28e0: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B28E4u;
        goto label_4b28e4;
    }
    ctx->pc = 0x4B28DCu;
    {
        const bool branch_taken_0x4b28dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b28dc) {
            ctx->pc = 0x4B28E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B28DCu;
            // 0x4b28e0: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B28B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b28b8;
        }
    }
    ctx->pc = 0x4B28E4u;
label_4b28e4:
    // 0x4b28e4: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_4b28e8:
    if (ctx->pc == 0x4B28E8u) {
        ctx->pc = 0x4B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28E4u;
        // 0x4b28e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B28ECu;
        goto label_4b28ec;
    }
    ctx->pc = 0x4B28E4u;
    {
        const bool branch_taken_0x4b28e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28E4u;
        // 0x4b28e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28e4) {
            ctx->pc = 0x4B2904u;
            goto label_4b2904;
        }
    }
    ctx->pc = 0x4B28ECu;
label_4b28ec:
    // 0x4b28ec: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x4b28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4b28f0:
    // 0x4b28f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b28f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b28f4:
    // 0x4b28f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b28f8:
    // 0x4b28f8: 0x40f809  jalr        $v0
label_4b28fc:
    if (ctx->pc == 0x4B28FCu) {
        ctx->pc = 0x4B28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28F8u;
        // 0x4b28fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2900u;
        goto label_4b2900;
    }
    ctx->pc = 0x4B28F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B2900u);
        ctx->pc = 0x4B28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28F8u;
        // 0x4b28fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B28F8u, 0x4B2900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2900u;
label_4b2900:
    // 0x4b2900: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x4b2900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4b2904:
    // 0x4b2904: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x4b2904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_4b2908:
    // 0x4b2908: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b2908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4b290c:
    // 0x4b290c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4b2910:
    // 0x4b2910: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4b2910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b2914:
    // 0x4b2914: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4b2914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b2918:
    // 0x4b2918: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b2918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b291c:
    // 0x4b291c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4b291cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2920:
    // 0x4b2920: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b2920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2924:
    // 0x4b2924: 0x3e00008  jr          $ra
label_4b2928:
    if (ctx->pc == 0x4B2928u) {
        ctx->pc = 0x4B2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2924u;
        // 0x4b2928: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B292Cu;
        goto label_4b292c;
    }
    ctx->pc = 0x4B2924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2924u;
        // 0x4b2928: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B292Cu;
label_4b292c:
    // 0x4b292c: 0x0  nop
    ctx->pc = 0x4b292cu;
    // NOP
label_4b2930:
    // 0x4b2930: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4b2930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4b2934:
    // 0x4b2934: 0x0  nop
    ctx->pc = 0x4b2934u;
    // NOP
    ctx->pc = 0x4b2938u;
}
