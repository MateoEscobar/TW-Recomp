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

// Function: sub_0034A2D0
// Address: 0x34a2d0 - 0x34a318
void sub_0034A2D0_0x34a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A2D0_0x34a2d0");
#endif

    ctx->pc = 0x34a2d0u;

    // 0x34a2d0: 0x460f6300  add.s       $f12, $f12, $f15
    ctx->pc = 0x34a2d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[15]);
    // 0x34a2d4: 0x46106b40  add.s       $f13, $f13, $f16
    ctx->pc = 0x34a2d4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[16]);
    // 0x34a2d8: 0x460e7382  mul.s       $f14, $f14, $f14
    ctx->pc = 0x34a2d8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34a2dc: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x34a2dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34a2e0: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x34a2e0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x34a2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a2e8: 0x460d6300  add.s       $f12, $f12, $f13
    ctx->pc = 0x34a2e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x34a2ec: 0x460e6301  sub.s       $f12, $f12, $f14
    ctx->pc = 0x34a2ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x34a2f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x34a2f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a2f4: 0x0  nop
    ctx->pc = 0x34a2f4u;
    // NOP
    // 0x34a2f8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x34A2F8u;
    {
        const bool branch_taken_0x34a2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a2f8) {
            ctx->pc = 0x34A2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A2F8u;
            // 0x34a2fc: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A308u;
            goto label_34a308;
        }
    }
    ctx->pc = 0x34A300u;
    // 0x34a300: 0x3e00008  jr          $ra
    ctx->pc = 0x34A300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A300u;
        // 0x34a304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A308u;
label_34a308:
    // 0x34a308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a30c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A30Cu;
        // 0x34a310: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A314u;
    // 0x34a314: 0x0  nop
    ctx->pc = 0x34a314u;
    // NOP
    ctx->pc = 0x34a318u;
}
