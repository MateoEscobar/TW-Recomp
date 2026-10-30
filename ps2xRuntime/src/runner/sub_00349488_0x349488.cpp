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

// Function: sub_00349488
// Address: 0x349488 - 0x349560
void sub_00349488_0x349488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349488_0x349488");
#endif

    switch (ctx->pc) {
        case 0x3494b8u: goto label_3494b8;
        case 0x3494e4u: goto label_3494e4;
        default: break;
    }

    ctx->pc = 0x349488u;

    // 0x349488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34948c: 0x0  nop
    ctx->pc = 0x34948cu;
    // NOP
    // 0x349490: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x349490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349494: 0x0  nop
    ctx->pc = 0x349494u;
    // NOP
    // 0x349498: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x349498u;
    {
        const bool branch_taken_0x349498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349498) {
            ctx->pc = 0x3494ECu;
            goto label_3494ec;
        }
    }
    ctx->pc = 0x3494A0u;
    // 0x3494a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3494a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3494a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3494a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3494a8: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x3494a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3494ac: 0x0  nop
    ctx->pc = 0x3494acu;
    // NOP
    // 0x3494b0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3494B0u;
    {
        const bool branch_taken_0x3494b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3494b0) {
            ctx->pc = 0x3494B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3494B0u;
            // 0x3494b4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3494C0u;
            goto label_3494c0;
        }
    }
    ctx->pc = 0x3494B8u;
label_3494b8:
    // 0x3494b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3494B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3494BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494B8u;
        // 0x3494bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3494C0u;
label_3494c0:
    // 0x3494c0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3494c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3494c4: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x3494c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3494c8: 0x0  nop
    ctx->pc = 0x3494c8u;
    // NOP
    // 0x3494cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3494CCu;
    {
        const bool branch_taken_0x3494cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3494cc) {
            ctx->pc = 0x3494E4u;
            goto label_3494e4;
        }
    }
    ctx->pc = 0x3494D4u;
    // 0x3494d4: 0x0  nop
    ctx->pc = 0x3494d4u;
    // NOP
    // 0x3494d8: 0x0  nop
    ctx->pc = 0x3494d8u;
    // NOP
    // 0x3494dc: 0x460c6803  div.s       $f0, $f13, $f12
    ctx->pc = 0x3494dcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[13], ctx->f[12]); }
    // 0x3494e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3494e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3494e4:
    // 0x3494e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3494E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3494E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494E4u;
        // 0x3494e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3494ECu;
label_3494ec:
    // 0x3494ec: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3494ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3494f0: 0x0  nop
    ctx->pc = 0x3494f0u;
    // NOP
    // 0x3494f4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3494F4u;
    {
        const bool branch_taken_0x3494f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3494f4) {
            ctx->pc = 0x349540u;
            goto label_349540;
        }
    }
    ctx->pc = 0x3494FCu;
    // 0x3494fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3494fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349500: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x349500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x349504: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x349504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349508: 0x0  nop
    ctx->pc = 0x349508u;
    // NOP
    // 0x34950c: 0x4501ffea  bc1t        . + 4 + (-0x16 << 2)
    ctx->pc = 0x34950Cu;
    {
        const bool branch_taken_0x34950c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34950c) {
            ctx->pc = 0x3494B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3494b8;
        }
    }
    ctx->pc = 0x349514u;
    // 0x349514: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x349514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349518: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x349518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x34951c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x34951cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349520: 0x0  nop
    ctx->pc = 0x349520u;
    // NOP
    // 0x349524: 0x4500ffef  bc1f        . + 4 + (-0x11 << 2)
    ctx->pc = 0x349524u;
    {
        const bool branch_taken_0x349524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349524) {
            ctx->pc = 0x3494E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3494e4;
        }
    }
    ctx->pc = 0x34952Cu;
    // 0x34952c: 0x0  nop
    ctx->pc = 0x34952cu;
    // NOP
    // 0x349530: 0x0  nop
    ctx->pc = 0x349530u;
    // NOP
    // 0x349534: 0x460c6803  div.s       $f0, $f13, $f12
    ctx->pc = 0x349534u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[13], ctx->f[12]); }
    // 0x349538: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x349538u;
    {
        const bool branch_taken_0x349538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349538u;
        // 0x34953c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349538) {
            ctx->pc = 0x3494E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3494e4;
        }
    }
    ctx->pc = 0x349540u;
label_349540:
    // 0x349540: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x349540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349544: 0x0  nop
    ctx->pc = 0x349544u;
    // NOP
    // 0x349548: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x349548u;
    {
        const bool branch_taken_0x349548 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349548u;
        // 0x34954c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349548) {
            ctx->pc = 0x349554u;
            goto label_349554;
        }
    }
    ctx->pc = 0x349550u;
    // 0x349550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349554:
    // 0x349554: 0x3e00008  jr          $ra
    ctx->pc = 0x349554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34955Cu;
    // 0x34955c: 0x0  nop
    ctx->pc = 0x34955cu;
    // NOP
    ctx->pc = 0x349560u;
}
