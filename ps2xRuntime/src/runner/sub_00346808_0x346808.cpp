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

// Function: sub_00346808
// Address: 0x346808 - 0x346d18
void sub_00346808_0x346808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346808_0x346808");
#endif

    switch (ctx->pc) {
        case 0x346850u: goto label_346850;
        case 0x3469c8u: goto label_3469c8;
        case 0x3469ecu: goto label_3469ec;
        case 0x346a48u: goto label_346a48;
        case 0x346b88u: goto label_346b88;
        case 0x346bc8u: goto label_346bc8;
        case 0x346c10u: goto label_346c10;
        case 0x346c48u: goto label_346c48;
        default: break;
    }

    ctx->pc = 0x346808u;

    // 0x346808: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x346808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x34680c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x34680cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346810: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x346810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x346814: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x346814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346818: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x346818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x34681c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34681cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346820: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x346820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346824: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x346824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x346828: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x346828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x34682c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34682cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346830: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x346830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x346834: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x346834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x346838: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x346838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x34683c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x34683cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x346840: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x346840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x346844: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x346848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x346848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34684c: 0x0  nop
    ctx->pc = 0x34684cu;
    // NOP
label_346850:
    // 0x346850: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x346850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346854: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x346854u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x346858: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x346858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34685c: 0x0  nop
    ctx->pc = 0x34685cu;
    // NOP
    // 0x346860: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x346860u;
    {
        const bool branch_taken_0x346860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x346860) {
            ctx->pc = 0x346864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346860u;
            // 0x346864: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346874u;
            goto label_346874;
        }
    }
    ctx->pc = 0x346868u;
    // 0x346868: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x346868u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x34686c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x34686cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346870: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x346870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_346874:
    // 0x346874: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x346874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x346878: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x346878u;
    {
        const bool branch_taken_0x346878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346878u;
        // 0x34687c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346878) {
            ctx->pc = 0x346850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346850;
        }
    }
    ctx->pc = 0x346880u;
    // 0x346880: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x346880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x346884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x346888: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x346888u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x34688c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346890: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x346890u;
    {
        const bool branch_taken_0x346890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346890) {
            ctx->pc = 0x346894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346890u;
            // 0x346894: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x346898u;
            goto label_346898;
        }
    }
    ctx->pc = 0x346898u;
label_346898:
    // 0x346898: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x346898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34689c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x34689cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x3468a0: 0x79630050  lq          $v1, 0x50($t3)
    ctx->pc = 0x3468a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x3468a4: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3468a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x3468a8: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x3468a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3468ac: 0x260c0040  addiu       $t4, $s0, 0x40
    ctx->pc = 0x3468acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3468b0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3468b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3468b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3468b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3468b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3468b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3468bc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3468bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3468c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3468c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3468c4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3468c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3468c8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3468c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3468cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3468ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3468d0: 0x788a0000  lq          $t2, 0x0($a0)
    ctx->pc = 0x3468d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3468d4: 0x7a040050  lq          $a0, 0x50($s0)
    ctx->pc = 0x3468d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3468d8: 0x7a080060  lq          $t0, 0x60($s0)
    ctx->pc = 0x3468d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3468dc: 0x7a090070  lq          $t1, 0x70($s0)
    ctx->pc = 0x3468dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3468e0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3468e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3468e4: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x3468e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3468e8: 0x2810  mfhi        $a1
    ctx->pc = 0x3468e8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3468ec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3468ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3468f0: 0x59900  sll         $s3, $a1, 4
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3468f4: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x3468f4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3468f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3468f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3468fc: 0x1859021  addu        $s2, $t4, $a1
    ctx->pc = 0x3468fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x346900: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x346900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x346904: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x346904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346908: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x346908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x34690c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34690cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x346910: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x346910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346914: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x346914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346918: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x346918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34691c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34691cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346920: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x346920u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x346924: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x346924u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x346928: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x346928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34692c: 0x0  nop
    ctx->pc = 0x34692cu;
    // NOP
    // 0x346930: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x346930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346934: 0x3010  mfhi        $a2
    ctx->pc = 0x346934u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x346938: 0x68900  sll         $s1, $a2, 4
    ctx->pc = 0x346938u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x34693c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x34693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x346940: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x346940u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x346944: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x346944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x346948: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x346948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34694c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34694cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346950: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x346950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346954: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x346954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346958: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x346958u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34695c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x34695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x346960: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x346960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x346964: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x346964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x346968: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x346968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x34696c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x34696Cu;
    {
        const bool branch_taken_0x34696c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34696Cu;
        // 0x346970: 0x7faa0050  sq          $t2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34696c) {
            ctx->pc = 0x346A08u;
            goto label_346a08;
        }
    }
    ctx->pc = 0x346974u;
    // 0x346974: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x346974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x346978: 0x1828821  addu        $s1, $t4, $v0
    ctx->pc = 0x346978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x34697c: 0xc6300000  lwc1        $f16, 0x0($s1)
    ctx->pc = 0x34697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x346980: 0x46008007  neg.s       $f0, $f16
    ctx->pc = 0x346980u;
    ctx->f[0] = FPU_NEG_S(ctx->f[16]);
    // 0x346984: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x346984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346988: 0x0  nop
    ctx->pc = 0x346988u;
    // NOP
    // 0x34698c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34698Cu;
    {
        const bool branch_taken_0x34698c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34698Cu;
        // 0x346990: 0x46000bc6  mov.s       $f15, $f1 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34698c) {
            ctx->pc = 0x3469A4u;
            goto label_3469a4;
        }
    }
    ctx->pc = 0x346994u;
    // 0x346994: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x346994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346998: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x346998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34699c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x34699Cu;
    {
        const bool branch_taken_0x34699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34699Cu;
        // 0x3469a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34699c) {
            ctx->pc = 0x346C40u;
            goto label_346c40;
        }
    }
    ctx->pc = 0x3469A4u;
label_3469a4:
    // 0x3469a4: 0x4610a036  c.le.s      $f20, $f16
    ctx->pc = 0x3469a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3469a8: 0x0  nop
    ctx->pc = 0x3469a8u;
    // NOP
    // 0x3469ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3469ACu;
    {
        const bool branch_taken_0x3469ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3469B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469ACu;
        // 0x3469b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469ac) {
            ctx->pc = 0x3469D8u;
            goto label_3469d8;
        }
    }
    ctx->pc = 0x3469B4u;
    // 0x3469b4: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x3469b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3469b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3469b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3469bc: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x3469bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
    // 0x3469c0: 0xc0d29a8  jal         func_34A6A0
    ctx->pc = 0x3469C0u;
    SET_GPR_U32(ctx, 31, 0x3469C8u);
    ctx->pc = 0x3469C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469C0u;
    // 0x3469c4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6A0u, 0x3469C0u, 0x3469C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469C8u;
label_3469c8:
    // 0x3469c8: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3469C8u;
    {
        const bool branch_taken_0x3469c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469C8u;
        // 0x3469cc: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469c8) {
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x3469D0u;
    // 0x3469d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3469D0u;
    {
        const bool branch_taken_0x3469d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469d0) {
            ctx->pc = 0x346A50u;
            goto label_346a50;
        }
    }
    ctx->pc = 0x3469D8u;
label_3469d8:
    // 0x3469d8: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x3469d8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
    // 0x3469dc: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x3469dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3469e0: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x3469e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
    // 0x3469e4: 0xc0d28b4  jal         func_34A2D0
    ctx->pc = 0x3469E4u;
    SET_GPR_U32(ctx, 31, 0x3469ECu);
    ctx->pc = 0x3469E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469E4u;
    // 0x3469e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A2D0u, 0x3469E4u, 0x3469ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469ECu;
label_3469ec:
    // 0x3469ec: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x3469ECu;
    {
        const bool branch_taken_0x3469ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469ECu;
        // 0x3469f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469ec) {
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x3469F4u;
    // 0x3469f4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3469f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3469f8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3469f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3469fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3469fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346a00: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x346A00u;
    {
        const bool branch_taken_0x346a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A00u;
        // 0x346a04: 0x4601a840  add.s       $f1, $f21, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a00) {
            ctx->pc = 0x346C68u;
            goto label_346c68;
        }
    }
    ctx->pc = 0x346A08u;
label_346a08:
    // 0x346a08: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x346a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346a0c: 0x0  nop
    ctx->pc = 0x346a0cu;
    // NOP
    // 0x346a10: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x346A10u;
    {
        const bool branch_taken_0x346a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A10u;
        // 0x346a14: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a10) {
            ctx->pc = 0x346B98u;
            goto label_346b98;
        }
    }
    ctx->pc = 0x346A18u;
    // 0x346a18: 0x1821821  addu        $v1, $t4, $v0
    ctx->pc = 0x346a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x346a1c: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x346a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x346a20: 0x46007807  neg.s       $f0, $f15
    ctx->pc = 0x346a20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[15]);
    // 0x346a24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x346a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346a28: 0x0  nop
    ctx->pc = 0x346a28u;
    // NOP
    // 0x346a2c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x346A2Cu;
    {
        const bool branch_taken_0x346a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A2Cu;
        // 0x346a30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a2c) {
            ctx->pc = 0x346A9Cu;
            goto label_346a9c;
        }
    }
    ctx->pc = 0x346A34u;
    // 0x346a34: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x346a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346a38: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x346a38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x346a3c: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x346a3cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
    // 0x346a40: 0xc0d29a8  jal         func_34A6A0
    ctx->pc = 0x346A40u;
    SET_GPR_U32(ctx, 31, 0x346A48u);
    ctx->pc = 0x346A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A40u;
    // 0x346a44: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6A0u, 0x346A40u, 0x346A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A48u;
label_346a48:
    // 0x346a48: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x346A48u;
    {
        const bool branch_taken_0x346a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A48u;
        // 0x346a4c: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a48) {
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x346A50u;
label_346a50:
    // 0x346a50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x346a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x346a54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x346a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x346a58: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x346a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x346a5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x346a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x346a60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x346a64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x346a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x346a68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x346a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x346a6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x346a70: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x346a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x346a74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x346a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x346a78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x346a7c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x346a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x346a80: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x346a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a84: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x346a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x346a88: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x346a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x346a8c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x346a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x346a90: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x346a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x346a94: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x346A94u;
    {
        const bool branch_taken_0x346a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A94u;
        // 0x346a98: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a94) {
            ctx->pc = 0x346CD8u;
            goto label_346cd8;
        }
    }
    ctx->pc = 0x346A9Cu;
label_346a9c:
    // 0x346a9c: 0x460fa036  c.le.s      $f20, $f15
    ctx->pc = 0x346a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346aa0: 0x0  nop
    ctx->pc = 0x346aa0u;
    // NOP
    // 0x346aa4: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x346AA4u;
    {
        const bool branch_taken_0x346aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x346aa4) {
            ctx->pc = 0x346AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346AA4u;
            // 0x346aa8: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x346B74u;
            goto label_346b74;
        }
    }
    ctx->pc = 0x346AACu;
    // 0x346aac: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x346aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346ab0: 0x0  nop
    ctx->pc = 0x346ab0u;
    // NOP
    // 0x346ab4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x346AB4u;
    {
        const bool branch_taken_0x346ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AB4u;
        // 0x346ab8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ab4) {
            ctx->pc = 0x346B0Cu;
            goto label_346b0c;
        }
    }
    ctx->pc = 0x346ABCu;
    // 0x346abc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x346abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x346ac0: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x346ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x346ac4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x346ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346ac8: 0x0  nop
    ctx->pc = 0x346ac8u;
    // NOP
    // 0x346acc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x346ACCu;
    {
        const bool branch_taken_0x346acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346ACCu;
        // 0x346ad0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346acc) {
            ctx->pc = 0x346AFCu;
            goto label_346afc;
        }
    }
    ctx->pc = 0x346AD4u;
    // 0x346ad4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x346ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x346ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x346ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346adc: 0x0  nop
    ctx->pc = 0x346adcu;
    // NOP
    // 0x346ae0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x346ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x346ae4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346ae8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x346ae8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x346aec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x346aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346af0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x346af0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346af4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x346af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x346af8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x346af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_346afc:
    // 0x346afc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x346afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346b00: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x346b00u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x346b04: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x346B04u;
    {
        const bool branch_taken_0x346b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B04u;
        // 0x346b08: 0xc5620040  lwc1        $f2, 0x40($t3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b04) {
            ctx->pc = 0x346B58u;
            goto label_346b58;
        }
    }
    ctx->pc = 0x346B0Cu;
label_346b0c:
    // 0x346b0c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x346b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x346b10: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x346b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x346b14: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x346b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346b18: 0x0  nop
    ctx->pc = 0x346b18u;
    // NOP
    // 0x346b1c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x346B1Cu;
    {
        const bool branch_taken_0x346b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B1Cu;
        // 0x346b20: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b1c) {
            ctx->pc = 0x346B4Cu;
            goto label_346b4c;
        }
    }
    ctx->pc = 0x346B24u;
    // 0x346b24: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x346b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x346b28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x346b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b2c: 0x0  nop
    ctx->pc = 0x346b2cu;
    // NOP
    // 0x346b30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x346b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x346b34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346b38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x346b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346b3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x346b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346b40: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x346b40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346b44: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x346b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x346b48: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x346b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_346b4c:
    // 0x346b4c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x346b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346b50: 0x4600a845  abs.s       $f1, $f21
    ctx->pc = 0x346b50u;
    ctx->f[1] = FPU_ABS_S(ctx->f[21]);
    // 0x346b54: 0xc5620040  lwc1        $f2, 0x40($t3)
    ctx->pc = 0x346b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346b58:
    // 0x346b58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346b58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346b5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x346b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x346b60: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x346b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x346b64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x346b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x346b68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x346b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b6c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x346B6Cu;
    {
        const bool branch_taken_0x346b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B6Cu;
        // 0x346b70: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b6c) {
            ctx->pc = 0x346CD8u;
            goto label_346cd8;
        }
    }
    ctx->pc = 0x346B74u;
label_346b74:
    // 0x346b74: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x346b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346b78: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x346b78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x346b7c: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x346b7cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
    // 0x346b80: 0xc0d29a8  jal         func_34A6A0
    ctx->pc = 0x346B80u;
    SET_GPR_U32(ctx, 31, 0x346B88u);
    ctx->pc = 0x346B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B80u;
    // 0x346b84: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6A0u, 0x346B80u, 0x346B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B88u;
label_346b88:
    // 0x346b88: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x346B88u;
    {
        const bool branch_taken_0x346b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B88u;
        // 0x346b8c: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b88) {
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x346B90u;
    // 0x346b90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x346B90u;
    {
        const bool branch_taken_0x346b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346b90) {
            ctx->pc = 0x346C18u;
            goto label_346c18;
        }
    }
    ctx->pc = 0x346B98u;
label_346b98:
    // 0x346b98: 0x1828821  addu        $s1, $t4, $v0
    ctx->pc = 0x346b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x346b9c: 0xc6300000  lwc1        $f16, 0x0($s1)
    ctx->pc = 0x346b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x346ba0: 0x46008007  neg.s       $f0, $f16
    ctx->pc = 0x346ba0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[16]);
    // 0x346ba4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x346ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346ba8: 0x0  nop
    ctx->pc = 0x346ba8u;
    // NOP
    // 0x346bac: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x346BACu;
    {
        const bool branch_taken_0x346bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BACu;
        // 0x346bb0: 0x46000bc6  mov.s       $f15, $f1 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bac) {
            ctx->pc = 0x346BECu;
            goto label_346bec;
        }
    }
    ctx->pc = 0x346BB4u;
    // 0x346bb4: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x346bb4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x346bb8: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x346bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346bbc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x346bbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x346bc0: 0xc0d28b4  jal         func_34A2D0
    ctx->pc = 0x346BC0u;
    SET_GPR_U32(ctx, 31, 0x346BC8u);
    ctx->pc = 0x346BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BC0u;
    // 0x346bc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A2D0u, 0x346BC0u, 0x346BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346BC8u;
label_346bc8:
    // 0x346bc8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x346BC8u;
    {
        const bool branch_taken_0x346bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BC8u;
        // 0x346bcc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bc8) {
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x346BD0u;
    // 0x346bd0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x346bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346bd4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x346bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346bd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x346bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346bdc: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x346bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x346be0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x346be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x346be4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x346BE4u;
    {
        const bool branch_taken_0x346be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BE4u;
        // 0x346be8: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346be4) {
            ctx->pc = 0x346C70u;
            goto label_346c70;
        }
    }
    ctx->pc = 0x346BECu;
label_346bec:
    // 0x346bec: 0x4610a036  c.le.s      $f20, $f16
    ctx->pc = 0x346becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346bf0: 0x0  nop
    ctx->pc = 0x346bf0u;
    // NOP
    // 0x346bf4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x346BF4u;
    {
        const bool branch_taken_0x346bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BF4u;
        // 0x346bf8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bf4) {
            ctx->pc = 0x346C30u;
            goto label_346c30;
        }
    }
    ctx->pc = 0x346BFCu;
    // 0x346bfc: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x346bfcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x346c00: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x346c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346c04: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x346c04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
    // 0x346c08: 0xc0d29a8  jal         func_34A6A0
    ctx->pc = 0x346C08u;
    SET_GPR_U32(ctx, 31, 0x346C10u);
    ctx->pc = 0x346C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C08u;
    // 0x346c0c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6A0u, 0x346C08u, 0x346C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C10u;
label_346c10:
    // 0x346c10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x346C10u;
    {
        const bool branch_taken_0x346c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C10u;
        // 0x346c14: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c10) {
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x346C18u;
label_346c18:
    // 0x346c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x346c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x346c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x346c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c20: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x346c20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x346c24: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x346c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x346c28: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x346C28u;
    {
        const bool branch_taken_0x346c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C28u;
        // 0x346c2c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c28) {
            ctx->pc = 0x346CD8u;
            goto label_346cd8;
        }
    }
    ctx->pc = 0x346C30u;
label_346c30:
    // 0x346c30: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x346c30u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x346c34: 0xc56e0040  lwc1        $f14, 0x40($t3)
    ctx->pc = 0x346c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x346c38: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x346c38u;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
    // 0x346c3c: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x346c3cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
label_346c40:
    // 0x346c40: 0xc0d28b4  jal         func_34A2D0
    ctx->pc = 0x346C40u;
    SET_GPR_U32(ctx, 31, 0x346C48u);
    ctx->pc = 0x346C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C40u;
    // 0x346c44: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A2D0u, 0x346C40u, 0x346C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C48u;
label_346c48:
    // 0x346c48: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x346C48u;
    {
        const bool branch_taken_0x346c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346c48) {
            ctx->pc = 0x346C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346C48u;
            // 0x346c4c: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x346C58u;
            goto label_346c58;
        }
    }
    ctx->pc = 0x346C50u;
label_346c50:
    // 0x346c50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x346C50u;
    {
        const bool branch_taken_0x346c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C50u;
        // 0x346c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c50) {
            ctx->pc = 0x346CECu;
            goto label_346cec;
        }
    }
    ctx->pc = 0x346C58u;
label_346c58:
    // 0x346c58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x346c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346c5c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x346c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346c60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x346c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346c64: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x346c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_346c68:
    // 0x346c68: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x346c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x346c6c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x346c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_346c70:
    // 0x346c70: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x346c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x346c74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x346c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x346c78: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x346c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x346c7c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x346c7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346c80: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x346c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x346c84: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x346c84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x346c88: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x346c88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x346c8c: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x346c8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x346c90: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x346c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x346c94: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x346c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x346c98: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x346c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x346c9c: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x346c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346ca0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x346ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346ca4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x346ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x346ca8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346ca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346cac: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x346cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346cb0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x346cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346cb4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x346cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346cb8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x346cb8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x346cbc: 0x4a0003bf  vwaitq
    ctx->pc = 0x346cbcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x346cc0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x346cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346cc4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x346cc4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346cc8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x346cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x346ccc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x346cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x346cd0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x346cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x346cd4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x346cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_346cd8:
    // 0x346cd8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x346cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346ce0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x346ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346ce4: 0xe6800088  swc1        $f0, 0x88($s4)
    ctx->pc = 0x346ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 136), bits); }
    // 0x346ce8: 0x7e830050  sq          $v1, 0x50($s4)
    ctx->pc = 0x346ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 3));
label_346cec:
    // 0x346cec: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x346cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x346cf0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x346cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x346cf4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x346cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x346cf8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x346cf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x346cfc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x346cfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x346d00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x346d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x346d04: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x346d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x346d08: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x346d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x346d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x346D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D0Cu;
        // 0x346d10: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346D14u;
    // 0x346d14: 0x0  nop
    ctx->pc = 0x346d14u;
    // NOP
    ctx->pc = 0x346d18u;
}
