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

// Function: sub_001D35F8
// Address: 0x1d35f8 - 0x1d3aa8
void sub_001D35F8_0x1d35f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D35F8_0x1d35f8");
#endif

    switch (ctx->pc) {
        case 0x1d35f8u: goto label_1d35f8;
        case 0x1d35fcu: goto label_1d35fc;
        case 0x1d3600u: goto label_1d3600;
        case 0x1d3604u: goto label_1d3604;
        case 0x1d3608u: goto label_1d3608;
        case 0x1d360cu: goto label_1d360c;
        case 0x1d3610u: goto label_1d3610;
        case 0x1d3614u: goto label_1d3614;
        case 0x1d3618u: goto label_1d3618;
        case 0x1d361cu: goto label_1d361c;
        case 0x1d3620u: goto label_1d3620;
        case 0x1d3624u: goto label_1d3624;
        case 0x1d3628u: goto label_1d3628;
        case 0x1d362cu: goto label_1d362c;
        case 0x1d3630u: goto label_1d3630;
        case 0x1d3634u: goto label_1d3634;
        case 0x1d3638u: goto label_1d3638;
        case 0x1d363cu: goto label_1d363c;
        case 0x1d3640u: goto label_1d3640;
        case 0x1d3644u: goto label_1d3644;
        case 0x1d3648u: goto label_1d3648;
        case 0x1d364cu: goto label_1d364c;
        case 0x1d3650u: goto label_1d3650;
        case 0x1d3654u: goto label_1d3654;
        case 0x1d3658u: goto label_1d3658;
        case 0x1d365cu: goto label_1d365c;
        case 0x1d3660u: goto label_1d3660;
        case 0x1d3664u: goto label_1d3664;
        case 0x1d3668u: goto label_1d3668;
        case 0x1d366cu: goto label_1d366c;
        case 0x1d3670u: goto label_1d3670;
        case 0x1d3674u: goto label_1d3674;
        case 0x1d3678u: goto label_1d3678;
        case 0x1d367cu: goto label_1d367c;
        case 0x1d3680u: goto label_1d3680;
        case 0x1d3684u: goto label_1d3684;
        case 0x1d3688u: goto label_1d3688;
        case 0x1d368cu: goto label_1d368c;
        case 0x1d3690u: goto label_1d3690;
        case 0x1d3694u: goto label_1d3694;
        case 0x1d3698u: goto label_1d3698;
        case 0x1d369cu: goto label_1d369c;
        case 0x1d36a0u: goto label_1d36a0;
        case 0x1d36a4u: goto label_1d36a4;
        case 0x1d36a8u: goto label_1d36a8;
        case 0x1d36acu: goto label_1d36ac;
        case 0x1d36b0u: goto label_1d36b0;
        case 0x1d36b4u: goto label_1d36b4;
        case 0x1d36b8u: goto label_1d36b8;
        case 0x1d36bcu: goto label_1d36bc;
        case 0x1d36c0u: goto label_1d36c0;
        case 0x1d36c4u: goto label_1d36c4;
        case 0x1d36c8u: goto label_1d36c8;
        case 0x1d36ccu: goto label_1d36cc;
        case 0x1d36d0u: goto label_1d36d0;
        case 0x1d36d4u: goto label_1d36d4;
        case 0x1d36d8u: goto label_1d36d8;
        case 0x1d36dcu: goto label_1d36dc;
        case 0x1d36e0u: goto label_1d36e0;
        case 0x1d36e4u: goto label_1d36e4;
        case 0x1d36e8u: goto label_1d36e8;
        case 0x1d36ecu: goto label_1d36ec;
        case 0x1d36f0u: goto label_1d36f0;
        case 0x1d36f4u: goto label_1d36f4;
        case 0x1d36f8u: goto label_1d36f8;
        case 0x1d36fcu: goto label_1d36fc;
        case 0x1d3700u: goto label_1d3700;
        case 0x1d3704u: goto label_1d3704;
        case 0x1d3708u: goto label_1d3708;
        case 0x1d370cu: goto label_1d370c;
        case 0x1d3710u: goto label_1d3710;
        case 0x1d3714u: goto label_1d3714;
        case 0x1d3718u: goto label_1d3718;
        case 0x1d371cu: goto label_1d371c;
        case 0x1d3720u: goto label_1d3720;
        case 0x1d3724u: goto label_1d3724;
        case 0x1d3728u: goto label_1d3728;
        case 0x1d372cu: goto label_1d372c;
        case 0x1d3730u: goto label_1d3730;
        case 0x1d3734u: goto label_1d3734;
        case 0x1d3738u: goto label_1d3738;
        case 0x1d373cu: goto label_1d373c;
        case 0x1d3740u: goto label_1d3740;
        case 0x1d3744u: goto label_1d3744;
        case 0x1d3748u: goto label_1d3748;
        case 0x1d374cu: goto label_1d374c;
        case 0x1d3750u: goto label_1d3750;
        case 0x1d3754u: goto label_1d3754;
        case 0x1d3758u: goto label_1d3758;
        case 0x1d375cu: goto label_1d375c;
        case 0x1d3760u: goto label_1d3760;
        case 0x1d3764u: goto label_1d3764;
        case 0x1d3768u: goto label_1d3768;
        case 0x1d376cu: goto label_1d376c;
        case 0x1d3770u: goto label_1d3770;
        case 0x1d3774u: goto label_1d3774;
        case 0x1d3778u: goto label_1d3778;
        case 0x1d377cu: goto label_1d377c;
        case 0x1d3780u: goto label_1d3780;
        case 0x1d3784u: goto label_1d3784;
        case 0x1d3788u: goto label_1d3788;
        case 0x1d378cu: goto label_1d378c;
        case 0x1d3790u: goto label_1d3790;
        case 0x1d3794u: goto label_1d3794;
        case 0x1d3798u: goto label_1d3798;
        case 0x1d379cu: goto label_1d379c;
        case 0x1d37a0u: goto label_1d37a0;
        case 0x1d37a4u: goto label_1d37a4;
        case 0x1d37a8u: goto label_1d37a8;
        case 0x1d37acu: goto label_1d37ac;
        case 0x1d37b0u: goto label_1d37b0;
        case 0x1d37b4u: goto label_1d37b4;
        case 0x1d37b8u: goto label_1d37b8;
        case 0x1d37bcu: goto label_1d37bc;
        case 0x1d37c0u: goto label_1d37c0;
        case 0x1d37c4u: goto label_1d37c4;
        case 0x1d37c8u: goto label_1d37c8;
        case 0x1d37ccu: goto label_1d37cc;
        case 0x1d37d0u: goto label_1d37d0;
        case 0x1d37d4u: goto label_1d37d4;
        case 0x1d37d8u: goto label_1d37d8;
        case 0x1d37dcu: goto label_1d37dc;
        case 0x1d37e0u: goto label_1d37e0;
        case 0x1d37e4u: goto label_1d37e4;
        case 0x1d37e8u: goto label_1d37e8;
        case 0x1d37ecu: goto label_1d37ec;
        case 0x1d37f0u: goto label_1d37f0;
        case 0x1d37f4u: goto label_1d37f4;
        case 0x1d37f8u: goto label_1d37f8;
        case 0x1d37fcu: goto label_1d37fc;
        case 0x1d3800u: goto label_1d3800;
        case 0x1d3804u: goto label_1d3804;
        case 0x1d3808u: goto label_1d3808;
        case 0x1d380cu: goto label_1d380c;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3814u: goto label_1d3814;
        case 0x1d3818u: goto label_1d3818;
        case 0x1d381cu: goto label_1d381c;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d3824u: goto label_1d3824;
        case 0x1d3828u: goto label_1d3828;
        case 0x1d382cu: goto label_1d382c;
        case 0x1d3830u: goto label_1d3830;
        case 0x1d3834u: goto label_1d3834;
        case 0x1d3838u: goto label_1d3838;
        case 0x1d383cu: goto label_1d383c;
        case 0x1d3840u: goto label_1d3840;
        case 0x1d3844u: goto label_1d3844;
        case 0x1d3848u: goto label_1d3848;
        case 0x1d384cu: goto label_1d384c;
        case 0x1d3850u: goto label_1d3850;
        case 0x1d3854u: goto label_1d3854;
        case 0x1d3858u: goto label_1d3858;
        case 0x1d385cu: goto label_1d385c;
        case 0x1d3860u: goto label_1d3860;
        case 0x1d3864u: goto label_1d3864;
        case 0x1d3868u: goto label_1d3868;
        case 0x1d386cu: goto label_1d386c;
        case 0x1d3870u: goto label_1d3870;
        case 0x1d3874u: goto label_1d3874;
        case 0x1d3878u: goto label_1d3878;
        case 0x1d387cu: goto label_1d387c;
        case 0x1d3880u: goto label_1d3880;
        case 0x1d3884u: goto label_1d3884;
        case 0x1d3888u: goto label_1d3888;
        case 0x1d388cu: goto label_1d388c;
        case 0x1d3890u: goto label_1d3890;
        case 0x1d3894u: goto label_1d3894;
        case 0x1d3898u: goto label_1d3898;
        case 0x1d389cu: goto label_1d389c;
        case 0x1d38a0u: goto label_1d38a0;
        case 0x1d38a4u: goto label_1d38a4;
        case 0x1d38a8u: goto label_1d38a8;
        case 0x1d38acu: goto label_1d38ac;
        case 0x1d38b0u: goto label_1d38b0;
        case 0x1d38b4u: goto label_1d38b4;
        case 0x1d38b8u: goto label_1d38b8;
        case 0x1d38bcu: goto label_1d38bc;
        case 0x1d38c0u: goto label_1d38c0;
        case 0x1d38c4u: goto label_1d38c4;
        case 0x1d38c8u: goto label_1d38c8;
        case 0x1d38ccu: goto label_1d38cc;
        case 0x1d38d0u: goto label_1d38d0;
        case 0x1d38d4u: goto label_1d38d4;
        case 0x1d38d8u: goto label_1d38d8;
        case 0x1d38dcu: goto label_1d38dc;
        case 0x1d38e0u: goto label_1d38e0;
        case 0x1d38e4u: goto label_1d38e4;
        case 0x1d38e8u: goto label_1d38e8;
        case 0x1d38ecu: goto label_1d38ec;
        case 0x1d38f0u: goto label_1d38f0;
        case 0x1d38f4u: goto label_1d38f4;
        case 0x1d38f8u: goto label_1d38f8;
        case 0x1d38fcu: goto label_1d38fc;
        case 0x1d3900u: goto label_1d3900;
        case 0x1d3904u: goto label_1d3904;
        case 0x1d3908u: goto label_1d3908;
        case 0x1d390cu: goto label_1d390c;
        case 0x1d3910u: goto label_1d3910;
        case 0x1d3914u: goto label_1d3914;
        case 0x1d3918u: goto label_1d3918;
        case 0x1d391cu: goto label_1d391c;
        case 0x1d3920u: goto label_1d3920;
        case 0x1d3924u: goto label_1d3924;
        case 0x1d3928u: goto label_1d3928;
        case 0x1d392cu: goto label_1d392c;
        case 0x1d3930u: goto label_1d3930;
        case 0x1d3934u: goto label_1d3934;
        case 0x1d3938u: goto label_1d3938;
        case 0x1d393cu: goto label_1d393c;
        case 0x1d3940u: goto label_1d3940;
        case 0x1d3944u: goto label_1d3944;
        case 0x1d3948u: goto label_1d3948;
        case 0x1d394cu: goto label_1d394c;
        case 0x1d3950u: goto label_1d3950;
        case 0x1d3954u: goto label_1d3954;
        case 0x1d3958u: goto label_1d3958;
        case 0x1d395cu: goto label_1d395c;
        case 0x1d3960u: goto label_1d3960;
        case 0x1d3964u: goto label_1d3964;
        case 0x1d3968u: goto label_1d3968;
        case 0x1d396cu: goto label_1d396c;
        case 0x1d3970u: goto label_1d3970;
        case 0x1d3974u: goto label_1d3974;
        case 0x1d3978u: goto label_1d3978;
        case 0x1d397cu: goto label_1d397c;
        case 0x1d3980u: goto label_1d3980;
        case 0x1d3984u: goto label_1d3984;
        case 0x1d3988u: goto label_1d3988;
        case 0x1d398cu: goto label_1d398c;
        case 0x1d3990u: goto label_1d3990;
        case 0x1d3994u: goto label_1d3994;
        case 0x1d3998u: goto label_1d3998;
        case 0x1d399cu: goto label_1d399c;
        case 0x1d39a0u: goto label_1d39a0;
        case 0x1d39a4u: goto label_1d39a4;
        case 0x1d39a8u: goto label_1d39a8;
        case 0x1d39acu: goto label_1d39ac;
        case 0x1d39b0u: goto label_1d39b0;
        case 0x1d39b4u: goto label_1d39b4;
        case 0x1d39b8u: goto label_1d39b8;
        case 0x1d39bcu: goto label_1d39bc;
        case 0x1d39c0u: goto label_1d39c0;
        case 0x1d39c4u: goto label_1d39c4;
        case 0x1d39c8u: goto label_1d39c8;
        case 0x1d39ccu: goto label_1d39cc;
        case 0x1d39d0u: goto label_1d39d0;
        case 0x1d39d4u: goto label_1d39d4;
        case 0x1d39d8u: goto label_1d39d8;
        case 0x1d39dcu: goto label_1d39dc;
        case 0x1d39e0u: goto label_1d39e0;
        case 0x1d39e4u: goto label_1d39e4;
        case 0x1d39e8u: goto label_1d39e8;
        case 0x1d39ecu: goto label_1d39ec;
        case 0x1d39f0u: goto label_1d39f0;
        case 0x1d39f4u: goto label_1d39f4;
        case 0x1d39f8u: goto label_1d39f8;
        case 0x1d39fcu: goto label_1d39fc;
        case 0x1d3a00u: goto label_1d3a00;
        case 0x1d3a04u: goto label_1d3a04;
        case 0x1d3a08u: goto label_1d3a08;
        case 0x1d3a0cu: goto label_1d3a0c;
        case 0x1d3a10u: goto label_1d3a10;
        case 0x1d3a14u: goto label_1d3a14;
        case 0x1d3a18u: goto label_1d3a18;
        case 0x1d3a1cu: goto label_1d3a1c;
        case 0x1d3a20u: goto label_1d3a20;
        case 0x1d3a24u: goto label_1d3a24;
        case 0x1d3a28u: goto label_1d3a28;
        case 0x1d3a2cu: goto label_1d3a2c;
        case 0x1d3a30u: goto label_1d3a30;
        case 0x1d3a34u: goto label_1d3a34;
        case 0x1d3a38u: goto label_1d3a38;
        case 0x1d3a3cu: goto label_1d3a3c;
        case 0x1d3a40u: goto label_1d3a40;
        case 0x1d3a44u: goto label_1d3a44;
        case 0x1d3a48u: goto label_1d3a48;
        case 0x1d3a4cu: goto label_1d3a4c;
        case 0x1d3a50u: goto label_1d3a50;
        case 0x1d3a54u: goto label_1d3a54;
        case 0x1d3a58u: goto label_1d3a58;
        case 0x1d3a5cu: goto label_1d3a5c;
        case 0x1d3a60u: goto label_1d3a60;
        case 0x1d3a64u: goto label_1d3a64;
        case 0x1d3a68u: goto label_1d3a68;
        case 0x1d3a6cu: goto label_1d3a6c;
        case 0x1d3a70u: goto label_1d3a70;
        case 0x1d3a74u: goto label_1d3a74;
        case 0x1d3a78u: goto label_1d3a78;
        case 0x1d3a7cu: goto label_1d3a7c;
        case 0x1d3a80u: goto label_1d3a80;
        case 0x1d3a84u: goto label_1d3a84;
        case 0x1d3a88u: goto label_1d3a88;
        case 0x1d3a8cu: goto label_1d3a8c;
        case 0x1d3a90u: goto label_1d3a90;
        case 0x1d3a94u: goto label_1d3a94;
        case 0x1d3a98u: goto label_1d3a98;
        case 0x1d3a9cu: goto label_1d3a9c;
        case 0x1d3aa0u: goto label_1d3aa0;
        case 0x1d3aa4u: goto label_1d3aa4;
        default: break;
    }

    ctx->pc = 0x1d35f8u;

label_1d35f8:
    // 0x1d35f8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d35f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1d35fc:
    // 0x1d35fc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1d35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1d3600:
    // 0x1d3600: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1d3600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1d3604:
    // 0x1d3604: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d3604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3608:
    // 0x1d3608: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1d3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1d360c:
    // 0x1d360c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1d360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1d3610:
    // 0x1d3610: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1d3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1d3614:
    // 0x1d3614: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d3614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1d3618:
    // 0x1d3618: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d361c:
    // 0x1d361c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d3620:
    // 0x1d3620: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x1d3620u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1d3624:
    // 0x1d3624: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x1d3624u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1d3628:
    // 0x1d3628: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1d3628u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1d362c:
    // 0x1d362c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1d362cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1d3630:
    // 0x1d3630: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1d3630u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1d3634:
    // 0x1d3634: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1d3634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1d3638:
    // 0x1d3638: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d363c:
    // 0x1d363c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d363cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d3640:
    // 0x1d3640: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d3644:
    // 0x1d3644: 0x40f809  jalr        $v0
label_1d3648:
    if (ctx->pc == 0x1D3648u) {
        ctx->pc = 0x1D3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3644u;
        // 0x1d3648: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D364Cu;
        goto label_1d364c;
    }
    ctx->pc = 0x1D3644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D364Cu);
        ctx->pc = 0x1D3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3644u;
        // 0x1d3648: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3644u, 0x1D364Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D364Cu;
label_1d364c:
    // 0x1d364c: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_1d3650:
    if (ctx->pc == 0x1D3650u) {
        ctx->pc = 0x1D3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D364Cu;
        // 0x1d3650: 0x26700180  addiu       $s0, $s3, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3654u;
        goto label_1d3654;
    }
    ctx->pc = 0x1D364Cu;
    {
        const bool branch_taken_0x1d364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D364Cu;
        // 0x1d3650: 0x26700180  addiu       $s0, $s3, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d364c) {
            ctx->pc = 0x1D3A68u;
            goto label_1d3a68;
        }
    }
    ctx->pc = 0x1D3654u;
label_1d3654:
    // 0x1d3654: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d3654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d3658:
    // 0x1d3658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d365c:
    // 0x1d365c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d3660:
    // 0x1d3660: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1d3660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1d3664:
    // 0x1d3664: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1d3664u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d3668:
    // 0x1d3668: 0x26720224  addiu       $s2, $s3, 0x224
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 548));
label_1d366c:
    // 0x1d366c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d3670:
    // 0x1d3670: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1d3670u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1d3674:
    // 0x1d3674: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d3674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d3678:
    // 0x1d3678: 0x60f809  jalr        $v1
label_1d367c:
    if (ctx->pc == 0x1D367Cu) {
        ctx->pc = 0x1D367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3678u;
        // 0x1d367c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3680u;
        goto label_1d3680;
    }
    ctx->pc = 0x1D3678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3680u);
        ctx->pc = 0x1D367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3678u;
        // 0x1d367c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3678u, 0x1D3680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3680u;
label_1d3680:
    // 0x1d3680: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d3680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d3684:
    // 0x1d3684: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1d3684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1d3688:
    // 0x1d3688: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1d3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d368c:
    // 0x1d368c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3690:
    // 0x1d3690: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1d3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3694:
    // 0x1d3694: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1d3694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1d3698:
    // 0x1d3698: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x1d3698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_1d369c:
    // 0x1d369c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d36a0:
    // 0x1d36a0: 0x3c01bc03  lui         $at, 0xBC03
    ctx->pc = 0x1d36a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48131 << 16));
label_1d36a4:
    // 0x1d36a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d36a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d36a8:
    // 0x1d36a8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1d36a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1d36ac:
    // 0x1d36ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d36acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d36b0:
    // 0x1d36b0: 0xc068818  jal         func_1A2060
label_1d36b4:
    if (ctx->pc == 0x1D36B4u) {
        ctx->pc = 0x1D36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36B0u;
        // 0x1d36b4: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D36B8u;
        goto label_1d36b8;
    }
    ctx->pc = 0x1D36B0u;
    SET_GPR_U32(ctx, 31, 0x1D36B8u);
    ctx->pc = 0x1D36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36B0u;
    // 0x1d36b4: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D36B0u, 0x1D36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36B8u;
label_1d36b8:
    // 0x1d36b8: 0xc06886e  jal         func_1A21B8
label_1d36bc:
    if (ctx->pc == 0x1D36BCu) {
        ctx->pc = 0x1D36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36B8u;
        // 0x1d36bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D36C0u;
        goto label_1d36c0;
    }
    ctx->pc = 0x1D36B8u;
    SET_GPR_U32(ctx, 31, 0x1D36C0u);
    ctx->pc = 0x1D36BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36B8u;
    // 0x1d36bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1D36B8u, 0x1D36C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36C0u;
label_1d36c0:
    // 0x1d36c0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1d36c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d36c4:
    // 0x1d36c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d36c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d36c8:
    // 0x1d36c8: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1d36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d36cc:
    // 0x1d36cc: 0xc068848  jal         func_1A2120
label_1d36d0:
    if (ctx->pc == 0x1D36D0u) {
        ctx->pc = 0x1D36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36CCu;
        // 0x1d36d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D36D4u;
        goto label_1d36d4;
    }
    ctx->pc = 0x1D36CCu;
    SET_GPR_U32(ctx, 31, 0x1D36D4u);
    ctx->pc = 0x1D36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36CCu;
    // 0x1d36d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D36CCu, 0x1D36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36D4u;
label_1d36d4:
    // 0x1d36d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d36d8:
    // 0x1d36d8: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1d36d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d36dc:
    // 0x1d36dc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1d36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d36e0:
    // 0x1d36e0: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d36e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d36e4:
    // 0x1d36e4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d36e8:
    // 0x1d36e8: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x1d36e8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d36ec:
    // 0x1d36ec: 0x40f809  jalr        $v0
label_1d36f0:
    if (ctx->pc == 0x1D36F0u) {
        ctx->pc = 0x1D36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36ECu;
        // 0x1d36f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D36F4u;
        goto label_1d36f4;
    }
    ctx->pc = 0x1D36ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D36F4u);
        ctx->pc = 0x1D36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36ECu;
        // 0x1d36f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D36ECu, 0x1D36F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D36F4u;
label_1d36f4:
    // 0x1d36f4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d36f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d36f8:
    // 0x1d36f8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1d36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d36fc:
    // 0x1d36fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d36fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d3700:
    // 0x1d3700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3704:
    // 0x1d3704: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d3704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d3708:
    // 0x1d3708: 0xc068864  jal         func_1A2190
label_1d370c:
    if (ctx->pc == 0x1D370Cu) {
        ctx->pc = 0x1D370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3708u;
        // 0x1d370c: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3710u;
        goto label_1d3710;
    }
    ctx->pc = 0x1D3708u;
    SET_GPR_U32(ctx, 31, 0x1D3710u);
    ctx->pc = 0x1D370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3708u;
    // 0x1d370c: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x1D3708u, 0x1D3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3710u;
label_1d3710:
    // 0x1d3710: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d3714:
    // 0x1d3714: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d3714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d3718:
    // 0x1d3718: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d3718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d371c:
    // 0x1d371c: 0x60f809  jalr        $v1
label_1d3720:
    if (ctx->pc == 0x1D3720u) {
        ctx->pc = 0x1D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D371Cu;
        // 0x1d3720: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3724u;
        goto label_1d3724;
    }
    ctx->pc = 0x1D371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3724u);
        ctx->pc = 0x1D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D371Cu;
        // 0x1d3720: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D371Cu, 0x1D3724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3724u;
label_1d3724:
    // 0x1d3724: 0xc62eecd4  lwc1        $f14, -0x132C($s1)
    ctx->pc = 0x1d3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294962388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1d3728:
    // 0x1d3728: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d3728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1d372c:
    // 0x1d372c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d372cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1d3730:
    // 0x1d3730: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1d3730u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_1d3734:
    // 0x1d3734: 0xc0cdd5a  jal         func_337568
label_1d3738:
    if (ctx->pc == 0x1D3738u) {
        ctx->pc = 0x1D3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3734u;
        // 0x1d3738: 0x4600bc06  mov.s       $f16, $f23 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D373Cu;
        goto label_1d373c;
    }
    ctx->pc = 0x1D3734u;
    SET_GPR_U32(ctx, 31, 0x1D373Cu);
    ctx->pc = 0x1D3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3734u;
    // 0x1d3738: 0x4600bc06  mov.s       $f16, $f23 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1D3734u, 0x1D373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D373Cu;
label_1d373c:
    // 0x1d373c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1d373cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1d3740:
    // 0x1d3740: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x1d3740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3744:
    // 0x1d3744: 0x0  nop
    ctx->pc = 0x1d3744u;
    // NOP
label_1d3748:
    // 0x1d3748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d374c:
    if (ctx->pc == 0x1D374Cu) {
        ctx->pc = 0x1D374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3748u;
        // 0x1d374c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3750u;
        goto label_1d3750;
    }
    ctx->pc = 0x1D3748u;
    {
        const bool branch_taken_0x1d3748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3748u;
        // 0x1d374c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3748) {
            ctx->pc = 0x1D3754u;
            goto label_1d3754;
        }
    }
    ctx->pc = 0x1D3750u;
label_1d3750:
    // 0x1d3750: 0x4617b029  min.s       $f0, $f22, $f23
    ctx->pc = 0x1d3750u;
    ctx->f[0] = std::min(ctx->f[22], ctx->f[23]);
label_1d3754:
    // 0x1d3754: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x1d3754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_1d3758:
    // 0x1d3758: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1d3758u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1d375c:
    // 0x1d375c: 0xc620ecd4  lwc1        $f0, -0x132C($s1)
    ctx->pc = 0x1d375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294962388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3760:
    // 0x1d3760: 0x4600c506  mov.s       $f20, $f24
    ctx->pc = 0x1d3760u;
    ctx->f[20] = FPU_MOV_S(ctx->f[24]);
label_1d3764:
    // 0x1d3764: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d3764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1d3768:
    // 0x1d3768: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1d3768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d376c:
    // 0x1d376c: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x1d376cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_1d3770:
    // 0x1d3770: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1d3774:
    // 0x1d3774: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3778:
    // 0x1d3778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d377c:
    // 0x1d377c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1d377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3780:
    // 0x1d3780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3784:
    // 0x1d3784: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d3784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d3788:
    // 0x1d3788: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d3788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1d378c:
    // 0x1d378c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d378cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1d3790:
    // 0x1d3790: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x1d3790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d3794:
    // 0x1d3794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d3794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3798:
    // 0x1d3798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d379c:
    // 0x1d379c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1d379cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_1d37a0:
    // 0x1d37a0: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
label_1d37a4:
    // 0x1d37a4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d37a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1d37a8:
    // 0x1d37a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d37a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d37ac:
    // 0x1d37ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d37acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d37b0:
    // 0x1d37b0: 0x26720114  addiu       $s2, $s3, 0x114
    ctx->pc = 0x1d37b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 276));
label_1d37b4:
    // 0x1d37b4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1d37b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1d37b8:
    // 0x1d37b8: 0x26740450  addiu       $s4, $s3, 0x450
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1104));
label_1d37bc:
    // 0x1d37bc: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x1d37bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1d37c0:
    // 0x1d37c0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1d37c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d37c4:
    // 0x1d37c4: 0x26750640  addiu       $s5, $s3, 0x640
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
label_1d37c8:
    // 0x1d37c8: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1d37c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d37cc:
    // 0x1d37cc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1d37ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d37d0:
    // 0x1d37d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d37d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d37d4:
    // 0x1d37d4: 0xc068818  jal         func_1A2060
label_1d37d8:
    if (ctx->pc == 0x1D37D8u) {
        ctx->pc = 0x1D37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37D4u;
        // 0x1d37d8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37DCu;
        goto label_1d37dc;
    }
    ctx->pc = 0x1D37D4u;
    SET_GPR_U32(ctx, 31, 0x1D37DCu);
    ctx->pc = 0x1D37D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37D4u;
    // 0x1d37d8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D37D4u, 0x1D37DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37DCu;
label_1d37dc:
    // 0x1d37dc: 0xc06886e  jal         func_1A21B8
label_1d37e0:
    if (ctx->pc == 0x1D37E0u) {
        ctx->pc = 0x1D37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37DCu;
        // 0x1d37e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37E4u;
        goto label_1d37e4;
    }
    ctx->pc = 0x1D37DCu;
    SET_GPR_U32(ctx, 31, 0x1D37E4u);
    ctx->pc = 0x1D37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37DCu;
    // 0x1d37e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1D37DCu, 0x1D37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37E4u;
label_1d37e4:
    // 0x1d37e4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1d37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d37e8:
    // 0x1d37e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d37e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d37ec:
    // 0x1d37ec: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x1d37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d37f0:
    // 0x1d37f0: 0xc068848  jal         func_1A2120
label_1d37f4:
    if (ctx->pc == 0x1D37F4u) {
        ctx->pc = 0x1D37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37F0u;
        // 0x1d37f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37F8u;
        goto label_1d37f8;
    }
    ctx->pc = 0x1D37F0u;
    SET_GPR_U32(ctx, 31, 0x1D37F8u);
    ctx->pc = 0x1D37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37F0u;
    // 0x1d37f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D37F0u, 0x1D37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37F8u;
label_1d37f8:
    // 0x1d37f8: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x1d37f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d37fc:
    // 0x1d37fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3800:
    // 0x1d3800: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1d3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3804:
    // 0x1d3804: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d3808:
    // 0x1d3808: 0x46001541  sub.s       $f21, $f2, $f0
    ctx->pc = 0x1d3808u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1d380c:
    // 0x1d380c: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x1d380cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_1d3810:
    // 0x1d3810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d3810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d3814:
    // 0x1d3814: 0xc068864  jal         func_1A2190
label_1d3818:
    if (ctx->pc == 0x1D3818u) {
        ctx->pc = 0x1D3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3814u;
        // 0x1d3818: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D381Cu;
        goto label_1d381c;
    }
    ctx->pc = 0x1D3814u;
    SET_GPR_U32(ctx, 31, 0x1D381Cu);
    ctx->pc = 0x1D3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3814u;
    // 0x1d3818: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x1D3814u, 0x1D381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D381Cu;
label_1d381c:
    // 0x1d381c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1d381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3820:
    // 0x1d3820: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d3820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d3824:
    // 0x1d3824: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x1d3824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_1d3828:
    // 0x1d3828: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d382c:
    // 0x1d382c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d382cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1d3830:
    // 0x1d3830: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1d3830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d3834:
    // 0x1d3834: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d3834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1d3838:
    // 0x1d3838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d383c:
    // 0x1d383c: 0x461420c2  mul.s       $f3, $f4, $f20
    ctx->pc = 0x1d383cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_1d3840:
    // 0x1d3840: 0x46191080  add.s       $f2, $f2, $f25
    ctx->pc = 0x1d3840u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[25]);
label_1d3844:
    // 0x1d3844: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d3844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3848:
    // 0x1d3848: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d3848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d384c:
    // 0x1d384c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d384cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d3850:
    // 0x1d3850: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d3850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d3854:
    // 0x1d3854: 0x46040540  add.s       $f21, $f0, $f4
    ctx->pc = 0x1d3854u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1d3858:
    // 0x1d3858: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d3858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d385c:
    // 0x1d385c: 0xc06e4ea  jal         func_1B93A8
label_1d3860:
    if (ctx->pc == 0x1D3860u) {
        ctx->pc = 0x1D3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D385Cu;
        // 0x1d3860: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3864u;
        goto label_1d3864;
    }
    ctx->pc = 0x1D385Cu;
    SET_GPR_U32(ctx, 31, 0x1D3864u);
    ctx->pc = 0x1D3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D385Cu;
    // 0x1d3860: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1D385Cu, 0x1D3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3864u;
label_1d3864:
    // 0x1d3864: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1d3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3868:
    // 0x1d3868: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d3868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d386c:
    // 0x1d386c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1d386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d3870:
    // 0x1d3870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3874:
    // 0x1d3874: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x1d3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3878:
    // 0x1d3878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d387c:
    // 0x1d387c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1d387cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1d3880:
    // 0x1d3880: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d3880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3884:
    // 0x1d3884: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d3884u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1d3888:
    // 0x1d3888: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d3888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d388c:
    // 0x1d388c: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x1d388cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_1d3890:
    // 0x1d3890: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d3890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d3894:
    // 0x1d3894: 0xc06e4dc  jal         func_1B9370
label_1d3898:
    if (ctx->pc == 0x1D3898u) {
        ctx->pc = 0x1D3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3894u;
        // 0x1d3898: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D389Cu;
        goto label_1d389c;
    }
    ctx->pc = 0x1D3894u;
    SET_GPR_U32(ctx, 31, 0x1D389Cu);
    ctx->pc = 0x1D3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3894u;
    // 0x1d3898: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1D3894u, 0x1D389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D389Cu;
label_1d389c:
    // 0x1d389c: 0xc06e552  jal         func_1B9548
label_1d38a0:
    if (ctx->pc == 0x1D38A0u) {
        ctx->pc = 0x1D38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D389Cu;
        // 0x1d38a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D38A4u;
        goto label_1d38a4;
    }
    ctx->pc = 0x1D389Cu;
    SET_GPR_U32(ctx, 31, 0x1D38A4u);
    ctx->pc = 0x1D38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D389Cu;
    // 0x1d38a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1D389Cu, 0x1D38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38A4u;
label_1d38a4:
    // 0x1d38a4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1d38a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d38a8:
    // 0x1d38a8: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x1d38a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d38ac:
    // 0x1d38ac: 0x0  nop
    ctx->pc = 0x1d38acu;
    // NOP
label_1d38b0:
    // 0x1d38b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1d38b4:
    if (ctx->pc == 0x1D38B4u) {
        ctx->pc = 0x1D38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B0u;
        // 0x1d38b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D38B8u;
        goto label_1d38b8;
    }
    ctx->pc = 0x1D38B0u;
    {
        const bool branch_taken_0x1d38b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B0u;
        // 0x1d38b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38b0) {
            ctx->pc = 0x1D38BCu;
            goto label_1d38bc;
        }
    }
    ctx->pc = 0x1D38B8u;
label_1d38b8:
    // 0x1d38b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d38b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d38bc:
    // 0x1d38bc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d38bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d38c0:
    // 0x1d38c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d38c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d38c4:
    // 0x1d38c4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d38c8:
    // 0x1d38c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d38cc:
    // 0x1d38cc: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1d38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_1d38d0:
    // 0x1d38d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d38d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d38d4:
    // 0x1d38d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d38d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d38d8:
    // 0x1d38d8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d38d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1d38dc:
    // 0x1d38dc: 0xc06e4dc  jal         func_1B9370
label_1d38e0:
    if (ctx->pc == 0x1D38E0u) {
        ctx->pc = 0x1D38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38DCu;
        // 0x1d38e0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D38E4u;
        goto label_1d38e4;
    }
    ctx->pc = 0x1D38DCu;
    SET_GPR_U32(ctx, 31, 0x1D38E4u);
    ctx->pc = 0x1D38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38DCu;
    // 0x1d38e0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1D38DCu, 0x1D38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38E4u;
label_1d38e4:
    // 0x1d38e4: 0xc06e552  jal         func_1B9548
label_1d38e8:
    if (ctx->pc == 0x1D38E8u) {
        ctx->pc = 0x1D38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38E4u;
        // 0x1d38e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D38ECu;
        goto label_1d38ec;
    }
    ctx->pc = 0x1D38E4u;
    SET_GPR_U32(ctx, 31, 0x1D38ECu);
    ctx->pc = 0x1D38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38E4u;
    // 0x1d38e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1D38E4u, 0x1D38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38ECu;
label_1d38ec:
    // 0x1d38ec: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x1d38ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d38f0:
    // 0x1d38f0: 0x46152834  c.lt.s      $f5, $f21
    ctx->pc = 0x1d38f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d38f4:
    // 0x1d38f4: 0x0  nop
    ctx->pc = 0x1d38f4u;
    // NOP
label_1d38f8:
    // 0x1d38f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1d38fc:
    if (ctx->pc == 0x1D38FCu) {
        ctx->pc = 0x1D38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38F8u;
        // 0x1d38fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3900u;
        goto label_1d3900;
    }
    ctx->pc = 0x1D38F8u;
    {
        const bool branch_taken_0x1d38f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38F8u;
        // 0x1d38fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38f8) {
            ctx->pc = 0x1D3904u;
            goto label_1d3904;
        }
    }
    ctx->pc = 0x1D3900u;
label_1d3900:
    // 0x1d3900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3904:
    // 0x1d3904: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1d3904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1d3908:
    // 0x1d3908: 0x26700380  addiu       $s0, $s3, 0x380
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
label_1d390c:
    // 0x1d390c: 0x3c013d03  lui         $at, 0x3D03
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15619 << 16));
label_1d3910:
    // 0x1d3910: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d3910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d3914:
    // 0x1d3914: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d3914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d3918:
    // 0x1d3918: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d391c:
    // 0x1d391c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1d391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d3920:
    // 0x1d3920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3924:
    // 0x1d3924: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x1d3924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3928:
    // 0x1d3928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d392c:
    // 0x1d392c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3930:
    // 0x1d3930: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3934:
    // 0x1d3934: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x1d3934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_1d3938:
    // 0x1d3938: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x1d3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d393c:
    // 0x1d393c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d393cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d3940:
    // 0x1d3940: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1d3940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_1d3944:
    // 0x1d3944: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x1d3944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_1d3948:
    // 0x1d3948: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d3948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d394c:
    // 0x1d394c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d394cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1d3950:
    // 0x1d3950: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d3950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d3954:
    // 0x1d3954: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1d3954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1d3958:
    // 0x1d3958: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1d3958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1d395c:
    // 0x1d395c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d395cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d3960:
    // 0x1d3960: 0xc073464  jal         func_1CD190
label_1d3964:
    if (ctx->pc == 0x1D3964u) {
        ctx->pc = 0x1D3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3960u;
        // 0x1d3964: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3968u;
        goto label_1d3968;
    }
    ctx->pc = 0x1D3960u;
    SET_GPR_U32(ctx, 31, 0x1D3968u);
    ctx->pc = 0x1D3964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3960u;
    // 0x1d3964: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D3960u, 0x1D3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3968u;
label_1d3968:
    // 0x1d3968: 0xc0734a0  jal         func_1CD280
label_1d396c:
    if (ctx->pc == 0x1D396Cu) {
        ctx->pc = 0x1D396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3968u;
        // 0x1d396c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3970u;
        goto label_1d3970;
    }
    ctx->pc = 0x1D3968u;
    SET_GPR_U32(ctx, 31, 0x1D3970u);
    ctx->pc = 0x1D396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3968u;
    // 0x1d396c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D3968u, 0x1D3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3970u;
label_1d3970:
    // 0x1d3970: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1d3970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_1d3974:
    // 0x1d3974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d3978:
    if (ctx->pc == 0x1D3978u) {
        ctx->pc = 0x1D3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3974u;
        // 0x1d3978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D397Cu;
        goto label_1d397c;
    }
    ctx->pc = 0x1D3974u;
    {
        const bool branch_taken_0x1d3974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3974u;
        // 0x1d3978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3974) {
            ctx->pc = 0x1D3990u;
            goto label_1d3990;
        }
    }
    ctx->pc = 0x1D397Cu;
label_1d397c:
    // 0x1d397c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3980:
    // 0x1d3980: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1d3980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3984:
    // 0x1d3984: 0x0  nop
    ctx->pc = 0x1d3984u;
    // NOP
label_1d3988:
    // 0x1d3988: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1d398c:
    if (ctx->pc == 0x1D398Cu) {
        ctx->pc = 0x1D398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3988u;
        // 0x1d398c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3990u;
        goto label_1d3990;
    }
    ctx->pc = 0x1D3988u;
    {
        const bool branch_taken_0x1d3988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3988) {
            ctx->pc = 0x1D398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3988u;
            // 0x1d398c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3990u;
            goto label_1d3990;
        }
    }
    ctx->pc = 0x1D3990u;
label_1d3990:
    // 0x1d3990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3994:
    // 0x1d3994: 0xc07346e  jal         func_1CD1B8
label_1d3998:
    if (ctx->pc == 0x1D3998u) {
        ctx->pc = 0x1D3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3994u;
        // 0x1d3998: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D399Cu;
        goto label_1d399c;
    }
    ctx->pc = 0x1D3994u;
    SET_GPR_U32(ctx, 31, 0x1D399Cu);
    ctx->pc = 0x1D3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3994u;
    // 0x1d3998: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1B8u, 0x1D3994u, 0x1D399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D399Cu;
label_1d399c:
    // 0x1d399c: 0x26700280  addiu       $s0, $s3, 0x280
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_1d39a0:
    // 0x1d39a0: 0x7a4200b0  lq          $v0, 0xB0($s2)
    ctx->pc = 0x1d39a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 176)));
label_1d39a4:
    // 0x1d39a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d39a8:
    // 0x1d39a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1d39ac:
    // 0x1d39ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d39b0:
    // 0x1d39b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d39b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d39b4:
    // 0x1d39b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d39b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d39b8:
    // 0x1d39b8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1d39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1d39bc:
    // 0x1d39bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d39c0:
    // 0x1d39c0: 0xc624a190  lwc1        $f4, -0x5E70($s1)
    ctx->pc = 0x1d39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294943120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d39c4:
    // 0x1d39c4: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1d39c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d39c8:
    // 0x1d39c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d39c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d39cc:
    // 0x1d39cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d39ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d39d0:
    // 0x1d39d0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1d39d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1d39d4:
    // 0x1d39d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d39d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d39d8:
    // 0x1d39d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d39d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d39dc:
    // 0x1d39dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d39dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d39e0:
    // 0x1d39e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d39e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d39e4:
    // 0x1d39e4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1d39e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1d39e8:
    // 0x1d39e8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d39e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d39ec:
    // 0x1d39ec: 0xc068818  jal         func_1A2060
label_1d39f0:
    if (ctx->pc == 0x1D39F0u) {
        ctx->pc = 0x1D39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39ECu;
        // 0x1d39f0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D39F4u;
        goto label_1d39f4;
    }
    ctx->pc = 0x1D39ECu;
    SET_GPR_U32(ctx, 31, 0x1D39F4u);
    ctx->pc = 0x1D39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39ECu;
    // 0x1d39f0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D39ECu, 0x1D39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39F4u;
label_1d39f4:
    // 0x1d39f4: 0xc07346c  jal         func_1CD1B0
label_1d39f8:
    if (ctx->pc == 0x1D39F8u) {
        ctx->pc = 0x1D39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39F4u;
        // 0x1d39f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D39FCu;
        goto label_1d39fc;
    }
    ctx->pc = 0x1D39F4u;
    SET_GPR_U32(ctx, 31, 0x1D39FCu);
    ctx->pc = 0x1D39F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39F4u;
    // 0x1d39f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1B0u, 0x1D39F4u, 0x1D39FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39FCu;
label_1d39fc:
    // 0x1d39fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d39fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1d3a00:
    // 0x1d3a00: 0xc06886e  jal         func_1A21B8
label_1d3a04:
    if (ctx->pc == 0x1D3A04u) {
        ctx->pc = 0x1D3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A00u;
        // 0x1d3a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A08u;
        goto label_1d3a08;
    }
    ctx->pc = 0x1D3A00u;
    SET_GPR_U32(ctx, 31, 0x1D3A08u);
    ctx->pc = 0x1D3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A00u;
    // 0x1d3a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1D3A00u, 0x1D3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A08u;
label_1d3a08:
    // 0x1d3a08: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1d3a0c:
    // 0x1d3a0c: 0xc62da190  lwc1        $f13, -0x5E70($s1)
    ctx->pc = 0x1d3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294943120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d3a10:
    // 0x1d3a10: 0xc44ca18c  lwc1        $f12, -0x5E74($v0)
    ctx->pc = 0x1d3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d3a14:
    // 0x1d3a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3a18:
    // 0x1d3a18: 0xc068848  jal         func_1A2120
label_1d3a1c:
    if (ctx->pc == 0x1D3A1Cu) {
        ctx->pc = 0x1D3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A18u;
        // 0x1d3a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A20u;
        goto label_1d3a20;
    }
    ctx->pc = 0x1D3A18u;
    SET_GPR_U32(ctx, 31, 0x1D3A20u);
    ctx->pc = 0x1D3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A18u;
    // 0x1d3a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D3A18u, 0x1D3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A20u;
label_1d3a20:
    // 0x1d3a20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d3a24:
    // 0x1d3a24: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1d3a28:
    // 0x1d3a28: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1d3a2c:
    // 0x1d3a2c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d3a2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d3a30:
    // 0x1d3a30: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d3a34:
    // 0x1d3a34: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1d3a38:
    // 0x1d3a38: 0xa0f809  jalr        $a1
label_1d3a3c:
    if (ctx->pc == 0x1D3A3Cu) {
        ctx->pc = 0x1D3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A38u;
        // 0x1d3a3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A40u;
        goto label_1d3a40;
    }
    ctx->pc = 0x1D3A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D3A40u);
        ctx->pc = 0x1D3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A38u;
        // 0x1d3a3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A38u, 0x1D3A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3A40u;
label_1d3a40:
    // 0x1d3a40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d3a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3a44:
    // 0x1d3a44: 0x0  nop
    ctx->pc = 0x1d3a44u;
    // NOP
label_1d3a48:
    // 0x1d3a48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3a4c:
    // 0x1d3a4c: 0x0  nop
    ctx->pc = 0x1d3a4cu;
    // NOP
label_1d3a50:
    // 0x1d3a50: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1d3a54:
    if (ctx->pc == 0x1D3A54u) {
        ctx->pc = 0x1D3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A50u;
        // 0x1d3a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A58u;
        goto label_1d3a58;
    }
    ctx->pc = 0x1D3A50u;
    {
        const bool branch_taken_0x1d3a50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A50u;
        // 0x1d3a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a50) {
            ctx->pc = 0x1D3A5Cu;
            goto label_1d3a5c;
        }
    }
    ctx->pc = 0x1D3A58u;
label_1d3a58:
    // 0x1d3a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3a5c:
    // 0x1d3a5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d3a60:
    // 0x1d3a60: 0x40f809  jalr        $v0
label_1d3a64:
    if (ctx->pc == 0x1D3A64u) {
        ctx->pc = 0x1D3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A60u;
        // 0x1d3a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A68u;
        goto label_1d3a68;
    }
    ctx->pc = 0x1D3A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3A68u);
        ctx->pc = 0x1D3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A60u;
        // 0x1d3a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A60u, 0x1D3A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3A68u;
label_1d3a68:
    // 0x1d3a68: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1d3a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d3a6c:
    // 0x1d3a6c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1d3a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d3a70:
    // 0x1d3a70: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1d3a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d3a74:
    // 0x1d3a74: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1d3a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d3a78:
    // 0x1d3a78: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1d3a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d3a7c:
    // 0x1d3a7c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d3a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d3a80:
    // 0x1d3a80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d3a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d3a84:
    // 0x1d3a84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d3a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d3a88:
    // 0x1d3a88: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x1d3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1d3a8c:
    // 0x1d3a8c: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x1d3a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1d3a90:
    // 0x1d3a90: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1d3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1d3a94:
    // 0x1d3a94: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1d3a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d3a98:
    // 0x1d3a98: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1d3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d3a9c:
    // 0x1d3a9c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1d3a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d3aa0:
    // 0x1d3aa0: 0x3e00008  jr          $ra
label_1d3aa4:
    if (ctx->pc == 0x1D3AA4u) {
        ctx->pc = 0x1D3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AA0u;
        // 0x1d3aa4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AA8u;
        goto label_fallthrough_0x1d3aa0;
    }
    ctx->pc = 0x1D3AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AA0u;
        // 0x1d3aa4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3aa0:
    ctx->pc = 0x1D3AA8u;
}
