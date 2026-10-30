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

// Function: sub_001BCA30
// Address: 0x1bca30 - 0x1bca70
void sub_001BCA30_0x1bca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA30_0x1bca30");
#endif

    switch (ctx->pc) {
        case 0x1bca48u: goto label_1bca48;
        default: break;
    }

    ctx->pc = 0x1bca30u;

    // 0x1bca30: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1bca34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bca38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bca3c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCA3Cu;
    {
        const bool branch_taken_0x1bca3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA3Cu;
        // 0x1bca40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca3c) {
            ctx->pc = 0x1BCA64u;
            goto label_1bca64;
        }
    }
    ctx->pc = 0x1BCA44u;
    // 0x1bca44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bca48:
    // 0x1bca48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bca4c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCA4Cu;
    {
        const bool branch_taken_0x1bca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA4Cu;
        // 0x1bca50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca4c) {
            ctx->pc = 0x1BCA5Cu;
            goto label_1bca5c;
        }
    }
    ctx->pc = 0x1BCA54u;
    // 0x1bca54: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA54u;
        // 0x1bca58: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA5Cu;
label_1bca5c:
    // 0x1bca5c: 0x5466fffa  bnel        $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BCA5Cu;
    {
        const bool branch_taken_0x1bca5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1bca5c) {
            ctx->pc = 0x1BCA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCA5Cu;
            // 0x1bca60: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BCA64u;
label_1bca64:
    // 0x1bca64: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA64u;
        // 0x1bca68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA6Cu;
    // 0x1bca6c: 0x0  nop
    ctx->pc = 0x1bca6cu;
    // NOP
    ctx->pc = 0x1bca70u;
}
