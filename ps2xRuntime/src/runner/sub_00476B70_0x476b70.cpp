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

// Function: sub_00476B70
// Address: 0x476b70 - 0x476bc8
void sub_00476B70_0x476b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476B70_0x476b70");
#endif

    switch (ctx->pc) {
        case 0x476b84u: goto label_476b84;
        default: break;
    }

    ctx->pc = 0x476b70u;

    // 0x476b70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x476B70u;
    {
        const bool branch_taken_0x476b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x476b70) {
            ctx->pc = 0x476B84u;
            goto label_476b84;
        }
    }
    ctx->pc = 0x476B78u;
    // 0x476b78: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x476b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x476b7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x476B7Cu;
    {
        const bool branch_taken_0x476b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B7Cu;
        // 0x476b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476b7c) {
            ctx->pc = 0x476B8Cu;
            goto label_476b8c;
        }
    }
    ctx->pc = 0x476B84u;
label_476b84:
    // 0x476b84: 0x3e00008  jr          $ra
    ctx->pc = 0x476B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B84u;
        // 0x476b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476B8Cu;
label_476b8c:
    // 0x476b8c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x476B8Cu;
    {
        const bool branch_taken_0x476b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x476B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B8Cu;
        // 0x476b90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476b8c) {
            ctx->pc = 0x476BA4u;
            goto label_476ba4;
        }
    }
    ctx->pc = 0x476B94u;
    // 0x476b94: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x476B94u;
    {
        const bool branch_taken_0x476b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x476B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B94u;
        // 0x476b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476b94) {
            ctx->pc = 0x476BB4u;
            goto label_476bb4;
        }
    }
    ctx->pc = 0x476B9Cu;
    // 0x476b9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x476B9Cu;
    {
        const bool branch_taken_0x476b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476b9c) {
            ctx->pc = 0x476BC0u;
            goto label_476bc0;
        }
    }
    ctx->pc = 0x476BA4u;
label_476ba4:
    // 0x476ba4: 0x10c0fff7  beqz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x476BA4u;
    {
        const bool branch_taken_0x476ba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x476BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476BA4u;
        // 0x476ba8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476ba4) {
            ctx->pc = 0x476B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476b84;
        }
    }
    ctx->pc = 0x476BACu;
    // 0x476bac: 0x3e00008  jr          $ra
    ctx->pc = 0x476BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476BACu;
        // 0x476bb0: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476BB4u;
label_476bb4:
    // 0x476bb4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x476bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x476bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x476BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476BB8u;
        // 0x476bbc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476BC0u;
label_476bc0:
    // 0x476bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x476BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476BC8u;
}
