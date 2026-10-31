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

// Function: sub_002D4628
// Address: 0x2d4628 - 0x2d46b8
void sub_002D4628_0x2d4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4628_0x2d4628");
#endif

    switch (ctx->pc) {
        case 0x2d4654u: goto label_2d4654;
        case 0x2d465cu: goto label_2d465c;
        case 0x2d466cu: goto label_2d466c;
        case 0x2d4674u: goto label_2d4674;
        case 0x2d4690u: goto label_2d4690;
        case 0x2d469cu: goto label_2d469c;
        default: break;
    }

    ctx->pc = 0x2d4628u;

    // 0x2d4628: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d462c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d462cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d4630: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d4630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d4634: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4638: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d4638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d463c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d463cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4640: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d4640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d4644: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d4648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d464c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D464Cu;
    SET_GPR_U32(ctx, 31, 0x2D4654u);
    ctx->pc = 0x2D4650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D464Cu;
    // 0x2d4650: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D464Cu, 0x2D4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4654u;
label_2d4654:
    // 0x2d4654: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D4654u;
    SET_GPR_U32(ctx, 31, 0x2D465Cu);
    ctx->pc = 0x2D4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4654u;
    // 0x2d4658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D4654u, 0x2D465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D465Cu;
label_2d465c:
    // 0x2d465c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D465Cu;
    {
        const bool branch_taken_0x2d465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D465Cu;
        // 0x2d4660: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d465c) {
            ctx->pc = 0x2D46A0u;
            goto label_2d46a0;
        }
    }
    ctx->pc = 0x2D4664u;
    // 0x2d4664: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D4664u;
    SET_GPR_U32(ctx, 31, 0x2D466Cu);
    ctx->pc = 0x2D4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4664u;
    // 0x2d4668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D4664u, 0x2D466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D466Cu;
label_2d466c:
    // 0x2d466c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D466Cu;
    SET_GPR_U32(ctx, 31, 0x2D4674u);
    ctx->pc = 0x2D4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D466Cu;
    // 0x2d4670: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D466Cu, 0x2D4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4674u;
label_2d4674:
    // 0x2d4674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4678: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4678u;
    {
        const bool branch_taken_0x2d4678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4678u;
        // 0x2d467c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4678) {
            ctx->pc = 0x2D4690u;
            goto label_2d4690;
        }
    }
    ctx->pc = 0x2D4680u;
    // 0x2d4680: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d4680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4688: 0xc0b51ae  jal         func_2D46B8
    ctx->pc = 0x2D4688u;
    SET_GPR_U32(ctx, 31, 0x2D4690u);
    ctx->pc = 0x2D468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4688u;
    // 0x2d468c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D46B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D46B8u, 0x2D4688u, 0x2D4690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4690u;
label_2d4690:
    // 0x2d4690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4694: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D4694u;
    SET_GPR_U32(ctx, 31, 0x2D469Cu);
    ctx->pc = 0x2D4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4694u;
    // 0x2d4698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D4694u, 0x2D469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D469Cu;
label_2d469c:
    // 0x2d469c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d469cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d46a0:
    // 0x2d46a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d46a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d46a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d46a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d46a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d46a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d46ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d46acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d46b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D46B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46B0u;
        // 0x2d46b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D46B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D46B8u;
}
