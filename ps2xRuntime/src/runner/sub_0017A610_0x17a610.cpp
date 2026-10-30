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

// Function: sub_0017A610
// Address: 0x17a610 - 0x17a680
void sub_0017A610_0x17a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A610_0x17a610");
#endif

    switch (ctx->pc) {
        case 0x17a640u: goto label_17a640;
        case 0x17a654u: goto label_17a654;
        default: break;
    }

    ctx->pc = 0x17a610u;

    // 0x17a610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a614: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17a618: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17a61c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a620: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17a624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a630: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a634: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17A634u;
    {
        const bool branch_taken_0x17a634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A634u;
        // 0x17a638: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a634) {
            ctx->pc = 0x17A664u;
            goto label_17a664;
        }
    }
    ctx->pc = 0x17A63Cu;
    // 0x17a63c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a640:
    // 0x17a640: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17a640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a644: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a648: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a64c: 0xc05ea36  jal         func_17A8D8
    ctx->pc = 0x17A64Cu;
    SET_GPR_U32(ctx, 31, 0x17A654u);
    ctx->pc = 0x17A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A64Cu;
    // 0x17a650: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8D8u, 0x17A64Cu, 0x17A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A654u;
label_17a654:
    // 0x17a654: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a658: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17a658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a65c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17A65Cu;
    {
        const bool branch_taken_0x17a65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A65Cu;
        // 0x17a660: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a65c) {
            ctx->pc = 0x17A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a640;
        }
    }
    ctx->pc = 0x17A664u;
label_17a664:
    // 0x17a664: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17a664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a668: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17a668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a66c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a670: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17a670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a678: 0x3e00008  jr          $ra
    ctx->pc = 0x17A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A678u;
        // 0x17a67c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A680u;
}
