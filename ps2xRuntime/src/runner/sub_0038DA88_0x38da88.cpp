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

// Function: sub_0038DA88
// Address: 0x38da88 - 0x38dae0
void sub_0038DA88_0x38da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DA88_0x38da88");
#endif

    switch (ctx->pc) {
        case 0x38dabcu: goto label_38dabc;
        default: break;
    }

    ctx->pc = 0x38da88u;

    // 0x38da88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38da88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38da8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38da90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38da94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38da98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38da98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da9c: 0x8e0311e0  lw          $v1, 0x11E0($s0)
    ctx->pc = 0x38da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
    // 0x38daa0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DAA0u;
    {
        const bool branch_taken_0x38daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAA0u;
        // 0x38daa4: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38daa0) {
            ctx->pc = 0x38DAB4u;
            goto label_38dab4;
        }
    }
    ctx->pc = 0x38DAA8u;
    // 0x38daa8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x38daa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38daac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38DAACu;
    {
        const bool branch_taken_0x38daac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAACu;
        // 0x38dab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38daac) {
            ctx->pc = 0x38DACCu;
            goto label_38dacc;
        }
    }
    ctx->pc = 0x38DAB4u;
label_38dab4:
    // 0x38dab4: 0xc0e3682  jal         func_38DA08
    ctx->pc = 0x38DAB4u;
    SET_GPR_U32(ctx, 31, 0x38DABCu);
    ctx->pc = 0x38DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DAB4u;
    // 0x38dab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA08u, 0x38DAB4u, 0x38DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DABCu;
label_38dabc:
    // 0x38dabc: 0x8e0311f8  lw          $v1, 0x11F8($s0)
    ctx->pc = 0x38dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4600)));
    // 0x38dac0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x38dac0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x38dac4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38dac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38dac8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38dac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38dacc:
    // 0x38dacc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38daccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dad4: 0x3e00008  jr          $ra
    ctx->pc = 0x38DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAD4u;
        // 0x38dad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DADCu;
    // 0x38dadc: 0x0  nop
    ctx->pc = 0x38dadcu;
    // NOP
    ctx->pc = 0x38dae0u;
}
