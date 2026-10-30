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

// Function: sub_0024E478
// Address: 0x24e478 - 0x24e608
void sub_0024E478_0x24e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E478_0x24e478");
#endif

    switch (ctx->pc) {
        case 0x24e4b0u: goto label_24e4b0;
        case 0x24e4ccu: goto label_24e4cc;
        case 0x24e538u: goto label_24e538;
        case 0x24e570u: goto label_24e570;
        case 0x24e588u: goto label_24e588;
        case 0x24e5acu: goto label_24e5ac;
        case 0x24e5c4u: goto label_24e5c4;
        case 0x24e5d0u: goto label_24e5d0;
        default: break;
    }

    ctx->pc = 0x24e478u;

    // 0x24e478: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24e478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24e47c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x24e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x24e480: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x24e480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x24e484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e488: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24e48c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24e48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e490: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x24e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x24e494: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24e494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e498: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x24e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x24e49c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x24e49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x24e4a0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x24e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x24e4a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24e4a8: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24E4A8u;
    SET_GPR_U32(ctx, 31, 0x24E4B0u);
    ctx->pc = 0x24E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4A8u;
    // 0x24e4ac: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24E4A8u, 0x24E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4B0u;
label_24e4b0:
    // 0x24e4b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24e4b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4b4: 0x12600048  beqz        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x24E4B4u;
    {
        const bool branch_taken_0x24e4b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4B4u;
        // 0x24e4b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4b4) {
            ctx->pc = 0x24E5D8u;
            goto label_24e5d8;
        }
    }
    ctx->pc = 0x24E4BCu;
    // 0x24e4bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4c4: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x24E4C4u;
    SET_GPR_U32(ctx, 31, 0x24E4CCu);
    ctx->pc = 0x24E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4C4u;
    // 0x24e4c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x24E4C4u, 0x24E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4CCu;
label_24e4cc:
    // 0x24e4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e4d0: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24E4D0u;
    {
        const bool branch_taken_0x24e4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4D0u;
        // 0x24e4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4d0) {
            ctx->pc = 0x24E530u;
            goto label_24e530;
        }
    }
    ctx->pc = 0x24E4D8u;
    // 0x24e4d8: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x24e4d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24e4dc: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x24e4dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e4e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e4e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e4e4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24e4e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24e4e8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e4e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e4ec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e4ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24e4f0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e4f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x24e4f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e4f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e4f8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x24e4f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e4fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24e4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e500: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24e500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e504: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x24e504u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x24e508: 0x4a0003bf  vwaitq
    ctx->pc = 0x24e508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24e50c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x24e50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e510: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x24e510u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x24e514: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x24e514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x24e518: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24e518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e51c: 0x0  nop
    ctx->pc = 0x24e51cu;
    // NOP
    // 0x24e520: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x24e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x24e524: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x24e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x24e528: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x24E528u;
    {
        const bool branch_taken_0x24e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E528u;
        // 0x24e52c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e528) {
            ctx->pc = 0x24E5DCu;
            goto label_24e5dc;
        }
    }
    ctx->pc = 0x24E530u;
label_24e530:
    // 0x24e530: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24E530u;
    SET_GPR_U32(ctx, 31, 0x24E538u);
    ctx->pc = 0x24E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E530u;
    // 0x24e534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24E530u, 0x24E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E538u;
label_24e538:
    // 0x24e538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e53c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24E53Cu;
    {
        const bool branch_taken_0x24e53c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E53Cu;
        // 0x24e540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e53c) {
            ctx->pc = 0x24E5DCu;
            goto label_24e5dc;
        }
    }
    ctx->pc = 0x24E544u;
    // 0x24e544: 0x52130007  beql        $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E544u;
    {
        const bool branch_taken_0x24e544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x24e544) {
            ctx->pc = 0x24E548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E544u;
            // 0x24e548: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E564u;
            goto label_24e564;
        }
    }
    ctx->pc = 0x24E54Cu;
    // 0x24e54c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x24e54cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24e550: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24E550u;
    {
        const bool branch_taken_0x24e550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E550u;
        // 0x24e554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e550) {
            ctx->pc = 0x24E5DCu;
            goto label_24e5dc;
        }
    }
    ctx->pc = 0x24E558u;
    // 0x24e558: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x24e558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x24e55c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24E55Cu;
    {
        const bool branch_taken_0x24e55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E55Cu;
        // 0x24e560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e55c) {
            ctx->pc = 0x24E5D8u;
            goto label_24e5d8;
        }
    }
    ctx->pc = 0x24E564u;
label_24e564:
    // 0x24e564: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e568: 0xc094454  jal         func_251150
    ctx->pc = 0x24E568u;
    SET_GPR_U32(ctx, 31, 0x24E570u);
    ctx->pc = 0x24E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E568u;
    // 0x24e56c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x24E568u, 0x24E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E570u;
label_24e570:
    // 0x24e570: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24e570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e574: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x24E574u;
    {
        const bool branch_taken_0x24e574 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E574u;
        // 0x24e578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e574) {
            ctx->pc = 0x24E5D8u;
            goto label_24e5d8;
        }
    }
    ctx->pc = 0x24E57Cu;
    // 0x24e57c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24e57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e580: 0xc094454  jal         func_251150
    ctx->pc = 0x24E580u;
    SET_GPR_U32(ctx, 31, 0x24E588u);
    ctx->pc = 0x24E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E580u;
    // 0x24e584: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x24E580u, 0x24E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E588u;
label_24e588:
    // 0x24e588: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E588u;
    {
        const bool branch_taken_0x24e588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E588u;
        // 0x24e58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e588) {
            ctx->pc = 0x24E5D8u;
            goto label_24e5d8;
        }
    }
    ctx->pc = 0x24E590u;
    // 0x24e590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e594: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x24e594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e598: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x24e598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e59c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x24e59cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24e5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5a4: 0xc094472  jal         func_2511C8
    ctx->pc = 0x24E5A4u;
    SET_GPR_U32(ctx, 31, 0x24E5ACu);
    ctx->pc = 0x24E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5A4u;
    // 0x24e5a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2511C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2511C8u, 0x24E5A4u, 0x24E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5ACu;
label_24e5ac:
    // 0x24e5ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E5B0u;
    {
        const bool branch_taken_0x24e5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5B0u;
        // 0x24e5b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5b0) {
            ctx->pc = 0x24E5D8u;
            goto label_24e5d8;
        }
    }
    ctx->pc = 0x24E5B8u;
    // 0x24e5b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5bc: 0xc093982  jal         func_24E608
    ctx->pc = 0x24E5BCu;
    SET_GPR_U32(ctx, 31, 0x24E5C4u);
    ctx->pc = 0x24E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5BCu;
    // 0x24e5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E608u, 0x24E5BCu, 0x24E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5C4u;
label_24e5c4:
    // 0x24e5c4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x24e5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x24e5c8: 0xc0945a0  jal         func_251680
    ctx->pc = 0x24E5C8u;
    SET_GPR_U32(ctx, 31, 0x24E5D0u);
    ctx->pc = 0x24E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5C8u;
    // 0x24e5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251680u, 0x24E5C8u, 0x24E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5D0u;
label_24e5d0:
    // 0x24e5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24E5D0u;
    {
        const bool branch_taken_0x24e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5D0u;
        // 0x24e5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5d0) {
            ctx->pc = 0x24E5DCu;
            goto label_24e5dc;
        }
    }
    ctx->pc = 0x24E5D8u;
label_24e5d8:
    // 0x24e5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24e5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e5dc:
    // 0x24e5dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x24e5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e5e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x24e5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e5e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x24e5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e5e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x24e5e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e5ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x24e5ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e5f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24e5f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e5f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x24e5f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e5f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5FCu;
        // 0x24e600: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E604u;
    // 0x24e604: 0x0  nop
    ctx->pc = 0x24e604u;
    // NOP
    ctx->pc = 0x24e608u;
}
