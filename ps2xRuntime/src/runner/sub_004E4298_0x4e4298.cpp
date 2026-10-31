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

// Function: sub_004E4298
// Address: 0x4e4298 - 0x4e42a8
void sub_004E4298_0x4e4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4298_0x4e4298");
#endif

    ctx->pc = 0x4e4298u;

    // 0x4e4298: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4e4298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e429c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E429Cu;
        // 0x4e42a0: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E42A4u;
    // 0x4e42a4: 0x0  nop
    ctx->pc = 0x4e42a4u;
    // NOP
    ctx->pc = 0x4e42a8u;
}
