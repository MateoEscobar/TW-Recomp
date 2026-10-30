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

// Function: sub_00203AF8
// Address: 0x203af8 - 0x203b08
void sub_00203AF8_0x203af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203AF8_0x203af8");
#endif

    ctx->pc = 0x203af8u;

    // 0x203af8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x203afc: 0x3e00008  jr          $ra
    ctx->pc = 0x203AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AFCu;
        // 0x203b00: 0xc440f5c4  lwc1        $f0, -0xA3C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203B04u;
    // 0x203b04: 0x0  nop
    ctx->pc = 0x203b04u;
    // NOP
    ctx->pc = 0x203b08u;
}
