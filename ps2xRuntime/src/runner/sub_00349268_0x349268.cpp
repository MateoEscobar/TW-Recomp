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

// Function: sub_00349268
// Address: 0x349268 - 0x349488
void sub_00349268_0x349268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349268_0x349268");
#endif

    ctx->pc = 0x349268u;

    // 0x349268: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x349268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34926c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x34926cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349270: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x349270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349278: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x349278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34927c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34927cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349280: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349284: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x349284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x349288: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x349288u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34928c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34928cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x349290: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x349290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x349294: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349298: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34929c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34929cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3492a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3492a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3492a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3492a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3492a8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x3492a8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3492ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3492acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3492b0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3492b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3492b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3492b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3492b8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3492b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3492bc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3492bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3492c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3492c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3492c4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3492c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3492c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3492c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3492cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3492ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3492d0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3492d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3492d4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3492d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3492d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3492d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3492dc: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x3492dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3492e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3492e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3492e4: 0x46000100  add.s       $f4, $f0, $f0
    ctx->pc = 0x3492e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3492e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3492E8u;
    {
        const bool branch_taken_0x3492e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3492ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492E8u;
        // 0x3492ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492e8) {
            ctx->pc = 0x349310u;
            goto label_349310;
        }
    }
    ctx->pc = 0x3492F0u;
    // 0x3492f0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3492f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3492f4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3492f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x3492f8: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x3492f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x3492fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3492fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x349300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349304: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x349304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x349308: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x349308u;
    {
        const bool branch_taken_0x349308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349308u;
        // 0x34930c: 0xe4650004  swc1        $f5, 0x4($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349308) {
            ctx->pc = 0x349460u;
            goto label_349460;
        }
    }
    ctx->pc = 0x349310u;
label_349310:
    // 0x349310: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x349310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x349314: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x349314u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x349318: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34931c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34931cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349320: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349324: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x349324u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349328: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x349328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x34932c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x34932cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x349330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x349330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349334: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x349334u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349338: 0x0  nop
    ctx->pc = 0x349338u;
    // NOP
    // 0x34933c: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x34933cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x349340: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x349340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349344: 0x0  nop
    ctx->pc = 0x349344u;
    // NOP
    // 0x349348: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x349348u;
    {
        const bool branch_taken_0x349348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349348u;
        // 0x34934c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349348) {
            ctx->pc = 0x349480u;
            goto label_349480;
        }
    }
    ctx->pc = 0x349350u;
    // 0x349350: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x349350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x349354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349358: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x349358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x34935c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34935cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x349360: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x349360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x349364: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x349364u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349368: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x349368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34936c: 0x0  nop
    ctx->pc = 0x34936cu;
    // NOP
    // 0x349370: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x349370u;
    {
        const bool branch_taken_0x349370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349370) {
            ctx->pc = 0x34941Cu;
            goto label_34941c;
        }
    }
    ctx->pc = 0x349378u;
    // 0x349378: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x349378u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x34937c: 0x0  nop
    ctx->pc = 0x34937cu;
    // NOP
    // 0x349380: 0x0  nop
    ctx->pc = 0x349380u;
    // NOP
    // 0x349384: 0x46010044  c1          0x10044
    ctx->pc = 0x349384u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x349388: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x349388u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x34938c: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x34938cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x349390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349394: 0x0  nop
    ctx->pc = 0x349394u;
    // NOP
    // 0x349398: 0x0  nop
    ctx->pc = 0x349398u;
    // NOP
    // 0x34939c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x34939cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x3493a0: 0x0  nop
    ctx->pc = 0x3493a0u;
    // NOP
    // 0x3493a4: 0x0  nop
    ctx->pc = 0x3493a4u;
    // NOP
    // 0x3493a8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3493a8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3493ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3493acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3493b0: 0x0  nop
    ctx->pc = 0x3493b0u;
    // NOP
    // 0x3493b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3493B4u;
    {
        const bool branch_taken_0x3493b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3493B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493B4u;
        // 0x3493b8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3493b4) {
            ctx->pc = 0x3493C4u;
            goto label_3493c4;
        }
    }
    ctx->pc = 0x3493BCu;
    // 0x3493bc: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3493bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x3493c0: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x3493c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_3493c4:
    // 0x3493c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3493c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3493c8: 0x25060004  addiu       $a2, $t0, 0x4
    ctx->pc = 0x3493c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3493cc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x3493ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x3493d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3493d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3493d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3493d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3493d8: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x3493d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
    // 0x3493dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3493dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3493e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3493e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3493e4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3493e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3493e8: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x3493e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3493ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3493ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3493f0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3493f4: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x3493f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x3493f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3493fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x349400: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x349400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349404: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x349404u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x349408: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x34940c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x34940cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x349410: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x349410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349414: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x349414u;
    {
        const bool branch_taken_0x349414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349414u;
        // 0x349418: 0x78e50000  lq          $a1, 0x0($a3) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349414) {
            ctx->pc = 0x349468u;
            goto label_349468;
        }
    }
    ctx->pc = 0x34941Cu;
label_34941c:
    // 0x34941c: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x34941cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349420: 0x0  nop
    ctx->pc = 0x349420u;
    // NOP
    // 0x349424: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x349424u;
    {
        const bool branch_taken_0x349424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349424) {
            ctx->pc = 0x349428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349424u;
            // 0x349428: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349434u;
            goto label_349434;
        }
    }
    ctx->pc = 0x34942Cu;
    // 0x34942c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34942Cu;
    {
        const bool branch_taken_0x34942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34942Cu;
        // 0x349430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34942c) {
            ctx->pc = 0x349480u;
            goto label_349480;
        }
    }
    ctx->pc = 0x349434u;
label_349434:
    // 0x349434: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349438: 0x46031840  add.s       $f1, $f3, $f3
    ctx->pc = 0x349438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x34943c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x34943cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x349440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x349440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349444: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x349444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x349448: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x349448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x34944c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349450: 0x0  nop
    ctx->pc = 0x349450u;
    // NOP
    // 0x349454: 0x0  nop
    ctx->pc = 0x349454u;
    // NOP
    // 0x349458: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x349458u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34945c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x34945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_349460:
    // 0x349460: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x349460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349464: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x349464u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_349468:
    // 0x349468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x349468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34946c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x34946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x349470: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x349470u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x349474: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x349474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x349478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34947c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x34947cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_349480:
    // 0x349480: 0x3e00008  jr          $ra
    ctx->pc = 0x349480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349480u;
        // 0x349484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349488u;
}
