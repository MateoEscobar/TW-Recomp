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

// Function: sub_002023F0
// Address: 0x2023f0 - 0x2024c0
void sub_002023F0_0x2023f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002023F0_0x2023f0");
#endif

    switch (ctx->pc) {
        case 0x202484u: goto label_202484;
        case 0x2024acu: goto label_2024ac;
        default: break;
    }

    ctx->pc = 0x2023f0u;

    // 0x2023f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2023f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2023f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2023f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023f8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2023f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2023fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2023fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x202400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202404: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x202404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20240c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20240Cu;
    {
        const bool branch_taken_0x20240c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20240Cu;
        // 0x202410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20240c) {
            ctx->pc = 0x202424u;
            goto label_202424;
        }
    }
    ctx->pc = 0x202414u;
    // 0x202414: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20241c: 0x0  nop
    ctx->pc = 0x20241cu;
    // NOP
    // 0x202420: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x202420u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
label_202424:
    // 0x202424: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x202424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x202428: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20242c: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x20242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202430: 0xc441f56c  lwc1        $f1, -0xA94($v0)
    ctx->pc = 0x202430u;
    { uint32_t bits = FAST_READ32(0x50F56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202438: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x202438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20243c: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x20243cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x202440: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x202440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x202444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x202444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202448: 0x0  nop
    ctx->pc = 0x202448u;
    // NOP
    // 0x20244c: 0x0  nop
    ctx->pc = 0x20244cu;
    // NOP
    // 0x202450: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x202450u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x202454: 0x46007341  sub.s       $f13, $f14, $f0
    ctx->pc = 0x202454u;
    ctx->f[13] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x202458: 0x46036836  c.le.s      $f13, $f3
    ctx->pc = 0x202458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20245c: 0x0  nop
    ctx->pc = 0x20245cu;
    // NOP
    // 0x202460: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x202460u;
    {
        const bool branch_taken_0x202460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202460) {
            ctx->pc = 0x202488u;
            goto label_202488;
        }
    }
    ctx->pc = 0x202468u;
    // 0x202468: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x202468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20246c: 0x0  nop
    ctx->pc = 0x20246cu;
    // NOP
    // 0x202470: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x202470u;
    {
        const bool branch_taken_0x202470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202470u;
        // 0x202474: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202470) {
            ctx->pc = 0x202488u;
            goto label_202488;
        }
    }
    ctx->pc = 0x202478u;
    // 0x202478: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x202478u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x20247c: 0xc0cdd5a  jal         func_337568
    ctx->pc = 0x20247Cu;
    SET_GPR_U32(ctx, 31, 0x202484u);
    ctx->pc = 0x202480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20247Cu;
    // 0x202480: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x20247Cu, 0x202484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202484u;
label_202484:
    // 0x202484: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x202484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_202488:
    // 0x202488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20248c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20248cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202490: 0x0  nop
    ctx->pc = 0x202490u;
    // NOP
    // 0x202494: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x202494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202498: 0x0  nop
    ctx->pc = 0x202498u;
    // NOP
    // 0x20249c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20249Cu;
    {
        const bool branch_taken_0x20249c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20249c) {
            ctx->pc = 0x2024A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20249Cu;
            // 0x2024a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2024A4u;
            goto label_2024a4;
        }
    }
    ctx->pc = 0x2024A4u;
label_2024a4:
    // 0x2024a4: 0xc074472  jal         func_1D11C8
    ctx->pc = 0x2024A4u;
    SET_GPR_U32(ctx, 31, 0x2024ACu);
    ctx->pc = 0x2024A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024A4u;
    // 0x2024a8: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D11C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D11C8u, 0x2024A4u, 0x2024ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2024ACu;
label_2024ac:
    // 0x2024ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2024acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2024b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2024b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2024b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2024b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2024b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2024B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2024BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B8u;
        // 0x2024bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2024B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2024C0u;
}
