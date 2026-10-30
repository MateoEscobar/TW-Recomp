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

// Function: sub_004D04F8
// Address: 0x4d04f8 - 0x4d0508
void sub_004D04F8_0x4d04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D04F8_0x4d04f8");
#endif

    ctx->pc = 0x4d04f8u;

    // 0x4d04f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4d04f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d04fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D04FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D04FCu;
        // 0x4d0500: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D04FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0504u;
    // 0x4d0504: 0x0  nop
    ctx->pc = 0x4d0504u;
    // NOP
    ctx->pc = 0x4d0508u;
}
