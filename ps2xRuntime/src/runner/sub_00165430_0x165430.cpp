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

// Function: sub_00165430
// Address: 0x165430 - 0x165548
void sub_00165430_0x165430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165430_0x165430");
#endif

    switch (ctx->pc) {
        case 0x165468u: goto label_165468;
        case 0x165470u: goto label_165470;
        case 0x165478u: goto label_165478;
        case 0x16548cu: goto label_16548c;
        case 0x1654a0u: goto label_1654a0;
        case 0x1654b0u: goto label_1654b0;
        case 0x1654c0u: goto label_1654c0;
        case 0x1654d0u: goto label_1654d0;
        case 0x1654e0u: goto label_1654e0;
        case 0x1654f8u: goto label_1654f8;
        case 0x165500u: goto label_165500;
        default: break;
    }

    ctx->pc = 0x165430u;

    // 0x165430: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x165430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x165434: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x165434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x165438: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16543c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16543cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165440: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x165440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x165444: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x165444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165448: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x165448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16544c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16544cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165450: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x165450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x165454: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165458: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x165458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16545c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165460: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x165460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x165464: 0x0  nop
    ctx->pc = 0x165464u;
    // NOP
label_165468:
    // 0x165468: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165468u;
    SET_GPR_U32(ctx, 31, 0x165470u);
    ctx->pc = 0x16546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165468u;
    // 0x16546c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165468u, 0x165470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165470u;
label_165470:
    // 0x165470: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165470u;
    SET_GPR_U32(ctx, 31, 0x165478u);
    ctx->pc = 0x165474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165470u;
    // 0x165474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165470u, 0x165478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165478u;
label_165478:
    // 0x165478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16547c: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x16547Cu;
    {
        const bool branch_taken_0x16547c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16547c) {
            ctx->pc = 0x165480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16547Cu;
            // 0x165480: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165514u;
            goto label_165514;
        }
    }
    ctx->pc = 0x165484u;
    // 0x165484: 0xc08a200  jal         func_228800
    ctx->pc = 0x165484u;
    SET_GPR_U32(ctx, 31, 0x16548Cu);
    ctx->pc = 0x165488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165484u;
    // 0x165488: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x165484u, 0x16548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16548Cu;
label_16548c:
    // 0x16548c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x16548cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x165490: 0x1075001f  beq         $v1, $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x165490u;
    {
        const bool branch_taken_0x165490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x165494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165490u;
        // 0x165494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165490) {
            ctx->pc = 0x165510u;
            goto label_165510;
        }
    }
    ctx->pc = 0x165498u;
    // 0x165498: 0xc088edc  jal         func_223B70
    ctx->pc = 0x165498u;
    SET_GPR_U32(ctx, 31, 0x1654A0u);
    ctx->pc = 0x16549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165498u;
    // 0x16549c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x165498u, 0x1654A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654A0u;
label_1654a0:
    // 0x1654a0: 0x10510020  beq         $v0, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1654A0u;
    {
        const bool branch_taken_0x1654a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1654A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654A0u;
        // 0x1654a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654a0) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x1654A8u;
    // 0x1654a8: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x1654A8u;
    SET_GPR_U32(ctx, 31, 0x1654B0u);
    ctx->pc = 0x1654ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654A8u;
    // 0x1654ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x1654A8u, 0x1654B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654B0u;
label_1654b0:
    // 0x1654b0: 0x1051001c  beq         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1654B0u;
    {
        const bool branch_taken_0x1654b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1654B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654B0u;
        // 0x1654b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654b0) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x1654B8u;
    // 0x1654b8: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x1654B8u;
    SET_GPR_U32(ctx, 31, 0x1654C0u);
    ctx->pc = 0x1654BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654B8u;
    // 0x1654bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1654B8u, 0x1654C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654C0u;
label_1654c0:
    // 0x1654c0: 0x10510018  beq         $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1654C0u;
    {
        const bool branch_taken_0x1654c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1654C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654C0u;
        // 0x1654c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654c0) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x1654C8u;
    // 0x1654c8: 0xc089f86  jal         func_227E18
    ctx->pc = 0x1654C8u;
    SET_GPR_U32(ctx, 31, 0x1654D0u);
    ctx->pc = 0x1654CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654C8u;
    // 0x1654cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x1654C8u, 0x1654D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654D0u;
label_1654d0:
    // 0x1654d0: 0x10510014  beq         $v0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1654D0u;
    {
        const bool branch_taken_0x1654d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1654D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654D0u;
        // 0x1654d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654d0) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x1654D8u;
    // 0x1654d8: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x1654D8u;
    SET_GPR_U32(ctx, 31, 0x1654E0u);
    ctx->pc = 0x1654DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654D8u;
    // 0x1654dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x1654D8u, 0x1654E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654E0u;
label_1654e0:
    // 0x1654e0: 0x10510010  beq         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1654E0u;
    {
        const bool branch_taken_0x1654e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1654E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654E0u;
        // 0x1654e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654e0) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x1654E8u;
    // 0x1654e8: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1654E8u;
    {
        const bool branch_taken_0x1654e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1654e8) {
            ctx->pc = 0x1654ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1654E8u;
            // 0x1654ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165514u;
            goto label_165514;
        }
    }
    ctx->pc = 0x1654F0u;
    // 0x1654f0: 0xc087502  jal         func_21D408
    ctx->pc = 0x1654F0u;
    SET_GPR_U32(ctx, 31, 0x1654F8u);
    ctx->pc = 0x1654F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654F0u;
    // 0x1654f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1654F0u, 0x1654F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654F8u;
label_1654f8:
    // 0x1654f8: 0xc0a4128  jal         func_2904A0
    ctx->pc = 0x1654F8u;
    SET_GPR_U32(ctx, 31, 0x165500u);
    ctx->pc = 0x1654FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654F8u;
    // 0x1654fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2904A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904A0u, 0x1654F8u, 0x165500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165500u;
label_165500:
    // 0x165500: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165500u;
    {
        const bool branch_taken_0x165500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x165504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165500u;
        // 0x165504: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165500) {
            ctx->pc = 0x165514u;
            goto label_165514;
        }
    }
    ctx->pc = 0x165508u;
    // 0x165508: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165508u;
    {
        const bool branch_taken_0x165508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165508u;
        // 0x16550c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165508) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x165510u;
label_165510:
    // 0x165510: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_165514:
    // 0x165514: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x165514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165518: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x165518u;
    {
        const bool branch_taken_0x165518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165518u;
        // 0x16551c: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165518) {
            ctx->pc = 0x165468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165468;
        }
    }
    ctx->pc = 0x165520u;
    // 0x165520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165524:
    // 0x165524: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x165524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165528: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x165528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16552c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16552cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165534: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x165534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165538: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x165538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16553c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165540: 0x3e00008  jr          $ra
    ctx->pc = 0x165540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165540u;
        // 0x165544: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165548u;
}
