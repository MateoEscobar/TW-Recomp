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

// Function: sub_00321D80
// Address: 0x321d80 - 0x321db8
void sub_00321D80_0x321d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321D80_0x321d80");
#endif

    ctx->pc = 0x321d80u;

    // 0x321d80: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x321d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321d84: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x321d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x321d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321d8c: 0x0  nop
    ctx->pc = 0x321d8cu;
    // NOP
    // 0x321d90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x321D90u;
    {
        const bool branch_taken_0x321d90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x321D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D90u;
        // 0x321d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d90) {
            ctx->pc = 0x321DB0u;
            goto label_321db0;
        }
    }
    ctx->pc = 0x321D98u;
    // 0x321d98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x321d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321d9c: 0x0  nop
    ctx->pc = 0x321d9cu;
    // NOP
    // 0x321da0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x321DA0u;
    {
        const bool branch_taken_0x321da0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x321DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DA0u;
        // 0x321da4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321da0) {
            ctx->pc = 0x321DB0u;
            goto label_321db0;
        }
    }
    ctx->pc = 0x321DA8u;
    // 0x321da8: 0x3e00008  jr          $ra
    ctx->pc = 0x321DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DA8u;
        // 0x321dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321DB0u;
label_321db0:
    // 0x321db0: 0x3e00008  jr          $ra
    ctx->pc = 0x321DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321DB8u;
}
