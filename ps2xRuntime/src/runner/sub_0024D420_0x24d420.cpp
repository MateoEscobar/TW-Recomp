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

// Function: sub_0024D420
// Address: 0x24d420 - 0x24d530
void sub_0024D420_0x24d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D420_0x24d420");
#endif

    switch (ctx->pc) {
        case 0x24d458u: goto label_24d458;
        case 0x24d468u: goto label_24d468;
        case 0x24d470u: goto label_24d470;
        case 0x24d478u: goto label_24d478;
        case 0x24d48cu: goto label_24d48c;
        case 0x24d498u: goto label_24d498;
        case 0x24d4a8u: goto label_24d4a8;
        case 0x24d4b0u: goto label_24d4b0;
        case 0x24d4b8u: goto label_24d4b8;
        case 0x24d4c0u: goto label_24d4c0;
        case 0x24d4d4u: goto label_24d4d4;
        case 0x24d4e0u: goto label_24d4e0;
        case 0x24d4f0u: goto label_24d4f0;
        case 0x24d4f8u: goto label_24d4f8;
        default: break;
    }

    ctx->pc = 0x24d420u;

    // 0x24d420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24d424: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x24d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x24d428: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x24d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x24d42c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x24d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x24d430: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x24d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x24d434: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24d438: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x24d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x24d43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d440: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x24d444: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24d444u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24d448: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24D448u;
    {
        const bool branch_taken_0x24d448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D448u;
        // 0x24d44c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d448) {
            ctx->pc = 0x24D50Cu;
            goto label_24d50c;
        }
    }
    ctx->pc = 0x24D450u;
    // 0x24d450: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x24D450u;
    SET_GPR_U32(ctx, 31, 0x24D458u);
    ctx->pc = 0x24D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D450u;
    // 0x24d454: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x24D450u, 0x24D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D458u;
label_24d458:
    // 0x24d458: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x24d458u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x24d45c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24d45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d460: 0x24520008  addiu       $s2, $v0, 0x8
    ctx->pc = 0x24d460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x24d464: 0x0  nop
    ctx->pc = 0x24d464u;
    // NOP
label_24d468:
    // 0x24d468: 0xc0e4060  jal         func_390180
    ctx->pc = 0x24D468u;
    SET_GPR_U32(ctx, 31, 0x24D470u);
    ctx->pc = 0x24D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D468u;
    // 0x24d46c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24D468u, 0x24D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D470u;
label_24d470:
    // 0x24d470: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x24D470u;
    SET_GPR_U32(ctx, 31, 0x24D478u);
    ctx->pc = 0x24D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D470u;
    // 0x24d474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D470u, 0x24D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D478u;
label_24d478:
    // 0x24d478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d47c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D47Cu;
    {
        const bool branch_taken_0x24d47c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d47c) {
            ctx->pc = 0x24D4B0u;
            goto label_24d4b0;
        }
    }
    ctx->pc = 0x24D484u;
    // 0x24d484: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x24D484u;
    SET_GPR_U32(ctx, 31, 0x24D48Cu);
    ctx->pc = 0x24D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D484u;
    // 0x24d488: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24D484u, 0x24D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D48Cu;
label_24d48c:
    // 0x24d48c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x24d490: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x24D490u;
    SET_GPR_U32(ctx, 31, 0x24D498u);
    ctx->pc = 0x24D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D490u;
    // 0x24d494: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24D490u, 0x24D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D498u;
label_24d498:
    // 0x24d498: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x24d49c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4a0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x24D4A0u;
    SET_GPR_U32(ctx, 31, 0x24D4A8u);
    ctx->pc = 0x24D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4A0u;
    // 0x24d4a4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x24D4A0u, 0x24D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4A8u;
label_24d4a8:
    // 0x24d4a8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x24D4A8u;
    SET_GPR_U32(ctx, 31, 0x24D4B0u);
    ctx->pc = 0x24D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4A8u;
    // 0x24d4ac: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24D4A8u, 0x24D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4B0u;
label_24d4b0:
    // 0x24d4b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x24D4B0u;
    SET_GPR_U32(ctx, 31, 0x24D4B8u);
    ctx->pc = 0x24D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4B0u;
    // 0x24d4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24D4B0u, 0x24D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4B8u;
label_24d4b8:
    // 0x24d4b8: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x24D4B8u;
    SET_GPR_U32(ctx, 31, 0x24D4C0u);
    ctx->pc = 0x24D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4B8u;
    // 0x24d4bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D4B8u, 0x24D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4C0u;
label_24d4c0:
    // 0x24d4c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4c4: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24D4C4u;
    {
        const bool branch_taken_0x24d4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d4c4) {
            ctx->pc = 0x24D4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D4C4u;
            // 0x24d4c8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D4FCu;
            goto label_24d4fc;
        }
    }
    ctx->pc = 0x24D4CCu;
    // 0x24d4cc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x24D4CCu;
    SET_GPR_U32(ctx, 31, 0x24D4D4u);
    ctx->pc = 0x24D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4CCu;
    // 0x24d4d0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24D4CCu, 0x24D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4D4u;
label_24d4d4:
    // 0x24d4d4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x24d4d8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x24D4D8u;
    SET_GPR_U32(ctx, 31, 0x24D4E0u);
    ctx->pc = 0x24D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4D8u;
    // 0x24d4dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24D4D8u, 0x24D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4E0u;
label_24d4e0:
    // 0x24d4e0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x24d4e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4e8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x24D4E8u;
    SET_GPR_U32(ctx, 31, 0x24D4F0u);
    ctx->pc = 0x24D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4E8u;
    // 0x24d4ec: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x24D4E8u, 0x24D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4F0u;
label_24d4f0:
    // 0x24d4f0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x24D4F0u;
    SET_GPR_U32(ctx, 31, 0x24D4F8u);
    ctx->pc = 0x24D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4F0u;
    // 0x24d4f4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24D4F0u, 0x24D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4F8u;
label_24d4f8:
    // 0x24d4f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24d4f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24d4fc:
    // 0x24d4fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x24d4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x24d500: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x24d500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d504: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x24D504u;
    {
        const bool branch_taken_0x24d504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D504u;
        // 0x24d508: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d504) {
            ctx->pc = 0x24D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d468;
        }
    }
    ctx->pc = 0x24D50Cu;
label_24d50c:
    // 0x24d50c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x24d50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d510: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x24d510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d514: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x24d514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d51c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x24d51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d520: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x24d520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d528: 0x3e00008  jr          $ra
    ctx->pc = 0x24D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D528u;
        // 0x24d52c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D530u;
}
