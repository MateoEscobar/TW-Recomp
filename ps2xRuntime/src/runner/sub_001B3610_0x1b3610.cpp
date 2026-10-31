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

// Function: sub_001B3610
// Address: 0x1b3610 - 0x1b3838
void sub_001B3610_0x1b3610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3610_0x1b3610");
#endif

    switch (ctx->pc) {
        case 0x1b3610u: goto label_1b3610;
        case 0x1b3614u: goto label_1b3614;
        case 0x1b3618u: goto label_1b3618;
        case 0x1b361cu: goto label_1b361c;
        case 0x1b3620u: goto label_1b3620;
        case 0x1b3624u: goto label_1b3624;
        case 0x1b3628u: goto label_1b3628;
        case 0x1b362cu: goto label_1b362c;
        case 0x1b3630u: goto label_1b3630;
        case 0x1b3634u: goto label_1b3634;
        case 0x1b3638u: goto label_1b3638;
        case 0x1b363cu: goto label_1b363c;
        case 0x1b3640u: goto label_1b3640;
        case 0x1b3644u: goto label_1b3644;
        case 0x1b3648u: goto label_1b3648;
        case 0x1b364cu: goto label_1b364c;
        case 0x1b3650u: goto label_1b3650;
        case 0x1b3654u: goto label_1b3654;
        case 0x1b3658u: goto label_1b3658;
        case 0x1b365cu: goto label_1b365c;
        case 0x1b3660u: goto label_1b3660;
        case 0x1b3664u: goto label_1b3664;
        case 0x1b3668u: goto label_1b3668;
        case 0x1b366cu: goto label_1b366c;
        case 0x1b3670u: goto label_1b3670;
        case 0x1b3674u: goto label_1b3674;
        case 0x1b3678u: goto label_1b3678;
        case 0x1b367cu: goto label_1b367c;
        case 0x1b3680u: goto label_1b3680;
        case 0x1b3684u: goto label_1b3684;
        case 0x1b3688u: goto label_1b3688;
        case 0x1b368cu: goto label_1b368c;
        case 0x1b3690u: goto label_1b3690;
        case 0x1b3694u: goto label_1b3694;
        case 0x1b3698u: goto label_1b3698;
        case 0x1b369cu: goto label_1b369c;
        case 0x1b36a0u: goto label_1b36a0;
        case 0x1b36a4u: goto label_1b36a4;
        case 0x1b36a8u: goto label_1b36a8;
        case 0x1b36acu: goto label_1b36ac;
        case 0x1b36b0u: goto label_1b36b0;
        case 0x1b36b4u: goto label_1b36b4;
        case 0x1b36b8u: goto label_1b36b8;
        case 0x1b36bcu: goto label_1b36bc;
        case 0x1b36c0u: goto label_1b36c0;
        case 0x1b36c4u: goto label_1b36c4;
        case 0x1b36c8u: goto label_1b36c8;
        case 0x1b36ccu: goto label_1b36cc;
        case 0x1b36d0u: goto label_1b36d0;
        case 0x1b36d4u: goto label_1b36d4;
        case 0x1b36d8u: goto label_1b36d8;
        case 0x1b36dcu: goto label_1b36dc;
        case 0x1b36e0u: goto label_1b36e0;
        case 0x1b36e4u: goto label_1b36e4;
        case 0x1b36e8u: goto label_1b36e8;
        case 0x1b36ecu: goto label_1b36ec;
        case 0x1b36f0u: goto label_1b36f0;
        case 0x1b36f4u: goto label_1b36f4;
        case 0x1b36f8u: goto label_1b36f8;
        case 0x1b36fcu: goto label_1b36fc;
        case 0x1b3700u: goto label_1b3700;
        case 0x1b3704u: goto label_1b3704;
        case 0x1b3708u: goto label_1b3708;
        case 0x1b370cu: goto label_1b370c;
        case 0x1b3710u: goto label_1b3710;
        case 0x1b3714u: goto label_1b3714;
        case 0x1b3718u: goto label_1b3718;
        case 0x1b371cu: goto label_1b371c;
        case 0x1b3720u: goto label_1b3720;
        case 0x1b3724u: goto label_1b3724;
        case 0x1b3728u: goto label_1b3728;
        case 0x1b372cu: goto label_1b372c;
        case 0x1b3730u: goto label_1b3730;
        case 0x1b3734u: goto label_1b3734;
        case 0x1b3738u: goto label_1b3738;
        case 0x1b373cu: goto label_1b373c;
        case 0x1b3740u: goto label_1b3740;
        case 0x1b3744u: goto label_1b3744;
        case 0x1b3748u: goto label_1b3748;
        case 0x1b374cu: goto label_1b374c;
        case 0x1b3750u: goto label_1b3750;
        case 0x1b3754u: goto label_1b3754;
        case 0x1b3758u: goto label_1b3758;
        case 0x1b375cu: goto label_1b375c;
        case 0x1b3760u: goto label_1b3760;
        case 0x1b3764u: goto label_1b3764;
        case 0x1b3768u: goto label_1b3768;
        case 0x1b376cu: goto label_1b376c;
        case 0x1b3770u: goto label_1b3770;
        case 0x1b3774u: goto label_1b3774;
        case 0x1b3778u: goto label_1b3778;
        case 0x1b377cu: goto label_1b377c;
        case 0x1b3780u: goto label_1b3780;
        case 0x1b3784u: goto label_1b3784;
        case 0x1b3788u: goto label_1b3788;
        case 0x1b378cu: goto label_1b378c;
        case 0x1b3790u: goto label_1b3790;
        case 0x1b3794u: goto label_1b3794;
        case 0x1b3798u: goto label_1b3798;
        case 0x1b379cu: goto label_1b379c;
        case 0x1b37a0u: goto label_1b37a0;
        case 0x1b37a4u: goto label_1b37a4;
        case 0x1b37a8u: goto label_1b37a8;
        case 0x1b37acu: goto label_1b37ac;
        case 0x1b37b0u: goto label_1b37b0;
        case 0x1b37b4u: goto label_1b37b4;
        case 0x1b37b8u: goto label_1b37b8;
        case 0x1b37bcu: goto label_1b37bc;
        case 0x1b37c0u: goto label_1b37c0;
        case 0x1b37c4u: goto label_1b37c4;
        case 0x1b37c8u: goto label_1b37c8;
        case 0x1b37ccu: goto label_1b37cc;
        case 0x1b37d0u: goto label_1b37d0;
        case 0x1b37d4u: goto label_1b37d4;
        case 0x1b37d8u: goto label_1b37d8;
        case 0x1b37dcu: goto label_1b37dc;
        case 0x1b37e0u: goto label_1b37e0;
        case 0x1b37e4u: goto label_1b37e4;
        case 0x1b37e8u: goto label_1b37e8;
        case 0x1b37ecu: goto label_1b37ec;
        case 0x1b37f0u: goto label_1b37f0;
        case 0x1b37f4u: goto label_1b37f4;
        case 0x1b37f8u: goto label_1b37f8;
        case 0x1b37fcu: goto label_1b37fc;
        case 0x1b3800u: goto label_1b3800;
        case 0x1b3804u: goto label_1b3804;
        case 0x1b3808u: goto label_1b3808;
        case 0x1b380cu: goto label_1b380c;
        case 0x1b3810u: goto label_1b3810;
        case 0x1b3814u: goto label_1b3814;
        case 0x1b3818u: goto label_1b3818;
        case 0x1b381cu: goto label_1b381c;
        case 0x1b3820u: goto label_1b3820;
        case 0x1b3824u: goto label_1b3824;
        case 0x1b3828u: goto label_1b3828;
        case 0x1b382cu: goto label_1b382c;
        case 0x1b3830u: goto label_1b3830;
        case 0x1b3834u: goto label_1b3834;
        default: break;
    }

    ctx->pc = 0x1b3610u;

label_1b3610:
    // 0x1b3610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b3614:
    // 0x1b3614: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b3614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1b3618:
    // 0x1b3618: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1b361c:
    // 0x1b361c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b361cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3620:
    // 0x1b3620: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b3620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b3624:
    // 0x1b3624: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1b3624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1b3628:
    // 0x1b3628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b362c:
    // 0x1b362c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1b3630:
    // 0x1b3630: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b3630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1b3634:
    // 0x1b3634: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b3634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b3638:
    // 0x1b3638: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1b3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1b363c:
    // 0x1b363c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1b363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1b3640:
    // 0x1b3640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b3644:
    // 0x1b3644: 0xc087502  jal         func_21D408
label_1b3648:
    if (ctx->pc == 0x1B3648u) {
        ctx->pc = 0x1B3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3644u;
        // 0x1b3648: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B364Cu;
        goto label_1b364c;
    }
    ctx->pc = 0x1B3644u;
    SET_GPR_U32(ctx, 31, 0x1B364Cu);
    ctx->pc = 0x1B3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3644u;
    // 0x1b3648: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B3644u, 0x1B364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B364Cu;
label_1b364c:
    // 0x1b364c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3650:
    // 0x1b3650: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b3654:
    // 0x1b3654: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b3658:
    // 0x1b3658: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_1b365c:
    if (ctx->pc == 0x1B365Cu) {
        ctx->pc = 0x1B365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3658u;
        // 0x1b365c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3660u;
        goto label_1b3660;
    }
    ctx->pc = 0x1B3658u;
    {
        const bool branch_taken_0x1b3658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3658) {
            ctx->pc = 0x1B365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3658u;
            // 0x1b365c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3670u;
            goto label_1b3670;
        }
    }
    ctx->pc = 0x1B3660u;
label_1b3660:
    // 0x1b3660: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b3664:
    if (ctx->pc == 0x1B3664u) {
        ctx->pc = 0x1B3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3660u;
        // 0x1b3664: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3668u;
        goto label_1b3668;
    }
    ctx->pc = 0x1B3660u;
    {
        const bool branch_taken_0x1b3660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3660u;
        // 0x1b3664: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3660) {
            ctx->pc = 0x1B3674u;
            goto label_1b3674;
        }
    }
    ctx->pc = 0x1B3668u;
label_1b3668:
    // 0x1b3668: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b3668u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b366c:
    // 0x1b366c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b3670:
    // 0x1b3670: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b3674:
    // 0x1b3674: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
label_1b3678:
    if (ctx->pc == 0x1B3678u) {
        ctx->pc = 0x1B3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3674u;
        // 0x1b3678: 0x24970164  addiu       $s7, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B367Cu;
        goto label_1b367c;
    }
    ctx->pc = 0x1B3674u;
    {
        const bool branch_taken_0x1b3674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3674u;
        // 0x1b3678: 0x24970164  addiu       $s7, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3674) {
            ctx->pc = 0x1B380Cu;
            goto label_1b380c;
        }
    }
    ctx->pc = 0x1B367Cu;
label_1b367c:
    // 0x1b367c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b367cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3680:
    // 0x1b3680: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3684:
    // 0x1b3684: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b3684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b3688:
    // 0x1b3688: 0xc137826  jal         func_4DE098
label_1b368c:
    if (ctx->pc == 0x1B368Cu) {
        ctx->pc = 0x1B368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3688u;
        // 0x1b368c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3690u;
        goto label_1b3690;
    }
    ctx->pc = 0x1B3688u;
    SET_GPR_U32(ctx, 31, 0x1B3690u);
    ctx->pc = 0x1B368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3688u;
    // 0x1b368c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x1B3688u, 0x1B3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3690u;
label_1b3690:
    // 0x1b3690: 0xc0e409a  jal         func_390268
label_1b3694:
    if (ctx->pc == 0x1B3694u) {
        ctx->pc = 0x1B3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3690u;
        // 0x1b3694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3698u;
        goto label_1b3698;
    }
    ctx->pc = 0x1B3690u;
    SET_GPR_U32(ctx, 31, 0x1B3698u);
    ctx->pc = 0x1B3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3690u;
    // 0x1b3694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B3690u, 0x1B3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3698u;
label_1b3698:
    // 0x1b3698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b369c:
    // 0x1b369c: 0x52000058  beql        $s0, $zero, . + 4 + (0x58 << 2)
label_1b36a0:
    if (ctx->pc == 0x1B36A0u) {
        ctx->pc = 0x1B36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B369Cu;
        // 0x1b36a0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36A4u;
        goto label_1b36a4;
    }
    ctx->pc = 0x1B369Cu;
    {
        const bool branch_taken_0x1b369c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b369c) {
            ctx->pc = 0x1B36A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B369Cu;
            // 0x1b36a0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B36A4u;
label_1b36a4:
    // 0x1b36a4: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
label_1b36a8:
    if (ctx->pc == 0x1B36A8u) {
        ctx->pc = 0x1B36ACu;
        goto label_1b36ac;
    }
    ctx->pc = 0x1B36A4u;
    {
        const bool branch_taken_0x1b36a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36a4) {
            ctx->pc = 0x1B373Cu;
            goto label_1b373c;
        }
    }
    ctx->pc = 0x1B36ACu;
label_1b36ac:
    // 0x1b36ac: 0xc087502  jal         func_21D408
label_1b36b0:
    if (ctx->pc == 0x1B36B0u) {
        ctx->pc = 0x1B36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36ACu;
        // 0x1b36b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36B4u;
        goto label_1b36b4;
    }
    ctx->pc = 0x1B36ACu;
    SET_GPR_U32(ctx, 31, 0x1B36B4u);
    ctx->pc = 0x1B36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36ACu;
    // 0x1b36b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B36ACu, 0x1B36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36B4u;
label_1b36b4:
    // 0x1b36b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b36b8:
    // 0x1b36b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b36bc:
    // 0x1b36bc: 0x50620050  beql        $v1, $v0, . + 4 + (0x50 << 2)
label_1b36c0:
    if (ctx->pc == 0x1B36C0u) {
        ctx->pc = 0x1B36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36BCu;
        // 0x1b36c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36C4u;
        goto label_1b36c4;
    }
    ctx->pc = 0x1B36BCu;
    {
        const bool branch_taken_0x1b36bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b36bc) {
            ctx->pc = 0x1B36C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B36BCu;
            // 0x1b36c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B36C4u;
label_1b36c4:
    // 0x1b36c4: 0xc087502  jal         func_21D408
label_1b36c8:
    if (ctx->pc == 0x1B36C8u) {
        ctx->pc = 0x1B36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36C4u;
        // 0x1b36c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36CCu;
        goto label_1b36cc;
    }
    ctx->pc = 0x1B36C4u;
    SET_GPR_U32(ctx, 31, 0x1B36CCu);
    ctx->pc = 0x1B36C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36C4u;
    // 0x1b36c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B36C4u, 0x1B36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36CCu;
label_1b36cc:
    // 0x1b36cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b36d0:
    // 0x1b36d0: 0x10750006  beq         $v1, $s5, . + 4 + (0x6 << 2)
label_1b36d4:
    if (ctx->pc == 0x1B36D4u) {
        ctx->pc = 0x1B36D8u;
        goto label_1b36d8;
    }
    ctx->pc = 0x1B36D0u;
    {
        const bool branch_taken_0x1b36d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x1b36d0) {
            ctx->pc = 0x1B36ECu;
            goto label_1b36ec;
        }
    }
    ctx->pc = 0x1B36D8u;
label_1b36d8:
    // 0x1b36d8: 0xc087502  jal         func_21D408
label_1b36dc:
    if (ctx->pc == 0x1B36DCu) {
        ctx->pc = 0x1B36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36D8u;
        // 0x1b36dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36E0u;
        goto label_1b36e0;
    }
    ctx->pc = 0x1B36D8u;
    SET_GPR_U32(ctx, 31, 0x1B36E0u);
    ctx->pc = 0x1B36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36D8u;
    // 0x1b36dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B36D8u, 0x1B36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36E0u;
label_1b36e0:
    // 0x1b36e0: 0xc05959e  jal         func_165678
label_1b36e4:
    if (ctx->pc == 0x1B36E4u) {
        ctx->pc = 0x1B36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36E0u;
        // 0x1b36e4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36E8u;
        goto label_1b36e8;
    }
    ctx->pc = 0x1B36E0u;
    SET_GPR_U32(ctx, 31, 0x1B36E8u);
    ctx->pc = 0x1B36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36E0u;
    // 0x1b36e4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x1B36E0u, 0x1B36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36E8u;
label_1b36e8:
    // 0x1b36e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b36e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b36ec:
    // 0x1b36ec: 0x52000044  beql        $s0, $zero, . + 4 + (0x44 << 2)
label_1b36f0:
    if (ctx->pc == 0x1B36F0u) {
        ctx->pc = 0x1B36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36ECu;
        // 0x1b36f0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B36F4u;
        goto label_1b36f4;
    }
    ctx->pc = 0x1B36ECu;
    {
        const bool branch_taken_0x1b36ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36ec) {
            ctx->pc = 0x1B36F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B36ECu;
            // 0x1b36f0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B36F4u;
label_1b36f4:
    // 0x1b36f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b36f8:
    // 0x1b36f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b36f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b36fc:
    // 0x1b36fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b3700:
    // 0x1b3700: 0x40f809  jalr        $v0
label_1b3704:
    if (ctx->pc == 0x1B3704u) {
        ctx->pc = 0x1B3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3700u;
        // 0x1b3704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3708u;
        goto label_1b3708;
    }
    ctx->pc = 0x1B3700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3708u);
        ctx->pc = 0x1B3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3700u;
        // 0x1b3704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3700u, 0x1B3708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3708u;
label_1b3708:
    // 0x1b3708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b370c:
    // 0x1b370c: 0xc0712f8  jal         func_1C4BE0
label_1b3710:
    if (ctx->pc == 0x1B3710u) {
        ctx->pc = 0x1B3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B370Cu;
        // 0x1b3710: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3714u;
        goto label_1b3714;
    }
    ctx->pc = 0x1B370Cu;
    SET_GPR_U32(ctx, 31, 0x1B3714u);
    ctx->pc = 0x1B3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B370Cu;
    // 0x1b3710: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4BE0u, 0x1B370Cu, 0x1B3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3714u;
label_1b3714:
    // 0x1b3714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b3718:
    // 0x1b3718: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b3718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b371c:
    // 0x1b371c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b3720:
    // 0x1b3720: 0x40f809  jalr        $v0
label_1b3724:
    if (ctx->pc == 0x1B3724u) {
        ctx->pc = 0x1B3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3720u;
        // 0x1b3724: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3728u;
        goto label_1b3728;
    }
    ctx->pc = 0x1B3720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3728u);
        ctx->pc = 0x1B3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3720u;
        // 0x1b3724: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3720u, 0x1B3728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3728u;
label_1b3728:
    // 0x1b3728: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b372c:
    // 0x1b372c: 0xc0712f8  jal         func_1C4BE0
label_1b3730:
    if (ctx->pc == 0x1B3730u) {
        ctx->pc = 0x1B3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B372Cu;
        // 0x1b3730: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3734u;
        goto label_1b3734;
    }
    ctx->pc = 0x1B372Cu;
    SET_GPR_U32(ctx, 31, 0x1B3734u);
    ctx->pc = 0x1B3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B372Cu;
    // 0x1b3730: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4BE0u, 0x1B372Cu, 0x1B3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3734u;
label_1b3734:
    // 0x1b3734: 0x10000032  b           . + 4 + (0x32 << 2)
label_1b3738:
    if (ctx->pc == 0x1B3738u) {
        ctx->pc = 0x1B3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3734u;
        // 0x1b3738: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B373Cu;
        goto label_1b373c;
    }
    ctx->pc = 0x1B3734u;
    {
        const bool branch_taken_0x1b3734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3734u;
        // 0x1b3738: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3734) {
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B373Cu;
label_1b373c:
    // 0x1b373c: 0xc087502  jal         func_21D408
label_1b3740:
    if (ctx->pc == 0x1B3740u) {
        ctx->pc = 0x1B3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B373Cu;
        // 0x1b3740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3744u;
        goto label_1b3744;
    }
    ctx->pc = 0x1B373Cu;
    SET_GPR_U32(ctx, 31, 0x1B3744u);
    ctx->pc = 0x1B3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B373Cu;
    // 0x1b3740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B373Cu, 0x1B3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3744u;
label_1b3744:
    // 0x1b3744: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b3744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b3748:
    // 0x1b3748: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b374c:
    // 0x1b374c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b3750:
    if (ctx->pc == 0x1B3750u) {
        ctx->pc = 0x1B3754u;
        goto label_1b3754;
    }
    ctx->pc = 0x1B374Cu;
    {
        const bool branch_taken_0x1b374c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b374c) {
            ctx->pc = 0x1B375Cu;
            goto label_1b375c;
        }
    }
    ctx->pc = 0x1B3754u;
label_1b3754:
    // 0x1b3754: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_1b3758:
    if (ctx->pc == 0x1B3758u) {
        ctx->pc = 0x1B3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3754u;
        // 0x1b3758: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B375Cu;
        goto label_1b375c;
    }
    ctx->pc = 0x1B3754u;
    {
        const bool branch_taken_0x1b3754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3754) {
            ctx->pc = 0x1B3758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3754u;
            // 0x1b3758: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B375Cu;
label_1b375c:
    // 0x1b375c: 0xc087502  jal         func_21D408
label_1b3760:
    if (ctx->pc == 0x1B3760u) {
        ctx->pc = 0x1B3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B375Cu;
        // 0x1b3760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3764u;
        goto label_1b3764;
    }
    ctx->pc = 0x1B375Cu;
    SET_GPR_U32(ctx, 31, 0x1B3764u);
    ctx->pc = 0x1B3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B375Cu;
    // 0x1b3760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B375Cu, 0x1B3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3764u;
label_1b3764:
    // 0x1b3764: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b3764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b3768:
    // 0x1b3768: 0x10750006  beq         $v1, $s5, . + 4 + (0x6 << 2)
label_1b376c:
    if (ctx->pc == 0x1B376Cu) {
        ctx->pc = 0x1B376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3768u;
        // 0x1b376c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3770u;
        goto label_1b3770;
    }
    ctx->pc = 0x1B3768u;
    {
        const bool branch_taken_0x1b3768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1B376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3768u;
        // 0x1b376c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3768) {
            ctx->pc = 0x1B3784u;
            goto label_1b3784;
        }
    }
    ctx->pc = 0x1B3770u;
label_1b3770:
    // 0x1b3770: 0xc087502  jal         func_21D408
label_1b3774:
    if (ctx->pc == 0x1B3774u) {
        ctx->pc = 0x1B3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3770u;
        // 0x1b3774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3778u;
        goto label_1b3778;
    }
    ctx->pc = 0x1B3770u;
    SET_GPR_U32(ctx, 31, 0x1B3778u);
    ctx->pc = 0x1B3774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3770u;
    // 0x1b3774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B3770u, 0x1B3778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3778u;
label_1b3778:
    // 0x1b3778: 0xc05959e  jal         func_165678
label_1b377c:
    if (ctx->pc == 0x1B377Cu) {
        ctx->pc = 0x1B377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3778u;
        // 0x1b377c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3780u;
        goto label_1b3780;
    }
    ctx->pc = 0x1B3778u;
    SET_GPR_U32(ctx, 31, 0x1B3780u);
    ctx->pc = 0x1B377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3778u;
    // 0x1b377c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x1B3778u, 0x1B3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3780u;
label_1b3780:
    // 0x1b3780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3784:
    // 0x1b3784: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_1b3788:
    if (ctx->pc == 0x1B3788u) {
        ctx->pc = 0x1B3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3784u;
        // 0x1b3788: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B378Cu;
        goto label_1b378c;
    }
    ctx->pc = 0x1B3784u;
    {
        const bool branch_taken_0x1b3784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3784) {
            ctx->pc = 0x1B3788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3784u;
            // 0x1b3788: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B378Cu;
label_1b378c:
    // 0x1b378c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b3790:
    // 0x1b3790: 0x265115d0  addiu       $s1, $s2, 0x15D0
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
label_1b3794:
    // 0x1b3794: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b3794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b3798:
    // 0x1b3798: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b3798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b379c:
    // 0x1b379c: 0x40f809  jalr        $v0
label_1b37a0:
    if (ctx->pc == 0x1B37A0u) {
        ctx->pc = 0x1B37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B379Cu;
        // 0x1b37a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37A4u;
        goto label_1b37a4;
    }
    ctx->pc = 0x1B379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B37A4u);
        ctx->pc = 0x1B37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B379Cu;
        // 0x1b37a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B379Cu, 0x1B37A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B37A4u;
label_1b37a4:
    // 0x1b37a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b37a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b37a8:
    // 0x1b37a8: 0xc071322  jal         func_1C4C88
label_1b37ac:
    if (ctx->pc == 0x1B37ACu) {
        ctx->pc = 0x1B37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37A8u;
        // 0x1b37ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37B0u;
        goto label_1b37b0;
    }
    ctx->pc = 0x1B37A8u;
    SET_GPR_U32(ctx, 31, 0x1B37B0u);
    ctx->pc = 0x1B37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37A8u;
    // 0x1b37ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4C88u, 0x1B37A8u, 0x1B37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37B0u;
label_1b37b0:
    // 0x1b37b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b37b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b37b4:
    // 0x1b37b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1b37b8:
    if (ctx->pc == 0x1B37B8u) {
        ctx->pc = 0x1B37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37B4u;
        // 0x1b37b8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37BCu;
        goto label_1b37bc;
    }
    ctx->pc = 0x1B37B4u;
    {
        const bool branch_taken_0x1b37b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37b4) {
            ctx->pc = 0x1B37B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B37B4u;
            // 0x1b37b8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B37BCu;
label_1b37bc:
    // 0x1b37bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b37c0:
    // 0x1b37c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b37c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b37c4:
    // 0x1b37c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b37c8:
    // 0x1b37c8: 0x40f809  jalr        $v0
label_1b37cc:
    if (ctx->pc == 0x1B37CCu) {
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37D0u;
        goto label_1b37d0;
    }
    ctx->pc = 0x1B37C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B37D0u);
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37C8u, 0x1B37D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B37D0u;
label_1b37d0:
    // 0x1b37d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b37d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b37d4:
    // 0x1b37d4: 0xc0712f8  jal         func_1C4BE0
label_1b37d8:
    if (ctx->pc == 0x1B37D8u) {
        ctx->pc = 0x1B37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37D4u;
        // 0x1b37d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37DCu;
        goto label_1b37dc;
    }
    ctx->pc = 0x1B37D4u;
    SET_GPR_U32(ctx, 31, 0x1B37DCu);
    ctx->pc = 0x1B37D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37D4u;
    // 0x1b37d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4BE0u, 0x1B37D4u, 0x1B37DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37DCu;
label_1b37dc:
    // 0x1b37dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b37e0:
    // 0x1b37e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b37e4:
    // 0x1b37e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b37e8:
    // 0x1b37e8: 0x40f809  jalr        $v0
label_1b37ec:
    if (ctx->pc == 0x1B37ECu) {
        ctx->pc = 0x1B37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37E8u;
        // 0x1b37ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37F0u;
        goto label_1b37f0;
    }
    ctx->pc = 0x1B37E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B37F0u);
        ctx->pc = 0x1B37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37E8u;
        // 0x1b37ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37E8u, 0x1B37F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B37F0u;
label_1b37f0:
    // 0x1b37f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b37f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b37f4:
    // 0x1b37f4: 0xc0712f8  jal         func_1C4BE0
label_1b37f8:
    if (ctx->pc == 0x1B37F8u) {
        ctx->pc = 0x1B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37F4u;
        // 0x1b37f8: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37FCu;
        goto label_1b37fc;
    }
    ctx->pc = 0x1B37F4u;
    SET_GPR_U32(ctx, 31, 0x1B37FCu);
    ctx->pc = 0x1B37F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37F4u;
    // 0x1b37f8: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4BE0u, 0x1B37F4u, 0x1B37FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37FCu;
label_1b37fc:
    // 0x1b37fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b37fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b3800:
    // 0x1b3800: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x1b3800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1b3804:
    // 0x1b3804: 0x5440ffa0  bnel        $v0, $zero, . + 4 + (-0x60 << 2)
label_1b3808:
    if (ctx->pc == 0x1B3808u) {
        ctx->pc = 0x1B3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3804u;
        // 0x1b3808: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B380Cu;
        goto label_1b380c;
    }
    ctx->pc = 0x1B3804u;
    {
        const bool branch_taken_0x1b3804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3804) {
            ctx->pc = 0x1B3808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3804u;
            // 0x1b3808: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3688;
        }
    }
    ctx->pc = 0x1B380Cu;
label_1b380c:
    // 0x1b380c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b380cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b3810:
    // 0x1b3810: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b3810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b3814:
    // 0x1b3814: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b3814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b3818:
    // 0x1b3818: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b3818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b381c:
    // 0x1b381c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b381cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b3820:
    // 0x1b3820: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1b3820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3824:
    // 0x1b3824: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1b3824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b3828:
    // 0x1b3828: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1b3828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b382c:
    // 0x1b382c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3830:
    // 0x1b3830: 0x3e00008  jr          $ra
label_1b3834:
    if (ctx->pc == 0x1B3834u) {
        ctx->pc = 0x1B3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3830u;
        // 0x1b3834: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3838u;
        goto label_fallthrough_0x1b3830;
    }
    ctx->pc = 0x1B3830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3830u;
        // 0x1b3834: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b3830:
    ctx->pc = 0x1B3838u;
}
