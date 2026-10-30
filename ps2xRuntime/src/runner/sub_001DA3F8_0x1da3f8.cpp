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

// Function: sub_001DA3F8
// Address: 0x1da3f8 - 0x1da658
void sub_001DA3F8_0x1da3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA3F8_0x1da3f8");
#endif

    switch (ctx->pc) {
        case 0x1da430u: goto label_1da430;
        case 0x1da478u: goto label_1da478;
        case 0x1da490u: goto label_1da490;
        case 0x1da4a4u: goto label_1da4a4;
        case 0x1da4bcu: goto label_1da4bc;
        case 0x1da4f0u: goto label_1da4f0;
        case 0x1da508u: goto label_1da508;
        case 0x1da51cu: goto label_1da51c;
        case 0x1da534u: goto label_1da534;
        case 0x1da56cu: goto label_1da56c;
        case 0x1da584u: goto label_1da584;
        case 0x1da59cu: goto label_1da59c;
        case 0x1da5b4u: goto label_1da5b4;
        case 0x1da604u: goto label_1da604;
        case 0x1da620u: goto label_1da620;
        case 0x1da638u: goto label_1da638;
        default: break;
    }

    ctx->pc = 0x1da3f8u;

    // 0x1da3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da3fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1da400: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1da404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1da404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da408: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da410: 0x8e4245c8  lw          $v0, 0x45C8($s2)
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17864)));
    // 0x1da414: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA414u;
    {
        const bool branch_taken_0x1da414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA414u;
        // 0x1da418: 0x240206f0  addiu       $v0, $zero, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da414) {
            ctx->pc = 0x1DA43Cu;
            goto label_1da43c;
        }
    }
    ctx->pc = 0x1DA41Cu;
    // 0x1da41c: 0x8e4445c0  lw          $a0, 0x45C0($s2)
    ctx->pc = 0x1da41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
    // 0x1da420: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1da420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1da424: 0x24841530  addiu       $a0, $a0, 0x1530
    ctx->pc = 0x1da424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
    // 0x1da428: 0xc075772  jal         func_1D5DC8
    ctx->pc = 0x1DA428u;
    SET_GPR_U32(ctx, 31, 0x1DA430u);
    ctx->pc = 0x1DA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA428u;
    // 0x1da42c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DC8u, 0x1DA428u, 0x1DA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA430u;
label_1da430:
    // 0x1da430: 0xae4245c8  sw          $v0, 0x45C8($s2)
    ctx->pc = 0x1da430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17864), GPR_U32(ctx, 2));
    // 0x1da434: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1DA434u;
    {
        const bool branch_taken_0x1da434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA434u;
        // 0x1da438: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da434) {
            ctx->pc = 0x1DA63Cu;
            goto label_1da63c;
        }
    }
    ctx->pc = 0x1DA43Cu;
label_1da43c:
    // 0x1da43c: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1da43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1da440: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1DA440u;
    {
        const bool branch_taken_0x1da440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA440u;
        // 0x1da444: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da440) {
            ctx->pc = 0x1DA638u;
            goto label_1da638;
        }
    }
    ctx->pc = 0x1DA448u;
    // 0x1da448: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1da44c: 0x244260f0  addiu       $v0, $v0, 0x60F0
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24816));
    // 0x1da450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da458: 0x800008  jr          $a0
    ctx->pc = 0x1DA458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA460u: goto label_1da460;
            case 0x1DA4D4u: goto label_1da4d4;
            case 0x1DA55Cu: goto label_1da55c;
            case 0x1DA58Cu: goto label_1da58c;
            case 0x1DA5C0u: goto label_1da5c0;
            case 0x1DA638u: goto label_1da638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DA460u;
label_1da460:
    // 0x1da460: 0x8e4245c0  lw          $v0, 0x45C0($s2)
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
    // 0x1da464: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA464u;
    {
        const bool branch_taken_0x1da464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA464u;
        // 0x1da468: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da464) {
            ctx->pc = 0x1DA498u;
            goto label_1da498;
        }
    }
    ctx->pc = 0x1DA46Cu;
    // 0x1da46c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1da46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1da470: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA470u;
    SET_GPR_U32(ctx, 31, 0x1DA478u);
    ctx->pc = 0x1DA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA470u;
    // 0x1da474: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA470u, 0x1DA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA478u;
label_1da478:
    // 0x1da478: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1da478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1da47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da488: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA488u;
    SET_GPR_U32(ctx, 31, 0x1DA490u);
    ctx->pc = 0x1DA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA488u;
    // 0x1da48c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA488u, 0x1DA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA490u;
label_1da490:
    // 0x1da490: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA490u;
    {
        const bool branch_taken_0x1da490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA490u;
        // 0x1da494: 0x8e4245c0  lw          $v0, 0x45C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da490) {
            ctx->pc = 0x1DA4C0u;
            goto label_1da4c0;
        }
    }
    ctx->pc = 0x1DA498u;
label_1da498:
    // 0x1da498: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da49c: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA49Cu;
    SET_GPR_U32(ctx, 31, 0x1DA4A4u);
    ctx->pc = 0x1DA4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA49Cu;
    // 0x1da4a0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA49Cu, 0x1DA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4A4u;
label_1da4a4:
    // 0x1da4a4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1da4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1da4a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4b4: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA4B4u;
    SET_GPR_U32(ctx, 31, 0x1DA4BCu);
    ctx->pc = 0x1DA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4B4u;
    // 0x1da4b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA4B4u, 0x1DA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4BCu;
label_1da4bc:
    // 0x1da4bc: 0x8e4245c0  lw          $v0, 0x45C0($s2)
    ctx->pc = 0x1da4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
label_1da4c0:
    // 0x1da4c0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DA4C0u;
    {
        const bool branch_taken_0x1da4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4C0u;
        // 0x1da4c4: 0xae4045cc  sw          $zero, 0x45CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4c0) {
            ctx->pc = 0x1DA550u;
            goto label_1da550;
        }
    }
    ctx->pc = 0x1DA4C8u;
    // 0x1da4c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1da4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1da4cc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1DA4CCu;
    {
        const bool branch_taken_0x1da4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4CCu;
        // 0x1da4d0: 0xae4245c0  sw          $v0, 0x45C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4cc) {
            ctx->pc = 0x1DA638u;
            goto label_1da638;
        }
    }
    ctx->pc = 0x1DA4D4u;
label_1da4d4:
    // 0x1da4d4: 0x8e4345c0  lw          $v1, 0x45C0($s2)
    ctx->pc = 0x1da4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
    // 0x1da4d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1da4dc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA4DCu;
    {
        const bool branch_taken_0x1da4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4DCu;
        // 0x1da4e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4dc) {
            ctx->pc = 0x1DA510u;
            goto label_1da510;
        }
    }
    ctx->pc = 0x1DA4E4u;
    // 0x1da4e4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1da4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1da4e8: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA4E8u;
    SET_GPR_U32(ctx, 31, 0x1DA4F0u);
    ctx->pc = 0x1DA4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4E8u;
    // 0x1da4ec: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA4E8u, 0x1DA4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4F0u;
label_1da4f0:
    // 0x1da4f0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1da4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da500: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA500u;
    SET_GPR_U32(ctx, 31, 0x1DA508u);
    ctx->pc = 0x1DA504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA500u;
    // 0x1da504: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA500u, 0x1DA508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA508u;
label_1da508:
    // 0x1da508: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA508u;
    {
        const bool branch_taken_0x1da508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA508u;
        // 0x1da50c: 0x8e4345c0  lw          $v1, 0x45C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da508) {
            ctx->pc = 0x1DA538u;
            goto label_1da538;
        }
    }
    ctx->pc = 0x1DA510u;
label_1da510:
    // 0x1da510: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1da510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da514: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA514u;
    SET_GPR_U32(ctx, 31, 0x1DA51Cu);
    ctx->pc = 0x1DA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA514u;
    // 0x1da518: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA514u, 0x1DA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA51Cu;
label_1da51c:
    // 0x1da51c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1da51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1da520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da52c: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA52Cu;
    SET_GPR_U32(ctx, 31, 0x1DA534u);
    ctx->pc = 0x1DA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA52Cu;
    // 0x1da530: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA52Cu, 0x1DA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA534u;
label_1da534:
    // 0x1da534: 0x8e4345c0  lw          $v1, 0x45C0($s2)
    ctx->pc = 0x1da534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
label_1da538:
    // 0x1da538: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1da538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1da53c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA53Cu;
    {
        const bool branch_taken_0x1da53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA53Cu;
        // 0x1da540: 0xae4045cc  sw          $zero, 0x45CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da53c) {
            ctx->pc = 0x1DA550u;
            goto label_1da550;
        }
    }
    ctx->pc = 0x1DA544u;
    // 0x1da544: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1da544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da548: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DA548u;
    {
        const bool branch_taken_0x1da548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA548u;
        // 0x1da54c: 0xae4245c0  sw          $v0, 0x45C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da548) {
            ctx->pc = 0x1DA638u;
            goto label_1da638;
        }
    }
    ctx->pc = 0x1DA550u;
label_1da550:
    // 0x1da550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da554: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1DA554u;
    {
        const bool branch_taken_0x1da554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA554u;
        // 0x1da558: 0xae4245cc  sw          $v0, 0x45CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da554) {
            ctx->pc = 0x1DA63Cu;
            goto label_1da63c;
        }
    }
    ctx->pc = 0x1DA55Cu;
label_1da55c:
    // 0x1da55c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1da55cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1da560: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1da564: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA564u;
    SET_GPR_U32(ctx, 31, 0x1DA56Cu);
    ctx->pc = 0x1DA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA564u;
    // 0x1da568: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA564u, 0x1DA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA56Cu;
label_1da56c:
    // 0x1da56c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1da570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da57c: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA57Cu;
    SET_GPR_U32(ctx, 31, 0x1DA584u);
    ctx->pc = 0x1DA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA57Cu;
    // 0x1da580: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA57Cu, 0x1DA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA584u;
label_1da584:
    // 0x1da584: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1DA584u;
    {
        const bool branch_taken_0x1da584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA584u;
        // 0x1da588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da584) {
            ctx->pc = 0x1DA63Cu;
            goto label_1da63c;
        }
    }
    ctx->pc = 0x1DA58Cu;
label_1da58c:
    // 0x1da58c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1da590: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1da594: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA594u;
    SET_GPR_U32(ctx, 31, 0x1DA59Cu);
    ctx->pc = 0x1DA598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA594u;
    // 0x1da598: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA594u, 0x1DA59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA59Cu;
label_1da59c:
    // 0x1da59c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1da59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1da5a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5ac: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA5ACu;
    SET_GPR_U32(ctx, 31, 0x1DA5B4u);
    ctx->pc = 0x1DA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5ACu;
    // 0x1da5b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA5ACu, 0x1DA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5B4u;
label_1da5b4:
    // 0x1da5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1da5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da5b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DA5B8u;
    {
        const bool branch_taken_0x1da5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5B8u;
        // 0x1da5bc: 0xae4345d0  sw          $v1, 0x45D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17872), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5b8) {
            ctx->pc = 0x1DA638u;
            goto label_1da638;
        }
    }
    ctx->pc = 0x1DA5C0u;
label_1da5c0:
    // 0x1da5c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1da5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da5c4: 0x8e4345c0  lw          $v1, 0x45C0($s2)
    ctx->pc = 0x1da5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
    // 0x1da5c8: 0xae4445c8  sw          $a0, 0x45C8($s2)
    ctx->pc = 0x1da5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17864), GPR_U32(ctx, 4));
    // 0x1da5cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1da5d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA5D0u;
    {
        const bool branch_taken_0x1da5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5D0u;
        // 0x1da5d4: 0xae4045d0  sw          $zero, 0x45D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5d0) {
            ctx->pc = 0x1DA5E8u;
            goto label_1da5e8;
        }
    }
    ctx->pc = 0x1DA5D8u;
    // 0x1da5d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1da5dc: 0x8c42edd4  lw          $v0, -0x122C($v0)
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50EDD4u));
    // 0x1da5e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DA5E0u;
    {
        const bool branch_taken_0x1da5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da5e0) {
            ctx->pc = 0x1DA5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA5E0u;
            // 0x1da5e4: 0xac4404c0  sw          $a0, 0x4C0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 1216), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA5E8u;
            goto label_1da5e8;
        }
    }
    ctx->pc = 0x1DA5E8u;
label_1da5e8:
    // 0x1da5e8: 0x8e4445c0  lw          $a0, 0x45C0($s2)
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
    // 0x1da5ec: 0x241006f0  addiu       $s0, $zero, 0x6F0
    ctx->pc = 0x1da5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x1da5f0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1da5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1da5f4: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x1da5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1da5f8: 0x24841530  addiu       $a0, $a0, 0x1530
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
    // 0x1da5fc: 0xc07583a  jal         func_1D60E8
    ctx->pc = 0x1DA5FCu;
    SET_GPR_U32(ctx, 31, 0x1DA604u);
    ctx->pc = 0x1DA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5FCu;
    // 0x1da600: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D60E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D60E8u, 0x1DA5FCu, 0x1DA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA604u;
label_1da604:
    // 0x1da604: 0x8e4245c0  lw          $v0, 0x45C0($s2)
    ctx->pc = 0x1da604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17856)));
    // 0x1da608: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1da608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1da60c: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x1da60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1da610: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1da610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1da614: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1da618: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DA618u;
    SET_GPR_U32(ctx, 31, 0x1DA620u);
    ctx->pc = 0x1DA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA618u;
    // 0x1da61c: 0xac401744  sw          $zero, 0x1744($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 5956), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DA618u, 0x1DA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA620u;
label_1da620:
    // 0x1da620: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x1da620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1da624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da630: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1DA630u;
    SET_GPR_U32(ctx, 31, 0x1DA638u);
    ctx->pc = 0x1DA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA630u;
    // 0x1da634: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1DA630u, 0x1DA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA638u;
label_1da638:
    // 0x1da638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da63c:
    // 0x1da63c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1da63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da640: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da644: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1da644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA64Cu;
        // 0x1da650: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA654u;
    // 0x1da654: 0x0  nop
    ctx->pc = 0x1da654u;
    // NOP
    ctx->pc = 0x1da658u;
}
