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

// Function: sub_001C29F8
// Address: 0x1c29f8 - 0x1c2a10
void sub_001C29F8_0x1c29f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C29F8_0x1c29f8");
#endif

    ctx->pc = 0x1c29f8u;

    // 0x1c29f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c29fc: 0xac8003f0  sw          $zero, 0x3F0($a0)
    ctx->pc = 0x1c29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 0));
    // 0x1c2a00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c2a04: 0xac8003f8  sw          $zero, 0x3F8($a0)
    ctx->pc = 0x1c2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 0));
    // 0x1c2a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A08u;
        // 0x1c2a0c: 0xac8203f4  sw          $v0, 0x3F4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2A10u;
}
