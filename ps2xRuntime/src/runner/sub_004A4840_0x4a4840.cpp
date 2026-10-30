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

// Function: sub_004A4840
// Address: 0x4a4840 - 0x4a4850
void sub_004A4840_0x4a4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4840_0x4a4840");
#endif

    ctx->pc = 0x4a4840u;

    // 0x4a4840: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4848u;
    // 0x4a4848: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4a4848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a484c: 0x0  nop
    ctx->pc = 0x4a484cu;
    // NOP
    ctx->pc = 0x4a4850u;
}
