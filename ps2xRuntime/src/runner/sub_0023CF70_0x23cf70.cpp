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

// Function: sub_0023CF70
// Address: 0x23cf70 - 0x23cf88
void sub_0023CF70_0x23cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CF70_0x23cf70");
#endif

    ctx->pc = 0x23cf70u;

    // 0x23cf70: 0xa0800331  sb          $zero, 0x331($a0)
    ctx->pc = 0x23cf70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 817), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cf74: 0xa0800332  sb          $zero, 0x332($a0)
    ctx->pc = 0x23cf74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 818), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cf78: 0xac800304  sw          $zero, 0x304($a0)
    ctx->pc = 0x23cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 0));
    // 0x23cf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF7Cu;
        // 0x23cf80: 0xac800300  sw          $zero, 0x300($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF84u;
    // 0x23cf84: 0x0  nop
    ctx->pc = 0x23cf84u;
    // NOP
    ctx->pc = 0x23cf88u;
}
