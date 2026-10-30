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

// Function: sub_004DA7D0
// Address: 0x4da7d0 - 0x4da7e0
void sub_004DA7D0_0x4da7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA7D0_0x4da7d0");
#endif

    ctx->pc = 0x4da7d0u;

    // 0x4da7d0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4da7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA7D4u;
        // 0x4da7d8: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA7DCu;
    // 0x4da7dc: 0x0  nop
    ctx->pc = 0x4da7dcu;
    // NOP
    ctx->pc = 0x4da7e0u;
}
