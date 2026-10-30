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

// Function: sub_0034F740
// Address: 0x34f740 - 0x34f950
void sub_0034F740_0x34f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F740_0x34f740");
#endif

    switch (ctx->pc) {
        case 0x34f7c0u: goto label_34f7c0;
        case 0x34f890u: goto label_34f890;
        default: break;
    }

    ctx->pc = 0x34f740u;

    // 0x34f740: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x34f744: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x34f744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x34f748: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x34f748u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x34f74c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f750: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x34f750u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x34f754: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x34f754u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x34f758: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x34f758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x34f75c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x34f75cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x34f760: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x34f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x34f764: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x34f764u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x34f768: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x34f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x34f76c: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x34f76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f770: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x34f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x34f774: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x34f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x34f778: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x34f778u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x34f77c: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x34f77cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x34f780: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x34f780u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x34f784: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x34f784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34f788: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x34f78c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34f78cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34f790: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x34F790u;
    {
        const bool branch_taken_0x34f790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F790u;
        // 0x34f794: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f790) {
            ctx->pc = 0x34F918u;
            goto label_34f918;
        }
    }
    ctx->pc = 0x34F798u;
    // 0x34f798: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34f798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34f79c: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x34f79cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x34f7a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f7a4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x34f7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x34f7a8: 0x245316c0  addiu       $s3, $v0, 0x16C0
    ctx->pc = 0x34f7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x34f7ac: 0x3c01417a  lui         $at, 0x417A
    ctx->pc = 0x34f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16762 << 16));
    // 0x34f7b0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x34f7b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x34f7b4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x34f7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x34f7b8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x34f7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x34f7bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x34f7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f7c0:
    // 0x34f7c0: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x34f7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34f7c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34f7c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f7c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f7c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f7cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f7ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f7d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f7d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34f7d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f7d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f7dc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x34f7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f7e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f7e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f7e8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34f7e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x34f7ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x34f7ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34f7f0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x34f7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f7f4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34f7f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f7f8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34f7f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f7fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34f7fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f800: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34f800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f804: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34f804u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f808: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34f808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f80c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34f80cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34f810: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34f810u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34f814: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34f818: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x34f818u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f81c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34f81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34f820: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34f820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x34f824: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34f824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34f828: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34f828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34f82c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x34f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x34f830: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34F830u;
    {
        const bool branch_taken_0x34f830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F830u;
        // 0x34f834: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f830) {
            ctx->pc = 0x34F844u;
            goto label_34f844;
        }
    }
    ctx->pc = 0x34F838u;
    // 0x34f838: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x34f838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34f83c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34F83Cu;
    {
        const bool branch_taken_0x34f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F83Cu;
        // 0x34f840: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f83c) {
            ctx->pc = 0x34F870u;
            goto label_34f870;
        }
    }
    ctx->pc = 0x34F844u;
label_34f844:
    // 0x34f844: 0x0  nop
    ctx->pc = 0x34f844u;
    // NOP
    // 0x34f848: 0x0  nop
    ctx->pc = 0x34f848u;
    // NOP
    // 0x34f84c: 0x4600c003  div.s       $f0, $f24, $f0
    ctx->pc = 0x34f84cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
    // 0x34f850: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34f850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34f854: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f858: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f85c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f85cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f860: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34f860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f864: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x34f868: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x34f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x34f86c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x34f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_34f870:
    // 0x34f870: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x34f870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34f874: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x34f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f878: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x34f878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x34f87c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x34f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34f880: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34f884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34f884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f888: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x34F888u;
    SET_GPR_U32(ctx, 31, 0x34F890u);
    ctx->pc = 0x34F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F888u;
    // 0x34f88c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x34F888u, 0x34F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F890u;
label_34f890:
    // 0x34f890: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x34f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34f894: 0x54510017  bnel        $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34F894u;
    {
        const bool branch_taken_0x34f894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x34f894) {
            ctx->pc = 0x34F898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F894u;
            // 0x34f898: 0x4617a842  mul.s       $f1, $f21, $f23 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F8F4u;
            goto label_34f8f4;
        }
    }
    ctx->pc = 0x34F89Cu;
    // 0x34f89c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x34f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f8a4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x34f8a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f8a8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x34f8a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x34f8ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34f8acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f8b0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34f8b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34f8b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f8b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34f8b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f8bc: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x34f8bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f8c0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34f8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34f8c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f8c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f8c8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34f8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f8cc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34f8ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34f8d0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34f8d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34f8d4: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x34f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x34f8d8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x34f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x34f8dc: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x34f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x34f8e0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x34f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x34f8e4: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x34f8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
    // 0x34f8e8: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x34f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x34f8ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34F8ECu;
    {
        const bool branch_taken_0x34f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8ECu;
        // 0x34f8f0: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8ec) {
            ctx->pc = 0x34F91Cu;
            goto label_34f91c;
        }
    }
    ctx->pc = 0x34F8F4u;
label_34f8f4:
    // 0x34f8f4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x34f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f8f8: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x34f8f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x34f8fc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x34f8fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34f900: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34f900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34f904: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34f908: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x34f908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f90c: 0x0  nop
    ctx->pc = 0x34f90cu;
    // NOP
    // 0x34f910: 0x4501ffab  bc1t        . + 4 + (-0x55 << 2)
    ctx->pc = 0x34F910u;
    {
        const bool branch_taken_0x34f910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F910u;
        // 0x34f914: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f910) {
            ctx->pc = 0x34F7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f7c0;
        }
    }
    ctx->pc = 0x34F918u;
label_34f918:
    // 0x34f918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f91c:
    // 0x34f91c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x34f91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34f920: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x34f920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x34f924: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x34f924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x34f928: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x34f928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34f92c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x34f92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34f930: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x34f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x34f934: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x34f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34f938: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x34f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34f93c: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x34f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34f940: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x34f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34f944: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x34f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34f948: 0x3e00008  jr          $ra
    ctx->pc = 0x34F948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F948u;
        // 0x34f94c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F950u;
}
