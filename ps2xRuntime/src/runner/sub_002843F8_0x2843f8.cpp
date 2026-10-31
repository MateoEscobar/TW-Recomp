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

// Function: sub_002843F8
// Address: 0x2843f8 - 0x284920
void sub_002843F8_0x2843f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002843F8_0x2843f8");
#endif

    switch (ctx->pc) {
        case 0x28441cu: goto label_28441c;
        case 0x28442cu: goto label_28442c;
        case 0x28443cu: goto label_28443c;
        case 0x28444cu: goto label_28444c;
        case 0x284460u: goto label_284460;
        case 0x284474u: goto label_284474;
        case 0x284490u: goto label_284490;
        case 0x2844acu: goto label_2844ac;
        case 0x2844c0u: goto label_2844c0;
        case 0x2844d8u: goto label_2844d8;
        case 0x2844f4u: goto label_2844f4;
        case 0x284500u: goto label_284500;
        case 0x284510u: goto label_284510;
        case 0x28456cu: goto label_28456c;
        case 0x28457cu: goto label_28457c;
        case 0x2845c8u: goto label_2845c8;
        case 0x2845e8u: goto label_2845e8;
        case 0x2845fcu: goto label_2845fc;
        case 0x28460cu: goto label_28460c;
        case 0x28461cu: goto label_28461c;
        case 0x284670u: goto label_284670;
        case 0x284680u: goto label_284680;
        case 0x2846a0u: goto label_2846a0;
        case 0x2846c0u: goto label_2846c0;
        case 0x2846d0u: goto label_2846d0;
        case 0x2846e0u: goto label_2846e0;
        case 0x2846f8u: goto label_2846f8;
        case 0x28470cu: goto label_28470c;
        case 0x28471cu: goto label_28471c;
        case 0x284730u: goto label_284730;
        case 0x284754u: goto label_284754;
        case 0x284764u: goto label_284764;
        case 0x28476cu: goto label_28476c;
        case 0x28477cu: goto label_28477c;
        case 0x28478cu: goto label_28478c;
        case 0x28479cu: goto label_28479c;
        case 0x2847acu: goto label_2847ac;
        case 0x2847d0u: goto label_2847d0;
        case 0x2847e4u: goto label_2847e4;
        case 0x2847fcu: goto label_2847fc;
        case 0x28480cu: goto label_28480c;
        case 0x284820u: goto label_284820;
        case 0x284838u: goto label_284838;
        case 0x284858u: goto label_284858;
        case 0x284870u: goto label_284870;
        case 0x2848c4u: goto label_2848c4;
        case 0x2848e4u: goto label_2848e4;
        case 0x2848ecu: goto label_2848ec;
        case 0x2848f8u: goto label_2848f8;
        default: break;
    }

    ctx->pc = 0x2843f8u;

    // 0x2843f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2843f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2843fc: 0x34058004  ori         $a1, $zero, 0x8004
    ctx->pc = 0x2843fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x284400: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x284400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x284404: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x284404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x284408: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x284408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28440c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x284410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284414: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x284414u;
    SET_GPR_U32(ctx, 31, 0x28441Cu);
    ctx->pc = 0x284418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284414u;
    // 0x284418: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x284414u, 0x28441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28441Cu;
label_28441c:
    // 0x28441c: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x28441Cu;
    {
        const bool branch_taken_0x28441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28441Cu;
        // 0x284420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28441c) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284424u;
    // 0x284424: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x284424u;
    SET_GPR_U32(ctx, 31, 0x28442Cu);
    ctx->pc = 0x284428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284424u;
    // 0x284428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x284424u, 0x28442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28442Cu;
label_28442c:
    // 0x28442c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28442cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284434: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x284434u;
    SET_GPR_U32(ctx, 31, 0x28443Cu);
    ctx->pc = 0x284438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284434u;
    // 0x284438: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x284434u, 0x28443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28443Cu;
label_28443c:
    // 0x28443c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x28443Cu;
    {
        const bool branch_taken_0x28443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28443c) {
            ctx->pc = 0x284508u;
            goto label_284508;
        }
    }
    ctx->pc = 0x284444u;
    // 0x284444: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x284444u;
    SET_GPR_U32(ctx, 31, 0x28444Cu);
    ctx->pc = 0x284448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284444u;
    // 0x284448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x284444u, 0x28444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28444Cu;
label_28444c:
    // 0x28444c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28444cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x284450: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x284450u;
    {
        const bool branch_taken_0x284450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284450u;
        // 0x284454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284450) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284458u;
    // 0x284458: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x284458u;
    SET_GPR_U32(ctx, 31, 0x284460u);
    ctx->pc = 0x28445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284458u;
    // 0x28445c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x284458u, 0x284460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284460u;
label_284460:
    // 0x284460: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x284460u;
    {
        const bool branch_taken_0x284460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284460u;
        // 0x284464: 0x3c0507c7  lui         $a1, 0x7C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1991 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284460) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x284468u;
    // 0x284468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28446c: 0xc089998  jal         func_226660
    ctx->pc = 0x28446Cu;
    SET_GPR_U32(ctx, 31, 0x284474u);
    ctx->pc = 0x284470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28446Cu;
    // 0x284470: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28446Cu, 0x284474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284474u;
label_284474:
    // 0x284474: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x284474u;
    {
        const bool branch_taken_0x284474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284474u;
        // 0x284478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284474) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x28447Cu;
    // 0x28447c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x28447cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x284480: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x284484: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x284484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x284488: 0xc10904c  jal         func_424130
    ctx->pc = 0x284488u;
    SET_GPR_U32(ctx, 31, 0x284490u);
    ctx->pc = 0x28448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284488u;
    // 0x28448c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x284488u, 0x284490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284490u;
label_284490:
    // 0x284490: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x284490u;
    {
        const bool branch_taken_0x284490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284490u;
        // 0x284494: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284490) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x284498u;
    // 0x284498: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x284498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x28449c: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x28449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2844a0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2844a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2844a4: 0xc107908  jal         func_41E420
    ctx->pc = 0x2844A4u;
    SET_GPR_U32(ctx, 31, 0x2844ACu);
    ctx->pc = 0x2844A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844A4u;
    // 0x2844a8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2844A4u, 0x2844ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844ACu;
label_2844ac:
    // 0x2844ac: 0x18400114  blez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x2844ACu;
    {
        const bool branch_taken_0x2844ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2844B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844ACu;
        // 0x2844b0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844ac) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x2844B4u;
    // 0x2844b4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2844b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2844b8: 0xc04444c  jal         func_111130
    ctx->pc = 0x2844B8u;
    SET_GPR_U32(ctx, 31, 0x2844C0u);
    ctx->pc = 0x2844BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844B8u;
    // 0x2844bc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x2844B8u, 0x2844C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844C0u;
label_2844c0:
    // 0x2844c0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x2844c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x2844c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2844c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2844c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2844ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844d0: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x2844D0u;
    SET_GPR_U32(ctx, 31, 0x2844D8u);
    ctx->pc = 0x2844D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844D0u;
    // 0x2844d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x2844D0u, 0x2844D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844D8u;
label_2844d8:
    // 0x2844d8: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2844d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2844dc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2844dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2844e0: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2844e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2844e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2844e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2844e8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2844ec: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2844ECu;
    SET_GPR_U32(ctx, 31, 0x2844F4u);
    ctx->pc = 0x2844F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844ECu;
    // 0x2844f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2844ECu, 0x2844F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844F4u;
label_2844f4:
    // 0x2844f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2844f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844f8: 0xc0983f4  jal         func_260FD0
    ctx->pc = 0x2844F8u;
    SET_GPR_U32(ctx, 31, 0x284500u);
    ctx->pc = 0x2844FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844F8u;
    // 0x2844fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260FD0u, 0x2844F8u, 0x284500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284500u;
label_284500:
    // 0x284500: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x284500u;
    {
        const bool branch_taken_0x284500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284500u;
        // 0x284504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284500) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284508u;
label_284508:
    // 0x284508: 0xc09f020  jal         func_27C080
    ctx->pc = 0x284508u;
    SET_GPR_U32(ctx, 31, 0x284510u);
    ctx->pc = 0x28450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284508u;
    // 0x28450c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C080u, 0x284508u, 0x284510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284510u;
label_284510:
    // 0x284510: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x284510u;
    {
        const bool branch_taken_0x284510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284510) {
            ctx->pc = 0x284574u;
            goto label_284574;
        }
    }
    ctx->pc = 0x284518u;
    // 0x284518: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x284518u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x28451c: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x28451cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x284520: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x284520u;
    {
        const bool branch_taken_0x284520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284520u;
        // 0x284524: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284520) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x284528u;
    // 0x284528: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x284528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x28452c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284530: 0x9062042e  lbu         $v0, 0x42E($v1)
    ctx->pc = 0x284530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1070)));
    // 0x284534: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x284534u;
    {
        const bool branch_taken_0x284534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284534u;
        // 0x284538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284534) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x28453Cu;
    // 0x28453c: 0x8e230380  lw          $v1, 0x380($s1)
    ctx->pc = 0x28453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x284540: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x284544: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x284544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x284548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x284548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28454c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284550: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x284550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x284554: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x284554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x284558: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x284558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28455c: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x28455Cu;
    {
        const bool branch_taken_0x28455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28455Cu;
        // 0x284560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28455c) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284564u;
    // 0x284564: 0xc069b16  jal         func_1A6C58
    ctx->pc = 0x284564u;
    SET_GPR_U32(ctx, 31, 0x28456Cu);
    ctx->pc = 0x1A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C58u, 0x284564u, 0x28456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28456Cu;
label_28456c:
    // 0x28456c: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x28456Cu;
    {
        const bool branch_taken_0x28456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28456Cu;
        // 0x284570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28456c) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284574u;
label_284574:
    // 0x284574: 0xc09f016  jal         func_27C058
    ctx->pc = 0x284574u;
    SET_GPR_U32(ctx, 31, 0x28457Cu);
    ctx->pc = 0x284578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284574u;
    // 0x284578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C058u, 0x284574u, 0x28457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28457Cu;
label_28457c:
    // 0x28457c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28457Cu;
    {
        const bool branch_taken_0x28457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28457c) {
            ctx->pc = 0x2845D0u;
            goto label_2845d0;
        }
    }
    ctx->pc = 0x284584u;
    // 0x284584: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x284584u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x284588: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x284588u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x28458c: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x28458Cu;
    {
        const bool branch_taken_0x28458c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28458Cu;
        // 0x284590: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28458c) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x284594u;
    // 0x284594: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x284594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x284598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28459c: 0x9062042e  lbu         $v0, 0x42E($v1)
    ctx->pc = 0x28459cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1070)));
    // 0x2845a0: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2845A0u;
    {
        const bool branch_taken_0x2845a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845A0u;
        // 0x2845a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845a0) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2845A8u;
    // 0x2845a8: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x2845a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2845ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2845acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2845b0: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x2845b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2845b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2845b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2845b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2845bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2845bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2845c0: 0xc069b4a  jal         func_1A6D28
    ctx->pc = 0x2845C0u;
    SET_GPR_U32(ctx, 31, 0x2845C8u);
    ctx->pc = 0x2845C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845C0u;
    // 0x2845c4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D28u, 0x2845C0u, 0x2845C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845C8u;
label_2845c8:
    // 0x2845c8: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2845C8u;
    {
        const bool branch_taken_0x2845c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2845CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845C8u;
        // 0x2845cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845c8) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2845D0u;
label_2845d0:
    // 0x2845d0: 0x3405cfcf  ori         $a1, $zero, 0xCFCF
    ctx->pc = 0x2845d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53199);
    // 0x2845d4: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x2845d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x2845d8: 0x34a5f300  ori         $a1, $a1, 0xF300
    ctx->pc = 0x2845d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62208);
    // 0x2845dc: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x2845dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
    // 0x2845e0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2845E0u;
    SET_GPR_U32(ctx, 31, 0x2845E8u);
    ctx->pc = 0x2845E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845E0u;
    // 0x2845e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2845E0u, 0x2845E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845E8u;
label_2845e8:
    // 0x2845e8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2845E8u;
    {
        const bool branch_taken_0x2845e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845E8u;
        // 0x2845ec: 0x3c050fc7  lui         $a1, 0xFC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4039 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845e8) {
            ctx->pc = 0x284668u;
            goto label_284668;
        }
    }
    ctx->pc = 0x2845F0u;
    // 0x2845f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2845f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845f4: 0xc089998  jal         func_226660
    ctx->pc = 0x2845F4u;
    SET_GPR_U32(ctx, 31, 0x2845FCu);
    ctx->pc = 0x2845F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845F4u;
    // 0x2845f8: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2845F4u, 0x2845FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845FCu;
label_2845fc:
    // 0x2845fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2845FCu;
    {
        const bool branch_taken_0x2845fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2845fc) {
            ctx->pc = 0x284668u;
            goto label_284668;
        }
    }
    ctx->pc = 0x284604u;
    // 0x284604: 0xc09f02a  jal         func_27C0A8
    ctx->pc = 0x284604u;
    SET_GPR_U32(ctx, 31, 0x28460Cu);
    ctx->pc = 0x284608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284604u;
    // 0x284608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0A8u, 0x284604u, 0x28460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28460Cu;
label_28460c:
    // 0x28460c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28460Cu;
    {
        const bool branch_taken_0x28460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28460Cu;
        // 0x284610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28460c) {
            ctx->pc = 0x284668u;
            goto label_284668;
        }
    }
    ctx->pc = 0x284614u;
    // 0x284614: 0xc088c98  jal         func_223260
    ctx->pc = 0x284614u;
    SET_GPR_U32(ctx, 31, 0x28461Cu);
    ctx->pc = 0x284618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284614u;
    // 0x284618: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x284614u, 0x28461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28461Cu;
label_28461c:
    // 0x28461c: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x28461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x284620: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x284620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x284624: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x284624u;
    {
        const bool branch_taken_0x284624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284624u;
        // 0x284628: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284624) {
            ctx->pc = 0x28463Cu;
            goto label_28463c;
        }
    }
    ctx->pc = 0x28462Cu;
    // 0x28462c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x28462cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x284630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x284630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x284634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x284638: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x284638u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_28463c:
    // 0x28463c: 0x120000b0  beqz        $s0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x28463Cu;
    {
        const bool branch_taken_0x28463c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x284640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28463Cu;
        // 0x284640: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28463c) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x284644u;
    // 0x284644: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x284644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x284648: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x284648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28464c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28464cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x284650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x284650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x284654: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284658: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x284658u;
    {
        const bool branch_taken_0x284658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284658u;
        // 0x28465c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284658) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284660u;
    // 0x284660: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x284660u;
    {
        const bool branch_taken_0x284660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284660) {
            ctx->pc = 0x2848F0u;
            goto label_2848f0;
        }
    }
    ctx->pc = 0x284668u;
label_284668:
    // 0x284668: 0xc09eef4  jal         func_27BBD0
    ctx->pc = 0x284668u;
    SET_GPR_U32(ctx, 31, 0x284670u);
    ctx->pc = 0x28466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284668u;
    // 0x28466c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BBD0u, 0x284668u, 0x284670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284670u;
label_284670:
    // 0x284670: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x284670u;
    {
        const bool branch_taken_0x284670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284670u;
        // 0x284674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284670) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284678u;
    // 0x284678: 0xc088edc  jal         func_223B70
    ctx->pc = 0x284678u;
    SET_GPR_U32(ctx, 31, 0x284680u);
    ctx->pc = 0x28467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284678u;
    // 0x28467c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x284678u, 0x284680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284680u;
label_284680:
    // 0x284680: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x284680u;
    {
        const bool branch_taken_0x284680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284680u;
        // 0x284684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284680) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284688u;
    // 0x284688: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x284688u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x28468c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x28468cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x284690: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x284690u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x284694: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x284694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284698: 0xc107908  jal         func_41E420
    ctx->pc = 0x284698u;
    SET_GPR_U32(ctx, 31, 0x2846A0u);
    ctx->pc = 0x28469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284698u;
    // 0x28469c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x284698u, 0x2846A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846A0u;
label_2846a0:
    // 0x2846a0: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2846A0u;
    {
        const bool branch_taken_0x2846a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846A0u;
        // 0x2846a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846a0) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2846A8u;
    // 0x2846a8: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2846a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2846ac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2846acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2846b0: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2846B0u;
    {
        const bool branch_taken_0x2846b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846B0u;
        // 0x2846b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846b0) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2846B8u;
    // 0x2846b8: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2846B8u;
    SET_GPR_U32(ctx, 31, 0x2846C0u);
    ctx->pc = 0x2846BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846B8u;
    // 0x2846bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2846B8u, 0x2846C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846C0u;
label_2846c0:
    // 0x2846c0: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2846C0u;
    {
        const bool branch_taken_0x2846c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846C0u;
        // 0x2846c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846c0) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2846C8u;
    // 0x2846c8: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x2846C8u;
    SET_GPR_U32(ctx, 31, 0x2846D0u);
    ctx->pc = 0x2846CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846C8u;
    // 0x2846cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x2846C8u, 0x2846D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846D0u;
label_2846d0:
    // 0x2846d0: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2846D0u;
    {
        const bool branch_taken_0x2846d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846D0u;
        // 0x2846d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846d0) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2846D8u;
    // 0x2846d8: 0xc088f04  jal         func_223C10
    ctx->pc = 0x2846D8u;
    SET_GPR_U32(ctx, 31, 0x2846E0u);
    ctx->pc = 0x2846DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846D8u;
    // 0x2846dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x2846D8u, 0x2846E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846E0u;
label_2846e0:
    // 0x2846e0: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2846E0u;
    {
        const bool branch_taken_0x2846e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846E0u;
        // 0x2846e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846e0) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x2846E8u;
    // 0x2846e8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2846e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2846ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2846ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846f0: 0xc088b98  jal         func_222E60
    ctx->pc = 0x2846F0u;
    SET_GPR_U32(ctx, 31, 0x2846F8u);
    ctx->pc = 0x2846F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846F0u;
    // 0x2846f4: 0x84500144  lh          $s0, 0x144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x2846F0u, 0x2846F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846F8u;
label_2846f8:
    // 0x2846f8: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2846f8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2846fc: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2846FCu;
    {
        const bool branch_taken_0x2846fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x284700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846FCu;
        // 0x284700: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846fc) {
            ctx->pc = 0x284828u;
            goto label_284828;
        }
    }
    ctx->pc = 0x284704u;
    // 0x284704: 0xc088e60  jal         func_223980
    ctx->pc = 0x284704u;
    SET_GPR_U32(ctx, 31, 0x28470Cu);
    ctx->pc = 0x284708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284704u;
    // 0x284708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x284704u, 0x28470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28470Cu;
label_28470c:
    // 0x28470c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28470Cu;
    {
        const bool branch_taken_0x28470c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28470Cu;
        // 0x284710: 0x3c052fef  lui         $a1, 0x2FEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28470c) {
            ctx->pc = 0x284724u;
            goto label_284724;
        }
    }
    ctx->pc = 0x284714u;
    // 0x284714: 0xc088e40  jal         func_223900
    ctx->pc = 0x284714u;
    SET_GPR_U32(ctx, 31, 0x28471Cu);
    ctx->pc = 0x284718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284714u;
    // 0x284718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x284714u, 0x28471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28471Cu;
label_28471c:
    // 0x28471c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28471Cu;
    {
        const bool branch_taken_0x28471c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28471Cu;
        // 0x284720: 0x3c052fef  lui         $a1, 0x2FEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28471c) {
            ctx->pc = 0x284764u;
            goto label_284764;
        }
    }
    ctx->pc = 0x284724u;
label_284724:
    // 0x284724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284728: 0xc089998  jal         func_226660
    ctx->pc = 0x284728u;
    SET_GPR_U32(ctx, 31, 0x284730u);
    ctx->pc = 0x28472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284728u;
    // 0x28472c: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x284728u, 0x284730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284730u;
label_284730:
    // 0x284730: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x284730u;
    {
        const bool branch_taken_0x284730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284730) {
            ctx->pc = 0x284764u;
            goto label_284764;
        }
    }
    ctx->pc = 0x284738u;
    // 0x284738: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x284738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x28473c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x28473cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x284740: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x284740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x284744: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x284744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x284748: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x284748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x28474c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x28474Cu;
    SET_GPR_U32(ctx, 31, 0x284754u);
    ctx->pc = 0x284750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28474Cu;
    // 0x284750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x28474Cu, 0x284754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284754u;
label_284754:
    // 0x284754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284754u;
    {
        const bool branch_taken_0x284754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284754) {
            ctx->pc = 0x284764u;
            goto label_284764;
        }
    }
    ctx->pc = 0x28475Cu;
    // 0x28475c: 0xc0962a2  jal         func_258A88
    ctx->pc = 0x28475Cu;
    SET_GPR_U32(ctx, 31, 0x284764u);
    ctx->pc = 0x284760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28475Cu;
    // 0x284760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x28475Cu, 0x284764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284764u;
label_284764:
    // 0x284764: 0xc089ff6  jal         func_227FD8
    ctx->pc = 0x284764u;
    SET_GPR_U32(ctx, 31, 0x28476Cu);
    ctx->pc = 0x284768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284764u;
    // 0x284768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x284764u, 0x28476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28476Cu;
label_28476c:
    // 0x28476c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28476Cu;
    {
        const bool branch_taken_0x28476c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28476c) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x284774u;
    // 0x284774: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x284774u;
    SET_GPR_U32(ctx, 31, 0x28477Cu);
    ctx->pc = 0x284778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284774u;
    // 0x284778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x284774u, 0x28477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28477Cu;
label_28477c:
    // 0x28477c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28477Cu;
    {
        const bool branch_taken_0x28477c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28477c) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x284784u;
    // 0x284784: 0xc08a014  jal         func_228050
    ctx->pc = 0x284784u;
    SET_GPR_U32(ctx, 31, 0x28478Cu);
    ctx->pc = 0x284788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284784u;
    // 0x284788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x284784u, 0x28478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28478Cu;
label_28478c:
    // 0x28478c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28478Cu;
    {
        const bool branch_taken_0x28478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28478c) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x284794u;
    // 0x284794: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x284794u;
    SET_GPR_U32(ctx, 31, 0x28479Cu);
    ctx->pc = 0x284798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284794u;
    // 0x284798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x284794u, 0x28479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28479Cu;
label_28479c:
    // 0x28479c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28479Cu;
    {
        const bool branch_taken_0x28479c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28479c) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x2847A4u;
    // 0x2847a4: 0xc089000  jal         func_224000
    ctx->pc = 0x2847A4u;
    SET_GPR_U32(ctx, 31, 0x2847ACu);
    ctx->pc = 0x2847A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847A4u;
    // 0x2847a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2847A4u, 0x2847ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847ACu;
label_2847ac:
    // 0x2847ac: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2847ACu;
    {
        const bool branch_taken_0x2847ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2847ac) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x2847B4u;
    // 0x2847b4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2847b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x2847b8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2847b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2847bc: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2847bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x2847c0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2847c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2847c4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2847c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x2847c8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2847C8u;
    SET_GPR_U32(ctx, 31, 0x2847D0u);
    ctx->pc = 0x2847CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847C8u;
    // 0x2847cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2847C8u, 0x2847D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847D0u;
label_2847d0:
    // 0x2847d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2847D0u;
    {
        const bool branch_taken_0x2847d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847D0u;
        // 0x2847d4: 0x3c052fef  lui         $a1, 0x2FEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847d0) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x2847D8u;
    // 0x2847d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2847d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847dc: 0xc089998  jal         func_226660
    ctx->pc = 0x2847DCu;
    SET_GPR_U32(ctx, 31, 0x2847E4u);
    ctx->pc = 0x2847E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847DCu;
    // 0x2847e0: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2847DCu, 0x2847E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847E4u;
label_2847e4:
    // 0x2847e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2847E4u;
    {
        const bool branch_taken_0x2847e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2847E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847E4u;
        // 0x2847e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847e4) {
            ctx->pc = 0x284804u;
            goto label_284804;
        }
    }
    ctx->pc = 0x2847ECu;
    // 0x2847ec: 0x24050299  addiu       $a1, $zero, 0x299
    ctx->pc = 0x2847ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
    // 0x2847f0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x2847f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2847f4: 0xc096b7a  jal         func_25ADE8
    ctx->pc = 0x2847F4u;
    SET_GPR_U32(ctx, 31, 0x2847FCu);
    ctx->pc = 0x2847F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847F4u;
    // 0x2847f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADE8u, 0x2847F4u, 0x2847FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847FCu;
label_2847fc:
    // 0x2847fc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2847FCu;
    {
        const bool branch_taken_0x2847fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847FCu;
        // 0x284800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847fc) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284804u;
label_284804:
    // 0x284804: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x284804u;
    SET_GPR_U32(ctx, 31, 0x28480Cu);
    ctx->pc = 0x284808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284804u;
    // 0x284808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x284804u, 0x28480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28480Cu;
label_28480c:
    // 0x28480c: 0x38420299  xori        $v0, $v0, 0x299
    ctx->pc = 0x28480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)665);
    // 0x284810: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x284810u;
    {
        const bool branch_taken_0x284810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284810u;
        // 0x284814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284810) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284818u;
    // 0x284818: 0xc0a10a0  jal         func_284280
    ctx->pc = 0x284818u;
    SET_GPR_U32(ctx, 31, 0x284820u);
    ctx->pc = 0x28481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284818u;
    // 0x28481c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284280u, 0x284818u, 0x284820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284820u;
label_284820:
    // 0x284820: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x284820u;
    {
        const bool branch_taken_0x284820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284820u;
        // 0x284824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284820) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284828u;
label_284828:
    // 0x284828: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x284828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28482c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x28482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x284830: 0xc10904c  jal         func_424130
    ctx->pc = 0x284830u;
    SET_GPR_U32(ctx, 31, 0x284838u);
    ctx->pc = 0x284834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284830u;
    // 0x284834: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x284830u, 0x284838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284838u;
label_284838:
    // 0x284838: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x284838u;
    {
        const bool branch_taken_0x284838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284838u;
        // 0x28483c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284838) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284840u;
    // 0x284840: 0x3405cfcf  ori         $a1, $zero, 0xCFCF
    ctx->pc = 0x284840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53199);
    // 0x284844: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x284844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x284848: 0x34a5f300  ori         $a1, $a1, 0xF300
    ctx->pc = 0x284848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62208);
    // 0x28484c: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x28484cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
    // 0x284850: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x284850u;
    SET_GPR_U32(ctx, 31, 0x284858u);
    ctx->pc = 0x284854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284850u;
    // 0x284854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x284850u, 0x284858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284858u;
label_284858:
    // 0x284858: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x284858u;
    {
        const bool branch_taken_0x284858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284858u;
        // 0x28485c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284858) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284860u;
    // 0x284860: 0x3c050fc1  lui         $a1, 0xFC1
    ctx->pc = 0x284860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4033 << 16));
    // 0x284864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284868: 0xc089998  jal         func_226660
    ctx->pc = 0x284868u;
    SET_GPR_U32(ctx, 31, 0x284870u);
    ctx->pc = 0x28486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284868u;
    // 0x28486c: 0x34a5fe7b  ori         $a1, $a1, 0xFE7B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65147);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x284868u, 0x284870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284870u;
label_284870:
    // 0x284870: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x284870u;
    {
        const bool branch_taken_0x284870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284870u;
        // 0x284874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284870) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284878u;
    // 0x284878: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x284878u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x28487c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x28487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x284880: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x284884: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x284884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x284888: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x284888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28488c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28488cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284890: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x284890u;
    {
        const bool branch_taken_0x284890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284890u;
        // 0x284894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284890) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284898u;
    // 0x284898: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x284898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x28489c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2848a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2848a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2848a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2848a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2848a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2848a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2848ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2848ACu;
    {
        const bool branch_taken_0x2848ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848ACu;
        // 0x2848b0: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848ac) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x2848B4u;
    // 0x2848b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2848b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2848b8: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2848b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2848bc: 0xc107908  jal         func_41E420
    ctx->pc = 0x2848BCu;
    SET_GPR_U32(ctx, 31, 0x2848C4u);
    ctx->pc = 0x2848C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848BCu;
    // 0x2848c0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2848BCu, 0x2848C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848C4u;
label_2848c4:
    // 0x2848c4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2848C4u;
    {
        const bool branch_taken_0x2848c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2848C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848C4u;
        // 0x2848c8: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848c4) {
            ctx->pc = 0x284900u;
            goto label_284900;
        }
    }
    ctx->pc = 0x2848CCu;
    // 0x2848cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2848ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2848d0: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2848d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2848d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2848d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2848d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848dc: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2848DCu;
    SET_GPR_U32(ctx, 31, 0x2848E4u);
    ctx->pc = 0x2848E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848DCu;
    // 0x2848e0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2848DCu, 0x2848E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848E4u;
label_2848e4:
    // 0x2848e4: 0xc088c98  jal         func_223260
    ctx->pc = 0x2848E4u;
    SET_GPR_U32(ctx, 31, 0x2848ECu);
    ctx->pc = 0x2848E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848E4u;
    // 0x2848e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x2848E4u, 0x2848ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848ECu;
label_2848ec:
    // 0x2848ec: 0xae220650  sw          $v0, 0x650($s1)
    ctx->pc = 0x2848ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 2));
label_2848f0:
    // 0x2848f0: 0xc0a10d0  jal         func_284340
    ctx->pc = 0x2848F0u;
    SET_GPR_U32(ctx, 31, 0x2848F8u);
    ctx->pc = 0x2848F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848F0u;
    // 0x2848f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284340u, 0x2848F0u, 0x2848F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848F8u;
label_2848f8:
    // 0x2848f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2848F8u;
    {
        const bool branch_taken_0x2848f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848F8u;
        // 0x2848fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848f8) {
            ctx->pc = 0x284904u;
            goto label_284904;
        }
    }
    ctx->pc = 0x284900u;
label_284900:
    // 0x284900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284904:
    // 0x284904: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x284904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284908: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x284908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28490c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28490cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284914: 0x3e00008  jr          $ra
    ctx->pc = 0x284914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284914u;
        // 0x284918: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28491Cu;
    // 0x28491c: 0x0  nop
    ctx->pc = 0x28491cu;
    // NOP
    ctx->pc = 0x284920u;
}
