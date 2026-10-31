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

// Function: sub_004EEC40
// Address: 0x4eec40 - 0x4eec58
void sub_004EEC40_0x4eec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEC40_0x4eec40");
#endif

    ctx->pc = 0x4eec40u;

    // 0x4eec40: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eec44: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC44u;
        // 0x4eec48: 0x24426620  addiu       $v0, $v0, 0x6620 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEC4Cu;
    // 0x4eec4c: 0x0  nop
    ctx->pc = 0x4eec4cu;
    // NOP
    // 0x4eec50: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x4eec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x4eec54: 0x0  nop
    ctx->pc = 0x4eec54u;
    // NOP
    ctx->pc = 0x4eec58u;
}
