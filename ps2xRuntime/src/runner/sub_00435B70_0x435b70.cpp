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

// Function: sub_00435B70
// Address: 0x435b70 - 0x435ba0
void sub_00435B70_0x435b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435B70_0x435b70");
#endif

    switch (ctx->pc) {
        case 0x435b80u: goto label_435b80;
        default: break;
    }

    ctx->pc = 0x435b70u;

    // 0x435b70: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x435B70u;
    {
        const bool branch_taken_0x435b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x435B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B70u;
        // 0x435b74: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435b70) {
            ctx->pc = 0x435B98u;
            goto label_435b98;
        }
    }
    ctx->pc = 0x435B78u;
    // 0x435b78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x435b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x435b7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x435b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_435b80:
    // 0x435b80: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x435b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x435b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x435b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x435b88: 0x0  nop
    ctx->pc = 0x435b88u;
    // NOP
    // 0x435b8c: 0x0  nop
    ctx->pc = 0x435b8cu;
    // NOP
    // 0x435b90: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435B90u;
    {
        const bool branch_taken_0x435b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x435B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B90u;
        // 0x435b94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435b90) {
            ctx->pc = 0x435B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435b80;
        }
    }
    ctx->pc = 0x435B98u;
label_435b98:
    // 0x435b98: 0x3e00008  jr          $ra
    ctx->pc = 0x435B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435BA0u;
}
