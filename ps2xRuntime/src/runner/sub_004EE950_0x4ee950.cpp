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

// Function: sub_004EE950
// Address: 0x4ee950 - 0x4ee960
void sub_004EE950_0x4ee950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE950_0x4ee950");
#endif

    ctx->pc = 0x4ee950u;

    // 0x4ee950: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee954: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE954u;
        // 0x4ee958: 0x24425bf0  addiu       $v0, $v0, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE95Cu;
    // 0x4ee95c: 0x0  nop
    ctx->pc = 0x4ee95cu;
    // NOP
    ctx->pc = 0x4ee960u;
}
