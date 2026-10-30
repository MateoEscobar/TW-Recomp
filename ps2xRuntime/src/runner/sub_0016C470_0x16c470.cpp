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

// Function: sub_0016C470
// Address: 0x16c470 - 0x16c5b8
void sub_0016C470_0x16c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C470_0x16c470");
#endif

    switch (ctx->pc) {
        case 0x16c4a4u: goto label_16c4a4;
        case 0x16c4c4u: goto label_16c4c4;
        case 0x16c4d4u: goto label_16c4d4;
        case 0x16c4dcu: goto label_16c4dc;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c520u: goto label_16c520;
        case 0x16c538u: goto label_16c538;
        case 0x16c54cu: goto label_16c54c;
        case 0x16c558u: goto label_16c558;
        case 0x16c564u: goto label_16c564;
        case 0x16c588u: goto label_16c588;
        case 0x16c594u: goto label_16c594;
        default: break;
    }

    ctx->pc = 0x16c470u;

    // 0x16c470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16c474: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16c474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16c478: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16c47c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16c480: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16c484: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16c484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c488: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16c48c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16c490: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16c494: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16c498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c49c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C49Cu;
    SET_GPR_U32(ctx, 31, 0x16C4A4u);
    ctx->pc = 0x16C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C49Cu;
    // 0x16c4a0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C49Cu, 0x16C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4A4u;
label_16c4a4:
    // 0x16c4a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16c4a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4a8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x16c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x16c4ac: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x16C4ACu;
    {
        const bool branch_taken_0x16c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4ACu;
        // 0x16c4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4ac) {
            ctx->pc = 0x16C594u;
            goto label_16c594;
        }
    }
    ctx->pc = 0x16C4B4u;
    // 0x16c4b4: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C4B4u;
    {
        const bool branch_taken_0x16c4b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c4b4) {
            ctx->pc = 0x16C4C4u;
            goto label_16c4c4;
        }
    }
    ctx->pc = 0x16C4BCu;
    // 0x16c4bc: 0xc05a6c0  jal         func_169B00
    ctx->pc = 0x16C4BCu;
    SET_GPR_U32(ctx, 31, 0x16C4C4u);
    ctx->pc = 0x16C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4BCu;
    // 0x16c4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B00u, 0x16C4BCu, 0x16C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4C4u;
label_16c4c4:
    // 0x16c4c4: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C4C4u;
    {
        const bool branch_taken_0x16c4c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4C4u;
        // 0x16c4c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4c4) {
            ctx->pc = 0x16C4D8u;
            goto label_16c4d8;
        }
    }
    ctx->pc = 0x16C4CCu;
    // 0x16c4cc: 0xc05a732  jal         func_169CC8
    ctx->pc = 0x16C4CCu;
    SET_GPR_U32(ctx, 31, 0x16C4D4u);
    ctx->pc = 0x16C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4CCu;
    // 0x16c4d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CC8u, 0x16C4CCu, 0x16C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4D4u;
label_16c4d4:
    // 0x16c4d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c4d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c4d8:
    // 0x16c4d8: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x16c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_16c4dc:
    // 0x16c4dc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C4DCu;
    SET_GPR_U32(ctx, 31, 0x16C4E4u);
    ctx->pc = 0x16C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4DCu;
    // 0x16c4e0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C4DCu, 0x16C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4E4u;
label_16c4e4:
    // 0x16c4e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c4ec: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x16C4ECu;
    {
        const bool branch_taken_0x16c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c4ec) {
            ctx->pc = 0x16C4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C4ECu;
            // 0x16c4f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C568u;
            goto label_16c568;
        }
    }
    ctx->pc = 0x16C4F4u;
    // 0x16c4f4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16c4f8: 0x5455001b  bnel        $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x16C4F8u;
    {
        const bool branch_taken_0x16c4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x16c4f8) {
            ctx->pc = 0x16C4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C4F8u;
            // 0x16c4fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C568u;
            goto label_16c568;
        }
    }
    ctx->pc = 0x16C500u;
    // 0x16c500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c504: 0xc05a3d6  jal         func_168F58
    ctx->pc = 0x16C504u;
    SET_GPR_U32(ctx, 31, 0x16C50Cu);
    ctx->pc = 0x16C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C504u;
    // 0x16c508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x16C504u, 0x16C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C50Cu;
label_16c50c:
    // 0x16c50c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c510: 0x10510014  beq         $v0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16C510u;
    {
        const bool branch_taken_0x16c510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x16C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C510u;
        // 0x16c514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c510) {
            ctx->pc = 0x16C564u;
            goto label_16c564;
        }
    }
    ctx->pc = 0x16C518u;
    // 0x16c518: 0xc05a3d6  jal         func_168F58
    ctx->pc = 0x16C518u;
    SET_GPR_U32(ctx, 31, 0x16C520u);
    ctx->pc = 0x16C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C518u;
    // 0x16c51c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x16C518u, 0x16C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C520u;
label_16c520:
    // 0x16c520: 0x50510011  beql        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16C520u;
    {
        const bool branch_taken_0x16c520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x16c520) {
            ctx->pc = 0x16C524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C520u;
            // 0x16c524: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C568u;
            goto label_16c568;
        }
    }
    ctx->pc = 0x16C528u;
    // 0x16c528: 0x56910004  bnel        $s4, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C528u;
    {
        const bool branch_taken_0x16c528 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        if (branch_taken_0x16c528) {
            ctx->pc = 0x16C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C528u;
            // 0x16c52c: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C53Cu;
            goto label_16c53c;
        }
    }
    ctx->pc = 0x16C530u;
    // 0x16c530: 0xc05a6c0  jal         func_169B00
    ctx->pc = 0x16C530u;
    SET_GPR_U32(ctx, 31, 0x16C538u);
    ctx->pc = 0x16C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C530u;
    // 0x16c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B00u, 0x16C530u, 0x16C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C538u;
label_16c538:
    // 0x16c538: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x16c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_16c53c:
    // 0x16c53c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C53Cu;
    {
        const bool branch_taken_0x16c53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C53Cu;
        // 0x16c540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c53c) {
            ctx->pc = 0x16C550u;
            goto label_16c550;
        }
    }
    ctx->pc = 0x16C544u;
    // 0x16c544: 0xc05a732  jal         func_169CC8
    ctx->pc = 0x16C544u;
    SET_GPR_U32(ctx, 31, 0x16C54Cu);
    ctx->pc = 0x16C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C544u;
    // 0x16c548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CC8u, 0x16C544u, 0x16C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C54Cu;
label_16c54c:
    // 0x16c54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c550:
    // 0x16c550: 0xc05a44c  jal         func_169130
    ctx->pc = 0x16C550u;
    SET_GPR_U32(ctx, 31, 0x16C558u);
    ctx->pc = 0x16C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C550u;
    // 0x16c554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x16C550u, 0x16C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C558u;
label_16c558:
    // 0x16c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c55c: 0xc05a44c  jal         func_169130
    ctx->pc = 0x16C55Cu;
    SET_GPR_U32(ctx, 31, 0x16C564u);
    ctx->pc = 0x16C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C55Cu;
    // 0x16c560: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x16C55Cu, 0x16C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C564u;
label_16c564:
    // 0x16c564: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16c564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16c568:
    // 0x16c568: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x16c568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16c56c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x16C56Cu;
    {
        const bool branch_taken_0x16c56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C56Cu;
        // 0x16c570: 0x132400  sll         $a0, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c56c) {
            ctx->pc = 0x16C4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c4dc;
        }
    }
    ctx->pc = 0x16C574u;
    // 0x16c574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c578: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C578u;
    {
        const bool branch_taken_0x16c578 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x16C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C578u;
        // 0x16c57c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c578) {
            ctx->pc = 0x16C598u;
            goto label_16c598;
        }
    }
    ctx->pc = 0x16C580u;
    // 0x16c580: 0xc05b0d6  jal         func_16C358
    ctx->pc = 0x16C580u;
    SET_GPR_U32(ctx, 31, 0x16C588u);
    ctx->pc = 0x16C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C580u;
    // 0x16c584: 0x24040bb8  addiu       $a0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C358u, 0x16C580u, 0x16C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C588u;
label_16c588:
    // 0x16c588: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16c58c: 0xc1073fc  jal         func_41CFF0
    ctx->pc = 0x16C58Cu;
    SET_GPR_U32(ctx, 31, 0x16C594u);
    ctx->pc = 0x16C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C58Cu;
    // 0x16c590: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFF0u, 0x16C58Cu, 0x16C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C594u;
label_16c594:
    // 0x16c594: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16c594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16c598:
    // 0x16c598: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16c598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c59c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16c59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c5a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c5a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c5a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16c5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c5a8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16c5a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5B0u;
        // 0x16c5b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C5B8u;
}
