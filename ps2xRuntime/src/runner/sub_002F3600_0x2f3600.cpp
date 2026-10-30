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

// Function: sub_002F3600
// Address: 0x2f3600 - 0x2f3a20
void sub_002F3600_0x2f3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3600_0x2f3600");
#endif

    switch (ctx->pc) {
        case 0x2f3600u: goto label_2f3600;
        case 0x2f3604u: goto label_2f3604;
        case 0x2f3608u: goto label_2f3608;
        case 0x2f360cu: goto label_2f360c;
        case 0x2f3610u: goto label_2f3610;
        case 0x2f3614u: goto label_2f3614;
        case 0x2f3618u: goto label_2f3618;
        case 0x2f361cu: goto label_2f361c;
        case 0x2f3620u: goto label_2f3620;
        case 0x2f3624u: goto label_2f3624;
        case 0x2f3628u: goto label_2f3628;
        case 0x2f362cu: goto label_2f362c;
        case 0x2f3630u: goto label_2f3630;
        case 0x2f3634u: goto label_2f3634;
        case 0x2f3638u: goto label_2f3638;
        case 0x2f363cu: goto label_2f363c;
        case 0x2f3640u: goto label_2f3640;
        case 0x2f3644u: goto label_2f3644;
        case 0x2f3648u: goto label_2f3648;
        case 0x2f364cu: goto label_2f364c;
        case 0x2f3650u: goto label_2f3650;
        case 0x2f3654u: goto label_2f3654;
        case 0x2f3658u: goto label_2f3658;
        case 0x2f365cu: goto label_2f365c;
        case 0x2f3660u: goto label_2f3660;
        case 0x2f3664u: goto label_2f3664;
        case 0x2f3668u: goto label_2f3668;
        case 0x2f366cu: goto label_2f366c;
        case 0x2f3670u: goto label_2f3670;
        case 0x2f3674u: goto label_2f3674;
        case 0x2f3678u: goto label_2f3678;
        case 0x2f367cu: goto label_2f367c;
        case 0x2f3680u: goto label_2f3680;
        case 0x2f3684u: goto label_2f3684;
        case 0x2f3688u: goto label_2f3688;
        case 0x2f368cu: goto label_2f368c;
        case 0x2f3690u: goto label_2f3690;
        case 0x2f3694u: goto label_2f3694;
        case 0x2f3698u: goto label_2f3698;
        case 0x2f369cu: goto label_2f369c;
        case 0x2f36a0u: goto label_2f36a0;
        case 0x2f36a4u: goto label_2f36a4;
        case 0x2f36a8u: goto label_2f36a8;
        case 0x2f36acu: goto label_2f36ac;
        case 0x2f36b0u: goto label_2f36b0;
        case 0x2f36b4u: goto label_2f36b4;
        case 0x2f36b8u: goto label_2f36b8;
        case 0x2f36bcu: goto label_2f36bc;
        case 0x2f36c0u: goto label_2f36c0;
        case 0x2f36c4u: goto label_2f36c4;
        case 0x2f36c8u: goto label_2f36c8;
        case 0x2f36ccu: goto label_2f36cc;
        case 0x2f36d0u: goto label_2f36d0;
        case 0x2f36d4u: goto label_2f36d4;
        case 0x2f36d8u: goto label_2f36d8;
        case 0x2f36dcu: goto label_2f36dc;
        case 0x2f36e0u: goto label_2f36e0;
        case 0x2f36e4u: goto label_2f36e4;
        case 0x2f36e8u: goto label_2f36e8;
        case 0x2f36ecu: goto label_2f36ec;
        case 0x2f36f0u: goto label_2f36f0;
        case 0x2f36f4u: goto label_2f36f4;
        case 0x2f36f8u: goto label_2f36f8;
        case 0x2f36fcu: goto label_2f36fc;
        case 0x2f3700u: goto label_2f3700;
        case 0x2f3704u: goto label_2f3704;
        case 0x2f3708u: goto label_2f3708;
        case 0x2f370cu: goto label_2f370c;
        case 0x2f3710u: goto label_2f3710;
        case 0x2f3714u: goto label_2f3714;
        case 0x2f3718u: goto label_2f3718;
        case 0x2f371cu: goto label_2f371c;
        case 0x2f3720u: goto label_2f3720;
        case 0x2f3724u: goto label_2f3724;
        case 0x2f3728u: goto label_2f3728;
        case 0x2f372cu: goto label_2f372c;
        case 0x2f3730u: goto label_2f3730;
        case 0x2f3734u: goto label_2f3734;
        case 0x2f3738u: goto label_2f3738;
        case 0x2f373cu: goto label_2f373c;
        case 0x2f3740u: goto label_2f3740;
        case 0x2f3744u: goto label_2f3744;
        case 0x2f3748u: goto label_2f3748;
        case 0x2f374cu: goto label_2f374c;
        case 0x2f3750u: goto label_2f3750;
        case 0x2f3754u: goto label_2f3754;
        case 0x2f3758u: goto label_2f3758;
        case 0x2f375cu: goto label_2f375c;
        case 0x2f3760u: goto label_2f3760;
        case 0x2f3764u: goto label_2f3764;
        case 0x2f3768u: goto label_2f3768;
        case 0x2f376cu: goto label_2f376c;
        case 0x2f3770u: goto label_2f3770;
        case 0x2f3774u: goto label_2f3774;
        case 0x2f3778u: goto label_2f3778;
        case 0x2f377cu: goto label_2f377c;
        case 0x2f3780u: goto label_2f3780;
        case 0x2f3784u: goto label_2f3784;
        case 0x2f3788u: goto label_2f3788;
        case 0x2f378cu: goto label_2f378c;
        case 0x2f3790u: goto label_2f3790;
        case 0x2f3794u: goto label_2f3794;
        case 0x2f3798u: goto label_2f3798;
        case 0x2f379cu: goto label_2f379c;
        case 0x2f37a0u: goto label_2f37a0;
        case 0x2f37a4u: goto label_2f37a4;
        case 0x2f37a8u: goto label_2f37a8;
        case 0x2f37acu: goto label_2f37ac;
        case 0x2f37b0u: goto label_2f37b0;
        case 0x2f37b4u: goto label_2f37b4;
        case 0x2f37b8u: goto label_2f37b8;
        case 0x2f37bcu: goto label_2f37bc;
        case 0x2f37c0u: goto label_2f37c0;
        case 0x2f37c4u: goto label_2f37c4;
        case 0x2f37c8u: goto label_2f37c8;
        case 0x2f37ccu: goto label_2f37cc;
        case 0x2f37d0u: goto label_2f37d0;
        case 0x2f37d4u: goto label_2f37d4;
        case 0x2f37d8u: goto label_2f37d8;
        case 0x2f37dcu: goto label_2f37dc;
        case 0x2f37e0u: goto label_2f37e0;
        case 0x2f37e4u: goto label_2f37e4;
        case 0x2f37e8u: goto label_2f37e8;
        case 0x2f37ecu: goto label_2f37ec;
        case 0x2f37f0u: goto label_2f37f0;
        case 0x2f37f4u: goto label_2f37f4;
        case 0x2f37f8u: goto label_2f37f8;
        case 0x2f37fcu: goto label_2f37fc;
        case 0x2f3800u: goto label_2f3800;
        case 0x2f3804u: goto label_2f3804;
        case 0x2f3808u: goto label_2f3808;
        case 0x2f380cu: goto label_2f380c;
        case 0x2f3810u: goto label_2f3810;
        case 0x2f3814u: goto label_2f3814;
        case 0x2f3818u: goto label_2f3818;
        case 0x2f381cu: goto label_2f381c;
        case 0x2f3820u: goto label_2f3820;
        case 0x2f3824u: goto label_2f3824;
        case 0x2f3828u: goto label_2f3828;
        case 0x2f382cu: goto label_2f382c;
        case 0x2f3830u: goto label_2f3830;
        case 0x2f3834u: goto label_2f3834;
        case 0x2f3838u: goto label_2f3838;
        case 0x2f383cu: goto label_2f383c;
        case 0x2f3840u: goto label_2f3840;
        case 0x2f3844u: goto label_2f3844;
        case 0x2f3848u: goto label_2f3848;
        case 0x2f384cu: goto label_2f384c;
        case 0x2f3850u: goto label_2f3850;
        case 0x2f3854u: goto label_2f3854;
        case 0x2f3858u: goto label_2f3858;
        case 0x2f385cu: goto label_2f385c;
        case 0x2f3860u: goto label_2f3860;
        case 0x2f3864u: goto label_2f3864;
        case 0x2f3868u: goto label_2f3868;
        case 0x2f386cu: goto label_2f386c;
        case 0x2f3870u: goto label_2f3870;
        case 0x2f3874u: goto label_2f3874;
        case 0x2f3878u: goto label_2f3878;
        case 0x2f387cu: goto label_2f387c;
        case 0x2f3880u: goto label_2f3880;
        case 0x2f3884u: goto label_2f3884;
        case 0x2f3888u: goto label_2f3888;
        case 0x2f388cu: goto label_2f388c;
        case 0x2f3890u: goto label_2f3890;
        case 0x2f3894u: goto label_2f3894;
        case 0x2f3898u: goto label_2f3898;
        case 0x2f389cu: goto label_2f389c;
        case 0x2f38a0u: goto label_2f38a0;
        case 0x2f38a4u: goto label_2f38a4;
        case 0x2f38a8u: goto label_2f38a8;
        case 0x2f38acu: goto label_2f38ac;
        case 0x2f38b0u: goto label_2f38b0;
        case 0x2f38b4u: goto label_2f38b4;
        case 0x2f38b8u: goto label_2f38b8;
        case 0x2f38bcu: goto label_2f38bc;
        case 0x2f38c0u: goto label_2f38c0;
        case 0x2f38c4u: goto label_2f38c4;
        case 0x2f38c8u: goto label_2f38c8;
        case 0x2f38ccu: goto label_2f38cc;
        case 0x2f38d0u: goto label_2f38d0;
        case 0x2f38d4u: goto label_2f38d4;
        case 0x2f38d8u: goto label_2f38d8;
        case 0x2f38dcu: goto label_2f38dc;
        case 0x2f38e0u: goto label_2f38e0;
        case 0x2f38e4u: goto label_2f38e4;
        case 0x2f38e8u: goto label_2f38e8;
        case 0x2f38ecu: goto label_2f38ec;
        case 0x2f38f0u: goto label_2f38f0;
        case 0x2f38f4u: goto label_2f38f4;
        case 0x2f38f8u: goto label_2f38f8;
        case 0x2f38fcu: goto label_2f38fc;
        case 0x2f3900u: goto label_2f3900;
        case 0x2f3904u: goto label_2f3904;
        case 0x2f3908u: goto label_2f3908;
        case 0x2f390cu: goto label_2f390c;
        case 0x2f3910u: goto label_2f3910;
        case 0x2f3914u: goto label_2f3914;
        case 0x2f3918u: goto label_2f3918;
        case 0x2f391cu: goto label_2f391c;
        case 0x2f3920u: goto label_2f3920;
        case 0x2f3924u: goto label_2f3924;
        case 0x2f3928u: goto label_2f3928;
        case 0x2f392cu: goto label_2f392c;
        case 0x2f3930u: goto label_2f3930;
        case 0x2f3934u: goto label_2f3934;
        case 0x2f3938u: goto label_2f3938;
        case 0x2f393cu: goto label_2f393c;
        case 0x2f3940u: goto label_2f3940;
        case 0x2f3944u: goto label_2f3944;
        case 0x2f3948u: goto label_2f3948;
        case 0x2f394cu: goto label_2f394c;
        case 0x2f3950u: goto label_2f3950;
        case 0x2f3954u: goto label_2f3954;
        case 0x2f3958u: goto label_2f3958;
        case 0x2f395cu: goto label_2f395c;
        case 0x2f3960u: goto label_2f3960;
        case 0x2f3964u: goto label_2f3964;
        case 0x2f3968u: goto label_2f3968;
        case 0x2f396cu: goto label_2f396c;
        case 0x2f3970u: goto label_2f3970;
        case 0x2f3974u: goto label_2f3974;
        case 0x2f3978u: goto label_2f3978;
        case 0x2f397cu: goto label_2f397c;
        case 0x2f3980u: goto label_2f3980;
        case 0x2f3984u: goto label_2f3984;
        case 0x2f3988u: goto label_2f3988;
        case 0x2f398cu: goto label_2f398c;
        case 0x2f3990u: goto label_2f3990;
        case 0x2f3994u: goto label_2f3994;
        case 0x2f3998u: goto label_2f3998;
        case 0x2f399cu: goto label_2f399c;
        case 0x2f39a0u: goto label_2f39a0;
        case 0x2f39a4u: goto label_2f39a4;
        case 0x2f39a8u: goto label_2f39a8;
        case 0x2f39acu: goto label_2f39ac;
        case 0x2f39b0u: goto label_2f39b0;
        case 0x2f39b4u: goto label_2f39b4;
        case 0x2f39b8u: goto label_2f39b8;
        case 0x2f39bcu: goto label_2f39bc;
        case 0x2f39c0u: goto label_2f39c0;
        case 0x2f39c4u: goto label_2f39c4;
        case 0x2f39c8u: goto label_2f39c8;
        case 0x2f39ccu: goto label_2f39cc;
        case 0x2f39d0u: goto label_2f39d0;
        case 0x2f39d4u: goto label_2f39d4;
        case 0x2f39d8u: goto label_2f39d8;
        case 0x2f39dcu: goto label_2f39dc;
        case 0x2f39e0u: goto label_2f39e0;
        case 0x2f39e4u: goto label_2f39e4;
        case 0x2f39e8u: goto label_2f39e8;
        case 0x2f39ecu: goto label_2f39ec;
        case 0x2f39f0u: goto label_2f39f0;
        case 0x2f39f4u: goto label_2f39f4;
        case 0x2f39f8u: goto label_2f39f8;
        case 0x2f39fcu: goto label_2f39fc;
        case 0x2f3a00u: goto label_2f3a00;
        case 0x2f3a04u: goto label_2f3a04;
        case 0x2f3a08u: goto label_2f3a08;
        case 0x2f3a0cu: goto label_2f3a0c;
        case 0x2f3a10u: goto label_2f3a10;
        case 0x2f3a14u: goto label_2f3a14;
        case 0x2f3a18u: goto label_2f3a18;
        case 0x2f3a1cu: goto label_2f3a1c;
        default: break;
    }

    ctx->pc = 0x2f3600u;

label_2f3600:
    // 0x2f3600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f3604:
    // 0x2f3604: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f3604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2f3608:
    // 0x2f3608: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2f360c:
    // 0x2f360c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f360cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3610:
    // 0x2f3610: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f3614:
    // 0x2f3614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f3618:
    // 0x2f3618: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2f3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2f361c:
    // 0x2f361c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f3620:
    // 0x2f3620: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f3620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2f3624:
    // 0x2f3624: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f3624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3628:
    // 0x2f3628: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f362c:
    // 0x2f362c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2f362cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f3630:
    // 0x2f3630: 0xc0e409a  jal         func_390268
label_2f3634:
    if (ctx->pc == 0x2F3634u) {
        ctx->pc = 0x2F3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3630u;
        // 0x2f3634: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3638u;
        goto label_2f3638;
    }
    ctx->pc = 0x2F3630u;
    SET_GPR_U32(ctx, 31, 0x2F3638u);
    ctx->pc = 0x2F3634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3630u;
    // 0x2f3634: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F3630u, 0x2F3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3638u;
label_2f3638:
    // 0x2f3638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f363c:
    // 0x2f363c: 0xc0a34d6  jal         func_28D358
label_2f3640:
    if (ctx->pc == 0x2F3640u) {
        ctx->pc = 0x2F3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F363Cu;
        // 0x2f3640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3644u;
        goto label_2f3644;
    }
    ctx->pc = 0x2F363Cu;
    SET_GPR_U32(ctx, 31, 0x2F3644u);
    ctx->pc = 0x2F3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F363Cu;
    // 0x2f3640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F363Cu, 0x2F3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3644u;
label_2f3644:
    // 0x2f3644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3648:
    // 0x2f3648: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2f364c:
    if (ctx->pc == 0x2F364Cu) {
        ctx->pc = 0x2F364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3648u;
        // 0x2f364c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3650u;
        goto label_2f3650;
    }
    ctx->pc = 0x2F3648u;
    {
        const bool branch_taken_0x2f3648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3648u;
        // 0x2f364c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3648) {
            ctx->pc = 0x2F3698u;
            goto label_2f3698;
        }
    }
    ctx->pc = 0x2F3650u;
label_2f3650:
    // 0x2f3650: 0xc0bc592  jal         func_2F1648
label_2f3654:
    if (ctx->pc == 0x2F3654u) {
        ctx->pc = 0x2F3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3650u;
        // 0x2f3654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3658u;
        goto label_2f3658;
    }
    ctx->pc = 0x2F3650u;
    SET_GPR_U32(ctx, 31, 0x2F3658u);
    ctx->pc = 0x2F3654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3650u;
    // 0x2f3654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1648u, 0x2F3650u, 0x2F3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3658u;
label_2f3658:
    // 0x2f3658: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f3658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f365c:
    // 0x2f365c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f365cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3660:
    // 0x2f3660: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2f3664:
    if (ctx->pc == 0x2F3664u) {
        ctx->pc = 0x2F3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3660u;
        // 0x2f3664: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3668u;
        goto label_2f3668;
    }
    ctx->pc = 0x2F3660u;
    {
        const bool branch_taken_0x2f3660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3660) {
            ctx->pc = 0x2F3664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3660u;
            // 0x2f3664: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3668u;
            goto label_2f3668;
        }
    }
    ctx->pc = 0x2F3668u;
label_2f3668:
    // 0x2f3668: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2f366c:
    // 0x2f366c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f366cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f3670:
    // 0x2f3670: 0x2010  mfhi        $a0
    ctx->pc = 0x2f3670u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2f3674:
    // 0x2f3674: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_2f3678:
    if (ctx->pc == 0x2F3678u) {
        ctx->pc = 0x2F3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3674u;
        // 0x2f3678: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F367Cu;
        goto label_2f367c;
    }
    ctx->pc = 0x2F3674u;
    {
        const bool branch_taken_0x2f3674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3674) {
            ctx->pc = 0x2F3678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3674u;
            // 0x2f3678: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F369Cu;
            goto label_2f369c;
        }
    }
    ctx->pc = 0x2F367Cu;
label_2f367c:
    // 0x2f367c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f367cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f3680:
    // 0x2f3680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f3680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f3684:
    // 0x2f3684: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2f3684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2f3688:
    // 0x2f3688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f368c:
    // 0x2f368c: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2f368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2f3690:
    // 0x2f3690: 0xc0a6800  jal         func_29A000
label_2f3694:
    if (ctx->pc == 0x2F3694u) {
        ctx->pc = 0x2F3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3690u;
        // 0x2f3694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3698u;
        goto label_2f3698;
    }
    ctx->pc = 0x2F3690u;
    SET_GPR_U32(ctx, 31, 0x2F3698u);
    ctx->pc = 0x2F3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3690u;
    // 0x2f3694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2F3690u, 0x2F3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3698u;
label_2f3698:
    // 0x2f3698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f3698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f369c:
    // 0x2f369c: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f369cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f36a0:
    // 0x2f36a0: 0x1c4000d3  bgtz        $v0, . + 4 + (0xD3 << 2)
label_2f36a4:
    if (ctx->pc == 0x2F36A4u) {
        ctx->pc = 0x2F36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36A0u;
        // 0x2f36a4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36A8u;
        goto label_2f36a8;
    }
    ctx->pc = 0x2F36A0u;
    {
        const bool branch_taken_0x2f36a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36A0u;
        // 0x2f36a4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36a0) {
            ctx->pc = 0x2F39F0u;
            goto label_2f39f0;
        }
    }
    ctx->pc = 0x2F36A8u;
label_2f36a8:
    // 0x2f36a8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2f36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2f36ac:
    // 0x2f36ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f36acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f36b0:
    // 0x2f36b0: 0xc089998  jal         func_226660
label_2f36b4:
    if (ctx->pc == 0x2F36B4u) {
        ctx->pc = 0x2F36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36B0u;
        // 0x2f36b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36B8u;
        goto label_2f36b8;
    }
    ctx->pc = 0x2F36B0u;
    SET_GPR_U32(ctx, 31, 0x2F36B8u);
    ctx->pc = 0x2F36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36B0u;
    // 0x2f36b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F36B0u, 0x2F36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36B8u;
label_2f36b8:
    // 0x2f36b8: 0x105300ce  beq         $v0, $s3, . + 4 + (0xCE << 2)
label_2f36bc:
    if (ctx->pc == 0x2F36BCu) {
        ctx->pc = 0x2F36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36B8u;
        // 0x2f36bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36C0u;
        goto label_2f36c0;
    }
    ctx->pc = 0x2F36B8u;
    {
        const bool branch_taken_0x2f36b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36B8u;
        // 0x2f36bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36b8) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F36C0u;
label_2f36c0:
    // 0x2f36c0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2f36c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2f36c4:
    // 0x2f36c4: 0x1473009d  bne         $v1, $s3, . + 4 + (0x9D << 2)
label_2f36c8:
    if (ctx->pc == 0x2F36C8u) {
        ctx->pc = 0x2F36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36C4u;
        // 0x2f36c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36CCu;
        goto label_2f36cc;
    }
    ctx->pc = 0x2F36C4u;
    {
        const bool branch_taken_0x2f36c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36C4u;
        // 0x2f36c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36c4) {
            ctx->pc = 0x2F393Cu;
            goto label_2f393c;
        }
    }
    ctx->pc = 0x2F36CCu;
label_2f36cc:
    // 0x2f36cc: 0xc08a0d0  jal         func_228340
label_2f36d0:
    if (ctx->pc == 0x2F36D0u) {
        ctx->pc = 0x2F36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36CCu;
        // 0x2f36d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36D4u;
        goto label_2f36d4;
    }
    ctx->pc = 0x2F36CCu;
    SET_GPR_U32(ctx, 31, 0x2F36D4u);
    ctx->pc = 0x2F36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36CCu;
    // 0x2f36d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2F36CCu, 0x2F36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36D4u;
label_2f36d4:
    // 0x2f36d4: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_2f36d8:
    if (ctx->pc == 0x2F36D8u) {
        ctx->pc = 0x2F36DCu;
        goto label_2f36dc;
    }
    ctx->pc = 0x2F36D4u;
    {
        const bool branch_taken_0x2f36d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f36d4) {
            ctx->pc = 0x2F36ECu;
            goto label_2f36ec;
        }
    }
    ctx->pc = 0x2F36DCu;
label_2f36dc:
    // 0x2f36dc: 0xc08bfbc  jal         func_22FEF0
label_2f36e0:
    if (ctx->pc == 0x2F36E0u) {
        ctx->pc = 0x2F36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36DCu;
        // 0x2f36e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36E4u;
        goto label_2f36e4;
    }
    ctx->pc = 0x2F36DCu;
    SET_GPR_U32(ctx, 31, 0x2F36E4u);
    ctx->pc = 0x2F36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36DCu;
    // 0x2f36e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F36DCu, 0x2F36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36E4u;
label_2f36e4:
    // 0x2f36e4: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_2f36e8:
    if (ctx->pc == 0x2F36E8u) {
        ctx->pc = 0x2F36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36E4u;
        // 0x2f36e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36ECu;
        goto label_2f36ec;
    }
    ctx->pc = 0x2F36E4u;
    {
        const bool branch_taken_0x2f36e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36E4u;
        // 0x2f36e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36e4) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F36ECu;
label_2f36ec:
    // 0x2f36ec: 0x16000084  bnez        $s0, . + 4 + (0x84 << 2)
label_2f36f0:
    if (ctx->pc == 0x2F36F0u) {
        ctx->pc = 0x2F36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36ECu;
        // 0x2f36f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36F4u;
        goto label_2f36f4;
    }
    ctx->pc = 0x2F36ECu;
    {
        const bool branch_taken_0x2f36ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36ECu;
        // 0x2f36f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36ec) {
            ctx->pc = 0x2F3900u;
            goto label_2f3900;
        }
    }
    ctx->pc = 0x2F36F4u;
label_2f36f4:
    // 0x2f36f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f36f8:
    // 0x2f36f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f36fc:
    // 0x2f36fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2f3700:
    if (ctx->pc == 0x2F3700u) {
        ctx->pc = 0x2F3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36FCu;
        // 0x2f3700: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3704u;
        goto label_2f3704;
    }
    ctx->pc = 0x2F36FCu;
    {
        const bool branch_taken_0x2f36fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f36fc) {
            ctx->pc = 0x2F3700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F36FCu;
            // 0x2f3700: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3704u;
            goto label_2f3704;
        }
    }
    ctx->pc = 0x2F3704u;
label_2f3704:
    // 0x2f3704: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2f3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2f3708:
    // 0x2f3708: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f3708u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f370c:
    // 0x2f370c: 0x2010  mfhi        $a0
    ctx->pc = 0x2f370cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2f3710:
    // 0x2f3710: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2f3714:
    if (ctx->pc == 0x2F3714u) {
        ctx->pc = 0x2F3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3710u;
        // 0x2f3714: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3718u;
        goto label_2f3718;
    }
    ctx->pc = 0x2F3710u;
    {
        const bool branch_taken_0x2f3710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3710u;
        // 0x2f3714: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3710) {
            ctx->pc = 0x2F3730u;
            goto label_2f3730;
        }
    }
    ctx->pc = 0x2F3718u;
label_2f3718:
    // 0x2f3718: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f3718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f371c:
    // 0x2f371c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f371cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3720:
    // 0x2f3720: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2f3720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2f3724:
    // 0x2f3724: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2f3724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2f3728:
    // 0x2f3728: 0x60f809  jalr        $v1
label_2f372c:
    if (ctx->pc == 0x2F372Cu) {
        ctx->pc = 0x2F372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3728u;
        // 0x2f372c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3730u;
        goto label_2f3730;
    }
    ctx->pc = 0x2F3728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3730u);
        ctx->pc = 0x2F372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3728u;
        // 0x2f372c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3728u, 0x2F3730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3730u;
label_2f3730:
    // 0x2f3730: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f3734:
    // 0x2f3734: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2f3734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2f3738:
    // 0x2f3738: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f3738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f373c:
    // 0x2f373c: 0xc0e409a  jal         func_390268
label_2f3740:
    if (ctx->pc == 0x2F3740u) {
        ctx->pc = 0x2F3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F373Cu;
        // 0x2f3740: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3744u;
        goto label_2f3744;
    }
    ctx->pc = 0x2F373Cu;
    SET_GPR_U32(ctx, 31, 0x2F3744u);
    ctx->pc = 0x2F3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F373Cu;
    // 0x2f3740: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F373Cu, 0x2F3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3744u;
label_2f3744:
    // 0x2f3744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3748:
    // 0x2f3748: 0xc0a34d6  jal         func_28D358
label_2f374c:
    if (ctx->pc == 0x2F374Cu) {
        ctx->pc = 0x2F374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3748u;
        // 0x2f374c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3750u;
        goto label_2f3750;
    }
    ctx->pc = 0x2F3748u;
    SET_GPR_U32(ctx, 31, 0x2F3750u);
    ctx->pc = 0x2F374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3748u;
    // 0x2f374c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F3748u, 0x2F3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3750u;
label_2f3750:
    // 0x2f3750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3754:
    // 0x2f3754: 0x56000039  bnel        $s0, $zero, . + 4 + (0x39 << 2)
label_2f3758:
    if (ctx->pc == 0x2F3758u) {
        ctx->pc = 0x2F3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3754u;
        // 0x2f3758: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F375Cu;
        goto label_2f375c;
    }
    ctx->pc = 0x2F3754u;
    {
        const bool branch_taken_0x2f3754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3754) {
            ctx->pc = 0x2F3758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3754u;
            // 0x2f3758: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F383Cu;
            goto label_2f383c;
        }
    }
    ctx->pc = 0x2F375Cu;
label_2f375c:
    // 0x2f375c: 0x169300a5  bne         $s4, $s3, . + 4 + (0xA5 << 2)
label_2f3760:
    if (ctx->pc == 0x2F3760u) {
        ctx->pc = 0x2F3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F375Cu;
        // 0x2f3760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3764u;
        goto label_2f3764;
    }
    ctx->pc = 0x2F375Cu;
    {
        const bool branch_taken_0x2f375c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F375Cu;
        // 0x2f3760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f375c) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F3764u;
label_2f3764:
    // 0x2f3764: 0x92220054  lbu         $v0, 0x54($s1)
    ctx->pc = 0x2f3764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f3768:
    // 0x2f3768: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
label_2f376c:
    if (ctx->pc == 0x2F376Cu) {
        ctx->pc = 0x2F376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3768u;
        // 0x2f376c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3770u;
        goto label_2f3770;
    }
    ctx->pc = 0x2F3768u;
    {
        const bool branch_taken_0x2f3768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3768) {
            ctx->pc = 0x2F376Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3768u;
            // 0x2f376c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F3770u;
label_2f3770:
    // 0x2f3770: 0x92230055  lbu         $v1, 0x55($s1)
    ctx->pc = 0x2f3770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2f3774:
    // 0x2f3774: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2f3778:
    if (ctx->pc == 0x2F3778u) {
        ctx->pc = 0x2F3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3774u;
        // 0x2f3778: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F377Cu;
        goto label_2f377c;
    }
    ctx->pc = 0x2F3774u;
    {
        const bool branch_taken_0x2f3774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3774) {
            ctx->pc = 0x2F3778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3774u;
            // 0x2f3778: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F377Cu;
            goto label_2f377c;
        }
    }
    ctx->pc = 0x2F377Cu;
label_2f377c:
    // 0x2f377c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2f377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2f3780:
    // 0x2f3780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f3784:
    // 0x2f3784: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2f3784u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2f3788:
    // 0x2f3788: 0x2810  mfhi        $a1
    ctx->pc = 0x2f3788u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2f378c:
    // 0x2f378c: 0xa2250055  sb          $a1, 0x55($s1)
    ctx->pc = 0x2f378cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 5));
label_2f3790:
    // 0x2f3790: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2f3790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2f3794:
    // 0x2f3794: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x2f3794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2f3798:
    // 0x2f3798: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2f3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2f379c:
    // 0x2f379c: 0x8c8203e8  lw          $v0, 0x3E8($a0)
    ctx->pc = 0x2f379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1000)));
label_2f37a0:
    // 0x2f37a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f37a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f37a4:
    // 0x2f37a4: 0x14530093  bne         $v0, $s3, . + 4 + (0x93 << 2)
label_2f37a8:
    if (ctx->pc == 0x2F37A8u) {
        ctx->pc = 0x2F37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37A4u;
        // 0x2f37a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37ACu;
        goto label_2f37ac;
    }
    ctx->pc = 0x2F37A4u;
    {
        const bool branch_taken_0x2f37a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37A4u;
        // 0x2f37a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37a4) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F37ACu;
label_2f37ac:
    // 0x2f37ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f37acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f37b0:
    // 0x2f37b0: 0xc0a367c  jal         func_28D9F0
label_2f37b4:
    if (ctx->pc == 0x2F37B4u) {
        ctx->pc = 0x2F37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37B0u;
        // 0x2f37b4: 0x24d00256  addiu       $s0, $a2, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 598));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37B8u;
        goto label_2f37b8;
    }
    ctx->pc = 0x2F37B0u;
    SET_GPR_U32(ctx, 31, 0x2F37B8u);
    ctx->pc = 0x2F37B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37B0u;
    // 0x2f37b4: 0x24d00256  addiu       $s0, $a2, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F37B0u, 0x2F37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37B8u;
label_2f37b8:
    // 0x2f37b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f37bc:
    if (ctx->pc == 0x2F37BCu) {
        ctx->pc = 0x2F37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37B8u;
        // 0x2f37bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37C0u;
        goto label_2f37c0;
    }
    ctx->pc = 0x2F37B8u;
    {
        const bool branch_taken_0x2f37b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37B8u;
        // 0x2f37bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37b8) {
            ctx->pc = 0x2F37E8u;
            goto label_2f37e8;
        }
    }
    ctx->pc = 0x2F37C0u;
label_2f37c0:
    // 0x2f37c0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2f37c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2f37c4:
    // 0x2f37c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f37c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f37c8:
    // 0x2f37c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f37c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f37cc:
    // 0x2f37cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f37ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f37d0:
    // 0x2f37d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f37d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f37d4:
    // 0x2f37d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f37d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f37d8:
    // 0x2f37d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f37d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f37dc:
    // 0x2f37dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f37dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f37e0:
    // 0x2f37e0: 0xc0be968  jal         func_2FA5A0
label_2f37e4:
    if (ctx->pc == 0x2F37E4u) {
        ctx->pc = 0x2F37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37E0u;
        // 0x2f37e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37E8u;
        goto label_2f37e8;
    }
    ctx->pc = 0x2F37E0u;
    SET_GPR_U32(ctx, 31, 0x2F37E8u);
    ctx->pc = 0x2F37E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37E0u;
    // 0x2f37e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F37E0u, 0x2F37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37E8u;
label_2f37e8:
    // 0x2f37e8: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2f37e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2f37ec:
    // 0x2f37ec: 0x10a00080  beqz        $a1, . + 4 + (0x80 << 2)
label_2f37f0:
    if (ctx->pc == 0x2F37F0u) {
        ctx->pc = 0x2F37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37ECu;
        // 0x2f37f0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37F4u;
        goto label_2f37f4;
    }
    ctx->pc = 0x2F37ECu;
    {
        const bool branch_taken_0x2f37ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37ECu;
        // 0x2f37f0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37ec) {
            ctx->pc = 0x2F39F0u;
            goto label_2f39f0;
        }
    }
    ctx->pc = 0x2F37F4u;
label_2f37f4:
    // 0x2f37f4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2f37f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2f37f8:
    // 0x2f37f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f37fc:
    // 0x2f37fc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2f37fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2f3800:
    // 0x2f3800: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2f3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2f3804:
    // 0x2f3804: 0x40f809  jalr        $v0
label_2f3808:
    if (ctx->pc == 0x2F3808u) {
        ctx->pc = 0x2F3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3804u;
        // 0x2f3808: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F380Cu;
        goto label_2f380c;
    }
    ctx->pc = 0x2F3804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F380Cu);
        ctx->pc = 0x2F3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3804u;
        // 0x2f3808: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3804u, 0x2F380Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F380Cu;
label_2f380c:
    // 0x2f380c: 0x14530079  bne         $v0, $s3, . + 4 + (0x79 << 2)
label_2f3810:
    if (ctx->pc == 0x2F3810u) {
        ctx->pc = 0x2F3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F380Cu;
        // 0x2f3810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3814u;
        goto label_2f3814;
    }
    ctx->pc = 0x2F380Cu;
    {
        const bool branch_taken_0x2f380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F380Cu;
        // 0x2f3810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f380c) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F3814u;
label_2f3814:
    // 0x2f3814: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2f3814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2f3818:
    // 0x2f3818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f381c:
    // 0x2f381c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3820:
    // 0x2f3820: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f3820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2f3824:
    // 0x2f3824: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2f3824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2f3828:
    // 0x2f3828: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2f3828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2f382c:
    // 0x2f382c: 0x60f809  jalr        $v1
label_2f3830:
    if (ctx->pc == 0x2F3830u) {
        ctx->pc = 0x2F3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F382Cu;
        // 0x2f3830: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3834u;
        goto label_2f3834;
    }
    ctx->pc = 0x2F382Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3834u);
        ctx->pc = 0x2F3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F382Cu;
        // 0x2f3830: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F382Cu, 0x2F3834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3834u;
label_2f3834:
    // 0x2f3834: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2f3838:
    if (ctx->pc == 0x2F3838u) {
        ctx->pc = 0x2F3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3834u;
        // 0x2f3838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F383Cu;
        goto label_2f383c;
    }
    ctx->pc = 0x2F3834u;
    {
        const bool branch_taken_0x2f3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3834u;
        // 0x2f3838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3834) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F383Cu;
label_2f383c:
    // 0x2f383c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f3840:
    // 0x2f3840: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2f3840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f3844:
    // 0x2f3844: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f3848:
    // 0x2f3848: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f3848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f384c:
    // 0x2f384c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f384cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f3850:
    // 0x2f3850: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2f3850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f3854:
    // 0x2f3854: 0xc0cd780  jal         func_335E00
label_2f3858:
    if (ctx->pc == 0x2F3858u) {
        ctx->pc = 0x2F3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3854u;
        // 0x2f3858: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F385Cu;
        goto label_2f385c;
    }
    ctx->pc = 0x2F3854u;
    SET_GPR_U32(ctx, 31, 0x2F385Cu);
    ctx->pc = 0x2F3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3854u;
    // 0x2f3858: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F3854u, 0x2F385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F385Cu;
label_2f385c:
    // 0x2f385c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f385cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2f3860:
    // 0x2f3860: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f3860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f3864:
    // 0x2f3864: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f3864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f3868:
    // 0x2f3868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f386c:
    // 0x2f386c: 0x0  nop
    ctx->pc = 0x2f386cu;
    // NOP
label_2f3870:
    // 0x2f3870: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f3870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f3874:
    // 0x2f3874: 0x0  nop
    ctx->pc = 0x2f3874u;
    // NOP
label_2f3878:
    // 0x2f3878: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f387c:
    if (ctx->pc == 0x2F387Cu) {
        ctx->pc = 0x2F3880u;
        goto label_2f3880;
    }
    ctx->pc = 0x2F3878u;
    {
        const bool branch_taken_0x2f3878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3878) {
            ctx->pc = 0x2F3894u;
            goto label_2f3894;
        }
    }
    ctx->pc = 0x2F3880u;
label_2f3880:
    // 0x2f3880: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f3880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f3884:
    // 0x2f3884: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f3884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f3888:
    // 0x2f3888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f388c:
    // 0x2f388c: 0x0  nop
    ctx->pc = 0x2f388cu;
    // NOP
label_2f3890:
    // 0x2f3890: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f3890u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f3894:
    // 0x2f3894: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f3894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2f3898:
    // 0x2f3898: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f3898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f389c:
    // 0x2f389c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f389cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f38a0:
    // 0x2f38a0: 0x0  nop
    ctx->pc = 0x2f38a0u;
    // NOP
label_2f38a4:
    // 0x2f38a4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f38a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f38a8:
    // 0x2f38a8: 0x0  nop
    ctx->pc = 0x2f38a8u;
    // NOP
label_2f38ac:
    // 0x2f38ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f38b0:
    if (ctx->pc == 0x2F38B0u) {
        ctx->pc = 0x2F38B4u;
        goto label_2f38b4;
    }
    ctx->pc = 0x2F38ACu;
    {
        const bool branch_taken_0x2f38ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f38ac) {
            ctx->pc = 0x2F38C8u;
            goto label_2f38c8;
        }
    }
    ctx->pc = 0x2F38B4u;
label_2f38b4:
    // 0x2f38b4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f38b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f38b8:
    // 0x2f38b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f38b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f38bc:
    // 0x2f38bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f38bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f38c0:
    // 0x2f38c0: 0x0  nop
    ctx->pc = 0x2f38c0u;
    // NOP
label_2f38c4:
    // 0x2f38c4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f38c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f38c8:
    // 0x2f38c8: 0x3c013d07  lui         $at, 0x3D07
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15623 << 16));
label_2f38cc:
    // 0x2f38cc: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x2f38ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
label_2f38d0:
    // 0x2f38d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f38d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f38d4:
    // 0x2f38d4: 0xc08f3e2  jal         func_23CF88
label_2f38d8:
    if (ctx->pc == 0x2F38D8u) {
        ctx->pc = 0x2F38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38D4u;
        // 0x2f38d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38DCu;
        goto label_2f38dc;
    }
    ctx->pc = 0x2F38D4u;
    SET_GPR_U32(ctx, 31, 0x2F38DCu);
    ctx->pc = 0x2F38D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38D4u;
    // 0x2f38d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F38D4u, 0x2F38DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38DCu;
label_2f38dc:
    // 0x2f38dc: 0xc0a367c  jal         func_28D9F0
label_2f38e0:
    if (ctx->pc == 0x2F38E0u) {
        ctx->pc = 0x2F38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38DCu;
        // 0x2f38e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38E4u;
        goto label_2f38e4;
    }
    ctx->pc = 0x2F38DCu;
    SET_GPR_U32(ctx, 31, 0x2F38E4u);
    ctx->pc = 0x2F38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38DCu;
    // 0x2f38e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F38DCu, 0x2F38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38E4u;
label_2f38e4:
    // 0x2f38e4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_2f38e8:
    if (ctx->pc == 0x2F38E8u) {
        ctx->pc = 0x2F38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38E4u;
        // 0x2f38e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38ECu;
        goto label_2f38ec;
    }
    ctx->pc = 0x2F38E4u;
    {
        const bool branch_taken_0x2f38e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38E4u;
        // 0x2f38e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38e4) {
            ctx->pc = 0x2F39F0u;
            goto label_2f39f0;
        }
    }
    ctx->pc = 0x2F38ECu;
label_2f38ec:
    // 0x2f38ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f38ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f38f0:
    // 0x2f38f0: 0xc0bebdc  jal         func_2FAF70
label_2f38f4:
    if (ctx->pc == 0x2F38F4u) {
        ctx->pc = 0x2F38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38F0u;
        // 0x2f38f4: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38F8u;
        goto label_2f38f8;
    }
    ctx->pc = 0x2F38F0u;
    SET_GPR_U32(ctx, 31, 0x2F38F8u);
    ctx->pc = 0x2F38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38F0u;
    // 0x2f38f4: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F38F0u, 0x2F38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38F8u;
label_2f38f8:
    // 0x2f38f8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2f38fc:
    if (ctx->pc == 0x2F38FCu) {
        ctx->pc = 0x2F38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38F8u;
        // 0x2f38fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3900u;
        goto label_2f3900;
    }
    ctx->pc = 0x2F38F8u;
    {
        const bool branch_taken_0x2f38f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38F8u;
        // 0x2f38fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38f8) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F3900u;
label_2f3900:
    // 0x2f3900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3904:
    // 0x2f3904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3908:
    // 0x2f3908: 0xc0888a2  jal         func_222288
label_2f390c:
    if (ctx->pc == 0x2F390Cu) {
        ctx->pc = 0x2F390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3908u;
        // 0x2f390c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3910u;
        goto label_2f3910;
    }
    ctx->pc = 0x2F3908u;
    SET_GPR_U32(ctx, 31, 0x2F3910u);
    ctx->pc = 0x2F390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3908u;
    // 0x2f390c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F3908u, 0x2F3910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3910u;
label_2f3910:
    // 0x2f3910: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
label_2f3914:
    if (ctx->pc == 0x2F3914u) {
        ctx->pc = 0x2F3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3910u;
        // 0x2f3914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3918u;
        goto label_2f3918;
    }
    ctx->pc = 0x2F3910u;
    {
        const bool branch_taken_0x2f3910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3910u;
        // 0x2f3914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3910) {
            ctx->pc = 0x2F392Cu;
            goto label_2f392c;
        }
    }
    ctx->pc = 0x2F3918u;
label_2f3918:
    // 0x2f3918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f391c:
    // 0x2f391c: 0xc0bc676  jal         func_2F19D8
label_2f3920:
    if (ctx->pc == 0x2F3920u) {
        ctx->pc = 0x2F3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F391Cu;
        // 0x2f3920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3924u;
        goto label_2f3924;
    }
    ctx->pc = 0x2F391Cu;
    SET_GPR_U32(ctx, 31, 0x2F3924u);
    ctx->pc = 0x2F3920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F391Cu;
    // 0x2f3920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19D8u, 0x2F391Cu, 0x2F3924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3924u;
label_2f3924:
    // 0x2f3924: 0x10000033  b           . + 4 + (0x33 << 2)
label_2f3928:
    if (ctx->pc == 0x2F3928u) {
        ctx->pc = 0x2F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3924u;
        // 0x2f3928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F392Cu;
        goto label_2f392c;
    }
    ctx->pc = 0x2F3924u;
    {
        const bool branch_taken_0x2f3924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3924u;
        // 0x2f3928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3924) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F392Cu;
label_2f392c:
    // 0x2f392c: 0xa2200049  sb          $zero, 0x49($s1)
    ctx->pc = 0x2f392cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
label_2f3930:
    // 0x2f3930: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2f3930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2f3934:
    // 0x2f3934: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2f3938:
    if (ctx->pc == 0x2F3938u) {
        ctx->pc = 0x2F3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3934u;
        // 0x2f3938: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F393Cu;
        goto label_2f393c;
    }
    ctx->pc = 0x2F3934u;
    {
        const bool branch_taken_0x2f3934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3934u;
        // 0x2f3938: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3934) {
            ctx->pc = 0x2F39F0u;
            goto label_2f39f0;
        }
    }
    ctx->pc = 0x2F393Cu;
label_2f393c:
    // 0x2f393c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2f3940:
    if (ctx->pc == 0x2F3940u) {
        ctx->pc = 0x2F3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F393Cu;
        // 0x2f3940: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3944u;
        goto label_2f3944;
    }
    ctx->pc = 0x2F393Cu;
    {
        const bool branch_taken_0x2f393c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F393Cu;
        // 0x2f3940: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f393c) {
            ctx->pc = 0x2F3998u;
            goto label_2f3998;
        }
    }
    ctx->pc = 0x2F3944u;
label_2f3944:
    // 0x2f3944: 0xc08bfa0  jal         func_22FE80
label_2f3948:
    if (ctx->pc == 0x2F3948u) {
        ctx->pc = 0x2F3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3944u;
        // 0x2f3948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F394Cu;
        goto label_2f394c;
    }
    ctx->pc = 0x2F3944u;
    SET_GPR_U32(ctx, 31, 0x2F394Cu);
    ctx->pc = 0x2F3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3944u;
    // 0x2f3948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F3944u, 0x2F394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F394Cu;
label_2f394c:
    // 0x2f394c: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x2f394cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_2f3950:
    // 0x2f3950: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2f3954:
    if (ctx->pc == 0x2F3954u) {
        ctx->pc = 0x2F3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3950u;
        // 0x2f3954: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3958u;
        goto label_2f3958;
    }
    ctx->pc = 0x2F3950u;
    {
        const bool branch_taken_0x2f3950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3950u;
        // 0x2f3954: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3950) {
            ctx->pc = 0x2F3980u;
            goto label_2f3980;
        }
    }
    ctx->pc = 0x2F3958u;
label_2f3958:
    // 0x2f3958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f395c:
    // 0x2f395c: 0x2405029d  addiu       $a1, $zero, 0x29D
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_2f3960:
    // 0x2f3960: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2f3960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_2f3964:
    // 0x2f3964: 0xc096a30  jal         func_25A8C0
label_2f3968:
    if (ctx->pc == 0x2F3968u) {
        ctx->pc = 0x2F3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3964u;
        // 0x2f3968: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F396Cu;
        goto label_2f396c;
    }
    ctx->pc = 0x2F3964u;
    SET_GPR_U32(ctx, 31, 0x2F396Cu);
    ctx->pc = 0x2F3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3964u;
    // 0x2f3968: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x2F3964u, 0x2F396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F396Cu;
label_2f396c:
    // 0x2f396c: 0x92230048  lbu         $v1, 0x48($s1)
    ctx->pc = 0x2f396cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_2f3970:
    // 0x2f3970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3974:
    // 0x2f3974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f3978:
    // 0x2f3978: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2f397c:
    if (ctx->pc == 0x2F397Cu) {
        ctx->pc = 0x2F397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3978u;
        // 0x2f397c: 0xa2230048  sb          $v1, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3980u;
        goto label_2f3980;
    }
    ctx->pc = 0x2F3978u;
    {
        const bool branch_taken_0x2f3978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3978u;
        // 0x2f397c: 0xa2230048  sb          $v1, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3978) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F3980u;
label_2f3980:
    // 0x2f3980: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f3980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f3984:
    // 0x2f3984: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2f3984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f3988:
    // 0x2f3988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f398c:
    // 0x2f398c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2f398cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_2f3990:
    // 0x2f3990: 0x10000018  b           . + 4 + (0x18 << 2)
label_2f3994:
    if (ctx->pc == 0x2F3994u) {
        ctx->pc = 0x2F3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3990u;
        // 0x2f3994: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3998u;
        goto label_2f3998;
    }
    ctx->pc = 0x2F3990u;
    {
        const bool branch_taken_0x2f3990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3990u;
        // 0x2f3994: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3990) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F3998u;
label_2f3998:
    // 0x2f3998: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2f399c:
    if (ctx->pc == 0x2F399Cu) {
        ctx->pc = 0x2F399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3998u;
        // 0x2f399c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39A0u;
        goto label_2f39a0;
    }
    ctx->pc = 0x2F3998u;
    {
        const bool branch_taken_0x2f3998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3998u;
        // 0x2f399c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3998) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F39A0u;
label_2f39a0:
    // 0x2f39a0: 0xc08bfa0  jal         func_22FE80
label_2f39a4:
    if (ctx->pc == 0x2F39A4u) {
        ctx->pc = 0x2F39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39A0u;
        // 0x2f39a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39A8u;
        goto label_2f39a8;
    }
    ctx->pc = 0x2F39A0u;
    SET_GPR_U32(ctx, 31, 0x2F39A8u);
    ctx->pc = 0x2F39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39A0u;
    // 0x2f39a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F39A0u, 0x2F39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39A8u;
label_2f39a8:
    // 0x2f39a8: 0xc0a367c  jal         func_28D9F0
label_2f39ac:
    if (ctx->pc == 0x2F39ACu) {
        ctx->pc = 0x2F39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39A8u;
        // 0x2f39ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39B0u;
        goto label_2f39b0;
    }
    ctx->pc = 0x2F39A8u;
    SET_GPR_U32(ctx, 31, 0x2F39B0u);
    ctx->pc = 0x2F39ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39A8u;
    // 0x2f39ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F39A8u, 0x2F39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39B0u;
label_2f39b0:
    // 0x2f39b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f39b4:
    if (ctx->pc == 0x2F39B4u) {
        ctx->pc = 0x2F39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39B0u;
        // 0x2f39b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39B8u;
        goto label_2f39b8;
    }
    ctx->pc = 0x2F39B0u;
    {
        const bool branch_taken_0x2f39b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39B0u;
        // 0x2f39b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39b0) {
            ctx->pc = 0x2F39D8u;
            goto label_2f39d8;
        }
    }
    ctx->pc = 0x2F39B8u;
label_2f39b8:
    // 0x2f39b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f39b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f39bc:
    // 0x2f39bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f39bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f39c0:
    // 0x2f39c0: 0x2406029e  addiu       $a2, $zero, 0x29E
    ctx->pc = 0x2f39c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
label_2f39c4:
    // 0x2f39c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f39c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f39c8:
    // 0x2f39c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f39c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f39cc:
    // 0x2f39cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f39ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f39d0:
    // 0x2f39d0: 0xc0be968  jal         func_2FA5A0
label_2f39d4:
    if (ctx->pc == 0x2F39D4u) {
        ctx->pc = 0x2F39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39D0u;
        // 0x2f39d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39D8u;
        goto label_2f39d8;
    }
    ctx->pc = 0x2F39D0u;
    SET_GPR_U32(ctx, 31, 0x2F39D8u);
    ctx->pc = 0x2F39D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39D0u;
    // 0x2f39d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F39D0u, 0x2F39D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39D8u;
label_2f39d8:
    // 0x2f39d8: 0x92230046  lbu         $v1, 0x46($s1)
    ctx->pc = 0x2f39d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 70)));
label_2f39dc:
    // 0x2f39dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f39dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f39e0:
    // 0x2f39e0: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x2f39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
label_2f39e4:
    // 0x2f39e4: 0xa2230047  sb          $v1, 0x47($s1)
    ctx->pc = 0x2f39e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 3));
label_2f39e8:
    // 0x2f39e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f39ec:
    if (ctx->pc == 0x2F39ECu) {
        ctx->pc = 0x2F39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39E8u;
        // 0x2f39ec: 0xa2200049  sb          $zero, 0x49($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39F0u;
        goto label_2f39f0;
    }
    ctx->pc = 0x2F39E8u;
    {
        const bool branch_taken_0x2f39e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39E8u;
        // 0x2f39ec: 0xa2200049  sb          $zero, 0x49($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39e8) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F39F0u;
label_2f39f0:
    // 0x2f39f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f39f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f39f4:
    // 0x2f39f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f39f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f39f8:
    // 0x2f39f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f39f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f39fc:
    // 0x2f39fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f39fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3a00:
    // 0x2f3a00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3a04:
    // 0x2f3a04: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2f3a04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3a08:
    // 0x2f3a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3a0c:
    // 0x2f3a0c: 0x3e00008  jr          $ra
label_2f3a10:
    if (ctx->pc == 0x2F3A10u) {
        ctx->pc = 0x2F3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A0Cu;
        // 0x2f3a10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A14u;
        goto label_2f3a14;
    }
    ctx->pc = 0x2F3A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A0Cu;
        // 0x2f3a10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3A14u;
label_2f3a14:
    // 0x2f3a14: 0x0  nop
    ctx->pc = 0x2f3a14u;
    // NOP
label_2f3a18:
    // 0x2f3a18: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2f3a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f3a1c:
    // 0x2f3a1c: 0x0  nop
    ctx->pc = 0x2f3a1cu;
    // NOP
    ctx->pc = 0x2f3a20u;
}
