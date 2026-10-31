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

// Function: sub_00413A90
// Address: 0x413a90 - 0x413c48
void sub_00413A90_0x413a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413A90_0x413a90");
#endif

    switch (ctx->pc) {
        case 0x413b00u: goto label_413b00;
        case 0x413b10u: goto label_413b10;
        case 0x413b54u: goto label_413b54;
        case 0x413b64u: goto label_413b64;
        case 0x413bc0u: goto label_413bc0;
        case 0x413bd8u: goto label_413bd8;
        default: break;
    }

    ctx->pc = 0x413a90u;

    // 0x413a90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x413a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x413a94: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x413a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x413a98: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x413a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x413a9c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x413a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x413aa0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x413aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x413aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x413aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413aa8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x413aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x413aac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x413aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413ab0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x413ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x413ab4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x413ab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413ab8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x413ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x413abc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x413abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413ac0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x413ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x413ac4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x413ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x413ac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x413ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x413acc: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x413accu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x413ad0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x413ad0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x413ad4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x413ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x413ad8: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x413ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x413adc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x413adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x413ae0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x413ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x413ae4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x413AE4u;
    {
        const bool branch_taken_0x413ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413AE4u;
        // 0x413ae8: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ae4) {
            ctx->pc = 0x413C08u;
            goto label_413c08;
        }
    }
    ctx->pc = 0x413AECu;
    // 0x413aec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x413aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x413af0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x413af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x413af4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x413af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413af8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x413af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x413afc: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x413afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_413b00:
    // 0x413b00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x413b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x413b04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x413b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b08: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x413B08u;
    SET_GPR_U32(ctx, 31, 0x413B10u);
    ctx->pc = 0x413B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413B08u;
    // 0x413b0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x413B08u, 0x413B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413B10u;
label_413b10:
    // 0x413b10: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x413b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x413b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x413b1c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x413b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x413b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b24: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x413b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b28: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x413b28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x413b2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x413b2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x413b30: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x413b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b34: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x413b34u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x413b38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x413b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b3c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x413b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x413b40: 0x0  nop
    ctx->pc = 0x413b40u;
    // NOP
    // 0x413b44: 0x0  nop
    ctx->pc = 0x413b44u;
    // NOP
    // 0x413b48: 0x4614b303  div.s       $f12, $f22, $f20
    ctx->pc = 0x413b48u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x413b4c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x413B4Cu;
    SET_GPR_U32(ctx, 31, 0x413B54u);
    ctx->pc = 0x413B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413B4Cu;
    // 0x413b50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x413B4Cu, 0x413B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413B54u;
label_413b54:
    // 0x413b54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x413b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x413b58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x413b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413b5c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x413B5Cu;
    SET_GPR_U32(ctx, 31, 0x413B64u);
    ctx->pc = 0x413B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413B5Cu;
    // 0x413b60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x413B5Cu, 0x413B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413B64u;
label_413b64:
    // 0x413b64: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x413b64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x413b68: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x413b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x413b6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x413b6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x413b70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x413b70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x413b74: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x413b74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b78: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x413b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b7c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x413b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x413b80: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x413b80u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x413b84: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x413b84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x413b88: 0x0  nop
    ctx->pc = 0x413b88u;
    // NOP
    // 0x413b8c: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x413b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x413b90: 0x0  nop
    ctx->pc = 0x413b90u;
    // NOP
    // 0x413b94: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x413B94u;
    {
        const bool branch_taken_0x413b94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x413B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413B94u;
        // 0x413b98: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413b94) {
            ctx->pc = 0x413C08u;
            goto label_413c08;
        }
    }
    ctx->pc = 0x413B9Cu;
    // 0x413b9c: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x413b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x413ba0: 0x0  nop
    ctx->pc = 0x413ba0u;
    // NOP
    // 0x413ba4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x413BA4u;
    {
        const bool branch_taken_0x413ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413BA4u;
        // 0x413ba8: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ba4) {
            ctx->pc = 0x413BECu;
            goto label_413bec;
        }
    }
    ctx->pc = 0x413BACu;
    // 0x413bac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x413bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x413bb0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x413bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x413bb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x413bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413bb8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x413BB8u;
    SET_GPR_U32(ctx, 31, 0x413BC0u);
    ctx->pc = 0x413BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413BB8u;
    // 0x413bbc: 0xa2d20000  sb          $s2, 0x0($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x413BB8u, 0x413BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413BC0u;
label_413bc0:
    // 0x413bc0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x413bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x413bc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x413bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413bc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x413bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x413bcc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x413bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x413bd0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x413BD0u;
    SET_GPR_U32(ctx, 31, 0x413BD8u);
    ctx->pc = 0x413BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413BD0u;
    // 0x413bd4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x413BD0u, 0x413BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413BD8u;
label_413bd8:
    // 0x413bd8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x413bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x413bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x413bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x413be0: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x413be0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
    // 0x413be4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x413BE4u;
    {
        const bool branch_taken_0x413be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413BE4u;
        // 0x413be8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413be4) {
            ctx->pc = 0x413C0Cu;
            goto label_413c0c;
        }
    }
    ctx->pc = 0x413BECu;
label_413bec:
    // 0x413bec: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x413becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x413bf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x413bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x413bf4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x413bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x413bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x413bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x413bfc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x413bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x413c00: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x413C00u;
    {
        const bool branch_taken_0x413c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413C00u;
        // 0x413c04: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413c00) {
            ctx->pc = 0x413B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413b00;
        }
    }
    ctx->pc = 0x413C08u;
label_413c08:
    // 0x413c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x413c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413c0c:
    // 0x413c0c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x413c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x413c10: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x413c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x413c14: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x413c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x413c18: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x413c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x413c1c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x413c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x413c20: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x413c20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x413c24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x413c24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x413c28: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x413c28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x413c2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x413c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x413c30: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x413c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x413c34: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x413c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x413c38: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x413c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x413c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x413C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413C3Cu;
        // 0x413c40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413C44u;
    // 0x413c44: 0x0  nop
    ctx->pc = 0x413c44u;
    // NOP
    ctx->pc = 0x413c48u;
}
