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

// Function: sub_004224C4
// Address: 0x4224c4 - 0x4224d8
void sub_004224C4_0x4224c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004224C4_0x4224c4");
#endif

    ctx->pc = 0x4224c4u;

    // 0x4224c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4224C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4224C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4224CCu;
    // 0x4224cc: 0x0  nop
    ctx->pc = 0x4224ccu;
    // NOP
    // 0x4224d0: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4224d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4224d4: 0x0  nop
    ctx->pc = 0x4224d4u;
    // NOP
    ctx->pc = 0x4224d8u;
}
