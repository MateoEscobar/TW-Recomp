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

// Function: sub_003B33E8
// Address: 0x3b33e8 - 0x3b40d0
void sub_003B33E8_0x3b33e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B33E8_0x3b33e8");
#endif

    switch (ctx->pc) {
        case 0x3b33e8u: goto label_3b33e8;
        case 0x3b33ecu: goto label_3b33ec;
        case 0x3b33f0u: goto label_3b33f0;
        case 0x3b33f4u: goto label_3b33f4;
        case 0x3b33f8u: goto label_3b33f8;
        case 0x3b33fcu: goto label_3b33fc;
        case 0x3b3400u: goto label_3b3400;
        case 0x3b3404u: goto label_3b3404;
        case 0x3b3408u: goto label_3b3408;
        case 0x3b340cu: goto label_3b340c;
        case 0x3b3410u: goto label_3b3410;
        case 0x3b3414u: goto label_3b3414;
        case 0x3b3418u: goto label_3b3418;
        case 0x3b341cu: goto label_3b341c;
        case 0x3b3420u: goto label_3b3420;
        case 0x3b3424u: goto label_3b3424;
        case 0x3b3428u: goto label_3b3428;
        case 0x3b342cu: goto label_3b342c;
        case 0x3b3430u: goto label_3b3430;
        case 0x3b3434u: goto label_3b3434;
        case 0x3b3438u: goto label_3b3438;
        case 0x3b343cu: goto label_3b343c;
        case 0x3b3440u: goto label_3b3440;
        case 0x3b3444u: goto label_3b3444;
        case 0x3b3448u: goto label_3b3448;
        case 0x3b344cu: goto label_3b344c;
        case 0x3b3450u: goto label_3b3450;
        case 0x3b3454u: goto label_3b3454;
        case 0x3b3458u: goto label_3b3458;
        case 0x3b345cu: goto label_3b345c;
        case 0x3b3460u: goto label_3b3460;
        case 0x3b3464u: goto label_3b3464;
        case 0x3b3468u: goto label_3b3468;
        case 0x3b346cu: goto label_3b346c;
        case 0x3b3470u: goto label_3b3470;
        case 0x3b3474u: goto label_3b3474;
        case 0x3b3478u: goto label_3b3478;
        case 0x3b347cu: goto label_3b347c;
        case 0x3b3480u: goto label_3b3480;
        case 0x3b3484u: goto label_3b3484;
        case 0x3b3488u: goto label_3b3488;
        case 0x3b348cu: goto label_3b348c;
        case 0x3b3490u: goto label_3b3490;
        case 0x3b3494u: goto label_3b3494;
        case 0x3b3498u: goto label_3b3498;
        case 0x3b349cu: goto label_3b349c;
        case 0x3b34a0u: goto label_3b34a0;
        case 0x3b34a4u: goto label_3b34a4;
        case 0x3b34a8u: goto label_3b34a8;
        case 0x3b34acu: goto label_3b34ac;
        case 0x3b34b0u: goto label_3b34b0;
        case 0x3b34b4u: goto label_3b34b4;
        case 0x3b34b8u: goto label_3b34b8;
        case 0x3b34bcu: goto label_3b34bc;
        case 0x3b34c0u: goto label_3b34c0;
        case 0x3b34c4u: goto label_3b34c4;
        case 0x3b34c8u: goto label_3b34c8;
        case 0x3b34ccu: goto label_3b34cc;
        case 0x3b34d0u: goto label_3b34d0;
        case 0x3b34d4u: goto label_3b34d4;
        case 0x3b34d8u: goto label_3b34d8;
        case 0x3b34dcu: goto label_3b34dc;
        case 0x3b34e0u: goto label_3b34e0;
        case 0x3b34e4u: goto label_3b34e4;
        case 0x3b34e8u: goto label_3b34e8;
        case 0x3b34ecu: goto label_3b34ec;
        case 0x3b34f0u: goto label_3b34f0;
        case 0x3b34f4u: goto label_3b34f4;
        case 0x3b34f8u: goto label_3b34f8;
        case 0x3b34fcu: goto label_3b34fc;
        case 0x3b3500u: goto label_3b3500;
        case 0x3b3504u: goto label_3b3504;
        case 0x3b3508u: goto label_3b3508;
        case 0x3b350cu: goto label_3b350c;
        case 0x3b3510u: goto label_3b3510;
        case 0x3b3514u: goto label_3b3514;
        case 0x3b3518u: goto label_3b3518;
        case 0x3b351cu: goto label_3b351c;
        case 0x3b3520u: goto label_3b3520;
        case 0x3b3524u: goto label_3b3524;
        case 0x3b3528u: goto label_3b3528;
        case 0x3b352cu: goto label_3b352c;
        case 0x3b3530u: goto label_3b3530;
        case 0x3b3534u: goto label_3b3534;
        case 0x3b3538u: goto label_3b3538;
        case 0x3b353cu: goto label_3b353c;
        case 0x3b3540u: goto label_3b3540;
        case 0x3b3544u: goto label_3b3544;
        case 0x3b3548u: goto label_3b3548;
        case 0x3b354cu: goto label_3b354c;
        case 0x3b3550u: goto label_3b3550;
        case 0x3b3554u: goto label_3b3554;
        case 0x3b3558u: goto label_3b3558;
        case 0x3b355cu: goto label_3b355c;
        case 0x3b3560u: goto label_3b3560;
        case 0x3b3564u: goto label_3b3564;
        case 0x3b3568u: goto label_3b3568;
        case 0x3b356cu: goto label_3b356c;
        case 0x3b3570u: goto label_3b3570;
        case 0x3b3574u: goto label_3b3574;
        case 0x3b3578u: goto label_3b3578;
        case 0x3b357cu: goto label_3b357c;
        case 0x3b3580u: goto label_3b3580;
        case 0x3b3584u: goto label_3b3584;
        case 0x3b3588u: goto label_3b3588;
        case 0x3b358cu: goto label_3b358c;
        case 0x3b3590u: goto label_3b3590;
        case 0x3b3594u: goto label_3b3594;
        case 0x3b3598u: goto label_3b3598;
        case 0x3b359cu: goto label_3b359c;
        case 0x3b35a0u: goto label_3b35a0;
        case 0x3b35a4u: goto label_3b35a4;
        case 0x3b35a8u: goto label_3b35a8;
        case 0x3b35acu: goto label_3b35ac;
        case 0x3b35b0u: goto label_3b35b0;
        case 0x3b35b4u: goto label_3b35b4;
        case 0x3b35b8u: goto label_3b35b8;
        case 0x3b35bcu: goto label_3b35bc;
        case 0x3b35c0u: goto label_3b35c0;
        case 0x3b35c4u: goto label_3b35c4;
        case 0x3b35c8u: goto label_3b35c8;
        case 0x3b35ccu: goto label_3b35cc;
        case 0x3b35d0u: goto label_3b35d0;
        case 0x3b35d4u: goto label_3b35d4;
        case 0x3b35d8u: goto label_3b35d8;
        case 0x3b35dcu: goto label_3b35dc;
        case 0x3b35e0u: goto label_3b35e0;
        case 0x3b35e4u: goto label_3b35e4;
        case 0x3b35e8u: goto label_3b35e8;
        case 0x3b35ecu: goto label_3b35ec;
        case 0x3b35f0u: goto label_3b35f0;
        case 0x3b35f4u: goto label_3b35f4;
        case 0x3b35f8u: goto label_3b35f8;
        case 0x3b35fcu: goto label_3b35fc;
        case 0x3b3600u: goto label_3b3600;
        case 0x3b3604u: goto label_3b3604;
        case 0x3b3608u: goto label_3b3608;
        case 0x3b360cu: goto label_3b360c;
        case 0x3b3610u: goto label_3b3610;
        case 0x3b3614u: goto label_3b3614;
        case 0x3b3618u: goto label_3b3618;
        case 0x3b361cu: goto label_3b361c;
        case 0x3b3620u: goto label_3b3620;
        case 0x3b3624u: goto label_3b3624;
        case 0x3b3628u: goto label_3b3628;
        case 0x3b362cu: goto label_3b362c;
        case 0x3b3630u: goto label_3b3630;
        case 0x3b3634u: goto label_3b3634;
        case 0x3b3638u: goto label_3b3638;
        case 0x3b363cu: goto label_3b363c;
        case 0x3b3640u: goto label_3b3640;
        case 0x3b3644u: goto label_3b3644;
        case 0x3b3648u: goto label_3b3648;
        case 0x3b364cu: goto label_3b364c;
        case 0x3b3650u: goto label_3b3650;
        case 0x3b3654u: goto label_3b3654;
        case 0x3b3658u: goto label_3b3658;
        case 0x3b365cu: goto label_3b365c;
        case 0x3b3660u: goto label_3b3660;
        case 0x3b3664u: goto label_3b3664;
        case 0x3b3668u: goto label_3b3668;
        case 0x3b366cu: goto label_3b366c;
        case 0x3b3670u: goto label_3b3670;
        case 0x3b3674u: goto label_3b3674;
        case 0x3b3678u: goto label_3b3678;
        case 0x3b367cu: goto label_3b367c;
        case 0x3b3680u: goto label_3b3680;
        case 0x3b3684u: goto label_3b3684;
        case 0x3b3688u: goto label_3b3688;
        case 0x3b368cu: goto label_3b368c;
        case 0x3b3690u: goto label_3b3690;
        case 0x3b3694u: goto label_3b3694;
        case 0x3b3698u: goto label_3b3698;
        case 0x3b369cu: goto label_3b369c;
        case 0x3b36a0u: goto label_3b36a0;
        case 0x3b36a4u: goto label_3b36a4;
        case 0x3b36a8u: goto label_3b36a8;
        case 0x3b36acu: goto label_3b36ac;
        case 0x3b36b0u: goto label_3b36b0;
        case 0x3b36b4u: goto label_3b36b4;
        case 0x3b36b8u: goto label_3b36b8;
        case 0x3b36bcu: goto label_3b36bc;
        case 0x3b36c0u: goto label_3b36c0;
        case 0x3b36c4u: goto label_3b36c4;
        case 0x3b36c8u: goto label_3b36c8;
        case 0x3b36ccu: goto label_3b36cc;
        case 0x3b36d0u: goto label_3b36d0;
        case 0x3b36d4u: goto label_3b36d4;
        case 0x3b36d8u: goto label_3b36d8;
        case 0x3b36dcu: goto label_3b36dc;
        case 0x3b36e0u: goto label_3b36e0;
        case 0x3b36e4u: goto label_3b36e4;
        case 0x3b36e8u: goto label_3b36e8;
        case 0x3b36ecu: goto label_3b36ec;
        case 0x3b36f0u: goto label_3b36f0;
        case 0x3b36f4u: goto label_3b36f4;
        case 0x3b36f8u: goto label_3b36f8;
        case 0x3b36fcu: goto label_3b36fc;
        case 0x3b3700u: goto label_3b3700;
        case 0x3b3704u: goto label_3b3704;
        case 0x3b3708u: goto label_3b3708;
        case 0x3b370cu: goto label_3b370c;
        case 0x3b3710u: goto label_3b3710;
        case 0x3b3714u: goto label_3b3714;
        case 0x3b3718u: goto label_3b3718;
        case 0x3b371cu: goto label_3b371c;
        case 0x3b3720u: goto label_3b3720;
        case 0x3b3724u: goto label_3b3724;
        case 0x3b3728u: goto label_3b3728;
        case 0x3b372cu: goto label_3b372c;
        case 0x3b3730u: goto label_3b3730;
        case 0x3b3734u: goto label_3b3734;
        case 0x3b3738u: goto label_3b3738;
        case 0x3b373cu: goto label_3b373c;
        case 0x3b3740u: goto label_3b3740;
        case 0x3b3744u: goto label_3b3744;
        case 0x3b3748u: goto label_3b3748;
        case 0x3b374cu: goto label_3b374c;
        case 0x3b3750u: goto label_3b3750;
        case 0x3b3754u: goto label_3b3754;
        case 0x3b3758u: goto label_3b3758;
        case 0x3b375cu: goto label_3b375c;
        case 0x3b3760u: goto label_3b3760;
        case 0x3b3764u: goto label_3b3764;
        case 0x3b3768u: goto label_3b3768;
        case 0x3b376cu: goto label_3b376c;
        case 0x3b3770u: goto label_3b3770;
        case 0x3b3774u: goto label_3b3774;
        case 0x3b3778u: goto label_3b3778;
        case 0x3b377cu: goto label_3b377c;
        case 0x3b3780u: goto label_3b3780;
        case 0x3b3784u: goto label_3b3784;
        case 0x3b3788u: goto label_3b3788;
        case 0x3b378cu: goto label_3b378c;
        case 0x3b3790u: goto label_3b3790;
        case 0x3b3794u: goto label_3b3794;
        case 0x3b3798u: goto label_3b3798;
        case 0x3b379cu: goto label_3b379c;
        case 0x3b37a0u: goto label_3b37a0;
        case 0x3b37a4u: goto label_3b37a4;
        case 0x3b37a8u: goto label_3b37a8;
        case 0x3b37acu: goto label_3b37ac;
        case 0x3b37b0u: goto label_3b37b0;
        case 0x3b37b4u: goto label_3b37b4;
        case 0x3b37b8u: goto label_3b37b8;
        case 0x3b37bcu: goto label_3b37bc;
        case 0x3b37c0u: goto label_3b37c0;
        case 0x3b37c4u: goto label_3b37c4;
        case 0x3b37c8u: goto label_3b37c8;
        case 0x3b37ccu: goto label_3b37cc;
        case 0x3b37d0u: goto label_3b37d0;
        case 0x3b37d4u: goto label_3b37d4;
        case 0x3b37d8u: goto label_3b37d8;
        case 0x3b37dcu: goto label_3b37dc;
        case 0x3b37e0u: goto label_3b37e0;
        case 0x3b37e4u: goto label_3b37e4;
        case 0x3b37e8u: goto label_3b37e8;
        case 0x3b37ecu: goto label_3b37ec;
        case 0x3b37f0u: goto label_3b37f0;
        case 0x3b37f4u: goto label_3b37f4;
        case 0x3b37f8u: goto label_3b37f8;
        case 0x3b37fcu: goto label_3b37fc;
        case 0x3b3800u: goto label_3b3800;
        case 0x3b3804u: goto label_3b3804;
        case 0x3b3808u: goto label_3b3808;
        case 0x3b380cu: goto label_3b380c;
        case 0x3b3810u: goto label_3b3810;
        case 0x3b3814u: goto label_3b3814;
        case 0x3b3818u: goto label_3b3818;
        case 0x3b381cu: goto label_3b381c;
        case 0x3b3820u: goto label_3b3820;
        case 0x3b3824u: goto label_3b3824;
        case 0x3b3828u: goto label_3b3828;
        case 0x3b382cu: goto label_3b382c;
        case 0x3b3830u: goto label_3b3830;
        case 0x3b3834u: goto label_3b3834;
        case 0x3b3838u: goto label_3b3838;
        case 0x3b383cu: goto label_3b383c;
        case 0x3b3840u: goto label_3b3840;
        case 0x3b3844u: goto label_3b3844;
        case 0x3b3848u: goto label_3b3848;
        case 0x3b384cu: goto label_3b384c;
        case 0x3b3850u: goto label_3b3850;
        case 0x3b3854u: goto label_3b3854;
        case 0x3b3858u: goto label_3b3858;
        case 0x3b385cu: goto label_3b385c;
        case 0x3b3860u: goto label_3b3860;
        case 0x3b3864u: goto label_3b3864;
        case 0x3b3868u: goto label_3b3868;
        case 0x3b386cu: goto label_3b386c;
        case 0x3b3870u: goto label_3b3870;
        case 0x3b3874u: goto label_3b3874;
        case 0x3b3878u: goto label_3b3878;
        case 0x3b387cu: goto label_3b387c;
        case 0x3b3880u: goto label_3b3880;
        case 0x3b3884u: goto label_3b3884;
        case 0x3b3888u: goto label_3b3888;
        case 0x3b388cu: goto label_3b388c;
        case 0x3b3890u: goto label_3b3890;
        case 0x3b3894u: goto label_3b3894;
        case 0x3b3898u: goto label_3b3898;
        case 0x3b389cu: goto label_3b389c;
        case 0x3b38a0u: goto label_3b38a0;
        case 0x3b38a4u: goto label_3b38a4;
        case 0x3b38a8u: goto label_3b38a8;
        case 0x3b38acu: goto label_3b38ac;
        case 0x3b38b0u: goto label_3b38b0;
        case 0x3b38b4u: goto label_3b38b4;
        case 0x3b38b8u: goto label_3b38b8;
        case 0x3b38bcu: goto label_3b38bc;
        case 0x3b38c0u: goto label_3b38c0;
        case 0x3b38c4u: goto label_3b38c4;
        case 0x3b38c8u: goto label_3b38c8;
        case 0x3b38ccu: goto label_3b38cc;
        case 0x3b38d0u: goto label_3b38d0;
        case 0x3b38d4u: goto label_3b38d4;
        case 0x3b38d8u: goto label_3b38d8;
        case 0x3b38dcu: goto label_3b38dc;
        case 0x3b38e0u: goto label_3b38e0;
        case 0x3b38e4u: goto label_3b38e4;
        case 0x3b38e8u: goto label_3b38e8;
        case 0x3b38ecu: goto label_3b38ec;
        case 0x3b38f0u: goto label_3b38f0;
        case 0x3b38f4u: goto label_3b38f4;
        case 0x3b38f8u: goto label_3b38f8;
        case 0x3b38fcu: goto label_3b38fc;
        case 0x3b3900u: goto label_3b3900;
        case 0x3b3904u: goto label_3b3904;
        case 0x3b3908u: goto label_3b3908;
        case 0x3b390cu: goto label_3b390c;
        case 0x3b3910u: goto label_3b3910;
        case 0x3b3914u: goto label_3b3914;
        case 0x3b3918u: goto label_3b3918;
        case 0x3b391cu: goto label_3b391c;
        case 0x3b3920u: goto label_3b3920;
        case 0x3b3924u: goto label_3b3924;
        case 0x3b3928u: goto label_3b3928;
        case 0x3b392cu: goto label_3b392c;
        case 0x3b3930u: goto label_3b3930;
        case 0x3b3934u: goto label_3b3934;
        case 0x3b3938u: goto label_3b3938;
        case 0x3b393cu: goto label_3b393c;
        case 0x3b3940u: goto label_3b3940;
        case 0x3b3944u: goto label_3b3944;
        case 0x3b3948u: goto label_3b3948;
        case 0x3b394cu: goto label_3b394c;
        case 0x3b3950u: goto label_3b3950;
        case 0x3b3954u: goto label_3b3954;
        case 0x3b3958u: goto label_3b3958;
        case 0x3b395cu: goto label_3b395c;
        case 0x3b3960u: goto label_3b3960;
        case 0x3b3964u: goto label_3b3964;
        case 0x3b3968u: goto label_3b3968;
        case 0x3b396cu: goto label_3b396c;
        case 0x3b3970u: goto label_3b3970;
        case 0x3b3974u: goto label_3b3974;
        case 0x3b3978u: goto label_3b3978;
        case 0x3b397cu: goto label_3b397c;
        case 0x3b3980u: goto label_3b3980;
        case 0x3b3984u: goto label_3b3984;
        case 0x3b3988u: goto label_3b3988;
        case 0x3b398cu: goto label_3b398c;
        case 0x3b3990u: goto label_3b3990;
        case 0x3b3994u: goto label_3b3994;
        case 0x3b3998u: goto label_3b3998;
        case 0x3b399cu: goto label_3b399c;
        case 0x3b39a0u: goto label_3b39a0;
        case 0x3b39a4u: goto label_3b39a4;
        case 0x3b39a8u: goto label_3b39a8;
        case 0x3b39acu: goto label_3b39ac;
        case 0x3b39b0u: goto label_3b39b0;
        case 0x3b39b4u: goto label_3b39b4;
        case 0x3b39b8u: goto label_3b39b8;
        case 0x3b39bcu: goto label_3b39bc;
        case 0x3b39c0u: goto label_3b39c0;
        case 0x3b39c4u: goto label_3b39c4;
        case 0x3b39c8u: goto label_3b39c8;
        case 0x3b39ccu: goto label_3b39cc;
        case 0x3b39d0u: goto label_3b39d0;
        case 0x3b39d4u: goto label_3b39d4;
        case 0x3b39d8u: goto label_3b39d8;
        case 0x3b39dcu: goto label_3b39dc;
        case 0x3b39e0u: goto label_3b39e0;
        case 0x3b39e4u: goto label_3b39e4;
        case 0x3b39e8u: goto label_3b39e8;
        case 0x3b39ecu: goto label_3b39ec;
        case 0x3b39f0u: goto label_3b39f0;
        case 0x3b39f4u: goto label_3b39f4;
        case 0x3b39f8u: goto label_3b39f8;
        case 0x3b39fcu: goto label_3b39fc;
        case 0x3b3a00u: goto label_3b3a00;
        case 0x3b3a04u: goto label_3b3a04;
        case 0x3b3a08u: goto label_3b3a08;
        case 0x3b3a0cu: goto label_3b3a0c;
        case 0x3b3a10u: goto label_3b3a10;
        case 0x3b3a14u: goto label_3b3a14;
        case 0x3b3a18u: goto label_3b3a18;
        case 0x3b3a1cu: goto label_3b3a1c;
        case 0x3b3a20u: goto label_3b3a20;
        case 0x3b3a24u: goto label_3b3a24;
        case 0x3b3a28u: goto label_3b3a28;
        case 0x3b3a2cu: goto label_3b3a2c;
        case 0x3b3a30u: goto label_3b3a30;
        case 0x3b3a34u: goto label_3b3a34;
        case 0x3b3a38u: goto label_3b3a38;
        case 0x3b3a3cu: goto label_3b3a3c;
        case 0x3b3a40u: goto label_3b3a40;
        case 0x3b3a44u: goto label_3b3a44;
        case 0x3b3a48u: goto label_3b3a48;
        case 0x3b3a4cu: goto label_3b3a4c;
        case 0x3b3a50u: goto label_3b3a50;
        case 0x3b3a54u: goto label_3b3a54;
        case 0x3b3a58u: goto label_3b3a58;
        case 0x3b3a5cu: goto label_3b3a5c;
        case 0x3b3a60u: goto label_3b3a60;
        case 0x3b3a64u: goto label_3b3a64;
        case 0x3b3a68u: goto label_3b3a68;
        case 0x3b3a6cu: goto label_3b3a6c;
        case 0x3b3a70u: goto label_3b3a70;
        case 0x3b3a74u: goto label_3b3a74;
        case 0x3b3a78u: goto label_3b3a78;
        case 0x3b3a7cu: goto label_3b3a7c;
        case 0x3b3a80u: goto label_3b3a80;
        case 0x3b3a84u: goto label_3b3a84;
        case 0x3b3a88u: goto label_3b3a88;
        case 0x3b3a8cu: goto label_3b3a8c;
        case 0x3b3a90u: goto label_3b3a90;
        case 0x3b3a94u: goto label_3b3a94;
        case 0x3b3a98u: goto label_3b3a98;
        case 0x3b3a9cu: goto label_3b3a9c;
        case 0x3b3aa0u: goto label_3b3aa0;
        case 0x3b3aa4u: goto label_3b3aa4;
        case 0x3b3aa8u: goto label_3b3aa8;
        case 0x3b3aacu: goto label_3b3aac;
        case 0x3b3ab0u: goto label_3b3ab0;
        case 0x3b3ab4u: goto label_3b3ab4;
        case 0x3b3ab8u: goto label_3b3ab8;
        case 0x3b3abcu: goto label_3b3abc;
        case 0x3b3ac0u: goto label_3b3ac0;
        case 0x3b3ac4u: goto label_3b3ac4;
        case 0x3b3ac8u: goto label_3b3ac8;
        case 0x3b3accu: goto label_3b3acc;
        case 0x3b3ad0u: goto label_3b3ad0;
        case 0x3b3ad4u: goto label_3b3ad4;
        case 0x3b3ad8u: goto label_3b3ad8;
        case 0x3b3adcu: goto label_3b3adc;
        case 0x3b3ae0u: goto label_3b3ae0;
        case 0x3b3ae4u: goto label_3b3ae4;
        case 0x3b3ae8u: goto label_3b3ae8;
        case 0x3b3aecu: goto label_3b3aec;
        case 0x3b3af0u: goto label_3b3af0;
        case 0x3b3af4u: goto label_3b3af4;
        case 0x3b3af8u: goto label_3b3af8;
        case 0x3b3afcu: goto label_3b3afc;
        case 0x3b3b00u: goto label_3b3b00;
        case 0x3b3b04u: goto label_3b3b04;
        case 0x3b3b08u: goto label_3b3b08;
        case 0x3b3b0cu: goto label_3b3b0c;
        case 0x3b3b10u: goto label_3b3b10;
        case 0x3b3b14u: goto label_3b3b14;
        case 0x3b3b18u: goto label_3b3b18;
        case 0x3b3b1cu: goto label_3b3b1c;
        case 0x3b3b20u: goto label_3b3b20;
        case 0x3b3b24u: goto label_3b3b24;
        case 0x3b3b28u: goto label_3b3b28;
        case 0x3b3b2cu: goto label_3b3b2c;
        case 0x3b3b30u: goto label_3b3b30;
        case 0x3b3b34u: goto label_3b3b34;
        case 0x3b3b38u: goto label_3b3b38;
        case 0x3b3b3cu: goto label_3b3b3c;
        case 0x3b3b40u: goto label_3b3b40;
        case 0x3b3b44u: goto label_3b3b44;
        case 0x3b3b48u: goto label_3b3b48;
        case 0x3b3b4cu: goto label_3b3b4c;
        case 0x3b3b50u: goto label_3b3b50;
        case 0x3b3b54u: goto label_3b3b54;
        case 0x3b3b58u: goto label_3b3b58;
        case 0x3b3b5cu: goto label_3b3b5c;
        case 0x3b3b60u: goto label_3b3b60;
        case 0x3b3b64u: goto label_3b3b64;
        case 0x3b3b68u: goto label_3b3b68;
        case 0x3b3b6cu: goto label_3b3b6c;
        case 0x3b3b70u: goto label_3b3b70;
        case 0x3b3b74u: goto label_3b3b74;
        case 0x3b3b78u: goto label_3b3b78;
        case 0x3b3b7cu: goto label_3b3b7c;
        case 0x3b3b80u: goto label_3b3b80;
        case 0x3b3b84u: goto label_3b3b84;
        case 0x3b3b88u: goto label_3b3b88;
        case 0x3b3b8cu: goto label_3b3b8c;
        case 0x3b3b90u: goto label_3b3b90;
        case 0x3b3b94u: goto label_3b3b94;
        case 0x3b3b98u: goto label_3b3b98;
        case 0x3b3b9cu: goto label_3b3b9c;
        case 0x3b3ba0u: goto label_3b3ba0;
        case 0x3b3ba4u: goto label_3b3ba4;
        case 0x3b3ba8u: goto label_3b3ba8;
        case 0x3b3bacu: goto label_3b3bac;
        case 0x3b3bb0u: goto label_3b3bb0;
        case 0x3b3bb4u: goto label_3b3bb4;
        case 0x3b3bb8u: goto label_3b3bb8;
        case 0x3b3bbcu: goto label_3b3bbc;
        case 0x3b3bc0u: goto label_3b3bc0;
        case 0x3b3bc4u: goto label_3b3bc4;
        case 0x3b3bc8u: goto label_3b3bc8;
        case 0x3b3bccu: goto label_3b3bcc;
        case 0x3b3bd0u: goto label_3b3bd0;
        case 0x3b3bd4u: goto label_3b3bd4;
        case 0x3b3bd8u: goto label_3b3bd8;
        case 0x3b3bdcu: goto label_3b3bdc;
        case 0x3b3be0u: goto label_3b3be0;
        case 0x3b3be4u: goto label_3b3be4;
        case 0x3b3be8u: goto label_3b3be8;
        case 0x3b3becu: goto label_3b3bec;
        case 0x3b3bf0u: goto label_3b3bf0;
        case 0x3b3bf4u: goto label_3b3bf4;
        case 0x3b3bf8u: goto label_3b3bf8;
        case 0x3b3bfcu: goto label_3b3bfc;
        case 0x3b3c00u: goto label_3b3c00;
        case 0x3b3c04u: goto label_3b3c04;
        case 0x3b3c08u: goto label_3b3c08;
        case 0x3b3c0cu: goto label_3b3c0c;
        case 0x3b3c10u: goto label_3b3c10;
        case 0x3b3c14u: goto label_3b3c14;
        case 0x3b3c18u: goto label_3b3c18;
        case 0x3b3c1cu: goto label_3b3c1c;
        case 0x3b3c20u: goto label_3b3c20;
        case 0x3b3c24u: goto label_3b3c24;
        case 0x3b3c28u: goto label_3b3c28;
        case 0x3b3c2cu: goto label_3b3c2c;
        case 0x3b3c30u: goto label_3b3c30;
        case 0x3b3c34u: goto label_3b3c34;
        case 0x3b3c38u: goto label_3b3c38;
        case 0x3b3c3cu: goto label_3b3c3c;
        case 0x3b3c40u: goto label_3b3c40;
        case 0x3b3c44u: goto label_3b3c44;
        case 0x3b3c48u: goto label_3b3c48;
        case 0x3b3c4cu: goto label_3b3c4c;
        case 0x3b3c50u: goto label_3b3c50;
        case 0x3b3c54u: goto label_3b3c54;
        case 0x3b3c58u: goto label_3b3c58;
        case 0x3b3c5cu: goto label_3b3c5c;
        case 0x3b3c60u: goto label_3b3c60;
        case 0x3b3c64u: goto label_3b3c64;
        case 0x3b3c68u: goto label_3b3c68;
        case 0x3b3c6cu: goto label_3b3c6c;
        case 0x3b3c70u: goto label_3b3c70;
        case 0x3b3c74u: goto label_3b3c74;
        case 0x3b3c78u: goto label_3b3c78;
        case 0x3b3c7cu: goto label_3b3c7c;
        case 0x3b3c80u: goto label_3b3c80;
        case 0x3b3c84u: goto label_3b3c84;
        case 0x3b3c88u: goto label_3b3c88;
        case 0x3b3c8cu: goto label_3b3c8c;
        case 0x3b3c90u: goto label_3b3c90;
        case 0x3b3c94u: goto label_3b3c94;
        case 0x3b3c98u: goto label_3b3c98;
        case 0x3b3c9cu: goto label_3b3c9c;
        case 0x3b3ca0u: goto label_3b3ca0;
        case 0x3b3ca4u: goto label_3b3ca4;
        case 0x3b3ca8u: goto label_3b3ca8;
        case 0x3b3cacu: goto label_3b3cac;
        case 0x3b3cb0u: goto label_3b3cb0;
        case 0x3b3cb4u: goto label_3b3cb4;
        case 0x3b3cb8u: goto label_3b3cb8;
        case 0x3b3cbcu: goto label_3b3cbc;
        case 0x3b3cc0u: goto label_3b3cc0;
        case 0x3b3cc4u: goto label_3b3cc4;
        case 0x3b3cc8u: goto label_3b3cc8;
        case 0x3b3cccu: goto label_3b3ccc;
        case 0x3b3cd0u: goto label_3b3cd0;
        case 0x3b3cd4u: goto label_3b3cd4;
        case 0x3b3cd8u: goto label_3b3cd8;
        case 0x3b3cdcu: goto label_3b3cdc;
        case 0x3b3ce0u: goto label_3b3ce0;
        case 0x3b3ce4u: goto label_3b3ce4;
        case 0x3b3ce8u: goto label_3b3ce8;
        case 0x3b3cecu: goto label_3b3cec;
        case 0x3b3cf0u: goto label_3b3cf0;
        case 0x3b3cf4u: goto label_3b3cf4;
        case 0x3b3cf8u: goto label_3b3cf8;
        case 0x3b3cfcu: goto label_3b3cfc;
        case 0x3b3d00u: goto label_3b3d00;
        case 0x3b3d04u: goto label_3b3d04;
        case 0x3b3d08u: goto label_3b3d08;
        case 0x3b3d0cu: goto label_3b3d0c;
        case 0x3b3d10u: goto label_3b3d10;
        case 0x3b3d14u: goto label_3b3d14;
        case 0x3b3d18u: goto label_3b3d18;
        case 0x3b3d1cu: goto label_3b3d1c;
        case 0x3b3d20u: goto label_3b3d20;
        case 0x3b3d24u: goto label_3b3d24;
        case 0x3b3d28u: goto label_3b3d28;
        case 0x3b3d2cu: goto label_3b3d2c;
        case 0x3b3d30u: goto label_3b3d30;
        case 0x3b3d34u: goto label_3b3d34;
        case 0x3b3d38u: goto label_3b3d38;
        case 0x3b3d3cu: goto label_3b3d3c;
        case 0x3b3d40u: goto label_3b3d40;
        case 0x3b3d44u: goto label_3b3d44;
        case 0x3b3d48u: goto label_3b3d48;
        case 0x3b3d4cu: goto label_3b3d4c;
        case 0x3b3d50u: goto label_3b3d50;
        case 0x3b3d54u: goto label_3b3d54;
        case 0x3b3d58u: goto label_3b3d58;
        case 0x3b3d5cu: goto label_3b3d5c;
        case 0x3b3d60u: goto label_3b3d60;
        case 0x3b3d64u: goto label_3b3d64;
        case 0x3b3d68u: goto label_3b3d68;
        case 0x3b3d6cu: goto label_3b3d6c;
        case 0x3b3d70u: goto label_3b3d70;
        case 0x3b3d74u: goto label_3b3d74;
        case 0x3b3d78u: goto label_3b3d78;
        case 0x3b3d7cu: goto label_3b3d7c;
        case 0x3b3d80u: goto label_3b3d80;
        case 0x3b3d84u: goto label_3b3d84;
        case 0x3b3d88u: goto label_3b3d88;
        case 0x3b3d8cu: goto label_3b3d8c;
        case 0x3b3d90u: goto label_3b3d90;
        case 0x3b3d94u: goto label_3b3d94;
        case 0x3b3d98u: goto label_3b3d98;
        case 0x3b3d9cu: goto label_3b3d9c;
        case 0x3b3da0u: goto label_3b3da0;
        case 0x3b3da4u: goto label_3b3da4;
        case 0x3b3da8u: goto label_3b3da8;
        case 0x3b3dacu: goto label_3b3dac;
        case 0x3b3db0u: goto label_3b3db0;
        case 0x3b3db4u: goto label_3b3db4;
        case 0x3b3db8u: goto label_3b3db8;
        case 0x3b3dbcu: goto label_3b3dbc;
        case 0x3b3dc0u: goto label_3b3dc0;
        case 0x3b3dc4u: goto label_3b3dc4;
        case 0x3b3dc8u: goto label_3b3dc8;
        case 0x3b3dccu: goto label_3b3dcc;
        case 0x3b3dd0u: goto label_3b3dd0;
        case 0x3b3dd4u: goto label_3b3dd4;
        case 0x3b3dd8u: goto label_3b3dd8;
        case 0x3b3ddcu: goto label_3b3ddc;
        case 0x3b3de0u: goto label_3b3de0;
        case 0x3b3de4u: goto label_3b3de4;
        case 0x3b3de8u: goto label_3b3de8;
        case 0x3b3decu: goto label_3b3dec;
        case 0x3b3df0u: goto label_3b3df0;
        case 0x3b3df4u: goto label_3b3df4;
        case 0x3b3df8u: goto label_3b3df8;
        case 0x3b3dfcu: goto label_3b3dfc;
        case 0x3b3e00u: goto label_3b3e00;
        case 0x3b3e04u: goto label_3b3e04;
        case 0x3b3e08u: goto label_3b3e08;
        case 0x3b3e0cu: goto label_3b3e0c;
        case 0x3b3e10u: goto label_3b3e10;
        case 0x3b3e14u: goto label_3b3e14;
        case 0x3b3e18u: goto label_3b3e18;
        case 0x3b3e1cu: goto label_3b3e1c;
        case 0x3b3e20u: goto label_3b3e20;
        case 0x3b3e24u: goto label_3b3e24;
        case 0x3b3e28u: goto label_3b3e28;
        case 0x3b3e2cu: goto label_3b3e2c;
        case 0x3b3e30u: goto label_3b3e30;
        case 0x3b3e34u: goto label_3b3e34;
        case 0x3b3e38u: goto label_3b3e38;
        case 0x3b3e3cu: goto label_3b3e3c;
        case 0x3b3e40u: goto label_3b3e40;
        case 0x3b3e44u: goto label_3b3e44;
        case 0x3b3e48u: goto label_3b3e48;
        case 0x3b3e4cu: goto label_3b3e4c;
        case 0x3b3e50u: goto label_3b3e50;
        case 0x3b3e54u: goto label_3b3e54;
        case 0x3b3e58u: goto label_3b3e58;
        case 0x3b3e5cu: goto label_3b3e5c;
        case 0x3b3e60u: goto label_3b3e60;
        case 0x3b3e64u: goto label_3b3e64;
        case 0x3b3e68u: goto label_3b3e68;
        case 0x3b3e6cu: goto label_3b3e6c;
        case 0x3b3e70u: goto label_3b3e70;
        case 0x3b3e74u: goto label_3b3e74;
        case 0x3b3e78u: goto label_3b3e78;
        case 0x3b3e7cu: goto label_3b3e7c;
        case 0x3b3e80u: goto label_3b3e80;
        case 0x3b3e84u: goto label_3b3e84;
        case 0x3b3e88u: goto label_3b3e88;
        case 0x3b3e8cu: goto label_3b3e8c;
        case 0x3b3e90u: goto label_3b3e90;
        case 0x3b3e94u: goto label_3b3e94;
        case 0x3b3e98u: goto label_3b3e98;
        case 0x3b3e9cu: goto label_3b3e9c;
        case 0x3b3ea0u: goto label_3b3ea0;
        case 0x3b3ea4u: goto label_3b3ea4;
        case 0x3b3ea8u: goto label_3b3ea8;
        case 0x3b3eacu: goto label_3b3eac;
        case 0x3b3eb0u: goto label_3b3eb0;
        case 0x3b3eb4u: goto label_3b3eb4;
        case 0x3b3eb8u: goto label_3b3eb8;
        case 0x3b3ebcu: goto label_3b3ebc;
        case 0x3b3ec0u: goto label_3b3ec0;
        case 0x3b3ec4u: goto label_3b3ec4;
        case 0x3b3ec8u: goto label_3b3ec8;
        case 0x3b3eccu: goto label_3b3ecc;
        case 0x3b3ed0u: goto label_3b3ed0;
        case 0x3b3ed4u: goto label_3b3ed4;
        case 0x3b3ed8u: goto label_3b3ed8;
        case 0x3b3edcu: goto label_3b3edc;
        case 0x3b3ee0u: goto label_3b3ee0;
        case 0x3b3ee4u: goto label_3b3ee4;
        case 0x3b3ee8u: goto label_3b3ee8;
        case 0x3b3eecu: goto label_3b3eec;
        case 0x3b3ef0u: goto label_3b3ef0;
        case 0x3b3ef4u: goto label_3b3ef4;
        case 0x3b3ef8u: goto label_3b3ef8;
        case 0x3b3efcu: goto label_3b3efc;
        case 0x3b3f00u: goto label_3b3f00;
        case 0x3b3f04u: goto label_3b3f04;
        case 0x3b3f08u: goto label_3b3f08;
        case 0x3b3f0cu: goto label_3b3f0c;
        case 0x3b3f10u: goto label_3b3f10;
        case 0x3b3f14u: goto label_3b3f14;
        case 0x3b3f18u: goto label_3b3f18;
        case 0x3b3f1cu: goto label_3b3f1c;
        case 0x3b3f20u: goto label_3b3f20;
        case 0x3b3f24u: goto label_3b3f24;
        case 0x3b3f28u: goto label_3b3f28;
        case 0x3b3f2cu: goto label_3b3f2c;
        case 0x3b3f30u: goto label_3b3f30;
        case 0x3b3f34u: goto label_3b3f34;
        case 0x3b3f38u: goto label_3b3f38;
        case 0x3b3f3cu: goto label_3b3f3c;
        case 0x3b3f40u: goto label_3b3f40;
        case 0x3b3f44u: goto label_3b3f44;
        case 0x3b3f48u: goto label_3b3f48;
        case 0x3b3f4cu: goto label_3b3f4c;
        case 0x3b3f50u: goto label_3b3f50;
        case 0x3b3f54u: goto label_3b3f54;
        case 0x3b3f58u: goto label_3b3f58;
        case 0x3b3f5cu: goto label_3b3f5c;
        case 0x3b3f60u: goto label_3b3f60;
        case 0x3b3f64u: goto label_3b3f64;
        case 0x3b3f68u: goto label_3b3f68;
        case 0x3b3f6cu: goto label_3b3f6c;
        case 0x3b3f70u: goto label_3b3f70;
        case 0x3b3f74u: goto label_3b3f74;
        case 0x3b3f78u: goto label_3b3f78;
        case 0x3b3f7cu: goto label_3b3f7c;
        case 0x3b3f80u: goto label_3b3f80;
        case 0x3b3f84u: goto label_3b3f84;
        case 0x3b3f88u: goto label_3b3f88;
        case 0x3b3f8cu: goto label_3b3f8c;
        case 0x3b3f90u: goto label_3b3f90;
        case 0x3b3f94u: goto label_3b3f94;
        case 0x3b3f98u: goto label_3b3f98;
        case 0x3b3f9cu: goto label_3b3f9c;
        case 0x3b3fa0u: goto label_3b3fa0;
        case 0x3b3fa4u: goto label_3b3fa4;
        case 0x3b3fa8u: goto label_3b3fa8;
        case 0x3b3facu: goto label_3b3fac;
        case 0x3b3fb0u: goto label_3b3fb0;
        case 0x3b3fb4u: goto label_3b3fb4;
        case 0x3b3fb8u: goto label_3b3fb8;
        case 0x3b3fbcu: goto label_3b3fbc;
        case 0x3b3fc0u: goto label_3b3fc0;
        case 0x3b3fc4u: goto label_3b3fc4;
        case 0x3b3fc8u: goto label_3b3fc8;
        case 0x3b3fccu: goto label_3b3fcc;
        case 0x3b3fd0u: goto label_3b3fd0;
        case 0x3b3fd4u: goto label_3b3fd4;
        case 0x3b3fd8u: goto label_3b3fd8;
        case 0x3b3fdcu: goto label_3b3fdc;
        case 0x3b3fe0u: goto label_3b3fe0;
        case 0x3b3fe4u: goto label_3b3fe4;
        case 0x3b3fe8u: goto label_3b3fe8;
        case 0x3b3fecu: goto label_3b3fec;
        case 0x3b3ff0u: goto label_3b3ff0;
        case 0x3b3ff4u: goto label_3b3ff4;
        case 0x3b3ff8u: goto label_3b3ff8;
        case 0x3b3ffcu: goto label_3b3ffc;
        case 0x3b4000u: goto label_3b4000;
        case 0x3b4004u: goto label_3b4004;
        case 0x3b4008u: goto label_3b4008;
        case 0x3b400cu: goto label_3b400c;
        case 0x3b4010u: goto label_3b4010;
        case 0x3b4014u: goto label_3b4014;
        case 0x3b4018u: goto label_3b4018;
        case 0x3b401cu: goto label_3b401c;
        case 0x3b4020u: goto label_3b4020;
        case 0x3b4024u: goto label_3b4024;
        case 0x3b4028u: goto label_3b4028;
        case 0x3b402cu: goto label_3b402c;
        case 0x3b4030u: goto label_3b4030;
        case 0x3b4034u: goto label_3b4034;
        case 0x3b4038u: goto label_3b4038;
        case 0x3b403cu: goto label_3b403c;
        case 0x3b4040u: goto label_3b4040;
        case 0x3b4044u: goto label_3b4044;
        case 0x3b4048u: goto label_3b4048;
        case 0x3b404cu: goto label_3b404c;
        case 0x3b4050u: goto label_3b4050;
        case 0x3b4054u: goto label_3b4054;
        case 0x3b4058u: goto label_3b4058;
        case 0x3b405cu: goto label_3b405c;
        case 0x3b4060u: goto label_3b4060;
        case 0x3b4064u: goto label_3b4064;
        case 0x3b4068u: goto label_3b4068;
        case 0x3b406cu: goto label_3b406c;
        case 0x3b4070u: goto label_3b4070;
        case 0x3b4074u: goto label_3b4074;
        case 0x3b4078u: goto label_3b4078;
        case 0x3b407cu: goto label_3b407c;
        case 0x3b4080u: goto label_3b4080;
        case 0x3b4084u: goto label_3b4084;
        case 0x3b4088u: goto label_3b4088;
        case 0x3b408cu: goto label_3b408c;
        case 0x3b4090u: goto label_3b4090;
        case 0x3b4094u: goto label_3b4094;
        case 0x3b4098u: goto label_3b4098;
        case 0x3b409cu: goto label_3b409c;
        case 0x3b40a0u: goto label_3b40a0;
        case 0x3b40a4u: goto label_3b40a4;
        case 0x3b40a8u: goto label_3b40a8;
        case 0x3b40acu: goto label_3b40ac;
        case 0x3b40b0u: goto label_3b40b0;
        case 0x3b40b4u: goto label_3b40b4;
        case 0x3b40b8u: goto label_3b40b8;
        case 0x3b40bcu: goto label_3b40bc;
        case 0x3b40c0u: goto label_3b40c0;
        case 0x3b40c4u: goto label_3b40c4;
        case 0x3b40c8u: goto label_3b40c8;
        case 0x3b40ccu: goto label_3b40cc;
        default: break;
    }

    ctx->pc = 0x3b33e8u;

label_3b33e8:
    // 0x3b33e8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3b33e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_3b33ec:
    // 0x3b33ec: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x3b33ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_3b33f0:
    // 0x3b33f0: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x3b33f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_3b33f4:
    // 0x3b33f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b33f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b33f8:
    // 0x3b33f8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x3b33f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_3b33fc:
    // 0x3b33fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3b33fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b3400:
    // 0x3b3400: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x3b3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_3b3404:
    // 0x3b3404: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3b3404u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3408:
    // 0x3b3408: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x3b3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_3b340c:
    // 0x3b340c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x3b340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_3b3410:
    // 0x3b3410: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x3b3410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_3b3414:
    // 0x3b3414: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x3b3414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_3b3418:
    // 0x3b3418: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x3b3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_3b341c:
    // 0x3b341c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3b341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3b3420:
    // 0x3b3420: 0xe7bf01b8  swc1        $f31, 0x1B8($sp)
    ctx->pc = 0x3b3420u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_3b3424:
    // 0x3b3424: 0xe7be01b0  swc1        $f30, 0x1B0($sp)
    ctx->pc = 0x3b3424u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_3b3428:
    // 0x3b3428: 0xe7bd01a8  swc1        $f29, 0x1A8($sp)
    ctx->pc = 0x3b3428u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3b342c:
    // 0x3b342c: 0xe7bc01a0  swc1        $f28, 0x1A0($sp)
    ctx->pc = 0x3b342cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3b3430:
    // 0x3b3430: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x3b3430u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_3b3434:
    // 0x3b3434: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x3b3434u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3b3438:
    // 0x3b3438: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x3b3438u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3b343c:
    // 0x3b343c: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x3b343cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3b3440:
    // 0x3b3440: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x3b3440u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_3b3444:
    // 0x3b3444: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x3b3444u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_3b3448:
    // 0x3b3448: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x3b3448u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3b344c:
    // 0x3b344c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x3b344cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3b3450:
    // 0x3b3450: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3b3450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3b3454:
    // 0x3b3454: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b3454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b3458:
    // 0x3b3458: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b345c:
    // 0x3b345c: 0x40f809  jalr        $v0
label_3b3460:
    if (ctx->pc == 0x3B3460u) {
        ctx->pc = 0x3B3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B345Cu;
        // 0x3b3460: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3464u;
        goto label_3b3464;
    }
    ctx->pc = 0x3B345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3464u);
        ctx->pc = 0x3B3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B345Cu;
        // 0x3b3460: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B345Cu, 0x3B3464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3464u;
label_3b3464:
    // 0x3b3464: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3b3464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3b3468:
    // 0x3b3468: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b346c:
    // 0x3b346c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_3b3470:
    if (ctx->pc == 0x3B3470u) {
        ctx->pc = 0x3B3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B346Cu;
        // 0x3b3470: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3474u;
        goto label_3b3474;
    }
    ctx->pc = 0x3B346Cu;
    {
        const bool branch_taken_0x3b346c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B346Cu;
        // 0x3b3470: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b346c) {
            ctx->pc = 0x3B34A0u;
            goto label_3b34a0;
        }
    }
    ctx->pc = 0x3B3474u;
label_3b3474:
    // 0x3b3474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b3478:
    if (ctx->pc == 0x3B3478u) {
        ctx->pc = 0x3B3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3474u;
        // 0x3b3478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B347Cu;
        goto label_3b347c;
    }
    ctx->pc = 0x3B3474u;
    {
        const bool branch_taken_0x3b3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3474u;
        // 0x3b3478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3474) {
            ctx->pc = 0x3B348Cu;
            goto label_3b348c;
        }
    }
    ctx->pc = 0x3B347Cu;
label_3b347c:
    // 0x3b347c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
label_3b3480:
    if (ctx->pc == 0x3B3480u) {
        ctx->pc = 0x3B3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B347Cu;
        // 0x3b3480: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3484u;
        goto label_3b3484;
    }
    ctx->pc = 0x3B347Cu;
    {
        const bool branch_taken_0x3b347c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B347Cu;
        // 0x3b3480: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b347c) {
            ctx->pc = 0x3B34E0u;
            goto label_3b34e0;
        }
    }
    ctx->pc = 0x3B3484u;
label_3b3484:
    // 0x3b3484: 0x100002fc  b           . + 4 + (0x2FC << 2)
label_3b3488:
    if (ctx->pc == 0x3B3488u) {
        ctx->pc = 0x3B3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3484u;
        // 0x3b3488: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B348Cu;
        goto label_3b348c;
    }
    ctx->pc = 0x3B3484u;
    {
        const bool branch_taken_0x3b3484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3484u;
        // 0x3b3488: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3484) {
            ctx->pc = 0x3B4078u;
            goto label_3b4078;
        }
    }
    ctx->pc = 0x3B348Cu;
label_3b348c:
    // 0x3b348c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3b348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3b3490:
    // 0x3b3490: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_3b3494:
    if (ctx->pc == 0x3B3494u) {
        ctx->pc = 0x3B3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3490u;
        // 0x3b3494: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3498u;
        goto label_3b3498;
    }
    ctx->pc = 0x3B3490u;
    {
        const bool branch_taken_0x3b3490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3490u;
        // 0x3b3494: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3490) {
            ctx->pc = 0x3B34BCu;
            goto label_3b34bc;
        }
    }
    ctx->pc = 0x3B3498u;
label_3b3498:
    // 0x3b3498: 0x100002f7  b           . + 4 + (0x2F7 << 2)
label_3b349c:
    if (ctx->pc == 0x3B349Cu) {
        ctx->pc = 0x3B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3498u;
        // 0x3b349c: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34A0u;
        goto label_3b34a0;
    }
    ctx->pc = 0x3B3498u;
    {
        const bool branch_taken_0x3b3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3498u;
        // 0x3b349c: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3498) {
            ctx->pc = 0x3B4078u;
            goto label_3b4078;
        }
    }
    ctx->pc = 0x3B34A0u;
label_3b34a0:
    // 0x3b34a0: 0xc0ea146  jal         func_3A8518
label_3b34a4:
    if (ctx->pc == 0x3B34A4u) {
        ctx->pc = 0x3B34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34A0u;
        // 0x3b34a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34A8u;
        goto label_3b34a8;
    }
    ctx->pc = 0x3B34A0u;
    SET_GPR_U32(ctx, 31, 0x3B34A8u);
    ctx->pc = 0x3B34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34A0u;
    // 0x3b34a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B34A0u, 0x3B34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34A8u;
label_3b34a8:
    // 0x3b34a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b34a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b34ac:
    // 0x3b34ac: 0xc0e85fa  jal         func_3A17E8
label_3b34b0:
    if (ctx->pc == 0x3B34B0u) {
        ctx->pc = 0x3B34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34ACu;
        // 0x3b34b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34B4u;
        goto label_3b34b4;
    }
    ctx->pc = 0x3B34ACu;
    SET_GPR_U32(ctx, 31, 0x3B34B4u);
    ctx->pc = 0x3B34B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34ACu;
    // 0x3b34b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3B34ACu, 0x3B34B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34B4u;
label_3b34b4:
    // 0x3b34b4: 0x100002ef  b           . + 4 + (0x2EF << 2)
label_3b34b8:
    if (ctx->pc == 0x3B34B8u) {
        ctx->pc = 0x3B34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34B4u;
        // 0x3b34b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34BCu;
        goto label_3b34bc;
    }
    ctx->pc = 0x3B34B4u;
    {
        const bool branch_taken_0x3b34b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34B4u;
        // 0x3b34b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34b4) {
            ctx->pc = 0x3B4074u;
            goto label_3b4074;
        }
    }
    ctx->pc = 0x3B34BCu;
label_3b34bc:
    // 0x3b34bc: 0xc0ea146  jal         func_3A8518
label_3b34c0:
    if (ctx->pc == 0x3B34C0u) {
        ctx->pc = 0x3B34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34BCu;
        // 0x3b34c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34C4u;
        goto label_3b34c4;
    }
    ctx->pc = 0x3B34BCu;
    SET_GPR_U32(ctx, 31, 0x3B34C4u);
    ctx->pc = 0x3B34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34BCu;
    // 0x3b34c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B34BCu, 0x3B34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34C4u;
label_3b34c4:
    // 0x3b34c4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3b34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b34c8:
    // 0x3b34c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b34c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b34cc:
    // 0x3b34cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b34ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b34d0:
    // 0x3b34d0: 0xc0e9bb2  jal         func_3A6EC8
label_3b34d4:
    if (ctx->pc == 0x3B34D4u) {
        ctx->pc = 0x3B34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34D0u;
        // 0x3b34d4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34D8u;
        goto label_3b34d8;
    }
    ctx->pc = 0x3B34D0u;
    SET_GPR_U32(ctx, 31, 0x3B34D8u);
    ctx->pc = 0x3B34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34D0u;
    // 0x3b34d4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B34D0u, 0x3B34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34D8u;
label_3b34d8:
    // 0x3b34d8: 0x100002e6  b           . + 4 + (0x2E6 << 2)
label_3b34dc:
    if (ctx->pc == 0x3B34DCu) {
        ctx->pc = 0x3B34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34D8u;
        // 0x3b34dc: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34E0u;
        goto label_3b34e0;
    }
    ctx->pc = 0x3B34D8u;
    {
        const bool branch_taken_0x3b34d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34D8u;
        // 0x3b34dc: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34d8) {
            ctx->pc = 0x3B4074u;
            goto label_3b4074;
        }
    }
    ctx->pc = 0x3B34E0u;
label_3b34e0:
    // 0x3b34e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b34e4:
    // 0x3b34e4: 0xc0ea12a  jal         func_3A84A8
label_3b34e8:
    if (ctx->pc == 0x3B34E8u) {
        ctx->pc = 0x3B34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34E4u;
        // 0x3b34e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B34ECu;
        goto label_3b34ec;
    }
    ctx->pc = 0x3B34E4u;
    SET_GPR_U32(ctx, 31, 0x3B34ECu);
    ctx->pc = 0x3B34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34E4u;
    // 0x3b34e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B34E4u, 0x3B34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34ECu;
label_3b34ec:
    // 0x3b34ec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b34ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b34f0:
    // 0x3b34f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b34f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b34f4:
    // 0x3b34f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b34f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b34f8:
    // 0x3b34f8: 0xc0ea12a  jal         func_3A84A8
label_3b34fc:
    if (ctx->pc == 0x3B34FCu) {
        ctx->pc = 0x3B34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34F8u;
        // 0x3b34fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3500u;
        goto label_3b3500;
    }
    ctx->pc = 0x3B34F8u;
    SET_GPR_U32(ctx, 31, 0x3B3500u);
    ctx->pc = 0x3B34FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34F8u;
    // 0x3b34fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B34F8u, 0x3B3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3500u;
label_3b3500:
    // 0x3b3500: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b3500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3504:
    // 0x3b3504: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b3504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3508:
    // 0x3b3508: 0xc0ea146  jal         func_3A8518
label_3b350c:
    if (ctx->pc == 0x3B350Cu) {
        ctx->pc = 0x3B350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3508u;
        // 0x3b350c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3510u;
        goto label_3b3510;
    }
    ctx->pc = 0x3B3508u;
    SET_GPR_U32(ctx, 31, 0x3B3510u);
    ctx->pc = 0x3B350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3508u;
    // 0x3b350c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B3508u, 0x3B3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3510u;
label_3b3510:
    // 0x3b3510: 0xc0ea146  jal         func_3A8518
label_3b3514:
    if (ctx->pc == 0x3B3514u) {
        ctx->pc = 0x3B3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3510u;
        // 0x3b3514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3518u;
        goto label_3b3518;
    }
    ctx->pc = 0x3B3510u;
    SET_GPR_U32(ctx, 31, 0x3B3518u);
    ctx->pc = 0x3B3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3510u;
    // 0x3b3514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B3510u, 0x3B3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3518u;
label_3b3518:
    // 0x3b3518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b3518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b351c:
    // 0x3b351c: 0xc0ea14c  jal         func_3A8530
label_3b3520:
    if (ctx->pc == 0x3B3520u) {
        ctx->pc = 0x3B3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B351Cu;
        // 0x3b3520: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3524u;
        goto label_3b3524;
    }
    ctx->pc = 0x3B351Cu;
    SET_GPR_U32(ctx, 31, 0x3B3524u);
    ctx->pc = 0x3B3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B351Cu;
    // 0x3b3520: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B351Cu, 0x3B3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3524u;
label_3b3524:
    // 0x3b3524: 0xc0ea14c  jal         func_3A8530
label_3b3528:
    if (ctx->pc == 0x3B3528u) {
        ctx->pc = 0x3B3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3524u;
        // 0x3b3528: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B352Cu;
        goto label_3b352c;
    }
    ctx->pc = 0x3B3524u;
    SET_GPR_U32(ctx, 31, 0x3B352Cu);
    ctx->pc = 0x3B3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3524u;
    // 0x3b3528: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B3524u, 0x3B352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B352Cu;
label_3b352c:
    // 0x3b352c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x3b352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b3530:
    // 0x3b3530: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x3b3530u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3b3534:
    // 0x3b3534: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x3b3534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b3538:
    // 0x3b3538: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b353c:
    // 0x3b353c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3b353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3b3540:
    // 0x3b3540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b3540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b3544:
    // 0x3b3544: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3b3544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3b3548:
    // 0x3b3548: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3b3548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b354c:
    // 0x3b354c: 0xc0e90ca  jal         func_3A4328
label_3b3550:
    if (ctx->pc == 0x3B3550u) {
        ctx->pc = 0x3B3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B354Cu;
        // 0x3b3550: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3554u;
        goto label_3b3554;
    }
    ctx->pc = 0x3B354Cu;
    SET_GPR_U32(ctx, 31, 0x3B3554u);
    ctx->pc = 0x3B3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B354Cu;
    // 0x3b3550: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B354Cu, 0x3B3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3554u;
label_3b3554:
    // 0x3b3554: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3b3554u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b3558:
    // 0x3b3558: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3b3558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3b355c:
    // 0x3b355c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b355cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3560:
    // 0x3b3560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b3560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3564:
    // 0x3b3564: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b3564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b3568:
    // 0x3b3568: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b3568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b356c:
    // 0x3b356c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b356cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b3570:
    // 0x3b3570: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b3570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b3574:
    // 0x3b3574: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b3574u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b3578:
    // 0x3b3578: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b3578u;
    // VWAITQ (Q already resolved in this runtime)
label_3b357c:
    // 0x3b357c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b357cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b3580:
    // 0x3b3580: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b3580u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b3584:
    // 0x3b3584: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x3b3584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3b3588:
    // 0x3b3588: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3b3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3b358c:
    // 0x3b358c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b3590:
    // 0x3b3590: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b3594:
    // 0x3b3594: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b3598:
    // 0x3b3598: 0xc1073cc  jal         func_41CF30
label_3b359c:
    if (ctx->pc == 0x3B359Cu) {
        ctx->pc = 0x3B359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3598u;
        // 0x3b359c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35A0u;
        goto label_3b35a0;
    }
    ctx->pc = 0x3B3598u;
    SET_GPR_U32(ctx, 31, 0x3B35A0u);
    ctx->pc = 0x3B359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3598u;
    // 0x3b359c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B3598u, 0x3B35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35A0u;
label_3b35a0:
    // 0x3b35a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b35a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b35a4:
    // 0x3b35a4: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_3b35a8:
    if (ctx->pc == 0x3B35A8u) {
        ctx->pc = 0x3B35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35A4u;
        // 0x3b35a8: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35ACu;
        goto label_3b35ac;
    }
    ctx->pc = 0x3B35A4u;
    {
        const bool branch_taken_0x3b35a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35A4u;
        // 0x3b35a8: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b35a4) {
            ctx->pc = 0x3B371Cu;
            goto label_3b371c;
        }
    }
    ctx->pc = 0x3B35ACu;
label_3b35ac:
    // 0x3b35ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3b35acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b35b0:
    // 0x3b35b0: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3b35b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3b35b4:
    // 0x3b35b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b35b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b35b8:
    // 0x3b35b8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b35b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b35bc:
    // 0x3b35bc: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3b35bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3b35c0:
    // 0x3b35c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b35c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3b35c4:
    // 0x3b35c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b35c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b35c8:
    // 0x3b35c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b35c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b35cc:
    // 0x3b35cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b35ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b35d0:
    // 0x3b35d0: 0xc0cd518  jal         func_335460
label_3b35d4:
    if (ctx->pc == 0x3B35D4u) {
        ctx->pc = 0x3B35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35D0u;
        // 0x3b35d4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B35D8u;
        goto label_3b35d8;
    }
    ctx->pc = 0x3B35D0u;
    SET_GPR_U32(ctx, 31, 0x3B35D8u);
    ctx->pc = 0x3B35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B35D0u;
    // 0x3b35d4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B35D0u, 0x3B35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35D8u;
label_3b35d8:
    // 0x3b35d8: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x3b35d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_3b35dc:
    // 0x3b35dc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x3b35dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b35e0:
    // 0x3b35e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b35e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b35e4:
    // 0x3b35e4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3b35e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b35e8:
    // 0x3b35e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b35e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b35ec:
    // 0x3b35ec: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b35ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b35f0:
    // 0x3b35f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b35f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b35f4:
    // 0x3b35f4: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3b35f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b35f8:
    // 0x3b35f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b35f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b35fc:
    // 0x3b35fc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b35fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3600:
    // 0x3b3600: 0xc136b18  jal         func_4DAC60
label_3b3604:
    if (ctx->pc == 0x3B3604u) {
        ctx->pc = 0x3B3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3600u;
        // 0x3b3604: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3608u;
        goto label_3b3608;
    }
    ctx->pc = 0x3B3600u;
    SET_GPR_U32(ctx, 31, 0x3B3608u);
    ctx->pc = 0x3B3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3600u;
    // 0x3b3604: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3600u, 0x3B3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3608u;
label_3b3608:
    // 0x3b3608: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b360c:
    // 0x3b360c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b360cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b3610:
    // 0x3b3610: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3b3610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3b3614:
    // 0x3b3614: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b3614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b3618:
    // 0x3b3618: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b3618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b361c:
    // 0x3b361c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3620:
    // 0x3b3620: 0xc0f15f6  jal         func_3C57D8
label_3b3624:
    if (ctx->pc == 0x3B3624u) {
        ctx->pc = 0x3B3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3620u;
        // 0x3b3624: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3628u;
        goto label_3b3628;
    }
    ctx->pc = 0x3B3620u;
    SET_GPR_U32(ctx, 31, 0x3B3628u);
    ctx->pc = 0x3B3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3620u;
    // 0x3b3624: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B3620u, 0x3B3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3628u;
label_3b3628:
    // 0x3b3628: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3b3628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3b362c:
    // 0x3b362c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b362cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b3630:
    // 0x3b3630: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3b3630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3b3634:
    // 0x3b3634: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b3634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b3638:
    // 0x3b3638: 0xc0cd518  jal         func_335460
label_3b363c:
    if (ctx->pc == 0x3B363Cu) {
        ctx->pc = 0x3B363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3638u;
        // 0x3b363c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3640u;
        goto label_3b3640;
    }
    ctx->pc = 0x3B3638u;
    SET_GPR_U32(ctx, 31, 0x3B3640u);
    ctx->pc = 0x3B363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3638u;
    // 0x3b363c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3638u, 0x3B3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3640u;
label_3b3640:
    // 0x3b3640: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b3640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b3644:
    // 0x3b3644: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b3644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b3648:
    // 0x3b3648: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3b3648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b364c:
    // 0x3b364c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b364cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3650:
    // 0x3b3650: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b3650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b3654:
    // 0x3b3654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3658:
    // 0x3b3658: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3b3658u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b365c:
    // 0x3b365c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b365cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3660:
    // 0x3b3660: 0xc136b18  jal         func_4DAC60
label_3b3664:
    if (ctx->pc == 0x3B3664u) {
        ctx->pc = 0x3B3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3660u;
        // 0x3b3664: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3668u;
        goto label_3b3668;
    }
    ctx->pc = 0x3B3660u;
    SET_GPR_U32(ctx, 31, 0x3B3668u);
    ctx->pc = 0x3B3664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3660u;
    // 0x3b3664: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3660u, 0x3B3668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3668u;
label_3b3668:
    // 0x3b3668: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b366c:
    // 0x3b366c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b366cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b3670:
    // 0x3b3670: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3b3670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3b3674:
    // 0x3b3674: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b3674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b3678:
    // 0x3b3678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b3678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b367c:
    // 0x3b367c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3680:
    // 0x3b3680: 0xc0f15f6  jal         func_3C57D8
label_3b3684:
    if (ctx->pc == 0x3B3684u) {
        ctx->pc = 0x3B3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3680u;
        // 0x3b3684: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3688u;
        goto label_3b3688;
    }
    ctx->pc = 0x3B3680u;
    SET_GPR_U32(ctx, 31, 0x3B3688u);
    ctx->pc = 0x3B3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3680u;
    // 0x3b3684: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B3680u, 0x3B3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3688u;
label_3b3688:
    // 0x3b3688: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b3688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b368c:
    // 0x3b368c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b3690:
    // 0x3b3690: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3b3690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b3694:
    // 0x3b3694: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b3694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b3698:
    // 0x3b3698: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3b3698u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3b369c:
    // 0x3b369c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b36a0:
    // 0x3b36a0: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3b36a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b36a4:
    // 0x3b36a4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b36a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b36a8:
    // 0x3b36a8: 0xc136b18  jal         func_4DAC60
label_3b36ac:
    if (ctx->pc == 0x3B36ACu) {
        ctx->pc = 0x3B36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36A8u;
        // 0x3b36ac: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36B0u;
        goto label_3b36b0;
    }
    ctx->pc = 0x3B36A8u;
    SET_GPR_U32(ctx, 31, 0x3B36B0u);
    ctx->pc = 0x3B36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36A8u;
    // 0x3b36ac: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B36A8u, 0x3B36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36B0u;
label_3b36b0:
    // 0x3b36b0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b36b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b36b4:
    // 0x3b36b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b36b8:
    // 0x3b36b8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b36b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b36bc:
    // 0x3b36bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b36bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b36c0:
    // 0x3b36c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b36c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b36c4:
    // 0x3b36c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b36c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b36c8:
    // 0x3b36c8: 0xc136b24  jal         func_4DAC90
label_3b36cc:
    if (ctx->pc == 0x3B36CCu) {
        ctx->pc = 0x3B36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36C8u;
        // 0x3b36cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36D0u;
        goto label_3b36d0;
    }
    ctx->pc = 0x3B36C8u;
    SET_GPR_U32(ctx, 31, 0x3B36D0u);
    ctx->pc = 0x3B36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36C8u;
    // 0x3b36cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B36C8u, 0x3B36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36D0u;
label_3b36d0:
    // 0x3b36d0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b36d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b36d4:
    // 0x3b36d4: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3b36d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3b36d8:
    // 0x3b36d8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b36d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b36dc:
    // 0x3b36dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b36dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b36e0:
    // 0x3b36e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b36e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b36e4:
    // 0x3b36e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b36e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b36e8:
    // 0x3b36e8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3b36e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3b36ec:
    // 0x3b36ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b36ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b36f0:
    // 0x3b36f0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b36f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b36f4:
    // 0x3b36f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3b36f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3b36f8:
    // 0x3b36f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b36f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b36fc:
    // 0x3b36fc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3b36fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3b3700:
    // 0x3b3700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b3704:
    // 0x3b3704: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b3704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b3708:
    // 0x3b3708: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b3708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b370c:
    // 0x3b370c: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3b370cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3b3710:
    // 0x3b3710: 0xc0f16c0  jal         func_3C5B00
label_3b3714:
    if (ctx->pc == 0x3B3714u) {
        ctx->pc = 0x3B3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3710u;
        // 0x3b3714: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3718u;
        goto label_3b3718;
    }
    ctx->pc = 0x3B3710u;
    SET_GPR_U32(ctx, 31, 0x3B3718u);
    ctx->pc = 0x3B3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3710u;
    // 0x3b3714: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B3710u, 0x3B3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3718u;
label_3b3718:
    // 0x3b3718: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3b3718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b371c:
    // 0x3b371c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3b3720:
    // 0x3b3720: 0x1c400250  bgtz        $v0, . + 4 + (0x250 << 2)
label_3b3724:
    if (ctx->pc == 0x3B3724u) {
        ctx->pc = 0x3B3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3720u;
        // 0x3b3724: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3728u;
        goto label_3b3728;
    }
    ctx->pc = 0x3B3720u;
    {
        const bool branch_taken_0x3b3720 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3B3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3720u;
        // 0x3b3724: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3720) {
            ctx->pc = 0x3B4064u;
            goto label_3b4064;
        }
    }
    ctx->pc = 0x3B3728u;
label_3b3728:
    // 0x3b3728: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x3b3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_3b372c:
    // 0x3b372c: 0x8ec400d8  lw          $a0, 0xD8($s6)
    ctx->pc = 0x3b372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
label_3b3730:
    // 0x3b3730: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3b3730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3b3734:
    // 0x3b3734: 0xc0e91b2  jal         func_3A46C8
label_3b3738:
    if (ctx->pc == 0x3B3738u) {
        ctx->pc = 0x3B3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3734u;
        // 0x3b3738: 0xaec20054  sw          $v0, 0x54($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B373Cu;
        goto label_3b373c;
    }
    ctx->pc = 0x3B3734u;
    SET_GPR_U32(ctx, 31, 0x3B373Cu);
    ctx->pc = 0x3B3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3734u;
    // 0x3b3738: 0xaec20054  sw          $v0, 0x54($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B3734u, 0x3B373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B373Cu;
label_3b373c:
    // 0x3b373c: 0xc0e91b2  jal         func_3A46C8
label_3b3740:
    if (ctx->pc == 0x3B3740u) {
        ctx->pc = 0x3B3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B373Cu;
        // 0x3b3740: 0x8ec400dc  lw          $a0, 0xDC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3744u;
        goto label_3b3744;
    }
    ctx->pc = 0x3B373Cu;
    SET_GPR_U32(ctx, 31, 0x3B3744u);
    ctx->pc = 0x3B3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B373Cu;
    // 0x3b3740: 0x8ec400dc  lw          $a0, 0xDC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B373Cu, 0x3B3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3744u;
label_3b3744:
    // 0x3b3744: 0xc0e92c0  jal         func_3A4B00
label_3b3748:
    if (ctx->pc == 0x3B3748u) {
        ctx->pc = 0x3B3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3744u;
        // 0x3b3748: 0x8ec400e0  lw          $a0, 0xE0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B374Cu;
        goto label_3b374c;
    }
    ctx->pc = 0x3B3744u;
    SET_GPR_U32(ctx, 31, 0x3B374Cu);
    ctx->pc = 0x3B3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3744u;
    // 0x3b3748: 0x8ec400e0  lw          $a0, 0xE0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B3744u, 0x3B374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B374Cu;
label_3b374c:
    // 0x3b374c: 0x8ec300c8  lw          $v1, 0xC8($s6)
    ctx->pc = 0x3b374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
label_3b3750:
    // 0x3b3750: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b3750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3b3754:
    // 0x3b3754: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3b3754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3b3758:
    // 0x3b3758: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x3b3758u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b375c:
    // 0x3b375c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3b3760:
    // 0x3b3760: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b3760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b3764:
    // 0x3b3764: 0xc0e8fc0  jal         func_3A3F00
label_3b3768:
    if (ctx->pc == 0x3B3768u) {
        ctx->pc = 0x3B3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3764u;
        // 0x3b3768: 0xaec300cc  sw          $v1, 0xCC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B376Cu;
        goto label_3b376c;
    }
    ctx->pc = 0x3B3764u;
    SET_GPR_U32(ctx, 31, 0x3B376Cu);
    ctx->pc = 0x3B3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3764u;
    // 0x3b3768: 0xaec300cc  sw          $v1, 0xCC($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3B3764u, 0x3B376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B376Cu;
label_3b376c:
    // 0x3b376c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3770:
    // 0x3b3770: 0xc0e90ca  jal         func_3A4328
label_3b3774:
    if (ctx->pc == 0x3B3774u) {
        ctx->pc = 0x3B3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3770u;
        // 0x3b3774: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3778u;
        goto label_3b3778;
    }
    ctx->pc = 0x3B3770u;
    SET_GPR_U32(ctx, 31, 0x3B3778u);
    ctx->pc = 0x3B3774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3770u;
    // 0x3b3774: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B3770u, 0x3B3778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3778u;
label_3b3778:
    // 0x3b3778: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b377c:
    // 0x3b377c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b3780:
    // 0x3b3780: 0xc136afa  jal         func_4DABE8
label_3b3784:
    if (ctx->pc == 0x3B3784u) {
        ctx->pc = 0x3B3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3780u;
        // 0x3b3784: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3788u;
        goto label_3b3788;
    }
    ctx->pc = 0x3B3780u;
    SET_GPR_U32(ctx, 31, 0x3B3788u);
    ctx->pc = 0x3B3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3780u;
    // 0x3b3784: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3B3780u, 0x3B3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3788u;
label_3b3788:
    // 0x3b3788: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b378c:
    // 0x3b378c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3790:
    // 0x3b3790: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b3790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b3794:
    // 0x3b3794: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b3794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b3798:
    // 0x3b3798: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b3798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b379c:
    // 0x3b379c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3b379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b37a0:
    // 0x3b37a0: 0xc136b24  jal         func_4DAC90
label_3b37a4:
    if (ctx->pc == 0x3B37A4u) {
        ctx->pc = 0x3B37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37A0u;
        // 0x3b37a4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37A8u;
        goto label_3b37a8;
    }
    ctx->pc = 0x3B37A0u;
    SET_GPR_U32(ctx, 31, 0x3B37A8u);
    ctx->pc = 0x3B37A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B37A0u;
    // 0x3b37a4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B37A0u, 0x3B37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B37A8u;
label_3b37a8:
    // 0x3b37a8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b37a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b37ac:
    // 0x3b37ac: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b37acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b37b0:
    // 0x3b37b0: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3b37b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3b37b4:
    // 0x3b37b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b37b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b37b8:
    // 0x3b37b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b37bc:
    // 0x3b37bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b37bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b37c0:
    // 0x3b37c0: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b37c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b37c4:
    // 0x3b37c4: 0xc0f15f6  jal         func_3C57D8
label_3b37c8:
    if (ctx->pc == 0x3B37C8u) {
        ctx->pc = 0x3B37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37C4u;
        // 0x3b37c8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37CCu;
        goto label_3b37cc;
    }
    ctx->pc = 0x3B37C4u;
    SET_GPR_U32(ctx, 31, 0x3B37CCu);
    ctx->pc = 0x3B37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B37C4u;
    // 0x3b37c8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B37C4u, 0x3B37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B37CCu;
label_3b37cc:
    // 0x3b37cc: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3b37ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3b37d0:
    // 0x3b37d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b37d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b37d4:
    // 0x3b37d4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b37d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b37d8:
    // 0x3b37d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b37dc:
    // 0x3b37dc: 0xc0f15f6  jal         func_3C57D8
label_3b37e0:
    if (ctx->pc == 0x3B37E0u) {
        ctx->pc = 0x3B37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37DCu;
        // 0x3b37e0: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37E4u;
        goto label_3b37e4;
    }
    ctx->pc = 0x3B37DCu;
    SET_GPR_U32(ctx, 31, 0x3B37E4u);
    ctx->pc = 0x3B37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B37DCu;
    // 0x3b37e0: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B37DCu, 0x3B37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B37E4u;
label_3b37e4:
    // 0x3b37e4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3b37e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3b37e8:
    // 0x3b37e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b37e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b37ec:
    // 0x3b37ec: 0xc1073cc  jal         func_41CF30
label_3b37f0:
    if (ctx->pc == 0x3B37F0u) {
        ctx->pc = 0x3B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37ECu;
        // 0x3b37f0: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37F4u;
        goto label_3b37f4;
    }
    ctx->pc = 0x3B37ECu;
    SET_GPR_U32(ctx, 31, 0x3B37F4u);
    ctx->pc = 0x3B37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B37ECu;
    // 0x3b37f0: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B37ECu, 0x3B37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B37F4u;
label_3b37f4:
    // 0x3b37f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b37f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b37f8:
    // 0x3b37f8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_3b37fc:
    if (ctx->pc == 0x3B37FCu) {
        ctx->pc = 0x3B37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37F8u;
        // 0x3b37fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3800u;
        goto label_3b3800;
    }
    ctx->pc = 0x3B37F8u;
    {
        const bool branch_taken_0x3b37f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37F8u;
        // 0x3b37fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b37f8) {
            ctx->pc = 0x3B3914u;
            goto label_3b3914;
        }
    }
    ctx->pc = 0x3B3800u;
label_3b3800:
    // 0x3b3800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b3800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b3804:
    // 0x3b3804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b3804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b3808:
    // 0x3b3808: 0x26d10010  addiu       $s1, $s6, 0x10
    ctx->pc = 0x3b3808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_3b380c:
    // 0x3b380c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b3810:
    // 0x3b3810: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b3810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b3814:
    // 0x3b3814: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b3814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b3818:
    // 0x3b3818: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3b3818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3b381c:
    // 0x3b381c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3820:
    // 0x3b3820: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b3820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b3824:
    // 0x3b3824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b3824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3828:
    // 0x3b3828: 0xe7d60008  swc1        $f22, 0x8($fp)
    ctx->pc = 0x3b3828u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3b382c:
    // 0x3b382c: 0xe7d4000c  swc1        $f20, 0xC($fp)
    ctx->pc = 0x3b382cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3830:
    // 0x3b3830: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b3830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b3834:
    // 0x3b3834: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b3834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b3838:
    // 0x3b3838: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b3838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b383c:
    // 0x3b383c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b383cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3840:
    // 0x3b3840: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b3840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b3844:
    // 0x3b3844: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b3844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b3848:
    // 0x3b3848: 0xc136b18  jal         func_4DAC60
label_3b384c:
    if (ctx->pc == 0x3B384Cu) {
        ctx->pc = 0x3B384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3848u;
        // 0x3b384c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3850u;
        goto label_3b3850;
    }
    ctx->pc = 0x3B3848u;
    SET_GPR_U32(ctx, 31, 0x3B3850u);
    ctx->pc = 0x3B384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3848u;
    // 0x3b384c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3848u, 0x3B3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3850u;
label_3b3850:
    // 0x3b3850: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3854:
    // 0x3b3854: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3b3854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b3858:
    // 0x3b3858: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3b3858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3b385c:
    // 0x3b385c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3b385cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3b3860:
    // 0x3b3860: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b3860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b3864:
    // 0x3b3864: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b3864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b3868:
    // 0x3b3868: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b386c:
    // 0x3b386c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b386cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b3870:
    // 0x3b3870: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3b3870u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_3b3874:
    // 0x3b3874: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b3874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b3878:
    // 0x3b3878: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b3878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b387c:
    // 0x3b387c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b387cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3880:
    // 0x3b3880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b3880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b3884:
    // 0x3b3884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b3884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3888:
    // 0x3b3888: 0xc0f16c0  jal         func_3C5B00
label_3b388c:
    if (ctx->pc == 0x3B388Cu) {
        ctx->pc = 0x3B388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3888u;
        // 0x3b388c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3890u;
        goto label_3b3890;
    }
    ctx->pc = 0x3B3888u;
    SET_GPR_U32(ctx, 31, 0x3B3890u);
    ctx->pc = 0x3B388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3888u;
    // 0x3b388c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B3888u, 0x3B3890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3890u;
label_3b3890:
    // 0x3b3890: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3b3890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3b3894:
    // 0x3b3894: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b3894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b3898:
    // 0x3b3898: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b3898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b389c:
    // 0x3b389c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b389cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b38a0:
    // 0x3b38a0: 0xe7d60008  swc1        $f22, 0x8($fp)
    ctx->pc = 0x3b38a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3b38a4:
    // 0x3b38a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b38a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b38a8:
    // 0x3b38a8: 0xe7d4000c  swc1        $f20, 0xC($fp)
    ctx->pc = 0x3b38a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b38ac:
    // 0x3b38ac: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b38acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b38b0:
    // 0x3b38b0: 0xc136b18  jal         func_4DAC60
label_3b38b4:
    if (ctx->pc == 0x3B38B4u) {
        ctx->pc = 0x3B38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38B0u;
        // 0x3b38b4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B38B8u;
        goto label_3b38b8;
    }
    ctx->pc = 0x3B38B0u;
    SET_GPR_U32(ctx, 31, 0x3B38B8u);
    ctx->pc = 0x3B38B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38B0u;
    // 0x3b38b4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B38B0u, 0x3B38B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38B8u;
label_3b38b8:
    // 0x3b38b8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b38b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b38bc:
    // 0x3b38bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b38bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b38c0:
    // 0x3b38c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b38c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b38c4:
    // 0x3b38c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b38c8:
    // 0x3b38c8: 0xc136b24  jal         func_4DAC90
label_3b38cc:
    if (ctx->pc == 0x3B38CCu) {
        ctx->pc = 0x3B38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38C8u;
        // 0x3b38cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B38D0u;
        goto label_3b38d0;
    }
    ctx->pc = 0x3B38C8u;
    SET_GPR_U32(ctx, 31, 0x3B38D0u);
    ctx->pc = 0x3B38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38C8u;
    // 0x3b38cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B38C8u, 0x3B38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38D0u;
label_3b38d0:
    // 0x3b38d0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b38d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b38d4:
    // 0x3b38d4: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b38d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b38d8:
    // 0x3b38d8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3b38d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3b38dc:
    // 0x3b38dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b38dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b38e0:
    // 0x3b38e0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b38e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b38e4:
    // 0x3b38e4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b38e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b38e8:
    // 0x3b38e8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b38e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b38ec:
    // 0x3b38ec: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3b38ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3b38f0:
    // 0x3b38f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b38f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b38f4:
    // 0x3b38f4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b38f8:
    // 0x3b38f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b38f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b38fc:
    // 0x3b38fc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b38fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3900:
    // 0x3b3900: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3b3900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3b3904:
    // 0x3b3904: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b3904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b3908:
    // 0x3b3908: 0xc0f16c0  jal         func_3C5B00
label_3b390c:
    if (ctx->pc == 0x3B390Cu) {
        ctx->pc = 0x3B390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3908u;
        // 0x3b390c: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3910u;
        goto label_3b3910;
    }
    ctx->pc = 0x3B3908u;
    SET_GPR_U32(ctx, 31, 0x3B3910u);
    ctx->pc = 0x3B390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3908u;
    // 0x3b390c: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B3908u, 0x3B3910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3910u;
label_3b3910:
    // 0x3b3910: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b3910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b3914:
    // 0x3b3914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b3914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b3918:
    // 0x3b3918: 0xc1073cc  jal         func_41CF30
label_3b391c:
    if (ctx->pc == 0x3B391Cu) {
        ctx->pc = 0x3B391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3918u;
        // 0x3b391c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3920u;
        goto label_3b3920;
    }
    ctx->pc = 0x3B3918u;
    SET_GPR_U32(ctx, 31, 0x3B3920u);
    ctx->pc = 0x3B391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3918u;
    // 0x3b391c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B3918u, 0x3B3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3920u;
label_3b3920:
    // 0x3b3920: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b3920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b3924:
    // 0x3b3924: 0x144001be  bnez        $v0, . + 4 + (0x1BE << 2)
label_3b3928:
    if (ctx->pc == 0x3B3928u) {
        ctx->pc = 0x3B3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3924u;
        // 0x3b3928: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B392Cu;
        goto label_3b392c;
    }
    ctx->pc = 0x3B3924u;
    {
        const bool branch_taken_0x3b3924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3924u;
        // 0x3b3928: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3924) {
            ctx->pc = 0x3B4020u;
            goto label_3b4020;
        }
    }
    ctx->pc = 0x3B392Cu;
label_3b392c:
    // 0x3b392c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3b392cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3b3930:
    // 0x3b3930: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b3930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b3934:
    // 0x3b3934: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3b3934u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3b3938:
    // 0x3b3938: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b3938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b393c:
    // 0x3b393c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b3940:
    // 0x3b3940: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3b3940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3b3944:
    // 0x3b3944: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b3944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b3948:
    // 0x3b3948: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b3948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b394c:
    // 0x3b394c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b394cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b3950:
    // 0x3b3950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3954:
    // 0x3b3954: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3954u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3958:
    // 0x3b3958: 0xc0cd518  jal         func_335460
label_3b395c:
    if (ctx->pc == 0x3B395Cu) {
        ctx->pc = 0x3B395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3958u;
        // 0x3b395c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3960u;
        goto label_3b3960;
    }
    ctx->pc = 0x3B3958u;
    SET_GPR_U32(ctx, 31, 0x3B3960u);
    ctx->pc = 0x3B395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3958u;
    // 0x3b395c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3958u, 0x3B3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3960u;
label_3b3960:
    // 0x3b3960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b3960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b3964:
    // 0x3b3964: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3b3964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3b3968:
    // 0x3b3968: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x3b3968u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b396c:
    // 0x3b396c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3970:
    // 0x3b3970: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3974:
    // 0x3b3974: 0xc0cd518  jal         func_335460
label_3b3978:
    if (ctx->pc == 0x3B3978u) {
        ctx->pc = 0x3B3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3974u;
        // 0x3b3978: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B397Cu;
        goto label_3b397c;
    }
    ctx->pc = 0x3B3974u;
    SET_GPR_U32(ctx, 31, 0x3B397Cu);
    ctx->pc = 0x3B3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3974u;
    // 0x3b3978: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3974u, 0x3B397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B397Cu;
label_3b397c:
    // 0x3b397c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b3980:
    // 0x3b3980: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3b3980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3b3984:
    // 0x3b3984: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3988:
    // 0x3b3988: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b3988u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3b398c:
    // 0x3b398c: 0x46180502  mul.s       $f20, $f0, $f24
    ctx->pc = 0x3b398cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3990:
    // 0x3b3990: 0xc0cd518  jal         func_335460
label_3b3994:
    if (ctx->pc == 0x3B3994u) {
        ctx->pc = 0x3B3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3990u;
        // 0x3b3994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3998u;
        goto label_3b3998;
    }
    ctx->pc = 0x3B3990u;
    SET_GPR_U32(ctx, 31, 0x3B3998u);
    ctx->pc = 0x3B3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3990u;
    // 0x3b3994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3990u, 0x3B3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3998u;
label_3b3998:
    // 0x3b3998: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b3998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b399c:
    // 0x3b399c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3b399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3b39a0:
    // 0x3b39a0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x3b39a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b39a4:
    // 0x3b39a4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3b39a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b39a8:
    // 0x3b39a8: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b39a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b39ac:
    // 0x3b39ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b39acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b39b0:
    // 0x3b39b0: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b39b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b39b4:
    // 0x3b39b4: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3b39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3b39b8:
    // 0x3b39b8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b39b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b39bc:
    // 0x3b39bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b39c0:
    // 0x3b39c0: 0xe619000c  swc1        $f25, 0xC($s0)
    ctx->pc = 0x3b39c0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b39c4:
    // 0x3b39c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b39c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b39c8:
    // 0x3b39c8: 0x3c01bf3c  lui         $at, 0xBF3C
    ctx->pc = 0x3b39c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48956 << 16));
label_3b39cc:
    // 0x3b39cc: 0x3421692f  ori         $at, $at, 0x692F
    ctx->pc = 0x3b39ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26927);
label_3b39d0:
    // 0x3b39d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b39d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b39d4:
    // 0x3b39d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3b39d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3b39d8:
    // 0x3b39d8: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3b39d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b39dc:
    // 0x3b39dc: 0x3c013f12  lui         $at, 0x3F12
    ctx->pc = 0x3b39dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16146 << 16));
label_3b39e0:
    // 0x3b39e0: 0x34211577  ori         $at, $at, 0x1577
    ctx->pc = 0x3b39e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5495);
label_3b39e4:
    // 0x3b39e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b39e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b39e8:
    // 0x3b39e8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b39ec:
    // 0x3b39ec: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3b39ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3b39f0:
    // 0x3b39f0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3b39f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3b39f4:
    // 0x3b39f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b39f8:
    // 0x3b39f8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b39fc:
    // 0x3b39fc: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x3b39fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3b3a00:
    // 0x3b3a00: 0xe7d9000c  swc1        $f25, 0xC($fp)
    ctx->pc = 0x3b3a00u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3a04:
    // 0x3b3a04: 0x3c013a25  lui         $at, 0x3A25
    ctx->pc = 0x3b3a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14885 << 16));
label_3b3a08:
    // 0x3b3a08: 0x34212696  ori         $at, $at, 0x2696
    ctx->pc = 0x3b3a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9878);
label_3b3a0c:
    // 0x3b3a0c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3b3a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3b3a10:
    // 0x3b3a10: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3a14:
    // 0x3b3a14: 0x3c013d81  lui         $at, 0x3D81
    ctx->pc = 0x3b3a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15745 << 16));
label_3b3a18:
    // 0x3b3a18: 0x34217ebb  ori         $at, $at, 0x7EBB
    ctx->pc = 0x3b3a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32443);
label_3b3a1c:
    // 0x3b3a1c: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x3b3a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_3b3a20:
    // 0x3b3a20: 0xc0e911e  jal         func_3A4478
label_3b3a24:
    if (ctx->pc == 0x3B3A24u) {
        ctx->pc = 0x3B3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A20u;
        // 0x3b3a24: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A28u;
        goto label_3b3a28;
    }
    ctx->pc = 0x3B3A20u;
    SET_GPR_U32(ctx, 31, 0x3B3A28u);
    ctx->pc = 0x3B3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A20u;
    // 0x3b3a24: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B3A20u, 0x3B3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A28u;
label_3b3a28:
    // 0x3b3a28: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3b3a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3b3a2c:
    // 0x3b3a2c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3b3a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3b3a30:
    // 0x3b3a30: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x3b3a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_3b3a34:
    // 0x3b3a34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3a38:
    // 0x3b3a38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a3c:
    // 0x3b3a3c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3b3a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3b3a40:
    // 0x3b3a40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b3a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b3a44:
    // 0x3b3a44: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3b3a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3b3a48:
    // 0x3b3a48: 0xc136b30  jal         func_4DACC0
label_3b3a4c:
    if (ctx->pc == 0x3B3A4Cu) {
        ctx->pc = 0x3B3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A48u;
        // 0x3b3a4c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A50u;
        goto label_3b3a50;
    }
    ctx->pc = 0x3B3A48u;
    SET_GPR_U32(ctx, 31, 0x3B3A50u);
    ctx->pc = 0x3B3A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A48u;
    // 0x3b3a4c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3B3A48u, 0x3B3A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A50u;
label_3b3a50:
    // 0x3b3a50: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3a54:
    // 0x3b3a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a58:
    // 0x3b3a58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a5c:
    // 0x3b3a5c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b3a60:
    // 0x3b3a60: 0xc0e90ca  jal         func_3A4328
label_3b3a64:
    if (ctx->pc == 0x3B3A64u) {
        ctx->pc = 0x3B3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A60u;
        // 0x3b3a64: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A68u;
        goto label_3b3a68;
    }
    ctx->pc = 0x3B3A60u;
    SET_GPR_U32(ctx, 31, 0x3B3A68u);
    ctx->pc = 0x3B3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A60u;
    // 0x3b3a64: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B3A60u, 0x3B3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A68u;
label_3b3a68:
    // 0x3b3a68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b3a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b3a6c:
    // 0x3b3a6c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a70:
    // 0x3b3a70: 0xc136b18  jal         func_4DAC60
label_3b3a74:
    if (ctx->pc == 0x3B3A74u) {
        ctx->pc = 0x3B3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A70u;
        // 0x3b3a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A78u;
        goto label_3b3a78;
    }
    ctx->pc = 0x3B3A70u;
    SET_GPR_U32(ctx, 31, 0x3B3A78u);
    ctx->pc = 0x3B3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A70u;
    // 0x3b3a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3A70u, 0x3B3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A78u;
label_3b3a78:
    // 0x3b3a78: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3a7c:
    // 0x3b3a7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3b3a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b3a80:
    // 0x3b3a80: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x3b3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
label_3b3a84:
    // 0x3b3a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a88:
    // 0x3b3a88: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3a8c:
    // 0x3b3a8c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3b3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3b3a90:
    // 0x3b3a90: 0x248422e0  addiu       $a0, $a0, 0x22E0
    ctx->pc = 0x3b3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8928));
label_3b3a94:
    // 0x3b3a94: 0xc0e94fc  jal         func_3A53F0
label_3b3a98:
    if (ctx->pc == 0x3B3A98u) {
        ctx->pc = 0x3B3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A94u;
        // 0x3b3a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A9Cu;
        goto label_3b3a9c;
    }
    ctx->pc = 0x3B3A94u;
    SET_GPR_U32(ctx, 31, 0x3B3A9Cu);
    ctx->pc = 0x3B3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A94u;
    // 0x3b3a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B3A94u, 0x3B3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A9Cu;
label_3b3a9c:
    // 0x3b3a9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b3a9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3aa0:
    // 0x3b3aa0: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3b3aa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3b3aa4:
    // 0x3b3aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3aa8:
    // 0x3b3aa8: 0xc0cd518  jal         func_335460
label_3b3aac:
    if (ctx->pc == 0x3B3AACu) {
        ctx->pc = 0x3B3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AA8u;
        // 0x3b3aac: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AB0u;
        goto label_3b3ab0;
    }
    ctx->pc = 0x3B3AA8u;
    SET_GPR_U32(ctx, 31, 0x3B3AB0u);
    ctx->pc = 0x3B3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AA8u;
    // 0x3b3aac: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3AA8u, 0x3B3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3AB0u;
label_3b3ab0:
    // 0x3b3ab0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b3ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b3ab4:
    // 0x3b3ab4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b3ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b3ab8:
    // 0x3b3ab8: 0xc136b24  jal         func_4DAC90
label_3b3abc:
    if (ctx->pc == 0x3B3ABCu) {
        ctx->pc = 0x3B3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AB8u;
        // 0x3b3abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AC0u;
        goto label_3b3ac0;
    }
    ctx->pc = 0x3B3AB8u;
    SET_GPR_U32(ctx, 31, 0x3B3AC0u);
    ctx->pc = 0x3B3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AB8u;
    // 0x3b3abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B3AB8u, 0x3B3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3AC0u;
label_3b3ac0:
    // 0x3b3ac0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3ac4:
    // 0x3b3ac4: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3b3ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b3ac8:
    // 0x3b3ac8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b3ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3acc:
    // 0x3b3acc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b3accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ad0:
    // 0x3b3ad0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b3ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b3ad4:
    // 0x3b3ad4: 0xc0ea158  jal         func_3A8560
label_3b3ad8:
    if (ctx->pc == 0x3B3AD8u) {
        ctx->pc = 0x3B3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AD4u;
        // 0x3b3ad8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3ADCu;
        goto label_3b3adc;
    }
    ctx->pc = 0x3B3AD4u;
    SET_GPR_U32(ctx, 31, 0x3B3ADCu);
    ctx->pc = 0x3B3AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AD4u;
    // 0x3b3ad8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3AD4u, 0x3B3ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3ADCu;
label_3b3adc:
    // 0x3b3adc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3b3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b3ae0:
    // 0x3b3ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b3ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ae4:
    // 0x3b3ae4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3b3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_3b3ae8:
    // 0x3b3ae8: 0xc0ea158  jal         func_3A8560
label_3b3aec:
    if (ctx->pc == 0x3B3AECu) {
        ctx->pc = 0x3B3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AE8u;
        // 0x3b3aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AF0u;
        goto label_3b3af0;
    }
    ctx->pc = 0x3B3AE8u;
    SET_GPR_U32(ctx, 31, 0x3B3AF0u);
    ctx->pc = 0x3B3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AE8u;
    // 0x3b3aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3AE8u, 0x3B3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3AF0u;
label_3b3af0:
    // 0x3b3af0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3b3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3b3af4:
    // 0x3b3af4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b3af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3af8:
    // 0x3b3af8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b3af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b3afc:
    // 0x3b3afc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b3afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b3b00:
    // 0x3b3b00: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b3b04:
    // 0x3b3b04: 0x40f809  jalr        $v0
label_3b3b08:
    if (ctx->pc == 0x3B3B08u) {
        ctx->pc = 0x3B3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B04u;
        // 0x3b3b08: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B0Cu;
        goto label_3b3b0c;
    }
    ctx->pc = 0x3B3B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3B0Cu);
        ctx->pc = 0x3B3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B04u;
        // 0x3b3b08: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3B04u, 0x3B3B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3B0Cu;
label_3b3b0c:
    // 0x3b3b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b10:
    // 0x3b3b10: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3b14:
    // 0x3b3b14: 0xc0cd518  jal         func_335460
label_3b3b18:
    if (ctx->pc == 0x3B3B18u) {
        ctx->pc = 0x3B3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B14u;
        // 0x3b3b18: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B1Cu;
        goto label_3b3b1c;
    }
    ctx->pc = 0x3B3B14u;
    SET_GPR_U32(ctx, 31, 0x3B3B1Cu);
    ctx->pc = 0x3B3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B14u;
    // 0x3b3b18: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3B14u, 0x3B3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B1Cu;
label_3b3b1c:
    // 0x3b3b1c: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x3b3b1cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3b20:
    // 0x3b3b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b24:
    // 0x3b3b24: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3b28:
    // 0x3b3b28: 0xc0cd518  jal         func_335460
label_3b3b2c:
    if (ctx->pc == 0x3B3B2Cu) {
        ctx->pc = 0x3B3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B28u;
        // 0x3b3b2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B30u;
        goto label_3b3b30;
    }
    ctx->pc = 0x3B3B28u;
    SET_GPR_U32(ctx, 31, 0x3B3B30u);
    ctx->pc = 0x3B3B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B28u;
    // 0x3b3b2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3B28u, 0x3B3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B30u;
label_3b3b30:
    // 0x3b3b30: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3b30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3b34:
    // 0x3b3b34: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b3b34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3b3b38:
    // 0x3b3b38: 0x46180502  mul.s       $f20, $f0, $f24
    ctx->pc = 0x3b3b38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3b3c:
    // 0x3b3b3c: 0xc0cd518  jal         func_335460
label_3b3b40:
    if (ctx->pc == 0x3B3B40u) {
        ctx->pc = 0x3B3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B3Cu;
        // 0x3b3b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B44u;
        goto label_3b3b44;
    }
    ctx->pc = 0x3B3B3Cu;
    SET_GPR_U32(ctx, 31, 0x3B3B44u);
    ctx->pc = 0x3B3B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B3Cu;
    // 0x3b3b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3B3Cu, 0x3B3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B44u;
label_3b3b44:
    // 0x3b3b44: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x3b3b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3b48:
    // 0x3b3b48: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3b3b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3b3b4c:
    // 0x3b3b4c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x3b3b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_3b3b50:
    // 0x3b3b50: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b54:
    // 0x3b3b54: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3b3b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3b3b58:
    // 0x3b3b58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b5c:
    // 0x3b3b5c: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b3b5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b3b60:
    // 0x3b3b60: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b3b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b3b64:
    // 0x3b3b64: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b3b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b3b68:
    // 0x3b3b68: 0xe619000c  swc1        $f25, 0xC($s0)
    ctx->pc = 0x3b3b68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b3b6c:
    // 0x3b3b6c: 0x3c013f0a  lui         $at, 0x3F0A
    ctx->pc = 0x3b3b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16138 << 16));
label_3b3b70:
    // 0x3b3b70: 0x34218976  ori         $at, $at, 0x8976
    ctx->pc = 0x3b3b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35190);
label_3b3b74:
    // 0x3b3b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b3b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3b78:
    // 0x3b3b78: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3b78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3b7c:
    // 0x3b3b7c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b3b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b3b80:
    // 0x3b3b80: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b3b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b3b84:
    // 0x3b3b84: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3b88:
    // 0x3b3b88: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b3b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b3b8c:
    // 0x3b3b8c: 0xe7dc0004  swc1        $f28, 0x4($fp)
    ctx->pc = 0x3b3b8cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_3b3b90:
    // 0x3b3b90: 0xe7dd0008  swc1        $f29, 0x8($fp)
    ctx->pc = 0x3b3b90u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3b3b94:
    // 0x3b3b94: 0xe7d9000c  swc1        $f25, 0xC($fp)
    ctx->pc = 0x3b3b94u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3b98:
    // 0x3b3b98: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3b9c:
    // 0x3b3b9c: 0xc0e911e  jal         func_3A4478
label_3b3ba0:
    if (ctx->pc == 0x3B3BA0u) {
        ctx->pc = 0x3B3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B9Cu;
        // 0x3b3ba0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BA4u;
        goto label_3b3ba4;
    }
    ctx->pc = 0x3B3B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B3BA4u);
    ctx->pc = 0x3B3BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B9Cu;
    // 0x3b3ba0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B3B9Cu, 0x3B3BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3BA4u;
label_3b3ba4:
    // 0x3b3ba4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3ba8:
    // 0x3b3ba8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3bac:
    // 0x3b3bac: 0xc136b30  jal         func_4DACC0
label_3b3bb0:
    if (ctx->pc == 0x3B3BB0u) {
        ctx->pc = 0x3B3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BACu;
        // 0x3b3bb0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BB4u;
        goto label_3b3bb4;
    }
    ctx->pc = 0x3B3BACu;
    SET_GPR_U32(ctx, 31, 0x3B3BB4u);
    ctx->pc = 0x3B3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3BACu;
    // 0x3b3bb0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3B3BACu, 0x3B3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3BB4u;
label_3b3bb4:
    // 0x3b3bb4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3bb8:
    // 0x3b3bb8: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3b3bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_3b3bbc:
    // 0x3b3bbc: 0x265222f8  addiu       $s2, $s2, 0x22F8
    ctx->pc = 0x3b3bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8952));
label_3b3bc0:
    // 0x3b3bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3bc4:
    // 0x3b3bc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b3bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b3bc8:
    // 0x3b3bc8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3bcc:
    // 0x3b3bcc: 0xc0e90ca  jal         func_3A4328
label_3b3bd0:
    if (ctx->pc == 0x3B3BD0u) {
        ctx->pc = 0x3B3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BCCu;
        // 0x3b3bd0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BD4u;
        goto label_3b3bd4;
    }
    ctx->pc = 0x3B3BCCu;
    SET_GPR_U32(ctx, 31, 0x3B3BD4u);
    ctx->pc = 0x3B3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3BCCu;
    // 0x3b3bd0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B3BCCu, 0x3B3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3BD4u;
label_3b3bd4:
    // 0x3b3bd4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b3bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b3bd8:
    // 0x3b3bd8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3bdc:
    // 0x3b3bdc: 0xc136b18  jal         func_4DAC60
label_3b3be0:
    if (ctx->pc == 0x3B3BE0u) {
        ctx->pc = 0x3B3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BDCu;
        // 0x3b3be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BE4u;
        goto label_3b3be4;
    }
    ctx->pc = 0x3B3BDCu;
    SET_GPR_U32(ctx, 31, 0x3B3BE4u);
    ctx->pc = 0x3B3BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3BDCu;
    // 0x3b3be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3BDCu, 0x3B3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3BE4u;
label_3b3be4:
    // 0x3b3be4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3be8:
    // 0x3b3be8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3bec:
    // 0x3b3bec: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x3b3becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3b3bf0:
    // 0x3b3bf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b3bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b3bf4:
    // 0x3b3bf4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3bf8:
    // 0x3b3bf8: 0xc0e94fc  jal         func_3A53F0
label_3b3bfc:
    if (ctx->pc == 0x3B3BFCu) {
        ctx->pc = 0x3B3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BF8u;
        // 0x3b3bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C00u;
        goto label_3b3c00;
    }
    ctx->pc = 0x3B3BF8u;
    SET_GPR_U32(ctx, 31, 0x3B3C00u);
    ctx->pc = 0x3B3BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3BF8u;
    // 0x3b3bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B3BF8u, 0x3B3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C00u;
label_3b3c00:
    // 0x3b3c00: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3b3c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3b3c04:
    // 0x3b3c04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b3c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b3c08:
    // 0x3b3c08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b3c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b3c0c:
    // 0x3b3c0c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b3c0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c10:
    // 0x3b3c10: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b3c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b3c14:
    // 0x3b3c14: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b3c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b3c18:
    // 0x3b3c18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b3c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b3c1c:
    // 0x3b3c1c: 0xc0cd518  jal         func_335460
label_3b3c20:
    if (ctx->pc == 0x3B3C20u) {
        ctx->pc = 0x3B3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C1Cu;
        // 0x3b3c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C24u;
        goto label_3b3c24;
    }
    ctx->pc = 0x3B3C1Cu;
    SET_GPR_U32(ctx, 31, 0x3B3C24u);
    ctx->pc = 0x3B3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C1Cu;
    // 0x3b3c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3C1Cu, 0x3B3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C24u;
label_3b3c24:
    // 0x3b3c24: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b3c28:
    // 0x3b3c28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c2c:
    // 0x3b3c2c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b3c30:
    // 0x3b3c30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c34:
    // 0x3b3c34: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x3b3c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_3b3c38:
    // 0x3b3c38: 0xe7d9000c  swc1        $f25, 0xC($fp)
    ctx->pc = 0x3b3c38u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3c3c:
    // 0x3b3c3c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3c40:
    // 0x3b3c40: 0xc0e911e  jal         func_3A4478
label_3b3c44:
    if (ctx->pc == 0x3B3C44u) {
        ctx->pc = 0x3B3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C40u;
        // 0x3b3c44: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C48u;
        goto label_3b3c48;
    }
    ctx->pc = 0x3B3C40u;
    SET_GPR_U32(ctx, 31, 0x3B3C48u);
    ctx->pc = 0x3B3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C40u;
    // 0x3b3c44: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B3C40u, 0x3B3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C48u;
label_3b3c48:
    // 0x3b3c48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3c4c:
    // 0x3b3c4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b3c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c50:
    // 0x3b3c50: 0xc136b30  jal         func_4DACC0
label_3b3c54:
    if (ctx->pc == 0x3B3C54u) {
        ctx->pc = 0x3B3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C50u;
        // 0x3b3c54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C58u;
        goto label_3b3c58;
    }
    ctx->pc = 0x3B3C50u;
    SET_GPR_U32(ctx, 31, 0x3B3C58u);
    ctx->pc = 0x3B3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C50u;
    // 0x3b3c54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3B3C50u, 0x3B3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C58u;
label_3b3c58:
    // 0x3b3c58: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3c58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3c5c:
    // 0x3b3c5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b3c60:
    // 0x3b3c60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b3c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c64:
    // 0x3b3c64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c68:
    // 0x3b3c68: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b3c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b3c6c:
    // 0x3b3c6c: 0xc136b18  jal         func_4DAC60
label_3b3c70:
    if (ctx->pc == 0x3B3C70u) {
        ctx->pc = 0x3B3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C6Cu;
        // 0x3b3c70: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C74u;
        goto label_3b3c74;
    }
    ctx->pc = 0x3B3C6Cu;
    SET_GPR_U32(ctx, 31, 0x3B3C74u);
    ctx->pc = 0x3B3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C6Cu;
    // 0x3b3c70: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3C6Cu, 0x3B3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C74u;
label_3b3c74:
    // 0x3b3c74: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3c78:
    // 0x3b3c78: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x3b3c78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
label_3b3c7c:
    // 0x3b3c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c80:
    // 0x3b3c80: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x3b3c80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
label_3b3c84:
    // 0x3b3c84: 0xc0cd518  jal         func_335460
label_3b3c88:
    if (ctx->pc == 0x3B3C88u) {
        ctx->pc = 0x3B3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C84u;
        // 0x3b3c88: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C8Cu;
        goto label_3b3c8c;
    }
    ctx->pc = 0x3B3C84u;
    SET_GPR_U32(ctx, 31, 0x3B3C8Cu);
    ctx->pc = 0x3B3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C84u;
    // 0x3b3c88: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3C84u, 0x3B3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C8Cu;
label_3b3c8c:
    // 0x3b3c8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b3c8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b3c90:
    // 0x3b3c90: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c94:
    // 0x3b3c94: 0xc136b24  jal         func_4DAC90
label_3b3c98:
    if (ctx->pc == 0x3B3C98u) {
        ctx->pc = 0x3B3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C94u;
        // 0x3b3c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C9Cu;
        goto label_3b3c9c;
    }
    ctx->pc = 0x3B3C94u;
    SET_GPR_U32(ctx, 31, 0x3B3C9Cu);
    ctx->pc = 0x3B3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C94u;
    // 0x3b3c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B3C94u, 0x3B3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C9Cu;
label_3b3c9c:
    // 0x3b3c9c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3ca0:
    // 0x3b3ca0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b3ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ca4:
    // 0x3b3ca4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b3ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ca8:
    // 0x3b3ca8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b3ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b3cac:
    // 0x3b3cac: 0xc0ea158  jal         func_3A8560
label_3b3cb0:
    if (ctx->pc == 0x3B3CB0u) {
        ctx->pc = 0x3B3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CACu;
        // 0x3b3cb0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CB4u;
        goto label_3b3cb4;
    }
    ctx->pc = 0x3B3CACu;
    SET_GPR_U32(ctx, 31, 0x3B3CB4u);
    ctx->pc = 0x3B3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CACu;
    // 0x3b3cb0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3CACu, 0x3B3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CB4u;
label_3b3cb4:
    // 0x3b3cb4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3b3cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3b3cb8:
    // 0x3b3cb8: 0xc0ea158  jal         func_3A8560
label_3b3cbc:
    if (ctx->pc == 0x3B3CBCu) {
        ctx->pc = 0x3B3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CB8u;
        // 0x3b3cbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CC0u;
        goto label_3b3cc0;
    }
    ctx->pc = 0x3B3CB8u;
    SET_GPR_U32(ctx, 31, 0x3B3CC0u);
    ctx->pc = 0x3B3CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CB8u;
    // 0x3b3cbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3CB8u, 0x3B3CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CC0u;
label_3b3cc0:
    // 0x3b3cc0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3b3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3b3cc4:
    // 0x3b3cc4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b3cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3cc8:
    // 0x3b3cc8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b3cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b3ccc:
    // 0x3b3ccc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b3cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b3cd0:
    // 0x3b3cd0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b3cd4:
    // 0x3b3cd4: 0x40f809  jalr        $v0
label_3b3cd8:
    if (ctx->pc == 0x3B3CD8u) {
        ctx->pc = 0x3B3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CD4u;
        // 0x3b3cd8: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CDCu;
        goto label_3b3cdc;
    }
    ctx->pc = 0x3B3CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3CDCu);
        ctx->pc = 0x3B3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CD4u;
        // 0x3b3cd8: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3CD4u, 0x3B3CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3CDCu;
label_3b3cdc:
    // 0x3b3cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ce0:
    // 0x3b3ce0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3ce4:
    // 0x3b3ce4: 0xc0cd518  jal         func_335460
label_3b3ce8:
    if (ctx->pc == 0x3B3CE8u) {
        ctx->pc = 0x3B3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CE4u;
        // 0x3b3ce8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CECu;
        goto label_3b3cec;
    }
    ctx->pc = 0x3B3CE4u;
    SET_GPR_U32(ctx, 31, 0x3B3CECu);
    ctx->pc = 0x3B3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CE4u;
    // 0x3b3ce8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3CE4u, 0x3B3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CECu;
label_3b3cec:
    // 0x3b3cec: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x3b3cecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3cf0:
    // 0x3b3cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3cf4:
    // 0x3b3cf4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3cf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3cf8:
    // 0x3b3cf8: 0xc0cd518  jal         func_335460
label_3b3cfc:
    if (ctx->pc == 0x3B3CFCu) {
        ctx->pc = 0x3B3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CF8u;
        // 0x3b3cfc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D00u;
        goto label_3b3d00;
    }
    ctx->pc = 0x3B3CF8u;
    SET_GPR_U32(ctx, 31, 0x3B3D00u);
    ctx->pc = 0x3B3CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CF8u;
    // 0x3b3cfc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3CF8u, 0x3B3D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D00u;
label_3b3d00:
    // 0x3b3d00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3d04:
    // 0x3b3d04: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b3d04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3b3d08:
    // 0x3b3d08: 0x46180502  mul.s       $f20, $f0, $f24
    ctx->pc = 0x3b3d08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3d0c:
    // 0x3b3d0c: 0xc0cd518  jal         func_335460
label_3b3d10:
    if (ctx->pc == 0x3B3D10u) {
        ctx->pc = 0x3B3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D0Cu;
        // 0x3b3d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D14u;
        goto label_3b3d14;
    }
    ctx->pc = 0x3B3D0Cu;
    SET_GPR_U32(ctx, 31, 0x3B3D14u);
    ctx->pc = 0x3B3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D0Cu;
    // 0x3b3d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3D0Cu, 0x3B3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D14u;
label_3b3d14:
    // 0x3b3d14: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x3b3d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3d18:
    // 0x3b3d18: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b3d18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b3d1c:
    // 0x3b3d1c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b3d1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b3d20:
    // 0x3b3d20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3d24:
    // 0x3b3d24: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x3b3d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
label_3b3d28:
    // 0x3b3d28: 0x3421ff58  ori         $at, $at, 0xFF58
    ctx->pc = 0x3b3d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65368);
label_3b3d2c:
    // 0x3b3d2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3b3d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3b3d30:
    // 0x3b3d30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3d34:
    // 0x3b3d34: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b3d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b3d38:
    // 0x3b3d38: 0xe619000c  swc1        $f25, 0xC($s0)
    ctx->pc = 0x3b3d38u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b3d3c:
    // 0x3b3d3c: 0x3c01bb8e  lui         $at, 0xBB8E
    ctx->pc = 0x3b3d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48014 << 16));
label_3b3d40:
    // 0x3b3d40: 0x3421de55  ori         $at, $at, 0xDE55
    ctx->pc = 0x3b3d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56917);
label_3b3d44:
    // 0x3b3d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b3d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3d48:
    // 0x3b3d48: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3d4c:
    // 0x3b3d4c: 0x3c013f3c  lui         $at, 0x3F3C
    ctx->pc = 0x3b3d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16188 << 16));
label_3b3d50:
    // 0x3b3d50: 0x34219321  ori         $at, $at, 0x9321
    ctx->pc = 0x3b3d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37665);
label_3b3d54:
    // 0x3b3d54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3b3d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3b3d58:
    // 0x3b3d58: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3d5c:
    // 0x3b3d5c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b3d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b3d60:
    // 0x3b3d60: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x3b3d60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3b3d64:
    // 0x3b3d64: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3b3d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b3d68:
    // 0x3b3d68: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3b3d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3b3d6c:
    // 0x3b3d6c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3b3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3b3d70:
    // 0x3b3d70: 0x3c013bf1  lui         $at, 0x3BF1
    ctx->pc = 0x3b3d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15345 << 16));
label_3b3d74:
    // 0x3b3d74: 0x3421d3ed  ori         $at, $at, 0xD3ED
    ctx->pc = 0x3b3d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54253);
label_3b3d78:
    // 0x3b3d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3b3d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b3d7c:
    // 0x3b3d7c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3d80:
    // 0x3b3d80: 0x3c013f12  lui         $at, 0x3F12
    ctx->pc = 0x3b3d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16146 << 16));
label_3b3d84:
    // 0x3b3d84: 0x34213055  ori         $at, $at, 0x3055
    ctx->pc = 0x3b3d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12373);
label_3b3d88:
    // 0x3b3d88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b3d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b3d8c:
    // 0x3b3d8c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b3d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b3d90:
    // 0x3b3d90: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3d94:
    // 0x3b3d94: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x3b3d94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b3d98:
    // 0x3b3d98: 0xe7c20004  swc1        $f2, 0x4($fp)
    ctx->pc = 0x3b3d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_3b3d9c:
    // 0x3b3d9c: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x3b3d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3b3da0:
    // 0x3b3da0: 0xe7d9000c  swc1        $f25, 0xC($fp)
    ctx->pc = 0x3b3da0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3da4:
    // 0x3b3da4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3da8:
    // 0x3b3da8: 0xc0e911e  jal         func_3A4478
label_3b3dac:
    if (ctx->pc == 0x3B3DACu) {
        ctx->pc = 0x3B3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DA8u;
        // 0x3b3dac: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3DB0u;
        goto label_3b3db0;
    }
    ctx->pc = 0x3B3DA8u;
    SET_GPR_U32(ctx, 31, 0x3B3DB0u);
    ctx->pc = 0x3B3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DA8u;
    // 0x3b3dac: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B3DA8u, 0x3B3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DB0u;
label_3b3db0:
    // 0x3b3db0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3db4:
    // 0x3b3db4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3db8:
    // 0x3b3db8: 0xc136b30  jal         func_4DACC0
label_3b3dbc:
    if (ctx->pc == 0x3B3DBCu) {
        ctx->pc = 0x3B3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DB8u;
        // 0x3b3dbc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3DC0u;
        goto label_3b3dc0;
    }
    ctx->pc = 0x3B3DB8u;
    SET_GPR_U32(ctx, 31, 0x3B3DC0u);
    ctx->pc = 0x3B3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DB8u;
    // 0x3b3dbc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3B3DB8u, 0x3B3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DC0u;
label_3b3dc0:
    // 0x3b3dc0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3dc4:
    // 0x3b3dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3dc8:
    // 0x3b3dc8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3dcc:
    // 0x3b3dcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b3dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b3dd0:
    // 0x3b3dd0: 0xc0e90ca  jal         func_3A4328
label_3b3dd4:
    if (ctx->pc == 0x3B3DD4u) {
        ctx->pc = 0x3B3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DD0u;
        // 0x3b3dd4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3DD8u;
        goto label_3b3dd8;
    }
    ctx->pc = 0x3B3DD0u;
    SET_GPR_U32(ctx, 31, 0x3B3DD8u);
    ctx->pc = 0x3B3DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DD0u;
    // 0x3b3dd4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B3DD0u, 0x3B3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DD8u;
label_3b3dd8:
    // 0x3b3dd8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b3ddc:
    // 0x3b3ddc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3de0:
    // 0x3b3de0: 0xc136b18  jal         func_4DAC60
label_3b3de4:
    if (ctx->pc == 0x3B3DE4u) {
        ctx->pc = 0x3B3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DE0u;
        // 0x3b3de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3DE8u;
        goto label_3b3de8;
    }
    ctx->pc = 0x3B3DE0u;
    SET_GPR_U32(ctx, 31, 0x3B3DE8u);
    ctx->pc = 0x3B3DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DE0u;
    // 0x3b3de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3DE0u, 0x3B3DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DE8u;
label_3b3de8:
    // 0x3b3de8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3dec:
    // 0x3b3dec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3df0:
    // 0x3b3df0: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x3b3df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3b3df4:
    // 0x3b3df4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b3df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b3df8:
    // 0x3b3df8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3b3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3b3dfc:
    // 0x3b3dfc: 0x248422e0  addiu       $a0, $a0, 0x22E0
    ctx->pc = 0x3b3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8928));
label_3b3e00:
    // 0x3b3e00: 0xc0e94fc  jal         func_3A53F0
label_3b3e04:
    if (ctx->pc == 0x3B3E04u) {
        ctx->pc = 0x3B3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E00u;
        // 0x3b3e04: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E08u;
        goto label_3b3e08;
    }
    ctx->pc = 0x3B3E00u;
    SET_GPR_U32(ctx, 31, 0x3B3E08u);
    ctx->pc = 0x3B3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E00u;
    // 0x3b3e04: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B3E00u, 0x3B3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E08u;
label_3b3e08:
    // 0x3b3e08: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b3e08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e0c:
    // 0x3b3e0c: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3b3e0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3b3e10:
    // 0x3b3e10: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x3b3e10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_3b3e14:
    // 0x3b3e14: 0xc0cd518  jal         func_335460
label_3b3e18:
    if (ctx->pc == 0x3B3E18u) {
        ctx->pc = 0x3B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E14u;
        // 0x3b3e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E1Cu;
        goto label_3b3e1c;
    }
    ctx->pc = 0x3B3E14u;
    SET_GPR_U32(ctx, 31, 0x3B3E1Cu);
    ctx->pc = 0x3B3E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E14u;
    // 0x3b3e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3E14u, 0x3B3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E1Cu;
label_3b3e1c:
    // 0x3b3e1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b3e20:
    // 0x3b3e20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b3e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b3e24:
    // 0x3b3e24: 0xc136b24  jal         func_4DAC90
label_3b3e28:
    if (ctx->pc == 0x3B3E28u) {
        ctx->pc = 0x3B3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E24u;
        // 0x3b3e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E2Cu;
        goto label_3b3e2c;
    }
    ctx->pc = 0x3B3E24u;
    SET_GPR_U32(ctx, 31, 0x3B3E2Cu);
    ctx->pc = 0x3B3E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E24u;
    // 0x3b3e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B3E24u, 0x3B3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E2Cu;
label_3b3e2c:
    // 0x3b3e2c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3e30:
    // 0x3b3e30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b3e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e34:
    // 0x3b3e34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b3e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e38:
    // 0x3b3e38: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b3e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b3e3c:
    // 0x3b3e3c: 0xc0ea158  jal         func_3A8560
label_3b3e40:
    if (ctx->pc == 0x3B3E40u) {
        ctx->pc = 0x3B3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E3Cu;
        // 0x3b3e40: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E44u;
        goto label_3b3e44;
    }
    ctx->pc = 0x3B3E3Cu;
    SET_GPR_U32(ctx, 31, 0x3B3E44u);
    ctx->pc = 0x3B3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E3Cu;
    // 0x3b3e40: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3E3Cu, 0x3B3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E44u;
label_3b3e44:
    // 0x3b3e44: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3b3e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3b3e48:
    // 0x3b3e48: 0xc0ea158  jal         func_3A8560
label_3b3e4c:
    if (ctx->pc == 0x3B3E4Cu) {
        ctx->pc = 0x3B3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E48u;
        // 0x3b3e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E50u;
        goto label_3b3e50;
    }
    ctx->pc = 0x3B3E48u;
    SET_GPR_U32(ctx, 31, 0x3B3E50u);
    ctx->pc = 0x3B3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E48u;
    // 0x3b3e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3E48u, 0x3B3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E50u;
label_3b3e50:
    // 0x3b3e50: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3b3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3b3e54:
    // 0x3b3e54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b3e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e58:
    // 0x3b3e58: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b3e5c:
    // 0x3b3e5c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b3e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b3e60:
    // 0x3b3e60: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b3e64:
    // 0x3b3e64: 0x40f809  jalr        $v0
label_3b3e68:
    if (ctx->pc == 0x3B3E68u) {
        ctx->pc = 0x3B3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E64u;
        // 0x3b3e68: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E6Cu;
        goto label_3b3e6c;
    }
    ctx->pc = 0x3B3E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3E6Cu);
        ctx->pc = 0x3B3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E64u;
        // 0x3b3e68: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E64u, 0x3B3E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3E6Cu;
label_3b3e6c:
    // 0x3b3e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e70:
    // 0x3b3e70: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3e74:
    // 0x3b3e74: 0xc0cd518  jal         func_335460
label_3b3e78:
    if (ctx->pc == 0x3B3E78u) {
        ctx->pc = 0x3B3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E74u;
        // 0x3b3e78: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E7Cu;
        goto label_3b3e7c;
    }
    ctx->pc = 0x3B3E74u;
    SET_GPR_U32(ctx, 31, 0x3B3E7Cu);
    ctx->pc = 0x3B3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E74u;
    // 0x3b3e78: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3E74u, 0x3B3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E7Cu;
label_3b3e7c:
    // 0x3b3e7c: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x3b3e7cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3e80:
    // 0x3b3e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e84:
    // 0x3b3e84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3e88:
    // 0x3b3e88: 0xc0cd518  jal         func_335460
label_3b3e8c:
    if (ctx->pc == 0x3B3E8Cu) {
        ctx->pc = 0x3B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E88u;
        // 0x3b3e8c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E90u;
        goto label_3b3e90;
    }
    ctx->pc = 0x3B3E88u;
    SET_GPR_U32(ctx, 31, 0x3B3E90u);
    ctx->pc = 0x3B3E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E88u;
    // 0x3b3e8c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3E88u, 0x3B3E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E90u;
label_3b3e90:
    // 0x3b3e90: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b3e90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b3e94:
    // 0x3b3e94: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b3e94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3b3e98:
    // 0x3b3e98: 0x46180502  mul.s       $f20, $f0, $f24
    ctx->pc = 0x3b3e98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3e9c:
    // 0x3b3e9c: 0xc0cd518  jal         func_335460
label_3b3ea0:
    if (ctx->pc == 0x3B3EA0u) {
        ctx->pc = 0x3B3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E9Cu;
        // 0x3b3ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3EA4u;
        goto label_3b3ea4;
    }
    ctx->pc = 0x3B3E9Cu;
    SET_GPR_U32(ctx, 31, 0x3B3EA4u);
    ctx->pc = 0x3B3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E9Cu;
    // 0x3b3ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3E9Cu, 0x3B3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3EA4u;
label_3b3ea4:
    // 0x3b3ea4: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x3b3ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b3ea8:
    // 0x3b3ea8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b3eac:
    // 0x3b3eac: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3b3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3b3eb0:
    // 0x3b3eb0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3eb4:
    // 0x3b3eb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b3eb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b3eb8:
    // 0x3b3eb8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ebc:
    // 0x3b3ebc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b3ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b3ec0:
    // 0x3b3ec0: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b3ec0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b3ec4:
    // 0x3b3ec4: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b3ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b3ec8:
    // 0x3b3ec8: 0xe619000c  swc1        $f25, 0xC($s0)
    ctx->pc = 0x3b3ec8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b3ecc:
    // 0x3b3ecc: 0x3c01bfa3  lui         $at, 0xBFA3
    ctx->pc = 0x3b3eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49059 << 16));
label_3b3ed0:
    // 0x3b3ed0: 0x3421e1da  ori         $at, $at, 0xE1DA
    ctx->pc = 0x3b3ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57818);
label_3b3ed4:
    // 0x3b3ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b3ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3ed8:
    // 0x3b3ed8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3ed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3edc:
    // 0x3b3edc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b3edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b3ee0:
    // 0x3b3ee0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b3ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b3ee4:
    // 0x3b3ee4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3ee8:
    // 0x3b3ee8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b3ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b3eec:
    // 0x3b3eec: 0xe7dc0004  swc1        $f28, 0x4($fp)
    ctx->pc = 0x3b3eecu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_3b3ef0:
    // 0x3b3ef0: 0xe7dd0008  swc1        $f29, 0x8($fp)
    ctx->pc = 0x3b3ef0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3b3ef4:
    // 0x3b3ef4: 0xe7d9000c  swc1        $f25, 0xC($fp)
    ctx->pc = 0x3b3ef4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3ef8:
    // 0x3b3ef8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3efc:
    // 0x3b3efc: 0xc0e911e  jal         func_3A4478
label_3b3f00:
    if (ctx->pc == 0x3B3F00u) {
        ctx->pc = 0x3B3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3EFCu;
        // 0x3b3f00: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F04u;
        goto label_3b3f04;
    }
    ctx->pc = 0x3B3EFCu;
    SET_GPR_U32(ctx, 31, 0x3B3F04u);
    ctx->pc = 0x3B3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3EFCu;
    // 0x3b3f00: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B3EFCu, 0x3B3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F04u;
label_3b3f04:
    // 0x3b3f04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3f08:
    // 0x3b3f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f0c:
    // 0x3b3f0c: 0xc136b30  jal         func_4DACC0
label_3b3f10:
    if (ctx->pc == 0x3B3F10u) {
        ctx->pc = 0x3B3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F0Cu;
        // 0x3b3f10: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F14u;
        goto label_3b3f14;
    }
    ctx->pc = 0x3B3F0Cu;
    SET_GPR_U32(ctx, 31, 0x3B3F14u);
    ctx->pc = 0x3B3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F0Cu;
    // 0x3b3f10: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3B3F0Cu, 0x3B3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F14u;
label_3b3f14:
    // 0x3b3f14: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3f18:
    // 0x3b3f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f1c:
    // 0x3b3f1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f20:
    // 0x3b3f20: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b3f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b3f24:
    // 0x3b3f24: 0xc0e90ca  jal         func_3A4328
label_3b3f28:
    if (ctx->pc == 0x3B3F28u) {
        ctx->pc = 0x3B3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F24u;
        // 0x3b3f28: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F2Cu;
        goto label_3b3f2c;
    }
    ctx->pc = 0x3B3F24u;
    SET_GPR_U32(ctx, 31, 0x3B3F2Cu);
    ctx->pc = 0x3B3F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F24u;
    // 0x3b3f28: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B3F24u, 0x3B3F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F2Cu;
label_3b3f2c:
    // 0x3b3f2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b3f30:
    // 0x3b3f30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f34:
    // 0x3b3f34: 0xc136b18  jal         func_4DAC60
label_3b3f38:
    if (ctx->pc == 0x3B3F38u) {
        ctx->pc = 0x3B3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F34u;
        // 0x3b3f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F3Cu;
        goto label_3b3f3c;
    }
    ctx->pc = 0x3B3F34u;
    SET_GPR_U32(ctx, 31, 0x3B3F3Cu);
    ctx->pc = 0x3B3F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F34u;
    // 0x3b3f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B3F34u, 0x3B3F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F3Cu;
label_3b3f3c:
    // 0x3b3f3c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3f40:
    // 0x3b3f40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f44:
    // 0x3b3f44: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x3b3f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3b3f48:
    // 0x3b3f48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b3f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f4c:
    // 0x3b3f4c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b3f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b3f50:
    // 0x3b3f50: 0xc0e94fc  jal         func_3A53F0
label_3b3f54:
    if (ctx->pc == 0x3B3F54u) {
        ctx->pc = 0x3B3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F50u;
        // 0x3b3f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F58u;
        goto label_3b3f58;
    }
    ctx->pc = 0x3B3F50u;
    SET_GPR_U32(ctx, 31, 0x3B3F58u);
    ctx->pc = 0x3B3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F50u;
    // 0x3b3f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B3F50u, 0x3B3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F58u;
label_3b3f58:
    // 0x3b3f58: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3b3f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3b3f5c:
    // 0x3b3f5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b3f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b3f60:
    // 0x3b3f60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b3f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b3f64:
    // 0x3b3f64: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b3f64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f68:
    // 0x3b3f68: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3b3f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3b3f6c:
    // 0x3b3f6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b3f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b3f70:
    // 0x3b3f70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b3f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b3f74:
    // 0x3b3f74: 0xc0cd518  jal         func_335460
label_3b3f78:
    if (ctx->pc == 0x3B3F78u) {
        ctx->pc = 0x3B3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F74u;
        // 0x3b3f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F7Cu;
        goto label_3b3f7c;
    }
    ctx->pc = 0x3B3F74u;
    SET_GPR_U32(ctx, 31, 0x3B3F7Cu);
    ctx->pc = 0x3B3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F74u;
    // 0x3b3f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3F74u, 0x3B3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F7Cu;
label_3b3f7c:
    // 0x3b3f7c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b3f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b3f80:
    // 0x3b3f80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b3f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f84:
    // 0x3b3f84: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b3f88:
    // 0x3b3f88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b3f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f8c:
    // 0x3b3f8c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x3b3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_3b3f90:
    // 0x3b3f90: 0xe7d9000c  swc1        $f25, 0xC($fp)
    ctx->pc = 0x3b3f90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3b3f94:
    // 0x3b3f94: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b3f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3f98:
    // 0x3b3f98: 0xc0e911e  jal         func_3A4478
label_3b3f9c:
    if (ctx->pc == 0x3B3F9Cu) {
        ctx->pc = 0x3B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F98u;
        // 0x3b3f9c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FA0u;
        goto label_3b3fa0;
    }
    ctx->pc = 0x3B3F98u;
    SET_GPR_U32(ctx, 31, 0x3B3FA0u);
    ctx->pc = 0x3B3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F98u;
    // 0x3b3f9c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B3F98u, 0x3B3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FA0u;
label_3b3fa0:
    // 0x3b3fa0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b3fa4:
    // 0x3b3fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fa8:
    // 0x3b3fa8: 0xc136b30  jal         func_4DACC0
label_3b3fac:
    if (ctx->pc == 0x3B3FACu) {
        ctx->pc = 0x3B3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FA8u;
        // 0x3b3fac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FB0u;
        goto label_3b3fb0;
    }
    ctx->pc = 0x3B3FA8u;
    SET_GPR_U32(ctx, 31, 0x3B3FB0u);
    ctx->pc = 0x3B3FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FA8u;
    // 0x3b3fac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3B3FA8u, 0x3B3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FB0u;
label_3b3fb0:
    // 0x3b3fb0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b3fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3fb4:
    // 0x3b3fb4: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x3b3fb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
label_3b3fb8:
    // 0x3b3fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fbc:
    // 0x3b3fbc: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x3b3fbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
label_3b3fc0:
    // 0x3b3fc0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b3fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b3fc4:
    // 0x3b3fc4: 0xc0cd518  jal         func_335460
label_3b3fc8:
    if (ctx->pc == 0x3B3FC8u) {
        ctx->pc = 0x3B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FC4u;
        // 0x3b3fc8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FCCu;
        goto label_3b3fcc;
    }
    ctx->pc = 0x3B3FC4u;
    SET_GPR_U32(ctx, 31, 0x3B3FCCu);
    ctx->pc = 0x3B3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FC4u;
    // 0x3b3fc8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B3FC4u, 0x3B3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FCCu;
label_3b3fcc:
    // 0x3b3fcc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b3fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b3fd0:
    // 0x3b3fd0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b3fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b3fd4:
    // 0x3b3fd4: 0xc136b24  jal         func_4DAC90
label_3b3fd8:
    if (ctx->pc == 0x3B3FD8u) {
        ctx->pc = 0x3B3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FD4u;
        // 0x3b3fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FDCu;
        goto label_3b3fdc;
    }
    ctx->pc = 0x3B3FD4u;
    SET_GPR_U32(ctx, 31, 0x3B3FDCu);
    ctx->pc = 0x3B3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FD4u;
    // 0x3b3fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B3FD4u, 0x3B3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FDCu;
label_3b3fdc:
    // 0x3b3fdc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b3fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3fe0:
    // 0x3b3fe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b3fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fe4:
    // 0x3b3fe4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b3fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fe8:
    // 0x3b3fe8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b3fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b3fec:
    // 0x3b3fec: 0xc0ea158  jal         func_3A8560
label_3b3ff0:
    if (ctx->pc == 0x3B3FF0u) {
        ctx->pc = 0x3B3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FECu;
        // 0x3b3ff0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FF4u;
        goto label_3b3ff4;
    }
    ctx->pc = 0x3B3FECu;
    SET_GPR_U32(ctx, 31, 0x3B3FF4u);
    ctx->pc = 0x3B3FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FECu;
    // 0x3b3ff0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3FECu, 0x3B3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FF4u;
label_3b3ff4:
    // 0x3b3ff4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3b3ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3b3ff8:
    // 0x3b3ff8: 0xc0ea158  jal         func_3A8560
label_3b3ffc:
    if (ctx->pc == 0x3B3FFCu) {
        ctx->pc = 0x3B3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FF8u;
        // 0x3b3ffc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4000u;
        goto label_3b4000;
    }
    ctx->pc = 0x3B3FF8u;
    SET_GPR_U32(ctx, 31, 0x3B4000u);
    ctx->pc = 0x3B3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FF8u;
    // 0x3b3ffc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B3FF8u, 0x3B4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4000u;
label_3b4000:
    // 0x3b4000: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3b4000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3b4004:
    // 0x3b4004: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b4004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4008:
    // 0x3b4008: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b400c:
    // 0x3b400c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b400cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b4010:
    // 0x3b4010: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b4014:
    // 0x3b4014: 0x40f809  jalr        $v0
label_3b4018:
    if (ctx->pc == 0x3B4018u) {
        ctx->pc = 0x3B4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4014u;
        // 0x3b4018: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B401Cu;
        goto label_3b401c;
    }
    ctx->pc = 0x3B4014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B401Cu);
        ctx->pc = 0x3B4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4014u;
        // 0x3b4018: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4014u, 0x3B401Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B401Cu;
label_3b401c:
    // 0x3b401c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b401cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b4020:
    // 0x3b4020: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b4020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4024:
    // 0x3b4024: 0xc1073cc  jal         func_41CF30
label_3b4028:
    if (ctx->pc == 0x3B4028u) {
        ctx->pc = 0x3B4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4024u;
        // 0x3b4028: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B402Cu;
        goto label_3b402c;
    }
    ctx->pc = 0x3B4024u;
    SET_GPR_U32(ctx, 31, 0x3B402Cu);
    ctx->pc = 0x3B4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4024u;
    // 0x3b4028: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B4024u, 0x3B402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B402Cu;
label_3b402c:
    // 0x3b402c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b4030:
    // 0x3b4030: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3b4034:
    if (ctx->pc == 0x3B4034u) {
        ctx->pc = 0x3B4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4030u;
        // 0x3b4034: 0x8fa600b0  lw          $a2, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4038u;
        goto label_3b4038;
    }
    ctx->pc = 0x3B4030u;
    {
        const bool branch_taken_0x3b4030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4030u;
        // 0x3b4034: 0x8fa600b0  lw          $a2, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4030) {
            ctx->pc = 0x3B4058u;
            goto label_3b4058;
        }
    }
    ctx->pc = 0x3B4038u;
label_3b4038:
    // 0x3b4038: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b403c:
    // 0x3b403c: 0xc0e8dee  jal         func_3A37B8
label_3b4040:
    if (ctx->pc == 0x3B4040u) {
        ctx->pc = 0x3B4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B403Cu;
        // 0x3b4040: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4044u;
        goto label_3b4044;
    }
    ctx->pc = 0x3B403Cu;
    SET_GPR_U32(ctx, 31, 0x3B4044u);
    ctx->pc = 0x3B4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B403Cu;
    // 0x3b4040: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B403Cu, 0x3B4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4044u;
label_3b4044:
    // 0x3b4044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4048:
    // 0x3b4048: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b4048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b404c:
    // 0x3b404c: 0xc045ca0  jal         func_117280
label_3b4050:
    if (ctx->pc == 0x3B4050u) {
        ctx->pc = 0x3B4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B404Cu;
        // 0x3b4050: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4054u;
        goto label_3b4054;
    }
    ctx->pc = 0x3B404Cu;
    SET_GPR_U32(ctx, 31, 0x3B4054u);
    ctx->pc = 0x3B4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B404Cu;
    // 0x3b4050: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3B404Cu, 0x3B4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4054u;
label_3b4054:
    // 0x3b4054: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x3b4054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b4058:
    // 0x3b4058: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3b4058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b405c:
    // 0x3b405c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3b405cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3b4060:
    // 0x3b4060: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3b4060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b4064:
    // 0x3b4064: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4068:
    // 0x3b4068: 0xc0e9bb2  jal         func_3A6EC8
label_3b406c:
    if (ctx->pc == 0x3B406Cu) {
        ctx->pc = 0x3B406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4068u;
        // 0x3b406c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4070u;
        goto label_3b4070;
    }
    ctx->pc = 0x3B4068u;
    SET_GPR_U32(ctx, 31, 0x3B4070u);
    ctx->pc = 0x3B406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4068u;
    // 0x3b406c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B4068u, 0x3B4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4070u;
label_3b4070:
    // 0x3b4070: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3b4070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3b4074:
    // 0x3b4074: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3b4074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3b4078:
    // 0x3b4078: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3b4078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3b407c:
    // 0x3b407c: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3b407cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3b4080:
    // 0x3b4080: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3b4080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3b4084:
    // 0x3b4084: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3b4084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3b4088:
    // 0x3b4088: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3b4088u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3b408c:
    // 0x3b408c: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x3b408cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b4090:
    // 0x3b4090: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x3b4090u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b4094:
    // 0x3b4094: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3b4094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3b4098:
    // 0x3b4098: 0xc7bf01b8  lwc1        $f31, 0x1B8($sp)
    ctx->pc = 0x3b4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_3b409c:
    // 0x3b409c: 0xc7be01b0  lwc1        $f30, 0x1B0($sp)
    ctx->pc = 0x3b409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3b40a0:
    // 0x3b40a0: 0xc7bd01a8  lwc1        $f29, 0x1A8($sp)
    ctx->pc = 0x3b40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3b40a4:
    // 0x3b40a4: 0xc7bc01a0  lwc1        $f28, 0x1A0($sp)
    ctx->pc = 0x3b40a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3b40a8:
    // 0x3b40a8: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x3b40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3b40ac:
    // 0x3b40ac: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x3b40acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3b40b0:
    // 0x3b40b0: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x3b40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b40b4:
    // 0x3b40b4: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x3b40b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b40b8:
    // 0x3b40b8: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x3b40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b40bc:
    // 0x3b40bc: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x3b40bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b40c0:
    // 0x3b40c0: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x3b40c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b40c4:
    // 0x3b40c4: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x3b40c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b40c8:
    // 0x3b40c8: 0x3e00008  jr          $ra
label_3b40cc:
    if (ctx->pc == 0x3B40CCu) {
        ctx->pc = 0x3B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40C8u;
        // 0x3b40cc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40D0u;
        goto label_fallthrough_0x3b40c8;
    }
    ctx->pc = 0x3B40C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40C8u;
        // 0x3b40cc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B40C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b40c8:
    ctx->pc = 0x3B40D0u;
}
