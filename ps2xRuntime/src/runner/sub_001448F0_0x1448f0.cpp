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

// Function: sub_001448F0
// Address: 0x1448f0 - 0x144900
void sub_001448F0_0x1448f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001448F0_0x1448f0");
#endif

    ctx->pc = 0x1448f0u;

    // 0x1448f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1448f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1448f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1448F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1448F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448F4u;
        // 0x1448f8: 0xac40b6f8  sw          $zero, -0x4908($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1448FCu;
    // 0x1448fc: 0x0  nop
    ctx->pc = 0x1448fcu;
    // NOP
    ctx->pc = 0x144900u;
}
