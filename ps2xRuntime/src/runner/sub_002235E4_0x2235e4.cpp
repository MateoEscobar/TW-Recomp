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

// Function: sub_002235E4
// Address: 0x2235e4 - 0x2235f8
void sub_002235E4_0x2235e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002235E4_0x2235e4");
#endif

    switch (ctx->pc) {
        case 0x2235f0u: goto label_2235f0;
        default: break;
    }

    ctx->pc = 0x2235e4u;

    // 0x2235e4: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x2235e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2235e8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2235e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2235ec: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2235ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2235f0:
    // 0x2235f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2235F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2235F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2235F8u;
}
