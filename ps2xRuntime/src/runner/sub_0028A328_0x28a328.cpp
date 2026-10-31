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

// Function: sub_0028A328
// Address: 0x28a328 - 0x28a360
void sub_0028A328_0x28a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A328_0x28a328");
#endif

    ctx->pc = 0x28a328u;

    // 0x28a328: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a32c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a330: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28a330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a334: 0x0  nop
    ctx->pc = 0x28a334u;
    // NOP
    // 0x28a338: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x28A338u;
    {
        const bool branch_taken_0x28a338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A338u;
        // 0x28a33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a338) {
            ctx->pc = 0x28A358u;
            goto label_28a358;
        }
    }
    ctx->pc = 0x28A340u;
    // 0x28a340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28a340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a344: 0x0  nop
    ctx->pc = 0x28a344u;
    // NOP
    // 0x28a348: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x28A348u;
    {
        const bool branch_taken_0x28a348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A348u;
        // 0x28a34c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a348) {
            ctx->pc = 0x28A358u;
            goto label_28a358;
        }
    }
    ctx->pc = 0x28A350u;
    // 0x28a350: 0x3e00008  jr          $ra
    ctx->pc = 0x28A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A350u;
        // 0x28a354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x3e00008  jr          $ra
    ctx->pc = 0x28A358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A360u;
}
