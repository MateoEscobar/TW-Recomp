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

// Function: sub_0029C628
// Address: 0x29c628 - 0x29c6d0
void sub_0029C628_0x29c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C628_0x29c628");
#endif

    switch (ctx->pc) {
        case 0x29c64cu: goto label_29c64c;
        case 0x29c658u: goto label_29c658;
        case 0x29c668u: goto label_29c668;
        case 0x29c694u: goto label_29c694;
        case 0x29c6a8u: goto label_29c6a8;
        default: break;
    }

    ctx->pc = 0x29c628u;

    // 0x29c628: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c62c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29c630: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29c630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c634: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29c638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c63c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29c640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c644: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C644u;
    SET_GPR_U32(ctx, 31, 0x29C64Cu);
    ctx->pc = 0x29C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C644u;
    // 0x29c648: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C644u, 0x29C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C64Cu;
label_29c64c:
    // 0x29c64c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29c64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c650: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C650u;
    SET_GPR_U32(ctx, 31, 0x29C658u);
    ctx->pc = 0x29C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C650u;
    // 0x29c654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C650u, 0x29C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C658u;
label_29c658:
    // 0x29c658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c660: 0xc0a408c  jal         func_290230
    ctx->pc = 0x29C660u;
    SET_GPR_U32(ctx, 31, 0x29C668u);
    ctx->pc = 0x29C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C660u;
    // 0x29c664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x29C660u, 0x29C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C668u;
label_29c668:
    // 0x29c668: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29C668u;
    {
        const bool branch_taken_0x29c668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C668u;
        // 0x29c66c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c668) {
            ctx->pc = 0x29C6B0u;
            goto label_29c6b0;
        }
    }
    ctx->pc = 0x29C670u;
    // 0x29c670: 0x920202d4  lbu         $v0, 0x2D4($s0)
    ctx->pc = 0x29c670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x29c674: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29C674u;
    {
        const bool branch_taken_0x29c674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C674u;
        // 0x29c678: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c674) {
            ctx->pc = 0x29C6B0u;
            goto label_29c6b0;
        }
    }
    ctx->pc = 0x29C67Cu;
    // 0x29c67c: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29c680: 0x8c4305e8  lw          $v1, 0x5E8($v0)
    ctx->pc = 0x29c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    // 0x29c684: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29C684u;
    {
        const bool branch_taken_0x29c684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C684u;
        // 0x29c688: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c684) {
            ctx->pc = 0x29C6B0u;
            goto label_29c6b0;
        }
    }
    ctx->pc = 0x29C68Cu;
    // 0x29c68c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x29C68Cu;
    SET_GPR_U32(ctx, 31, 0x29C694u);
    ctx->pc = 0x29C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C68Cu;
    // 0x29c690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x29C68Cu, 0x29C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C694u;
label_29c694:
    // 0x29c694: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C694u;
    {
        const bool branch_taken_0x29c694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C694u;
        // 0x29c698: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c694) {
            ctx->pc = 0x29C6B0u;
            goto label_29c6b0;
        }
    }
    ctx->pc = 0x29C69Cu;
    // 0x29c69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6a0: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x29C6A0u;
    SET_GPR_U32(ctx, 31, 0x29C6A8u);
    ctx->pc = 0x29C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6A0u;
    // 0x29c6a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29C6A0u, 0x29C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6A8u;
label_29c6a8:
    // 0x29c6a8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x29c6a8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29c6ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29c6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29c6b0:
    // 0x29c6b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29c6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c6b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29c6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c6b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c6bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29c6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6C4u;
        // 0x29c6c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C6CCu;
    // 0x29c6cc: 0x0  nop
    ctx->pc = 0x29c6ccu;
    // NOP
    ctx->pc = 0x29c6d0u;
}
