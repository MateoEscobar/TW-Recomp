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

// Function: sub_00498550
// Address: 0x498550 - 0x498560
void sub_00498550_0x498550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498550_0x498550");
#endif

    ctx->pc = 0x498550u;

    // 0x498550: 0xaf848790  sw          $a0, -0x7870($gp)
    ctx->pc = 0x498550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 4));
    // 0x498554: 0x3e00008  jr          $ra
    ctx->pc = 0x498554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498554u;
        // 0x498558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49855Cu;
    // 0x49855c: 0x0  nop
    ctx->pc = 0x49855cu;
    // NOP
    ctx->pc = 0x498560u;
}
