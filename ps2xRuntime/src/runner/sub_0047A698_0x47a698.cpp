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

// Function: sub_0047A698
// Address: 0x47a698 - 0x47a6a4
void sub_0047A698_0x47a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A698_0x47a698");
#endif

    ctx->pc = 0x47a698u;

    // 0x47a698: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x47a698u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x47a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x47A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A69Cu;
        // 0x47a6a0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A6A4u;
}
