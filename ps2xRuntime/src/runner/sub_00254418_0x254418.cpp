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

// Function: sub_00254418
// Address: 0x254418 - 0x2544a0
void sub_00254418_0x254418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254418_0x254418");
#endif

    ctx->pc = 0x254418u;

    // 0x254418: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x254418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x25441c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25441cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x254420: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x254420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x254424: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x254424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x254428: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x254428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25442c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254430: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x254430u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254434: 0x0  nop
    ctx->pc = 0x254434u;
    // NOP
    // 0x254438: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x254438u;
    {
        const bool branch_taken_0x254438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254438) {
            ctx->pc = 0x25443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254438u;
            // 0x25443c: 0x84a30002  lh          $v1, 0x2($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254448u;
            goto label_254448;
        }
    }
    ctx->pc = 0x254440u;
    // 0x254440: 0x3e00008  jr          $ra
    ctx->pc = 0x254440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254440u;
        // 0x254444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254448u;
label_254448:
    // 0x254448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25444c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x25444cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x254450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x254450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254454: 0x0  nop
    ctx->pc = 0x254454u;
    // NOP
    // 0x254458: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x254458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25445c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x25445cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x254460: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x254460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x254464: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x254464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x254468: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x254468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25446c: 0x0  nop
    ctx->pc = 0x25446cu;
    // NOP
    // 0x254470: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x254478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25447c: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x25447cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x254480: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x254480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x254484: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x254484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x254488: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x254488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25448c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x25448cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x254490: 0x3e00008  jr          $ra
    ctx->pc = 0x254490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254490u;
        // 0x254494: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254498u;
    // 0x254498: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x254498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25449c: 0x0  nop
    ctx->pc = 0x25449cu;
    // NOP
    ctx->pc = 0x2544a0u;
}
