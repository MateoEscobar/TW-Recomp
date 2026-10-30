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

// Function: sub_00221CD8
// Address: 0x221cd8 - 0x221dd8
void sub_00221CD8_0x221cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221CD8_0x221cd8");
#endif

    switch (ctx->pc) {
        case 0x221cd8u: goto label_221cd8;
        case 0x221cdcu: goto label_221cdc;
        case 0x221ce0u: goto label_221ce0;
        case 0x221ce4u: goto label_221ce4;
        case 0x221ce8u: goto label_221ce8;
        case 0x221cecu: goto label_221cec;
        case 0x221cf0u: goto label_221cf0;
        case 0x221cf4u: goto label_221cf4;
        case 0x221cf8u: goto label_221cf8;
        case 0x221cfcu: goto label_221cfc;
        case 0x221d00u: goto label_221d00;
        case 0x221d04u: goto label_221d04;
        case 0x221d08u: goto label_221d08;
        case 0x221d0cu: goto label_221d0c;
        case 0x221d10u: goto label_221d10;
        case 0x221d14u: goto label_221d14;
        case 0x221d18u: goto label_221d18;
        case 0x221d1cu: goto label_221d1c;
        case 0x221d20u: goto label_221d20;
        case 0x221d24u: goto label_221d24;
        case 0x221d28u: goto label_221d28;
        case 0x221d2cu: goto label_221d2c;
        case 0x221d30u: goto label_221d30;
        case 0x221d34u: goto label_221d34;
        case 0x221d38u: goto label_221d38;
        case 0x221d3cu: goto label_221d3c;
        case 0x221d40u: goto label_221d40;
        case 0x221d44u: goto label_221d44;
        case 0x221d48u: goto label_221d48;
        case 0x221d4cu: goto label_221d4c;
        case 0x221d50u: goto label_221d50;
        case 0x221d54u: goto label_221d54;
        case 0x221d58u: goto label_221d58;
        case 0x221d5cu: goto label_221d5c;
        case 0x221d60u: goto label_221d60;
        case 0x221d64u: goto label_221d64;
        case 0x221d68u: goto label_221d68;
        case 0x221d6cu: goto label_221d6c;
        case 0x221d70u: goto label_221d70;
        case 0x221d74u: goto label_221d74;
        case 0x221d78u: goto label_221d78;
        case 0x221d7cu: goto label_221d7c;
        case 0x221d80u: goto label_221d80;
        case 0x221d84u: goto label_221d84;
        case 0x221d88u: goto label_221d88;
        case 0x221d8cu: goto label_221d8c;
        case 0x221d90u: goto label_221d90;
        case 0x221d94u: goto label_221d94;
        case 0x221d98u: goto label_221d98;
        case 0x221d9cu: goto label_221d9c;
        case 0x221da0u: goto label_221da0;
        case 0x221da4u: goto label_221da4;
        case 0x221da8u: goto label_221da8;
        case 0x221dacu: goto label_221dac;
        case 0x221db0u: goto label_221db0;
        case 0x221db4u: goto label_221db4;
        case 0x221db8u: goto label_221db8;
        case 0x221dbcu: goto label_221dbc;
        case 0x221dc0u: goto label_221dc0;
        case 0x221dc4u: goto label_221dc4;
        case 0x221dc8u: goto label_221dc8;
        case 0x221dccu: goto label_221dcc;
        case 0x221dd0u: goto label_221dd0;
        case 0x221dd4u: goto label_221dd4;
        default: break;
    }

    ctx->pc = 0x221cd8u;

label_221cd8:
    // 0x221cd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_221cdc:
    // 0x221cdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x221cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_221ce0:
    // 0x221ce0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x221ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_221ce4:
    // 0x221ce4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x221ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_221ce8:
    // 0x221ce8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x221ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_221cec:
    // 0x221cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221cf0:
    // 0x221cf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x221cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_221cf4:
    // 0x221cf4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x221cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_221cf8:
    // 0x221cf8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x221cf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_221cfc:
    // 0x221cfc: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x221cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_221d00:
    // 0x221d00: 0x84e200a8  lh          $v0, 0xA8($a3)
    ctx->pc = 0x221d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 168)));
label_221d04:
    // 0x221d04: 0x8ce300ac  lw          $v1, 0xAC($a3)
    ctx->pc = 0x221d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
label_221d08:
    // 0x221d08: 0x60f809  jalr        $v1
label_221d0c:
    if (ctx->pc == 0x221D0Cu) {
        ctx->pc = 0x221D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D08u;
        // 0x221d0c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D10u;
        goto label_221d10;
    }
    ctx->pc = 0x221D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x221D10u);
        ctx->pc = 0x221D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D08u;
        // 0x221d0c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221D08u, 0x221D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221D10u;
label_221d10:
    // 0x221d10: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_221d14:
    // 0x221d14: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_221d18:
    // 0x221d18: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_221d1c:
    // 0x221d1c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x221d1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_221d20:
    // 0x221d20: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_221d24:
    // 0x221d24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_221d28:
    // 0x221d28: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x221d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_221d2c:
    // 0x221d2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x221d2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_221d30:
    // 0x221d30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x221d30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_221d34:
    // 0x221d34: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x221d34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221d38:
    // 0x221d38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x221d38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_221d3c:
    // 0x221d3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x221d3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_221d40:
    // 0x221d40: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x221d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_221d44:
    // 0x221d44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x221d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_221d48:
    // 0x221d48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x221d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_221d4c:
    // 0x221d4c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x221d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_221d50:
    // 0x221d50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x221d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_221d54:
    // 0x221d54: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x221d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221d58:
    // 0x221d58: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x221d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221d5c:
    // 0x221d5c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x221d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_221d60:
    // 0x221d60: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x221d60u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_221d64:
    // 0x221d64: 0x4a0003bf  vwaitq
    ctx->pc = 0x221d64u;
    // VWAITQ (Q already resolved in this runtime)
label_221d68:
    // 0x221d68: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x221d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_221d6c:
    // 0x221d6c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x221d6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_221d70:
    // 0x221d70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x221d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_221d74:
    // 0x221d74: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x221d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_221d78:
    // 0x221d78: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x221d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_221d7c:
    // 0x221d7c: 0xc0cd5ea  jal         func_3357A8
label_221d80:
    if (ctx->pc == 0x221D80u) {
        ctx->pc = 0x221D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D7Cu;
        // 0x221d80: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D84u;
        goto label_221d84;
    }
    ctx->pc = 0x221D7Cu;
    SET_GPR_U32(ctx, 31, 0x221D84u);
    ctx->pc = 0x221D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D7Cu;
    // 0x221d80: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x221D7Cu, 0x221D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D84u;
label_221d84:
    // 0x221d84: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_221d88:
    // 0x221d88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x221d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_221d8c:
    // 0x221d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_221d90:
    // 0x221d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221d94:
    // 0x221d94: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_221d98:
    if (ctx->pc == 0x221D98u) {
        ctx->pc = 0x221D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D94u;
        // 0x221d98: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D9Cu;
        goto label_221d9c;
    }
    ctx->pc = 0x221D94u;
    {
        const bool branch_taken_0x221d94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x221D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D94u;
        // 0x221d98: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d94) {
            ctx->pc = 0x221DB0u;
            goto label_221db0;
        }
    }
    ctx->pc = 0x221D9Cu;
label_221d9c:
    // 0x221d9c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x221d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_221da0:
    // 0x221da0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x221da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_221da4:
    // 0x221da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221da8:
    // 0x221da8: 0x0  nop
    ctx->pc = 0x221da8u;
    // NOP
label_221dac:
    // 0x221dac: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x221dacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_221db0:
    // 0x221db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221db4:
    // 0x221db4: 0xc08f3e2  jal         func_23CF88
label_221db8:
    if (ctx->pc == 0x221DB8u) {
        ctx->pc = 0x221DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB4u;
        // 0x221db8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DBCu;
        goto label_221dbc;
    }
    ctx->pc = 0x221DB4u;
    SET_GPR_U32(ctx, 31, 0x221DBCu);
    ctx->pc = 0x221DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DB4u;
    // 0x221db8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x221DB4u, 0x221DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DBCu;
label_221dbc:
    // 0x221dbc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x221dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_221dc0:
    // 0x221dc0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x221dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_221dc4:
    // 0x221dc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x221dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_221dc8:
    // 0x221dc8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x221dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_221dcc:
    // 0x221dcc: 0x3e00008  jr          $ra
label_221dd0:
    if (ctx->pc == 0x221DD0u) {
        ctx->pc = 0x221DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DCCu;
        // 0x221dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DD4u;
        goto label_221dd4;
    }
    ctx->pc = 0x221DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DCCu;
        // 0x221dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221DD4u;
label_221dd4:
    // 0x221dd4: 0x0  nop
    ctx->pc = 0x221dd4u;
    // NOP
    ctx->pc = 0x221dd8u;
}
