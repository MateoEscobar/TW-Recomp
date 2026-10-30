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

// Function: sub_001FDC90
// Address: 0x1fdc90 - 0x1fdca0
void sub_001FDC90_0x1fdc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDC90_0x1fdc90");
#endif

    ctx->pc = 0x1fdc90u;

    // 0x1fdc90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC94u;
        // 0x1fdc98: 0xc440f4fc  lwc1        $f0, -0xB04($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDC9Cu;
    // 0x1fdc9c: 0x0  nop
    ctx->pc = 0x1fdc9cu;
    // NOP
    ctx->pc = 0x1fdca0u;
}
