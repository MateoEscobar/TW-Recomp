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

// Function: sub_001A3920
// Address: 0x1a3920 - 0x1a3930
void sub_001A3920_0x1a3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3920_0x1a3920");
#endif

    ctx->pc = 0x1a3920u;

    // 0x1a3920: 0xe48d0348  swc1        $f13, 0x348($a0)
    ctx->pc = 0x1a3920u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 840), bits); }
    // 0x1a3924: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3924u;
        // 0x1a3928: 0xe48c0344  swc1        $f12, 0x344($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 836), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A392Cu;
    // 0x1a392c: 0x0  nop
    ctx->pc = 0x1a392cu;
    // NOP
    ctx->pc = 0x1a3930u;
}
