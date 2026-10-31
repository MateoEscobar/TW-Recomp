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

// Function: sub_003EADE8
// Address: 0x3eade8 - 0x3eaf38
void sub_003EADE8_0x3eade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EADE8_0x3eade8");
#endif

    switch (ctx->pc) {
        case 0x3eae38u: goto label_3eae38;
        case 0x3eaeb8u: goto label_3eaeb8;
        case 0x3eaee4u: goto label_3eaee4;
        case 0x3eaef0u: goto label_3eaef0;
        default: break;
    }

    ctx->pc = 0x3eade8u;

    // 0x3eade8: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x3eade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
    // 0x3eadec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3eadecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3eadf0: 0x7fb304f0  sq          $s3, 0x4F0($sp)
    ctx->pc = 0x3eadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 19));
    // 0x3eadf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3eadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3eadf8: 0x7fb00520  sq          $s0, 0x520($sp)
    ctx->pc = 0x3eadf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 16));
    // 0x3eadfc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3eadfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae00: 0x7fb10510  sq          $s1, 0x510($sp)
    ctx->pc = 0x3eae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 17));
    // 0x3eae04: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3eae04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae08: 0x7fb20500  sq          $s2, 0x500($sp)
    ctx->pc = 0x3eae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 18));
    // 0x3eae0c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x3eae0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3eae10: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x3eae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
    // 0x3eae14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3eae14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae18: 0x7fb504d0  sq          $s5, 0x4D0($sp)
    ctx->pc = 0x3eae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 21));
    // 0x3eae1c: 0x24743160  addiu       $s4, $v1, 0x3160
    ctx->pc = 0x3eae1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 12640));
    // 0x3eae20: 0x7fb604c0  sq          $s6, 0x4C0($sp)
    ctx->pc = 0x3eae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 22));
    // 0x3eae24: 0x245546c0  addiu       $s5, $v0, 0x46C0
    ctx->pc = 0x3eae24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 18112));
    // 0x3eae28: 0x7fb704b0  sq          $s7, 0x4B0($sp)
    ctx->pc = 0x3eae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 23));
    // 0x3eae2c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3eae2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae30: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3eae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x3eae34: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3eae34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_3eae38:
    // 0x3eae38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3eae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3eae3c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x3EAE3Cu;
    {
        const bool branch_taken_0x3eae3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eae3c) {
            ctx->pc = 0x3EAE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAE3Cu;
            // 0x3eae40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAEF8u;
            goto label_3eaef8;
        }
    }
    ctx->pc = 0x3EAE44u;
    // 0x3eae44: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3eae44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3eae48: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x3eae48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eae4c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3eae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3eae50: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3eae50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x3eae54: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3eae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3eae58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3eae58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3eae5c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3eae5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3eae60: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3eae60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3eae64: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3eae64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3eae68: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3eae68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3eae6c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3eae6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3eae70: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3eae70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3eae74: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3eae74u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3eae78: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3eae78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3eae7c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3eae7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3eae80: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3eae80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3eae84: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3eae84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3eae88: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3eae88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3eae8c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3eae8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3eae90: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3eae90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3eae94: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3eae94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3eae98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3eae98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3eae9c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3eae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3eaea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3eaea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3eaea4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3eaea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3eaea8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3eaea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3eaeac: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3eaeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3eaeb0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x3EAEB0u;
    SET_GPR_U32(ctx, 31, 0x3EAEB8u);
    ctx->pc = 0x3EAEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEB0u;
    // 0x3eaeb4: 0x26c50010  addiu       $a1, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EAEB0u, 0x3EAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEB8u;
label_3eaeb8:
    // 0x3eaeb8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3eaeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eaebc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3eaebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3eaec0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3eaec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3eaec4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3eaec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3eaec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eaec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaecc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3eaeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3eaed0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3eaed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3eaed4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3eaed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3eaed8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3eaed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3eaedc: 0xc0e9fa6  jal         func_3A7E98
    ctx->pc = 0x3EAEDCu;
    SET_GPR_U32(ctx, 31, 0x3EAEE4u);
    ctx->pc = 0x3EAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEDCu;
    // 0x3eaee0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3EAEDCu, 0x3EAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEE4u;
label_3eaee4:
    // 0x3eaee4: 0x26e45b98  addiu       $a0, $s7, 0x5B98
    ctx->pc = 0x3eaee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 23448));
    // 0x3eaee8: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3EAEE8u;
    SET_GPR_U32(ctx, 31, 0x3EAEF0u);
    ctx->pc = 0x3EAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEE8u;
    // 0x3eaeec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EAEE8u, 0x3EAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEF0u;
label_3eaef0:
    // 0x3eaef0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3eaef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3eaef4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eaef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3eaef8:
    // 0x3eaef8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3eaef8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3eaefc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x3eaefcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3eaf00: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x3eaf00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3eaf04: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3EAF04u;
    {
        const bool branch_taken_0x3eaf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF04u;
        // 0x3eaf08: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf04) {
            ctx->pc = 0x3EAE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eae38;
        }
    }
    ctx->pc = 0x3EAF0Cu;
    // 0x3eaf0c: 0x7bb00520  lq          $s0, 0x520($sp)
    ctx->pc = 0x3eaf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x3eaf10: 0x7bb10510  lq          $s1, 0x510($sp)
    ctx->pc = 0x3eaf10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x3eaf14: 0x7bb20500  lq          $s2, 0x500($sp)
    ctx->pc = 0x3eaf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3eaf18: 0x7bb304f0  lq          $s3, 0x4F0($sp)
    ctx->pc = 0x3eaf18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x3eaf1c: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x3eaf1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x3eaf20: 0x7bb504d0  lq          $s5, 0x4D0($sp)
    ctx->pc = 0x3eaf20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x3eaf24: 0x7bb604c0  lq          $s6, 0x4C0($sp)
    ctx->pc = 0x3eaf24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x3eaf28: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x3eaf28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x3eaf2c: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3eaf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x3eaf30: 0x3e00008  jr          $ra
    ctx->pc = 0x3EAF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF30u;
        // 0x3eaf34: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAF38u;
}
