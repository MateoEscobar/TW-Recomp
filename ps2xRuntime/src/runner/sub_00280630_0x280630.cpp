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

// Function: sub_00280630
// Address: 0x280630 - 0x280708
void sub_00280630_0x280630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280630_0x280630");
#endif

    switch (ctx->pc) {
        case 0x280658u: goto label_280658;
        case 0x280668u: goto label_280668;
        case 0x280684u: goto label_280684;
        case 0x280694u: goto label_280694;
        case 0x2806a4u: goto label_2806a4;
        case 0x2806b4u: goto label_2806b4;
        case 0x2806d0u: goto label_2806d0;
        case 0x2806e0u: goto label_2806e0;
        default: break;
    }

    ctx->pc = 0x280630u;

    // 0x280630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280634: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x280634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x280638: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x280638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28063c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28063cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280640: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x280640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x280644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280648: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x280648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28064c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x280650: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x280650u;
    SET_GPR_U32(ctx, 31, 0x280658u);
    ctx->pc = 0x280654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280650u;
    // 0x280654: 0x8e1200d4  lw          $s2, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x280650u, 0x280658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280658u;
label_280658:
    // 0x280658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x280658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28065c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280660: 0xc089998  jal         func_226660
    ctx->pc = 0x280660u;
    SET_GPR_U32(ctx, 31, 0x280668u);
    ctx->pc = 0x280664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280660u;
    // 0x280664: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x280660u, 0x280668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280668u;
label_280668:
    // 0x280668: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x280668u;
    {
        const bool branch_taken_0x280668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280668u;
        // 0x28066c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280668) {
            ctx->pc = 0x2806C8u;
            goto label_2806c8;
        }
    }
    ctx->pc = 0x280670u;
    // 0x280670: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x280670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x280674: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x280674u;
    {
        const bool branch_taken_0x280674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280674u;
        // 0x280678: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280674) {
            ctx->pc = 0x2806E8u;
            goto label_2806e8;
        }
    }
    ctx->pc = 0x28067Cu;
    // 0x28067c: 0xc09edc0  jal         func_27B700
    ctx->pc = 0x28067Cu;
    SET_GPR_U32(ctx, 31, 0x280684u);
    ctx->pc = 0x280680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28067Cu;
    // 0x280680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B700u, 0x28067Cu, 0x280684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280684u;
label_280684:
    // 0x280684: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280684u;
    {
        const bool branch_taken_0x280684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280684u;
        // 0x280688: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280684) {
            ctx->pc = 0x2806BCu;
            goto label_2806bc;
        }
    }
    ctx->pc = 0x28068Cu;
    // 0x28068c: 0xc09eda0  jal         func_27B680
    ctx->pc = 0x28068Cu;
    SET_GPR_U32(ctx, 31, 0x280694u);
    ctx->pc = 0x280690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28068Cu;
    // 0x280690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B680u, 0x28068Cu, 0x280694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280694u;
label_280694:
    // 0x280694: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280694u;
    {
        const bool branch_taken_0x280694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280694u;
        // 0x280698: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280694) {
            ctx->pc = 0x2806BCu;
            goto label_2806bc;
        }
    }
    ctx->pc = 0x28069Cu;
    // 0x28069c: 0xc09edca  jal         func_27B728
    ctx->pc = 0x28069Cu;
    SET_GPR_U32(ctx, 31, 0x2806A4u);
    ctx->pc = 0x2806A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28069Cu;
    // 0x2806a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B728u, 0x28069Cu, 0x2806A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806A4u;
label_2806a4:
    // 0x2806a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2806A4u;
    {
        const bool branch_taken_0x2806a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2806A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806A4u;
        // 0x2806a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806a4) {
            ctx->pc = 0x2806BCu;
            goto label_2806bc;
        }
    }
    ctx->pc = 0x2806ACu;
    // 0x2806ac: 0xc09edaa  jal         func_27B6A8
    ctx->pc = 0x2806ACu;
    SET_GPR_U32(ctx, 31, 0x2806B4u);
    ctx->pc = 0x2806B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806ACu;
    // 0x2806b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B6A8u, 0x2806ACu, 0x2806B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806B4u;
label_2806b4:
    // 0x2806b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2806B4u;
    {
        const bool branch_taken_0x2806b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806B4u;
        // 0x2806b8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806b4) {
            ctx->pc = 0x2806E4u;
            goto label_2806e4;
        }
    }
    ctx->pc = 0x2806BCu;
label_2806bc:
    // 0x2806bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2806bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2806c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2806C0u;
    {
        const bool branch_taken_0x2806c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806C0u;
        // 0x2806c4: 0xae4300b8  sw          $v1, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806c0) {
            ctx->pc = 0x2806E8u;
            goto label_2806e8;
        }
    }
    ctx->pc = 0x2806C8u;
label_2806c8:
    // 0x2806c8: 0xc089998  jal         func_226660
    ctx->pc = 0x2806C8u;
    SET_GPR_U32(ctx, 31, 0x2806D0u);
    ctx->pc = 0x2806CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806C8u;
    // 0x2806cc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2806C8u, 0x2806D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806D0u;
label_2806d0:
    // 0x2806d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2806D0u;
    {
        const bool branch_taken_0x2806d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806D0u;
        // 0x2806d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806d0) {
            ctx->pc = 0x2806E8u;
            goto label_2806e8;
        }
    }
    ctx->pc = 0x2806D8u;
    // 0x2806d8: 0xc0a01c2  jal         func_280708
    ctx->pc = 0x2806D8u;
    SET_GPR_U32(ctx, 31, 0x2806E0u);
    ctx->pc = 0x2806DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806D8u;
    // 0x2806dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280708u, 0x2806D8u, 0x2806E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806E0u;
label_2806e0:
    // 0x2806e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2806e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2806e4:
    // 0x2806e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2806e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2806e8:
    // 0x2806e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2806e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2806ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2806ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2806f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2806f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2806f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2806f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2806f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2806f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2806fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2806FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806FCu;
        // 0x280700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2806FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280704u;
    // 0x280704: 0x0  nop
    ctx->pc = 0x280704u;
    // NOP
    ctx->pc = 0x280708u;
}
