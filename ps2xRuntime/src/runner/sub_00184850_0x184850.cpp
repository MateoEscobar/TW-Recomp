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

// Function: sub_00184850
// Address: 0x184850 - 0x184890
void sub_00184850_0x184850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184850_0x184850");
#endif

    ctx->pc = 0x184850u;

    // 0x184850: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x184850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184854: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x184854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184858: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x184858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18485c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18485cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184860: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x184860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184864: 0x0  nop
    ctx->pc = 0x184864u;
    // NOP
    // 0x184868: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x184868u;
    {
        const bool branch_taken_0x184868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184868u;
        // 0x18486c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184868) {
            ctx->pc = 0x184888u;
            goto label_184888;
        }
    }
    ctx->pc = 0x184870u;
    // 0x184870: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x184870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184874: 0x0  nop
    ctx->pc = 0x184874u;
    // NOP
    // 0x184878: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x184878u;
    {
        const bool branch_taken_0x184878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184878u;
        // 0x18487c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184878) {
            ctx->pc = 0x184888u;
            goto label_184888;
        }
    }
    ctx->pc = 0x184880u;
    // 0x184880: 0x3e00008  jr          $ra
    ctx->pc = 0x184880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184880u;
        // 0x184884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184888u;
label_184888:
    // 0x184888: 0x3e00008  jr          $ra
    ctx->pc = 0x184888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184890u;
}
