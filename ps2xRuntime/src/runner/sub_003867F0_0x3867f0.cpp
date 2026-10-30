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

// Function: sub_003867F0
// Address: 0x3867f0 - 0x386860
void sub_003867F0_0x3867f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003867F0_0x3867f0");
#endif

    ctx->pc = 0x3867f0u;

    // 0x3867f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3867f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3867f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3867f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3867f8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3867f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3867fc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386800: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x386800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x386804: 0x0  nop
    ctx->pc = 0x386804u;
    // NOP
    // 0x386808: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x386808u;
    {
        const bool branch_taken_0x386808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386808u;
        // 0x38680c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386808) {
            ctx->pc = 0x386854u;
            goto label_386854;
        }
    }
    ctx->pc = 0x386810u;
    // 0x386810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x386810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x386814: 0x0  nop
    ctx->pc = 0x386814u;
    // NOP
    // 0x386818: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x386818u;
    {
        const bool branch_taken_0x386818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x386818) {
            ctx->pc = 0x38681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386818u;
            // 0x38681c: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x386828u;
            goto label_386828;
        }
    }
    ctx->pc = 0x386820u;
    // 0x386820: 0x3e00008  jr          $ra
    ctx->pc = 0x386820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386820u;
        // 0x386824: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386828u;
label_386828:
    // 0x386828: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x386828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38682c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38682cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x386830: 0x0  nop
    ctx->pc = 0x386830u;
    // NOP
    // 0x386834: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x386834u;
    {
        const bool branch_taken_0x386834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x386838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386834u;
        // 0x386838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386834) {
            ctx->pc = 0x386854u;
            goto label_386854;
        }
    }
    ctx->pc = 0x38683Cu;
    // 0x38683c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38683cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x386840: 0x0  nop
    ctx->pc = 0x386840u;
    // NOP
    // 0x386844: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x386844u;
    {
        const bool branch_taken_0x386844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x386848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386844u;
        // 0x386848: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386844) {
            ctx->pc = 0x386854u;
            goto label_386854;
        }
    }
    ctx->pc = 0x38684Cu;
    // 0x38684c: 0x3e00008  jr          $ra
    ctx->pc = 0x38684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38684Cu;
        // 0x386850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386854u;
label_386854:
    // 0x386854: 0x3e00008  jr          $ra
    ctx->pc = 0x386854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38685Cu;
    // 0x38685c: 0x0  nop
    ctx->pc = 0x38685cu;
    // NOP
    ctx->pc = 0x386860u;
}
