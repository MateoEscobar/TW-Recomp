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

// Function: sub_001CEC98
// Address: 0x1cec98 - 0x1cecb0
void sub_001CEC98_0x1cec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEC98_0x1cec98");
#endif

    ctx->pc = 0x1cec98u;

    // 0x1cec98: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1cec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1cec9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ceca0: 0xa08501b1  sb          $a1, 0x1B1($a0)
    ctx->pc = 0x1ceca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 433), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ceca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECA4u;
        // 0x1ceca8: 0xac8201b4  sw          $v0, 0x1B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CECACu;
    // 0x1cecac: 0x0  nop
    ctx->pc = 0x1cecacu;
    // NOP
    ctx->pc = 0x1cecb0u;
}
