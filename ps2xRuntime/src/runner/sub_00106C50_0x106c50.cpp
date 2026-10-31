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

// Function: sub_00106C50
// Address: 0x106c50 - 0x106c80
void sub_00106C50_0x106c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C50_0x106c50");
#endif

    ctx->pc = 0x106c50u;

    // 0x106c50: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x106c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x106c54: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x106c54u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x106c58: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x106c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x106c5c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x106c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x106c60: 0x3e00008  jr          $ra
    ctx->pc = 0x106C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C60u;
        // 0x106c64: 0xa462001e  sh          $v0, 0x1E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C68u;
    // 0x106c68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x106c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x106c6c: 0x0  nop
    ctx->pc = 0x106c6cu;
    // NOP
    // 0x106c70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x106c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106c74: 0x0  nop
    ctx->pc = 0x106c74u;
    // NOP
    // 0x106c78: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x106c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x106c7c: 0x0  nop
    ctx->pc = 0x106c7cu;
    // NOP
    ctx->pc = 0x106c80u;
}
