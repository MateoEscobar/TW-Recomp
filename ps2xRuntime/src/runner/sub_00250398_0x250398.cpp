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

// Function: sub_00250398
// Address: 0x250398 - 0x2505b0
void sub_00250398_0x250398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250398_0x250398");
#endif

    ctx->pc = 0x250398u;

    // 0x250398: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x250398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25039c: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x25039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2503a0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2503a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2503a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2503a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2503a8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2503a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2503ac: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2503acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2503b0: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x2503b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2503b4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2503b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x2503b8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2503b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2503bc: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2503bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2503c0: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x2503c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2503c4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2503c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2503c8: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x2503c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2503cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2503ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2503d0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2503d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2503d4: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x2503d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2503d8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2503d8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x2503dc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2503dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2503e0: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2503e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2503e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2503e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2503e8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2503e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2503ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2503ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2503f0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2503f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2503f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2503f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2503f8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2503f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2503fc: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2503fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x250400: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x250400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250404: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x250404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250408: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x250408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25040c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x25040cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250410: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x250410u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x250414: 0x4a0003bf  vwaitq
    ctx->pc = 0x250414u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250418: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x250418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25041c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x25041cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x250420: 0x44863000  mtc1        $a2, $f6
    ctx->pc = 0x250420u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x250424: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x250424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250428: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x250428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25042c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25042cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250430: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250430u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250434: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x250434u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x250438: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x250438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25043c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x25043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x250440: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x250440u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250444: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x250444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x250448: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x250448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x25044c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x25044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x250450: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x250450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250454: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x250454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x250458: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x250458u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x25045c: 0x0  nop
    ctx->pc = 0x25045cu;
    // NOP
    // 0x250460: 0x0  nop
    ctx->pc = 0x250460u;
    // NOP
    // 0x250464: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250464u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x250468: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x250468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25046c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25046cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250470: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x250470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250474: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x250474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250478: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x250478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25047c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x25047cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250480: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x250480u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x250484: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x250484u;
    {
        const bool branch_taken_0x250484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250484u;
        // 0x250488: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250484) {
            ctx->pc = 0x2504A8u;
            goto label_2504a8;
        }
    }
    ctx->pc = 0x25048Cu;
    // 0x25048c: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x25048cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x250490: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x250490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x250494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250498: 0x0  nop
    ctx->pc = 0x250498u;
    // NOP
    // 0x25049c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25049cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2504a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2504A0u;
    {
        const bool branch_taken_0x2504a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2504a0) {
            ctx->pc = 0x2504D8u;
            goto label_2504d8;
        }
    }
    ctx->pc = 0x2504A8u;
label_2504a8:
    // 0x2504a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2504a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2504ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2504acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2504b0: 0x0  nop
    ctx->pc = 0x2504b0u;
    // NOP
    // 0x2504b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2504b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2504b8: 0x0  nop
    ctx->pc = 0x2504b8u;
    // NOP
    // 0x2504bc: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2504BCu;
    {
        const bool branch_taken_0x2504bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2504bc) {
            ctx->pc = 0x2504C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504BCu;
            // 0x2504c0: 0x78a20000  lq          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504F4u;
            goto label_2504f4;
        }
    }
    ctx->pc = 0x2504C4u;
    // 0x2504c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2504c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2504c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2504c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2504cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2504ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2504d0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2504d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2504d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2504d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2504d8:
    // 0x2504d8: 0x0  nop
    ctx->pc = 0x2504d8u;
    // NOP
    // 0x2504dc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2504DCu;
    {
        const bool branch_taken_0x2504dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2504dc) {
            ctx->pc = 0x2504E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504DCu;
            // 0x2504e0: 0x78a20000  lq          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504F4u;
            goto label_2504f4;
        }
    }
    ctx->pc = 0x2504E4u;
    // 0x2504e4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2504e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2504e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2504e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2504ec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2504ECu;
    {
        const bool branch_taken_0x2504ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2504ec) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504F4u;
label_2504f4:
    // 0x2504f4: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2504f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2504f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2504f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2504fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2504fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250500: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x250500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250504: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250504u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250508: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x250508u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25050c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x25050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x250510: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x250510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x250514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250518: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x250518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x25051c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x25051cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x250520: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x250520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x250524: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x250524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250528: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25052c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25052cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250530: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250530u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250534: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x250534u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x250538: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x250538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25053c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x25053cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250540: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x250540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250544: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x250544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250548: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x250548u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x25054c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25054cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250550: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x250550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250554: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x250554u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x250558: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x250558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x25055c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25055cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250560: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x250560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x250564: 0x0  nop
    ctx->pc = 0x250564u;
    // NOP
    // 0x250568: 0x0  nop
    ctx->pc = 0x250568u;
    // NOP
    // 0x25056c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25056cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x250570: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x250570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x250574: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x250574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250578: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x250578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x25057c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25057cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250580: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x250580u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250584: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x250584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250588: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250588u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25058c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25058cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250590: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250590u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250594: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x250594u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x250598: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x250598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x25059c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x25059cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2505a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2505a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2505a4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2505a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2505a8:
    // 0x2505a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2505A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2505ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A8u;
        // 0x2505ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2505B0u;
}
