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

// Function: sub_0039BB18
// Address: 0x39bb18 - 0x39bb38
void sub_0039BB18_0x39bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BB18_0x39bb18");
#endif

    ctx->pc = 0x39bb18u;

    // 0x39bb18: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x39bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x39bb1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x39bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x39bb20: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x39bb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x39bb24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39bb28: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39bb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x39bb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x39BB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB2Cu;
        // 0x39bb30: 0xac8200c4  sw          $v0, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BB34u;
    // 0x39bb34: 0x0  nop
    ctx->pc = 0x39bb34u;
    // NOP
    ctx->pc = 0x39bb38u;
}
