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

// Function: sub_0029C570
// Address: 0x29c570 - 0x29c628
void sub_0029C570_0x29c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C570_0x29c570");
#endif

    switch (ctx->pc) {
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c5d4u: goto label_29c5d4;
        case 0x29c5e4u: goto label_29c5e4;
        case 0x29c5f8u: goto label_29c5f8;
        default: break;
    }

    ctx->pc = 0x29c570u;

    // 0x29c570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c574: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29c578: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29c57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29c580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c588: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29c58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c594: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C594u;
    SET_GPR_U32(ctx, 31, 0x29C59Cu);
    ctx->pc = 0x29C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C594u;
    // 0x29c598: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C594u, 0x29C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C59Cu;
label_29c59c:
    // 0x29c59c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29c59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5a4: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x29C5A4u;
    SET_GPR_U32(ctx, 31, 0x29C5ACu);
    ctx->pc = 0x29C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5A4u;
    // 0x29c5a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x29C5A4u, 0x29C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5ACu;
label_29c5ac:
    // 0x29c5ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29c5acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c5b4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29C5B4u;
    {
        const bool branch_taken_0x29c5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5B4u;
        // 0x29c5b8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5b4) {
            ctx->pc = 0x29C608u;
            goto label_29c608;
        }
    }
    ctx->pc = 0x29C5BCu;
    // 0x29c5bc: 0x924202d6  lbu         $v0, 0x2D6($s2)
    ctx->pc = 0x29c5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 726)));
    // 0x29c5c0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x29c5c0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29c5c4: 0x16030010  bne         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29C5C4u;
    {
        const bool branch_taken_0x29c5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x29C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C4u;
        // 0x29c5c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5c4) {
            ctx->pc = 0x29C608u;
            goto label_29c608;
        }
    }
    ctx->pc = 0x29C5CCu;
    // 0x29c5cc: 0xc08a096  jal         func_228258
    ctx->pc = 0x29C5CCu;
    SET_GPR_U32(ctx, 31, 0x29C5D4u);
    ctx->pc = 0x29C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5CCu;
    // 0x29c5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x29C5CCu, 0x29C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5D4u;
label_29c5d4:
    // 0x29c5d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29C5D4u;
    {
        const bool branch_taken_0x29c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5D4u;
        // 0x29c5d8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5d4) {
            ctx->pc = 0x29C608u;
            goto label_29c608;
        }
    }
    ctx->pc = 0x29C5DCu;
    // 0x29c5dc: 0xc08a08a  jal         func_228228
    ctx->pc = 0x29C5DCu;
    SET_GPR_U32(ctx, 31, 0x29C5E4u);
    ctx->pc = 0x29C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5DCu;
    // 0x29c5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x29C5DCu, 0x29C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5E4u;
label_29c5e4:
    // 0x29c5e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C5E4u;
    {
        const bool branch_taken_0x29c5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5E4u;
        // 0x29c5e8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5e4) {
            ctx->pc = 0x29C608u;
            goto label_29c608;
        }
    }
    ctx->pc = 0x29C5ECu;
    // 0x29c5ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5f0: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29C5F0u;
    SET_GPR_U32(ctx, 31, 0x29C5F8u);
    ctx->pc = 0x29C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5F0u;
    // 0x29c5f4: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29C5F0u, 0x29C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5F8u;
label_29c5f8:
    // 0x29c5f8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x29c5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5fc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29c5fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29c600: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x29c600u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x29c604: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29c604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29c608:
    // 0x29c608: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29c608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c60c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29c60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c614: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29c614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C61Cu;
        // 0x29c620: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C624u;
    // 0x29c624: 0x0  nop
    ctx->pc = 0x29c624u;
    // NOP
    ctx->pc = 0x29c628u;
}
