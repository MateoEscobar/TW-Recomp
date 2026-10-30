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

// Function: sub_002F5D10
// Address: 0x2f5d10 - 0x2f5d30
void sub_002F5D10_0x2f5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D10_0x2f5d10");
#endif

    ctx->pc = 0x2f5d10u;

    // 0x2f5d10: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x2f5d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x2f5d14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5d18: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x2f5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x2f5d1c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5d20: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2f5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f5d24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D28u;
        // 0x2f5d2c: 0xac430640  sw          $v1, 0x640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5D30u;
}
