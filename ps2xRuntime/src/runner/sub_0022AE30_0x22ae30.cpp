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

// Function: sub_0022AE30
// Address: 0x22ae30 - 0x22ae40
void sub_0022AE30_0x22ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE30_0x22ae30");
#endif

    ctx->pc = 0x22ae30u;

    // 0x22ae30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x22ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x22ae34: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x22ae34u;
    { uint32_t bits = FAST_READ32(0x5102CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae38: 0x3e00008  jr          $ra
    ctx->pc = 0x22AE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE38u;
        // 0x22ae3c: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AE40u;
}
