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

// Function: sub_00472C08
// Address: 0x472c08 - 0x472c18
void sub_00472C08_0x472c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472C08_0x472c08");
#endif

    ctx->pc = 0x472c08u;

    // 0x472c08: 0xaf848528  sw          $a0, -0x7AD8($gp)
    ctx->pc = 0x472c08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935848), GPR_U32(ctx, 4));
    // 0x472c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x472C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472C0Cu;
        // 0x472c10: 0xaf85852c  sw          $a1, -0x7AD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935852), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472C14u;
    // 0x472c14: 0x0  nop
    ctx->pc = 0x472c14u;
    // NOP
    ctx->pc = 0x472c18u;
}
