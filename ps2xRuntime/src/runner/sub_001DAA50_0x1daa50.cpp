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

// Function: sub_001DAA50
// Address: 0x1daa50 - 0x1daaa8
void sub_001DAA50_0x1daa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAA50_0x1daa50");
#endif

    switch (ctx->pc) {
        case 0x1daa68u: goto label_1daa68;
        case 0x1daa70u: goto label_1daa70;
        default: break;
    }

    ctx->pc = 0x1daa50u;

    // 0x1daa50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1daa54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1daa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1daa58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1daa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1daa5c: 0x24901530  addiu       $s0, $a0, 0x1530
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
    // 0x1daa60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1daa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1daa64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1daa64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daa68:
    // 0x1daa68: 0xc075818  jal         func_1D6060
    ctx->pc = 0x1DAA68u;
    SET_GPR_U32(ctx, 31, 0x1DAA70u);
    ctx->pc = 0x1DAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA68u;
    // 0x1daa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6060u, 0x1DAA68u, 0x1DAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA70u;
label_1daa70:
    // 0x1daa70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAA70u;
    {
        const bool branch_taken_0x1daa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA70u;
        // 0x1daa74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa70) {
            ctx->pc = 0x1DAA80u;
            goto label_1daa80;
        }
    }
    ctx->pc = 0x1DAA78u;
    // 0x1daa78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAA78u;
    {
        const bool branch_taken_0x1daa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA78u;
        // 0x1daa7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa78) {
            ctx->pc = 0x1DAA90u;
            goto label_1daa90;
        }
    }
    ctx->pc = 0x1DAA80u;
label_1daa80:
    // 0x1daa80: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1daa80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1daa84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DAA84u;
    {
        const bool branch_taken_0x1daa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA84u;
        // 0x1daa88: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa84) {
            ctx->pc = 0x1DAA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daa68;
        }
    }
    ctx->pc = 0x1DAA8Cu;
    // 0x1daa8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1daa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daa90:
    // 0x1daa90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1daa90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daa94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1daa94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1daa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA9Cu;
        // 0x1daaa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAA4u;
    // 0x1daaa4: 0x0  nop
    ctx->pc = 0x1daaa4u;
    // NOP
    ctx->pc = 0x1daaa8u;
}
