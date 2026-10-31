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

// Function: sub_00346388
// Address: 0x346388 - 0x346500
void sub_00346388_0x346388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346388_0x346388");
#endif

    ctx->pc = 0x346388u;

    // 0x346388: 0xc4c30058  lwc1        $f3, 0x58($a2)
    ctx->pc = 0x346388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34638c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34638cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x346390: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x346390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346398: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x346398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34639c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x34639cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3463a0: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x3463a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3463a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3463a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3463a8: 0x0  nop
    ctx->pc = 0x3463a8u;
    // NOP
    // 0x3463ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3463ACu;
    {
        const bool branch_taken_0x3463ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3463B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463ACu;
        // 0x3463b0: 0x46011040  add.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3463ac) {
            ctx->pc = 0x3463C4u;
            goto label_3463c4;
        }
    }
    ctx->pc = 0x3463B4u;
    // 0x3463b4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x3463b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3463b8: 0x0  nop
    ctx->pc = 0x3463b8u;
    // NOP
    // 0x3463bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3463BCu;
    {
        const bool branch_taken_0x3463bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3463bc) {
            ctx->pc = 0x3463C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3463BCu;
            // 0x3463c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3463C4u;
            goto label_3463c4;
        }
    }
    ctx->pc = 0x3463C4u;
label_3463c4:
    // 0x3463c4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3463C4u;
    {
        const bool branch_taken_0x3463c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3463C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463C4u;
        // 0x3463c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3463c4) {
            ctx->pc = 0x3464F4u;
            goto label_3464f4;
        }
    }
    ctx->pc = 0x3463CCu;
    // 0x3463cc: 0x78a30050  lq          $v1, 0x50($a1)
    ctx->pc = 0x3463ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x3463d0: 0x78c20050  lq          $v0, 0x50($a2)
    ctx->pc = 0x3463d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x3463d4: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x3463d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3463d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3463d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3463dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3463dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3463e0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3463e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3463e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3463e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3463e8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3463e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3463ec: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x3463ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3463f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3463f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3463f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3463f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3463f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3463f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3463fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3463fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x346400: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x346400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346404: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x346404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346408: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x346408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34640c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34640cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346410: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x346410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346414: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x346414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346418: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x346418u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34641c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x34641cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x346420: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x346420u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x346424: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x346424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x346428: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x346428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34642c: 0x0  nop
    ctx->pc = 0x34642cu;
    // NOP
    // 0x346430: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x346430u;
    {
        const bool branch_taken_0x346430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346430u;
        // 0x346434: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346430) {
            ctx->pc = 0x3464F0u;
            goto label_3464f0;
        }
    }
    ctx->pc = 0x346438u;
    // 0x346438: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x346438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x34643c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x34643cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x346440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x346440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346444: 0x0  nop
    ctx->pc = 0x346444u;
    // NOP
    // 0x346448: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x346448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34644c: 0x0  nop
    ctx->pc = 0x34644cu;
    // NOP
    // 0x346450: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x346450u;
    {
        const bool branch_taken_0x346450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346450u;
        // 0x346454: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346450) {
            ctx->pc = 0x346468u;
            goto label_346468;
        }
    }
    ctx->pc = 0x346458u;
    // 0x346458: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x346458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
    // 0x34645c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x34645cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x346460u;
    {
        const bool branch_taken_0x346460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346460u;
        // 0x346464: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346460) {
            ctx->pc = 0x346490u;
            goto label_346490;
        }
    }
    ctx->pc = 0x346468u;
label_346468:
    // 0x346468: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x346468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34646c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x34646cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346470: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x346470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346474: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x346474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346478: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x346478u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34647c: 0x4a0003bf  vwaitq
    ctx->pc = 0x34647cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x346480: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x346480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346484: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x346484u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346488: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x346488u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x34648c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_346490:
    // 0x346490: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x346490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346494: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x346494u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x346498: 0x0  nop
    ctx->pc = 0x346498u;
    // NOP
    // 0x34649c: 0x0  nop
    ctx->pc = 0x34649cu;
    // NOP
    // 0x3464a0: 0x46000004  c1          0x4
    ctx->pc = 0x3464a0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3464a4: 0x46030084  c1          0x30084
    ctx->pc = 0x3464a4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3464a8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3464a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3464ac: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x3464acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3464b0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3464b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3464b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3464b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3464b8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3464b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3464bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3464bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3464c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3464c4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3464c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3464c8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3464c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3464cc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3464ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3464d0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3464d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3464d4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3464d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464d8: 0xe4820088  swc1        $f2, 0x88($a0)
    ctx->pc = 0x3464d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x3464dc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3464dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3464e0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3464e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3464e4: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x3464e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x3464e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3464E8u;
    {
        const bool branch_taken_0x3464e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3464ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464E8u;
        // 0x3464ec: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464e8) {
            ctx->pc = 0x3464F4u;
            goto label_3464f4;
        }
    }
    ctx->pc = 0x3464F0u;
label_3464f0:
    // 0x3464f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3464f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3464f4:
    // 0x3464f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3464F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3464F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464F4u;
        // 0x3464f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3464F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3464FCu;
    // 0x3464fc: 0x0  nop
    ctx->pc = 0x3464fcu;
    // NOP
    ctx->pc = 0x346500u;
}
