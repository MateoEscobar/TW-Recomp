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

// Function: sub_002A3498
// Address: 0x2a3498 - 0x2a3d90
void sub_002A3498_0x2a3498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3498_0x2a3498");
#endif

    switch (ctx->pc) {
        case 0x2a3498u: goto label_2a3498;
        case 0x2a349cu: goto label_2a349c;
        case 0x2a34a0u: goto label_2a34a0;
        case 0x2a34a4u: goto label_2a34a4;
        case 0x2a34a8u: goto label_2a34a8;
        case 0x2a34acu: goto label_2a34ac;
        case 0x2a34b0u: goto label_2a34b0;
        case 0x2a34b4u: goto label_2a34b4;
        case 0x2a34b8u: goto label_2a34b8;
        case 0x2a34bcu: goto label_2a34bc;
        case 0x2a34c0u: goto label_2a34c0;
        case 0x2a34c4u: goto label_2a34c4;
        case 0x2a34c8u: goto label_2a34c8;
        case 0x2a34ccu: goto label_2a34cc;
        case 0x2a34d0u: goto label_2a34d0;
        case 0x2a34d4u: goto label_2a34d4;
        case 0x2a34d8u: goto label_2a34d8;
        case 0x2a34dcu: goto label_2a34dc;
        case 0x2a34e0u: goto label_2a34e0;
        case 0x2a34e4u: goto label_2a34e4;
        case 0x2a34e8u: goto label_2a34e8;
        case 0x2a34ecu: goto label_2a34ec;
        case 0x2a34f0u: goto label_2a34f0;
        case 0x2a34f4u: goto label_2a34f4;
        case 0x2a34f8u: goto label_2a34f8;
        case 0x2a34fcu: goto label_2a34fc;
        case 0x2a3500u: goto label_2a3500;
        case 0x2a3504u: goto label_2a3504;
        case 0x2a3508u: goto label_2a3508;
        case 0x2a350cu: goto label_2a350c;
        case 0x2a3510u: goto label_2a3510;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a3518u: goto label_2a3518;
        case 0x2a351cu: goto label_2a351c;
        case 0x2a3520u: goto label_2a3520;
        case 0x2a3524u: goto label_2a3524;
        case 0x2a3528u: goto label_2a3528;
        case 0x2a352cu: goto label_2a352c;
        case 0x2a3530u: goto label_2a3530;
        case 0x2a3534u: goto label_2a3534;
        case 0x2a3538u: goto label_2a3538;
        case 0x2a353cu: goto label_2a353c;
        case 0x2a3540u: goto label_2a3540;
        case 0x2a3544u: goto label_2a3544;
        case 0x2a3548u: goto label_2a3548;
        case 0x2a354cu: goto label_2a354c;
        case 0x2a3550u: goto label_2a3550;
        case 0x2a3554u: goto label_2a3554;
        case 0x2a3558u: goto label_2a3558;
        case 0x2a355cu: goto label_2a355c;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3564u: goto label_2a3564;
        case 0x2a3568u: goto label_2a3568;
        case 0x2a356cu: goto label_2a356c;
        case 0x2a3570u: goto label_2a3570;
        case 0x2a3574u: goto label_2a3574;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a357cu: goto label_2a357c;
        case 0x2a3580u: goto label_2a3580;
        case 0x2a3584u: goto label_2a3584;
        case 0x2a3588u: goto label_2a3588;
        case 0x2a358cu: goto label_2a358c;
        case 0x2a3590u: goto label_2a3590;
        case 0x2a3594u: goto label_2a3594;
        case 0x2a3598u: goto label_2a3598;
        case 0x2a359cu: goto label_2a359c;
        case 0x2a35a0u: goto label_2a35a0;
        case 0x2a35a4u: goto label_2a35a4;
        case 0x2a35a8u: goto label_2a35a8;
        case 0x2a35acu: goto label_2a35ac;
        case 0x2a35b0u: goto label_2a35b0;
        case 0x2a35b4u: goto label_2a35b4;
        case 0x2a35b8u: goto label_2a35b8;
        case 0x2a35bcu: goto label_2a35bc;
        case 0x2a35c0u: goto label_2a35c0;
        case 0x2a35c4u: goto label_2a35c4;
        case 0x2a35c8u: goto label_2a35c8;
        case 0x2a35ccu: goto label_2a35cc;
        case 0x2a35d0u: goto label_2a35d0;
        case 0x2a35d4u: goto label_2a35d4;
        case 0x2a35d8u: goto label_2a35d8;
        case 0x2a35dcu: goto label_2a35dc;
        case 0x2a35e0u: goto label_2a35e0;
        case 0x2a35e4u: goto label_2a35e4;
        case 0x2a35e8u: goto label_2a35e8;
        case 0x2a35ecu: goto label_2a35ec;
        case 0x2a35f0u: goto label_2a35f0;
        case 0x2a35f4u: goto label_2a35f4;
        case 0x2a35f8u: goto label_2a35f8;
        case 0x2a35fcu: goto label_2a35fc;
        case 0x2a3600u: goto label_2a3600;
        case 0x2a3604u: goto label_2a3604;
        case 0x2a3608u: goto label_2a3608;
        case 0x2a360cu: goto label_2a360c;
        case 0x2a3610u: goto label_2a3610;
        case 0x2a3614u: goto label_2a3614;
        case 0x2a3618u: goto label_2a3618;
        case 0x2a361cu: goto label_2a361c;
        case 0x2a3620u: goto label_2a3620;
        case 0x2a3624u: goto label_2a3624;
        case 0x2a3628u: goto label_2a3628;
        case 0x2a362cu: goto label_2a362c;
        case 0x2a3630u: goto label_2a3630;
        case 0x2a3634u: goto label_2a3634;
        case 0x2a3638u: goto label_2a3638;
        case 0x2a363cu: goto label_2a363c;
        case 0x2a3640u: goto label_2a3640;
        case 0x2a3644u: goto label_2a3644;
        case 0x2a3648u: goto label_2a3648;
        case 0x2a364cu: goto label_2a364c;
        case 0x2a3650u: goto label_2a3650;
        case 0x2a3654u: goto label_2a3654;
        case 0x2a3658u: goto label_2a3658;
        case 0x2a365cu: goto label_2a365c;
        case 0x2a3660u: goto label_2a3660;
        case 0x2a3664u: goto label_2a3664;
        case 0x2a3668u: goto label_2a3668;
        case 0x2a366cu: goto label_2a366c;
        case 0x2a3670u: goto label_2a3670;
        case 0x2a3674u: goto label_2a3674;
        case 0x2a3678u: goto label_2a3678;
        case 0x2a367cu: goto label_2a367c;
        case 0x2a3680u: goto label_2a3680;
        case 0x2a3684u: goto label_2a3684;
        case 0x2a3688u: goto label_2a3688;
        case 0x2a368cu: goto label_2a368c;
        case 0x2a3690u: goto label_2a3690;
        case 0x2a3694u: goto label_2a3694;
        case 0x2a3698u: goto label_2a3698;
        case 0x2a369cu: goto label_2a369c;
        case 0x2a36a0u: goto label_2a36a0;
        case 0x2a36a4u: goto label_2a36a4;
        case 0x2a36a8u: goto label_2a36a8;
        case 0x2a36acu: goto label_2a36ac;
        case 0x2a36b0u: goto label_2a36b0;
        case 0x2a36b4u: goto label_2a36b4;
        case 0x2a36b8u: goto label_2a36b8;
        case 0x2a36bcu: goto label_2a36bc;
        case 0x2a36c0u: goto label_2a36c0;
        case 0x2a36c4u: goto label_2a36c4;
        case 0x2a36c8u: goto label_2a36c8;
        case 0x2a36ccu: goto label_2a36cc;
        case 0x2a36d0u: goto label_2a36d0;
        case 0x2a36d4u: goto label_2a36d4;
        case 0x2a36d8u: goto label_2a36d8;
        case 0x2a36dcu: goto label_2a36dc;
        case 0x2a36e0u: goto label_2a36e0;
        case 0x2a36e4u: goto label_2a36e4;
        case 0x2a36e8u: goto label_2a36e8;
        case 0x2a36ecu: goto label_2a36ec;
        case 0x2a36f0u: goto label_2a36f0;
        case 0x2a36f4u: goto label_2a36f4;
        case 0x2a36f8u: goto label_2a36f8;
        case 0x2a36fcu: goto label_2a36fc;
        case 0x2a3700u: goto label_2a3700;
        case 0x2a3704u: goto label_2a3704;
        case 0x2a3708u: goto label_2a3708;
        case 0x2a370cu: goto label_2a370c;
        case 0x2a3710u: goto label_2a3710;
        case 0x2a3714u: goto label_2a3714;
        case 0x2a3718u: goto label_2a3718;
        case 0x2a371cu: goto label_2a371c;
        case 0x2a3720u: goto label_2a3720;
        case 0x2a3724u: goto label_2a3724;
        case 0x2a3728u: goto label_2a3728;
        case 0x2a372cu: goto label_2a372c;
        case 0x2a3730u: goto label_2a3730;
        case 0x2a3734u: goto label_2a3734;
        case 0x2a3738u: goto label_2a3738;
        case 0x2a373cu: goto label_2a373c;
        case 0x2a3740u: goto label_2a3740;
        case 0x2a3744u: goto label_2a3744;
        case 0x2a3748u: goto label_2a3748;
        case 0x2a374cu: goto label_2a374c;
        case 0x2a3750u: goto label_2a3750;
        case 0x2a3754u: goto label_2a3754;
        case 0x2a3758u: goto label_2a3758;
        case 0x2a375cu: goto label_2a375c;
        case 0x2a3760u: goto label_2a3760;
        case 0x2a3764u: goto label_2a3764;
        case 0x2a3768u: goto label_2a3768;
        case 0x2a376cu: goto label_2a376c;
        case 0x2a3770u: goto label_2a3770;
        case 0x2a3774u: goto label_2a3774;
        case 0x2a3778u: goto label_2a3778;
        case 0x2a377cu: goto label_2a377c;
        case 0x2a3780u: goto label_2a3780;
        case 0x2a3784u: goto label_2a3784;
        case 0x2a3788u: goto label_2a3788;
        case 0x2a378cu: goto label_2a378c;
        case 0x2a3790u: goto label_2a3790;
        case 0x2a3794u: goto label_2a3794;
        case 0x2a3798u: goto label_2a3798;
        case 0x2a379cu: goto label_2a379c;
        case 0x2a37a0u: goto label_2a37a0;
        case 0x2a37a4u: goto label_2a37a4;
        case 0x2a37a8u: goto label_2a37a8;
        case 0x2a37acu: goto label_2a37ac;
        case 0x2a37b0u: goto label_2a37b0;
        case 0x2a37b4u: goto label_2a37b4;
        case 0x2a37b8u: goto label_2a37b8;
        case 0x2a37bcu: goto label_2a37bc;
        case 0x2a37c0u: goto label_2a37c0;
        case 0x2a37c4u: goto label_2a37c4;
        case 0x2a37c8u: goto label_2a37c8;
        case 0x2a37ccu: goto label_2a37cc;
        case 0x2a37d0u: goto label_2a37d0;
        case 0x2a37d4u: goto label_2a37d4;
        case 0x2a37d8u: goto label_2a37d8;
        case 0x2a37dcu: goto label_2a37dc;
        case 0x2a37e0u: goto label_2a37e0;
        case 0x2a37e4u: goto label_2a37e4;
        case 0x2a37e8u: goto label_2a37e8;
        case 0x2a37ecu: goto label_2a37ec;
        case 0x2a37f0u: goto label_2a37f0;
        case 0x2a37f4u: goto label_2a37f4;
        case 0x2a37f8u: goto label_2a37f8;
        case 0x2a37fcu: goto label_2a37fc;
        case 0x2a3800u: goto label_2a3800;
        case 0x2a3804u: goto label_2a3804;
        case 0x2a3808u: goto label_2a3808;
        case 0x2a380cu: goto label_2a380c;
        case 0x2a3810u: goto label_2a3810;
        case 0x2a3814u: goto label_2a3814;
        case 0x2a3818u: goto label_2a3818;
        case 0x2a381cu: goto label_2a381c;
        case 0x2a3820u: goto label_2a3820;
        case 0x2a3824u: goto label_2a3824;
        case 0x2a3828u: goto label_2a3828;
        case 0x2a382cu: goto label_2a382c;
        case 0x2a3830u: goto label_2a3830;
        case 0x2a3834u: goto label_2a3834;
        case 0x2a3838u: goto label_2a3838;
        case 0x2a383cu: goto label_2a383c;
        case 0x2a3840u: goto label_2a3840;
        case 0x2a3844u: goto label_2a3844;
        case 0x2a3848u: goto label_2a3848;
        case 0x2a384cu: goto label_2a384c;
        case 0x2a3850u: goto label_2a3850;
        case 0x2a3854u: goto label_2a3854;
        case 0x2a3858u: goto label_2a3858;
        case 0x2a385cu: goto label_2a385c;
        case 0x2a3860u: goto label_2a3860;
        case 0x2a3864u: goto label_2a3864;
        case 0x2a3868u: goto label_2a3868;
        case 0x2a386cu: goto label_2a386c;
        case 0x2a3870u: goto label_2a3870;
        case 0x2a3874u: goto label_2a3874;
        case 0x2a3878u: goto label_2a3878;
        case 0x2a387cu: goto label_2a387c;
        case 0x2a3880u: goto label_2a3880;
        case 0x2a3884u: goto label_2a3884;
        case 0x2a3888u: goto label_2a3888;
        case 0x2a388cu: goto label_2a388c;
        case 0x2a3890u: goto label_2a3890;
        case 0x2a3894u: goto label_2a3894;
        case 0x2a3898u: goto label_2a3898;
        case 0x2a389cu: goto label_2a389c;
        case 0x2a38a0u: goto label_2a38a0;
        case 0x2a38a4u: goto label_2a38a4;
        case 0x2a38a8u: goto label_2a38a8;
        case 0x2a38acu: goto label_2a38ac;
        case 0x2a38b0u: goto label_2a38b0;
        case 0x2a38b4u: goto label_2a38b4;
        case 0x2a38b8u: goto label_2a38b8;
        case 0x2a38bcu: goto label_2a38bc;
        case 0x2a38c0u: goto label_2a38c0;
        case 0x2a38c4u: goto label_2a38c4;
        case 0x2a38c8u: goto label_2a38c8;
        case 0x2a38ccu: goto label_2a38cc;
        case 0x2a38d0u: goto label_2a38d0;
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38d8u: goto label_2a38d8;
        case 0x2a38dcu: goto label_2a38dc;
        case 0x2a38e0u: goto label_2a38e0;
        case 0x2a38e4u: goto label_2a38e4;
        case 0x2a38e8u: goto label_2a38e8;
        case 0x2a38ecu: goto label_2a38ec;
        case 0x2a38f0u: goto label_2a38f0;
        case 0x2a38f4u: goto label_2a38f4;
        case 0x2a38f8u: goto label_2a38f8;
        case 0x2a38fcu: goto label_2a38fc;
        case 0x2a3900u: goto label_2a3900;
        case 0x2a3904u: goto label_2a3904;
        case 0x2a3908u: goto label_2a3908;
        case 0x2a390cu: goto label_2a390c;
        case 0x2a3910u: goto label_2a3910;
        case 0x2a3914u: goto label_2a3914;
        case 0x2a3918u: goto label_2a3918;
        case 0x2a391cu: goto label_2a391c;
        case 0x2a3920u: goto label_2a3920;
        case 0x2a3924u: goto label_2a3924;
        case 0x2a3928u: goto label_2a3928;
        case 0x2a392cu: goto label_2a392c;
        case 0x2a3930u: goto label_2a3930;
        case 0x2a3934u: goto label_2a3934;
        case 0x2a3938u: goto label_2a3938;
        case 0x2a393cu: goto label_2a393c;
        case 0x2a3940u: goto label_2a3940;
        case 0x2a3944u: goto label_2a3944;
        case 0x2a3948u: goto label_2a3948;
        case 0x2a394cu: goto label_2a394c;
        case 0x2a3950u: goto label_2a3950;
        case 0x2a3954u: goto label_2a3954;
        case 0x2a3958u: goto label_2a3958;
        case 0x2a395cu: goto label_2a395c;
        case 0x2a3960u: goto label_2a3960;
        case 0x2a3964u: goto label_2a3964;
        case 0x2a3968u: goto label_2a3968;
        case 0x2a396cu: goto label_2a396c;
        case 0x2a3970u: goto label_2a3970;
        case 0x2a3974u: goto label_2a3974;
        case 0x2a3978u: goto label_2a3978;
        case 0x2a397cu: goto label_2a397c;
        case 0x2a3980u: goto label_2a3980;
        case 0x2a3984u: goto label_2a3984;
        case 0x2a3988u: goto label_2a3988;
        case 0x2a398cu: goto label_2a398c;
        case 0x2a3990u: goto label_2a3990;
        case 0x2a3994u: goto label_2a3994;
        case 0x2a3998u: goto label_2a3998;
        case 0x2a399cu: goto label_2a399c;
        case 0x2a39a0u: goto label_2a39a0;
        case 0x2a39a4u: goto label_2a39a4;
        case 0x2a39a8u: goto label_2a39a8;
        case 0x2a39acu: goto label_2a39ac;
        case 0x2a39b0u: goto label_2a39b0;
        case 0x2a39b4u: goto label_2a39b4;
        case 0x2a39b8u: goto label_2a39b8;
        case 0x2a39bcu: goto label_2a39bc;
        case 0x2a39c0u: goto label_2a39c0;
        case 0x2a39c4u: goto label_2a39c4;
        case 0x2a39c8u: goto label_2a39c8;
        case 0x2a39ccu: goto label_2a39cc;
        case 0x2a39d0u: goto label_2a39d0;
        case 0x2a39d4u: goto label_2a39d4;
        case 0x2a39d8u: goto label_2a39d8;
        case 0x2a39dcu: goto label_2a39dc;
        case 0x2a39e0u: goto label_2a39e0;
        case 0x2a39e4u: goto label_2a39e4;
        case 0x2a39e8u: goto label_2a39e8;
        case 0x2a39ecu: goto label_2a39ec;
        case 0x2a39f0u: goto label_2a39f0;
        case 0x2a39f4u: goto label_2a39f4;
        case 0x2a39f8u: goto label_2a39f8;
        case 0x2a39fcu: goto label_2a39fc;
        case 0x2a3a00u: goto label_2a3a00;
        case 0x2a3a04u: goto label_2a3a04;
        case 0x2a3a08u: goto label_2a3a08;
        case 0x2a3a0cu: goto label_2a3a0c;
        case 0x2a3a10u: goto label_2a3a10;
        case 0x2a3a14u: goto label_2a3a14;
        case 0x2a3a18u: goto label_2a3a18;
        case 0x2a3a1cu: goto label_2a3a1c;
        case 0x2a3a20u: goto label_2a3a20;
        case 0x2a3a24u: goto label_2a3a24;
        case 0x2a3a28u: goto label_2a3a28;
        case 0x2a3a2cu: goto label_2a3a2c;
        case 0x2a3a30u: goto label_2a3a30;
        case 0x2a3a34u: goto label_2a3a34;
        case 0x2a3a38u: goto label_2a3a38;
        case 0x2a3a3cu: goto label_2a3a3c;
        case 0x2a3a40u: goto label_2a3a40;
        case 0x2a3a44u: goto label_2a3a44;
        case 0x2a3a48u: goto label_2a3a48;
        case 0x2a3a4cu: goto label_2a3a4c;
        case 0x2a3a50u: goto label_2a3a50;
        case 0x2a3a54u: goto label_2a3a54;
        case 0x2a3a58u: goto label_2a3a58;
        case 0x2a3a5cu: goto label_2a3a5c;
        case 0x2a3a60u: goto label_2a3a60;
        case 0x2a3a64u: goto label_2a3a64;
        case 0x2a3a68u: goto label_2a3a68;
        case 0x2a3a6cu: goto label_2a3a6c;
        case 0x2a3a70u: goto label_2a3a70;
        case 0x2a3a74u: goto label_2a3a74;
        case 0x2a3a78u: goto label_2a3a78;
        case 0x2a3a7cu: goto label_2a3a7c;
        case 0x2a3a80u: goto label_2a3a80;
        case 0x2a3a84u: goto label_2a3a84;
        case 0x2a3a88u: goto label_2a3a88;
        case 0x2a3a8cu: goto label_2a3a8c;
        case 0x2a3a90u: goto label_2a3a90;
        case 0x2a3a94u: goto label_2a3a94;
        case 0x2a3a98u: goto label_2a3a98;
        case 0x2a3a9cu: goto label_2a3a9c;
        case 0x2a3aa0u: goto label_2a3aa0;
        case 0x2a3aa4u: goto label_2a3aa4;
        case 0x2a3aa8u: goto label_2a3aa8;
        case 0x2a3aacu: goto label_2a3aac;
        case 0x2a3ab0u: goto label_2a3ab0;
        case 0x2a3ab4u: goto label_2a3ab4;
        case 0x2a3ab8u: goto label_2a3ab8;
        case 0x2a3abcu: goto label_2a3abc;
        case 0x2a3ac0u: goto label_2a3ac0;
        case 0x2a3ac4u: goto label_2a3ac4;
        case 0x2a3ac8u: goto label_2a3ac8;
        case 0x2a3accu: goto label_2a3acc;
        case 0x2a3ad0u: goto label_2a3ad0;
        case 0x2a3ad4u: goto label_2a3ad4;
        case 0x2a3ad8u: goto label_2a3ad8;
        case 0x2a3adcu: goto label_2a3adc;
        case 0x2a3ae0u: goto label_2a3ae0;
        case 0x2a3ae4u: goto label_2a3ae4;
        case 0x2a3ae8u: goto label_2a3ae8;
        case 0x2a3aecu: goto label_2a3aec;
        case 0x2a3af0u: goto label_2a3af0;
        case 0x2a3af4u: goto label_2a3af4;
        case 0x2a3af8u: goto label_2a3af8;
        case 0x2a3afcu: goto label_2a3afc;
        case 0x2a3b00u: goto label_2a3b00;
        case 0x2a3b04u: goto label_2a3b04;
        case 0x2a3b08u: goto label_2a3b08;
        case 0x2a3b0cu: goto label_2a3b0c;
        case 0x2a3b10u: goto label_2a3b10;
        case 0x2a3b14u: goto label_2a3b14;
        case 0x2a3b18u: goto label_2a3b18;
        case 0x2a3b1cu: goto label_2a3b1c;
        case 0x2a3b20u: goto label_2a3b20;
        case 0x2a3b24u: goto label_2a3b24;
        case 0x2a3b28u: goto label_2a3b28;
        case 0x2a3b2cu: goto label_2a3b2c;
        case 0x2a3b30u: goto label_2a3b30;
        case 0x2a3b34u: goto label_2a3b34;
        case 0x2a3b38u: goto label_2a3b38;
        case 0x2a3b3cu: goto label_2a3b3c;
        case 0x2a3b40u: goto label_2a3b40;
        case 0x2a3b44u: goto label_2a3b44;
        case 0x2a3b48u: goto label_2a3b48;
        case 0x2a3b4cu: goto label_2a3b4c;
        case 0x2a3b50u: goto label_2a3b50;
        case 0x2a3b54u: goto label_2a3b54;
        case 0x2a3b58u: goto label_2a3b58;
        case 0x2a3b5cu: goto label_2a3b5c;
        case 0x2a3b60u: goto label_2a3b60;
        case 0x2a3b64u: goto label_2a3b64;
        case 0x2a3b68u: goto label_2a3b68;
        case 0x2a3b6cu: goto label_2a3b6c;
        case 0x2a3b70u: goto label_2a3b70;
        case 0x2a3b74u: goto label_2a3b74;
        case 0x2a3b78u: goto label_2a3b78;
        case 0x2a3b7cu: goto label_2a3b7c;
        case 0x2a3b80u: goto label_2a3b80;
        case 0x2a3b84u: goto label_2a3b84;
        case 0x2a3b88u: goto label_2a3b88;
        case 0x2a3b8cu: goto label_2a3b8c;
        case 0x2a3b90u: goto label_2a3b90;
        case 0x2a3b94u: goto label_2a3b94;
        case 0x2a3b98u: goto label_2a3b98;
        case 0x2a3b9cu: goto label_2a3b9c;
        case 0x2a3ba0u: goto label_2a3ba0;
        case 0x2a3ba4u: goto label_2a3ba4;
        case 0x2a3ba8u: goto label_2a3ba8;
        case 0x2a3bacu: goto label_2a3bac;
        case 0x2a3bb0u: goto label_2a3bb0;
        case 0x2a3bb4u: goto label_2a3bb4;
        case 0x2a3bb8u: goto label_2a3bb8;
        case 0x2a3bbcu: goto label_2a3bbc;
        case 0x2a3bc0u: goto label_2a3bc0;
        case 0x2a3bc4u: goto label_2a3bc4;
        case 0x2a3bc8u: goto label_2a3bc8;
        case 0x2a3bccu: goto label_2a3bcc;
        case 0x2a3bd0u: goto label_2a3bd0;
        case 0x2a3bd4u: goto label_2a3bd4;
        case 0x2a3bd8u: goto label_2a3bd8;
        case 0x2a3bdcu: goto label_2a3bdc;
        case 0x2a3be0u: goto label_2a3be0;
        case 0x2a3be4u: goto label_2a3be4;
        case 0x2a3be8u: goto label_2a3be8;
        case 0x2a3becu: goto label_2a3bec;
        case 0x2a3bf0u: goto label_2a3bf0;
        case 0x2a3bf4u: goto label_2a3bf4;
        case 0x2a3bf8u: goto label_2a3bf8;
        case 0x2a3bfcu: goto label_2a3bfc;
        case 0x2a3c00u: goto label_2a3c00;
        case 0x2a3c04u: goto label_2a3c04;
        case 0x2a3c08u: goto label_2a3c08;
        case 0x2a3c0cu: goto label_2a3c0c;
        case 0x2a3c10u: goto label_2a3c10;
        case 0x2a3c14u: goto label_2a3c14;
        case 0x2a3c18u: goto label_2a3c18;
        case 0x2a3c1cu: goto label_2a3c1c;
        case 0x2a3c20u: goto label_2a3c20;
        case 0x2a3c24u: goto label_2a3c24;
        case 0x2a3c28u: goto label_2a3c28;
        case 0x2a3c2cu: goto label_2a3c2c;
        case 0x2a3c30u: goto label_2a3c30;
        case 0x2a3c34u: goto label_2a3c34;
        case 0x2a3c38u: goto label_2a3c38;
        case 0x2a3c3cu: goto label_2a3c3c;
        case 0x2a3c40u: goto label_2a3c40;
        case 0x2a3c44u: goto label_2a3c44;
        case 0x2a3c48u: goto label_2a3c48;
        case 0x2a3c4cu: goto label_2a3c4c;
        case 0x2a3c50u: goto label_2a3c50;
        case 0x2a3c54u: goto label_2a3c54;
        case 0x2a3c58u: goto label_2a3c58;
        case 0x2a3c5cu: goto label_2a3c5c;
        case 0x2a3c60u: goto label_2a3c60;
        case 0x2a3c64u: goto label_2a3c64;
        case 0x2a3c68u: goto label_2a3c68;
        case 0x2a3c6cu: goto label_2a3c6c;
        case 0x2a3c70u: goto label_2a3c70;
        case 0x2a3c74u: goto label_2a3c74;
        case 0x2a3c78u: goto label_2a3c78;
        case 0x2a3c7cu: goto label_2a3c7c;
        case 0x2a3c80u: goto label_2a3c80;
        case 0x2a3c84u: goto label_2a3c84;
        case 0x2a3c88u: goto label_2a3c88;
        case 0x2a3c8cu: goto label_2a3c8c;
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3c94u: goto label_2a3c94;
        case 0x2a3c98u: goto label_2a3c98;
        case 0x2a3c9cu: goto label_2a3c9c;
        case 0x2a3ca0u: goto label_2a3ca0;
        case 0x2a3ca4u: goto label_2a3ca4;
        case 0x2a3ca8u: goto label_2a3ca8;
        case 0x2a3cacu: goto label_2a3cac;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cb4u: goto label_2a3cb4;
        case 0x2a3cb8u: goto label_2a3cb8;
        case 0x2a3cbcu: goto label_2a3cbc;
        case 0x2a3cc0u: goto label_2a3cc0;
        case 0x2a3cc4u: goto label_2a3cc4;
        case 0x2a3cc8u: goto label_2a3cc8;
        case 0x2a3cccu: goto label_2a3ccc;
        case 0x2a3cd0u: goto label_2a3cd0;
        case 0x2a3cd4u: goto label_2a3cd4;
        case 0x2a3cd8u: goto label_2a3cd8;
        case 0x2a3cdcu: goto label_2a3cdc;
        case 0x2a3ce0u: goto label_2a3ce0;
        case 0x2a3ce4u: goto label_2a3ce4;
        case 0x2a3ce8u: goto label_2a3ce8;
        case 0x2a3cecu: goto label_2a3cec;
        case 0x2a3cf0u: goto label_2a3cf0;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3cf8u: goto label_2a3cf8;
        case 0x2a3cfcu: goto label_2a3cfc;
        case 0x2a3d00u: goto label_2a3d00;
        case 0x2a3d04u: goto label_2a3d04;
        case 0x2a3d08u: goto label_2a3d08;
        case 0x2a3d0cu: goto label_2a3d0c;
        case 0x2a3d10u: goto label_2a3d10;
        case 0x2a3d14u: goto label_2a3d14;
        case 0x2a3d18u: goto label_2a3d18;
        case 0x2a3d1cu: goto label_2a3d1c;
        case 0x2a3d20u: goto label_2a3d20;
        case 0x2a3d24u: goto label_2a3d24;
        case 0x2a3d28u: goto label_2a3d28;
        case 0x2a3d2cu: goto label_2a3d2c;
        case 0x2a3d30u: goto label_2a3d30;
        case 0x2a3d34u: goto label_2a3d34;
        case 0x2a3d38u: goto label_2a3d38;
        case 0x2a3d3cu: goto label_2a3d3c;
        case 0x2a3d40u: goto label_2a3d40;
        case 0x2a3d44u: goto label_2a3d44;
        case 0x2a3d48u: goto label_2a3d48;
        case 0x2a3d4cu: goto label_2a3d4c;
        case 0x2a3d50u: goto label_2a3d50;
        case 0x2a3d54u: goto label_2a3d54;
        case 0x2a3d58u: goto label_2a3d58;
        case 0x2a3d5cu: goto label_2a3d5c;
        case 0x2a3d60u: goto label_2a3d60;
        case 0x2a3d64u: goto label_2a3d64;
        case 0x2a3d68u: goto label_2a3d68;
        case 0x2a3d6cu: goto label_2a3d6c;
        case 0x2a3d70u: goto label_2a3d70;
        case 0x2a3d74u: goto label_2a3d74;
        case 0x2a3d78u: goto label_2a3d78;
        case 0x2a3d7cu: goto label_2a3d7c;
        case 0x2a3d80u: goto label_2a3d80;
        case 0x2a3d84u: goto label_2a3d84;
        case 0x2a3d88u: goto label_2a3d88;
        case 0x2a3d8cu: goto label_2a3d8c;
        default: break;
    }

    ctx->pc = 0x2a3498u;

label_2a3498:
    // 0x2a3498: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a3498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2a349c:
    // 0x2a349c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2a349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2a34a0:
    // 0x2a34a0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2a34a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2a34a4:
    // 0x2a34a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a34a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a34a8:
    // 0x2a34a8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2a34a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2a34ac:
    // 0x2a34ac: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2a34acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2a34b0:
    // 0x2a34b0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2a34b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2a34b4:
    // 0x2a34b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a34b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a34b8:
    // 0x2a34b8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2a34b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2a34bc:
    // 0x2a34bc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2a34bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2a34c0:
    // 0x2a34c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a34c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2a34c4:
    // 0x2a34c4: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2a34c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2a34c8:
    // 0x2a34c8: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2a34c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2a34cc:
    // 0x2a34cc: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2a34ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2a34d0:
    // 0x2a34d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a34d4:
    // 0x2a34d4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2a34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a34d8:
    // 0x2a34d8: 0xc0e409a  jal         func_390268
label_2a34dc:
    if (ctx->pc == 0x2A34DCu) {
        ctx->pc = 0x2A34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34D8u;
        // 0x2a34dc: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A34E0u;
        goto label_2a34e0;
    }
    ctx->pc = 0x2A34D8u;
    SET_GPR_U32(ctx, 31, 0x2A34E0u);
    ctx->pc = 0x2A34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34D8u;
    // 0x2a34dc: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A34D8u, 0x2A34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34E0u;
label_2a34e0:
    // 0x2a34e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a34e4:
    // 0x2a34e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a34e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a34e8:
    // 0x2a34e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a34ec:
    // 0x2a34ec: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a34ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a34f0:
    // 0x2a34f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a34f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a34f4:
    // 0x2a34f4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a34f8:
    // 0x2a34f8: 0x40f809  jalr        $v0
label_2a34fc:
    if (ctx->pc == 0x2A34FCu) {
        ctx->pc = 0x2A34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F8u;
        // 0x2a34fc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3500u;
        goto label_2a3500;
    }
    ctx->pc = 0x2A34F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3500u);
        ctx->pc = 0x2A34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F8u;
        // 0x2a34fc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A34F8u, 0x2A3500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3500u;
label_2a3500:
    // 0x2a3500: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a3500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3504:
    // 0x2a3504: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x2a3504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2a3508:
    // 0x2a3508: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2a350c:
    if (ctx->pc == 0x2A350Cu) {
        ctx->pc = 0x2A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3508u;
        // 0x2a350c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3510u;
        goto label_2a3510;
    }
    ctx->pc = 0x2A3508u;
    {
        const bool branch_taken_0x2a3508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3508u;
        // 0x2a350c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3508) {
            ctx->pc = 0x2A353Cu;
            goto label_2a353c;
        }
    }
    ctx->pc = 0x2A3510u;
label_2a3510:
    // 0x2a3510: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a3510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a3514:
    // 0x2a3514: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a3514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a3518:
    // 0x2a3518: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a3518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a351c:
    // 0x2a351c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2a351cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a3520:
    // 0x2a3520: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2a3524:
    if (ctx->pc == 0x2A3524u) {
        ctx->pc = 0x2A3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3520u;
        // 0x2a3524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3528u;
        goto label_2a3528;
    }
    ctx->pc = 0x2A3520u;
    {
        const bool branch_taken_0x2a3520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3520u;
        // 0x2a3524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3520) {
            ctx->pc = 0x2A353Cu;
            goto label_2a353c;
        }
    }
    ctx->pc = 0x2A3528u;
label_2a3528:
    // 0x2a3528: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a3528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a352c:
    // 0x2a352c: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x2a352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2a3530:
    // 0x2a3530: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a3534:
    // 0x2a3534: 0x10000208  b           . + 4 + (0x208 << 2)
label_2a3538:
    if (ctx->pc == 0x2A3538u) {
        ctx->pc = 0x2A3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3534u;
        // 0x2a3538: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A353Cu;
        goto label_2a353c;
    }
    ctx->pc = 0x2A3534u;
    {
        const bool branch_taken_0x2a3534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3534u;
        // 0x2a3538: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3534) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A353Cu;
label_2a353c:
    // 0x2a353c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2a353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a3540:
    // 0x2a3540: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a3540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3544:
    // 0x2a3544: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a3548:
    if (ctx->pc == 0x2A3548u) {
        ctx->pc = 0x2A3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3544u;
        // 0x2a3548: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A354Cu;
        goto label_2a354c;
    }
    ctx->pc = 0x2A3544u;
    {
        const bool branch_taken_0x2a3544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3544) {
            ctx->pc = 0x2A3548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3544u;
            // 0x2a3548: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A354Cu;
            goto label_2a354c;
        }
    }
    ctx->pc = 0x2A354Cu;
label_2a354c:
    // 0x2a354c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2a354cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_2a3550:
    // 0x2a3550: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a3550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2a3554:
    // 0x2a3554: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2a3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2a3558:
    // 0x2a3558: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a3558u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a355c:
    // 0x2a355c: 0x2010  mfhi        $a0
    ctx->pc = 0x2a355cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a3560:
    // 0x2a3560: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
label_2a3564:
    if (ctx->pc == 0x2A3564u) {
        ctx->pc = 0x2A3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3560u;
        // 0x2a3564: 0x8602003a  lh          $v0, 0x3A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3568u;
        goto label_2a3568;
    }
    ctx->pc = 0x2A3560u;
    {
        const bool branch_taken_0x2a3560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3560) {
            ctx->pc = 0x2A3564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3560u;
            // 0x2a3564: 0x8602003a  lh          $v0, 0x3A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3594u;
            goto label_2a3594;
        }
    }
    ctx->pc = 0x2A3568u;
label_2a3568:
    // 0x2a3568: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a356c:
    // 0x2a356c: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x2a356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a3570:
    // 0x2a3570: 0x24a5c0d8  addiu       $a1, $a1, -0x3F28
    ctx->pc = 0x2a3570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951128));
label_2a3574:
    // 0x2a3574: 0xc0a72ee  jal         func_29CBB8
label_2a3578:
    if (ctx->pc == 0x2A3578u) {
        ctx->pc = 0x2A3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3574u;
        // 0x2a3578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A357Cu;
        goto label_2a357c;
    }
    ctx->pc = 0x2A3574u;
    SET_GPR_U32(ctx, 31, 0x2A357Cu);
    ctx->pc = 0x2A3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3574u;
    // 0x2a3578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2A3574u, 0x2A357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A357Cu;
label_2a357c:
    // 0x2a357c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a357cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3580:
    // 0x2a3580: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a3580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3584:
    // 0x2a3584: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a3584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a3588:
    // 0x2a3588: 0xc0a33f8  jal         func_28CFE0
label_2a358c:
    if (ctx->pc == 0x2A358Cu) {
        ctx->pc = 0x2A358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3588u;
        // 0x2a358c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3590u;
        goto label_2a3590;
    }
    ctx->pc = 0x2A3588u;
    SET_GPR_U32(ctx, 31, 0x2A3590u);
    ctx->pc = 0x2A358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3588u;
    // 0x2a358c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A3588u, 0x2A3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3590u;
label_2a3590:
    // 0x2a3590: 0x8602003a  lh          $v0, 0x3A($s0)
    ctx->pc = 0x2a3590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_2a3594:
    // 0x2a3594: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a3598:
    if (ctx->pc == 0x2A3598u) {
        ctx->pc = 0x2A3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3594u;
        // 0x2a3598: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A359Cu;
        goto label_2a359c;
    }
    ctx->pc = 0x2A3594u;
    {
        const bool branch_taken_0x2a3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3594u;
        // 0x2a3598: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3594) {
            ctx->pc = 0x2A35C0u;
            goto label_2a35c0;
        }
    }
    ctx->pc = 0x2A359Cu;
label_2a359c:
    // 0x2a359c: 0xc0cd4e4  jal         func_335390
label_2a35a0:
    if (ctx->pc == 0x2A35A0u) {
        ctx->pc = 0x2A35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A359Cu;
        // 0x2a35a0: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35A4u;
        goto label_2a35a4;
    }
    ctx->pc = 0x2A359Cu;
    SET_GPR_U32(ctx, 31, 0x2A35A4u);
    ctx->pc = 0x2A35A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A359Cu;
    // 0x2a35a0: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A359Cu, 0x2A35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35A4u;
label_2a35a4:
    // 0x2a35a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a35a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a35a8:
    // 0x2a35a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a35ac:
    if (ctx->pc == 0x2A35ACu) {
        ctx->pc = 0x2A35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35A8u;
        // 0x2a35ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35B0u;
        goto label_2a35b0;
    }
    ctx->pc = 0x2A35A8u;
    {
        const bool branch_taken_0x2a35a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35A8u;
        // 0x2a35ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35a8) {
            ctx->pc = 0x2A35C0u;
            goto label_2a35c0;
        }
    }
    ctx->pc = 0x2A35B0u;
label_2a35b0:
    // 0x2a35b0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a35b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a35b4:
    // 0x2a35b4: 0xc0e409a  jal         func_390268
label_2a35b8:
    if (ctx->pc == 0x2A35B8u) {
        ctx->pc = 0x2A35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35B4u;
        // 0x2a35b8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35BCu;
        goto label_2a35bc;
    }
    ctx->pc = 0x2A35B4u;
    SET_GPR_U32(ctx, 31, 0x2A35BCu);
    ctx->pc = 0x2A35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A35B4u;
    // 0x2a35b8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A35B4u, 0x2A35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35BCu;
label_2a35bc:
    // 0x2a35bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a35bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a35c0:
    // 0x2a35c0: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_2a35c4:
    if (ctx->pc == 0x2A35C4u) {
        ctx->pc = 0x2A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35C0u;
        // 0x2a35c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35C8u;
        goto label_2a35c8;
    }
    ctx->pc = 0x2A35C0u;
    {
        const bool branch_taken_0x2a35c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35C0u;
        // 0x2a35c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35c0) {
            ctx->pc = 0x2A3614u;
            goto label_2a3614;
        }
    }
    ctx->pc = 0x2A35C8u;
label_2a35c8:
    // 0x2a35c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a35cc:
    // 0x2a35cc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a35ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a35d0:
    // 0x2a35d0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a35d4:
    // 0x2a35d4: 0x60f809  jalr        $v1
label_2a35d8:
    if (ctx->pc == 0x2A35D8u) {
        ctx->pc = 0x2A35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35D4u;
        // 0x2a35d8: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35DCu;
        goto label_2a35dc;
    }
    ctx->pc = 0x2A35D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A35DCu);
        ctx->pc = 0x2A35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35D4u;
        // 0x2a35d8: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A35D4u, 0x2A35DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A35DCu;
label_2a35dc:
    // 0x2a35dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a35dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a35e0:
    // 0x2a35e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a35e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a35e4:
    // 0x2a35e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a35e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a35e8:
    // 0x2a35e8: 0xc0cdb38  jal         func_336CE0
label_2a35ec:
    if (ctx->pc == 0x2A35ECu) {
        ctx->pc = 0x2A35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35E8u;
        // 0x2a35ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A35F0u;
        goto label_2a35f0;
    }
    ctx->pc = 0x2A35E8u;
    SET_GPR_U32(ctx, 31, 0x2A35F0u);
    ctx->pc = 0x2A35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A35E8u;
    // 0x2a35ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A35E8u, 0x2A35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35F0u;
label_2a35f0:
    // 0x2a35f0: 0x8602003c  lh          $v0, 0x3C($s0)
    ctx->pc = 0x2a35f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_2a35f4:
    // 0x2a35f4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2a35f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2a35f8:
    // 0x2a35f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a35f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a35fc:
    // 0x2a35fc: 0x0  nop
    ctx->pc = 0x2a35fcu;
    // NOP
label_2a3600:
    // 0x2a3600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a3600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a3604:
    // 0x2a3604: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2a3604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a3608:
    // 0x2a3608: 0x0  nop
    ctx->pc = 0x2a3608u;
    // NOP
label_2a360c:
    // 0x2a360c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2a3610:
    if (ctx->pc == 0x2A3610u) {
        ctx->pc = 0x2A3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A360Cu;
        // 0x2a3610: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3614u;
        goto label_2a3614;
    }
    ctx->pc = 0x2A360Cu;
    {
        const bool branch_taken_0x2a360c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a360c) {
            ctx->pc = 0x2A3610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A360Cu;
            // 0x2a3610: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3614u;
            goto label_2a3614;
        }
    }
    ctx->pc = 0x2A3614u;
label_2a3614:
    // 0x2a3614: 0x86120032  lh          $s2, 0x32($s0)
    ctx->pc = 0x2a3614u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_2a3618:
    // 0x2a3618: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a3618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a361c:
    // 0x2a361c: 0x125400b5  beq         $s2, $s4, . + 4 + (0xB5 << 2)
label_2a3620:
    if (ctx->pc == 0x2A3620u) {
        ctx->pc = 0x2A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A361Cu;
        // 0x2a3620: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3624u;
        goto label_2a3624;
    }
    ctx->pc = 0x2A361Cu;
    {
        const bool branch_taken_0x2a361c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x2A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A361Cu;
        // 0x2a3620: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a361c) {
            ctx->pc = 0x2A38F4u;
            goto label_2a38f4;
        }
    }
    ctx->pc = 0x2A3624u;
label_2a3624:
    // 0x2a3624: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a3628:
    if (ctx->pc == 0x2A3628u) {
        ctx->pc = 0x2A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3624u;
        // 0x2a3628: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A362Cu;
        goto label_2a362c;
    }
    ctx->pc = 0x2A3624u;
    {
        const bool branch_taken_0x2a3624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3624u;
        // 0x2a3628: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3624) {
            ctx->pc = 0x2A363Cu;
            goto label_2a363c;
        }
    }
    ctx->pc = 0x2A362Cu;
label_2a362c:
    // 0x2a362c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2a3630:
    if (ctx->pc == 0x2A3630u) {
        ctx->pc = 0x2A3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A362Cu;
        // 0x2a3630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3634u;
        goto label_2a3634;
    }
    ctx->pc = 0x2A362Cu;
    {
        const bool branch_taken_0x2a362c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A362Cu;
        // 0x2a3630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a362c) {
            ctx->pc = 0x2A364Cu;
            goto label_2a364c;
        }
    }
    ctx->pc = 0x2A3634u;
label_2a3634:
    // 0x2a3634: 0x100001c9  b           . + 4 + (0x1C9 << 2)
label_2a3638:
    if (ctx->pc == 0x2A3638u) {
        ctx->pc = 0x2A3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3634u;
        // 0x2a3638: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A363Cu;
        goto label_2a363c;
    }
    ctx->pc = 0x2A3634u;
    {
        const bool branch_taken_0x2a3634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3634u;
        // 0x2a3638: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3634) {
            ctx->pc = 0x2A3D5Cu;
            goto label_2a3d5c;
        }
    }
    ctx->pc = 0x2A363Cu;
label_2a363c:
    // 0x2a363c: 0x124201a5  beq         $s2, $v0, . + 4 + (0x1A5 << 2)
label_2a3640:
    if (ctx->pc == 0x2A3640u) {
        ctx->pc = 0x2A3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A363Cu;
        // 0x2a3640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3644u;
        goto label_2a3644;
    }
    ctx->pc = 0x2A363Cu;
    {
        const bool branch_taken_0x2a363c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A363Cu;
        // 0x2a3640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a363c) {
            ctx->pc = 0x2A3CD4u;
            goto label_2a3cd4;
        }
    }
    ctx->pc = 0x2A3644u;
label_2a3644:
    // 0x2a3644: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_2a3648:
    if (ctx->pc == 0x2A3648u) {
        ctx->pc = 0x2A3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3644u;
        // 0x2a3648: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A364Cu;
        goto label_2a364c;
    }
    ctx->pc = 0x2A3644u;
    {
        const bool branch_taken_0x2a3644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3644u;
        // 0x2a3648: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3644) {
            ctx->pc = 0x2A3D5Cu;
            goto label_2a3d5c;
        }
    }
    ctx->pc = 0x2A364Cu;
label_2a364c:
    // 0x2a364c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3650:
    // 0x2a3650: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a3650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a3654:
    // 0x2a3654: 0x1c6001c0  bgtz        $v1, . + 4 + (0x1C0 << 2)
label_2a3658:
    if (ctx->pc == 0x2A3658u) {
        ctx->pc = 0x2A3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3654u;
        // 0x2a3658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A365Cu;
        goto label_2a365c;
    }
    ctx->pc = 0x2A3654u;
    {
        const bool branch_taken_0x2a3654 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3654u;
        // 0x2a3658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3654) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A365Cu;
label_2a365c:
    // 0x2a365c: 0xc089bfc  jal         func_226FF0
label_2a3660:
    if (ctx->pc == 0x2A3660u) {
        ctx->pc = 0x2A3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A365Cu;
        // 0x2a3660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3664u;
        goto label_2a3664;
    }
    ctx->pc = 0x2A365Cu;
    SET_GPR_U32(ctx, 31, 0x2A3664u);
    ctx->pc = 0x2A3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A365Cu;
    // 0x2a3660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2A365Cu, 0x2A3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3664u;
label_2a3664:
    // 0x2a3664: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a3668:
    if (ctx->pc == 0x2A3668u) {
        ctx->pc = 0x2A3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3664u;
        // 0x2a3668: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A366Cu;
        goto label_2a366c;
    }
    ctx->pc = 0x2A3664u;
    {
        const bool branch_taken_0x2a3664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3664u;
        // 0x2a3668: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3664) {
            ctx->pc = 0x2A3688u;
            goto label_2a3688;
        }
    }
    ctx->pc = 0x2A366Cu;
label_2a366c:
    // 0x2a366c: 0xa6140032  sh          $s4, 0x32($s0)
    ctx->pc = 0x2a366cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 20));
label_2a3670:
    // 0x2a3670: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a3670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a3674:
    // 0x2a3674: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2a3674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a3678:
    // 0x2a3678: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a367c:
    // 0x2a367c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a3680:
    // 0x2a3680: 0x100001b4  b           . + 4 + (0x1B4 << 2)
label_2a3684:
    if (ctx->pc == 0x2A3684u) {
        ctx->pc = 0x2A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3680u;
        // 0x2a3684: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3688u;
        goto label_2a3688;
    }
    ctx->pc = 0x2A3680u;
    {
        const bool branch_taken_0x2a3680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3680u;
        // 0x2a3684: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3680) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3688u;
label_2a3688:
    // 0x2a3688: 0x8602003a  lh          $v0, 0x3A($s0)
    ctx->pc = 0x2a3688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_2a368c:
    // 0x2a368c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2a3690:
    if (ctx->pc == 0x2A3690u) {
        ctx->pc = 0x2A3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A368Cu;
        // 0x2a3690: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3694u;
        goto label_2a3694;
    }
    ctx->pc = 0x2A368Cu;
    {
        const bool branch_taken_0x2a368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A368Cu;
        // 0x2a3690: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a368c) {
            ctx->pc = 0x2A37D8u;
            goto label_2a37d8;
        }
    }
    ctx->pc = 0x2A3694u;
label_2a3694:
    // 0x2a3694: 0xc088ed2  jal         func_223B48
label_2a3698:
    if (ctx->pc == 0x2A3698u) {
        ctx->pc = 0x2A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3694u;
        // 0x2a3698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A369Cu;
        goto label_2a369c;
    }
    ctx->pc = 0x2A3694u;
    SET_GPR_U32(ctx, 31, 0x2A369Cu);
    ctx->pc = 0x2A3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3694u;
    // 0x2a3698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2A3694u, 0x2A369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A369Cu;
label_2a369c:
    // 0x2a369c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_2a36a0:
    if (ctx->pc == 0x2A36A0u) {
        ctx->pc = 0x2A36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A369Cu;
        // 0x2a36a0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A36A4u;
        goto label_2a36a4;
    }
    ctx->pc = 0x2A369Cu;
    {
        const bool branch_taken_0x2a369c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A369Cu;
        // 0x2a36a0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a369c) {
            ctx->pc = 0x2A37D8u;
            goto label_2a37d8;
        }
    }
    ctx->pc = 0x2A36A4u;
label_2a36a4:
    // 0x2a36a4: 0xc088ef0  jal         func_223BC0
label_2a36a8:
    if (ctx->pc == 0x2A36A8u) {
        ctx->pc = 0x2A36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36A4u;
        // 0x2a36a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A36ACu;
        goto label_2a36ac;
    }
    ctx->pc = 0x2A36A4u;
    SET_GPR_U32(ctx, 31, 0x2A36ACu);
    ctx->pc = 0x2A36A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A36A4u;
    // 0x2a36a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2A36A4u, 0x2A36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36ACu;
label_2a36ac:
    // 0x2a36ac: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_2a36b0:
    if (ctx->pc == 0x2A36B0u) {
        ctx->pc = 0x2A36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36ACu;
        // 0x2a36b0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A36B4u;
        goto label_2a36b4;
    }
    ctx->pc = 0x2A36ACu;
    {
        const bool branch_taken_0x2a36ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36ACu;
        // 0x2a36b0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36ac) {
            ctx->pc = 0x2A37D8u;
            goto label_2a37d8;
        }
    }
    ctx->pc = 0x2A36B4u;
label_2a36b4:
    // 0x2a36b4: 0x9602003a  lhu         $v0, 0x3A($s0)
    ctx->pc = 0x2a36b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_2a36b8:
    // 0x2a36b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a36bc:
    // 0x2a36bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a36c0:
    // 0x2a36c0: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2a36c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_2a36c4:
    // 0x2a36c4: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2a36c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2a36c8:
    // 0x2a36c8: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_2a36cc:
    if (ctx->pc == 0x2A36CCu) {
        ctx->pc = 0x2A36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36C8u;
        // 0x2a36cc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A36D0u;
        goto label_2a36d0;
    }
    ctx->pc = 0x2A36C8u;
    {
        const bool branch_taken_0x2a36c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36C8u;
        // 0x2a36cc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36c8) {
            ctx->pc = 0x2A37BCu;
            goto label_2a37bc;
        }
    }
    ctx->pc = 0x2A36D0u;
label_2a36d0:
    // 0x2a36d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a36d4:
    // 0x2a36d4: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x2a36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
label_2a36d8:
    // 0x2a36d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a36dc:
    // 0x2a36dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a36e0:
    // 0x2a36e0: 0x800008  jr          $a0
label_2a36e4:
    if (ctx->pc == 0x2A36E4u) {
        ctx->pc = 0x2A36E8u;
        goto label_2a36e8;
    }
    ctx->pc = 0x2A36E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A36E8u: goto label_2a36e8;
            case 0x2A3714u: goto label_2a3714;
            case 0x2A3740u: goto label_2a3740;
            case 0x2A376Cu: goto label_2a376c;
            case 0x2A3798u: goto label_2a3798;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A36E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A36E8u;
label_2a36e8:
    // 0x2a36e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a36ec:
    // 0x2a36ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a36ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a36f0:
    // 0x2a36f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a36f4:
    // 0x2a36f4: 0x40f809  jalr        $v0
label_2a36f8:
    if (ctx->pc == 0x2A36F8u) {
        ctx->pc = 0x2A36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36F4u;
        // 0x2a36f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A36FCu;
        goto label_2a36fc;
    }
    ctx->pc = 0x2A36F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A36FCu);
        ctx->pc = 0x2A36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36F4u;
        // 0x2a36f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A36F4u, 0x2A36FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A36FCu;
label_2a36fc:
    // 0x2a36fc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a36fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a3700:
    // 0x2a3700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3704:
    // 0x2a3704: 0xc08e150  jal         func_238540
label_2a3708:
    if (ctx->pc == 0x2A3708u) {
        ctx->pc = 0x2A3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3704u;
        // 0x2a3708: 0x24a52d98  addiu       $a1, $a1, 0x2D98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A370Cu;
        goto label_2a370c;
    }
    ctx->pc = 0x2A3704u;
    SET_GPR_U32(ctx, 31, 0x2A370Cu);
    ctx->pc = 0x2A3708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3704u;
    // 0x2a3708: 0x24a52d98  addiu       $a1, $a1, 0x2D98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A3704u, 0x2A370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A370Cu;
label_2a370c:
    // 0x2a370c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2a3710:
    if (ctx->pc == 0x2A3710u) {
        ctx->pc = 0x2A3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A370Cu;
        // 0x2a3710: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3714u;
        goto label_2a3714;
    }
    ctx->pc = 0x2A370Cu;
    {
        const bool branch_taken_0x2a370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A370Cu;
        // 0x2a3710: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a370c) {
            ctx->pc = 0x2A37C0u;
            goto label_2a37c0;
        }
    }
    ctx->pc = 0x2A3714u;
label_2a3714:
    // 0x2a3714: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3718:
    // 0x2a3718: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a371c:
    // 0x2a371c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3720:
    // 0x2a3720: 0x40f809  jalr        $v0
label_2a3724:
    if (ctx->pc == 0x2A3724u) {
        ctx->pc = 0x2A3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3720u;
        // 0x2a3724: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3728u;
        goto label_2a3728;
    }
    ctx->pc = 0x2A3720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3728u);
        ctx->pc = 0x2A3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3720u;
        // 0x2a3724: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3720u, 0x2A3728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3728u;
label_2a3728:
    // 0x2a3728: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a3728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a372c:
    // 0x2a372c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3730:
    // 0x2a3730: 0xc08e150  jal         func_238540
label_2a3734:
    if (ctx->pc == 0x2A3734u) {
        ctx->pc = 0x2A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3730u;
        // 0x2a3734: 0x24a52da8  addiu       $a1, $a1, 0x2DA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3738u;
        goto label_2a3738;
    }
    ctx->pc = 0x2A3730u;
    SET_GPR_U32(ctx, 31, 0x2A3738u);
    ctx->pc = 0x2A3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3730u;
    // 0x2a3734: 0x24a52da8  addiu       $a1, $a1, 0x2DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A3730u, 0x2A3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3738u;
label_2a3738:
    // 0x2a3738: 0x10000021  b           . + 4 + (0x21 << 2)
label_2a373c:
    if (ctx->pc == 0x2A373Cu) {
        ctx->pc = 0x2A373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3738u;
        // 0x2a373c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3740u;
        goto label_2a3740;
    }
    ctx->pc = 0x2A3738u;
    {
        const bool branch_taken_0x2a3738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3738u;
        // 0x2a373c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3738) {
            ctx->pc = 0x2A37C0u;
            goto label_2a37c0;
        }
    }
    ctx->pc = 0x2A3740u;
label_2a3740:
    // 0x2a3740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3744:
    // 0x2a3744: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3748:
    // 0x2a3748: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a374c:
    // 0x2a374c: 0x40f809  jalr        $v0
label_2a3750:
    if (ctx->pc == 0x2A3750u) {
        ctx->pc = 0x2A3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A374Cu;
        // 0x2a3750: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3754u;
        goto label_2a3754;
    }
    ctx->pc = 0x2A374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3754u);
        ctx->pc = 0x2A3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A374Cu;
        // 0x2a3750: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A374Cu, 0x2A3754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3754u;
label_2a3754:
    // 0x2a3754: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a3754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a3758:
    // 0x2a3758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a375c:
    // 0x2a375c: 0xc08e150  jal         func_238540
label_2a3760:
    if (ctx->pc == 0x2A3760u) {
        ctx->pc = 0x2A3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A375Cu;
        // 0x2a3760: 0x24a52db8  addiu       $a1, $a1, 0x2DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3764u;
        goto label_2a3764;
    }
    ctx->pc = 0x2A375Cu;
    SET_GPR_U32(ctx, 31, 0x2A3764u);
    ctx->pc = 0x2A3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A375Cu;
    // 0x2a3760: 0x24a52db8  addiu       $a1, $a1, 0x2DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A375Cu, 0x2A3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3764u;
label_2a3764:
    // 0x2a3764: 0x10000016  b           . + 4 + (0x16 << 2)
label_2a3768:
    if (ctx->pc == 0x2A3768u) {
        ctx->pc = 0x2A3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3764u;
        // 0x2a3768: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A376Cu;
        goto label_2a376c;
    }
    ctx->pc = 0x2A3764u;
    {
        const bool branch_taken_0x2a3764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3764u;
        // 0x2a3768: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3764) {
            ctx->pc = 0x2A37C0u;
            goto label_2a37c0;
        }
    }
    ctx->pc = 0x2A376Cu;
label_2a376c:
    // 0x2a376c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3770:
    // 0x2a3770: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3774:
    // 0x2a3774: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3778:
    // 0x2a3778: 0x40f809  jalr        $v0
label_2a377c:
    if (ctx->pc == 0x2A377Cu) {
        ctx->pc = 0x2A377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3778u;
        // 0x2a377c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3780u;
        goto label_2a3780;
    }
    ctx->pc = 0x2A3778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3780u);
        ctx->pc = 0x2A377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3778u;
        // 0x2a377c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3778u, 0x2A3780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3780u;
label_2a3780:
    // 0x2a3780: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a3780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a3784:
    // 0x2a3784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3788:
    // 0x2a3788: 0xc08e150  jal         func_238540
label_2a378c:
    if (ctx->pc == 0x2A378Cu) {
        ctx->pc = 0x2A378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3788u;
        // 0x2a378c: 0x24a52288  addiu       $a1, $a1, 0x2288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3790u;
        goto label_2a3790;
    }
    ctx->pc = 0x2A3788u;
    SET_GPR_U32(ctx, 31, 0x2A3790u);
    ctx->pc = 0x2A378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3788u;
    // 0x2a378c: 0x24a52288  addiu       $a1, $a1, 0x2288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A3788u, 0x2A3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3790u;
label_2a3790:
    // 0x2a3790: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a3794:
    if (ctx->pc == 0x2A3794u) {
        ctx->pc = 0x2A3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3790u;
        // 0x2a3794: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3798u;
        goto label_2a3798;
    }
    ctx->pc = 0x2A3790u;
    {
        const bool branch_taken_0x2a3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3790u;
        // 0x2a3794: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3790) {
            ctx->pc = 0x2A37C0u;
            goto label_2a37c0;
        }
    }
    ctx->pc = 0x2A3798u;
label_2a3798:
    // 0x2a3798: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a379c:
    // 0x2a379c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a379cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a37a0:
    // 0x2a37a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a37a4:
    // 0x2a37a4: 0x40f809  jalr        $v0
label_2a37a8:
    if (ctx->pc == 0x2A37A8u) {
        ctx->pc = 0x2A37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37A4u;
        // 0x2a37a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A37ACu;
        goto label_2a37ac;
    }
    ctx->pc = 0x2A37A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A37ACu);
        ctx->pc = 0x2A37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37A4u;
        // 0x2a37a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A37A4u, 0x2A37ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A37ACu;
label_2a37ac:
    // 0x2a37ac: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a37acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a37b0:
    // 0x2a37b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a37b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a37b4:
    // 0x2a37b4: 0xc08e150  jal         func_238540
label_2a37b8:
    if (ctx->pc == 0x2A37B8u) {
        ctx->pc = 0x2A37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37B4u;
        // 0x2a37b8: 0x24a52dc8  addiu       $a1, $a1, 0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A37BCu;
        goto label_2a37bc;
    }
    ctx->pc = 0x2A37B4u;
    SET_GPR_U32(ctx, 31, 0x2A37BCu);
    ctx->pc = 0x2A37B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A37B4u;
    // 0x2a37b8: 0x24a52dc8  addiu       $a1, $a1, 0x2DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A37B4u, 0x2A37BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37BCu;
label_2a37bc:
    // 0x2a37bc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a37bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a37c0:
    // 0x2a37c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a37c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a37c4:
    // 0x2a37c4: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2a37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a37c8:
    // 0x2a37c8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a37cc:
    // 0x2a37cc: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_2a37d0:
    // 0x2a37d0: 0x10000161  b           . + 4 + (0x161 << 2)
label_2a37d4:
    if (ctx->pc == 0x2A37D4u) {
        ctx->pc = 0x2A37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37D0u;
        // 0x2a37d4: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A37D8u;
        goto label_2a37d8;
    }
    ctx->pc = 0x2A37D0u;
    {
        const bool branch_taken_0x2a37d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37D0u;
        // 0x2a37d4: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37d0) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A37D8u;
label_2a37d8:
    // 0x2a37d8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2a37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a37dc:
    // 0x2a37dc: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2a37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2a37e0:
    // 0x2a37e0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2a37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_2a37e4:
    // 0x2a37e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2a37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2a37e8:
    // 0x2a37e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2a37e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a37ec:
    // 0x2a37ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a37f0:
    // 0x2a37f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a37f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a37f4:
    // 0x2a37f4: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2a37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a37f8:
    // 0x2a37f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a37f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a37fc:
    // 0x2a37fc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2a37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2a3800:
    // 0x2a3800: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a3800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3804:
    // 0x2a3804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3808:
    // 0x2a3808: 0xc0a757c  jal         func_29D5F0
label_2a380c:
    if (ctx->pc == 0x2A380Cu) {
        ctx->pc = 0x2A380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3808u;
        // 0x2a380c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3810u;
        goto label_2a3810;
    }
    ctx->pc = 0x2A3808u;
    SET_GPR_U32(ctx, 31, 0x2A3810u);
    ctx->pc = 0x2A380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3808u;
    // 0x2a380c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2A3808u, 0x2A3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3810u;
label_2a3810:
    // 0x2a3810: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a3810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2a3814:
    // 0x2a3814: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a3814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3818:
    // 0x2a3818: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2a3818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a381c:
    // 0x2a381c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_2a3820:
    if (ctx->pc == 0x2A3820u) {
        ctx->pc = 0x2A3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A381Cu;
        // 0x2a3820: 0x2473f2f0  addiu       $s3, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3824u;
        goto label_2a3824;
    }
    ctx->pc = 0x2A381Cu;
    {
        const bool branch_taken_0x2a381c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A381Cu;
        // 0x2a3820: 0x2473f2f0  addiu       $s3, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a381c) {
            ctx->pc = 0x2A3888u;
            goto label_2a3888;
        }
    }
    ctx->pc = 0x2A3824u;
label_2a3824:
    // 0x2a3824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3828:
    // 0x2a3828: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2a3828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2a382c:
    // 0x2a382c: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x2a382cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
label_2a3830:
    // 0x2a3830: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2a3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2a3834:
    // 0x2a3834: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a3838:
    // 0x2a3838: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x2a3838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
label_2a383c:
    // 0x2a383c: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x2a383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
label_2a3840:
    // 0x2a3840: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2a3840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2a3844:
    // 0x2a3844: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3848:
    // 0x2a3848: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a384c:
    // 0x2a384c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3850:
    // 0x2a3850: 0x40f809  jalr        $v0
label_2a3854:
    if (ctx->pc == 0x2A3854u) {
        ctx->pc = 0x2A3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3850u;
        // 0x2a3854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3858u;
        goto label_2a3858;
    }
    ctx->pc = 0x2A3850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3858u);
        ctx->pc = 0x2A3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3850u;
        // 0x2a3854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3850u, 0x2A3858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3858u;
label_2a3858:
    // 0x2a3858: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a3858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a385c:
    // 0x2a385c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a385cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3860:
    // 0x2a3860: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3864:
    // 0x2a3864: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3868:
    // 0x2a3868: 0x40f809  jalr        $v0
label_2a386c:
    if (ctx->pc == 0x2A386Cu) {
        ctx->pc = 0x2A386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3868u;
        // 0x2a386c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3870u;
        goto label_2a3870;
    }
    ctx->pc = 0x2A3868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3870u);
        ctx->pc = 0x2A386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3868u;
        // 0x2a386c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3868u, 0x2A3870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3870u;
label_2a3870:
    // 0x2a3870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3874:
    // 0x2a3874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a3874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3878:
    // 0x2a3878: 0xc0b71c2  jal         func_2DC708
label_2a387c:
    if (ctx->pc == 0x2A387Cu) {
        ctx->pc = 0x2A387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3878u;
        // 0x2a387c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3880u;
        goto label_2a3880;
    }
    ctx->pc = 0x2A3878u;
    SET_GPR_U32(ctx, 31, 0x2A3880u);
    ctx->pc = 0x2A387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3878u;
    // 0x2a387c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2A3878u, 0x2A3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3880u;
label_2a3880:
    // 0x2a3880: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a3884:
    if (ctx->pc == 0x2A3884u) {
        ctx->pc = 0x2A3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3880u;
        // 0x2a3884: 0x2682f2f0  addiu       $v0, $s4, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3888u;
        goto label_2a3888;
    }
    ctx->pc = 0x2A3880u;
    {
        const bool branch_taken_0x2a3880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3880u;
        // 0x2a3884: 0x2682f2f0  addiu       $v0, $s4, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3880) {
            ctx->pc = 0x2A38ECu;
            goto label_2a38ec;
        }
    }
    ctx->pc = 0x2A3888u;
label_2a3888:
    // 0x2a3888: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x2a3888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_2a388c:
    // 0x2a388c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3890:
    // 0x2a3890: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a3890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a3894:
    // 0x2a3894: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a3894u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a3898:
    // 0x2a3898: 0x28630015  slti        $v1, $v1, 0x15
    ctx->pc = 0x2a3898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
label_2a389c:
    // 0x2a389c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2a38a0:
    if (ctx->pc == 0x2A38A0u) {
        ctx->pc = 0x2A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A389Cu;
        // 0x2a38a0: 0xa6020038  sh          $v0, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38A4u;
        goto label_2a38a4;
    }
    ctx->pc = 0x2A389Cu;
    {
        const bool branch_taken_0x2a389c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A389Cu;
        // 0x2a38a0: 0xa6020038  sh          $v0, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a389c) {
            ctx->pc = 0x2A38E8u;
            goto label_2a38e8;
        }
    }
    ctx->pc = 0x2A38A4u;
label_2a38a4:
    // 0x2a38a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a38a8:
    // 0x2a38a8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2a38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2a38ac:
    // 0x2a38ac: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2a38acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a38b0:
    // 0x2a38b0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_2a38b4:
    if (ctx->pc == 0x2A38B4u) {
        ctx->pc = 0x2A38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38B0u;
        // 0x2a38b4: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38B8u;
        goto label_2a38b8;
    }
    ctx->pc = 0x2A38B0u;
    {
        const bool branch_taken_0x2a38b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a38b0) {
            ctx->pc = 0x2A38B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A38B0u;
            // 0x2a38b4: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38E0u;
            goto label_2a38e0;
        }
    }
    ctx->pc = 0x2A38B8u;
label_2a38b8:
    // 0x2a38b8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2a38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2a38bc:
    // 0x2a38bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2a38bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2a38c0:
    // 0x2a38c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2a38c4:
    // 0x2a38c4: 0x40f809  jalr        $v0
label_2a38c8:
    if (ctx->pc == 0x2A38C8u) {
        ctx->pc = 0x2A38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38C4u;
        // 0x2a38c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38CCu;
        goto label_2a38cc;
    }
    ctx->pc = 0x2A38C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A38CCu);
        ctx->pc = 0x2A38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38C4u;
        // 0x2a38c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A38C4u, 0x2A38CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A38CCu;
label_2a38cc:
    // 0x2a38cc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2a38ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a38d0:
    // 0x2a38d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2a38d4:
    if (ctx->pc == 0x2A38D4u) {
        ctx->pc = 0x2A38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D0u;
        // 0x2a38d4: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38D8u;
        goto label_2a38d8;
    }
    ctx->pc = 0x2A38D0u;
    {
        const bool branch_taken_0x2a38d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D0u;
        // 0x2a38d4: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38d0) {
            ctx->pc = 0x2A38E0u;
            goto label_2a38e0;
        }
    }
    ctx->pc = 0x2A38D8u;
label_2a38d8:
    // 0x2a38d8: 0x1000011f  b           . + 4 + (0x11F << 2)
label_2a38dc:
    if (ctx->pc == 0x2A38DCu) {
        ctx->pc = 0x2A38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D8u;
        // 0x2a38dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38E0u;
        goto label_2a38e0;
    }
    ctx->pc = 0x2A38D8u;
    {
        const bool branch_taken_0x2a38d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D8u;
        // 0x2a38dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38d8) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A38E0u;
label_2a38e0:
    // 0x2a38e0: 0x1000011d  b           . + 4 + (0x11D << 2)
label_2a38e4:
    if (ctx->pc == 0x2A38E4u) {
        ctx->pc = 0x2A38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38E0u;
        // 0x2a38e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38E8u;
        goto label_2a38e8;
    }
    ctx->pc = 0x2A38E0u;
    {
        const bool branch_taken_0x2a38e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38E0u;
        // 0x2a38e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38e0) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A38E8u;
label_2a38e8:
    // 0x2a38e8: 0x2682f2f0  addiu       $v0, $s4, -0xD10
    ctx->pc = 0x2a38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
label_2a38ec:
    // 0x2a38ec: 0x10000119  b           . + 4 + (0x119 << 2)
label_2a38f0:
    if (ctx->pc == 0x2A38F0u) {
        ctx->pc = 0x2A38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38ECu;
        // 0x2a38f0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38F4u;
        goto label_2a38f4;
    }
    ctx->pc = 0x2A38ECu;
    {
        const bool branch_taken_0x2a38ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38ECu;
        // 0x2a38f0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38ec) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A38F4u;
label_2a38f4:
    // 0x2a38f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a38f8:
    // 0x2a38f8: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a38f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a38fc:
    // 0x2a38fc: 0x1c600116  bgtz        $v1, . + 4 + (0x116 << 2)
label_2a3900:
    if (ctx->pc == 0x2A3900u) {
        ctx->pc = 0x2A3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38FCu;
        // 0x2a3900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3904u;
        goto label_2a3904;
    }
    ctx->pc = 0x2A38FCu;
    {
        const bool branch_taken_0x2a38fc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38FCu;
        // 0x2a3900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38fc) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3904u;
label_2a3904:
    // 0x2a3904: 0xc089bfc  jal         func_226FF0
label_2a3908:
    if (ctx->pc == 0x2A3908u) {
        ctx->pc = 0x2A3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3904u;
        // 0x2a3908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A390Cu;
        goto label_2a390c;
    }
    ctx->pc = 0x2A3904u;
    SET_GPR_U32(ctx, 31, 0x2A390Cu);
    ctx->pc = 0x2A3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3904u;
    // 0x2a3908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2A3904u, 0x2A390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A390Cu;
label_2a390c:
    // 0x2a390c: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
label_2a3910:
    if (ctx->pc == 0x2A3910u) {
        ctx->pc = 0x2A3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A390Cu;
        // 0x2a3910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3914u;
        goto label_2a3914;
    }
    ctx->pc = 0x2A390Cu;
    {
        const bool branch_taken_0x2a390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A390Cu;
        // 0x2a3910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a390c) {
            ctx->pc = 0x2A3D50u;
            goto label_2a3d50;
        }
    }
    ctx->pc = 0x2A3914u;
label_2a3914:
    // 0x2a3914: 0xc088fa8  jal         func_223EA0
label_2a3918:
    if (ctx->pc == 0x2A3918u) {
        ctx->pc = 0x2A3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3914u;
        // 0x2a3918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A391Cu;
        goto label_2a391c;
    }
    ctx->pc = 0x2A3914u;
    SET_GPR_U32(ctx, 31, 0x2A391Cu);
    ctx->pc = 0x2A3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3914u;
    // 0x2a3918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2A3914u, 0x2A391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A391Cu;
label_2a391c:
    // 0x2a391c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2a3920:
    if (ctx->pc == 0x2A3920u) {
        ctx->pc = 0x2A3924u;
        goto label_2a3924;
    }
    ctx->pc = 0x2A391Cu;
    {
        const bool branch_taken_0x2a391c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a391c) {
            ctx->pc = 0x2A3950u;
            goto label_2a3950;
        }
    }
    ctx->pc = 0x2A3924u;
label_2a3924:
    // 0x2a3924: 0xc089000  jal         func_224000
label_2a3928:
    if (ctx->pc == 0x2A3928u) {
        ctx->pc = 0x2A3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3924u;
        // 0x2a3928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A392Cu;
        goto label_2a392c;
    }
    ctx->pc = 0x2A3924u;
    SET_GPR_U32(ctx, 31, 0x2A392Cu);
    ctx->pc = 0x2A3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3924u;
    // 0x2a3928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2A3924u, 0x2A392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A392Cu;
label_2a392c:
    // 0x2a392c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2a3930:
    if (ctx->pc == 0x2A3930u) {
        ctx->pc = 0x2A3934u;
        goto label_2a3934;
    }
    ctx->pc = 0x2A392Cu;
    {
        const bool branch_taken_0x2a392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a392c) {
            ctx->pc = 0x2A3950u;
            goto label_2a3950;
        }
    }
    ctx->pc = 0x2A3934u;
label_2a3934:
    // 0x2a3934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a3934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3938:
    // 0x2a3938: 0xc0874fa  jal         func_21D3E8
label_2a393c:
    if (ctx->pc == 0x2A393Cu) {
        ctx->pc = 0x2A393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3938u;
        // 0x2a393c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3940u;
        goto label_2a3940;
    }
    ctx->pc = 0x2A3938u;
    SET_GPR_U32(ctx, 31, 0x2A3940u);
    ctx->pc = 0x2A393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3938u;
    // 0x2a393c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A3938u, 0x2A3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3940u;
label_2a3940:
    // 0x2a3940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3944:
    // 0x2a3944: 0xc051fbc  jal         func_147EF0
label_2a3948:
    if (ctx->pc == 0x2A3948u) {
        ctx->pc = 0x2A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3944u;
        // 0x2a3948: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A394Cu;
        goto label_2a394c;
    }
    ctx->pc = 0x2A3944u;
    SET_GPR_U32(ctx, 31, 0x2A394Cu);
    ctx->pc = 0x2A3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3944u;
    // 0x2a3948: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A3944u, 0x2A394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A394Cu;
label_2a394c:
    // 0x2a394c: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x2a394cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
label_2a3950:
    // 0x2a3950: 0x12600100  beqz        $s3, . + 4 + (0x100 << 2)
label_2a3954:
    if (ctx->pc == 0x2A3954u) {
        ctx->pc = 0x2A3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3950u;
        // 0x2a3954: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3958u;
        goto label_2a3958;
    }
    ctx->pc = 0x2A3950u;
    {
        const bool branch_taken_0x2a3950 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3950u;
        // 0x2a3954: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3950) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3958u;
label_2a3958:
    // 0x2a3958: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2a3958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2a395c:
    // 0x2a395c: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2a395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2a3960:
    // 0x2a3960: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2a3960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a3964:
    // 0x2a3964: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2a3964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a3968:
    // 0x2a3968: 0x106000fa  beqz        $v1, . + 4 + (0xFA << 2)
label_2a396c:
    if (ctx->pc == 0x2A396Cu) {
        ctx->pc = 0x2A396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3968u;
        // 0x2a396c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3970u;
        goto label_2a3970;
    }
    ctx->pc = 0x2A3968u;
    {
        const bool branch_taken_0x2a3968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3968u;
        // 0x2a396c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3968) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3970u;
label_2a3970:
    // 0x2a3970: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2a3970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2a3974:
    // 0x2a3974: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x2a3974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2a3978:
    // 0x2a3978: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a3978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2a397c:
    // 0x2a397c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2a397cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a3980:
    // 0x2a3980: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x2a3980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2a3984:
    // 0x2a3984: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a3984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3988:
    // 0x2a3988: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2a3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2a398c:
    // 0x2a398c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a398cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a3990:
    // 0x2a3990: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a3990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a3994:
    // 0x2a3994: 0xc0cd7d2  jal         func_335F48
label_2a3998:
    if (ctx->pc == 0x2A3998u) {
        ctx->pc = 0x2A3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3994u;
        // 0x2a3998: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A399Cu;
        goto label_2a399c;
    }
    ctx->pc = 0x2A3994u;
    SET_GPR_U32(ctx, 31, 0x2A399Cu);
    ctx->pc = 0x2A3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3994u;
    // 0x2a3998: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2A3994u, 0x2A399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A399Cu;
label_2a399c:
    // 0x2a399c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a39a0:
    // 0x2a39a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a39a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a39a4:
    // 0x2a39a4: 0xc0cd780  jal         func_335E00
label_2a39a8:
    if (ctx->pc == 0x2A39A8u) {
        ctx->pc = 0x2A39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39A4u;
        // 0x2a39a8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39ACu;
        goto label_2a39ac;
    }
    ctx->pc = 0x2A39A4u;
    SET_GPR_U32(ctx, 31, 0x2A39ACu);
    ctx->pc = 0x2A39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39A4u;
    // 0x2a39a8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2A39A4u, 0x2A39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39ACu;
label_2a39ac:
    // 0x2a39ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a39acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a39b0:
    // 0x2a39b0: 0xc0cd742  jal         func_335D08
label_2a39b4:
    if (ctx->pc == 0x2A39B4u) {
        ctx->pc = 0x2A39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39B0u;
        // 0x2a39b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39B8u;
        goto label_2a39b8;
    }
    ctx->pc = 0x2A39B0u;
    SET_GPR_U32(ctx, 31, 0x2A39B8u);
    ctx->pc = 0x2A39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39B0u;
    // 0x2a39b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2A39B0u, 0x2A39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39B8u;
label_2a39b8:
    // 0x2a39b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a39b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a39bc:
    // 0x2a39bc: 0xc0cdd2e  jal         func_3374B8
label_2a39c0:
    if (ctx->pc == 0x2A39C0u) {
        ctx->pc = 0x2A39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39BCu;
        // 0x2a39c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39C4u;
        goto label_2a39c4;
    }
    ctx->pc = 0x2A39BCu;
    SET_GPR_U32(ctx, 31, 0x2A39C4u);
    ctx->pc = 0x2A39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39BCu;
    // 0x2a39c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2A39BCu, 0x2A39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39C4u;
label_2a39c4:
    // 0x2a39c4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2a39c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2a39c8:
    // 0x2a39c8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2a39c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2a39cc:
    // 0x2a39cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a39ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a39d0:
    // 0x2a39d0: 0x0  nop
    ctx->pc = 0x2a39d0u;
    // NOP
label_2a39d4:
    // 0x2a39d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a39d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a39d8:
    // 0x2a39d8: 0x0  nop
    ctx->pc = 0x2a39d8u;
    // NOP
label_2a39dc:
    // 0x2a39dc: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2a39e0:
    if (ctx->pc == 0x2A39E0u) {
        ctx->pc = 0x2A39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39DCu;
        // 0x2a39e0: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39E4u;
        goto label_2a39e4;
    }
    ctx->pc = 0x2A39DCu;
    {
        const bool branch_taken_0x2a39dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a39dc) {
            ctx->pc = 0x2A39E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A39DCu;
            // 0x2a39e0: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3A20u;
            goto label_2a3a20;
        }
    }
    ctx->pc = 0x2A39E4u;
label_2a39e4:
    // 0x2a39e4: 0xc0a367c  jal         func_28D9F0
label_2a39e8:
    if (ctx->pc == 0x2A39E8u) {
        ctx->pc = 0x2A39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39E4u;
        // 0x2a39e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39ECu;
        goto label_2a39ec;
    }
    ctx->pc = 0x2A39E4u;
    SET_GPR_U32(ctx, 31, 0x2A39ECu);
    ctx->pc = 0x2A39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39E4u;
    // 0x2a39e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A39E4u, 0x2A39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39ECu;
label_2a39ec:
    // 0x2a39ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a39ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a39f0:
    // 0x2a39f0: 0x124000d9  beqz        $s2, . + 4 + (0xD9 << 2)
label_2a39f4:
    if (ctx->pc == 0x2A39F4u) {
        ctx->pc = 0x2A39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39F0u;
        // 0x2a39f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39F8u;
        goto label_2a39f8;
    }
    ctx->pc = 0x2A39F0u;
    {
        const bool branch_taken_0x2a39f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39F0u;
        // 0x2a39f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39f0) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A39F8u;
label_2a39f8:
    // 0x2a39f8: 0xc0884f6  jal         func_2213D8
label_2a39fc:
    if (ctx->pc == 0x2A39FCu) {
        ctx->pc = 0x2A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39F8u;
        // 0x2a39fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A00u;
        goto label_2a3a00;
    }
    ctx->pc = 0x2A39F8u;
    SET_GPR_U32(ctx, 31, 0x2A3A00u);
    ctx->pc = 0x2A39FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39F8u;
    // 0x2a39fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2A39F8u, 0x2A3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A00u;
label_2a3a00:
    // 0x2a3a00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a3a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3a04:
    // 0x2a3a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a3a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a08:
    // 0x2a3a08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a3a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a0c:
    // 0x2a3a0c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a3a0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a3a10:
    // 0x2a3a10: 0xc0bf800  jal         func_2FE000
label_2a3a14:
    if (ctx->pc == 0x2A3A14u) {
        ctx->pc = 0x2A3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A10u;
        // 0x2a3a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A18u;
        goto label_2a3a18;
    }
    ctx->pc = 0x2A3A10u;
    SET_GPR_U32(ctx, 31, 0x2A3A18u);
    ctx->pc = 0x2A3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A10u;
    // 0x2a3a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A3A10u, 0x2A3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A18u;
label_2a3a18:
    // 0x2a3a18: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2a3a1c:
    if (ctx->pc == 0x2A3A1Cu) {
        ctx->pc = 0x2A3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A18u;
        // 0x2a3a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A20u;
        goto label_2a3a20;
    }
    ctx->pc = 0x2A3A18u;
    {
        const bool branch_taken_0x2a3a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A18u;
        // 0x2a3a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a18) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3A20u;
label_2a3a20:
    // 0x2a3a20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a3a24:
    if (ctx->pc == 0x2A3A24u) {
        ctx->pc = 0x2A3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A20u;
        // 0x2a3a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A28u;
        goto label_2a3a28;
    }
    ctx->pc = 0x2A3A20u;
    {
        const bool branch_taken_0x2a3a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A20u;
        // 0x2a3a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a20) {
            ctx->pc = 0x2A3A40u;
            goto label_2a3a40;
        }
    }
    ctx->pc = 0x2A3A28u;
label_2a3a28:
    // 0x2a3a28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a3a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a2c:
    // 0x2a3a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a30:
    // 0x2a3a30: 0xc0888a2  jal         func_222288
label_2a3a34:
    if (ctx->pc == 0x2A3A34u) {
        ctx->pc = 0x2A3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A30u;
        // 0x2a3a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A38u;
        goto label_2a3a38;
    }
    ctx->pc = 0x2A3A30u;
    SET_GPR_U32(ctx, 31, 0x2A3A38u);
    ctx->pc = 0x2A3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A30u;
    // 0x2a3a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2A3A30u, 0x2A3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A38u;
label_2a3a38:
    // 0x2a3a38: 0x504000c6  beql        $v0, $zero, . + 4 + (0xC6 << 2)
label_2a3a3c:
    if (ctx->pc == 0x2A3A3Cu) {
        ctx->pc = 0x2A3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A38u;
        // 0x2a3a3c: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A40u;
        goto label_2a3a40;
    }
    ctx->pc = 0x2A3A38u;
    {
        const bool branch_taken_0x2a3a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3a38) {
            ctx->pc = 0x2A3A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3A38u;
            // 0x2a3a3c: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3A40u;
label_2a3a40:
    // 0x2a3a40: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2a3a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2a3a44:
    // 0x2a3a44: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2a3a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2a3a48:
    // 0x2a3a48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a3a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3a4c:
    // 0x2a3a4c: 0xc12e29c  jal         func_4B8A70
label_2a3a50:
    if (ctx->pc == 0x2A3A50u) {
        ctx->pc = 0x2A3A54u;
        goto label_2a3a54;
    }
    ctx->pc = 0x2A3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A54u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2A3A4Cu, 0x2A3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A54u;
label_2a3a54:
    // 0x2a3a54: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2a3a54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2a3a58:
    // 0x2a3a58: 0x26824b00  addiu       $v0, $s4, 0x4B00
    ctx->pc = 0x2a3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
label_2a3a5c:
    // 0x2a3a5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a3a5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a3a60:
    // 0x2a3a60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a3a64:
    // 0x2a3a64: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2a3a68:
    // 0x2a3a68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a3a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2a3a6c:
    // 0x2a3a6c: 0xc0cd8ec  jal         func_3363B0
label_2a3a70:
    if (ctx->pc == 0x2A3A70u) {
        ctx->pc = 0x2A3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A6Cu;
        // 0x2a3a70: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A74u;
        goto label_2a3a74;
    }
    ctx->pc = 0x2A3A6Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A74u);
    ctx->pc = 0x2A3A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A6Cu;
    // 0x2a3a70: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2A3A6Cu, 0x2A3A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A74u;
label_2a3a74:
    // 0x2a3a74: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2a3a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3a78:
    // 0x2a3a78: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2a3a78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3a7c:
    // 0x2a3a7c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2a3a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a3a80:
    // 0x2a3a80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a3a80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a3a84:
    // 0x2a3a84: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a3a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a3a88:
    // 0x2a3a88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a3a88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2a3a8c:
    // 0x2a3a8c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2a3a8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2a3a90:
    // 0x2a3a90: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x2a3a90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3a94:
    // 0x2a3a94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2a3a94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a3a98:
    // 0x2a3a98: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2a3a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a3a9c:
    // 0x2a3a9c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2a3a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a3aa0:
    // 0x2a3aa0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2a3aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a3aa4:
    // 0x2a3aa4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2a3aa4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2a3aa8:
    // 0x2a3aa8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2a3aa8u;
    // VWAITQ (Q already resolved in this runtime)
label_2a3aac:
    // 0x2a3aac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2a3aacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a3ab0:
    // 0x2a3ab0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2a3ab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2a3ab4:
    // 0x2a3ab4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2a3ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2a3ab8:
    // 0x2a3ab8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2a3ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2a3abc:
    // 0x2a3abc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a3abcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a3ac0:
    // 0x2a3ac0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2a3ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a3ac4:
    // 0x2a3ac4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2a3ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a3ac8:
    // 0x2a3ac8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2a3ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a3acc:
    // 0x2a3acc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2a3accu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_2a3ad0:
    // 0x2a3ad0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2a3ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2a3ad4:
    // 0x2a3ad4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a3ad4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3ad8:
    // 0x2a3ad8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2a3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2a3adc:
    // 0x2a3adc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a3adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a3ae0:
    // 0x2a3ae0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2a3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2a3ae4:
    // 0x2a3ae4: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
label_2a3ae8:
    if (ctx->pc == 0x2A3AE8u) {
        ctx->pc = 0x2A3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AE4u;
        // 0x2a3ae8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3AECu;
        goto label_2a3aec;
    }
    ctx->pc = 0x2A3AE4u;
    {
        const bool branch_taken_0x2a3ae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AE4u;
        // 0x2a3ae8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ae4) {
            ctx->pc = 0x2A3D50u;
            goto label_2a3d50;
        }
    }
    ctx->pc = 0x2A3AECu;
label_2a3aec:
    // 0x2a3aec: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2a3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a3af0:
    // 0x2a3af0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a3af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a3af4:
    // 0x2a3af4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2a3af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a3af8:
    // 0x2a3af8: 0x0  nop
    ctx->pc = 0x2a3af8u;
    // NOP
label_2a3afc:
    // 0x2a3afc: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
label_2a3b00:
    if (ctx->pc == 0x2A3B00u) {
        ctx->pc = 0x2A3B04u;
        goto label_2a3b04;
    }
    ctx->pc = 0x2A3AFCu;
    {
        const bool branch_taken_0x2a3afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3afc) {
            ctx->pc = 0x2A3C7Cu;
            goto label_2a3c7c;
        }
    }
    ctx->pc = 0x2A3B04u;
label_2a3b04:
    // 0x2a3b04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3b08:
    // 0x2a3b08: 0xc0874fa  jal         func_21D3E8
label_2a3b0c:
    if (ctx->pc == 0x2A3B0Cu) {
        ctx->pc = 0x2A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B08u;
        // 0x2a3b0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B10u;
        goto label_2a3b10;
    }
    ctx->pc = 0x2A3B08u;
    SET_GPR_U32(ctx, 31, 0x2A3B10u);
    ctx->pc = 0x2A3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B08u;
    // 0x2a3b0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A3B08u, 0x2A3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B10u;
label_2a3b10:
    // 0x2a3b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b14:
    // 0x2a3b14: 0xc051fbc  jal         func_147EF0
label_2a3b18:
    if (ctx->pc == 0x2A3B18u) {
        ctx->pc = 0x2A3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B14u;
        // 0x2a3b18: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B1Cu;
        goto label_2a3b1c;
    }
    ctx->pc = 0x2A3B14u;
    SET_GPR_U32(ctx, 31, 0x2A3B1Cu);
    ctx->pc = 0x2A3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B14u;
    // 0x2a3b18: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A3B14u, 0x2A3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B1Cu;
label_2a3b1c:
    // 0x2a3b1c: 0x96020034  lhu         $v0, 0x34($s0)
    ctx->pc = 0x2a3b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_2a3b20:
    // 0x2a3b20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a3b24:
    // 0x2a3b24: 0x86030030  lh          $v1, 0x30($s0)
    ctx->pc = 0x2a3b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_2a3b28:
    // 0x2a3b28: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x2a3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a3b2c:
    // 0x2a3b2c: 0xa6050032  sh          $a1, 0x32($s0)
    ctx->pc = 0x2a3b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 5));
label_2a3b30:
    // 0x2a3b30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3b34:
    // 0x2a3b34: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2a3b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a3b38:
    // 0x2a3b38: 0x8ec5b734  lw          $a1, -0x48CC($s6)
    ctx->pc = 0x2a3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_2a3b3c:
    // 0x2a3b3c: 0xa6020034  sh          $v0, 0x34($s0)
    ctx->pc = 0x2a3b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
label_2a3b40:
    // 0x2a3b40: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2a3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2a3b44:
    // 0x2a3b44: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a3b48:
    // 0x2a3b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3b4c:
    // 0x2a3b4c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2a3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2a3b50:
    // 0x2a3b50: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a3b54:
    // 0x2a3b54: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2a3b54u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a3b58:
    // 0x2a3b58: 0x1080007e  beqz        $a0, . + 4 + (0x7E << 2)
label_2a3b5c:
    if (ctx->pc == 0x2A3B5Cu) {
        ctx->pc = 0x2A3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B58u;
        // 0x2a3b5c: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B60u;
        goto label_2a3b60;
    }
    ctx->pc = 0x2A3B58u;
    {
        const bool branch_taken_0x2a3b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B58u;
        // 0x2a3b5c: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b58) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3B60u;
label_2a3b60:
    // 0x2a3b60: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x2a3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2a3b64:
    // 0x2a3b64: 0x1462007c  bne         $v1, $v0, . + 4 + (0x7C << 2)
label_2a3b68:
    if (ctx->pc == 0x2A3B68u) {
        ctx->pc = 0x2A3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B64u;
        // 0x2a3b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B6Cu;
        goto label_2a3b6c;
    }
    ctx->pc = 0x2A3B64u;
    {
        const bool branch_taken_0x2a3b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B64u;
        // 0x2a3b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b64) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3B6Cu;
label_2a3b6c:
    // 0x2a3b6c: 0x8603003a  lh          $v1, 0x3A($s0)
    ctx->pc = 0x2a3b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_2a3b70:
    // 0x2a3b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a3b74:
    // 0x2a3b74: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_2a3b78:
    if (ctx->pc == 0x2A3B78u) {
        ctx->pc = 0x2A3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B74u;
        // 0x2a3b78: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B7Cu;
        goto label_2a3b7c;
    }
    ctx->pc = 0x2A3B74u;
    {
        const bool branch_taken_0x2a3b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B74u;
        // 0x2a3b78: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b74) {
            ctx->pc = 0x2A3BFCu;
            goto label_2a3bfc;
        }
    }
    ctx->pc = 0x2A3B7Cu;
label_2a3b7c:
    // 0x2a3b7c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_2a3b80:
    if (ctx->pc == 0x2A3B80u) {
        ctx->pc = 0x2A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B7Cu;
        // 0x2a3b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B84u;
        goto label_2a3b84;
    }
    ctx->pc = 0x2A3B7Cu;
    {
        const bool branch_taken_0x2a3b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B7Cu;
        // 0x2a3b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b7c) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3B84u;
label_2a3b84:
    // 0x2a3b84: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
label_2a3b88:
    if (ctx->pc == 0x2A3B88u) {
        ctx->pc = 0x2A3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B84u;
        // 0x2a3b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B8Cu;
        goto label_2a3b8c;
    }
    ctx->pc = 0x2A3B84u;
    {
        const bool branch_taken_0x2a3b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B84u;
        // 0x2a3b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b84) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3B8Cu;
label_2a3b8c:
    // 0x2a3b8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3b90:
    // 0x2a3b90: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x2a3b90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_2a3b94:
    // 0x2a3b94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3b98:
    // 0x2a3b98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3b9c:
    // 0x2a3b9c: 0x40f809  jalr        $v0
label_2a3ba0:
    if (ctx->pc == 0x2A3BA0u) {
        ctx->pc = 0x2A3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B9Cu;
        // 0x2a3ba0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BA4u;
        goto label_2a3ba4;
    }
    ctx->pc = 0x2A3B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3BA4u);
        ctx->pc = 0x2A3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B9Cu;
        // 0x2a3ba0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3B9Cu, 0x2A3BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3BA4u;
label_2a3ba4:
    // 0x2a3ba4: 0x8647940c  lh          $a3, -0x6BF4($s2)
    ctx->pc = 0x2a3ba4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939660)));
label_2a3ba8:
    // 0x2a3ba8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a3bac:
    // 0x2a3bac: 0x24630c20  addiu       $v1, $v1, 0xC20
    ctx->pc = 0x2a3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3104));
label_2a3bb0:
    // 0x2a3bb0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a3bb4:
    // 0x2a3bb4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2a3bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2a3bb8:
    // 0x2a3bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bbc:
    // 0x2a3bbc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2a3bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2a3bc0:
    // 0x2a3bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bc4:
    // 0x2a3bc4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2a3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a3bc8:
    // 0x2a3bc8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3bcc:
    // 0x2a3bcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bd0:
    // 0x2a3bd0: 0xc08e568  jal         func_2395A0
label_2a3bd4:
    if (ctx->pc == 0x2A3BD4u) {
        ctx->pc = 0x2A3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BD0u;
        // 0x2a3bd4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BD8u;
        goto label_2a3bd8;
    }
    ctx->pc = 0x2A3BD0u;
    SET_GPR_U32(ctx, 31, 0x2A3BD8u);
    ctx->pc = 0x2A3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BD0u;
    // 0x2a3bd4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x2A3BD0u, 0x2A3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BD8u;
label_2a3bd8:
    // 0x2a3bd8: 0x9642940c  lhu         $v0, -0x6BF4($s2)
    ctx->pc = 0x2a3bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939660)));
label_2a3bdc:
    // 0x2a3bdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3be0:
    // 0x2a3be0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a3be4:
    // 0x2a3be4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a3be4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a3be8:
    // 0x2a3be8: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2a3be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2a3bec:
    // 0x2a3bec: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_2a3bf0:
    if (ctx->pc == 0x2A3BF0u) {
        ctx->pc = 0x2A3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BECu;
        // 0x2a3bf0: 0xa642940c  sh          $v0, -0x6BF4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939660), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BF4u;
        goto label_2a3bf4;
    }
    ctx->pc = 0x2A3BECu;
    {
        const bool branch_taken_0x2a3bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BECu;
        // 0x2a3bf0: 0xa642940c  sh          $v0, -0x6BF4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939660), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bec) {
            ctx->pc = 0x2A3C68u;
            goto label_2a3c68;
        }
    }
    ctx->pc = 0x2A3BF4u;
label_2a3bf4:
    // 0x2a3bf4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2a3bf8:
    if (ctx->pc == 0x2A3BF8u) {
        ctx->pc = 0x2A3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BF4u;
        // 0x2a3bf8: 0xa640940c  sh          $zero, -0x6BF4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939660), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BFCu;
        goto label_2a3bfc;
    }
    ctx->pc = 0x2A3BF4u;
    {
        const bool branch_taken_0x2a3bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BF4u;
        // 0x2a3bf8: 0xa640940c  sh          $zero, -0x6BF4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939660), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bf4) {
            ctx->pc = 0x2A3C68u;
            goto label_2a3c68;
        }
    }
    ctx->pc = 0x2A3BFCu;
label_2a3bfc:
    // 0x2a3bfc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3c00:
    // 0x2a3c00: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x2a3c00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_2a3c04:
    // 0x2a3c04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3c08:
    // 0x2a3c08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3c0c:
    // 0x2a3c0c: 0x40f809  jalr        $v0
label_2a3c10:
    if (ctx->pc == 0x2A3C10u) {
        ctx->pc = 0x2A3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C0Cu;
        // 0x2a3c10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C14u;
        goto label_2a3c14;
    }
    ctx->pc = 0x2A3C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3C14u);
        ctx->pc = 0x2A3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C0Cu;
        // 0x2a3c10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C0Cu, 0x2A3C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3C14u;
label_2a3c14:
    // 0x2a3c14: 0x8647940e  lh          $a3, -0x6BF2($s2)
    ctx->pc = 0x2a3c14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939662)));
label_2a3c18:
    // 0x2a3c18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a3c1c:
    // 0x2a3c1c: 0x24630c30  addiu       $v1, $v1, 0xC30
    ctx->pc = 0x2a3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3120));
label_2a3c20:
    // 0x2a3c20: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a3c24:
    // 0x2a3c24: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2a3c24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2a3c28:
    // 0x2a3c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c2c:
    // 0x2a3c2c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2a3c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2a3c30:
    // 0x2a3c30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c34:
    // 0x2a3c34: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a3c38:
    // 0x2a3c38: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a3c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3c3c:
    // 0x2a3c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c40:
    // 0x2a3c40: 0xc08e568  jal         func_2395A0
label_2a3c44:
    if (ctx->pc == 0x2A3C44u) {
        ctx->pc = 0x2A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C40u;
        // 0x2a3c44: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C48u;
        goto label_2a3c48;
    }
    ctx->pc = 0x2A3C40u;
    SET_GPR_U32(ctx, 31, 0x2A3C48u);
    ctx->pc = 0x2A3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C40u;
    // 0x2a3c44: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x2A3C40u, 0x2A3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C48u;
label_2a3c48:
    // 0x2a3c48: 0x9642940e  lhu         $v0, -0x6BF2($s2)
    ctx->pc = 0x2a3c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939662)));
label_2a3c4c:
    // 0x2a3c4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3c50:
    // 0x2a3c50: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a3c54:
    // 0x2a3c54: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a3c54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a3c58:
    // 0x2a3c58: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2a3c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2a3c5c:
    // 0x2a3c5c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2a3c60:
    if (ctx->pc == 0x2A3C60u) {
        ctx->pc = 0x2A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C5Cu;
        // 0x2a3c60: 0xa642940e  sh          $v0, -0x6BF2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939662), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C64u;
        goto label_2a3c64;
    }
    ctx->pc = 0x2A3C5Cu;
    {
        const bool branch_taken_0x2a3c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C5Cu;
        // 0x2a3c60: 0xa642940e  sh          $v0, -0x6BF2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939662), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c5c) {
            ctx->pc = 0x2A3C68u;
            goto label_2a3c68;
        }
    }
    ctx->pc = 0x2A3C64u;
label_2a3c64:
    // 0x2a3c64: 0xa640940e  sh          $zero, -0x6BF2($s2)
    ctx->pc = 0x2a3c64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294939662), (uint16_t)GPR_U32(ctx, 0));
label_2a3c68:
    // 0x2a3c68: 0x8ec3b734  lw          $v1, -0x48CC($s6)
    ctx->pc = 0x2a3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_2a3c6c:
    // 0x2a3c6c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a3c70:
    // 0x2a3c70: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2a3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2a3c74:
    // 0x2a3c74: 0x10000037  b           . + 4 + (0x37 << 2)
label_2a3c78:
    if (ctx->pc == 0x2A3C78u) {
        ctx->pc = 0x2A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C74u;
        // 0x2a3c78: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C7Cu;
        goto label_2a3c7c;
    }
    ctx->pc = 0x2A3C74u;
    {
        const bool branch_taken_0x2a3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C74u;
        // 0x2a3c78: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c74) {
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3C7Cu;
label_2a3c7c:
    // 0x2a3c7c: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
label_2a3c80:
    if (ctx->pc == 0x2A3C80u) {
        ctx->pc = 0x2A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C7Cu;
        // 0x2a3c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C84u;
        goto label_2a3c84;
    }
    ctx->pc = 0x2A3C7Cu;
    {
        const bool branch_taken_0x2a3c7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C7Cu;
        // 0x2a3c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c7c) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3C84u;
label_2a3c84:
    // 0x2a3c84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a3c88:
    // 0x2a3c88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3c8c:
    // 0x2a3c8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3c90:
    // 0x2a3c90: 0x40f809  jalr        $v0
label_2a3c94:
    if (ctx->pc == 0x2A3C94u) {
        ctx->pc = 0x2A3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C90u;
        // 0x2a3c94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C98u;
        goto label_2a3c98;
    }
    ctx->pc = 0x2A3C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3C98u);
        ctx->pc = 0x2A3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C90u;
        // 0x2a3c94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C90u, 0x2A3C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3C98u;
label_2a3c98:
    // 0x2a3c98: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a3c9c:
    // 0x2a3c9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3ca0:
    // 0x2a3ca0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3ca4:
    // 0x2a3ca4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3ca8:
    // 0x2a3ca8: 0x40f809  jalr        $v0
label_2a3cac:
    if (ctx->pc == 0x2A3CACu) {
        ctx->pc = 0x2A3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CA8u;
        // 0x2a3cac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CB0u;
        goto label_2a3cb0;
    }
    ctx->pc = 0x2A3CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3CB0u);
        ctx->pc = 0x2A3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CA8u;
        // 0x2a3cac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3CA8u, 0x2A3CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3CB0u;
label_2a3cb0:
    // 0x2a3cb0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a3cb4:
    // 0x2a3cb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a3cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a3cb8:
    // 0x2a3cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a3cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3cbc:
    // 0x2a3cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cc0:
    // 0x2a3cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a3cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cc4:
    // 0x2a3cc4: 0xc0bf832  jal         func_2FE0C8
label_2a3cc8:
    if (ctx->pc == 0x2A3CC8u) {
        ctx->pc = 0x2A3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CC4u;
        // 0x2a3cc8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CCCu;
        goto label_2a3ccc;
    }
    ctx->pc = 0x2A3CC4u;
    SET_GPR_U32(ctx, 31, 0x2A3CCCu);
    ctx->pc = 0x2A3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CC4u;
    // 0x2a3cc8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A3CC4u, 0x2A3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CCCu;
label_2a3ccc:
    // 0x2a3ccc: 0x10000022  b           . + 4 + (0x22 << 2)
label_2a3cd0:
    if (ctx->pc == 0x2A3CD0u) {
        ctx->pc = 0x2A3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CCCu;
        // 0x2a3cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CD4u;
        goto label_2a3cd4;
    }
    ctx->pc = 0x2A3CCCu;
    {
        const bool branch_taken_0x2a3ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CCCu;
        // 0x2a3cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ccc) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3CD4u;
label_2a3cd4:
    // 0x2a3cd4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a3cd8:
    // 0x2a3cd8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2a3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2a3cdc:
    // 0x2a3cdc: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a3ce0:
    // 0x2a3ce0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a3ce4:
    // 0x2a3ce4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a3ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a3ce8:
    // 0x2a3ce8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2a3cec:
    if (ctx->pc == 0x2A3CECu) {
        ctx->pc = 0x2A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CE8u;
        // 0x2a3cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CF0u;
        goto label_2a3cf0;
    }
    ctx->pc = 0x2A3CE8u;
    {
        const bool branch_taken_0x2a3ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CE8u;
        // 0x2a3cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ce8) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3CF0u;
label_2a3cf0:
    // 0x2a3cf0: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
label_2a3cf4:
    if (ctx->pc == 0x2A3CF4u) {
        ctx->pc = 0x2A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CF0u;
        // 0x2a3cf4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CF8u;
        goto label_2a3cf8;
    }
    ctx->pc = 0x2A3CF0u;
    {
        const bool branch_taken_0x2a3cf0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3cf0) {
            ctx->pc = 0x2A3CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3CF0u;
            // 0x2a3cf4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3D1Cu;
            goto label_2a3d1c;
        }
    }
    ctx->pc = 0x2A3CF8u;
label_2a3cf8:
    // 0x2a3cf8: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x2a3cf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_2a3cfc:
    // 0x2a3cfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3d00:
    // 0x2a3d00: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_2a3d04:
    if (ctx->pc == 0x2A3D04u) {
        ctx->pc = 0x2A3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D00u;
        // 0x2a3d04: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3D08u;
        goto label_2a3d08;
    }
    ctx->pc = 0x2A3D00u;
    {
        const bool branch_taken_0x2a3d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3d00) {
            ctx->pc = 0x2A3D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3D00u;
            // 0x2a3d04: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3D08u;
label_2a3d08:
    // 0x2a3d08: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x2a3d08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_2a3d0c:
    // 0x2a3d0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a3d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a3d10:
    // 0x2a3d10: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2a3d14:
    if (ctx->pc == 0x2A3D14u) {
        ctx->pc = 0x2A3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D10u;
        // 0x2a3d14: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3D18u;
        goto label_2a3d18;
    }
    ctx->pc = 0x2A3D10u;
    {
        const bool branch_taken_0x2a3d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3d10) {
            ctx->pc = 0x2A3D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3D10u;
            // 0x2a3d14: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3D54u;
            goto label_2a3d54;
        }
    }
    ctx->pc = 0x2A3D18u;
label_2a3d18:
    // 0x2a3d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3d1c:
    // 0x2a3d1c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2a3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2a3d20:
    // 0x2a3d20: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2a3d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a3d24:
    // 0x2a3d24: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_2a3d28:
    if (ctx->pc == 0x2A3D28u) {
        ctx->pc = 0x2A3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D24u;
        // 0x2a3d28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3D2Cu;
        goto label_2a3d2c;
    }
    ctx->pc = 0x2A3D24u;
    {
        const bool branch_taken_0x2a3d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3d24) {
            ctx->pc = 0x2A3D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3D24u;
            // 0x2a3d28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3D2Cu;
label_2a3d2c:
    // 0x2a3d2c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2a3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2a3d30:
    // 0x2a3d30: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2a3d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2a3d34:
    // 0x2a3d34: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2a3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2a3d38:
    // 0x2a3d38: 0x40f809  jalr        $v0
label_2a3d3c:
    if (ctx->pc == 0x2A3D3Cu) {
        ctx->pc = 0x2A3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D38u;
        // 0x2a3d3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3D40u;
        goto label_2a3d40;
    }
    ctx->pc = 0x2A3D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3D40u);
        ctx->pc = 0x2A3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D38u;
        // 0x2a3d3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3D38u, 0x2A3D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3D40u;
label_2a3d40:
    // 0x2a3d40: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2a3d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_2a3d44:
    // 0x2a3d44: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2a3d44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_2a3d48:
    // 0x2a3d48: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3d4c:
    if (ctx->pc == 0x2A3D4Cu) {
        ctx->pc = 0x2A3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D48u;
        // 0x2a3d4c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3D50u;
        goto label_2a3d50;
    }
    ctx->pc = 0x2A3D48u;
    {
        const bool branch_taken_0x2a3d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D48u;
        // 0x2a3d4c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d48) {
            ctx->pc = 0x2A3D58u;
            goto label_2a3d58;
        }
    }
    ctx->pc = 0x2A3D50u;
label_2a3d50:
    // 0x2a3d50: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x2a3d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
label_2a3d54:
    // 0x2a3d54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a3d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3d58:
    // 0x2a3d58: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2a3d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a3d5c:
    // 0x2a3d5c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2a3d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a3d60:
    // 0x2a3d60: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2a3d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a3d64:
    // 0x2a3d64: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2a3d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a3d68:
    // 0x2a3d68: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2a3d68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a3d6c:
    // 0x2a3d6c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2a3d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a3d70:
    // 0x2a3d70: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2a3d70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a3d74:
    // 0x2a3d74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a3d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a3d78:
    // 0x2a3d78: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2a3d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a3d7c:
    // 0x2a3d7c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2a3d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a3d80:
    // 0x2a3d80: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2a3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a3d84:
    // 0x2a3d84: 0x3e00008  jr          $ra
label_2a3d88:
    if (ctx->pc == 0x2A3D88u) {
        ctx->pc = 0x2A3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D84u;
        // 0x2a3d88: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3D8Cu;
        goto label_2a3d8c;
    }
    ctx->pc = 0x2A3D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D84u;
        // 0x2a3d88: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3D8Cu;
label_2a3d8c:
    // 0x2a3d8c: 0x0  nop
    ctx->pc = 0x2a3d8cu;
    // NOP
    ctx->pc = 0x2a3d90u;
}
