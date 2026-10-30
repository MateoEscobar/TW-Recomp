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

// Function: sub_00125B60
// Address: 0x125b60 - 0x125c50
void sub_00125B60_0x125b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125B60_0x125b60");
#endif

    switch (ctx->pc) {
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        default: break;
    }

    ctx->pc = 0x125b60u;

label_125b60:
    // 0x125b60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_125b64:
    // 0x125b64: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x125b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_125b68:
    // 0x125b68: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x125b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_125b6c:
    // 0x125b6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125b70:
    // 0x125b70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x125b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_125b74:
    // 0x125b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125b78:
    // 0x125b78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x125b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_125b7c:
    // 0x125b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125b80:
    // 0x125b80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_125b84:
    // 0x125b84: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x125b84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_125b88:
    // 0x125b88: 0xc62203ac  lwc1        $f2, 0x3AC($s1)
    ctx->pc = 0x125b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125b8c:
    // 0x125b8c: 0xc62003b0  lwc1        $f0, 0x3B0($s1)
    ctx->pc = 0x125b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125b90:
    // 0x125b90: 0x46026329  min.s       $f12, $f12, $f2
    ctx->pc = 0x125b90u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[2]);
label_125b94:
    // 0x125b94: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x125b94u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
label_125b98:
    // 0x125b98: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
label_125b9c:
    if (ctx->pc == 0x125B9Cu) {
        ctx->pc = 0x125B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B98u;
        // 0x125b9c: 0xe62c03b4  swc1        $f12, 0x3B4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BA0u;
        goto label_125ba0;
    }
    ctx->pc = 0x125B98u;
    {
        const bool branch_taken_0x125b98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x125B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B98u;
        // 0x125b9c: 0xe62c03b4  swc1        $f12, 0x3B4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b98) {
            ctx->pc = 0x125C34u;
            goto label_125c34;
        }
    }
    ctx->pc = 0x125BA0u;
label_125ba0:
    // 0x125ba0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125ba4:
    // 0x125ba4: 0x26300260  addiu       $s0, $s1, 0x260
    ctx->pc = 0x125ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_125ba8:
    // 0x125ba8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125bac:
    // 0x125bac: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125bb0:
    // 0x125bb0: 0x40f809  jalr        $v0
label_125bb4:
    if (ctx->pc == 0x125BB4u) {
        ctx->pc = 0x125BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BB0u;
        // 0x125bb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BB8u;
        goto label_125bb8;
    }
    ctx->pc = 0x125BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125BB8u);
        ctx->pc = 0x125BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BB0u;
        // 0x125bb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BB0u, 0x125BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125BB8u;
label_125bb8:
    // 0x125bb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125bbc:
    // 0x125bbc: 0xc0cd8ec  jal         func_3363B0
label_125bc0:
    if (ctx->pc == 0x125BC0u) {
        ctx->pc = 0x125BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BBCu;
        // 0x125bc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BC4u;
        goto label_125bc4;
    }
    ctx->pc = 0x125BBCu;
    SET_GPR_U32(ctx, 31, 0x125BC4u);
    ctx->pc = 0x125BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125BBCu;
    // 0x125bc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x125BBCu, 0x125BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125BC4u;
label_125bc4:
    // 0x125bc4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_125bc8:
    // 0x125bc8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x125bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_125bcc:
    // 0x125bcc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_125bd0:
    // 0x125bd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x125bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125bd4:
    // 0x125bd4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x125bd4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_125bd8:
    // 0x125bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125bdc:
    // 0x125bdc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125be0:
    // 0x125be0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x125be0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_125be4:
    // 0x125be4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x125be4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_125be8:
    // 0x125be8: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x125be8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125bec:
    // 0x125bec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x125becu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_125bf0:
    // 0x125bf0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x125bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_125bf4:
    // 0x125bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125bf8:
    // 0x125bf8: 0xc04b642  jal         func_12D908
label_125bfc:
    if (ctx->pc == 0x125BFCu) {
        ctx->pc = 0x125BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF8u;
        // 0x125bfc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C00u;
        goto label_125c00;
    }
    ctx->pc = 0x125BF8u;
    SET_GPR_U32(ctx, 31, 0x125C00u);
    ctx->pc = 0x125BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125BF8u;
    // 0x125bfc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x125BF8u, 0x125C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C00u;
label_125c00:
    // 0x125c00: 0xc62c03b4  lwc1        $f12, 0x3B4($s1)
    ctx->pc = 0x125c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125c04:
    // 0x125c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125c08:
    // 0x125c08: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x125c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_125c0c:
    // 0x125c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125c10:
    // 0x125c10: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x125c10u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_125c14:
    // 0x125c14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x125c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125c18:
    // 0x125c18: 0x26270180  addiu       $a3, $s1, 0x180
    ctx->pc = 0x125c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_125c1c:
    // 0x125c1c: 0xc04b53a  jal         func_12D4E8
label_125c20:
    if (ctx->pc == 0x125C20u) {
        ctx->pc = 0x125C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C1Cu;
        // 0x125c20: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C24u;
        goto label_125c24;
    }
    ctx->pc = 0x125C1Cu;
    SET_GPR_U32(ctx, 31, 0x125C24u);
    ctx->pc = 0x125C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C1Cu;
    // 0x125c20: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x125C1Cu, 0x125C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C24u;
label_125c24:
    // 0x125c24: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x125c24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
label_125c28:
    // 0x125c28: 0x7e220250  sq          $v0, 0x250($s1)
    ctx->pc = 0x125c28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 592), GPR_VEC(ctx, 2));
label_125c2c:
    // 0x125c2c: 0x7e2201e0  sq          $v0, 0x1E0($s1)
    ctx->pc = 0x125c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 2));
label_125c30:
    // 0x125c30: 0x7e2202b0  sq          $v0, 0x2B0($s1)
    ctx->pc = 0x125c30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 688), GPR_VEC(ctx, 2));
label_125c34:
    // 0x125c34: 0xa2200466  sb          $zero, 0x466($s1)
    ctx->pc = 0x125c34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1126), (uint8_t)GPR_U32(ctx, 0));
label_125c38:
    // 0x125c38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x125c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_125c3c:
    // 0x125c3c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x125c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_125c40:
    // 0x125c40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x125c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125c44:
    // 0x125c44: 0x3e00008  jr          $ra
label_125c48:
    if (ctx->pc == 0x125C48u) {
        ctx->pc = 0x125C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C44u;
        // 0x125c48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C4Cu;
        goto label_125c4c;
    }
    ctx->pc = 0x125C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C44u;
        // 0x125c48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C4Cu;
label_125c4c:
    // 0x125c4c: 0x0  nop
    ctx->pc = 0x125c4cu;
    // NOP
    ctx->pc = 0x125c50u;
}
