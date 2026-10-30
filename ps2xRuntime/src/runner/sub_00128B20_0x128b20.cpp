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

// Function: sub_00128B20
// Address: 0x128b20 - 0x128cf0
void sub_00128B20_0x128b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128B20_0x128b20");
#endif

    switch (ctx->pc) {
        case 0x128b20u: goto label_128b20;
        case 0x128b24u: goto label_128b24;
        case 0x128b28u: goto label_128b28;
        case 0x128b2cu: goto label_128b2c;
        case 0x128b30u: goto label_128b30;
        case 0x128b34u: goto label_128b34;
        case 0x128b38u: goto label_128b38;
        case 0x128b3cu: goto label_128b3c;
        case 0x128b40u: goto label_128b40;
        case 0x128b44u: goto label_128b44;
        case 0x128b48u: goto label_128b48;
        case 0x128b4cu: goto label_128b4c;
        case 0x128b50u: goto label_128b50;
        case 0x128b54u: goto label_128b54;
        case 0x128b58u: goto label_128b58;
        case 0x128b5cu: goto label_128b5c;
        case 0x128b60u: goto label_128b60;
        case 0x128b64u: goto label_128b64;
        case 0x128b68u: goto label_128b68;
        case 0x128b6cu: goto label_128b6c;
        case 0x128b70u: goto label_128b70;
        case 0x128b74u: goto label_128b74;
        case 0x128b78u: goto label_128b78;
        case 0x128b7cu: goto label_128b7c;
        case 0x128b80u: goto label_128b80;
        case 0x128b84u: goto label_128b84;
        case 0x128b88u: goto label_128b88;
        case 0x128b8cu: goto label_128b8c;
        case 0x128b90u: goto label_128b90;
        case 0x128b94u: goto label_128b94;
        case 0x128b98u: goto label_128b98;
        case 0x128b9cu: goto label_128b9c;
        case 0x128ba0u: goto label_128ba0;
        case 0x128ba4u: goto label_128ba4;
        case 0x128ba8u: goto label_128ba8;
        case 0x128bacu: goto label_128bac;
        case 0x128bb0u: goto label_128bb0;
        case 0x128bb4u: goto label_128bb4;
        case 0x128bb8u: goto label_128bb8;
        case 0x128bbcu: goto label_128bbc;
        case 0x128bc0u: goto label_128bc0;
        case 0x128bc4u: goto label_128bc4;
        case 0x128bc8u: goto label_128bc8;
        case 0x128bccu: goto label_128bcc;
        case 0x128bd0u: goto label_128bd0;
        case 0x128bd4u: goto label_128bd4;
        case 0x128bd8u: goto label_128bd8;
        case 0x128bdcu: goto label_128bdc;
        case 0x128be0u: goto label_128be0;
        case 0x128be4u: goto label_128be4;
        case 0x128be8u: goto label_128be8;
        case 0x128becu: goto label_128bec;
        case 0x128bf0u: goto label_128bf0;
        case 0x128bf4u: goto label_128bf4;
        case 0x128bf8u: goto label_128bf8;
        case 0x128bfcu: goto label_128bfc;
        case 0x128c00u: goto label_128c00;
        case 0x128c04u: goto label_128c04;
        case 0x128c08u: goto label_128c08;
        case 0x128c0cu: goto label_128c0c;
        case 0x128c10u: goto label_128c10;
        case 0x128c14u: goto label_128c14;
        case 0x128c18u: goto label_128c18;
        case 0x128c1cu: goto label_128c1c;
        case 0x128c20u: goto label_128c20;
        case 0x128c24u: goto label_128c24;
        case 0x128c28u: goto label_128c28;
        case 0x128c2cu: goto label_128c2c;
        case 0x128c30u: goto label_128c30;
        case 0x128c34u: goto label_128c34;
        case 0x128c38u: goto label_128c38;
        case 0x128c3cu: goto label_128c3c;
        case 0x128c40u: goto label_128c40;
        case 0x128c44u: goto label_128c44;
        case 0x128c48u: goto label_128c48;
        case 0x128c4cu: goto label_128c4c;
        case 0x128c50u: goto label_128c50;
        case 0x128c54u: goto label_128c54;
        case 0x128c58u: goto label_128c58;
        case 0x128c5cu: goto label_128c5c;
        case 0x128c60u: goto label_128c60;
        case 0x128c64u: goto label_128c64;
        case 0x128c68u: goto label_128c68;
        case 0x128c6cu: goto label_128c6c;
        case 0x128c70u: goto label_128c70;
        case 0x128c74u: goto label_128c74;
        case 0x128c78u: goto label_128c78;
        case 0x128c7cu: goto label_128c7c;
        case 0x128c80u: goto label_128c80;
        case 0x128c84u: goto label_128c84;
        case 0x128c88u: goto label_128c88;
        case 0x128c8cu: goto label_128c8c;
        case 0x128c90u: goto label_128c90;
        case 0x128c94u: goto label_128c94;
        case 0x128c98u: goto label_128c98;
        case 0x128c9cu: goto label_128c9c;
        case 0x128ca0u: goto label_128ca0;
        case 0x128ca4u: goto label_128ca4;
        case 0x128ca8u: goto label_128ca8;
        case 0x128cacu: goto label_128cac;
        case 0x128cb0u: goto label_128cb0;
        case 0x128cb4u: goto label_128cb4;
        case 0x128cb8u: goto label_128cb8;
        case 0x128cbcu: goto label_128cbc;
        case 0x128cc0u: goto label_128cc0;
        case 0x128cc4u: goto label_128cc4;
        case 0x128cc8u: goto label_128cc8;
        case 0x128cccu: goto label_128ccc;
        case 0x128cd0u: goto label_128cd0;
        case 0x128cd4u: goto label_128cd4;
        case 0x128cd8u: goto label_128cd8;
        case 0x128cdcu: goto label_128cdc;
        case 0x128ce0u: goto label_128ce0;
        case 0x128ce4u: goto label_128ce4;
        case 0x128ce8u: goto label_128ce8;
        case 0x128cecu: goto label_128cec;
        default: break;
    }

    ctx->pc = 0x128b20u;

label_128b20:
    // 0x128b20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_128b24:
    // 0x128b24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x128b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_128b28:
    // 0x128b28: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x128b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_128b2c:
    // 0x128b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128b30:
    // 0x128b30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_128b34:
    // 0x128b34: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x128b34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_128b38:
    // 0x128b38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_128b3c:
    // 0x128b3c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x128b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_128b40:
    // 0x128b40: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x128b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_128b44:
    // 0x128b44: 0x40f809  jalr        $v0
label_128b48:
    if (ctx->pc == 0x128B48u) {
        ctx->pc = 0x128B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B44u;
        // 0x128b48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128B4Cu;
        goto label_128b4c;
    }
    ctx->pc = 0x128B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128B4Cu);
        ctx->pc = 0x128B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B44u;
        // 0x128b48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B44u, 0x128B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128B4Cu;
label_128b4c:
    // 0x128b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128b50:
    // 0x128b50: 0xc0cd8ec  jal         func_3363B0
label_128b54:
    if (ctx->pc == 0x128B54u) {
        ctx->pc = 0x128B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B50u;
        // 0x128b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128B58u;
        goto label_128b58;
    }
    ctx->pc = 0x128B50u;
    SET_GPR_U32(ctx, 31, 0x128B58u);
    ctx->pc = 0x128B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B50u;
    // 0x128b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x128B50u, 0x128B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B58u;
label_128b58:
    // 0x128b58: 0x8e030314  lw          $v1, 0x314($s0)
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_128b5c:
    // 0x128b5c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x128b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_128b60:
    // 0x128b60: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_128b64:
    // 0x128b64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x128b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_128b68:
    // 0x128b68: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x128b68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_128b6c:
    // 0x128b6c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x128b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_128b70:
    // 0x128b70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x128b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_128b74:
    // 0x128b74: 0xc0cd8ec  jal         func_3363B0
label_128b78:
    if (ctx->pc == 0x128B78u) {
        ctx->pc = 0x128B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B74u;
        // 0x128b78: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128B7Cu;
        goto label_128b7c;
    }
    ctx->pc = 0x128B74u;
    SET_GPR_U32(ctx, 31, 0x128B7Cu);
    ctx->pc = 0x128B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B74u;
    // 0x128b78: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x128B74u, 0x128B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B7Cu;
label_128b7c:
    // 0x128b7c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x128b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_128b80:
    // 0x128b80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x128b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128b84:
    // 0x128b84: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x128b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128b88:
    // 0x128b88: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x128b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128b8c:
    // 0x128b8c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x128b8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_128b90:
    // 0x128b90: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x128b90u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_128b94:
    // 0x128b94: 0x4a0003bf  vwaitq
    ctx->pc = 0x128b94u;
    // VWAITQ (Q already resolved in this runtime)
label_128b98:
    // 0x128b98: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x128b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_128b9c:
    // 0x128b9c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x128b9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_128ba0:
    // 0x128ba0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x128ba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_128ba4:
    // 0x128ba4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x128ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_128ba8:
    // 0x128ba8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x128ba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128bac:
    // 0x128bac: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x128bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128bb0:
    // 0x128bb0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x128bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128bb4:
    // 0x128bb4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x128bb4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_128bb8:
    // 0x128bb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_128bbc:
    // 0x128bbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x128bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_128bc0:
    // 0x128bc0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x128bc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128bc4:
    // 0x128bc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x128bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_128bc8:
    // 0x128bc8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x128bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128bcc:
    // 0x128bcc: 0x0  nop
    ctx->pc = 0x128bccu;
    // NOP
label_128bd0:
    // 0x128bd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_128bd4:
    if (ctx->pc == 0x128BD4u) {
        ctx->pc = 0x128BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BD0u;
        // 0x128bd4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128BD8u;
        goto label_128bd8;
    }
    ctx->pc = 0x128BD0u;
    {
        const bool branch_taken_0x128bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BD0u;
        // 0x128bd4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bd0) {
            ctx->pc = 0x128BE4u;
            goto label_128be4;
        }
    }
    ctx->pc = 0x128BD8u;
label_128bd8:
    // 0x128bd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x128bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128bdc:
    // 0x128bdc: 0x10000019  b           . + 4 + (0x19 << 2)
label_128be0:
    if (ctx->pc == 0x128BE0u) {
        ctx->pc = 0x128BE4u;
        goto label_128be4;
    }
    ctx->pc = 0x128BDCu;
    {
        const bool branch_taken_0x128bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128bdc) {
            ctx->pc = 0x128C44u;
            goto label_128c44;
        }
    }
    ctx->pc = 0x128BE4u;
label_128be4:
    // 0x128be4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x128be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_128be8:
    // 0x128be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128bec:
    // 0x128bec: 0x0  nop
    ctx->pc = 0x128becu;
    // NOP
label_128bf0:
    // 0x128bf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128bf4:
    // 0x128bf4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x128bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_128bf8:
    // 0x128bf8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x128bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_128bfc:
    // 0x128bfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x128bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128c00:
    // 0x128c00: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_128c04:
    if (ctx->pc == 0x128C04u) {
        ctx->pc = 0x128C08u;
        goto label_128c08;
    }
    ctx->pc = 0x128C00u;
    {
        const bool branch_taken_0x128c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128c00) {
            ctx->pc = 0x128C44u;
            goto label_128c44;
        }
    }
    ctx->pc = 0x128C08u;
label_128c08:
    // 0x128c08: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x128c08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_128c0c:
    // 0x128c0c: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x128c0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_128c10:
    // 0x128c10: 0x0  nop
    ctx->pc = 0x128c10u;
    // NOP
label_128c14:
    // 0x128c14: 0x0  nop
    ctx->pc = 0x128c14u;
    // NOP
label_128c18:
    // 0x128c18: 0x460c0304  c1          0xC0304
    ctx->pc = 0x128c18u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_128c1c:
    // 0x128c1c: 0x0  nop
    ctx->pc = 0x128c1cu;
    // NOP
label_128c20:
    // 0x128c20: 0x0  nop
    ctx->pc = 0x128c20u;
    // NOP
label_128c24:
    // 0x128c24: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x128c24u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_128c28:
    // 0x128c28: 0xc0cd5a8  jal         func_3356A0
label_128c2c:
    if (ctx->pc == 0x128C2Cu) {
        ctx->pc = 0x128C30u;
        goto label_128c30;
    }
    ctx->pc = 0x128C28u;
    SET_GPR_U32(ctx, 31, 0x128C30u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x128C28u, 0x128C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C30u;
label_128c30:
    // 0x128c30: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x128c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_128c34:
    // 0x128c34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x128c34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_128c38:
    // 0x128c38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128c3c:
    // 0x128c3c: 0x0  nop
    ctx->pc = 0x128c3cu;
    // NOP
label_128c40:
    // 0x128c40: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x128c40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128c44:
    // 0x128c44: 0x3c014027  lui         $at, 0x4027
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16423 << 16));
label_128c48:
    // 0x128c48: 0x34218d37  ori         $at, $at, 0x8D37
    ctx->pc = 0x128c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36151);
label_128c4c:
    // 0x128c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128c50:
    // 0x128c50: 0x0  nop
    ctx->pc = 0x128c50u;
    // NOP
label_128c54:
    // 0x128c54: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x128c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128c58:
    // 0x128c58: 0x0  nop
    ctx->pc = 0x128c58u;
    // NOP
label_128c5c:
    // 0x128c5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_128c60:
    if (ctx->pc == 0x128C60u) {
        ctx->pc = 0x128C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C5Cu;
        // 0x128c60: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x128C64u;
        goto label_128c64;
    }
    ctx->pc = 0x128C5Cu;
    {
        const bool branch_taken_0x128c5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C5Cu;
        // 0x128c60: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c5c) {
            ctx->pc = 0x128C70u;
            goto label_128c70;
        }
    }
    ctx->pc = 0x128C64u;
label_128c64:
    // 0x128c64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x128c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128c68:
    // 0x128c68: 0x1000000c  b           . + 4 + (0xC << 2)
label_128c6c:
    if (ctx->pc == 0x128C6Cu) {
        ctx->pc = 0x128C70u;
        goto label_128c70;
    }
    ctx->pc = 0x128C68u;
    {
        const bool branch_taken_0x128c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c68) {
            ctx->pc = 0x128C9Cu;
            goto label_128c9c;
        }
    }
    ctx->pc = 0x128C70u;
label_128c70:
    // 0x128c70: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x128c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128c74:
    // 0x128c74: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x128c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128c78:
    // 0x128c78: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x128c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_128c7c:
    // 0x128c7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x128c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_128c80:
    // 0x128c80: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x128c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_128c84:
    // 0x128c84: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x128c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_128c88:
    // 0x128c88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128c8c:
    // 0x128c8c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x128c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128c90:
    // 0x128c90: 0x0  nop
    ctx->pc = 0x128c90u;
    // NOP
label_128c94:
    // 0x128c94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_128c98:
    if (ctx->pc == 0x128C98u) {
        ctx->pc = 0x128C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C94u;
        // 0x128c98: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x128C9Cu;
        goto label_128c9c;
    }
    ctx->pc = 0x128C94u;
    {
        const bool branch_taken_0x128c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128c94) {
            ctx->pc = 0x128C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128C94u;
            // 0x128c98: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x128C9Cu;
            goto label_128c9c;
        }
    }
    ctx->pc = 0x128C9Cu;
label_128c9c:
    // 0x128c9c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x128c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_128ca0:
    // 0x128ca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128ca4:
    // 0x128ca4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x128ca4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_128ca8:
    // 0x128ca8: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x128ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128cac:
    // 0x128cac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_128cb0:
    // 0x128cb0: 0x8e040314  lw          $a0, 0x314($s0)
    ctx->pc = 0x128cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_128cb4:
    // 0x128cb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x128cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_128cb8:
    // 0x128cb8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x128cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_128cbc:
    // 0x128cbc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x128cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_128cc0:
    // 0x128cc0: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
label_128cc4:
    // 0x128cc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128cc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_128cc8:
    // 0x128cc8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_128ccc:
    // 0x128ccc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x128cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_128cd0:
    // 0x128cd0: 0xc0a67e6  jal         func_299F98
label_128cd4:
    if (ctx->pc == 0x128CD4u) {
        ctx->pc = 0x128CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CD0u;
        // 0x128cd4: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128CD8u;
        goto label_128cd8;
    }
    ctx->pc = 0x128CD0u;
    SET_GPR_U32(ctx, 31, 0x128CD8u);
    ctx->pc = 0x128CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CD0u;
    // 0x128cd4: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F98u, 0x128CD0u, 0x128CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CD8u;
label_128cd8:
    // 0x128cd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x128cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_128cdc:
    // 0x128cdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x128cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_128ce0:
    // 0x128ce0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x128ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_128ce4:
    // 0x128ce4: 0x3e00008  jr          $ra
label_128ce8:
    if (ctx->pc == 0x128CE8u) {
        ctx->pc = 0x128CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CE4u;
        // 0x128ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128CECu;
        goto label_128cec;
    }
    ctx->pc = 0x128CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CE4u;
        // 0x128ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128CECu;
label_128cec:
    // 0x128cec: 0x0  nop
    ctx->pc = 0x128cecu;
    // NOP
    ctx->pc = 0x128cf0u;
}
