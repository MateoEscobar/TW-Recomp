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

// Function: sub_00166B60
// Address: 0x166b60 - 0x166cf8
void sub_00166B60_0x166b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166B60_0x166b60");
#endif

    switch (ctx->pc) {
        case 0x166bc0u: goto label_166bc0;
        case 0x166bc8u: goto label_166bc8;
        case 0x166bd0u: goto label_166bd0;
        case 0x166be4u: goto label_166be4;
        case 0x166bf4u: goto label_166bf4;
        default: break;
    }

    ctx->pc = 0x166b60u;

    // 0x166b60: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x166b64: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x166b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x166b68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166b6c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x166b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x166b70: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
    // 0x166b74: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x166b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x166b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x166b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166b7c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x166b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x166b80: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x166b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x166b84: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x166b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x166b88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x166b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x166b90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x166b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b94: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x166b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x166b98: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x166b98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x166b9c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x166b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x166ba0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x166ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x166ba4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x166ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x166ba8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x166ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x166bac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x166bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x166bb0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x166bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x166bb4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x166bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x166bb8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x166bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x166bbc: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x166bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_166bc0:
    // 0x166bc0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x166BC0u;
    SET_GPR_U32(ctx, 31, 0x166BC8u);
    ctx->pc = 0x166BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BC0u;
    // 0x166bc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x166BC0u, 0x166BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BC8u;
label_166bc8:
    // 0x166bc8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x166BC8u;
    SET_GPR_U32(ctx, 31, 0x166BD0u);
    ctx->pc = 0x166BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BC8u;
    // 0x166bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166BC8u, 0x166BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BD0u;
label_166bd0:
    // 0x166bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bd4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x166BD4u;
    {
        const bool branch_taken_0x166bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BD4u;
        // 0x166bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bd4) {
            ctx->pc = 0x166C44u;
            goto label_166c44;
        }
    }
    ctx->pc = 0x166BDCu;
    // 0x166bdc: 0xc088edc  jal         func_223B70
    ctx->pc = 0x166BDCu;
    SET_GPR_U32(ctx, 31, 0x166BE4u);
    ctx->pc = 0x166BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BDCu;
    // 0x166be0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x166BDCu, 0x166BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BE4u;
label_166be4:
    // 0x166be4: 0x50510018  beql        $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x166BE4u;
    {
        const bool branch_taken_0x166be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x166be4) {
            ctx->pc = 0x166BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166BE4u;
            // 0x166be8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166C48u;
            goto label_166c48;
        }
    }
    ctx->pc = 0x166BECu;
    // 0x166bec: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x166BECu;
    SET_GPR_U32(ctx, 31, 0x166BF4u);
    ctx->pc = 0x166BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BECu;
    // 0x166bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x166BECu, 0x166BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BF4u;
label_166bf4:
    // 0x166bf4: 0x10510013  beq         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x166BF4u;
    {
        const bool branch_taken_0x166bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x166BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BF4u;
        // 0x166bf8: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bf4) {
            ctx->pc = 0x166C44u;
            goto label_166c44;
        }
    }
    ctx->pc = 0x166BFCu;
    // 0x166bfc: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x166bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x166c00: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x166c04: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x166c04u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c08: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x166c0c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x166c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166c10: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x166c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x166c14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x166c14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x166c18: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x166c18u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x166c1c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x166c1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x166c20: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x166c20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x166c24: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x166c24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x166c28: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x166c28u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x166c2c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x166c2cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x166c30: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x166c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x166c34: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x166c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x166c38: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x166c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x166c3c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x166c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x166c40: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x166c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_166c44:
    // 0x166c44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_166c48:
    // 0x166c48: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x166c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166c4c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x166C4Cu;
    {
        const bool branch_taken_0x166c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C4Cu;
        // 0x166c50: 0x26640048  addiu       $a0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c4c) {
            ctx->pc = 0x166BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166bc0;
        }
    }
    ctx->pc = 0x166C54u;
    // 0x166c54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x166c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x166c58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166c5c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x166c5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c60: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x166c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x166c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x166c68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x166c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x166c6c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x166c6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x166c70: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x166c70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x166c74: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x166c74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x166c78: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x166c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x166c7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x166c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x166c80: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x166c80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x166c84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x166c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x166c88: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x166c88u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x166c8c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x166c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x166c90: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x166c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x166c94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x166c94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x166c98: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x166c98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x166c9c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x166c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x166ca0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x166ca0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x166ca4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x166ca4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x166ca8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x166ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x166cac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x166cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166cb0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x166cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166cb4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x166cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x166cb8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x166cb8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x166cbc: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x166cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x166cc0: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x166cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x166cc4: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x166cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x166cc8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x166cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x166ccc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x166cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x166cd0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x166cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166cd4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x166cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x166cd8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x166cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166cdc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x166cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166ce0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x166ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166ce4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x166ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x166ce8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x166ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x166cec: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x166cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x166cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x166CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CF0u;
        // 0x166cf4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166CF8u;
}
