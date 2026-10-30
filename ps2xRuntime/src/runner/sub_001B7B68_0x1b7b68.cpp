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

// Function: sub_001B7B68
// Address: 0x1b7b68 - 0x1b7b88
void sub_001B7B68_0x1b7b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B68_0x1b7b68");
#endif

    ctx->pc = 0x1b7b68u;

    // 0x1b7b68: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7b6c: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x1b7b6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b7b70: 0x80a60002  lb          $a2, 0x2($a1)
    ctx->pc = 0x1b7b70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1b7b74: 0xa0820464  sb          $v0, 0x464($a0)
    ctx->pc = 0x1b7b74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1124), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b7b78: 0xa0830465  sb          $v1, 0x465($a0)
    ctx->pc = 0x1b7b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1125), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b7b7c: 0xa0860466  sb          $a2, 0x466($a0)
    ctx->pc = 0x1b7b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1126), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B88u;
}
