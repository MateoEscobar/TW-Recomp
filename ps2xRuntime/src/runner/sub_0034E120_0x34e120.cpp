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

// Function: sub_0034E120
// Address: 0x34e120 - 0x34e3b8
void sub_0034E120_0x34e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E120_0x34e120");
#endif

    ctx->pc = 0x34e120u;

    // 0x34e120: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x34e120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e124: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x34e124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34e128: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x34e128u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34e12c: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x34e12cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34e130: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e134: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e138: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e138u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e13c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e13cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e140: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e140u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e144: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x34e144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34e148: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e14c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e14cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e150: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e154: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e158: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e15c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e15cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34e164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e168: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34e168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e16c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e16cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e170: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e174: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e178: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e17c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e180: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34e180u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e184: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x34e184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x34e188: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x34e188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34e18c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e18cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e190: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e194: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e198: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e19c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e19cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e1a0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34e1a0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e1a4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x34e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34e1a8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x34e1a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34e1ac: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34e1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34e1b0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34e1b4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x34e1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x34e1b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e1b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e1bc: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x34e1bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e1c0: 0x0  nop
    ctx->pc = 0x34e1c0u;
    // NOP
    // 0x34e1c4: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x34E1C4u;
    {
        const bool branch_taken_0x34e1c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1C4u;
        // 0x34e1c8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1c4) {
            ctx->pc = 0x34E3A8u;
            goto label_34e3a8;
        }
    }
    ctx->pc = 0x34E1CCu;
    // 0x34e1cc: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x34e1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e1d0: 0x0  nop
    ctx->pc = 0x34e1d0u;
    // NOP
    // 0x34e1d4: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x34E1D4u;
    {
        const bool branch_taken_0x34e1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1D4u;
        // 0x34e1d8: 0x46001007  neg.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1d4) {
            ctx->pc = 0x34E318u;
            goto label_34e318;
        }
    }
    ctx->pc = 0x34E1DCu;
    // 0x34e1dc: 0x0  nop
    ctx->pc = 0x34e1dcu;
    // NOP
    // 0x34e1e0: 0x0  nop
    ctx->pc = 0x34e1e0u;
    // NOP
    // 0x34e1e4: 0x460100c4  c1          0x100C4
    ctx->pc = 0x34e1e4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x34e1e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e1ec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x34e1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34e1f0: 0x0  nop
    ctx->pc = 0x34e1f0u;
    // NOP
    // 0x34e1f4: 0x0  nop
    ctx->pc = 0x34e1f4u;
    // NOP
    // 0x34e1f8: 0x46042883  div.s       $f2, $f5, $f4
    ctx->pc = 0x34e1f8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x34e1fc: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x34e1fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34e200: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34e200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34e204: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x34e204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x34e208: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34e208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e20c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x34e20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e210: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x34e210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34e214: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x34E214u;
    {
        const bool branch_taken_0x34e214 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E214u;
        // 0x34e218: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e214) {
            ctx->pc = 0x34E3A8u;
            goto label_34e3a8;
        }
    }
    ctx->pc = 0x34E21Cu;
    // 0x34e21c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x34e21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e220: 0x0  nop
    ctx->pc = 0x34e220u;
    // NOP
    // 0x34e224: 0x45030061  bc1tl       . + 4 + (0x61 << 2)
    ctx->pc = 0x34E224u;
    {
        const bool branch_taken_0x34e224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e224) {
            ctx->pc = 0x34E228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E224u;
            // 0x34e228: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E3ACu;
            goto label_34e3ac;
        }
    }
    ctx->pc = 0x34E22Cu;
    // 0x34e22c: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x34e22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e230: 0x0  nop
    ctx->pc = 0x34e230u;
    // NOP
    // 0x34e234: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x34E234u;
    {
        const bool branch_taken_0x34e234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E234u;
        // 0x34e238: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e234) {
            ctx->pc = 0x34E2F0u;
            goto label_34e2f0;
        }
    }
    ctx->pc = 0x34E23Cu;
    // 0x34e23c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x34e23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e240: 0x0  nop
    ctx->pc = 0x34e240u;
    // NOP
    // 0x34e244: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x34E244u;
    {
        const bool branch_taken_0x34e244 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E244u;
        // 0x34e248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e244) {
            ctx->pc = 0x34E354u;
            goto label_34e354;
        }
    }
    ctx->pc = 0x34E24Cu;
    // 0x34e24c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e250: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x34e250u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x34e254: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x34e254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34e258: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x34e258u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e25c: 0x79240000  lq          $a0, 0x0($t1)
    ctx->pc = 0x34e25cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34e260: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34e260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34e264: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e264u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e268: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e26c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x34e26cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e270: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e274: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34e274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34e278: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e27c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e27cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e280: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34e280u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e284: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x34e284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x34e288: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x34e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x34e28c: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x34e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x34e290: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x34e290u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e294: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34e294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34e298: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e29c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34e29cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e2a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e2a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e2a4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34e2a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e2a8: 0x79250000  lq          $a1, 0x0($t1)
    ctx->pc = 0x34e2a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34e2ac: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x34e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x34e2b0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34e2b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e2b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e2b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e2b8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e2b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e2bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e2bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e2c0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x34e2c0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e2c4: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34e2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x34e2c8: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x34e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x34e2cc: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x34e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x34e2d0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34e2d4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34e2d8: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x34e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x34e2dc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x34e2e0: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x34e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x34e2e4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x34e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x34e2e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x34E2E8u;
    {
        const bool branch_taken_0x34e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E2E8u;
        // 0x34e2ec: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2e8) {
            ctx->pc = 0x34E3B0u;
            goto label_34e3b0;
        }
    }
    ctx->pc = 0x34E2F0u;
label_34e2f0:
    // 0x34e2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e2f4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x34e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x34e2f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34e2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34e2fc: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34e2fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e300: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e304: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e308: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e30c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34e30cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e310: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x34E310u;
    {
        const bool branch_taken_0x34e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E310u;
        // 0x34e314: 0x79230000  lq          $v1, 0x0($t1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e310) {
            ctx->pc = 0x34E374u;
            goto label_34e374;
        }
    }
    ctx->pc = 0x34E318u;
label_34e318:
    // 0x34e318: 0x0  nop
    ctx->pc = 0x34e318u;
    // NOP
    // 0x34e31c: 0x0  nop
    ctx->pc = 0x34e31cu;
    // NOP
    // 0x34e320: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x34e320u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x34e324: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x34e324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e328: 0x0  nop
    ctx->pc = 0x34e328u;
    // NOP
    // 0x34e32c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x34E32Cu;
    {
        const bool branch_taken_0x34e32c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E32Cu;
        // 0x34e330: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e32c) {
            ctx->pc = 0x34E3A8u;
            goto label_34e3a8;
        }
    }
    ctx->pc = 0x34E334u;
    // 0x34e334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34e338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e33c: 0x0  nop
    ctx->pc = 0x34e33cu;
    // NOP
    // 0x34e340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34e340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e344: 0x0  nop
    ctx->pc = 0x34e344u;
    // NOP
    // 0x34e348: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x34E348u;
    {
        const bool branch_taken_0x34e348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E348u;
        // 0x34e34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e348) {
            ctx->pc = 0x34E3A8u;
            goto label_34e3a8;
        }
    }
    ctx->pc = 0x34E350u;
    // 0x34e350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34e354:
    // 0x34e354: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x34e354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x34e358: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34e358u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e35c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x34e35cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34e360: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x34e360u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34e364: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e368: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34e368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e36c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e370: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34e370u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_34e374:
    // 0x34e374: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e378: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e37c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e37cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e380: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e380u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e384: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e384u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e388: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x34e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x34e38c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x34e390: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x34e390u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x34e394: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34e394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34e398: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34e39c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34e39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34e3a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34E3A0u;
    {
        const bool branch_taken_0x34e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E3A0u;
        // 0x34e3a4: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e3a0) {
            ctx->pc = 0x34E3B0u;
            goto label_34e3b0;
        }
    }
    ctx->pc = 0x34E3A8u;
label_34e3a8:
    // 0x34e3a8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x34e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_34e3ac:
    // 0x34e3ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e3b0:
    // 0x34e3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x34E3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E3B0u;
        // 0x34e3b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E3B8u;
}
