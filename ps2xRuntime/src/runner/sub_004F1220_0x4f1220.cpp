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

// Function: sub_004F1220
// Address: 0x4f1220 - 0x4f1230
void sub_004F1220_0x4f1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1220_0x4f1220");
#endif

    ctx->pc = 0x4f1220u;

    // 0x4f1220: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f1220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1224: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1224u;
        // 0x4f1228: 0x7c820080  sq          $v0, 0x80($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F122Cu;
    // 0x4f122c: 0x0  nop
    ctx->pc = 0x4f122cu;
    // NOP
    ctx->pc = 0x4f1230u;
}
