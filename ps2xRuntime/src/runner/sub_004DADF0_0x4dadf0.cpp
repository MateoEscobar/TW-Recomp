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

// Function: sub_004DADF0
// Address: 0x4dadf0 - 0x4dae00
void sub_004DADF0_0x4dadf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DADF0_0x4dadf0");
#endif

    ctx->pc = 0x4dadf0u;

    // 0x4dadf0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4dadf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DADF4u;
        // 0x4dadf8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DADF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DADFCu;
    // 0x4dadfc: 0x0  nop
    ctx->pc = 0x4dadfcu;
    // NOP
    ctx->pc = 0x4dae00u;
}
