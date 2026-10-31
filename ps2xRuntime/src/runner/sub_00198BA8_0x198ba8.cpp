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

// Function: sub_00198BA8
// Address: 0x198ba8 - 0x198bb8
void sub_00198BA8_0x198ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198BA8_0x198ba8");
#endif

    ctx->pc = 0x198ba8u;

    // 0x198ba8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198bac: 0x3e00008  jr          $ra
    ctx->pc = 0x198BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BACu;
        // 0x198bb0: 0xc4400078  lwc1        $f0, 0x78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198BB4u;
    // 0x198bb4: 0x0  nop
    ctx->pc = 0x198bb4u;
    // NOP
    ctx->pc = 0x198bb8u;
}
