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

// Function: sub_00250960
// Address: 0x250960 - 0x250b10
void sub_00250960_0x250960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250960_0x250960");
#endif

    switch (ctx->pc) {
        case 0x250998u: goto label_250998;
        case 0x250a38u: goto label_250a38;
        case 0x250a78u: goto label_250a78;
        default: break;
    }

    ctx->pc = 0x250960u;

    // 0x250960: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x250960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x250964: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250968: 0x8c4a0594  lw          $t2, 0x594($v0)
    ctx->pc = 0x250968u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x510594u));
    // 0x25096c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x25096cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250970: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x250970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x250974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250978: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x250978u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25097c: 0x19400025  blez        $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x25097Cu;
    {
        const bool branch_taken_0x25097c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x250980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25097Cu;
        // 0x250980: 0x3c180051  lui         $t8, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25097c) {
            ctx->pc = 0x250A14u;
            goto label_250a14;
        }
    }
    ctx->pc = 0x250984u;
    // 0x250984: 0x8f030590  lw          $v1, 0x590($t8)
    ctx->pc = 0x250984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 1424)));
    // 0x250988: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x250988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x25098c: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x25098cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250990: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x250990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250994: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x250994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_250998:
    // 0x250998: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x250998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x25099c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x25099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2509a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2509A0u;
    {
        const bool branch_taken_0x2509a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509A0u;
        // 0x2509a4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509a0) {
            ctx->pc = 0x250A08u;
            goto label_250a08;
        }
    }
    ctx->pc = 0x2509A8u;
    // 0x2509a8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2509a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2509ac: 0x79830000  lq          $v1, 0x0($t4)
    ctx->pc = 0x2509acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2509b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2509b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2509b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2509b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2509b8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2509b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2509bc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2509bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2509c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2509c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2509c4: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x2509c4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2509c8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2509c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2509cc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2509ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2509d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2509d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2509d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2509d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2509d8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2509d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2509dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2509dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2509e0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2509e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2509e4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2509e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2509e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2509e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2509ec: 0x0  nop
    ctx->pc = 0x2509ecu;
    // NOP
    // 0x2509f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2509f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2509f4: 0x0  nop
    ctx->pc = 0x2509f4u;
    // NOP
    // 0x2509f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2509F8u;
    {
        const bool branch_taken_0x2509f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2509FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509F8u;
        // 0x2509fc: 0x7fa80000  sq          $t0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509f8) {
            ctx->pc = 0x250A08u;
            goto label_250a08;
        }
    }
    ctx->pc = 0x250A00u;
    // 0x250a00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x250a00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x250a04: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x250a04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_250a08:
    // 0x250a08: 0x5d40ffe3  bgtzl       $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x250A08u;
    {
        const bool branch_taken_0x250a08 = (GPR_S32(ctx, 10) > 0);
        if (branch_taken_0x250a08) {
            ctx->pc = 0x250A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A08u;
            // 0x250a0c: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250998;
        }
    }
    ctx->pc = 0x250A10u;
    // 0x250a10: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x250a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
label_250a14:
    // 0x250a14: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x250a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x250a18: 0x8f020590  lw          $v0, 0x590($t8)
    ctx->pc = 0x250a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 1424)));
    // 0x250a1c: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x250a1cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250a24: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x250a24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250a28: 0x85620014  lh          $v0, 0x14($t3)
    ctx->pc = 0x250a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x250a2c: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x250A2Cu;
    {
        const bool branch_taken_0x250a2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x250A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A2Cu;
        // 0x250a30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a2c) {
            ctx->pc = 0x250AD8u;
            goto label_250ad8;
        }
    }
    ctx->pc = 0x250A34u;
    // 0x250a34: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x250a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_250a38:
    // 0x250a38: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x250a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x250a3c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x250a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x250a40: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x250a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250a44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x250a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x250a48: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x250A48u;
    {
        const bool branch_taken_0x250a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250a48) {
            ctx->pc = 0x250A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A48u;
            // 0x250a4c: 0x85620014  lh          $v0, 0x14($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250AC4u;
            goto label_250ac4;
        }
    }
    ctx->pc = 0x250A50u;
    // 0x250a50: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x250a50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250a54: 0x85220014  lh          $v0, 0x14($t1)
    ctx->pc = 0x250a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x250a58: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x250A58u;
    {
        const bool branch_taken_0x250a58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x250A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A58u;
        // 0x250a5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a58) {
            ctx->pc = 0x250AC0u;
            goto label_250ac0;
        }
    }
    ctx->pc = 0x250A60u;
    // 0x250a60: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x250a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x250a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250a68: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x250a68u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a6c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x250a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x250a70: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x250a70u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a74: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x250a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_250a78:
    // 0x250a78: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x250a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x250a7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250a80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250a84: 0x548b000a  bnel        $a0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x250A84u;
    {
        const bool branch_taken_0x250a84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        if (branch_taken_0x250a84) {
            ctx->pc = 0x250A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A84u;
            // 0x250a88: 0x85220014  lh          $v0, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250AB0u;
            goto label_250ab0;
        }
    }
    ctx->pc = 0x250A8Cu;
    // 0x250a8c: 0x8dc40590  lw          $a0, 0x590($t6)
    ctx->pc = 0x250a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1424)));
    // 0x250a90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250a98: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x250a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x250a9c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x250a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x250aa0: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x250aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x250aa4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x250aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x250aa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x250AA8u;
    {
        const bool branch_taken_0x250aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AA8u;
        // 0x250aac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250aa8) {
            ctx->pc = 0x250AFCu;
            goto label_250afc;
        }
    }
    ctx->pc = 0x250AB0u;
label_250ab0:
    // 0x250ab0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x250ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x250ab4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x250ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250ab8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x250AB8u;
    {
        const bool branch_taken_0x250ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250ab8) {
            ctx->pc = 0x250ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250AB8u;
            // 0x250abc: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250a78;
        }
    }
    ctx->pc = 0x250AC0u;
label_250ac0:
    // 0x250ac0: 0x85620014  lh          $v0, 0x14($t3)
    ctx->pc = 0x250ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
label_250ac4:
    // 0x250ac4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x250ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x250ac8: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x250ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250acc: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x250ACCu;
    {
        const bool branch_taken_0x250acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250acc) {
            ctx->pc = 0x250AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250ACCu;
            // 0x250ad0: 0x8d630010  lw          $v1, 0x10($t3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250a38;
        }
    }
    ctx->pc = 0x250AD4u;
    // 0x250ad4: 0x85620014  lh          $v0, 0x14($t3)
    ctx->pc = 0x250ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
label_250ad8:
    // 0x250ad8: 0x15420004  bne         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250AD8u;
    {
        const bool branch_taken_0x250ad8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x250ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AD8u;
        // 0x250adc: 0x8f020590  lw          $v0, 0x590($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ad8) {
            ctx->pc = 0x250AECu;
            goto label_250aec;
        }
    }
    ctx->pc = 0x250AE0u;
    // 0x250ae0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x250ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x250ae4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x250ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x250ae8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x250ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_250aec:
    // 0x250aec: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x250aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x250af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250af8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_250afc:
    // 0x250afc: 0x0  nop
    ctx->pc = 0x250afcu;
    // NOP
    // 0x250b00: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x250B00u;
    {
        const bool branch_taken_0x250b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250b00) {
            ctx->pc = 0x250B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250B00u;
            // 0x250b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250B08u;
            goto label_250b08;
        }
    }
    ctx->pc = 0x250B08u;
label_250b08:
    // 0x250b08: 0x3e00008  jr          $ra
    ctx->pc = 0x250B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B08u;
        // 0x250b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B10u;
}
