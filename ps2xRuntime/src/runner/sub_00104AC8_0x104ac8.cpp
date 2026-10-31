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

// Function: sub_00104AC8
// Address: 0x104ac8 - 0x104bc8
void sub_00104AC8_0x104ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104AC8_0x104ac8");
#endif

    switch (ctx->pc) {
        case 0x104bbcu: goto label_104bbc;
        default: break;
    }

    ctx->pc = 0x104ac8u;

    // 0x104ac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x104ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x104acc: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x104accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x104ad0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x104ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x104ad4: 0x2488000a  addiu       $t0, $a0, 0xA
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x104ad8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x104ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x104adc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x104adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x104ae0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x104ae0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104ae4: 0x0  nop
    ctx->pc = 0x104ae4u;
    // NOP
    // 0x104ae8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x104ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x104aec: 0x8489000a  lh          $t1, 0xA($a0)
    ctx->pc = 0x104aecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x104af0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x104af4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x104af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x104af8: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x104af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104afc: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x104afcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x104b00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x104b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b04: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x104b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104b0c: 0x0  nop
    ctx->pc = 0x104b0cu;
    // NOP
    // 0x104b10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104b14: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x104b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x104b18: 0x0  nop
    ctx->pc = 0x104b18u;
    // NOP
    // 0x104b1c: 0x0  nop
    ctx->pc = 0x104b1cu;
    // NOP
    // 0x104b20: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x104b20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x104b24: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x104b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x104b28: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x104b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x104b2c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x104b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x104b30: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x104b34: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x104b34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104b38: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x104b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x104b3c: 0x85030004  lh          $v1, 0x4($t0)
    ctx->pc = 0x104b3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x104b40: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x104b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x104b44: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x104b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104b48: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x104b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x104b4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x104b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x104b50: 0x3c083800  lui         $t0, 0x3800
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14336 << 16));
    // 0x104b54: 0x4be1093c  vitof0.xyzw $vf1, $vf1
    ctx->pc = 0x104b54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104b58: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x104b58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x104b5c: 0x4be2113c  vitof0.xyzw $vf2, $vf2
    ctx->pc = 0x104b5cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104b60: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x104b60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104b64: 0x4bc30858  vmulx.xyz   $vf1, $vf1, $vf3x
    ctx->pc = 0x104b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104b68: 0x4bc31098  vmulx.xyz   $vf2, $vf2, $vf3x
    ctx->pc = 0x104b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104b6c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x104b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104b70: 0x4bc2112a  vmul.xyz    $vf4, $vf2, $vf2
    ctx->pc = 0x104b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104b74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x104b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104b78: 0x4b042101  vaddy.x     $vf4, $vf4, $vf4y
    ctx->pc = 0x104b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104b7c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x104b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104b80: 0x4b042102  vaddz.x     $vf4, $vf4, $vf4z
    ctx->pc = 0x104b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104b84: 0x4a2300c4  vsubx.w     $vf3, $vf0, $vf3x
    ctx->pc = 0x104b84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104b88: 0x4a240104  vsubx.w     $vf4, $vf0, $vf4x
    ctx->pc = 0x104b88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104b8c: 0x4b8303bd  .word       0x4B8303BD                   # vsqrt       $Q, $vf3w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x104b8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x104b90: 0x4a20006c  vsub.w      $vf1, $vf0, $vf0
    ctx->pc = 0x104b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104b94: 0x4a2000ac  vsub.w      $vf2, $vf0, $vf0
    ctx->pc = 0x104b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104b98: 0x4a0003bf  vwaitq
    ctx->pc = 0x104b98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x104b9c: 0x4a200860  vaddq.w     $vf1, $vf1, $Q
    ctx->pc = 0x104b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104ba0: 0x4b8403bd  .word       0x4B8403BD                   # vsqrt       $Q, $vf4w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x104ba0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x104ba4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x104ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104ba8: 0x4a0003bf  vwaitq
    ctx->pc = 0x104ba8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x104bac: 0x4a2010a0  vaddq.w     $vf2, $vf2, $Q
    ctx->pc = 0x104bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104bb0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x104bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104bb4: 0xc0cdafe  jal         func_336BF8
    ctx->pc = 0x104BB4u;
    SET_GPR_U32(ctx, 31, 0x104BBCu);
    ctx->pc = 0x104BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BB4u;
    // 0x104bb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BF8u, 0x104BB4u, 0x104BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BBCu;
label_104bbc:
    // 0x104bbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x104bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x104BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BC0u;
        // 0x104bc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104BC8u;
}
