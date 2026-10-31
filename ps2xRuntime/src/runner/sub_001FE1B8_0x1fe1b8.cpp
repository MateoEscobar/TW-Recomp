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

// Function: sub_001FE1B8
// Address: 0x1fe1b8 - 0x1fe1c8
void sub_001FE1B8_0x1fe1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE1B8_0x1fe1b8");
#endif

    ctx->pc = 0x1fe1b8u;

    // 0x1fe1b8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1BCu;
        // 0x1fe1c0: 0xac44ef64  sw          $a0, -0x109C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1C4u;
    // 0x1fe1c4: 0x0  nop
    ctx->pc = 0x1fe1c4u;
    // NOP
    ctx->pc = 0x1fe1c8u;
}
