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

// Function: sub_002B9B48
// Address: 0x2b9b48 - 0x2b9c68
void sub_002B9B48_0x2b9b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9B48_0x2b9b48");
#endif

    switch (ctx->pc) {
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9c14u: goto label_2b9c14;
        default: break;
    }

    ctx->pc = 0x2b9b48u;

    // 0x2b9b48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b9b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b9b4c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2b9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2b9b50: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b9b54: 0x2442fbb0  addiu       $v0, $v0, -0x450
    ctx->pc = 0x2b9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x2b9b58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b9b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b9b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b9b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b9b64: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b9b68: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2b9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2b9b6c: 0x240a002d  addiu       $t2, $zero, 0x2D
    ctx->pc = 0x2b9b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b9b70: 0xae290008  sw          $t1, 0x8($s1)
    ctx->pc = 0x2b9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 9));
    // 0x2b9b74: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b9b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2b9b78: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2b9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2b9b7c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2b9b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2b9b80: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2b9b80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9b84: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2b9b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9b88: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2b9b88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9b8c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b9b90: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x2b9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b9b94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b9b98: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2b9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2b9b9c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2b9b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b9ba0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x2b9ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x2b9ba4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2b9ba4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2b9ba8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2b9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2b9bac: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2b9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2b9bb0: 0xa2200054  sb          $zero, 0x54($s1)
    ctx->pc = 0x2b9bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9bb4: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x2b9bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x2b9bb8: 0xe62c0040  swc1        $f12, 0x40($s1)
    ctx->pc = 0x2b9bb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2b9bbc: 0xae290044  sw          $t1, 0x44($s1)
    ctx->pc = 0x2b9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 9));
    // 0x2b9bc0: 0xae2a0048  sw          $t2, 0x48($s1)
    ctx->pc = 0x2b9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 10));
    // 0x2b9bc4: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2B9BC4u;
    SET_GPR_U32(ctx, 31, 0x2B9BCCu);
    ctx->pc = 0x2B9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BC4u;
    // 0x2b9bc8: 0xa2280055  sb          $t0, 0x55($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2B9BC4u, 0x2B9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BCCu;
label_2b9bcc:
    // 0x2b9bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9bd0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9BD0u;
    {
        const bool branch_taken_0x2b9bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BD0u;
        // 0x2b9bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bd0) {
            ctx->pc = 0x2B9BECu;
            goto label_2b9bec;
        }
    }
    ctx->pc = 0x2B9BD8u;
    // 0x2b9bd8: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2B9BD8u;
    SET_GPR_U32(ctx, 31, 0x2B9BE0u);
    ctx->pc = 0x2B9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BD8u;
    // 0x2b9bdc: 0xa2220054  sb          $v0, 0x54($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2B9BD8u, 0x2B9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BE0u;
label_2b9be0:
    // 0x2b9be0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b9be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9be4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B9BE4u;
    {
        const bool branch_taken_0x2b9be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BE4u;
        // 0x2b9be8: 0x7e230030  sq          $v1, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9be4) {
            ctx->pc = 0x2B9C40u;
            goto label_2b9c40;
        }
    }
    ctx->pc = 0x2B9BECu;
label_2b9bec:
    // 0x2b9bec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b9becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9bf0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2b9bf4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2b9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2b9bf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9bfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b9c00: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x2b9c00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2b9c04: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2b9c04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b9c08: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b9c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b9c0c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2B9C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B9C14u);
    ctx->pc = 0x2B9C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C0Cu;
    // 0x2b9c10: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B9C0Cu, 0x2B9C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C14u;
label_2b9c14:
    // 0x2b9c14: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2b9c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9c18: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2b9c18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9c1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b9c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9c20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b9c20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b9c24: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b9c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b9c28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b9c28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b9c2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2b9c2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b9c30: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2b9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x2b9c34: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2b9c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2b9c38: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b9c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b9c3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b9c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2b9c40:
    // 0x2b9c40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b9c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9c44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b9c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b9c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b9c4c: 0x8c83021c  lw          $v1, 0x21C($a0)
    ctx->pc = 0x2b9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x2b9c50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b9c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b9c54: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x2b9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x2b9c58: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b9c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b9c5c: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x2b9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
    // 0x2b9c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C60u;
        // 0x2b9c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9C68u;
}
