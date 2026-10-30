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

// Function: sub_004161D8
// Address: 0x4161d8 - 0x4161e8
void sub_004161D8_0x4161d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004161D8_0x4161d8");
#endif

    ctx->pc = 0x4161d8u;

    // 0x4161d8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4161d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4161dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4161DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4161E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161DCu;
        // 0x4161e0: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4161DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4161E4u;
    // 0x4161e4: 0x0  nop
    ctx->pc = 0x4161e4u;
    // NOP
    ctx->pc = 0x4161e8u;
}
