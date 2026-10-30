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

// Function: sub_001BFCC0
// Address: 0x1bfcc0 - 0x1bfd30
void sub_001BFCC0_0x1bfcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFCC0_0x1bfcc0");
#endif

    ctx->pc = 0x1bfcc0u;

    // 0x1bfcc0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bfcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfcc4: 0x0  nop
    ctx->pc = 0x1bfcc4u;
    // NOP
    // 0x1bfcc8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1bfcc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bfccc: 0x0  nop
    ctx->pc = 0x1bfcccu;
    // NOP
    // 0x1bfcd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BFCD0u;
    {
        const bool branch_taken_0x1bfcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfcd0) {
            ctx->pc = 0x1BFCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFCD0u;
            // 0x1bfcd4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFCD8u;
            goto label_1bfcd8;
        }
    }
    ctx->pc = 0x1BFCD8u;
label_1bfcd8:
    // 0x1bfcd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bfcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bfcdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bfcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bfce0: 0x0  nop
    ctx->pc = 0x1bfce0u;
    // NOP
    // 0x1bfce4: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x1bfce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bfce8: 0x0  nop
    ctx->pc = 0x1bfce8u;
    // NOP
    // 0x1bfcec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BFCECu;
    {
        const bool branch_taken_0x1bfcec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfcec) {
            ctx->pc = 0x1BFCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFCECu;
            // 0x1bfcf0: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFCF4u;
            goto label_1bfcf4;
        }
    }
    ctx->pc = 0x1BFCF4u;
label_1bfcf4:
    // 0x1bfcf4: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1bfcf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bfcf8: 0x0  nop
    ctx->pc = 0x1bfcf8u;
    // NOP
    // 0x1bfcfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BFCFCu;
    {
        const bool branch_taken_0x1bfcfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfcfc) {
            ctx->pc = 0x1BFD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFCFCu;
            // 0x1bfd00: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFD04u;
            goto label_1bfd04;
        }
    }
    ctx->pc = 0x1BFD04u;
label_1bfd04:
    // 0x1bfd04: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x1bfd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bfd08: 0x0  nop
    ctx->pc = 0x1bfd08u;
    // NOP
    // 0x1bfd0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BFD0Cu;
    {
        const bool branch_taken_0x1bfd0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfd0c) {
            ctx->pc = 0x1BFD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFD0Cu;
            // 0x1bfd10: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFD14u;
            goto label_1bfd14;
        }
    }
    ctx->pc = 0x1BFD14u;
label_1bfd14:
    // 0x1bfd14: 0x46016828  max.s       $f0, $f13, $f1
    ctx->pc = 0x1bfd14u;
    ctx->f[0] = std::max(ctx->f[13], ctx->f[1]);
    // 0x1bfd18: 0x46016068  max.s       $f1, $f12, $f1
    ctx->pc = 0x1bfd18u;
    ctx->f[1] = std::max(ctx->f[12], ctx->f[1]);
    // 0x1bfd1c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1bfd1cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1bfd20: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1bfd20u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x1bfd24: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x1bfd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x1bfd28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD28u;
        // 0x1bfd2c: 0xe4810048  swc1        $f1, 0x48($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD30u;
}
