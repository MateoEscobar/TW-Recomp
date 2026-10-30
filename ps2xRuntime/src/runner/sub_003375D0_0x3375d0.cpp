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

// Function: sub_003375D0
// Address: 0x3375d0 - 0x3376c0
void sub_003375D0_0x3375d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003375D0_0x3375d0");
#endif

    ctx->pc = 0x3375d0u;

    // 0x3375d0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3375d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3375d4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3375d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3375d8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3375d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3375dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3375dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3375e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3375e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3375e4: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x3375e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3375e8: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x3375e8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3375ec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3375ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3375f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3375f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3375f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3375f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3375f8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x3375f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3375fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3375fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337600: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x337600u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x337604: 0x4a0003bf  vwaitq
    ctx->pc = 0x337604u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x337608: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x337608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33760c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x33760cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337610: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x337610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x337614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x337614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337618: 0x0  nop
    ctx->pc = 0x337618u;
    // NOP
    // 0x33761c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x33761cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337620: 0x0  nop
    ctx->pc = 0x337620u;
    // NOP
    // 0x337624: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x337624u;
    {
        const bool branch_taken_0x337624 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337624u;
        // 0x337628: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337624) {
            ctx->pc = 0x3376B4u;
            goto label_3376b4;
        }
    }
    ctx->pc = 0x33762Cu;
    // 0x33762c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x337630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337634: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x337634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337638: 0x0  nop
    ctx->pc = 0x337638u;
    // NOP
    // 0x33763c: 0x0  nop
    ctx->pc = 0x33763cu;
    // NOP
    // 0x337640: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x337640u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x337644: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x337644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x337648: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33764c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33764cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337650: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x337650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x337654: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x337654u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x337658: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33765c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33765cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337660: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x337660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337664: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337668: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x337668u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x33766c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x33766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x337670: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x337670u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337674: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x337674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x337678: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x337678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33767c: 0x0  nop
    ctx->pc = 0x33767cu;
    // NOP
    // 0x337680: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x337680u;
    {
        const bool branch_taken_0x337680 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x337684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337680u;
        // 0x337684: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337680) {
            ctx->pc = 0x33768Cu;
            goto label_33768c;
        }
    }
    ctx->pc = 0x337688u;
    // 0x337688: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x337688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_33768c:
    // 0x33768c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x33768cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337690: 0x0  nop
    ctx->pc = 0x337690u;
    // NOP
    // 0x337694: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x337694u;
    {
        const bool branch_taken_0x337694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337694) {
            ctx->pc = 0x337698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337694u;
            // 0x337698: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3376B8u;
            goto label_3376b8;
        }
    }
    ctx->pc = 0x33769Cu;
    // 0x33769c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33769cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3376a0: 0x0  nop
    ctx->pc = 0x3376a0u;
    // NOP
    // 0x3376a4: 0x0  nop
    ctx->pc = 0x3376a4u;
    // NOP
    // 0x3376a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3376a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3376ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3376ACu;
    {
        const bool branch_taken_0x3376ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376ac) {
            ctx->pc = 0x3376B8u;
            goto label_3376b8;
        }
    }
    ctx->pc = 0x3376B4u;
label_3376b4:
    // 0x3376b4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3376b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_3376b8:
    // 0x3376b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3376B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3376BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376B8u;
        // 0x3376bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3376B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3376C0u;
}
