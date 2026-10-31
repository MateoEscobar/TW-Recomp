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

// Function: sub_003380D8
// Address: 0x3380d8 - 0x338178
void sub_003380D8_0x3380d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003380D8_0x3380d8");
#endif

    switch (ctx->pc) {
        case 0x338108u: goto label_338108;
        default: break;
    }

    ctx->pc = 0x3380d8u;

    // 0x3380d8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3380d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3380dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3380dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3380e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3380e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3380e4: 0x0  nop
    ctx->pc = 0x3380e4u;
    // NOP
    // 0x3380e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3380E8u;
    {
        const bool branch_taken_0x3380e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3380e8) {
            ctx->pc = 0x338108u;
            goto label_338108;
        }
    }
    ctx->pc = 0x3380F0u;
    // 0x3380f0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3380f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3380f4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3380f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3380f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3380f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3380fc: 0x0  nop
    ctx->pc = 0x3380fcu;
    // NOP
    // 0x338100: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x338100u;
    {
        const bool branch_taken_0x338100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x338100) {
            ctx->pc = 0x338104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338100u;
            // 0x338104: 0xc4810014  lwc1        $f1, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x338110u;
            goto label_338110;
        }
    }
    ctx->pc = 0x338108u;
label_338108:
    // 0x338108: 0x3e00008  jr          $ra
    ctx->pc = 0x338108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338108u;
        // 0x33810c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338110u;
label_338110:
    // 0x338110: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x338110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x338114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338118: 0x0  nop
    ctx->pc = 0x338118u;
    // NOP
    // 0x33811c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x33811Cu;
    {
        const bool branch_taken_0x33811c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33811c) {
            ctx->pc = 0x338108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338108;
        }
    }
    ctx->pc = 0x338124u;
    // 0x338124: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x338124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338128: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x338128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33812c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33812cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338130: 0x0  nop
    ctx->pc = 0x338130u;
    // NOP
    // 0x338134: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x338134u;
    {
        const bool branch_taken_0x338134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338134) {
            ctx->pc = 0x338108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338108;
        }
    }
    ctx->pc = 0x33813Cu;
    // 0x33813c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x33813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338140: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x338140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x338144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338148: 0x0  nop
    ctx->pc = 0x338148u;
    // NOP
    // 0x33814c: 0x4501ffee  bc1t        . + 4 + (-0x12 << 2)
    ctx->pc = 0x33814Cu;
    {
        const bool branch_taken_0x33814c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33814c) {
            ctx->pc = 0x338108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338108;
        }
    }
    ctx->pc = 0x338154u;
    // 0x338154: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x338154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338158: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x338158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33815c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33815cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338160: 0x0  nop
    ctx->pc = 0x338160u;
    // NOP
    // 0x338164: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x338164u;
    {
        const bool branch_taken_0x338164 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x338168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338164u;
        // 0x338168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338164) {
            ctx->pc = 0x338108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338108;
        }
    }
    ctx->pc = 0x33816Cu;
    // 0x33816c: 0x3e00008  jr          $ra
    ctx->pc = 0x33816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33816Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338174u;
    // 0x338174: 0x0  nop
    ctx->pc = 0x338174u;
    // NOP
    ctx->pc = 0x338178u;
}
