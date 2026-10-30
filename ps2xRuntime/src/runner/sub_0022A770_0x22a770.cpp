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

// Function: sub_0022A770
// Address: 0x22a770 - 0x22a980
void sub_0022A770_0x22a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A770_0x22a770");
#endif

    switch (ctx->pc) {
        case 0x22a7a8u: goto label_22a7a8;
        case 0x22a7b0u: goto label_22a7b0;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7e4u: goto label_22a7e4;
        case 0x22a7f4u: goto label_22a7f4;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a858u: goto label_22a858;
        case 0x22a888u: goto label_22a888;
        case 0x22a894u: goto label_22a894;
        case 0x22a8b8u: goto label_22a8b8;
        case 0x22a8d8u: goto label_22a8d8;
        case 0x22a8e8u: goto label_22a8e8;
        case 0x22a8f8u: goto label_22a8f8;
        case 0x22a908u: goto label_22a908;
        default: break;
    }

    ctx->pc = 0x22a770u;

    // 0x22a770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22a774: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22a778: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x22a77c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a780: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a784: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22a784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a788: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x22a78c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22a78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a790: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22a794: 0x24940048  addiu       $s4, $a0, 0x48
    ctx->pc = 0x22a794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x22a798: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x22a79c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x22a79cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a7a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22a7a8:
    // 0x22a7a8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x22A7A8u;
    SET_GPR_U32(ctx, 31, 0x22A7B0u);
    ctx->pc = 0x22A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7A8u;
    // 0x22a7ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x22A7A8u, 0x22A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7B0u;
label_22a7b0:
    // 0x22a7b0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x22A7B0u;
    SET_GPR_U32(ctx, 31, 0x22A7B8u);
    ctx->pc = 0x22A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7B0u;
    // 0x22a7b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22A7B0u, 0x22A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7B8u;
label_22a7b8:
    // 0x22a7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7bc: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22A7BCu;
    {
        const bool branch_taken_0x22a7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7bc) {
            ctx->pc = 0x22A7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7BCu;
            // 0x22a7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A828u;
            goto label_22a828;
        }
    }
    ctx->pc = 0x22A7C4u;
    // 0x22a7c4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22a7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22a7c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22a7c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22a7cc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x22A7CCu;
    {
        const bool branch_taken_0x22a7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a7cc) {
            ctx->pc = 0x22A7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7CCu;
            // 0x22a7d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A828u;
            goto label_22a828;
        }
    }
    ctx->pc = 0x22A7D4u;
    // 0x22a7d4: 0x52a0000a  beql        $s5, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x22A7D4u;
    {
        const bool branch_taken_0x22a7d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7d4) {
            ctx->pc = 0x22A7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7D4u;
            // 0x22a7d8: 0x820301b1  lb          $v1, 0x1B1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A800u;
            goto label_22a800;
        }
    }
    ctx->pc = 0x22A7DCu;
    // 0x22a7dc: 0xc089f98  jal         func_227E60
    ctx->pc = 0x22A7DCu;
    SET_GPR_U32(ctx, 31, 0x22A7E4u);
    ctx->pc = 0x22A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7DCu;
    // 0x22a7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x22A7DCu, 0x22A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7E4u;
label_22a7e4:
    // 0x22a7e4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22A7E4u;
    {
        const bool branch_taken_0x22a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a7e4) {
            ctx->pc = 0x22A7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7E4u;
            // 0x22a7e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A828u;
            goto label_22a828;
        }
    }
    ctx->pc = 0x22A7ECu;
    // 0x22a7ec: 0xc088edc  jal         func_223B70
    ctx->pc = 0x22A7ECu;
    SET_GPR_U32(ctx, 31, 0x22A7F4u);
    ctx->pc = 0x22A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7ECu;
    // 0x22a7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x22A7ECu, 0x22A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7F4u;
label_22a7f4:
    // 0x22a7f4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22A7F4u;
    {
        const bool branch_taken_0x22a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a7f4) {
            ctx->pc = 0x22A7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7F4u;
            // 0x22a7f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A828u;
            goto label_22a828;
        }
    }
    ctx->pc = 0x22A7FCu;
    // 0x22a7fc: 0x820301b1  lb          $v1, 0x1B1($s0)
    ctx->pc = 0x22a7fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
label_22a800:
    // 0x22a800: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A800u;
    {
        const bool branch_taken_0x22a800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A800u;
        // 0x22a804: 0x212900a  movz        $s2, $s0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a800) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A808u;
    // 0x22a808: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A808u;
    {
        const bool branch_taken_0x22a808 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a808) {
            ctx->pc = 0x22A80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A808u;
            // 0x22a80c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A810u;
    // 0x22a810: 0x826201b1  lb          $v0, 0x1B1($s3)
    ctx->pc = 0x22a810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 433)));
    // 0x22a814: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22a814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a818: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A818u;
    {
        const bool branch_taken_0x22a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a818) {
            ctx->pc = 0x22A81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A818u;
            // 0x22a81c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A828u;
            goto label_22a828;
        }
    }
    ctx->pc = 0x22A820u;
    // 0x22a820: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x22a820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a824:
    // 0x22a824: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a828:
    // 0x22a828: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x22a828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x22a82c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x22A82Cu;
    {
        const bool branch_taken_0x22a82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a82c) {
            ctx->pc = 0x22A830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A82Cu;
            // 0x22a830: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a7a8;
        }
    }
    ctx->pc = 0x22A834u;
    // 0x22a834: 0x16400047  bnez        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x22A834u;
    {
        const bool branch_taken_0x22a834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A834u;
        // 0x22a838: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a834) {
            ctx->pc = 0x22A954u;
            goto label_22a954;
        }
    }
    ctx->pc = 0x22A83Cu;
    // 0x22a83c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x22a83cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x22a840: 0x8e91489c  lw          $s1, 0x489C($s4)
    ctx->pc = 0x22a840u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x22a844: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x22A844u;
    SET_GPR_U32(ctx, 31, 0x22A84Cu);
    ctx->pc = 0x22A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A844u;
    // 0x22a848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x22A844u, 0x22A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A84Cu;
label_22a84c:
    // 0x22a84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a850: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x22A850u;
    SET_GPR_U32(ctx, 31, 0x22A858u);
    ctx->pc = 0x22A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A850u;
    // 0x22a854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22A850u, 0x22A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A858u;
label_22a858:
    // 0x22a858: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x22a85c: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x22a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x22a860: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22a860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a864: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22a864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22a868: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22a86c: 0x10440038  beq         $v0, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x22A86Cu;
    {
        const bool branch_taken_0x22a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A86Cu;
        // 0x22a870: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a86c) {
            ctx->pc = 0x22A950u;
            goto label_22a950;
        }
    }
    ctx->pc = 0x22A874u;
    // 0x22a874: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x22a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x22a878: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x22A878u;
    {
        const bool branch_taken_0x22a878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A878u;
        // 0x22a87c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a878) {
            ctx->pc = 0x22A954u;
            goto label_22a954;
        }
    }
    ctx->pc = 0x22A880u;
    // 0x22a880: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a884: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x22a884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_22a888:
    // 0x22a888: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22a888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a88c: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x22A88Cu;
    SET_GPR_U32(ctx, 31, 0x22A894u);
    ctx->pc = 0x22A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A88Cu;
    // 0x22a890: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x22A88Cu, 0x22A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A894u;
label_22a894:
    // 0x22a894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a898: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x22A898u;
    {
        const bool branch_taken_0x22a898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a898) {
            ctx->pc = 0x22A89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A898u;
            // 0x22a89c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8A0u;
    // 0x22a8a0: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22a8a4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22a8a4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22a8a8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x22A8A8u;
    {
        const bool branch_taken_0x22a8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8a8) {
            ctx->pc = 0x22A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8A8u;
            // 0x22a8ac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8B0u;
    // 0x22a8b0: 0xc087502  jal         func_21D408
    ctx->pc = 0x22A8B0u;
    SET_GPR_U32(ctx, 31, 0x22A8B8u);
    ctx->pc = 0x22A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8B0u;
    // 0x22a8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22A8B0u, 0x22A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8B8u;
label_22a8b8:
    // 0x22a8b8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x22a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x22a8bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x22a8c0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x22A8C0u;
    {
        const bool branch_taken_0x22a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8c0) {
            ctx->pc = 0x22A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8C0u;
            // 0x22a8c4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8C8u;
    // 0x22a8c8: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x22A8C8u;
    {
        const bool branch_taken_0x22a8c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a8c8) {
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8D0u;
    // 0x22a8d0: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x22A8D0u;
    SET_GPR_U32(ctx, 31, 0x22A8D8u);
    ctx->pc = 0x22A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D0u;
    // 0x22a8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x22A8D0u, 0x22A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8D8u;
label_22a8d8:
    // 0x22a8d8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22A8D8u;
    {
        const bool branch_taken_0x22a8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8d8) {
            ctx->pc = 0x22A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8D8u;
            // 0x22a8dc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8E0u;
    // 0x22a8e0: 0xc088edc  jal         func_223B70
    ctx->pc = 0x22A8E0u;
    SET_GPR_U32(ctx, 31, 0x22A8E8u);
    ctx->pc = 0x22A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8E0u;
    // 0x22a8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x22A8E0u, 0x22A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8E8u;
label_22a8e8:
    // 0x22a8e8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A8E8u;
    {
        const bool branch_taken_0x22a8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8e8) {
            ctx->pc = 0x22A8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8E8u;
            // 0x22a8ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8F0u;
    // 0x22a8f0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x22A8F0u;
    SET_GPR_U32(ctx, 31, 0x22A8F8u);
    ctx->pc = 0x22A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8F0u;
    // 0x22a8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x22A8F0u, 0x22A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8F8u;
label_22a8f8:
    // 0x22a8f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A8F8u;
    {
        const bool branch_taken_0x22a8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8f8) {
            ctx->pc = 0x22A8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8F8u;
            // 0x22a8fc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A900u;
    // 0x22a900: 0xc089f86  jal         func_227E18
    ctx->pc = 0x22A900u;
    SET_GPR_U32(ctx, 31, 0x22A908u);
    ctx->pc = 0x22A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A900u;
    // 0x22a904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x22A900u, 0x22A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A908u;
label_22a908:
    // 0x22a908: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22A908u;
    {
        const bool branch_taken_0x22a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a908) {
            ctx->pc = 0x22A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A908u;
            // 0x22a90c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A910u;
label_22a910:
    // 0x22a910: 0x5680000c  bnel        $s4, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22A910u;
    {
        const bool branch_taken_0x22a910 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a910) {
            ctx->pc = 0x22A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A910u;
            // 0x22a914: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A944u;
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A918u;
    // 0x22a918: 0x820301b1  lb          $v1, 0x1B1($s0)
    ctx->pc = 0x22a918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
    // 0x22a91c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A91Cu;
    {
        const bool branch_taken_0x22a91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A91Cu;
        // 0x22a920: 0x212900a  movz        $s2, $s0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a91c) {
            ctx->pc = 0x22A940u;
            goto label_22a940;
        }
    }
    ctx->pc = 0x22A924u;
    // 0x22a924: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A924u;
    {
        const bool branch_taken_0x22a924 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a924) {
            ctx->pc = 0x22A928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A924u;
            // 0x22a928: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A940u;
            goto label_22a940;
        }
    }
    ctx->pc = 0x22A92Cu;
    // 0x22a92c: 0x826201b1  lb          $v0, 0x1B1($s3)
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 433)));
    // 0x22a930: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22a930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a934: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A934u;
    {
        const bool branch_taken_0x22a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a934) {
            ctx->pc = 0x22A938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A934u;
            // 0x22a938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A944u;
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A93Cu;
    // 0x22a93c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x22a93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a940:
    // 0x22a940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a944:
    // 0x22a944: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x22a944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x22a948: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x22A948u;
    {
        const bool branch_taken_0x22a948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a948) {
            ctx->pc = 0x22A94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A948u;
            // 0x22a94c: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a888;
        }
    }
    ctx->pc = 0x22A950u;
label_22a950:
    // 0x22a950: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22a950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a954:
    // 0x22a954: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22a954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22a958: 0x273100b  movn        $v0, $s3, $s3
    ctx->pc = 0x22a958u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x22a95c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22a95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a960: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22a960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a964: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a968: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22a968u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a96c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22a96cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a974: 0x3e00008  jr          $ra
    ctx->pc = 0x22A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A974u;
        // 0x22a978: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A97Cu;
    // 0x22a97c: 0x0  nop
    ctx->pc = 0x22a97cu;
    // NOP
    ctx->pc = 0x22a980u;
}
