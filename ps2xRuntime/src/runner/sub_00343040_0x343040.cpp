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

// Function: sub_00343040
// Address: 0x343040 - 0x3430e8
void sub_00343040_0x343040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343040_0x343040");
#endif

    ctx->pc = 0x343040u;

    // 0x343040: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x343040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x343044: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x343044u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x343048: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x343048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x34304c: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x34304cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x343050: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x343050u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x5116C0u));
    // 0x343054: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x343054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x343058: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x343058u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34305c: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x34305cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x343060: 0x78820080  lq          $v0, 0x80($a0)
    ctx->pc = 0x343060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x343064: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x343064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x343068: 0x7c870050  sq          $a3, 0x50($a0)
    ctx->pc = 0x343068u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 7));
    // 0x34306c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x34306cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x343070: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x343070u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x343074: 0x7c860070  sq          $a2, 0x70($a0)
    ctx->pc = 0x343074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 6));
    // 0x343078: 0x7c880080  sq          $t0, 0x80($a0)
    ctx->pc = 0x343078u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 8));
    // 0x34307c: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x34307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x343080: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x343080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x343084: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x343084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x343088: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x343088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x34308c: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x34308cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x343090: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x343090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343094: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x343094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343098: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x343098u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34309c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x34309cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3430a0: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3430a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3430a4: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3430a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3430a8: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x3430a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3430ac: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x3430acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3430b0: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x3430b0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3430b4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3430b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3430b8: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x3430b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x3430bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3430bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3430c0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x3430c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3430c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3430c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3430c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3430c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3430cc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3430ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3430d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3430d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3430d4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3430d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3430d8: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x3430d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x3430dc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3430dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3430e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3430E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3430E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430E0u;
        // 0x3430e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3430E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3430E8u;
}
