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

// Function: sub_00386898
// Address: 0x386898 - 0x3868d0
void sub_00386898_0x386898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386898_0x386898");
#endif

    ctx->pc = 0x386898u;

    // 0x386898: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x386898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38689c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x38689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3868a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3868a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3868a4: 0x0  nop
    ctx->pc = 0x3868a4u;
    // NOP
    // 0x3868a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3868A8u;
    {
        const bool branch_taken_0x3868a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3868ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868A8u;
        // 0x3868ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868a8) {
            ctx->pc = 0x3868C8u;
            goto label_3868c8;
        }
    }
    ctx->pc = 0x3868B0u;
    // 0x3868b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3868b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3868b4: 0x0  nop
    ctx->pc = 0x3868b4u;
    // NOP
    // 0x3868b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3868B8u;
    {
        const bool branch_taken_0x3868b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3868BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868B8u;
        // 0x3868bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868b8) {
            ctx->pc = 0x3868C8u;
            goto label_3868c8;
        }
    }
    ctx->pc = 0x3868C0u;
    // 0x3868c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3868C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3868C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868C0u;
        // 0x3868c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3868C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3868C8u;
label_3868c8:
    // 0x3868c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3868C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3868C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3868D0u;
}
