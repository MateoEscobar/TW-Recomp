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

// Function: sub_003F4950
// Address: 0x3f4950 - 0x3f4ba0
void sub_003F4950_0x3f4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4950_0x3f4950");
#endif

    switch (ctx->pc) {
        case 0x3f4b58u: goto label_3f4b58;
        case 0x3f4b70u: goto label_3f4b70;
        default: break;
    }

    ctx->pc = 0x3f4950u;

    // 0x3f4950: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3f4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3f4954: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3f4954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x3f4958: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3f4958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x3f495c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f495cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4960: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3f4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x3f4964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4968: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x3f4968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x3f496c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f4970: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x3f4970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x3f4974: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3F4974u;
    {
        const bool branch_taken_0x3f4974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4974u;
        // 0x3f4978: 0x9086002d  lbu         $a2, 0x2D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4974) {
            ctx->pc = 0x3F4A44u;
            goto label_3f4a44;
        }
    }
    ctx->pc = 0x3F497Cu;
    // 0x3f497c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f4980: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4980u;
    {
        const bool branch_taken_0x3f4980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f4980) {
            ctx->pc = 0x3F4984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4980u;
            // 0x3f4984: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F49A0u;
            goto label_3f49a0;
        }
    }
    ctx->pc = 0x3F4988u;
    // 0x3f4988: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3f4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3f498c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3f498cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3f4990: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3f4990u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x3f4994: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x3f4994u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3f4998: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3F4998u;
    {
        const bool branch_taken_0x3f4998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4998u;
        // 0x3f499c: 0x7e240020  sq          $a0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4998) {
            ctx->pc = 0x3F4A3Cu;
            goto label_3f4a3c;
        }
    }
    ctx->pc = 0x3F49A0u;
label_3f49a0:
    // 0x3f49a0: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x3f49a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f49a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f49a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3f49a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f49a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f49ac: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f49acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x3f49b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3f49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x3f49b4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3f49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3f49b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3f49b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3f49bc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3f49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x3f49c0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3f49c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f49c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F49C4u;
    {
        const bool branch_taken_0x3f49c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F49C4u;
        // 0x3f49c8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f49c4) {
            ctx->pc = 0x3F49E8u;
            goto label_3f49e8;
        }
    }
    ctx->pc = 0x3F49CCu;
    // 0x3f49cc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3f49ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3f49d0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3f49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3f49d4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x3f49d8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3f49dc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f49dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f49e0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f49e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3f49e4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f49e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f49e8:
    // 0x3f49e8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f49e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f49ec: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3f49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3f49f0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f49f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3f49f4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f49f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3f49f8: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x3f49f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3f49fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f49fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3f4a00: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f4a00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3f4a04: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f4a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f4a08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f4a0c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f4a0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f4a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a14: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f4a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f4a18: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f4a18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a1c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f4a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a20: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f4a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a24: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f4a24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4a28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f4a28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3f4a2c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3f4a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x3f4a30: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f4a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3f4a34: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3f4a38: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f4a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f4a3c:
    // 0x3f4a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4a40: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x3f4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_3f4a44:
    // 0x3f4a44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3f4a48: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x3f4a48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3f4a4c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3f4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3f4a50: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3f4a50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3f4a54: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3f4a54u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116C0u));
    // 0x3f4a58: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3f4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x3f4a5c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f4a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3f4a60: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4A60u;
    {
        const bool branch_taken_0x3f4a60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A60u;
        // 0x3f4a64: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a60) {
            ctx->pc = 0x3F4A78u;
            goto label_3f4a78;
        }
    }
    ctx->pc = 0x3F4A68u;
    // 0x3f4a68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f4a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3f4a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f4a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a70: 0x0  nop
    ctx->pc = 0x3f4a70u;
    // NOP
    // 0x3f4a74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3f4a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3f4a78:
    // 0x3f4a78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3f4a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4a7c: 0x14d20005  bne         $a2, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4A7Cu;
    {
        const bool branch_taken_0x3f4a7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        ctx->pc = 0x3F4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A7Cu;
        // 0x3f4a80: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a7c) {
            ctx->pc = 0x3F4A94u;
            goto label_3f4a94;
        }
    }
    ctx->pc = 0x3F4A84u;
    // 0x3f4a84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f4a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3f4a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f4a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a8c: 0x0  nop
    ctx->pc = 0x3f4a8cu;
    // NOP
    // 0x3f4a90: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3f4a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3f4a94:
    // 0x3f4a94: 0x14c40005  bne         $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4A94u;
    {
        const bool branch_taken_0x3f4a94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A94u;
        // 0x3f4a98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a94) {
            ctx->pc = 0x3F4AACu;
            goto label_3f4aac;
        }
    }
    ctx->pc = 0x3F4A9Cu;
    // 0x3f4a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f4a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3f4aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f4aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4aa4: 0x0  nop
    ctx->pc = 0x3f4aa4u;
    // NOP
    // 0x3f4aa8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3f4aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3f4aac:
    // 0x3f4aac: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4AACu;
    {
        const bool branch_taken_0x3f4aac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4AACu;
        // 0x3f4ab0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4aac) {
            ctx->pc = 0x3F4AC8u;
            goto label_3f4ac8;
        }
    }
    ctx->pc = 0x3F4AB4u;
    // 0x3f4ab4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f4ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3f4ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f4ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4abc: 0x0  nop
    ctx->pc = 0x3f4abcu;
    // NOP
    // 0x3f4ac0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3f4ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3f4ac4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f4ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4ac8:
    // 0x3f4ac8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f4ac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4acc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f4accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3f4ad0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f4ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3f4ad4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3f4ad8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f4ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3f4adc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f4adcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3f4ae0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f4ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4ae4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f4ae4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f4ae8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f4ae8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f4aec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f4aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4af0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f4af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4af4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f4af4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3f4af8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f4af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4afc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f4afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f4b00: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f4b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3f4b04: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f4b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4b08: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f4b08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f4b0c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f4b0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f4b10: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f4b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4b14: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f4b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f4b18: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f4b18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3f4b1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f4b20: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3f4b20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x3f4b24: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3f4b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x3f4b28: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3f4b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x3f4b2c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f4b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3f4b30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3f4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3f4b34: 0x9062002c  lbu         $v0, 0x2C($v1)
    ctx->pc = 0x3f4b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3f4b38: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4B38u;
    {
        const bool branch_taken_0x3f4b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f4b38) {
            ctx->pc = 0x3F4B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4B38u;
            // 0x3f4b3c: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4B4Cu;
            goto label_3f4b4c;
        }
    }
    ctx->pc = 0x3F4B40u;
    // 0x3f4b40: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x3f4b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4b44: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3f4b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3f4b48: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x3f4b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f4b4c:
    // 0x3f4b4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f4b50: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x3F4B50u;
    SET_GPR_U32(ctx, 31, 0x3F4B58u);
    ctx->pc = 0x3F4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B50u;
    // 0x3f4b54: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F4B50u, 0x3F4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B58u;
label_3f4b58:
    // 0x3f4b58: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f4b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f4b5c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3f4b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3f4b60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f4b64: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f4b68: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x3F4B68u;
    SET_GPR_U32(ctx, 31, 0x3F4B70u);
    ctx->pc = 0x3F4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B68u;
    // 0x3f4b6c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F4B68u, 0x3F4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B70u;
label_3f4b70:
    // 0x3f4b70: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f4b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f4b74: 0xa2320108  sb          $s2, 0x108($s1)
    ctx->pc = 0x3f4b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 18));
    // 0x3f4b78: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3f4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x3f4b7c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3f4b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3f4b80: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3f4b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3f4b84: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3f4b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3f4b88: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x3f4b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3f4b8c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f4b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3f4b90: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f4b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3f4b94: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B94u;
        // 0x3f4b98: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4B9Cu;
    // 0x3f4b9c: 0x0  nop
    ctx->pc = 0x3f4b9cu;
    // NOP
    ctx->pc = 0x3f4ba0u;
}
