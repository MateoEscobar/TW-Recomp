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

// Function: sub_003A8578
// Address: 0x3a8578 - 0x3a8590
void sub_003A8578_0x3a8578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8578_0x3a8578");
#endif

    ctx->pc = 0x3a8578u;

    // 0x3a8578: 0x8c860400  lw          $a2, 0x400($a0)
    ctx->pc = 0x3a8578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3a857c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3a857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8580: 0xac830400  sw          $v1, 0x400($a0)
    ctx->pc = 0x3a8580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 3));
    // 0x3a8584: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a8584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8588: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8588u;
        // 0x3a858c: 0x7cc20010  sq          $v0, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8590u;
}
