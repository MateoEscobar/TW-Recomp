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

// Function: sub_004E8248
// Address: 0x4e8248 - 0x4e8260
void sub_004E8248_0x4e8248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8248_0x4e8248");
#endif

    ctx->pc = 0x4e8248u;

    // 0x4e8248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e824c: 0xac821b7c  sw          $v0, 0x1B7C($a0)
    ctx->pc = 0x4e824cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7036), GPR_U32(ctx, 2));
    // 0x4e8250: 0xac821b70  sw          $v0, 0x1B70($a0)
    ctx->pc = 0x4e8250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7024), GPR_U32(ctx, 2));
    // 0x4e8254: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8254u;
        // 0x4e8258: 0xac821b94  sw          $v0, 0x1B94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E825Cu;
    // 0x4e825c: 0x0  nop
    ctx->pc = 0x4e825cu;
    // NOP
    ctx->pc = 0x4e8260u;
}
