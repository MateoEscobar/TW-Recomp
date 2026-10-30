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

// Function: sub_001FE2C0
// Address: 0x1fe2c0 - 0x1fe2d0
void sub_001FE2C0_0x1fe2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2C0_0x1fe2c0");
#endif

    ctx->pc = 0x1fe2c0u;

    // 0x1fe2c0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C4u;
        // 0x1fe2c8: 0xac44eeb8  sw          $a0, -0x1148($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2CCu;
    // 0x1fe2cc: 0x0  nop
    ctx->pc = 0x1fe2ccu;
    // NOP
    ctx->pc = 0x1fe2d0u;
}
