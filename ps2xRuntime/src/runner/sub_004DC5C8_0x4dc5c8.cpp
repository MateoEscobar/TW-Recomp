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

// Function: sub_004DC5C8
// Address: 0x4dc5c8 - 0x4dc5d8
void sub_004DC5C8_0x4dc5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC5C8_0x4dc5c8");
#endif

    ctx->pc = 0x4dc5c8u;

    // 0x4dc5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4dc5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4dc5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC5D4u;
    // 0x4dc5d4: 0x0  nop
    ctx->pc = 0x4dc5d4u;
    // NOP
    ctx->pc = 0x4dc5d8u;
}
