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

// Function: sub_00184890
// Address: 0x184890 - 0x1848d0
void sub_00184890_0x184890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184890_0x184890");
#endif

    ctx->pc = 0x184890u;

    // 0x184890: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x184890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184894: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184898: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x184898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18489c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1848a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1848a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1848a4: 0x0  nop
    ctx->pc = 0x1848a4u;
    // NOP
    // 0x1848a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1848A8u;
    {
        const bool branch_taken_0x1848a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1848ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848A8u;
        // 0x1848ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848a8) {
            ctx->pc = 0x1848C8u;
            goto label_1848c8;
        }
    }
    ctx->pc = 0x1848B0u;
    // 0x1848b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1848b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1848b4: 0x0  nop
    ctx->pc = 0x1848b4u;
    // NOP
    // 0x1848b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1848B8u;
    {
        const bool branch_taken_0x1848b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1848BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848B8u;
        // 0x1848bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848b8) {
            ctx->pc = 0x1848C8u;
            goto label_1848c8;
        }
    }
    ctx->pc = 0x1848C0u;
    // 0x1848c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1848C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848C0u;
        // 0x1848c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848C8u;
label_1848c8:
    // 0x1848c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1848C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848D0u;
}
