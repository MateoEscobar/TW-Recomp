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

// Function: sub_002B3360
// Address: 0x2b3360 - 0x2b3ab0
void sub_002B3360_0x2b3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3360_0x2b3360");
#endif

    switch (ctx->pc) {
        case 0x2b3360u: goto label_2b3360;
        case 0x2b3364u: goto label_2b3364;
        case 0x2b3368u: goto label_2b3368;
        case 0x2b336cu: goto label_2b336c;
        case 0x2b3370u: goto label_2b3370;
        case 0x2b3374u: goto label_2b3374;
        case 0x2b3378u: goto label_2b3378;
        case 0x2b337cu: goto label_2b337c;
        case 0x2b3380u: goto label_2b3380;
        case 0x2b3384u: goto label_2b3384;
        case 0x2b3388u: goto label_2b3388;
        case 0x2b338cu: goto label_2b338c;
        case 0x2b3390u: goto label_2b3390;
        case 0x2b3394u: goto label_2b3394;
        case 0x2b3398u: goto label_2b3398;
        case 0x2b339cu: goto label_2b339c;
        case 0x2b33a0u: goto label_2b33a0;
        case 0x2b33a4u: goto label_2b33a4;
        case 0x2b33a8u: goto label_2b33a8;
        case 0x2b33acu: goto label_2b33ac;
        case 0x2b33b0u: goto label_2b33b0;
        case 0x2b33b4u: goto label_2b33b4;
        case 0x2b33b8u: goto label_2b33b8;
        case 0x2b33bcu: goto label_2b33bc;
        case 0x2b33c0u: goto label_2b33c0;
        case 0x2b33c4u: goto label_2b33c4;
        case 0x2b33c8u: goto label_2b33c8;
        case 0x2b33ccu: goto label_2b33cc;
        case 0x2b33d0u: goto label_2b33d0;
        case 0x2b33d4u: goto label_2b33d4;
        case 0x2b33d8u: goto label_2b33d8;
        case 0x2b33dcu: goto label_2b33dc;
        case 0x2b33e0u: goto label_2b33e0;
        case 0x2b33e4u: goto label_2b33e4;
        case 0x2b33e8u: goto label_2b33e8;
        case 0x2b33ecu: goto label_2b33ec;
        case 0x2b33f0u: goto label_2b33f0;
        case 0x2b33f4u: goto label_2b33f4;
        case 0x2b33f8u: goto label_2b33f8;
        case 0x2b33fcu: goto label_2b33fc;
        case 0x2b3400u: goto label_2b3400;
        case 0x2b3404u: goto label_2b3404;
        case 0x2b3408u: goto label_2b3408;
        case 0x2b340cu: goto label_2b340c;
        case 0x2b3410u: goto label_2b3410;
        case 0x2b3414u: goto label_2b3414;
        case 0x2b3418u: goto label_2b3418;
        case 0x2b341cu: goto label_2b341c;
        case 0x2b3420u: goto label_2b3420;
        case 0x2b3424u: goto label_2b3424;
        case 0x2b3428u: goto label_2b3428;
        case 0x2b342cu: goto label_2b342c;
        case 0x2b3430u: goto label_2b3430;
        case 0x2b3434u: goto label_2b3434;
        case 0x2b3438u: goto label_2b3438;
        case 0x2b343cu: goto label_2b343c;
        case 0x2b3440u: goto label_2b3440;
        case 0x2b3444u: goto label_2b3444;
        case 0x2b3448u: goto label_2b3448;
        case 0x2b344cu: goto label_2b344c;
        case 0x2b3450u: goto label_2b3450;
        case 0x2b3454u: goto label_2b3454;
        case 0x2b3458u: goto label_2b3458;
        case 0x2b345cu: goto label_2b345c;
        case 0x2b3460u: goto label_2b3460;
        case 0x2b3464u: goto label_2b3464;
        case 0x2b3468u: goto label_2b3468;
        case 0x2b346cu: goto label_2b346c;
        case 0x2b3470u: goto label_2b3470;
        case 0x2b3474u: goto label_2b3474;
        case 0x2b3478u: goto label_2b3478;
        case 0x2b347cu: goto label_2b347c;
        case 0x2b3480u: goto label_2b3480;
        case 0x2b3484u: goto label_2b3484;
        case 0x2b3488u: goto label_2b3488;
        case 0x2b348cu: goto label_2b348c;
        case 0x2b3490u: goto label_2b3490;
        case 0x2b3494u: goto label_2b3494;
        case 0x2b3498u: goto label_2b3498;
        case 0x2b349cu: goto label_2b349c;
        case 0x2b34a0u: goto label_2b34a0;
        case 0x2b34a4u: goto label_2b34a4;
        case 0x2b34a8u: goto label_2b34a8;
        case 0x2b34acu: goto label_2b34ac;
        case 0x2b34b0u: goto label_2b34b0;
        case 0x2b34b4u: goto label_2b34b4;
        case 0x2b34b8u: goto label_2b34b8;
        case 0x2b34bcu: goto label_2b34bc;
        case 0x2b34c0u: goto label_2b34c0;
        case 0x2b34c4u: goto label_2b34c4;
        case 0x2b34c8u: goto label_2b34c8;
        case 0x2b34ccu: goto label_2b34cc;
        case 0x2b34d0u: goto label_2b34d0;
        case 0x2b34d4u: goto label_2b34d4;
        case 0x2b34d8u: goto label_2b34d8;
        case 0x2b34dcu: goto label_2b34dc;
        case 0x2b34e0u: goto label_2b34e0;
        case 0x2b34e4u: goto label_2b34e4;
        case 0x2b34e8u: goto label_2b34e8;
        case 0x2b34ecu: goto label_2b34ec;
        case 0x2b34f0u: goto label_2b34f0;
        case 0x2b34f4u: goto label_2b34f4;
        case 0x2b34f8u: goto label_2b34f8;
        case 0x2b34fcu: goto label_2b34fc;
        case 0x2b3500u: goto label_2b3500;
        case 0x2b3504u: goto label_2b3504;
        case 0x2b3508u: goto label_2b3508;
        case 0x2b350cu: goto label_2b350c;
        case 0x2b3510u: goto label_2b3510;
        case 0x2b3514u: goto label_2b3514;
        case 0x2b3518u: goto label_2b3518;
        case 0x2b351cu: goto label_2b351c;
        case 0x2b3520u: goto label_2b3520;
        case 0x2b3524u: goto label_2b3524;
        case 0x2b3528u: goto label_2b3528;
        case 0x2b352cu: goto label_2b352c;
        case 0x2b3530u: goto label_2b3530;
        case 0x2b3534u: goto label_2b3534;
        case 0x2b3538u: goto label_2b3538;
        case 0x2b353cu: goto label_2b353c;
        case 0x2b3540u: goto label_2b3540;
        case 0x2b3544u: goto label_2b3544;
        case 0x2b3548u: goto label_2b3548;
        case 0x2b354cu: goto label_2b354c;
        case 0x2b3550u: goto label_2b3550;
        case 0x2b3554u: goto label_2b3554;
        case 0x2b3558u: goto label_2b3558;
        case 0x2b355cu: goto label_2b355c;
        case 0x2b3560u: goto label_2b3560;
        case 0x2b3564u: goto label_2b3564;
        case 0x2b3568u: goto label_2b3568;
        case 0x2b356cu: goto label_2b356c;
        case 0x2b3570u: goto label_2b3570;
        case 0x2b3574u: goto label_2b3574;
        case 0x2b3578u: goto label_2b3578;
        case 0x2b357cu: goto label_2b357c;
        case 0x2b3580u: goto label_2b3580;
        case 0x2b3584u: goto label_2b3584;
        case 0x2b3588u: goto label_2b3588;
        case 0x2b358cu: goto label_2b358c;
        case 0x2b3590u: goto label_2b3590;
        case 0x2b3594u: goto label_2b3594;
        case 0x2b3598u: goto label_2b3598;
        case 0x2b359cu: goto label_2b359c;
        case 0x2b35a0u: goto label_2b35a0;
        case 0x2b35a4u: goto label_2b35a4;
        case 0x2b35a8u: goto label_2b35a8;
        case 0x2b35acu: goto label_2b35ac;
        case 0x2b35b0u: goto label_2b35b0;
        case 0x2b35b4u: goto label_2b35b4;
        case 0x2b35b8u: goto label_2b35b8;
        case 0x2b35bcu: goto label_2b35bc;
        case 0x2b35c0u: goto label_2b35c0;
        case 0x2b35c4u: goto label_2b35c4;
        case 0x2b35c8u: goto label_2b35c8;
        case 0x2b35ccu: goto label_2b35cc;
        case 0x2b35d0u: goto label_2b35d0;
        case 0x2b35d4u: goto label_2b35d4;
        case 0x2b35d8u: goto label_2b35d8;
        case 0x2b35dcu: goto label_2b35dc;
        case 0x2b35e0u: goto label_2b35e0;
        case 0x2b35e4u: goto label_2b35e4;
        case 0x2b35e8u: goto label_2b35e8;
        case 0x2b35ecu: goto label_2b35ec;
        case 0x2b35f0u: goto label_2b35f0;
        case 0x2b35f4u: goto label_2b35f4;
        case 0x2b35f8u: goto label_2b35f8;
        case 0x2b35fcu: goto label_2b35fc;
        case 0x2b3600u: goto label_2b3600;
        case 0x2b3604u: goto label_2b3604;
        case 0x2b3608u: goto label_2b3608;
        case 0x2b360cu: goto label_2b360c;
        case 0x2b3610u: goto label_2b3610;
        case 0x2b3614u: goto label_2b3614;
        case 0x2b3618u: goto label_2b3618;
        case 0x2b361cu: goto label_2b361c;
        case 0x2b3620u: goto label_2b3620;
        case 0x2b3624u: goto label_2b3624;
        case 0x2b3628u: goto label_2b3628;
        case 0x2b362cu: goto label_2b362c;
        case 0x2b3630u: goto label_2b3630;
        case 0x2b3634u: goto label_2b3634;
        case 0x2b3638u: goto label_2b3638;
        case 0x2b363cu: goto label_2b363c;
        case 0x2b3640u: goto label_2b3640;
        case 0x2b3644u: goto label_2b3644;
        case 0x2b3648u: goto label_2b3648;
        case 0x2b364cu: goto label_2b364c;
        case 0x2b3650u: goto label_2b3650;
        case 0x2b3654u: goto label_2b3654;
        case 0x2b3658u: goto label_2b3658;
        case 0x2b365cu: goto label_2b365c;
        case 0x2b3660u: goto label_2b3660;
        case 0x2b3664u: goto label_2b3664;
        case 0x2b3668u: goto label_2b3668;
        case 0x2b366cu: goto label_2b366c;
        case 0x2b3670u: goto label_2b3670;
        case 0x2b3674u: goto label_2b3674;
        case 0x2b3678u: goto label_2b3678;
        case 0x2b367cu: goto label_2b367c;
        case 0x2b3680u: goto label_2b3680;
        case 0x2b3684u: goto label_2b3684;
        case 0x2b3688u: goto label_2b3688;
        case 0x2b368cu: goto label_2b368c;
        case 0x2b3690u: goto label_2b3690;
        case 0x2b3694u: goto label_2b3694;
        case 0x2b3698u: goto label_2b3698;
        case 0x2b369cu: goto label_2b369c;
        case 0x2b36a0u: goto label_2b36a0;
        case 0x2b36a4u: goto label_2b36a4;
        case 0x2b36a8u: goto label_2b36a8;
        case 0x2b36acu: goto label_2b36ac;
        case 0x2b36b0u: goto label_2b36b0;
        case 0x2b36b4u: goto label_2b36b4;
        case 0x2b36b8u: goto label_2b36b8;
        case 0x2b36bcu: goto label_2b36bc;
        case 0x2b36c0u: goto label_2b36c0;
        case 0x2b36c4u: goto label_2b36c4;
        case 0x2b36c8u: goto label_2b36c8;
        case 0x2b36ccu: goto label_2b36cc;
        case 0x2b36d0u: goto label_2b36d0;
        case 0x2b36d4u: goto label_2b36d4;
        case 0x2b36d8u: goto label_2b36d8;
        case 0x2b36dcu: goto label_2b36dc;
        case 0x2b36e0u: goto label_2b36e0;
        case 0x2b36e4u: goto label_2b36e4;
        case 0x2b36e8u: goto label_2b36e8;
        case 0x2b36ecu: goto label_2b36ec;
        case 0x2b36f0u: goto label_2b36f0;
        case 0x2b36f4u: goto label_2b36f4;
        case 0x2b36f8u: goto label_2b36f8;
        case 0x2b36fcu: goto label_2b36fc;
        case 0x2b3700u: goto label_2b3700;
        case 0x2b3704u: goto label_2b3704;
        case 0x2b3708u: goto label_2b3708;
        case 0x2b370cu: goto label_2b370c;
        case 0x2b3710u: goto label_2b3710;
        case 0x2b3714u: goto label_2b3714;
        case 0x2b3718u: goto label_2b3718;
        case 0x2b371cu: goto label_2b371c;
        case 0x2b3720u: goto label_2b3720;
        case 0x2b3724u: goto label_2b3724;
        case 0x2b3728u: goto label_2b3728;
        case 0x2b372cu: goto label_2b372c;
        case 0x2b3730u: goto label_2b3730;
        case 0x2b3734u: goto label_2b3734;
        case 0x2b3738u: goto label_2b3738;
        case 0x2b373cu: goto label_2b373c;
        case 0x2b3740u: goto label_2b3740;
        case 0x2b3744u: goto label_2b3744;
        case 0x2b3748u: goto label_2b3748;
        case 0x2b374cu: goto label_2b374c;
        case 0x2b3750u: goto label_2b3750;
        case 0x2b3754u: goto label_2b3754;
        case 0x2b3758u: goto label_2b3758;
        case 0x2b375cu: goto label_2b375c;
        case 0x2b3760u: goto label_2b3760;
        case 0x2b3764u: goto label_2b3764;
        case 0x2b3768u: goto label_2b3768;
        case 0x2b376cu: goto label_2b376c;
        case 0x2b3770u: goto label_2b3770;
        case 0x2b3774u: goto label_2b3774;
        case 0x2b3778u: goto label_2b3778;
        case 0x2b377cu: goto label_2b377c;
        case 0x2b3780u: goto label_2b3780;
        case 0x2b3784u: goto label_2b3784;
        case 0x2b3788u: goto label_2b3788;
        case 0x2b378cu: goto label_2b378c;
        case 0x2b3790u: goto label_2b3790;
        case 0x2b3794u: goto label_2b3794;
        case 0x2b3798u: goto label_2b3798;
        case 0x2b379cu: goto label_2b379c;
        case 0x2b37a0u: goto label_2b37a0;
        case 0x2b37a4u: goto label_2b37a4;
        case 0x2b37a8u: goto label_2b37a8;
        case 0x2b37acu: goto label_2b37ac;
        case 0x2b37b0u: goto label_2b37b0;
        case 0x2b37b4u: goto label_2b37b4;
        case 0x2b37b8u: goto label_2b37b8;
        case 0x2b37bcu: goto label_2b37bc;
        case 0x2b37c0u: goto label_2b37c0;
        case 0x2b37c4u: goto label_2b37c4;
        case 0x2b37c8u: goto label_2b37c8;
        case 0x2b37ccu: goto label_2b37cc;
        case 0x2b37d0u: goto label_2b37d0;
        case 0x2b37d4u: goto label_2b37d4;
        case 0x2b37d8u: goto label_2b37d8;
        case 0x2b37dcu: goto label_2b37dc;
        case 0x2b37e0u: goto label_2b37e0;
        case 0x2b37e4u: goto label_2b37e4;
        case 0x2b37e8u: goto label_2b37e8;
        case 0x2b37ecu: goto label_2b37ec;
        case 0x2b37f0u: goto label_2b37f0;
        case 0x2b37f4u: goto label_2b37f4;
        case 0x2b37f8u: goto label_2b37f8;
        case 0x2b37fcu: goto label_2b37fc;
        case 0x2b3800u: goto label_2b3800;
        case 0x2b3804u: goto label_2b3804;
        case 0x2b3808u: goto label_2b3808;
        case 0x2b380cu: goto label_2b380c;
        case 0x2b3810u: goto label_2b3810;
        case 0x2b3814u: goto label_2b3814;
        case 0x2b3818u: goto label_2b3818;
        case 0x2b381cu: goto label_2b381c;
        case 0x2b3820u: goto label_2b3820;
        case 0x2b3824u: goto label_2b3824;
        case 0x2b3828u: goto label_2b3828;
        case 0x2b382cu: goto label_2b382c;
        case 0x2b3830u: goto label_2b3830;
        case 0x2b3834u: goto label_2b3834;
        case 0x2b3838u: goto label_2b3838;
        case 0x2b383cu: goto label_2b383c;
        case 0x2b3840u: goto label_2b3840;
        case 0x2b3844u: goto label_2b3844;
        case 0x2b3848u: goto label_2b3848;
        case 0x2b384cu: goto label_2b384c;
        case 0x2b3850u: goto label_2b3850;
        case 0x2b3854u: goto label_2b3854;
        case 0x2b3858u: goto label_2b3858;
        case 0x2b385cu: goto label_2b385c;
        case 0x2b3860u: goto label_2b3860;
        case 0x2b3864u: goto label_2b3864;
        case 0x2b3868u: goto label_2b3868;
        case 0x2b386cu: goto label_2b386c;
        case 0x2b3870u: goto label_2b3870;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3878u: goto label_2b3878;
        case 0x2b387cu: goto label_2b387c;
        case 0x2b3880u: goto label_2b3880;
        case 0x2b3884u: goto label_2b3884;
        case 0x2b3888u: goto label_2b3888;
        case 0x2b388cu: goto label_2b388c;
        case 0x2b3890u: goto label_2b3890;
        case 0x2b3894u: goto label_2b3894;
        case 0x2b3898u: goto label_2b3898;
        case 0x2b389cu: goto label_2b389c;
        case 0x2b38a0u: goto label_2b38a0;
        case 0x2b38a4u: goto label_2b38a4;
        case 0x2b38a8u: goto label_2b38a8;
        case 0x2b38acu: goto label_2b38ac;
        case 0x2b38b0u: goto label_2b38b0;
        case 0x2b38b4u: goto label_2b38b4;
        case 0x2b38b8u: goto label_2b38b8;
        case 0x2b38bcu: goto label_2b38bc;
        case 0x2b38c0u: goto label_2b38c0;
        case 0x2b38c4u: goto label_2b38c4;
        case 0x2b38c8u: goto label_2b38c8;
        case 0x2b38ccu: goto label_2b38cc;
        case 0x2b38d0u: goto label_2b38d0;
        case 0x2b38d4u: goto label_2b38d4;
        case 0x2b38d8u: goto label_2b38d8;
        case 0x2b38dcu: goto label_2b38dc;
        case 0x2b38e0u: goto label_2b38e0;
        case 0x2b38e4u: goto label_2b38e4;
        case 0x2b38e8u: goto label_2b38e8;
        case 0x2b38ecu: goto label_2b38ec;
        case 0x2b38f0u: goto label_2b38f0;
        case 0x2b38f4u: goto label_2b38f4;
        case 0x2b38f8u: goto label_2b38f8;
        case 0x2b38fcu: goto label_2b38fc;
        case 0x2b3900u: goto label_2b3900;
        case 0x2b3904u: goto label_2b3904;
        case 0x2b3908u: goto label_2b3908;
        case 0x2b390cu: goto label_2b390c;
        case 0x2b3910u: goto label_2b3910;
        case 0x2b3914u: goto label_2b3914;
        case 0x2b3918u: goto label_2b3918;
        case 0x2b391cu: goto label_2b391c;
        case 0x2b3920u: goto label_2b3920;
        case 0x2b3924u: goto label_2b3924;
        case 0x2b3928u: goto label_2b3928;
        case 0x2b392cu: goto label_2b392c;
        case 0x2b3930u: goto label_2b3930;
        case 0x2b3934u: goto label_2b3934;
        case 0x2b3938u: goto label_2b3938;
        case 0x2b393cu: goto label_2b393c;
        case 0x2b3940u: goto label_2b3940;
        case 0x2b3944u: goto label_2b3944;
        case 0x2b3948u: goto label_2b3948;
        case 0x2b394cu: goto label_2b394c;
        case 0x2b3950u: goto label_2b3950;
        case 0x2b3954u: goto label_2b3954;
        case 0x2b3958u: goto label_2b3958;
        case 0x2b395cu: goto label_2b395c;
        case 0x2b3960u: goto label_2b3960;
        case 0x2b3964u: goto label_2b3964;
        case 0x2b3968u: goto label_2b3968;
        case 0x2b396cu: goto label_2b396c;
        case 0x2b3970u: goto label_2b3970;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3978u: goto label_2b3978;
        case 0x2b397cu: goto label_2b397c;
        case 0x2b3980u: goto label_2b3980;
        case 0x2b3984u: goto label_2b3984;
        case 0x2b3988u: goto label_2b3988;
        case 0x2b398cu: goto label_2b398c;
        case 0x2b3990u: goto label_2b3990;
        case 0x2b3994u: goto label_2b3994;
        case 0x2b3998u: goto label_2b3998;
        case 0x2b399cu: goto label_2b399c;
        case 0x2b39a0u: goto label_2b39a0;
        case 0x2b39a4u: goto label_2b39a4;
        case 0x2b39a8u: goto label_2b39a8;
        case 0x2b39acu: goto label_2b39ac;
        case 0x2b39b0u: goto label_2b39b0;
        case 0x2b39b4u: goto label_2b39b4;
        case 0x2b39b8u: goto label_2b39b8;
        case 0x2b39bcu: goto label_2b39bc;
        case 0x2b39c0u: goto label_2b39c0;
        case 0x2b39c4u: goto label_2b39c4;
        case 0x2b39c8u: goto label_2b39c8;
        case 0x2b39ccu: goto label_2b39cc;
        case 0x2b39d0u: goto label_2b39d0;
        case 0x2b39d4u: goto label_2b39d4;
        case 0x2b39d8u: goto label_2b39d8;
        case 0x2b39dcu: goto label_2b39dc;
        case 0x2b39e0u: goto label_2b39e0;
        case 0x2b39e4u: goto label_2b39e4;
        case 0x2b39e8u: goto label_2b39e8;
        case 0x2b39ecu: goto label_2b39ec;
        case 0x2b39f0u: goto label_2b39f0;
        case 0x2b39f4u: goto label_2b39f4;
        case 0x2b39f8u: goto label_2b39f8;
        case 0x2b39fcu: goto label_2b39fc;
        case 0x2b3a00u: goto label_2b3a00;
        case 0x2b3a04u: goto label_2b3a04;
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a0cu: goto label_2b3a0c;
        case 0x2b3a10u: goto label_2b3a10;
        case 0x2b3a14u: goto label_2b3a14;
        case 0x2b3a18u: goto label_2b3a18;
        case 0x2b3a1cu: goto label_2b3a1c;
        case 0x2b3a20u: goto label_2b3a20;
        case 0x2b3a24u: goto label_2b3a24;
        case 0x2b3a28u: goto label_2b3a28;
        case 0x2b3a2cu: goto label_2b3a2c;
        case 0x2b3a30u: goto label_2b3a30;
        case 0x2b3a34u: goto label_2b3a34;
        case 0x2b3a38u: goto label_2b3a38;
        case 0x2b3a3cu: goto label_2b3a3c;
        case 0x2b3a40u: goto label_2b3a40;
        case 0x2b3a44u: goto label_2b3a44;
        case 0x2b3a48u: goto label_2b3a48;
        case 0x2b3a4cu: goto label_2b3a4c;
        case 0x2b3a50u: goto label_2b3a50;
        case 0x2b3a54u: goto label_2b3a54;
        case 0x2b3a58u: goto label_2b3a58;
        case 0x2b3a5cu: goto label_2b3a5c;
        case 0x2b3a60u: goto label_2b3a60;
        case 0x2b3a64u: goto label_2b3a64;
        case 0x2b3a68u: goto label_2b3a68;
        case 0x2b3a6cu: goto label_2b3a6c;
        case 0x2b3a70u: goto label_2b3a70;
        case 0x2b3a74u: goto label_2b3a74;
        case 0x2b3a78u: goto label_2b3a78;
        case 0x2b3a7cu: goto label_2b3a7c;
        case 0x2b3a80u: goto label_2b3a80;
        case 0x2b3a84u: goto label_2b3a84;
        case 0x2b3a88u: goto label_2b3a88;
        case 0x2b3a8cu: goto label_2b3a8c;
        case 0x2b3a90u: goto label_2b3a90;
        case 0x2b3a94u: goto label_2b3a94;
        case 0x2b3a98u: goto label_2b3a98;
        case 0x2b3a9cu: goto label_2b3a9c;
        case 0x2b3aa0u: goto label_2b3aa0;
        case 0x2b3aa4u: goto label_2b3aa4;
        case 0x2b3aa8u: goto label_2b3aa8;
        case 0x2b3aacu: goto label_2b3aac;
        default: break;
    }

    ctx->pc = 0x2b3360u;

label_2b3360:
    // 0x2b3360: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b3364:
    // 0x2b3364: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2b3364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2b3368:
    // 0x2b3368: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2b3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2b336c:
    // 0x2b336c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b336cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b3370:
    // 0x2b3370: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2b3370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2b3374:
    // 0x2b3374: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b3374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b3378:
    // 0x2b3378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b337c:
    // 0x2b337c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b337cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b3380:
    // 0x2b3380: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2b3380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2b3384:
    // 0x2b3384: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2b3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2b3388:
    // 0x2b3388: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b3388u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2b338c:
    // 0x2b338c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2b338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2b3390:
    // 0x2b3390: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b3394:
    // 0x2b3394: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2b3394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2b3398:
    // 0x2b3398: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b3398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b339c:
    // 0x2b339c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2b339cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b33a0:
    // 0x2b33a0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2b33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b33a4:
    // 0x2b33a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b33a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b33a8:
    // 0x2b33a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b33ac:
    // 0x2b33ac: 0x40f809  jalr        $v0
label_2b33b0:
    if (ctx->pc == 0x2B33B0u) {
        ctx->pc = 0x2B33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33ACu;
        // 0x2b33b0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B33B4u;
        goto label_2b33b4;
    }
    ctx->pc = 0x2B33ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B33B4u);
        ctx->pc = 0x2B33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33ACu;
        // 0x2b33b0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B33ACu, 0x2B33B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B33B4u;
label_2b33b4:
    // 0x2b33b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b33b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2b33b8:
    // 0x2b33b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b33b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b33bc:
    // 0x2b33bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b33bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b33c0:
    // 0x2b33c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b33c4:
    // 0x2b33c4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2b33c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2b33c8:
    // 0x2b33c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2b33c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b33cc:
    // 0x2b33cc: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
label_2b33d0:
    if (ctx->pc == 0x2B33D0u) {
        ctx->pc = 0x2B33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33CCu;
        // 0x2b33d0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B33D4u;
        goto label_2b33d4;
    }
    ctx->pc = 0x2B33CCu;
    {
        const bool branch_taken_0x2b33cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33CCu;
        // 0x2b33d0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33cc) {
            ctx->pc = 0x2B352Cu;
            goto label_2b352c;
        }
    }
    ctx->pc = 0x2B33D4u;
label_2b33d4:
    // 0x2b33d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b33d8:
    // 0x2b33d8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2b33dc:
    // 0x2b33dc: 0xc0a3fa4  jal         func_28FE90
label_2b33e0:
    if (ctx->pc == 0x2B33E0u) {
        ctx->pc = 0x2B33E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33DCu;
        // 0x2b33e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B33E4u;
        goto label_2b33e4;
    }
    ctx->pc = 0x2B33DCu;
    SET_GPR_U32(ctx, 31, 0x2B33E4u);
    ctx->pc = 0x2B33E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33DCu;
    // 0x2b33e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B33DCu, 0x2B33E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33E4u;
label_2b33e4:
    // 0x2b33e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b33e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b33e8:
    // 0x2b33e8: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x2b33e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2b33ec:
    // 0x2b33ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b33ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b33f0:
    // 0x2b33f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2b33f4:
    if (ctx->pc == 0x2B33F4u) {
        ctx->pc = 0x2B33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33F0u;
        // 0x2b33f4: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B33F8u;
        goto label_2b33f8;
    }
    ctx->pc = 0x2B33F0u;
    {
        const bool branch_taken_0x2b33f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b33f0) {
            ctx->pc = 0x2B33F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B33F0u;
            // 0x2b33f4: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3410u;
            goto label_2b3410;
        }
    }
    ctx->pc = 0x2B33F8u;
label_2b33f8:
    // 0x2b33f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b33fc:
    // 0x2b33fc: 0xc0a3782  jal         func_28DE08
label_2b3400:
    if (ctx->pc == 0x2B3400u) {
        ctx->pc = 0x2B3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33FCu;
        // 0x2b3400: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3404u;
        goto label_2b3404;
    }
    ctx->pc = 0x2B33FCu;
    SET_GPR_U32(ctx, 31, 0x2B3404u);
    ctx->pc = 0x2B3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33FCu;
    // 0x2b3400: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2B33FCu, 0x2B3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3404u;
label_2b3404:
    // 0x2b3404: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2b3408:
    if (ctx->pc == 0x2B3408u) {
        ctx->pc = 0x2B3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3404u;
        // 0x2b3408: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B340Cu;
        goto label_2b340c;
    }
    ctx->pc = 0x2B3404u;
    {
        const bool branch_taken_0x2b3404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3404) {
            ctx->pc = 0x2B3408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3404u;
            // 0x2b3408: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3454u;
            goto label_2b3454;
        }
    }
    ctx->pc = 0x2B340Cu;
label_2b340c:
    // 0x2b340c: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x2b340cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_2b3410:
    // 0x2b3410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b3414:
    // 0x2b3414: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2b3418:
    if (ctx->pc == 0x2B3418u) {
        ctx->pc = 0x2B3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3414u;
        // 0x2b3418: 0x9602001c  lhu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B341Cu;
        goto label_2b341c;
    }
    ctx->pc = 0x2B3414u;
    {
        const bool branch_taken_0x2b3414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3414) {
            ctx->pc = 0x2B3418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3414u;
            // 0x2b3418: 0x9602001c  lhu         $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3434u;
            goto label_2b3434;
        }
    }
    ctx->pc = 0x2B341Cu;
label_2b341c:
    // 0x2b341c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b341cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3420:
    // 0x2b3420: 0xc0a3782  jal         func_28DE08
label_2b3424:
    if (ctx->pc == 0x2B3424u) {
        ctx->pc = 0x2B3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3420u;
        // 0x2b3424: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3428u;
        goto label_2b3428;
    }
    ctx->pc = 0x2B3420u;
    SET_GPR_U32(ctx, 31, 0x2B3428u);
    ctx->pc = 0x2B3424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3420u;
    // 0x2b3424: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2B3420u, 0x2B3428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3428u;
label_2b3428:
    // 0x2b3428: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2b342c:
    if (ctx->pc == 0x2B342Cu) {
        ctx->pc = 0x2B342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3428u;
        // 0x2b342c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3430u;
        goto label_2b3430;
    }
    ctx->pc = 0x2B3428u;
    {
        const bool branch_taken_0x2b3428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3428) {
            ctx->pc = 0x2B342Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3428u;
            // 0x2b342c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3454u;
            goto label_2b3454;
        }
    }
    ctx->pc = 0x2B3430u;
label_2b3430:
    // 0x2b3430: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2b3430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_2b3434:
    // 0x2b3434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b3434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b3438:
    // 0x2b3438: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b343c:
    if (ctx->pc == 0x2B343Cu) {
        ctx->pc = 0x2B3440u;
        goto label_2b3440;
    }
    ctx->pc = 0x2B3438u;
    {
        const bool branch_taken_0x2b3438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3438) {
            ctx->pc = 0x2B3454u;
            goto label_2b3454;
        }
    }
    ctx->pc = 0x2B3440u;
label_2b3440:
    // 0x2b3440: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3444:
    // 0x2b3444: 0xc0a3782  jal         func_28DE08
label_2b3448:
    if (ctx->pc == 0x2B3448u) {
        ctx->pc = 0x2B3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3444u;
        // 0x2b3448: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B344Cu;
        goto label_2b344c;
    }
    ctx->pc = 0x2B3444u;
    SET_GPR_U32(ctx, 31, 0x2B344Cu);
    ctx->pc = 0x2B3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3444u;
    // 0x2b3448: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2B3444u, 0x2B344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B344Cu;
label_2b344c:
    // 0x2b344c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b3450:
    if (ctx->pc == 0x2B3450u) {
        ctx->pc = 0x2B3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B344Cu;
        // 0x2b3450: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3454u;
        goto label_2b3454;
    }
    ctx->pc = 0x2B344Cu;
    {
        const bool branch_taken_0x2b344c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b344c) {
            ctx->pc = 0x2B3450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B344Cu;
            // 0x2b3450: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3454u;
            goto label_2b3454;
        }
    }
    ctx->pc = 0x2B3454u;
label_2b3454:
    // 0x2b3454: 0x52800006  beql        $s4, $zero, . + 4 + (0x6 << 2)
label_2b3458:
    if (ctx->pc == 0x2B3458u) {
        ctx->pc = 0x2B3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3454u;
        // 0x2b3458: 0x96020034  lhu         $v0, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B345Cu;
        goto label_2b345c;
    }
    ctx->pc = 0x2B3454u;
    {
        const bool branch_taken_0x2b3454 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3454) {
            ctx->pc = 0x2B3458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3454u;
            // 0x2b3458: 0x96020034  lhu         $v0, 0x34($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B345Cu;
label_2b345c:
    // 0x2b345c: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x2b345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_2b3460:
    // 0x2b3460: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x2b3460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_2b3464:
    // 0x2b3464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3468:
    // 0x2b3468: 0x10000016  b           . + 4 + (0x16 << 2)
label_2b346c:
    if (ctx->pc == 0x2B346Cu) {
        ctx->pc = 0x2B346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3468u;
        // 0x2b346c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3470u;
        goto label_2b3470;
    }
    ctx->pc = 0x2B3468u;
    {
        const bool branch_taken_0x2b3468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3468u;
        // 0x2b346c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3468) {
            ctx->pc = 0x2B34C4u;
            goto label_2b34c4;
        }
    }
    ctx->pc = 0x2B3470u;
label_2b3470:
    // 0x2b3470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b3470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b3474:
    // 0x2b3474: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b3478:
    if (ctx->pc == 0x2B3478u) {
        ctx->pc = 0x2B3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3474u;
        // 0x2b3478: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B347Cu;
        goto label_2b347c;
    }
    ctx->pc = 0x2B3474u;
    {
        const bool branch_taken_0x2b3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3474) {
            ctx->pc = 0x2B3478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3474u;
            // 0x2b3478: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B34A4u;
            goto label_2b34a4;
        }
    }
    ctx->pc = 0x2B347Cu;
label_2b347c:
    // 0x2b347c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3480:
    // 0x2b3480: 0xc0a3782  jal         func_28DE08
label_2b3484:
    if (ctx->pc == 0x2B3484u) {
        ctx->pc = 0x2B3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3480u;
        // 0x2b3484: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3488u;
        goto label_2b3488;
    }
    ctx->pc = 0x2B3480u;
    SET_GPR_U32(ctx, 31, 0x2B3488u);
    ctx->pc = 0x2B3484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3480u;
    // 0x2b3484: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2B3480u, 0x2B3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3488u;
label_2b3488:
    // 0x2b3488: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2b348c:
    if (ctx->pc == 0x2B348Cu) {
        ctx->pc = 0x2B348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3488u;
        // 0x2b348c: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3490u;
        goto label_2b3490;
    }
    ctx->pc = 0x2B3488u;
    {
        const bool branch_taken_0x2b3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3488) {
            ctx->pc = 0x2B348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3488u;
            // 0x2b348c: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B34A4u;
            goto label_2b34a4;
        }
    }
    ctx->pc = 0x2B3490u;
label_2b3490:
    // 0x2b3490: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2b3490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2b3494:
    // 0x2b3494: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b3494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b3498:
    // 0x2b3498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b349c:
    // 0x2b349c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b34a0:
    if (ctx->pc == 0x2B34A0u) {
        ctx->pc = 0x2B34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B349Cu;
        // 0x2b34a0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B34A4u;
        goto label_2b34a4;
    }
    ctx->pc = 0x2B349Cu;
    {
        const bool branch_taken_0x2b349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B349Cu;
        // 0x2b34a0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b349c) {
            ctx->pc = 0x2B34C4u;
            goto label_2b34c4;
        }
    }
    ctx->pc = 0x2B34A4u;
label_2b34a4:
    // 0x2b34a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b34a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b34a8:
    // 0x2b34a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2b34ac:
    if (ctx->pc == 0x2B34ACu) {
        ctx->pc = 0x2B34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34A8u;
        // 0x2b34ac: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B34B0u;
        goto label_2b34b0;
    }
    ctx->pc = 0x2B34A8u;
    {
        const bool branch_taken_0x2b34a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b34a8) {
            ctx->pc = 0x2B34ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B34A8u;
            // 0x2b34ac: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B34C8u;
            goto label_2b34c8;
        }
    }
    ctx->pc = 0x2B34B0u;
label_2b34b0:
    // 0x2b34b0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2b34b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b34b4:
    // 0x2b34b4: 0xc0a3782  jal         func_28DE08
label_2b34b8:
    if (ctx->pc == 0x2B34B8u) {
        ctx->pc = 0x2B34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34B4u;
        // 0x2b34b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B34BCu;
        goto label_2b34bc;
    }
    ctx->pc = 0x2B34B4u;
    SET_GPR_U32(ctx, 31, 0x2B34BCu);
    ctx->pc = 0x2B34B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B34B4u;
    // 0x2b34b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2B34B4u, 0x2B34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34BCu;
label_2b34bc:
    // 0x2b34bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b34c0:
    if (ctx->pc == 0x2B34C0u) {
        ctx->pc = 0x2B34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34BCu;
        // 0x2b34c0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B34C4u;
        goto label_2b34c4;
    }
    ctx->pc = 0x2B34BCu;
    {
        const bool branch_taken_0x2b34bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b34bc) {
            ctx->pc = 0x2B34C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B34BCu;
            // 0x2b34c0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B34C4u;
            goto label_2b34c4;
        }
    }
    ctx->pc = 0x2B34C4u;
label_2b34c4:
    // 0x2b34c4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b34c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b34c8:
    // 0x2b34c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b34c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b34cc:
    // 0x2b34cc: 0x0  nop
    ctx->pc = 0x2b34ccu;
    // NOP
label_2b34d0:
    // 0x2b34d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b34d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b34d4:
    // 0x2b34d4: 0x0  nop
    ctx->pc = 0x2b34d4u;
    // NOP
label_2b34d8:
    // 0x2b34d8: 0x450000ba  bc1f        . + 4 + (0xBA << 2)
label_2b34dc:
    if (ctx->pc == 0x2B34DCu) {
        ctx->pc = 0x2B34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34D8u;
        // 0x2b34dc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B34E0u;
        goto label_2b34e0;
    }
    ctx->pc = 0x2B34D8u;
    {
        const bool branch_taken_0x2b34d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34D8u;
        // 0x2b34dc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34d8) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B34E0u;
label_2b34e0:
    // 0x2b34e0: 0x86a50092  lh          $a1, 0x92($s5)
    ctx->pc = 0x2b34e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2b34e4:
    // 0x2b34e4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2b34e8:
    // 0x2b34e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b34ec:
    // 0x2b34ec: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b34f0:
    // 0x2b34f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b34f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b34f4:
    // 0x2b34f4: 0xc0cd8ec  jal         func_3363B0
label_2b34f8:
    if (ctx->pc == 0x2B34F8u) {
        ctx->pc = 0x2B34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34F4u;
        // 0x2b34f8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B34FCu;
        goto label_2b34fc;
    }
    ctx->pc = 0x2B34F4u;
    SET_GPR_U32(ctx, 31, 0x2B34FCu);
    ctx->pc = 0x2B34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B34F4u;
    // 0x2b34f8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B34F4u, 0x2B34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34FCu;
label_2b34fc:
    // 0x2b34fc: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2b34fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b3500:
    // 0x2b3500: 0xc0cd5ea  jal         func_3357A8
label_2b3504:
    if (ctx->pc == 0x2B3504u) {
        ctx->pc = 0x2B3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3500u;
        // 0x2b3504: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3508u;
        goto label_2b3508;
    }
    ctx->pc = 0x2B3500u;
    SET_GPR_U32(ctx, 31, 0x2B3508u);
    ctx->pc = 0x2B3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3500u;
    // 0x2b3504: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2B3500u, 0x2B3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3508u;
label_2b3508:
    // 0x2b3508: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2b3508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2b350c:
    // 0x2b350c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b350cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b3510:
    // 0x2b3510: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b3510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b3514:
    // 0x2b3514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3518:
    // 0x2b3518: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b3518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b351c:
    // 0x2b351c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b351cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2b3520:
    // 0x2b3520: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b3520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b3524:
    // 0x2b3524: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_2b3528:
    if (ctx->pc == 0x2B3528u) {
        ctx->pc = 0x2B3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3524u;
        // 0x2b3528: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B352Cu;
        goto label_2b352c;
    }
    ctx->pc = 0x2B3524u;
    {
        const bool branch_taken_0x2b3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3524u;
        // 0x2b3528: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3524) {
            ctx->pc = 0x2B37C0u;
            goto label_2b37c0;
        }
    }
    ctx->pc = 0x2B352Cu;
label_2b352c:
    // 0x2b352c: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
label_2b3530:
    if (ctx->pc == 0x2B3530u) {
        ctx->pc = 0x2B3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B352Cu;
        // 0x2b3530: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3534u;
        goto label_2b3534;
    }
    ctx->pc = 0x2B352Cu;
    {
        const bool branch_taken_0x2b352c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B352Cu;
        // 0x2b3530: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b352c) {
            ctx->pc = 0x2B3614u;
            goto label_2b3614;
        }
    }
    ctx->pc = 0x2B3534u;
label_2b3534:
    // 0x2b3534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b3538:
    // 0x2b3538: 0xc087502  jal         func_21D408
label_2b353c:
    if (ctx->pc == 0x2B353Cu) {
        ctx->pc = 0x2B353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3538u;
        // 0x2b353c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3540u;
        goto label_2b3540;
    }
    ctx->pc = 0x2B3538u;
    SET_GPR_U32(ctx, 31, 0x2B3540u);
    ctx->pc = 0x2B353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3538u;
    // 0x2b353c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B3538u, 0x2B3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3540u;
label_2b3540:
    // 0x2b3540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3544:
    // 0x2b3544: 0xc0a3fa4  jal         func_28FE90
label_2b3548:
    if (ctx->pc == 0x2B3548u) {
        ctx->pc = 0x2B3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3544u;
        // 0x2b3548: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B354Cu;
        goto label_2b354c;
    }
    ctx->pc = 0x2B3544u;
    SET_GPR_U32(ctx, 31, 0x2B354Cu);
    ctx->pc = 0x2B3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3544u;
    // 0x2b3548: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B3544u, 0x2B354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B354Cu;
label_2b354c:
    // 0x2b354c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b354cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3550:
    // 0x2b3550: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b3550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b3554:
    // 0x2b3554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3558:
    // 0x2b3558: 0xc0a7ab6  jal         func_29EAD8
label_2b355c:
    if (ctx->pc == 0x2B355Cu) {
        ctx->pc = 0x2B355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3558u;
        // 0x2b355c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3560u;
        goto label_2b3560;
    }
    ctx->pc = 0x2B3558u;
    SET_GPR_U32(ctx, 31, 0x2B3560u);
    ctx->pc = 0x2B355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3558u;
    // 0x2b355c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2B3558u, 0x2B3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3560u;
label_2b3560:
    // 0x2b3560: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2b3564:
    if (ctx->pc == 0x2B3564u) {
        ctx->pc = 0x2B3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3560u;
        // 0x2b3564: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3568u;
        goto label_2b3568;
    }
    ctx->pc = 0x2B3560u;
    {
        const bool branch_taken_0x2b3560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3560) {
            ctx->pc = 0x2B3564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3560u;
            // 0x2b3564: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3580u;
            goto label_2b3580;
        }
    }
    ctx->pc = 0x2B3568u;
label_2b3568:
    // 0x2b3568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b356c:
    // 0x2b356c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b356cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b3570:
    // 0x2b3570: 0xc0a7ab6  jal         func_29EAD8
label_2b3574:
    if (ctx->pc == 0x2B3574u) {
        ctx->pc = 0x2B3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3570u;
        // 0x2b3574: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3578u;
        goto label_2b3578;
    }
    ctx->pc = 0x2B3570u;
    SET_GPR_U32(ctx, 31, 0x2B3578u);
    ctx->pc = 0x2B3574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3570u;
    // 0x2b3574: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2B3570u, 0x2B3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3578u;
label_2b3578:
    // 0x2b3578: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b357c:
    if (ctx->pc == 0x2B357Cu) {
        ctx->pc = 0x2B357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3578u;
        // 0x2b357c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3580u;
        goto label_2b3580;
    }
    ctx->pc = 0x2B3578u;
    {
        const bool branch_taken_0x2b3578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3578) {
            ctx->pc = 0x2B357Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3578u;
            // 0x2b357c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3580u;
            goto label_2b3580;
        }
    }
    ctx->pc = 0x2B3580u;
label_2b3580:
    // 0x2b3580: 0x12400090  beqz        $s2, . + 4 + (0x90 << 2)
label_2b3584:
    if (ctx->pc == 0x2B3584u) {
        ctx->pc = 0x2B3588u;
        goto label_2b3588;
    }
    ctx->pc = 0x2B3580u;
    {
        const bool branch_taken_0x2b3580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3580) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3588u;
label_2b3588:
    // 0x2b3588: 0xc088e58  jal         func_223960
label_2b358c:
    if (ctx->pc == 0x2B358Cu) {
        ctx->pc = 0x2B358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3588u;
        // 0x2b358c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3590u;
        goto label_2b3590;
    }
    ctx->pc = 0x2B3588u;
    SET_GPR_U32(ctx, 31, 0x2B3590u);
    ctx->pc = 0x2B358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3588u;
    // 0x2b358c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x2B3588u, 0x2B3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3590u;
label_2b3590:
    // 0x2b3590: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2b3594:
    if (ctx->pc == 0x2B3594u) {
        ctx->pc = 0x2B3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3590u;
        // 0x2b3594: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3598u;
        goto label_2b3598;
    }
    ctx->pc = 0x2B3590u;
    {
        const bool branch_taken_0x2b3590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3590) {
            ctx->pc = 0x2B3594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3590u;
            // 0x2b3594: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B35A0u;
            goto label_2b35a0;
        }
    }
    ctx->pc = 0x2B3598u;
label_2b3598:
    // 0x2b3598: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2b359c:
    if (ctx->pc == 0x2B359Cu) {
        ctx->pc = 0x2B359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3598u;
        // 0x2b359c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B35A0u;
        goto label_2b35a0;
    }
    ctx->pc = 0x2B3598u;
    {
        const bool branch_taken_0x2b3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3598u;
        // 0x2b359c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3598) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B35A0u;
label_2b35a0:
    // 0x2b35a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b35a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b35a4:
    // 0x2b35a4: 0xc08c340  jal         func_230D00
label_2b35a8:
    if (ctx->pc == 0x2B35A8u) {
        ctx->pc = 0x2B35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35A4u;
        // 0x2b35a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B35ACu;
        goto label_2b35ac;
    }
    ctx->pc = 0x2B35A4u;
    SET_GPR_U32(ctx, 31, 0x2B35ACu);
    ctx->pc = 0x2B35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35A4u;
    // 0x2b35a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2B35A4u, 0x2B35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35ACu;
label_2b35ac:
    // 0x2b35ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b35acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b35b0:
    // 0x2b35b0: 0xc086618  jal         func_219860
label_2b35b4:
    if (ctx->pc == 0x2B35B4u) {
        ctx->pc = 0x2B35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35B0u;
        // 0x2b35b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B35B8u;
        goto label_2b35b8;
    }
    ctx->pc = 0x2B35B0u;
    SET_GPR_U32(ctx, 31, 0x2B35B8u);
    ctx->pc = 0x2B35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35B0u;
    // 0x2b35b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2B35B0u, 0x2B35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35B8u;
label_2b35b8:
    // 0x2b35b8: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2b35b8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b35bc:
    // 0x2b35bc: 0x0  nop
    ctx->pc = 0x2b35bcu;
    // NOP
label_2b35c0:
    // 0x2b35c0: 0x0  nop
    ctx->pc = 0x2b35c0u;
    // NOP
label_2b35c4:
    // 0x2b35c4: 0x46140504  c1          0x140504
    ctx->pc = 0x2b35c4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2b35c8:
    // 0x2b35c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b35c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b35cc:
    // 0x2b35cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b35ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b35d0:
    // 0x2b35d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b35d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b35d4:
    // 0x2b35d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b35d8:
    // 0x2b35d8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2b35d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2b35dc:
    // 0x2b35dc: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x2b35dcu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_2b35e0:
    // 0x2b35e0: 0xc0a367c  jal         func_28D9F0
label_2b35e4:
    if (ctx->pc == 0x2B35E4u) {
        ctx->pc = 0x2B35E8u;
        goto label_2b35e8;
    }
    ctx->pc = 0x2B35E0u;
    SET_GPR_U32(ctx, 31, 0x2B35E8u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B35E0u, 0x2B35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35E8u;
label_2b35e8:
    // 0x2b35e8: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
label_2b35ec:
    if (ctx->pc == 0x2B35ECu) {
        ctx->pc = 0x2B35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35E8u;
        // 0x2b35ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B35F0u;
        goto label_2b35f0;
    }
    ctx->pc = 0x2B35E8u;
    {
        const bool branch_taken_0x2b35e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35E8u;
        // 0x2b35ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35e8) {
            ctx->pc = 0x2B3924u;
            goto label_2b3924;
        }
    }
    ctx->pc = 0x2B35F0u;
label_2b35f0:
    // 0x2b35f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b35f4:
    // 0x2b35f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b35f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b35f8:
    // 0x2b35f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b35f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b35fc:
    // 0x2b35fc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b35fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b3600:
    // 0x2b3600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3604:
    // 0x2b3604: 0xc0bf3d4  jal         func_2FCF50
label_2b3608:
    if (ctx->pc == 0x2B3608u) {
        ctx->pc = 0x2B3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3604u;
        // 0x2b3608: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B360Cu;
        goto label_2b360c;
    }
    ctx->pc = 0x2B3604u;
    SET_GPR_U32(ctx, 31, 0x2B360Cu);
    ctx->pc = 0x2B3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3604u;
    // 0x2b3608: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B3604u, 0x2B360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B360Cu;
label_2b360c:
    // 0x2b360c: 0x1000011d  b           . + 4 + (0x11D << 2)
label_2b3610:
    if (ctx->pc == 0x2B3610u) {
        ctx->pc = 0x2B3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B360Cu;
        // 0x2b3610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3614u;
        goto label_2b3614;
    }
    ctx->pc = 0x2B360Cu;
    {
        const bool branch_taken_0x2b360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B360Cu;
        // 0x2b3610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b360c) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3614u;
label_2b3614:
    // 0x2b3614: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b3614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b3618:
    // 0x2b3618: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2b361c:
    if (ctx->pc == 0x2B361Cu) {
        ctx->pc = 0x2B361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3618u;
        // 0x2b361c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3620u;
        goto label_2b3620;
    }
    ctx->pc = 0x2B3618u;
    {
        const bool branch_taken_0x2b3618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3618u;
        // 0x2b361c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3618) {
            ctx->pc = 0x2B36D0u;
            goto label_2b36d0;
        }
    }
    ctx->pc = 0x2B3620u;
label_2b3620:
    // 0x2b3620: 0xc088e38  jal         func_2238E0
label_2b3624:
    if (ctx->pc == 0x2B3624u) {
        ctx->pc = 0x2B3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3620u;
        // 0x2b3624: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3628u;
        goto label_2b3628;
    }
    ctx->pc = 0x2B3620u;
    SET_GPR_U32(ctx, 31, 0x2B3628u);
    ctx->pc = 0x2B3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3620u;
    // 0x2b3624: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x2B3620u, 0x2B3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3628u;
label_2b3628:
    // 0x2b3628: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_2b362c:
    if (ctx->pc == 0x2B362Cu) {
        ctx->pc = 0x2B3630u;
        goto label_2b3630;
    }
    ctx->pc = 0x2B3628u;
    {
        const bool branch_taken_0x2b3628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b3628) {
            ctx->pc = 0x2B3650u;
            goto label_2b3650;
        }
    }
    ctx->pc = 0x2B3630u;
label_2b3630:
    // 0x2b3630: 0xc088e80  jal         func_223A00
label_2b3634:
    if (ctx->pc == 0x2B3634u) {
        ctx->pc = 0x2B3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3630u;
        // 0x2b3634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3638u;
        goto label_2b3638;
    }
    ctx->pc = 0x2B3630u;
    SET_GPR_U32(ctx, 31, 0x2B3638u);
    ctx->pc = 0x2B3634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3630u;
    // 0x2b3634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x2B3630u, 0x2B3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3638u;
label_2b3638:
    // 0x2b3638: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2b363c:
    if (ctx->pc == 0x2B363Cu) {
        ctx->pc = 0x2B3640u;
        goto label_2b3640;
    }
    ctx->pc = 0x2B3638u;
    {
        const bool branch_taken_0x2b3638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b3638) {
            ctx->pc = 0x2B3650u;
            goto label_2b3650;
        }
    }
    ctx->pc = 0x2B3640u;
label_2b3640:
    // 0x2b3640: 0xc08a050  jal         func_228140
label_2b3644:
    if (ctx->pc == 0x2B3644u) {
        ctx->pc = 0x2B3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3640u;
        // 0x2b3644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3648u;
        goto label_2b3648;
    }
    ctx->pc = 0x2B3640u;
    SET_GPR_U32(ctx, 31, 0x2B3648u);
    ctx->pc = 0x2B3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3640u;
    // 0x2b3644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228140u, 0x2B3640u, 0x2B3648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3648u;
label_2b3648:
    // 0x2b3648: 0x1450005e  bne         $v0, $s0, . + 4 + (0x5E << 2)
label_2b364c:
    if (ctx->pc == 0x2B364Cu) {
        ctx->pc = 0x2B3650u;
        goto label_2b3650;
    }
    ctx->pc = 0x2B3648u;
    {
        const bool branch_taken_0x2b3648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b3648) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3650u;
label_2b3650:
    // 0x2b3650: 0xc0e409a  jal         func_390268
label_2b3654:
    if (ctx->pc == 0x2B3654u) {
        ctx->pc = 0x2B3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3650u;
        // 0x2b3654: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3658u;
        goto label_2b3658;
    }
    ctx->pc = 0x2B3650u;
    SET_GPR_U32(ctx, 31, 0x2B3658u);
    ctx->pc = 0x2B3654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3650u;
    // 0x2b3654: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B3650u, 0x2B3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3658u;
label_2b3658:
    // 0x2b3658: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_2b365c:
    if (ctx->pc == 0x2B365Cu) {
        ctx->pc = 0x2B3660u;
        goto label_2b3660;
    }
    ctx->pc = 0x2B3658u;
    {
        const bool branch_taken_0x2b3658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3658) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3660u;
label_2b3660:
    // 0x2b3660: 0xc087502  jal         func_21D408
label_2b3664:
    if (ctx->pc == 0x2B3664u) {
        ctx->pc = 0x2B3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3660u;
        // 0x2b3664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3668u;
        goto label_2b3668;
    }
    ctx->pc = 0x2B3660u;
    SET_GPR_U32(ctx, 31, 0x2B3668u);
    ctx->pc = 0x2B3664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3660u;
    // 0x2b3664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B3660u, 0x2B3668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3668u;
label_2b3668:
    // 0x2b3668: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b366c:
    // 0x2b366c: 0xc0a408c  jal         func_290230
label_2b3670:
    if (ctx->pc == 0x2B3670u) {
        ctx->pc = 0x2B3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B366Cu;
        // 0x2b3670: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3674u;
        goto label_2b3674;
    }
    ctx->pc = 0x2B366Cu;
    SET_GPR_U32(ctx, 31, 0x2B3674u);
    ctx->pc = 0x2B3670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B366Cu;
    // 0x2b3670: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B366Cu, 0x2B3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3674u;
label_2b3674:
    // 0x2b3674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3678:
    // 0x2b3678: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
label_2b367c:
    if (ctx->pc == 0x2B367Cu) {
        ctx->pc = 0x2B3680u;
        goto label_2b3680;
    }
    ctx->pc = 0x2B3678u;
    {
        const bool branch_taken_0x2b3678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3678) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3680u;
label_2b3680:
    // 0x2b3680: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3684:
    // 0x2b3684: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2b3684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2b3688:
    // 0x2b3688: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2b3688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2b368c:
    // 0x2b368c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b368cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3690:
    // 0x2b3690: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2b3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3694:
    // 0x2b3694: 0xc0a367c  jal         func_28D9F0
label_2b3698:
    if (ctx->pc == 0x2B3698u) {
        ctx->pc = 0x2B3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3694u;
        // 0x2b3698: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B369Cu;
        goto label_2b369c;
    }
    ctx->pc = 0x2B3694u;
    SET_GPR_U32(ctx, 31, 0x2B369Cu);
    ctx->pc = 0x2B3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3694u;
    // 0x2b3698: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B3694u, 0x2B369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B369Cu;
label_2b369c:
    // 0x2b369c: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_2b36a0:
    if (ctx->pc == 0x2B36A0u) {
        ctx->pc = 0x2B36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B369Cu;
        // 0x2b36a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36A4u;
        goto label_2b36a4;
    }
    ctx->pc = 0x2B369Cu;
    {
        const bool branch_taken_0x2b369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B369Cu;
        // 0x2b36a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b369c) {
            ctx->pc = 0x2B3924u;
            goto label_2b3924;
        }
    }
    ctx->pc = 0x2B36A4u;
label_2b36a4:
    // 0x2b36a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b36a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b36a8:
    // 0x2b36a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b36a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b36ac:
    // 0x2b36ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b36acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b36b0:
    // 0x2b36b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b36b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b36b4:
    // 0x2b36b4: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2b36b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2b36b8:
    // 0x2b36b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b36b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b36bc:
    // 0x2b36bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b36bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b36c0:
    // 0x2b36c0: 0xc0bf3d4  jal         func_2FCF50
label_2b36c4:
    if (ctx->pc == 0x2B36C4u) {
        ctx->pc = 0x2B36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36C0u;
        // 0x2b36c4: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36C8u;
        goto label_2b36c8;
    }
    ctx->pc = 0x2B36C0u;
    SET_GPR_U32(ctx, 31, 0x2B36C8u);
    ctx->pc = 0x2B36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B36C0u;
    // 0x2b36c4: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B36C0u, 0x2B36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B36C8u;
label_2b36c8:
    // 0x2b36c8: 0x100000ee  b           . + 4 + (0xEE << 2)
label_2b36cc:
    if (ctx->pc == 0x2B36CCu) {
        ctx->pc = 0x2B36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36C8u;
        // 0x2b36cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36D0u;
        goto label_2b36d0;
    }
    ctx->pc = 0x2B36C8u;
    {
        const bool branch_taken_0x2b36c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36C8u;
        // 0x2b36cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36c8) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B36D0u;
label_2b36d0:
    // 0x2b36d0: 0xc089018  jal         func_224060
label_2b36d4:
    if (ctx->pc == 0x2B36D4u) {
        ctx->pc = 0x2B36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36D0u;
        // 0x2b36d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36D8u;
        goto label_2b36d8;
    }
    ctx->pc = 0x2B36D0u;
    SET_GPR_U32(ctx, 31, 0x2B36D8u);
    ctx->pc = 0x2B36D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B36D0u;
    // 0x2b36d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2B36D0u, 0x2B36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B36D8u;
label_2b36d8:
    // 0x2b36d8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_2b36dc:
    if (ctx->pc == 0x2B36DCu) {
        ctx->pc = 0x2B36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36D8u;
        // 0x2b36dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36E0u;
        goto label_2b36e0;
    }
    ctx->pc = 0x2B36D8u;
    {
        const bool branch_taken_0x2b36d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36D8u;
        // 0x2b36dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36d8) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B36E0u;
label_2b36e0:
    // 0x2b36e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b36e4:
    // 0x2b36e4: 0x8c64caa8  lw          $a0, -0x3558($v1)
    ctx->pc = 0x2b36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953640)));
label_2b36e8:
    // 0x2b36e8: 0x8c46020c  lw          $a2, 0x20C($v0)
    ctx->pc = 0x2b36e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b36ec:
    // 0x2b36ec: 0xc059162  jal         func_164588
label_2b36f0:
    if (ctx->pc == 0x2B36F0u) {
        ctx->pc = 0x2B36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36ECu;
        // 0x2b36f0: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36F4u;
        goto label_2b36f4;
    }
    ctx->pc = 0x2B36ECu;
    SET_GPR_U32(ctx, 31, 0x2B36F4u);
    ctx->pc = 0x2B36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B36ECu;
    // 0x2b36f0: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164588u, 0x2B36ECu, 0x2B36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B36F4u;
label_2b36f4:
    // 0x2b36f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b36f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b36f8:
    // 0x2b36f8: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_2b36fc:
    if (ctx->pc == 0x2B36FCu) {
        ctx->pc = 0x2B3700u;
        goto label_2b3700;
    }
    ctx->pc = 0x2B36F8u;
    {
        const bool branch_taken_0x2b36f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b36f8) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3700u;
label_2b3700:
    // 0x2b3700: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3704:
    // 0x2b3704: 0xc0a447e  jal         func_2911F8
label_2b3708:
    if (ctx->pc == 0x2B3708u) {
        ctx->pc = 0x2B3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3704u;
        // 0x2b3708: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B370Cu;
        goto label_2b370c;
    }
    ctx->pc = 0x2B3704u;
    SET_GPR_U32(ctx, 31, 0x2B370Cu);
    ctx->pc = 0x2B3708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3704u;
    // 0x2b3708: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911F8u, 0x2B3704u, 0x2B370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B370Cu;
label_2b370c:
    // 0x2b370c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2b3710:
    if (ctx->pc == 0x2B3710u) {
        ctx->pc = 0x2B3714u;
        goto label_2b3714;
    }
    ctx->pc = 0x2B370Cu;
    {
        const bool branch_taken_0x2b370c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b370c) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3714u;
label_2b3714:
    // 0x2b3714: 0xc087502  jal         func_21D408
label_2b3718:
    if (ctx->pc == 0x2B3718u) {
        ctx->pc = 0x2B3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3714u;
        // 0x2b3718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B371Cu;
        goto label_2b371c;
    }
    ctx->pc = 0x2B3714u;
    SET_GPR_U32(ctx, 31, 0x2B371Cu);
    ctx->pc = 0x2B3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3714u;
    // 0x2b3718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B3714u, 0x2B371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B371Cu;
label_2b371c:
    // 0x2b371c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3720:
    // 0x2b3720: 0xc0a3fa4  jal         func_28FE90
label_2b3724:
    if (ctx->pc == 0x2B3724u) {
        ctx->pc = 0x2B3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3720u;
        // 0x2b3724: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3728u;
        goto label_2b3728;
    }
    ctx->pc = 0x2B3720u;
    SET_GPR_U32(ctx, 31, 0x2B3728u);
    ctx->pc = 0x2B3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3720u;
    // 0x2b3724: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B3720u, 0x2B3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3728u;
label_2b3728:
    // 0x2b3728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b372c:
    // 0x2b372c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b372cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b3730:
    // 0x2b3730: 0xc0a7ab6  jal         func_29EAD8
label_2b3734:
    if (ctx->pc == 0x2B3734u) {
        ctx->pc = 0x2B3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3730u;
        // 0x2b3734: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3738u;
        goto label_2b3738;
    }
    ctx->pc = 0x2B3730u;
    SET_GPR_U32(ctx, 31, 0x2B3738u);
    ctx->pc = 0x2B3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3730u;
    // 0x2b3734: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2B3730u, 0x2B3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3738u;
label_2b3738:
    // 0x2b3738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b373c:
    // 0x2b373c: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_2b3740:
    if (ctx->pc == 0x2B3740u) {
        ctx->pc = 0x2B3744u;
        goto label_2b3744;
    }
    ctx->pc = 0x2B373Cu;
    {
        const bool branch_taken_0x2b373c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b373c) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3744u;
label_2b3744:
    // 0x2b3744: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_2b3748:
    if (ctx->pc == 0x2B3748u) {
        ctx->pc = 0x2B3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3744u;
        // 0x2b3748: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B374Cu;
        goto label_2b374c;
    }
    ctx->pc = 0x2B3744u;
    {
        const bool branch_taken_0x2b3744 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3744u;
        // 0x2b3748: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3744) {
            ctx->pc = 0x2B3760u;
            goto label_2b3760;
        }
    }
    ctx->pc = 0x2B374Cu;
label_2b374c:
    // 0x2b374c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2b374cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3750:
    // 0x2b3750: 0x0  nop
    ctx->pc = 0x2b3750u;
    // NOP
label_2b3754:
    // 0x2b3754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2b3758:
    // 0x2b3758: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b375c:
    if (ctx->pc == 0x2B375Cu) {
        ctx->pc = 0x2B3760u;
        goto label_2b3760;
    }
    ctx->pc = 0x2B3758u;
    {
        const bool branch_taken_0x2b3758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3758) {
            ctx->pc = 0x2B3778u;
            goto label_2b3778;
        }
    }
    ctx->pc = 0x2B3760u;
label_2b3760:
    // 0x2b3760: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2b3760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2b3764:
    // 0x2b3764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b3764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b3768:
    // 0x2b3768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b376c:
    // 0x2b376c: 0x0  nop
    ctx->pc = 0x2b376cu;
    // NOP
label_2b3770:
    // 0x2b3770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2b3774:
    // 0x2b3774: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b3774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b3778:
    // 0x2b3778: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2b3778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2b377c:
    // 0x2b377c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b377cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b3780:
    // 0x2b3780: 0xc10b1c6  jal         func_42C718
label_2b3784:
    if (ctx->pc == 0x2B3784u) {
        ctx->pc = 0x2B3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3780u;
        // 0x2b3784: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3788u;
        goto label_2b3788;
    }
    ctx->pc = 0x2B3780u;
    SET_GPR_U32(ctx, 31, 0x2B3788u);
    ctx->pc = 0x2B3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3780u;
    // 0x2b3784: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2B3780u, 0x2B3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3788u;
label_2b3788:
    // 0x2b3788: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b3788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2b378c:
    // 0x2b378c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3790:
    // 0x2b3790: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b3790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2b3794:
    // 0x2b3794: 0xc0cd4ee  jal         func_3353B8
label_2b3798:
    if (ctx->pc == 0x2B3798u) {
        ctx->pc = 0x2B3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3794u;
        // 0x2b3798: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B379Cu;
        goto label_2b379c;
    }
    ctx->pc = 0x2B3794u;
    SET_GPR_U32(ctx, 31, 0x2B379Cu);
    ctx->pc = 0x2B3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3794u;
    // 0x2b3798: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B3794u, 0x2B379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B379Cu;
label_2b379c:
    // 0x2b379c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2b379cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2b37a0:
    // 0x2b37a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b37a4:
    if (ctx->pc == 0x2B37A4u) {
        ctx->pc = 0x2B37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37A0u;
        // 0x2b37a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B37A8u;
        goto label_2b37a8;
    }
    ctx->pc = 0x2B37A0u;
    {
        const bool branch_taken_0x2b37a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37A0u;
        // 0x2b37a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37a0) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B37A8u;
label_2b37a8:
    // 0x2b37a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b37a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b37ac:
    // 0x2b37ac: 0xc0891de  jal         func_224778
label_2b37b0:
    if (ctx->pc == 0x2B37B0u) {
        ctx->pc = 0x2B37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37ACu;
        // 0x2b37b0: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B37B4u;
        goto label_2b37b4;
    }
    ctx->pc = 0x2B37ACu;
    SET_GPR_U32(ctx, 31, 0x2B37B4u);
    ctx->pc = 0x2B37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B37ACu;
    // 0x2b37b0: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2B37ACu, 0x2B37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37B4u;
label_2b37b4:
    // 0x2b37b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b37b8:
    // 0x2b37b8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2b37bc:
    if (ctx->pc == 0x2B37BCu) {
        ctx->pc = 0x2B37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37B8u;
        // 0x2b37bc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B37C0u;
        goto label_2b37c0;
    }
    ctx->pc = 0x2B37B8u;
    {
        const bool branch_taken_0x2b37b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37B8u;
        // 0x2b37bc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37b8) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B37C0u;
label_2b37c0:
    // 0x2b37c0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2b37c4:
    // 0x2b37c4: 0xc088e58  jal         func_223960
label_2b37c8:
    if (ctx->pc == 0x2B37C8u) {
        ctx->pc = 0x2B37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37C4u;
        // 0x2b37c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B37CCu;
        goto label_2b37cc;
    }
    ctx->pc = 0x2B37C4u;
    SET_GPR_U32(ctx, 31, 0x2B37CCu);
    ctx->pc = 0x2B37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B37C4u;
    // 0x2b37c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x2B37C4u, 0x2B37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37CCu;
label_2b37cc:
    // 0x2b37cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b37d0:
    // 0x2b37d0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_2b37d4:
    if (ctx->pc == 0x2B37D4u) {
        ctx->pc = 0x2B37D8u;
        goto label_2b37d8;
    }
    ctx->pc = 0x2B37D0u;
    {
        const bool branch_taken_0x2b37d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b37d0) {
            ctx->pc = 0x2B3848u;
            goto label_2b3848;
        }
    }
    ctx->pc = 0x2B37D8u;
label_2b37d8:
    // 0x2b37d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b37dc:
    // 0x2b37dc: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x2b37dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_2b37e0:
    // 0x2b37e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2b37e4:
    if (ctx->pc == 0x2B37E4u) {
        ctx->pc = 0x2B37E8u;
        goto label_2b37e8;
    }
    ctx->pc = 0x2B37E0u;
    {
        const bool branch_taken_0x2b37e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b37e0) {
            ctx->pc = 0x2B3848u;
            goto label_2b3848;
        }
    }
    ctx->pc = 0x2B37E8u;
label_2b37e8:
    // 0x2b37e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b37ec:
    // 0x2b37ec: 0xc0a447e  jal         func_2911F8
label_2b37f0:
    if (ctx->pc == 0x2B37F0u) {
        ctx->pc = 0x2B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37ECu;
        // 0x2b37f0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B37F4u;
        goto label_2b37f4;
    }
    ctx->pc = 0x2B37ECu;
    SET_GPR_U32(ctx, 31, 0x2B37F4u);
    ctx->pc = 0x2B37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B37ECu;
    // 0x2b37f0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911F8u, 0x2B37ECu, 0x2B37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37F4u;
label_2b37f4:
    // 0x2b37f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2b37f8:
    if (ctx->pc == 0x2B37F8u) {
        ctx->pc = 0x2B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37F4u;
        // 0x2b37f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B37FCu;
        goto label_2b37fc;
    }
    ctx->pc = 0x2B37F4u;
    {
        const bool branch_taken_0x2b37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37F4u;
        // 0x2b37f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37f4) {
            ctx->pc = 0x2B3824u;
            goto label_2b3824;
        }
    }
    ctx->pc = 0x2B37FCu;
label_2b37fc:
    // 0x2b37fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3800:
    // 0x2b3800: 0xc0a3658  jal         func_28D960
label_2b3804:
    if (ctx->pc == 0x2B3804u) {
        ctx->pc = 0x2B3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3800u;
        // 0x2b3804: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3808u;
        goto label_2b3808;
    }
    ctx->pc = 0x2B3800u;
    SET_GPR_U32(ctx, 31, 0x2B3808u);
    ctx->pc = 0x2B3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3800u;
    // 0x2b3804: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B3800u, 0x2B3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3808u;
label_2b3808:
    // 0x2b3808: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_2b380c:
    if (ctx->pc == 0x2B380Cu) {
        ctx->pc = 0x2B380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3808u;
        // 0x2b380c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3810u;
        goto label_2b3810;
    }
    ctx->pc = 0x2B3808u;
    {
        const bool branch_taken_0x2b3808 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3808u;
        // 0x2b380c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3808) {
            ctx->pc = 0x2B3824u;
            goto label_2b3824;
        }
    }
    ctx->pc = 0x2B3810u;
label_2b3810:
    // 0x2b3810: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b3810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b3814:
    // 0x2b3814: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2b3814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2b3818:
    // 0x2b3818: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x2b3818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_2b381c:
    // 0x2b381c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2b3820:
    if (ctx->pc == 0x2B3820u) {
        ctx->pc = 0x2B3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B381Cu;
        // 0x2b3820: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3824u;
        goto label_2b3824;
    }
    ctx->pc = 0x2B381Cu;
    {
        const bool branch_taken_0x2b381c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B381Cu;
        // 0x2b3820: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b381c) {
            ctx->pc = 0x2B3848u;
            goto label_2b3848;
        }
    }
    ctx->pc = 0x2B3824u;
label_2b3824:
    // 0x2b3824: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b3824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b3828:
    // 0x2b3828: 0xc08903a  jal         func_2240E8
label_2b382c:
    if (ctx->pc == 0x2B382Cu) {
        ctx->pc = 0x2B382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3828u;
        // 0x2b382c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3830u;
        goto label_2b3830;
    }
    ctx->pc = 0x2B3828u;
    SET_GPR_U32(ctx, 31, 0x2B3830u);
    ctx->pc = 0x2B382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3828u;
    // 0x2b382c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2240E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2240E8u, 0x2B3828u, 0x2B3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3830u;
label_2b3830:
    // 0x2b3830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3834:
    // 0x2b3834: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2b3838:
    if (ctx->pc == 0x2B3838u) {
        ctx->pc = 0x2B3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3834u;
        // 0x2b3838: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B383Cu;
        goto label_2b383c;
    }
    ctx->pc = 0x2B3834u;
    {
        const bool branch_taken_0x2b3834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3834u;
        // 0x2b3838: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3834) {
            ctx->pc = 0x2B3848u;
            goto label_2b3848;
        }
    }
    ctx->pc = 0x2B383Cu;
label_2b383c:
    // 0x2b383c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3840:
    // 0x2b3840: 0x10000090  b           . + 4 + (0x90 << 2)
label_2b3844:
    if (ctx->pc == 0x2B3844u) {
        ctx->pc = 0x2B3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3840u;
        // 0x2b3844: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3848u;
        goto label_2b3848;
    }
    ctx->pc = 0x2B3840u;
    {
        const bool branch_taken_0x2b3840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3840u;
        // 0x2b3844: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3840) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3848u;
label_2b3848:
    // 0x2b3848: 0xc089020  jal         func_224080
label_2b384c:
    if (ctx->pc == 0x2B384Cu) {
        ctx->pc = 0x2B384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3848u;
        // 0x2b384c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3850u;
        goto label_2b3850;
    }
    ctx->pc = 0x2B3848u;
    SET_GPR_U32(ctx, 31, 0x2B3850u);
    ctx->pc = 0x2B384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3848u;
    // 0x2b384c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224080u, 0x2B3848u, 0x2B3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3850u;
label_2b3850:
    // 0x2b3850: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b3850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3854:
    // 0x2b3854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3858:
    // 0x2b3858: 0x1642008a  bne         $s2, $v0, . + 4 + (0x8A << 2)
label_2b385c:
    if (ctx->pc == 0x2B385Cu) {
        ctx->pc = 0x2B385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3858u;
        // 0x2b385c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3860u;
        goto label_2b3860;
    }
    ctx->pc = 0x2B3858u;
    {
        const bool branch_taken_0x2b3858 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3858u;
        // 0x2b385c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3858) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3860u;
label_2b3860:
    // 0x2b3860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3864:
    // 0x2b3864: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b3864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2b3868:
    // 0x2b3868: 0x86a50092  lh          $a1, 0x92($s5)
    ctx->pc = 0x2b3868u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2b386c:
    // 0x2b386c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2b3870:
    // 0x2b3870: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2b3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2b3874:
    // 0x2b3874: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2b3874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b3878:
    // 0x2b3878: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b3878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2b387c:
    // 0x2b387c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b387cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2b3880:
    // 0x2b3880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3884:
    // 0x2b3884: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b3884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b3888:
    // 0x2b3888: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b3888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b388c:
    // 0x2b388c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2b388cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_2b3890:
    // 0x2b3890: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2b3890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2b3894:
    // 0x2b3894: 0xc136d6c  jal         func_4DB5B0
label_2b3898:
    if (ctx->pc == 0x2B3898u) {
        ctx->pc = 0x2B3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3894u;
        // 0x2b3898: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B389Cu;
        goto label_2b389c;
    }
    ctx->pc = 0x2B3894u;
    SET_GPR_U32(ctx, 31, 0x2B389Cu);
    ctx->pc = 0x2B3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3894u;
    // 0x2b3898: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2B3894u, 0x2B389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B389Cu;
label_2b389c:
    // 0x2b389c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2b389cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2b38a0:
    // 0x2b38a0: 0xc0e409a  jal         func_390268
label_2b38a4:
    if (ctx->pc == 0x2B38A4u) {
        ctx->pc = 0x2B38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38A0u;
        // 0x2b38a4: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38A8u;
        goto label_2b38a8;
    }
    ctx->pc = 0x2B38A0u;
    SET_GPR_U32(ctx, 31, 0x2B38A8u);
    ctx->pc = 0x2B38A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B38A0u;
    // 0x2b38a4: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B38A0u, 0x2B38A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38A8u;
label_2b38a8:
    // 0x2b38a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b38a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b38ac:
    // 0x2b38ac: 0x12000075  beqz        $s0, . + 4 + (0x75 << 2)
label_2b38b0:
    if (ctx->pc == 0x2B38B0u) {
        ctx->pc = 0x2B38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38ACu;
        // 0x2b38b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38B4u;
        goto label_2b38b4;
    }
    ctx->pc = 0x2B38ACu;
    {
        const bool branch_taken_0x2b38ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38ACu;
        // 0x2b38b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38ac) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B38B4u;
label_2b38b4:
    // 0x2b38b4: 0x52130074  beql        $s0, $s3, . + 4 + (0x74 << 2)
label_2b38b8:
    if (ctx->pc == 0x2B38B8u) {
        ctx->pc = 0x2B38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38B4u;
        // 0x2b38b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38BCu;
        goto label_2b38bc;
    }
    ctx->pc = 0x2B38B4u;
    {
        const bool branch_taken_0x2b38b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b38b4) {
            ctx->pc = 0x2B38B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B38B4u;
            // 0x2b38b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A88u;
            goto label_2b3a88;
        }
    }
    ctx->pc = 0x2B38BCu;
label_2b38bc:
    // 0x2b38bc: 0xc08a096  jal         func_228258
label_2b38c0:
    if (ctx->pc == 0x2B38C0u) {
        ctx->pc = 0x2B38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38BCu;
        // 0x2b38c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38C4u;
        goto label_2b38c4;
    }
    ctx->pc = 0x2B38BCu;
    SET_GPR_U32(ctx, 31, 0x2B38C4u);
    ctx->pc = 0x2B38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B38BCu;
    // 0x2b38c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2B38BCu, 0x2B38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38C4u;
label_2b38c4:
    // 0x2b38c4: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_2b38c8:
    if (ctx->pc == 0x2B38C8u) {
        ctx->pc = 0x2B38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38C4u;
        // 0x2b38c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38CCu;
        goto label_2b38cc;
    }
    ctx->pc = 0x2B38C4u;
    {
        const bool branch_taken_0x2b38c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38C4u;
        // 0x2b38c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38c4) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B38CCu;
label_2b38cc:
    // 0x2b38cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b38d0:
    // 0x2b38d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2b38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b38d4:
    // 0x2b38d4: 0xc441013c  lwc1        $f1, 0x13C($v0)
    ctx->pc = 0x2b38d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b38d8:
    // 0x2b38d8: 0x1072000c  beq         $v1, $s2, . + 4 + (0xC << 2)
label_2b38dc:
    if (ctx->pc == 0x2B38DCu) {
        ctx->pc = 0x2B38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38D8u;
        // 0x2b38dc: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38E0u;
        goto label_2b38e0;
    }
    ctx->pc = 0x2B38D8u;
    {
        const bool branch_taken_0x2b38d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38D8u;
        // 0x2b38dc: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38d8) {
            ctx->pc = 0x2B390Cu;
            goto label_2b390c;
        }
    }
    ctx->pc = 0x2B38E0u;
label_2b38e0:
    // 0x2b38e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b38e4:
    // 0x2b38e4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2b38e8:
    if (ctx->pc == 0x2B38E8u) {
        ctx->pc = 0x2B38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38E4u;
        // 0x2b38e8: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38ECu;
        goto label_2b38ec;
    }
    ctx->pc = 0x2B38E4u;
    {
        const bool branch_taken_0x2b38e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38E4u;
        // 0x2b38e8: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38e4) {
            ctx->pc = 0x2B390Cu;
            goto label_2b390c;
        }
    }
    ctx->pc = 0x2B38ECu;
label_2b38ec:
    // 0x2b38ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b38ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b38f0:
    // 0x2b38f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b38f4:
    if (ctx->pc == 0x2B38F4u) {
        ctx->pc = 0x2B38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38F0u;
        // 0x2b38f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38F8u;
        goto label_2b38f8;
    }
    ctx->pc = 0x2B38F0u;
    {
        const bool branch_taken_0x2b38f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38F0u;
        // 0x2b38f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38f0) {
            ctx->pc = 0x2B3904u;
            goto label_2b3904;
        }
    }
    ctx->pc = 0x2B38F8u;
label_2b38f8:
    // 0x2b38f8: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x2b38f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_2b38fc:
    // 0x2b38fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b3900:
    // 0x2b3900: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x2b3900u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2b3904:
    // 0x2b3904: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2b3908:
    if (ctx->pc == 0x2B3908u) {
        ctx->pc = 0x2B390Cu;
        goto label_2b390c;
    }
    ctx->pc = 0x2B3904u;
    {
        const bool branch_taken_0x2b3904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3904) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B390Cu;
label_2b390c:
    // 0x2b390c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2b390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3910:
    // 0x2b3910: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b3910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3914:
    // 0x2b3914: 0x0  nop
    ctx->pc = 0x2b3914u;
    // NOP
label_2b3918:
    // 0x2b3918: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2b391c:
    if (ctx->pc == 0x2B391Cu) {
        ctx->pc = 0x2B3920u;
        goto label_2b3920;
    }
    ctx->pc = 0x2B3918u;
    {
        const bool branch_taken_0x2b3918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3918) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B3920u;
label_2b3920:
    // 0x2b3920: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2b3920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2b3924:
    // 0x2b3924: 0x10000057  b           . + 4 + (0x57 << 2)
label_2b3928:
    if (ctx->pc == 0x2B3928u) {
        ctx->pc = 0x2B3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3924u;
        // 0x2b3928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B392Cu;
        goto label_2b392c;
    }
    ctx->pc = 0x2B3924u;
    {
        const bool branch_taken_0x2b3924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3924u;
        // 0x2b3928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3924) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B392Cu;
label_2b392c:
    // 0x2b392c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2b3930:
    if (ctx->pc == 0x2B3930u) {
        ctx->pc = 0x2B3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B392Cu;
        // 0x2b3930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3934u;
        goto label_2b3934;
    }
    ctx->pc = 0x2B392Cu;
    {
        const bool branch_taken_0x2b392c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B392Cu;
        // 0x2b3930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b392c) {
            ctx->pc = 0x2B3944u;
            goto label_2b3944;
        }
    }
    ctx->pc = 0x2B3934u;
label_2b3934:
    // 0x2b3934: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b3938:
    if (ctx->pc == 0x2B3938u) {
        ctx->pc = 0x2B3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3934u;
        // 0x2b3938: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B393Cu;
        goto label_2b393c;
    }
    ctx->pc = 0x2B3934u;
    {
        const bool branch_taken_0x2b3934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3934u;
        // 0x2b3938: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3934) {
            ctx->pc = 0x2B3944u;
            goto label_2b3944;
        }
    }
    ctx->pc = 0x2B393Cu;
label_2b393c:
    // 0x2b393c: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
label_2b3940:
    if (ctx->pc == 0x2B3940u) {
        ctx->pc = 0x2B3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B393Cu;
        // 0x2b3940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3944u;
        goto label_2b3944;
    }
    ctx->pc = 0x2B393Cu;
    {
        const bool branch_taken_0x2b393c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B393Cu;
        // 0x2b3940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b393c) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3944u;
label_2b3944:
    // 0x2b3944: 0xc088e38  jal         func_2238E0
label_2b3948:
    if (ctx->pc == 0x2B3948u) {
        ctx->pc = 0x2B3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3944u;
        // 0x2b3948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B394Cu;
        goto label_2b394c;
    }
    ctx->pc = 0x2B3944u;
    SET_GPR_U32(ctx, 31, 0x2B394Cu);
    ctx->pc = 0x2B3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3944u;
    // 0x2b3948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x2B3944u, 0x2B394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B394Cu;
label_2b394c:
    // 0x2b394c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_2b3950:
    if (ctx->pc == 0x2B3950u) {
        ctx->pc = 0x2B3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B394Cu;
        // 0x2b3950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3954u;
        goto label_2b3954;
    }
    ctx->pc = 0x2B394Cu;
    {
        const bool branch_taken_0x2b394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B394Cu;
        // 0x2b3950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b394c) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3954u;
label_2b3954:
    // 0x2b3954: 0xc08a034  jal         func_2280D0
label_2b3958:
    if (ctx->pc == 0x2B3958u) {
        ctx->pc = 0x2B3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3954u;
        // 0x2b3958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B395Cu;
        goto label_2b395c;
    }
    ctx->pc = 0x2B3954u;
    SET_GPR_U32(ctx, 31, 0x2B395Cu);
    ctx->pc = 0x2B3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3954u;
    // 0x2b3958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x2B3954u, 0x2B395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B395Cu;
label_2b395c:
    // 0x2b395c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_2b3960:
    if (ctx->pc == 0x2B3960u) {
        ctx->pc = 0x2B3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B395Cu;
        // 0x2b3960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3964u;
        goto label_2b3964;
    }
    ctx->pc = 0x2B395Cu;
    {
        const bool branch_taken_0x2b395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B395Cu;
        // 0x2b3960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b395c) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3964u;
label_2b3964:
    // 0x2b3964: 0xc08a050  jal         func_228140
label_2b3968:
    if (ctx->pc == 0x2B3968u) {
        ctx->pc = 0x2B3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3964u;
        // 0x2b3968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B396Cu;
        goto label_2b396c;
    }
    ctx->pc = 0x2B3964u;
    SET_GPR_U32(ctx, 31, 0x2B396Cu);
    ctx->pc = 0x2B3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3964u;
    // 0x2b3968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228140u, 0x2B3964u, 0x2B396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B396Cu;
label_2b396c:
    // 0x2b396c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_2b3970:
    if (ctx->pc == 0x2B3970u) {
        ctx->pc = 0x2B3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B396Cu;
        // 0x2b3970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3974u;
        goto label_2b3974;
    }
    ctx->pc = 0x2B396Cu;
    {
        const bool branch_taken_0x2b396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B396Cu;
        // 0x2b3970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b396c) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3974u;
label_2b3974:
    // 0x2b3974: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3978:
    // 0x2b3978: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2b3978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b397c:
    // 0x2b397c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b397cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2b3980:
    // 0x2b3980: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b3980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3984:
    // 0x2b3984: 0x0  nop
    ctx->pc = 0x2b3984u;
    // NOP
label_2b3988:
    // 0x2b3988: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_2b398c:
    if (ctx->pc == 0x2B398Cu) {
        ctx->pc = 0x2B398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3988u;
        // 0x2b398c: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3990u;
        goto label_2b3990;
    }
    ctx->pc = 0x2B3988u;
    {
        const bool branch_taken_0x2b3988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3988u;
        // 0x2b398c: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3988) {
            ctx->pc = 0x2B3A80u;
            goto label_2b3a80;
        }
    }
    ctx->pc = 0x2B3990u;
label_2b3990:
    // 0x2b3990: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2b3990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3994:
    // 0x2b3994: 0x0  nop
    ctx->pc = 0x2b3994u;
    // NOP
label_2b3998:
    // 0x2b3998: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2b399c:
    if (ctx->pc == 0x2B399Cu) {
        ctx->pc = 0x2B399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3998u;
        // 0x2b399c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39A0u;
        goto label_2b39a0;
    }
    ctx->pc = 0x2B3998u;
    {
        const bool branch_taken_0x2b3998 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3998u;
        // 0x2b399c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3998) {
            ctx->pc = 0x2B39C0u;
            goto label_2b39c0;
        }
    }
    ctx->pc = 0x2B39A0u;
label_2b39a0:
    // 0x2b39a0: 0x3c014023  lui         $at, 0x4023
    ctx->pc = 0x2b39a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16419 << 16));
label_2b39a4:
    // 0x2b39a4: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2b39a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_2b39a8:
    // 0x2b39a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b39a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b39ac:
    // 0x2b39ac: 0x0  nop
    ctx->pc = 0x2b39acu;
    // NOP
label_2b39b0:
    // 0x2b39b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b39b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b39b4:
    // 0x2b39b4: 0x0  nop
    ctx->pc = 0x2b39b4u;
    // NOP
label_2b39b8:
    // 0x2b39b8: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_2b39bc:
    if (ctx->pc == 0x2B39BCu) {
        ctx->pc = 0x2B39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39B8u;
        // 0x2b39bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39C0u;
        goto label_2b39c0;
    }
    ctx->pc = 0x2B39B8u;
    {
        const bool branch_taken_0x2b39b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39B8u;
        // 0x2b39bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39b8) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B39C0u;
label_2b39c0:
    // 0x2b39c0: 0xc088e58  jal         func_223960
label_2b39c4:
    if (ctx->pc == 0x2B39C4u) {
        ctx->pc = 0x2B39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39C0u;
        // 0x2b39c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39C8u;
        goto label_2b39c8;
    }
    ctx->pc = 0x2B39C0u;
    SET_GPR_U32(ctx, 31, 0x2B39C8u);
    ctx->pc = 0x2B39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39C0u;
    // 0x2b39c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x2B39C0u, 0x2B39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39C8u;
label_2b39c8:
    // 0x2b39c8: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
label_2b39cc:
    if (ctx->pc == 0x2B39CCu) {
        ctx->pc = 0x2B39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39C8u;
        // 0x2b39cc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39D0u;
        goto label_2b39d0;
    }
    ctx->pc = 0x2B39C8u;
    {
        const bool branch_taken_0x2b39c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39C8u;
        // 0x2b39cc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39c8) {
            ctx->pc = 0x2B39ECu;
            goto label_2b39ec;
        }
    }
    ctx->pc = 0x2B39D0u;
label_2b39d0:
    // 0x2b39d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b39d4:
    // 0x2b39d4: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b39d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b39d8:
    // 0x2b39d8: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b39d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b39dc:
    // 0x2b39dc: 0xc0a39c2  jal         func_28E708
label_2b39e0:
    if (ctx->pc == 0x2B39E0u) {
        ctx->pc = 0x2B39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39DCu;
        // 0x2b39e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39E4u;
        goto label_2b39e4;
    }
    ctx->pc = 0x2B39DCu;
    SET_GPR_U32(ctx, 31, 0x2B39E4u);
    ctx->pc = 0x2B39E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39DCu;
    // 0x2b39e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B39DCu, 0x2B39E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39E4u;
label_2b39e4:
    // 0x2b39e4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_2b39e8:
    if (ctx->pc == 0x2B39E8u) {
        ctx->pc = 0x2B39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39E4u;
        // 0x2b39e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39ECu;
        goto label_2b39ec;
    }
    ctx->pc = 0x2B39E4u;
    {
        const bool branch_taken_0x2b39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39E4u;
        // 0x2b39e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39e4) {
            ctx->pc = 0x2B3924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3924;
        }
    }
    ctx->pc = 0x2B39ECu;
label_2b39ec:
    // 0x2b39ec: 0xc088e70  jal         func_2239C0
label_2b39f0:
    if (ctx->pc == 0x2B39F0u) {
        ctx->pc = 0x2B39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39ECu;
        // 0x2b39f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39F4u;
        goto label_2b39f4;
    }
    ctx->pc = 0x2B39ECu;
    SET_GPR_U32(ctx, 31, 0x2B39F4u);
    ctx->pc = 0x2B39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39ECu;
    // 0x2b39f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2B39ECu, 0x2B39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39F4u;
label_2b39f4:
    // 0x2b39f4: 0x10500023  beq         $v0, $s0, . + 4 + (0x23 << 2)
label_2b39f8:
    if (ctx->pc == 0x2B39F8u) {
        ctx->pc = 0x2B39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39F4u;
        // 0x2b39f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B39FCu;
        goto label_2b39fc;
    }
    ctx->pc = 0x2B39F4u;
    {
        const bool branch_taken_0x2b39f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39F4u;
        // 0x2b39f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39f4) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B39FCu;
label_2b39fc:
    // 0x2b39fc: 0xc08a01c  jal         func_228070
label_2b3a00:
    if (ctx->pc == 0x2B3A00u) {
        ctx->pc = 0x2B3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39FCu;
        // 0x2b3a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A04u;
        goto label_2b3a04;
    }
    ctx->pc = 0x2B39FCu;
    SET_GPR_U32(ctx, 31, 0x2B3A04u);
    ctx->pc = 0x2B3A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39FCu;
    // 0x2b3a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2B39FCu, 0x2B3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A04u;
label_2b3a04:
    // 0x2b3a04: 0x1050001e  beq         $v0, $s0, . + 4 + (0x1E << 2)
label_2b3a08:
    if (ctx->pc == 0x2B3A08u) {
        ctx->pc = 0x2B3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A04u;
        // 0x2b3a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A0Cu;
        goto label_2b3a0c;
    }
    ctx->pc = 0x2B3A04u;
    {
        const bool branch_taken_0x2b3a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A04u;
        // 0x2b3a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a04) {
            ctx->pc = 0x2B3A80u;
            goto label_2b3a80;
        }
    }
    ctx->pc = 0x2B3A0Cu;
label_2b3a0c:
    // 0x2b3a0c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b3a10:
    // 0x2b3a10: 0xc08c340  jal         func_230D00
label_2b3a14:
    if (ctx->pc == 0x2B3A14u) {
        ctx->pc = 0x2B3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A10u;
        // 0x2b3a14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A18u;
        goto label_2b3a18;
    }
    ctx->pc = 0x2B3A10u;
    SET_GPR_U32(ctx, 31, 0x2B3A18u);
    ctx->pc = 0x2B3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A10u;
    // 0x2b3a14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2B3A10u, 0x2B3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A18u;
label_2b3a18:
    // 0x2b3a18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b3a18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b3a1c:
    // 0x2b3a1c: 0xc086618  jal         func_219860
label_2b3a20:
    if (ctx->pc == 0x2B3A20u) {
        ctx->pc = 0x2B3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A1Cu;
        // 0x2b3a20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A24u;
        goto label_2b3a24;
    }
    ctx->pc = 0x2B3A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A24u);
    ctx->pc = 0x2B3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A1Cu;
    // 0x2b3a20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2B3A1Cu, 0x2B3A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A24u;
label_2b3a24:
    // 0x2b3a24: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2b3a24u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b3a28:
    // 0x2b3a28: 0x0  nop
    ctx->pc = 0x2b3a28u;
    // NOP
label_2b3a2c:
    // 0x2b3a2c: 0x0  nop
    ctx->pc = 0x2b3a2cu;
    // NOP
label_2b3a30:
    // 0x2b3a30: 0x46140504  c1          0x140504
    ctx->pc = 0x2b3a30u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2b3a34:
    // 0x2b3a34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b3a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b3a38:
    // 0x2b3a38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b3a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b3a3c:
    // 0x2b3a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3a40:
    // 0x2b3a40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3a44:
    // 0x2b3a44: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2b3a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2b3a48:
    // 0x2b3a48: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x2b3a48u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_2b3a4c:
    // 0x2b3a4c: 0xc0a367c  jal         func_28D9F0
label_2b3a50:
    if (ctx->pc == 0x2B3A50u) {
        ctx->pc = 0x2B3A54u;
        goto label_2b3a54;
    }
    ctx->pc = 0x2B3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A54u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B3A4Cu, 0x2B3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A54u;
label_2b3a54:
    // 0x2b3a54: 0x1040ffb3  beqz        $v0, . + 4 + (-0x4D << 2)
label_2b3a58:
    if (ctx->pc == 0x2B3A58u) {
        ctx->pc = 0x2B3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A54u;
        // 0x2b3a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A5Cu;
        goto label_2b3a5c;
    }
    ctx->pc = 0x2B3A54u;
    {
        const bool branch_taken_0x2b3a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A54u;
        // 0x2b3a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a54) {
            ctx->pc = 0x2B3924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3924;
        }
    }
    ctx->pc = 0x2B3A5Cu;
label_2b3a5c:
    // 0x2b3a5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b3a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3a60:
    // 0x2b3a60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b3a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a64:
    // 0x2b3a64: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b3a64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b3a68:
    // 0x2b3a68: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b3a68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b3a6c:
    // 0x2b3a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a70:
    // 0x2b3a70: 0xc0bf3d4  jal         func_2FCF50
label_2b3a74:
    if (ctx->pc == 0x2B3A74u) {
        ctx->pc = 0x2B3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A70u;
        // 0x2b3a74: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A78u;
        goto label_2b3a78;
    }
    ctx->pc = 0x2B3A70u;
    SET_GPR_U32(ctx, 31, 0x2B3A78u);
    ctx->pc = 0x2B3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A70u;
    // 0x2b3a74: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B3A70u, 0x2B3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A78u;
label_2b3a78:
    // 0x2b3a78: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b3a7c:
    if (ctx->pc == 0x2B3A7Cu) {
        ctx->pc = 0x2B3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A78u;
        // 0x2b3a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A80u;
        goto label_2b3a80;
    }
    ctx->pc = 0x2B3A78u;
    {
        const bool branch_taken_0x2b3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A78u;
        // 0x2b3a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a78) {
            ctx->pc = 0x2B3A84u;
            goto label_2b3a84;
        }
    }
    ctx->pc = 0x2B3A80u;
label_2b3a80:
    // 0x2b3a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a84:
    // 0x2b3a84: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2b3a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b3a88:
    // 0x2b3a88: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2b3a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b3a8c:
    // 0x2b3a8c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2b3a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b3a90:
    // 0x2b3a90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2b3a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b3a94:
    // 0x2b3a94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b3a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b3a98:
    // 0x2b3a98: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2b3a98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b3a9c:
    // 0x2b3a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b3a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3aa0:
    // 0x2b3aa0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2b3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b3aa4:
    // 0x2b3aa4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2b3aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b3aa8:
    // 0x2b3aa8: 0x3e00008  jr          $ra
label_2b3aac:
    if (ctx->pc == 0x2B3AACu) {
        ctx->pc = 0x2B3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AA8u;
        // 0x2b3aac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AB0u;
        goto label_fallthrough_0x2b3aa8;
    }
    ctx->pc = 0x2B3AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AA8u;
        // 0x2b3aac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b3aa8:
    ctx->pc = 0x2B3AB0u;
}
