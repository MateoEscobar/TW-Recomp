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

// Function: sub_003373B8
// Address: 0x3373b8 - 0x3374b8
void sub_003373B8_0x3373b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003373B8_0x3373b8");
#endif

    ctx->pc = 0x3373b8u;

    // 0x3373b8: 0x460d6032  c.eq.s      $f12, $f13
    ctx->pc = 0x3373b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3373bc: 0x0  nop
    ctx->pc = 0x3373bcu;
    // NOP
    // 0x3373c0: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x3373C0u;
    {
        const bool branch_taken_0x3373c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3373C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373C0u;
        // 0x3373c4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373c0) {
            ctx->pc = 0x3374ACu;
            goto label_3374ac;
        }
    }
    ctx->pc = 0x3373C8u;
    // 0x3373c8: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x3373c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3373cc: 0x0  nop
    ctx->pc = 0x3373ccu;
    // NOP
    // 0x3373d0: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x3373D0u;
    {
        const bool branch_taken_0x3373d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3373d0) {
            ctx->pc = 0x3373D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373D0u;
            // 0x3373d4: 0x460c6841  sub.s       $f1, $f13, $f12 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x337418u;
            goto label_337418;
        }
    }
    ctx->pc = 0x3373D8u;
    // 0x3373d8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3373d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x3373dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3373dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3373e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3373e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3373e4: 0x460d6041  sub.s       $f1, $f12, $f13
    ctx->pc = 0x3373e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x3373e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3373e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3373ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3373ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3373f0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3373f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3373f4: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x3373f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x3373f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3373f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3373fc: 0x0  nop
    ctx->pc = 0x3373fcu;
    // NOP
    // 0x337400: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x337400u;
    {
        const bool branch_taken_0x337400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337400) {
            ctx->pc = 0x337450u;
            goto label_337450;
        }
    }
    ctx->pc = 0x337408u;
    // 0x337408: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x337408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x33740c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x33740cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x337410: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x337410u;
    {
        const bool branch_taken_0x337410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337410u;
        // 0x337414: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337410) {
            ctx->pc = 0x337450u;
            goto label_337450;
        }
    }
    ctx->pc = 0x337418u;
label_337418:
    // 0x337418: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x337418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x33741c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x33741cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x337420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337424: 0x0  nop
    ctx->pc = 0x337424u;
    // NOP
    // 0x337428: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x337428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x33742c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x33742cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x337430: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x337430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337434: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x337438: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x337438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33743c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x33743Cu;
    {
        const bool branch_taken_0x33743c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33743c) {
            ctx->pc = 0x337450u;
            goto label_337450;
        }
    }
    ctx->pc = 0x337444u;
    // 0x337444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x337444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x337448: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x337448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33744c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x33744cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_337450:
    // 0x337450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x337450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337454: 0x0  nop
    ctx->pc = 0x337454u;
    // NOP
    // 0x337458: 0x460f0034  c.lt.s      $f0, $f15
    ctx->pc = 0x337458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33745c: 0x0  nop
    ctx->pc = 0x33745cu;
    // NOP
    // 0x337460: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x337460u;
    {
        const bool branch_taken_0x337460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337460) {
            ctx->pc = 0x337488u;
            goto label_337488;
        }
    }
    ctx->pc = 0x337468u;
    // 0x337468: 0x460f0834  c.lt.s      $f1, $f15
    ctx->pc = 0x337468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33746c: 0x0  nop
    ctx->pc = 0x33746cu;
    // NOP
    // 0x337470: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x337470u;
    {
        const bool branch_taken_0x337470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337470) {
            ctx->pc = 0x337488u;
            goto label_337488;
        }
    }
    ctx->pc = 0x337478u;
    // 0x337478: 0x0  nop
    ctx->pc = 0x337478u;
    // NOP
    // 0x33747c: 0x0  nop
    ctx->pc = 0x33747cu;
    // NOP
    // 0x337480: 0x460f0803  div.s       $f0, $f1, $f15
    ctx->pc = 0x337480u;
    { if (ctx->f[15] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[15]); }
    // 0x337484: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x337484u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_337488:
    // 0x337488: 0x460e0836  c.le.s      $f1, $f14
    ctx->pc = 0x337488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33748c: 0x0  nop
    ctx->pc = 0x33748cu;
    // NOP
    // 0x337490: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x337490u;
    {
        const bool branch_taken_0x337490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337490) {
            ctx->pc = 0x3374A4u;
            goto label_3374a4;
        }
    }
    ctx->pc = 0x337498u;
    // 0x337498: 0x46027002  mul.s       $f0, $f14, $f2
    ctx->pc = 0x337498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x33749c: 0x3e00008  jr          $ra
    ctx->pc = 0x33749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3374A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33749Cu;
        // 0x3374a0: 0x46006800  add.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3374A4u;
label_3374a4:
    // 0x3374a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3374A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3374A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374A4u;
        // 0x3374a8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3374A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3374ACu;
label_3374ac:
    // 0x3374ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3374ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3374ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3374B4u;
    // 0x3374b4: 0x0  nop
    ctx->pc = 0x3374b4u;
    // NOP
    ctx->pc = 0x3374b8u;
}
