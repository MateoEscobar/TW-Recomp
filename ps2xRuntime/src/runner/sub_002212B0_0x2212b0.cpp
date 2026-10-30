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

// Function: sub_002212B0
// Address: 0x2212b0 - 0x2212c8
void sub_002212B0_0x2212b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002212B0_0x2212b0");
#endif

    ctx->pc = 0x2212b0u;

    // 0x2212b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2212b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2212b4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2212B4u;
    {
        const bool branch_taken_0x2212b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2212b4) {
            ctx->pc = 0x2212B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2212B4u;
            // 0x2212b8: 0xe48c027c  swc1        $f12, 0x27C($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212BCu;
            goto label_2212bc;
        }
    }
    ctx->pc = 0x2212BCu;
label_2212bc:
    // 0x2212bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2212BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2212BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2212C4u;
    // 0x2212c4: 0x0  nop
    ctx->pc = 0x2212c4u;
    // NOP
    ctx->pc = 0x2212c8u;
}
