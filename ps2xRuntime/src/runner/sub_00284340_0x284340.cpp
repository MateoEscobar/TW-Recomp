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

// Function: sub_00284340
// Address: 0x284340 - 0x2843f8
void sub_00284340_0x284340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284340_0x284340");
#endif

    switch (ctx->pc) {
        case 0x28435cu: goto label_28435c;
        case 0x284364u: goto label_284364;
        case 0x284378u: goto label_284378;
        case 0x284388u: goto label_284388;
        case 0x284390u: goto label_284390;
        case 0x2843a0u: goto label_2843a0;
        case 0x2843b4u: goto label_2843b4;
        case 0x2843c4u: goto label_2843c4;
        case 0x2843d8u: goto label_2843d8;
        case 0x2843e8u: goto label_2843e8;
        default: break;
    }

    ctx->pc = 0x284340u;

    // 0x284340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284344: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x284344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x284348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x284348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28434c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28434cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284354: 0xc10652e  jal         func_4194B8
    ctx->pc = 0x284354u;
    SET_GPR_U32(ctx, 31, 0x28435Cu);
    ctx->pc = 0x284358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284354u;
    // 0x284358: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4194B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4194B8u, 0x284354u, 0x28435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28435Cu;
label_28435c:
    // 0x28435c: 0xc089ff6  jal         func_227FD8
    ctx->pc = 0x28435Cu;
    SET_GPR_U32(ctx, 31, 0x284364u);
    ctx->pc = 0x284360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28435Cu;
    // 0x284360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x28435Cu, 0x284364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284364u;
label_284364:
    // 0x284364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284364u;
    {
        const bool branch_taken_0x284364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284364u;
        // 0x284368: 0x3c052fef  lui         $a1, 0x2FEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284364) {
            ctx->pc = 0x284388u;
            goto label_284388;
        }
    }
    ctx->pc = 0x28436Cu;
    // 0x28436c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284370: 0xc089998  jal         func_226660
    ctx->pc = 0x284370u;
    SET_GPR_U32(ctx, 31, 0x284378u);
    ctx->pc = 0x284374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284370u;
    // 0x284374: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x284370u, 0x284378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284378u;
label_284378:
    // 0x284378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284378u;
    {
        const bool branch_taken_0x284378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284378) {
            ctx->pc = 0x284388u;
            goto label_284388;
        }
    }
    ctx->pc = 0x284380u;
    // 0x284380: 0xc0962a2  jal         func_258A88
    ctx->pc = 0x284380u;
    SET_GPR_U32(ctx, 31, 0x284388u);
    ctx->pc = 0x284384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284380u;
    // 0x284384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x284380u, 0x284388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284388u;
label_284388:
    // 0x284388: 0xc089ff6  jal         func_227FD8
    ctx->pc = 0x284388u;
    SET_GPR_U32(ctx, 31, 0x284390u);
    ctx->pc = 0x28438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284388u;
    // 0x28438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x284388u, 0x284390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284390u;
label_284390:
    // 0x284390: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x284390u;
    {
        const bool branch_taken_0x284390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284390) {
            ctx->pc = 0x2843E0u;
            goto label_2843e0;
        }
    }
    ctx->pc = 0x284398u;
    // 0x284398: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x284398u;
    SET_GPR_U32(ctx, 31, 0x2843A0u);
    ctx->pc = 0x28439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284398u;
    // 0x28439c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x284398u, 0x2843A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843A0u;
label_2843a0:
    // 0x2843a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2843A0u;
    {
        const bool branch_taken_0x2843a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2843A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843A0u;
        // 0x2843a4: 0x3c050fc1  lui         $a1, 0xFC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4033 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843a0) {
            ctx->pc = 0x2843E0u;
            goto label_2843e0;
        }
    }
    ctx->pc = 0x2843A8u;
    // 0x2843a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2843a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843ac: 0xc089998  jal         func_226660
    ctx->pc = 0x2843ACu;
    SET_GPR_U32(ctx, 31, 0x2843B4u);
    ctx->pc = 0x2843B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843ACu;
    // 0x2843b0: 0x34a5fe7b  ori         $a1, $a1, 0xFE7B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65147);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2843ACu, 0x2843B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843B4u;
label_2843b4:
    // 0x2843b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2843B4u;
    {
        const bool branch_taken_0x2843b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2843b4) {
            ctx->pc = 0x2843E0u;
            goto label_2843e0;
        }
    }
    ctx->pc = 0x2843BCu;
    // 0x2843bc: 0xc08db4a  jal         func_236D28
    ctx->pc = 0x2843BCu;
    SET_GPR_U32(ctx, 31, 0x2843C4u);
    ctx->pc = 0x2843C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843BCu;
    // 0x2843c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D28u, 0x2843BCu, 0x2843C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843C4u;
label_2843c4:
    // 0x2843c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2843c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843c8: 0x24050283  addiu       $a1, $zero, 0x283
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
    // 0x2843cc: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x2843ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2843d0: 0xc096a30  jal         func_25A8C0
    ctx->pc = 0x2843D0u;
    SET_GPR_U32(ctx, 31, 0x2843D8u);
    ctx->pc = 0x2843D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843D0u;
    // 0x2843d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x2843D0u, 0x2843D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843D8u;
label_2843d8:
    // 0x2843d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2843D8u;
    {
        const bool branch_taken_0x2843d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843D8u;
        // 0x2843dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843d8) {
            ctx->pc = 0x2843ECu;
            goto label_2843ec;
        }
    }
    ctx->pc = 0x2843E0u;
label_2843e0:
    // 0x2843e0: 0xc08db4a  jal         func_236D28
    ctx->pc = 0x2843E0u;
    SET_GPR_U32(ctx, 31, 0x2843E8u);
    ctx->pc = 0x2843E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843E0u;
    // 0x2843e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D28u, 0x2843E0u, 0x2843E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843E8u;
label_2843e8:
    // 0x2843e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2843e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2843ec:
    // 0x2843ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2843ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2843f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2843F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2843F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843F0u;
        // 0x2843f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2843F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2843F8u;
}
