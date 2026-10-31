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

// Function: sub_00355AB8
// Address: 0x355ab8 - 0x355e98
void sub_00355AB8_0x355ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355AB8_0x355ab8");
#endif

    switch (ctx->pc) {
        case 0x355e88u: goto label_355e88;
        default: break;
    }

    ctx->pc = 0x355ab8u;

    // 0x355ab8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x355ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x355abc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x355abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ac0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x355ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x355ac4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x355ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x355ac8: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x355ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355acc: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x355accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x355ad0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x355ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x355ad4: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x355ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x355ad8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x355ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x355adc: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x355adcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x355ae0: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x355ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x355ae4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x355ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x355ae8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x355ae8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355aec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355AECu;
    {
        const bool branch_taken_0x355aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AECu;
        // 0x355af0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355aec) {
            ctx->pc = 0x355B0Cu;
            goto label_355b0c;
        }
    }
    ctx->pc = 0x355AF4u;
    // 0x355af4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x355af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x355af8: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x355af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x355afc: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x355afcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    // 0x355b00: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x355B00u;
    {
        const bool branch_taken_0x355b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x355B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B00u;
        // 0x355b04: 0xace20020  sw          $v0, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b00) {
            ctx->pc = 0x355B0Cu;
            goto label_355b0c;
        }
    }
    ctx->pc = 0x355B08u;
    // 0x355b08: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x355b08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
label_355b0c:
    // 0x355b0c: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x355b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x355b10: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x355b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x355b14: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x355b14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x355b18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x355b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x355b1c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x355B1Cu;
    {
        const bool branch_taken_0x355b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355b1c) {
            ctx->pc = 0x355B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355B1Cu;
            // 0x355b20: 0x8ce4001c  lw          $a0, 0x1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355B40u;
            goto label_355b40;
        }
    }
    ctx->pc = 0x355B24u;
    // 0x355b24: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x355b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x355b28: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x355b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x355b2c: 0xace40028  sw          $a0, 0x28($a3)
    ctx->pc = 0x355b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
    // 0x355b30: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x355B30u;
    {
        const bool branch_taken_0x355b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x355B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B30u;
        // 0x355b34: 0xace2002c  sw          $v0, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b30) {
            ctx->pc = 0x355B3Cu;
            goto label_355b3c;
        }
    }
    ctx->pc = 0x355B38u;
    // 0x355b38: 0xace4002c  sw          $a0, 0x2C($a3)
    ctx->pc = 0x355b38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 4));
label_355b3c:
    // 0x355b3c: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x355b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_355b40:
    // 0x355b40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x355b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355b44: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x355b44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x355b48: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x355b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x355b4c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x355b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x355b50: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x355b50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x355b54: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x355b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x355b58: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x355b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x355b5c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x355b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x355b60: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x355b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355b64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x355b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355b68: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x355b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x355b6c: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x355b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x355b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355b74: 0x0  nop
    ctx->pc = 0x355b74u;
    // NOP
    // 0x355b78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x355b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355b7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x355b7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355b80: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x355b80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355b84: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x355b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355b88: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x355b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355b8c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x355b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355b90: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x355b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355b94: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x355b94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355b98: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x355b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x355b9c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x355b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x355ba0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x355ba0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x355ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355bb0: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x355bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x355bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355bb8: 0x0  nop
    ctx->pc = 0x355bb8u;
    // NOP
    // 0x355bbc: 0x0  nop
    ctx->pc = 0x355bbcu;
    // NOP
    // 0x355bc0: 0x46000004  c1          0x4
    ctx->pc = 0x355bc0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x355bc4: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x355bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x355bc8: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x355bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x355bcc: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x355bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x355bd0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x355bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x355bd4: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x355bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x355bd8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x355bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x355bdc: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x355bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x355be0: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x355be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x355be4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x355be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355be8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x355be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355bec: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x355becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x355bf0: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x355bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x355bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355bf8: 0x0  nop
    ctx->pc = 0x355bf8u;
    // NOP
    // 0x355bfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x355bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355c00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x355c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355c04: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x355c04u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355c08: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x355c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355c0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x355c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355c10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x355c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355c14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x355c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355c18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x355c18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355c1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x355c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x355c20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x355c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x355c24: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x355c24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x355c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355c34: 0x8ce6001c  lw          $a2, 0x1C($a3)
    ctx->pc = 0x355c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x355c38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355c38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355c3c: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x355c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x355c40: 0x0  nop
    ctx->pc = 0x355c40u;
    // NOP
    // 0x355c44: 0x0  nop
    ctx->pc = 0x355c44u;
    // NOP
    // 0x355c48: 0x46000004  c1          0x4
    ctx->pc = 0x355c48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x355c4c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x355c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x355c50: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x355c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x355c54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x355c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x355c58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x355c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x355c5c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x355c5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355c60: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x355c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x355c64: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x355c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x355c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355c6c: 0x0  nop
    ctx->pc = 0x355c6cu;
    // NOP
    // 0x355c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x355c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x355c74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x355c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355c78: 0x0  nop
    ctx->pc = 0x355c78u;
    // NOP
    // 0x355c7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x355c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355c80: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x355c80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x355c84: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x355c84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x355c88: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x355c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x355c8c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x355c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355c90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x355c90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355c94: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x355c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355c98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x355c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355c9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x355c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355ca0: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x355ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x355ca4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x355ca4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x355ca8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x355ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x355cac: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x355CACu;
    {
        const bool branch_taken_0x355cac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x355CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CACu;
        // 0x355cb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cac) {
            ctx->pc = 0x355CD4u;
            goto label_355cd4;
        }
    }
    ctx->pc = 0x355CB4u;
    // 0x355cb4: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x355cb8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x355cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x355cbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x355cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355cc0: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x355cc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x355cc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355cc8: 0x0  nop
    ctx->pc = 0x355cc8u;
    // NOP
    // 0x355ccc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x355CCCu;
    {
        const bool branch_taken_0x355ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355ccc) {
            ctx->pc = 0x355CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355CCCu;
            // 0x355cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355CD4u;
            goto label_355cd4;
        }
    }
    ctx->pc = 0x355CD4u;
label_355cd4:
    // 0x355cd4: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x355CD4u;
    {
        const bool branch_taken_0x355cd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x355cd4) {
            ctx->pc = 0x355CECu;
            goto label_355cec;
        }
    }
    ctx->pc = 0x355CDCu;
    // 0x355cdc: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x355cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355ce0: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x355ce0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x355ce4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x355ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x355ce8: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x355ce8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_355cec:
    // 0x355cec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355cf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355cf4: 0x0  nop
    ctx->pc = 0x355cf4u;
    // NOP
    // 0x355cf8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x355cf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355cfc: 0x0  nop
    ctx->pc = 0x355cfcu;
    // NOP
    // 0x355d00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x355D00u;
    {
        const bool branch_taken_0x355d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355d00) {
            ctx->pc = 0x355D14u;
            goto label_355d14;
        }
    }
    ctx->pc = 0x355D08u;
    // 0x355d08: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x355d08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355d0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x355D0Cu;
    {
        const bool branch_taken_0x355d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D0Cu;
        // 0x355d10: 0x7ce20070  sq          $v0, 0x70($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d0c) {
            ctx->pc = 0x355D90u;
            goto label_355d90;
        }
    }
    ctx->pc = 0x355D14u;
label_355d14:
    // 0x355d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x355d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355d18: 0x0  nop
    ctx->pc = 0x355d18u;
    // NOP
    // 0x355d1c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x355d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355d20: 0x0  nop
    ctx->pc = 0x355d20u;
    // NOP
    // 0x355d24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x355D24u;
    {
        const bool branch_taken_0x355d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355d24) {
            ctx->pc = 0x355D38u;
            goto label_355d38;
        }
    }
    ctx->pc = 0x355D2Cu;
    // 0x355d2c: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x355d2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x355d30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x355D30u;
    {
        const bool branch_taken_0x355d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d30) {
            ctx->pc = 0x355D40u;
            goto label_355d40;
        }
    }
    ctx->pc = 0x355D38u;
label_355d38:
    // 0x355d38: 0x4be2112c  vsub.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x355d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x355d3c: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x355d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_355d40:
    // 0x355d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355d48: 0x0  nop
    ctx->pc = 0x355d48u;
    // NOP
    // 0x355d4c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x355d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x355d50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x355d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355d54: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x355d54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355d58: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x355d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355d5c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x355d5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355d60: 0x4be509d8  vmulx.xyzw  $vf7, $vf1, $vf5x
    ctx->pc = 0x355d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x355d64: 0x4be62218  vmulx.xyzw  $vf8, $vf4, $vf6x
    ctx->pc = 0x355d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x355d68: 0x4be838a8  vadd.xyzw   $vf2, $vf7, $vf8
    ctx->pc = 0x355d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x355d6c: 0x4be212aa  vmul.xyzw   $vf10, $vf2, $vf2
    ctx->pc = 0x355d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x355d70: 0x4b0a5281  vaddy.x     $vf10, $vf10, $vf10y
    ctx->pc = 0x355d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x355d74: 0x4b0a5282  vaddz.x     $vf10, $vf10, $vf10z
    ctx->pc = 0x355d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x355d78: 0x4b0a5283  vaddw.x     $vf10, $vf10, $vf10w
    ctx->pc = 0x355d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x355d7c: 0x4a6a03be  vrsqrt      $Q, $vf0w, $vf10x
    ctx->pc = 0x355d7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x355d80: 0x4a0003bf  vwaitq
    ctx->pc = 0x355d80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x355d84: 0x4be0109c  vmulq.xyzw  $vf2, $vf2, $Q
    ctx->pc = 0x355d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x355d88: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x355d88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x355d8c: 0x7ce20070  sq          $v0, 0x70($a3)
    ctx->pc = 0x355d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 112), GPR_VEC(ctx, 2));
label_355d90:
    // 0x355d90: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x355d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x355d94: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x355d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x355d98: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x355d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x355d9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x355d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355da0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355da4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x355da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x355da8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x355da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x355dac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x355dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355db0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x355db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x355db4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x355db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355db8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x355db8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x355dbc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x355dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x355dc0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x355dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355dc4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x355dc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355dc8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x355dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x355dcc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x355dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355dd0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x355dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x355dd4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x355dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355dd8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x355dd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x355ddc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x355ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x355de0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x355de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x355de4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x355de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355de8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x355de8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355dec: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x355decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x355df0: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x355df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x355df4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x355df4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355df8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x355df8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355dfc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x355dfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x355e00: 0x0  nop
    ctx->pc = 0x355e00u;
    // NOP
    // 0x355e04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x355e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x355e08: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x355e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x355e0c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x355e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x355e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355e14: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x355e14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355e18: 0x0  nop
    ctx->pc = 0x355e18u;
    // NOP
    // 0x355e1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x355e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355e20: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x355e20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x355e24: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x355E24u;
    {
        const bool branch_taken_0x355e24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x355E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E24u;
        // 0x355e28: 0x46000902  mul.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e24) {
            ctx->pc = 0x355E3Cu;
            goto label_355e3c;
        }
    }
    ctx->pc = 0x355E2Cu;
    // 0x355e2c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x355e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355e30: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x355e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x355e34: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x355e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x355e38: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x355e38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_355e3c:
    // 0x355e3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x355e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355e44: 0x0  nop
    ctx->pc = 0x355e44u;
    // NOP
    // 0x355e48: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x355e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x355e4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x355e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355e50: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x355e50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355e54: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x355e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355e58: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x355e58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x355e5c: 0x4bc30958  vmulx.xyz   $vf5, $vf1, $vf3x
    ctx->pc = 0x355e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x355e60: 0x4bc41198  vmulx.xyz   $vf6, $vf2, $vf4x
    ctx->pc = 0x355e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x355e64: 0x4bc62868  vadd.xyz    $vf1, $vf5, $vf6
    ctx->pc = 0x355e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355e68: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x355e68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355e6c: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x355e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x355e70: 0x7ce20060  sq          $v0, 0x60($a3)
    ctx->pc = 0x355e70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 96), GPR_VEC(ctx, 2));
    // 0x355e74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x355E74u;
    {
        const bool branch_taken_0x355e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E74u;
        // 0x355e78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e74) {
            ctx->pc = 0x355E88u;
            goto label_355e88;
        }
    }
    ctx->pc = 0x355E7Cu;
    // 0x355e7c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x355e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e80: 0xc0d5366  jal         func_354D98
    ctx->pc = 0x355E80u;
    SET_GPR_U32(ctx, 31, 0x355E88u);
    ctx->pc = 0x355E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355E80u;
    // 0x355e84: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D98u, 0x355E80u, 0x355E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E88u;
label_355e88:
    // 0x355e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x355e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x355e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x355E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E8Cu;
        // 0x355e90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355E94u;
    // 0x355e94: 0x0  nop
    ctx->pc = 0x355e94u;
    // NOP
    ctx->pc = 0x355e98u;
}
