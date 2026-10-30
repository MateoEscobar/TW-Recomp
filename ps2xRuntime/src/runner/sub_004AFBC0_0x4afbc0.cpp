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

// Function: sub_004AFBC0
// Address: 0x4afbc0 - 0x4afbd0
void sub_004AFBC0_0x4afbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFBC0_0x4afbc0");
#endif

    ctx->pc = 0x4afbc0u;

    // 0x4afbc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4afbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4afbc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4afbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBC8u;
        // 0x4afbcc: 0xa4850048  sh          $a1, 0x48($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFBD0u;
}
