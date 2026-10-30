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

// Function: sub_001066C0
// Address: 0x1066c0 - 0x1067a8
void sub_001066C0_0x1066c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001066C0_0x1066c0");
#endif

    switch (ctx->pc) {
        case 0x1066c0u: goto label_1066c0;
        case 0x1066c4u: goto label_1066c4;
        case 0x1066c8u: goto label_1066c8;
        case 0x1066ccu: goto label_1066cc;
        case 0x1066d0u: goto label_1066d0;
        case 0x1066d4u: goto label_1066d4;
        case 0x1066d8u: goto label_1066d8;
        case 0x1066dcu: goto label_1066dc;
        case 0x1066e0u: goto label_1066e0;
        case 0x1066e4u: goto label_1066e4;
        case 0x1066e8u: goto label_1066e8;
        case 0x1066ecu: goto label_1066ec;
        case 0x1066f0u: goto label_1066f0;
        case 0x1066f4u: goto label_1066f4;
        case 0x1066f8u: goto label_1066f8;
        case 0x1066fcu: goto label_1066fc;
        case 0x106700u: goto label_106700;
        case 0x106704u: goto label_106704;
        case 0x106708u: goto label_106708;
        case 0x10670cu: goto label_10670c;
        case 0x106710u: goto label_106710;
        case 0x106714u: goto label_106714;
        case 0x106718u: goto label_106718;
        case 0x10671cu: goto label_10671c;
        case 0x106720u: goto label_106720;
        case 0x106724u: goto label_106724;
        case 0x106728u: goto label_106728;
        case 0x10672cu: goto label_10672c;
        case 0x106730u: goto label_106730;
        case 0x106734u: goto label_106734;
        case 0x106738u: goto label_106738;
        case 0x10673cu: goto label_10673c;
        case 0x106740u: goto label_106740;
        case 0x106744u: goto label_106744;
        case 0x106748u: goto label_106748;
        case 0x10674cu: goto label_10674c;
        case 0x106750u: goto label_106750;
        case 0x106754u: goto label_106754;
        case 0x106758u: goto label_106758;
        case 0x10675cu: goto label_10675c;
        case 0x106760u: goto label_106760;
        case 0x106764u: goto label_106764;
        case 0x106768u: goto label_106768;
        case 0x10676cu: goto label_10676c;
        case 0x106770u: goto label_106770;
        case 0x106774u: goto label_106774;
        case 0x106778u: goto label_106778;
        case 0x10677cu: goto label_10677c;
        case 0x106780u: goto label_106780;
        case 0x106784u: goto label_106784;
        case 0x106788u: goto label_106788;
        case 0x10678cu: goto label_10678c;
        case 0x106790u: goto label_106790;
        case 0x106794u: goto label_106794;
        case 0x106798u: goto label_106798;
        case 0x10679cu: goto label_10679c;
        case 0x1067a0u: goto label_1067a0;
        case 0x1067a4u: goto label_1067a4;
        default: break;
    }

    ctx->pc = 0x1066c0u;

label_1066c0:
    // 0x1066c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1066c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1066c4:
    // 0x1066c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1066c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1066c8:
    // 0x1066c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1066c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1066cc:
    // 0x1066cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1066ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1066d0:
    // 0x1066d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1066d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1066d4:
    // 0x1066d4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1066d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1066d8:
    // 0x1066d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1066dc:
    if (ctx->pc == 0x1066DCu) {
        ctx->pc = 0x1066DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066D8u;
        // 0x1066dc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1066E0u;
        goto label_1066e0;
    }
    ctx->pc = 0x1066D8u;
    {
        const bool branch_taken_0x1066d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1066d8) {
            ctx->pc = 0x1066DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1066D8u;
            // 0x1066dc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1066F0u;
            goto label_1066f0;
        }
    }
    ctx->pc = 0x1066E0u;
label_1066e0:
    // 0x1066e0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1066e4:
    // 0x1066e4: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_1066e8:
    if (ctx->pc == 0x1066E8u) {
        ctx->pc = 0x1066E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066E4u;
        // 0x1066e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1066ECu;
        goto label_1066ec;
    }
    ctx->pc = 0x1066E4u;
    {
        const bool branch_taken_0x1066e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1066e4) {
            ctx->pc = 0x1066E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1066E4u;
            // 0x1066e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106794u;
            goto label_106794;
        }
    }
    ctx->pc = 0x1066ECu;
label_1066ec:
    // 0x1066ec: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1066ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1066f0:
    // 0x1066f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1066f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1066f4:
    // 0x1066f4: 0xc0e409a  jal         func_390268
label_1066f8:
    if (ctx->pc == 0x1066F8u) {
        ctx->pc = 0x1066F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066F4u;
        // 0x1066f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1066FCu;
        goto label_1066fc;
    }
    ctx->pc = 0x1066F4u;
    SET_GPR_U32(ctx, 31, 0x1066FCu);
    ctx->pc = 0x1066F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066F4u;
    // 0x1066f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1066F4u, 0x1066FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066FCu;
label_1066fc:
    // 0x1066fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1066fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106700:
    // 0x106700: 0x52200024  beql        $s1, $zero, . + 4 + (0x24 << 2)
label_106704:
    if (ctx->pc == 0x106704u) {
        ctx->pc = 0x106704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106700u;
        // 0x106704: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106708u;
        goto label_106708;
    }
    ctx->pc = 0x106700u;
    {
        const bool branch_taken_0x106700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x106700) {
            ctx->pc = 0x106704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106700u;
            // 0x106704: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106794u;
            goto label_106794;
        }
    }
    ctx->pc = 0x106708u;
label_106708:
    // 0x106708: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10670c:
    // 0x10670c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x10670cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_106710:
    // 0x106710: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x106710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_106714:
    // 0x106714: 0x60f809  jalr        $v1
label_106718:
    if (ctx->pc == 0x106718u) {
        ctx->pc = 0x106718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106714u;
        // 0x106718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10671Cu;
        goto label_10671c;
    }
    ctx->pc = 0x106714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10671Cu);
        ctx->pc = 0x106718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106714u;
        // 0x106718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106714u, 0x10671Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10671Cu;
label_10671c:
    // 0x10671c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x10671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_106720:
    // 0x106720: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_106724:
    if (ctx->pc == 0x106724u) {
        ctx->pc = 0x106724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106720u;
        // 0x106724: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106728u;
        goto label_106728;
    }
    ctx->pc = 0x106720u;
    {
        const bool branch_taken_0x106720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106720u;
        // 0x106724: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106720) {
            ctx->pc = 0x106790u;
            goto label_106790;
        }
    }
    ctx->pc = 0x106728u;
label_106728:
    // 0x106728: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x106728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_10672c:
    // 0x10672c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_106730:
    // 0x106730: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_106734:
    // 0x106734: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x106734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_106738:
    // 0x106738: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x106738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_10673c:
    // 0x10673c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x10673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_106740:
    // 0x106740: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x106740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_106744:
    // 0x106744: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_106748:
    if (ctx->pc == 0x106748u) {
        ctx->pc = 0x106748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106744u;
        // 0x106748: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10674Cu;
        goto label_10674c;
    }
    ctx->pc = 0x106744u;
    {
        const bool branch_taken_0x106744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x106744) {
            ctx->pc = 0x106748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106744u;
            // 0x106748: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106790u;
            goto label_106790;
        }
    }
    ctx->pc = 0x10674Cu;
label_10674c:
    // 0x10674c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106750:
    // 0x106750: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_106754:
    // 0x106754: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x106754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_106758:
    // 0x106758: 0x40f809  jalr        $v0
label_10675c:
    if (ctx->pc == 0x10675Cu) {
        ctx->pc = 0x10675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106758u;
        // 0x10675c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106760u;
        goto label_106760;
    }
    ctx->pc = 0x106758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106760u);
        ctx->pc = 0x10675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106758u;
        // 0x10675c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106758u, 0x106760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106760u;
label_106760:
    // 0x106760: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_106764:
    if (ctx->pc == 0x106764u) {
        ctx->pc = 0x106764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106760u;
        // 0x106764: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106768u;
        goto label_106768;
    }
    ctx->pc = 0x106760u;
    {
        const bool branch_taken_0x106760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106760) {
            ctx->pc = 0x106764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106760u;
            // 0x106764: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106790u;
            goto label_106790;
        }
    }
    ctx->pc = 0x106768u;
label_106768:
    // 0x106768: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10676c:
    // 0x10676c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_106770:
    // 0x106770: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x106770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_106774:
    // 0x106774: 0x40f809  jalr        $v0
label_106778:
    if (ctx->pc == 0x106778u) {
        ctx->pc = 0x106778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106774u;
        // 0x106778: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10677Cu;
        goto label_10677c;
    }
    ctx->pc = 0x106774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10677Cu);
        ctx->pc = 0x106778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106774u;
        // 0x106778: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106774u, 0x10677Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10677Cu;
label_10677c:
    // 0x10677c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x10677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_106780:
    // 0x106780: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_106784:
    // 0x106784: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x106784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_106788:
    // 0x106788: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x106788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_10678c:
    // 0x10678c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x10678cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_106790:
    // 0x106790: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x106790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_106794:
    // 0x106794: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x106794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106798:
    // 0x106798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10679c:
    // 0x10679c: 0x3e00008  jr          $ra
label_1067a0:
    if (ctx->pc == 0x1067A0u) {
        ctx->pc = 0x1067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10679Cu;
        // 0x1067a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1067A4u;
        goto label_1067a4;
    }
    ctx->pc = 0x10679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10679Cu;
        // 0x1067a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10679Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1067A4u;
label_1067a4:
    // 0x1067a4: 0x0  nop
    ctx->pc = 0x1067a4u;
    // NOP
    ctx->pc = 0x1067a8u;
}
