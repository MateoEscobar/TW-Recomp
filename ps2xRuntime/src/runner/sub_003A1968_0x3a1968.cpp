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

// Function: sub_003A1968
// Address: 0x3a1968 - 0x3a1978
void sub_003A1968_0x3a1968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1968_0x3a1968");
#endif

    ctx->pc = 0x3a1968u;

    // 0x3a1968: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a1968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a196c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A196Cu;
        // 0x3a1970: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1974u;
    // 0x3a1974: 0x0  nop
    ctx->pc = 0x3a1974u;
    // NOP
    ctx->pc = 0x3a1978u;
}
