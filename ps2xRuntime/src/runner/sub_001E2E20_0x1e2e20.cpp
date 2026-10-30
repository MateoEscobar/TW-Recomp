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

// Function: sub_001E2E20
// Address: 0x1e2e20 - 0x1e2e40
void sub_001E2E20_0x1e2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2E20_0x1e2e20");
#endif

    ctx->pc = 0x1e2e20u;

    // 0x1e2e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2e24: 0xe48c00f0  swc1        $f12, 0xF0($a0)
    ctx->pc = 0x1e2e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x1e2e28: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x1e2e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x1e2e2c: 0xe48c00b8  swc1        $f12, 0xB8($a0)
    ctx->pc = 0x1e2e2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x1e2e30: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x1e2e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x1e2e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E34u;
        // 0x1e2e38: 0xe48c00f8  swc1        $f12, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E3Cu;
    // 0x1e2e3c: 0x0  nop
    ctx->pc = 0x1e2e3cu;
    // NOP
    ctx->pc = 0x1e2e40u;
}
