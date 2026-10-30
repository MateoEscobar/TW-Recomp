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

// Function: sub_003D34E0
// Address: 0x3d34e0 - 0x3d37b0
void sub_003D34E0_0x3d34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D34E0_0x3d34e0");
#endif

    switch (ctx->pc) {
        case 0x3d34e0u: goto label_3d34e0;
        case 0x3d34e4u: goto label_3d34e4;
        case 0x3d34e8u: goto label_3d34e8;
        case 0x3d34ecu: goto label_3d34ec;
        case 0x3d34f0u: goto label_3d34f0;
        case 0x3d34f4u: goto label_3d34f4;
        case 0x3d34f8u: goto label_3d34f8;
        case 0x3d34fcu: goto label_3d34fc;
        case 0x3d3500u: goto label_3d3500;
        case 0x3d3504u: goto label_3d3504;
        case 0x3d3508u: goto label_3d3508;
        case 0x3d350cu: goto label_3d350c;
        case 0x3d3510u: goto label_3d3510;
        case 0x3d3514u: goto label_3d3514;
        case 0x3d3518u: goto label_3d3518;
        case 0x3d351cu: goto label_3d351c;
        case 0x3d3520u: goto label_3d3520;
        case 0x3d3524u: goto label_3d3524;
        case 0x3d3528u: goto label_3d3528;
        case 0x3d352cu: goto label_3d352c;
        case 0x3d3530u: goto label_3d3530;
        case 0x3d3534u: goto label_3d3534;
        case 0x3d3538u: goto label_3d3538;
        case 0x3d353cu: goto label_3d353c;
        case 0x3d3540u: goto label_3d3540;
        case 0x3d3544u: goto label_3d3544;
        case 0x3d3548u: goto label_3d3548;
        case 0x3d354cu: goto label_3d354c;
        case 0x3d3550u: goto label_3d3550;
        case 0x3d3554u: goto label_3d3554;
        case 0x3d3558u: goto label_3d3558;
        case 0x3d355cu: goto label_3d355c;
        case 0x3d3560u: goto label_3d3560;
        case 0x3d3564u: goto label_3d3564;
        case 0x3d3568u: goto label_3d3568;
        case 0x3d356cu: goto label_3d356c;
        case 0x3d3570u: goto label_3d3570;
        case 0x3d3574u: goto label_3d3574;
        case 0x3d3578u: goto label_3d3578;
        case 0x3d357cu: goto label_3d357c;
        case 0x3d3580u: goto label_3d3580;
        case 0x3d3584u: goto label_3d3584;
        case 0x3d3588u: goto label_3d3588;
        case 0x3d358cu: goto label_3d358c;
        case 0x3d3590u: goto label_3d3590;
        case 0x3d3594u: goto label_3d3594;
        case 0x3d3598u: goto label_3d3598;
        case 0x3d359cu: goto label_3d359c;
        case 0x3d35a0u: goto label_3d35a0;
        case 0x3d35a4u: goto label_3d35a4;
        case 0x3d35a8u: goto label_3d35a8;
        case 0x3d35acu: goto label_3d35ac;
        case 0x3d35b0u: goto label_3d35b0;
        case 0x3d35b4u: goto label_3d35b4;
        case 0x3d35b8u: goto label_3d35b8;
        case 0x3d35bcu: goto label_3d35bc;
        case 0x3d35c0u: goto label_3d35c0;
        case 0x3d35c4u: goto label_3d35c4;
        case 0x3d35c8u: goto label_3d35c8;
        case 0x3d35ccu: goto label_3d35cc;
        case 0x3d35d0u: goto label_3d35d0;
        case 0x3d35d4u: goto label_3d35d4;
        case 0x3d35d8u: goto label_3d35d8;
        case 0x3d35dcu: goto label_3d35dc;
        case 0x3d35e0u: goto label_3d35e0;
        case 0x3d35e4u: goto label_3d35e4;
        case 0x3d35e8u: goto label_3d35e8;
        case 0x3d35ecu: goto label_3d35ec;
        case 0x3d35f0u: goto label_3d35f0;
        case 0x3d35f4u: goto label_3d35f4;
        case 0x3d35f8u: goto label_3d35f8;
        case 0x3d35fcu: goto label_3d35fc;
        case 0x3d3600u: goto label_3d3600;
        case 0x3d3604u: goto label_3d3604;
        case 0x3d3608u: goto label_3d3608;
        case 0x3d360cu: goto label_3d360c;
        case 0x3d3610u: goto label_3d3610;
        case 0x3d3614u: goto label_3d3614;
        case 0x3d3618u: goto label_3d3618;
        case 0x3d361cu: goto label_3d361c;
        case 0x3d3620u: goto label_3d3620;
        case 0x3d3624u: goto label_3d3624;
        case 0x3d3628u: goto label_3d3628;
        case 0x3d362cu: goto label_3d362c;
        case 0x3d3630u: goto label_3d3630;
        case 0x3d3634u: goto label_3d3634;
        case 0x3d3638u: goto label_3d3638;
        case 0x3d363cu: goto label_3d363c;
        case 0x3d3640u: goto label_3d3640;
        case 0x3d3644u: goto label_3d3644;
        case 0x3d3648u: goto label_3d3648;
        case 0x3d364cu: goto label_3d364c;
        case 0x3d3650u: goto label_3d3650;
        case 0x3d3654u: goto label_3d3654;
        case 0x3d3658u: goto label_3d3658;
        case 0x3d365cu: goto label_3d365c;
        case 0x3d3660u: goto label_3d3660;
        case 0x3d3664u: goto label_3d3664;
        case 0x3d3668u: goto label_3d3668;
        case 0x3d366cu: goto label_3d366c;
        case 0x3d3670u: goto label_3d3670;
        case 0x3d3674u: goto label_3d3674;
        case 0x3d3678u: goto label_3d3678;
        case 0x3d367cu: goto label_3d367c;
        case 0x3d3680u: goto label_3d3680;
        case 0x3d3684u: goto label_3d3684;
        case 0x3d3688u: goto label_3d3688;
        case 0x3d368cu: goto label_3d368c;
        case 0x3d3690u: goto label_3d3690;
        case 0x3d3694u: goto label_3d3694;
        case 0x3d3698u: goto label_3d3698;
        case 0x3d369cu: goto label_3d369c;
        case 0x3d36a0u: goto label_3d36a0;
        case 0x3d36a4u: goto label_3d36a4;
        case 0x3d36a8u: goto label_3d36a8;
        case 0x3d36acu: goto label_3d36ac;
        case 0x3d36b0u: goto label_3d36b0;
        case 0x3d36b4u: goto label_3d36b4;
        case 0x3d36b8u: goto label_3d36b8;
        case 0x3d36bcu: goto label_3d36bc;
        case 0x3d36c0u: goto label_3d36c0;
        case 0x3d36c4u: goto label_3d36c4;
        case 0x3d36c8u: goto label_3d36c8;
        case 0x3d36ccu: goto label_3d36cc;
        case 0x3d36d0u: goto label_3d36d0;
        case 0x3d36d4u: goto label_3d36d4;
        case 0x3d36d8u: goto label_3d36d8;
        case 0x3d36dcu: goto label_3d36dc;
        case 0x3d36e0u: goto label_3d36e0;
        case 0x3d36e4u: goto label_3d36e4;
        case 0x3d36e8u: goto label_3d36e8;
        case 0x3d36ecu: goto label_3d36ec;
        case 0x3d36f0u: goto label_3d36f0;
        case 0x3d36f4u: goto label_3d36f4;
        case 0x3d36f8u: goto label_3d36f8;
        case 0x3d36fcu: goto label_3d36fc;
        case 0x3d3700u: goto label_3d3700;
        case 0x3d3704u: goto label_3d3704;
        case 0x3d3708u: goto label_3d3708;
        case 0x3d370cu: goto label_3d370c;
        case 0x3d3710u: goto label_3d3710;
        case 0x3d3714u: goto label_3d3714;
        case 0x3d3718u: goto label_3d3718;
        case 0x3d371cu: goto label_3d371c;
        case 0x3d3720u: goto label_3d3720;
        case 0x3d3724u: goto label_3d3724;
        case 0x3d3728u: goto label_3d3728;
        case 0x3d372cu: goto label_3d372c;
        case 0x3d3730u: goto label_3d3730;
        case 0x3d3734u: goto label_3d3734;
        case 0x3d3738u: goto label_3d3738;
        case 0x3d373cu: goto label_3d373c;
        case 0x3d3740u: goto label_3d3740;
        case 0x3d3744u: goto label_3d3744;
        case 0x3d3748u: goto label_3d3748;
        case 0x3d374cu: goto label_3d374c;
        case 0x3d3750u: goto label_3d3750;
        case 0x3d3754u: goto label_3d3754;
        case 0x3d3758u: goto label_3d3758;
        case 0x3d375cu: goto label_3d375c;
        case 0x3d3760u: goto label_3d3760;
        case 0x3d3764u: goto label_3d3764;
        case 0x3d3768u: goto label_3d3768;
        case 0x3d376cu: goto label_3d376c;
        case 0x3d3770u: goto label_3d3770;
        case 0x3d3774u: goto label_3d3774;
        case 0x3d3778u: goto label_3d3778;
        case 0x3d377cu: goto label_3d377c;
        case 0x3d3780u: goto label_3d3780;
        case 0x3d3784u: goto label_3d3784;
        case 0x3d3788u: goto label_3d3788;
        case 0x3d378cu: goto label_3d378c;
        case 0x3d3790u: goto label_3d3790;
        case 0x3d3794u: goto label_3d3794;
        case 0x3d3798u: goto label_3d3798;
        case 0x3d379cu: goto label_3d379c;
        case 0x3d37a0u: goto label_3d37a0;
        case 0x3d37a4u: goto label_3d37a4;
        case 0x3d37a8u: goto label_3d37a8;
        case 0x3d37acu: goto label_3d37ac;
        default: break;
    }

    ctx->pc = 0x3d34e0u;

label_3d34e0:
    // 0x3d34e0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3d34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3d34e4:
    // 0x3d34e4: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3d34e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3d34e8:
    // 0x3d34e8: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3d34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3d34ec:
    // 0x3d34ec: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3d34ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3d34f0:
    // 0x3d34f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d34f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d34f4:
    // 0x3d34f4: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3d34f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3d34f8:
    // 0x3d34f8: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3d34f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
label_3d34fc:
    // 0x3d34fc: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3d34fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3d3500:
    // 0x3d3500: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d3500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d3504:
    // 0x3d3504: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d3504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3508:
    // 0x3d3508: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d350c:
    // 0x3d350c: 0x40f809  jalr        $v0
label_3d3510:
    if (ctx->pc == 0x3D3510u) {
        ctx->pc = 0x3D3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D350Cu;
        // 0x3d3510: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3514u;
        goto label_3d3514;
    }
    ctx->pc = 0x3D350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3514u);
        ctx->pc = 0x3D3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D350Cu;
        // 0x3d3510: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D350Cu, 0x3D3514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3514u;
label_3d3514:
    // 0x3d3514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3518:
    // 0x3d3518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d351c:
    // 0x3d351c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d3520:
    // 0x3d3520: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d3520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d3524:
    // 0x3d3524: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d3528:
    // 0x3d3528: 0x0  nop
    ctx->pc = 0x3d3528u;
    // NOP
label_3d352c:
    // 0x3d352c: 0x0  nop
    ctx->pc = 0x3d352cu;
    // NOP
label_3d3530:
    // 0x3d3530: 0x0  nop
    ctx->pc = 0x3d3530u;
    // NOP
label_3d3534:
    // 0x3d3534: 0x0  nop
    ctx->pc = 0x3d3534u;
    // NOP
label_3d3538:
    // 0x3d3538: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d353c:
    if (ctx->pc == 0x3D353Cu) {
        ctx->pc = 0x3D353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3538u;
        // 0x3d353c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3540u;
        goto label_3d3540;
    }
    ctx->pc = 0x3D3538u;
    {
        const bool branch_taken_0x3d3538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3538u;
        // 0x3d353c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3538) {
            ctx->pc = 0x3D3528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3528;
        }
    }
    ctx->pc = 0x3D3540u;
label_3d3540:
    // 0x3d3540: 0xc138ddc  jal         func_4E3770
label_3d3544:
    if (ctx->pc == 0x3D3544u) {
        ctx->pc = 0x3D3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3540u;
        // 0x3d3544: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3548u;
        goto label_3d3548;
    }
    ctx->pc = 0x3D3540u;
    SET_GPR_U32(ctx, 31, 0x3D3548u);
    ctx->pc = 0x3D3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3540u;
    // 0x3d3544: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D3540u, 0x3D3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3548u;
label_3d3548:
    // 0x3d3548: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d354c:
    // 0x3d354c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3d3550:
    if (ctx->pc == 0x3D3550u) {
        ctx->pc = 0x3D3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D354Cu;
        // 0x3d3550: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3554u;
        goto label_3d3554;
    }
    ctx->pc = 0x3D354Cu;
    {
        const bool branch_taken_0x3d354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D354Cu;
        // 0x3d3550: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d354c) {
            ctx->pc = 0x3D359Cu;
            goto label_3d359c;
        }
    }
    ctx->pc = 0x3D3554u;
label_3d3554:
    // 0x3d3554: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3d3554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d3558:
    // 0x3d3558: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3d3558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d355c:
    // 0x3d355c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d355cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d3560:
    // 0x3d3560: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d3564:
    // 0x3d3564: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3d3564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_3d3568:
    // 0x3d3568: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3d3568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d356c:
    // 0x3d356c: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x3d356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_3d3570:
    // 0x3d3570: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d3574:
    // 0x3d3574: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x3d3574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_3d3578:
    // 0x3d3578: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3d3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d357c:
    // 0x3d357c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x3d357cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3d3580:
    // 0x3d3580: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_3d3584:
    if (ctx->pc == 0x3D3584u) {
        ctx->pc = 0x3D3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3580u;
        // 0x3d3584: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3588u;
        goto label_3d3588;
    }
    ctx->pc = 0x3D3580u;
    {
        const bool branch_taken_0x3d3580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3580) {
            ctx->pc = 0x3D3584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3580u;
            // 0x3d3584: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3600u;
            goto label_3d3600;
        }
    }
    ctx->pc = 0x3D3588u;
label_3d3588:
    // 0x3d3588: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d3588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d358c:
    // 0x3d358c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d3590:
    // 0x3d3590: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3d3590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3d3594:
    // 0x3d3594: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d3598:
    if (ctx->pc == 0x3D3598u) {
        ctx->pc = 0x3D3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3594u;
        // 0x3d3598: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D359Cu;
        goto label_3d359c;
    }
    ctx->pc = 0x3D3594u;
    {
        const bool branch_taken_0x3d3594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3594u;
        // 0x3d3598: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3594) {
            ctx->pc = 0x3D35FCu;
            goto label_3d35fc;
        }
    }
    ctx->pc = 0x3D359Cu;
label_3d359c:
    // 0x3d359c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x3d359cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d35a0:
    // 0x3d35a0: 0x16340008  bne         $s1, $s4, . + 4 + (0x8 << 2)
label_3d35a4:
    if (ctx->pc == 0x3D35A4u) {
        ctx->pc = 0x3D35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35A0u;
        // 0x3d35a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35A8u;
        goto label_3d35a8;
    }
    ctx->pc = 0x3D35A0u;
    {
        const bool branch_taken_0x3d35a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x3D35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35A0u;
        // 0x3d35a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d35a0) {
            ctx->pc = 0x3D35C4u;
            goto label_3d35c4;
        }
    }
    ctx->pc = 0x3D35A8u;
label_3d35a8:
    // 0x3d35a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d35ac:
    // 0x3d35ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d35acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d35b0:
    // 0x3d35b0: 0xc0e858c  jal         func_3A1630
label_3d35b4:
    if (ctx->pc == 0x3D35B4u) {
        ctx->pc = 0x3D35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35B0u;
        // 0x3d35b4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35B8u;
        goto label_3d35b8;
    }
    ctx->pc = 0x3D35B0u;
    SET_GPR_U32(ctx, 31, 0x3D35B8u);
    ctx->pc = 0x3D35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D35B0u;
    // 0x3d35b4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D35B0u, 0x3D35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D35B8u;
label_3d35b8:
    // 0x3d35b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d35b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d35bc:
    // 0x3d35bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d35c0:
    if (ctx->pc == 0x3D35C0u) {
        ctx->pc = 0x3D35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35BCu;
        // 0x3d35c0: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35C4u;
        goto label_3d35c4;
    }
    ctx->pc = 0x3D35BCu;
    {
        const bool branch_taken_0x3d35bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35BCu;
        // 0x3d35c0: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d35bc) {
            ctx->pc = 0x3D35E0u;
            goto label_3d35e0;
        }
    }
    ctx->pc = 0x3D35C4u;
label_3d35c4:
    // 0x3d35c4: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_3d35c8:
    if (ctx->pc == 0x3D35C8u) {
        ctx->pc = 0x3D35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35C4u;
        // 0x3d35c8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35CCu;
        goto label_3d35cc;
    }
    ctx->pc = 0x3D35C4u;
    {
        const bool branch_taken_0x3d35c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d35c4) {
            ctx->pc = 0x3D35C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D35C4u;
            // 0x3d35c8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D35E4u;
            goto label_3d35e4;
        }
    }
    ctx->pc = 0x3D35CCu;
label_3d35cc:
    // 0x3d35cc: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x3d35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_3d35d0:
    // 0x3d35d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d35d4:
    // 0x3d35d4: 0xc0e858c  jal         func_3A1630
label_3d35d8:
    if (ctx->pc == 0x3D35D8u) {
        ctx->pc = 0x3D35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35D4u;
        // 0x3d35d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35DCu;
        goto label_3d35dc;
    }
    ctx->pc = 0x3D35D4u;
    SET_GPR_U32(ctx, 31, 0x3D35DCu);
    ctx->pc = 0x3D35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D35D4u;
    // 0x3d35d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D35D4u, 0x3D35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D35DCu;
label_3d35dc:
    // 0x3d35dc: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x3d35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_3d35e0:
    // 0x3d35e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d35e4:
    // 0x3d35e4: 0x9645006e  lhu         $a1, 0x6E($s2)
    ctx->pc = 0x3d35e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
label_3d35e8:
    // 0x3d35e8: 0xc0cd4ee  jal         func_3353B8
label_3d35ec:
    if (ctx->pc == 0x3D35ECu) {
        ctx->pc = 0x3D35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35E8u;
        // 0x3d35ec: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35F0u;
        goto label_3d35f0;
    }
    ctx->pc = 0x3D35E8u;
    SET_GPR_U32(ctx, 31, 0x3D35F0u);
    ctx->pc = 0x3D35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D35E8u;
    // 0x3d35ec: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D35E8u, 0x3D35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D35F0u;
label_3d35f0:
    // 0x3d35f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d35f4:
    // 0x3d35f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d35f8:
    // 0x3d35f8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3d35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3d35fc:
    // 0x3d35fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d35fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d3600:
    // 0x3d3600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3604:
    // 0x3d3604: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3d3604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d3608:
    // 0x3d3608: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3d360c:
    if (ctx->pc == 0x3D360Cu) {
        ctx->pc = 0x3D360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3608u;
        // 0x3d360c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3610u;
        goto label_3d3610;
    }
    ctx->pc = 0x3D3608u;
    {
        const bool branch_taken_0x3d3608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3608u;
        // 0x3d360c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3608) {
            ctx->pc = 0x3D3688u;
            goto label_3d3688;
        }
    }
    ctx->pc = 0x3D3610u;
label_3d3610:
    // 0x3d3610: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d3614:
    // 0x3d3614: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3d3618:
    if (ctx->pc == 0x3D3618u) {
        ctx->pc = 0x3D3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3614u;
        // 0x3d3618: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D361Cu;
        goto label_3d361c;
    }
    ctx->pc = 0x3D3614u;
    {
        const bool branch_taken_0x3d3614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3614) {
            ctx->pc = 0x3D3618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3614u;
            // 0x3d3618: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3638u;
            goto label_3d3638;
        }
    }
    ctx->pc = 0x3D361Cu;
label_3d361c:
    // 0x3d361c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3620:
    // 0x3d3620: 0xc0e858c  jal         func_3A1630
label_3d3624:
    if (ctx->pc == 0x3D3624u) {
        ctx->pc = 0x3D3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3620u;
        // 0x3d3624: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3628u;
        goto label_3d3628;
    }
    ctx->pc = 0x3D3620u;
    SET_GPR_U32(ctx, 31, 0x3D3628u);
    ctx->pc = 0x3D3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3620u;
    // 0x3d3624: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3620u, 0x3D3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3628u;
label_3d3628:
    // 0x3d3628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d362c:
    // 0x3d362c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d3630:
    // 0x3d3630: 0x10000013  b           . + 4 + (0x13 << 2)
label_3d3634:
    if (ctx->pc == 0x3D3634u) {
        ctx->pc = 0x3D3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3630u;
        // 0x3d3634: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3638u;
        goto label_3d3638;
    }
    ctx->pc = 0x3D3630u;
    {
        const bool branch_taken_0x3d3630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3630u;
        // 0x3d3634: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3630) {
            ctx->pc = 0x3D3680u;
            goto label_3d3680;
        }
    }
    ctx->pc = 0x3D3638u;
label_3d3638:
    // 0x3d3638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d363c:
    // 0x3d363c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d363cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3d3640:
    // 0x3d3640: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d3640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d3644:
    // 0x3d3644: 0xc0e858c  jal         func_3A1630
label_3d3648:
    if (ctx->pc == 0x3D3648u) {
        ctx->pc = 0x3D3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3644u;
        // 0x3d3648: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D364Cu;
        goto label_3d364c;
    }
    ctx->pc = 0x3D3644u;
    SET_GPR_U32(ctx, 31, 0x3D364Cu);
    ctx->pc = 0x3D3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3644u;
    // 0x3d3648: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3644u, 0x3D364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D364Cu;
label_3d364c:
    // 0x3d364c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d364cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d3650:
    // 0x3d3650: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3d3650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d3654:
    // 0x3d3654: 0xc0cd4ee  jal         func_3353B8
label_3d3658:
    if (ctx->pc == 0x3D3658u) {
        ctx->pc = 0x3D3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3654u;
        // 0x3d3658: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D365Cu;
        goto label_3d365c;
    }
    ctx->pc = 0x3D3654u;
    SET_GPR_U32(ctx, 31, 0x3D365Cu);
    ctx->pc = 0x3D3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3654u;
    // 0x3d3658: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D3654u, 0x3D365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D365Cu;
label_3d365c:
    // 0x3d365c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3d365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3d3660:
    // 0x3d3660: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3d3660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d3664:
    // 0x3d3664: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d3664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d3668:
    // 0x3d3668: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d3668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d366c:
    // 0x3d366c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x3d366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_3d3670:
    // 0x3d3670: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d3670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d3674:
    // 0x3d3674: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x3d3674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_3d3678:
    // 0x3d3678: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d3678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d367c:
    // 0x3d367c: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x3d367cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
label_3d3680:
    // 0x3d3680: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d3684:
    if (ctx->pc == 0x3D3684u) {
        ctx->pc = 0x3D3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3680u;
        // 0x3d3684: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3688u;
        goto label_3d3688;
    }
    ctx->pc = 0x3D3680u;
    {
        const bool branch_taken_0x3d3680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3680u;
        // 0x3d3684: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3680) {
            ctx->pc = 0x3D368Cu;
            goto label_3d368c;
        }
    }
    ctx->pc = 0x3D3688u;
label_3d3688:
    // 0x3d3688: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d368c:
    // 0x3d368c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3d368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3d3690:
    // 0x3d3690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3694:
    // 0x3d3694: 0x5462003e  bnel        $v1, $v0, . + 4 + (0x3E << 2)
label_3d3698:
    if (ctx->pc == 0x3D3698u) {
        ctx->pc = 0x3D3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3694u;
        // 0x3d3698: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D369Cu;
        goto label_3d369c;
    }
    ctx->pc = 0x3D3694u;
    {
        const bool branch_taken_0x3d3694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3694) {
            ctx->pc = 0x3D3698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3694u;
            // 0x3d3698: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3790u;
            goto label_3d3790;
        }
    }
    ctx->pc = 0x3D369Cu;
label_3d369c:
    // 0x3d369c: 0x1683001a  bne         $s4, $v1, . + 4 + (0x1A << 2)
label_3d36a0:
    if (ctx->pc == 0x3D36A0u) {
        ctx->pc = 0x3D36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D369Cu;
        // 0x3d36a0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36A4u;
        goto label_3d36a4;
    }
    ctx->pc = 0x3D369Cu;
    {
        const bool branch_taken_0x3d369c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D369Cu;
        // 0x3d36a0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d369c) {
            ctx->pc = 0x3D3708u;
            goto label_3d3708;
        }
    }
    ctx->pc = 0x3D36A4u;
label_3d36a4:
    // 0x3d36a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d36a8:
    // 0x3d36a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d36a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d36ac:
    // 0x3d36ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d36acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d36b0:
    // 0x3d36b0: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x3d36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
label_3d36b4:
    // 0x3d36b4: 0xc0ea16a  jal         func_3A85A8
label_3d36b8:
    if (ctx->pc == 0x3D36B8u) {
        ctx->pc = 0x3D36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36B4u;
        // 0x3d36b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36BCu;
        goto label_3d36bc;
    }
    ctx->pc = 0x3D36B4u;
    SET_GPR_U32(ctx, 31, 0x3D36BCu);
    ctx->pc = 0x3D36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D36B4u;
    // 0x3d36b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D36B4u, 0x3D36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D36BCu;
label_3d36bc:
    // 0x3d36bc: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3d36bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d36c0:
    // 0x3d36c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d36c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d36c4:
    // 0x3d36c4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d36c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d36c8:
    // 0x3d36c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d36cc:
    // 0x3d36cc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d36ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d36d0:
    // 0x3d36d0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d36d4:
    // 0x3d36d4: 0x60f809  jalr        $v1
label_3d36d8:
    if (ctx->pc == 0x3D36D8u) {
        ctx->pc = 0x3D36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36D4u;
        // 0x3d36d8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36DCu;
        goto label_3d36dc;
    }
    ctx->pc = 0x3D36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D36DCu);
        ctx->pc = 0x3D36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36D4u;
        // 0x3d36d8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D36D4u, 0x3D36DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D36DCu;
label_3d36dc:
    // 0x3d36dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3d36dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d36e0:
    // 0x3d36e0: 0xc0ea16a  jal         func_3A85A8
label_3d36e4:
    if (ctx->pc == 0x3D36E4u) {
        ctx->pc = 0x3D36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36E0u;
        // 0x3d36e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36E8u;
        goto label_3d36e8;
    }
    ctx->pc = 0x3D36E0u;
    SET_GPR_U32(ctx, 31, 0x3D36E8u);
    ctx->pc = 0x3D36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D36E0u;
    // 0x3d36e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D36E0u, 0x3D36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D36E8u;
label_3d36e8:
    // 0x3d36e8: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x3d36e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d36ec:
    // 0x3d36ec: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d36ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d36f0:
    // 0x3d36f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d36f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d36f4:
    // 0x3d36f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d36f8:
    // 0x3d36f8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d36f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d36fc:
    // 0x3d36fc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d3700:
    // 0x3d3700: 0x60f809  jalr        $v1
label_3d3704:
    if (ctx->pc == 0x3D3704u) {
        ctx->pc = 0x3D3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3700u;
        // 0x3d3704: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3708u;
        goto label_3d3708;
    }
    ctx->pc = 0x3D3700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3708u);
        ctx->pc = 0x3D3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3700u;
        // 0x3d3704: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3700u, 0x3D3708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3708u;
label_3d3708:
    // 0x3d3708: 0x56800021  bnel        $s4, $zero, . + 4 + (0x21 << 2)
label_3d370c:
    if (ctx->pc == 0x3D370Cu) {
        ctx->pc = 0x3D370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3708u;
        // 0x3d370c: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3710u;
        goto label_3d3710;
    }
    ctx->pc = 0x3D3708u;
    {
        const bool branch_taken_0x3d3708 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3708) {
            ctx->pc = 0x3D370Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3708u;
            // 0x3d370c: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3790u;
            goto label_3d3790;
        }
    }
    ctx->pc = 0x3D3710u;
label_3d3710:
    // 0x3d3710: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d3710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d3714:
    // 0x3d3714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3718:
    // 0x3d3718: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d3718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d371c:
    // 0x3d371c: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x3d371cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
label_3d3720:
    // 0x3d3720: 0xc0ea16a  jal         func_3A85A8
label_3d3724:
    if (ctx->pc == 0x3D3724u) {
        ctx->pc = 0x3D3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3720u;
        // 0x3d3724: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3728u;
        goto label_3d3728;
    }
    ctx->pc = 0x3D3720u;
    SET_GPR_U32(ctx, 31, 0x3D3728u);
    ctx->pc = 0x3D3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3720u;
    // 0x3d3724: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D3720u, 0x3D3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3728u;
label_3d3728:
    // 0x3d3728: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3d3728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d372c:
    // 0x3d372c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d372cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3730:
    // 0x3d3730: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d3730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d3734:
    // 0x3d3734: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d3738:
    // 0x3d3738: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d3738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d373c:
    // 0x3d373c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d3740:
    // 0x3d3740: 0x60f809  jalr        $v1
label_3d3744:
    if (ctx->pc == 0x3D3744u) {
        ctx->pc = 0x3D3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3740u;
        // 0x3d3744: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3748u;
        goto label_3d3748;
    }
    ctx->pc = 0x3D3740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3748u);
        ctx->pc = 0x3D3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3740u;
        // 0x3d3744: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3740u, 0x3D3748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3748u;
label_3d3748:
    // 0x3d3748: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3d3748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d374c:
    // 0x3d374c: 0xc0ea16a  jal         func_3A85A8
label_3d3750:
    if (ctx->pc == 0x3D3750u) {
        ctx->pc = 0x3D3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D374Cu;
        // 0x3d3750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3754u;
        goto label_3d3754;
    }
    ctx->pc = 0x3D374Cu;
    SET_GPR_U32(ctx, 31, 0x3D3754u);
    ctx->pc = 0x3D3750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D374Cu;
    // 0x3d3750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D374Cu, 0x3D3754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3754u;
label_3d3754:
    // 0x3d3754: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x3d3754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d3758:
    // 0x3d3758: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d3758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d375c:
    // 0x3d375c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d375cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3760:
    // 0x3d3760: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d3760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d3764:
    // 0x3d3764: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d3764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d3768:
    // 0x3d3768: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d3768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d376c:
    // 0x3d376c: 0x60f809  jalr        $v1
label_3d3770:
    if (ctx->pc == 0x3D3770u) {
        ctx->pc = 0x3D3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D376Cu;
        // 0x3d3770: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3774u;
        goto label_3d3774;
    }
    ctx->pc = 0x3D376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3774u);
        ctx->pc = 0x3D3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D376Cu;
        // 0x3d3770: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D376Cu, 0x3D3774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3774u;
label_3d3774:
    // 0x3d3774: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d3774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d3778:
    // 0x3d3778: 0x3c04f164  lui         $a0, 0xF164
    ctx->pc = 0x3d3778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61796 << 16));
label_3d377c:
    // 0x3d377c: 0x3484dfe0  ori         $a0, $a0, 0xDFE0
    ctx->pc = 0x3d377cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57312);
label_3d3780:
    // 0x3d3780: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d3780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d3784:
    // 0x3d3784: 0xc045c8e  jal         func_117238
label_3d3788:
    if (ctx->pc == 0x3D3788u) {
        ctx->pc = 0x3D3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3784u;
        // 0x3d3788: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D378Cu;
        goto label_3d378c;
    }
    ctx->pc = 0x3D3784u;
    SET_GPR_U32(ctx, 31, 0x3D378Cu);
    ctx->pc = 0x3D3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3784u;
    // 0x3d3788: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D3784u, 0x3D378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D378Cu;
label_3d378c:
    // 0x3d378c: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3d378cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d3790:
    // 0x3d3790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d3790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3794:
    // 0x3d3794: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3d3794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d3798:
    // 0x3d3798: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3d3798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d379c:
    // 0x3d379c: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3d379cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d37a0:
    // 0x3d37a0: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x3d37a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d37a4:
    // 0x3d37a4: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3d37a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d37a8:
    // 0x3d37a8: 0x3e00008  jr          $ra
label_3d37ac:
    if (ctx->pc == 0x3D37ACu) {
        ctx->pc = 0x3D37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37A8u;
        // 0x3d37ac: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D37B0u;
        goto label_fallthrough_0x3d37a8;
    }
    ctx->pc = 0x3D37A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37A8u;
        // 0x3d37ac: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D37A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d37a8:
    ctx->pc = 0x3D37B0u;
}
