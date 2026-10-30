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

// Function: sub_004DD078
// Address: 0x4dd078 - 0x4dd088
void sub_004DD078_0x4dd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD078_0x4dd078");
#endif

    ctx->pc = 0x4dd078u;

    // 0x4dd078: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4dd07c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD07Cu;
        // 0x4dd080: 0x2442dbf0  addiu       $v0, $v0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD084u;
    // 0x4dd084: 0x0  nop
    ctx->pc = 0x4dd084u;
    // NOP
    ctx->pc = 0x4dd088u;
}
