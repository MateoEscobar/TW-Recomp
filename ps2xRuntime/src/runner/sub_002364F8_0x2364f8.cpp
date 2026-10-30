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

// Function: sub_002364F8
// Address: 0x2364f8 - 0x236508
void sub_002364F8_0x2364f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002364F8_0x2364f8");
#endif

    ctx->pc = 0x2364f8u;

    // 0x2364f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2364fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2364FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364FCu;
        // 0x236500: 0xe44c0278  swc1        $f12, 0x278($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236504u;
    // 0x236504: 0x0  nop
    ctx->pc = 0x236504u;
    // NOP
    ctx->pc = 0x236508u;
}
