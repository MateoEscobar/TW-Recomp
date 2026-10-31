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

// Function: sub_00465A20
// Address: 0x465a20 - 0x465a78
void sub_00465A20_0x465a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465A20_0x465a20");
#endif

    switch (ctx->pc) {
        case 0x465a38u: goto label_465a38;
        default: break;
    }

    ctx->pc = 0x465a20u;

    // 0x465a20: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465a24: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x465a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x465a28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x465a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465a2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x465a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465a30: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x465a30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465a34: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x465a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_465a38:
    // 0x465a38: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x465a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x465a3c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x465a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465a40: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465A40u;
    {
        const bool branch_taken_0x465a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x465a40) {
            ctx->pc = 0x465A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465A40u;
            // 0x465a44: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465A50u;
            goto label_465a50;
        }
    }
    ctx->pc = 0x465A48u;
    // 0x465a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465A48u;
    {
        const bool branch_taken_0x465a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465A48u;
        // 0x465a4c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465a48) {
            ctx->pc = 0x465A64u;
            goto label_465a64;
        }
    }
    ctx->pc = 0x465A50u;
label_465a50:
    // 0x465a50: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x465a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465a54: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x465a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465a58: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x465A58u;
    {
        const bool branch_taken_0x465a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465A58u;
        // 0x465a5c: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465a58) {
            ctx->pc = 0x465A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465a38;
        }
    }
    ctx->pc = 0x465A60u;
    // 0x465a60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x465a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465a64:
    // 0x465a64: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x465a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x465a68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x465a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x465A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465A6Cu;
        // 0x465a70: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465A74u;
    // 0x465a74: 0x0  nop
    ctx->pc = 0x465a74u;
    // NOP
    ctx->pc = 0x465a78u;
}
