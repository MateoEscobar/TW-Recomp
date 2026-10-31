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

// Function: sub_00291668
// Address: 0x291668 - 0x291728
void sub_00291668_0x291668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291668_0x291668");
#endif

    switch (ctx->pc) {
        case 0x291698u: goto label_291698;
        case 0x2916a4u: goto label_2916a4;
        case 0x2916d0u: goto label_2916d0;
        case 0x2916f0u: goto label_2916f0;
        case 0x291710u: goto label_291710;
        default: break;
    }

    ctx->pc = 0x291668u;

    // 0x291668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29166c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x291670: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x291670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x291674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291678: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x291678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29167c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29167cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291684: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x291684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291688: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x291688u;
    {
        const bool branch_taken_0x291688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291688u;
        // 0x29168c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291688) {
            ctx->pc = 0x2916B0u;
            goto label_2916b0;
        }
    }
    ctx->pc = 0x291690u;
    // 0x291690: 0xc087502  jal         func_21D408
    ctx->pc = 0x291690u;
    SET_GPR_U32(ctx, 31, 0x291698u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x291690u, 0x291698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291698u;
label_291698:
    // 0x291698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29169c: 0xc0a408c  jal         func_290230
    ctx->pc = 0x29169Cu;
    SET_GPR_U32(ctx, 31, 0x2916A4u);
    ctx->pc = 0x2916A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29169Cu;
    // 0x2916a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x29169Cu, 0x2916A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916A4u;
label_2916a4:
    // 0x2916a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2916a8: 0x5043001a  beql        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2916A8u;
    {
        const bool branch_taken_0x2916a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2916a8) {
            ctx->pc = 0x2916ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2916A8u;
            // 0x2916ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291714u;
            goto label_291714;
        }
    }
    ctx->pc = 0x2916B0u;
label_2916b0:
    // 0x2916b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2916b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2916b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2916b8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2916B8u;
    {
        const bool branch_taken_0x2916b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2916BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916B8u;
        // 0x2916bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916b8) {
            ctx->pc = 0x2916D8u;
            goto label_2916d8;
        }
    }
    ctx->pc = 0x2916C0u;
    // 0x2916c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2916c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2916c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916c8: 0xc0c054e  jal         func_301538
    ctx->pc = 0x2916C8u;
    SET_GPR_U32(ctx, 31, 0x2916D0u);
    ctx->pc = 0x2916CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916C8u;
    // 0x2916cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301538u, 0x2916C8u, 0x2916D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916D0u;
label_2916d0:
    // 0x2916d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2916D0u;
    {
        const bool branch_taken_0x2916d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2916D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916D0u;
        // 0x2916d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916d0) {
            ctx->pc = 0x291714u;
            goto label_291714;
        }
    }
    ctx->pc = 0x2916D8u;
label_2916d8:
    // 0x2916d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2916D8u;
    {
        const bool branch_taken_0x2916d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2916DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916D8u;
        // 0x2916dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916d8) {
            ctx->pc = 0x2916F8u;
            goto label_2916f8;
        }
    }
    ctx->pc = 0x2916E0u;
    // 0x2916e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2916e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2916e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916e8: 0xc0bfcac  jal         func_2FF2B0
    ctx->pc = 0x2916E8u;
    SET_GPR_U32(ctx, 31, 0x2916F0u);
    ctx->pc = 0x2916ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916E8u;
    // 0x2916ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF2B0u, 0x2916E8u, 0x2916F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916F0u;
label_2916f0:
    // 0x2916f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2916F0u;
    {
        const bool branch_taken_0x2916f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2916F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916F0u;
        // 0x2916f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916f0) {
            ctx->pc = 0x291714u;
            goto label_291714;
        }
    }
    ctx->pc = 0x2916F8u;
label_2916f8:
    // 0x2916f8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2916F8u;
    {
        const bool branch_taken_0x2916f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2916f8) {
            ctx->pc = 0x2916FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2916F8u;
            // 0x2916fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291714u;
            goto label_291714;
        }
    }
    ctx->pc = 0x291700u;
    // 0x291700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291708: 0xc0c131e  jal         func_304C78
    ctx->pc = 0x291708u;
    SET_GPR_U32(ctx, 31, 0x291710u);
    ctx->pc = 0x29170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291708u;
    // 0x29170c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304C78u, 0x291708u, 0x291710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291710u;
label_291710:
    // 0x291710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x291710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291714:
    // 0x291714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x291714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291718: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x291718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29171c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291720: 0x3e00008  jr          $ra
    ctx->pc = 0x291720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291720u;
        // 0x291724: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291728u;
}
