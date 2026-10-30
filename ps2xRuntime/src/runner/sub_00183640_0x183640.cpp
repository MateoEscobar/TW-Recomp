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

// Function: sub_00183640
// Address: 0x183640 - 0x183760
void sub_00183640_0x183640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183640_0x183640");
#endif

    switch (ctx->pc) {
        case 0x183670u: goto label_183670;
        default: break;
    }

    ctx->pc = 0x183640u;

    // 0x183640: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x183640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x183644: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x183644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x183648: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18364c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x18364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x183650: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x183650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x183654: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x183654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x183658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18365c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18365cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183660: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x183664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183668: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x183668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18366c: 0x0  nop
    ctx->pc = 0x18366cu;
    // NOP
label_183670:
    // 0x183670: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x183670u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x183674: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x183674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183678: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x183678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18367c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18367cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x183680: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x183680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x183684: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x183684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x183688: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x183688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18368c: 0x482b1800  qmfc2.ni    $t3, $vf3
    ctx->pc = 0x18368cu;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x183690: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x183690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183694: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x183694u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183698: 0x0  nop
    ctx->pc = 0x183698u;
    // NOP
    // 0x18369c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18369cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1836a0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1836a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1836a4: 0x0  nop
    ctx->pc = 0x1836a4u;
    // NOP
    // 0x1836a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1836A8u;
    {
        const bool branch_taken_0x1836a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1836ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836A8u;
        // 0x1836ac: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836a8) {
            ctx->pc = 0x1836B8u;
            goto label_1836b8;
        }
    }
    ctx->pc = 0x1836B0u;
    // 0x1836b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1836B0u;
    {
        const bool branch_taken_0x1836b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836B0u;
        // 0x1836b4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836b0) {
            ctx->pc = 0x1836CCu;
            goto label_1836cc;
        }
    }
    ctx->pc = 0x1836B8u;
label_1836b8:
    // 0x1836b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1836b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1836bc: 0x0  nop
    ctx->pc = 0x1836bcu;
    // NOP
    // 0x1836c0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1836C0u;
    {
        const bool branch_taken_0x1836c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1836c0) {
            ctx->pc = 0x1836C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1836C0u;
            // 0x1836c4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1836CCu;
            goto label_1836cc;
        }
    }
    ctx->pc = 0x1836C8u;
    // 0x1836c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1836c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1836cc:
    // 0x1836cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1836ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1836d0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1836d4: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x1836d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1836d8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1836D8u;
    {
        const bool branch_taken_0x1836d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1836DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836D8u;
        // 0x1836dc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836d8) {
            ctx->pc = 0x183670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183670;
        }
    }
    ctx->pc = 0x1836E0u;
    // 0x1836e0: 0x11400005  beqz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1836E0u;
    {
        const bool branch_taken_0x1836e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836E0u;
        // 0x1836e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836e0) {
            ctx->pc = 0x1836F8u;
            goto label_1836f8;
        }
    }
    ctx->pc = 0x1836E8u;
    // 0x1836e8: 0x55200005  bnel        $t1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1836E8u;
    {
        const bool branch_taken_0x1836e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1836e8) {
            ctx->pc = 0x1836ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1836E8u;
            // 0x1836ec: 0xc4a20000  lwc1        $f2, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x183700u;
            goto label_183700;
        }
    }
    ctx->pc = 0x1836F0u;
    // 0x1836f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1836F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1836F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836F0u;
        // 0x1836f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1836F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1836F8u;
label_1836f8:
    // 0x1836f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1836F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1836FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836F8u;
        // 0x1836fc: 0x9100a  movz        $v0, $zero, $t1 (Delay Slot)
        if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1836F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183700u;
label_183700:
    // 0x183700: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x183700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x183704: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x183704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183708: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x183708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18370c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18370cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183710: 0x0  nop
    ctx->pc = 0x183710u;
    // NOP
    // 0x183714: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x183714u;
    {
        const bool branch_taken_0x183714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183714) {
            ctx->pc = 0x183718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183714u;
            // 0x183718: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x183724u;
            goto label_183724;
        }
    }
    ctx->pc = 0x18371Cu;
    // 0x18371c: 0x3e00008  jr          $ra
    ctx->pc = 0x18371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18371Cu;
        // 0x183720: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183724u;
label_183724:
    // 0x183724: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x183724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x183728: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x183728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18372c: 0x0  nop
    ctx->pc = 0x18372cu;
    // NOP
    // 0x183730: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x183730u;
    {
        const bool branch_taken_0x183730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183730u;
        // 0x183734: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183730) {
            ctx->pc = 0x183754u;
            goto label_183754;
        }
    }
    ctx->pc = 0x183738u;
    // 0x183738: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x183738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x18373c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18373cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183740: 0x0  nop
    ctx->pc = 0x183740u;
    // NOP
    // 0x183744: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x183744u;
    {
        const bool branch_taken_0x183744 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183744u;
        // 0x183748: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183744) {
            ctx->pc = 0x183754u;
            goto label_183754;
        }
    }
    ctx->pc = 0x18374Cu;
    // 0x18374c: 0x3e00008  jr          $ra
    ctx->pc = 0x18374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18374Cu;
        // 0x183750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183754u;
label_183754:
    // 0x183754: 0x3e00008  jr          $ra
    ctx->pc = 0x183754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18375Cu;
    // 0x18375c: 0x0  nop
    ctx->pc = 0x18375cu;
    // NOP
    ctx->pc = 0x183760u;
}
