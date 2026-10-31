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

// Function: sub_0041CF30
// Address: 0x41cf30 - 0x41cf40
void sub_0041CF30_0x41cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CF30_0x41cf30");
#endif

    ctx->pc = 0x41cf30u;

    // 0x41cf30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41cf34: 0x3e00008  jr          $ra
    ctx->pc = 0x41CF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF34u;
        // 0x41cf38: 0x908203e8  lbu         $v0, 0x3E8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1000)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CF3Cu;
    // 0x41cf3c: 0x0  nop
    ctx->pc = 0x41cf3cu;
    // NOP
    ctx->pc = 0x41cf40u;
}
