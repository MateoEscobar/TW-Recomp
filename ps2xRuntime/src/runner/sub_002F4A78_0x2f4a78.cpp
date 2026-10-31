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

// Function: sub_002F4A78
// Address: 0x2f4a78 - 0x2f4c68
void sub_002F4A78_0x2f4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4A78_0x2f4a78");
#endif

    switch (ctx->pc) {
        case 0x2f4ac0u: goto label_2f4ac0;
        case 0x2f4ba4u: goto label_2f4ba4;
        case 0x2f4bb8u: goto label_2f4bb8;
        case 0x2f4bc4u: goto label_2f4bc4;
        case 0x2f4bdcu: goto label_2f4bdc;
        case 0x2f4be8u: goto label_2f4be8;
        case 0x2f4bf8u: goto label_2f4bf8;
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c10u: goto label_2f4c10;
        case 0x2f4c18u: goto label_2f4c18;
        case 0x2f4c24u: goto label_2f4c24;
        case 0x2f4c30u: goto label_2f4c30;
        case 0x2f4c40u: goto label_2f4c40;
        case 0x2f4c48u: goto label_2f4c48;
        default: break;
    }

    ctx->pc = 0x2f4a78u;

    // 0x2f4a78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f4a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f4a7c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f4a80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f4a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f4a84: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2f4a88: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f4a8c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f4a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f4a90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f4a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f4a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f4a98: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x2f4a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2f4a9c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2f4a9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f4aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4aa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f4aa8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f4aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4aac: 0xc474013c  lwc1        $f20, 0x13C($v1)
    ctx->pc = 0x2f4aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4ab0: 0x84c40092  lh          $a0, 0x92($a2)
    ctx->pc = 0x2f4ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x2f4ab4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f4ab8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2F4AB8u;
    SET_GPR_U32(ctx, 31, 0x2F4AC0u);
    ctx->pc = 0x2F4ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AB8u;
    // 0x2f4abc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F4AB8u, 0x2F4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AC0u;
label_2f4ac0:
    // 0x2f4ac0: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2f4ac0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2f4ac4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f4ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4ac8: 0x0  nop
    ctx->pc = 0x2f4ac8u;
    // NOP
    // 0x2f4acc: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x2F4ACCu;
    {
        const bool branch_taken_0x2f4acc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4ACCu;
        // 0x2f4ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4acc) {
            ctx->pc = 0x2F4C4Cu;
            goto label_2f4c4c;
        }
    }
    ctx->pc = 0x2F4AD4u;
    // 0x2f4ad4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f4ad8: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x2f4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4adc: 0xc44016c0  lwc1        $f0, 0x16C0($v0)
    ctx->pc = 0x2f4adcu;
    { uint32_t bits = FAST_READ32(0x5116C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4ae0: 0x244316c0  addiu       $v1, $v0, 0x16C0
    ctx->pc = 0x2f4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2f4ae4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f4ae4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4ae8: 0x0  nop
    ctx->pc = 0x2f4ae8u;
    // NOP
    // 0x2f4aec: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2F4AECu;
    {
        const bool branch_taken_0x2f4aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AECu;
        // 0x2f4af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4aec) {
            ctx->pc = 0x2F4B3Cu;
            goto label_2f4b3c;
        }
    }
    ctx->pc = 0x2F4AF4u;
    // 0x2f4af4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2f4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4af8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4afc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f4afcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4b00: 0x0  nop
    ctx->pc = 0x2f4b00u;
    // NOP
    // 0x2f4b04: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2F4B04u;
    {
        const bool branch_taken_0x2f4b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4b04) {
            ctx->pc = 0x2F4B3Cu;
            goto label_2f4b3c;
        }
    }
    ctx->pc = 0x2F4B0Cu;
    // 0x2f4b0c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2f4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4b10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4b14: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f4b14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4b18: 0x0  nop
    ctx->pc = 0x2f4b18u;
    // NOP
    // 0x2f4b1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4B1Cu;
    {
        const bool branch_taken_0x2f4b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4b1c) {
            ctx->pc = 0x2F4B3Cu;
            goto label_2f4b3c;
        }
    }
    ctx->pc = 0x2F4B24u;
    // 0x2f4b24: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2f4b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4b28: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4b2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f4b2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4b30: 0x0  nop
    ctx->pc = 0x2f4b30u;
    // NOP
    // 0x2f4b34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4B34u;
    {
        const bool branch_taken_0x2f4b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4b34) {
            ctx->pc = 0x2F4B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4B34u;
            // 0x2f4b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4B3Cu;
            goto label_2f4b3c;
        }
    }
    ctx->pc = 0x2F4B3Cu;
label_2f4b3c:
    // 0x2f4b3c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F4B3Cu;
    {
        const bool branch_taken_0x2f4b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B3Cu;
        // 0x2f4b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b3c) {
            ctx->pc = 0x2F4C4Cu;
            goto label_2f4c4c;
        }
    }
    ctx->pc = 0x2F4B44u;
    // 0x2f4b44: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2f4b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2f4b48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4b4c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f4b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2f4b50: 0x7a4300a0  lq          $v1, 0xA0($s2)
    ctx->pc = 0x2f4b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2f4b54: 0x265100a0  addiu       $s1, $s2, 0xA0
    ctx->pc = 0x2f4b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2f4b58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f4b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f4b5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f4b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f4b60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f4b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f4b64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f4b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f4b68: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f4b68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f4b6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4b70: 0x7a420090  lq          $v0, 0x90($s2)
    ctx->pc = 0x2f4b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2f4b74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f4b74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f4b78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f4b78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f4b7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f4b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4b80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f4b80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f4b84: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f4b84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f4b88: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2f4b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2f4b8c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f4b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2f4b90: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f4b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f4b94: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f4b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f4b98: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f4b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2f4b9c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2F4B9Cu;
    SET_GPR_U32(ctx, 31, 0x2F4BA4u);
    ctx->pc = 0x2F4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B9Cu;
    // 0x2f4ba0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F4B9Cu, 0x2F4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BA4u;
label_2f4ba4:
    // 0x2f4ba4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2f4ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2f4ba8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f4ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f4bac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4bb0: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F4BB0u;
    SET_GPR_U32(ctx, 31, 0x2F4BB8u);
    ctx->pc = 0x2F4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BB0u;
    // 0x2f4bb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F4BB0u, 0x2F4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BB8u;
label_2f4bb8:
    // 0x2f4bb8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4bbc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F4BBCu;
    SET_GPR_U32(ctx, 31, 0x2F4BC4u);
    ctx->pc = 0x2F4BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BBCu;
    // 0x2f4bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F4BBCu, 0x2F4BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BC4u;
label_2f4bc4:
    // 0x2f4bc4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f4bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f4bc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f4bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4bcc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2f4bd0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f4bd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f4bd4: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2F4BD4u;
    SET_GPR_U32(ctx, 31, 0x2F4BDCu);
    ctx->pc = 0x2F4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BD4u;
    // 0x2f4bd8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2F4BD4u, 0x2F4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BDCu;
label_2f4bdc:
    // 0x2f4bdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4be0: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2F4BE0u;
    SET_GPR_U32(ctx, 31, 0x2F4BE8u);
    ctx->pc = 0x2F4BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BE0u;
    // 0x2f4be4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2F4BE0u, 0x2F4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BE8u;
label_2f4be8:
    // 0x2f4be8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4bec: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x2f4becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x2f4bf0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2F4BF0u;
    SET_GPR_U32(ctx, 31, 0x2F4BF8u);
    ctx->pc = 0x2F4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BF0u;
    // 0x2f4bf4: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F4BF0u, 0x2F4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BF8u;
label_2f4bf8:
    // 0x2f4bf8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4bfc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f4bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f4c00: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x2F4C00u;
    SET_GPR_U32(ctx, 31, 0x2F4C08u);
    ctx->pc = 0x2F4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C00u;
    // 0x2f4c04: 0x24a57b48  addiu       $a1, $a1, 0x7B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x2F4C00u, 0x2F4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C08u;
label_2f4c08:
    // 0x2f4c08: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2F4C08u;
    SET_GPR_U32(ctx, 31, 0x2F4C10u);
    ctx->pc = 0x2F4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C08u;
    // 0x2f4c0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F4C08u, 0x2F4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C10u;
label_2f4c10:
    // 0x2f4c10: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2F4C10u;
    SET_GPR_U32(ctx, 31, 0x2F4C18u);
    ctx->pc = 0x2F4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C10u;
    // 0x2f4c14: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F4C10u, 0x2F4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C18u;
label_2f4c18:
    // 0x2f4c18: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4c1c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F4C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C24u);
    ctx->pc = 0x2F4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C1Cu;
    // 0x2f4c20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F4C1Cu, 0x2F4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C24u;
label_2f4c24:
    // 0x2f4c24: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4c28: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2F4C28u;
    SET_GPR_U32(ctx, 31, 0x2F4C30u);
    ctx->pc = 0x2F4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C28u;
    // 0x2f4c2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2F4C28u, 0x2F4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C30u;
label_2f4c30:
    // 0x2f4c30: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f4c34: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f4c38: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x2F4C38u;
    SET_GPR_U32(ctx, 31, 0x2F4C40u);
    ctx->pc = 0x2F4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C38u;
    // 0x2f4c3c: 0x24a57b60  addiu       $a1, $a1, 0x7B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x2F4C38u, 0x2F4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C40u;
label_2f4c40:
    // 0x2f4c40: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2F4C40u;
    SET_GPR_U32(ctx, 31, 0x2F4C48u);
    ctx->pc = 0x2F4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C40u;
    // 0x2f4c44: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F4C40u, 0x2F4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C48u;
label_2f4c48:
    // 0x2f4c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4c4c:
    // 0x2f4c4c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f4c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f4c50: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f4c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f4c54: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f4c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f4c58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f4c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4c5c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f4c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C60u;
        // 0x2f4c64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C68u;
}
