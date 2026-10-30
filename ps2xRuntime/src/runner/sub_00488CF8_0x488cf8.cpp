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

// Function: sub_00488CF8
// Address: 0x488cf8 - 0x488d08
void sub_00488CF8_0x488cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488CF8_0x488cf8");
#endif

    ctx->pc = 0x488cf8u;

    // 0x488cf8: 0xaf848658  sw          $a0, -0x79A8($gp)
    ctx->pc = 0x488cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 4));
    // 0x488cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x488CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488CFCu;
        // 0x488d00: 0xaf85865c  sw          $a1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488D04u;
    // 0x488d04: 0x0  nop
    ctx->pc = 0x488d04u;
    // NOP
    ctx->pc = 0x488d08u;
}
