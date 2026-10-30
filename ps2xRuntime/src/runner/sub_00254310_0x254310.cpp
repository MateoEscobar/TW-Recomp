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

// Function: sub_00254310
// Address: 0x254310 - 0x254418
void sub_00254310_0x254310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254310_0x254310");
#endif

    switch (ctx->pc) {
        case 0x254348u: goto label_254348;
        case 0x25440cu: goto label_25440c;
        default: break;
    }

    ctx->pc = 0x254310u;

    // 0x254310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254314: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x254314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x254318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25431c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x25431cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x254320: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x254320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x254324: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x254324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x254328: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x254328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25432c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254330: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x254330u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254334: 0x0  nop
    ctx->pc = 0x254334u;
    // NOP
    // 0x254338: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x254338u;
    {
        const bool branch_taken_0x254338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254338) {
            ctx->pc = 0x25433Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254338u;
            // 0x25433c: 0x84a30002  lh          $v1, 0x2($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254350u;
            goto label_254350;
        }
    }
    ctx->pc = 0x254340u;
    // 0x254340: 0xc087468  jal         func_21D1A0
    ctx->pc = 0x254340u;
    SET_GPR_U32(ctx, 31, 0x254348u);
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x254340u, 0x254348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254348u;
label_254348:
    // 0x254348: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x254348u;
    {
        const bool branch_taken_0x254348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254348u;
        // 0x25434c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254348) {
            ctx->pc = 0x254410u;
            goto label_254410;
        }
    }
    ctx->pc = 0x254350u;
label_254350:
    // 0x254350: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x254354: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x254354u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x254358: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x254358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x25435c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25435cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254360: 0x0  nop
    ctx->pc = 0x254360u;
    // NOP
    // 0x254364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254368: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x254368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x25436c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x25436cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x254370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x254370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x254374: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x254374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254378: 0x0  nop
    ctx->pc = 0x254378u;
    // NOP
    // 0x25437c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25437cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x254380: 0x84840092  lh          $a0, 0x92($a0)
    ctx->pc = 0x254380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x254384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254388: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x254388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25438c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25438cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x254390: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x254390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x254394: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x254394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x254398: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x254398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25439c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x25439cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2543a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2543a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2543a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2543a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2543a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2543a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2543ac: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x2543acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2543b0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2543b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2543b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2543b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2543b8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2543b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2543bc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2543bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2543c0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2543c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2543c4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2543c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2543c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2543c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2543cc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2543ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2543d0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2543d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2543d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2543d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2543d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2543d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2543dc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2543dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2543e0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2543e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2543e4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2543e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2543e8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2543e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2543ec: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2543ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2543f0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2543f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2543f4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2543f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2543f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2543f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2543fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2543fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x254400: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x254400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x254404: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x254404u;
    SET_GPR_U32(ctx, 31, 0x25440Cu);
    ctx->pc = 0x254408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254404u;
    // 0x254408: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x254404u, 0x25440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25440Cu;
label_25440c:
    // 0x25440c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25440cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_254410:
    // 0x254410: 0x3e00008  jr          $ra
    ctx->pc = 0x254410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254410u;
        // 0x254414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254418u;
}
