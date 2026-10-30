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

// Function: sub_0041D6F0
// Address: 0x41d6f0 - 0x41d718
void sub_0041D6F0_0x41d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D6F0_0x41d6f0");
#endif

    ctx->pc = 0x41d6f0u;

    // 0x41d6f0: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x41d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41d6f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41d6f8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x41d6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x41d6fc: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x41d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
    // 0x41d700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41d704: 0x3e00008  jr          $ra
    ctx->pc = 0x41D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D704u;
        // 0x41d708: 0x8c6214d8  lw          $v0, 0x14D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D70Cu;
    // 0x41d70c: 0x0  nop
    ctx->pc = 0x41d70cu;
    // NOP
    // 0x41d710: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x41d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x41d714: 0x0  nop
    ctx->pc = 0x41d714u;
    // NOP
    ctx->pc = 0x41d718u;
}
