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

// Function: sub_003E8BB8
// Address: 0x3e8bb8 - 0x3e8ce0
void sub_003E8BB8_0x3e8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8BB8_0x3e8bb8");
#endif

    switch (ctx->pc) {
        case 0x3e8bb8u: goto label_3e8bb8;
        case 0x3e8bbcu: goto label_3e8bbc;
        case 0x3e8bc0u: goto label_3e8bc0;
        case 0x3e8bc4u: goto label_3e8bc4;
        case 0x3e8bc8u: goto label_3e8bc8;
        case 0x3e8bccu: goto label_3e8bcc;
        case 0x3e8bd0u: goto label_3e8bd0;
        case 0x3e8bd4u: goto label_3e8bd4;
        case 0x3e8bd8u: goto label_3e8bd8;
        case 0x3e8bdcu: goto label_3e8bdc;
        case 0x3e8be0u: goto label_3e8be0;
        case 0x3e8be4u: goto label_3e8be4;
        case 0x3e8be8u: goto label_3e8be8;
        case 0x3e8becu: goto label_3e8bec;
        case 0x3e8bf0u: goto label_3e8bf0;
        case 0x3e8bf4u: goto label_3e8bf4;
        case 0x3e8bf8u: goto label_3e8bf8;
        case 0x3e8bfcu: goto label_3e8bfc;
        case 0x3e8c00u: goto label_3e8c00;
        case 0x3e8c04u: goto label_3e8c04;
        case 0x3e8c08u: goto label_3e8c08;
        case 0x3e8c0cu: goto label_3e8c0c;
        case 0x3e8c10u: goto label_3e8c10;
        case 0x3e8c14u: goto label_3e8c14;
        case 0x3e8c18u: goto label_3e8c18;
        case 0x3e8c1cu: goto label_3e8c1c;
        case 0x3e8c20u: goto label_3e8c20;
        case 0x3e8c24u: goto label_3e8c24;
        case 0x3e8c28u: goto label_3e8c28;
        case 0x3e8c2cu: goto label_3e8c2c;
        case 0x3e8c30u: goto label_3e8c30;
        case 0x3e8c34u: goto label_3e8c34;
        case 0x3e8c38u: goto label_3e8c38;
        case 0x3e8c3cu: goto label_3e8c3c;
        case 0x3e8c40u: goto label_3e8c40;
        case 0x3e8c44u: goto label_3e8c44;
        case 0x3e8c48u: goto label_3e8c48;
        case 0x3e8c4cu: goto label_3e8c4c;
        case 0x3e8c50u: goto label_3e8c50;
        case 0x3e8c54u: goto label_3e8c54;
        case 0x3e8c58u: goto label_3e8c58;
        case 0x3e8c5cu: goto label_3e8c5c;
        case 0x3e8c60u: goto label_3e8c60;
        case 0x3e8c64u: goto label_3e8c64;
        case 0x3e8c68u: goto label_3e8c68;
        case 0x3e8c6cu: goto label_3e8c6c;
        case 0x3e8c70u: goto label_3e8c70;
        case 0x3e8c74u: goto label_3e8c74;
        case 0x3e8c78u: goto label_3e8c78;
        case 0x3e8c7cu: goto label_3e8c7c;
        case 0x3e8c80u: goto label_3e8c80;
        case 0x3e8c84u: goto label_3e8c84;
        case 0x3e8c88u: goto label_3e8c88;
        case 0x3e8c8cu: goto label_3e8c8c;
        case 0x3e8c90u: goto label_3e8c90;
        case 0x3e8c94u: goto label_3e8c94;
        case 0x3e8c98u: goto label_3e8c98;
        case 0x3e8c9cu: goto label_3e8c9c;
        case 0x3e8ca0u: goto label_3e8ca0;
        case 0x3e8ca4u: goto label_3e8ca4;
        case 0x3e8ca8u: goto label_3e8ca8;
        case 0x3e8cacu: goto label_3e8cac;
        case 0x3e8cb0u: goto label_3e8cb0;
        case 0x3e8cb4u: goto label_3e8cb4;
        case 0x3e8cb8u: goto label_3e8cb8;
        case 0x3e8cbcu: goto label_3e8cbc;
        case 0x3e8cc0u: goto label_3e8cc0;
        case 0x3e8cc4u: goto label_3e8cc4;
        case 0x3e8cc8u: goto label_3e8cc8;
        case 0x3e8cccu: goto label_3e8ccc;
        case 0x3e8cd0u: goto label_3e8cd0;
        case 0x3e8cd4u: goto label_3e8cd4;
        case 0x3e8cd8u: goto label_3e8cd8;
        case 0x3e8cdcu: goto label_3e8cdc;
        default: break;
    }

    ctx->pc = 0x3e8bb8u;

label_3e8bb8:
    // 0x3e8bb8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3e8bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3e8bbc:
    // 0x3e8bbc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3e8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3e8bc0:
    // 0x3e8bc0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3e8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3e8bc4:
    // 0x3e8bc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e8bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8bc8:
    // 0x3e8bc8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3e8bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3e8bcc:
    // 0x3e8bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8bd0:
    // 0x3e8bd0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3e8bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3e8bd4:
    // 0x3e8bd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8bd8:
    // 0x3e8bd8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8bdc:
    // 0x3e8bdc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8be0:
    // 0x3e8be0: 0x40f809  jalr        $v0
label_3e8be4:
    if (ctx->pc == 0x3E8BE4u) {
        ctx->pc = 0x3E8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BE0u;
        // 0x3e8be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8BE8u;
        goto label_3e8be8;
    }
    ctx->pc = 0x3E8BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8BE8u);
        ctx->pc = 0x3E8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BE0u;
        // 0x3e8be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8BE0u, 0x3E8BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8BE8u;
label_3e8be8:
    // 0x3e8be8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8bec:
    // 0x3e8bec: 0xc0ea14c  jal         func_3A8530
label_3e8bf0:
    if (ctx->pc == 0x3E8BF0u) {
        ctx->pc = 0x3E8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BECu;
        // 0x3e8bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8BF4u;
        goto label_3e8bf4;
    }
    ctx->pc = 0x3E8BECu;
    SET_GPR_U32(ctx, 31, 0x3E8BF4u);
    ctx->pc = 0x3E8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8BECu;
    // 0x3e8bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E8BECu, 0x3E8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8BF4u;
label_3e8bf4:
    // 0x3e8bf4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8bf8:
    // 0x3e8bf8: 0xc0ea12a  jal         func_3A84A8
label_3e8bfc:
    if (ctx->pc == 0x3E8BFCu) {
        ctx->pc = 0x3E8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BF8u;
        // 0x3e8bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8C00u;
        goto label_3e8c00;
    }
    ctx->pc = 0x3E8BF8u;
    SET_GPR_U32(ctx, 31, 0x3E8C00u);
    ctx->pc = 0x3E8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8BF8u;
    // 0x3e8bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8BF8u, 0x3E8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C00u;
label_3e8c00:
    // 0x3e8c00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8c04:
    // 0x3e8c04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8c08:
    // 0x3e8c08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8c0c:
    // 0x3e8c0c: 0xc0ea12a  jal         func_3A84A8
label_3e8c10:
    if (ctx->pc == 0x3E8C10u) {
        ctx->pc = 0x3E8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8C0Cu;
        // 0x3e8c10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8C14u;
        goto label_3e8c14;
    }
    ctx->pc = 0x3E8C0Cu;
    SET_GPR_U32(ctx, 31, 0x3E8C14u);
    ctx->pc = 0x3E8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C0Cu;
    // 0x3e8c10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8C0Cu, 0x3E8C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C14u;
label_3e8c14:
    // 0x3e8c14: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8c18:
    // 0x3e8c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8c1c:
    // 0x3e8c1c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3e8c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3e8c20:
    // 0x3e8c20: 0xc0e858c  jal         func_3A1630
label_3e8c24:
    if (ctx->pc == 0x3E8C24u) {
        ctx->pc = 0x3E8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8C20u;
        // 0x3e8c24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8C28u;
        goto label_3e8c28;
    }
    ctx->pc = 0x3E8C20u;
    SET_GPR_U32(ctx, 31, 0x3E8C28u);
    ctx->pc = 0x3E8C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C20u;
    // 0x3e8c24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E8C20u, 0x3E8C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C28u;
label_3e8c28:
    // 0x3e8c28: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3e8c28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8c2c:
    // 0x3e8c2c: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3e8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3e8c30:
    // 0x3e8c30: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e8c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e8c34:
    // 0x3e8c34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e8c38:
    // 0x3e8c38: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3e8c38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3e8c3c:
    // 0x3e8c3c: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3e8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3e8c40:
    // 0x3e8c40: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3e8c40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3e8c44:
    // 0x3e8c44: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e8c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8c48:
    // 0x3e8c48: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3e8c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_3e8c4c:
    // 0x3e8c4c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3e8c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3e8c50:
    // 0x3e8c50: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3e8c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3e8c54:
    // 0x3e8c54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e8c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e8c58:
    // 0x3e8c58: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3e8c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3e8c5c:
    // 0x3e8c5c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e8c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e8c60:
    // 0x3e8c60: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e8c60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e8c64:
    // 0x3e8c64: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e8c64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e8c68:
    // 0x3e8c68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e8c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e8c6c:
    // 0x3e8c6c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e8c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e8c70:
    // 0x3e8c70: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e8c70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e8c74:
    // 0x3e8c74: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e8c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e8c78:
    // 0x3e8c78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e8c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e8c7c:
    // 0x3e8c7c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e8c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e8c80:
    // 0x3e8c80: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e8c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e8c84:
    // 0x3e8c84: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e8c84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e8c88:
    // 0x3e8c88: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e8c88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e8c8c:
    // 0x3e8c8c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e8c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e8c90:
    // 0x3e8c90: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e8c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e8c94:
    // 0x3e8c94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e8c94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e8c98:
    // 0x3e8c98: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3e8c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3e8c9c:
    // 0x3e8c9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e8c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e8ca0:
    // 0x3e8ca0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e8ca4:
    // 0x3e8ca4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3e8ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3e8ca8:
    // 0x3e8ca8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3e8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e8cac:
    // 0x3e8cac: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3e8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3e8cb0:
    // 0x3e8cb0: 0xc136b24  jal         func_4DAC90
label_3e8cb4:
    if (ctx->pc == 0x3E8CB4u) {
        ctx->pc = 0x3E8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CB0u;
        // 0x3e8cb4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8CB8u;
        goto label_3e8cb8;
    }
    ctx->pc = 0x3E8CB0u;
    SET_GPR_U32(ctx, 31, 0x3E8CB8u);
    ctx->pc = 0x3E8CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8CB0u;
    // 0x3e8cb4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E8CB0u, 0x3E8CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8CB8u;
label_3e8cb8:
    // 0x3e8cb8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e8cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e8cbc:
    // 0x3e8cbc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3e8cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8cc0:
    // 0x3e8cc0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e8cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e8cc4:
    // 0x3e8cc4: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3e8cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3e8cc8:
    // 0x3e8cc8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e8ccc:
    // 0x3e8ccc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3e8cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e8cd0:
    // 0x3e8cd0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3e8cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e8cd4:
    // 0x3e8cd4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3e8cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3e8cd8:
    // 0x3e8cd8: 0x3e00008  jr          $ra
label_3e8cdc:
    if (ctx->pc == 0x3E8CDCu) {
        ctx->pc = 0x3E8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CD8u;
        // 0x3e8cdc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8CE0u;
        goto label_fallthrough_0x3e8cd8;
    }
    ctx->pc = 0x3E8CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CD8u;
        // 0x3e8cdc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e8cd8:
    ctx->pc = 0x3E8CE0u;
}
