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

// Function: sub_001FE198
// Address: 0x1fe198 - 0x1fe1a8
void sub_001FE198_0x1fe198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE198_0x1fe198");
#endif

    ctx->pc = 0x1fe198u;

    // 0x1fe198: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1fe19c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE19Cu;
        // 0x1fe1a0: 0x9462eec0  lhu         $v0, -0x1140($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962880)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1A4u;
    // 0x1fe1a4: 0x0  nop
    ctx->pc = 0x1fe1a4u;
    // NOP
    ctx->pc = 0x1fe1a8u;
}
