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

// Function: sub_0041D758
// Address: 0x41d758 - 0x41d770
void sub_0041D758_0x41d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D758_0x41d758");
#endif

    ctx->pc = 0x41d758u;

    // 0x41d758: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d75c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d760: 0x3e00008  jr          $ra
    ctx->pc = 0x41D760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D760u;
        // 0x41d764: 0xac645700  sw          $a0, 0x5700($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D768u;
    // 0x41d768: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x41d768u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x41d76c: 0x0  nop
    ctx->pc = 0x41d76cu;
    // NOP
    ctx->pc = 0x41d770u;
}
