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

// Function: sub_00466790
// Address: 0x466790 - 0x466a78
void sub_00466790_0x466790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466790_0x466790");
#endif

    switch (ctx->pc) {
        case 0x4667c0u: goto label_4667c0;
        case 0x4667d8u: goto label_4667d8;
        case 0x466800u: goto label_466800;
        case 0x466810u: goto label_466810;
        case 0x466824u: goto label_466824;
        case 0x466838u: goto label_466838;
        case 0x466840u: goto label_466840;
        case 0x466858u: goto label_466858;
        case 0x466860u: goto label_466860;
        case 0x46687cu: goto label_46687c;
        case 0x4668c0u: goto label_4668c0;
        case 0x466900u: goto label_466900;
        case 0x466968u: goto label_466968;
        case 0x466988u: goto label_466988;
        case 0x4669d0u: goto label_4669d0;
        case 0x466a34u: goto label_466a34;
        case 0x466a44u: goto label_466a44;
        default: break;
    }

    ctx->pc = 0x466790u;

    // 0x466790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x466790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x466794: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x466794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x466798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46679c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x46679cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4667a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4667a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4667a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4667a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4667ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4667acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4667b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4667b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4667b4: 0x8cd40018  lw          $s4, 0x18($a2)
    ctx->pc = 0x4667b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4667b8: 0xc119b0e  jal         func_466C38
    ctx->pc = 0x4667B8u;
    SET_GPR_U32(ctx, 31, 0x4667C0u);
    ctx->pc = 0x4667BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4667B8u;
    // 0x4667bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466C38u, 0x4667B8u, 0x4667C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4667C0u;
label_4667c0:
    // 0x4667c0: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x4667C0u;
    {
        const bool branch_taken_0x4667c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4667C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4667C0u;
        // 0x4667c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4667c0) {
            ctx->pc = 0x466A3Cu;
            goto label_466a3c;
        }
    }
    ctx->pc = 0x4667C8u;
    // 0x4667c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4667c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4667ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667d0: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x4667D0u;
    SET_GPR_U32(ctx, 31, 0x4667D8u);
    ctx->pc = 0x4667D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4667D0u;
    // 0x4667d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4667D0u, 0x4667D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4667D8u;
label_4667d8:
    // 0x4667d8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4667D8u;
    {
        const bool branch_taken_0x4667d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4667DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4667D8u;
        // 0x4667dc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4667d8) {
            ctx->pc = 0x466840u;
            goto label_466840;
        }
    }
    ctx->pc = 0x4667E0u;
    // 0x4667e0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4667e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4667e4: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x4667e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4667e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4667e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4667ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4667f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4667f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4667f8: 0xc11985a  jal         func_466168
    ctx->pc = 0x4667F8u;
    SET_GPR_U32(ctx, 31, 0x466800u);
    ctx->pc = 0x4667FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4667F8u;
    // 0x4667fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466168u, 0x4667F8u, 0x466800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466800u;
label_466800:
    // 0x466800: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x466800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x466804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466808: 0xc11fc30  jal         func_47F0C0
    ctx->pc = 0x466808u;
    SET_GPR_U32(ctx, 31, 0x466810u);
    ctx->pc = 0x46680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466808u;
    // 0x46680c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x466808u, 0x466810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466810u;
label_466810:
    // 0x466810: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x466810u;
    {
        const bool branch_taken_0x466810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466810u;
        // 0x466814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466810) {
            ctx->pc = 0x466840u;
            goto label_466840;
        }
    }
    ctx->pc = 0x466818u;
    // 0x466818: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x466818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x46681c: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x46681Cu;
    SET_GPR_U32(ctx, 31, 0x466824u);
    ctx->pc = 0x466820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46681Cu;
    // 0x466820: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46681Cu, 0x466824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466824u;
label_466824:
    // 0x466824: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x466824u;
    {
        const bool branch_taken_0x466824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466824u;
        // 0x466828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466824) {
            ctx->pc = 0x466840u;
            goto label_466840;
        }
    }
    ctx->pc = 0x46682Cu;
    // 0x46682c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x46682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x466830: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x466830u;
    SET_GPR_U32(ctx, 31, 0x466838u);
    ctx->pc = 0x466834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466830u;
    // 0x466834: 0x123100  sll         $a2, $s2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x466830u, 0x466838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466838u;
label_466838:
    // 0x466838: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x466838u;
    {
        const bool branch_taken_0x466838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466838) {
            ctx->pc = 0x46683Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466838u;
            // 0x46683c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466848u;
            goto label_466848;
        }
    }
    ctx->pc = 0x466840u;
label_466840:
    // 0x466840: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x466840u;
    {
        const bool branch_taken_0x466840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466840u;
        // 0x466844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466840) {
            ctx->pc = 0x466A58u;
            goto label_466a58;
        }
    }
    ctx->pc = 0x466848u;
label_466848:
    // 0x466848: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x466848u;
    {
        const bool branch_taken_0x466848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466848u;
        // 0x46684c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466848) {
            ctx->pc = 0x466898u;
            goto label_466898;
        }
    }
    ctx->pc = 0x466850u;
    // 0x466850: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x466850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466854: 0x0  nop
    ctx->pc = 0x466854u;
    // NOP
label_466858:
    // 0x466858: 0xc11fc30  jal         func_47F0C0
    ctx->pc = 0x466858u;
    SET_GPR_U32(ctx, 31, 0x466860u);
    ctx->pc = 0x46685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466858u;
    // 0x46685c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x466858u, 0x466860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466860u;
label_466860:
    // 0x466860: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x466860u;
    {
        const bool branch_taken_0x466860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466860u;
        // 0x466864: 0x102980  sll         $a1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466860) {
            ctx->pc = 0x466840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466840;
        }
    }
    ctx->pc = 0x466868u;
    // 0x466868: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x466868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x46686c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466870: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x466870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x466874: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x466874u;
    SET_GPR_U32(ctx, 31, 0x46687Cu);
    ctx->pc = 0x466878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466874u;
    // 0x466878: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x466874u, 0x46687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46687Cu;
label_46687c:
    // 0x46687c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x46687Cu;
    {
        const bool branch_taken_0x46687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46687Cu;
        // 0x466880: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46687c) {
            ctx->pc = 0x466840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466840;
        }
    }
    ctx->pc = 0x466884u;
    // 0x466884: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x466884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x466888: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x466888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46688c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x46688Cu;
    {
        const bool branch_taken_0x46688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46688Cu;
        // 0x466890: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46688c) {
            ctx->pc = 0x466858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466858;
        }
    }
    ctx->pc = 0x466894u;
    // 0x466894: 0x0  nop
    ctx->pc = 0x466894u;
    // NOP
label_466898:
    // 0x466898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46689c: 0x8e290018  lw          $t1, 0x18($s1)
    ctx->pc = 0x46689cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4668a0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4668a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4668a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4668a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4668a8: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x4668A8u;
    {
        const bool branch_taken_0x4668a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4668ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4668A8u;
        // 0x4668ac: 0x262a0004  addiu       $t2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4668a8) {
            ctx->pc = 0x466948u;
            goto label_466948;
        }
    }
    ctx->pc = 0x4668B0u;
    // 0x4668b0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4668b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4668b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4668b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4668b8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4668b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4668bc: 0x0  nop
    ctx->pc = 0x4668bcu;
    // NOP
label_4668c0:
    // 0x4668c0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4668c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4668c4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x4668c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4668c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4668C8u;
    {
        const bool branch_taken_0x4668c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4668C8u;
        // 0x4668cc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4668c8) {
            ctx->pc = 0x466934u;
            goto label_466934;
        }
    }
    ctx->pc = 0x4668D0u;
    // 0x4668d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4668d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4668d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4668d8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4668D8u;
    {
        const bool branch_taken_0x4668d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4668DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4668D8u;
        // 0x4668dc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4668d8) {
            ctx->pc = 0x466934u;
            goto label_466934;
        }
    }
    ctx->pc = 0x4668E0u;
    // 0x4668e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4668e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4668e4: 0x108b0018  beq         $a0, $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4668E4u;
    {
        const bool branch_taken_0x4668e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 11));
        ctx->pc = 0x4668E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4668E4u;
        // 0x4668e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4668e4) {
            ctx->pc = 0x466948u;
            goto label_466948;
        }
    }
    ctx->pc = 0x4668ECu;
    // 0x4668ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4668ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4668f0: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x4668f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4668f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4668f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4668f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4668f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4668fc: 0x0  nop
    ctx->pc = 0x4668fcu;
    // NOP
label_466900:
    // 0x466900: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x466900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x466904: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x466904u;
    {
        const bool branch_taken_0x466904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466904) {
            ctx->pc = 0x466908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466904u;
            // 0x466908: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466938u;
            goto label_466938;
        }
    }
    ctx->pc = 0x46690Cu;
    // 0x46690c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x466910: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x466910u;
    {
        const bool branch_taken_0x466910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466910) {
            ctx->pc = 0x466914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466910u;
            // 0x466914: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466938u;
            goto label_466938;
        }
    }
    ctx->pc = 0x466918u;
    // 0x466918: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x466918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x46691c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x466920: 0x10460009  beq         $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x466920u;
    {
        const bool branch_taken_0x466920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x466924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466920u;
        // 0x466924: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466920) {
            ctx->pc = 0x466948u;
            goto label_466948;
        }
    }
    ctx->pc = 0x466928u;
    // 0x466928: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x466928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46692c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x46692Cu;
    {
        const bool branch_taken_0x46692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46692Cu;
        // 0x466930: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46692c) {
            ctx->pc = 0x466900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466900;
        }
    }
    ctx->pc = 0x466934u;
label_466934:
    // 0x466934: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x466934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_466938:
    // 0x466938: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x466938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x46693c: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x46693cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x466940: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x466940u;
    {
        const bool branch_taken_0x466940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466940u;
        // 0x466944: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466940) {
            ctx->pc = 0x4668C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4668c0;
        }
    }
    ctx->pc = 0x466948u;
label_466948:
    // 0x466948: 0x8e2f0014  lw          $t7, 0x14($s1)
    ctx->pc = 0x466948u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x46694c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466950: 0x8e2e0018  lw          $t6, 0x18($s1)
    ctx->pc = 0x466950u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x466954: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x466954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x466958: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x466958u;
    {
        const bool branch_taken_0x466958 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466958u;
        // 0x46695c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466958) {
            ctx->pc = 0x466A28u;
            goto label_466a28;
        }
    }
    ctx->pc = 0x466960u;
    // 0x466960: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x466960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x466964: 0x0  nop
    ctx->pc = 0x466964u;
    // NOP
label_466968:
    // 0x466968: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x466968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46696c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x46696Cu;
    {
        const bool branch_taken_0x46696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46696Cu;
        // 0x466970: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46696c) {
            ctx->pc = 0x466A18u;
            goto label_466a18;
        }
    }
    ctx->pc = 0x466974u;
    // 0x466974: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x466974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x466978: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x466978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x46697c: 0x4e6021  addu        $t4, $v0, $t6
    ctx->pc = 0x46697cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x466980: 0x6f5821  addu        $t3, $v1, $t7
    ctx->pc = 0x466980u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x466984: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x466984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_466988:
    // 0x466988: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x466988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x46698c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x466990: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x466990u;
    {
        const bool branch_taken_0x466990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466990u;
        // 0x466994: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466990) {
            ctx->pc = 0x466A04u;
            goto label_466a04;
        }
    }
    ctx->pc = 0x466998u;
    // 0x466998: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x466998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x46699c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x46699cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4669a0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4669a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4669a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4669a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4669a8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x4669a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4669ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4669acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4669b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4669b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4669b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4669B4u;
    {
        const bool branch_taken_0x4669b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4669B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4669B4u;
        // 0x4669b8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4669b4) {
            ctx->pc = 0x4669ECu;
            goto label_4669ec;
        }
    }
    ctx->pc = 0x4669BCu;
    // 0x4669bc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4669bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4669c0: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4669C0u;
    {
        const bool branch_taken_0x4669c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4669c0) {
            ctx->pc = 0x4669C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4669C0u;
            // 0x4669c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4669ECu;
            goto label_4669ec;
        }
    }
    ctx->pc = 0x4669C8u;
    // 0x4669c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4669c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4669cc: 0x0  nop
    ctx->pc = 0x4669ccu;
    // NOP
label_4669d0:
    // 0x4669d0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x4669d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4669d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4669D4u;
    {
        const bool branch_taken_0x4669d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4669D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4669D4u;
        // 0x4669d8: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4669d4) {
            ctx->pc = 0x4669ECu;
            goto label_4669ec;
        }
    }
    ctx->pc = 0x4669DCu;
    // 0x4669dc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4669dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4669e0: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4669E0u;
    {
        const bool branch_taken_0x4669e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4669e0) {
            ctx->pc = 0x4669E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4669E0u;
            // 0x4669e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4669D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4669d0;
        }
    }
    ctx->pc = 0x4669E8u;
    // 0x4669e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4669e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4669ec:
    // 0x4669ec: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4669ECu;
    {
        const bool branch_taken_0x4669ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4669F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4669ECu;
        // 0x4669f0: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4669ec) {
            ctx->pc = 0x466A04u;
            goto label_466a04;
        }
    }
    ctx->pc = 0x4669F4u;
    // 0x4669f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x4669f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4669f8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4669f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4669fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4669fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x466a00: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x466a00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_466a04:
    // 0x466a04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x466a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x466a08: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x466a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a0c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x466a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x466a10: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x466A10u;
    {
        const bool branch_taken_0x466a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466A10u;
        // 0x466a14: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a10) {
            ctx->pc = 0x466988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466988;
        }
    }
    ctx->pc = 0x466A18u;
label_466a18:
    // 0x466a18: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x466a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a1c: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x466a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x466a20: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x466A20u;
    {
        const bool branch_taken_0x466a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466a20) {
            ctx->pc = 0x466A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466A20u;
            // 0x466a24: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466968;
        }
    }
    ctx->pc = 0x466A28u;
label_466a28:
    // 0x466a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x466a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a2c: 0xc119aec  jal         func_466BB0
    ctx->pc = 0x466A2Cu;
    SET_GPR_U32(ctx, 31, 0x466A34u);
    ctx->pc = 0x466A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466A2Cu;
    // 0x466a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466BB0u, 0x466A2Cu, 0x466A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466A34u;
label_466a34:
    // 0x466a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x466A34u;
    {
        const bool branch_taken_0x466a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466A34u;
        // 0x466a38: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a34) {
            ctx->pc = 0x466A58u;
            goto label_466a58;
        }
    }
    ctx->pc = 0x466A3Cu;
label_466a3c:
    // 0x466a3c: 0xc11fc30  jal         func_47F0C0
    ctx->pc = 0x466A3Cu;
    SET_GPR_U32(ctx, 31, 0x466A44u);
    ctx->pc = 0x466A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466A3Cu;
    // 0x466a40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x466A3Cu, 0x466A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466A44u;
label_466a44:
    // 0x466a44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x466a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x466A48u;
    {
        const bool branch_taken_0x466a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466A48u;
        // 0x466a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a48) {
            ctx->pc = 0x466A58u;
            goto label_466a58;
        }
    }
    ctx->pc = 0x466A50u;
    // 0x466a50: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x466a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a54: 0x0  nop
    ctx->pc = 0x466a54u;
    // NOP
label_466a58:
    // 0x466a58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x466a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x466a5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x466a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x466a60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x466a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x466a64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x466a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466a68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x466a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x466a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466a70: 0x3e00008  jr          $ra
    ctx->pc = 0x466A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466A70u;
        // 0x466a74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466A78u;
}
