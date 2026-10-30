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

// Function: sub_0038ED68
// Address: 0x38ed68 - 0x38eec0
void sub_0038ED68_0x38ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038ED68_0x38ed68");
#endif

    switch (ctx->pc) {
        case 0x38ed68u: goto label_38ed68;
        case 0x38ed6cu: goto label_38ed6c;
        case 0x38ed70u: goto label_38ed70;
        case 0x38ed74u: goto label_38ed74;
        case 0x38ed78u: goto label_38ed78;
        case 0x38ed7cu: goto label_38ed7c;
        case 0x38ed80u: goto label_38ed80;
        case 0x38ed84u: goto label_38ed84;
        case 0x38ed88u: goto label_38ed88;
        case 0x38ed8cu: goto label_38ed8c;
        case 0x38ed90u: goto label_38ed90;
        case 0x38ed94u: goto label_38ed94;
        case 0x38ed98u: goto label_38ed98;
        case 0x38ed9cu: goto label_38ed9c;
        case 0x38eda0u: goto label_38eda0;
        case 0x38eda4u: goto label_38eda4;
        case 0x38eda8u: goto label_38eda8;
        case 0x38edacu: goto label_38edac;
        case 0x38edb0u: goto label_38edb0;
        case 0x38edb4u: goto label_38edb4;
        case 0x38edb8u: goto label_38edb8;
        case 0x38edbcu: goto label_38edbc;
        case 0x38edc0u: goto label_38edc0;
        case 0x38edc4u: goto label_38edc4;
        case 0x38edc8u: goto label_38edc8;
        case 0x38edccu: goto label_38edcc;
        case 0x38edd0u: goto label_38edd0;
        case 0x38edd4u: goto label_38edd4;
        case 0x38edd8u: goto label_38edd8;
        case 0x38eddcu: goto label_38eddc;
        case 0x38ede0u: goto label_38ede0;
        case 0x38ede4u: goto label_38ede4;
        case 0x38ede8u: goto label_38ede8;
        case 0x38edecu: goto label_38edec;
        case 0x38edf0u: goto label_38edf0;
        case 0x38edf4u: goto label_38edf4;
        case 0x38edf8u: goto label_38edf8;
        case 0x38edfcu: goto label_38edfc;
        case 0x38ee00u: goto label_38ee00;
        case 0x38ee04u: goto label_38ee04;
        case 0x38ee08u: goto label_38ee08;
        case 0x38ee0cu: goto label_38ee0c;
        case 0x38ee10u: goto label_38ee10;
        case 0x38ee14u: goto label_38ee14;
        case 0x38ee18u: goto label_38ee18;
        case 0x38ee1cu: goto label_38ee1c;
        case 0x38ee20u: goto label_38ee20;
        case 0x38ee24u: goto label_38ee24;
        case 0x38ee28u: goto label_38ee28;
        case 0x38ee2cu: goto label_38ee2c;
        case 0x38ee30u: goto label_38ee30;
        case 0x38ee34u: goto label_38ee34;
        case 0x38ee38u: goto label_38ee38;
        case 0x38ee3cu: goto label_38ee3c;
        case 0x38ee40u: goto label_38ee40;
        case 0x38ee44u: goto label_38ee44;
        case 0x38ee48u: goto label_38ee48;
        case 0x38ee4cu: goto label_38ee4c;
        case 0x38ee50u: goto label_38ee50;
        case 0x38ee54u: goto label_38ee54;
        case 0x38ee58u: goto label_38ee58;
        case 0x38ee5cu: goto label_38ee5c;
        case 0x38ee60u: goto label_38ee60;
        case 0x38ee64u: goto label_38ee64;
        case 0x38ee68u: goto label_38ee68;
        case 0x38ee6cu: goto label_38ee6c;
        case 0x38ee70u: goto label_38ee70;
        case 0x38ee74u: goto label_38ee74;
        case 0x38ee78u: goto label_38ee78;
        case 0x38ee7cu: goto label_38ee7c;
        case 0x38ee80u: goto label_38ee80;
        case 0x38ee84u: goto label_38ee84;
        case 0x38ee88u: goto label_38ee88;
        case 0x38ee8cu: goto label_38ee8c;
        case 0x38ee90u: goto label_38ee90;
        case 0x38ee94u: goto label_38ee94;
        case 0x38ee98u: goto label_38ee98;
        case 0x38ee9cu: goto label_38ee9c;
        case 0x38eea0u: goto label_38eea0;
        case 0x38eea4u: goto label_38eea4;
        case 0x38eea8u: goto label_38eea8;
        case 0x38eeacu: goto label_38eeac;
        case 0x38eeb0u: goto label_38eeb0;
        case 0x38eeb4u: goto label_38eeb4;
        case 0x38eeb8u: goto label_38eeb8;
        case 0x38eebcu: goto label_38eebc;
        default: break;
    }

    ctx->pc = 0x38ed68u;

label_38ed68:
    // 0x38ed68: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x38ed68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_38ed6c:
    // 0x38ed6c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x38ed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_38ed70:
    // 0x38ed70: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x38ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_38ed74:
    // 0x38ed74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ed74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ed78:
    // 0x38ed78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_38ed7c:
    // 0x38ed7c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x38ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_38ed80:
    // 0x38ed80: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_38ed84:
    if (ctx->pc == 0x38ED84u) {
        ctx->pc = 0x38ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED80u;
        // 0x38ed84: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED88u;
        goto label_38ed88;
    }
    ctx->pc = 0x38ED80u;
    {
        const bool branch_taken_0x38ed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED80u;
        // 0x38ed84: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed80) {
            ctx->pc = 0x38EEB0u;
            goto label_38eeb0;
        }
    }
    ctx->pc = 0x38ED88u;
label_38ed88:
    // 0x38ed88: 0x7a260070  lq          $a2, 0x70($s1)
    ctx->pc = 0x38ed88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 112)));
label_38ed8c:
    // 0x38ed8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38ed90:
    // 0x38ed90: 0x7a250080  lq          $a1, 0x80($s1)
    ctx->pc = 0x38ed90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 128)));
label_38ed94:
    // 0x38ed94: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x38ed94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_38ed98:
    // 0x38ed98: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38ed98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38ed9c:
    // 0x38ed9c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38ed9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38eda0:
    // 0x38eda0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38eda0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38eda4:
    // 0x38eda4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38eda4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_38eda8:
    // 0x38eda8: 0x4a0003bf  vwaitq
    ctx->pc = 0x38eda8u;
    // VWAITQ (Q already resolved in this runtime)
label_38edac:
    // 0x38edac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38edacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38edb0:
    // 0x38edb0: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x38edb0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_38edb4:
    // 0x38edb4: 0x7a230090  lq          $v1, 0x90($s1)
    ctx->pc = 0x38edb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 144)));
label_38edb8:
    // 0x38edb8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x38edb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_38edbc:
    // 0x38edbc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38edbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38edc0:
    // 0x38edc0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38edc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38edc4:
    // 0x38edc4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38edc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38edc8:
    // 0x38edc8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38edc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_38edcc:
    // 0x38edcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x38edccu;
    // VWAITQ (Q already resolved in this runtime)
label_38edd0:
    // 0x38edd0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38edd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38edd4:
    // 0x38edd4: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x38edd4u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
label_38edd8:
    // 0x38edd8: 0x7a2200a0  lq          $v0, 0xA0($s1)
    ctx->pc = 0x38edd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 160)));
label_38eddc:
    // 0x38eddc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38eddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38ede0:
    // 0x38ede0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38ede0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38ede4:
    // 0x38ede4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38ede4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38ede8:
    // 0x38ede8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38ede8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38edec:
    // 0x38edec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38edecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_38edf0:
    // 0x38edf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x38edf0u;
    // VWAITQ (Q already resolved in this runtime)
label_38edf4:
    // 0x38edf4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38edf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38edf8:
    // 0x38edf8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x38edf8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_38edfc:
    // 0x38edfc: 0x7a280010  lq          $t0, 0x10($s1)
    ctx->pc = 0x38edfcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38ee00:
    // 0x38ee00: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x38ee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_38ee04:
    // 0x38ee04: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_38ee08:
    // 0x38ee08: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x38ee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_38ee0c:
    // 0x38ee0c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38ee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38ee10:
    // 0x38ee10: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x38ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_38ee14:
    // 0x38ee14: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x38ee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
label_38ee18:
    // 0x38ee18: 0x7faa0010  sq          $t2, 0x10($sp)
    ctx->pc = 0x38ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
label_38ee1c:
    // 0x38ee1c: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x38ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_38ee20:
    // 0x38ee20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38ee24:
    // 0x38ee24: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x38ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_38ee28:
    // 0x38ee28: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38ee28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38ee2c:
    // 0x38ee2c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38ee30:
    // 0x38ee30: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x38ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
label_38ee34:
    // 0x38ee34: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x38ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_38ee38:
    // 0x38ee38: 0x60f809  jalr        $v1
label_38ee3c:
    if (ctx->pc == 0x38EE3Cu) {
        ctx->pc = 0x38EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE38u;
        // 0x38ee3c: 0x7faa0060  sq          $t2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE40u;
        goto label_38ee40;
    }
    ctx->pc = 0x38EE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38EE40u);
        ctx->pc = 0x38EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE38u;
        // 0x38ee3c: 0x7faa0060  sq          $t2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EE38u, 0x38EE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EE40u;
label_38ee40:
    // 0x38ee40: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x38ee40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38ee44:
    // 0x38ee44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38ee48:
    // 0x38ee48: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x38ee48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38ee4c:
    // 0x38ee4c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x38ee4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38ee50:
    // 0x38ee50: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x38ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_38ee54:
    // 0x38ee54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38ee54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38ee58:
    // 0x38ee58: 0xc0cd972  jal         func_3365C8
label_38ee5c:
    if (ctx->pc == 0x38EE5Cu) {
        ctx->pc = 0x38EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE58u;
        // 0x38ee5c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE60u;
        goto label_38ee60;
    }
    ctx->pc = 0x38EE58u;
    SET_GPR_U32(ctx, 31, 0x38EE60u);
    ctx->pc = 0x38EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE58u;
    // 0x38ee5c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x38EE58u, 0x38EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE60u;
label_38ee60:
    // 0x38ee60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38ee64:
    // 0x38ee64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38ee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ee68:
    // 0x38ee68: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x38ee68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_38ee6c:
    // 0x38ee6c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x38ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_38ee70:
    // 0x38ee70: 0x60f809  jalr        $v1
label_38ee74:
    if (ctx->pc == 0x38EE74u) {
        ctx->pc = 0x38EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE70u;
        // 0x38ee74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE78u;
        goto label_38ee78;
    }
    ctx->pc = 0x38EE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38EE78u);
        ctx->pc = 0x38EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE70u;
        // 0x38ee74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EE70u, 0x38EE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EE78u;
label_38ee78:
    // 0x38ee78: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x38ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_38ee7c:
    // 0x38ee7c: 0xc62c00cc  lwc1        $f12, 0xCC($s1)
    ctx->pc = 0x38ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38ee80:
    // 0x38ee80: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x38ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_38ee84:
    // 0x38ee84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ee84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ee88:
    // 0x38ee88: 0xc0cf41c  jal         func_33D070
label_38ee8c:
    if (ctx->pc == 0x38EE8Cu) {
        ctx->pc = 0x38EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE88u;
        // 0x38ee8c: 0xc62d00d4  lwc1        $f13, 0xD4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE90u;
        goto label_38ee90;
    }
    ctx->pc = 0x38EE88u;
    SET_GPR_U32(ctx, 31, 0x38EE90u);
    ctx->pc = 0x38EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE88u;
    // 0x38ee8c: 0xc62d00d4  lwc1        $f13, 0xD4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D070u, 0x38EE88u, 0x38EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE90u;
label_38ee90:
    // 0x38ee90: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x38ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_38ee94:
    // 0x38ee94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ee98:
    // 0x38ee98: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x38ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_38ee9c:
    // 0x38ee9c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x38ee9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38eea0:
    // 0x38eea0: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x38eea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38eea4:
    // 0x38eea4: 0xc0f809  jalr        $a2
label_38eea8:
    if (ctx->pc == 0x38EEA8u) {
        ctx->pc = 0x38EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEA4u;
        // 0x38eea8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EEACu;
        goto label_38eeac;
    }
    ctx->pc = 0x38EEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38EEACu);
        ctx->pc = 0x38EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEA4u;
        // 0x38eea8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EEA4u, 0x38EEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EEACu;
label_38eeac:
    // 0x38eeac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x38eeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38eeb0:
    // 0x38eeb0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x38eeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38eeb4:
    // 0x38eeb4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38eeb8:
    // 0x38eeb8: 0x3e00008  jr          $ra
label_38eebc:
    if (ctx->pc == 0x38EEBCu) {
        ctx->pc = 0x38EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEB8u;
        // 0x38eebc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EEC0u;
        goto label_fallthrough_0x38eeb8;
    }
    ctx->pc = 0x38EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEB8u;
        // 0x38eebc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38eeb8:
    ctx->pc = 0x38EEC0u;
}
