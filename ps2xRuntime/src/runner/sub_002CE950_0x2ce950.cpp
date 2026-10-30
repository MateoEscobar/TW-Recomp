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

// Function: sub_002CE950
// Address: 0x2ce950 - 0x2ce960
void sub_002CE950_0x2ce950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE950_0x2ce950");
#endif

    ctx->pc = 0x2ce950u;

    // 0x2ce950: 0xa0800048  sb          $zero, 0x48($a0)
    ctx->pc = 0x2ce950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce954: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE954u;
        // 0x2ce958: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE95Cu;
    // 0x2ce95c: 0x0  nop
    ctx->pc = 0x2ce95cu;
    // NOP
    ctx->pc = 0x2ce960u;
}
