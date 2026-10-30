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

// Function: sub_002D8B10
// Address: 0x2d8b10 - 0x2d8db0
void sub_002D8B10_0x2d8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8B10_0x2d8b10");
#endif

    switch (ctx->pc) {
        case 0x2d8b4cu: goto label_2d8b4c;
        case 0x2d8b5cu: goto label_2d8b5c;
        case 0x2d8b8cu: goto label_2d8b8c;
        case 0x2d8bb4u: goto label_2d8bb4;
        case 0x2d8c44u: goto label_2d8c44;
        case 0x2d8c88u: goto label_2d8c88;
        case 0x2d8c90u: goto label_2d8c90;
        case 0x2d8ca4u: goto label_2d8ca4;
        case 0x2d8cbcu: goto label_2d8cbc;
        case 0x2d8ce8u: goto label_2d8ce8;
        case 0x2d8cf8u: goto label_2d8cf8;
        case 0x2d8d48u: goto label_2d8d48;
        case 0x2d8d78u: goto label_2d8d78;
        case 0x2d8d94u: goto label_2d8d94;
        default: break;
    }

    ctx->pc = 0x2d8b10u;

    // 0x2d8b10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d8b14: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2d8b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2d8b18: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2d8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2d8b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b20: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d8b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d8b24: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2d8b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2d8b28: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2d8b28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8b2c: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x2d8b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d8b30: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D8B30u;
    {
        const bool branch_taken_0x2d8b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B30u;
        // 0x2d8b34: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b30) {
            ctx->pc = 0x2D8B94u;
            goto label_2d8b94;
        }
    }
    ctx->pc = 0x2D8B38u;
    // 0x2d8b38: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x2d8b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d8b3c: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2D8B3Cu;
    {
        const bool branch_taken_0x2d8b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B3Cu;
        // 0x2d8b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b3c) {
            ctx->pc = 0x2D8CB4u;
            goto label_2d8cb4;
        }
    }
    ctx->pc = 0x2D8B44u;
    // 0x2d8b44: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2D8B44u;
    SET_GPR_U32(ctx, 31, 0x2D8B4Cu);
    ctx->pc = 0x2D8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B44u;
    // 0x2d8b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D8B44u, 0x2D8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B4Cu;
label_2d8b4c:
    // 0x2d8b4c: 0x50400092  beql        $v0, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x2D8B4Cu;
    {
        const bool branch_taken_0x2d8b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b4c) {
            ctx->pc = 0x2D8B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8B4Cu;
            // 0x2d8b50: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D98u;
            goto label_2d8d98;
        }
    }
    ctx->pc = 0x2D8B54u;
    // 0x2d8b54: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D8B54u;
    SET_GPR_U32(ctx, 31, 0x2D8B5Cu);
    ctx->pc = 0x2D8B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B54u;
    // 0x2d8b58: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D8B54u, 0x2D8B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B5Cu;
label_2d8b5c:
    // 0x2d8b5c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D8B5Cu;
    {
        const bool branch_taken_0x2d8b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B5Cu;
        // 0x2d8b60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b5c) {
            ctx->pc = 0x2D8CA4u;
            goto label_2d8ca4;
        }
    }
    ctx->pc = 0x2D8B64u;
    // 0x2d8b64: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d8b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d8b68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d8b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d8b6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8b70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8b74: 0x2406029d  addiu       $a2, $zero, 0x29D
    ctx->pc = 0x2d8b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    // 0x2d8b78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8b7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d8b7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d8b80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d8b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8b84: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2D8B84u;
    SET_GPR_U32(ctx, 31, 0x2D8B8Cu);
    ctx->pc = 0x2D8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B84u;
    // 0x2d8b88: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D8B84u, 0x2D8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B8Cu;
label_2d8b8c:
    // 0x2d8b8c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2D8B8Cu;
    {
        const bool branch_taken_0x2d8b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B8Cu;
        // 0x2d8b90: 0x9202002e  lbu         $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b8c) {
            ctx->pc = 0x2D8CA8u;
            goto label_2d8ca8;
        }
    }
    ctx->pc = 0x2D8B94u;
label_2d8b94:
    // 0x2d8b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8b98: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D8B98u;
    {
        const bool branch_taken_0x2d8b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B98u;
        // 0x2d8b9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b98) {
            ctx->pc = 0x2D8CC4u;
            goto label_2d8cc4;
        }
    }
    ctx->pc = 0x2D8BA0u;
    // 0x2d8ba0: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x2d8ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d8ba4: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D8BA4u;
    {
        const bool branch_taken_0x2d8ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BA4u;
        // 0x2d8ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ba4) {
            ctx->pc = 0x2D8CB4u;
            goto label_2d8cb4;
        }
    }
    ctx->pc = 0x2D8BACu;
    // 0x2d8bac: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2D8BACu;
    SET_GPR_U32(ctx, 31, 0x2D8BB4u);
    ctx->pc = 0x2D8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BACu;
    // 0x2d8bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D8BACu, 0x2D8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BB4u;
label_2d8bb4:
    // 0x2d8bb4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2D8BB4u;
    {
        const bool branch_taken_0x2d8bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BB4u;
        // 0x2d8bb8: 0x26270090  addiu       $a3, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bb4) {
            ctx->pc = 0x2D8D94u;
            goto label_2d8d94;
        }
    }
    ctx->pc = 0x2D8BBCu;
    // 0x2d8bbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d8bc0: 0x84e40002  lh          $a0, 0x2($a3)
    ctx->pc = 0x2d8bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2d8bc4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2d8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2d8bc8: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2d8bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2d8bcc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d8bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d8bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d8bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8bd4: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2d8bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2d8bd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d8bd8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511740u));
    // 0x2d8bdc: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2d8bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2d8be0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d8be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d8be4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d8be8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d8be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d8bec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d8becu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d8bf0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d8bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d8bf4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2d8bf4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d8bf8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d8bfc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d8bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8c00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d8c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d8c04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d8c04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d8c08: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d8c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d8c0c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d8c0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d8c10: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d8c10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d8c14: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d8c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2d8c18: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2d8c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2d8c1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d8c20: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2d8c24: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2d8c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2d8c28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d8c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d8c2c: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x2d8c2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2d8c30: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d8c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d8c34: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d8c38: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d8c3c: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2D8C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D8C44u);
    ctx->pc = 0x2D8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C3Cu;
    // 0x2d8c40: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2D8C3Cu, 0x2D8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C44u;
label_2d8c44:
    // 0x2d8c44: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d8c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8c48: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x2d8c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x2d8c4c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2d8c4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8c50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d8c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d8c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d8c58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d8c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d8c5c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d8c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d8c60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d8c60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d8c64: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d8c64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d8c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8c70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d8c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2d8c74: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2d8c78: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d8c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2d8c7c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2d8c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d8c80: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x2D8C80u;
    SET_GPR_U32(ctx, 31, 0x2D8C88u);
    ctx->pc = 0x2D8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C80u;
    // 0x2d8c84: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2D8C80u, 0x2D8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C88u;
label_2d8c88:
    // 0x2d8c88: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D8C88u;
    SET_GPR_U32(ctx, 31, 0x2D8C90u);
    ctx->pc = 0x2D8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C88u;
    // 0x2d8c8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D8C88u, 0x2D8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C90u;
label_2d8c90:
    // 0x2d8c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8C90u;
    {
        const bool branch_taken_0x2d8c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C90u;
        // 0x2d8c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c90) {
            ctx->pc = 0x2D8CA4u;
            goto label_2d8ca4;
        }
    }
    ctx->pc = 0x2D8C98u;
    // 0x2d8c98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8c9c: 0xc0bebdc  jal         func_2FAF70
    ctx->pc = 0x2D8C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8CA4u);
    ctx->pc = 0x2D8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C9Cu;
    // 0x2d8ca0: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2D8C9Cu, 0x2D8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CA4u;
label_2d8ca4:
    // 0x2d8ca4: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x2d8ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_2d8ca8:
    // 0x2d8ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8cac: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2D8CACu;
    {
        const bool branch_taken_0x2d8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CACu;
        // 0x2d8cb0: 0xa202002e  sb          $v0, 0x2E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cac) {
            ctx->pc = 0x2D8D94u;
            goto label_2d8d94;
        }
    }
    ctx->pc = 0x2D8CB4u;
label_2d8cb4:
    // 0x2d8cb4: 0xc0b6278  jal         func_2D89E0
    ctx->pc = 0x2D8CB4u;
    SET_GPR_U32(ctx, 31, 0x2D8CBCu);
    ctx->pc = 0x2D8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CB4u;
    // 0x2d8cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D89E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D89E0u, 0x2D8CB4u, 0x2D8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CBCu;
label_2d8cbc:
    // 0x2d8cbc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D8CBCu;
    {
        const bool branch_taken_0x2d8cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CBCu;
        // 0x2d8cc0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cbc) {
            ctx->pc = 0x2D8D98u;
            goto label_2d8d98;
        }
    }
    ctx->pc = 0x2D8CC4u;
label_2d8cc4:
    // 0x2d8cc4: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D8CC4u;
    {
        const bool branch_taken_0x2d8cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8cc4) {
            ctx->pc = 0x2D8CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8CC4u;
            // 0x2d8cc8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D98u;
            goto label_2d8d98;
        }
    }
    ctx->pc = 0x2D8CCCu;
    // 0x2d8ccc: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x2d8cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d8cd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d8cd4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d8cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8cdc: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2d8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2d8ce0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D8CE0u;
    SET_GPR_U32(ctx, 31, 0x2D8CE8u);
    ctx->pc = 0x2D8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CE0u;
    // 0x2d8ce4: 0xa202002e  sb          $v0, 0x2E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D8CE0u, 0x2D8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CE8u;
label_2d8ce8:
    // 0x2d8ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d8cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cf0: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2D8CF0u;
    SET_GPR_U32(ctx, 31, 0x2D8CF8u);
    ctx->pc = 0x2D8CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CF0u;
    // 0x2d8cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D8CF0u, 0x2D8CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CF8u;
label_2d8cf8:
    // 0x2d8cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cfc: 0x9203002e  lbu         $v1, 0x2E($s0)
    ctx->pc = 0x2d8cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d8d00: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2d8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d8d04: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8D04u;
    {
        const bool branch_taken_0x2d8d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D04u;
        // 0x2d8d08: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d04) {
            ctx->pc = 0x2D8D50u;
            goto label_2d8d50;
        }
    }
    ctx->pc = 0x2D8D0Cu;
    // 0x2d8d0c: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D8D0Cu;
    {
        const bool branch_taken_0x2d8d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D0Cu;
        // 0x2d8d10: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d0c) {
            ctx->pc = 0x2D8D94u;
            goto label_2d8d94;
        }
    }
    ctx->pc = 0x2D8D14u;
    // 0x2d8d14: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2d8d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2d8d18: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2d8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2d8d1c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2d8d20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8d24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d8d28: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x2d8d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    // 0x2d8d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8d30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d8d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d8d34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8d38: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2d8d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2d8d3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d40: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x2D8D40u;
    SET_GPR_U32(ctx, 31, 0x2D8D48u);
    ctx->pc = 0x2D8D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D40u;
    // 0x2d8d44: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2D8D40u, 0x2D8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D48u;
label_2d8d48:
    // 0x2d8d48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8D48u;
    {
        const bool branch_taken_0x2d8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D48u;
        // 0x2d8d4c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d48) {
            ctx->pc = 0x2D8D98u;
            goto label_2d8d98;
        }
    }
    ctx->pc = 0x2D8D50u;
label_2d8d50:
    // 0x2d8d50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8D50u;
    {
        const bool branch_taken_0x2d8d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D50u;
        // 0x2d8d54: 0x2c62002d  sltiu       $v0, $v1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d50) {
            ctx->pc = 0x2D8D80u;
            goto label_2d8d80;
        }
    }
    ctx->pc = 0x2D8D58u;
    // 0x2d8d58: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D8D58u;
    {
        const bool branch_taken_0x2d8d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D58u;
        // 0x2d8d5c: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d58) {
            ctx->pc = 0x2D8D94u;
            goto label_2d8d94;
        }
    }
    ctx->pc = 0x2D8D60u;
    // 0x2d8d60: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d8d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2d8d64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d6c: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2d8d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2d8d70: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2D8D70u;
    SET_GPR_U32(ctx, 31, 0x2D8D78u);
    ctx->pc = 0x2D8D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D70u;
    // 0x2d8d74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D8D70u, 0x2D8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D78u;
label_2d8d78:
    // 0x2d8d78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8D78u;
    {
        const bool branch_taken_0x2d8d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D78u;
        // 0x2d8d7c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d78) {
            ctx->pc = 0x2D8D98u;
            goto label_2d8d98;
        }
    }
    ctx->pc = 0x2D8D80u;
label_2d8d80:
    // 0x2d8d80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8D80u;
    {
        const bool branch_taken_0x2d8d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d80) {
            ctx->pc = 0x2D8D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8D80u;
            // 0x2d8d84: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D98u;
            goto label_2d8d98;
        }
    }
    ctx->pc = 0x2D8D88u;
    // 0x2d8d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d8c: 0xc0b6278  jal         func_2D89E0
    ctx->pc = 0x2D8D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D8D94u);
    ctx->pc = 0x2D8D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D8Cu;
    // 0x2d8d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D89E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D89E0u, 0x2D8D8Cu, 0x2D8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D94u;
label_2d8d94:
    // 0x2d8d94: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2d8d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d8d98:
    // 0x2d8d98: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2d8d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8d9c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2d8d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8da0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d8da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DA4u;
        // 0x2d8da8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8DACu;
    // 0x2d8dac: 0x0  nop
    ctx->pc = 0x2d8dacu;
    // NOP
    ctx->pc = 0x2d8db0u;
}
