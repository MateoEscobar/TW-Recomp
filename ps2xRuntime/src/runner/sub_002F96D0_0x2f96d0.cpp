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

// Function: sub_002F96D0
// Address: 0x2f96d0 - 0x2f9980
void sub_002F96D0_0x2f96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F96D0_0x2f96d0");
#endif

    switch (ctx->pc) {
        case 0x2f9814u: goto label_2f9814;
        case 0x2f98b0u: goto label_2f98b0;
        case 0x2f98e8u: goto label_2f98e8;
        case 0x2f9908u: goto label_2f9908;
        case 0x2f9920u: goto label_2f9920;
        case 0x2f9930u: goto label_2f9930;
        default: break;
    }

    ctx->pc = 0x2f96d0u;

    // 0x2f96d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2f96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2f96d4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2f96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2f96d8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2f96d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2f96dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f96dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f96e0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2f96e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2f96e4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2f96e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2f96e8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2f96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2f96ec: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2f96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2f96f0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2f96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2f96f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f96f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f96f8: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2f96f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2f96fc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2f96fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2f9700: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x2f9700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2f9704: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2F9704u;
    {
        const bool branch_taken_0x2f9704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9704u;
        // 0x2f9708: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9704) {
            ctx->pc = 0x2F9948u;
            goto label_2f9948;
        }
    }
    ctx->pc = 0x2F970Cu;
    // 0x2f970c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f9710: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2f9710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2f9714: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f9714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f9718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f971c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2f971cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9720: 0x3c0a0071  lui         $t2, 0x71
    ctx->pc = 0x2f9720u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)113 << 16));
    // 0x2f9724: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2f9724u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9728: 0x254a4b00  addiu       $t2, $t2, 0x4B00
    ctx->pc = 0x2f9728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19200));
    // 0x2f972c: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x2f972cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x2f9730: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f9730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f9734: 0x85250002  lh          $a1, 0x2($t1)
    ctx->pc = 0x2f9734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2f9738: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2f9738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2f973c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f973cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9740: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f9740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f9744: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x2f9744u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f9748: 0x7a260020  lq          $a2, 0x20($s1)
    ctx->pc = 0x2f9748u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f974c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f9750: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x2f9750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x2f9754: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f9754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f9758: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2f9758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2f975c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9760: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f9760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f9764: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2f9764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9768: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f9768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f976c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2f976cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2f9770: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2f9770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f9774: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2f9774u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f9778: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2f9778u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f977c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f977cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9780: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2f9780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2f9784: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f9784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f9788: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f9788u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f978c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x2f978cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f9790: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2f9790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2f9794: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2f9794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f9798: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f9798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f979c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2f979cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f97a0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2f97a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2f97a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f97a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f97a8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2f97a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f97ac: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2f97acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2f97b0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f97b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f97b4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f97b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f97b8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2f97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x2f97bc: 0x0  nop
    ctx->pc = 0x2f97bcu;
    // NOP
    // 0x2f97c0: 0x0  nop
    ctx->pc = 0x2f97c0u;
    // NOP
    // 0x2f97c4: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x2f97c4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x2f97c8: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x2f97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x2f97cc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x2f97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x2f97d0: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x2f97d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x2f97d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f97d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f97d8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2f97d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2f97dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f97dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f97e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f97e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f97e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f97e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f97e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2f97ec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f97ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2f97f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f97f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2f97f4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x2f97f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x2f97f8: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x2f97f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x2f97fc: 0x85250002  lh          $a1, 0x2($t1)
    ctx->pc = 0x2f97fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2f9800: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x2f9800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x2f9804: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f9804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f9808: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2f9808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2f980c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2F980Cu;
    SET_GPR_U32(ctx, 31, 0x2F9814u);
    ctx->pc = 0x2F9810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F980Cu;
    // 0x2f9810: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F980Cu, 0x2F9814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9814u;
label_2f9814:
    // 0x2f9814: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f9814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f9818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f981c: 0x0  nop
    ctx->pc = 0x2f981cu;
    // NOP
    // 0x2f9820: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2f9820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9824: 0x0  nop
    ctx->pc = 0x2f9824u;
    // NOP
    // 0x2f9828: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2F9828u;
    {
        const bool branch_taken_0x2f9828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9828u;
        // 0x2f982c: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9828) {
            ctx->pc = 0x2F987Cu;
            goto label_2f987c;
        }
    }
    ctx->pc = 0x2F9830u;
    // 0x2f9830: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f9830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9834: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f9834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9838: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f9838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f983c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2f983cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f9840: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f9840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f9844: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2f9844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f9848: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2f9848u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2f984c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f984cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9850: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f9850u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9854: 0x0  nop
    ctx->pc = 0x2f9854u;
    // NOP
    // 0x2f9858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f9858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f985c: 0x0  nop
    ctx->pc = 0x2f985cu;
    // NOP
    // 0x2f9860: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9860u;
    {
        const bool branch_taken_0x2f9860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9860) {
            ctx->pc = 0x2F987Cu;
            goto label_2f987c;
        }
    }
    ctx->pc = 0x2F9868u;
    // 0x2f9868: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f9868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f986c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f986cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9870: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x2f9870u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f9874: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9874u;
    {
        const bool branch_taken_0x2f9874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9874u;
        // 0x2f9878: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9874) {
            ctx->pc = 0x2F9894u;
            goto label_2f9894;
        }
    }
    ctx->pc = 0x2F987Cu;
label_2f987c:
    // 0x2f987c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f987cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9884: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f9884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f9888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f9888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f988c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f9890: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2f9890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f9894:
    // 0x2f9894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f9894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9898: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2f9898u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f989c: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x2f989cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f98a0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2f98a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f98a4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2f98a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f98a8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2f98a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f98ac: 0x0  nop
    ctx->pc = 0x2f98acu;
    // NOP
label_2f98b0:
    // 0x2f98b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2f98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f98b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f98b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f98b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f98bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f98bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f98c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f98c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f98c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f98c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f98cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f98ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f98d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f98d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f98d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f98d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f98d8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f98d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2f98dc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f98dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2f98e0: 0xc0be4ec  jal         func_2F93B0
    ctx->pc = 0x2F98E0u;
    SET_GPR_U32(ctx, 31, 0x2F98E8u);
    ctx->pc = 0x2F98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F98E0u;
    // 0x2f98e4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F93B0u, 0x2F98E0u, 0x2F98E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F98E8u;
label_2f98e8:
    // 0x2f98e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f98e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98ec: 0x54750013  bnel        $v1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F98ECu;
    {
        const bool branch_taken_0x2f98ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f98ec) {
            ctx->pc = 0x2F98F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F98ECu;
            // 0x2f98f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F993Cu;
            goto label_2f993c;
        }
    }
    ctx->pc = 0x2F98F4u;
    // 0x2f98f4: 0x9222003d  lbu         $v0, 0x3D($s1)
    ctx->pc = 0x2f98f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
    // 0x2f98f8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F98F8u;
    {
        const bool branch_taken_0x2f98f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F98F8u;
        // 0x2f98fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98f8) {
            ctx->pc = 0x2F9928u;
            goto label_2f9928;
        }
    }
    ctx->pc = 0x2F9900u;
    // 0x2f9900: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2F9900u;
    SET_GPR_U32(ctx, 31, 0x2F9908u);
    ctx->pc = 0x2F9904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9900u;
    // 0x2f9904: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F9900u, 0x2F9908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9908u;
label_2f9908:
    // 0x2f9908: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9908u;
    {
        const bool branch_taken_0x2f9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9908u;
        // 0x2f990c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9908) {
            ctx->pc = 0x2F9930u;
            goto label_2f9930;
        }
    }
    ctx->pc = 0x2F9910u;
    // 0x2f9910: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f9910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f9914: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f9914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f9918: 0xc0bf68e  jal         func_2FDA38
    ctx->pc = 0x2F9918u;
    SET_GPR_U32(ctx, 31, 0x2F9920u);
    ctx->pc = 0x2F991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9918u;
    // 0x2f991c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA38u, 0x2F9918u, 0x2F9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9920u;
label_2f9920:
    // 0x2f9920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9920u;
    {
        const bool branch_taken_0x2f9920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9920u;
        // 0x2f9924: 0xa2360033  sb          $s6, 0x33($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9920) {
            ctx->pc = 0x2F9934u;
            goto label_2f9934;
        }
    }
    ctx->pc = 0x2F9928u;
label_2f9928:
    // 0x2f9928: 0xc0be578  jal         func_2F95E0
    ctx->pc = 0x2F9928u;
    SET_GPR_U32(ctx, 31, 0x2F9930u);
    ctx->pc = 0x2F992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9928u;
    // 0x2f992c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F95E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F95E0u, 0x2F9928u, 0x2F9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9930u;
label_2f9930:
    // 0x2f9930: 0xa2360033  sb          $s6, 0x33($s1)
    ctx->pc = 0x2f9930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 22));
label_2f9934:
    // 0x2f9934: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9934u;
    {
        const bool branch_taken_0x2f9934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9934u;
        // 0x2f9938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9934) {
            ctx->pc = 0x2F994Cu;
            goto label_2f994c;
        }
    }
    ctx->pc = 0x2F993Cu;
label_2f993c:
    // 0x2f993c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2f993cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f9940: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2F9940u;
    {
        const bool branch_taken_0x2f9940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9940u;
        // 0x2f9944: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9940) {
            ctx->pc = 0x2F98B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f98b0;
        }
    }
    ctx->pc = 0x2F9948u;
label_2f9948:
    // 0x2f9948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f994c:
    // 0x2f994c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2f994cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f9950: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2f9950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f9954: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2f9954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f9958: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2f9958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f995c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2f995cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f9960: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2f9960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f9964: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2f9964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f9968: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f9968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f996c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2f996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f9970: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2f9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f9974: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9974u;
        // 0x2f9978: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F997Cu;
    // 0x2f997c: 0x0  nop
    ctx->pc = 0x2f997cu;
    // NOP
    ctx->pc = 0x2f9980u;
}
