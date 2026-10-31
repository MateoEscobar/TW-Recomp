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

// Function: sub_00338048
// Address: 0x338048 - 0x3380d8
void sub_00338048_0x338048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338048_0x338048");
#endif

    switch (ctx->pc) {
        case 0x338090u: goto label_338090;
        default: break;
    }

    ctx->pc = 0x338048u;

    // 0x338048: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x338048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33804c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x33804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338050: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x338050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338054: 0x0  nop
    ctx->pc = 0x338054u;
    // NOP
    // 0x338058: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x338058u;
    {
        const bool branch_taken_0x338058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338058) {
            ctx->pc = 0x338090u;
            goto label_338090;
        }
    }
    ctx->pc = 0x338060u;
    // 0x338060: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x338060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338064: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x338064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338068: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x338068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33806c: 0x0  nop
    ctx->pc = 0x33806cu;
    // NOP
    // 0x338070: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x338070u;
    {
        const bool branch_taken_0x338070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338070) {
            ctx->pc = 0x338090u;
            goto label_338090;
        }
    }
    ctx->pc = 0x338078u;
    // 0x338078: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x338078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33807c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x33807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x338080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338084: 0x0  nop
    ctx->pc = 0x338084u;
    // NOP
    // 0x338088: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x338088u;
    {
        const bool branch_taken_0x338088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x338088) {
            ctx->pc = 0x33808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338088u;
            // 0x33808c: 0xc4800010  lwc1        $f0, 0x10($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x338098u;
            goto label_338098;
        }
    }
    ctx->pc = 0x338090u;
label_338090:
    // 0x338090: 0x3e00008  jr          $ra
    ctx->pc = 0x338090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338090u;
        // 0x338094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338098u;
label_338098:
    // 0x338098: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x338098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33809c: 0x0  nop
    ctx->pc = 0x33809cu;
    // NOP
    // 0x3380a0: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x3380A0u;
    {
        const bool branch_taken_0x3380a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3380a0) {
            ctx->pc = 0x338090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338090;
        }
    }
    ctx->pc = 0x3380A8u;
    // 0x3380a8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3380a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3380ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3380acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3380b0: 0x0  nop
    ctx->pc = 0x3380b0u;
    // NOP
    // 0x3380b4: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x3380B4u;
    {
        const bool branch_taken_0x3380b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3380b4) {
            ctx->pc = 0x338090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338090;
        }
    }
    ctx->pc = 0x3380BCu;
    // 0x3380bc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3380bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3380c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3380c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3380c4: 0x0  nop
    ctx->pc = 0x3380c4u;
    // NOP
    // 0x3380c8: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
    ctx->pc = 0x3380C8u;
    {
        const bool branch_taken_0x3380c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3380CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380C8u;
        // 0x3380cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380c8) {
            ctx->pc = 0x338090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338090;
        }
    }
    ctx->pc = 0x3380D0u;
    // 0x3380d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3380D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3380D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3380D8u;
}
