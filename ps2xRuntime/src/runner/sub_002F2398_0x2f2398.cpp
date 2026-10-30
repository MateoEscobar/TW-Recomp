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

// Function: sub_002F2398
// Address: 0x2f2398 - 0x2f2438
void sub_002F2398_0x2f2398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2398_0x2f2398");
#endif

    switch (ctx->pc) {
        case 0x2f2398u: goto label_2f2398;
        case 0x2f239cu: goto label_2f239c;
        case 0x2f23a0u: goto label_2f23a0;
        case 0x2f23a4u: goto label_2f23a4;
        case 0x2f23a8u: goto label_2f23a8;
        case 0x2f23acu: goto label_2f23ac;
        case 0x2f23b0u: goto label_2f23b0;
        case 0x2f23b4u: goto label_2f23b4;
        case 0x2f23b8u: goto label_2f23b8;
        case 0x2f23bcu: goto label_2f23bc;
        case 0x2f23c0u: goto label_2f23c0;
        case 0x2f23c4u: goto label_2f23c4;
        case 0x2f23c8u: goto label_2f23c8;
        case 0x2f23ccu: goto label_2f23cc;
        case 0x2f23d0u: goto label_2f23d0;
        case 0x2f23d4u: goto label_2f23d4;
        case 0x2f23d8u: goto label_2f23d8;
        case 0x2f23dcu: goto label_2f23dc;
        case 0x2f23e0u: goto label_2f23e0;
        case 0x2f23e4u: goto label_2f23e4;
        case 0x2f23e8u: goto label_2f23e8;
        case 0x2f23ecu: goto label_2f23ec;
        case 0x2f23f0u: goto label_2f23f0;
        case 0x2f23f4u: goto label_2f23f4;
        case 0x2f23f8u: goto label_2f23f8;
        case 0x2f23fcu: goto label_2f23fc;
        case 0x2f2400u: goto label_2f2400;
        case 0x2f2404u: goto label_2f2404;
        case 0x2f2408u: goto label_2f2408;
        case 0x2f240cu: goto label_2f240c;
        case 0x2f2410u: goto label_2f2410;
        case 0x2f2414u: goto label_2f2414;
        case 0x2f2418u: goto label_2f2418;
        case 0x2f241cu: goto label_2f241c;
        case 0x2f2420u: goto label_2f2420;
        case 0x2f2424u: goto label_2f2424;
        case 0x2f2428u: goto label_2f2428;
        case 0x2f242cu: goto label_2f242c;
        case 0x2f2430u: goto label_2f2430;
        case 0x2f2434u: goto label_2f2434;
        default: break;
    }

    ctx->pc = 0x2f2398u;

label_2f2398:
    // 0x2f2398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f239c:
    // 0x2f239c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f23a0:
    // 0x2f23a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f23a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f23a4:
    // 0x2f23a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f23a8:
    // 0x2f23a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f23ac:
    // 0x2f23ac: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_2f23b0:
    if (ctx->pc == 0x2F23B0u) {
        ctx->pc = 0x2F23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23ACu;
        // 0x2f23b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23B4u;
        goto label_2f23b4;
    }
    ctx->pc = 0x2F23ACu;
    {
        const bool branch_taken_0x2f23ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23ACu;
        // 0x2f23b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23ac) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F23B4u;
label_2f23b4:
    // 0x2f23b4: 0xc089bfc  jal         func_226FF0
label_2f23b8:
    if (ctx->pc == 0x2F23B8u) {
        ctx->pc = 0x2F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23B4u;
        // 0x2f23b8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23BCu;
        goto label_2f23bc;
    }
    ctx->pc = 0x2F23B4u;
    SET_GPR_U32(ctx, 31, 0x2F23BCu);
    ctx->pc = 0x2F23B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23B4u;
    // 0x2f23b8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F23B4u, 0x2F23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23BCu;
label_2f23bc:
    // 0x2f23bc: 0xc0e57ce  jal         func_395F38
label_2f23c0:
    if (ctx->pc == 0x2F23C0u) {
        ctx->pc = 0x2F23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23BCu;
        // 0x2f23c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23C4u;
        goto label_2f23c4;
    }
    ctx->pc = 0x2F23BCu;
    SET_GPR_U32(ctx, 31, 0x2F23C4u);
    ctx->pc = 0x2F23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23BCu;
    // 0x2f23c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F23BCu, 0x2F23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23C4u;
label_2f23c4:
    // 0x2f23c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f23c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f23c8:
    // 0x2f23c8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2f23cc:
    if (ctx->pc == 0x2F23CCu) {
        ctx->pc = 0x2F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23C8u;
        // 0x2f23cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23D0u;
        goto label_2f23d0;
    }
    ctx->pc = 0x2F23C8u;
    {
        const bool branch_taken_0x2f23c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23C8u;
        // 0x2f23cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23c8) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F23D0u;
label_2f23d0:
    // 0x2f23d0: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2f23d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_2f23d4:
    // 0x2f23d4: 0xc0e44cc  jal         func_391330
label_2f23d8:
    if (ctx->pc == 0x2F23D8u) {
        ctx->pc = 0x2F23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23D4u;
        // 0x2f23d8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23DCu;
        goto label_2f23dc;
    }
    ctx->pc = 0x2F23D4u;
    SET_GPR_U32(ctx, 31, 0x2F23DCu);
    ctx->pc = 0x2F23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23D4u;
    // 0x2f23d8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2F23D4u, 0x2F23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23DCu;
label_2f23dc:
    // 0x2f23dc: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2f23dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_2f23e0:
    // 0x2f23e0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2f23e4:
    // 0x2f23e4: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_2f23e8:
    if (ctx->pc == 0x2F23E8u) {
        ctx->pc = 0x2F23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23E4u;
        // 0x2f23e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23ECu;
        goto label_2f23ec;
    }
    ctx->pc = 0x2F23E4u;
    {
        const bool branch_taken_0x2f23e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f23e4) {
            ctx->pc = 0x2F23E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23E4u;
            // 0x2f23e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F23ECu;
label_2f23ec:
    // 0x2f23ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f23f0:
    // 0x2f23f0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2f23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f23f4:
    // 0x2f23f4: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2f23f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2f23f8:
    // 0x2f23f8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2f23fc:
    if (ctx->pc == 0x2F23FCu) {
        ctx->pc = 0x2F23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23F8u;
        // 0x2f23fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2400u;
        goto label_2f2400;
    }
    ctx->pc = 0x2F23F8u;
    {
        const bool branch_taken_0x2f23f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23f8) {
            ctx->pc = 0x2F23FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23F8u;
            // 0x2f23fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F2400u;
label_2f2400:
    // 0x2f2400: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f2400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f2404:
    // 0x2f2404: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f2404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f2408:
    // 0x2f2408: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f240c:
    // 0x2f240c: 0x40f809  jalr        $v0
label_2f2410:
    if (ctx->pc == 0x2F2410u) {
        ctx->pc = 0x2F2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F240Cu;
        // 0x2f2410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2414u;
        goto label_2f2414;
    }
    ctx->pc = 0x2F240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2414u);
        ctx->pc = 0x2F2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F240Cu;
        // 0x2f2410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F240Cu, 0x2F2414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2414u;
label_2f2414:
    // 0x2f2414: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2f2414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f2418:
    // 0x2f2418: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2f241c:
    if (ctx->pc == 0x2F241Cu) {
        ctx->pc = 0x2F241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2418u;
        // 0x2f241c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2420u;
        goto label_2f2420;
    }
    ctx->pc = 0x2F2418u;
    {
        const bool branch_taken_0x2f2418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f2418) {
            ctx->pc = 0x2F241Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2418u;
            // 0x2f241c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F2420u;
label_2f2420:
    // 0x2f2420: 0xc0c3232  jal         func_30C8C8
label_2f2424:
    if (ctx->pc == 0x2F2424u) {
        ctx->pc = 0x2F2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2420u;
        // 0x2f2424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2428u;
        goto label_2f2428;
    }
    ctx->pc = 0x2F2420u;
    SET_GPR_U32(ctx, 31, 0x2F2428u);
    ctx->pc = 0x2F2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2420u;
    // 0x2f2424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8C8u, 0x2F2420u, 0x2F2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2428u;
label_2f2428:
    // 0x2f2428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f2428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f242c:
    // 0x2f242c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2430:
    // 0x2f2430: 0x3e00008  jr          $ra
label_2f2434:
    if (ctx->pc == 0x2F2434u) {
        ctx->pc = 0x2F2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2430u;
        // 0x2f2434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2438u;
        goto label_fallthrough_0x2f2430;
    }
    ctx->pc = 0x2F2430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2430u;
        // 0x2f2434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2430:
    ctx->pc = 0x2F2438u;
}
