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

// Function: sub_003372A0
// Address: 0x3372a0 - 0x337308
void sub_003372A0_0x3372a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003372A0_0x3372a0");
#endif

    ctx->pc = 0x3372a0u;

    // 0x3372a0: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x3372a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3372a4: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x3372a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3372a8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3372a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3372ac: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x3372acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3372b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3372b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3372b4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3372b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3372b8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3372b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3372bc: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x3372bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x3372c0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3372c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3372c4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3372c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3372c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3372c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3372cc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3372ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3372d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3372d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3372d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3372d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3372d8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3372d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3372dc: 0x0  nop
    ctx->pc = 0x3372dcu;
    // NOP
    // 0x3372e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3372E0u;
    {
        const bool branch_taken_0x3372e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3372E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372E0u;
        // 0x3372e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372e0) {
            ctx->pc = 0x337300u;
            goto label_337300;
        }
    }
    ctx->pc = 0x3372E8u;
    // 0x3372e8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3372e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3372ec: 0x0  nop
    ctx->pc = 0x3372ecu;
    // NOP
    // 0x3372f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3372F0u;
    {
        const bool branch_taken_0x3372f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3372F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372F0u;
        // 0x3372f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372f0) {
            ctx->pc = 0x337300u;
            goto label_337300;
        }
    }
    ctx->pc = 0x3372F8u;
    // 0x3372f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3372F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3372FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372F8u;
        // 0x3372fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3372F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337300u;
label_337300:
    // 0x337300: 0x3e00008  jr          $ra
    ctx->pc = 0x337300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337308u;
}
