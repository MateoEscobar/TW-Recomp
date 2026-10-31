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

// Function: sub_00319470
// Address: 0x319470 - 0x319570
void sub_00319470_0x319470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319470_0x319470");
#endif

    switch (ctx->pc) {
        case 0x319470u: goto label_319470;
        case 0x319474u: goto label_319474;
        case 0x319478u: goto label_319478;
        case 0x31947cu: goto label_31947c;
        case 0x319480u: goto label_319480;
        case 0x319484u: goto label_319484;
        case 0x319488u: goto label_319488;
        case 0x31948cu: goto label_31948c;
        case 0x319490u: goto label_319490;
        case 0x319494u: goto label_319494;
        case 0x319498u: goto label_319498;
        case 0x31949cu: goto label_31949c;
        case 0x3194a0u: goto label_3194a0;
        case 0x3194a4u: goto label_3194a4;
        case 0x3194a8u: goto label_3194a8;
        case 0x3194acu: goto label_3194ac;
        case 0x3194b0u: goto label_3194b0;
        case 0x3194b4u: goto label_3194b4;
        case 0x3194b8u: goto label_3194b8;
        case 0x3194bcu: goto label_3194bc;
        case 0x3194c0u: goto label_3194c0;
        case 0x3194c4u: goto label_3194c4;
        case 0x3194c8u: goto label_3194c8;
        case 0x3194ccu: goto label_3194cc;
        case 0x3194d0u: goto label_3194d0;
        case 0x3194d4u: goto label_3194d4;
        case 0x3194d8u: goto label_3194d8;
        case 0x3194dcu: goto label_3194dc;
        case 0x3194e0u: goto label_3194e0;
        case 0x3194e4u: goto label_3194e4;
        case 0x3194e8u: goto label_3194e8;
        case 0x3194ecu: goto label_3194ec;
        case 0x3194f0u: goto label_3194f0;
        case 0x3194f4u: goto label_3194f4;
        case 0x3194f8u: goto label_3194f8;
        case 0x3194fcu: goto label_3194fc;
        case 0x319500u: goto label_319500;
        case 0x319504u: goto label_319504;
        case 0x319508u: goto label_319508;
        case 0x31950cu: goto label_31950c;
        case 0x319510u: goto label_319510;
        case 0x319514u: goto label_319514;
        case 0x319518u: goto label_319518;
        case 0x31951cu: goto label_31951c;
        case 0x319520u: goto label_319520;
        case 0x319524u: goto label_319524;
        case 0x319528u: goto label_319528;
        case 0x31952cu: goto label_31952c;
        case 0x319530u: goto label_319530;
        case 0x319534u: goto label_319534;
        case 0x319538u: goto label_319538;
        case 0x31953cu: goto label_31953c;
        case 0x319540u: goto label_319540;
        case 0x319544u: goto label_319544;
        case 0x319548u: goto label_319548;
        case 0x31954cu: goto label_31954c;
        case 0x319550u: goto label_319550;
        case 0x319554u: goto label_319554;
        case 0x319558u: goto label_319558;
        case 0x31955cu: goto label_31955c;
        case 0x319560u: goto label_319560;
        case 0x319564u: goto label_319564;
        case 0x319568u: goto label_319568;
        case 0x31956cu: goto label_31956c;
        default: break;
    }

    ctx->pc = 0x319470u;

label_319470:
    // 0x319470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_319474:
    // 0x319474: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x319474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_319478:
    // 0x319478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x319478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_31947c:
    // 0x31947c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_319480:
    // 0x319480: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x319480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_319484:
    // 0x319484: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_319488:
    if (ctx->pc == 0x319488u) {
        ctx->pc = 0x319488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319484u;
        // 0x319488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31948Cu;
        goto label_31948c;
    }
    ctx->pc = 0x319484u;
    {
        const bool branch_taken_0x319484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x319488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319484u;
        // 0x319488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319484) {
            ctx->pc = 0x3194BCu;
            goto label_3194bc;
        }
    }
    ctx->pc = 0x31948Cu;
label_31948c:
    // 0x31948c: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x31948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_319490:
    // 0x319490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_319494:
    if (ctx->pc == 0x319494u) {
        ctx->pc = 0x319494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319490u;
        // 0x319494: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319498u;
        goto label_319498;
    }
    ctx->pc = 0x319490u;
    {
        const bool branch_taken_0x319490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319490u;
        // 0x319494: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319490) {
            ctx->pc = 0x3194A8u;
            goto label_3194a8;
        }
    }
    ctx->pc = 0x319498u;
label_319498:
    // 0x319498: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_31949c:
    if (ctx->pc == 0x31949Cu) {
        ctx->pc = 0x3194A0u;
        goto label_3194a0;
    }
    ctx->pc = 0x319498u;
    {
        const bool branch_taken_0x319498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x319498) {
            ctx->pc = 0x319554u;
            goto label_319554;
        }
    }
    ctx->pc = 0x3194A0u;
label_3194a0:
    // 0x3194a0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3194a4:
    if (ctx->pc == 0x3194A4u) {
        ctx->pc = 0x3194A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194A0u;
        // 0x3194a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194A8u;
        goto label_3194a8;
    }
    ctx->pc = 0x3194A0u;
    {
        const bool branch_taken_0x3194a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194A0u;
        // 0x3194a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194a0) {
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x3194A8u;
label_3194a8:
    // 0x3194a8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3194a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3194ac:
    // 0x3194ac: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_3194b0:
    if (ctx->pc == 0x3194B0u) {
        ctx->pc = 0x3194B4u;
        goto label_3194b4;
    }
    ctx->pc = 0x3194ACu;
    {
        const bool branch_taken_0x3194ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3194ac) {
            ctx->pc = 0x319554u;
            goto label_319554;
        }
    }
    ctx->pc = 0x3194B4u;
label_3194b4:
    // 0x3194b4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3194b8:
    if (ctx->pc == 0x3194B8u) {
        ctx->pc = 0x3194B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194B4u;
        // 0x3194b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194BCu;
        goto label_3194bc;
    }
    ctx->pc = 0x3194B4u;
    {
        const bool branch_taken_0x3194b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194B4u;
        // 0x3194b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194b4) {
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x3194BCu;
label_3194bc:
    // 0x3194bc: 0xc08a61a  jal         func_229868
label_3194c0:
    if (ctx->pc == 0x3194C0u) {
        ctx->pc = 0x3194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194BCu;
        // 0x3194c0: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194C4u;
        goto label_3194c4;
    }
    ctx->pc = 0x3194BCu;
    SET_GPR_U32(ctx, 31, 0x3194C4u);
    ctx->pc = 0x3194C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3194BCu;
    // 0x3194c0: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3194BCu, 0x3194C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194C4u;
label_3194c4:
    // 0x3194c4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_3194c8:
    if (ctx->pc == 0x3194C8u) {
        ctx->pc = 0x3194C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194C4u;
        // 0x3194c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194CCu;
        goto label_3194cc;
    }
    ctx->pc = 0x3194C4u;
    {
        const bool branch_taken_0x3194c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3194c4) {
            ctx->pc = 0x3194C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3194C4u;
            // 0x3194c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x3194CCu;
label_3194cc:
    // 0x3194cc: 0xc087502  jal         func_21D408
label_3194d0:
    if (ctx->pc == 0x3194D0u) {
        ctx->pc = 0x3194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194CCu;
        // 0x3194d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194D4u;
        goto label_3194d4;
    }
    ctx->pc = 0x3194CCu;
    SET_GPR_U32(ctx, 31, 0x3194D4u);
    ctx->pc = 0x3194D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3194CCu;
    // 0x3194d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3194CCu, 0x3194D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194D4u;
label_3194d4:
    // 0x3194d4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x3194d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3194d8:
    // 0x3194d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3194d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3194dc:
    // 0x3194dc: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
label_3194e0:
    if (ctx->pc == 0x3194E0u) {
        ctx->pc = 0x3194E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194DCu;
        // 0x3194e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194E4u;
        goto label_3194e4;
    }
    ctx->pc = 0x3194DCu;
    {
        const bool branch_taken_0x3194dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3194E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194DCu;
        // 0x3194e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194dc) {
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x3194E4u;
label_3194e4:
    // 0x3194e4: 0xc05959e  jal         func_165678
label_3194e8:
    if (ctx->pc == 0x3194E8u) {
        ctx->pc = 0x3194ECu;
        goto label_3194ec;
    }
    ctx->pc = 0x3194E4u;
    SET_GPR_U32(ctx, 31, 0x3194ECu);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3194E4u, 0x3194ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194ECu;
label_3194ec:
    // 0x3194ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3194f0:
    if (ctx->pc == 0x3194F0u) {
        ctx->pc = 0x3194F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194ECu;
        // 0x3194f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194F4u;
        goto label_3194f4;
    }
    ctx->pc = 0x3194ECu;
    {
        const bool branch_taken_0x3194ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194ECu;
        // 0x3194f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194ec) {
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x3194F4u;
label_3194f4:
    // 0x3194f4: 0xc087502  jal         func_21D408
label_3194f8:
    if (ctx->pc == 0x3194F8u) {
        ctx->pc = 0x3194F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194F4u;
        // 0x3194f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194FCu;
        goto label_3194fc;
    }
    ctx->pc = 0x3194F4u;
    SET_GPR_U32(ctx, 31, 0x3194FCu);
    ctx->pc = 0x3194F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3194F4u;
    // 0x3194f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3194F4u, 0x3194FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194FCu;
label_3194fc:
    // 0x3194fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3194fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319500:
    // 0x319500: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x319500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_319504:
    // 0x319504: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_319508:
    if (ctx->pc == 0x319508u) {
        ctx->pc = 0x319508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319504u;
        // 0x319508: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31950Cu;
        goto label_31950c;
    }
    ctx->pc = 0x319504u;
    {
        const bool branch_taken_0x319504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x319508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319504u;
        // 0x319508: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319504) {
            ctx->pc = 0x319518u;
            goto label_319518;
        }
    }
    ctx->pc = 0x31950Cu;
label_31950c:
    // 0x31950c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_319510:
    // 0x319510: 0x10000002  b           . + 4 + (0x2 << 2)
label_319514:
    if (ctx->pc == 0x319514u) {
        ctx->pc = 0x319514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319510u;
        // 0x319514: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319518u;
        goto label_319518;
    }
    ctx->pc = 0x319510u;
    {
        const bool branch_taken_0x319510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319510u;
        // 0x319514: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319510) {
            ctx->pc = 0x31951Cu;
            goto label_31951c;
        }
    }
    ctx->pc = 0x319518u;
label_319518:
    // 0x319518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31951c:
    // 0x31951c: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_319520:
    if (ctx->pc == 0x319520u) {
        ctx->pc = 0x319520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31951Cu;
        // 0x319520: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319524u;
        goto label_319524;
    }
    ctx->pc = 0x31951Cu;
    {
        const bool branch_taken_0x31951c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31951c) {
            ctx->pc = 0x319520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31951Cu;
            // 0x319520: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x319524u;
label_319524:
    // 0x319524: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x319524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_319528:
    // 0x319528: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x319528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31952c:
    // 0x31952c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_319530:
    // 0x319530: 0x40f809  jalr        $v0
label_319534:
    if (ctx->pc == 0x319534u) {
        ctx->pc = 0x319534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319530u;
        // 0x319534: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319538u;
        goto label_319538;
    }
    ctx->pc = 0x319530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x319538u);
        ctx->pc = 0x319534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319530u;
        // 0x319534: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319530u, 0x319538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319538u;
label_319538:
    // 0x319538: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x319538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31953c:
    // 0x31953c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_319540:
    if (ctx->pc == 0x319540u) {
        ctx->pc = 0x319540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31953Cu;
        // 0x319540: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319544u;
        goto label_319544;
    }
    ctx->pc = 0x31953Cu;
    {
        const bool branch_taken_0x31953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31953c) {
            ctx->pc = 0x319540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31953Cu;
            // 0x319540: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x319544u;
label_319544:
    // 0x319544: 0xc0a36c8  jal         func_28DB20
label_319548:
    if (ctx->pc == 0x319548u) {
        ctx->pc = 0x319548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319544u;
        // 0x319548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31954Cu;
        goto label_31954c;
    }
    ctx->pc = 0x319544u;
    SET_GPR_U32(ctx, 31, 0x31954Cu);
    ctx->pc = 0x319548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319544u;
    // 0x319548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x319544u, 0x31954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31954Cu;
label_31954c:
    // 0x31954c: 0x10000004  b           . + 4 + (0x4 << 2)
label_319550:
    if (ctx->pc == 0x319550u) {
        ctx->pc = 0x319550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31954Cu;
        // 0x319550: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319554u;
        goto label_319554;
    }
    ctx->pc = 0x31954Cu;
    {
        const bool branch_taken_0x31954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31954Cu;
        // 0x319550: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31954c) {
            ctx->pc = 0x319560u;
            goto label_319560;
        }
    }
    ctx->pc = 0x319554u;
label_319554:
    // 0x319554: 0xc0c6438  jal         func_3190E0
label_319558:
    if (ctx->pc == 0x319558u) {
        ctx->pc = 0x319558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319554u;
        // 0x319558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31955Cu;
        goto label_31955c;
    }
    ctx->pc = 0x319554u;
    SET_GPR_U32(ctx, 31, 0x31955Cu);
    ctx->pc = 0x319558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319554u;
    // 0x319558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3190E0u, 0x319554u, 0x31955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31955Cu;
label_31955c:
    // 0x31955c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31955cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_319560:
    // 0x319560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319564:
    // 0x319564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319568:
    // 0x319568: 0x3e00008  jr          $ra
label_31956c:
    if (ctx->pc == 0x31956Cu) {
        ctx->pc = 0x31956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319568u;
        // 0x31956c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319570u;
        goto label_fallthrough_0x319568;
    }
    ctx->pc = 0x319568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319568u;
        // 0x31956c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x319568:
    ctx->pc = 0x319570u;
}
