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

// Function: sub_00170B28
// Address: 0x170b28 - 0x170c88
void sub_00170B28_0x170b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B28_0x170b28");
#endif

    switch (ctx->pc) {
        case 0x170b94u: goto label_170b94;
        case 0x170bd0u: goto label_170bd0;
        case 0x170c04u: goto label_170c04;
        case 0x170c40u: goto label_170c40;
        default: break;
    }

    ctx->pc = 0x170b28u;

    // 0x170b28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x170b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x170b2c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x170b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x170b30: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x170b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x170b34: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x170b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x170b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x170b3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x170b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b40: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x170b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x170b44: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x170b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x170b48: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x170b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x170b4c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x170b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x170b50: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x170b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x170b54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170b58: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x170b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170b5c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x170B5Cu;
    {
        const bool branch_taken_0x170b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B5Cu;
        // 0x170b60: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b5c) {
            ctx->pc = 0x170C58u;
            goto label_170c58;
        }
    }
    ctx->pc = 0x170B64u;
    // 0x170b64: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x170b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x170b68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x170b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x170b6c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x170b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x170b70: 0x2442cc08  addiu       $v0, $v0, -0x33F8
    ctx->pc = 0x170b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953992));
    // 0x170b74: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x170b78: 0x3c1740c0  lui         $s7, 0x40C0
    ctx->pc = 0x170b78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16576 << 16));
    // 0x170b7c: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x170b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    // 0x170b80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x170b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b84: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x170b84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170b88: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x170b88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x170b8c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x170B8Cu;
    SET_GPR_U32(ctx, 31, 0x170B94u);
    ctx->pc = 0x170B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B8Cu;
    // 0x170b90: 0x92660006  lbu         $a2, 0x6($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x170B8Cu, 0x170B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B94u;
label_170b94:
    // 0x170b94: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x170b94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170b98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x170b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b9c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x170b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170ba0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x170ba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170ba4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x170ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170ba8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x170ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170bac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x170bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170bb0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x170bb0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x170bb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x170bb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x170bb8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x170bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170bbc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x170bbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170bc0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x170bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x170bc4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x170bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x170bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bcc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x170bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170bd0:
    // 0x170bd0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x170bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x170bd4: 0x9203fffd  lbu         $v1, -0x3($s0)
    ctx->pc = 0x170bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967293)));
    // 0x170bd8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x170bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x170bdc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x170BDCu;
    {
        const bool branch_taken_0x170bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BDCu;
        // 0x170be0: 0x306200ef  andi        $v0, $v1, 0xEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)239);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bdc) {
            ctx->pc = 0x170C48u;
            goto label_170c48;
        }
    }
    ctx->pc = 0x170BE4u;
    // 0x170be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170be8: 0xa202fffd  sb          $v0, -0x3($s0)
    ctx->pc = 0x170be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x170bec: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x170becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x170bf0: 0x24080066  addiu       $t0, $zero, 0x66
    ctx->pc = 0x170bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x170bf4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x170bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x170bf8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x170bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x170bfc: 0xc05bf64  jal         func_16FD90
    ctx->pc = 0x170BFCu;
    SET_GPR_U32(ctx, 31, 0x170C04u);
    ctx->pc = 0x170C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BFCu;
    // 0x170c00: 0x92660004  lbu         $a2, 0x4($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FD90u, 0x170BFCu, 0x170C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C04u;
label_170c04:
    // 0x170c04: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x170c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x170c08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x170c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c14: 0x7e03ffc0  sq          $v1, -0x40($s0)
    ctx->pc = 0x170c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967232), GPR_VEC(ctx, 3));
    // 0x170c18: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x170c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170c20: 0x48b71000  qmtc2.ni    $s7, $vf2
    ctx->pc = 0x170c20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 23));
    // 0x170c24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170c28: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x170c28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170c2c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x170c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x170c30: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x170c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x170c34: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x170c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x170c38: 0xc05c180  jal         func_170600
    ctx->pc = 0x170C38u;
    SET_GPR_U32(ctx, 31, 0x170C40u);
    ctx->pc = 0x170C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C38u;
    // 0x170c3c: 0x7e02ffd0  sq          $v0, -0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967248), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170600u, 0x170C38u, 0x170C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C40u;
label_170c40:
    // 0x170c40: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x170C40u;
    {
        const bool branch_taken_0x170c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c40) {
            ctx->pc = 0x170C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170C40u;
            // 0x170c44: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170C5Cu;
            goto label_170c5c;
        }
    }
    ctx->pc = 0x170C48u;
label_170c48:
    // 0x170c48: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x170c48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x170c4c: 0x2ea20040  sltiu       $v0, $s5, 0x40
    ctx->pc = 0x170c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x170c50: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x170C50u;
    {
        const bool branch_taken_0x170c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C50u;
        // 0x170c54: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c50) {
            ctx->pc = 0x170BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170bd0;
        }
    }
    ctx->pc = 0x170C58u;
label_170c58:
    // 0x170c58: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x170c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_170c5c:
    // 0x170c5c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x170c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x170c60: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x170c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x170c64: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x170c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170c68: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x170c68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170c6c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x170c6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170c70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x170c70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170c74: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x170c74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x170c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x170C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C7Cu;
        // 0x170c80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170C84u;
    // 0x170c84: 0x0  nop
    ctx->pc = 0x170c84u;
    // NOP
    ctx->pc = 0x170c88u;
}
