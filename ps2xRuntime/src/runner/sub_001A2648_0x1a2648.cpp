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

// Function: sub_001A2648
// Address: 0x1a2648 - 0x1a2660
void sub_001A2648_0x1a2648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2648_0x1a2648");
#endif

    ctx->pc = 0x1a2648u;

    // 0x1a2648: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a2648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a264c: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x1a264cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x1a2650: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1a2650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1a2654: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2654u;
        // 0x1a2658: 0xa08300f8  sb          $v1, 0xF8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 248), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A265Cu;
    // 0x1a265c: 0x0  nop
    ctx->pc = 0x1a265cu;
    // NOP
    ctx->pc = 0x1a2660u;
}
