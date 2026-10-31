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

// Function: sub_00276008
// Address: 0x276008 - 0x2761c8
void sub_00276008_0x276008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276008_0x276008");
#endif

    switch (ctx->pc) {
        case 0x27606cu: goto label_27606c;
        case 0x276080u: goto label_276080;
        case 0x276090u: goto label_276090;
        case 0x2760a0u: goto label_2760a0;
        case 0x276170u: goto label_276170;
        case 0x276184u: goto label_276184;
        case 0x276190u: goto label_276190;
        case 0x276198u: goto label_276198;
        case 0x2761a8u: goto label_2761a8;
        default: break;
    }

    ctx->pc = 0x276008u;

    // 0x276008: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x276008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27600c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x27600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x276010: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x276010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x276014: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x276014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x276018: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x276018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x27601c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276020: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x276020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x276024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276028: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x276028u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27602c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27602cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276030: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x276030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x276034: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x276034u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x276038: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x276038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27603c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x27603cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x276040: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x276040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x276044: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x276044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x276048: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x27604c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x276050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276054: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x276054u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276058: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27605c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276060: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x276060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x276064: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x276064u;
    SET_GPR_U32(ctx, 31, 0x27606Cu);
    ctx->pc = 0x276068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276064u;
    // 0x276068: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x276064u, 0x27606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27606Cu;
label_27606c:
    // 0x27606c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27606cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276074: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276078: 0xc040596  jal         func_101658
    ctx->pc = 0x276078u;
    SET_GPR_U32(ctx, 31, 0x276080u);
    ctx->pc = 0x27607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276078u;
    // 0x27607c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x276078u, 0x276080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276080u;
label_276080:
    // 0x276080: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x276084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276088: 0xc095128  jal         func_2544A0
    ctx->pc = 0x276088u;
    SET_GPR_U32(ctx, 31, 0x276090u);
    ctx->pc = 0x27608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276088u;
    // 0x27608c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x276088u, 0x276090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276090u;
label_276090:
    // 0x276090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276098: 0xc095106  jal         func_254418
    ctx->pc = 0x276098u;
    SET_GPR_U32(ctx, 31, 0x2760A0u);
    ctx->pc = 0x27609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276098u;
    // 0x27609c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x276098u, 0x2760A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760A0u;
label_2760a0:
    // 0x2760a0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2760a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2760a4: 0x0  nop
    ctx->pc = 0x2760a4u;
    // NOP
    // 0x2760a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2760A8u;
    {
        const bool branch_taken_0x2760a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2760a8) {
            ctx->pc = 0x2760ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2760A8u;
            // 0x2760ac: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2760B0u;
            goto label_2760b0;
        }
    }
    ctx->pc = 0x2760B0u;
label_2760b0:
    // 0x2760b0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2760b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2760b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2760b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2760b8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2760b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2760bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2760bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2760c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2760c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2760c4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2760c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2760c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2760c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2760cc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2760ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2760d0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2760d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2760d4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2760d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2760d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2760d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2760dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2760dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760e0: 0x0  nop
    ctx->pc = 0x2760e0u;
    // NOP
    // 0x2760e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2760e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2760e8: 0x0  nop
    ctx->pc = 0x2760e8u;
    // NOP
    // 0x2760ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2760ECu;
    {
        const bool branch_taken_0x2760ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2760ec) {
            ctx->pc = 0x276104u;
            goto label_276104;
        }
    }
    ctx->pc = 0x2760F4u;
    // 0x2760f4: 0x0  nop
    ctx->pc = 0x2760f4u;
    // NOP
    // 0x2760f8: 0x0  nop
    ctx->pc = 0x2760f8u;
    // NOP
    // 0x2760fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2760fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276100: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x276100u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_276104:
    // 0x276104: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x276104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x276108: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x27610c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x27610cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x276110: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x276110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x276114: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x276114u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x276118: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x276118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27611c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x27611cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276120: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x276120u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x276124: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x276124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276128: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x276128u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x27612c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x27612cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x276130: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x276130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276134: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x276138: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x276138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x27613c: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x27613cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276140: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276140u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276144: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x276144u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x276148: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x276148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x27614c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x27614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x276150: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x276150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x276154: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x276154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276158: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x276158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27615c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x27615cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x276160: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x276160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x276164: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x276164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x276168: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x276168u;
    SET_GPR_U32(ctx, 31, 0x276170u);
    ctx->pc = 0x27616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276168u;
    // 0x27616c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x276168u, 0x276170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276170u;
label_276170:
    // 0x276170: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x276170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276174: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x276178: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x276178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27617c: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x27617Cu;
    SET_GPR_U32(ctx, 31, 0x276184u);
    ctx->pc = 0x276180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27617Cu;
    // 0x276180: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x27617Cu, 0x276184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276184u;
label_276184:
    // 0x276184: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x276184u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x276188: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x276188u;
    SET_GPR_U32(ctx, 31, 0x276190u);
    ctx->pc = 0x27618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276188u;
    // 0x27618c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276188u, 0x276190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276190u;
label_276190:
    // 0x276190: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x276190u;
    SET_GPR_U32(ctx, 31, 0x276198u);
    ctx->pc = 0x276194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276190u;
    // 0x276194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276190u, 0x276198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276198u;
label_276198:
    // 0x276198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27619c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27619cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2761a0: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x2761A0u;
    SET_GPR_U32(ctx, 31, 0x2761A8u);
    ctx->pc = 0x2761A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2761A0u;
    // 0x2761a4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2761A0u, 0x2761A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2761A8u;
label_2761a8:
    // 0x2761a8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2761a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2761ac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2761acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2761b0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2761b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2761b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2761b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2761b8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2761b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2761bc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2761bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2761c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2761C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2761C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761C0u;
        // 0x2761c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2761C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2761C8u;
}
