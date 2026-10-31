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

// Function: sub_00276D98
// Address: 0x276d98 - 0x276ff0
void sub_00276D98_0x276d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276D98_0x276d98");
#endif

    switch (ctx->pc) {
        case 0x276e1cu: goto label_276e1c;
        case 0x276e2cu: goto label_276e2c;
        case 0x276e40u: goto label_276e40;
        case 0x276e4cu: goto label_276e4c;
        case 0x276f70u: goto label_276f70;
        case 0x276f7cu: goto label_276f7c;
        case 0x276fccu: goto label_276fcc;
        default: break;
    }

    ctx->pc = 0x276d98u;

    // 0x276d98: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x276d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x276d9c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x276d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x276da0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x276da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x276da4: 0x25084b00  addiu       $t0, $t0, 0x4B00
    ctx->pc = 0x276da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19200));
    // 0x276da8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x276da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x276dac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x276dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276db0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x276db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x276db4: 0x26490090  addiu       $t1, $s2, 0x90
    ctx->pc = 0x276db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x276db8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x276db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x276dbc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x276dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dc0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x276dc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x276dc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x276dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dc8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x276dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x276dcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x276dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dd0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x276dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x276dd4: 0x85230002  lh          $v1, 0x2($t1)
    ctx->pc = 0x276dd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x276dd8: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x276dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x276ddc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x276ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x276de0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276de4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x276de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x276de8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x276de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x276dec: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x276decu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276df0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x276df0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276df4: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x276df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x276df8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x276df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x276dfc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x276dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276e00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276e04: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x276e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x276e08: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276e0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x276e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x276e10: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x276e10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x276e14: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x276E14u;
    SET_GPR_U32(ctx, 31, 0x276E1Cu);
    ctx->pc = 0x276E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E14u;
    // 0x276e18: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x276E14u, 0x276E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E1Cu;
label_276e1c:
    // 0x276e1c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x276e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276e20: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x276e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276e24: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x276E24u;
    SET_GPR_U32(ctx, 31, 0x276E2Cu);
    ctx->pc = 0x276E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E24u;
    // 0x276e28: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x276E24u, 0x276E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E2Cu;
label_276e2c:
    // 0x276e2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x276e2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x276e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e38: 0xc095106  jal         func_254418
    ctx->pc = 0x276E38u;
    SET_GPR_U32(ctx, 31, 0x276E40u);
    ctx->pc = 0x276E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E38u;
    // 0x276e3c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x276E38u, 0x276E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E40u;
label_276e40:
    // 0x276e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e44: 0xc095128  jal         func_2544A0
    ctx->pc = 0x276E44u;
    SET_GPR_U32(ctx, 31, 0x276E4Cu);
    ctx->pc = 0x276E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E44u;
    // 0x276e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x276E44u, 0x276E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E4Cu;
label_276e4c:
    // 0x276e4c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x276e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276e50: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x276e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276e54: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x276e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x276e58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x276e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276e5c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x276e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x276e60: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x276e60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x276e64: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x276e64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x276e68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x276e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x276e6c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x276e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x276e70: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x276e70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276e74: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x276e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x276e78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x276e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x276e7c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x276e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276e80: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x276e80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x276e84: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x276e84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x276e88: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x276e88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x276e8c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x276e8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x276e90: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x276e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x276e94: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x276e94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x276e98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x276e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276e9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x276e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x276ea0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x276ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276ea4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x276ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x276ea8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x276ea8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x276eac: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x276eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x276eb0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x276eb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276eb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276eb8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x276eb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x276ebc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x276ebcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276ec0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x276ec0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276ec4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x276ec4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x276ec8: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x276ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x276ecc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x276eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x276ed0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x276ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x276ed4: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x276ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x276ed8: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x276ED8u;
    {
        const bool branch_taken_0x276ed8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x276EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ED8u;
        // 0x276edc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ed8) {
            ctx->pc = 0x276F4Cu;
            goto label_276f4c;
        }
    }
    ctx->pc = 0x276EE0u;
    // 0x276ee0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x276ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x276ee4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x276ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x276ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276eec: 0x0  nop
    ctx->pc = 0x276eecu;
    // NOP
    // 0x276ef0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x276ef0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x276ef4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x276ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276ef8: 0x0  nop
    ctx->pc = 0x276ef8u;
    // NOP
    // 0x276efc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x276EFCu;
    {
        const bool branch_taken_0x276efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276efc) {
            ctx->pc = 0x276F18u;
            goto label_276f18;
        }
    }
    ctx->pc = 0x276F04u;
    // 0x276f04: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x276f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x276f08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x276f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x276f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276f10: 0x0  nop
    ctx->pc = 0x276f10u;
    // NOP
    // 0x276f14: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x276f14u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_276f18:
    // 0x276f18: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x276f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x276f1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x276f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x276f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276f24: 0x0  nop
    ctx->pc = 0x276f24u;
    // NOP
    // 0x276f28: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x276f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276f2c: 0x0  nop
    ctx->pc = 0x276f2cu;
    // NOP
    // 0x276f30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x276F30u;
    {
        const bool branch_taken_0x276f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276f30) {
            ctx->pc = 0x276F4Cu;
            goto label_276f4c;
        }
    }
    ctx->pc = 0x276F38u;
    // 0x276f38: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x276f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x276f3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x276f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x276f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276f44: 0x0  nop
    ctx->pc = 0x276f44u;
    // NOP
    // 0x276f48: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x276f48u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_276f4c:
    // 0x276f4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x276f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x276f50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x276f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x276f54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x276f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x276f58: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x276f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x276f5c: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x276f5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x276f60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x276f60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x276f64: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x276f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x276f68: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x276F68u;
    SET_GPR_U32(ctx, 31, 0x276F70u);
    ctx->pc = 0x276F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F68u;
    // 0x276f6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x276F68u, 0x276F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F70u;
label_276f70:
    // 0x276f70: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x276f70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x276f74: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x276F74u;
    SET_GPR_U32(ctx, 31, 0x276F7Cu);
    ctx->pc = 0x276F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F74u;
    // 0x276f78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x276F74u, 0x276F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F7Cu;
label_276f7c:
    // 0x276f7c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x276f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f84: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x276f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x276f88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x276f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276f90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x276f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x276f94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x276f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x276f98: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x276f98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x276f9c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x276f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x276fa0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x276fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x276fa4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x276fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x276fa8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x276fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x276fac: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x276facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x276fb0: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x276fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276fb4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x276fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276fb8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x276fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276fbc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x276fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x276fc0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x276fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x276fc4: 0xc0a00a8  jal         func_2802A0
    ctx->pc = 0x276FC4u;
    SET_GPR_U32(ctx, 31, 0x276FCCu);
    ctx->pc = 0x276FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FC4u;
    // 0x276fc8: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802A0u, 0x276FC4u, 0x276FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FCCu;
label_276fcc:
    // 0x276fcc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x276fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x276fd0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x276fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x276fd4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x276fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x276fd8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x276fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x276fdc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x276fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x276fe0: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x276fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x276fe4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x276fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x276FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FE8u;
        // 0x276fec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276FF0u;
}
