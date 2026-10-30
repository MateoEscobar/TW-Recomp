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

// Function: sub_004F2650
// Address: 0x4f2650 - 0x4f2848
void sub_004F2650_0x4f2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2650_0x4f2650");
#endif

    switch (ctx->pc) {
        case 0x4f2650u: goto label_4f2650;
        case 0x4f2654u: goto label_4f2654;
        case 0x4f2658u: goto label_4f2658;
        case 0x4f265cu: goto label_4f265c;
        case 0x4f2660u: goto label_4f2660;
        case 0x4f2664u: goto label_4f2664;
        case 0x4f2668u: goto label_4f2668;
        case 0x4f266cu: goto label_4f266c;
        case 0x4f2670u: goto label_4f2670;
        case 0x4f2674u: goto label_4f2674;
        case 0x4f2678u: goto label_4f2678;
        case 0x4f267cu: goto label_4f267c;
        case 0x4f2680u: goto label_4f2680;
        case 0x4f2684u: goto label_4f2684;
        case 0x4f2688u: goto label_4f2688;
        case 0x4f268cu: goto label_4f268c;
        case 0x4f2690u: goto label_4f2690;
        case 0x4f2694u: goto label_4f2694;
        case 0x4f2698u: goto label_4f2698;
        case 0x4f269cu: goto label_4f269c;
        case 0x4f26a0u: goto label_4f26a0;
        case 0x4f26a4u: goto label_4f26a4;
        case 0x4f26a8u: goto label_4f26a8;
        case 0x4f26acu: goto label_4f26ac;
        case 0x4f26b0u: goto label_4f26b0;
        case 0x4f26b4u: goto label_4f26b4;
        case 0x4f26b8u: goto label_4f26b8;
        case 0x4f26bcu: goto label_4f26bc;
        case 0x4f26c0u: goto label_4f26c0;
        case 0x4f26c4u: goto label_4f26c4;
        case 0x4f26c8u: goto label_4f26c8;
        case 0x4f26ccu: goto label_4f26cc;
        case 0x4f26d0u: goto label_4f26d0;
        case 0x4f26d4u: goto label_4f26d4;
        case 0x4f26d8u: goto label_4f26d8;
        case 0x4f26dcu: goto label_4f26dc;
        case 0x4f26e0u: goto label_4f26e0;
        case 0x4f26e4u: goto label_4f26e4;
        case 0x4f26e8u: goto label_4f26e8;
        case 0x4f26ecu: goto label_4f26ec;
        case 0x4f26f0u: goto label_4f26f0;
        case 0x4f26f4u: goto label_4f26f4;
        case 0x4f26f8u: goto label_4f26f8;
        case 0x4f26fcu: goto label_4f26fc;
        case 0x4f2700u: goto label_4f2700;
        case 0x4f2704u: goto label_4f2704;
        case 0x4f2708u: goto label_4f2708;
        case 0x4f270cu: goto label_4f270c;
        case 0x4f2710u: goto label_4f2710;
        case 0x4f2714u: goto label_4f2714;
        case 0x4f2718u: goto label_4f2718;
        case 0x4f271cu: goto label_4f271c;
        case 0x4f2720u: goto label_4f2720;
        case 0x4f2724u: goto label_4f2724;
        case 0x4f2728u: goto label_4f2728;
        case 0x4f272cu: goto label_4f272c;
        case 0x4f2730u: goto label_4f2730;
        case 0x4f2734u: goto label_4f2734;
        case 0x4f2738u: goto label_4f2738;
        case 0x4f273cu: goto label_4f273c;
        case 0x4f2740u: goto label_4f2740;
        case 0x4f2744u: goto label_4f2744;
        case 0x4f2748u: goto label_4f2748;
        case 0x4f274cu: goto label_4f274c;
        case 0x4f2750u: goto label_4f2750;
        case 0x4f2754u: goto label_4f2754;
        case 0x4f2758u: goto label_4f2758;
        case 0x4f275cu: goto label_4f275c;
        case 0x4f2760u: goto label_4f2760;
        case 0x4f2764u: goto label_4f2764;
        case 0x4f2768u: goto label_4f2768;
        case 0x4f276cu: goto label_4f276c;
        case 0x4f2770u: goto label_4f2770;
        case 0x4f2774u: goto label_4f2774;
        case 0x4f2778u: goto label_4f2778;
        case 0x4f277cu: goto label_4f277c;
        case 0x4f2780u: goto label_4f2780;
        case 0x4f2784u: goto label_4f2784;
        case 0x4f2788u: goto label_4f2788;
        case 0x4f278cu: goto label_4f278c;
        case 0x4f2790u: goto label_4f2790;
        case 0x4f2794u: goto label_4f2794;
        case 0x4f2798u: goto label_4f2798;
        case 0x4f279cu: goto label_4f279c;
        case 0x4f27a0u: goto label_4f27a0;
        case 0x4f27a4u: goto label_4f27a4;
        case 0x4f27a8u: goto label_4f27a8;
        case 0x4f27acu: goto label_4f27ac;
        case 0x4f27b0u: goto label_4f27b0;
        case 0x4f27b4u: goto label_4f27b4;
        case 0x4f27b8u: goto label_4f27b8;
        case 0x4f27bcu: goto label_4f27bc;
        case 0x4f27c0u: goto label_4f27c0;
        case 0x4f27c4u: goto label_4f27c4;
        case 0x4f27c8u: goto label_4f27c8;
        case 0x4f27ccu: goto label_4f27cc;
        case 0x4f27d0u: goto label_4f27d0;
        case 0x4f27d4u: goto label_4f27d4;
        case 0x4f27d8u: goto label_4f27d8;
        case 0x4f27dcu: goto label_4f27dc;
        case 0x4f27e0u: goto label_4f27e0;
        case 0x4f27e4u: goto label_4f27e4;
        case 0x4f27e8u: goto label_4f27e8;
        case 0x4f27ecu: goto label_4f27ec;
        case 0x4f27f0u: goto label_4f27f0;
        case 0x4f27f4u: goto label_4f27f4;
        case 0x4f27f8u: goto label_4f27f8;
        case 0x4f27fcu: goto label_4f27fc;
        case 0x4f2800u: goto label_4f2800;
        case 0x4f2804u: goto label_4f2804;
        case 0x4f2808u: goto label_4f2808;
        case 0x4f280cu: goto label_4f280c;
        case 0x4f2810u: goto label_4f2810;
        case 0x4f2814u: goto label_4f2814;
        case 0x4f2818u: goto label_4f2818;
        case 0x4f281cu: goto label_4f281c;
        case 0x4f2820u: goto label_4f2820;
        case 0x4f2824u: goto label_4f2824;
        case 0x4f2828u: goto label_4f2828;
        case 0x4f282cu: goto label_4f282c;
        case 0x4f2830u: goto label_4f2830;
        case 0x4f2834u: goto label_4f2834;
        case 0x4f2838u: goto label_4f2838;
        case 0x4f283cu: goto label_4f283c;
        case 0x4f2840u: goto label_4f2840;
        case 0x4f2844u: goto label_4f2844;
        default: break;
    }

    ctx->pc = 0x4f2650u;

label_4f2650:
    // 0x4f2650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4f2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4f2654:
    // 0x4f2654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f2654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2658:
    // 0x4f2658: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4f2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4f265c:
    // 0x4f265c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4f265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4f2660:
    // 0x4f2660: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f2660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2664:
    // 0x4f2664: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f2664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f2668:
    // 0x4f2668: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x4f2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f266c:
    // 0x4f266c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4f266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4f2670:
    // 0x4f2670: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f2670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f2674:
    // 0x4f2674: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4f2674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4f2678:
    // 0x4f2678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f2678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f267c:
    // 0x4f267c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4f267cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4f2680:
    // 0x4f2680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f2680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f2684:
    // 0x4f2684: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4f2684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f2688:
    // 0x4f2688: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4f2688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f268c:
    // 0x4f268c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f2690:
    // 0x4f2690: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4f2690u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4f2694:
    // 0x4f2694: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f2694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f2698:
    // 0x4f2698: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x4f2698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4f269c:
    // 0x4f269c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4f26a0:
    if (ctx->pc == 0x4F26A0u) {
        ctx->pc = 0x4F26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F269Cu;
        // 0x4f26a0: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F26A4u;
        goto label_4f26a4;
    }
    ctx->pc = 0x4F269Cu;
    {
        const bool branch_taken_0x4f269c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F269Cu;
        // 0x4f26a0: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f269c) {
            ctx->pc = 0x4F26CCu;
            goto label_4f26cc;
        }
    }
    ctx->pc = 0x4F26A4u;
label_4f26a4:
    // 0x4f26a4: 0x0  nop
    ctx->pc = 0x4f26a4u;
    // NOP
label_4f26a8:
    // 0x4f26a8: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x4f26a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_4f26ac:
    // 0x4f26ac: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x4f26acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
label_4f26b0:
    // 0x4f26b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4f26b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4f26b4:
    // 0x4f26b4: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x4f26b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
label_4f26b8:
    // 0x4f26b8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4f26b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4f26bc:
    // 0x4f26bc: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x4f26bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4f26c0:
    // 0x4f26c0: 0x62382d  daddu       $a3, $v1, $v0
    ctx->pc = 0x4f26c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_4f26c4:
    // 0x4f26c4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_4f26c8:
    if (ctx->pc == 0x4F26C8u) {
        ctx->pc = 0x4F26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F26C4u;
        // 0x4f26c8: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F26CCu;
        goto label_4f26cc;
    }
    ctx->pc = 0x4F26C4u;
    {
        const bool branch_taken_0x4f26c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F26C4u;
        // 0x4f26c8: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f26c4) {
            ctx->pc = 0x4F26A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f26a8;
        }
    }
    ctx->pc = 0x4F26CCu;
label_4f26cc:
    // 0x4f26cc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x4f26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_4f26d0:
    // 0x4f26d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4f26d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4f26d4:
    // 0x4f26d4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_4f26d8:
    if (ctx->pc == 0x4F26D8u) {
        ctx->pc = 0x4F26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F26D4u;
        // 0x4f26d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F26DCu;
        goto label_4f26dc;
    }
    ctx->pc = 0x4F26D4u;
    {
        const bool branch_taken_0x4f26d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f26d4) {
            ctx->pc = 0x4F26D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F26D4u;
            // 0x4f26d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F26DCu;
            goto label_4f26dc;
        }
    }
    ctx->pc = 0x4F26DCu;
label_4f26dc:
    // 0x4f26dc: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x4f26dcu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4f26e0:
    // 0x4f26e0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4f26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f26e4:
    // 0x4f26e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4f26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f26e8:
    // 0x4f26e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f26e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f26ec:
    // 0x4f26ec: 0xa010  mfhi        $s4
    ctx->pc = 0x4f26ecu;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_4f26f0:
    // 0x4f26f0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x4f26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f26f4:
    // 0x4f26f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f26f8:
    // 0x4f26f8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4f26f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f26fc:
    // 0x4f26fc: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_4f2700:
    if (ctx->pc == 0x4F2700u) {
        ctx->pc = 0x4F2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F26FCu;
        // 0x4f2700: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2704u;
        goto label_4f2704;
    }
    ctx->pc = 0x4F26FCu;
    {
        const bool branch_taken_0x4f26fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F26FCu;
        // 0x4f2700: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f26fc) {
            ctx->pc = 0x4F2784u;
            goto label_4f2784;
        }
    }
    ctx->pc = 0x4F2704u;
label_4f2704:
    // 0x4f2704: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f2704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2708:
    // 0x4f2708: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x4f2708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4f270c:
    // 0x4f270c: 0x0  nop
    ctx->pc = 0x4f270cu;
    // NOP
label_4f2710:
    // 0x4f2710: 0x10000004  b           . + 4 + (0x4 << 2)
label_4f2714:
    if (ctx->pc == 0x4F2714u) {
        ctx->pc = 0x4F2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2710u;
        // 0x4f2714: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2718u;
        goto label_4f2718;
    }
    ctx->pc = 0x4F2710u;
    {
        const bool branch_taken_0x4f2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2710u;
        // 0x4f2714: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2710) {
            ctx->pc = 0x4F2724u;
            goto label_4f2724;
        }
    }
    ctx->pc = 0x4F2718u;
label_4f2718:
    // 0x4f2718: 0x14c30016  bne         $a2, $v1, . + 4 + (0x16 << 2)
label_4f271c:
    if (ctx->pc == 0x4F271Cu) {
        ctx->pc = 0x4F271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2718u;
        // 0x4f271c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2720u;
        goto label_4f2720;
    }
    ctx->pc = 0x4F2718u;
    {
        const bool branch_taken_0x4f2718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2718u;
        // 0x4f271c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2718) {
            ctx->pc = 0x4F2774u;
            goto label_4f2774;
        }
    }
    ctx->pc = 0x4F2720u;
label_4f2720:
    // 0x4f2720: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f2720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f2724:
    // 0x4f2724: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4f2724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4f2728:
    // 0x4f2728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f272c:
    if (ctx->pc == 0x4F272Cu) {
        ctx->pc = 0x4F272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2728u;
        // 0x4f272c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2730u;
        goto label_4f2730;
    }
    ctx->pc = 0x4F2728u;
    {
        const bool branch_taken_0x4f2728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2728u;
        // 0x4f272c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2728) {
            ctx->pc = 0x4F2740u;
            goto label_4f2740;
        }
    }
    ctx->pc = 0x4F2730u;
label_4f2730:
    // 0x4f2730: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4f2730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f2734:
    // 0x4f2734: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4f2738:
    if (ctx->pc == 0x4F2738u) {
        ctx->pc = 0x4F2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2734u;
        // 0x4f2738: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F273Cu;
        goto label_4f273c;
    }
    ctx->pc = 0x4F2734u;
    {
        const bool branch_taken_0x4f2734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2734u;
        // 0x4f2738: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2734) {
            ctx->pc = 0x4F2718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2718;
        }
    }
    ctx->pc = 0x4F273Cu;
label_4f273c:
    // 0x4f273c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4f273cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4f2740:
    // 0x4f2740: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x4f2740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f2744:
    // 0x4f2744: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4f2744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_4f2748:
    // 0x4f2748: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4f2748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f274c:
    // 0x4f274c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f2750:
    if (ctx->pc == 0x4F2750u) {
        ctx->pc = 0x4F2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F274Cu;
        // 0x4f2750: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2754u;
        goto label_4f2754;
    }
    ctx->pc = 0x4F274Cu;
    {
        const bool branch_taken_0x4f274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f274c) {
            ctx->pc = 0x4F2750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F274Cu;
            // 0x4f2750: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F277Cu;
            goto label_4f277c;
        }
    }
    ctx->pc = 0x4F2754u;
label_4f2754:
    // 0x4f2754: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4f2754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_4f2758:
    // 0x4f2758: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x4f2758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_4f275c:
    // 0x4f275c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4f275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4f2760:
    // 0x4f2760: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4f2760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4f2764:
    // 0x4f2764: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x4f2764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f2768:
    // 0x4f2768: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x4f2768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f276c:
    // 0x4f276c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4f2770:
    if (ctx->pc == 0x4F2770u) {
        ctx->pc = 0x4F2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F276Cu;
        // 0x4f2770: 0xae280008  sw          $t0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2774u;
        goto label_4f2774;
    }
    ctx->pc = 0x4F276Cu;
    {
        const bool branch_taken_0x4f276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F276Cu;
        // 0x4f2770: 0xae280008  sw          $t0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f276c) {
            ctx->pc = 0x4F2820u;
            goto label_4f2820;
        }
    }
    ctx->pc = 0x4F2774u;
label_4f2774:
    // 0x4f2774: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_4f2778:
    if (ctx->pc == 0x4F2778u) {
        ctx->pc = 0x4F2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2774u;
        // 0x4f2778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F277Cu;
        goto label_4f277c;
    }
    ctx->pc = 0x4F2774u;
    {
        const bool branch_taken_0x4f2774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2774u;
        // 0x4f2778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2774) {
            ctx->pc = 0x4F274Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f274c;
        }
    }
    ctx->pc = 0x4F277Cu;
label_4f277c:
    // 0x4f277c: 0x54e0ffe4  bnel        $a3, $zero, . + 4 + (-0x1C << 2)
label_4f2780:
    if (ctx->pc == 0x4F2780u) {
        ctx->pc = 0x4F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F277Cu;
        // 0x4f2780: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2784u;
        goto label_4f2784;
    }
    ctx->pc = 0x4F277Cu;
    {
        const bool branch_taken_0x4f277c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f277c) {
            ctx->pc = 0x4F2780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F277Cu;
            // 0x4f2780: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2710;
        }
    }
    ctx->pc = 0x4F2784u;
label_4f2784:
    // 0x4f2784: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2788:
    // 0x4f2788: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f2788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f278c:
    // 0x4f278c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4f278cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f2790:
    // 0x4f2790: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x4f2790u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_4f2794:
    // 0x4f2794: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f2794u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f2798:
    // 0x4f2798: 0x24a5df80  addiu       $a1, $a1, -0x2080
    ctx->pc = 0x4f2798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
label_4f279c:
    // 0x4f279c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4f279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4f27a0:
    // 0x4f27a0: 0x2508df58  addiu       $t0, $t0, -0x20A8
    ctx->pc = 0x4f27a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958936));
label_4f27a4:
    // 0x4f27a4: 0x254adf88  addiu       $t2, $t2, -0x2078
    ctx->pc = 0x4f27a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958984));
label_4f27a8:
    // 0x4f27a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4f27a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4f27ac:
    // 0x4f27ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f27acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f27b0:
    // 0x4f27b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f27b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f27b4:
    // 0x4f27b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f27b8:
    // 0x4f27b8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f27b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f27bc:
    // 0x4f27bc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4f27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4f27c0:
    // 0x4f27c0: 0x40f809  jalr        $v0
label_4f27c4:
    if (ctx->pc == 0x4F27C4u) {
        ctx->pc = 0x4F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F27C0u;
        // 0x4f27c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F27C8u;
        goto label_4f27c8;
    }
    ctx->pc = 0x4F27C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F27C8u);
        ctx->pc = 0x4F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F27C0u;
        // 0x4f27c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F27C0u, 0x4F27C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F27C8u;
label_4f27c8:
    // 0x4f27c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f27c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f27cc:
    // 0x4f27cc: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x4f27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4f27d0:
    // 0x4f27d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4f27d4:
    if (ctx->pc == 0x4F27D4u) {
        ctx->pc = 0x4F27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F27D0u;
        // 0x4f27d4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F27D8u;
        goto label_4f27d8;
    }
    ctx->pc = 0x4F27D0u;
    {
        const bool branch_taken_0x4f27d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F27D0u;
        // 0x4f27d4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f27d0) {
            ctx->pc = 0x4F27E0u;
            goto label_4f27e0;
        }
    }
    ctx->pc = 0x4F27D8u;
label_4f27d8:
    // 0x4f27d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f27dc:
    // 0x4f27dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4f27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4f27e0:
    // 0x4f27e0: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x4f27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_4f27e4:
    // 0x4f27e4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x4f27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f27e8:
    // 0x4f27e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f27ec:
    // 0x4f27ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4f27f0:
    // 0x4f27f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f27f4:
    // 0x4f27f4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4f27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4f27f8:
    // 0x4f27f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4f27fc:
    // 0x4f27fc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4f27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4f2800:
    // 0x4f2800: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x4f2800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_4f2804:
    // 0x4f2804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f2804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f2808:
    // 0x4f2808: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4f2808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4f280c:
    // 0x4f280c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x4f280cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4f2810:
    // 0x4f2810: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x4f2810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4f2814:
    // 0x4f2814: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x4f2814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f2818:
    // 0x4f2818: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x4f2818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f281c:
    // 0x4f281c: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4f281cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_4f2820:
    // 0x4f2820: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f2820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f2824:
    // 0x4f2824: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4f2824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f2828:
    // 0x4f2828: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4f2828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f282c:
    // 0x4f282c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4f282cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f2830:
    // 0x4f2830: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f2830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2834:
    // 0x4f2834: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4f2834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2838:
    // 0x4f2838: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4f2838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f283c:
    // 0x4f283c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2840:
    // 0x4f2840: 0x3e00008  jr          $ra
label_4f2844:
    if (ctx->pc == 0x4F2844u) {
        ctx->pc = 0x4F2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2840u;
        // 0x4f2844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2848u;
        goto label_fallthrough_0x4f2840;
    }
    ctx->pc = 0x4F2840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2840u;
        // 0x4f2844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f2840:
    ctx->pc = 0x4F2848u;
}
