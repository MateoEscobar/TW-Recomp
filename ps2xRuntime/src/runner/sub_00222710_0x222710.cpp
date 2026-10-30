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

// Function: sub_00222710
// Address: 0x222710 - 0x222818
void sub_00222710_0x222710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222710_0x222710");
#endif

    switch (ctx->pc) {
        case 0x2227b8u: goto label_2227b8;
        case 0x2227f0u: goto label_2227f0;
        default: break;
    }

    ctx->pc = 0x222710u;

    // 0x222710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x222710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x222714: 0x24880090  addiu       $t0, $a0, 0x90
    ctx->pc = 0x222714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x222718: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x222718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22271c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x22271cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x222720: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x222720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x222724: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x222724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
    // 0x222728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22272c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22272cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222730: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x222730u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x222734: 0x85060002  lh          $a2, 0x2($t0)
    ctx->pc = 0x222734u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x222738: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x222738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22273c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x22273cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222740: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x222740u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x222744: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x222748: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x222748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22274c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x22274cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x222750: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x222750u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x222754: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x222754u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222758: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x222758u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x22275c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x22275cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x222760: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x222760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x222764: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x222764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x222768: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x222768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22276c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x22276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x222770: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x222770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x222774: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x222774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x222778: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x222778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22277c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x22277cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x222780: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x222780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222784: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x222784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222788: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x222788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22278c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x22278cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x222790: 0x4a0003bf  vwaitq
    ctx->pc = 0x222790u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x222794: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x222794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222798: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x222798u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22279c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x22279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2227a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2227a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2227a4: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x2227a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2227a8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2227ac: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2227b0: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2227B0u;
    SET_GPR_U32(ctx, 31, 0x2227B8u);
    ctx->pc = 0x2227B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227B0u;
    // 0x2227b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2227B0u, 0x2227B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227B8u;
label_2227b8:
    // 0x2227b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2227b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2227bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2227bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2227c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2227c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2227c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2227c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2227c8: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2227c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2227cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2227ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2227d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2227d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2227d4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2227d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2227d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2227d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2227dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2227dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2227e0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2227e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2227e4: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2227e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2227e8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2227E8u;
    SET_GPR_U32(ctx, 31, 0x2227F0u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2227E8u, 0x2227F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227F0u;
label_2227f0:
    // 0x2227f0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2227f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2227f4: 0x0  nop
    ctx->pc = 0x2227f4u;
    // NOP
    // 0x2227f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2227F8u;
    {
        const bool branch_taken_0x2227f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2227FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227F8u;
        // 0x2227fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227f8) {
            ctx->pc = 0x222804u;
            goto label_222804;
        }
    }
    ctx->pc = 0x222800u;
    // 0x222800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222804:
    // 0x222804: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x222804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222808: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x222808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22280c: 0x3e00008  jr          $ra
    ctx->pc = 0x22280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22280Cu;
        // 0x222810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22280Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222814u;
    // 0x222814: 0x0  nop
    ctx->pc = 0x222814u;
    // NOP
    ctx->pc = 0x222818u;
}
