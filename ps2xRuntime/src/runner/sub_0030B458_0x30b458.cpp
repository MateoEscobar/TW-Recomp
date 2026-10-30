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

// Function: sub_0030B458
// Address: 0x30b458 - 0x30b520
void sub_0030B458_0x30b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B458_0x30b458");
#endif

    switch (ctx->pc) {
        case 0x30b458u: goto label_30b458;
        case 0x30b45cu: goto label_30b45c;
        case 0x30b460u: goto label_30b460;
        case 0x30b464u: goto label_30b464;
        case 0x30b468u: goto label_30b468;
        case 0x30b46cu: goto label_30b46c;
        case 0x30b470u: goto label_30b470;
        case 0x30b474u: goto label_30b474;
        case 0x30b478u: goto label_30b478;
        case 0x30b47cu: goto label_30b47c;
        case 0x30b480u: goto label_30b480;
        case 0x30b484u: goto label_30b484;
        case 0x30b488u: goto label_30b488;
        case 0x30b48cu: goto label_30b48c;
        case 0x30b490u: goto label_30b490;
        case 0x30b494u: goto label_30b494;
        case 0x30b498u: goto label_30b498;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4a0u: goto label_30b4a0;
        case 0x30b4a4u: goto label_30b4a4;
        case 0x30b4a8u: goto label_30b4a8;
        case 0x30b4acu: goto label_30b4ac;
        case 0x30b4b0u: goto label_30b4b0;
        case 0x30b4b4u: goto label_30b4b4;
        case 0x30b4b8u: goto label_30b4b8;
        case 0x30b4bcu: goto label_30b4bc;
        case 0x30b4c0u: goto label_30b4c0;
        case 0x30b4c4u: goto label_30b4c4;
        case 0x30b4c8u: goto label_30b4c8;
        case 0x30b4ccu: goto label_30b4cc;
        case 0x30b4d0u: goto label_30b4d0;
        case 0x30b4d4u: goto label_30b4d4;
        case 0x30b4d8u: goto label_30b4d8;
        case 0x30b4dcu: goto label_30b4dc;
        case 0x30b4e0u: goto label_30b4e0;
        case 0x30b4e4u: goto label_30b4e4;
        case 0x30b4e8u: goto label_30b4e8;
        case 0x30b4ecu: goto label_30b4ec;
        case 0x30b4f0u: goto label_30b4f0;
        case 0x30b4f4u: goto label_30b4f4;
        case 0x30b4f8u: goto label_30b4f8;
        case 0x30b4fcu: goto label_30b4fc;
        case 0x30b500u: goto label_30b500;
        case 0x30b504u: goto label_30b504;
        case 0x30b508u: goto label_30b508;
        case 0x30b50cu: goto label_30b50c;
        case 0x30b510u: goto label_30b510;
        case 0x30b514u: goto label_30b514;
        case 0x30b518u: goto label_30b518;
        case 0x30b51cu: goto label_30b51c;
        default: break;
    }

    ctx->pc = 0x30b458u;

label_30b458:
    // 0x30b458: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30b458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30b45c:
    // 0x30b45c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_30b460:
    // 0x30b460: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_30b464:
    // 0x30b464: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30b464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b468:
    // 0x30b468: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_30b46c:
    // 0x30b46c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30b46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b470:
    // 0x30b470: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_30b474:
    // 0x30b474: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30b474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_30b478:
    // 0x30b478: 0x24140085  addiu       $s4, $zero, 0x85
    ctx->pc = 0x30b478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_30b47c:
    // 0x30b47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30b480:
    // 0x30b480: 0xa2450020  sb          $a1, 0x20($s2)
    ctx->pc = 0x30b480u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 5));
label_30b484:
    // 0x30b484: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30b488:
    // 0x30b488: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x30b488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_30b48c:
    // 0x30b48c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30b48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b490:
    // 0x30b490: 0xc137826  jal         func_4DE098
label_30b494:
    if (ctx->pc == 0x30B494u) {
        ctx->pc = 0x30B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B490u;
        // 0x30b494: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B498u;
        goto label_30b498;
    }
    ctx->pc = 0x30B490u;
    SET_GPR_U32(ctx, 31, 0x30B498u);
    ctx->pc = 0x30B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B490u;
    // 0x30b494: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30B490u, 0x30B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B498u;
label_30b498:
    // 0x30b498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30b498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30b49c:
    // 0x30b49c: 0xc0e409a  jal         func_390268
label_30b4a0:
    if (ctx->pc == 0x30B4A0u) {
        ctx->pc = 0x30B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B49Cu;
        // 0x30b4a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4A4u;
        goto label_30b4a4;
    }
    ctx->pc = 0x30B49Cu;
    SET_GPR_U32(ctx, 31, 0x30B4A4u);
    ctx->pc = 0x30B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B49Cu;
    // 0x30b4a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30B49Cu, 0x30B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4A4u;
label_30b4a4:
    // 0x30b4a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_30b4a8:
    if (ctx->pc == 0x30B4A8u) {
        ctx->pc = 0x30B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4A4u;
        // 0x30b4a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4ACu;
        goto label_30b4ac;
    }
    ctx->pc = 0x30B4A4u;
    {
        const bool branch_taken_0x30b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4A4u;
        // 0x30b4a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4a4) {
            ctx->pc = 0x30B4F4u;
            goto label_30b4f4;
        }
    }
    ctx->pc = 0x30B4ACu;
label_30b4ac:
    // 0x30b4ac: 0xc087502  jal         func_21D408
label_30b4b0:
    if (ctx->pc == 0x30B4B0u) {
        ctx->pc = 0x30B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4ACu;
        // 0x30b4b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4B4u;
        goto label_30b4b4;
    }
    ctx->pc = 0x30B4ACu;
    SET_GPR_U32(ctx, 31, 0x30B4B4u);
    ctx->pc = 0x30B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4ACu;
    // 0x30b4b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30B4ACu, 0x30B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4B4u;
label_30b4b4:
    // 0x30b4b4: 0x8044002c  lb          $a0, 0x2C($v0)
    ctx->pc = 0x30b4b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_30b4b8:
    // 0x30b4b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30b4bc:
    // 0x30b4bc: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_30b4c0:
    if (ctx->pc == 0x30B4C0u) {
        ctx->pc = 0x30B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4BCu;
        // 0x30b4c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4C4u;
        goto label_30b4c4;
    }
    ctx->pc = 0x30B4BCu;
    {
        const bool branch_taken_0x30b4bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x30B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4BCu;
        // 0x30b4c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4bc) {
            ctx->pc = 0x30B4C8u;
            goto label_30b4c8;
        }
    }
    ctx->pc = 0x30B4C4u;
label_30b4c4:
    // 0x30b4c4: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x30b4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_30b4c8:
    // 0x30b4c8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_30b4cc:
    if (ctx->pc == 0x30B4CCu) {
        ctx->pc = 0x30B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4C8u;
        // 0x30b4cc: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4D0u;
        goto label_30b4d0;
    }
    ctx->pc = 0x30B4C8u;
    {
        const bool branch_taken_0x30b4c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4C8u;
        // 0x30b4cc: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4c8) {
            ctx->pc = 0x30B4F8u;
            goto label_30b4f8;
        }
    }
    ctx->pc = 0x30B4D0u;
label_30b4d0:
    // 0x30b4d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30b4d4:
    // 0x30b4d4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30b4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30b4d8:
    // 0x30b4d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30b4dc:
    // 0x30b4dc: 0x40f809  jalr        $v0
label_30b4e0:
    if (ctx->pc == 0x30B4E0u) {
        ctx->pc = 0x30B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4DCu;
        // 0x30b4e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4E4u;
        goto label_30b4e4;
    }
    ctx->pc = 0x30B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B4E4u);
        ctx->pc = 0x30B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4DCu;
        // 0x30b4e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B4DCu, 0x30B4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B4E4u;
label_30b4e4:
    // 0x30b4e4: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_30b4e8:
    if (ctx->pc == 0x30B4E8u) {
        ctx->pc = 0x30B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4E4u;
        // 0x30b4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4ECu;
        goto label_30b4ec;
    }
    ctx->pc = 0x30B4E4u;
    {
        const bool branch_taken_0x30b4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x30B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4E4u;
        // 0x30b4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4e4) {
            ctx->pc = 0x30B4F4u;
            goto label_30b4f4;
        }
    }
    ctx->pc = 0x30B4ECu;
label_30b4ec:
    // 0x30b4ec: 0xc0ba80e  jal         func_2EA038
label_30b4f0:
    if (ctx->pc == 0x30B4F0u) {
        ctx->pc = 0x30B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4ECu;
        // 0x30b4f0: 0x92450020  lbu         $a1, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4F4u;
        goto label_30b4f4;
    }
    ctx->pc = 0x30B4ECu;
    SET_GPR_U32(ctx, 31, 0x30B4F4u);
    ctx->pc = 0x30B4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4ECu;
    // 0x30b4f0: 0x92450020  lbu         $a1, 0x20($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA038u, 0x30B4ECu, 0x30B4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4F4u;
label_30b4f4:
    // 0x30b4f4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x30b4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30b4f8:
    // 0x30b4f8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_30b4fc:
    if (ctx->pc == 0x30B4FCu) {
        ctx->pc = 0x30B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4F8u;
        // 0x30b4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B500u;
        goto label_30b500;
    }
    ctx->pc = 0x30B4F8u;
    {
        const bool branch_taken_0x30b4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b4f8) {
            ctx->pc = 0x30B4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B4F8u;
            // 0x30b4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b490;
        }
    }
    ctx->pc = 0x30B500u;
label_30b500:
    // 0x30b500: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30b500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30b504:
    // 0x30b504: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30b504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b508:
    // 0x30b508: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30b508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b50c:
    // 0x30b50c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30b50cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b510:
    // 0x30b510: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30b510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b514:
    // 0x30b514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b518:
    // 0x30b518: 0x3e00008  jr          $ra
label_30b51c:
    if (ctx->pc == 0x30B51Cu) {
        ctx->pc = 0x30B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B518u;
        // 0x30b51c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B520u;
        goto label_fallthrough_0x30b518;
    }
    ctx->pc = 0x30B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B518u;
        // 0x30b51c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30b518:
    ctx->pc = 0x30B520u;
}
