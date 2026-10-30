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

// Function: sub_00221DD8
// Address: 0x221dd8 - 0x221ed0
void sub_00221DD8_0x221dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221DD8_0x221dd8");
#endif

    switch (ctx->pc) {
        case 0x221dd8u: goto label_221dd8;
        case 0x221ddcu: goto label_221ddc;
        case 0x221de0u: goto label_221de0;
        case 0x221de4u: goto label_221de4;
        case 0x221de8u: goto label_221de8;
        case 0x221decu: goto label_221dec;
        case 0x221df0u: goto label_221df0;
        case 0x221df4u: goto label_221df4;
        case 0x221df8u: goto label_221df8;
        case 0x221dfcu: goto label_221dfc;
        case 0x221e00u: goto label_221e00;
        case 0x221e04u: goto label_221e04;
        case 0x221e08u: goto label_221e08;
        case 0x221e0cu: goto label_221e0c;
        case 0x221e10u: goto label_221e10;
        case 0x221e14u: goto label_221e14;
        case 0x221e18u: goto label_221e18;
        case 0x221e1cu: goto label_221e1c;
        case 0x221e20u: goto label_221e20;
        case 0x221e24u: goto label_221e24;
        case 0x221e28u: goto label_221e28;
        case 0x221e2cu: goto label_221e2c;
        case 0x221e30u: goto label_221e30;
        case 0x221e34u: goto label_221e34;
        case 0x221e38u: goto label_221e38;
        case 0x221e3cu: goto label_221e3c;
        case 0x221e40u: goto label_221e40;
        case 0x221e44u: goto label_221e44;
        case 0x221e48u: goto label_221e48;
        case 0x221e4cu: goto label_221e4c;
        case 0x221e50u: goto label_221e50;
        case 0x221e54u: goto label_221e54;
        case 0x221e58u: goto label_221e58;
        case 0x221e5cu: goto label_221e5c;
        case 0x221e60u: goto label_221e60;
        case 0x221e64u: goto label_221e64;
        case 0x221e68u: goto label_221e68;
        case 0x221e6cu: goto label_221e6c;
        case 0x221e70u: goto label_221e70;
        case 0x221e74u: goto label_221e74;
        case 0x221e78u: goto label_221e78;
        case 0x221e7cu: goto label_221e7c;
        case 0x221e80u: goto label_221e80;
        case 0x221e84u: goto label_221e84;
        case 0x221e88u: goto label_221e88;
        case 0x221e8cu: goto label_221e8c;
        case 0x221e90u: goto label_221e90;
        case 0x221e94u: goto label_221e94;
        case 0x221e98u: goto label_221e98;
        case 0x221e9cu: goto label_221e9c;
        case 0x221ea0u: goto label_221ea0;
        case 0x221ea4u: goto label_221ea4;
        case 0x221ea8u: goto label_221ea8;
        case 0x221eacu: goto label_221eac;
        case 0x221eb0u: goto label_221eb0;
        case 0x221eb4u: goto label_221eb4;
        case 0x221eb8u: goto label_221eb8;
        case 0x221ebcu: goto label_221ebc;
        case 0x221ec0u: goto label_221ec0;
        case 0x221ec4u: goto label_221ec4;
        case 0x221ec8u: goto label_221ec8;
        case 0x221eccu: goto label_221ecc;
        default: break;
    }

    ctx->pc = 0x221dd8u;

label_221dd8:
    // 0x221dd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x221dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_221ddc:
    // 0x221ddc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x221ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_221de0:
    // 0x221de0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x221de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_221de4:
    // 0x221de4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x221de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_221de8:
    // 0x221de8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x221de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_221dec:
    // 0x221dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221df0:
    // 0x221df0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x221df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_221df4:
    // 0x221df4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x221df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_221df8:
    // 0x221df8: 0x84e200a8  lh          $v0, 0xA8($a3)
    ctx->pc = 0x221df8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 168)));
label_221dfc:
    // 0x221dfc: 0x8ce300ac  lw          $v1, 0xAC($a3)
    ctx->pc = 0x221dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
label_221e00:
    // 0x221e00: 0x60f809  jalr        $v1
label_221e04:
    if (ctx->pc == 0x221E04u) {
        ctx->pc = 0x221E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E00u;
        // 0x221e04: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E08u;
        goto label_221e08;
    }
    ctx->pc = 0x221E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x221E08u);
        ctx->pc = 0x221E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E00u;
        // 0x221e04: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E00u, 0x221E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221E08u;
label_221e08:
    // 0x221e08: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x221e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_221e0c:
    // 0x221e0c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x221e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_221e10:
    // 0x221e10: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x221e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_221e14:
    // 0x221e14: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x221e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_221e18:
    // 0x221e18: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x221e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_221e1c:
    // 0x221e1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x221e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_221e20:
    // 0x221e20: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x221e20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_221e24:
    // 0x221e24: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x221e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_221e28:
    // 0x221e28: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x221e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_221e2c:
    // 0x221e2c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x221e2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221e30:
    // 0x221e30: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x221e30u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_221e34:
    // 0x221e34: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x221e34u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_221e38:
    // 0x221e38: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x221e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_221e3c:
    // 0x221e3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x221e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_221e40:
    // 0x221e40: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x221e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_221e44:
    // 0x221e44: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x221e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_221e48:
    // 0x221e48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x221e48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_221e4c:
    // 0x221e4c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x221e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221e50:
    // 0x221e50: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x221e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221e54:
    // 0x221e54: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x221e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221e58:
    // 0x221e58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x221e58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_221e5c:
    // 0x221e5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x221e5cu;
    // VWAITQ (Q already resolved in this runtime)
label_221e60:
    // 0x221e60: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x221e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_221e64:
    // 0x221e64: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x221e64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_221e68:
    // 0x221e68: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x221e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_221e6c:
    // 0x221e6c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x221e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_221e70:
    // 0x221e70: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x221e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_221e74:
    // 0x221e74: 0xc0cd5ea  jal         func_3357A8
label_221e78:
    if (ctx->pc == 0x221E78u) {
        ctx->pc = 0x221E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E74u;
        // 0x221e78: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E7Cu;
        goto label_221e7c;
    }
    ctx->pc = 0x221E74u;
    SET_GPR_U32(ctx, 31, 0x221E7Cu);
    ctx->pc = 0x221E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E74u;
    // 0x221e78: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x221E74u, 0x221E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E7Cu;
label_221e7c:
    // 0x221e7c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x221e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_221e80:
    // 0x221e80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x221e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_221e84:
    // 0x221e84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_221e88:
    // 0x221e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221e8c:
    // 0x221e8c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_221e90:
    if (ctx->pc == 0x221E90u) {
        ctx->pc = 0x221E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E8Cu;
        // 0x221e90: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E94u;
        goto label_221e94;
    }
    ctx->pc = 0x221E8Cu;
    {
        const bool branch_taken_0x221e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x221E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E8Cu;
        // 0x221e90: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e8c) {
            ctx->pc = 0x221EA8u;
            goto label_221ea8;
        }
    }
    ctx->pc = 0x221E94u;
label_221e94:
    // 0x221e94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x221e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_221e98:
    // 0x221e98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x221e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_221e9c:
    // 0x221e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221ea0:
    // 0x221ea0: 0x0  nop
    ctx->pc = 0x221ea0u;
    // NOP
label_221ea4:
    // 0x221ea4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x221ea4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_221ea8:
    // 0x221ea8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x221ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_221eac:
    // 0x221eac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x221eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_221eb0:
    // 0x221eb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x221eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_221eb4:
    // 0x221eb4: 0xc08f3e2  jal         func_23CF88
label_221eb8:
    if (ctx->pc == 0x221EB8u) {
        ctx->pc = 0x221EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EB4u;
        // 0x221eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EBCu;
        goto label_221ebc;
    }
    ctx->pc = 0x221EB4u;
    SET_GPR_U32(ctx, 31, 0x221EBCu);
    ctx->pc = 0x221EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EB4u;
    // 0x221eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x221EB4u, 0x221EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EBCu;
label_221ebc:
    // 0x221ebc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x221ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_221ec0:
    // 0x221ec0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x221ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_221ec4:
    // 0x221ec4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x221ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_221ec8:
    // 0x221ec8: 0x3e00008  jr          $ra
label_221ecc:
    if (ctx->pc == 0x221ECCu) {
        ctx->pc = 0x221ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EC8u;
        // 0x221ecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221ED0u;
        goto label_fallthrough_0x221ec8;
    }
    ctx->pc = 0x221EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EC8u;
        // 0x221ecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x221ec8:
    ctx->pc = 0x221ED0u;
}
