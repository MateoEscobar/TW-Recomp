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

// Function: sub_002334D0
// Address: 0x2334d0 - 0x233830
void sub_002334D0_0x2334d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002334D0_0x2334d0");
#endif

    switch (ctx->pc) {
        case 0x2335d4u: goto label_2335d4;
        case 0x2335ecu: goto label_2335ec;
        case 0x23360cu: goto label_23360c;
        case 0x23361cu: goto label_23361c;
        case 0x233634u: goto label_233634;
        case 0x233648u: goto label_233648;
        case 0x233668u: goto label_233668;
        case 0x233684u: goto label_233684;
        case 0x233698u: goto label_233698;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ecu: goto label_2336ec;
        case 0x233700u: goto label_233700;
        case 0x23370cu: goto label_23370c;
        case 0x233724u: goto label_233724;
        case 0x233734u: goto label_233734;
        case 0x233740u: goto label_233740;
        case 0x233784u: goto label_233784;
        case 0x233794u: goto label_233794;
        case 0x2337acu: goto label_2337ac;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337e8u: goto label_2337e8;
        case 0x233800u: goto label_233800;
        default: break;
    }

    ctx->pc = 0x2334d0u;

    // 0x2334d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2334d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2334d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2334d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2334d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2334d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2334dc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2334dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2334e0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2334e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2334e4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2334e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2334e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2334e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2334ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2334f0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2334f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2334f4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2334f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2334f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2334f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334fc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2334fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x233500: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x233500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233504: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x233504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x233508: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x233508u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x23350c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x23350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x233510: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x233510u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233514: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x233514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x233518: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x233518u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x23351c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x233520: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x233520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x233524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233528: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x23352c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23352cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x233530: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x233530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x233534: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x233534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x233538: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x233538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23353c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233540: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x233540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x233544: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x233544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233548: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x233548u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23354c: 0x8eb30250  lw          $s3, 0x250($s5)
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 592)));
    // 0x233550: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x233550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x233554: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x233554u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x233558: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x233558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x23355c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23355cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x233560: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x233560u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x233564: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x233564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x233568: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x233568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23356c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x233570: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x233570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x233574: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x233574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x233578: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x233578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x23357c: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x23357Cu;
    {
        const bool branch_taken_0x23357c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x233580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23357Cu;
        // 0x233580: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23357c) {
            ctx->pc = 0x233674u;
            goto label_233674;
        }
    }
    ctx->pc = 0x233584u;
    // 0x233584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233588: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233588u;
    {
        const bool branch_taken_0x233588 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233588u;
        // 0x23358c: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233588) {
            ctx->pc = 0x2335BCu;
            goto label_2335bc;
        }
    }
    ctx->pc = 0x233590u;
    // 0x233590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233590u;
    {
        const bool branch_taken_0x233590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233590u;
        // 0x233594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233590) {
            ctx->pc = 0x2335A8u;
            goto label_2335a8;
        }
    }
    ctx->pc = 0x233598u;
    // 0x233598: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233598u;
    {
        const bool branch_taken_0x233598 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233598u;
        // 0x23359c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233598) {
            ctx->pc = 0x2335BCu;
            goto label_2335bc;
        }
    }
    ctx->pc = 0x2335A0u;
    // 0x2335a0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2335A0u;
    {
        const bool branch_taken_0x2335a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335A0u;
        // 0x2335a4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335a0) {
            ctx->pc = 0x233808u;
            goto label_233808;
        }
    }
    ctx->pc = 0x2335A8u;
label_2335a8:
    // 0x2335a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2335a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2335ac: 0x12620028  beq         $s3, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2335ACu;
    {
        const bool branch_taken_0x2335ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2335B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335ACu;
        // 0x2335b0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335ac) {
            ctx->pc = 0x233650u;
            goto label_233650;
        }
    }
    ctx->pc = 0x2335B4u;
    // 0x2335b4: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2335B4u;
    {
        const bool branch_taken_0x2335b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335B4u;
        // 0x2335b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335b4) {
            ctx->pc = 0x233808u;
            goto label_233808;
        }
    }
    ctx->pc = 0x2335BCu;
label_2335bc:
    // 0x2335bc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2335bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2335c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2335c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335c4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2335c8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2335c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2335cc: 0xc1078f0  jal         func_41E3C0
    ctx->pc = 0x2335CCu;
    SET_GPR_U32(ctx, 31, 0x2335D4u);
    ctx->pc = 0x2335D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335CCu;
    // 0x2335d0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3C0u, 0x2335CCu, 0x2335D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335D4u;
label_2335d4:
    // 0x2335d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2335d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2335dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2335dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335e0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2335e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335e4: 0xc0f2962  jal         func_3CA588
    ctx->pc = 0x2335E4u;
    SET_GPR_U32(ctx, 31, 0x2335ECu);
    ctx->pc = 0x2335E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335E4u;
    // 0x2335e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA588u, 0x2335E4u, 0x2335ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335ECu;
label_2335ec:
    // 0x2335ec: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2335ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x2335f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2335f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335f4: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2335f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x2335f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2335f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335fc: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x233600: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x233600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233604: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x233604u;
    SET_GPR_U32(ctx, 31, 0x23360Cu);
    ctx->pc = 0x233608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233604u;
    // 0x233608: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x233604u, 0x23360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23360Cu;
label_23360c:
    // 0x23360c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x233610: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x233610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233614: 0xc1078c8  jal         func_41E320
    ctx->pc = 0x233614u;
    SET_GPR_U32(ctx, 31, 0x23361Cu);
    ctx->pc = 0x233618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233614u;
    // 0x233618: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x233614u, 0x23361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23361Cu;
label_23361c:
    // 0x23361c: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x23361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    // 0x233620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x233620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23362c: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x23362Cu;
    SET_GPR_U32(ctx, 31, 0x233634u);
    ctx->pc = 0x233630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23362Cu;
    // 0x233630: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23362Cu, 0x233634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233634u;
label_233634:
    // 0x233634: 0xa2a00254  sb          $zero, 0x254($s5)
    ctx->pc = 0x233634u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 596), (uint8_t)GPR_U32(ctx, 0));
    // 0x233638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23363c: 0xaea00250  sw          $zero, 0x250($s5)
    ctx->pc = 0x23363cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 592), GPR_U32(ctx, 0));
    // 0x233640: 0xc0897f2  jal         func_225FC8
    ctx->pc = 0x233640u;
    SET_GPR_U32(ctx, 31, 0x233648u);
    ctx->pc = 0x233644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233640u;
    // 0x233644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x233640u, 0x233648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233648u;
label_233648:
    // 0x233648: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x233648u;
    {
        const bool branch_taken_0x233648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233648u;
        // 0x23364c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233648) {
            ctx->pc = 0x233804u;
            goto label_233804;
        }
    }
    ctx->pc = 0x233650u;
label_233650:
    // 0x233650: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233658: 0x24a5c3e8  addiu       $a1, $a1, -0x3C18
    ctx->pc = 0x233658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951912));
    // 0x23365c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23365cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233660: 0xc0930a0  jal         func_24C280
    ctx->pc = 0x233660u;
    SET_GPR_U32(ctx, 31, 0x233668u);
    ctx->pc = 0x233664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233660u;
    // 0x233664: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x233660u, 0x233668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233668u;
label_233668:
    // 0x233668: 0xa2a00254  sb          $zero, 0x254($s5)
    ctx->pc = 0x233668u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 596), (uint8_t)GPR_U32(ctx, 0));
    // 0x23366c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x23366Cu;
    {
        const bool branch_taken_0x23366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23366Cu;
        // 0x233670: 0xaea00250  sw          $zero, 0x250($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23366c) {
            ctx->pc = 0x233800u;
            goto label_233800;
        }
    }
    ctx->pc = 0x233674u;
label_233674:
    // 0x233674: 0x26b10257  addiu       $s1, $s5, 0x257
    ctx->pc = 0x233674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 599));
    // 0x233678: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x233678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23367c: 0xc088a42  jal         func_222908
    ctx->pc = 0x23367Cu;
    SET_GPR_U32(ctx, 31, 0x233684u);
    ctx->pc = 0x233680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23367Cu;
    // 0x233680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x23367Cu, 0x233684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233684u;
label_233684:
    // 0x233684: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x233684u;
    {
        const bool branch_taken_0x233684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233684u;
        // 0x233688: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233684) {
            ctx->pc = 0x2336D0u;
            goto label_2336d0;
        }
    }
    ctx->pc = 0x23368Cu;
    // 0x23368c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x23368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x233690: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x233690u;
    SET_GPR_U32(ctx, 31, 0x233698u);
    ctx->pc = 0x233694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233690u;
    // 0x233694: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x233690u, 0x233698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233698u;
label_233698:
    // 0x233698: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x233698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x23369c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23369Cu;
    {
        const bool branch_taken_0x23369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23369Cu;
        // 0x2336a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23369c) {
            ctx->pc = 0x2336D0u;
            goto label_2336d0;
        }
    }
    ctx->pc = 0x2336A4u;
    // 0x2336a4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2336a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2336a8: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x2336a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x2336ac: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2336ACu;
    {
        const bool branch_taken_0x2336ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2336ac) {
            ctx->pc = 0x2336B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336ACu;
            // 0x2336b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336D0u;
            goto label_2336d0;
        }
    }
    ctx->pc = 0x2336B4u;
    // 0x2336b4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2336b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2336b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2336b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2336bc: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x2336c0: 0xc10904c  jal         func_424130
    ctx->pc = 0x2336C0u;
    SET_GPR_U32(ctx, 31, 0x2336C8u);
    ctx->pc = 0x2336C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336C0u;
    // 0x2336c4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x2336C0u, 0x2336C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336C8u;
label_2336c8:
    // 0x2336c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2336C8u;
    {
        const bool branch_taken_0x2336c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2336c8) {
            ctx->pc = 0x2336CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336C8u;
            // 0x2336cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336D0u;
            goto label_2336d0;
        }
    }
    ctx->pc = 0x2336D0u;
label_2336d0:
    // 0x2336d0: 0x1600004c  bnez        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2336D0u;
    {
        const bool branch_taken_0x2336d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336D0u;
        // 0x2336d4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336d0) {
            ctx->pc = 0x233804u;
            goto label_233804;
        }
    }
    ctx->pc = 0x2336D8u;
    // 0x2336d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2336dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2336dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336e0: 0x2452c3a8  addiu       $s2, $v0, -0x3C58
    ctx->pc = 0x2336e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
    // 0x2336e4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2336E4u;
    SET_GPR_U32(ctx, 31, 0x2336ECu);
    ctx->pc = 0x2336E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336E4u;
    // 0x2336e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2336E4u, 0x2336ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ECu;
label_2336ec:
    // 0x2336ec: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2336ECu;
    {
        const bool branch_taken_0x2336ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336ECu;
        // 0x2336f0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336ec) {
            ctx->pc = 0x233800u;
            goto label_233800;
        }
    }
    ctx->pc = 0x2336F4u;
    // 0x2336f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2336f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336f8: 0xc0e44f6  jal         func_3913D8
    ctx->pc = 0x2336F8u;
    SET_GPR_U32(ctx, 31, 0x233700u);
    ctx->pc = 0x2336FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336F8u;
    // 0x2336fc: 0x8e042c04  lw          $a0, 0x2C04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x2336F8u, 0x233700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233700u;
label_233700:
    // 0x233700: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x233700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
    // 0x233704: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x233704u;
    SET_GPR_U32(ctx, 31, 0x23370Cu);
    ctx->pc = 0x233708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233704u;
    // 0x233708: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x233704u, 0x23370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23370Cu;
label_23370c:
    // 0x23370c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x233710: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x233710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233714: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x233714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23371c: 0xc0f2962  jal         func_3CA588
    ctx->pc = 0x23371Cu;
    SET_GPR_U32(ctx, 31, 0x233724u);
    ctx->pc = 0x233720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23371Cu;
    // 0x233720: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA588u, 0x23371Cu, 0x233724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233724u;
label_233724:
    // 0x233724: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x233724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23372c: 0xc0897f2  jal         func_225FC8
    ctx->pc = 0x23372Cu;
    SET_GPR_U32(ctx, 31, 0x233734u);
    ctx->pc = 0x233730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23372Cu;
    // 0x233730: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x23372Cu, 0x233734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233734u;
label_233734:
    // 0x233734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x233734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233738: 0xc0897f2  jal         func_225FC8
    ctx->pc = 0x233738u;
    SET_GPR_U32(ctx, 31, 0x233740u);
    ctx->pc = 0x23373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233738u;
    // 0x23373c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x233738u, 0x233740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233740u;
label_233740:
    // 0x233740: 0x82030086  lb          $v1, 0x86($s0)
    ctx->pc = 0x233740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x233744: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x233744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x233748: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233748u;
    {
        const bool branch_taken_0x233748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233748u;
        // 0x23374c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233748) {
            ctx->pc = 0x233760u;
            goto label_233760;
        }
    }
    ctx->pc = 0x233750u;
    // 0x233750: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x233750u;
    {
        const bool branch_taken_0x233750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233750u;
        // 0x233754: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233750) {
            ctx->pc = 0x2337B4u;
            goto label_2337b4;
        }
    }
    ctx->pc = 0x233758u;
    // 0x233758: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x233758u;
    {
        const bool branch_taken_0x233758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233758u;
        // 0x23375c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233758) {
            ctx->pc = 0x233808u;
            goto label_233808;
        }
    }
    ctx->pc = 0x233760u;
label_233760:
    // 0x233760: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x233760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x233764: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x233768: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x233768u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x23376c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23376cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233770: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233774: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233778: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x23377c: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x23377Cu;
    SET_GPR_U32(ctx, 31, 0x233784u);
    ctx->pc = 0x233780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23377Cu;
    // 0x233780: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23377Cu, 0x233784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233784u;
label_233784:
    // 0x233784: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x233788: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23378c: 0xc1078c8  jal         func_41E320
    ctx->pc = 0x23378Cu;
    SET_GPR_U32(ctx, 31, 0x233794u);
    ctx->pc = 0x233790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23378Cu;
    // 0x233790: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23378Cu, 0x233794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233794u;
label_233794:
    // 0x233794: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x233798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x233798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23379c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23379cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2337a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337a4: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x2337A4u;
    SET_GPR_U32(ctx, 31, 0x2337ACu);
    ctx->pc = 0x2337A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337A4u;
    // 0x2337a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x2337A4u, 0x2337ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337ACu;
label_2337ac:
    // 0x2337ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2337ACu;
    {
        const bool branch_taken_0x2337ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337ACu;
        // 0x2337b0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337ac) {
            ctx->pc = 0x233804u;
            goto label_233804;
        }
    }
    ctx->pc = 0x2337B4u;
label_2337b4:
    // 0x2337b4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2337b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2337b8: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2337b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x2337bc: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2337c0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2337c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2337c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2337c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2337cc: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2337ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2337d0: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2337D0u;
    SET_GPR_U32(ctx, 31, 0x2337D8u);
    ctx->pc = 0x2337D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337D0u;
    // 0x2337d4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2337D0u, 0x2337D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337D8u;
label_2337d8:
    // 0x2337d8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2337d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x2337dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2337e0: 0xc1078c8  jal         func_41E320
    ctx->pc = 0x2337E0u;
    SET_GPR_U32(ctx, 31, 0x2337E8u);
    ctx->pc = 0x2337E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337E0u;
    // 0x2337e4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x2337E0u, 0x2337E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337E8u;
label_2337e8:
    // 0x2337e8: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x2337e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x2337ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2337ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2337f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2337f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337f8: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x2337F8u;
    SET_GPR_U32(ctx, 31, 0x233800u);
    ctx->pc = 0x2337FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337F8u;
    // 0x2337fc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x2337F8u, 0x233800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233800u;
label_233800:
    // 0x233800: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x233800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_233804:
    // 0x233804: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x233804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_233808:
    // 0x233808: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x233808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23380c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x23380cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x233810: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x233810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x233814: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x233814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x233818: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x233818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23381c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23381cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233820: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x233820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233824: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x233824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233828: 0x3e00008  jr          $ra
    ctx->pc = 0x233828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233828u;
        // 0x23382c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233830u;
}
