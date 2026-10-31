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

// Function: sub_003378B0
// Address: 0x3378b0 - 0x337920
void sub_003378B0_0x3378b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003378B0_0x3378b0");
#endif

    ctx->pc = 0x3378b0u;

    // 0x3378b0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3378b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3378b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3378b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3378b8: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x3378b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x3378bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3378bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3378c0: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x3378c0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x3378c4: 0x460e6382  mul.s       $f14, $f12, $f14
    ctx->pc = 0x3378c4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x3378c8: 0x460e0841  sub.s       $f1, $f1, $f14
    ctx->pc = 0x3378c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x3378cc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3378ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3378d0: 0x0  nop
    ctx->pc = 0x3378d0u;
    // NOP
    // 0x3378d4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3378D4u;
    {
        const bool branch_taken_0x3378d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3378d4) {
            ctx->pc = 0x3378D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3378D4u;
            // 0x3378d8: 0x46006807  neg.s       $f0, $f13 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3378E4u;
            goto label_3378e4;
        }
    }
    ctx->pc = 0x3378DCu;
    // 0x3378dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3378DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3378E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378DCu;
        // 0x3378e0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3378DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3378E4u;
label_3378e4:
    // 0x3378e4: 0x0  nop
    ctx->pc = 0x3378e4u;
    // NOP
    // 0x3378e8: 0x0  nop
    ctx->pc = 0x3378e8u;
    // NOP
    // 0x3378ec: 0x46010084  c1          0x10084
    ctx->pc = 0x3378ecu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3378f0: 0x460c60c0  add.s       $f3, $f12, $f12
    ctx->pc = 0x3378f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x3378f4: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x3378f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3378f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3378f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3378fc: 0x0  nop
    ctx->pc = 0x3378fcu;
    // NOP
    // 0x337900: 0x0  nop
    ctx->pc = 0x337900u;
    // NOP
    // 0x337904: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x337904u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x337908: 0x0  nop
    ctx->pc = 0x337908u;
    // NOP
    // 0x33790c: 0x0  nop
    ctx->pc = 0x33790cu;
    // NOP
    // 0x337910: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x337910u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x337914: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x337914u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x337918: 0x3e00008  jr          $ra
    ctx->pc = 0x337918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337920u;
}
