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

// Function: sub_0010E710
// Address: 0x10e710 - 0x10e758
void sub_0010E710_0x10e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E710_0x10e710");
#endif

    ctx->pc = 0x10e710u;

    // 0x10e710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e718: 0x0  nop
    ctx->pc = 0x10e718u;
    // NOP
    // 0x10e71c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10e71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e720: 0x0  nop
    ctx->pc = 0x10e720u;
    // NOP
    // 0x10e724: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E724u;
    {
        const bool branch_taken_0x10e724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e724) {
            ctx->pc = 0x10E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E724u;
            // 0x10e728: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E72Cu;
            goto label_10e72c;
        }
    }
    ctx->pc = 0x10E72Cu;
label_10e72c:
    // 0x10e72c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e730: 0x0  nop
    ctx->pc = 0x10e730u;
    // NOP
    // 0x10e734: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10e734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e738: 0x0  nop
    ctx->pc = 0x10e738u;
    // NOP
    // 0x10e73c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E73Cu;
    {
        const bool branch_taken_0x10e73c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e73c) {
            ctx->pc = 0x10E740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E73Cu;
            // 0x10e740: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E744u;
            goto label_10e744;
        }
    }
    ctx->pc = 0x10E744u;
label_10e744:
    // 0x10e744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e748: 0xe48c005c  swc1        $f12, 0x5C($a0)
    ctx->pc = 0x10e748u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x10e74c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E74Cu;
        // 0x10e750: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E754u;
    // 0x10e754: 0x0  nop
    ctx->pc = 0x10e754u;
    // NOP
    ctx->pc = 0x10e758u;
}
