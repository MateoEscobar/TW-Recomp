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

// Function: sub_004C3528
// Address: 0x4c3528 - 0x4c3ba0
void sub_004C3528_0x4c3528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3528_0x4c3528");
#endif

    switch (ctx->pc) {
        case 0x4c3528u: goto label_4c3528;
        case 0x4c352cu: goto label_4c352c;
        case 0x4c3530u: goto label_4c3530;
        case 0x4c3534u: goto label_4c3534;
        case 0x4c3538u: goto label_4c3538;
        case 0x4c353cu: goto label_4c353c;
        case 0x4c3540u: goto label_4c3540;
        case 0x4c3544u: goto label_4c3544;
        case 0x4c3548u: goto label_4c3548;
        case 0x4c354cu: goto label_4c354c;
        case 0x4c3550u: goto label_4c3550;
        case 0x4c3554u: goto label_4c3554;
        case 0x4c3558u: goto label_4c3558;
        case 0x4c355cu: goto label_4c355c;
        case 0x4c3560u: goto label_4c3560;
        case 0x4c3564u: goto label_4c3564;
        case 0x4c3568u: goto label_4c3568;
        case 0x4c356cu: goto label_4c356c;
        case 0x4c3570u: goto label_4c3570;
        case 0x4c3574u: goto label_4c3574;
        case 0x4c3578u: goto label_4c3578;
        case 0x4c357cu: goto label_4c357c;
        case 0x4c3580u: goto label_4c3580;
        case 0x4c3584u: goto label_4c3584;
        case 0x4c3588u: goto label_4c3588;
        case 0x4c358cu: goto label_4c358c;
        case 0x4c3590u: goto label_4c3590;
        case 0x4c3594u: goto label_4c3594;
        case 0x4c3598u: goto label_4c3598;
        case 0x4c359cu: goto label_4c359c;
        case 0x4c35a0u: goto label_4c35a0;
        case 0x4c35a4u: goto label_4c35a4;
        case 0x4c35a8u: goto label_4c35a8;
        case 0x4c35acu: goto label_4c35ac;
        case 0x4c35b0u: goto label_4c35b0;
        case 0x4c35b4u: goto label_4c35b4;
        case 0x4c35b8u: goto label_4c35b8;
        case 0x4c35bcu: goto label_4c35bc;
        case 0x4c35c0u: goto label_4c35c0;
        case 0x4c35c4u: goto label_4c35c4;
        case 0x4c35c8u: goto label_4c35c8;
        case 0x4c35ccu: goto label_4c35cc;
        case 0x4c35d0u: goto label_4c35d0;
        case 0x4c35d4u: goto label_4c35d4;
        case 0x4c35d8u: goto label_4c35d8;
        case 0x4c35dcu: goto label_4c35dc;
        case 0x4c35e0u: goto label_4c35e0;
        case 0x4c35e4u: goto label_4c35e4;
        case 0x4c35e8u: goto label_4c35e8;
        case 0x4c35ecu: goto label_4c35ec;
        case 0x4c35f0u: goto label_4c35f0;
        case 0x4c35f4u: goto label_4c35f4;
        case 0x4c35f8u: goto label_4c35f8;
        case 0x4c35fcu: goto label_4c35fc;
        case 0x4c3600u: goto label_4c3600;
        case 0x4c3604u: goto label_4c3604;
        case 0x4c3608u: goto label_4c3608;
        case 0x4c360cu: goto label_4c360c;
        case 0x4c3610u: goto label_4c3610;
        case 0x4c3614u: goto label_4c3614;
        case 0x4c3618u: goto label_4c3618;
        case 0x4c361cu: goto label_4c361c;
        case 0x4c3620u: goto label_4c3620;
        case 0x4c3624u: goto label_4c3624;
        case 0x4c3628u: goto label_4c3628;
        case 0x4c362cu: goto label_4c362c;
        case 0x4c3630u: goto label_4c3630;
        case 0x4c3634u: goto label_4c3634;
        case 0x4c3638u: goto label_4c3638;
        case 0x4c363cu: goto label_4c363c;
        case 0x4c3640u: goto label_4c3640;
        case 0x4c3644u: goto label_4c3644;
        case 0x4c3648u: goto label_4c3648;
        case 0x4c364cu: goto label_4c364c;
        case 0x4c3650u: goto label_4c3650;
        case 0x4c3654u: goto label_4c3654;
        case 0x4c3658u: goto label_4c3658;
        case 0x4c365cu: goto label_4c365c;
        case 0x4c3660u: goto label_4c3660;
        case 0x4c3664u: goto label_4c3664;
        case 0x4c3668u: goto label_4c3668;
        case 0x4c366cu: goto label_4c366c;
        case 0x4c3670u: goto label_4c3670;
        case 0x4c3674u: goto label_4c3674;
        case 0x4c3678u: goto label_4c3678;
        case 0x4c367cu: goto label_4c367c;
        case 0x4c3680u: goto label_4c3680;
        case 0x4c3684u: goto label_4c3684;
        case 0x4c3688u: goto label_4c3688;
        case 0x4c368cu: goto label_4c368c;
        case 0x4c3690u: goto label_4c3690;
        case 0x4c3694u: goto label_4c3694;
        case 0x4c3698u: goto label_4c3698;
        case 0x4c369cu: goto label_4c369c;
        case 0x4c36a0u: goto label_4c36a0;
        case 0x4c36a4u: goto label_4c36a4;
        case 0x4c36a8u: goto label_4c36a8;
        case 0x4c36acu: goto label_4c36ac;
        case 0x4c36b0u: goto label_4c36b0;
        case 0x4c36b4u: goto label_4c36b4;
        case 0x4c36b8u: goto label_4c36b8;
        case 0x4c36bcu: goto label_4c36bc;
        case 0x4c36c0u: goto label_4c36c0;
        case 0x4c36c4u: goto label_4c36c4;
        case 0x4c36c8u: goto label_4c36c8;
        case 0x4c36ccu: goto label_4c36cc;
        case 0x4c36d0u: goto label_4c36d0;
        case 0x4c36d4u: goto label_4c36d4;
        case 0x4c36d8u: goto label_4c36d8;
        case 0x4c36dcu: goto label_4c36dc;
        case 0x4c36e0u: goto label_4c36e0;
        case 0x4c36e4u: goto label_4c36e4;
        case 0x4c36e8u: goto label_4c36e8;
        case 0x4c36ecu: goto label_4c36ec;
        case 0x4c36f0u: goto label_4c36f0;
        case 0x4c36f4u: goto label_4c36f4;
        case 0x4c36f8u: goto label_4c36f8;
        case 0x4c36fcu: goto label_4c36fc;
        case 0x4c3700u: goto label_4c3700;
        case 0x4c3704u: goto label_4c3704;
        case 0x4c3708u: goto label_4c3708;
        case 0x4c370cu: goto label_4c370c;
        case 0x4c3710u: goto label_4c3710;
        case 0x4c3714u: goto label_4c3714;
        case 0x4c3718u: goto label_4c3718;
        case 0x4c371cu: goto label_4c371c;
        case 0x4c3720u: goto label_4c3720;
        case 0x4c3724u: goto label_4c3724;
        case 0x4c3728u: goto label_4c3728;
        case 0x4c372cu: goto label_4c372c;
        case 0x4c3730u: goto label_4c3730;
        case 0x4c3734u: goto label_4c3734;
        case 0x4c3738u: goto label_4c3738;
        case 0x4c373cu: goto label_4c373c;
        case 0x4c3740u: goto label_4c3740;
        case 0x4c3744u: goto label_4c3744;
        case 0x4c3748u: goto label_4c3748;
        case 0x4c374cu: goto label_4c374c;
        case 0x4c3750u: goto label_4c3750;
        case 0x4c3754u: goto label_4c3754;
        case 0x4c3758u: goto label_4c3758;
        case 0x4c375cu: goto label_4c375c;
        case 0x4c3760u: goto label_4c3760;
        case 0x4c3764u: goto label_4c3764;
        case 0x4c3768u: goto label_4c3768;
        case 0x4c376cu: goto label_4c376c;
        case 0x4c3770u: goto label_4c3770;
        case 0x4c3774u: goto label_4c3774;
        case 0x4c3778u: goto label_4c3778;
        case 0x4c377cu: goto label_4c377c;
        case 0x4c3780u: goto label_4c3780;
        case 0x4c3784u: goto label_4c3784;
        case 0x4c3788u: goto label_4c3788;
        case 0x4c378cu: goto label_4c378c;
        case 0x4c3790u: goto label_4c3790;
        case 0x4c3794u: goto label_4c3794;
        case 0x4c3798u: goto label_4c3798;
        case 0x4c379cu: goto label_4c379c;
        case 0x4c37a0u: goto label_4c37a0;
        case 0x4c37a4u: goto label_4c37a4;
        case 0x4c37a8u: goto label_4c37a8;
        case 0x4c37acu: goto label_4c37ac;
        case 0x4c37b0u: goto label_4c37b0;
        case 0x4c37b4u: goto label_4c37b4;
        case 0x4c37b8u: goto label_4c37b8;
        case 0x4c37bcu: goto label_4c37bc;
        case 0x4c37c0u: goto label_4c37c0;
        case 0x4c37c4u: goto label_4c37c4;
        case 0x4c37c8u: goto label_4c37c8;
        case 0x4c37ccu: goto label_4c37cc;
        case 0x4c37d0u: goto label_4c37d0;
        case 0x4c37d4u: goto label_4c37d4;
        case 0x4c37d8u: goto label_4c37d8;
        case 0x4c37dcu: goto label_4c37dc;
        case 0x4c37e0u: goto label_4c37e0;
        case 0x4c37e4u: goto label_4c37e4;
        case 0x4c37e8u: goto label_4c37e8;
        case 0x4c37ecu: goto label_4c37ec;
        case 0x4c37f0u: goto label_4c37f0;
        case 0x4c37f4u: goto label_4c37f4;
        case 0x4c37f8u: goto label_4c37f8;
        case 0x4c37fcu: goto label_4c37fc;
        case 0x4c3800u: goto label_4c3800;
        case 0x4c3804u: goto label_4c3804;
        case 0x4c3808u: goto label_4c3808;
        case 0x4c380cu: goto label_4c380c;
        case 0x4c3810u: goto label_4c3810;
        case 0x4c3814u: goto label_4c3814;
        case 0x4c3818u: goto label_4c3818;
        case 0x4c381cu: goto label_4c381c;
        case 0x4c3820u: goto label_4c3820;
        case 0x4c3824u: goto label_4c3824;
        case 0x4c3828u: goto label_4c3828;
        case 0x4c382cu: goto label_4c382c;
        case 0x4c3830u: goto label_4c3830;
        case 0x4c3834u: goto label_4c3834;
        case 0x4c3838u: goto label_4c3838;
        case 0x4c383cu: goto label_4c383c;
        case 0x4c3840u: goto label_4c3840;
        case 0x4c3844u: goto label_4c3844;
        case 0x4c3848u: goto label_4c3848;
        case 0x4c384cu: goto label_4c384c;
        case 0x4c3850u: goto label_4c3850;
        case 0x4c3854u: goto label_4c3854;
        case 0x4c3858u: goto label_4c3858;
        case 0x4c385cu: goto label_4c385c;
        case 0x4c3860u: goto label_4c3860;
        case 0x4c3864u: goto label_4c3864;
        case 0x4c3868u: goto label_4c3868;
        case 0x4c386cu: goto label_4c386c;
        case 0x4c3870u: goto label_4c3870;
        case 0x4c3874u: goto label_4c3874;
        case 0x4c3878u: goto label_4c3878;
        case 0x4c387cu: goto label_4c387c;
        case 0x4c3880u: goto label_4c3880;
        case 0x4c3884u: goto label_4c3884;
        case 0x4c3888u: goto label_4c3888;
        case 0x4c388cu: goto label_4c388c;
        case 0x4c3890u: goto label_4c3890;
        case 0x4c3894u: goto label_4c3894;
        case 0x4c3898u: goto label_4c3898;
        case 0x4c389cu: goto label_4c389c;
        case 0x4c38a0u: goto label_4c38a0;
        case 0x4c38a4u: goto label_4c38a4;
        case 0x4c38a8u: goto label_4c38a8;
        case 0x4c38acu: goto label_4c38ac;
        case 0x4c38b0u: goto label_4c38b0;
        case 0x4c38b4u: goto label_4c38b4;
        case 0x4c38b8u: goto label_4c38b8;
        case 0x4c38bcu: goto label_4c38bc;
        case 0x4c38c0u: goto label_4c38c0;
        case 0x4c38c4u: goto label_4c38c4;
        case 0x4c38c8u: goto label_4c38c8;
        case 0x4c38ccu: goto label_4c38cc;
        case 0x4c38d0u: goto label_4c38d0;
        case 0x4c38d4u: goto label_4c38d4;
        case 0x4c38d8u: goto label_4c38d8;
        case 0x4c38dcu: goto label_4c38dc;
        case 0x4c38e0u: goto label_4c38e0;
        case 0x4c38e4u: goto label_4c38e4;
        case 0x4c38e8u: goto label_4c38e8;
        case 0x4c38ecu: goto label_4c38ec;
        case 0x4c38f0u: goto label_4c38f0;
        case 0x4c38f4u: goto label_4c38f4;
        case 0x4c38f8u: goto label_4c38f8;
        case 0x4c38fcu: goto label_4c38fc;
        case 0x4c3900u: goto label_4c3900;
        case 0x4c3904u: goto label_4c3904;
        case 0x4c3908u: goto label_4c3908;
        case 0x4c390cu: goto label_4c390c;
        case 0x4c3910u: goto label_4c3910;
        case 0x4c3914u: goto label_4c3914;
        case 0x4c3918u: goto label_4c3918;
        case 0x4c391cu: goto label_4c391c;
        case 0x4c3920u: goto label_4c3920;
        case 0x4c3924u: goto label_4c3924;
        case 0x4c3928u: goto label_4c3928;
        case 0x4c392cu: goto label_4c392c;
        case 0x4c3930u: goto label_4c3930;
        case 0x4c3934u: goto label_4c3934;
        case 0x4c3938u: goto label_4c3938;
        case 0x4c393cu: goto label_4c393c;
        case 0x4c3940u: goto label_4c3940;
        case 0x4c3944u: goto label_4c3944;
        case 0x4c3948u: goto label_4c3948;
        case 0x4c394cu: goto label_4c394c;
        case 0x4c3950u: goto label_4c3950;
        case 0x4c3954u: goto label_4c3954;
        case 0x4c3958u: goto label_4c3958;
        case 0x4c395cu: goto label_4c395c;
        case 0x4c3960u: goto label_4c3960;
        case 0x4c3964u: goto label_4c3964;
        case 0x4c3968u: goto label_4c3968;
        case 0x4c396cu: goto label_4c396c;
        case 0x4c3970u: goto label_4c3970;
        case 0x4c3974u: goto label_4c3974;
        case 0x4c3978u: goto label_4c3978;
        case 0x4c397cu: goto label_4c397c;
        case 0x4c3980u: goto label_4c3980;
        case 0x4c3984u: goto label_4c3984;
        case 0x4c3988u: goto label_4c3988;
        case 0x4c398cu: goto label_4c398c;
        case 0x4c3990u: goto label_4c3990;
        case 0x4c3994u: goto label_4c3994;
        case 0x4c3998u: goto label_4c3998;
        case 0x4c399cu: goto label_4c399c;
        case 0x4c39a0u: goto label_4c39a0;
        case 0x4c39a4u: goto label_4c39a4;
        case 0x4c39a8u: goto label_4c39a8;
        case 0x4c39acu: goto label_4c39ac;
        case 0x4c39b0u: goto label_4c39b0;
        case 0x4c39b4u: goto label_4c39b4;
        case 0x4c39b8u: goto label_4c39b8;
        case 0x4c39bcu: goto label_4c39bc;
        case 0x4c39c0u: goto label_4c39c0;
        case 0x4c39c4u: goto label_4c39c4;
        case 0x4c39c8u: goto label_4c39c8;
        case 0x4c39ccu: goto label_4c39cc;
        case 0x4c39d0u: goto label_4c39d0;
        case 0x4c39d4u: goto label_4c39d4;
        case 0x4c39d8u: goto label_4c39d8;
        case 0x4c39dcu: goto label_4c39dc;
        case 0x4c39e0u: goto label_4c39e0;
        case 0x4c39e4u: goto label_4c39e4;
        case 0x4c39e8u: goto label_4c39e8;
        case 0x4c39ecu: goto label_4c39ec;
        case 0x4c39f0u: goto label_4c39f0;
        case 0x4c39f4u: goto label_4c39f4;
        case 0x4c39f8u: goto label_4c39f8;
        case 0x4c39fcu: goto label_4c39fc;
        case 0x4c3a00u: goto label_4c3a00;
        case 0x4c3a04u: goto label_4c3a04;
        case 0x4c3a08u: goto label_4c3a08;
        case 0x4c3a0cu: goto label_4c3a0c;
        case 0x4c3a10u: goto label_4c3a10;
        case 0x4c3a14u: goto label_4c3a14;
        case 0x4c3a18u: goto label_4c3a18;
        case 0x4c3a1cu: goto label_4c3a1c;
        case 0x4c3a20u: goto label_4c3a20;
        case 0x4c3a24u: goto label_4c3a24;
        case 0x4c3a28u: goto label_4c3a28;
        case 0x4c3a2cu: goto label_4c3a2c;
        case 0x4c3a30u: goto label_4c3a30;
        case 0x4c3a34u: goto label_4c3a34;
        case 0x4c3a38u: goto label_4c3a38;
        case 0x4c3a3cu: goto label_4c3a3c;
        case 0x4c3a40u: goto label_4c3a40;
        case 0x4c3a44u: goto label_4c3a44;
        case 0x4c3a48u: goto label_4c3a48;
        case 0x4c3a4cu: goto label_4c3a4c;
        case 0x4c3a50u: goto label_4c3a50;
        case 0x4c3a54u: goto label_4c3a54;
        case 0x4c3a58u: goto label_4c3a58;
        case 0x4c3a5cu: goto label_4c3a5c;
        case 0x4c3a60u: goto label_4c3a60;
        case 0x4c3a64u: goto label_4c3a64;
        case 0x4c3a68u: goto label_4c3a68;
        case 0x4c3a6cu: goto label_4c3a6c;
        case 0x4c3a70u: goto label_4c3a70;
        case 0x4c3a74u: goto label_4c3a74;
        case 0x4c3a78u: goto label_4c3a78;
        case 0x4c3a7cu: goto label_4c3a7c;
        case 0x4c3a80u: goto label_4c3a80;
        case 0x4c3a84u: goto label_4c3a84;
        case 0x4c3a88u: goto label_4c3a88;
        case 0x4c3a8cu: goto label_4c3a8c;
        case 0x4c3a90u: goto label_4c3a90;
        case 0x4c3a94u: goto label_4c3a94;
        case 0x4c3a98u: goto label_4c3a98;
        case 0x4c3a9cu: goto label_4c3a9c;
        case 0x4c3aa0u: goto label_4c3aa0;
        case 0x4c3aa4u: goto label_4c3aa4;
        case 0x4c3aa8u: goto label_4c3aa8;
        case 0x4c3aacu: goto label_4c3aac;
        case 0x4c3ab0u: goto label_4c3ab0;
        case 0x4c3ab4u: goto label_4c3ab4;
        case 0x4c3ab8u: goto label_4c3ab8;
        case 0x4c3abcu: goto label_4c3abc;
        case 0x4c3ac0u: goto label_4c3ac0;
        case 0x4c3ac4u: goto label_4c3ac4;
        case 0x4c3ac8u: goto label_4c3ac8;
        case 0x4c3accu: goto label_4c3acc;
        case 0x4c3ad0u: goto label_4c3ad0;
        case 0x4c3ad4u: goto label_4c3ad4;
        case 0x4c3ad8u: goto label_4c3ad8;
        case 0x4c3adcu: goto label_4c3adc;
        case 0x4c3ae0u: goto label_4c3ae0;
        case 0x4c3ae4u: goto label_4c3ae4;
        case 0x4c3ae8u: goto label_4c3ae8;
        case 0x4c3aecu: goto label_4c3aec;
        case 0x4c3af0u: goto label_4c3af0;
        case 0x4c3af4u: goto label_4c3af4;
        case 0x4c3af8u: goto label_4c3af8;
        case 0x4c3afcu: goto label_4c3afc;
        case 0x4c3b00u: goto label_4c3b00;
        case 0x4c3b04u: goto label_4c3b04;
        case 0x4c3b08u: goto label_4c3b08;
        case 0x4c3b0cu: goto label_4c3b0c;
        case 0x4c3b10u: goto label_4c3b10;
        case 0x4c3b14u: goto label_4c3b14;
        case 0x4c3b18u: goto label_4c3b18;
        case 0x4c3b1cu: goto label_4c3b1c;
        case 0x4c3b20u: goto label_4c3b20;
        case 0x4c3b24u: goto label_4c3b24;
        case 0x4c3b28u: goto label_4c3b28;
        case 0x4c3b2cu: goto label_4c3b2c;
        case 0x4c3b30u: goto label_4c3b30;
        case 0x4c3b34u: goto label_4c3b34;
        case 0x4c3b38u: goto label_4c3b38;
        case 0x4c3b3cu: goto label_4c3b3c;
        case 0x4c3b40u: goto label_4c3b40;
        case 0x4c3b44u: goto label_4c3b44;
        case 0x4c3b48u: goto label_4c3b48;
        case 0x4c3b4cu: goto label_4c3b4c;
        case 0x4c3b50u: goto label_4c3b50;
        case 0x4c3b54u: goto label_4c3b54;
        case 0x4c3b58u: goto label_4c3b58;
        case 0x4c3b5cu: goto label_4c3b5c;
        case 0x4c3b60u: goto label_4c3b60;
        case 0x4c3b64u: goto label_4c3b64;
        case 0x4c3b68u: goto label_4c3b68;
        case 0x4c3b6cu: goto label_4c3b6c;
        case 0x4c3b70u: goto label_4c3b70;
        case 0x4c3b74u: goto label_4c3b74;
        case 0x4c3b78u: goto label_4c3b78;
        case 0x4c3b7cu: goto label_4c3b7c;
        case 0x4c3b80u: goto label_4c3b80;
        case 0x4c3b84u: goto label_4c3b84;
        case 0x4c3b88u: goto label_4c3b88;
        case 0x4c3b8cu: goto label_4c3b8c;
        case 0x4c3b90u: goto label_4c3b90;
        case 0x4c3b94u: goto label_4c3b94;
        case 0x4c3b98u: goto label_4c3b98;
        case 0x4c3b9cu: goto label_4c3b9c;
        default: break;
    }

    ctx->pc = 0x4c3528u;

label_4c3528:
    // 0x4c3528: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4c3528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4c352c:
    // 0x4c352c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x4c352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_4c3530:
    // 0x4c3530: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x4c3530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_4c3534:
    // 0x4c3534: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c3534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3538:
    // 0x4c3538: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x4c3538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_4c353c:
    // 0x4c353c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x4c353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_4c3540:
    // 0x4c3540: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4c3540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_4c3544:
    // 0x4c3544: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x4c3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_4c3548:
    // 0x4c3548: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x4c3548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_4c354c:
    // 0x4c354c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x4c354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_4c3550:
    // 0x4c3550: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x4c3550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_4c3554:
    // 0x4c3554: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x4c3554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_4c3558:
    // 0x4c3558: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_4c355c:
    if (ctx->pc == 0x4C355Cu) {
        ctx->pc = 0x4C355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3558u;
        // 0x4c355c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3560u;
        goto label_4c3560;
    }
    ctx->pc = 0x4C3558u;
    {
        const bool branch_taken_0x4c3558 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3558u;
        // 0x4c355c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3558) {
            ctx->pc = 0x4C3570u;
            goto label_4c3570;
        }
    }
    ctx->pc = 0x4C3560u;
label_4c3560:
    // 0x4c3560: 0x8e6302ec  lw          $v1, 0x2EC($s3)
    ctx->pc = 0x4c3560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 748)));
label_4c3564:
    // 0x4c3564: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x4c3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4c3568:
    // 0x4c3568: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_4c356c:
    if (ctx->pc == 0x4C356Cu) {
        ctx->pc = 0x4C356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3568u;
        // 0x4c356c: 0x8e6202f4  lw          $v0, 0x2F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3570u;
        goto label_4c3570;
    }
    ctx->pc = 0x4C3568u;
    {
        const bool branch_taken_0x4c3568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4c3568) {
            ctx->pc = 0x4C356Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3568u;
            // 0x4c356c: 0x8e6202f4  lw          $v0, 0x2F4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3578u;
            goto label_4c3578;
        }
    }
    ctx->pc = 0x4C3570u;
label_4c3570:
    // 0x4c3570: 0x1000017f  b           . + 4 + (0x17F << 2)
label_4c3574:
    if (ctx->pc == 0x4C3574u) {
        ctx->pc = 0x4C3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3570u;
        // 0x4c3574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3578u;
        goto label_4c3578;
    }
    ctx->pc = 0x4C3570u;
    {
        const bool branch_taken_0x4c3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3570u;
        // 0x4c3574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3570) {
            ctx->pc = 0x4C3B70u;
            goto label_4c3b70;
        }
    }
    ctx->pc = 0x4C3578u;
label_4c3578:
    // 0x4c3578: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4c357c:
    if (ctx->pc == 0x4C357Cu) {
        ctx->pc = 0x4C357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3578u;
        // 0x4c357c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3580u;
        goto label_4c3580;
    }
    ctx->pc = 0x4C3578u;
    {
        const bool branch_taken_0x4c3578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3578u;
        // 0x4c357c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3578) {
            ctx->pc = 0x4C35B4u;
            goto label_4c35b4;
        }
    }
    ctx->pc = 0x4C3580u;
label_4c3580:
    // 0x4c3580: 0x8e6202a0  lw          $v0, 0x2A0($s3)
    ctx->pc = 0x4c3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
label_4c3584:
    // 0x4c3584: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4c3588:
    if (ctx->pc == 0x4C3588u) {
        ctx->pc = 0x4C3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3584u;
        // 0x4c3588: 0xae6002f4  sw          $zero, 0x2F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C358Cu;
        goto label_4c358c;
    }
    ctx->pc = 0x4C3584u;
    {
        const bool branch_taken_0x4c3584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3584u;
        // 0x4c3588: 0xae6002f4  sw          $zero, 0x2F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3584) {
            ctx->pc = 0x4C35A4u;
            goto label_4c35a4;
        }
    }
    ctx->pc = 0x4C358Cu;
label_4c358c:
    // 0x4c358c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c3590:
    // 0x4c3590: 0xc131226  jal         func_4C4898
label_4c3594:
    if (ctx->pc == 0x4C3594u) {
        ctx->pc = 0x4C3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3590u;
        // 0x4c3594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3598u;
        goto label_4c3598;
    }
    ctx->pc = 0x4C3590u;
    SET_GPR_U32(ctx, 31, 0x4C3598u);
    ctx->pc = 0x4C3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3590u;
    // 0x4c3594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4898u, 0x4C3590u, 0x4C3598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3598u;
label_4c3598:
    // 0x4c3598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c3598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c359c:
    // 0x4c359c: 0xc131226  jal         func_4C4898
label_4c35a0:
    if (ctx->pc == 0x4C35A0u) {
        ctx->pc = 0x4C35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C359Cu;
        // 0x4c35a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C35A4u;
        goto label_4c35a4;
    }
    ctx->pc = 0x4C359Cu;
    SET_GPR_U32(ctx, 31, 0x4C35A4u);
    ctx->pc = 0x4C35A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C359Cu;
    // 0x4c35a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4898u, 0x4C359Cu, 0x4C35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C35A4u;
label_4c35a4:
    // 0x4c35a4: 0xae600280  sw          $zero, 0x280($s3)
    ctx->pc = 0x4c35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 0));
label_4c35a8:
    // 0x4c35a8: 0xae600348  sw          $zero, 0x348($s3)
    ctx->pc = 0x4c35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 0));
label_4c35ac:
    // 0x4c35ac: 0xae600340  sw          $zero, 0x340($s3)
    ctx->pc = 0x4c35acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 0));
label_4c35b0:
    // 0x4c35b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c35b4:
    // 0x4c35b4: 0xae600310  sw          $zero, 0x310($s3)
    ctx->pc = 0x4c35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 784), GPR_U32(ctx, 0));
label_4c35b8:
    // 0x4c35b8: 0xae620138  sw          $v0, 0x138($s3)
    ctx->pc = 0x4c35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 2));
label_4c35bc:
    // 0x4c35bc: 0xc1334f4  jal         func_4CD3D0
label_4c35c0:
    if (ctx->pc == 0x4C35C0u) {
        ctx->pc = 0x4C35C4u;
        goto label_4c35c4;
    }
    ctx->pc = 0x4C35BCu;
    SET_GPR_U32(ctx, 31, 0x4C35C4u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C35BCu, 0x4C35C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C35C4u;
label_4c35c4:
    // 0x4c35c4: 0x8e7002c8  lw          $s0, 0x2C8($s3)
    ctx->pc = 0x4c35c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c35c8:
    // 0x4c35c8: 0xae620278  sw          $v0, 0x278($s3)
    ctx->pc = 0x4c35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 2));
label_4c35cc:
    // 0x4c35cc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x4c35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4c35d0:
    // 0x4c35d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_4c35d4:
    if (ctx->pc == 0x4C35D4u) {
        ctx->pc = 0x4C35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C35D0u;
        // 0x4c35d4: 0xae6202c8  sw          $v0, 0x2C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C35D8u;
        goto label_4c35d8;
    }
    ctx->pc = 0x4C35D0u;
    {
        const bool branch_taken_0x4c35d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C35D0u;
        // 0x4c35d4: 0xae6202c8  sw          $v0, 0x2C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c35d0) {
            ctx->pc = 0x4C35E4u;
            goto label_4c35e4;
        }
    }
    ctx->pc = 0x4C35D8u;
label_4c35d8:
    // 0x4c35d8: 0x8e6202c4  lw          $v0, 0x2C4($s3)
    ctx->pc = 0x4c35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 708)));
label_4c35dc:
    // 0x4c35dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c35e0:
    // 0x4c35e0: 0xae6202c8  sw          $v0, 0x2C8($s3)
    ctx->pc = 0x4c35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 2));
label_4c35e4:
    // 0x4c35e4: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x4c35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c35e8:
    // 0x4c35e8: 0x8e6302cc  lw          $v1, 0x2CC($s3)
    ctx->pc = 0x4c35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
label_4c35ec:
    // 0x4c35ec: 0x8e640278  lw          $a0, 0x278($s3)
    ctx->pc = 0x4c35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_4c35f0:
    // 0x4c35f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c35f4:
    // 0x4c35f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c35f8:
    // 0x4c35f8: 0x8e6502d4  lw          $a1, 0x2D4($s3)
    ctx->pc = 0x4c35f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 724)));
label_4c35fc:
    // 0x4c35fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4c3600:
    // 0x4c3600: 0x8e6602d0  lw          $a2, 0x2D0($s3)
    ctx->pc = 0x4c3600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
label_4c3604:
    // 0x4c3604: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x4c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c3608:
    // 0x4c3608: 0x8e6302ac  lw          $v1, 0x2AC($s3)
    ctx->pc = 0x4c3608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
label_4c360c:
    // 0x4c360c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c360cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3610:
    // 0x4c3610: 0x8e6702d8  lw          $a3, 0x2D8($s3)
    ctx->pc = 0x4c3610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 728)));
label_4c3614:
    // 0x4c3614: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c3618:
    // 0x4c3618: 0x8e6802dc  lw          $t0, 0x2DC($s3)
    ctx->pc = 0x4c3618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 732)));
label_4c361c:
    // 0x4c361c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4c361cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4c3620:
    // 0x4c3620: 0x8e6502e0  lw          $a1, 0x2E0($s3)
    ctx->pc = 0x4c3620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_4c3624:
    // 0x4c3624: 0x8e6302c8  lw          $v1, 0x2C8($s3)
    ctx->pc = 0x4c3624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c3628:
    // 0x4c3628: 0x8e6402b0  lw          $a0, 0x2B0($s3)
    ctx->pc = 0x4c3628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_4c362c:
    // 0x4c362c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c362cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c3630:
    // 0x4c3630: 0x8e6902e4  lw          $t1, 0x2E4($s3)
    ctx->pc = 0x4c3630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
label_4c3634:
    // 0x4c3634: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4c3634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4c3638:
    // 0x4c3638: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4c3638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4c363c:
    // 0x4c363c: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x4c363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c3640:
    // 0x4c3640: 0x8e6402b4  lw          $a0, 0x2B4($s3)
    ctx->pc = 0x4c3640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_4c3644:
    // 0x4c3644: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3648:
    // 0x4c3648: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4c364c:
    // 0x4c364c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c364cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4c3650:
    // 0x4c3650: 0x8e6302c8  lw          $v1, 0x2C8($s3)
    ctx->pc = 0x4c3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c3654:
    // 0x4c3654: 0x8e640140  lw          $a0, 0x140($s3)
    ctx->pc = 0x4c3654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
label_4c3658:
    // 0x4c3658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c3658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c365c:
    // 0x4c365c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4c365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4c3660:
    // 0x4c3660: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4c3660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4c3664:
    // 0x4c3664: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x4c3664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c3668:
    // 0x4c3668: 0x8e640144  lw          $a0, 0x144($s3)
    ctx->pc = 0x4c3668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
label_4c366c:
    // 0x4c366c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3670:
    // 0x4c3670: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c3674:
    // 0x4c3674: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c3674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4c3678:
    // 0x4c3678: 0x8e6302c8  lw          $v1, 0x2C8($s3)
    ctx->pc = 0x4c3678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4c367c:
    // 0x4c367c: 0x8e640148  lw          $a0, 0x148($s3)
    ctx->pc = 0x4c367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_4c3680:
    // 0x4c3680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c3680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c3684:
    // 0x4c3684: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4c3684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4c3688:
    // 0x4c3688: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4c3688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4c368c:
    // 0x4c368c: 0x8e620274  lw          $v0, 0x274($s3)
    ctx->pc = 0x4c368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
label_4c3690:
    // 0x4c3690: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_4c3694:
    if (ctx->pc == 0x4C3694u) {
        ctx->pc = 0x4C3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3690u;
        // 0x4c3694: 0x8e620300  lw          $v0, 0x300($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3698u;
        goto label_4c3698;
    }
    ctx->pc = 0x4C3690u;
    {
        const bool branch_taken_0x4c3690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3690) {
            ctx->pc = 0x4C3694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3690u;
            // 0x4c3694: 0x8e620300  lw          $v0, 0x300($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C36D4u;
            goto label_4c36d4;
        }
    }
    ctx->pc = 0x4C3698u;
label_4c3698:
    // 0x4c3698: 0x8e6502c0  lw          $a1, 0x2C0($s3)
    ctx->pc = 0x4c3698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 704)));
label_4c369c:
    // 0x4c369c: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x4c369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4c36a0:
    // 0x4c36a0: 0xc13399c  jal         func_4CE670
label_4c36a4:
    if (ctx->pc == 0x4C36A4u) {
        ctx->pc = 0x4C36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36A0u;
        // 0x4c36a4: 0x8e6602bc  lw          $a2, 0x2BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C36A8u;
        goto label_4c36a8;
    }
    ctx->pc = 0x4C36A0u;
    SET_GPR_U32(ctx, 31, 0x4C36A8u);
    ctx->pc = 0x4C36A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C36A0u;
    // 0x4c36a4: 0x8e6602bc  lw          $a2, 0x2BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C36A0u, 0x4C36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C36A8u;
label_4c36a8:
    // 0x4c36a8: 0x8e640278  lw          $a0, 0x278($s3)
    ctx->pc = 0x4c36a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_4c36ac:
    // 0x4c36ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4c36acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4c36b0:
    // 0x4c36b0: 0x8e6502cc  lw          $a1, 0x2CC($s3)
    ctx->pc = 0x4c36b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
label_4c36b4:
    // 0x4c36b4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c36b8:
    // 0x4c36b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c36bc:
    // 0x4c36bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4c36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4c36c0:
    // 0x4c36c0: 0xae600148  sw          $zero, 0x148($s3)
    ctx->pc = 0x4c36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 0));
label_4c36c4:
    // 0x4c36c4: 0x8e620278  lw          $v0, 0x278($s3)
    ctx->pc = 0x4c36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_4c36c8:
    // 0x4c36c8: 0xae600144  sw          $zero, 0x144($s3)
    ctx->pc = 0x4c36c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 0));
label_4c36cc:
    // 0x4c36cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4c36d0:
    if (ctx->pc == 0x4C36D0u) {
        ctx->pc = 0x4C36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36CCu;
        // 0x4c36d0: 0xae620274  sw          $v0, 0x274($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C36D4u;
        goto label_4c36d4;
    }
    ctx->pc = 0x4C36CCu;
    {
        const bool branch_taken_0x4c36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36CCu;
        // 0x4c36d0: 0xae620274  sw          $v0, 0x274($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c36cc) {
            ctx->pc = 0x4C36E4u;
            goto label_4c36e4;
        }
    }
    ctx->pc = 0x4C36D4u;
label_4c36d4:
    // 0x4c36d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c36d8:
    if (ctx->pc == 0x4C36D8u) {
        ctx->pc = 0x4C36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36D4u;
        // 0x4c36d8: 0x8e620278  lw          $v0, 0x278($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C36DCu;
        goto label_4c36dc;
    }
    ctx->pc = 0x4C36D4u;
    {
        const bool branch_taken_0x4c36d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c36d4) {
            ctx->pc = 0x4C36D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C36D4u;
            // 0x4c36d8: 0x8e620278  lw          $v0, 0x278($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C36E8u;
            goto label_4c36e8;
        }
    }
    ctx->pc = 0x4C36DCu;
label_4c36dc:
    // 0x4c36dc: 0xc130664  jal         func_4C1990
label_4c36e0:
    if (ctx->pc == 0x4C36E0u) {
        ctx->pc = 0x4C36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36DCu;
        // 0x4c36e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C36E4u;
        goto label_4c36e4;
    }
    ctx->pc = 0x4C36DCu;
    SET_GPR_U32(ctx, 31, 0x4C36E4u);
    ctx->pc = 0x4C36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C36DCu;
    // 0x4c36e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C36DCu, 0x4C36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C36E4u;
label_4c36e4:
    // 0x4c36e4: 0x8e620278  lw          $v0, 0x278($s3)
    ctx->pc = 0x4c36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_4c36e8:
    // 0x4c36e8: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x4c36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_4c36ec:
    // 0x4c36ec: 0xae62028c  sw          $v0, 0x28C($s3)
    ctx->pc = 0x4c36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 652), GPR_U32(ctx, 2));
label_4c36f0:
    // 0x4c36f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4c36f4:
    if (ctx->pc == 0x4C36F4u) {
        ctx->pc = 0x4C36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36F0u;
        // 0x4c36f4: 0x8e700104  lw          $s0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C36F8u;
        goto label_4c36f8;
    }
    ctx->pc = 0x4C36F0u;
    {
        const bool branch_taken_0x4c36f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36F0u;
        // 0x4c36f4: 0x8e700104  lw          $s0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c36f0) {
            ctx->pc = 0x4C3700u;
            goto label_4c3700;
        }
    }
    ctx->pc = 0x4C36F8u;
label_4c36f8:
    // 0x4c36f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c36fc:
    // 0x4c36fc: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x4c36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_4c3700:
    // 0x4c3700: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4c3700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_4c3704:
    // 0x4c3704: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
label_4c3708:
    if (ctx->pc == 0x4C3708u) {
        ctx->pc = 0x4C3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3704u;
        // 0x4c3708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C370Cu;
        goto label_4c370c;
    }
    ctx->pc = 0x4C3704u;
    {
        const bool branch_taken_0x4c3704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3704u;
        // 0x4c3708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3704) {
            ctx->pc = 0x4C3B70u;
            goto label_4c3b70;
        }
    }
    ctx->pc = 0x4C370Cu;
label_4c370c:
    // 0x4c370c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x4c370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_4c3710:
    // 0x4c3710: 0x1840008c  blez        $v0, . + 4 + (0x8C << 2)
label_4c3714:
    if (ctx->pc == 0x4C3714u) {
        ctx->pc = 0x4C3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3710u;
        // 0x4c3714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3718u;
        goto label_4c3718;
    }
    ctx->pc = 0x4C3710u;
    {
        const bool branch_taken_0x4c3710 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4C3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3710u;
        // 0x4c3714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3710) {
            ctx->pc = 0x4C3944u;
            goto label_4c3944;
        }
    }
    ctx->pc = 0x4C3718u;
label_4c3718:
    // 0x4c3718: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4c3718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c371c:
    // 0x4c371c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4c371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c3720:
    // 0x4c3720: 0x8e650300  lw          $a1, 0x300($s3)
    ctx->pc = 0x4c3720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_4c3724:
    // 0x4c3724: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4c3724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3728:
    // 0x4c3728: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4c3728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4c372c:
    // 0x4c372c: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_4c3730:
    if (ctx->pc == 0x4C3730u) {
        ctx->pc = 0x4C3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C372Cu;
        // 0x4c3730: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3734u;
        goto label_4c3734;
    }
    ctx->pc = 0x4C372Cu;
    {
        const bool branch_taken_0x4c372c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4C3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C372Cu;
        // 0x4c3730: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c372c) {
            ctx->pc = 0x4C3754u;
            goto label_4c3754;
        }
    }
    ctx->pc = 0x4C3734u;
label_4c3734:
    // 0x4c3734: 0x8e63025c  lw          $v1, 0x25C($s3)
    ctx->pc = 0x4c3734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
label_4c3738:
    // 0x4c3738: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c373c:
    // 0x4c373c: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
label_4c3740:
    if (ctx->pc == 0x4C3740u) {
        ctx->pc = 0x4C3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C373Cu;
        // 0x4c3740: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3744u;
        goto label_4c3744;
    }
    ctx->pc = 0x4C373Cu;
    {
        const bool branch_taken_0x4c373c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4c373c) {
            ctx->pc = 0x4C3740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C373Cu;
            // 0x4c3740: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C375Cu;
            goto label_4c375c;
        }
    }
    ctx->pc = 0x4C3744u;
label_4c3744:
    // 0x4c3744: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4c3744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4c3748:
    // 0x4c3748: 0x2c5102a  slt         $v0, $s6, $a1
    ctx->pc = 0x4c3748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4c374c:
    // 0x4c374c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4c3750:
    if (ctx->pc == 0x4C3750u) {
        ctx->pc = 0x4C3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C374Cu;
        // 0x4c3750: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3754u;
        goto label_4c3754;
    }
    ctx->pc = 0x4C374Cu;
    {
        const bool branch_taken_0x4c374c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C374Cu;
        // 0x4c3750: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c374c) {
            ctx->pc = 0x4C3738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c3738;
        }
    }
    ctx->pc = 0x4C3754u;
label_4c3754:
    // 0x4c3754: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x4c3754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c3758:
    // 0x4c3758: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x4c3758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4c375c:
    // 0x4c375c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4c375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c3760:
    // 0x4c3760: 0x12c20073  beq         $s6, $v0, . + 4 + (0x73 << 2)
label_4c3764:
    if (ctx->pc == 0x4C3764u) {
        ctx->pc = 0x4C3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3760u;
        // 0x4c3764: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3768u;
        goto label_4c3768;
    }
    ctx->pc = 0x4C3760u;
    {
        const bool branch_taken_0x4c3760 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3760u;
        // 0x4c3764: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3760) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C3768u;
label_4c3768:
    // 0x4c3768: 0x10c00071  beqz        $a2, . + 4 + (0x71 << 2)
label_4c376c:
    if (ctx->pc == 0x4C376Cu) {
        ctx->pc = 0x4C376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3768u;
        // 0x4c376c: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3770u;
        goto label_4c3770;
    }
    ctx->pc = 0x4C3768u;
    {
        const bool branch_taken_0x4c3768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3768u;
        // 0x4c376c: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3768) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C3770u;
label_4c3770:
    // 0x4c3770: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x4c3770u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c3774:
    // 0x4c3774: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4c3774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_4c3778:
    // 0x4c3778: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x4c3778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_4c377c:
    // 0x4c377c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4c3780:
    if (ctx->pc == 0x4C3780u) {
        ctx->pc = 0x4C3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C377Cu;
        // 0x4c3780: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3784u;
        goto label_4c3784;
    }
    ctx->pc = 0x4C377Cu;
    {
        const bool branch_taken_0x4c377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C377Cu;
        // 0x4c3780: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c377c) {
            ctx->pc = 0x4C3798u;
            goto label_4c3798;
        }
    }
    ctx->pc = 0x4C3784u;
label_4c3784:
    // 0x4c3784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3788:
    // 0x4c3788: 0x8c442790  lw          $a0, 0x2790($v0)
    ctx->pc = 0x4c3788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
label_4c378c:
    // 0x4c378c: 0x26650358  addiu       $a1, $s3, 0x358
    ctx->pc = 0x4c378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 856));
label_4c3790:
    // 0x4c3790: 0xc132382  jal         func_4C8E08
label_4c3794:
    if (ctx->pc == 0x4C3794u) {
        ctx->pc = 0x4C3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3790u;
        // 0x4c3794: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3798u;
        goto label_4c3798;
    }
    ctx->pc = 0x4C3790u;
    SET_GPR_U32(ctx, 31, 0x4C3798u);
    ctx->pc = 0x4C3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3790u;
    // 0x4c3794: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E08u, 0x4C3790u, 0x4C3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3798u;
label_4c3798:
    // 0x4c3798: 0x52a00066  beql        $s5, $zero, . + 4 + (0x66 << 2)
label_4c379c:
    if (ctx->pc == 0x4C379Cu) {
        ctx->pc = 0x4C379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3798u;
        // 0x4c379c: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C37A0u;
        goto label_4c37a0;
    }
    ctx->pc = 0x4C3798u;
    {
        const bool branch_taken_0x4c3798 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3798) {
            ctx->pc = 0x4C379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3798u;
            // 0x4c379c: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3934u;
            goto label_4c3934;
        }
    }
    ctx->pc = 0x4C37A0u;
label_4c37a0:
    // 0x4c37a0: 0x241e017c  addiu       $fp, $zero, 0x17C
    ctx->pc = 0x4c37a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4c37a4:
    // 0x4c37a4: 0x2deb818  mult        $s7, $s6, $fp
    ctx->pc = 0x4c37a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_4c37a8:
    // 0x4c37a8: 0x8e620308  lw          $v0, 0x308($s3)
    ctx->pc = 0x4c37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c37ac:
    // 0x4c37ac: 0x0  nop
    ctx->pc = 0x4c37acu;
    // NOP
label_4c37b0:
    // 0x4c37b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4c37b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c37b4:
    // 0x4c37b4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x4c37b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4c37b8:
    // 0x4c37b8: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x4c37b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_4c37bc:
    // 0x4c37bc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x4c37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4c37c0:
    // 0x4c37c0: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x4c37c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_4c37c4:
    // 0x4c37c4: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x4c37c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4c37c8:
    // 0x4c37c8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x4c37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_4c37cc:
    // 0x4c37cc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x4c37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4c37d0:
    // 0x4c37d0: 0xc134438  jal         func_4D10E0
label_4c37d4:
    if (ctx->pc == 0x4C37D4u) {
        ctx->pc = 0x4C37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C37D0u;
        // 0x4c37d4: 0x1239023  subu        $s2, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C37D8u;
        goto label_4c37d8;
    }
    ctx->pc = 0x4C37D0u;
    SET_GPR_U32(ctx, 31, 0x4C37D8u);
    ctx->pc = 0x4C37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C37D0u;
    // 0x4c37d4: 0x1239023  subu        $s2, $t1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D10E0u, 0x4C37D0u, 0x4C37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C37D8u;
label_4c37d8:
    // 0x4c37d8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4c37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c37dc:
    // 0x4c37dc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x4c37dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c37e0:
    // 0x4c37e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4c37e4:
    if (ctx->pc == 0x4C37E4u) {
        ctx->pc = 0x4C37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C37E0u;
        // 0x4c37e4: 0xafb50034  sw          $s5, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C37E8u;
        goto label_4c37e8;
    }
    ctx->pc = 0x4C37E0u;
    {
        const bool branch_taken_0x4c37e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c37e0) {
            ctx->pc = 0x4C37E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C37E0u;
            // 0x4c37e4: 0xafb50034  sw          $s5, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C37E8u;
            goto label_4c37e8;
        }
    }
    ctx->pc = 0x4C37E8u;
label_4c37e8:
    // 0x4c37e8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x4c37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c37ec:
    // 0x4c37ec: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x4c37ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c37f0:
    // 0x4c37f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4c37f4:
    if (ctx->pc == 0x4C37F4u) {
        ctx->pc = 0x4C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C37F0u;
        // 0x4c37f4: 0x2a3a823  subu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C37F8u;
        goto label_4c37f8;
    }
    ctx->pc = 0x4C37F0u;
    {
        const bool branch_taken_0x4c37f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C37F0u;
        // 0x4c37f4: 0x2a3a823  subu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c37f0) {
            ctx->pc = 0x4C3858u;
            goto label_4c3858;
        }
    }
    ctx->pc = 0x4C37F8u;
label_4c37f8:
    // 0x4c37f8: 0x8e700308  lw          $s0, 0x308($s3)
    ctx->pc = 0x4c37f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c37fc:
    // 0x4c37fc: 0x729023  subu        $s2, $v1, $s2
    ctx->pc = 0x4c37fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4c3800:
    // 0x4c3800: 0x128823  negu        $s1, $s2
    ctx->pc = 0x4c3800u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_4c3804:
    // 0x4c3804: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x4c3804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_4c3808:
    // 0x4c3808: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x4c3808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_4c380c:
    // 0x4c380c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4c380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c3810:
    // 0x4c3810: 0xc110cb0  jal         func_4432C0
label_4c3814:
    if (ctx->pc == 0x4C3814u) {
        ctx->pc = 0x4C3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3810u;
        // 0x4c3814: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3818u;
        goto label_4c3818;
    }
    ctx->pc = 0x4C3810u;
    SET_GPR_U32(ctx, 31, 0x4C3818u);
    ctx->pc = 0x4C3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3810u;
    // 0x4c3814: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4C3810u, 0x4C3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3818u;
label_4c3818:
    // 0x4c3818: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4c3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4c381c:
    // 0x4c381c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4c381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4c3820:
    // 0x4c3820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c3824:
    if (ctx->pc == 0x4C3824u) {
        ctx->pc = 0x4C3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3820u;
        // 0x4c3824: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3828u;
        goto label_4c3828;
    }
    ctx->pc = 0x4C3820u;
    {
        const bool branch_taken_0x4c3820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3820u;
        // 0x4c3824: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3820) {
            ctx->pc = 0x4C3830u;
            goto label_4c3830;
        }
    }
    ctx->pc = 0x4C3828u;
label_4c3828:
    // 0x4c3828: 0xc110cc4  jal         func_443310
label_4c382c:
    if (ctx->pc == 0x4C382Cu) {
        ctx->pc = 0x4C3830u;
        goto label_4c3830;
    }
    ctx->pc = 0x4C3828u;
    SET_GPR_U32(ctx, 31, 0x4C3830u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4C3828u, 0x4C3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3830u;
label_4c3830:
    // 0x4c3830: 0x8e620308  lw          $v0, 0x308($s3)
    ctx->pc = 0x4c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c3834:
    // 0x4c3834: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x4c3834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4c3838:
    // 0x4c3838: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x4c3838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4c383c:
    // 0x4c383c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x4c383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4c3840:
    // 0x4c3840: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4c3840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c3844:
    // 0x4c3844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c3848:
    if (ctx->pc == 0x4C3848u) {
        ctx->pc = 0x4C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3844u;
        // 0x4c3848: 0x2dea018  mult        $s4, $s6, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C384Cu;
        goto label_4c384c;
    }
    ctx->pc = 0x4C3844u;
    {
        const bool branch_taken_0x4c3844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3844u;
        // 0x4c3848: 0x2dea018  mult        $s4, $s6, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3844) {
            ctx->pc = 0x4C385Cu;
            goto label_4c385c;
        }
    }
    ctx->pc = 0x4C384Cu;
label_4c384c:
    // 0x4c384c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x4c384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c3850:
    // 0x4c3850: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4c3850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c3854:
    // 0x4c3854: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x4c3854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_4c3858:
    // 0x4c3858: 0x2dea018  mult        $s4, $s6, $fp
    ctx->pc = 0x4c3858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_4c385c:
    // 0x4c385c: 0x8e700308  lw          $s0, 0x308($s3)
    ctx->pc = 0x4c385cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c3860:
    // 0x4c3860: 0x8fb10034  lw          $s1, 0x34($sp)
    ctx->pc = 0x4c3860u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c3864:
    // 0x4c3864: 0xc110cb0  jal         func_4432C0
label_4c3868:
    if (ctx->pc == 0x4C3868u) {
        ctx->pc = 0x4C3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3864u;
        // 0x4c3868: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C386Cu;
        goto label_4c386c;
    }
    ctx->pc = 0x4C3864u;
    SET_GPR_U32(ctx, 31, 0x4C386Cu);
    ctx->pc = 0x4C3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3864u;
    // 0x4c3868: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4C3864u, 0x4C386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C386Cu;
label_4c386c:
    // 0x4c386c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x4c386cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_4c3870:
    // 0x4c3870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c3874:
    // 0x4c3874: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4c3874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4c3878:
    // 0x4c3878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c387c:
    if (ctx->pc == 0x4C387Cu) {
        ctx->pc = 0x4C387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3878u;
        // 0x4c387c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3880u;
        goto label_4c3880;
    }
    ctx->pc = 0x4C3878u;
    {
        const bool branch_taken_0x4c3878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3878u;
        // 0x4c387c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3878) {
            ctx->pc = 0x4C3888u;
            goto label_4c3888;
        }
    }
    ctx->pc = 0x4C3880u;
label_4c3880:
    // 0x4c3880: 0xc110cc4  jal         func_443310
label_4c3884:
    if (ctx->pc == 0x4C3884u) {
        ctx->pc = 0x4C3888u;
        goto label_4c3888;
    }
    ctx->pc = 0x4C3880u;
    SET_GPR_U32(ctx, 31, 0x4C3888u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4C3880u, 0x4C3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3888u;
label_4c3888:
    // 0x4c3888: 0x8e620308  lw          $v0, 0x308($s3)
    ctx->pc = 0x4c3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c388c:
    // 0x4c388c: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x4c388cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c3890:
    // 0x4c3890: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c3894:
    // 0x4c3894: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x4c3894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_4c3898:
    // 0x4c3898: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4c3898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4c389c:
    // 0x4c389c: 0x649023  subu        $s2, $v1, $a0
    ctx->pc = 0x4c389cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c38a0:
    // 0x4c38a0: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x4c38a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4c38a4:
    // 0x4c38a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4c38a8:
    if (ctx->pc == 0x4C38A8u) {
        ctx->pc = 0x4C38ACu;
        goto label_4c38ac;
    }
    ctx->pc = 0x4C38A4u;
    {
        const bool branch_taken_0x4c38a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c38a4) {
            ctx->pc = 0x4C3908u;
            goto label_4c3908;
        }
    }
    ctx->pc = 0x4C38ACu;
label_4c38ac:
    // 0x4c38ac: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_4c38b0:
    if (ctx->pc == 0x4C38B0u) {
        ctx->pc = 0x4C38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C38ACu;
        // 0x4c38b0: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C38B4u;
        goto label_4c38b4;
    }
    ctx->pc = 0x4C38ACu;
    {
        const bool branch_taken_0x4c38ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C38ACu;
        // 0x4c38b0: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c38ac) {
            ctx->pc = 0x4C38D4u;
            goto label_4c38d4;
        }
    }
    ctx->pc = 0x4C38B4u;
label_4c38b4:
    // 0x4c38b4: 0xc133518  jal         func_4CD460
label_4c38b8:
    if (ctx->pc == 0x4C38B8u) {
        ctx->pc = 0x4C38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C38B4u;
        // 0x4c38b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C38BCu;
        goto label_4c38bc;
    }
    ctx->pc = 0x4C38B4u;
    SET_GPR_U32(ctx, 31, 0x4C38BCu);
    ctx->pc = 0x4C38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C38B4u;
    // 0x4c38b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C38B4u, 0x4C38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C38BCu;
label_4c38bc:
    // 0x4c38bc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4c38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c38c0:
    // 0x4c38c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4c38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4c38c4:
    // 0x4c38c4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x4c38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c38c8:
    // 0x4c38c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4c38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4c38cc:
    // 0x4c38cc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4c38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_4c38d0:
    // 0x4c38d0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4c38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_4c38d4:
    // 0x4c38d4: 0x8e620308  lw          $v0, 0x308($s3)
    ctx->pc = 0x4c38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c38d8:
    // 0x4c38d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4c38d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4c38dc:
    // 0x4c38dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c38e0:
    // 0x4c38e0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x4c38e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c38e4:
    // 0x4c38e4: 0xc133518  jal         func_4CD460
label_4c38e8:
    if (ctx->pc == 0x4C38E8u) {
        ctx->pc = 0x4C38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C38E4u;
        // 0x4c38e8: 0x8c44002c  lw          $a0, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C38ECu;
        goto label_4c38ec;
    }
    ctx->pc = 0x4C38E4u;
    SET_GPR_U32(ctx, 31, 0x4C38ECu);
    ctx->pc = 0x4C38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C38E4u;
    // 0x4c38e8: 0x8c44002c  lw          $a0, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C38E4u, 0x4C38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C38ECu;
label_4c38ec:
    // 0x4c38ec: 0x8e630308  lw          $v1, 0x308($s3)
    ctx->pc = 0x4c38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c38f0:
    // 0x4c38f0: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x4c38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c38f4:
    // 0x4c38f4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x4c38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_4c38f8:
    // 0x4c38f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4c38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4c38fc:
    // 0x4c38fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c3900:
    // 0x4c3900: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c3904:
    if (ctx->pc == 0x4C3904u) {
        ctx->pc = 0x4C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3900u;
        // 0x4c3904: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3908u;
        goto label_4c3908;
    }
    ctx->pc = 0x4C3900u;
    {
        const bool branch_taken_0x4c3900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3900u;
        // 0x4c3904: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3900) {
            ctx->pc = 0x4C3928u;
            goto label_4c3928;
        }
    }
    ctx->pc = 0x4C3908u;
label_4c3908:
    // 0x4c3908: 0xc133518  jal         func_4CD460
label_4c390c:
    if (ctx->pc == 0x4C390Cu) {
        ctx->pc = 0x4C390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3908u;
        // 0x4c390c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3910u;
        goto label_4c3910;
    }
    ctx->pc = 0x4C3908u;
    SET_GPR_U32(ctx, 31, 0x4C3910u);
    ctx->pc = 0x4C390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3908u;
    // 0x4c390c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C3908u, 0x4C3910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3910u;
label_4c3910:
    // 0x4c3910: 0x8e620308  lw          $v0, 0x308($s3)
    ctx->pc = 0x4c3910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
label_4c3914:
    // 0x4c3914: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x4c3914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4c3918:
    // 0x4c3918: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c3918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c391c:
    // 0x4c391c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x4c391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_4c3920:
    // 0x4c3920: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c3920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c3924:
    // 0x4c3924: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x4c3924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_4c3928:
    // 0x4c3928: 0x56a0ffa1  bnel        $s5, $zero, . + 4 + (-0x5F << 2)
label_4c392c:
    if (ctx->pc == 0x4C392Cu) {
        ctx->pc = 0x4C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3928u;
        // 0x4c392c: 0x8e620308  lw          $v0, 0x308($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3930u;
        goto label_4c3930;
    }
    ctx->pc = 0x4C3928u;
    {
        const bool branch_taken_0x4c3928 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3928) {
            ctx->pc = 0x4C392Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3928u;
            // 0x4c392c: 0x8e620308  lw          $v0, 0x308($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C37B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c37b0;
        }
    }
    ctx->pc = 0x4C3930u;
label_4c3930:
    // 0x4c3930: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x4c3930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_4c3934:
    // 0x4c3934: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x4c3934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c3938:
    // 0x4c3938: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x4c3938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4c393c:
    // 0x4c393c: 0x1440ff76  bnez        $v0, . + 4 + (-0x8A << 2)
label_4c3940:
    if (ctx->pc == 0x4C3940u) {
        ctx->pc = 0x4C3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C393Cu;
        // 0x4c3940: 0x8fb00040  lw          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3944u;
        goto label_4c3944;
    }
    ctx->pc = 0x4C393Cu;
    {
        const bool branch_taken_0x4c393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C393Cu;
        // 0x4c3940: 0x8fb00040  lw          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c393c) {
            ctx->pc = 0x4C3718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c3718;
        }
    }
    ctx->pc = 0x4C3944u;
label_4c3944:
    // 0x4c3944: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x4c3944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_4c3948:
    // 0x4c3948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4c394c:
    if (ctx->pc == 0x4C394Cu) {
        ctx->pc = 0x4C394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3948u;
        // 0x4c394c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3950u;
        goto label_4c3950;
    }
    ctx->pc = 0x4C3948u;
    {
        const bool branch_taken_0x4c3948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3948u;
        // 0x4c394c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3948) {
            ctx->pc = 0x4C395Cu;
            goto label_4c395c;
        }
    }
    ctx->pc = 0x4C3950u;
label_4c3950:
    // 0x4c3950: 0x26650358  addiu       $a1, $s3, 0x358
    ctx->pc = 0x4c3950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 856));
label_4c3954:
    // 0x4c3954: 0xc132386  jal         func_4C8E18
label_4c3958:
    if (ctx->pc == 0x4C3958u) {
        ctx->pc = 0x4C3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3954u;
        // 0x4c3958: 0x8c442790  lw          $a0, 0x2790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C395Cu;
        goto label_4c395c;
    }
    ctx->pc = 0x4C3954u;
    SET_GPR_U32(ctx, 31, 0x4C395Cu);
    ctx->pc = 0x4C3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3954u;
    // 0x4c3958: 0x8c442790  lw          $a0, 0x2790($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C3954u, 0x4C395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C395Cu;
label_4c395c:
    // 0x4c395c: 0xc1334f4  jal         func_4CD3D0
label_4c3960:
    if (ctx->pc == 0x4C3960u) {
        ctx->pc = 0x4C3964u;
        goto label_4c3964;
    }
    ctx->pc = 0x4C395Cu;
    SET_GPR_U32(ctx, 31, 0x4C3964u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C395Cu, 0x4C3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3964u;
label_4c3964:
    // 0x4c3964: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4c3964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c3968:
    // 0x4c3968: 0x8e6202a4  lw          $v0, 0x2A4($s3)
    ctx->pc = 0x4c3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
label_4c396c:
    // 0x4c396c: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
label_4c3970:
    if (ctx->pc == 0x4C3970u) {
        ctx->pc = 0x4C3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C396Cu;
        // 0x4c3970: 0x8e620300  lw          $v0, 0x300($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3974u;
        goto label_4c3974;
    }
    ctx->pc = 0x4C396Cu;
    {
        const bool branch_taken_0x4c396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c396c) {
            ctx->pc = 0x4C3970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C396Cu;
            // 0x4c3970: 0x8e620300  lw          $v0, 0x300($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3AE0u;
            goto label_4c3ae0;
        }
    }
    ctx->pc = 0x4C3974u;
label_4c3974:
    // 0x4c3974: 0x8e62030c  lw          $v0, 0x30C($s3)
    ctx->pc = 0x4c3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
label_4c3978:
    // 0x4c3978: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_4c397c:
    if (ctx->pc == 0x4C397Cu) {
        ctx->pc = 0x4C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3978u;
        // 0x4c397c: 0x8e620108  lw          $v0, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3980u;
        goto label_4c3980;
    }
    ctx->pc = 0x4C3978u;
    {
        const bool branch_taken_0x4c3978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3978) {
            ctx->pc = 0x4C397Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3978u;
            // 0x4c397c: 0x8e620108  lw          $v0, 0x108($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C39A8u;
            goto label_4c39a8;
        }
    }
    ctx->pc = 0x4C3980u;
label_4c3980:
    // 0x4c3980: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x4c3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_4c3984:
    // 0x4c3984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c3984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3988:
    // 0x4c3988: 0x8e6600d0  lw          $a2, 0xD0($s3)
    ctx->pc = 0x4c3988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_4c398c:
    // 0x4c398c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4c398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c3990:
    // 0x4c3990: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c3990u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_4c3994:
    // 0x4c3994: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x4c3994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c3998:
    // 0x4c3998: 0x3012  mflo        $a2
    ctx->pc = 0x4c3998u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4c399c:
    // 0x4c399c: 0xc13372a  jal         func_4CDCA8
label_4c39a0:
    if (ctx->pc == 0x4C39A0u) {
        ctx->pc = 0x4C39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C399Cu;
        // 0x4c39a0: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C39A4u;
        goto label_4c39a4;
    }
    ctx->pc = 0x4C399Cu;
    SET_GPR_U32(ctx, 31, 0x4C39A4u);
    ctx->pc = 0x4C39A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C399Cu;
    // 0x4c39a0: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C399Cu, 0x4C39A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C39A4u;
label_4c39a4:
    // 0x4c39a4: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x4c39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_4c39a8:
    // 0x4c39a8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_4c39ac:
    if (ctx->pc == 0x4C39ACu) {
        ctx->pc = 0x4C39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39A8u;
        // 0x4c39ac: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C39B0u;
        goto label_4c39b0;
    }
    ctx->pc = 0x4C39A8u;
    {
        const bool branch_taken_0x4c39a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c39a8) {
            ctx->pc = 0x4C39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C39A8u;
            // 0x4c39ac: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3A44u;
            goto label_4c3a44;
        }
    }
    ctx->pc = 0x4C39B0u;
label_4c39b0:
    // 0x4c39b0: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x4c39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_4c39b4:
    // 0x4c39b4: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_4c39b8:
    if (ctx->pc == 0x4C39B8u) {
        ctx->pc = 0x4C39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39B4u;
        // 0x4c39b8: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C39BCu;
        goto label_4c39bc;
    }
    ctx->pc = 0x4C39B4u;
    {
        const bool branch_taken_0x4c39b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c39b4) {
            ctx->pc = 0x4C39B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C39B4u;
            // 0x4c39b8: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3A44u;
            goto label_4c3a44;
        }
    }
    ctx->pc = 0x4C39BCu;
label_4c39bc:
    // 0x4c39bc: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x4c39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_4c39c0:
    // 0x4c39c0: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x4c39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
label_4c39c4:
    // 0x4c39c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c39c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c39c8:
    // 0x4c39c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c39c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c39cc:
    // 0x4c39cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4c39d0:
    if (ctx->pc == 0x4C39D0u) {
        ctx->pc = 0x4C39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39CCu;
        // 0x4c39d0: 0x8e640154  lw          $a0, 0x154($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C39D4u;
        goto label_4c39d4;
    }
    ctx->pc = 0x4C39CCu;
    {
        const bool branch_taken_0x4c39cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c39cc) {
            ctx->pc = 0x4C39D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C39CCu;
            // 0x4c39d0: 0x8e640154  lw          $a0, 0x154($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C39D4u;
            goto label_4c39d4;
        }
    }
    ctx->pc = 0x4C39D4u;
label_4c39d4:
    // 0x4c39d4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4c39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4c39d8:
    // 0x4c39d8: 0x8e630158  lw          $v1, 0x158($s3)
    ctx->pc = 0x4c39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
label_4c39dc:
    // 0x4c39dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c39e0:
    // 0x4c39e0: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x4c39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4c39e4:
    // 0x4c39e4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x4c39e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c39e8:
    // 0x4c39e8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_4c39ec:
    if (ctx->pc == 0x4C39ECu) {
        ctx->pc = 0x4C39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39E8u;
        // 0x4c39ec: 0x3c120053  lui         $s2, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C39F0u;
        goto label_4c39f0;
    }
    ctx->pc = 0x4C39E8u;
    {
        const bool branch_taken_0x4c39e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39E8u;
        // 0x4c39ec: 0x3c120053  lui         $s2, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c39e8) {
            ctx->pc = 0x4C3A40u;
            goto label_4c3a40;
        }
    }
    ctx->pc = 0x4C39F0u;
label_4c39f0:
    // 0x4c39f0: 0x2671020c  addiu       $s1, $s3, 0x20C
    ctx->pc = 0x4c39f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 524));
label_4c39f4:
    // 0x4c39f4: 0x8e44278c  lw          $a0, 0x278C($s2)
    ctx->pc = 0x4c39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10124)));
label_4c39f8:
    // 0x4c39f8: 0xc132380  jal         func_4C8E00
label_4c39fc:
    if (ctx->pc == 0x4C39FCu) {
        ctx->pc = 0x4C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39F8u;
        // 0x4c39fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3A00u;
        goto label_4c3a00;
    }
    ctx->pc = 0x4C39F8u;
    SET_GPR_U32(ctx, 31, 0x4C3A00u);
    ctx->pc = 0x4C39FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C39F8u;
    // 0x4c39fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E00u, 0x4C39F8u, 0x4C3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3A00u;
label_4c3a00:
    // 0x4c3a00: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4c3a04:
    if (ctx->pc == 0x4C3A04u) {
        ctx->pc = 0x4C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A00u;
        // 0x4c3a04: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3A08u;
        goto label_4c3a08;
    }
    ctx->pc = 0x4C3A00u;
    {
        const bool branch_taken_0x4c3a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3a00) {
            ctx->pc = 0x4C3A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3A00u;
            // 0x4c3a04: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3A28u;
            goto label_4c3a28;
        }
    }
    ctx->pc = 0x4C3A08u;
label_4c3a08:
    // 0x4c3a08: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x4c3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_4c3a0c:
    // 0x4c3a0c: 0x40f809  jalr        $v0
label_4c3a10:
    if (ctx->pc == 0x4C3A10u) {
        ctx->pc = 0x4C3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A0Cu;
        // 0x4c3a10: 0x26640110  addiu       $a0, $s3, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3A14u;
        goto label_4c3a14;
    }
    ctx->pc = 0x4C3A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C3A14u);
        ctx->pc = 0x4C3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A0Cu;
        // 0x4c3a10: 0x26640110  addiu       $a0, $s3, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3A0Cu, 0x4C3A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C3A14u;
label_4c3a14:
    // 0x4c3a14: 0x8e44278c  lw          $a0, 0x278C($s2)
    ctx->pc = 0x4c3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10124)));
label_4c3a18:
    // 0x4c3a18: 0xc132386  jal         func_4C8E18
label_4c3a1c:
    if (ctx->pc == 0x4C3A1Cu) {
        ctx->pc = 0x4C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A18u;
        // 0x4c3a1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3A20u;
        goto label_4c3a20;
    }
    ctx->pc = 0x4C3A18u;
    SET_GPR_U32(ctx, 31, 0x4C3A20u);
    ctx->pc = 0x4C3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3A18u;
    // 0x4c3a1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C3A18u, 0x4C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3A20u;
label_4c3a20:
    // 0x4c3a20: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c3a24:
    if (ctx->pc == 0x4C3A24u) {
        ctx->pc = 0x4C3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A20u;
        // 0x4c3a24: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3A28u;
        goto label_4c3a28;
    }
    ctx->pc = 0x4C3A20u;
    {
        const bool branch_taken_0x4c3a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A20u;
        // 0x4c3a24: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3a20) {
            ctx->pc = 0x4C3A44u;
            goto label_4c3a44;
        }
    }
    ctx->pc = 0x4C3A28u;
label_4c3a28:
    // 0x4c3a28: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x4c3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_4c3a2c:
    // 0x4c3a2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c3a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c3a30:
    // 0x4c3a30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4c3a34:
    if (ctx->pc == 0x4C3A34u) {
        ctx->pc = 0x4C3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A30u;
        // 0x4c3a34: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3A38u;
        goto label_4c3a38;
    }
    ctx->pc = 0x4C3A30u;
    {
        const bool branch_taken_0x4c3a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3a30) {
            ctx->pc = 0x4C3A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3A30u;
            // 0x4c3a34: 0x8e6200b8  lw          $v0, 0xB8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3A44u;
            goto label_4c3a44;
        }
    }
    ctx->pc = 0x4C3A38u;
label_4c3a38:
    // 0x4c3a38: 0xc132388  jal         func_4C8E20
label_4c3a3c:
    if (ctx->pc == 0x4C3A3Cu) {
        ctx->pc = 0x4C3A40u;
        goto label_4c3a40;
    }
    ctx->pc = 0x4C3A38u;
    SET_GPR_U32(ctx, 31, 0x4C3A40u);
    ctx->pc = 0x4C8E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E20u, 0x4C3A38u, 0x4C3A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3A40u;
label_4c3a40:
    // 0x4c3a40: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x4c3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_4c3a44:
    // 0x4c3a44: 0x266700c4  addiu       $a3, $s3, 0xC4
    ctx->pc = 0x4c3a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
label_4c3a48:
    // 0x4c3a48: 0x8e6800d0  lw          $t0, 0xD0($s3)
    ctx->pc = 0x4c3a48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_4c3a4c:
    // 0x4c3a4c: 0x266500bc  addiu       $a1, $s3, 0xBC
    ctx->pc = 0x4c3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 188));
label_4c3a50:
    // 0x4c3a50: 0x8e66010c  lw          $a2, 0x10C($s3)
    ctx->pc = 0x4c3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_4c3a54:
    // 0x4c3a54: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x4c3a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c3a58:
    // 0x4c3a58: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x4c3a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4c3a5c:
    // 0x4c3a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3a60:
    // 0x4c3a60: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4c3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_4c3a64:
    // 0x4c3a64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c3a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c3a68:
    // 0x4c3a68: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x4c3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_4c3a6c:
    // 0x4c3a6c: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x4c3a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4c3a70:
    // 0x4c3a70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4c3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4c3a74:
    // 0x4c3a74: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4c3a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4c3a78:
    // 0x4c3a78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4c3a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4c3a7c:
    // 0x4c3a7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4c3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4c3a80:
    // 0x4c3a80: 0x8c8cfffc  lw          $t4, -0x4($a0)
    ctx->pc = 0x4c3a80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_4c3a84:
    // 0x4c3a84: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4c3a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4c3a88:
    // 0x4c3a88: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4c3a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c3a8c:
    // 0x4c3a8c: 0x266e0318  addiu       $t6, $s3, 0x318
    ctx->pc = 0x4c3a8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 792));
label_4c3a90:
    // 0x4c3a90: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x4c3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_4c3a94:
    // 0x4c3a94: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x4c3a94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c3a98:
    // 0x4c3a98: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c3a9c:
    // 0x4c3a9c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4c3a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c3aa0:
    // 0x4c3aa0: 0x8e6d0020  lw          $t5, 0x20($s3)
    ctx->pc = 0x4c3aa0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_4c3aa4:
    // 0x4c3aa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4c3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c3aa8:
    // 0x4c3aa8: 0x8e6800dc  lw          $t0, 0xDC($s3)
    ctx->pc = 0x4c3aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_4c3aac:
    // 0x4c3aac: 0x8e690254  lw          $t1, 0x254($s3)
    ctx->pc = 0x4c3aacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
label_4c3ab0:
    // 0x4c3ab0: 0x8e6a0258  lw          $t2, 0x258($s3)
    ctx->pc = 0x4c3ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
label_4c3ab4:
    // 0x4c3ab4: 0x8e6b00cc  lw          $t3, 0xCC($s3)
    ctx->pc = 0x4c3ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_4c3ab8:
    // 0x4c3ab8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4c3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_4c3abc:
    // 0x4c3abc: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x4c3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_4c3ac0:
    // 0x4c3ac0: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x4c3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_4c3ac4:
    // 0x4c3ac4: 0xc13221c  jal         func_4C8870
label_4c3ac8:
    if (ctx->pc == 0x4C3AC8u) {
        ctx->pc = 0x4C3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3AC4u;
        // 0x4c3ac8: 0xafad0020  sw          $t5, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3ACCu;
        goto label_4c3acc;
    }
    ctx->pc = 0x4C3AC4u;
    SET_GPR_U32(ctx, 31, 0x4C3ACCu);
    ctx->pc = 0x4C3AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3AC4u;
    // 0x4c3ac8: 0xafad0020  sw          $t5, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8870u, 0x4C3AC4u, 0x4C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3ACCu;
label_4c3acc:
    // 0x4c3acc: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x4c3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_4c3ad0:
    // 0x4c3ad0: 0xae6202f8  sw          $v0, 0x2F8($s3)
    ctx->pc = 0x4c3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 760), GPR_U32(ctx, 2));
label_4c3ad4:
    // 0x4c3ad4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4c3ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4c3ad8:
    // 0x4c3ad8: 0xae6300b8  sw          $v1, 0xB8($s3)
    ctx->pc = 0x4c3ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 3));
label_4c3adc:
    // 0x4c3adc: 0x8e620300  lw          $v0, 0x300($s3)
    ctx->pc = 0x4c3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_4c3ae0:
    // 0x4c3ae0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c3ae4:
    if (ctx->pc == 0x4C3AE4u) {
        ctx->pc = 0x4C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3AE0u;
        // 0x4c3ae4: 0x8e620270  lw          $v0, 0x270($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3AE8u;
        goto label_4c3ae8;
    }
    ctx->pc = 0x4C3AE0u;
    {
        const bool branch_taken_0x4c3ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ae0) {
            ctx->pc = 0x4C3AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3AE0u;
            // 0x4c3ae4: 0x8e620270  lw          $v0, 0x270($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3AF4u;
            goto label_4c3af4;
        }
    }
    ctx->pc = 0x4C3AE8u;
label_4c3ae8:
    // 0x4c3ae8: 0xc130664  jal         func_4C1990
label_4c3aec:
    if (ctx->pc == 0x4C3AECu) {
        ctx->pc = 0x4C3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3AE8u;
        // 0x4c3aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3AF0u;
        goto label_4c3af0;
    }
    ctx->pc = 0x4C3AE8u;
    SET_GPR_U32(ctx, 31, 0x4C3AF0u);
    ctx->pc = 0x4C3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3AE8u;
    // 0x4c3aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C3AE8u, 0x4C3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3AF0u;
label_4c3af0:
    // 0x4c3af0: 0x8e620270  lw          $v0, 0x270($s3)
    ctx->pc = 0x4c3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
label_4c3af4:
    // 0x4c3af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c3af8:
    // 0x4c3af8: 0x8e640280  lw          $a0, 0x280($s3)
    ctx->pc = 0x4c3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 640)));
label_4c3afc:
    // 0x4c3afc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c3b00:
    // 0x4c3b00: 0xae6300b4  sw          $v1, 0xB4($s3)
    ctx->pc = 0x4c3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 3));
label_4c3b04:
    // 0x4c3b04: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_4c3b08:
    if (ctx->pc == 0x4C3B08u) {
        ctx->pc = 0x4C3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3B04u;
        // 0x4c3b08: 0xae620270  sw          $v0, 0x270($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3B0Cu;
        goto label_4c3b0c;
    }
    ctx->pc = 0x4C3B04u;
    {
        const bool branch_taken_0x4c3b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3B04u;
        // 0x4c3b08: 0xae620270  sw          $v0, 0x270($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3b04) {
            ctx->pc = 0x4C3B28u;
            goto label_4c3b28;
        }
    }
    ctx->pc = 0x4C3B0Cu;
label_4c3b0c:
    // 0x4c3b0c: 0xc1334f4  jal         func_4CD3D0
label_4c3b10:
    if (ctx->pc == 0x4C3B10u) {
        ctx->pc = 0x4C3B14u;
        goto label_4c3b14;
    }
    ctx->pc = 0x4C3B0Cu;
    SET_GPR_U32(ctx, 31, 0x4C3B14u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C3B0Cu, 0x4C3B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3B14u;
label_4c3b14:
    // 0x4c3b14: 0x8e630270  lw          $v1, 0x270($s3)
    ctx->pc = 0x4c3b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
label_4c3b18:
    // 0x4c3b18: 0xae620280  sw          $v0, 0x280($s3)
    ctx->pc = 0x4c3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 2));
label_4c3b1c:
    // 0x4c3b1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c3b20:
    // 0x4c3b20: 0xae600348  sw          $zero, 0x348($s3)
    ctx->pc = 0x4c3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 0));
label_4c3b24:
    // 0x4c3b24: 0xae630284  sw          $v1, 0x284($s3)
    ctx->pc = 0x4c3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 3));
label_4c3b28:
    // 0x4c3b28: 0xc1334f4  jal         func_4CD3D0
label_4c3b2c:
    if (ctx->pc == 0x4C3B2Cu) {
        ctx->pc = 0x4C3B30u;
        goto label_4c3b30;
    }
    ctx->pc = 0x4C3B28u;
    SET_GPR_U32(ctx, 31, 0x4C3B30u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C3B28u, 0x4C3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3B30u;
label_4c3b30:
    // 0x4c3b30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c3b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c3b34:
    // 0x4c3b34: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x4c3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_4c3b38:
    // 0x4c3b38: 0x8e6402b0  lw          $a0, 0x2B0($s3)
    ctx->pc = 0x4c3b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_4c3b3c:
    // 0x4c3b3c: 0xf42823  subu        $a1, $a3, $s4
    ctx->pc = 0x4c3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_4c3b40:
    // 0x4c3b40: 0x8e6202ac  lw          $v0, 0x2AC($s3)
    ctx->pc = 0x4c3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
label_4c3b44:
    // 0x4c3b44: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x4c3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_4c3b48:
    // 0x4c3b48: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x4c3b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4c3b4c:
    // 0x4c3b4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4c3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c3b50:
    // 0x4c3b50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c3b54:
    // 0x4c3b54: 0xae6402b0  sw          $a0, 0x2B0($s3)
    ctx->pc = 0x4c3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 688), GPR_U32(ctx, 4));
label_4c3b58:
    // 0x4c3b58: 0xae6202ac  sw          $v0, 0x2AC($s3)
    ctx->pc = 0x4c3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 684), GPR_U32(ctx, 2));
label_4c3b5c:
    // 0x4c3b5c: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x4c3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_4c3b60:
    // 0x4c3b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c3b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3b64:
    // 0x4c3b64: 0xae600138  sw          $zero, 0x138($s3)
    ctx->pc = 0x4c3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 0));
label_4c3b68:
    // 0x4c3b68: 0xae67027c  sw          $a3, 0x27C($s3)
    ctx->pc = 0x4c3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 7));
label_4c3b6c:
    // 0x4c3b6c: 0xae6602ec  sw          $a2, 0x2EC($s3)
    ctx->pc = 0x4c3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 748), GPR_U32(ctx, 6));
label_4c3b70:
    // 0x4c3b70: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4c3b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c3b74:
    // 0x4c3b74: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x4c3b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4c3b78:
    // 0x4c3b78: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x4c3b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c3b7c:
    // 0x4c3b7c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x4c3b7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4c3b80:
    // 0x4c3b80: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4c3b80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4c3b84:
    // 0x4c3b84: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x4c3b84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_4c3b88:
    // 0x4c3b88: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x4c3b88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c3b8c:
    // 0x4c3b8c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x4c3b8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_4c3b90:
    // 0x4c3b90: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x4c3b90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4c3b94:
    // 0x4c3b94: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x4c3b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_4c3b98:
    // 0x4c3b98: 0x3e00008  jr          $ra
label_4c3b9c:
    if (ctx->pc == 0x4C3B9Cu) {
        ctx->pc = 0x4C3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3B98u;
        // 0x4c3b9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3BA0u;
        goto label_fallthrough_0x4c3b98;
    }
    ctx->pc = 0x4C3B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3B98u;
        // 0x4c3b9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c3b98:
    ctx->pc = 0x4C3BA0u;
}
