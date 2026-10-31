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

// Function: sub_0010F978
// Address: 0x10f978 - 0x10f988
void sub_0010F978_0x10f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F978_0x10f978");
#endif

    ctx->pc = 0x10f978u;

    // 0x10f978: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F97Cu;
        // 0x10f980: 0xac458670  sw          $a1, -0x7990($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F984u;
    // 0x10f984: 0x0  nop
    ctx->pc = 0x10f984u;
    // NOP
    ctx->pc = 0x10f988u;
}
