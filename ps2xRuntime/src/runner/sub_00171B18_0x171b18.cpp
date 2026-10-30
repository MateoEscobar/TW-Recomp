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

// Function: sub_00171B18
// Address: 0x171b18 - 0x171d38
void sub_00171B18_0x171b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B18_0x171b18");
#endif

    switch (ctx->pc) {
        case 0x171b5cu: goto label_171b5c;
        case 0x171bf0u: goto label_171bf0;
        case 0x171c50u: goto label_171c50;
        case 0x171c70u: goto label_171c70;
        case 0x171c7cu: goto label_171c7c;
        case 0x171ca8u: goto label_171ca8;
        case 0x171d0cu: goto label_171d0c;
        default: break;
    }

    ctx->pc = 0x171b18u;

    // 0x171b18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x171b1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x171b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x171b20: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x171b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x171b24: 0x2454b8a8  addiu       $s4, $v0, -0x4758
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x171b28: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x171b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x171b2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171b30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x171b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x171b34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x171b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b38: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x171b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x171b3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x171b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171b40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b44: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x171b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x171b48: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x171b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x171b4c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x171b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x171b50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x171b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x171b54: 0xc0cd508  jal         func_335420
    ctx->pc = 0x171B54u;
    SET_GPR_U32(ctx, 31, 0x171B5Cu);
    ctx->pc = 0x171B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B54u;
    // 0x171b58: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x171B54u, 0x171B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B5Cu;
label_171b5c:
    // 0x171b5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x171b60: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x171b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171b64: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x171b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x171b68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x171b68u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6F31A0u));
    // 0x171b6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x171b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x171b70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171b70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x171b74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x171b74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x171b78: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x171b78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171b7c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x171b7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171b80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x171b84: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x171b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171b88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x171b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171b8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x171b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171b90: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x171b90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x171b94: 0x4a0003bf  vwaitq
    ctx->pc = 0x171b94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b98: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x171b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171b9c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x171b9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x171ba0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x171ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x171ba4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x171ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x171ba8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x171ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x171bac: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x171bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171bb0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x171bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x171bb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x171BB4u;
    {
        const bool branch_taken_0x171bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BB4u;
        // 0x171bb8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bb4) {
            ctx->pc = 0x171BD0u;
            goto label_171bd0;
        }
    }
    ctx->pc = 0x171BBCu;
    // 0x171bbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x171bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x171bc0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x171bc4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171bc4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x171bc8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x171BC8u;
    {
        const bool branch_taken_0x171bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BC8u;
        // 0x171bcc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bc8) {
            ctx->pc = 0x171D14u;
            goto label_171d14;
        }
    }
    ctx->pc = 0x171BD0u;
label_171bd0:
    // 0x171bd0: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x171bd0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x171bd4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x171bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x171bd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x171bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171be4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x171be4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x171be8: 0xc0cd508  jal         func_335420
    ctx->pc = 0x171BE8u;
    SET_GPR_U32(ctx, 31, 0x171BF0u);
    ctx->pc = 0x171BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BE8u;
    // 0x171bec: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x171BE8u, 0x171BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BF0u;
label_171bf0:
    // 0x171bf0: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x171bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171bf4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x171bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x171bf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x171bfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x171bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171c00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x171c00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x171c04: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x171c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171c08: 0x0  nop
    ctx->pc = 0x171c08u;
    // NOP
    // 0x171c0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x171C0Cu;
    {
        const bool branch_taken_0x171c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C0Cu;
        // 0x171c10: 0xe6610044  swc1        $f1, 0x44($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c0c) {
            ctx->pc = 0x171C18u;
            goto label_171c18;
        }
    }
    ctx->pc = 0x171C14u;
    // 0x171c14: 0xe6620044  swc1        $f2, 0x44($s3)
    ctx->pc = 0x171c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_171c18:
    // 0x171c18: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x171c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c1c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x171c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x171c20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x171c24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171c28: 0x0  nop
    ctx->pc = 0x171c28u;
    // NOP
    // 0x171c2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x171c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171c30: 0x0  nop
    ctx->pc = 0x171c30u;
    // NOP
    // 0x171c34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x171C34u;
    {
        const bool branch_taken_0x171c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171c34) {
            ctx->pc = 0x171C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171C34u;
            // 0x171c38: 0xe6610044  swc1        $f1, 0x44($s3) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x171C3Cu;
            goto label_171c3c;
        }
    }
    ctx->pc = 0x171C3Cu;
label_171c3c:
    // 0x171c3c: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x171c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171c40: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x171c44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x171c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x171c48: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x171C48u;
    SET_GPR_U32(ctx, 31, 0x171C50u);
    ctx->pc = 0x171C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C48u;
    // 0x171c4c: 0x26321720  addiu       $s2, $s1, 0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x171C48u, 0x171C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C50u;
label_171c50:
    // 0x171c50: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x171c54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x171c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x171c58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171c5c: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x171c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171c60: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x171c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x171c64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x171c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x171c68: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x171C68u;
    SET_GPR_U32(ctx, 31, 0x171C70u);
    ctx->pc = 0x171C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C68u;
    // 0x171c6c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x171C68u, 0x171C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C70u;
label_171c70:
    // 0x171c70: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x171c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x171c74: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x171C74u;
    SET_GPR_U32(ctx, 31, 0x171C7Cu);
    ctx->pc = 0x171C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C74u;
    // 0x171c78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x171C74u, 0x171C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C7Cu;
label_171c7c:
    // 0x171c7c: 0xc6221720  lwc1        $f2, 0x1720($s1)
    ctx->pc = 0x171c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171c80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171c80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x171c84: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x171c84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x171c88: 0xe6620020  swc1        $f2, 0x20($s3)
    ctx->pc = 0x171c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x171c8c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x171c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171c90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x171c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171c94: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x171c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x171c98: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x171c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171c9c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x171c9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x171ca0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x171CA0u;
    SET_GPR_U32(ctx, 31, 0x171CA8u);
    ctx->pc = 0x171CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CA0u;
    // 0x171ca4: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x171CA0u, 0x171CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CA8u;
label_171ca8:
    // 0x171ca8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171cac: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x171cacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x171cb0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x171cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171cb4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x171cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x171cb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x171cb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x171cbc: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x171cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171cc0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x171cc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x171cc4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x171cc4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171cc8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x171cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171ccc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x171cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x171cd0: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x171cd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171cd4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x171cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171cd8: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x171cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171cdc: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x171cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171ce0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x171ce0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x171ce4: 0x7a660000  lq          $a2, 0x0($s3)
    ctx->pc = 0x171ce4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x171ce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171cec: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x171cecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x171cf0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x171cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x171cf4: 0x7e660010  sq          $a2, 0x10($s3)
    ctx->pc = 0x171cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 6));
    // 0x171cf8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x171cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x171cfc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x171cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x171d00: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x171d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x171d04: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x171D04u;
    SET_GPR_U32(ctx, 31, 0x171D0Cu);
    ctx->pc = 0x171D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D04u;
    // 0x171d08: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x171D04u, 0x171D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D0Cu;
label_171d0c:
    // 0x171d0c: 0xa662004e  sh          $v0, 0x4E($s3)
    ctx->pc = 0x171d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x171d10: 0xa662004c  sh          $v0, 0x4C($s3)
    ctx->pc = 0x171d10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 76), (uint16_t)GPR_U32(ctx, 2));
label_171d14:
    // 0x171d14: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x171d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171d18: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x171d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x171d1c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x171d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x171d20: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x171d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x171d24: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x171d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x171d28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x171d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171d2c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x171d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171d30: 0x3e00008  jr          $ra
    ctx->pc = 0x171D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D30u;
        // 0x171d34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D38u;
}
