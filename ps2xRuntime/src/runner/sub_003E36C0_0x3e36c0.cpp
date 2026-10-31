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

// Function: sub_003E36C0
// Address: 0x3e36c0 - 0x3e39f0
void sub_003E36C0_0x3e36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E36C0_0x3e36c0");
#endif

    switch (ctx->pc) {
        case 0x3e36c0u: goto label_3e36c0;
        case 0x3e36c4u: goto label_3e36c4;
        case 0x3e36c8u: goto label_3e36c8;
        case 0x3e36ccu: goto label_3e36cc;
        case 0x3e36d0u: goto label_3e36d0;
        case 0x3e36d4u: goto label_3e36d4;
        case 0x3e36d8u: goto label_3e36d8;
        case 0x3e36dcu: goto label_3e36dc;
        case 0x3e36e0u: goto label_3e36e0;
        case 0x3e36e4u: goto label_3e36e4;
        case 0x3e36e8u: goto label_3e36e8;
        case 0x3e36ecu: goto label_3e36ec;
        case 0x3e36f0u: goto label_3e36f0;
        case 0x3e36f4u: goto label_3e36f4;
        case 0x3e36f8u: goto label_3e36f8;
        case 0x3e36fcu: goto label_3e36fc;
        case 0x3e3700u: goto label_3e3700;
        case 0x3e3704u: goto label_3e3704;
        case 0x3e3708u: goto label_3e3708;
        case 0x3e370cu: goto label_3e370c;
        case 0x3e3710u: goto label_3e3710;
        case 0x3e3714u: goto label_3e3714;
        case 0x3e3718u: goto label_3e3718;
        case 0x3e371cu: goto label_3e371c;
        case 0x3e3720u: goto label_3e3720;
        case 0x3e3724u: goto label_3e3724;
        case 0x3e3728u: goto label_3e3728;
        case 0x3e372cu: goto label_3e372c;
        case 0x3e3730u: goto label_3e3730;
        case 0x3e3734u: goto label_3e3734;
        case 0x3e3738u: goto label_3e3738;
        case 0x3e373cu: goto label_3e373c;
        case 0x3e3740u: goto label_3e3740;
        case 0x3e3744u: goto label_3e3744;
        case 0x3e3748u: goto label_3e3748;
        case 0x3e374cu: goto label_3e374c;
        case 0x3e3750u: goto label_3e3750;
        case 0x3e3754u: goto label_3e3754;
        case 0x3e3758u: goto label_3e3758;
        case 0x3e375cu: goto label_3e375c;
        case 0x3e3760u: goto label_3e3760;
        case 0x3e3764u: goto label_3e3764;
        case 0x3e3768u: goto label_3e3768;
        case 0x3e376cu: goto label_3e376c;
        case 0x3e3770u: goto label_3e3770;
        case 0x3e3774u: goto label_3e3774;
        case 0x3e3778u: goto label_3e3778;
        case 0x3e377cu: goto label_3e377c;
        case 0x3e3780u: goto label_3e3780;
        case 0x3e3784u: goto label_3e3784;
        case 0x3e3788u: goto label_3e3788;
        case 0x3e378cu: goto label_3e378c;
        case 0x3e3790u: goto label_3e3790;
        case 0x3e3794u: goto label_3e3794;
        case 0x3e3798u: goto label_3e3798;
        case 0x3e379cu: goto label_3e379c;
        case 0x3e37a0u: goto label_3e37a0;
        case 0x3e37a4u: goto label_3e37a4;
        case 0x3e37a8u: goto label_3e37a8;
        case 0x3e37acu: goto label_3e37ac;
        case 0x3e37b0u: goto label_3e37b0;
        case 0x3e37b4u: goto label_3e37b4;
        case 0x3e37b8u: goto label_3e37b8;
        case 0x3e37bcu: goto label_3e37bc;
        case 0x3e37c0u: goto label_3e37c0;
        case 0x3e37c4u: goto label_3e37c4;
        case 0x3e37c8u: goto label_3e37c8;
        case 0x3e37ccu: goto label_3e37cc;
        case 0x3e37d0u: goto label_3e37d0;
        case 0x3e37d4u: goto label_3e37d4;
        case 0x3e37d8u: goto label_3e37d8;
        case 0x3e37dcu: goto label_3e37dc;
        case 0x3e37e0u: goto label_3e37e0;
        case 0x3e37e4u: goto label_3e37e4;
        case 0x3e37e8u: goto label_3e37e8;
        case 0x3e37ecu: goto label_3e37ec;
        case 0x3e37f0u: goto label_3e37f0;
        case 0x3e37f4u: goto label_3e37f4;
        case 0x3e37f8u: goto label_3e37f8;
        case 0x3e37fcu: goto label_3e37fc;
        case 0x3e3800u: goto label_3e3800;
        case 0x3e3804u: goto label_3e3804;
        case 0x3e3808u: goto label_3e3808;
        case 0x3e380cu: goto label_3e380c;
        case 0x3e3810u: goto label_3e3810;
        case 0x3e3814u: goto label_3e3814;
        case 0x3e3818u: goto label_3e3818;
        case 0x3e381cu: goto label_3e381c;
        case 0x3e3820u: goto label_3e3820;
        case 0x3e3824u: goto label_3e3824;
        case 0x3e3828u: goto label_3e3828;
        case 0x3e382cu: goto label_3e382c;
        case 0x3e3830u: goto label_3e3830;
        case 0x3e3834u: goto label_3e3834;
        case 0x3e3838u: goto label_3e3838;
        case 0x3e383cu: goto label_3e383c;
        case 0x3e3840u: goto label_3e3840;
        case 0x3e3844u: goto label_3e3844;
        case 0x3e3848u: goto label_3e3848;
        case 0x3e384cu: goto label_3e384c;
        case 0x3e3850u: goto label_3e3850;
        case 0x3e3854u: goto label_3e3854;
        case 0x3e3858u: goto label_3e3858;
        case 0x3e385cu: goto label_3e385c;
        case 0x3e3860u: goto label_3e3860;
        case 0x3e3864u: goto label_3e3864;
        case 0x3e3868u: goto label_3e3868;
        case 0x3e386cu: goto label_3e386c;
        case 0x3e3870u: goto label_3e3870;
        case 0x3e3874u: goto label_3e3874;
        case 0x3e3878u: goto label_3e3878;
        case 0x3e387cu: goto label_3e387c;
        case 0x3e3880u: goto label_3e3880;
        case 0x3e3884u: goto label_3e3884;
        case 0x3e3888u: goto label_3e3888;
        case 0x3e388cu: goto label_3e388c;
        case 0x3e3890u: goto label_3e3890;
        case 0x3e3894u: goto label_3e3894;
        case 0x3e3898u: goto label_3e3898;
        case 0x3e389cu: goto label_3e389c;
        case 0x3e38a0u: goto label_3e38a0;
        case 0x3e38a4u: goto label_3e38a4;
        case 0x3e38a8u: goto label_3e38a8;
        case 0x3e38acu: goto label_3e38ac;
        case 0x3e38b0u: goto label_3e38b0;
        case 0x3e38b4u: goto label_3e38b4;
        case 0x3e38b8u: goto label_3e38b8;
        case 0x3e38bcu: goto label_3e38bc;
        case 0x3e38c0u: goto label_3e38c0;
        case 0x3e38c4u: goto label_3e38c4;
        case 0x3e38c8u: goto label_3e38c8;
        case 0x3e38ccu: goto label_3e38cc;
        case 0x3e38d0u: goto label_3e38d0;
        case 0x3e38d4u: goto label_3e38d4;
        case 0x3e38d8u: goto label_3e38d8;
        case 0x3e38dcu: goto label_3e38dc;
        case 0x3e38e0u: goto label_3e38e0;
        case 0x3e38e4u: goto label_3e38e4;
        case 0x3e38e8u: goto label_3e38e8;
        case 0x3e38ecu: goto label_3e38ec;
        case 0x3e38f0u: goto label_3e38f0;
        case 0x3e38f4u: goto label_3e38f4;
        case 0x3e38f8u: goto label_3e38f8;
        case 0x3e38fcu: goto label_3e38fc;
        case 0x3e3900u: goto label_3e3900;
        case 0x3e3904u: goto label_3e3904;
        case 0x3e3908u: goto label_3e3908;
        case 0x3e390cu: goto label_3e390c;
        case 0x3e3910u: goto label_3e3910;
        case 0x3e3914u: goto label_3e3914;
        case 0x3e3918u: goto label_3e3918;
        case 0x3e391cu: goto label_3e391c;
        case 0x3e3920u: goto label_3e3920;
        case 0x3e3924u: goto label_3e3924;
        case 0x3e3928u: goto label_3e3928;
        case 0x3e392cu: goto label_3e392c;
        case 0x3e3930u: goto label_3e3930;
        case 0x3e3934u: goto label_3e3934;
        case 0x3e3938u: goto label_3e3938;
        case 0x3e393cu: goto label_3e393c;
        case 0x3e3940u: goto label_3e3940;
        case 0x3e3944u: goto label_3e3944;
        case 0x3e3948u: goto label_3e3948;
        case 0x3e394cu: goto label_3e394c;
        case 0x3e3950u: goto label_3e3950;
        case 0x3e3954u: goto label_3e3954;
        case 0x3e3958u: goto label_3e3958;
        case 0x3e395cu: goto label_3e395c;
        case 0x3e3960u: goto label_3e3960;
        case 0x3e3964u: goto label_3e3964;
        case 0x3e3968u: goto label_3e3968;
        case 0x3e396cu: goto label_3e396c;
        case 0x3e3970u: goto label_3e3970;
        case 0x3e3974u: goto label_3e3974;
        case 0x3e3978u: goto label_3e3978;
        case 0x3e397cu: goto label_3e397c;
        case 0x3e3980u: goto label_3e3980;
        case 0x3e3984u: goto label_3e3984;
        case 0x3e3988u: goto label_3e3988;
        case 0x3e398cu: goto label_3e398c;
        case 0x3e3990u: goto label_3e3990;
        case 0x3e3994u: goto label_3e3994;
        case 0x3e3998u: goto label_3e3998;
        case 0x3e399cu: goto label_3e399c;
        case 0x3e39a0u: goto label_3e39a0;
        case 0x3e39a4u: goto label_3e39a4;
        case 0x3e39a8u: goto label_3e39a8;
        case 0x3e39acu: goto label_3e39ac;
        case 0x3e39b0u: goto label_3e39b0;
        case 0x3e39b4u: goto label_3e39b4;
        case 0x3e39b8u: goto label_3e39b8;
        case 0x3e39bcu: goto label_3e39bc;
        case 0x3e39c0u: goto label_3e39c0;
        case 0x3e39c4u: goto label_3e39c4;
        case 0x3e39c8u: goto label_3e39c8;
        case 0x3e39ccu: goto label_3e39cc;
        case 0x3e39d0u: goto label_3e39d0;
        case 0x3e39d4u: goto label_3e39d4;
        case 0x3e39d8u: goto label_3e39d8;
        case 0x3e39dcu: goto label_3e39dc;
        case 0x3e39e0u: goto label_3e39e0;
        case 0x3e39e4u: goto label_3e39e4;
        case 0x3e39e8u: goto label_3e39e8;
        case 0x3e39ecu: goto label_3e39ec;
        default: break;
    }

    ctx->pc = 0x3e36c0u;

label_3e36c0:
    // 0x3e36c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3e36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3e36c4:
    // 0x3e36c4: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x3e36c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_3e36c8:
    // 0x3e36c8: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x3e36c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_3e36cc:
    // 0x3e36cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e36ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e36d0:
    // 0x3e36d0: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x3e36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_3e36d4:
    // 0x3e36d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3e36d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e36d8:
    // 0x3e36d8: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x3e36d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3e36dc:
    // 0x3e36dc: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x3e36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_3e36e0:
    // 0x3e36e0: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x3e36e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_3e36e4:
    // 0x3e36e4: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x3e36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_3e36e8:
    // 0x3e36e8: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x3e36e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_3e36ec:
    // 0x3e36ec: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x3e36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_3e36f0:
    // 0x3e36f0: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x3e36f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_3e36f4:
    // 0x3e36f4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3e36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3e36f8:
    // 0x3e36f8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x3e36f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3e36fc:
    // 0x3e36fc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3e36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e3700:
    // 0x3e3700: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e3700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e3704:
    // 0x3e3704: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e3708:
    // 0x3e3708: 0x40f809  jalr        $v0
label_3e370c:
    if (ctx->pc == 0x3E370Cu) {
        ctx->pc = 0x3E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3708u;
        // 0x3e370c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3710u;
        goto label_3e3710;
    }
    ctx->pc = 0x3E3708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3710u);
        ctx->pc = 0x3E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3708u;
        // 0x3e370c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3708u, 0x3E3710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3710u;
label_3e3710:
    // 0x3e3710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3714:
    // 0x3e3714: 0xc0ea146  jal         func_3A8518
label_3e3718:
    if (ctx->pc == 0x3E3718u) {
        ctx->pc = 0x3E3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3714u;
        // 0x3e3718: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E371Cu;
        goto label_3e371c;
    }
    ctx->pc = 0x3E3714u;
    SET_GPR_U32(ctx, 31, 0x3E371Cu);
    ctx->pc = 0x3E3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3714u;
    // 0x3e3718: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E3714u, 0x3E371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E371Cu;
label_3e371c:
    // 0x3e371c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3e371cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3e3720:
    // 0x3e3720: 0xc0ea146  jal         func_3A8518
label_3e3724:
    if (ctx->pc == 0x3E3724u) {
        ctx->pc = 0x3E3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3720u;
        // 0x3e3724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3728u;
        goto label_3e3728;
    }
    ctx->pc = 0x3E3720u;
    SET_GPR_U32(ctx, 31, 0x3E3728u);
    ctx->pc = 0x3E3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3720u;
    // 0x3e3724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E3720u, 0x3E3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3728u;
label_3e3728:
    // 0x3e3728: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3e3728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3e372c:
    // 0x3e372c: 0xc0ea13a  jal         func_3A84E8
label_3e3730:
    if (ctx->pc == 0x3E3730u) {
        ctx->pc = 0x3E3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E372Cu;
        // 0x3e3730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3734u;
        goto label_3e3734;
    }
    ctx->pc = 0x3E372Cu;
    SET_GPR_U32(ctx, 31, 0x3E3734u);
    ctx->pc = 0x3E3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E372Cu;
    // 0x3e3730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E372Cu, 0x3E3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3734u;
label_3e3734:
    // 0x3e3734: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e3738:
    // 0x3e3738: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e3738u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e373c:
    // 0x3e373c: 0xc0ea12a  jal         func_3A84A8
label_3e3740:
    if (ctx->pc == 0x3E3740u) {
        ctx->pc = 0x3E3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E373Cu;
        // 0x3e3740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3744u;
        goto label_3e3744;
    }
    ctx->pc = 0x3E373Cu;
    SET_GPR_U32(ctx, 31, 0x3E3744u);
    ctx->pc = 0x3E3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E373Cu;
    // 0x3e3740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E373Cu, 0x3E3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3744u;
label_3e3744:
    // 0x3e3744: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e3744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3748:
    // 0x3e3748: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e374c:
    // 0x3e374c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3750:
    // 0x3e3750: 0xc0ea12a  jal         func_3A84A8
label_3e3754:
    if (ctx->pc == 0x3E3754u) {
        ctx->pc = 0x3E3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3750u;
        // 0x3e3754: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3758u;
        goto label_3e3758;
    }
    ctx->pc = 0x3E3750u;
    SET_GPR_U32(ctx, 31, 0x3E3758u);
    ctx->pc = 0x3E3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3750u;
    // 0x3e3754: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E3750u, 0x3E3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3758u;
label_3e3758:
    // 0x3e3758: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e3758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e375c:
    // 0x3e375c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e3760:
    // 0x3e3760: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e3760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e3764:
    // 0x3e3764: 0xc0e858c  jal         func_3A1630
label_3e3768:
    if (ctx->pc == 0x3E3768u) {
        ctx->pc = 0x3E3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3764u;
        // 0x3e3768: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E376Cu;
        goto label_3e376c;
    }
    ctx->pc = 0x3E3764u;
    SET_GPR_U32(ctx, 31, 0x3E376Cu);
    ctx->pc = 0x3E3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3764u;
    // 0x3e3768: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E3764u, 0x3E376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E376Cu;
label_3e376c:
    // 0x3e376c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e376cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e3770:
    // 0x3e3770: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x3e3770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_3e3774:
    // 0x3e3774: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3e3774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3e3778:
    // 0x3e3778: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3e3778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3e377c:
    // 0x3e377c: 0xaee20054  sw          $v0, 0x54($s7)
    ctx->pc = 0x3e377cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 84), GPR_U32(ctx, 2));
label_3e3780:
    // 0x3e3780: 0xc1073cc  jal         func_41CF30
label_3e3784:
    if (ctx->pc == 0x3E3784u) {
        ctx->pc = 0x3E3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3780u;
        // 0x3e3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3788u;
        goto label_3e3788;
    }
    ctx->pc = 0x3E3780u;
    SET_GPR_U32(ctx, 31, 0x3E3788u);
    ctx->pc = 0x3E3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3780u;
    // 0x3e3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E3780u, 0x3E3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3788u;
label_3e3788:
    // 0x3e3788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e3788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e378c:
    // 0x3e378c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e3790:
    if (ctx->pc == 0x3E3790u) {
        ctx->pc = 0x3E3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E378Cu;
        // 0x3e3790: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3794u;
        goto label_3e3794;
    }
    ctx->pc = 0x3E378Cu;
    {
        const bool branch_taken_0x3e378c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E378Cu;
        // 0x3e3790: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e378c) {
            ctx->pc = 0x3E37A8u;
            goto label_3e37a8;
        }
    }
    ctx->pc = 0x3E3794u;
label_3e3794:
    // 0x3e3794: 0x8ee30054  lw          $v1, 0x54($s7)
    ctx->pc = 0x3e3794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_3e3798:
    // 0x3e3798: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3e3798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3e379c:
    // 0x3e379c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e37a0:
    // 0x3e37a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e37a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e37a4:
    // 0x3e37a4: 0xaee30054  sw          $v1, 0x54($s7)
    ctx->pc = 0x3e37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 84), GPR_U32(ctx, 3));
label_3e37a8:
    // 0x3e37a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e37a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e37ac:
    // 0x3e37ac: 0x2694b8b8  addiu       $s4, $s4, -0x4748
    ctx->pc = 0x3e37acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949048));
label_3e37b0:
    // 0x3e37b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e37b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e37b4:
    // 0x3e37b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e37b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e37b8:
    // 0x3e37b8: 0xc0cd4ee  jal         func_3353B8
label_3e37bc:
    if (ctx->pc == 0x3E37BCu) {
        ctx->pc = 0x3E37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37B8u;
        // 0x3e37bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E37C0u;
        goto label_3e37c0;
    }
    ctx->pc = 0x3E37B8u;
    SET_GPR_U32(ctx, 31, 0x3E37C0u);
    ctx->pc = 0x3E37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37B8u;
    // 0x3e37bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E37B8u, 0x3E37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37C0u;
label_3e37c0:
    // 0x3e37c0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e37c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e37c4:
    // 0x3e37c4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3e37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3e37c8:
    // 0x3e37c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e37c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3e37cc:
    // 0x3e37cc: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3e37ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3e37d0:
    // 0x3e37d0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e37d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e37d4:
    // 0x3e37d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e37d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e37d8:
    // 0x3e37d8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3e37d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3e37dc:
    // 0x3e37dc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3e37dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3e37e0:
    // 0x3e37e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e37e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e37e4:
    // 0x3e37e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e37e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e37e8:
    // 0x3e37e8: 0xaee000bc  sw          $zero, 0xBC($s7)
    ctx->pc = 0x3e37e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 188), GPR_U32(ctx, 0));
label_3e37ec:
    // 0x3e37ec: 0xaee200c4  sw          $v0, 0xC4($s7)
    ctx->pc = 0x3e37ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 196), GPR_U32(ctx, 2));
label_3e37f0:
    // 0x3e37f0: 0xc0cd518  jal         func_335460
label_3e37f4:
    if (ctx->pc == 0x3E37F4u) {
        ctx->pc = 0x3E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37F0u;
        // 0x3e37f4: 0x7ee30010  sq          $v1, 0x10($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E37F8u;
        goto label_3e37f8;
    }
    ctx->pc = 0x3E37F0u;
    SET_GPR_U32(ctx, 31, 0x3E37F8u);
    ctx->pc = 0x3E37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37F0u;
    // 0x3e37f4: 0x7ee30010  sq          $v1, 0x10($s7) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E37F0u, 0x3E37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37F8u;
label_3e37f8:
    // 0x3e37f8: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3e37f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3e37fc:
    // 0x3e37fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e37fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e3800:
    // 0x3e3800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e3800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e3804:
    // 0x3e3804: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3e3804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3e3808:
    // 0x3e3808: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e3808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e380c:
    // 0x3e380c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3e380cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e3810:
    // 0x3e3810: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e3810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e3814:
    // 0x3e3814: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e3814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e3818:
    // 0x3e3818: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x3e3818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3e381c:
    // 0x3e381c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3e381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3e3820:
    // 0x3e3820: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3e3820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3e3824:
    // 0x3e3824: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e3824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e3828:
    // 0x3e3828: 0xe6e000c0  swc1        $f0, 0xC0($s7)
    ctx->pc = 0x3e3828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 192), bits); }
label_3e382c:
    // 0x3e382c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3e382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e3830:
    // 0x3e3830: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e3830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e3834:
    // 0x3e3834: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3838:
    // 0x3e3838: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e3838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e383c:
    // 0x3e383c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e3840:
    // 0x3e3840: 0x7fc20010  sq          $v0, 0x10($fp)
    ctx->pc = 0x3e3840u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 2));
label_3e3844:
    // 0x3e3844: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x3e3844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e3848:
    // 0x3e3848: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3e3848u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3e384c:
    // 0x3e384c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e384cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e3850:
    // 0x3e3850: 0x86110070  lh          $s1, 0x70($s0)
    ctx->pc = 0x3e3850u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_3e3854:
    // 0x3e3854: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3e3854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e3858:
    // 0x3e3858: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3e3858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3e385c:
    // 0x3e385c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e385cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e3860:
    // 0x3e3860: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3e3860u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e3864:
    // 0x3e3864: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3e3864u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3e3868:
    // 0x3e3868: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3e3868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3e386c:
    // 0x3e386c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x3e386cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3e3870:
    // 0x3e3870: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3e3870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3e3874:
    // 0x3e3874: 0x2f18821  addu        $s1, $s7, $s1
    ctx->pc = 0x3e3874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_3e3878:
    // 0x3e3878: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3e3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3e387c:
    // 0x3e387c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e3880:
    // 0x3e3880: 0xc136b24  jal         func_4DAC90
label_3e3884:
    if (ctx->pc == 0x3E3884u) {
        ctx->pc = 0x3E3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3880u;
        // 0x3e3884: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3888u;
        goto label_3e3888;
    }
    ctx->pc = 0x3E3880u;
    SET_GPR_U32(ctx, 31, 0x3E3888u);
    ctx->pc = 0x3E3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3880u;
    // 0x3e3884: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E3880u, 0x3E3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3888u;
label_3e3888:
    // 0x3e3888: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3e3888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e388c:
    // 0x3e388c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3e388cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3e3890:
    // 0x3e3890: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3e3890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3e3894:
    // 0x3e3894: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e3894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e3898:
    // 0x3e3898: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e3898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e389c:
    // 0x3e389c: 0xc0cd518  jal         func_335460
label_3e38a0:
    if (ctx->pc == 0x3E38A0u) {
        ctx->pc = 0x3E38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E389Cu;
        // 0x3e38a0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E38A4u;
        goto label_3e38a4;
    }
    ctx->pc = 0x3E389Cu;
    SET_GPR_U32(ctx, 31, 0x3E38A4u);
    ctx->pc = 0x3E38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E389Cu;
    // 0x3e38a0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E389Cu, 0x3E38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38A4u;
label_3e38a4:
    // 0x3e38a4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x3e38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3e38a8:
    // 0x3e38a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3e38a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3e38ac:
    // 0x3e38ac: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3e38acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3e38b0:
    // 0x3e38b0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3e38b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e38b4:
    // 0x3e38b4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3e38b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3e38b8:
    // 0x3e38b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e38b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e38bc:
    // 0x3e38bc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3e38bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e38c0:
    // 0x3e38c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e38c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e38c4:
    // 0x3e38c4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3e38c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e38c8:
    // 0x3e38c8: 0xc136afa  jal         func_4DABE8
label_3e38cc:
    if (ctx->pc == 0x3E38CCu) {
        ctx->pc = 0x3E38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38C8u;
        // 0x3e38cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E38D0u;
        goto label_3e38d0;
    }
    ctx->pc = 0x3E38C8u;
    SET_GPR_U32(ctx, 31, 0x3E38D0u);
    ctx->pc = 0x3E38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E38C8u;
    // 0x3e38cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E38C8u, 0x3E38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38D0u;
label_3e38d0:
    // 0x3e38d0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3e38d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e38d4:
    // 0x3e38d4: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x3e38d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e38d8:
    // 0x3e38d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e38d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e38dc:
    // 0x3e38dc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3e38dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3e38e0:
    // 0x3e38e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e38e4:
    // 0x3e38e4: 0x40f809  jalr        $v0
label_3e38e8:
    if (ctx->pc == 0x3E38E8u) {
        ctx->pc = 0x3E38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38E4u;
        // 0x3e38e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E38ECu;
        goto label_3e38ec;
    }
    ctx->pc = 0x3E38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E38ECu);
        ctx->pc = 0x3E38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38E4u;
        // 0x3e38e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E38E4u, 0x3E38ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E38ECu;
label_3e38ec:
    // 0x3e38ec: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x3e38ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e38f0:
    // 0x3e38f0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3e38f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e38f4:
    // 0x3e38f4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e38f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e38f8:
    // 0x3e38f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e38f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e38fc:
    // 0x3e38fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e38fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e3900:
    // 0x3e3900: 0x86320078  lh          $s2, 0x78($s1)
    ctx->pc = 0x3e3900u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3e3904:
    // 0x3e3904: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e3908:
    // 0x3e3908: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e3908u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3e390c:
    // 0x3e390c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e390cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e3910:
    // 0x3e3910: 0x2f29021  addu        $s2, $s7, $s2
    ctx->pc = 0x3e3910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_3e3914:
    // 0x3e3914: 0xc0cd55c  jal         func_335570
label_3e3918:
    if (ctx->pc == 0x3E3918u) {
        ctx->pc = 0x3E3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3914u;
        // 0x3e3918: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E391Cu;
        goto label_3e391c;
    }
    ctx->pc = 0x3E3914u;
    SET_GPR_U32(ctx, 31, 0x3E391Cu);
    ctx->pc = 0x3E3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3914u;
    // 0x3e3918: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3E3914u, 0x3E391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E391Cu;
label_3e391c:
    // 0x3e391c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3e391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3e3920:
    // 0x3e3920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e3920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3924:
    // 0x3e3924: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3e3924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e3928:
    // 0x3e3928: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3e3928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3e392c:
    // 0x3e392c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e3930:
    // 0x3e3930: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3e3930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3e3934:
    // 0x3e3934: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e3934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e3938:
    // 0x3e3938: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3e3938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e393c:
    // 0x3e393c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3940:
    // 0x3e3940: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3e3940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3e3944:
    // 0x3e3944: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e3944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3948:
    // 0x3e3948: 0xc136afa  jal         func_4DABE8
label_3e394c:
    if (ctx->pc == 0x3E394Cu) {
        ctx->pc = 0x3E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3948u;
        // 0x3e394c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3950u;
        goto label_3e3950;
    }
    ctx->pc = 0x3E3948u;
    SET_GPR_U32(ctx, 31, 0x3E3950u);
    ctx->pc = 0x3E394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3948u;
    // 0x3e394c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E3948u, 0x3E3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3950u;
label_3e3950:
    // 0x3e3950: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e3950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3954:
    // 0x3e3954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3958:
    // 0x3e3958: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3e3958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3e395c:
    // 0x3e395c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3960:
    // 0x3e3960: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e3964:
    // 0x3e3964: 0xc136b24  jal         func_4DAC90
label_3e3968:
    if (ctx->pc == 0x3E3968u) {
        ctx->pc = 0x3E3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3964u;
        // 0x3e3968: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E396Cu;
        goto label_3e396c;
    }
    ctx->pc = 0x3E3964u;
    SET_GPR_U32(ctx, 31, 0x3E396Cu);
    ctx->pc = 0x3E3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3964u;
    // 0x3e3968: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E3964u, 0x3E396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E396Cu;
label_3e396c:
    // 0x3e396c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e396cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3970:
    // 0x3e3970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3974:
    // 0x3e3974: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e3974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e3978:
    // 0x3e3978: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e3978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e397c:
    // 0x3e397c: 0x60f809  jalr        $v1
label_3e3980:
    if (ctx->pc == 0x3E3980u) {
        ctx->pc = 0x3E3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E397Cu;
        // 0x3e3980: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3984u;
        goto label_3e3984;
    }
    ctx->pc = 0x3E397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E3984u);
        ctx->pc = 0x3E3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E397Cu;
        // 0x3e3980: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E397Cu, 0x3E3984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3984u;
label_3e3984:
    // 0x3e3984: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3e3984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3e3988:
    // 0x3e3988: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e3988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e398c:
    // 0x3e398c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e398cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e3990:
    // 0x3e3990: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3e3990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3e3994:
    // 0x3e3994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e3994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e3998:
    // 0x3e3998: 0xaee300b4  sw          $v1, 0xB4($s7)
    ctx->pc = 0x3e3998u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 180), GPR_U32(ctx, 3));
label_3e399c:
    // 0x3e399c: 0xaee200b0  sw          $v0, 0xB0($s7)
    ctx->pc = 0x3e399cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 176), GPR_U32(ctx, 2));
label_3e39a0:
    // 0x3e39a0: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x3e39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
label_3e39a4:
    // 0x3e39a4: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x3e39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_3e39a8:
    // 0x3e39a8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3e39a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3e39ac:
    // 0x3e39ac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e39acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e39b0:
    // 0x3e39b0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3e39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3e39b4:
    // 0x3e39b4: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x3e39b4u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
label_3e39b8:
    // 0x3e39b8: 0xafc30020  sw          $v1, 0x20($fp)
    ctx->pc = 0x3e39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 3));
label_3e39bc:
    // 0x3e39bc: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3e39bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3e39c0:
    // 0x3e39c0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3e39c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3e39c4:
    // 0x3e39c4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3e39c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3e39c8:
    // 0x3e39c8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3e39c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3e39cc:
    // 0x3e39cc: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3e39ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3e39d0:
    // 0x3e39d0: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x3e39d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e39d4:
    // 0x3e39d4: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x3e39d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e39d8:
    // 0x3e39d8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3e39d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3e39dc:
    // 0x3e39dc: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x3e39dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e39e0:
    // 0x3e39e0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x3e39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e39e4:
    // 0x3e39e4: 0x3e00008  jr          $ra
label_3e39e8:
    if (ctx->pc == 0x3E39E8u) {
        ctx->pc = 0x3E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39E4u;
        // 0x3e39e8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E39ECu;
        goto label_3e39ec;
    }
    ctx->pc = 0x3E39E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39E4u;
        // 0x3e39e8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E39E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E39ECu;
label_3e39ec:
    // 0x3e39ec: 0x0  nop
    ctx->pc = 0x3e39ecu;
    // NOP
    ctx->pc = 0x3e39f0u;
}
