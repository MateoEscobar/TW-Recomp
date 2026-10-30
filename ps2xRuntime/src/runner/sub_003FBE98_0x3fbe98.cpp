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

// Function: sub_003FBE98
// Address: 0x3fbe98 - 0x3fc218
void sub_003FBE98_0x3fbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBE98_0x3fbe98");
#endif

    switch (ctx->pc) {
        case 0x3fbf28u: goto label_3fbf28;
        case 0x3fbf40u: goto label_3fbf40;
        case 0x3fc0c4u: goto label_3fc0c4;
        case 0x3fc0dcu: goto label_3fc0dc;
        case 0x3fc120u: goto label_3fc120;
        case 0x3fc130u: goto label_3fc130;
        case 0x3fc150u: goto label_3fc150;
        case 0x3fc180u: goto label_3fc180;
        case 0x3fc1c8u: goto label_3fc1c8;
        case 0x3fc1d4u: goto label_3fc1d4;
        default: break;
    }

    ctx->pc = 0x3fbe98u;

    // 0x3fbe98: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x3fbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
    // 0x3fbe9c: 0x7fb20500  sq          $s2, 0x500($sp)
    ctx->pc = 0x3fbe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 18));
    // 0x3fbea0: 0x7fb304f0  sq          $s3, 0x4F0($sp)
    ctx->pc = 0x3fbea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 19));
    // 0x3fbea4: 0xe7b40530  swc1        $f20, 0x530($sp)
    ctx->pc = 0x3fbea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
    // 0x3fbea8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fbea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbeac: 0x7fb00520  sq          $s0, 0x520($sp)
    ctx->pc = 0x3fbeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 16));
    // 0x3fbeb0: 0x7fb10510  sq          $s1, 0x510($sp)
    ctx->pc = 0x3fbeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 17));
    // 0x3fbeb4: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x3fbeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
    // 0x3fbeb8: 0x7fb504d0  sq          $s5, 0x4D0($sp)
    ctx->pc = 0x3fbeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 21));
    // 0x3fbebc: 0x7fb604c0  sq          $s6, 0x4C0($sp)
    ctx->pc = 0x3fbebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 22));
    // 0x3fbec0: 0x7fb704b0  sq          $s7, 0x4B0($sp)
    ctx->pc = 0x3fbec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 23));
    // 0x3fbec4: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3fbec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x3fbec8: 0xe7b50538  swc1        $f21, 0x538($sp)
    ctx->pc = 0x3fbec8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
    // 0x3fbecc: 0xe7b60540  swc1        $f22, 0x540($sp)
    ctx->pc = 0x3fbeccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
    // 0x3fbed0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3fbed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x3fbed4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3fbed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x3fbed8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fbed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3fbedc: 0xc6760010  lwc1        $f22, 0x10($s3)
    ctx->pc = 0x3fbedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3fbee0: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x3fbee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fbee4: 0x0  nop
    ctx->pc = 0x3fbee4u;
    // NOP
    // 0x3fbee8: 0x450000bd  bc1f        . + 4 + (0xBD << 2)
    ctx->pc = 0x3FBEE8u;
    {
        const bool branch_taken_0x3fbee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBEE8u;
        // 0x3fbeec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbee8) {
            ctx->pc = 0x3FC1E0u;
            goto label_3fc1e0;
        }
    }
    ctx->pc = 0x3FBEF0u;
    // 0x3fbef0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3fbef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x3fbef4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3fbef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3fbef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fbef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fbefc: 0x0  nop
    ctx->pc = 0x3fbefcu;
    // NOP
    // 0x3fbf00: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x3fbf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fbf04: 0x0  nop
    ctx->pc = 0x3fbf04u;
    // NOP
    // 0x3fbf08: 0x450000b5  bc1f        . + 4 + (0xB5 << 2)
    ctx->pc = 0x3FBF08u;
    {
        const bool branch_taken_0x3fbf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBF08u;
        // 0x3fbf0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbf08) {
            ctx->pc = 0x3FC1E0u;
            goto label_3fc1e0;
        }
    }
    ctx->pc = 0x3FBF10u;
    // 0x3fbf10: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3fbf10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3fbf14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fbf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbf18: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3fbf18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x3fbf1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3fbf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3fbf20: 0xc0e92f4  jal         func_3A4BD0
    ctx->pc = 0x3FBF20u;
    SET_GPR_U32(ctx, 31, 0x3FBF28u);
    ctx->pc = 0x3FBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBF20u;
    // 0x3fbf24: 0x2611b8b8  addiu       $s1, $s0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3FBF20u, 0x3FBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBF28u;
label_3fbf28:
    // 0x3fbf28: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fbf28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3fbf2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fbf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fbf30: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3fbf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3fbf34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbf38: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3FBF38u;
    SET_GPR_U32(ctx, 31, 0x3FBF40u);
    ctx->pc = 0x3FBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBF38u;
    // 0x3fbf3c: 0xc7b50014  lwc1        $f21, 0x14($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FBF38u, 0x3FBF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBF40u;
label_3fbf40:
    // 0x3fbf40: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x3fbf40u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3fbf44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fbf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3fbf48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fbf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fbf4c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3fbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3fbf50: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3fbf50u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fbf54: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x3fbf54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3fbf58: 0x24631750  addiu       $v1, $v1, 0x1750
    ctx->pc = 0x3fbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5968));
    // 0x3fbf5c: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x3fbf5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x3fbf60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3fbf60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511750u));
    // 0x3fbf64: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3fbf64u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3fbf68: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x3fbf68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3fbf6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fbf6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3fbf70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fbf70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3fbf74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3fbf74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3fbf78: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fbf78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3fbf7c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fbf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3fbf80: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fbf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3fbf84: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fbf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3fbf88: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3fbf88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3fbf8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fbf8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3fbf90: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fbf90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fbf94: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fbf94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3fbf98: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fbf98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3fbf9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fbf9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfa0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fbfa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfa4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fbfa4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3fbfa8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fbfa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fbfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfb0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fbfb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfb4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fbfb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfb8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fbfb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3fbfbc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fbfbcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfc0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fbfc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfc4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fbfc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfc8: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x3fbfc8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3fbfcc: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3fbfccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3fbfd0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x3fbfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x3fbfd4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3fbfd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3fbfd8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fbfd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3fbfdc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3fbfdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3fbfe0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3fbfe0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3fbfe4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3fbfe4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3fbfe8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3fbfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x3fbfec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3fbfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x3fbff0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3fbff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3fbff4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3fbff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3fbff8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3fbff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3fbffc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3fbffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fc000: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3fc000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3fc004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3fc004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3fc008: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x3fc008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x3fc00c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3fc00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3fc010: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3fc010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3fc014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fc014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3fc018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fc018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fc01c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3fc01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3fc020: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3fc020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x3fc024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fc024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fc028: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3fc028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3fc02c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x3fc02cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3fc030: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3fc030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x3fc034: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3fc034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3fc038: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3fc038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3fc03c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x3fc03cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x3fc040: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3fc040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fc044: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3fc044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fc048: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3fc048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3fc04c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc04cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3fc050: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fc050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3fc054: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fc054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fc058: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fc058u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3fc05c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fc05cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3fc060: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fc060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fc064: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fc064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fc068: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fc068u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3fc06c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fc06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fc070: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fc070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3fc074: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fc074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3fc078: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fc078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fc07c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fc07cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3fc080: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fc080u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3fc084: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fc084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fc088: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fc088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3fc08c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3fc08cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3fc090: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3fc090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x3fc094: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fc094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3fc098: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fc098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fc09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc0a0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3fc0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x3fc0a4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3fc0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3fc0a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fc0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3fc0ac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3fc0acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc0b0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3fc0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3fc0b4: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3fc0b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc0b8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fc0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3fc0bc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3FC0BCu;
    SET_GPR_U32(ctx, 31, 0x3FC0C4u);
    ctx->pc = 0x3FC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC0BCu;
    // 0x3fc0c0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FC0BCu, 0x3FC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC0C4u;
label_3fc0c4:
    // 0x3fc0c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fc0c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3fc0c8: 0x0  nop
    ctx->pc = 0x3fc0c8u;
    // NOP
    // 0x3fc0cc: 0x0  nop
    ctx->pc = 0x3fc0ccu;
    // NOP
    // 0x3fc0d0: 0x4614ab03  div.s       $f12, $f21, $f20
    ctx->pc = 0x3fc0d0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x3fc0d4: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x3FC0D4u;
    SET_GPR_U32(ctx, 31, 0x3FC0DCu);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3FC0D4u, 0x3FC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC0DCu;
label_3fc0dc:
    // 0x3fc0dc: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x3fc0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3fc0e0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x3fc0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3fc0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc0e8: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x3fc0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3fc0ec: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x3fc0ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3fc0f0: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FC0F0u;
    {
        const bool branch_taken_0x3fc0f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC0F0u;
        // 0x3fc0f4: 0x8c940640  lw          $s4, 0x640($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc0f0) {
            ctx->pc = 0x3FC104u;
            goto label_3fc104;
        }
    }
    ctx->pc = 0x3FC0F8u;
    // 0x3fc0f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3fc0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fc0fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3fc0fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3fc100: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3fc100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3fc104:
    // 0x3fc104: 0x1a200036  blez        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3FC104u;
    {
        const bool branch_taken_0x3fc104 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3FC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC104u;
        // 0x3fc108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc104) {
            ctx->pc = 0x3FC1E0u;
            goto label_3fc1e0;
        }
    }
    ctx->pc = 0x3FC10Cu;
    // 0x3fc10c: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3fc10cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x3fc110: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x3fc110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3fc114: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3fc114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3fc118: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3fc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fc11c: 0x0  nop
    ctx->pc = 0x3fc11cu;
    // NOP
label_3fc120:
    // 0x3fc120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc124: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3fc124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3fc128: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3FC128u;
    SET_GPR_U32(ctx, 31, 0x3FC130u);
    ctx->pc = 0x3FC12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC128u;
    // 0x3fc12c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3FC128u, 0x3FC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC130u;
label_3fc130:
    // 0x3fc130: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x3FC130u;
    {
        const bool branch_taken_0x3fc130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc130) {
            ctx->pc = 0x3FC134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC130u;
            // 0x3fc134: 0x7bb00520  lq          $s0, 0x520($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC1E4u;
            goto label_3fc1e4;
        }
    }
    ctx->pc = 0x3FC138u;
    // 0x3fc138: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3fc138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x3fc13c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fc13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fc140: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3fc140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x3fc144: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fc144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3fc148: 0xc0e9f56  jal         func_3A7D58
    ctx->pc = 0x3FC148u;
    SET_GPR_U32(ctx, 31, 0x3FC150u);
    ctx->pc = 0x3FC14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC148u;
    // 0x3fc14c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3FC148u, 0x3FC150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC150u;
label_3fc150:
    // 0x3fc150: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3FC150u;
    {
        const bool branch_taken_0x3fc150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC150u;
        // 0x3fc154: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc150) {
            ctx->pc = 0x3FC1E0u;
            goto label_3fc1e0;
        }
    }
    ctx->pc = 0x3FC158u;
    // 0x3fc158: 0x26e4b8b8  addiu       $a0, $s7, -0x4748
    ctx->pc = 0x3fc158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
    // 0x3fc15c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fc15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3fc160: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fc160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3fc164: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fc164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fc168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3fc168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3fc16c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fc16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3fc170: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fc170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3fc174: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fc174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3fc178: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3FC178u;
    SET_GPR_U32(ctx, 31, 0x3FC180u);
    ctx->pc = 0x3FC17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC178u;
    // 0x3fc17c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FC178u, 0x3FC180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC180u;
label_3fc180:
    // 0x3fc180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3fc180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3fc184: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3fc184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc188: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3fc188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fc18c: 0x27a70480  addiu       $a3, $sp, 0x480
    ctx->pc = 0x3fc18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x3fc190: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3fc194: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fc194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3fc198: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3fc198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3fc19c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fc19cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3fc1a0: 0x27a80490  addiu       $t0, $sp, 0x490
    ctx->pc = 0x3fc1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x3fc1a4: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3fc1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    // 0x3fc1a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fc1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc1ac: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3fc1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    // 0x3fc1b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fc1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc1b4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fc1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3fc1b8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3fc1bc: 0xafb40480  sw          $s4, 0x480($sp)
    ctx->pc = 0x3fc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 20));
    // 0x3fc1c0: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3FC1C0u;
    SET_GPR_U32(ctx, 31, 0x3FC1C8u);
    ctx->pc = 0x3FC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC1C0u;
    // 0x3fc1c4: 0xafa00490  sw          $zero, 0x490($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3FC1C0u, 0x3FC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC1C8u;
label_3fc1c8:
    // 0x3fc1c8: 0x26a47258  addiu       $a0, $s5, 0x7258
    ctx->pc = 0x3fc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 29272));
    // 0x3fc1cc: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3FC1CCu;
    SET_GPR_U32(ctx, 31, 0x3FC1D4u);
    ctx->pc = 0x3FC1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC1CCu;
    // 0x3fc1d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3FC1CCu, 0x3FC1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC1D4u;
label_3fc1d4:
    // 0x3fc1d4: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x3fc1d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3fc1d8: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3FC1D8u;
    {
        const bool branch_taken_0x3fc1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC1D8u;
        // 0x3fc1dc: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc1d8) {
            ctx->pc = 0x3FC120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc120;
        }
    }
    ctx->pc = 0x3FC1E0u;
label_3fc1e0:
    // 0x3fc1e0: 0x7bb00520  lq          $s0, 0x520($sp)
    ctx->pc = 0x3fc1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3fc1e4:
    // 0x3fc1e4: 0x7bb10510  lq          $s1, 0x510($sp)
    ctx->pc = 0x3fc1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x3fc1e8: 0x7bb20500  lq          $s2, 0x500($sp)
    ctx->pc = 0x3fc1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3fc1ec: 0x7bb304f0  lq          $s3, 0x4F0($sp)
    ctx->pc = 0x3fc1ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x3fc1f0: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x3fc1f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x3fc1f4: 0x7bb504d0  lq          $s5, 0x4D0($sp)
    ctx->pc = 0x3fc1f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x3fc1f8: 0x7bb604c0  lq          $s6, 0x4C0($sp)
    ctx->pc = 0x3fc1f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x3fc1fc: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x3fc1fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x3fc200: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3fc200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x3fc204: 0xc7b60540  lwc1        $f22, 0x540($sp)
    ctx->pc = 0x3fc204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3fc208: 0xc7b50538  lwc1        $f21, 0x538($sp)
    ctx->pc = 0x3fc208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3fc20c: 0xc7b40530  lwc1        $f20, 0x530($sp)
    ctx->pc = 0x3fc20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3fc210: 0x3e00008  jr          $ra
    ctx->pc = 0x3FC210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC210u;
        // 0x3fc214: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FC218u;
}
