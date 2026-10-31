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

// Function: sub_00277248
// Address: 0x277248 - 0x277458
void sub_00277248_0x277248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277248_0x277248");
#endif

    switch (ctx->pc) {
        case 0x2772e0u: goto label_2772e0;
        case 0x2772ecu: goto label_2772ec;
        case 0x277388u: goto label_277388;
        case 0x277398u: goto label_277398;
        case 0x277414u: goto label_277414;
        case 0x277424u: goto label_277424;
        case 0x277434u: goto label_277434;
        default: break;
    }

    ctx->pc = 0x277248u;

    // 0x277248: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x277248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x27724c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x27724cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x277250: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x277250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x277254: 0x25084b00  addiu       $t0, $t0, 0x4B00
    ctx->pc = 0x277254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19200));
    // 0x277258: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x277258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x27725c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27725cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277260: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x277260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x277264: 0x26490090  addiu       $t1, $s2, 0x90
    ctx->pc = 0x277264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x277268: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x277268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x27726c: 0x24aa0090  addiu       $t2, $a1, 0x90
    ctx->pc = 0x27726cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x277270: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x277270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x277274: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x277274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277278: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x277278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x27727c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27727cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277280: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x277280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x277284: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x277284u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x277288: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x277288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x27728c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27728cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277290: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x277294: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x277298: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x277298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27729c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x27729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2772a0: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2772a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2772a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2772a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2772a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2772ac: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2772acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2772b0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2772b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2772b4: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x2772b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2772b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2772bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2772c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2772c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2772c4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2772c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2772c8: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x2772c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2772cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2772ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2772d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2772d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2772d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2772d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2772d8: 0xc095106  jal         func_254418
    ctx->pc = 0x2772D8u;
    SET_GPR_U32(ctx, 31, 0x2772E0u);
    ctx->pc = 0x2772DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772D8u;
    // 0x2772dc: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x2772D8u, 0x2772E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772E0u;
label_2772e0:
    // 0x2772e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2772e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772e4: 0xc095128  jal         func_2544A0
    ctx->pc = 0x2772E4u;
    SET_GPR_U32(ctx, 31, 0x2772ECu);
    ctx->pc = 0x2772E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772E4u;
    // 0x2772e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2772E4u, 0x2772ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772ECu;
label_2772ec:
    // 0x2772ec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2772ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2772f0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2772f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2772f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2772f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2772f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2772f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2772fc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2772fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x277300: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x277300u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x277304: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x277304u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x277308: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x277308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27730c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x27730cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x277310: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x277310u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x277314: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x277314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x277318: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x277318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27731c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x27731cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x277320: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x277320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x277324: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x277324u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x277328: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x277328u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27732c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x27732cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x277330: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x277330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x277334: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x277334u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x277338: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x277338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27733c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x277340: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x277340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x277344: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x277348: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x277348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27734c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x27734cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x277350: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x277350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x277354: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x277354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277358: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x277358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27735c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x27735cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x277360: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x277360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x277364: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277364u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x277368: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277368u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x27736c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x27736cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x277370: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x277370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
    // 0x277374: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x277374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x277378: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x277378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x27737c: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x27737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x277380: 0xc0cd940  jal         func_336500
    ctx->pc = 0x277380u;
    SET_GPR_U32(ctx, 31, 0x277388u);
    ctx->pc = 0x277384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277380u;
    // 0x277384: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x277380u, 0x277388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277388u;
label_277388:
    // 0x277388: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x277388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27738c: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x27738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277390: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x277390u;
    SET_GPR_U32(ctx, 31, 0x277398u);
    ctx->pc = 0x277394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277390u;
    // 0x277394: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x277390u, 0x277398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277398u;
label_277398:
    // 0x277398: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x277398u;
    {
        const bool branch_taken_0x277398 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277398u;
        // 0x27739c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277398) {
            ctx->pc = 0x27740Cu;
            goto label_27740c;
        }
    }
    ctx->pc = 0x2773A0u;
    // 0x2773a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2773a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2773a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2773a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2773a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2773a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2773ac: 0x0  nop
    ctx->pc = 0x2773acu;
    // NOP
    // 0x2773b0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2773b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2773b4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2773b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2773b8: 0x0  nop
    ctx->pc = 0x2773b8u;
    // NOP
    // 0x2773bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2773BCu;
    {
        const bool branch_taken_0x2773bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2773bc) {
            ctx->pc = 0x2773D8u;
            goto label_2773d8;
        }
    }
    ctx->pc = 0x2773C4u;
    // 0x2773c4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2773c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2773c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2773c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2773cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2773ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2773d0: 0x0  nop
    ctx->pc = 0x2773d0u;
    // NOP
    // 0x2773d4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2773d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2773d8:
    // 0x2773d8: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2773d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2773dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2773dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2773e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2773e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2773e4: 0x0  nop
    ctx->pc = 0x2773e4u;
    // NOP
    // 0x2773e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2773e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2773ec: 0x0  nop
    ctx->pc = 0x2773ecu;
    // NOP
    // 0x2773f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2773F0u;
    {
        const bool branch_taken_0x2773f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2773f0) {
            ctx->pc = 0x27740Cu;
            goto label_27740c;
        }
    }
    ctx->pc = 0x2773F8u;
    // 0x2773f8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2773f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2773fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2773fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x277400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277404: 0x0  nop
    ctx->pc = 0x277404u;
    // NOP
    // 0x277408: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x277408u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27740c:
    // 0x27740c: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x27740Cu;
    SET_GPR_U32(ctx, 31, 0x277414u);
    ctx->pc = 0x277410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27740Cu;
    // 0x277410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x27740Cu, 0x277414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277414u;
label_277414:
    // 0x277414: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x277418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27741c: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x27741Cu;
    SET_GPR_U32(ctx, 31, 0x277424u);
    ctx->pc = 0x277420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27741Cu;
    // 0x277420: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x27741Cu, 0x277424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277424u;
label_277424:
    // 0x277424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277428: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x277428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27742c: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x27742Cu;
    SET_GPR_U32(ctx, 31, 0x277434u);
    ctx->pc = 0x277430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27742Cu;
    // 0x277430: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x27742Cu, 0x277434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277434u;
label_277434:
    // 0x277434: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x277434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x277438: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x277438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27743c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x27743cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x277440: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x277440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x277444: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x277444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x277448: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x277448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27744c: 0x3e00008  jr          $ra
    ctx->pc = 0x27744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27744Cu;
        // 0x277450: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27744Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277454u;
    // 0x277454: 0x0  nop
    ctx->pc = 0x277454u;
    // NOP
    ctx->pc = 0x277458u;
}
