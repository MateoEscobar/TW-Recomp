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

// Function: sub_003B0B50
// Address: 0x3b0b50 - 0x3b0cd0
void sub_003B0B50_0x3b0b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0B50_0x3b0b50");
#endif

    switch (ctx->pc) {
        case 0x3b0b50u: goto label_3b0b50;
        case 0x3b0b54u: goto label_3b0b54;
        case 0x3b0b58u: goto label_3b0b58;
        case 0x3b0b5cu: goto label_3b0b5c;
        case 0x3b0b60u: goto label_3b0b60;
        case 0x3b0b64u: goto label_3b0b64;
        case 0x3b0b68u: goto label_3b0b68;
        case 0x3b0b6cu: goto label_3b0b6c;
        case 0x3b0b70u: goto label_3b0b70;
        case 0x3b0b74u: goto label_3b0b74;
        case 0x3b0b78u: goto label_3b0b78;
        case 0x3b0b7cu: goto label_3b0b7c;
        case 0x3b0b80u: goto label_3b0b80;
        case 0x3b0b84u: goto label_3b0b84;
        case 0x3b0b88u: goto label_3b0b88;
        case 0x3b0b8cu: goto label_3b0b8c;
        case 0x3b0b90u: goto label_3b0b90;
        case 0x3b0b94u: goto label_3b0b94;
        case 0x3b0b98u: goto label_3b0b98;
        case 0x3b0b9cu: goto label_3b0b9c;
        case 0x3b0ba0u: goto label_3b0ba0;
        case 0x3b0ba4u: goto label_3b0ba4;
        case 0x3b0ba8u: goto label_3b0ba8;
        case 0x3b0bacu: goto label_3b0bac;
        case 0x3b0bb0u: goto label_3b0bb0;
        case 0x3b0bb4u: goto label_3b0bb4;
        case 0x3b0bb8u: goto label_3b0bb8;
        case 0x3b0bbcu: goto label_3b0bbc;
        case 0x3b0bc0u: goto label_3b0bc0;
        case 0x3b0bc4u: goto label_3b0bc4;
        case 0x3b0bc8u: goto label_3b0bc8;
        case 0x3b0bccu: goto label_3b0bcc;
        case 0x3b0bd0u: goto label_3b0bd0;
        case 0x3b0bd4u: goto label_3b0bd4;
        case 0x3b0bd8u: goto label_3b0bd8;
        case 0x3b0bdcu: goto label_3b0bdc;
        case 0x3b0be0u: goto label_3b0be0;
        case 0x3b0be4u: goto label_3b0be4;
        case 0x3b0be8u: goto label_3b0be8;
        case 0x3b0becu: goto label_3b0bec;
        case 0x3b0bf0u: goto label_3b0bf0;
        case 0x3b0bf4u: goto label_3b0bf4;
        case 0x3b0bf8u: goto label_3b0bf8;
        case 0x3b0bfcu: goto label_3b0bfc;
        case 0x3b0c00u: goto label_3b0c00;
        case 0x3b0c04u: goto label_3b0c04;
        case 0x3b0c08u: goto label_3b0c08;
        case 0x3b0c0cu: goto label_3b0c0c;
        case 0x3b0c10u: goto label_3b0c10;
        case 0x3b0c14u: goto label_3b0c14;
        case 0x3b0c18u: goto label_3b0c18;
        case 0x3b0c1cu: goto label_3b0c1c;
        case 0x3b0c20u: goto label_3b0c20;
        case 0x3b0c24u: goto label_3b0c24;
        case 0x3b0c28u: goto label_3b0c28;
        case 0x3b0c2cu: goto label_3b0c2c;
        case 0x3b0c30u: goto label_3b0c30;
        case 0x3b0c34u: goto label_3b0c34;
        case 0x3b0c38u: goto label_3b0c38;
        case 0x3b0c3cu: goto label_3b0c3c;
        case 0x3b0c40u: goto label_3b0c40;
        case 0x3b0c44u: goto label_3b0c44;
        case 0x3b0c48u: goto label_3b0c48;
        case 0x3b0c4cu: goto label_3b0c4c;
        case 0x3b0c50u: goto label_3b0c50;
        case 0x3b0c54u: goto label_3b0c54;
        case 0x3b0c58u: goto label_3b0c58;
        case 0x3b0c5cu: goto label_3b0c5c;
        case 0x3b0c60u: goto label_3b0c60;
        case 0x3b0c64u: goto label_3b0c64;
        case 0x3b0c68u: goto label_3b0c68;
        case 0x3b0c6cu: goto label_3b0c6c;
        case 0x3b0c70u: goto label_3b0c70;
        case 0x3b0c74u: goto label_3b0c74;
        case 0x3b0c78u: goto label_3b0c78;
        case 0x3b0c7cu: goto label_3b0c7c;
        case 0x3b0c80u: goto label_3b0c80;
        case 0x3b0c84u: goto label_3b0c84;
        case 0x3b0c88u: goto label_3b0c88;
        case 0x3b0c8cu: goto label_3b0c8c;
        case 0x3b0c90u: goto label_3b0c90;
        case 0x3b0c94u: goto label_3b0c94;
        case 0x3b0c98u: goto label_3b0c98;
        case 0x3b0c9cu: goto label_3b0c9c;
        case 0x3b0ca0u: goto label_3b0ca0;
        case 0x3b0ca4u: goto label_3b0ca4;
        case 0x3b0ca8u: goto label_3b0ca8;
        case 0x3b0cacu: goto label_3b0cac;
        case 0x3b0cb0u: goto label_3b0cb0;
        case 0x3b0cb4u: goto label_3b0cb4;
        case 0x3b0cb8u: goto label_3b0cb8;
        case 0x3b0cbcu: goto label_3b0cbc;
        case 0x3b0cc0u: goto label_3b0cc0;
        case 0x3b0cc4u: goto label_3b0cc4;
        case 0x3b0cc8u: goto label_3b0cc8;
        case 0x3b0cccu: goto label_3b0ccc;
        default: break;
    }

    ctx->pc = 0x3b0b50u;

label_3b0b50:
    // 0x3b0b50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b0b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3b0b54:
    // 0x3b0b54: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3b0b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3b0b58:
    // 0x3b0b58: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3b0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3b0b5c:
    // 0x3b0b5c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b0b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b0b60:
    // 0x3b0b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b64:
    // 0x3b0b64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0b68:
    // 0x3b0b68: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b0b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b0b6c:
    // 0x3b0b6c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0b70:
    // 0x3b0b70: 0x40f809  jalr        $v0
label_3b0b74:
    if (ctx->pc == 0x3B0B74u) {
        ctx->pc = 0x3B0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B70u;
        // 0x3b0b74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B78u;
        goto label_3b0b78;
    }
    ctx->pc = 0x3B0B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0B78u);
        ctx->pc = 0x3B0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B70u;
        // 0x3b0b74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0B70u, 0x3B0B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0B78u;
label_3b0b78:
    // 0x3b0b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b7c:
    // 0x3b0b7c: 0xc047e6c  jal         func_11F9B0
label_3b0b80:
    if (ctx->pc == 0x3B0B80u) {
        ctx->pc = 0x3B0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B7Cu;
        // 0x3b0b80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B84u;
        goto label_3b0b84;
    }
    ctx->pc = 0x3B0B7Cu;
    SET_GPR_U32(ctx, 31, 0x3B0B84u);
    ctx->pc = 0x3B0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B7Cu;
    // 0x3b0b80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3B0B7Cu, 0x3B0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B84u;
label_3b0b84:
    // 0x3b0b84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b0b88:
    // 0x3b0b88: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3b0b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3b0b8c:
    // 0x3b0b8c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3b0b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3b0b90:
    // 0x3b0b90: 0xa0f809  jalr        $a1
label_3b0b94:
    if (ctx->pc == 0x3B0B94u) {
        ctx->pc = 0x3B0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B90u;
        // 0x3b0b94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B98u;
        goto label_3b0b98;
    }
    ctx->pc = 0x3B0B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3B0B98u);
        ctx->pc = 0x3B0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B90u;
        // 0x3b0b94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0B90u, 0x3B0B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0B98u;
label_3b0b98:
    // 0x3b0b98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b0b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b0b9c:
    // 0x3b0b9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b0b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b0ba0:
    // 0x3b0ba0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3b0ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3b0ba4:
    // 0x3b0ba4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3b0ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3b0ba8:
    // 0x3b0ba8: 0xc0e8fcc  jal         func_3A3F30
label_3b0bac:
    if (ctx->pc == 0x3B0BACu) {
        ctx->pc = 0x3B0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BA8u;
        // 0x3b0bac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BB0u;
        goto label_3b0bb0;
    }
    ctx->pc = 0x3B0BA8u;
    SET_GPR_U32(ctx, 31, 0x3B0BB0u);
    ctx->pc = 0x3B0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BA8u;
    // 0x3b0bac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3B0BA8u, 0x3B0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BB0u;
label_3b0bb0:
    // 0x3b0bb0: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3b0bb0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0bb4:
    // 0x3b0bb4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b0bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0bb8:
    // 0x3b0bb8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3b0bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3b0bbc:
    // 0x3b0bbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b0bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b0bc0:
    // 0x3b0bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0bc4:
    // 0x3b0bc4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3b0bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3b0bc8:
    // 0x3b0bc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b0bc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0bcc:
    // 0x3b0bcc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0bccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0bd0:
    // 0x3b0bd0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0bd0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0bd4:
    // 0x3b0bd4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b0bd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0bd8:
    // 0x3b0bd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0bd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0bdc:
    // 0x3b0bdc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b0bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0be0:
    // 0x3b0be0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b0be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0be4:
    // 0x3b0be4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b0be4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0be8:
    // 0x3b0be8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b0be8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b0bec:
    // 0x3b0bec: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b0becu;
    // VWAITQ (Q already resolved in this runtime)
label_3b0bf0:
    // 0x3b0bf0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b0bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0bf4:
    // 0x3b0bf4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3b0bf4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0bf8:
    // 0x3b0bf8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b0bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b0bfc:
    // 0x3b0bfc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b0bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3b0c00:
    // 0x3b0c00: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b0c04:
    // 0x3b0c04: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3b0c04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3b0c08:
    // 0x3b0c08: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3b0c08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3b0c0c:
    // 0x3b0c0c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b0c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0c10:
    // 0x3b0c10: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3b0c10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0c14:
    // 0x3b0c14: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3b0c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3b0c18:
    // 0x3b0c18: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3b0c18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3b0c1c:
    // 0x3b0c1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b0c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0c20:
    // 0x3b0c20: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0c20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0c24:
    // 0x3b0c24: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0c24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0c28:
    // 0x3b0c28: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3b0c28u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0c2c:
    // 0x3b0c2c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b0c30:
    // 0x3b0c30: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3b0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_3b0c34:
    // 0x3b0c34: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b0c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b0c38:
    // 0x3b0c38: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3b0c38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
label_3b0c3c:
    // 0x3b0c3c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3b0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_3b0c40:
    // 0x3b0c40: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x3b0c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_3b0c44:
    // 0x3b0c44: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3b0c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3b0c48:
    // 0x3b0c48: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3b0c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3b0c4c:
    // 0x3b0c4c: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x3b0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_3b0c50:
    // 0x3b0c50: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3b0c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_3b0c54:
    // 0x3b0c54: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3b0c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3b0c58:
    // 0x3b0c58: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b0c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b0c5c:
    // 0x3b0c5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b0c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b0c60:
    // 0x3b0c60: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3b0c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0c64:
    // 0x3b0c64: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3b0c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3b0c68:
    // 0x3b0c68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b0c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b0c6c:
    // 0x3b0c6c: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x3b0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_3b0c70:
    // 0x3b0c70: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3b0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3b0c74:
    // 0x3b0c74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3b0c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3b0c78:
    // 0x3b0c78: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3b0c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3b0c7c:
    // 0x3b0c7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b0c80:
    // 0x3b0c80: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x3b0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_3b0c84:
    // 0x3b0c84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b0c88:
    // 0x3b0c88: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3b0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3b0c8c:
    // 0x3b0c8c: 0x9623006e  lhu         $v1, 0x6E($s1)
    ctx->pc = 0x3b0c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3b0c90:
    // 0x3b0c90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0c94:
    // 0x3b0c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b0c98:
    // 0x3b0c98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b0c9c:
    // 0x3b0c9c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3b0c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3b0ca0:
    // 0x3b0ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b0ca4:
    if (ctx->pc == 0x3B0CA4u) {
        ctx->pc = 0x3B0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CA0u;
        // 0x3b0ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CA8u;
        goto label_3b0ca8;
    }
    ctx->pc = 0x3B0CA0u;
    {
        const bool branch_taken_0x3b0ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CA0u;
        // 0x3b0ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ca0) {
            ctx->pc = 0x3B0CBCu;
            goto label_3b0cbc;
        }
    }
    ctx->pc = 0x3B0CA8u;
label_3b0ca8:
    // 0x3b0ca8: 0x922200b0  lbu         $v0, 0xB0($s1)
    ctx->pc = 0x3b0ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
label_3b0cac:
    // 0x3b0cac: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3b0cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3b0cb0:
    // 0x3b0cb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3b0cb4:
    if (ctx->pc == 0x3B0CB4u) {
        ctx->pc = 0x3B0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CB0u;
        // 0x3b0cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CB8u;
        goto label_3b0cb8;
    }
    ctx->pc = 0x3B0CB0u;
    {
        const bool branch_taken_0x3b0cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CB0u;
        // 0x3b0cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cb0) {
            ctx->pc = 0x3B0CBCu;
            goto label_3b0cbc;
        }
    }
    ctx->pc = 0x3B0CB8u;
label_3b0cb8:
    // 0x3b0cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0cbc:
    // 0x3b0cbc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3b0cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b0cc0:
    // 0x3b0cc0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3b0cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b0cc4:
    // 0x3b0cc4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b0cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b0cc8:
    // 0x3b0cc8: 0x3e00008  jr          $ra
label_3b0ccc:
    if (ctx->pc == 0x3B0CCCu) {
        ctx->pc = 0x3B0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CC8u;
        // 0x3b0ccc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CD0u;
        goto label_fallthrough_0x3b0cc8;
    }
    ctx->pc = 0x3B0CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CC8u;
        // 0x3b0ccc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b0cc8:
    ctx->pc = 0x3B0CD0u;
}
