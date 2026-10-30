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

// Function: sub_00346680
// Address: 0x346680 - 0x346808
void sub_00346680_0x346680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346680_0x346680");
#endif

    switch (ctx->pc) {
        case 0x346798u: goto label_346798;
        default: break;
    }

    ctx->pc = 0x346680u;

    // 0x346680: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x346680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346684: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x346684u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346688: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x346688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x34668c: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x34668cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x346690: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x346690u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x346694: 0x78a60050  lq          $a2, 0x50($a1)
    ctx->pc = 0x346694u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x346698: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x346698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x34669c: 0x24a70050  addiu       $a3, $a1, 0x50
    ctx->pc = 0x34669cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x3466a0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3466a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3466a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3466a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3466a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3466a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3466ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3466acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3466b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3466b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3466b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3466b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3466b8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3466b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3466bc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3466bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3466c0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3466c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3466c4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3466c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3466c8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3466c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3466cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3466ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3466d0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3466d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3466d4: 0x78e40030  lq          $a0, 0x30($a3)
    ctx->pc = 0x3466d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3466d8: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x3466d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3466dc: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x3466dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3466e0: 0x70664ca8  pextuw      $t1, $v1, $a2
    ctx->pc = 0x3466e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x3466e4: 0x708254a8  pextuw      $t2, $a0, $v0
    ctx->pc = 0x3466e4u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3466e8: 0x70665c88  pextlw      $t3, $v1, $a2
    ctx->pc = 0x3466e8u;
    SET_GPR_VEC(ctx, 11, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x3466ec: 0x70826488  pextlw      $t4, $a0, $v0
    ctx->pc = 0x3466ecu;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3466f0: 0x712a73a9  pcpyud      $t6, $t1, $t2
    ctx->pc = 0x3466f0u;
    SET_GPR_VEC(ctx, 14, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3466f4: 0x71496b89  pcpyld      $t5, $t2, $t1
    ctx->pc = 0x3466f4u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x3466f8: 0x716c43a9  pcpyud      $t0, $t3, $t4
    ctx->pc = 0x3466f8u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x3466fc: 0x718b3389  pcpyld      $a2, $t4, $t3
    ctx->pc = 0x3466fcu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x346700: 0x78a70080  lq          $a3, 0x80($a1)
    ctx->pc = 0x346700u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x346704: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x346704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346708: 0x79e20050  lq          $v0, 0x50($t7)
    ctx->pc = 0x346708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x34670c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34670cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346710: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346714: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x346714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x346718: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34671c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34671cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346720: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x346720u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346724: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x346724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x346728: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x346728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x34672c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x34672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346730: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x346730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x346734: 0x7fad0040  sq          $t5, 0x40($sp)
    ctx->pc = 0x346734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 13));
    // 0x346738: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x346738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
    // 0x34673c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x346740: 0x7fa800a0  sq          $t0, 0xA0($sp)
    ctx->pc = 0x346740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 8));
    // 0x346744: 0x7fad00b0  sq          $t5, 0xB0($sp)
    ctx->pc = 0x346744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 13));
    // 0x346748: 0x7fae00c0  sq          $t6, 0xC0($sp)
    ctx->pc = 0x346748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 14));
    // 0x34674c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x34674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x346750: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x346750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x346754: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x346754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x346758: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x346758u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34675c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34675cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x346760: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x346760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x346764: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x346764u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x346768: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x346768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x34676c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x34676cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x346770: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x346770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x346774: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x346774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x346778: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x346778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34677c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34677cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346780: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x346780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x346784: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x346784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346788: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x346788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34678c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346790: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x346790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x346794: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x346794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_346798:
    // 0x346798: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x346798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34679c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x34679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3467a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3467a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3467a4: 0x0  nop
    ctx->pc = 0x3467a4u;
    // NOP
    // 0x3467a8: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3467A8u;
    {
        const bool branch_taken_0x3467a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3467a8) {
            ctx->pc = 0x3467ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3467A8u;
            // 0x3467ac: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3467C8u;
            goto label_3467c8;
        }
    }
    ctx->pc = 0x3467B0u;
    // 0x3467b0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3467b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3467b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3467b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3467b8: 0x0  nop
    ctx->pc = 0x3467b8u;
    // NOP
    // 0x3467bc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3467BCu;
    {
        const bool branch_taken_0x3467bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3467bc) {
            ctx->pc = 0x3467C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3467BCu;
            // 0x3467c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3467D4u;
            goto label_3467d4;
        }
    }
    ctx->pc = 0x3467C4u;
    // 0x3467c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3467c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3467c8:
    // 0x3467c8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3467c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3467cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3467ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3467d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3467d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3467d4:
    // 0x3467d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3467d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3467d8: 0x4a1ffef  bgez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3467D8u;
    {
        const bool branch_taken_0x3467d8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3467DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467D8u;
        // 0x3467dc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467d8) {
            ctx->pc = 0x346798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346798;
        }
    }
    ctx->pc = 0x3467E0u;
    // 0x3467e0: 0xc5e00040  lwc1        $f0, 0x40($t7)
    ctx->pc = 0x3467e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3467e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3467e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3467e8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3467e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3467ec: 0x0  nop
    ctx->pc = 0x3467ecu;
    // NOP
    // 0x3467f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3467F0u;
    {
        const bool branch_taken_0x3467f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467F0u;
        // 0x3467f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467f0) {
            ctx->pc = 0x3467FCu;
            goto label_3467fc;
        }
    }
    ctx->pc = 0x3467F8u;
    // 0x3467f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3467f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3467fc:
    // 0x3467fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3467FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467FCu;
        // 0x346800: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3467FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346804u;
    // 0x346804: 0x0  nop
    ctx->pc = 0x346804u;
    // NOP
    ctx->pc = 0x346808u;
}
