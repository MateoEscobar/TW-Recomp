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

// Function: sub_003451E8
// Address: 0x3451e8 - 0x3454c0
void sub_003451E8_0x3451e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003451E8_0x3451e8");
#endif

    switch (ctx->pc) {
        case 0x345230u: goto label_345230;
        case 0x345464u: goto label_345464;
        default: break;
    }

    ctx->pc = 0x3451e8u;

    // 0x3451e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3451e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3451ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3451ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3451f0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3451f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3451f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3451f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3451f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3451f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3451fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3451fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x345200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x345204: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x345204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345208: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x345208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34520c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x34520cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x345210: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x345214: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x345214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x345218: 0x252916c0  addiu       $t1, $t1, 0x16C0
    ctx->pc = 0x345218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5824));
    // 0x34521c: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x34521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x345220: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x345220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345224: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x345224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x345228: 0xc0d310c  jal         func_34C430
    ctx->pc = 0x345228u;
    SET_GPR_U32(ctx, 31, 0x345230u);
    ctx->pc = 0x34522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345228u;
    // 0x34522c: 0x26480040  addiu       $t0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C430u, 0x345228u, 0x345230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345230u;
label_345230:
    // 0x345230: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x345230u;
    {
        const bool branch_taken_0x345230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345230) {
            ctx->pc = 0x345234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345230u;
            // 0x345234: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345240u;
            goto label_345240;
        }
    }
    ctx->pc = 0x345238u;
    // 0x345238: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x345238u;
    {
        const bool branch_taken_0x345238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345238u;
        // 0x34523c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345238) {
            ctx->pc = 0x3453D8u;
            goto label_3453d8;
        }
    }
    ctx->pc = 0x345240u;
label_345240:
    // 0x345240: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x345240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x345244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345248: 0x7a630080  lq          $v1, 0x80($s3)
    ctx->pc = 0x345248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x34524c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x34524cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x345250: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x345250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345254: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x345254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345258: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x345258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34525c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34525cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x345260: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x345260u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x345264: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x345264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345268: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x345268u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34526c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x34526cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x345270: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x345270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345274: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x345274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x345278: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x345278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34527c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34527cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345280: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x345280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345284: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x345284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345288: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x345288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34528c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34528cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345290: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x345290u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x345294: 0x4a0003bf  vwaitq
    ctx->pc = 0x345294u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x345298: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x345298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34529c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34529cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3452a0: 0x7e040050  sq          $a0, 0x50($s0)
    ctx->pc = 0x3452a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 4));
    // 0x3452a4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3452a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3452a8: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x3452a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3452ac: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3452acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x3452b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3452b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3452b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3452b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3452b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3452b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3452bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3452bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3452c0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3452c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3452c4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3452c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3452c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3452c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3452cc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3452ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3452d0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3452d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3452d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3452d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3452d8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3452d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3452dc: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3452dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x3452e0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3452e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3452e4: 0x7a630080  lq          $v1, 0x80($s3)
    ctx->pc = 0x3452e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3452e8: 0x7a450050  lq          $a1, 0x50($s2)
    ctx->pc = 0x3452e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x3452ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3452ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3452f0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3452f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3452f4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3452f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3452f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3452f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3452fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3452fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345300: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x345300u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x345304: 0x7a440080  lq          $a0, 0x80($s2)
    ctx->pc = 0x345304u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x345308: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x345308u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34530c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34530cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x345310: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x345310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345314: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x345314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345318: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x345318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34531c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34531cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x345320: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x345320u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345324: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x345324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345328: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x345328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34532c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x34532cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x345330: 0x46011829  min.s       $f0, $f3, $f1
    ctx->pc = 0x345330u;
    ctx->f[0] = std::min(ctx->f[3], ctx->f[1]);
    // 0x345334: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x345334u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x345338: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x345338u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x34533c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x34533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x345340: 0x7a450060  lq          $a1, 0x60($s2)
    ctx->pc = 0x345340u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x345344: 0x7a630080  lq          $v1, 0x80($s3)
    ctx->pc = 0x345344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x345348: 0x7a440080  lq          $a0, 0x80($s2)
    ctx->pc = 0x345348u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x34534c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34534cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345350: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x345350u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x345354: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x345354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345358: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x345358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34535c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34535cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345360: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x345360u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x345364: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x345364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x345368: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x345368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34536c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34536cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345370: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x345370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345374: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x345374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345378: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x345378u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34537c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x34537cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345380: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x345380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345384: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x345384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345388: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x345388u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x34538c: 0x46011829  min.s       $f0, $f3, $f1
    ctx->pc = 0x34538cu;
    ctx->f[0] = std::min(ctx->f[3], ctx->f[1]);
    // 0x345390: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x345390u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x345394: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x345394u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x345398: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x345398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x34539c: 0xc6610088  lwc1        $f1, 0x88($s3)
    ctx->pc = 0x34539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3453a0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3453a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x3453a4: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x3453a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3453a8: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x3453a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3453ac: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3453acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3453b0: 0x7a640080  lq          $a0, 0x80($s3)
    ctx->pc = 0x3453b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3453b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3453b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3453b8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3453b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3453bc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3453bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3453c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3453c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3453c4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3453c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3453c8: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3453c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3453cc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3453ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3453d0: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x3453d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3453d4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3453d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_3453d8:
    // 0x3453d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3453d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3453dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3453dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3453e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3453e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3453e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3453e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3453e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3453e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3453ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3453ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3453F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453ECu;
        // 0x3453f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3453ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3453F4u;
    // 0x3453f4: 0x0  nop
    ctx->pc = 0x3453f4u;
    // NOP
    // 0x3453f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3453f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3453fc: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3453fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345400: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x345400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x345404: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x345404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x345408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x34540c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x34540cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345410: 0x27a90064  addiu       $t1, $sp, 0x64
    ctx->pc = 0x345410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x345414: 0x27aa0068  addiu       $t2, $sp, 0x68
    ctx->pc = 0x345414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x345418: 0xc4ec0040  lwc1        $f12, 0x40($a3)
    ctx->pc = 0x345418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34541c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345420: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x345420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x345424: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x345424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345428: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x345428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34542c: 0x25650040  addiu       $a1, $t3, 0x40
    ctx->pc = 0x34542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x345430: 0x25640050  addiu       $a0, $t3, 0x50
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
    // 0x345434: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x345434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x345438: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x345438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x34543c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34543cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x345440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x345440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345444: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x345444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345448: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x345448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x34544c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34544cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x345450: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x345450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345454: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x345454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x345458: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x345458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34545c: 0xc0d2efa  jal         func_34BBE8
    ctx->pc = 0x34545Cu;
    SET_GPR_U32(ctx, 31, 0x345464u);
    ctx->pc = 0x345460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34545Cu;
    // 0x345460: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BBE8u, 0x34545Cu, 0x345464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345464u;
label_345464:
    // 0x345464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345464u;
    {
        const bool branch_taken_0x345464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345464u;
        // 0x345468: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345464) {
            ctx->pc = 0x345474u;
            goto label_345474;
        }
    }
    ctx->pc = 0x34546Cu;
    // 0x34546c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34546Cu;
    {
        const bool branch_taken_0x34546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34546Cu;
        // 0x345470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34546c) {
            ctx->pc = 0x3454B0u;
            goto label_3454b0;
        }
    }
    ctx->pc = 0x345474u;
label_345474:
    // 0x345474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345478: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x345478u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34547c: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x34547cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345480: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x345480u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x345484: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x345484u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x345488: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x345488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x34548c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x345490: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x345490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x345494: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x345494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x345498: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x345498u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x34549c: 0x7e050060  sq          $a1, 0x60($s0)
    ctx->pc = 0x34549cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 5));
    // 0x3454a0: 0x7e060050  sq          $a2, 0x50($s0)
    ctx->pc = 0x3454a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 6));
    // 0x3454a4: 0x7e070010  sq          $a3, 0x10($s0)
    ctx->pc = 0x3454a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 7));
    // 0x3454a8: 0xae080070  sw          $t0, 0x70($s0)
    ctx->pc = 0x3454a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 8));
    // 0x3454ac: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3454acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_3454b0:
    // 0x3454b0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3454b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3454b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3454b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3454b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3454B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3454BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454B8u;
        // 0x3454bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3454B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3454C0u;
}
