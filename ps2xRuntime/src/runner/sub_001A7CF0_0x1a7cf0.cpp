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

// Function: sub_001A7CF0
// Address: 0x1a7cf0 - 0x1a7d10
void sub_001A7CF0_0x1a7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7CF0_0x1a7cf0");
#endif

    switch (ctx->pc) {
        case 0x1a7d00u: goto label_1a7d00;
        case 0x1a7d08u: goto label_1a7d08;
        default: break;
    }

    ctx->pc = 0x1a7cf0u;

    // 0x1a7cf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a7cf4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1a7cf8: 0xc440d2d4  lwc1        $f0, -0x2D2C($v0)
    ctx->pc = 0x1a7cf8u;
    { uint32_t bits = FAST_READ32(0x50D2D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7cfc: 0xc461d2d8  lwc1        $f1, -0x2D28($v1)
    ctx->pc = 0x1a7cfcu;
    { uint32_t bits = FAST_READ32(0x50D2D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7d00:
    // 0x1a7d00: 0xe4a0157c  swc1        $f0, 0x157C($a1)
    ctx->pc = 0x1a7d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5500), bits); }
    // 0x1a7d04: 0xe4a11580  swc1        $f1, 0x1580($a1)
    ctx->pc = 0x1a7d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5504), bits); }
label_1a7d08:
    // 0x1a7d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7D10u;
}
