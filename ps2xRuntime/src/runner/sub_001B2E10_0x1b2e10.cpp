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

// Function: sub_001B2E10
// Address: 0x1b2e10 - 0x1b2e38
void sub_001B2E10_0x1b2e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2E10_0x1b2e10");
#endif

    ctx->pc = 0x1b2e10u;

    // 0x1b2e10: 0x248215d0  addiu       $v0, $a0, 0x15D0
    ctx->pc = 0x1b2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5584));
    // 0x1b2e14: 0xe44c0020  swc1        $f12, 0x20($v0)
    ctx->pc = 0x1b2e14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b2e18: 0x24843f10  addiu       $a0, $a0, 0x3F10
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16144));
    // 0x1b2e1c: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x1b2e1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1b2e20: 0xe44d0024  swc1        $f13, 0x24($v0)
    ctx->pc = 0x1b2e20u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1b2e24: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x1b2e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1b2e28: 0xe48d0024  swc1        $f13, 0x24($a0)
    ctx->pc = 0x1b2e28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1b2e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E2Cu;
        // 0x1b2e30: 0xe48c0028  swc1        $f12, 0x28($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E34u;
    // 0x1b2e34: 0x0  nop
    ctx->pc = 0x1b2e34u;
    // NOP
    ctx->pc = 0x1b2e38u;
}
