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

// Function: sub_00488B78
// Address: 0x488b78 - 0x488b88
void sub_00488B78_0x488b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488B78_0x488b78");
#endif

    ctx->pc = 0x488b78u;

    // 0x488b78: 0xaf848660  sw          $a0, -0x79A0($gp)
    ctx->pc = 0x488b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 4));
    // 0x488b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x488B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B7Cu;
        // 0x488b80: 0xaf858664  sw          $a1, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488B84u;
    // 0x488b84: 0x0  nop
    ctx->pc = 0x488b84u;
    // NOP
    ctx->pc = 0x488b88u;
}
