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

// Function: sub_00198B98
// Address: 0x198b98 - 0x198ba8
void sub_00198B98_0x198b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198B98_0x198b98");
#endif

    ctx->pc = 0x198b98u;

    // 0x198b98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x198B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B9Cu;
        // 0x198ba0: 0xc440006c  lwc1        $f0, 0x6C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198BA4u;
    // 0x198ba4: 0x0  nop
    ctx->pc = 0x198ba4u;
    // NOP
    ctx->pc = 0x198ba8u;
}
