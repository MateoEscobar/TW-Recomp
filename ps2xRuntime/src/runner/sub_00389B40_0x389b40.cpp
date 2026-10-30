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

// Function: sub_00389B40
// Address: 0x389b40 - 0x389d68
void sub_00389B40_0x389b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389B40_0x389b40");
#endif

    switch (ctx->pc) {
        case 0x389b40u: goto label_389b40;
        case 0x389b44u: goto label_389b44;
        case 0x389b48u: goto label_389b48;
        case 0x389b4cu: goto label_389b4c;
        case 0x389b50u: goto label_389b50;
        case 0x389b54u: goto label_389b54;
        case 0x389b58u: goto label_389b58;
        case 0x389b5cu: goto label_389b5c;
        case 0x389b60u: goto label_389b60;
        case 0x389b64u: goto label_389b64;
        case 0x389b68u: goto label_389b68;
        case 0x389b6cu: goto label_389b6c;
        case 0x389b70u: goto label_389b70;
        case 0x389b74u: goto label_389b74;
        case 0x389b78u: goto label_389b78;
        case 0x389b7cu: goto label_389b7c;
        case 0x389b80u: goto label_389b80;
        case 0x389b84u: goto label_389b84;
        case 0x389b88u: goto label_389b88;
        case 0x389b8cu: goto label_389b8c;
        case 0x389b90u: goto label_389b90;
        case 0x389b94u: goto label_389b94;
        case 0x389b98u: goto label_389b98;
        case 0x389b9cu: goto label_389b9c;
        case 0x389ba0u: goto label_389ba0;
        case 0x389ba4u: goto label_389ba4;
        case 0x389ba8u: goto label_389ba8;
        case 0x389bacu: goto label_389bac;
        case 0x389bb0u: goto label_389bb0;
        case 0x389bb4u: goto label_389bb4;
        case 0x389bb8u: goto label_389bb8;
        case 0x389bbcu: goto label_389bbc;
        case 0x389bc0u: goto label_389bc0;
        case 0x389bc4u: goto label_389bc4;
        case 0x389bc8u: goto label_389bc8;
        case 0x389bccu: goto label_389bcc;
        case 0x389bd0u: goto label_389bd0;
        case 0x389bd4u: goto label_389bd4;
        case 0x389bd8u: goto label_389bd8;
        case 0x389bdcu: goto label_389bdc;
        case 0x389be0u: goto label_389be0;
        case 0x389be4u: goto label_389be4;
        case 0x389be8u: goto label_389be8;
        case 0x389becu: goto label_389bec;
        case 0x389bf0u: goto label_389bf0;
        case 0x389bf4u: goto label_389bf4;
        case 0x389bf8u: goto label_389bf8;
        case 0x389bfcu: goto label_389bfc;
        case 0x389c00u: goto label_389c00;
        case 0x389c04u: goto label_389c04;
        case 0x389c08u: goto label_389c08;
        case 0x389c0cu: goto label_389c0c;
        case 0x389c10u: goto label_389c10;
        case 0x389c14u: goto label_389c14;
        case 0x389c18u: goto label_389c18;
        case 0x389c1cu: goto label_389c1c;
        case 0x389c20u: goto label_389c20;
        case 0x389c24u: goto label_389c24;
        case 0x389c28u: goto label_389c28;
        case 0x389c2cu: goto label_389c2c;
        case 0x389c30u: goto label_389c30;
        case 0x389c34u: goto label_389c34;
        case 0x389c38u: goto label_389c38;
        case 0x389c3cu: goto label_389c3c;
        case 0x389c40u: goto label_389c40;
        case 0x389c44u: goto label_389c44;
        case 0x389c48u: goto label_389c48;
        case 0x389c4cu: goto label_389c4c;
        case 0x389c50u: goto label_389c50;
        case 0x389c54u: goto label_389c54;
        case 0x389c58u: goto label_389c58;
        case 0x389c5cu: goto label_389c5c;
        case 0x389c60u: goto label_389c60;
        case 0x389c64u: goto label_389c64;
        case 0x389c68u: goto label_389c68;
        case 0x389c6cu: goto label_389c6c;
        case 0x389c70u: goto label_389c70;
        case 0x389c74u: goto label_389c74;
        case 0x389c78u: goto label_389c78;
        case 0x389c7cu: goto label_389c7c;
        case 0x389c80u: goto label_389c80;
        case 0x389c84u: goto label_389c84;
        case 0x389c88u: goto label_389c88;
        case 0x389c8cu: goto label_389c8c;
        case 0x389c90u: goto label_389c90;
        case 0x389c94u: goto label_389c94;
        case 0x389c98u: goto label_389c98;
        case 0x389c9cu: goto label_389c9c;
        case 0x389ca0u: goto label_389ca0;
        case 0x389ca4u: goto label_389ca4;
        case 0x389ca8u: goto label_389ca8;
        case 0x389cacu: goto label_389cac;
        case 0x389cb0u: goto label_389cb0;
        case 0x389cb4u: goto label_389cb4;
        case 0x389cb8u: goto label_389cb8;
        case 0x389cbcu: goto label_389cbc;
        case 0x389cc0u: goto label_389cc0;
        case 0x389cc4u: goto label_389cc4;
        case 0x389cc8u: goto label_389cc8;
        case 0x389cccu: goto label_389ccc;
        case 0x389cd0u: goto label_389cd0;
        case 0x389cd4u: goto label_389cd4;
        case 0x389cd8u: goto label_389cd8;
        case 0x389cdcu: goto label_389cdc;
        case 0x389ce0u: goto label_389ce0;
        case 0x389ce4u: goto label_389ce4;
        case 0x389ce8u: goto label_389ce8;
        case 0x389cecu: goto label_389cec;
        case 0x389cf0u: goto label_389cf0;
        case 0x389cf4u: goto label_389cf4;
        case 0x389cf8u: goto label_389cf8;
        case 0x389cfcu: goto label_389cfc;
        case 0x389d00u: goto label_389d00;
        case 0x389d04u: goto label_389d04;
        case 0x389d08u: goto label_389d08;
        case 0x389d0cu: goto label_389d0c;
        case 0x389d10u: goto label_389d10;
        case 0x389d14u: goto label_389d14;
        case 0x389d18u: goto label_389d18;
        case 0x389d1cu: goto label_389d1c;
        case 0x389d20u: goto label_389d20;
        case 0x389d24u: goto label_389d24;
        case 0x389d28u: goto label_389d28;
        case 0x389d2cu: goto label_389d2c;
        case 0x389d30u: goto label_389d30;
        case 0x389d34u: goto label_389d34;
        case 0x389d38u: goto label_389d38;
        case 0x389d3cu: goto label_389d3c;
        case 0x389d40u: goto label_389d40;
        case 0x389d44u: goto label_389d44;
        case 0x389d48u: goto label_389d48;
        case 0x389d4cu: goto label_389d4c;
        case 0x389d50u: goto label_389d50;
        case 0x389d54u: goto label_389d54;
        case 0x389d58u: goto label_389d58;
        case 0x389d5cu: goto label_389d5c;
        case 0x389d60u: goto label_389d60;
        case 0x389d64u: goto label_389d64;
        default: break;
    }

    ctx->pc = 0x389b40u;

label_389b40:
    // 0x389b40: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x389b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_389b44:
    // 0x389b44: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x389b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_389b48:
    // 0x389b48: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x389b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_389b4c:
    // 0x389b4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x389b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389b50:
    // 0x389b50: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x389b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_389b54:
    // 0x389b54: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x389b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_389b58:
    // 0x389b58: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x389b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_389b5c:
    // 0x389b5c: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x389b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_389b60:
    // 0x389b60: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x389b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_389b64:
    // 0x389b64: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x389b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_389b68:
    // 0x389b68: 0x92421308  lbu         $v0, 0x1308($s2)
    ctx->pc = 0x389b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4872)));
label_389b6c:
    // 0x389b6c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_389b70:
    if (ctx->pc == 0x389B70u) {
        ctx->pc = 0x389B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B6Cu;
        // 0x389b70: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389B74u;
        goto label_389b74;
    }
    ctx->pc = 0x389B6Cu;
    {
        const bool branch_taken_0x389b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B6Cu;
        // 0x389b70: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b6c) {
            ctx->pc = 0x389D44u;
            goto label_389d44;
        }
    }
    ctx->pc = 0x389B74u;
label_389b74:
    // 0x389b74: 0x8e421300  lw          $v0, 0x1300($s2)
    ctx->pc = 0x389b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
label_389b78:
    // 0x389b78: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_389b7c:
    if (ctx->pc == 0x389B7Cu) {
        ctx->pc = 0x389B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B78u;
        // 0x389b7c: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389B80u;
        goto label_389b80;
    }
    ctx->pc = 0x389B78u;
    {
        const bool branch_taken_0x389b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B78u;
        // 0x389b7c: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b78) {
            ctx->pc = 0x389D48u;
            goto label_389d48;
        }
    }
    ctx->pc = 0x389B80u;
label_389b80:
    // 0x389b80: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x389b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_389b84:
    // 0x389b84: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_389b88:
    if (ctx->pc == 0x389B88u) {
        ctx->pc = 0x389B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B84u;
        // 0x389b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389B8Cu;
        goto label_389b8c;
    }
    ctx->pc = 0x389B84u;
    {
        const bool branch_taken_0x389b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B84u;
        // 0x389b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b84) {
            ctx->pc = 0x389D48u;
            goto label_389d48;
        }
    }
    ctx->pc = 0x389B8Cu;
label_389b8c:
    // 0x389b8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x389b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_389b90:
    // 0x389b90: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x389b90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_389b94:
    // 0x389b94: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x389b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_389b98:
    // 0x389b98: 0x60f809  jalr        $v1
label_389b9c:
    if (ctx->pc == 0x389B9Cu) {
        ctx->pc = 0x389B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B98u;
        // 0x389b9c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389BA0u;
        goto label_389ba0;
    }
    ctx->pc = 0x389B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x389BA0u);
        ctx->pc = 0x389B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B98u;
        // 0x389b9c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389B98u, 0x389BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389BA0u;
label_389ba0:
    // 0x389ba0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x389ba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389ba4:
    // 0x389ba4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x389ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_389ba8:
    // 0x389ba8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x389ba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_389bac:
    // 0x389bac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x389bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_389bb0:
    // 0x389bb0: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x389bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389bb4:
    // 0x389bb4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x389bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389bb8:
    // 0x389bb8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x389bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389bbc:
    // 0x389bbc: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x389bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389bc0:
    // 0x389bc0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x389bc0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_389bc4:
    // 0x389bc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x389bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_389bc8:
    // 0x389bc8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x389bc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_389bcc:
    // 0x389bcc: 0x0  nop
    ctx->pc = 0x389bccu;
    // NOP
label_389bd0:
    // 0x389bd0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x389bd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_389bd4:
    // 0x389bd4: 0x0  nop
    ctx->pc = 0x389bd4u;
    // NOP
label_389bd8:
    // 0x389bd8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_389bdc:
    if (ctx->pc == 0x389BDCu) {
        ctx->pc = 0x389BE0u;
        goto label_389be0;
    }
    ctx->pc = 0x389BD8u;
    {
        const bool branch_taken_0x389bd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389bd8) {
            ctx->pc = 0x389C00u;
            goto label_389c00;
        }
    }
    ctx->pc = 0x389BE0u;
label_389be0:
    // 0x389be0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x389be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_389be4:
    // 0x389be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x389be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389be8:
    // 0x389be8: 0x0  nop
    ctx->pc = 0x389be8u;
    // NOP
label_389bec:
    // 0x389bec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x389becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_389bf0:
    // 0x389bf0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x389bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_389bf4:
    // 0x389bf4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x389bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_389bf8:
    // 0x389bf8: 0x1000000d  b           . + 4 + (0xD << 2)
label_389bfc:
    if (ctx->pc == 0x389BFCu) {
        ctx->pc = 0x389BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BF8u;
        // 0x389bfc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x389C00u;
        goto label_389c00;
    }
    ctx->pc = 0x389BF8u;
    {
        const bool branch_taken_0x389bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BF8u;
        // 0x389bfc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389bf8) {
            ctx->pc = 0x389C30u;
            goto label_389c30;
        }
    }
    ctx->pc = 0x389C00u;
label_389c00:
    // 0x389c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x389c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_389c04:
    // 0x389c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x389c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389c08:
    // 0x389c08: 0x0  nop
    ctx->pc = 0x389c08u;
    // NOP
label_389c0c:
    // 0x389c0c: 0x0  nop
    ctx->pc = 0x389c0cu;
    // NOP
label_389c10:
    // 0x389c10: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x389c10u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
label_389c14:
    // 0x389c14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x389c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_389c18:
    // 0x389c18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x389c18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_389c1c:
    // 0x389c1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x389c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_389c20:
    // 0x389c20: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x389c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_389c24:
    // 0x389c24: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x389c24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_389c28:
    // 0x389c28: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x389c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_389c2c:
    // 0x389c2c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x389c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_389c30:
    // 0x389c30: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x389c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_389c34:
    // 0x389c34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x389c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_389c38:
    // 0x389c38: 0xc0cda02  jal         func_336808
label_389c3c:
    if (ctx->pc == 0x389C3Cu) {
        ctx->pc = 0x389C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C38u;
        // 0x389c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389C40u;
        goto label_389c40;
    }
    ctx->pc = 0x389C38u;
    SET_GPR_U32(ctx, 31, 0x389C40u);
    ctx->pc = 0x389C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389C38u;
    // 0x389c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x389C38u, 0x389C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389C40u;
label_389c40:
    // 0x389c40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x389c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_389c44:
    // 0x389c44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x389c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_389c48:
    // 0x389c48: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x389c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_389c4c:
    // 0x389c4c: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x389c4cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_389c50:
    // 0x389c50: 0x7a090010  lq          $t1, 0x10($s0)
    ctx->pc = 0x389c50u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_389c54:
    // 0x389c54: 0x7a0a0020  lq          $t2, 0x20($s0)
    ctx->pc = 0x389c54u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_389c58:
    // 0x389c58: 0x7a0b0030  lq          $t3, 0x30($s0)
    ctx->pc = 0x389c58u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_389c5c:
    // 0x389c5c: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x389c5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_389c60:
    // 0x389c60: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x389c60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
label_389c64:
    // 0x389c64: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x389c64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
label_389c68:
    // 0x389c68: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x389c68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
label_389c6c:
    // 0x389c6c: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x389c6cu;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
label_389c70:
    // 0x389c70: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x389c70u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
label_389c74:
    // 0x389c74: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x389c74u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
label_389c78:
    // 0x389c78: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x389c78u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
label_389c7c:
    // 0x389c7c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x389c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
label_389c80:
    // 0x389c80: 0x7ca90010  sq          $t1, 0x10($a1)
    ctx->pc = 0x389c80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 9));
label_389c84:
    // 0x389c84: 0x7caa0020  sq          $t2, 0x20($a1)
    ctx->pc = 0x389c84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 10));
label_389c88:
    // 0x389c88: 0x7cab0030  sq          $t3, 0x30($a1)
    ctx->pc = 0x389c88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 11));
label_389c8c:
    // 0x389c8c: 0x8e441300  lw          $a0, 0x1300($s2)
    ctx->pc = 0x389c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
label_389c90:
    // 0x389c90: 0xc05c8e2  jal         func_172388
label_389c94:
    if (ctx->pc == 0x389C94u) {
        ctx->pc = 0x389C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C90u;
        // 0x389c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389C98u;
        goto label_389c98;
    }
    ctx->pc = 0x389C90u;
    SET_GPR_U32(ctx, 31, 0x389C98u);
    ctx->pc = 0x389C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389C90u;
    // 0x389c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172388u, 0x389C90u, 0x389C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389C98u;
label_389c98:
    // 0x389c98: 0x924212d4  lbu         $v0, 0x12D4($s2)
    ctx->pc = 0x389c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4820)));
label_389c9c:
    // 0x389c9c: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x389c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_389ca0:
    // 0x389ca0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_389ca4:
    if (ctx->pc == 0x389CA4u) {
        ctx->pc = 0x389CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CA0u;
        // 0x389ca4: 0x27b50134  addiu       $s5, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389CA8u;
        goto label_389ca8;
    }
    ctx->pc = 0x389CA0u;
    {
        const bool branch_taken_0x389ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CA0u;
        // 0x389ca4: 0x27b50134  addiu       $s5, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ca0) {
            ctx->pc = 0x389D00u;
            goto label_389d00;
        }
    }
    ctx->pc = 0x389CA8u;
label_389ca8:
    // 0x389ca8: 0x924212d6  lbu         $v0, 0x12D6($s2)
    ctx->pc = 0x389ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4822)));
label_389cac:
    // 0x389cac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_389cb0:
    if (ctx->pc == 0x389CB0u) {
        ctx->pc = 0x389CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CACu;
        // 0x389cb0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389CB4u;
        goto label_389cb4;
    }
    ctx->pc = 0x389CACu;
    {
        const bool branch_taken_0x389cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CACu;
        // 0x389cb0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389cac) {
            ctx->pc = 0x389D00u;
            goto label_389d00;
        }
    }
    ctx->pc = 0x389CB4u;
label_389cb4:
    // 0x389cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x389cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389cb8:
    // 0x389cb8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x389cb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389cbc:
    // 0x389cbc: 0xc0e1ca8  jal         func_3872A0
label_389cc0:
    if (ctx->pc == 0x389CC0u) {
        ctx->pc = 0x389CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CBCu;
        // 0x389cc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389CC4u;
        goto label_389cc4;
    }
    ctx->pc = 0x389CBCu;
    SET_GPR_U32(ctx, 31, 0x389CC4u);
    ctx->pc = 0x389CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389CBCu;
    // 0x389cc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3872A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3872A0u, 0x389CBCu, 0x389CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389CC4u;
label_389cc4:
    // 0x389cc4: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x389cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_389cc8:
    // 0x389cc8: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x389cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_389ccc:
    // 0x389ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x389cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389cd0:
    // 0x389cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x389cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_389cd4:
    // 0x389cd4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x389cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_389cd8:
    // 0x389cd8: 0xc0e1be8  jal         func_386FA0
label_389cdc:
    if (ctx->pc == 0x389CDCu) {
        ctx->pc = 0x389CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CD8u;
        // 0x389cdc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389CE0u;
        goto label_389ce0;
    }
    ctx->pc = 0x389CD8u;
    SET_GPR_U32(ctx, 31, 0x389CE0u);
    ctx->pc = 0x389CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389CD8u;
    // 0x389cdc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386FA0u, 0x389CD8u, 0x389CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389CE0u;
label_389ce0:
    // 0x389ce0: 0x8e441300  lw          $a0, 0x1300($s2)
    ctx->pc = 0x389ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
label_389ce4:
    // 0x389ce4: 0x26260016  addiu       $a2, $s1, 0x16
    ctx->pc = 0x389ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
label_389ce8:
    // 0x389ce8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x389ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_389cec:
    // 0x389cec: 0xc05c910  jal         func_172440
label_389cf0:
    if (ctx->pc == 0x389CF0u) {
        ctx->pc = 0x389CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CECu;
        // 0x389cf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389CF4u;
        goto label_389cf4;
    }
    ctx->pc = 0x389CECu;
    SET_GPR_U32(ctx, 31, 0x389CF4u);
    ctx->pc = 0x389CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389CECu;
    // 0x389cf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172440u, 0x389CECu, 0x389CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389CF4u;
label_389cf4:
    // 0x389cf4: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x389cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_389cf8:
    // 0x389cf8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_389cfc:
    if (ctx->pc == 0x389CFCu) {
        ctx->pc = 0x389CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CF8u;
        // 0x389cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D00u;
        goto label_389d00;
    }
    ctx->pc = 0x389CF8u;
    {
        const bool branch_taken_0x389cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CF8u;
        // 0x389cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389cf8) {
            ctx->pc = 0x389CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389cd0;
        }
    }
    ctx->pc = 0x389D00u;
label_389d00:
    // 0x389d00: 0xc0e85a2  jal         func_3A1688
label_389d04:
    if (ctx->pc == 0x389D04u) {
        ctx->pc = 0x389D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D00u;
        // 0x389d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D08u;
        goto label_389d08;
    }
    ctx->pc = 0x389D00u;
    SET_GPR_U32(ctx, 31, 0x389D08u);
    ctx->pc = 0x389D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389D00u;
    // 0x389d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x389D00u, 0x389D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389D08u;
label_389d08:
    // 0x389d08: 0x8e4412e8  lw          $a0, 0x12E8($s2)
    ctx->pc = 0x389d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4840)));
label_389d0c:
    // 0x389d0c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x389d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_389d10:
    // 0x389d10: 0x8e4512ec  lw          $a1, 0x12EC($s2)
    ctx->pc = 0x389d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4844)));
label_389d14:
    // 0x389d14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x389d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_389d18:
    // 0x389d18: 0xc64d0064  lwc1        $f13, 0x64($s2)
    ctx->pc = 0x389d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_389d1c:
    // 0x389d1c: 0xc0ce090  jal         func_338240
label_389d20:
    if (ctx->pc == 0x389D20u) {
        ctx->pc = 0x389D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D1Cu;
        // 0x389d20: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D24u;
        goto label_389d24;
    }
    ctx->pc = 0x389D1Cu;
    SET_GPR_U32(ctx, 31, 0x389D24u);
    ctx->pc = 0x389D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389D1Cu;
    // 0x389d20: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x389D1Cu, 0x389D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389D24u;
label_389d24:
    // 0x389d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x389d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_389d28:
    // 0x389d28: 0x8e421300  lw          $v0, 0x1300($s2)
    ctx->pc = 0x389d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
label_389d2c:
    // 0x389d2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x389d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_389d30:
    // 0x389d30: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_389d34:
    if (ctx->pc == 0x389D34u) {
        ctx->pc = 0x389D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D30u;
        // 0x389d34: 0xac440024  sw          $a0, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D38u;
        goto label_389d38;
    }
    ctx->pc = 0x389D30u;
    {
        const bool branch_taken_0x389d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D30u;
        // 0x389d34: 0xac440024  sw          $a0, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d30) {
            ctx->pc = 0x389D3Cu;
            goto label_389d3c;
        }
    }
    ctx->pc = 0x389D38u;
label_389d38:
    // 0x389d38: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x389d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_389d3c:
    // 0x389d3c: 0xa2401308  sb          $zero, 0x1308($s2)
    ctx->pc = 0x389d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4872), (uint8_t)GPR_U32(ctx, 0));
label_389d40:
    // 0x389d40: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x389d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_389d44:
    // 0x389d44: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x389d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_389d48:
    // 0x389d48: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x389d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_389d4c:
    // 0x389d4c: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x389d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_389d50:
    // 0x389d50: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x389d50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_389d54:
    // 0x389d54: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x389d54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_389d58:
    // 0x389d58: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x389d58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_389d5c:
    // 0x389d5c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x389d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_389d60:
    // 0x389d60: 0x3e00008  jr          $ra
label_389d64:
    if (ctx->pc == 0x389D64u) {
        ctx->pc = 0x389D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D60u;
        // 0x389d64: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D68u;
        goto label_fallthrough_0x389d60;
    }
    ctx->pc = 0x389D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D60u;
        // 0x389d64: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389d60:
    ctx->pc = 0x389D68u;
}
