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

// Function: sub_00229AA8
// Address: 0x229aa8 - 0x229b60
void sub_00229AA8_0x229aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229AA8_0x229aa8");
#endif

    switch (ctx->pc) {
        case 0x229aa8u: goto label_229aa8;
        case 0x229aacu: goto label_229aac;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ab4u: goto label_229ab4;
        case 0x229ab8u: goto label_229ab8;
        case 0x229abcu: goto label_229abc;
        case 0x229ac0u: goto label_229ac0;
        case 0x229ac4u: goto label_229ac4;
        case 0x229ac8u: goto label_229ac8;
        case 0x229accu: goto label_229acc;
        case 0x229ad0u: goto label_229ad0;
        case 0x229ad4u: goto label_229ad4;
        case 0x229ad8u: goto label_229ad8;
        case 0x229adcu: goto label_229adc;
        case 0x229ae0u: goto label_229ae0;
        case 0x229ae4u: goto label_229ae4;
        case 0x229ae8u: goto label_229ae8;
        case 0x229aecu: goto label_229aec;
        case 0x229af0u: goto label_229af0;
        case 0x229af4u: goto label_229af4;
        case 0x229af8u: goto label_229af8;
        case 0x229afcu: goto label_229afc;
        case 0x229b00u: goto label_229b00;
        case 0x229b04u: goto label_229b04;
        case 0x229b08u: goto label_229b08;
        case 0x229b0cu: goto label_229b0c;
        case 0x229b10u: goto label_229b10;
        case 0x229b14u: goto label_229b14;
        case 0x229b18u: goto label_229b18;
        case 0x229b1cu: goto label_229b1c;
        case 0x229b20u: goto label_229b20;
        case 0x229b24u: goto label_229b24;
        case 0x229b28u: goto label_229b28;
        case 0x229b2cu: goto label_229b2c;
        case 0x229b30u: goto label_229b30;
        case 0x229b34u: goto label_229b34;
        case 0x229b38u: goto label_229b38;
        case 0x229b3cu: goto label_229b3c;
        case 0x229b40u: goto label_229b40;
        case 0x229b44u: goto label_229b44;
        case 0x229b48u: goto label_229b48;
        case 0x229b4cu: goto label_229b4c;
        case 0x229b50u: goto label_229b50;
        case 0x229b54u: goto label_229b54;
        case 0x229b58u: goto label_229b58;
        case 0x229b5cu: goto label_229b5c;
        default: break;
    }

    ctx->pc = 0x229aa8u;

label_229aa8:
    // 0x229aa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x229aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_229aac:
    // 0x229aac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x229aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229ab0:
    // 0x229ab0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x229ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_229ab4:
    // 0x229ab4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x229ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_229ab8:
    // 0x229ab8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_229abc:
    // 0x229abc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x229abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_229ac0:
    // 0x229ac0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x229ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_229ac4:
    // 0x229ac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_229ac8:
    // 0x229ac8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x229ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229acc:
    // 0x229acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229ad0:
    // 0x229ad0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x229ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_229ad4:
    // 0x229ad4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x229ad4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_229ad8:
    // 0x229ad8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x229ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_229adc:
    // 0x229adc: 0x40f809  jalr        $v0
label_229ae0:
    if (ctx->pc == 0x229AE0u) {
        ctx->pc = 0x229AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ADCu;
        // 0x229ae0: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AE4u;
        goto label_229ae4;
    }
    ctx->pc = 0x229ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229AE4u);
        ctx->pc = 0x229AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ADCu;
        // 0x229ae0: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229ADCu, 0x229AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229AE4u;
label_229ae4:
    // 0x229ae4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x229ae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_229ae8:
    // 0x229ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229aec:
    // 0x229aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229af0:
    // 0x229af0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229af4:
    // 0x229af4: 0xc089aa8  jal         func_226AA0
label_229af8:
    if (ctx->pc == 0x229AF8u) {
        ctx->pc = 0x229AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AF4u;
        // 0x229af8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AFCu;
        goto label_229afc;
    }
    ctx->pc = 0x229AF4u;
    SET_GPR_U32(ctx, 31, 0x229AFCu);
    ctx->pc = 0x229AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF4u;
    // 0x229af8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226AA0u, 0x229AF4u, 0x229AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AFCu;
label_229afc:
    // 0x229afc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x229afcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_229b00:
    // 0x229b00: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x229b00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_229b04:
    // 0x229b04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x229b04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_229b08:
    // 0x229b08: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x229b08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_229b0c:
    // 0x229b0c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x229b0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_229b10:
    // 0x229b10: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x229b10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_229b14:
    // 0x229b14: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x229b14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_229b18:
    // 0x229b18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x229b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_229b1c:
    // 0x229b1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x229b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_229b20:
    // 0x229b20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x229b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_229b24:
    // 0x229b24: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x229b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_229b28:
    // 0x229b28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x229b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_229b2c:
    // 0x229b2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x229b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_229b30:
    // 0x229b30: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x229b30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_229b34:
    // 0x229b34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x229b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_229b38:
    // 0x229b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229b3c:
    // 0x229b3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x229b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_229b40:
    // 0x229b40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_229b44:
    // 0x229b44: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x229b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_229b48:
    // 0x229b48: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x229b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_229b4c:
    // 0x229b4c: 0x3e00008  jr          $ra
label_229b50:
    if (ctx->pc == 0x229B50u) {
        ctx->pc = 0x229B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B4Cu;
        // 0x229b50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B54u;
        goto label_229b54;
    }
    ctx->pc = 0x229B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B4Cu;
        // 0x229b50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229B54u;
label_229b54:
    // 0x229b54: 0x0  nop
    ctx->pc = 0x229b54u;
    // NOP
label_229b58:
    // 0x229b58: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x229b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_229b5c:
    // 0x229b5c: 0x0  nop
    ctx->pc = 0x229b5cu;
    // NOP
    ctx->pc = 0x229b60u;
}
