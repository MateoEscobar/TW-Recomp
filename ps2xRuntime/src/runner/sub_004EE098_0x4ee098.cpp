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

// Function: sub_004EE098
// Address: 0x4ee098 - 0x4ee0a8
void sub_004EE098_0x4ee098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE098_0x4ee098");
#endif

    ctx->pc = 0x4ee098u;

    // 0x4ee098: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee09c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE09Cu;
        // 0x4ee0a0: 0x24421ee8  addiu       $v0, $v0, 0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE0A4u;
    // 0x4ee0a4: 0x0  nop
    ctx->pc = 0x4ee0a4u;
    // NOP
    ctx->pc = 0x4ee0a8u;
}
