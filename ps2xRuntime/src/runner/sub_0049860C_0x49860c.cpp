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

// Function: sub_0049860C
// Address: 0x49860c - 0x498620
void sub_0049860C_0x49860c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049860C_0x49860c");
#endif

    switch (ctx->pc) {
        case 0x498610u: goto label_498610;
        case 0x498614u: goto label_498614;
        default: break;
    }

    ctx->pc = 0x49860cu;

    // 0x49860c: 0x8f828740  lw          $v0, -0x78C0($gp)
    ctx->pc = 0x49860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
label_498610:
    // 0x498610: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x498610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_498614:
    // 0x498614: 0x3e00008  jr          $ra
    ctx->pc = 0x498614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498614u;
        // 0x498618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49861Cu;
    // 0x49861c: 0x0  nop
    ctx->pc = 0x49861cu;
    // NOP
    ctx->pc = 0x498620u;
}
