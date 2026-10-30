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

// Function: sub_00463C30
// Address: 0x463c30 - 0x463c58
void sub_00463C30_0x463c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463C30_0x463c30");
#endif

    ctx->pc = 0x463c30u;

    // 0x463c30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x463c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x463c34: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x463c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x463c38: 0x3e00008  jr          $ra
    ctx->pc = 0x463C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463C38u;
        // 0x463c3c: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463C40u;
    // 0x463c40: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x463c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x463c44: 0x0  nop
    ctx->pc = 0x463c44u;
    // NOP
    // 0x463c48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x463c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x463c4c: 0x0  nop
    ctx->pc = 0x463c4cu;
    // NOP
    // 0x463c50: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x463c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x463c54: 0x0  nop
    ctx->pc = 0x463c54u;
    // NOP
    ctx->pc = 0x463c58u;
}
