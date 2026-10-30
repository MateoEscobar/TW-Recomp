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

// Function: sub_00229A10
// Address: 0x229a10 - 0x229aa8
void sub_00229A10_0x229a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229A10_0x229a10");
#endif

    switch (ctx->pc) {
        case 0x229a10u: goto label_229a10;
        case 0x229a14u: goto label_229a14;
        case 0x229a18u: goto label_229a18;
        case 0x229a1cu: goto label_229a1c;
        case 0x229a20u: goto label_229a20;
        case 0x229a24u: goto label_229a24;
        case 0x229a28u: goto label_229a28;
        case 0x229a2cu: goto label_229a2c;
        case 0x229a30u: goto label_229a30;
        case 0x229a34u: goto label_229a34;
        case 0x229a38u: goto label_229a38;
        case 0x229a3cu: goto label_229a3c;
        case 0x229a40u: goto label_229a40;
        case 0x229a44u: goto label_229a44;
        case 0x229a48u: goto label_229a48;
        case 0x229a4cu: goto label_229a4c;
        case 0x229a50u: goto label_229a50;
        case 0x229a54u: goto label_229a54;
        case 0x229a58u: goto label_229a58;
        case 0x229a5cu: goto label_229a5c;
        case 0x229a60u: goto label_229a60;
        case 0x229a64u: goto label_229a64;
        case 0x229a68u: goto label_229a68;
        case 0x229a6cu: goto label_229a6c;
        case 0x229a70u: goto label_229a70;
        case 0x229a74u: goto label_229a74;
        case 0x229a78u: goto label_229a78;
        case 0x229a7cu: goto label_229a7c;
        case 0x229a80u: goto label_229a80;
        case 0x229a84u: goto label_229a84;
        case 0x229a88u: goto label_229a88;
        case 0x229a8cu: goto label_229a8c;
        case 0x229a90u: goto label_229a90;
        case 0x229a94u: goto label_229a94;
        case 0x229a98u: goto label_229a98;
        case 0x229a9cu: goto label_229a9c;
        case 0x229aa0u: goto label_229aa0;
        case 0x229aa4u: goto label_229aa4;
        default: break;
    }

    ctx->pc = 0x229a10u;

label_229a10:
    // 0x229a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_229a14:
    // 0x229a14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x229a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229a18:
    // 0x229a18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x229a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_229a1c:
    // 0x229a1c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x229a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_229a20:
    // 0x229a20: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_229a24:
    if (ctx->pc == 0x229A24u) {
        ctx->pc = 0x229A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A20u;
        // 0x229a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A28u;
        goto label_229a28;
    }
    ctx->pc = 0x229A20u;
    {
        const bool branch_taken_0x229a20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A20u;
        // 0x229a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a20) {
            ctx->pc = 0x229A30u;
            goto label_229a30;
        }
    }
    ctx->pc = 0x229A28u;
label_229a28:
    // 0x229a28: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_229a2c:
    if (ctx->pc == 0x229A2Cu) {
        ctx->pc = 0x229A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A28u;
        // 0x229a2c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A30u;
        goto label_229a30;
    }
    ctx->pc = 0x229A28u;
    {
        const bool branch_taken_0x229a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a28) {
            ctx->pc = 0x229A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229A28u;
            // 0x229a2c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229A3Cu;
            goto label_229a3c;
        }
    }
    ctx->pc = 0x229A30u;
label_229a30:
    // 0x229a30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229a34:
    // 0x229a34: 0x10000017  b           . + 4 + (0x17 << 2)
label_229a38:
    if (ctx->pc == 0x229A38u) {
        ctx->pc = 0x229A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A34u;
        // 0x229a38: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A3Cu;
        goto label_229a3c;
    }
    ctx->pc = 0x229A34u;
    {
        const bool branch_taken_0x229a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A34u;
        // 0x229a38: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a34) {
            ctx->pc = 0x229A94u;
            goto label_229a94;
        }
    }
    ctx->pc = 0x229A3Cu;
label_229a3c:
    // 0x229a3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_229a40:
    // 0x229a40: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x229a40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_229a44:
    // 0x229a44: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x229a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_229a48:
    // 0x229a48: 0x60f809  jalr        $v1
label_229a4c:
    if (ctx->pc == 0x229A4Cu) {
        ctx->pc = 0x229A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A48u;
        // 0x229a4c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A50u;
        goto label_229a50;
    }
    ctx->pc = 0x229A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229A50u);
        ctx->pc = 0x229A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A48u;
        // 0x229a4c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A48u, 0x229A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229A50u;
label_229a50:
    // 0x229a50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x229a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229a54:
    // 0x229a54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x229a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_229a58:
    // 0x229a58: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x229a58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_229a5c:
    // 0x229a5c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x229a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_229a60:
    // 0x229a60: 0x60f809  jalr        $v1
label_229a64:
    if (ctx->pc == 0x229A64u) {
        ctx->pc = 0x229A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A60u;
        // 0x229a64: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A68u;
        goto label_229a68;
    }
    ctx->pc = 0x229A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229A68u);
        ctx->pc = 0x229A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A60u;
        // 0x229a64: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A60u, 0x229A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229A68u;
label_229a68:
    // 0x229a68: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x229a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_229a6c:
    // 0x229a6c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x229a6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_229a70:
    // 0x229a70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x229a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_229a74:
    // 0x229a74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x229a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_229a78:
    // 0x229a78: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x229a78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_229a7c:
    // 0x229a7c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x229a7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_229a80:
    // 0x229a80: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x229a80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_229a84:
    // 0x229a84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x229a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_229a88:
    // 0x229a88: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x229a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_229a8c:
    // 0x229a8c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x229a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229a90:
    // 0x229a90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x229a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_229a94:
    // 0x229a94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x229a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_229a98:
    // 0x229a98: 0x3e00008  jr          $ra
label_229a9c:
    if (ctx->pc == 0x229A9Cu) {
        ctx->pc = 0x229A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A98u;
        // 0x229a9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AA0u;
        goto label_229aa0;
    }
    ctx->pc = 0x229A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A98u;
        // 0x229a9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229AA0u;
label_229aa0:
    // 0x229aa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_229aa4:
    // 0x229aa4: 0x0  nop
    ctx->pc = 0x229aa4u;
    // NOP
    ctx->pc = 0x229aa8u;
}
