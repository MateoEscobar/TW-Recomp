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

// Function: sub_0030A608
// Address: 0x30a608 - 0x30a680
void sub_0030A608_0x30a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A608_0x30a608");
#endif

    switch (ctx->pc) {
        case 0x30a628u: goto label_30a628;
        case 0x30a640u: goto label_30a640;
        case 0x30a648u: goto label_30a648;
        default: break;
    }

    ctx->pc = 0x30a608u;

    // 0x30a608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a60c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30a610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30a610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30a614: 0x24900028  addiu       $s0, $a0, 0x28
    ctx->pc = 0x30a614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x30a618: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30a61c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30a61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a624: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x30a624u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_30a628:
    // 0x30a628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a62c: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x30a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
    // 0x30a630: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A630u;
    {
        const bool branch_taken_0x30a630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30a630) {
            ctx->pc = 0x30A634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A630u;
            // 0x30a634: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A658u;
            goto label_30a658;
        }
    }
    ctx->pc = 0x30A638u;
    // 0x30a638: 0xc0e4060  jal         func_390180
    ctx->pc = 0x30A638u;
    SET_GPR_U32(ctx, 31, 0x30A640u);
    ctx->pc = 0x30A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A638u;
    // 0x30a63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x30A638u, 0x30A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A640u;
label_30a640:
    // 0x30a640: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x30A640u;
    SET_GPR_U32(ctx, 31, 0x30A648u);
    ctx->pc = 0x30A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A640u;
    // 0x30a644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x30A640u, 0x30A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A648u;
label_30a648:
    // 0x30a648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A648u;
    {
        const bool branch_taken_0x30a648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A648u;
        // 0x30a64c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a648) {
            ctx->pc = 0x30A658u;
            goto label_30a658;
        }
    }
    ctx->pc = 0x30A650u;
    // 0x30a650: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x30a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
    // 0x30a654: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30a654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_30a658:
    // 0x30a658: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x30a658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30a65c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x30A65Cu;
    {
        const bool branch_taken_0x30a65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A65Cu;
        // 0x30a660: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a65c) {
            ctx->pc = 0x30A628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a628;
        }
    }
    ctx->pc = 0x30A664u;
    // 0x30a664: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30a664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a668: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30a668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a66c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30a66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a674: 0x3e00008  jr          $ra
    ctx->pc = 0x30A674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A674u;
        // 0x30a678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A67Cu;
    // 0x30a67c: 0x0  nop
    ctx->pc = 0x30a67cu;
    // NOP
    ctx->pc = 0x30a680u;
}
