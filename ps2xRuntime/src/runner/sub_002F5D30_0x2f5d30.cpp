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

// Function: sub_002F5D30
// Address: 0x2f5d30 - 0x2f5d50
void sub_002F5D30_0x2f5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D30_0x2f5d30");
#endif

    ctx->pc = 0x2f5d30u;

    // 0x2f5d30: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x2f5d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2f5d34: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2f5d34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2f5d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5D38u;
    {
        const bool branch_taken_0x2f5d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D38u;
        // 0x2f5d3c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d38) {
            ctx->pc = 0x2F5D48u;
            goto label_2f5d48;
        }
    }
    ctx->pc = 0x2F5D40u;
    // 0x2f5d40: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2f5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2f5d44: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2f5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2f5d48:
    // 0x2f5d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5D50u;
}
