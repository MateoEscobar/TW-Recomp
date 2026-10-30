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

// Function: sub_0019B6A8
// Address: 0x19b6a8 - 0x19b7d8
void sub_0019B6A8_0x19b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B6A8_0x19b6a8");
#endif

    switch (ctx->pc) {
        case 0x19b6bcu: goto label_19b6bc;
        case 0x19b798u: goto label_19b798;
        default: break;
    }

    ctx->pc = 0x19b6a8u;

    // 0x19b6a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b6ac: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19b6acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19b6b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b6b4: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x19B6B4u;
    SET_GPR_U32(ctx, 31, 0x19B6BCu);
    ctx->pc = 0x19B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6B4u;
    // 0x19b6b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x19B6B4u, 0x19B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6BCu;
label_19b6bc:
    // 0x19b6bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19b6c0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x19b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b6c4: 0x24441730  addiu       $a0, $v0, 0x1730
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
    // 0x19b6c8: 0xc4411730  lwc1        $f1, 0x1730($v0)
    ctx->pc = 0x19b6c8u;
    { uint32_t bits = FAST_READ32(0x511730u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b6cc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19b6ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b6d0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x19b6d0u;
    { uint32_t bits = FAST_READ32(0x511734u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b6d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19b6d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19b6d8: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x19b6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19b6dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19b6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19b6e0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19b6e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19b6e4: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x19b6e4u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19b6e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x19b6e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19b6ec: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x19b6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19b6f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19b6f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19b6f4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x19b6f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b6f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19b6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19b6fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19b6fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19b700: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19b700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19b704: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x19b704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19b708: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19b708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19b70c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x19b70cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19b710: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x19b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19b714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19b718: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19b71c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x19b71cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b720: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x19b720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x19b724: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19b724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19b728: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x19b728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b72c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x19b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x19b730: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19B730u;
    {
        const bool branch_taken_0x19b730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B730u;
        // 0x19b734: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b730) {
            ctx->pc = 0x19B744u;
            goto label_19b744;
        }
    }
    ctx->pc = 0x19B738u;
    // 0x19b738: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19b738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b73c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19B73Cu;
    {
        const bool branch_taken_0x19b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b73c) {
            ctx->pc = 0x19B7ACu;
            goto label_19b7ac;
        }
    }
    ctx->pc = 0x19B744u;
label_19b744:
    // 0x19b744: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19b744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19b748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b74c: 0x0  nop
    ctx->pc = 0x19b74cu;
    // NOP
    // 0x19b750: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x19b750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b754: 0x0  nop
    ctx->pc = 0x19b754u;
    // NOP
    // 0x19b758: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x19B758u;
    {
        const bool branch_taken_0x19b758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b758) {
            ctx->pc = 0x19B75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B758u;
            // 0x19b75c: 0x46021302  mul.s       $f12, $f2, $f2 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B774u;
            goto label_19b774;
        }
    }
    ctx->pc = 0x19B760u;
    // 0x19b760: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x19b764: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19b764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19b768: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b76c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19B76Cu;
    {
        const bool branch_taken_0x19b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b76c) {
            ctx->pc = 0x19B7ACu;
            goto label_19b7ac;
        }
    }
    ctx->pc = 0x19B774u;
label_19b774:
    // 0x19b774: 0x460c2301  sub.s       $f12, $f4, $f12
    ctx->pc = 0x19b774u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x19b778: 0x0  nop
    ctx->pc = 0x19b778u;
    // NOP
    // 0x19b77c: 0x0  nop
    ctx->pc = 0x19b77cu;
    // NOP
    // 0x19b780: 0x460c0304  c1          0xC0304
    ctx->pc = 0x19b780u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x19b784: 0x0  nop
    ctx->pc = 0x19b784u;
    // NOP
    // 0x19b788: 0x0  nop
    ctx->pc = 0x19b788u;
    // NOP
    // 0x19b78c: 0x460c1303  div.s       $f12, $f2, $f12
    ctx->pc = 0x19b78cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
    // 0x19b790: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x19B790u;
    SET_GPR_U32(ctx, 31, 0x19B798u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x19B790u, 0x19B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B798u;
label_19b798:
    // 0x19b798: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19b79c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19b79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19b7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b7a4: 0x0  nop
    ctx->pc = 0x19b7a4u;
    // NOP
    // 0x19b7a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19b7a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b7ac:
    // 0x19b7ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b7b0: 0x0  nop
    ctx->pc = 0x19b7b0u;
    // NOP
    // 0x19b7b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19b7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b7b8: 0x0  nop
    ctx->pc = 0x19b7b8u;
    // NOP
    // 0x19b7bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19B7BCu;
    {
        const bool branch_taken_0x19b7bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b7bc) {
            ctx->pc = 0x19B7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7BCu;
            // 0x19b7c0: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7C4u;
            goto label_19b7c4;
        }
    }
    ctx->pc = 0x19B7C4u;
label_19b7c4:
    // 0x19b7c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b7c8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x19b7c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x19b7cc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19b7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7D0u;
        // 0x19b7d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B7D8u;
}
