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

// Function: sub_004E3968
// Address: 0x4e3968 - 0x4e3970
void sub_004E3968_0x4e3968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3968_0x4e3968");
#endif

    ctx->pc = 0x4e3968u;

    // 0x4e3968: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3968u;
        // 0x4e396c: 0xac850458  sw          $a1, 0x458($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3970u;
}
