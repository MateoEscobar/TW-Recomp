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

// Function: sub_00251890
// Address: 0x251890 - 0x251a00
void sub_00251890_0x251890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251890_0x251890");
#endif

    ctx->pc = 0x251890u;

    // 0x251890: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x251890u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251894: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x251894u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251898: 0x8d890010  lw          $t1, 0x10($t4)
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x25189c: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x25189cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2518a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2518a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2518a4: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2518a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518a8: 0x1494021  addu        $t0, $t2, $t1
    ctx->pc = 0x2518a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2518ac: 0x8c47059c  lw          $a3, 0x59C($v0)
    ctx->pc = 0x2518acu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x51059Cu));
    // 0x2518b0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2518b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2518b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2518b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2518b8: 0x79830000  lq          $v1, 0x0($t4)
    ctx->pc = 0x2518b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2518bc: 0x30ceffff  andi        $t6, $a2, 0xFFFF
    ctx->pc = 0x2518bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2518c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2518c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2518c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2518c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2518c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2518c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2518cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2518ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2518d0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2518d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2518d4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2518d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2518d8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2518d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2518dc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2518dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2518e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2518e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2518e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2518e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2518e8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2518e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2518ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2518ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2518f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2518f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2518f4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2518f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2518f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2518f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2518fc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2518fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251900: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x251900u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x251904: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x251904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x251908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25190c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x25190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x251910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251914: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x251914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x251918: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25191c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x25191cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251920: 0x14e5001d  bne         $a3, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x251920u;
    {
        const bool branch_taken_0x251920 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x251924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251920u;
        // 0x251924: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251920) {
            ctx->pc = 0x251998u;
            goto label_251998;
        }
    }
    ctx->pc = 0x251928u;
    // 0x251928: 0x31a20100  andi        $v0, $t5, 0x100
    ctx->pc = 0x251928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)256);
    // 0x25192c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25192Cu;
    {
        const bool branch_taken_0x25192c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25192Cu;
        // 0x251930: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25192c) {
            ctx->pc = 0x25199Cu;
            goto label_25199c;
        }
    }
    ctx->pc = 0x251934u;
    // 0x251934: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x251934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x251938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251938u;
    {
        const bool branch_taken_0x251938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251938u;
        // 0x25193c: 0x24c200c8  addiu       $v0, $a2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251938) {
            ctx->pc = 0x25194Cu;
            goto label_25194c;
        }
    }
    ctx->pc = 0x251940u;
    // 0x251940: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x251940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x251944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251944u;
    {
        const bool branch_taken_0x251944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251944u;
        // 0x251948: 0x24c20140  addiu       $v0, $a2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251944) {
            ctx->pc = 0x25195Cu;
            goto label_25195c;
        }
    }
    ctx->pc = 0x25194Cu;
label_25194c:
    // 0x25194c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x25194cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251950: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x251950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x251954: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x251954u;
    {
        const bool branch_taken_0x251954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251954u;
        // 0x251958: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251954) {
            ctx->pc = 0x2519A4u;
            goto label_2519a4;
        }
    }
    ctx->pc = 0x25195Cu;
label_25195c:
    // 0x25195c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x25195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x251960: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251960u;
    {
        const bool branch_taken_0x251960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251960u;
        // 0x251964: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251960) {
            ctx->pc = 0x251980u;
            goto label_251980;
        }
    }
    ctx->pc = 0x251968u;
    // 0x251968: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x251968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x25196c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25196Cu;
    {
        const bool branch_taken_0x25196c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x251970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25196Cu;
        // 0x251970: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25196c) {
            ctx->pc = 0x251980u;
            goto label_251980;
        }
    }
    ctx->pc = 0x251974u;
    // 0x251974: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x251974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x251978u;
    {
        const bool branch_taken_0x251978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251978u;
        // 0x25197c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251978) {
            ctx->pc = 0x2519A4u;
            goto label_2519a4;
        }
    }
    ctx->pc = 0x251980u;
label_251980:
    // 0x251980: 0xb28c0  sll         $a1, $t3, 3
    ctx->pc = 0x251980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x251984: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251984u;
    {
        const bool branch_taken_0x251984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251984u;
        // 0x251988: 0x8d830010  lw          $v1, 0x10($t4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251984) {
            ctx->pc = 0x2519A4u;
            goto label_2519a4;
        }
    }
    ctx->pc = 0x25198Cu;
    // 0x25198c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x25198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x251990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251990u;
    {
        const bool branch_taken_0x251990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251990u;
        // 0x251994: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251990) {
            ctx->pc = 0x2519A4u;
            goto label_2519a4;
        }
    }
    ctx->pc = 0x251998u;
label_251998:
    // 0x251998: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x251998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_25199c:
    // 0x25199c: 0xb28c0  sll         $a1, $t3, 3
    ctx->pc = 0x25199cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2519a0: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x2519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_2519a4:
    // 0x2519a4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2519a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2519a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2519a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2519ac: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2519ACu;
    {
        const bool branch_taken_0x2519ac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2519ac) {
            ctx->pc = 0x2519B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519ACu;
            // 0x2519b0: 0x9182001f  lbu         $v0, 0x1F($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519C0u;
            goto label_2519c0;
        }
    }
    ctx->pc = 0x2519B4u;
    // 0x2519b4: 0x24c20640  addiu       $v0, $a2, 0x640
    ctx->pc = 0x2519b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1600));
    // 0x2519b8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2519b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2519bc: 0x9182001f  lbu         $v0, 0x1F($t4)
    ctx->pc = 0x2519bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 31)));
label_2519c0:
    // 0x2519c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2519C0u;
    {
        const bool branch_taken_0x2519c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519C0u;
        // 0x2519c4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519c0) {
            ctx->pc = 0x2519DCu;
            goto label_2519dc;
        }
    }
    ctx->pc = 0x2519C8u;
    // 0x2519c8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2519c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2519cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2519ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2519d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2519d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2519d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2519d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2519d8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2519d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2519dc:
    // 0x2519dc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2519dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2519e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2519e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2519e4: 0x1c61021  addu        $v0, $t6, $a2
    ctx->pc = 0x2519e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x2519e8: 0x62202a  slt         $a0, $v1, $v0
    ctx->pc = 0x2519e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2519ec: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2519ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2519f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2519f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2519f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2519F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2519F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519F4u;
        // 0x2519f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2519F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2519FCu;
    // 0x2519fc: 0x0  nop
    ctx->pc = 0x2519fcu;
    // NOP
    ctx->pc = 0x251a00u;
}
