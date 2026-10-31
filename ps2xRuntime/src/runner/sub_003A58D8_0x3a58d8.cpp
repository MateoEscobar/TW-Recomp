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

// Function: sub_003A58D8
// Address: 0x3a58d8 - 0x3a58e8
void sub_003A58D8_0x3a58d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A58D8_0x3a58d8");
#endif

    ctx->pc = 0x3a58d8u;

    // 0x3a58d8: 0xe48c00c8  swc1        $f12, 0xC8($a0)
    ctx->pc = 0x3a58d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
    // 0x3a58dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A58DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58DCu;
        // 0x3a58e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A58E4u;
    // 0x3a58e4: 0x0  nop
    ctx->pc = 0x3a58e4u;
    // NOP
    ctx->pc = 0x3a58e8u;
}
