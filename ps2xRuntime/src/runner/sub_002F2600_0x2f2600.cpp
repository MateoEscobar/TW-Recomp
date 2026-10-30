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

// Function: sub_002F2600
// Address: 0x2f2600 - 0x2f27a0
void sub_002F2600_0x2f2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2600_0x2f2600");
#endif

    switch (ctx->pc) {
        case 0x2f2600u: goto label_2f2600;
        case 0x2f2604u: goto label_2f2604;
        case 0x2f2608u: goto label_2f2608;
        case 0x2f260cu: goto label_2f260c;
        case 0x2f2610u: goto label_2f2610;
        case 0x2f2614u: goto label_2f2614;
        case 0x2f2618u: goto label_2f2618;
        case 0x2f261cu: goto label_2f261c;
        case 0x2f2620u: goto label_2f2620;
        case 0x2f2624u: goto label_2f2624;
        case 0x2f2628u: goto label_2f2628;
        case 0x2f262cu: goto label_2f262c;
        case 0x2f2630u: goto label_2f2630;
        case 0x2f2634u: goto label_2f2634;
        case 0x2f2638u: goto label_2f2638;
        case 0x2f263cu: goto label_2f263c;
        case 0x2f2640u: goto label_2f2640;
        case 0x2f2644u: goto label_2f2644;
        case 0x2f2648u: goto label_2f2648;
        case 0x2f264cu: goto label_2f264c;
        case 0x2f2650u: goto label_2f2650;
        case 0x2f2654u: goto label_2f2654;
        case 0x2f2658u: goto label_2f2658;
        case 0x2f265cu: goto label_2f265c;
        case 0x2f2660u: goto label_2f2660;
        case 0x2f2664u: goto label_2f2664;
        case 0x2f2668u: goto label_2f2668;
        case 0x2f266cu: goto label_2f266c;
        case 0x2f2670u: goto label_2f2670;
        case 0x2f2674u: goto label_2f2674;
        case 0x2f2678u: goto label_2f2678;
        case 0x2f267cu: goto label_2f267c;
        case 0x2f2680u: goto label_2f2680;
        case 0x2f2684u: goto label_2f2684;
        case 0x2f2688u: goto label_2f2688;
        case 0x2f268cu: goto label_2f268c;
        case 0x2f2690u: goto label_2f2690;
        case 0x2f2694u: goto label_2f2694;
        case 0x2f2698u: goto label_2f2698;
        case 0x2f269cu: goto label_2f269c;
        case 0x2f26a0u: goto label_2f26a0;
        case 0x2f26a4u: goto label_2f26a4;
        case 0x2f26a8u: goto label_2f26a8;
        case 0x2f26acu: goto label_2f26ac;
        case 0x2f26b0u: goto label_2f26b0;
        case 0x2f26b4u: goto label_2f26b4;
        case 0x2f26b8u: goto label_2f26b8;
        case 0x2f26bcu: goto label_2f26bc;
        case 0x2f26c0u: goto label_2f26c0;
        case 0x2f26c4u: goto label_2f26c4;
        case 0x2f26c8u: goto label_2f26c8;
        case 0x2f26ccu: goto label_2f26cc;
        case 0x2f26d0u: goto label_2f26d0;
        case 0x2f26d4u: goto label_2f26d4;
        case 0x2f26d8u: goto label_2f26d8;
        case 0x2f26dcu: goto label_2f26dc;
        case 0x2f26e0u: goto label_2f26e0;
        case 0x2f26e4u: goto label_2f26e4;
        case 0x2f26e8u: goto label_2f26e8;
        case 0x2f26ecu: goto label_2f26ec;
        case 0x2f26f0u: goto label_2f26f0;
        case 0x2f26f4u: goto label_2f26f4;
        case 0x2f26f8u: goto label_2f26f8;
        case 0x2f26fcu: goto label_2f26fc;
        case 0x2f2700u: goto label_2f2700;
        case 0x2f2704u: goto label_2f2704;
        case 0x2f2708u: goto label_2f2708;
        case 0x2f270cu: goto label_2f270c;
        case 0x2f2710u: goto label_2f2710;
        case 0x2f2714u: goto label_2f2714;
        case 0x2f2718u: goto label_2f2718;
        case 0x2f271cu: goto label_2f271c;
        case 0x2f2720u: goto label_2f2720;
        case 0x2f2724u: goto label_2f2724;
        case 0x2f2728u: goto label_2f2728;
        case 0x2f272cu: goto label_2f272c;
        case 0x2f2730u: goto label_2f2730;
        case 0x2f2734u: goto label_2f2734;
        case 0x2f2738u: goto label_2f2738;
        case 0x2f273cu: goto label_2f273c;
        case 0x2f2740u: goto label_2f2740;
        case 0x2f2744u: goto label_2f2744;
        case 0x2f2748u: goto label_2f2748;
        case 0x2f274cu: goto label_2f274c;
        case 0x2f2750u: goto label_2f2750;
        case 0x2f2754u: goto label_2f2754;
        case 0x2f2758u: goto label_2f2758;
        case 0x2f275cu: goto label_2f275c;
        case 0x2f2760u: goto label_2f2760;
        case 0x2f2764u: goto label_2f2764;
        case 0x2f2768u: goto label_2f2768;
        case 0x2f276cu: goto label_2f276c;
        case 0x2f2770u: goto label_2f2770;
        case 0x2f2774u: goto label_2f2774;
        case 0x2f2778u: goto label_2f2778;
        case 0x2f277cu: goto label_2f277c;
        case 0x2f2780u: goto label_2f2780;
        case 0x2f2784u: goto label_2f2784;
        case 0x2f2788u: goto label_2f2788;
        case 0x2f278cu: goto label_2f278c;
        case 0x2f2790u: goto label_2f2790;
        case 0x2f2794u: goto label_2f2794;
        case 0x2f2798u: goto label_2f2798;
        case 0x2f279cu: goto label_2f279c;
        default: break;
    }

    ctx->pc = 0x2f2600u;

label_2f2600:
    // 0x2f2600: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f2600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f2604:
    // 0x2f2604: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f2604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f2608:
    // 0x2f2608: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f2608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2f260c:
    // 0x2f260c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f2610:
    // 0x2f2610: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f2610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2f2614:
    // 0x2f2614: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x2f2614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f2618:
    // 0x2f2618: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2f2618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2f261c:
    // 0x2f261c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f261cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2620:
    // 0x2f2620: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2f2620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2f2624:
    // 0x2f2624: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f2624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2628:
    // 0x2f2628: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2f2628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2f262c:
    // 0x2f262c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2f262cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f2630:
    // 0x2f2630: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f2630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2f2634:
    // 0x2f2634: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f2634u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2638:
    // 0x2f2638: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2f263c:
    // 0x2f263c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2f2640:
    // 0x2f2640: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f2644:
    // 0x2f2644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f2648:
    // 0x2f2648: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f2648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2f264c:
    // 0x2f264c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2f264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f2650:
    // 0x2f2650: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2f2650u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f2654:
    // 0x2f2654: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2f2654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2f2658:
    // 0x2f2658: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2f2658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f265c:
    // 0x2f265c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f265cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f2660:
    // 0x2f2660: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f2660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2f2664:
    // 0x2f2664: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f2664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f2668:
    // 0x2f2668: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f2668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2f266c:
    // 0x2f266c: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x2f266cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2f2670:
    // 0x2f2670: 0x18600036  blez        $v1, . + 4 + (0x36 << 2)
label_2f2674:
    if (ctx->pc == 0x2F2674u) {
        ctx->pc = 0x2F2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2670u;
        // 0x2f2674: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2678u;
        goto label_2f2678;
    }
    ctx->pc = 0x2F2670u;
    {
        const bool branch_taken_0x2f2670 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2670u;
        // 0x2f2674: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2670) {
            ctx->pc = 0x2F274Cu;
            goto label_2f274c;
        }
    }
    ctx->pc = 0x2F2678u;
label_2f2678:
    // 0x2f2678: 0x24150228  addiu       $s5, $zero, 0x228
    ctx->pc = 0x2f2678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2f267c:
    // 0x2f267c: 0x0  nop
    ctx->pc = 0x2f267cu;
    // NOP
label_2f2680:
    // 0x2f2680: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x2f2680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_2f2684:
    // 0x2f2684: 0xc0e409a  jal         func_390268
label_2f2688:
    if (ctx->pc == 0x2F2688u) {
        ctx->pc = 0x2F2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2684u;
        // 0x2f2688: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F268Cu;
        goto label_2f268c;
    }
    ctx->pc = 0x2F2684u;
    SET_GPR_U32(ctx, 31, 0x2F268Cu);
    ctx->pc = 0x2F2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2684u;
    // 0x2f2688: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F2684u, 0x2F268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F268Cu;
label_2f268c:
    // 0x2f268c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f268cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2690:
    // 0x2f2690: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_2f2694:
    if (ctx->pc == 0x2F2694u) {
        ctx->pc = 0x2F2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2690u;
        // 0x2f2694: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2698u;
        goto label_2f2698;
    }
    ctx->pc = 0x2F2690u;
    {
        const bool branch_taken_0x2f2690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2690u;
        // 0x2f2694: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2690) {
            ctx->pc = 0x2F2738u;
            goto label_2f2738;
        }
    }
    ctx->pc = 0x2F2698u;
label_2f2698:
    // 0x2f2698: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2f2698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f269c:
    // 0x2f269c: 0xc0a34d6  jal         func_28D358
label_2f26a0:
    if (ctx->pc == 0x2F26A0u) {
        ctx->pc = 0x2F26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F269Cu;
        // 0x2f26a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26A4u;
        goto label_2f26a4;
    }
    ctx->pc = 0x2F269Cu;
    SET_GPR_U32(ctx, 31, 0x2F26A4u);
    ctx->pc = 0x2F26A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F269Cu;
    // 0x2f26a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F269Cu, 0x2F26A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26A4u;
label_2f26a4:
    // 0x2f26a4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2f26a8:
    if (ctx->pc == 0x2F26A8u) {
        ctx->pc = 0x2F26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A4u;
        // 0x2f26a8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26ACu;
        goto label_2f26ac;
    }
    ctx->pc = 0x2F26A4u;
    {
        const bool branch_taken_0x2f26a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A4u;
        // 0x2f26a8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26a4) {
            ctx->pc = 0x2F2734u;
            goto label_2f2734;
        }
    }
    ctx->pc = 0x2F26ACu;
label_2f26ac:
    // 0x2f26ac: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2f26acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2f26b0:
    // 0x2f26b0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f26b4:
    // 0x2f26b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f26b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f26b8:
    // 0x2f26b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f26bc:
    // 0x2f26bc: 0xc0cdb62  jal         func_336D88
label_2f26c0:
    if (ctx->pc == 0x2F26C0u) {
        ctx->pc = 0x2F26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26BCu;
        // 0x2f26c0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26C4u;
        goto label_2f26c4;
    }
    ctx->pc = 0x2F26BCu;
    SET_GPR_U32(ctx, 31, 0x2F26C4u);
    ctx->pc = 0x2F26C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26BCu;
    // 0x2f26c0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2F26BCu, 0x2F26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26C4u;
label_2f26c4:
    // 0x2f26c4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2f26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f26c8:
    // 0x2f26c8: 0xc0a2fc0  jal         func_28BF00
label_2f26cc:
    if (ctx->pc == 0x2F26CCu) {
        ctx->pc = 0x2F26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26C8u;
        // 0x2f26cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26D0u;
        goto label_2f26d0;
    }
    ctx->pc = 0x2F26C8u;
    SET_GPR_U32(ctx, 31, 0x2F26D0u);
    ctx->pc = 0x2F26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26C8u;
    // 0x2f26cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2F26C8u, 0x2F26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26D0u;
label_2f26d0:
    // 0x2f26d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f26d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f26d4:
    // 0x2f26d4: 0x0  nop
    ctx->pc = 0x2f26d4u;
    // NOP
label_2f26d8:
    // 0x2f26d8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_2f26dc:
    if (ctx->pc == 0x2F26DCu) {
        ctx->pc = 0x2F26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26D8u;
        // 0x2f26dc: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26E0u;
        goto label_2f26e0;
    }
    ctx->pc = 0x2F26D8u;
    {
        const bool branch_taken_0x2f26d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26D8u;
        // 0x2f26dc: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26d8) {
            ctx->pc = 0x2F2738u;
            goto label_2f2738;
        }
    }
    ctx->pc = 0x2F26E0u;
label_2f26e0:
    // 0x2f26e0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f26e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2f26e4:
    // 0x2f26e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f26e8:
    // 0x2f26e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f26e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f26ec:
    // 0x2f26ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f26ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f26f0:
    // 0x2f26f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f26f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f26f4:
    // 0x2f26f4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f26f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2f26f8:
    // 0x2f26f8: 0xc0888a2  jal         func_222288
label_2f26fc:
    if (ctx->pc == 0x2F26FCu) {
        ctx->pc = 0x2F26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26F8u;
        // 0x2f26fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2700u;
        goto label_2f2700;
    }
    ctx->pc = 0x2F26F8u;
    SET_GPR_U32(ctx, 31, 0x2F2700u);
    ctx->pc = 0x2F26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26F8u;
    // 0x2f26fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F26F8u, 0x2F2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2700u;
label_2f2700:
    // 0x2f2700: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f2704:
    // 0x2f2704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2708:
    // 0x2f2708: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x2f2708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_2f270c:
    // 0x2f270c: 0xc088ed2  jal         func_223B48
label_2f2710:
    if (ctx->pc == 0x2F2710u) {
        ctx->pc = 0x2F2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F270Cu;
        // 0x2f2710: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2714u;
        goto label_2f2714;
    }
    ctx->pc = 0x2F270Cu;
    SET_GPR_U32(ctx, 31, 0x2F2714u);
    ctx->pc = 0x2F2710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F270Cu;
    // 0x2f2710: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F270Cu, 0x2F2714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2714u;
label_2f2714:
    // 0x2f2714: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f2718:
    // 0x2f2718: 0x2603fff6  addiu       $v1, $s0, -0xA
    ctx->pc = 0x2f2718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
label_2f271c:
    // 0x2f271c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2f271cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2f2720:
    // 0x2f2720: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x2f2720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f2724:
    // 0x2f2724: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f2728:
    if (ctx->pc == 0x2F2728u) {
        ctx->pc = 0x2F2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2724u;
        // 0x2f2728: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F272Cu;
        goto label_2f272c;
    }
    ctx->pc = 0x2F2724u;
    {
        const bool branch_taken_0x2f2724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2724u;
        // 0x2f2728: 0x8ee3489c  lw          $v1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2724) {
            ctx->pc = 0x2F2738u;
            goto label_2f2738;
        }
    }
    ctx->pc = 0x2F272Cu;
label_2f272c:
    // 0x2f272c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2f272cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2730:
    // 0x2f2730: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2f2730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f2734:
    // 0x2f2734: 0x8ee3489c  lw          $v1, 0x489C($s7)
    ctx->pc = 0x2f2734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_2f2738:
    // 0x2f2738: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f2738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2f273c:
    // 0x2f273c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2f273cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2f2740:
    // 0x2f2740: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2f2740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f2744:
    // 0x2f2744: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2f2748:
    if (ctx->pc == 0x2F2748u) {
        ctx->pc = 0x2F2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2744u;
        // 0x2f2748: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F274Cu;
        goto label_2f274c;
    }
    ctx->pc = 0x2F2744u;
    {
        const bool branch_taken_0x2f2744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2744u;
        // 0x2f2748: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2744) {
            ctx->pc = 0x2F2680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2680;
        }
    }
    ctx->pc = 0x2F274Cu;
label_2f274c:
    // 0x2f274c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2f2750:
    if (ctx->pc == 0x2F2750u) {
        ctx->pc = 0x2F2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F274Cu;
        // 0x2f2750: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2754u;
        goto label_2f2754;
    }
    ctx->pc = 0x2F274Cu;
    {
        const bool branch_taken_0x2f274c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F274Cu;
        // 0x2f2750: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f274c) {
            ctx->pc = 0x2F2770u;
            goto label_2f2770;
        }
    }
    ctx->pc = 0x2F2754u;
label_2f2754:
    // 0x2f2754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2758:
    // 0x2f2758: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f2758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f275c:
    // 0x2f275c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f2760:
    // 0x2f2760: 0x40f809  jalr        $v0
label_2f2764:
    if (ctx->pc == 0x2F2764u) {
        ctx->pc = 0x2F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2760u;
        // 0x2f2764: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2768u;
        goto label_2f2768;
    }
    ctx->pc = 0x2F2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2768u);
        ctx->pc = 0x2F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2760u;
        // 0x2f2764: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2760u, 0x2F2768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2768u;
label_2f2768:
    // 0x2f2768: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x2f2768u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_2f276c:
    // 0x2f276c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2770:
    // 0x2f2770: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f2770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2774:
    // 0x2f2774: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f2774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2778:
    // 0x2f2778: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f2778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f277c:
    // 0x2f277c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f277cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f2780:
    // 0x2f2780: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f2780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f2784:
    // 0x2f2784: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2f2784u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2788:
    // 0x2f2788: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2f2788u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f278c:
    // 0x2f278c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2f278cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2790:
    // 0x2f2790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2794:
    // 0x2f2794: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f2794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f2798:
    // 0x2f2798: 0x3e00008  jr          $ra
label_2f279c:
    if (ctx->pc == 0x2F279Cu) {
        ctx->pc = 0x2F279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2798u;
        // 0x2f279c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F27A0u;
        goto label_fallthrough_0x2f2798;
    }
    ctx->pc = 0x2F2798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2798u;
        // 0x2f279c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2798:
    ctx->pc = 0x2F27A0u;
}
