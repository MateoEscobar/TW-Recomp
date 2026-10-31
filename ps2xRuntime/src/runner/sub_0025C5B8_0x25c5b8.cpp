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

// Function: sub_0025C5B8
// Address: 0x25c5b8 - 0x25cb90
void sub_0025C5B8_0x25c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C5B8_0x25c5b8");
#endif

    switch (ctx->pc) {
        case 0x25c624u: goto label_25c624;
        case 0x25c634u: goto label_25c634;
        case 0x25c674u: goto label_25c674;
        case 0x25c6d0u: goto label_25c6d0;
        case 0x25c744u: goto label_25c744;
        case 0x25c754u: goto label_25c754;
        case 0x25c794u: goto label_25c794;
        case 0x25c7d4u: goto label_25c7d4;
        case 0x25c814u: goto label_25c814;
        case 0x25c83cu: goto label_25c83c;
        case 0x25c884u: goto label_25c884;
        case 0x25c8c4u: goto label_25c8c4;
        case 0x25c904u: goto label_25c904;
        case 0x25c92cu: goto label_25c92c;
        case 0x25c990u: goto label_25c990;
        case 0x25c9fcu: goto label_25c9fc;
        case 0x25ca14u: goto label_25ca14;
        case 0x25ca28u: goto label_25ca28;
        case 0x25ca30u: goto label_25ca30;
        case 0x25caacu: goto label_25caac;
        case 0x25cabcu: goto label_25cabc;
        case 0x25cb44u: goto label_25cb44;
        case 0x25cb54u: goto label_25cb54;
        default: break;
    }

    ctx->pc = 0x25c5b8u;

    // 0x25c5b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x25c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x25c5bc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x25c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x25c5c0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x25c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x25c5c4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x25c5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x25c5c8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x25c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x25c5cc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x25c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x25c5d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25c5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5d4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x25c5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x25c5d8: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x25c5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x25c5dc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x25c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x25c5e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25c5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5e4: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x25c5e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x25c5e8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x25c5e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5ec: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x25c5ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x25c5f0: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x25c5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x25c5f4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x25c5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25c5f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25c5fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x25c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25c600: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x25c600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c604: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x25c604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x25c608: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x25c608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c60c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x25c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x25c610: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x25c610u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25c614: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x25c614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x25c618: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x25c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25c61c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x25C61Cu;
    SET_GPR_U32(ctx, 31, 0x25C624u);
    ctx->pc = 0x25C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C61Cu;
    // 0x25c620: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x25C61Cu, 0x25C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C624u;
label_25c624:
    // 0x25c624: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x25c624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c628: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x25c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c62c: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x25C62Cu;
    SET_GPR_U32(ctx, 31, 0x25C634u);
    ctx->pc = 0x25C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C62Cu;
    // 0x25c630: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x25C62Cu, 0x25C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C634u;
label_25c634:
    // 0x25c634: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x25c634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25c638: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25c638u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25c63c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x25c63cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c644: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x25c644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x25c648: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x25c648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25c64c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x25c64cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c650: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25c650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25c654: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25c654u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c658: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25c658u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25c65c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25c65cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x25c660: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x25c660u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25c664: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x25c664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x25c668: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x25c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x25c66c: 0xc087502  jal         func_21D408
    ctx->pc = 0x25C66Cu;
    SET_GPR_U32(ctx, 31, 0x25C674u);
    ctx->pc = 0x25C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C66Cu;
    // 0x25c670: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25C66Cu, 0x25C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C674u;
label_25c674:
    // 0x25c674: 0xc4570118  lwc1        $f23, 0x118($v0)
    ctx->pc = 0x25c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25c678: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x25c678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c67c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c67cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c680: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x25c680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25c684: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x25c684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25c688: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x25c688u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x25c68c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25c68cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25c690: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x25c690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25c694: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x25c694u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x25c698: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25c698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x25c69c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25c69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25c6a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c6a8: 0x0  nop
    ctx->pc = 0x25c6a8u;
    // NOP
    // 0x25c6ac: 0x46170581  sub.s       $f22, $f0, $f23
    ctx->pc = 0x25c6acu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x25c6b0: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x25c6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c6b4: 0x0  nop
    ctx->pc = 0x25c6b4u;
    // NOP
    // 0x25c6b8: 0x45010127  bc1t        . + 4 + (0x127 << 2)
    ctx->pc = 0x25C6B8u;
    {
        const bool branch_taken_0x25c6b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6B8u;
        // 0x25c6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6b8) {
            ctx->pc = 0x25CB58u;
            goto label_25cb58;
        }
    }
    ctx->pc = 0x25C6C0u;
    // 0x25c6c0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x25c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c6c4: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x25c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c6c8: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x25C6C8u;
    SET_GPR_U32(ctx, 31, 0x25C6D0u);
    ctx->pc = 0x25C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C6C8u;
    // 0x25c6cc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x25C6C8u, 0x25C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C6D0u;
label_25c6d0:
    // 0x25c6d0: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x25c6d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x25c6d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25c6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x25c6d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c6e0: 0x0  nop
    ctx->pc = 0x25c6e0u;
    // NOP
    // 0x25c6e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25c6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c6e8: 0x0  nop
    ctx->pc = 0x25c6e8u;
    // NOP
    // 0x25c6ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C6ECu;
    {
        const bool branch_taken_0x25c6ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c6ec) {
            ctx->pc = 0x25C708u;
            goto label_25c708;
        }
    }
    ctx->pc = 0x25C6F4u;
    // 0x25c6f4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25c6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x25c6f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c700: 0x0  nop
    ctx->pc = 0x25c700u;
    // NOP
    // 0x25c704: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x25c704u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25c708:
    // 0x25c708: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x25c708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x25c70c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c714: 0x0  nop
    ctx->pc = 0x25c714u;
    // NOP
    // 0x25c718: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25c718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c71c: 0x0  nop
    ctx->pc = 0x25c71cu;
    // NOP
    // 0x25c720: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C720u;
    {
        const bool branch_taken_0x25c720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C720u;
        // 0x25c724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c720) {
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C728u;
    // 0x25c728: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25c728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x25c72c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c734: 0x0  nop
    ctx->pc = 0x25c734u;
    // NOP
    // 0x25c738: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25c738u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25c73c:
    // 0x25c73c: 0xc087502  jal         func_21D408
    ctx->pc = 0x25C73Cu;
    SET_GPR_U32(ctx, 31, 0x25C744u);
    ctx->pc = 0x25C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C73Cu;
    // 0x25c740: 0x8e5001a8  lw          $s0, 0x1A8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25C73Cu, 0x25C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C744u;
label_25c744:
    // 0x25c744: 0x4600a545  abs.s       $f21, $f20
    ctx->pc = 0x25c744u;
    ctx->f[21] = FPU_ABS_S(ctx->f[20]);
    // 0x25c748: 0xc44c0114  lwc1        $f12, 0x114($v0)
    ctx->pc = 0x25c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c74c: 0xc0885d8  jal         func_221760
    ctx->pc = 0x25C74Cu;
    SET_GPR_U32(ctx, 31, 0x25C754u);
    ctx->pc = 0x25C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C74Cu;
    // 0x25c750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221760u, 0x25C74Cu, 0x25C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C754u;
label_25c754:
    // 0x25c754: 0x1600007d  bnez        $s0, . + 4 + (0x7D << 2)
    ctx->pc = 0x25C754u;
    {
        const bool branch_taken_0x25c754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C754u;
        // 0x25c758: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c754) {
            ctx->pc = 0x25C94Cu;
            goto label_25c94c;
        }
    }
    ctx->pc = 0x25C75Cu;
    // 0x25c75c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25c760: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25c760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25c764: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25C764u;
    {
        const bool branch_taken_0x25c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c764) {
            ctx->pc = 0x25C85Cu;
            goto label_25c85c;
        }
    }
    ctx->pc = 0x25C76Cu;
    // 0x25c76c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x25c76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x25c770: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c778: 0x0  nop
    ctx->pc = 0x25c778u;
    // NOP
    // 0x25c77c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25c77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c780: 0x0  nop
    ctx->pc = 0x25c780u;
    // NOP
    // 0x25c784: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25C784u;
    {
        const bool branch_taken_0x25c784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c784) {
            ctx->pc = 0x25C7ACu;
            goto label_25c7ac;
        }
    }
    ctx->pc = 0x25C78Cu;
    // 0x25c78c: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C78Cu;
    SET_GPR_U32(ctx, 31, 0x25C794u);
    ctx->pc = 0x25C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C78Cu;
    // 0x25c790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C78Cu, 0x25C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C794u;
label_25c794:
    // 0x25c794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C794u;
    {
        const bool branch_taken_0x25c794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C794u;
        // 0x25c798: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c794) {
            ctx->pc = 0x25C7A4u;
            goto label_25c7a4;
        }
    }
    ctx->pc = 0x25C79Cu;
    // 0x25c79c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x25C79Cu;
    {
        const bool branch_taken_0x25c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C79Cu;
        // 0x25c7a0: 0x8c51005c  lw          $s1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c79c) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C7A4u;
label_25c7a4:
    // 0x25c7a4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x25C7A4u;
    {
        const bool branch_taken_0x25c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7A4u;
        // 0x25c7a8: 0x8c510030  lw          $s1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7a4) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C7ACu;
label_25c7ac:
    // 0x25c7ac: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x25c7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x25c7b0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x25c7b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c7b8: 0x0  nop
    ctx->pc = 0x25c7b8u;
    // NOP
    // 0x25c7bc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x25c7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7c0: 0x0  nop
    ctx->pc = 0x25c7c0u;
    // NOP
    // 0x25c7c4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x25C7C4u;
    {
        const bool branch_taken_0x25c7c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c7c4) {
            ctx->pc = 0x25C7F4u;
            goto label_25c7f4;
        }
    }
    ctx->pc = 0x25C7CCu;
    // 0x25c7cc: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C7CCu;
    SET_GPR_U32(ctx, 31, 0x25C7D4u);
    ctx->pc = 0x25C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7CCu;
    // 0x25c7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C7CCu, 0x25C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7D4u;
label_25c7d4:
    // 0x25c7d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C7D4u;
    {
        const bool branch_taken_0x25c7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7D4u;
        // 0x25c7d8: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7d4) {
            ctx->pc = 0x25C7E8u;
            goto label_25c7e8;
        }
    }
    ctx->pc = 0x25C7DCu;
    // 0x25c7dc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x25c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x25c7e0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x25C7E0u;
    {
        const bool branch_taken_0x25c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7E0u;
        // 0x25c7e4: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7e0) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C7E8u;
label_25c7e8:
    // 0x25c7e8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x25c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x25c7ec: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x25C7ECu;
    {
        const bool branch_taken_0x25c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7ECu;
        // 0x25c7f0: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7ec) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C7F4u;
label_25c7f4:
    // 0x25c7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c7f8: 0x0  nop
    ctx->pc = 0x25c7f8u;
    // NOP
    // 0x25c7fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25c7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c800: 0x0  nop
    ctx->pc = 0x25c800u;
    // NOP
    // 0x25c804: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x25C804u;
    {
        const bool branch_taken_0x25c804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c804) {
            ctx->pc = 0x25C834u;
            goto label_25c834;
        }
    }
    ctx->pc = 0x25C80Cu;
    // 0x25c80c: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C80Cu;
    SET_GPR_U32(ctx, 31, 0x25C814u);
    ctx->pc = 0x25C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C80Cu;
    // 0x25c810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C80Cu, 0x25C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C814u;
label_25c814:
    // 0x25c814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C814u;
    {
        const bool branch_taken_0x25c814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C814u;
        // 0x25c818: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c814) {
            ctx->pc = 0x25C828u;
            goto label_25c828;
        }
    }
    ctx->pc = 0x25C81Cu;
    // 0x25c81c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x25c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x25c820: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x25C820u;
    {
        const bool branch_taken_0x25c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C820u;
        // 0x25c824: 0x24710003  addiu       $s1, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c820) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C828u;
label_25c828:
    // 0x25c828: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x25c828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x25c82c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x25C82Cu;
    {
        const bool branch_taken_0x25c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C82Cu;
        // 0x25c830: 0x24710003  addiu       $s1, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c82c) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C834u;
label_25c834:
    // 0x25c834: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C834u;
    SET_GPR_U32(ctx, 31, 0x25C83Cu);
    ctx->pc = 0x25C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C834u;
    // 0x25c838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C834u, 0x25C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C83Cu;
label_25c83c:
    // 0x25c83c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C83Cu;
    {
        const bool branch_taken_0x25c83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C83Cu;
        // 0x25c840: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c83c) {
            ctx->pc = 0x25C850u;
            goto label_25c850;
        }
    }
    ctx->pc = 0x25C844u;
    // 0x25c844: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x25c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x25c848: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x25C848u;
    {
        const bool branch_taken_0x25c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C848u;
        // 0x25c84c: 0x24710002  addiu       $s1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c848) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C850u;
label_25c850:
    // 0x25c850: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x25c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x25c854: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x25C854u;
    {
        const bool branch_taken_0x25c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C854u;
        // 0x25c858: 0x24710002  addiu       $s1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c854) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C85Cu;
label_25c85c:
    // 0x25c85c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x25c85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x25c860: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c868: 0x0  nop
    ctx->pc = 0x25c868u;
    // NOP
    // 0x25c86c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25c86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c870: 0x0  nop
    ctx->pc = 0x25c870u;
    // NOP
    // 0x25c874: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25C874u;
    {
        const bool branch_taken_0x25c874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c874) {
            ctx->pc = 0x25C89Cu;
            goto label_25c89c;
        }
    }
    ctx->pc = 0x25C87Cu;
    // 0x25c87c: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C87Cu;
    SET_GPR_U32(ctx, 31, 0x25C884u);
    ctx->pc = 0x25C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C87Cu;
    // 0x25c880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C87Cu, 0x25C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C884u;
label_25c884:
    // 0x25c884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C884u;
    {
        const bool branch_taken_0x25c884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C884u;
        // 0x25c888: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c884) {
            ctx->pc = 0x25C894u;
            goto label_25c894;
        }
    }
    ctx->pc = 0x25C88Cu;
    // 0x25c88c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x25C88Cu;
    {
        const bool branch_taken_0x25c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C88Cu;
        // 0x25c890: 0x8c510058  lw          $s1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c88c) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C894u;
label_25c894:
    // 0x25c894: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x25C894u;
    {
        const bool branch_taken_0x25c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C894u;
        // 0x25c898: 0x8c51002c  lw          $s1, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c894) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C89Cu;
label_25c89c:
    // 0x25c89c: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x25c89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x25c8a0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x25c8a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x25c8a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c8a8: 0x0  nop
    ctx->pc = 0x25c8a8u;
    // NOP
    // 0x25c8ac: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x25c8acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c8b0: 0x0  nop
    ctx->pc = 0x25c8b0u;
    // NOP
    // 0x25c8b4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x25C8B4u;
    {
        const bool branch_taken_0x25c8b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c8b4) {
            ctx->pc = 0x25C8E4u;
            goto label_25c8e4;
        }
    }
    ctx->pc = 0x25C8BCu;
    // 0x25c8bc: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C8BCu;
    SET_GPR_U32(ctx, 31, 0x25C8C4u);
    ctx->pc = 0x25C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8BCu;
    // 0x25c8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C8BCu, 0x25C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8C4u;
label_25c8c4:
    // 0x25c8c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C8C4u;
    {
        const bool branch_taken_0x25c8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8C4u;
        // 0x25c8c8: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8c4) {
            ctx->pc = 0x25C8D8u;
            goto label_25c8d8;
        }
    }
    ctx->pc = 0x25C8CCu;
    // 0x25c8cc: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x25c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x25c8d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25C8D0u;
    {
        const bool branch_taken_0x25c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8D0u;
        // 0x25c8d4: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8d0) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C8D8u;
label_25c8d8:
    // 0x25c8d8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x25c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25c8dc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x25C8DCu;
    {
        const bool branch_taken_0x25c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8DCu;
        // 0x25c8e0: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8dc) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C8E4u;
label_25c8e4:
    // 0x25c8e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c8e8: 0x0  nop
    ctx->pc = 0x25c8e8u;
    // NOP
    // 0x25c8ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25c8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c8f0: 0x0  nop
    ctx->pc = 0x25c8f0u;
    // NOP
    // 0x25c8f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x25C8F4u;
    {
        const bool branch_taken_0x25c8f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c8f4) {
            ctx->pc = 0x25C924u;
            goto label_25c924;
        }
    }
    ctx->pc = 0x25C8FCu;
    // 0x25c8fc: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C8FCu;
    SET_GPR_U32(ctx, 31, 0x25C904u);
    ctx->pc = 0x25C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8FCu;
    // 0x25c900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C8FCu, 0x25C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C904u;
label_25c904:
    // 0x25c904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C904u;
    {
        const bool branch_taken_0x25c904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C904u;
        // 0x25c908: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c904) {
            ctx->pc = 0x25C918u;
            goto label_25c918;
        }
    }
    ctx->pc = 0x25C90Cu;
    // 0x25c90c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x25c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x25c910: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25C910u;
    {
        const bool branch_taken_0x25c910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C910u;
        // 0x25c914: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c910) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C918u;
label_25c918:
    // 0x25c918: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x25c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25c91c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25C91Cu;
    {
        const bool branch_taken_0x25c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C91Cu;
        // 0x25c920: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c91c) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C924u;
label_25c924:
    // 0x25c924: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C924u;
    SET_GPR_U32(ctx, 31, 0x25C92Cu);
    ctx->pc = 0x25C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C924u;
    // 0x25c928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C924u, 0x25C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C92Cu;
label_25c92c:
    // 0x25c92c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C92Cu;
    {
        const bool branch_taken_0x25c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C92Cu;
        // 0x25c930: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c92c) {
            ctx->pc = 0x25C940u;
            goto label_25c940;
        }
    }
    ctx->pc = 0x25C934u;
    // 0x25c934: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x25c938: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25C938u;
    {
        const bool branch_taken_0x25c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C938u;
        // 0x25c93c: 0x2471fffe  addiu       $s1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c938) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C940u;
label_25c940:
    // 0x25c940: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25c944: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25C944u;
    {
        const bool branch_taken_0x25c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C944u;
        // 0x25c948: 0x2471fffe  addiu       $s1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c944) {
            ctx->pc = 0x25C984u;
            goto label_25c984;
        }
    }
    ctx->pc = 0x25C94Cu;
label_25c94c:
    // 0x25c94c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25c950: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x25c950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25c954: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x25C954u;
    {
        const bool branch_taken_0x25c954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C954u;
        // 0x25c958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c954) {
            ctx->pc = 0x25CB58u;
            goto label_25cb58;
        }
    }
    ctx->pc = 0x25C95Cu;
    // 0x25c95c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x25c95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x25c960: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c968: 0x0  nop
    ctx->pc = 0x25c968u;
    // NOP
    // 0x25c96c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25c96cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c970: 0x0  nop
    ctx->pc = 0x25c970u;
    // NOP
    // 0x25c974: 0x45020079  bc1fl       . + 4 + (0x79 << 2)
    ctx->pc = 0x25C974u;
    {
        const bool branch_taken_0x25c974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c974) {
            ctx->pc = 0x25C978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C974u;
            // 0x25c978: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CB5Cu;
            goto label_25cb5c;
        }
    }
    ctx->pc = 0x25C97Cu;
    // 0x25c97c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x25c980: 0x8c5100ac  lw          $s1, 0xAC($v0)
    ctx->pc = 0x25c980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_25c984:
    // 0x25c984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c988: 0xc040654  jal         func_101950
    ctx->pc = 0x25C988u;
    SET_GPR_U32(ctx, 31, 0x25C990u);
    ctx->pc = 0x25C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C988u;
    // 0x25c98c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x25C988u, 0x25C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C990u;
label_25c990:
    // 0x25c990: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25c990u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25c994: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x25c994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c998: 0x0  nop
    ctx->pc = 0x25c998u;
    // NOP
    // 0x25c99c: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x25C99Cu;
    {
        const bool branch_taken_0x25c99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c99c) {
            ctx->pc = 0x25C9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C99Cu;
            // 0x25c9a0: 0x4617b000  add.s       $f0, $f22, $f23 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C9E0u;
            goto label_25c9e0;
        }
    }
    ctx->pc = 0x25C9A4u;
    // 0x25c9a4: 0x1e000009  bgtz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C9A4u;
    {
        const bool branch_taken_0x25c9a4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x25C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9A4u;
        // 0x25c9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9a4) {
            ctx->pc = 0x25C9CCu;
            goto label_25c9cc;
        }
    }
    ctx->pc = 0x25C9ACu;
    // 0x25c9ac: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x25c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x25c9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c9b4: 0x0  nop
    ctx->pc = 0x25c9b4u;
    // NOP
    // 0x25c9b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25c9b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25c9bc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x25c9bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c9c0: 0x0  nop
    ctx->pc = 0x25c9c0u;
    // NOP
    // 0x25c9c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25C9C4u;
    {
        const bool branch_taken_0x25c9c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c9c4) {
            ctx->pc = 0x25C9D0u;
            goto label_25c9d0;
        }
    }
    ctx->pc = 0x25C9CCu;
label_25c9cc:
    // 0x25c9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c9d0:
    // 0x25c9d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25C9D0u;
    {
        const bool branch_taken_0x25c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9D0u;
        // 0x25c9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9d0) {
            ctx->pc = 0x25CA04u;
            goto label_25ca04;
        }
    }
    ctx->pc = 0x25C9D8u;
    // 0x25c9d8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x25C9D8u;
    {
        const bool branch_taken_0x25c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9D8u;
        // 0x25c9dc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9d8) {
            ctx->pc = 0x25CB5Cu;
            goto label_25cb5c;
        }
    }
    ctx->pc = 0x25C9E0u;
label_25c9e0:
    // 0x25c9e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25c9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c9e4: 0x0  nop
    ctx->pc = 0x25c9e4u;
    // NOP
    // 0x25c9e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C9E8u;
    {
        const bool branch_taken_0x25c9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9E8u;
        // 0x25c9ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9e8) {
            ctx->pc = 0x25CA04u;
            goto label_25ca04;
        }
    }
    ctx->pc = 0x25C9F0u;
    // 0x25c9f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9f4: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25C9F4u;
    SET_GPR_U32(ctx, 31, 0x25C9FCu);
    ctx->pc = 0x25C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9F4u;
    // 0x25c9f8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25C9F4u, 0x25C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9FCu;
label_25c9fc:
    // 0x25c9fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x25C9FCu;
    {
        const bool branch_taken_0x25c9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9FCu;
        // 0x25ca00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9fc) {
            ctx->pc = 0x25CB58u;
            goto label_25cb58;
        }
    }
    ctx->pc = 0x25CA04u;
label_25ca04:
    // 0x25ca04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25ca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca0c: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25CA0Cu;
    SET_GPR_U32(ctx, 31, 0x25CA14u);
    ctx->pc = 0x25CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA0Cu;
    // 0x25ca10: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25CA0Cu, 0x25CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA14u;
label_25ca14:
    // 0x25ca14: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25ca14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ca18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ca18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca20: 0xc040668  jal         func_1019A0
    ctx->pc = 0x25CA20u;
    SET_GPR_U32(ctx, 31, 0x25CA28u);
    ctx->pc = 0x25CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA20u;
    // 0x25ca24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A0u, 0x25CA20u, 0x25CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA28u;
label_25ca28:
    // 0x25ca28: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x25CA28u;
    SET_GPR_U32(ctx, 31, 0x25CA30u);
    ctx->pc = 0x25CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA28u;
    // 0x25ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x25CA28u, 0x25CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA30u;
label_25ca30:
    // 0x25ca30: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25ca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x25ca34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25ca34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25ca38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ca38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ca3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25ca3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25ca40: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x25ca40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ca44: 0x0  nop
    ctx->pc = 0x25ca44u;
    // NOP
    // 0x25ca48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25CA48u;
    {
        const bool branch_taken_0x25ca48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ca48) {
            ctx->pc = 0x25CA64u;
            goto label_25ca64;
        }
    }
    ctx->pc = 0x25CA50u;
    // 0x25ca50: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x25ca54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25ca54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25ca58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ca58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ca5c: 0x0  nop
    ctx->pc = 0x25ca5cu;
    // NOP
    // 0x25ca60: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x25ca60u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25ca64:
    // 0x25ca64: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x25ca64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x25ca68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25ca68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25ca6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ca6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ca70: 0x0  nop
    ctx->pc = 0x25ca70u;
    // NOP
    // 0x25ca74: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25ca74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ca78: 0x0  nop
    ctx->pc = 0x25ca78u;
    // NOP
    // 0x25ca7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25CA7Cu;
    {
        const bool branch_taken_0x25ca7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA7Cu;
        // 0x25ca80: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca7c) {
            ctx->pc = 0x25CA98u;
            goto label_25ca98;
        }
    }
    ctx->pc = 0x25CA84u;
    // 0x25ca84: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25ca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x25ca88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25ca88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25ca8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ca8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ca90: 0x0  nop
    ctx->pc = 0x25ca90u;
    // NOP
    // 0x25ca94: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25ca94u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25ca98:
    // 0x25ca98: 0x26a24b00  addiu       $v0, $s5, 0x4B00
    ctx->pc = 0x25ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x25ca9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25ca9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25caa0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x25caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x25caa4: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x25CAA4u;
    SET_GPR_U32(ctx, 31, 0x25CAACu);
    ctx->pc = 0x25CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CAA4u;
    // 0x25caa8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x25CAA4u, 0x25CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAACu;
label_25caac:
    // 0x25caac: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x25caacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x25cab0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x25cab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cab4: 0xc0cd7a8  jal         func_335EA0
    ctx->pc = 0x25CAB4u;
    SET_GPR_U32(ctx, 31, 0x25CABCu);
    ctx->pc = 0x25CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CAB4u;
    // 0x25cab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x25CAB4u, 0x25CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CABCu;
label_25cabc:
    // 0x25cabc: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x25cabcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cac0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x25cac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cac4: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x25cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x25cac8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25cac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25cacc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25caccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25cad0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x25cad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25cad4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x25cad4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25cad8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x25cad8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25cadc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x25cadcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25cae0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x25cae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25cae4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x25cae4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x25cae8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x25cae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25caec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25caecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25caf0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x25caf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25caf4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x25caf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25caf8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x25caf8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25cafc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x25cafcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25cb00: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x25cb00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25cb04: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x25cb04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25cb08: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x25cb08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25cb0c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x25cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x25cb10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25cb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb14: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x25cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x25cb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb1c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x25cb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25cb20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25cb20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25cb24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x25cb24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25cb28: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25cb28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25cb2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25cb2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x25cb30: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x25cb30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25cb34: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x25cb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x25cb38: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x25cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x25cb3c: 0xc040680  jal         func_101A00
    ctx->pc = 0x25CB3Cu;
    SET_GPR_U32(ctx, 31, 0x25CB44u);
    ctx->pc = 0x25CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB3Cu;
    // 0x25cb40: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x25CB3Cu, 0x25CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB44u;
label_25cb44:
    // 0x25cb44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb4c: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x25CB4Cu;
    SET_GPR_U32(ctx, 31, 0x25CB54u);
    ctx->pc = 0x25CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB4Cu;
    // 0x25cb50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x25CB4Cu, 0x25CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB54u;
label_25cb54:
    // 0x25cb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25cb58:
    // 0x25cb58: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x25cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_25cb5c:
    // 0x25cb5c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x25cb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25cb60: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x25cb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25cb64: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x25cb64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25cb68: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x25cb68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25cb6c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x25cb6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25cb70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25cb74: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x25cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25cb78: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x25cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25cb7c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x25cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25cb80: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x25cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25cb84: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB84u;
        // 0x25cb88: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CB8Cu;
    // 0x25cb8c: 0x0  nop
    ctx->pc = 0x25cb8cu;
    // NOP
    ctx->pc = 0x25cb90u;
}
