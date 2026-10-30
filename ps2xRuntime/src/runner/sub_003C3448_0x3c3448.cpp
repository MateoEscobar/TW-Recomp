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

// Function: sub_003C3448
// Address: 0x3c3448 - 0x3c3ba8
void sub_003C3448_0x3c3448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3448_0x3c3448");
#endif

    switch (ctx->pc) {
        case 0x3c3448u: goto label_3c3448;
        case 0x3c344cu: goto label_3c344c;
        case 0x3c3450u: goto label_3c3450;
        case 0x3c3454u: goto label_3c3454;
        case 0x3c3458u: goto label_3c3458;
        case 0x3c345cu: goto label_3c345c;
        case 0x3c3460u: goto label_3c3460;
        case 0x3c3464u: goto label_3c3464;
        case 0x3c3468u: goto label_3c3468;
        case 0x3c346cu: goto label_3c346c;
        case 0x3c3470u: goto label_3c3470;
        case 0x3c3474u: goto label_3c3474;
        case 0x3c3478u: goto label_3c3478;
        case 0x3c347cu: goto label_3c347c;
        case 0x3c3480u: goto label_3c3480;
        case 0x3c3484u: goto label_3c3484;
        case 0x3c3488u: goto label_3c3488;
        case 0x3c348cu: goto label_3c348c;
        case 0x3c3490u: goto label_3c3490;
        case 0x3c3494u: goto label_3c3494;
        case 0x3c3498u: goto label_3c3498;
        case 0x3c349cu: goto label_3c349c;
        case 0x3c34a0u: goto label_3c34a0;
        case 0x3c34a4u: goto label_3c34a4;
        case 0x3c34a8u: goto label_3c34a8;
        case 0x3c34acu: goto label_3c34ac;
        case 0x3c34b0u: goto label_3c34b0;
        case 0x3c34b4u: goto label_3c34b4;
        case 0x3c34b8u: goto label_3c34b8;
        case 0x3c34bcu: goto label_3c34bc;
        case 0x3c34c0u: goto label_3c34c0;
        case 0x3c34c4u: goto label_3c34c4;
        case 0x3c34c8u: goto label_3c34c8;
        case 0x3c34ccu: goto label_3c34cc;
        case 0x3c34d0u: goto label_3c34d0;
        case 0x3c34d4u: goto label_3c34d4;
        case 0x3c34d8u: goto label_3c34d8;
        case 0x3c34dcu: goto label_3c34dc;
        case 0x3c34e0u: goto label_3c34e0;
        case 0x3c34e4u: goto label_3c34e4;
        case 0x3c34e8u: goto label_3c34e8;
        case 0x3c34ecu: goto label_3c34ec;
        case 0x3c34f0u: goto label_3c34f0;
        case 0x3c34f4u: goto label_3c34f4;
        case 0x3c34f8u: goto label_3c34f8;
        case 0x3c34fcu: goto label_3c34fc;
        case 0x3c3500u: goto label_3c3500;
        case 0x3c3504u: goto label_3c3504;
        case 0x3c3508u: goto label_3c3508;
        case 0x3c350cu: goto label_3c350c;
        case 0x3c3510u: goto label_3c3510;
        case 0x3c3514u: goto label_3c3514;
        case 0x3c3518u: goto label_3c3518;
        case 0x3c351cu: goto label_3c351c;
        case 0x3c3520u: goto label_3c3520;
        case 0x3c3524u: goto label_3c3524;
        case 0x3c3528u: goto label_3c3528;
        case 0x3c352cu: goto label_3c352c;
        case 0x3c3530u: goto label_3c3530;
        case 0x3c3534u: goto label_3c3534;
        case 0x3c3538u: goto label_3c3538;
        case 0x3c353cu: goto label_3c353c;
        case 0x3c3540u: goto label_3c3540;
        case 0x3c3544u: goto label_3c3544;
        case 0x3c3548u: goto label_3c3548;
        case 0x3c354cu: goto label_3c354c;
        case 0x3c3550u: goto label_3c3550;
        case 0x3c3554u: goto label_3c3554;
        case 0x3c3558u: goto label_3c3558;
        case 0x3c355cu: goto label_3c355c;
        case 0x3c3560u: goto label_3c3560;
        case 0x3c3564u: goto label_3c3564;
        case 0x3c3568u: goto label_3c3568;
        case 0x3c356cu: goto label_3c356c;
        case 0x3c3570u: goto label_3c3570;
        case 0x3c3574u: goto label_3c3574;
        case 0x3c3578u: goto label_3c3578;
        case 0x3c357cu: goto label_3c357c;
        case 0x3c3580u: goto label_3c3580;
        case 0x3c3584u: goto label_3c3584;
        case 0x3c3588u: goto label_3c3588;
        case 0x3c358cu: goto label_3c358c;
        case 0x3c3590u: goto label_3c3590;
        case 0x3c3594u: goto label_3c3594;
        case 0x3c3598u: goto label_3c3598;
        case 0x3c359cu: goto label_3c359c;
        case 0x3c35a0u: goto label_3c35a0;
        case 0x3c35a4u: goto label_3c35a4;
        case 0x3c35a8u: goto label_3c35a8;
        case 0x3c35acu: goto label_3c35ac;
        case 0x3c35b0u: goto label_3c35b0;
        case 0x3c35b4u: goto label_3c35b4;
        case 0x3c35b8u: goto label_3c35b8;
        case 0x3c35bcu: goto label_3c35bc;
        case 0x3c35c0u: goto label_3c35c0;
        case 0x3c35c4u: goto label_3c35c4;
        case 0x3c35c8u: goto label_3c35c8;
        case 0x3c35ccu: goto label_3c35cc;
        case 0x3c35d0u: goto label_3c35d0;
        case 0x3c35d4u: goto label_3c35d4;
        case 0x3c35d8u: goto label_3c35d8;
        case 0x3c35dcu: goto label_3c35dc;
        case 0x3c35e0u: goto label_3c35e0;
        case 0x3c35e4u: goto label_3c35e4;
        case 0x3c35e8u: goto label_3c35e8;
        case 0x3c35ecu: goto label_3c35ec;
        case 0x3c35f0u: goto label_3c35f0;
        case 0x3c35f4u: goto label_3c35f4;
        case 0x3c35f8u: goto label_3c35f8;
        case 0x3c35fcu: goto label_3c35fc;
        case 0x3c3600u: goto label_3c3600;
        case 0x3c3604u: goto label_3c3604;
        case 0x3c3608u: goto label_3c3608;
        case 0x3c360cu: goto label_3c360c;
        case 0x3c3610u: goto label_3c3610;
        case 0x3c3614u: goto label_3c3614;
        case 0x3c3618u: goto label_3c3618;
        case 0x3c361cu: goto label_3c361c;
        case 0x3c3620u: goto label_3c3620;
        case 0x3c3624u: goto label_3c3624;
        case 0x3c3628u: goto label_3c3628;
        case 0x3c362cu: goto label_3c362c;
        case 0x3c3630u: goto label_3c3630;
        case 0x3c3634u: goto label_3c3634;
        case 0x3c3638u: goto label_3c3638;
        case 0x3c363cu: goto label_3c363c;
        case 0x3c3640u: goto label_3c3640;
        case 0x3c3644u: goto label_3c3644;
        case 0x3c3648u: goto label_3c3648;
        case 0x3c364cu: goto label_3c364c;
        case 0x3c3650u: goto label_3c3650;
        case 0x3c3654u: goto label_3c3654;
        case 0x3c3658u: goto label_3c3658;
        case 0x3c365cu: goto label_3c365c;
        case 0x3c3660u: goto label_3c3660;
        case 0x3c3664u: goto label_3c3664;
        case 0x3c3668u: goto label_3c3668;
        case 0x3c366cu: goto label_3c366c;
        case 0x3c3670u: goto label_3c3670;
        case 0x3c3674u: goto label_3c3674;
        case 0x3c3678u: goto label_3c3678;
        case 0x3c367cu: goto label_3c367c;
        case 0x3c3680u: goto label_3c3680;
        case 0x3c3684u: goto label_3c3684;
        case 0x3c3688u: goto label_3c3688;
        case 0x3c368cu: goto label_3c368c;
        case 0x3c3690u: goto label_3c3690;
        case 0x3c3694u: goto label_3c3694;
        case 0x3c3698u: goto label_3c3698;
        case 0x3c369cu: goto label_3c369c;
        case 0x3c36a0u: goto label_3c36a0;
        case 0x3c36a4u: goto label_3c36a4;
        case 0x3c36a8u: goto label_3c36a8;
        case 0x3c36acu: goto label_3c36ac;
        case 0x3c36b0u: goto label_3c36b0;
        case 0x3c36b4u: goto label_3c36b4;
        case 0x3c36b8u: goto label_3c36b8;
        case 0x3c36bcu: goto label_3c36bc;
        case 0x3c36c0u: goto label_3c36c0;
        case 0x3c36c4u: goto label_3c36c4;
        case 0x3c36c8u: goto label_3c36c8;
        case 0x3c36ccu: goto label_3c36cc;
        case 0x3c36d0u: goto label_3c36d0;
        case 0x3c36d4u: goto label_3c36d4;
        case 0x3c36d8u: goto label_3c36d8;
        case 0x3c36dcu: goto label_3c36dc;
        case 0x3c36e0u: goto label_3c36e0;
        case 0x3c36e4u: goto label_3c36e4;
        case 0x3c36e8u: goto label_3c36e8;
        case 0x3c36ecu: goto label_3c36ec;
        case 0x3c36f0u: goto label_3c36f0;
        case 0x3c36f4u: goto label_3c36f4;
        case 0x3c36f8u: goto label_3c36f8;
        case 0x3c36fcu: goto label_3c36fc;
        case 0x3c3700u: goto label_3c3700;
        case 0x3c3704u: goto label_3c3704;
        case 0x3c3708u: goto label_3c3708;
        case 0x3c370cu: goto label_3c370c;
        case 0x3c3710u: goto label_3c3710;
        case 0x3c3714u: goto label_3c3714;
        case 0x3c3718u: goto label_3c3718;
        case 0x3c371cu: goto label_3c371c;
        case 0x3c3720u: goto label_3c3720;
        case 0x3c3724u: goto label_3c3724;
        case 0x3c3728u: goto label_3c3728;
        case 0x3c372cu: goto label_3c372c;
        case 0x3c3730u: goto label_3c3730;
        case 0x3c3734u: goto label_3c3734;
        case 0x3c3738u: goto label_3c3738;
        case 0x3c373cu: goto label_3c373c;
        case 0x3c3740u: goto label_3c3740;
        case 0x3c3744u: goto label_3c3744;
        case 0x3c3748u: goto label_3c3748;
        case 0x3c374cu: goto label_3c374c;
        case 0x3c3750u: goto label_3c3750;
        case 0x3c3754u: goto label_3c3754;
        case 0x3c3758u: goto label_3c3758;
        case 0x3c375cu: goto label_3c375c;
        case 0x3c3760u: goto label_3c3760;
        case 0x3c3764u: goto label_3c3764;
        case 0x3c3768u: goto label_3c3768;
        case 0x3c376cu: goto label_3c376c;
        case 0x3c3770u: goto label_3c3770;
        case 0x3c3774u: goto label_3c3774;
        case 0x3c3778u: goto label_3c3778;
        case 0x3c377cu: goto label_3c377c;
        case 0x3c3780u: goto label_3c3780;
        case 0x3c3784u: goto label_3c3784;
        case 0x3c3788u: goto label_3c3788;
        case 0x3c378cu: goto label_3c378c;
        case 0x3c3790u: goto label_3c3790;
        case 0x3c3794u: goto label_3c3794;
        case 0x3c3798u: goto label_3c3798;
        case 0x3c379cu: goto label_3c379c;
        case 0x3c37a0u: goto label_3c37a0;
        case 0x3c37a4u: goto label_3c37a4;
        case 0x3c37a8u: goto label_3c37a8;
        case 0x3c37acu: goto label_3c37ac;
        case 0x3c37b0u: goto label_3c37b0;
        case 0x3c37b4u: goto label_3c37b4;
        case 0x3c37b8u: goto label_3c37b8;
        case 0x3c37bcu: goto label_3c37bc;
        case 0x3c37c0u: goto label_3c37c0;
        case 0x3c37c4u: goto label_3c37c4;
        case 0x3c37c8u: goto label_3c37c8;
        case 0x3c37ccu: goto label_3c37cc;
        case 0x3c37d0u: goto label_3c37d0;
        case 0x3c37d4u: goto label_3c37d4;
        case 0x3c37d8u: goto label_3c37d8;
        case 0x3c37dcu: goto label_3c37dc;
        case 0x3c37e0u: goto label_3c37e0;
        case 0x3c37e4u: goto label_3c37e4;
        case 0x3c37e8u: goto label_3c37e8;
        case 0x3c37ecu: goto label_3c37ec;
        case 0x3c37f0u: goto label_3c37f0;
        case 0x3c37f4u: goto label_3c37f4;
        case 0x3c37f8u: goto label_3c37f8;
        case 0x3c37fcu: goto label_3c37fc;
        case 0x3c3800u: goto label_3c3800;
        case 0x3c3804u: goto label_3c3804;
        case 0x3c3808u: goto label_3c3808;
        case 0x3c380cu: goto label_3c380c;
        case 0x3c3810u: goto label_3c3810;
        case 0x3c3814u: goto label_3c3814;
        case 0x3c3818u: goto label_3c3818;
        case 0x3c381cu: goto label_3c381c;
        case 0x3c3820u: goto label_3c3820;
        case 0x3c3824u: goto label_3c3824;
        case 0x3c3828u: goto label_3c3828;
        case 0x3c382cu: goto label_3c382c;
        case 0x3c3830u: goto label_3c3830;
        case 0x3c3834u: goto label_3c3834;
        case 0x3c3838u: goto label_3c3838;
        case 0x3c383cu: goto label_3c383c;
        case 0x3c3840u: goto label_3c3840;
        case 0x3c3844u: goto label_3c3844;
        case 0x3c3848u: goto label_3c3848;
        case 0x3c384cu: goto label_3c384c;
        case 0x3c3850u: goto label_3c3850;
        case 0x3c3854u: goto label_3c3854;
        case 0x3c3858u: goto label_3c3858;
        case 0x3c385cu: goto label_3c385c;
        case 0x3c3860u: goto label_3c3860;
        case 0x3c3864u: goto label_3c3864;
        case 0x3c3868u: goto label_3c3868;
        case 0x3c386cu: goto label_3c386c;
        case 0x3c3870u: goto label_3c3870;
        case 0x3c3874u: goto label_3c3874;
        case 0x3c3878u: goto label_3c3878;
        case 0x3c387cu: goto label_3c387c;
        case 0x3c3880u: goto label_3c3880;
        case 0x3c3884u: goto label_3c3884;
        case 0x3c3888u: goto label_3c3888;
        case 0x3c388cu: goto label_3c388c;
        case 0x3c3890u: goto label_3c3890;
        case 0x3c3894u: goto label_3c3894;
        case 0x3c3898u: goto label_3c3898;
        case 0x3c389cu: goto label_3c389c;
        case 0x3c38a0u: goto label_3c38a0;
        case 0x3c38a4u: goto label_3c38a4;
        case 0x3c38a8u: goto label_3c38a8;
        case 0x3c38acu: goto label_3c38ac;
        case 0x3c38b0u: goto label_3c38b0;
        case 0x3c38b4u: goto label_3c38b4;
        case 0x3c38b8u: goto label_3c38b8;
        case 0x3c38bcu: goto label_3c38bc;
        case 0x3c38c0u: goto label_3c38c0;
        case 0x3c38c4u: goto label_3c38c4;
        case 0x3c38c8u: goto label_3c38c8;
        case 0x3c38ccu: goto label_3c38cc;
        case 0x3c38d0u: goto label_3c38d0;
        case 0x3c38d4u: goto label_3c38d4;
        case 0x3c38d8u: goto label_3c38d8;
        case 0x3c38dcu: goto label_3c38dc;
        case 0x3c38e0u: goto label_3c38e0;
        case 0x3c38e4u: goto label_3c38e4;
        case 0x3c38e8u: goto label_3c38e8;
        case 0x3c38ecu: goto label_3c38ec;
        case 0x3c38f0u: goto label_3c38f0;
        case 0x3c38f4u: goto label_3c38f4;
        case 0x3c38f8u: goto label_3c38f8;
        case 0x3c38fcu: goto label_3c38fc;
        case 0x3c3900u: goto label_3c3900;
        case 0x3c3904u: goto label_3c3904;
        case 0x3c3908u: goto label_3c3908;
        case 0x3c390cu: goto label_3c390c;
        case 0x3c3910u: goto label_3c3910;
        case 0x3c3914u: goto label_3c3914;
        case 0x3c3918u: goto label_3c3918;
        case 0x3c391cu: goto label_3c391c;
        case 0x3c3920u: goto label_3c3920;
        case 0x3c3924u: goto label_3c3924;
        case 0x3c3928u: goto label_3c3928;
        case 0x3c392cu: goto label_3c392c;
        case 0x3c3930u: goto label_3c3930;
        case 0x3c3934u: goto label_3c3934;
        case 0x3c3938u: goto label_3c3938;
        case 0x3c393cu: goto label_3c393c;
        case 0x3c3940u: goto label_3c3940;
        case 0x3c3944u: goto label_3c3944;
        case 0x3c3948u: goto label_3c3948;
        case 0x3c394cu: goto label_3c394c;
        case 0x3c3950u: goto label_3c3950;
        case 0x3c3954u: goto label_3c3954;
        case 0x3c3958u: goto label_3c3958;
        case 0x3c395cu: goto label_3c395c;
        case 0x3c3960u: goto label_3c3960;
        case 0x3c3964u: goto label_3c3964;
        case 0x3c3968u: goto label_3c3968;
        case 0x3c396cu: goto label_3c396c;
        case 0x3c3970u: goto label_3c3970;
        case 0x3c3974u: goto label_3c3974;
        case 0x3c3978u: goto label_3c3978;
        case 0x3c397cu: goto label_3c397c;
        case 0x3c3980u: goto label_3c3980;
        case 0x3c3984u: goto label_3c3984;
        case 0x3c3988u: goto label_3c3988;
        case 0x3c398cu: goto label_3c398c;
        case 0x3c3990u: goto label_3c3990;
        case 0x3c3994u: goto label_3c3994;
        case 0x3c3998u: goto label_3c3998;
        case 0x3c399cu: goto label_3c399c;
        case 0x3c39a0u: goto label_3c39a0;
        case 0x3c39a4u: goto label_3c39a4;
        case 0x3c39a8u: goto label_3c39a8;
        case 0x3c39acu: goto label_3c39ac;
        case 0x3c39b0u: goto label_3c39b0;
        case 0x3c39b4u: goto label_3c39b4;
        case 0x3c39b8u: goto label_3c39b8;
        case 0x3c39bcu: goto label_3c39bc;
        case 0x3c39c0u: goto label_3c39c0;
        case 0x3c39c4u: goto label_3c39c4;
        case 0x3c39c8u: goto label_3c39c8;
        case 0x3c39ccu: goto label_3c39cc;
        case 0x3c39d0u: goto label_3c39d0;
        case 0x3c39d4u: goto label_3c39d4;
        case 0x3c39d8u: goto label_3c39d8;
        case 0x3c39dcu: goto label_3c39dc;
        case 0x3c39e0u: goto label_3c39e0;
        case 0x3c39e4u: goto label_3c39e4;
        case 0x3c39e8u: goto label_3c39e8;
        case 0x3c39ecu: goto label_3c39ec;
        case 0x3c39f0u: goto label_3c39f0;
        case 0x3c39f4u: goto label_3c39f4;
        case 0x3c39f8u: goto label_3c39f8;
        case 0x3c39fcu: goto label_3c39fc;
        case 0x3c3a00u: goto label_3c3a00;
        case 0x3c3a04u: goto label_3c3a04;
        case 0x3c3a08u: goto label_3c3a08;
        case 0x3c3a0cu: goto label_3c3a0c;
        case 0x3c3a10u: goto label_3c3a10;
        case 0x3c3a14u: goto label_3c3a14;
        case 0x3c3a18u: goto label_3c3a18;
        case 0x3c3a1cu: goto label_3c3a1c;
        case 0x3c3a20u: goto label_3c3a20;
        case 0x3c3a24u: goto label_3c3a24;
        case 0x3c3a28u: goto label_3c3a28;
        case 0x3c3a2cu: goto label_3c3a2c;
        case 0x3c3a30u: goto label_3c3a30;
        case 0x3c3a34u: goto label_3c3a34;
        case 0x3c3a38u: goto label_3c3a38;
        case 0x3c3a3cu: goto label_3c3a3c;
        case 0x3c3a40u: goto label_3c3a40;
        case 0x3c3a44u: goto label_3c3a44;
        case 0x3c3a48u: goto label_3c3a48;
        case 0x3c3a4cu: goto label_3c3a4c;
        case 0x3c3a50u: goto label_3c3a50;
        case 0x3c3a54u: goto label_3c3a54;
        case 0x3c3a58u: goto label_3c3a58;
        case 0x3c3a5cu: goto label_3c3a5c;
        case 0x3c3a60u: goto label_3c3a60;
        case 0x3c3a64u: goto label_3c3a64;
        case 0x3c3a68u: goto label_3c3a68;
        case 0x3c3a6cu: goto label_3c3a6c;
        case 0x3c3a70u: goto label_3c3a70;
        case 0x3c3a74u: goto label_3c3a74;
        case 0x3c3a78u: goto label_3c3a78;
        case 0x3c3a7cu: goto label_3c3a7c;
        case 0x3c3a80u: goto label_3c3a80;
        case 0x3c3a84u: goto label_3c3a84;
        case 0x3c3a88u: goto label_3c3a88;
        case 0x3c3a8cu: goto label_3c3a8c;
        case 0x3c3a90u: goto label_3c3a90;
        case 0x3c3a94u: goto label_3c3a94;
        case 0x3c3a98u: goto label_3c3a98;
        case 0x3c3a9cu: goto label_3c3a9c;
        case 0x3c3aa0u: goto label_3c3aa0;
        case 0x3c3aa4u: goto label_3c3aa4;
        case 0x3c3aa8u: goto label_3c3aa8;
        case 0x3c3aacu: goto label_3c3aac;
        case 0x3c3ab0u: goto label_3c3ab0;
        case 0x3c3ab4u: goto label_3c3ab4;
        case 0x3c3ab8u: goto label_3c3ab8;
        case 0x3c3abcu: goto label_3c3abc;
        case 0x3c3ac0u: goto label_3c3ac0;
        case 0x3c3ac4u: goto label_3c3ac4;
        case 0x3c3ac8u: goto label_3c3ac8;
        case 0x3c3accu: goto label_3c3acc;
        case 0x3c3ad0u: goto label_3c3ad0;
        case 0x3c3ad4u: goto label_3c3ad4;
        case 0x3c3ad8u: goto label_3c3ad8;
        case 0x3c3adcu: goto label_3c3adc;
        case 0x3c3ae0u: goto label_3c3ae0;
        case 0x3c3ae4u: goto label_3c3ae4;
        case 0x3c3ae8u: goto label_3c3ae8;
        case 0x3c3aecu: goto label_3c3aec;
        case 0x3c3af0u: goto label_3c3af0;
        case 0x3c3af4u: goto label_3c3af4;
        case 0x3c3af8u: goto label_3c3af8;
        case 0x3c3afcu: goto label_3c3afc;
        case 0x3c3b00u: goto label_3c3b00;
        case 0x3c3b04u: goto label_3c3b04;
        case 0x3c3b08u: goto label_3c3b08;
        case 0x3c3b0cu: goto label_3c3b0c;
        case 0x3c3b10u: goto label_3c3b10;
        case 0x3c3b14u: goto label_3c3b14;
        case 0x3c3b18u: goto label_3c3b18;
        case 0x3c3b1cu: goto label_3c3b1c;
        case 0x3c3b20u: goto label_3c3b20;
        case 0x3c3b24u: goto label_3c3b24;
        case 0x3c3b28u: goto label_3c3b28;
        case 0x3c3b2cu: goto label_3c3b2c;
        case 0x3c3b30u: goto label_3c3b30;
        case 0x3c3b34u: goto label_3c3b34;
        case 0x3c3b38u: goto label_3c3b38;
        case 0x3c3b3cu: goto label_3c3b3c;
        case 0x3c3b40u: goto label_3c3b40;
        case 0x3c3b44u: goto label_3c3b44;
        case 0x3c3b48u: goto label_3c3b48;
        case 0x3c3b4cu: goto label_3c3b4c;
        case 0x3c3b50u: goto label_3c3b50;
        case 0x3c3b54u: goto label_3c3b54;
        case 0x3c3b58u: goto label_3c3b58;
        case 0x3c3b5cu: goto label_3c3b5c;
        case 0x3c3b60u: goto label_3c3b60;
        case 0x3c3b64u: goto label_3c3b64;
        case 0x3c3b68u: goto label_3c3b68;
        case 0x3c3b6cu: goto label_3c3b6c;
        case 0x3c3b70u: goto label_3c3b70;
        case 0x3c3b74u: goto label_3c3b74;
        case 0x3c3b78u: goto label_3c3b78;
        case 0x3c3b7cu: goto label_3c3b7c;
        case 0x3c3b80u: goto label_3c3b80;
        case 0x3c3b84u: goto label_3c3b84;
        case 0x3c3b88u: goto label_3c3b88;
        case 0x3c3b8cu: goto label_3c3b8c;
        case 0x3c3b90u: goto label_3c3b90;
        case 0x3c3b94u: goto label_3c3b94;
        case 0x3c3b98u: goto label_3c3b98;
        case 0x3c3b9cu: goto label_3c3b9c;
        case 0x3c3ba0u: goto label_3c3ba0;
        case 0x3c3ba4u: goto label_3c3ba4;
        default: break;
    }

    ctx->pc = 0x3c3448u;

label_3c3448:
    // 0x3c3448: 0x27bdf9f0  addiu       $sp, $sp, -0x610
    ctx->pc = 0x3c3448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965744));
label_3c344c:
    // 0x3c344c: 0xafa50510  sw          $a1, 0x510($sp)
    ctx->pc = 0x3c344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 5));
label_3c3450:
    // 0x3c3450: 0x7fb005c0  sq          $s0, 0x5C0($sp)
    ctx->pc = 0x3c3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 16));
label_3c3454:
    // 0x3c3454: 0x7fb105b0  sq          $s1, 0x5B0($sp)
    ctx->pc = 0x3c3454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 17));
label_3c3458:
    // 0x3c3458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c345c:
    // 0x3c345c: 0x7fb50570  sq          $s5, 0x570($sp)
    ctx->pc = 0x3c345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 21));
label_3c3460:
    // 0x3c3460: 0x7fb205a0  sq          $s2, 0x5A0($sp)
    ctx->pc = 0x3c3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 18));
label_3c3464:
    // 0x3c3464: 0x7fb30590  sq          $s3, 0x590($sp)
    ctx->pc = 0x3c3464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 19));
label_3c3468:
    // 0x3c3468: 0x7fb40580  sq          $s4, 0x580($sp)
    ctx->pc = 0x3c3468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 20));
label_3c346c:
    // 0x3c346c: 0x7fb60560  sq          $s6, 0x560($sp)
    ctx->pc = 0x3c346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 22));
label_3c3470:
    // 0x3c3470: 0x7fb70550  sq          $s7, 0x550($sp)
    ctx->pc = 0x3c3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 23));
label_3c3474:
    // 0x3c3474: 0x7fbe0540  sq          $fp, 0x540($sp)
    ctx->pc = 0x3c3474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 30));
label_3c3478:
    // 0x3c3478: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x3c3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
label_3c347c:
    // 0x3c347c: 0xe7bb0608  swc1        $f27, 0x608($sp)
    ctx->pc = 0x3c347cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1544), bits); }
label_3c3480:
    // 0x3c3480: 0xe7ba0600  swc1        $f26, 0x600($sp)
    ctx->pc = 0x3c3480u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1536), bits); }
label_3c3484:
    // 0x3c3484: 0xe7b905f8  swc1        $f25, 0x5F8($sp)
    ctx->pc = 0x3c3484u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1528), bits); }
label_3c3488:
    // 0x3c3488: 0xe7b805f0  swc1        $f24, 0x5F0($sp)
    ctx->pc = 0x3c3488u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1520), bits); }
label_3c348c:
    // 0x3c348c: 0xe7b705e8  swc1        $f23, 0x5E8($sp)
    ctx->pc = 0x3c348cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1512), bits); }
label_3c3490:
    // 0x3c3490: 0xe7b605e0  swc1        $f22, 0x5E0($sp)
    ctx->pc = 0x3c3490u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1504), bits); }
label_3c3494:
    // 0x3c3494: 0xe7b505d8  swc1        $f21, 0x5D8($sp)
    ctx->pc = 0x3c3494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1496), bits); }
label_3c3498:
    // 0x3c3498: 0xe7b405d0  swc1        $f20, 0x5D0($sp)
    ctx->pc = 0x3c3498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1488), bits); }
label_3c349c:
    // 0x3c349c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c34a0:
    // 0x3c34a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c34a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c34a4:
    // 0x3c34a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c34a8:
    // 0x3c34a8: 0x40f809  jalr        $v0
label_3c34ac:
    if (ctx->pc == 0x3C34ACu) {
        ctx->pc = 0x3C34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34A8u;
        // 0x3c34ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34B0u;
        goto label_3c34b0;
    }
    ctx->pc = 0x3C34A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C34B0u);
        ctx->pc = 0x3C34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34A8u;
        // 0x3c34ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C34A8u, 0x3C34B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C34B0u;
label_3c34b0:
    // 0x3c34b0: 0x8fa40510  lw          $a0, 0x510($sp)
    ctx->pc = 0x3c34b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c34b4:
    // 0x3c34b4: 0xc0ea14c  jal         func_3A8530
label_3c34b8:
    if (ctx->pc == 0x3C34B8u) {
        ctx->pc = 0x3C34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34B4u;
        // 0x3c34b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34BCu;
        goto label_3c34bc;
    }
    ctx->pc = 0x3C34B4u;
    SET_GPR_U32(ctx, 31, 0x3C34BCu);
    ctx->pc = 0x3C34B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34B4u;
    // 0x3c34b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C34B4u, 0x3C34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34BCu;
label_3c34bc:
    // 0x3c34bc: 0x8fa50510  lw          $a1, 0x510($sp)
    ctx->pc = 0x3c34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c34c0:
    // 0x3c34c0: 0xc0ea12a  jal         func_3A84A8
label_3c34c4:
    if (ctx->pc == 0x3C34C4u) {
        ctx->pc = 0x3C34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34C0u;
        // 0x3c34c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34C8u;
        goto label_3c34c8;
    }
    ctx->pc = 0x3C34C0u;
    SET_GPR_U32(ctx, 31, 0x3C34C8u);
    ctx->pc = 0x3C34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34C0u;
    // 0x3c34c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C34C0u, 0x3C34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34C8u;
label_3c34c8:
    // 0x3c34c8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c34c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c34cc:
    // 0x3c34cc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3c34ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c34d0:
    // 0x3c34d0: 0x8fa50510  lw          $a1, 0x510($sp)
    ctx->pc = 0x3c34d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c34d4:
    // 0x3c34d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c34d8:
    // 0x3c34d8: 0xc0ea12a  jal         func_3A84A8
label_3c34dc:
    if (ctx->pc == 0x3C34DCu) {
        ctx->pc = 0x3C34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34D8u;
        // 0x3c34dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34E0u;
        goto label_3c34e0;
    }
    ctx->pc = 0x3C34D8u;
    SET_GPR_U32(ctx, 31, 0x3C34E0u);
    ctx->pc = 0x3C34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34D8u;
    // 0x3c34dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C34D8u, 0x3C34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34E0u;
label_3c34e0:
    // 0x3c34e0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c34e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c34e4:
    // 0x3c34e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c34e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c34e8:
    // 0x3c34e8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3c34e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3c34ec:
    // 0x3c34ec: 0xc0e858c  jal         func_3A1630
label_3c34f0:
    if (ctx->pc == 0x3C34F0u) {
        ctx->pc = 0x3C34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34ECu;
        // 0x3c34f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C34F4u;
        goto label_3c34f4;
    }
    ctx->pc = 0x3C34ECu;
    SET_GPR_U32(ctx, 31, 0x3C34F4u);
    ctx->pc = 0x3C34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34ECu;
    // 0x3c34f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C34ECu, 0x3C34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34F4u;
label_3c34f4:
    // 0x3c34f4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c34f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c34f8:
    // 0x3c34f8: 0x24040c04  addiu       $a0, $zero, 0xC04
    ctx->pc = 0x3c34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3076));
label_3c34fc:
    // 0x3c34fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c34fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3500:
    // 0x3c3500: 0x3c05000c  lui         $a1, 0xC
    ctx->pc = 0x3c3500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12 << 16));
label_3c3504:
    // 0x3c3504: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3c3504u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3c3508:
    // 0x3c3508: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3c3508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3c350c:
    // 0x3c350c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3c350cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3c3510:
    // 0x3c3510: 0xaea50004  sw          $a1, 0x4($s5)
    ctx->pc = 0x3c3510u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
label_3c3514:
    // 0x3c3514: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c3514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c3518:
    // 0x3c3518: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c3518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c351c:
    // 0x3c351c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c3520:
    // 0x3c3520: 0x40f809  jalr        $v0
label_3c3524:
    if (ctx->pc == 0x3C3524u) {
        ctx->pc = 0x3C3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3520u;
        // 0x3c3524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3528u;
        goto label_3c3528;
    }
    ctx->pc = 0x3C3520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3528u);
        ctx->pc = 0x3C3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3520u;
        // 0x3c3524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3520u, 0x3C3528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3528u;
label_3c3528:
    // 0x3c3528: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3c3528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3c352c:
    // 0x3c352c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c352cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c3530:
    // 0x3c3530: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3c3530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3c3534:
    // 0x3c3534: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x3c3534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
label_3c3538:
    // 0x3c3538: 0x34470001  ori         $a3, $v0, 0x1
    ctx->pc = 0x3c3538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3c353c:
    // 0x3c353c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3540:
    // 0x3c3540: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3c3540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c3544:
    // 0x3c3544: 0xc0e93a2  jal         func_3A4E88
label_3c3548:
    if (ctx->pc == 0x3C3548u) {
        ctx->pc = 0x3C3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3544u;
        // 0x3c3548: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C354Cu;
        goto label_3c354c;
    }
    ctx->pc = 0x3C3544u;
    SET_GPR_U32(ctx, 31, 0x3C354Cu);
    ctx->pc = 0x3C3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3544u;
    // 0x3c3548: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3C3544u, 0x3C354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C354Cu;
label_3c354c:
    // 0x3c354c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x3c354cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_3c3550:
    // 0x3c3550: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c3550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c3554:
    // 0x3c3554: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3c3554u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3c3558:
    // 0x3c3558: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3c3558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3c355c:
    // 0x3c355c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3c355cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c3560:
    // 0x3c3560: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c3560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3564:
    // 0x3c3564: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x3c3564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_3c3568:
    // 0x3c3568: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3c3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3c356c:
    // 0x3c356c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c3570:
    // 0x3c3570: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c3570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c3574:
    // 0x3c3574: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3c3574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3c3578:
    // 0x3c3578: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c3578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c357c:
    // 0x3c357c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c357cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c3580:
    // 0x3c3580: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c3580u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c3584:
    // 0x3c3584: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c3584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c3588:
    // 0x3c3588: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c3588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c358c:
    // 0x3c358c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c358cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c3590:
    // 0x3c3590: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c3590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c3594:
    // 0x3c3594: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c3594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c3598:
    // 0x3c3598: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c3598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c359c:
    // 0x3c359c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c359cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c35a0:
    // 0x3c35a0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c35a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c35a4:
    // 0x3c35a4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c35a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c35a8:
    // 0x3c35a8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c35a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c35ac:
    // 0x3c35ac: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c35acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c35b0:
    // 0x3c35b0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c35b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c35b4:
    // 0x3c35b4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c35b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c35b8:
    // 0x3c35b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c35bc:
    // 0x3c35bc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3c35bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3c35c0:
    // 0x3c35c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3c35c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3c35c4:
    // 0x3c35c4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3c35c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3c35c8:
    // 0x3c35c8: 0xc136b18  jal         func_4DAC60
label_3c35cc:
    if (ctx->pc == 0x3C35CCu) {
        ctx->pc = 0x3C35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C35C8u;
        // 0x3c35cc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C35D0u;
        goto label_3c35d0;
    }
    ctx->pc = 0x3C35C8u;
    SET_GPR_U32(ctx, 31, 0x3C35D0u);
    ctx->pc = 0x3C35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35C8u;
    // 0x3c35cc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C35C8u, 0x3C35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C35D0u;
label_3c35d0:
    // 0x3c35d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c35d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c35d4:
    // 0x3c35d4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c35d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c35d8:
    // 0x3c35d8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3c35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3c35dc:
    // 0x3c35dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c35e0:
    // 0x3c35e0: 0xafa20518  sw          $v0, 0x518($sp)
    ctx->pc = 0x3c35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1304), GPR_U32(ctx, 2));
label_3c35e4:
    // 0x3c35e4: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x3c35e4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
label_3c35e8:
    // 0x3c35e8: 0x27a20460  addiu       $v0, $sp, 0x460
    ctx->pc = 0x3c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c35ec:
    // 0x3c35ec: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3c35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3c35f0:
    // 0x3c35f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c35f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c35f4:
    // 0x3c35f4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c35f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c35f8:
    // 0x3c35f8: 0xafa20524  sw          $v0, 0x524($sp)
    ctx->pc = 0x3c35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1316), GPR_U32(ctx, 2));
label_3c35fc:
    // 0x3c35fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c35fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3600:
    // 0x3c3600: 0x27a20470  addiu       $v0, $sp, 0x470
    ctx->pc = 0x3c3600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c3604:
    // 0x3c3604: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c3604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c3608:
    // 0x3c3608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c3608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c360c:
    // 0x3c360c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c360cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c3610:
    // 0x3c3610: 0xafa20528  sw          $v0, 0x528($sp)
    ctx->pc = 0x3c3610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1320), GPR_U32(ctx, 2));
label_3c3614:
    // 0x3c3614: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x3c3614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c3618:
    // 0x3c3618: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3c3618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c361c:
    // 0x3c361c: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x3c361cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c3620:
    // 0x3c3620: 0x27be0480  addiu       $fp, $sp, 0x480
    ctx->pc = 0x3c3620u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c3624:
    // 0x3c3624: 0x27b60490  addiu       $s6, $sp, 0x490
    ctx->pc = 0x3c3624u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c3628:
    // 0x3c3628: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c3628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c362c:
    // 0x3c362c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x3c362cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c3630:
    // 0x3c3630: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c3630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c3634:
    // 0x3c3634: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x3c3634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3c3638:
    // 0x3c3638: 0x2471b8b8  addiu       $s1, $v1, -0x4748
    ctx->pc = 0x3c3638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3c363c:
    // 0x3c363c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c363cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3640:
    // 0x3c3640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3644:
    // 0x3c3644: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c3644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c3648:
    // 0x3c3648: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c3648u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c364c:
    // 0x3c364c: 0xc0cd518  jal         func_335460
label_3c3650:
    if (ctx->pc == 0x3C3650u) {
        ctx->pc = 0x3C3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C364Cu;
        // 0x3c3650: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3654u;
        goto label_3c3654;
    }
    ctx->pc = 0x3C364Cu;
    SET_GPR_U32(ctx, 31, 0x3C3654u);
    ctx->pc = 0x3C3650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C364Cu;
    // 0x3c3650: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C364Cu, 0x3C3654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3654u;
label_3c3654:
    // 0x3c3654: 0x3c01c060  lui         $at, 0xC060
    ctx->pc = 0x3c3654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49248 << 16));
label_3c3658:
    // 0x3c3658: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c3658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c365c:
    // 0x3c365c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c365cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c3660:
    // 0x3c3660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3664:
    // 0x3c3664: 0xc0cd518  jal         func_335460
label_3c3668:
    if (ctx->pc == 0x3C3668u) {
        ctx->pc = 0x3C3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3664u;
        // 0x3c3668: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C366Cu;
        goto label_3c366c;
    }
    ctx->pc = 0x3C3664u;
    SET_GPR_U32(ctx, 31, 0x3C366Cu);
    ctx->pc = 0x3C3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3664u;
    // 0x3c3668: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3664u, 0x3C366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C366Cu;
label_3c366c:
    // 0x3c366c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c366cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c3670:
    // 0x3c3670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3674:
    // 0x3c3674: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c3674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c3678:
    // 0x3c3678: 0xc0cd518  jal         func_335460
label_3c367c:
    if (ctx->pc == 0x3C367Cu) {
        ctx->pc = 0x3C367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3678u;
        // 0x3c367c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3680u;
        goto label_3c3680;
    }
    ctx->pc = 0x3C3678u;
    SET_GPR_U32(ctx, 31, 0x3C3680u);
    ctx->pc = 0x3C367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3678u;
    // 0x3c367c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3678u, 0x3C3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3680u;
label_3c3680:
    // 0x3c3680: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3c3680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3c3684:
    // 0x3c3684: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3c3684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3c3688:
    // 0x3c3688: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3c3688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3c368c:
    // 0x3c368c: 0xe679000c  swc1        $f25, 0xC($s3)
    ctx->pc = 0x3c368cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3c3690:
    // 0x3c3690: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3c3690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c3694:
    // 0x3c3694: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3c3694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c3698:
    // 0x3c3698: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3c3698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3c369c:
    // 0x3c369c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c36a0:
    // 0x3c36a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c36a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c36a4:
    // 0x3c36a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c36a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c36a8:
    // 0x3c36a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c36a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c36ac:
    // 0x3c36ac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c36acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c36b0:
    // 0x3c36b0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c36b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c36b4:
    // 0x3c36b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c36b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c36b8:
    // 0x3c36b8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c36b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c36bc:
    // 0x3c36bc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c36bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c36c0:
    // 0x3c36c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c36c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c36c4:
    // 0x3c36c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c36c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c36c8:
    // 0x3c36c8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c36c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c36cc:
    // 0x3c36cc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c36ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c36d0:
    // 0x3c36d0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c36d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c36d4:
    // 0x3c36d4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c36d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c36d8:
    // 0x3c36d8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c36d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c36dc:
    // 0x3c36dc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c36dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c36e0:
    // 0x3c36e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c36e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c36e4:
    // 0x3c36e4: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x3c36e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c36e8:
    // 0x3c36e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c36e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c36ec:
    // 0x3c36ec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3c36ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3c36f0:
    // 0x3c36f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c36f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c36f4:
    // 0x3c36f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c36f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c36f8:
    // 0x3c36f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3c36f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3c36fc:
    // 0x3c36fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c36fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c3700:
    // 0x3c3700: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x3c3700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_3c3704:
    // 0x3c3704: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c3704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c3708:
    // 0x3c3708: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c3708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c370c:
    // 0x3c370c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3c370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3c3710:
    // 0x3c3710: 0xc0cd518  jal         func_335460
label_3c3714:
    if (ctx->pc == 0x3C3714u) {
        ctx->pc = 0x3C3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3710u;
        // 0x3c3714: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3718u;
        goto label_3c3718;
    }
    ctx->pc = 0x3C3710u;
    SET_GPR_U32(ctx, 31, 0x3C3718u);
    ctx->pc = 0x3C3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3710u;
    // 0x3c3714: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3710u, 0x3C3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3718u;
label_3c3718:
    // 0x3c3718: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x3c3718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3c371c:
    // 0x3c371c: 0x2e4b0001  sltiu       $t3, $s2, 0x1
    ctx->pc = 0x3c371cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3c3720:
    // 0x3c3720: 0x8fa70518  lw          $a3, 0x518($sp)
    ctx->pc = 0x3c3720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3c3724:
    // 0x3c3724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3728:
    // 0x3c3728: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c3728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c372c:
    // 0x3c372c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3c372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c3730:
    // 0x3c3730: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3c3730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c3734:
    // 0x3c3734: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3c3734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3738:
    // 0x3c3738: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x3c3738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3c373c:
    // 0x3c373c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x3c373cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c3740:
    // 0x3c3740: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3c3740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3c3744:
    // 0x3c3744: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c3744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c3748:
    // 0x3c3748: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3c3748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_3c374c:
    // 0x3c374c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x3c374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3c3750:
    // 0x3c3750: 0xafab00a0  sw          $t3, 0xA0($sp)
    ctx->pc = 0x3c3750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 11));
label_3c3754:
    // 0x3c3754: 0xc0ea040  jal         func_3A8100
label_3c3758:
    if (ctx->pc == 0x3C3758u) {
        ctx->pc = 0x3C3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3754u;
        // 0x3c3758: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C375Cu;
        goto label_3c375c;
    }
    ctx->pc = 0x3C3754u;
    SET_GPR_U32(ctx, 31, 0x3C375Cu);
    ctx->pc = 0x3C3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3754u;
    // 0x3c3758: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3C3754u, 0x3C375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C375Cu;
label_3c375c:
    // 0x3c375c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c3760:
    // 0x3c3760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c3760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3764:
    // 0x3c3764: 0xc0f15bc  jal         func_3C56F0
label_3c3768:
    if (ctx->pc == 0x3C3768u) {
        ctx->pc = 0x3C3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3764u;
        // 0x3c3768: 0x24442dc8  addiu       $a0, $v0, 0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C376Cu;
        goto label_3c376c;
    }
    ctx->pc = 0x3C3764u;
    SET_GPR_U32(ctx, 31, 0x3C376Cu);
    ctx->pc = 0x3C3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3764u;
    // 0x3c3768: 0x24442dc8  addiu       $a0, $v0, 0x2DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3764u, 0x3C376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C376Cu;
label_3c376c:
    // 0x3c376c: 0x2e430006  sltiu       $v1, $s2, 0x6
    ctx->pc = 0x3c376cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3c3770:
    // 0x3c3770: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_3c3774:
    if (ctx->pc == 0x3C3774u) {
        ctx->pc = 0x3C3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3770u;
        // 0x3c3774: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3778u;
        goto label_3c3778;
    }
    ctx->pc = 0x3C3770u;
    {
        const bool branch_taken_0x3c3770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3770u;
        // 0x3c3774: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3770) {
            ctx->pc = 0x3C3640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3640;
        }
    }
    ctx->pc = 0x3C3778u;
label_3c3778:
    // 0x3c3778: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c3778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c377c:
    // 0x3c377c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x3c377cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c3780:
    // 0x3c3780: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c3780u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3784:
    // 0x3c3784: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c3788:
    // 0x3c3788: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x3c3788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_3c378c:
    // 0x3c378c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c378cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c3790:
    // 0x3c3790: 0x8fa50524  lw          $a1, 0x524($sp)
    ctx->pc = 0x3c3790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_3c3794:
    // 0x3c3794: 0x26102de0  addiu       $s0, $s0, 0x2DE0
    ctx->pc = 0x3c3794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11744));
label_3c3798:
    // 0x3c3798: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c3798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c379c:
    // 0x3c379c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x3c379cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
label_3c37a0:
    // 0x3c37a0: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3c37a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3c37a4:
    // 0x3c37a4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3c37a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c37a8:
    // 0x3c37a8: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3c37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3c37ac:
    // 0x3c37ac: 0xc0e9fa6  jal         func_3A7E98
label_3c37b0:
    if (ctx->pc == 0x3C37B0u) {
        ctx->pc = 0x3C37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37ACu;
        // 0x3c37b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C37B4u;
        goto label_3c37b4;
    }
    ctx->pc = 0x3C37ACu;
    SET_GPR_U32(ctx, 31, 0x3C37B4u);
    ctx->pc = 0x3C37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C37ACu;
    // 0x3c37b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C37ACu, 0x3C37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C37B4u;
label_3c37b4:
    // 0x3c37b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c37b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c37b8:
    // 0x3c37b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c37b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c37bc:
    // 0x3c37bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c37bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c37c0:
    // 0x3c37c0: 0xc0f15bc  jal         func_3C56F0
label_3c37c4:
    if (ctx->pc == 0x3C37C4u) {
        ctx->pc = 0x3C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37C0u;
        // 0x3c37c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C37C8u;
        goto label_3c37c8;
    }
    ctx->pc = 0x3C37C0u;
    SET_GPR_U32(ctx, 31, 0x3C37C8u);
    ctx->pc = 0x3C37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C37C0u;
    // 0x3c37c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C37C0u, 0x3C37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C37C8u;
label_3c37c8:
    // 0x3c37c8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c37c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c37cc:
    // 0x3c37cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c37ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c37d0:
    // 0x3c37d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c37d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c37d4:
    // 0x3c37d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3c37d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c37d8:
    // 0x3c37d8: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c37d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c37dc:
    // 0x3c37dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c37dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c37e0:
    // 0x3c37e0: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c37e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c37e4:
    // 0x3c37e4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3c37e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3c37e8:
    // 0x3c37e8: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x3c37e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_3c37ec:
    // 0x3c37ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c37f0:
    // 0x3c37f0: 0xe6d40008  swc1        $f20, 0x8($s6)
    ctx->pc = 0x3c37f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_3c37f4:
    // 0x3c37f4: 0x26102df8  addiu       $s0, $s0, 0x2DF8
    ctx->pc = 0x3c37f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11768));
label_3c37f8:
    // 0x3c37f8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3c37f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3c37fc:
    // 0x3c37fc: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3c37fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3c3800:
    // 0x3c3800: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x3c3800u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_3c3804:
    // 0x3c3804: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c3804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c3808:
    // 0x3c3808: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x3c3808u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
label_3c380c:
    // 0x3c380c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3c380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3c3810:
    // 0x3c3810: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c3810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c3814:
    // 0x3c3814: 0xc136b18  jal         func_4DAC60
label_3c3818:
    if (ctx->pc == 0x3C3818u) {
        ctx->pc = 0x3C3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3814u;
        // 0x3c3818: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C381Cu;
        goto label_3c381c;
    }
    ctx->pc = 0x3C3814u;
    SET_GPR_U32(ctx, 31, 0x3C381Cu);
    ctx->pc = 0x3C3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3814u;
    // 0x3c3818: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C3814u, 0x3C381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C381Cu;
label_3c381c:
    // 0x3c381c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c3820:
    // 0x3c3820: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c3820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c3824:
    // 0x3c3824: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3c3824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3c3828:
    // 0x3c3828: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c3828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c382c:
    // 0x3c382c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c3830:
    // 0x3c3830: 0x8fa50524  lw          $a1, 0x524($sp)
    ctx->pc = 0x3c3830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_3c3834:
    // 0x3c3834: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c3834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c3838:
    // 0x3c3838: 0xc0e9f6a  jal         func_3A7DA8
label_3c383c:
    if (ctx->pc == 0x3C383Cu) {
        ctx->pc = 0x3C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3838u;
        // 0x3c383c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3840u;
        goto label_3c3840;
    }
    ctx->pc = 0x3C3838u;
    SET_GPR_U32(ctx, 31, 0x3C3840u);
    ctx->pc = 0x3C383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3838u;
    // 0x3c383c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3C3838u, 0x3C3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3840u;
label_3c3840:
    // 0x3c3840: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c3844:
    // 0x3c3844: 0xc0f15bc  jal         func_3C56F0
label_3c3848:
    if (ctx->pc == 0x3C3848u) {
        ctx->pc = 0x3C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3844u;
        // 0x3c3848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C384Cu;
        goto label_3c384c;
    }
    ctx->pc = 0x3C3844u;
    SET_GPR_U32(ctx, 31, 0x3C384Cu);
    ctx->pc = 0x3C3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3844u;
    // 0x3c3848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3844u, 0x3C384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C384Cu;
label_3c384c:
    // 0x3c384c: 0x27a204b0  addiu       $v0, $sp, 0x4B0
    ctx->pc = 0x3c384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3c3850:
    // 0x3c3850: 0x27b104a0  addiu       $s1, $sp, 0x4A0
    ctx->pc = 0x3c3850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3c3854:
    // 0x3c3854: 0xafa20514  sw          $v0, 0x514($sp)
    ctx->pc = 0x3c3854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 2));
label_3c3858:
    // 0x3c3858: 0x27be04c0  addiu       $fp, $sp, 0x4C0
    ctx->pc = 0x3c3858u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3c385c:
    // 0x3c385c: 0x27a204f0  addiu       $v0, $sp, 0x4F0
    ctx->pc = 0x3c385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_3c3860:
    // 0x3c3860: 0x27b604d0  addiu       $s6, $sp, 0x4D0
    ctx->pc = 0x3c3860u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_3c3864:
    // 0x3c3864: 0xafa2051c  sw          $v0, 0x51C($sp)
    ctx->pc = 0x3c3864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1308), GPR_U32(ctx, 2));
label_3c3868:
    // 0x3c3868: 0x27b404e0  addiu       $s4, $sp, 0x4E0
    ctx->pc = 0x3c3868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_3c386c:
    // 0x3c386c: 0x27a20500  addiu       $v0, $sp, 0x500
    ctx->pc = 0x3c386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_3c3870:
    // 0x3c3870: 0xafa20520  sw          $v0, 0x520($sp)
    ctx->pc = 0x3c3870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 2));
label_3c3874:
    // 0x3c3874: 0x0  nop
    ctx->pc = 0x3c3874u;
    // NOP
label_3c3878:
    // 0x3c3878: 0xc0e9694  jal         func_3A5A50
label_3c387c:
    if (ctx->pc == 0x3C387Cu) {
        ctx->pc = 0x3C387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3878u;
        // 0x3c387c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3880u;
        goto label_3c3880;
    }
    ctx->pc = 0x3C3878u;
    SET_GPR_U32(ctx, 31, 0x3C3880u);
    ctx->pc = 0x3C387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3878u;
    // 0x3c387c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C3878u, 0x3C3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3880u;
label_3c3880:
    // 0x3c3880: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_3c3884:
    if (ctx->pc == 0x3C3884u) {
        ctx->pc = 0x3C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3880u;
        // 0x3c3884: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3888u;
        goto label_3c3888;
    }
    ctx->pc = 0x3C3880u;
    {
        const bool branch_taken_0x3c3880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3880u;
        // 0x3c3884: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3880) {
            ctx->pc = 0x3C3B58u;
            goto label_3c3b58;
        }
    }
    ctx->pc = 0x3C3888u;
label_3c3888:
    // 0x3c3888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c3888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c388c:
    // 0x3c388c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3c388cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3c3890:
    // 0x3c3890: 0xc0cd518  jal         func_335460
label_3c3894:
    if (ctx->pc == 0x3C3894u) {
        ctx->pc = 0x3C3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3890u;
        // 0x3c3894: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3898u;
        goto label_3c3898;
    }
    ctx->pc = 0x3C3890u;
    SET_GPR_U32(ctx, 31, 0x3C3898u);
    ctx->pc = 0x3C3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3890u;
    // 0x3c3894: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3890u, 0x3C3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3898u;
label_3c3898:
    // 0x3c3898: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c3898u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c389c:
    // 0x3c389c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c38a0:
    // 0x3c38a0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3c38a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3c38a4:
    // 0x3c38a4: 0xc0cd518  jal         func_335460
label_3c38a8:
    if (ctx->pc == 0x3C38A8u) {
        ctx->pc = 0x3C38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38A4u;
        // 0x3c38a8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C38ACu;
        goto label_3c38ac;
    }
    ctx->pc = 0x3C38A4u;
    SET_GPR_U32(ctx, 31, 0x3C38ACu);
    ctx->pc = 0x3C38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38A4u;
    // 0x3c38a8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C38A4u, 0x3C38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38ACu;
label_3c38ac:
    // 0x3c38ac: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3c38acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3c38b0:
    // 0x3c38b0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c38b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c38b4:
    // 0x3c38b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c38b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c38b8:
    // 0x3c38b8: 0xc0cd518  jal         func_335460
label_3c38bc:
    if (ctx->pc == 0x3C38BCu) {
        ctx->pc = 0x3C38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38B8u;
        // 0x3c38bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C38C0u;
        goto label_3c38c0;
    }
    ctx->pc = 0x3C38B8u;
    SET_GPR_U32(ctx, 31, 0x3C38C0u);
    ctx->pc = 0x3C38BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38B8u;
    // 0x3c38bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C38B8u, 0x3C38C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38C0u;
label_3c38c0:
    // 0x3c38c0: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x3c38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3c38c4:
    // 0x3c38c4: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3c38c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c38c8:
    // 0x3c38c8: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x3c38c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c38cc:
    // 0x3c38cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c38d0:
    // 0x3c38d0: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x3c38d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3c38d4:
    // 0x3c38d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c38d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c38d8:
    // 0x3c38d8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3c38d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3c38dc:
    // 0x3c38dc: 0xe456000c  swc1        $f22, 0xC($v0)
    ctx->pc = 0x3c38dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3c38e0:
    // 0x3c38e0: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3c38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3c38e4:
    // 0x3c38e4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3c38e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c38e8:
    // 0x3c38e8: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3c38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3c38ec:
    // 0x3c38ec: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c38ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c38f0:
    // 0x3c38f0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c38f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c38f4:
    // 0x3c38f4: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3c38f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c38f8:
    // 0x3c38f8: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x3c38f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c38fc:
    // 0x3c38fc: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c38fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c3900:
    // 0x3c3900: 0xc136b18  jal         func_4DAC60
label_3c3904:
    if (ctx->pc == 0x3C3904u) {
        ctx->pc = 0x3C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3900u;
        // 0x3c3904: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3908u;
        goto label_3c3908;
    }
    ctx->pc = 0x3C3900u;
    SET_GPR_U32(ctx, 31, 0x3C3908u);
    ctx->pc = 0x3C3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3900u;
    // 0x3c3904: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C3900u, 0x3C3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3908u;
label_3c3908:
    // 0x3c3908: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c3908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c390c:
    // 0x3c390c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3c390cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3c3910:
    // 0x3c3910: 0x7ba304a0  lq          $v1, 0x4A0($sp)
    ctx->pc = 0x3c3910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c3914:
    // 0x3c3914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c3914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3918:
    // 0x3c3918: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c3918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3c391c:
    // 0x3c391c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3c391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3c3920:
    // 0x3c3920: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3c3920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3c3924:
    // 0x3c3924: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c3924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c3928:
    // 0x3c3928: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x3c3928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3c392c:
    // 0x3c392c: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3c392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3c3930:
    // 0x3c3930: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3c3930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3c3934:
    // 0x3c3934: 0xe7ba04b0  swc1        $f26, 0x4B0($sp)
    ctx->pc = 0x3c3934u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3c3938:
    // 0x3c3938: 0xc0cd518  jal         func_335460
label_3c393c:
    if (ctx->pc == 0x3C393Cu) {
        ctx->pc = 0x3C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3938u;
        // 0x3c393c: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3940u;
        goto label_3c3940;
    }
    ctx->pc = 0x3C3938u;
    SET_GPR_U32(ctx, 31, 0x3C3940u);
    ctx->pc = 0x3C393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3938u;
    // 0x3c393c: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3938u, 0x3C3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3940u;
label_3c3940:
    // 0x3c3940: 0xe7a004d0  swc1        $f0, 0x4D0($sp)
    ctx->pc = 0x3c3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_3c3944:
    // 0x3c3944: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c3944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3948:
    // 0x3c3948: 0xafb704e0  sw          $s7, 0x4E0($sp)
    ctx->pc = 0x3c3948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 23));
label_3c394c:
    // 0x3c394c: 0xc0cd4ee  jal         func_3353B8
label_3c3950:
    if (ctx->pc == 0x3C3950u) {
        ctx->pc = 0x3C3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C394Cu;
        // 0x3c3950: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3954u;
        goto label_3c3954;
    }
    ctx->pc = 0x3C394Cu;
    SET_GPR_U32(ctx, 31, 0x3C3954u);
    ctx->pc = 0x3C3950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C394Cu;
    // 0x3c3950: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C394Cu, 0x3C3954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3954u;
label_3c3954:
    // 0x3c3954: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c3954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c3958:
    // 0x3c3958: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x3c3958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_3c395c:
    // 0x3c395c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3c395cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3c3960:
    // 0x3c3960: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3c3960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3c3964:
    // 0x3c3964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c3968:
    // 0x3c3968: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x3c3968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_3c396c:
    // 0x3c396c: 0x8fa70514  lw          $a3, 0x514($sp)
    ctx->pc = 0x3c396cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_3c3970:
    // 0x3c3970: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c3970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c3974:
    // 0x3c3974: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x3c3974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_3c3978:
    // 0x3c3978: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c3978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c397c:
    // 0x3c397c: 0xafa204f0  sw          $v0, 0x4F0($sp)
    ctx->pc = 0x3c397cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 2));
label_3c3980:
    // 0x3c3980: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3c3980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c3984:
    // 0x3c3984: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3c3984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c3988:
    // 0x3c3988: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3c3988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c398c:
    // 0x3c398c: 0xc0ea0d0  jal         func_3A8340
label_3c3990:
    if (ctx->pc == 0x3C3990u) {
        ctx->pc = 0x3C3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C398Cu;
        // 0x3c3990: 0x27ab04f0  addiu       $t3, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3994u;
        goto label_3c3994;
    }
    ctx->pc = 0x3C398Cu;
    SET_GPR_U32(ctx, 31, 0x3C3994u);
    ctx->pc = 0x3C3990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C398Cu;
    // 0x3c3990: 0x27ab04f0  addiu       $t3, $sp, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x3C398Cu, 0x3C3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3994u;
label_3c3994:
    // 0x3c3994: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c3994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c3998:
    // 0x3c3998: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c3998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c399c:
    // 0x3c399c: 0xc0f15bc  jal         func_3C56F0
label_3c39a0:
    if (ctx->pc == 0x3C39A0u) {
        ctx->pc = 0x3C39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C399Cu;
        // 0x3c39a0: 0x24442e10  addiu       $a0, $v0, 0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C39A4u;
        goto label_3c39a4;
    }
    ctx->pc = 0x3C399Cu;
    SET_GPR_U32(ctx, 31, 0x3C39A4u);
    ctx->pc = 0x3C39A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C399Cu;
    // 0x3c39a0: 0x24442e10  addiu       $a0, $v0, 0x2E10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C399Cu, 0x3C39A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C39A4u;
label_3c39a4:
    // 0x3c39a4: 0x8fa40510  lw          $a0, 0x510($sp)
    ctx->pc = 0x3c39a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c39a8:
    // 0x3c39a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c39a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c39ac:
    // 0x3c39ac: 0xc0ea16a  jal         func_3A85A8
label_3c39b0:
    if (ctx->pc == 0x3C39B0u) {
        ctx->pc = 0x3C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39ACu;
        // 0x3c39b0: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C39B4u;
        goto label_3c39b4;
    }
    ctx->pc = 0x3C39ACu;
    SET_GPR_U32(ctx, 31, 0x3C39B4u);
    ctx->pc = 0x3C39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C39ACu;
    // 0x3c39b0: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3C39ACu, 0x3C39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C39B4u;
label_3c39b4:
    // 0x3c39b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c39b8:
    // 0x3c39b8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x3c39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3c39bc:
    // 0x3c39bc: 0x8fa60510  lw          $a2, 0x510($sp)
    ctx->pc = 0x3c39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c39c0:
    // 0x3c39c0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c39c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c39c4:
    // 0x3c39c4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c39c8:
    // 0x3c39c8: 0x60f809  jalr        $v1
label_3c39cc:
    if (ctx->pc == 0x3C39CCu) {
        ctx->pc = 0x3C39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39C8u;
        // 0x3c39cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C39D0u;
        goto label_3c39d0;
    }
    ctx->pc = 0x3C39C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C39D0u);
        ctx->pc = 0x3C39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39C8u;
        // 0x3c39cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C39C8u, 0x3C39D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C39D0u;
label_3c39d0:
    // 0x3c39d0: 0x2e420014  sltiu       $v0, $s2, 0x14
    ctx->pc = 0x3c39d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_3c39d4:
    // 0x3c39d4: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_3c39d8:
    if (ctx->pc == 0x3C39D8u) {
        ctx->pc = 0x3C39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39D4u;
        // 0x3c39d8: 0x27b004a0  addiu       $s0, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C39DCu;
        goto label_3c39dc;
    }
    ctx->pc = 0x3C39D4u;
    {
        const bool branch_taken_0x3c39d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39D4u;
        // 0x3c39d8: 0x27b004a0  addiu       $s0, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39d4) {
            ctx->pc = 0x3C3878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3878;
        }
    }
    ctx->pc = 0x3C39DCu;
label_3c39dc:
    // 0x3c39dc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x3c39dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_3c39e0:
    // 0x3c39e0: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x3c39e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
label_3c39e4:
    // 0x3c39e4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3c39e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c39e8:
    // 0x3c39e8: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3c39e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3c39ec:
    // 0x3c39ec: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3c39ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3c39f0:
    // 0x3c39f0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3c39f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c39f4:
    // 0x3c39f4: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3c39f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3c39f8:
    // 0x3c39f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c39f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c39fc:
    // 0x3c39fc: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3c39fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3c3a00:
    // 0x3c3a00: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x3c3a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c3a04:
    // 0x3c3a04: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c3a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c3a08:
    // 0x3c3a08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c3a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c3a0c:
    // 0x3c3a0c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3c3a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3c3a10:
    // 0x3c3a10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a14:
    // 0x3c3a14: 0x2416003c  addiu       $s6, $zero, 0x3C
    ctx->pc = 0x3c3a14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3c3a18:
    // 0x3c3a18: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x3c3a18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
label_3c3a1c:
    // 0x3c3a1c: 0x36940008  ori         $s4, $s4, 0x8
    ctx->pc = 0x3c3a1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
label_3c3a20:
    // 0x3c3a20: 0xc0e9694  jal         func_3A5A50
label_3c3a24:
    if (ctx->pc == 0x3C3A24u) {
        ctx->pc = 0x3C3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A20u;
        // 0x3c3a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A28u;
        goto label_3c3a28;
    }
    ctx->pc = 0x3C3A20u;
    SET_GPR_U32(ctx, 31, 0x3C3A28u);
    ctx->pc = 0x3C3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A20u;
    // 0x3c3a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C3A20u, 0x3C3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A28u;
label_3c3a28:
    // 0x3c3a28: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3c3a2c:
    if (ctx->pc == 0x3C3A2Cu) {
        ctx->pc = 0x3C3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A28u;
        // 0x3c3a2c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A30u;
        goto label_3c3a30;
    }
    ctx->pc = 0x3C3A28u;
    {
        const bool branch_taken_0x3c3a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A28u;
        // 0x3c3a2c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a28) {
            ctx->pc = 0x3C3B58u;
            goto label_3c3b58;
        }
    }
    ctx->pc = 0x3C3A30u;
label_3c3a30:
    // 0x3c3a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a34:
    // 0x3c3a34: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3c3a34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3c3a38:
    // 0x3c3a38: 0xc0cd518  jal         func_335460
label_3c3a3c:
    if (ctx->pc == 0x3C3A3Cu) {
        ctx->pc = 0x3C3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A38u;
        // 0x3c3a3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A40u;
        goto label_3c3a40;
    }
    ctx->pc = 0x3C3A38u;
    SET_GPR_U32(ctx, 31, 0x3C3A40u);
    ctx->pc = 0x3C3A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A38u;
    // 0x3c3a3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3A38u, 0x3C3A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A40u;
label_3c3a40:
    // 0x3c3a40: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c3a40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c3a44:
    // 0x3c3a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a48:
    // 0x3c3a48: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3c3a48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3c3a4c:
    // 0x3c3a4c: 0xc0cd518  jal         func_335460
label_3c3a50:
    if (ctx->pc == 0x3C3A50u) {
        ctx->pc = 0x3C3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A4Cu;
        // 0x3c3a50: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A54u;
        goto label_3c3a54;
    }
    ctx->pc = 0x3C3A4Cu;
    SET_GPR_U32(ctx, 31, 0x3C3A54u);
    ctx->pc = 0x3C3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A4Cu;
    // 0x3c3a50: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3A4Cu, 0x3C3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A54u;
label_3c3a54:
    // 0x3c3a54: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c3a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c3a58:
    // 0x3c3a58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c3a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c3a5c:
    // 0x3c3a5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c3a5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c3a60:
    // 0x3c3a60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c3a60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c3a64:
    // 0x3c3a64: 0xc0cd518  jal         func_335460
label_3c3a68:
    if (ctx->pc == 0x3C3A68u) {
        ctx->pc = 0x3C3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A64u;
        // 0x3c3a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A6Cu;
        goto label_3c3a6c;
    }
    ctx->pc = 0x3C3A64u;
    SET_GPR_U32(ctx, 31, 0x3C3A6Cu);
    ctx->pc = 0x3C3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A64u;
    // 0x3c3a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3A64u, 0x3C3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A6Cu;
label_3c3a6c:
    // 0x3c3a6c: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x3c3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3c3a70:
    // 0x3c3a70: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3c3a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c3a74:
    // 0x3c3a74: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x3c3a74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c3a78:
    // 0x3c3a78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c3a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c3a7c:
    // 0x3c3a7c: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x3c3a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3c3a80:
    // 0x3c3a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a84:
    // 0x3c3a84: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3c3a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3c3a88:
    // 0x3c3a88: 0xe456000c  swc1        $f22, 0xC($v0)
    ctx->pc = 0x3c3a88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3c3a8c:
    // 0x3c3a8c: 0xe7b704a0  swc1        $f23, 0x4A0($sp)
    ctx->pc = 0x3c3a8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3c3a90:
    // 0x3c3a90: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3c3a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c3a94:
    // 0x3c3a94: 0xe7b704a4  swc1        $f23, 0x4A4($sp)
    ctx->pc = 0x3c3a94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1188), bits); }
label_3c3a98:
    // 0x3c3a98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c3a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c3a9c:
    // 0x3c3a9c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c3aa0:
    // 0x3c3aa0: 0xe61b0008  swc1        $f27, 0x8($s0)
    ctx->pc = 0x3c3aa0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c3aa4:
    // 0x3c3aa4: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x3c3aa4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c3aa8:
    // 0x3c3aa8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c3aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c3aac:
    // 0x3c3aac: 0xc136b18  jal         func_4DAC60
label_3c3ab0:
    if (ctx->pc == 0x3C3AB0u) {
        ctx->pc = 0x3C3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AACu;
        // 0x3c3ab0: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3AB4u;
        goto label_3c3ab4;
    }
    ctx->pc = 0x3C3AACu;
    SET_GPR_U32(ctx, 31, 0x3C3AB4u);
    ctx->pc = 0x3C3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AACu;
    // 0x3c3ab0: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C3AACu, 0x3C3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AB4u;
label_3c3ab4:
    // 0x3c3ab4: 0x7ba304a0  lq          $v1, 0x4A0($sp)
    ctx->pc = 0x3c3ab4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c3ab8:
    // 0x3c3ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3abc:
    // 0x3c3abc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c3abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c3ac0:
    // 0x3c3ac0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c3ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c3ac4:
    // 0x3c3ac4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c3ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c3ac8:
    // 0x3c3ac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c3ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c3acc:
    // 0x3c3acc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c3accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c3ad0:
    // 0x3c3ad0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c3ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c3ad4:
    // 0x3c3ad4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c3ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c3ad8:
    // 0x3c3ad8: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3c3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3c3adc:
    // 0x3c3adc: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3c3adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3c3ae0:
    // 0x3c3ae0: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3c3ae4:
    // 0x3c3ae4: 0xe7ba04b0  swc1        $f26, 0x4B0($sp)
    ctx->pc = 0x3c3ae4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3c3ae8:
    // 0x3c3ae8: 0xc0cd518  jal         func_335460
label_3c3aec:
    if (ctx->pc == 0x3C3AECu) {
        ctx->pc = 0x3C3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AE8u;
        // 0x3c3aec: 0xafb604c0  sw          $s6, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3AF0u;
        goto label_3c3af0;
    }
    ctx->pc = 0x3C3AE8u;
    SET_GPR_U32(ctx, 31, 0x3C3AF0u);
    ctx->pc = 0x3C3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AE8u;
    // 0x3c3aec: 0xafb604c0  sw          $s6, 0x4C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3AE8u, 0x3C3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AF0u;
label_3c3af0:
    // 0x3c3af0: 0xe7a004d0  swc1        $f0, 0x4D0($sp)
    ctx->pc = 0x3c3af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_3c3af4:
    // 0x3c3af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3af8:
    // 0x3c3af8: 0xafb504e0  sw          $s5, 0x4E0($sp)
    ctx->pc = 0x3c3af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 21));
label_3c3afc:
    // 0x3c3afc: 0xc0cd4ee  jal         func_3353B8
label_3c3b00:
    if (ctx->pc == 0x3C3B00u) {
        ctx->pc = 0x3C3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AFCu;
        // 0x3c3b00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B04u;
        goto label_3c3b04;
    }
    ctx->pc = 0x3C3AFCu;
    SET_GPR_U32(ctx, 31, 0x3C3B04u);
    ctx->pc = 0x3C3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AFCu;
    // 0x3c3b00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C3AFCu, 0x3C3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B04u;
label_3c3b04:
    // 0x3c3b04: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3c3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3c3b08:
    // 0x3c3b08: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x3c3b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_3c3b0c:
    // 0x3c3b0c: 0xafa204f0  sw          $v0, 0x4F0($sp)
    ctx->pc = 0x3c3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 2));
label_3c3b10:
    // 0x3c3b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3b14:
    // 0x3c3b14: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x3c3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_3c3b18:
    // 0x3c3b18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c3b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3b1c:
    // 0x3c3b1c: 0x8fab051c  lw          $t3, 0x51C($sp)
    ctx->pc = 0x3c3b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3c3b20:
    // 0x3c3b20: 0x27a704b0  addiu       $a3, $sp, 0x4B0
    ctx->pc = 0x3c3b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3c3b24:
    // 0x3c3b24: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x3c3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_3c3b28:
    // 0x3c3b28: 0x27a804c0  addiu       $t0, $sp, 0x4C0
    ctx->pc = 0x3c3b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3c3b2c:
    // 0x3c3b2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c3b30:
    // 0x3c3b30: 0x27a904d0  addiu       $t1, $sp, 0x4D0
    ctx->pc = 0x3c3b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_3c3b34:
    // 0x3c3b34: 0xc0ea0d0  jal         func_3A8340
label_3c3b38:
    if (ctx->pc == 0x3C3B38u) {
        ctx->pc = 0x3C3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B34u;
        // 0x3c3b38: 0x27aa04e0  addiu       $t2, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B3Cu;
        goto label_3c3b3c;
    }
    ctx->pc = 0x3C3B34u;
    SET_GPR_U32(ctx, 31, 0x3C3B3Cu);
    ctx->pc = 0x3C3B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B34u;
    // 0x3c3b38: 0x27aa04e0  addiu       $t2, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x3C3B34u, 0x3C3B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B3Cu;
label_3c3b3c:
    // 0x3c3b3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c3b40:
    // 0x3c3b40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c3b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3b44:
    // 0x3c3b44: 0xc0f15bc  jal         func_3C56F0
label_3c3b48:
    if (ctx->pc == 0x3C3B48u) {
        ctx->pc = 0x3C3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B44u;
        // 0x3c3b48: 0x24442e10  addiu       $a0, $v0, 0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B4Cu;
        goto label_3c3b4c;
    }
    ctx->pc = 0x3C3B44u;
    SET_GPR_U32(ctx, 31, 0x3C3B4Cu);
    ctx->pc = 0x3C3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B44u;
    // 0x3c3b48: 0x24442e10  addiu       $a0, $v0, 0x2E10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3B44u, 0x3C3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B4Cu;
label_3c3b4c:
    // 0x3c3b4c: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x3c3b4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3c3b50:
    // 0x3c3b50: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_3c3b54:
    if (ctx->pc == 0x3C3B54u) {
        ctx->pc = 0x3C3B58u;
        goto label_3c3b58;
    }
    ctx->pc = 0x3C3B50u;
    {
        const bool branch_taken_0x3c3b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3b50) {
            ctx->pc = 0x3C3A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3a20;
        }
    }
    ctx->pc = 0x3C3B58u;
label_3c3b58:
    // 0x3c3b58: 0x7bb005c0  lq          $s0, 0x5C0($sp)
    ctx->pc = 0x3c3b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
label_3c3b5c:
    // 0x3c3b5c: 0x7bb105b0  lq          $s1, 0x5B0($sp)
    ctx->pc = 0x3c3b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_3c3b60:
    // 0x3c3b60: 0x7bb205a0  lq          $s2, 0x5A0($sp)
    ctx->pc = 0x3c3b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_3c3b64:
    // 0x3c3b64: 0x7bb30590  lq          $s3, 0x590($sp)
    ctx->pc = 0x3c3b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_3c3b68:
    // 0x3c3b68: 0x7bb40580  lq          $s4, 0x580($sp)
    ctx->pc = 0x3c3b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3c3b6c:
    // 0x3c3b6c: 0x7bb50570  lq          $s5, 0x570($sp)
    ctx->pc = 0x3c3b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3c3b70:
    // 0x3c3b70: 0x7bb60560  lq          $s6, 0x560($sp)
    ctx->pc = 0x3c3b70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3c3b74:
    // 0x3c3b74: 0x7bb70550  lq          $s7, 0x550($sp)
    ctx->pc = 0x3c3b74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3c3b78:
    // 0x3c3b78: 0x7bbe0540  lq          $fp, 0x540($sp)
    ctx->pc = 0x3c3b78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3c3b7c:
    // 0x3c3b7c: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x3c3b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
label_3c3b80:
    // 0x3c3b80: 0xc7bb0608  lwc1        $f27, 0x608($sp)
    ctx->pc = 0x3c3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3c3b84:
    // 0x3c3b84: 0xc7ba0600  lwc1        $f26, 0x600($sp)
    ctx->pc = 0x3c3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3c3b88:
    // 0x3c3b88: 0xc7b905f8  lwc1        $f25, 0x5F8($sp)
    ctx->pc = 0x3c3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3c3b8c:
    // 0x3c3b8c: 0xc7b805f0  lwc1        $f24, 0x5F0($sp)
    ctx->pc = 0x3c3b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c3b90:
    // 0x3c3b90: 0xc7b705e8  lwc1        $f23, 0x5E8($sp)
    ctx->pc = 0x3c3b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c3b94:
    // 0x3c3b94: 0xc7b605e0  lwc1        $f22, 0x5E0($sp)
    ctx->pc = 0x3c3b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c3b98:
    // 0x3c3b98: 0xc7b505d8  lwc1        $f21, 0x5D8($sp)
    ctx->pc = 0x3c3b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c3b9c:
    // 0x3c3b9c: 0xc7b405d0  lwc1        $f20, 0x5D0($sp)
    ctx->pc = 0x3c3b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c3ba0:
    // 0x3c3ba0: 0x3e00008  jr          $ra
label_3c3ba4:
    if (ctx->pc == 0x3C3BA4u) {
        ctx->pc = 0x3C3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BA0u;
        // 0x3c3ba4: 0x27bd0610  addiu       $sp, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3BA8u;
        goto label_fallthrough_0x3c3ba0;
    }
    ctx->pc = 0x3C3BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BA0u;
        // 0x3c3ba4: 0x27bd0610  addiu       $sp, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c3ba0:
    ctx->pc = 0x3C3BA8u;
}
