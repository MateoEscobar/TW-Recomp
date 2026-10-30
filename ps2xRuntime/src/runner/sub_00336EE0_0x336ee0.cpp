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

// Function: sub_00336EE0
// Address: 0x336ee0 - 0x337028
void sub_00336EE0_0x336ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336EE0_0x336ee0");
#endif

    ctx->pc = 0x336ee0u;

    // 0x336ee0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x336ee0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336ee4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x336ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x336ee8: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x336ee8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x336eec: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x336eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x336ef0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x336ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336ef4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x336ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336ef8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x336ef8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336efc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x336efcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x336f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x336f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x336f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336f08: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336f0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x336f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x336f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x336f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f18: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x336f18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x336f1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x336f1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x336f20: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x336f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f24: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x336f24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x336f28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x336f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336f2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x336f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x336f30: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x336f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336f34: 0x0  nop
    ctx->pc = 0x336f34u;
    // NOP
    // 0x336f38: 0x0  nop
    ctx->pc = 0x336f38u;
    // NOP
    // 0x336f3c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x336f3cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x336f40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x336f40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336f44: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x336f44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336f48: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x336f48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336f4c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x336f4cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336f50: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x336f50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336f54: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x336f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x336f58: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x336f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x336f5c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x336f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x336f60: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x336f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x336f64: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x336f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x336f68: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x336f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x336f6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336f70: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x336f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x336f74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x336f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336f78: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x336f78u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336f7c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x336f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x336f80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x336f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336f84: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x336f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x336f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x336f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336f90: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x336f90u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x336f94: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x336f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x336f98: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x336f98u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336f9c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x336f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x336fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x336fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336fa4: 0x0  nop
    ctx->pc = 0x336fa4u;
    // NOP
    // 0x336fa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x336FA8u;
    {
        const bool branch_taken_0x336fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x336FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FA8u;
        // 0x336fac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fa8) {
            ctx->pc = 0x336FB8u;
            goto label_336fb8;
        }
    }
    ctx->pc = 0x336FB0u;
    // 0x336fb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x336FB0u;
    {
        const bool branch_taken_0x336fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FB0u;
        // 0x336fb4: 0x7c860000  sq          $a2, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fb0) {
            ctx->pc = 0x337010u;
            goto label_337010;
        }
    }
    ctx->pc = 0x336FB8u;
label_336fb8:
    // 0x336fb8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x336fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336fbc: 0x0  nop
    ctx->pc = 0x336fbcu;
    // NOP
    // 0x336fc0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x336FC0u;
    {
        const bool branch_taken_0x336fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336fc0) {
            ctx->pc = 0x336FD0u;
            goto label_336fd0;
        }
    }
    ctx->pc = 0x336FC8u;
    // 0x336fc8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x336FC8u;
    {
        const bool branch_taken_0x336fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FC8u;
        // 0x336fcc: 0x7c870000  sq          $a3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fc8) {
            ctx->pc = 0x337010u;
            goto label_337010;
        }
    }
    ctx->pc = 0x336FD0u;
label_336fd0:
    // 0x336fd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x336fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336fd4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x336fd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x336fd8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x336fd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336fdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x336fdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336fe0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x336fe0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336fe4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x336fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336fe8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x336fe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336fec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x336fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336ff0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x336ff0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336ff4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x336ff4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336ff8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x336ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x336ffc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x336ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x337000: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x337000u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x337004: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x337004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x337008: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x337008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x33700c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x33700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_337010:
    // 0x337010: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337014: 0x3e00008  jr          $ra
    ctx->pc = 0x337014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337014u;
        // 0x337018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33701Cu;
    // 0x33701c: 0x0  nop
    ctx->pc = 0x33701cu;
    // NOP
    // 0x337020: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x337020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x337024: 0x0  nop
    ctx->pc = 0x337024u;
    // NOP
    ctx->pc = 0x337028u;
}
