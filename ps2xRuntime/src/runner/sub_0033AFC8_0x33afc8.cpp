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

// Function: sub_0033AFC8
// Address: 0x33afc8 - 0x33afe0
void sub_0033AFC8_0x33afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AFC8_0x33afc8");
#endif

    ctx->pc = 0x33afc8u;

    // 0x33afc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x33afcc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33afccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x33afd0: 0x2442b958  addiu       $v0, $v0, -0x46A8
    ctx->pc = 0x33afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949208));
    // 0x33afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x33AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFD4u;
        // 0x33afd8: 0xac6227e4  sw          $v0, 0x27E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AFDCu;
    // 0x33afdc: 0x0  nop
    ctx->pc = 0x33afdcu;
    // NOP
    ctx->pc = 0x33afe0u;
}
