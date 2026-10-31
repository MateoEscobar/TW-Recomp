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

// Function: sub_001FE048
// Address: 0x1fe048 - 0x1fe060
void sub_001FE048_0x1fe048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE048_0x1fe048");
#endif

    ctx->pc = 0x1fe048u;

    // 0x1fe048: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE04Cu;
        // 0x1fe050: 0x2442eef0  addiu       $v0, $v0, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE054u;
    // 0x1fe054: 0x0  nop
    ctx->pc = 0x1fe054u;
    // NOP
    // 0x1fe058: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1fe058u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1fe05c: 0x0  nop
    ctx->pc = 0x1fe05cu;
    // NOP
    ctx->pc = 0x1fe060u;
}
