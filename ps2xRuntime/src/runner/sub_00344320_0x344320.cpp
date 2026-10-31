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

// Function: sub_00344320
// Address: 0x344320 - 0x344618
void sub_00344320_0x344320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344320_0x344320");
#endif

    switch (ctx->pc) {
        case 0x3443acu: goto label_3443ac;
        case 0x34459cu: goto label_34459c;
        default: break;
    }

    ctx->pc = 0x344320u;

label_344320:
    // 0x344320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x344320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x344324: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x344324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x344328: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x344328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34432c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x34432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x344330: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x344330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344334: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x344334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x344338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34433c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x34433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x344340: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x344340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x344344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x344348: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x344348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34434c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x344350: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x344350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x344354: 0x7a050050  lq          $a1, 0x50($s0)
    ctx->pc = 0x344354u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x344358: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x344358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x34435c: 0x7a630050  lq          $v1, 0x50($s3)
    ctx->pc = 0x34435cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x344360: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x344360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x344364: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x344364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x344368: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34436c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34436cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344370: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x344370u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x344374: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x344374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x344378: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34437c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34437cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x344380: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344384: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344384u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344388: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x344388u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34438c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x34438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x344390: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x344390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x344394: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x344394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x344398: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x344398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x34439c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34439cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3443a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3443a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3443a4: 0xc0d2b54  jal         func_34AD50
    ctx->pc = 0x3443A4u;
    SET_GPR_U32(ctx, 31, 0x3443ACu);
    ctx->pc = 0x3443A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443A4u;
    // 0x3443a8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AD50u, 0x3443A4u, 0x3443ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443ACu;
label_3443ac:
    // 0x3443ac: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x3443acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3443b0: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x3443b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3443b4: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x3443b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3443b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3443b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3443bc: 0x7a460000  lq          $a2, 0x0($s2)
    ctx->pc = 0x3443bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3443c0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3443c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3443c4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3443c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3443c8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3443c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3443cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3443ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3443d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3443d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3443d4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3443d4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3443d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3443d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3443dc: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3443dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3443e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3443e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3443e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3443e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3443e8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3443e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3443ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3443ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3443f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3443f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3443f4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3443f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3443f8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3443f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3443fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3443fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x344400: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344404: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344404u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344408: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x344408u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34440c: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x34440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x344410: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x344410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x344414: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x344414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x344418: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34441c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34441cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344420: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x344420u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x344424: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x344424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x344428: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34442c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34442cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x344430: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x344430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x344434: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x344434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x344438: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x344438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34443c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34443cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x344440: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x344440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x344444: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x344444u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344448: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x344448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34444c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34444cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344450: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x344454: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x344454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x344458: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x344458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34445c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x344460: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x344460u;
    {
        const bool branch_taken_0x344460 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x344464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344460u;
        // 0x344464: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344460) {
            ctx->pc = 0x344470u;
            goto label_344470;
        }
    }
    ctx->pc = 0x344468u;
    // 0x344468: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x344468u;
    {
        const bool branch_taken_0x344468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344468u;
        // 0x34446c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344468) {
            ctx->pc = 0x34451Cu;
            goto label_34451c;
        }
    }
    ctx->pc = 0x344470u;
label_344470:
    // 0x344470: 0x0  nop
    ctx->pc = 0x344470u;
    // NOP
    // 0x344474: 0x0  nop
    ctx->pc = 0x344474u;
    // NOP
    // 0x344478: 0x46010004  c1          0x10004
    ctx->pc = 0x344478u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34447c: 0xe6220080  swc1        $f2, 0x80($s1)
    ctx->pc = 0x34447cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x344480: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x344480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x344484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344488: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x344488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34448c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34448cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x344490: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x344494: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x344494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x344498: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34449c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34449cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3444a0: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3444a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x3444a4: 0x7e240090  sq          $a0, 0x90($s1)
    ctx->pc = 0x3444a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 4));
    // 0x3444a8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3444a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x3444ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3444acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3444b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3444b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444b4: 0x7a630050  lq          $v1, 0x50($s3)
    ctx->pc = 0x3444b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3444b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3444b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3444bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3444bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3444c0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3444c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3444c4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3444c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3444c8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3444c8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3444cc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3444ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3444d0: 0x7e240090  sq          $a0, 0x90($s1)
    ctx->pc = 0x3444d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 4));
    // 0x3444d4: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3444d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x3444d8: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3444d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3444dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3444dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3444e0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3444e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3444e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3444e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3444e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3444e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3444ec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3444ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3444f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3444f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3444f4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3444f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3444f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3444f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3444fc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3444fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x344500: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x344504: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x344504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x344508: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34450c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34450cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344510: 0x7e240050  sq          $a0, 0x50($s1)
    ctx->pc = 0x344510u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 4));
    // 0x344514: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x344514u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x344518: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x344518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_34451c:
    // 0x34451c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x34451cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x344520: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x344520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x344524: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x344524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x344528: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x344528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34452c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x344530: 0x3e00008  jr          $ra
    ctx->pc = 0x344530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344530u;
        // 0x344534: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344538u;
    // 0x344538: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x344538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x34453c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34453cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344540: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x344540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x344544: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x344544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344548: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x344548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34454c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34454cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344550: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x344550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344558: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x344558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34455c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x34455cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344560: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x344560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344564: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x344564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344568: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x344568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34456c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34456cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x344570: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x344570u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x344574: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x344574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344578: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x344578u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34457c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x34457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344580: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x344580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344584: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x344584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x344588: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x344588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34458c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x34458cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x344590: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x344590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344594: 0xc0d10c8  jal         func_344320
    ctx->pc = 0x344594u;
    SET_GPR_U32(ctx, 31, 0x34459Cu);
    ctx->pc = 0x344598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344594u;
    // 0x344598: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344320u;
    goto label_344320;
    ctx->pc = 0x34459Cu;
label_34459c:
    // 0x34459c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34459Cu;
    {
        const bool branch_taken_0x34459c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34459c) {
            ctx->pc = 0x3445A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34459Cu;
            // 0x3445a0: 0x7a030020  lq          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3445ACu;
            goto label_3445ac;
        }
    }
    ctx->pc = 0x3445A4u;
    // 0x3445a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3445A4u;
    {
        const bool branch_taken_0x3445a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445A4u;
        // 0x3445a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445a4) {
            ctx->pc = 0x344608u;
            goto label_344608;
        }
    }
    ctx->pc = 0x3445ACu;
label_3445ac:
    // 0x3445ac: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x3445acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3445b0: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x3445b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3445b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3445b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3445b8: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x3445b8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3445bc: 0x7a050040  lq          $a1, 0x40($s0)
    ctx->pc = 0x3445bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3445c0: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x3445c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3445c4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3445c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3445c8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3445c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x3445cc: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x3445ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x3445d0: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x3445d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x3445d4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x3445d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x3445d8: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x3445d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3445dc: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3445dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x3445e0: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x3445e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3445e4: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x3445e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x3445e8: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x3445e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3445ec: 0x7e070040  sq          $a3, 0x40($s0)
    ctx->pc = 0x3445ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 7));
    // 0x3445f0: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3445f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x3445f4: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x3445f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
    // 0x3445f8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3445f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3445fc: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x3445fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x344600: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x344600u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x344604: 0x7cc40030  sq          $a0, 0x30($a2)
    ctx->pc = 0x344604u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 4));
label_344608:
    // 0x344608: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x344608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34460c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34460cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x344610: 0x3e00008  jr          $ra
    ctx->pc = 0x344610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344610u;
        // 0x344614: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344618u;
}
