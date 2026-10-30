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

// Function: sub_003414C0
// Address: 0x3414c0 - 0x341638
void sub_003414C0_0x3414c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003414C0_0x3414c0");
#endif

    ctx->pc = 0x3414c0u;

    // 0x3414c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3414c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3414c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3414c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3414c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3414c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3414cc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3414ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3414d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3414d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3414d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3414d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3414d8: 0x0  nop
    ctx->pc = 0x3414d8u;
    // NOP
    // 0x3414dc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x3414DCu;
    {
        const bool branch_taken_0x3414dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3414E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414DCu;
        // 0x3414e0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414dc) {
            ctx->pc = 0x34150Cu;
            goto label_34150c;
        }
    }
    ctx->pc = 0x3414E4u;
    // 0x3414e4: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3414e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3414e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3414e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3414ec: 0x0  nop
    ctx->pc = 0x3414ecu;
    // NOP
    // 0x3414f0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3414F0u;
    {
        const bool branch_taken_0x3414f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3414f0) {
            ctx->pc = 0x3414F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3414F0u;
            // 0x3414f4: 0x79240010  lq          $a0, 0x10($t1) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341510u;
            goto label_341510;
        }
    }
    ctx->pc = 0x3414F8u;
    // 0x3414f8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3414f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3414fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3414fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341500: 0x0  nop
    ctx->pc = 0x341500u;
    // NOP
    // 0x341504: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x341504u;
    {
        const bool branch_taken_0x341504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341504) {
            ctx->pc = 0x34162Cu;
            goto label_34162c;
        }
    }
    ctx->pc = 0x34150Cu;
label_34150c:
    // 0x34150c: 0x79240010  lq          $a0, 0x10($t1)
    ctx->pc = 0x34150cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 16)));
label_341510:
    // 0x341510: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x341510u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x341514: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x341514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x341518: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x341518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34151c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34151cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x341520: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x341520u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x341524: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x341524u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x341528: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x341528u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34152c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x341530: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x341530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x341534: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x341534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x341538: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x341538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34153c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34153cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x341540: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x341540u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341544: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x341544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x341548: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x341548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34154c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34154cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341550: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341554: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x341554u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341558: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x341558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x34155c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34155cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x341560: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341564: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341568: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x341568u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34156c: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x34156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x341570: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x341570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341574: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x341574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341578: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x341578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34157c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x34157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341580: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x341580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341584: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x341584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x341588: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x341588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x34158c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x341590: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x341590u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x341594: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x341594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x341598: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x341598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34159c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x34159cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3415a0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3415a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3415a4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3415a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3415a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3415a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3415ac: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3415acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x3415b0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3415b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3415b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3415b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3415b8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3415b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3415bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3415bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3415c0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3415c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3415c4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3415c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3415c8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3415c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3415cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3415ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3415d0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3415d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3415d4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3415d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3415d8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3415d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3415dc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x3415dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x3415e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3415e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3415e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3415e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3415e8: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x3415e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3415ec: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x3415ecu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3415f0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3415f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3415f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3415f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3415f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3415f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3415fc: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3415fcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x341600: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x341600u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341604: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x341604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x341608: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x341608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x34160c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x34160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x341610: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x341610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x341614: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x341614u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 7));
    // 0x341618: 0x7d260000  sq          $a2, 0x0($t1)
    ctx->pc = 0x341618u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 6));
    // 0x34161c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x34161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x341620: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x341620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x341624: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x341624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x341628: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x341628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_34162c:
    // 0x34162c: 0x3e00008  jr          $ra
    ctx->pc = 0x34162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34162Cu;
        // 0x341630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341634u;
    // 0x341634: 0x0  nop
    ctx->pc = 0x341634u;
    // NOP
    ctx->pc = 0x341638u;
}
