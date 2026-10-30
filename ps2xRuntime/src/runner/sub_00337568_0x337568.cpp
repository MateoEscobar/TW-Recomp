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

// Function: sub_00337568
// Address: 0x337568 - 0x3375a0
void sub_00337568_0x337568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337568_0x337568");
#endif

    ctx->pc = 0x337568u;

    // 0x337568: 0x460d7032  c.eq.s      $f14, $f13
    ctx->pc = 0x337568u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33756c: 0x0  nop
    ctx->pc = 0x33756cu;
    // NOP
    // 0x337570: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x337570u;
    {
        const bool branch_taken_0x337570 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337570u;
        // 0x337574: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337570) {
            ctx->pc = 0x337594u;
            goto label_337594;
        }
    }
    ctx->pc = 0x337578u;
    // 0x337578: 0x460f0001  sub.s       $f0, $f0, $f15
    ctx->pc = 0x337578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x33757c: 0x460d7041  sub.s       $f1, $f14, $f13
    ctx->pc = 0x33757cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x337580: 0x460d6081  sub.s       $f2, $f12, $f13
    ctx->pc = 0x337580u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x337584: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x337584u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x337588: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x337588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33758c: 0x3e00008  jr          $ra
    ctx->pc = 0x33758Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33758Cu;
        // 0x337590: 0x460f0000  add.s       $f0, $f0, $f15 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33758Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337594u;
label_337594:
    // 0x337594: 0x3e00008  jr          $ra
    ctx->pc = 0x337594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33759Cu;
    // 0x33759c: 0x0  nop
    ctx->pc = 0x33759cu;
    // NOP
    ctx->pc = 0x3375a0u;
}
