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

// Function: sub_002C4A48
// Address: 0x2c4a48 - 0x2c4a58
void sub_002C4A48_0x2c4a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4A48_0x2c4a48");
#endif

    ctx->pc = 0x2c4a48u;

    // 0x2c4a48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A4Cu;
        // 0x2c4a50: 0xac40021c  sw          $zero, 0x21C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4A54u;
    // 0x2c4a54: 0x0  nop
    ctx->pc = 0x2c4a54u;
    // NOP
    ctx->pc = 0x2c4a58u;
}
