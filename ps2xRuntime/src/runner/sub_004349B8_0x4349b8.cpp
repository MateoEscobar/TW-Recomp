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

// Function: sub_004349B8
// Address: 0x4349b8 - 0x4349c8
void sub_004349B8_0x4349b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004349B8_0x4349b8");
#endif

    ctx->pc = 0x4349b8u;

    // 0x4349b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4349b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4349bc: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x4349bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5169ECu));
    // 0x4349c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4349C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4349C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349C0u;
        // 0x4349c4: 0xac640058  sw          $a0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4349C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4349C8u;
}
