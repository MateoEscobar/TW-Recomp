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

// Function: sub_00306C28
// Address: 0x306c28 - 0x306c48
void sub_00306C28_0x306c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306C28_0x306c28");
#endif

    ctx->pc = 0x306c28u;

    // 0x306c28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x306c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x306c2c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306C2Cu;
    {
        const bool branch_taken_0x306c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x306c2c) {
            ctx->pc = 0x306C40u;
            goto label_306c40;
        }
    }
    ctx->pc = 0x306C34u;
    // 0x306c34: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x306C34u;
    {
        const bool branch_taken_0x306c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C34u;
        // 0x306c38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c34) {
            ctx->pc = 0x306C40u;
            goto label_306c40;
        }
    }
    ctx->pc = 0x306C3Cu;
    // 0x306c3c: 0xac40a1a0  sw          $zero, -0x5E60($v0)
    ctx->pc = 0x306c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943136), GPR_U32(ctx, 0));
label_306c40:
    // 0x306c40: 0x3e00008  jr          $ra
    ctx->pc = 0x306C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306C48u;
}
