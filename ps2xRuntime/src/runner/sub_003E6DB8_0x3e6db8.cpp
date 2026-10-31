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

// Function: sub_003E6DB8
// Address: 0x3e6db8 - 0x3e6e90
void sub_003E6DB8_0x3e6db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6DB8_0x3e6db8");
#endif

    switch (ctx->pc) {
        case 0x3e6db8u: goto label_3e6db8;
        case 0x3e6dbcu: goto label_3e6dbc;
        case 0x3e6dc0u: goto label_3e6dc0;
        case 0x3e6dc4u: goto label_3e6dc4;
        case 0x3e6dc8u: goto label_3e6dc8;
        case 0x3e6dccu: goto label_3e6dcc;
        case 0x3e6dd0u: goto label_3e6dd0;
        case 0x3e6dd4u: goto label_3e6dd4;
        case 0x3e6dd8u: goto label_3e6dd8;
        case 0x3e6ddcu: goto label_3e6ddc;
        case 0x3e6de0u: goto label_3e6de0;
        case 0x3e6de4u: goto label_3e6de4;
        case 0x3e6de8u: goto label_3e6de8;
        case 0x3e6decu: goto label_3e6dec;
        case 0x3e6df0u: goto label_3e6df0;
        case 0x3e6df4u: goto label_3e6df4;
        case 0x3e6df8u: goto label_3e6df8;
        case 0x3e6dfcu: goto label_3e6dfc;
        case 0x3e6e00u: goto label_3e6e00;
        case 0x3e6e04u: goto label_3e6e04;
        case 0x3e6e08u: goto label_3e6e08;
        case 0x3e6e0cu: goto label_3e6e0c;
        case 0x3e6e10u: goto label_3e6e10;
        case 0x3e6e14u: goto label_3e6e14;
        case 0x3e6e18u: goto label_3e6e18;
        case 0x3e6e1cu: goto label_3e6e1c;
        case 0x3e6e20u: goto label_3e6e20;
        case 0x3e6e24u: goto label_3e6e24;
        case 0x3e6e28u: goto label_3e6e28;
        case 0x3e6e2cu: goto label_3e6e2c;
        case 0x3e6e30u: goto label_3e6e30;
        case 0x3e6e34u: goto label_3e6e34;
        case 0x3e6e38u: goto label_3e6e38;
        case 0x3e6e3cu: goto label_3e6e3c;
        case 0x3e6e40u: goto label_3e6e40;
        case 0x3e6e44u: goto label_3e6e44;
        case 0x3e6e48u: goto label_3e6e48;
        case 0x3e6e4cu: goto label_3e6e4c;
        case 0x3e6e50u: goto label_3e6e50;
        case 0x3e6e54u: goto label_3e6e54;
        case 0x3e6e58u: goto label_3e6e58;
        case 0x3e6e5cu: goto label_3e6e5c;
        case 0x3e6e60u: goto label_3e6e60;
        case 0x3e6e64u: goto label_3e6e64;
        case 0x3e6e68u: goto label_3e6e68;
        case 0x3e6e6cu: goto label_3e6e6c;
        case 0x3e6e70u: goto label_3e6e70;
        case 0x3e6e74u: goto label_3e6e74;
        case 0x3e6e78u: goto label_3e6e78;
        case 0x3e6e7cu: goto label_3e6e7c;
        case 0x3e6e80u: goto label_3e6e80;
        case 0x3e6e84u: goto label_3e6e84;
        case 0x3e6e88u: goto label_3e6e88;
        case 0x3e6e8cu: goto label_3e6e8c;
        default: break;
    }

    ctx->pc = 0x3e6db8u;

label_3e6db8:
    // 0x3e6db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e6db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3e6dbc:
    // 0x3e6dbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e6dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e6dc0:
    // 0x3e6dc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e6dc4:
    // 0x3e6dc4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e6dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e6dc8:
    // 0x3e6dc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e6dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e6dcc:
    // 0x3e6dcc: 0x26101780  addiu       $s0, $s0, 0x1780
    ctx->pc = 0x3e6dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6016));
label_3e6dd0:
    // 0x3e6dd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e6dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e6dd4:
    // 0x3e6dd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e6dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e6dd8:
    // 0x3e6dd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e6dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ddc:
    // 0x3e6ddc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3e6ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3e6de0:
    // 0x3e6de0: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x3e6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e6de4:
    // 0x3e6de4: 0xc12e29c  jal         func_4B8A70
label_3e6de8:
    if (ctx->pc == 0x3E6DE8u) {
        ctx->pc = 0x3E6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6DE4u;
        // 0x3e6de8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6DECu;
        goto label_3e6dec;
    }
    ctx->pc = 0x3E6DE4u;
    SET_GPR_U32(ctx, 31, 0x3E6DECu);
    ctx->pc = 0x3E6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DE4u;
    // 0x3e6de8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E6DE4u, 0x3E6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DECu;
label_3e6dec:
    // 0x3e6dec: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x3e6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e6df0:
    // 0x3e6df0: 0xc12e310  jal         func_4B8C40
label_3e6df4:
    if (ctx->pc == 0x3E6DF4u) {
        ctx->pc = 0x3E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6DF0u;
        // 0x3e6df4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6DF8u;
        goto label_3e6df8;
    }
    ctx->pc = 0x3E6DF0u;
    SET_GPR_U32(ctx, 31, 0x3E6DF8u);
    ctx->pc = 0x3E6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DF0u;
    // 0x3e6df4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E6DF0u, 0x3E6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DF8u;
label_3e6df8:
    // 0x3e6df8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3e6df8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3e6dfc:
    // 0x3e6dfc: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3e6dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3e6e00:
    // 0x3e6e00: 0x34210481  ori         $at, $at, 0x481
    ctx->pc = 0x3e6e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1153);
label_3e6e04:
    // 0x3e6e04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e6e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e6e08:
    // 0x3e6e08: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e6e0c:
    // 0x3e6e0c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3e6e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3e6e10:
    // 0x3e6e10: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3e6e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3e6e14:
    // 0x3e6e14: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3e6e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e6e18:
    // 0x3e6e18: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e6e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6e1c:
    // 0x3e6e1c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e6e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6e20:
    // 0x3e6e20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3e6e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e6e24:
    // 0x3e6e24: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3e6e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e6e28:
    // 0x3e6e28: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3e6e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e6e2c:
    // 0x3e6e2c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e6e2cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e6e30:
    // 0x3e6e30: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e6e30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e6e34:
    // 0x3e6e34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e6e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e6e38:
    // 0x3e6e38: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3e6e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e6e3c:
    // 0x3e6e3c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3e6e3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e6e40:
    // 0x3e6e40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e6e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e6e44:
    // 0x3e6e44: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3e6e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e6e48:
    // 0x3e6e48: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3e6e48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e6e4c:
    // 0x3e6e4c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3e6e4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e6e50:
    // 0x3e6e50: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3e6e50u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3e6e54:
    // 0x3e6e54: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3e6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3e6e58:
    // 0x3e6e58: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3e6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3e6e5c:
    // 0x3e6e5c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3e6e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3e6e60:
    // 0x3e6e60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3e6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e6e64:
    // 0x3e6e64: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3e6e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3e6e68:
    // 0x3e6e68: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3e6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3e6e6c:
    // 0x3e6e6c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3e6e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3e6e70:
    // 0x3e6e70: 0x60f809  jalr        $v1
label_3e6e74:
    if (ctx->pc == 0x3E6E74u) {
        ctx->pc = 0x3E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E70u;
        // 0x3e6e74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6E78u;
        goto label_3e6e78;
    }
    ctx->pc = 0x3E6E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E6E78u);
        ctx->pc = 0x3E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E70u;
        // 0x3e6e74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6E70u, 0x3E6E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6E78u;
label_3e6e78:
    // 0x3e6e78: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e6e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e6e7c:
    // 0x3e6e7c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e6e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e6e80:
    // 0x3e6e80: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e6e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e6e84:
    // 0x3e6e84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e6e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e6e88:
    // 0x3e6e88: 0x3e00008  jr          $ra
label_3e6e8c:
    if (ctx->pc == 0x3E6E8Cu) {
        ctx->pc = 0x3E6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E88u;
        // 0x3e6e8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6E90u;
        goto label_fallthrough_0x3e6e88;
    }
    ctx->pc = 0x3E6E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E88u;
        // 0x3e6e8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e6e88:
    ctx->pc = 0x3E6E90u;
}
