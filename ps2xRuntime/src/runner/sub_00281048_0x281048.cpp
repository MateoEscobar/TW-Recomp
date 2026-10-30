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

// Function: sub_00281048
// Address: 0x281048 - 0x281070
void sub_00281048_0x281048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281048_0x281048");
#endif

    ctx->pc = 0x281048u;

    // 0x281048: 0x460d6301  sub.s       $f12, $f12, $f13
    ctx->pc = 0x281048u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x28104c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281050: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x281050u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x281054: 0x460e6034  c.lt.s      $f12, $f14
    ctx->pc = 0x281054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281058: 0x0  nop
    ctx->pc = 0x281058u;
    // NOP
    // 0x28105c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28105Cu;
    {
        const bool branch_taken_0x28105c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28105c) {
            ctx->pc = 0x281060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28105Cu;
            // 0x281060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281064u;
            goto label_281064;
        }
    }
    ctx->pc = 0x281064u;
label_281064:
    // 0x281064: 0x3e00008  jr          $ra
    ctx->pc = 0x281064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28106Cu;
    // 0x28106c: 0x0  nop
    ctx->pc = 0x28106cu;
    // NOP
    ctx->pc = 0x281070u;
}
