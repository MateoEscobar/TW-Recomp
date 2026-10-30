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

// Function: sub_0034BBE8
// Address: 0x34bbe8 - 0x34c430
void sub_0034BBE8_0x34bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BBE8_0x34bbe8");
#endif

    switch (ctx->pc) {
        case 0x34bf88u: goto label_34bf88;
        case 0x34bfe4u: goto label_34bfe4;
        case 0x34c03cu: goto label_34c03c;
        case 0x34c0b8u: goto label_34c0b8;
        case 0x34c118u: goto label_34c118;
        case 0x34c18cu: goto label_34c18c;
        case 0x34c1f4u: goto label_34c1f4;
        case 0x34c27cu: goto label_34c27c;
        default: break;
    }

    ctx->pc = 0x34bbe8u;

    // 0x34bbe8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x34bbec: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x34bbecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbf0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x34bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x34bbf4: 0x46006186  mov.s       $f6, $f12
    ctx->pc = 0x34bbf4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[12]);
    // 0x34bbf8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x34bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x34bbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34bbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc00: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x34bc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x34bc04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc08: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x34bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x34bc0c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x34bc0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc10: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x34bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x34bc14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34bc14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc18: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x34bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x34bc1c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x34bc1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc20: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x34bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x34bc24: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x34bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x34bc28: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x34bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x34bc2c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x34bc2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc30: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x34bc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x34bc34: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x34bc34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc38: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x34bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x34bc3c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x34bc3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x34bc40: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x34bc40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34bc44: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x34bc44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34bc48: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x34bc48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34bc4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34bc4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34bc50: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34bc50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34bc54: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34bc54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34bc58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34bc58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34bc5c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x34bc5cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34bc60: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34bc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34bc64: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x34bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x34bc68: 0x8fb60180  lw          $s6, 0x180($sp)
    ctx->pc = 0x34bc68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x34bc6c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x34bc6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34bc70: 0x7a090000  lq          $t1, 0x0($s0)
    ctx->pc = 0x34bc70u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bc74: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34bc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34bc78: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34bc78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34bc7c: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x34bc7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34bc80: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34bc80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bc84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34bc84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bc88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34bc88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bc8c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34bc8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34bc90: 0xafaa00bc  sw          $t2, 0xBC($sp)
    ctx->pc = 0x34bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 10));
    // 0x34bc94: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x34bc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34bc98: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x34bc98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34bc9c: 0x7a070010  lq          $a3, 0x10($s0)
    ctx->pc = 0x34bc9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34bca0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34bca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34bca4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34bca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34bca8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34bca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34bcac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34bcacu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34bcb0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34bcb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34bcb4: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x34bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x34bcb8: 0x46071834  c.lt.s      $f3, $f7
    ctx->pc = 0x34bcb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bcbc: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x34bcbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34bcc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34bcc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34bcc4: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x34bcc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34bcc8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34bcc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bccc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34bcccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bcd0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34bcd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bcd4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34bcd4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34bcd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34bcd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34bcdc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34bcdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34bce0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34bce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bce4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34bce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bce8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34bce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bcec: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34bcecu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34bcf0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34bcf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34bcf4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34bcf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34bcf8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34bcf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bcfc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34bcfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd00: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34bd00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd04: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x34bd04u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34bd08: 0x44869800  mtc1        $a2, $f19
    ctx->pc = 0x34bd08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x34bd0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34bd0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34bd10: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34bd10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34bd14: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34bd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd18: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34bd18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd1c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34bd1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd20: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34bd20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34bd24: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x34bd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x34bd28: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34bd28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34bd2c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34bd2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34bd30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34bd30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34bd34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34bd38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34bd3c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34bd3cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34bd40: 0x44888800  mtc1        $t0, $f17
    ctx->pc = 0x34bd40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x34bd44: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x34bd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34bd48: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x34bd48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34bd4c: 0x8fb50190  lw          $s5, 0x190($sp)
    ctx->pc = 0x34bd4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x34bd50: 0x8fb10198  lw          $s1, 0x198($sp)
    ctx->pc = 0x34bd50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x34bd54: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34bd54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34bd58: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34bd5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34BD5Cu;
    {
        const bool branch_taken_0x34bd5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD5Cu;
        // 0x34bd60: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bd5c) {
            ctx->pc = 0x34BD74u;
            goto label_34bd74;
        }
    }
    ctx->pc = 0x34BD64u;
    // 0x34bd64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x34bd64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bd68: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x34bd68u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x34bd6c: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x34bd6cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x34bd70: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x34bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
label_34bd74:
    // 0x34bd74: 0x46071034  c.lt.s      $f2, $f7
    ctx->pc = 0x34bd74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bd78: 0x0  nop
    ctx->pc = 0x34bd78u;
    // NOP
    // 0x34bd7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34BD7Cu;
    {
        const bool branch_taken_0x34bd7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34bd7c) {
            ctx->pc = 0x34BD90u;
            goto label_34bd90;
        }
    }
    ctx->pc = 0x34BD84u;
    // 0x34bd84: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34bd84u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34bd88: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x34bd88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bd8c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x34bd8cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_34bd90:
    // 0x34bd90: 0x46078834  c.lt.s      $f17, $f7
    ctx->pc = 0x34bd90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bd94: 0x0  nop
    ctx->pc = 0x34bd94u;
    // NOP
    // 0x34bd98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34BD98u;
    {
        const bool branch_taken_0x34bd98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD98u;
        // 0x34bd9c: 0xc58e0000  lwc1        $f14, 0x0($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bd98) {
            ctx->pc = 0x34BDACu;
            goto label_34bdac;
        }
    }
    ctx->pc = 0x34BDA0u;
    // 0x34bda0: 0x46008c47  neg.s       $f17, $f17
    ctx->pc = 0x34bda0u;
    ctx->f[17] = FPU_NEG_S(ctx->f[17]);
    // 0x34bda4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34bda8: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x34bda8u;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
label_34bdac:
    // 0x34bdac: 0x460e1836  c.le.s      $f3, $f14
    ctx->pc = 0x34bdacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bdb0: 0x0  nop
    ctx->pc = 0x34bdb0u;
    // NOP
    // 0x34bdb4: 0x450000ab  bc1f        . + 4 + (0xAB << 2)
    ctx->pc = 0x34BDB4u;
    {
        const bool branch_taken_0x34bdb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDB4u;
        // 0x34bdb8: 0xc5800004  lwc1        $f0, 0x4($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdb4) {
            ctx->pc = 0x34C064u;
            goto label_34c064;
        }
    }
    ctx->pc = 0x34BDBCu;
    // 0x34bdbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34bdbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bdc0: 0x0  nop
    ctx->pc = 0x34bdc0u;
    // NOP
    // 0x34bdc4: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x34BDC4u;
    {
        const bool branch_taken_0x34bdc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDC4u;
        // 0x34bdc8: 0xc5810008  lwc1        $f1, 0x8($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdc4) {
            ctx->pc = 0x34BF9Cu;
            goto label_34bf9c;
        }
    }
    ctx->pc = 0x34BDCCu;
    // 0x34bdcc: 0x46018836  c.le.s      $f17, $f1
    ctx->pc = 0x34bdccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bdd0: 0x0  nop
    ctx->pc = 0x34bdd0u;
    // NOP
    // 0x34bdd4: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x34BDD4u;
    {
        const bool branch_taken_0x34bdd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDD4u;
        // 0x34bdd8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdd4) {
            ctx->pc = 0x34BF4Cu;
            goto label_34bf4c;
        }
    }
    ctx->pc = 0x34BDDCu;
    // 0x34bddc: 0xe6470000  swc1        $f7, 0x0($s2)
    ctx->pc = 0x34bddcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x34bde0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x34bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x34bde4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x34bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x34bde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bdec: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x34bdecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34bdf0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x34bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x34bdf4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x34bdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x34bdf8: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x34bdf8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bdfc: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x34bdfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34be00: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x34be00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34be04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34be04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34be08: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34be08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34be0c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34be0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34be10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34be14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be18: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34be18u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34be1c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34be1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34be20: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34be20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34be24: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34be24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34be28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34be2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be30: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x34be30u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34be34: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x34be34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34be38: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x34be38u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34be3c: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x34be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34be40: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x34be40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x34be44: 0x46011829  min.s       $f0, $f3, $f1
    ctx->pc = 0x34be44u;
    ctx->f[0] = std::min(ctx->f[3], ctx->f[1]);
    // 0x34be48: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x34be48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x34be4c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x34be4cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x34be50: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x34be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x34be54: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x34be54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34be58: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x34be58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34be5c: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x34be5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34be60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34be60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34be64: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34be64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34be68: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34be68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be6c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34be6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34be70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be74: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34be74u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34be78: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34be78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34be7c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34be7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34be80: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34be80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34be84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34be88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34be8c: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x34be8cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34be90: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x34be90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34be94: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x34be94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34be98: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x34be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34be9c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x34be9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x34bea0: 0x46011829  min.s       $f0, $f3, $f1
    ctx->pc = 0x34bea0u;
    ctx->f[0] = std::min(ctx->f[3], ctx->f[1]);
    // 0x34bea4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x34bea4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x34bea8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x34bea8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x34beac: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x34beacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x34beb0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x34beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34beb4: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x34beb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x34beb8: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x34beb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34bebc: 0x7ec40000  sq          $a0, 0x0($s6)
    ctx->pc = 0x34bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 4));
    // 0x34bec0: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x34bec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34bec4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34bec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34bec8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34bec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34becc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34beccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34bed0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34bed0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34bed4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34bed4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34bed8: 0x7ec40000  sq          $a0, 0x0($s6)
    ctx->pc = 0x34bed8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 4));
    // 0x34bedc: 0xe6c70008  swc1        $f7, 0x8($s6)
    ctx->pc = 0x34bedcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x34bee0: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34bee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34bee4: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x34bee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34bee8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34bee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34beec: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x34beecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34bef0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34bef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34bef4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34bef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34bef8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34bef8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34befc: 0x4a0003bf  vwaitq
    ctx->pc = 0x34befcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34bf00: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x34bf00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34bf04: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34bf04u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34bf08: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x34bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x34bf0c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x34bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bf10: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x34bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bf14: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x34bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34bf18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34bf18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34bf1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x34bf1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x34bf20: 0xc6c3000c  lwc1        $f3, 0xC($s6)
    ctx->pc = 0x34bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34bf24: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34bf24u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34bf28: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x34bf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34bf2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x34bf2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34bf30: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x34bf30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34bf34: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x34bf34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x34bf38: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x34bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x34bf3c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x34bf3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34bf40: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x34bf44: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x34BF44u;
    {
        const bool branch_taken_0x34bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF44u;
        // 0x34bf48: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf44) {
            ctx->pc = 0x34C3F8u;
            goto label_34c3f8;
        }
    }
    ctx->pc = 0x34BF4Cu;
label_34bf4c:
    // 0x34bf4c: 0xe7b30000  swc1        $f19, 0x0($sp)
    ctx->pc = 0x34bf4cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34bf50: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x34bf50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x34bf54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bf58: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34bf5c: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34bf5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34bf60: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x34bf60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x34bf64: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x34bf64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x34bf68: 0x46001bc6  mov.s       $f15, $f3
    ctx->pc = 0x34bf68u;
    ctx->f[15] = FPU_MOV_S(ctx->f[3]);
    // 0x34bf6c: 0x46001406  mov.s       $f16, $f2
    ctx->pc = 0x34bf6cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[2]);
    // 0x34bf70: 0x46002c86  mov.s       $f18, $f5
    ctx->pc = 0x34bf70u;
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
    // 0x34bf74: 0x460024c6  mov.s       $f19, $f4
    ctx->pc = 0x34bf74u;
    ctx->f[19] = FPU_MOV_S(ctx->f[4]);
    // 0x34bf78: 0x27a600b4  addiu       $a2, $sp, 0xB4
    ctx->pc = 0x34bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34bf7c: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x34bf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x34bf80: 0xc0d2c10  jal         func_34B040
    ctx->pc = 0x34BF80u;
    SET_GPR_U32(ctx, 31, 0x34BF88u);
    ctx->pc = 0x34BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF80u;
    // 0x34bf84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B040u, 0x34BF80u, 0x34BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF88u;
label_34bf88:
    // 0x34bf88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x34bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34bf8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34bf90: 0x2a840001  slti        $a0, $s4, 0x1
    ctx->pc = 0x34bf90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x34bf94: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x34BF94u;
    {
        const bool branch_taken_0x34bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF94u;
        // 0x34bf98: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf94) {
            ctx->pc = 0x34C0CCu;
            goto label_34c0cc;
        }
    }
    ctx->pc = 0x34BF9Cu;
label_34bf9c:
    // 0x34bf9c: 0x46018836  c.le.s      $f17, $f1
    ctx->pc = 0x34bf9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bfa0: 0x0  nop
    ctx->pc = 0x34bfa0u;
    // NOP
    // 0x34bfa4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x34BFA4u;
    {
        const bool branch_taken_0x34bfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFA4u;
        // 0x34bfa8: 0x46007306  mov.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bfa4) {
            ctx->pc = 0x34C000u;
            goto label_34c000;
        }
    }
    ctx->pc = 0x34BFACu;
    // 0x34bfac: 0x46008c06  mov.s       $f16, $f17
    ctx->pc = 0x34bfacu;
    ctx->f[16] = FPU_MOV_S(ctx->f[17]);
    // 0x34bfb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bfb4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34bfb8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x34bfb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34bfbc: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x34bfbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x34bfc0: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34bfc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34bfc4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x34bfc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x34bfc8: 0x46001bc6  mov.s       $f15, $f3
    ctx->pc = 0x34bfc8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[3]);
    // 0x34bfcc: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x34bfccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
    // 0x34bfd0: 0x46002c86  mov.s       $f18, $f5
    ctx->pc = 0x34bfd0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
    // 0x34bfd4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x34bfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x34bfd8: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x34bfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34bfdc: 0xc0d2c10  jal         func_34B040
    ctx->pc = 0x34BFDCu;
    SET_GPR_U32(ctx, 31, 0x34BFE4u);
    ctx->pc = 0x34BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BFDCu;
    // 0x34bfe0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B040u, 0x34BFDCu, 0x34BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BFE4u;
label_34bfe4:
    // 0x34bfe4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bfe8: 0x17182a  slt         $v1, $zero, $s7
    ctx->pc = 0x34bfe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x34bfec: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x34bfecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x34bff0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x34bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x34bff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34bff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bff8: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x34BFF8u;
    {
        const bool branch_taken_0x34bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFF8u;
        // 0x34bffc: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bff8) {
            ctx->pc = 0x34C244u;
            goto label_34c244;
        }
    }
    ctx->pc = 0x34C000u;
label_34c000:
    // 0x34c000: 0xe7b30000  swc1        $f19, 0x0($sp)
    ctx->pc = 0x34c000u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c004: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x34c004u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x34c008: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x34c008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34c00c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x34c00cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x34c010: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34c010u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c014: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x34c014u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x34c018: 0x460013c6  mov.s       $f15, $f2
    ctx->pc = 0x34c018u;
    ctx->f[15] = FPU_MOV_S(ctx->f[2]);
    // 0x34c01c: 0x46001c06  mov.s       $f16, $f3
    ctx->pc = 0x34c01cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[3]);
    // 0x34c020: 0x46002486  mov.s       $f18, $f4
    ctx->pc = 0x34c020u;
    ctx->f[18] = FPU_MOV_S(ctx->f[4]);
    // 0x34c024: 0x46002cc6  mov.s       $f19, $f5
    ctx->pc = 0x34c024u;
    ctx->f[19] = FPU_MOV_S(ctx->f[5]);
    // 0x34c028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c02c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x34c02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c030: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x34c030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x34c034: 0xc0d2d80  jal         func_34B600
    ctx->pc = 0x34C034u;
    SET_GPR_U32(ctx, 31, 0x34C03Cu);
    ctx->pc = 0x34C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C034u;
    // 0x34c038: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B600u, 0x34C034u, 0x34C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C03Cu;
label_34c03c:
    // 0x34c03c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c044: 0x1ae00004  blez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C044u;
    {
        const bool branch_taken_0x34c044 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x34C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C044u;
        // 0x34c048: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c044) {
            ctx->pc = 0x34C058u;
            goto label_34c058;
        }
    }
    ctx->pc = 0x34C04Cu;
    // 0x34c04c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x34c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34c050: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x34C050u;
    {
        const bool branch_taken_0x34c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C050u;
        // 0x34c054: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c050) {
            ctx->pc = 0x34C238u;
            goto label_34c238;
        }
    }
    ctx->pc = 0x34C058u;
label_34c058:
    // 0x34c058: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x34c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c05c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x34C05Cu;
    {
        const bool branch_taken_0x34c05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C05Cu;
        // 0x34c060: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c05c) {
            ctx->pc = 0x34C238u;
            goto label_34c238;
        }
    }
    ctx->pc = 0x34C064u;
label_34c064:
    // 0x34c064: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c068: 0x0  nop
    ctx->pc = 0x34c068u;
    // NOP
    // 0x34c06c: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x34C06Cu;
    {
        const bool branch_taken_0x34c06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C06Cu;
        // 0x34c070: 0xc5810008  lwc1        $f1, 0x8($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c06c) {
            ctx->pc = 0x34C144u;
            goto label_34c144;
        }
    }
    ctx->pc = 0x34C074u;
    // 0x34c074: 0x46018836  c.le.s      $f17, $f1
    ctx->pc = 0x34c074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c078: 0x0  nop
    ctx->pc = 0x34c078u;
    // NOP
    // 0x34c07c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x34C07Cu;
    {
        const bool branch_taken_0x34c07c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C07Cu;
        // 0x34c080: 0x46008c06  mov.s       $f16, $f17 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c07c) {
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C084u;
    // 0x34c084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c088: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x34c088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34c08c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x34c090: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x34c090u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c094: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x34c094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x34c098: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34c098u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c09c: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x34c09cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x34c0a0: 0x460013c6  mov.s       $f15, $f2
    ctx->pc = 0x34c0a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[2]);
    // 0x34c0a4: 0x46001c46  mov.s       $f17, $f3
    ctx->pc = 0x34c0a4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[3]);
    // 0x34c0a8: 0x46002486  mov.s       $f18, $f4
    ctx->pc = 0x34c0a8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[4]);
    // 0x34c0ac: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x34c0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c0b0: 0xc0d2c10  jal         func_34B040
    ctx->pc = 0x34C0B0u;
    SET_GPR_U32(ctx, 31, 0x34C0B8u);
    ctx->pc = 0x34C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C0B0u;
    // 0x34c0b4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B040u, 0x34C0B0u, 0x34C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0B8u;
label_34c0b8:
    // 0x34c0b8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x34c0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34c0bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c0c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c0c4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x34c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x34c0c8: 0x28c40001  slti        $a0, $a2, 0x1
    ctx->pc = 0x34c0c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
label_34c0cc:
    // 0x34c0cc: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x34c0ccu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x34c0d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c0d4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x34C0D4u;
    {
        const bool branch_taken_0x34c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C0D4u;
        // 0x34c0d8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c0d4) {
            ctx->pc = 0x34C244u;
            goto label_34c244;
        }
    }
    ctx->pc = 0x34C0DCu;
label_34c0dc:
    // 0x34c0dc: 0xe7b30000  swc1        $f19, 0x0($sp)
    ctx->pc = 0x34c0dcu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c0e0: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x34c0e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x34c0e4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34c0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c0e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x34c0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c0ec: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34c0ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c0f0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x34c0f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x34c0f4: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x34c0f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x34c0f8: 0x46001bc6  mov.s       $f15, $f3
    ctx->pc = 0x34c0f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[3]);
    // 0x34c0fc: 0x46001406  mov.s       $f16, $f2
    ctx->pc = 0x34c0fcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[2]);
    // 0x34c100: 0x46002c86  mov.s       $f18, $f5
    ctx->pc = 0x34c100u;
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
    // 0x34c104: 0x460024c6  mov.s       $f19, $f4
    ctx->pc = 0x34c104u;
    ctx->f[19] = FPU_MOV_S(ctx->f[4]);
    // 0x34c108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c10c: 0x27a600b4  addiu       $a2, $sp, 0xB4
    ctx->pc = 0x34c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34c110: 0xc0d2d80  jal         func_34B600
    ctx->pc = 0x34C110u;
    SET_GPR_U32(ctx, 31, 0x34C118u);
    ctx->pc = 0x34C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C110u;
    // 0x34c114: 0x27a700b8  addiu       $a3, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B600u, 0x34C110u, 0x34C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C118u;
label_34c118:
    // 0x34c118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c11c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x34c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x34c120: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x34c120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34c124: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C124u;
    {
        const bool branch_taken_0x34c124 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x34C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C124u;
        // 0x34c128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c124) {
            ctx->pc = 0x34C138u;
            goto label_34c138;
        }
    }
    ctx->pc = 0x34C12Cu;
    // 0x34c12c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x34c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c130: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x34C130u;
    {
        const bool branch_taken_0x34c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C130u;
        // 0x34c134: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c130) {
            ctx->pc = 0x34C238u;
            goto label_34c238;
        }
    }
    ctx->pc = 0x34C138u;
label_34c138:
    // 0x34c138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c13c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x34C13Cu;
    {
        const bool branch_taken_0x34c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C13Cu;
        // 0x34c140: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c13c) {
            ctx->pc = 0x34C238u;
            goto label_34c238;
        }
    }
    ctx->pc = 0x34C144u;
label_34c144:
    // 0x34c144: 0x46018836  c.le.s      $f17, $f1
    ctx->pc = 0x34c144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c148: 0x0  nop
    ctx->pc = 0x34c148u;
    // NOP
    // 0x34c14c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x34C14Cu;
    {
        const bool branch_taken_0x34c14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C14Cu;
        // 0x34c150: 0x46007306  mov.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c14c) {
            ctx->pc = 0x34C1C0u;
            goto label_34c1c0;
        }
    }
    ctx->pc = 0x34C154u;
    // 0x34c154: 0x46008c06  mov.s       $f16, $f17
    ctx->pc = 0x34c154u;
    ctx->f[16] = FPU_MOV_S(ctx->f[17]);
    // 0x34c158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c15c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34c15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c160: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x34c160u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c164: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x34c164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x34c168: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34c168u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c16c: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x34c16cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x34c170: 0x46001bc6  mov.s       $f15, $f3
    ctx->pc = 0x34c170u;
    ctx->f[15] = FPU_MOV_S(ctx->f[3]);
    // 0x34c174: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x34c174u;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
    // 0x34c178: 0x46002c86  mov.s       $f18, $f5
    ctx->pc = 0x34c178u;
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
    // 0x34c17c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x34c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x34c180: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x34c180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34c184: 0xc0d2d80  jal         func_34B600
    ctx->pc = 0x34C184u;
    SET_GPR_U32(ctx, 31, 0x34C18Cu);
    ctx->pc = 0x34C188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C184u;
    // 0x34c188: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B600u, 0x34C184u, 0x34C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C18Cu;
label_34c18c:
    // 0x34c18c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c190: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c194: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x34c194u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x34c198: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x34c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34c19c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C19Cu;
    {
        const bool branch_taken_0x34c19c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C19Cu;
        // 0x34c1a0: 0x2ae30001  slti        $v1, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c19c) {
            ctx->pc = 0x34C1B0u;
            goto label_34c1b0;
        }
    }
    ctx->pc = 0x34C1A4u;
    // 0x34c1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c1a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x34C1A8u;
    {
        const bool branch_taken_0x34c1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1A8u;
        // 0x34c1ac: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1a8) {
            ctx->pc = 0x34C240u;
            goto label_34c240;
        }
    }
    ctx->pc = 0x34C1B0u;
label_34c1b0:
    // 0x34c1b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c1b4: 0x17182a  slt         $v1, $zero, $s7
    ctx->pc = 0x34c1b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x34c1b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x34C1B8u;
    {
        const bool branch_taken_0x34c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1B8u;
        // 0x34c1bc: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1b8) {
            ctx->pc = 0x34C240u;
            goto label_34c240;
        }
    }
    ctx->pc = 0x34C1C0u;
label_34c1c0:
    // 0x34c1c0: 0xe7b30000  swc1        $f19, 0x0($sp)
    ctx->pc = 0x34c1c0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c1c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c1c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34c1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c1cc: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x34c1ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c1d0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x34c1d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x34c1d4: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x34c1d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x34c1d8: 0x46001bc6  mov.s       $f15, $f3
    ctx->pc = 0x34c1d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[3]);
    // 0x34c1dc: 0x46001406  mov.s       $f16, $f2
    ctx->pc = 0x34c1dcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[2]);
    // 0x34c1e0: 0x46002c86  mov.s       $f18, $f5
    ctx->pc = 0x34c1e0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
    // 0x34c1e4: 0x460024c6  mov.s       $f19, $f4
    ctx->pc = 0x34c1e4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[4]);
    // 0x34c1e8: 0x27a600b4  addiu       $a2, $sp, 0xB4
    ctx->pc = 0x34c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x34c1ec: 0xc0d2dec  jal         func_34B7B0
    ctx->pc = 0x34C1ECu;
    SET_GPR_U32(ctx, 31, 0x34C1F4u);
    ctx->pc = 0x34C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1ECu;
    // 0x34c1f0: 0x27a700b8  addiu       $a3, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B7B0u, 0x34C1ECu, 0x34C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1F4u;
label_34c1f4:
    // 0x34c1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c1f8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x34c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x34c1fc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x34c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34c200: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C200u;
    {
        const bool branch_taken_0x34c200 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C200u;
        // 0x34c204: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c200) {
            ctx->pc = 0x34C21Cu;
            goto label_34c21c;
        }
    }
    ctx->pc = 0x34C208u;
    // 0x34c208: 0x1ee0000b  bgtz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x34C208u;
    {
        const bool branch_taken_0x34c208 = (GPR_S32(ctx, 23) > 0);
        ctx->pc = 0x34C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C208u;
        // 0x34c20c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c208) {
            ctx->pc = 0x34C238u;
            goto label_34c238;
        }
    }
    ctx->pc = 0x34C210u;
    // 0x34c210: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x34c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C214u;
    {
        const bool branch_taken_0x34c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C214u;
        // 0x34c218: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c214) {
            ctx->pc = 0x34C238u;
            goto label_34c238;
        }
    }
    ctx->pc = 0x34C21Cu;
label_34c21c:
    // 0x34c21c: 0x1ae00004  blez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C21Cu;
    {
        const bool branch_taken_0x34c21c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x34C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C21Cu;
        // 0x34c220: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c21c) {
            ctx->pc = 0x34C230u;
            goto label_34c230;
        }
    }
    ctx->pc = 0x34C224u;
    // 0x34c224: 0x14182a  slt         $v1, $zero, $s4
    ctx->pc = 0x34c224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x34c228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34C228u;
    {
        const bool branch_taken_0x34c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C228u;
        // 0x34c22c: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c228) {
            ctx->pc = 0x34C240u;
            goto label_34c240;
        }
    }
    ctx->pc = 0x34C230u;
label_34c230:
    // 0x34c230: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x34c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34c234: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34c234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34c238:
    // 0x34c238: 0x2a830001  slti        $v1, $s4, 0x1
    ctx->pc = 0x34c238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x34c23c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x34c23cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_34c240:
    // 0x34c240: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34c240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34c244:
    // 0x34c244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c248: 0x14a2006b  bne         $a1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x34C248u;
    {
        const bool branch_taken_0x34c248 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C248u;
        // 0x34c24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c248) {
            ctx->pc = 0x34C3F8u;
            goto label_34c3f8;
        }
    }
    ctx->pc = 0x34C250u;
    // 0x34c250: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x34c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c254: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x34c254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c258: 0x0  nop
    ctx->pc = 0x34c258u;
    // NOP
    // 0x34c25c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x34C25Cu;
    {
        const bool branch_taken_0x34c25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c25c) {
            ctx->pc = 0x34C260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C25Cu;
            // 0x34c260: 0x8ea60000  lw          $a2, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C26Cu;
            goto label_34c26c;
        }
    }
    ctx->pc = 0x34C264u;
    // 0x34c264: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x34C264u;
    {
        const bool branch_taken_0x34c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C264u;
        // 0x34c268: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c264) {
            ctx->pc = 0x34C3FCu;
            goto label_34c3fc;
        }
    }
    ctx->pc = 0x34C26Cu;
label_34c26c:
    // 0x34c26c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x34c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c270: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x34c270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34c274: 0xc0d2ebc  jal         func_34BAF0
    ctx->pc = 0x34C274u;
    SET_GPR_U32(ctx, 31, 0x34C27Cu);
    ctx->pc = 0x34C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C274u;
    // 0x34c278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAF0u, 0x34C274u, 0x34C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C27Cu;
label_34c27c:
    // 0x34c27c: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x34c27cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34c280: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x34c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34c284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c288: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x34c288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x34c28c: 0x44971000  mtc1        $s7, $f2
    ctx->pc = 0x34c28cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34c290: 0x0  nop
    ctx->pc = 0x34c290u;
    // NOP
    // 0x34c294: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34c294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34c298: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x34c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c29c: 0x44941800  mtc1        $s4, $f3
    ctx->pc = 0x34c29cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34c2a0: 0x0  nop
    ctx->pc = 0x34c2a0u;
    // NOP
    // 0x34c2a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x34c2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x34c2a8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x34c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x34c2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c2b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34c2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34c2b4: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x34c2b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34c2b8: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x34c2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34c2bc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c2bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c2c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c2c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c2c4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c2c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c2c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c2cc: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34c2ccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c2d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x34c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c2d4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x34c2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x34c2d8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x34c2d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x34c2dc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x34c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x34c2e0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x34c2e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34c2e4: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34c2e8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x34c2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x34c2ec: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x34c2ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34c2f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c2f4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x34c2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34c2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c300: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34c300u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34c304: 0x4a0003bf  vwaitq
    ctx->pc = 0x34c304u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34c308: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x34c308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c30c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34c30cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c310: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x34c310u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x34c314: 0xe7c30008  swc1        $f3, 0x8($fp)
    ctx->pc = 0x34c314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x34c318: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x34c318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x34c31c: 0xe7c20004  swc1        $f2, 0x4($fp)
    ctx->pc = 0x34c31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x34c320: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34c320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x34c324: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x34c324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34c328: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x34c328u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34c32c: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x34c32cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c330: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c334: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34c334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34c338: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34c338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c33c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34c33cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c340: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x34c340u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34c344: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34c344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34c348: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34c348u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34c34c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34c34cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c350: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x34c350u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c354: 0x7a060020  lq          $a2, 0x20($s0)
    ctx->pc = 0x34c354u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34c358: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c35c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34c35cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34c360: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c364: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c364u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c368: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34c368u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c36c: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x34c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x34c370: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c374: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34c374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c378: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c37c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c37cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c380: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x34c380u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c384: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x34c384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x34c388: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x34c388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x34c38c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34c38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34c390: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x34c390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x34c394: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x34c394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x34c398: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34c398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34c39c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34c39cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34c3a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34c3a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c3a4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x34c3a4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c3a8: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x34c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x34c3ac: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34c3b0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34c3b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34c3b4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34c3b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34c3b8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c3b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c3bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c3bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c3c0: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x34c3c0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c3c4: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x34c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x34c3c8: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x34c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x34c3cc: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x34c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x34c3d0: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x34c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
    // 0x34c3d4: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x34c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x34c3d8: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x34c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x34c3dc: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x34c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x34c3e0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x34c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x34c3e4: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x34c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x34c3e8: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x34c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x34c3ec: 0x7fa800a0  sq          $t0, 0xA0($sp)
    ctx->pc = 0x34c3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 8));
    // 0x34c3f0: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x34c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x34c3f4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x34c3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_34c3f8:
    // 0x34c3f8: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x34c3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_34c3fc:
    // 0x34c3fc: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x34c3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x34c400: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x34c400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x34c404: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x34c404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34c408: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x34c408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x34c40c: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x34c40cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x34c410: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x34c410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34c414: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x34c414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34c418: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x34c418u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34c41c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x34c41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34c420: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x34c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34c424: 0x3e00008  jr          $ra
    ctx->pc = 0x34C424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C424u;
        // 0x34c428: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C42Cu;
    // 0x34c42c: 0x0  nop
    ctx->pc = 0x34c42cu;
    // NOP
    ctx->pc = 0x34c430u;
}
