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

// Function: sub_001B40E0
// Address: 0x1b40e0 - 0x1b40f8
void sub_001B40E0_0x1b40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B40E0_0x1b40e0");
#endif

    ctx->pc = 0x1b40e0u;

    // 0x1b40e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b40e4: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x1b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
    // 0x1b40e8: 0xe44c5260  swc1        $f12, 0x5260($v0)
    ctx->pc = 0x1b40e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x607070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x607070u, _value); } while (0); }
    // 0x1b40ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B40ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40ECu;
        // 0x1b40f0: 0xe44c2920  swc1        $f12, 0x2920($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 10528), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B40ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B40F4u;
    // 0x1b40f4: 0x0  nop
    ctx->pc = 0x1b40f4u;
    // NOP
    ctx->pc = 0x1b40f8u;
}
