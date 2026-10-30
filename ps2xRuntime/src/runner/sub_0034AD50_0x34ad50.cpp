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

// Function: sub_0034AD50
// Address: 0x34ad50 - 0x34af50
void sub_0034AD50_0x34ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AD50_0x34ad50");
#endif

    ctx->pc = 0x34ad50u;

    // 0x34ad50: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x34ad50u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34ad54: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x34ad54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34ad58: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x34ad58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34ad5c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ad5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad60: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ad60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad64: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ad64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad68: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34ad68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ad6c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x34ad6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ad70: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x34ad70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x34ad74: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x34ad74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34ad78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ad78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ad7c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ad7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad80: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ad80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad84: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ad84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad88: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34ad88u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ad8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34ad8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ad90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ad90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ad94: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ad94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ad98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ad9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ad9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ada0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34ada0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ada4: 0x44863800  mtc1        $a2, $f7
    ctx->pc = 0x34ada4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34ada8: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x34ada8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34adac: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x34adacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x34adb0: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x34adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x34adb4: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x34adb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x34adb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34adb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34adbc: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x34adbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x34adc0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x34adc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34adc4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34adc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34adc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34adc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34adcc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34adccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34add0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34add0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34add4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34add4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34add8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34add8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34addc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x34addcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34ade0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34ade0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ade4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ade4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ade8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ade8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34adec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34adecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34adf0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34adf0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34adf4: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x34adf4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34adf8: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x34adf8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34adfc: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x34adfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34ae00: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x34ae00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ae04: 0x0  nop
    ctx->pc = 0x34ae04u;
    // NOP
    // 0x34ae08: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34AE08u;
    {
        const bool branch_taken_0x34ae08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE08u;
        // 0x34ae0c: 0x46002a46  mov.s       $f9, $f5 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae08) {
            ctx->pc = 0x34AE28u;
            goto label_34ae28;
        }
    }
    ctx->pc = 0x34AE10u;
    // 0x34ae10: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x34ae10u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x34ae14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34ae14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34ae18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ae1c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x34ae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x34ae20: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34AE20u;
    {
        const bool branch_taken_0x34ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE20u;
        // 0x34ae24: 0x46003146  mov.s       $f5, $f6 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae20) {
            ctx->pc = 0x34AE78u;
            goto label_34ae78;
        }
    }
    ctx->pc = 0x34AE28u;
label_34ae28:
    // 0x34ae28: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x34ae28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x34ae2c: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x34ae2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x34ae30: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x34ae30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34ae34: 0x460450c2  mul.s       $f3, $f10, $f4
    ctx->pc = 0x34ae34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x34ae38: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x34ae38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x34ae3c: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x34ae3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x34ae40: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x34ae40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ae44: 0x0  nop
    ctx->pc = 0x34ae44u;
    // NOP
    // 0x34ae48: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34AE48u;
    {
        const bool branch_taken_0x34ae48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE48u;
        // 0x34ae4c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae48) {
            ctx->pc = 0x34AE5Cu;
            goto label_34ae5c;
        }
    }
    ctx->pc = 0x34AE50u;
    // 0x34ae50: 0x46005886  mov.s       $f2, $f11
    ctx->pc = 0x34ae50u;
    ctx->f[2] = FPU_MOV_S(ctx->f[11]);
    // 0x34ae54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34AE54u;
    {
        const bool branch_taken_0x34ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE54u;
        // 0x34ae58: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae54) {
            ctx->pc = 0x34AE74u;
            goto label_34ae74;
        }
    }
    ctx->pc = 0x34AE5Cu;
label_34ae5c:
    // 0x34ae5c: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x34ae5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ae60: 0x0  nop
    ctx->pc = 0x34ae60u;
    // NOP
    // 0x34ae64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34AE64u;
    {
        const bool branch_taken_0x34ae64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ae64) {
            ctx->pc = 0x34AE78u;
            goto label_34ae78;
        }
    }
    ctx->pc = 0x34AE6Cu;
    // 0x34ae6c: 0x460720c0  add.s       $f3, $f4, $f7
    ctx->pc = 0x34ae6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x34ae70: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x34ae70u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
label_34ae74:
    // 0x34ae74: 0x46003146  mov.s       $f5, $f6
    ctx->pc = 0x34ae74u;
    ctx->f[5] = FPU_MOV_S(ctx->f[6]);
label_34ae78:
    // 0x34ae78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34ae78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ae7c: 0x0  nop
    ctx->pc = 0x34ae7cu;
    // NOP
    // 0x34ae80: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x34ae80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ae84: 0x0  nop
    ctx->pc = 0x34ae84u;
    // NOP
    // 0x34ae88: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34AE88u;
    {
        const bool branch_taken_0x34ae88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ae88) {
            ctx->pc = 0x34AEACu;
            goto label_34aeac;
        }
    }
    ctx->pc = 0x34AE90u;
    // 0x34ae90: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x34ae90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x34ae94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34ae94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ae98: 0x0  nop
    ctx->pc = 0x34ae98u;
    // NOP
    // 0x34ae9c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x34AE9Cu;
    {
        const bool branch_taken_0x34ae9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE9Cu;
        // 0x34aea0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae9c) {
            ctx->pc = 0x34AED0u;
            goto label_34aed0;
        }
    }
    ctx->pc = 0x34AEA4u;
    // 0x34aea4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34AEA4u;
    {
        const bool branch_taken_0x34aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aea4) {
            ctx->pc = 0x34AEDCu;
            goto label_34aedc;
        }
    }
    ctx->pc = 0x34AEACu;
label_34aeac:
    // 0x34aeac: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x34aeacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aeb0: 0x0  nop
    ctx->pc = 0x34aeb0u;
    // NOP
    // 0x34aeb4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34AEB4u;
    {
        const bool branch_taken_0x34aeb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34aeb4) {
            ctx->pc = 0x34AEF4u;
            goto label_34aef4;
        }
    }
    ctx->pc = 0x34AEBCu;
    // 0x34aebc: 0x46083801  sub.s       $f0, $f7, $f8
    ctx->pc = 0x34aebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x34aec0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34aec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aec4: 0x0  nop
    ctx->pc = 0x34aec4u;
    // NOP
    // 0x34aec8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34AEC8u;
    {
        const bool branch_taken_0x34aec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEC8u;
        // 0x34aecc: 0x460028c6  mov.s       $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aec8) {
            ctx->pc = 0x34AEDCu;
            goto label_34aedc;
        }
    }
    ctx->pc = 0x34AED0u;
label_34aed0:
    // 0x34aed0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34aed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34aed4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34AED4u;
    {
        const bool branch_taken_0x34aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aed4) {
            ctx->pc = 0x34AEF4u;
            goto label_34aef4;
        }
    }
    ctx->pc = 0x34AEDCu;
label_34aedc:
    // 0x34aedc: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x34aedcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aee0: 0x0  nop
    ctx->pc = 0x34aee0u;
    // NOP
    // 0x34aee4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x34AEE4u;
    {
        const bool branch_taken_0x34aee4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEE4u;
        // 0x34aee8: 0x46004886  mov.s       $f2, $f9 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aee4) {
            ctx->pc = 0x34AEF4u;
            goto label_34aef4;
        }
    }
    ctx->pc = 0x34AEECu;
    // 0x34aeec: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x34aeecu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x34aef0: 0x46005246  mov.s       $f9, $f10
    ctx->pc = 0x34aef0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[10]);
label_34aef4:
    // 0x34aef4: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x34aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x34aef8: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x34aef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x34aefc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34aefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34af00: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x34af00u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x34af04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34af04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34af08: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x34af08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34af0c: 0x0  nop
    ctx->pc = 0x34af0cu;
    // NOP
    // 0x34af10: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34AF10u;
    {
        const bool branch_taken_0x34af10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34af10) {
            ctx->pc = 0x34AF24u;
            goto label_34af24;
        }
    }
    ctx->pc = 0x34AF18u;
    // 0x34af18: 0x0  nop
    ctx->pc = 0x34af18u;
    // NOP
    // 0x34af1c: 0x0  nop
    ctx->pc = 0x34af1cu;
    // NOP
    // 0x34af20: 0x46091043  div.s       $f1, $f2, $f9
    ctx->pc = 0x34af20u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[9]); }
label_34af24:
    // 0x34af24: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x34af24u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x34af28: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x34af28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34af2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34af2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34af30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34AF30u;
    {
        const bool branch_taken_0x34af30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF30u;
        // 0x34af34: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af30) {
            ctx->pc = 0x34AF44u;
            goto label_34af44;
        }
    }
    ctx->pc = 0x34AF38u;
    // 0x34af38: 0x0  nop
    ctx->pc = 0x34af38u;
    // NOP
    // 0x34af3c: 0x0  nop
    ctx->pc = 0x34af3cu;
    // NOP
    // 0x34af40: 0x46051803  div.s       $f0, $f3, $f5
    ctx->pc = 0x34af40u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
label_34af44:
    // 0x34af44: 0x3e00008  jr          $ra
    ctx->pc = 0x34AF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF44u;
        // 0x34af48: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AF4Cu;
    // 0x34af4c: 0x0  nop
    ctx->pc = 0x34af4cu;
    // NOP
    ctx->pc = 0x34af50u;
}
