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

// Function: sub_00247A50
// Address: 0x247a50 - 0x247be8
void sub_00247A50_0x247a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247A50_0x247a50");
#endif

    switch (ctx->pc) {
        case 0x247a88u: goto label_247a88;
        case 0x247a9cu: goto label_247a9c;
        case 0x247abcu: goto label_247abc;
        case 0x247ad4u: goto label_247ad4;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b54u: goto label_247b54;
        case 0x247b68u: goto label_247b68;
        case 0x247b88u: goto label_247b88;
        case 0x247ba0u: goto label_247ba0;
        case 0x247bacu: goto label_247bac;
        default: break;
    }

    ctx->pc = 0x247a50u;

    // 0x247a50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x247a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x247a54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x247a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x247a58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x247a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x247a5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x247a5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a60: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x247a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x247a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x247a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a68: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x247a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x247a6c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x247a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x247a70: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x247a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x247a74: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x247a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x247a78: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x247a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x247a7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x247a80: 0xc091e56  jal         func_247958
    ctx->pc = 0x247A80u;
    SET_GPR_U32(ctx, 31, 0x247A88u);
    ctx->pc = 0x247A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A80u;
    // 0x247a84: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x247A80u, 0x247A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A88u;
label_247a88:
    // 0x247a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a8c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x247A8Cu;
    {
        const bool branch_taken_0x247a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A8Cu;
        // 0x247a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a8c) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247A94u;
    // 0x247a94: 0xc0941c2  jal         func_250708
    ctx->pc = 0x247A94u;
    SET_GPR_U32(ctx, 31, 0x247A9Cu);
    ctx->pc = 0x247A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A94u;
    // 0x247a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x247A94u, 0x247A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A9Cu;
label_247a9c:
    // 0x247a9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247aa0: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x247AA0u;
    {
        const bool branch_taken_0x247aa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AA0u;
        // 0x247aa4: 0x26b302b0  addiu       $s3, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aa0) {
            ctx->pc = 0x247BB4u;
            goto label_247bb4;
        }
    }
    ctx->pc = 0x247AA8u;
    // 0x247aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247aac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x247aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ab4: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x247AB4u;
    SET_GPR_U32(ctx, 31, 0x247ABCu);
    ctx->pc = 0x247AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AB4u;
    // 0x247ab8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x247AB4u, 0x247ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247ABCu;
label_247abc:
    // 0x247abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247ac0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x247AC0u;
    {
        const bool branch_taken_0x247ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x247AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AC0u;
        // 0x247ac4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ac0) {
            ctx->pc = 0x247B10u;
            goto label_247b10;
        }
    }
    ctx->pc = 0x247AC8u;
    // 0x247ac8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247acc: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x247ACCu;
    SET_GPR_U32(ctx, 31, 0x247AD4u);
    ctx->pc = 0x247AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247ACCu;
    // 0x247ad0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x247ACCu, 0x247AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AD4u;
label_247ad4:
    // 0x247ad4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x247ad4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247adc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x247adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x247ae0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x247ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x247ae4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x247ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x247ae8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x247ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x247aec: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x247aecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x247af0: 0x4a0003bf  vwaitq
    ctx->pc = 0x247af0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x247af4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x247af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x247af8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x247af8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x247afc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x247afcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247b00: 0x0  nop
    ctx->pc = 0x247b00u;
    // NOP
    // 0x247b04: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x247b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x247b08: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x247B08u;
    {
        const bool branch_taken_0x247b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B08u;
        // 0x247b0c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b08) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247B10u;
label_247b10:
    // 0x247b10: 0x12120007  beq         $s0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x247B10u;
    {
        const bool branch_taken_0x247b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x247B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B10u;
        // 0x247b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b10) {
            ctx->pc = 0x247B30u;
            goto label_247b30;
        }
    }
    ctx->pc = 0x247B18u;
    // 0x247b18: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x247b18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x247b1c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x247B1Cu;
    {
        const bool branch_taken_0x247b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B1Cu;
        // 0x247b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b1c) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247B24u;
    // 0x247b24: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x247b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x247b28: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x247B28u;
    {
        const bool branch_taken_0x247b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B28u;
        // 0x247b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b28) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247B30u;
label_247b30:
    // 0x247b30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x247b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b34: 0xc094454  jal         func_251150
    ctx->pc = 0x247B34u;
    SET_GPR_U32(ctx, 31, 0x247B3Cu);
    ctx->pc = 0x247B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B34u;
    // 0x247b38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x247B34u, 0x247B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B3Cu;
label_247b3c:
    // 0x247b3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x247b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b40: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x247B40u;
    {
        const bool branch_taken_0x247b40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B40u;
        // 0x247b44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b40) {
            ctx->pc = 0x247BB4u;
            goto label_247bb4;
        }
    }
    ctx->pc = 0x247B48u;
    // 0x247b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b4c: 0xc094454  jal         func_251150
    ctx->pc = 0x247B4Cu;
    SET_GPR_U32(ctx, 31, 0x247B54u);
    ctx->pc = 0x247B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B4Cu;
    // 0x247b50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x247B4Cu, 0x247B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B54u;
label_247b54:
    // 0x247b54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x247b54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b58: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x247B58u;
    {
        const bool branch_taken_0x247b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B58u;
        // 0x247b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b58) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247B60u;
    // 0x247b60: 0xc087502  jal         func_21D408
    ctx->pc = 0x247B60u;
    SET_GPR_U32(ctx, 31, 0x247B68u);
    ctx->pc = 0x247B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B60u;
    // 0x247b64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x247B60u, 0x247B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B68u;
label_247b68:
    // 0x247b68: 0x944a00f4  lhu         $t2, 0xF4($v0)
    ctx->pc = 0x247b68u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x247b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b74: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x247b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b78: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x247b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x247b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b80: 0xc094472  jal         func_2511C8
    ctx->pc = 0x247B80u;
    SET_GPR_U32(ctx, 31, 0x247B88u);
    ctx->pc = 0x247B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B80u;
    // 0x247b84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2511C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2511C8u, 0x247B80u, 0x247B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B88u;
label_247b88:
    // 0x247b88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b8c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x247B8Cu;
    {
        const bool branch_taken_0x247b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B8Cu;
        // 0x247b90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b8c) {
            ctx->pc = 0x247BB4u;
            goto label_247bb4;
        }
    }
    ctx->pc = 0x247B94u;
    // 0x247b94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b98: 0xc093982  jal         func_24E608
    ctx->pc = 0x247B98u;
    SET_GPR_U32(ctx, 31, 0x247BA0u);
    ctx->pc = 0x247B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B98u;
    // 0x247b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E608u, 0x247B98u, 0x247BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BA0u;
label_247ba0:
    // 0x247ba0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x247ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x247ba4: 0xc0945a0  jal         func_251680
    ctx->pc = 0x247BA4u;
    SET_GPR_U32(ctx, 31, 0x247BACu);
    ctx->pc = 0x247BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BA4u;
    // 0x247ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251680u, 0x247BA4u, 0x247BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BACu;
label_247bac:
    // 0x247bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247BACu;
    {
        const bool branch_taken_0x247bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BACu;
        // 0x247bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bac) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247BB4u;
label_247bb4:
    // 0x247bb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x247bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247bb8:
    // 0x247bb8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x247bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x247bbc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x247bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x247bc0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x247bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x247bc4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x247bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247bc8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x247bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247bcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x247bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247bd0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x247bd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247bd4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x247bd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x247BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BDCu;
        // 0x247be0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247BE4u;
    // 0x247be4: 0x0  nop
    ctx->pc = 0x247be4u;
    // NOP
    ctx->pc = 0x247be8u;
}
