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

// Function: sub_002E3630
// Address: 0x2e3630 - 0x2e3fe8
void sub_002E3630_0x2e3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3630_0x2e3630");
#endif

    switch (ctx->pc) {
        case 0x2e3630u: goto label_2e3630;
        case 0x2e3634u: goto label_2e3634;
        case 0x2e3638u: goto label_2e3638;
        case 0x2e363cu: goto label_2e363c;
        case 0x2e3640u: goto label_2e3640;
        case 0x2e3644u: goto label_2e3644;
        case 0x2e3648u: goto label_2e3648;
        case 0x2e364cu: goto label_2e364c;
        case 0x2e3650u: goto label_2e3650;
        case 0x2e3654u: goto label_2e3654;
        case 0x2e3658u: goto label_2e3658;
        case 0x2e365cu: goto label_2e365c;
        case 0x2e3660u: goto label_2e3660;
        case 0x2e3664u: goto label_2e3664;
        case 0x2e3668u: goto label_2e3668;
        case 0x2e366cu: goto label_2e366c;
        case 0x2e3670u: goto label_2e3670;
        case 0x2e3674u: goto label_2e3674;
        case 0x2e3678u: goto label_2e3678;
        case 0x2e367cu: goto label_2e367c;
        case 0x2e3680u: goto label_2e3680;
        case 0x2e3684u: goto label_2e3684;
        case 0x2e3688u: goto label_2e3688;
        case 0x2e368cu: goto label_2e368c;
        case 0x2e3690u: goto label_2e3690;
        case 0x2e3694u: goto label_2e3694;
        case 0x2e3698u: goto label_2e3698;
        case 0x2e369cu: goto label_2e369c;
        case 0x2e36a0u: goto label_2e36a0;
        case 0x2e36a4u: goto label_2e36a4;
        case 0x2e36a8u: goto label_2e36a8;
        case 0x2e36acu: goto label_2e36ac;
        case 0x2e36b0u: goto label_2e36b0;
        case 0x2e36b4u: goto label_2e36b4;
        case 0x2e36b8u: goto label_2e36b8;
        case 0x2e36bcu: goto label_2e36bc;
        case 0x2e36c0u: goto label_2e36c0;
        case 0x2e36c4u: goto label_2e36c4;
        case 0x2e36c8u: goto label_2e36c8;
        case 0x2e36ccu: goto label_2e36cc;
        case 0x2e36d0u: goto label_2e36d0;
        case 0x2e36d4u: goto label_2e36d4;
        case 0x2e36d8u: goto label_2e36d8;
        case 0x2e36dcu: goto label_2e36dc;
        case 0x2e36e0u: goto label_2e36e0;
        case 0x2e36e4u: goto label_2e36e4;
        case 0x2e36e8u: goto label_2e36e8;
        case 0x2e36ecu: goto label_2e36ec;
        case 0x2e36f0u: goto label_2e36f0;
        case 0x2e36f4u: goto label_2e36f4;
        case 0x2e36f8u: goto label_2e36f8;
        case 0x2e36fcu: goto label_2e36fc;
        case 0x2e3700u: goto label_2e3700;
        case 0x2e3704u: goto label_2e3704;
        case 0x2e3708u: goto label_2e3708;
        case 0x2e370cu: goto label_2e370c;
        case 0x2e3710u: goto label_2e3710;
        case 0x2e3714u: goto label_2e3714;
        case 0x2e3718u: goto label_2e3718;
        case 0x2e371cu: goto label_2e371c;
        case 0x2e3720u: goto label_2e3720;
        case 0x2e3724u: goto label_2e3724;
        case 0x2e3728u: goto label_2e3728;
        case 0x2e372cu: goto label_2e372c;
        case 0x2e3730u: goto label_2e3730;
        case 0x2e3734u: goto label_2e3734;
        case 0x2e3738u: goto label_2e3738;
        case 0x2e373cu: goto label_2e373c;
        case 0x2e3740u: goto label_2e3740;
        case 0x2e3744u: goto label_2e3744;
        case 0x2e3748u: goto label_2e3748;
        case 0x2e374cu: goto label_2e374c;
        case 0x2e3750u: goto label_2e3750;
        case 0x2e3754u: goto label_2e3754;
        case 0x2e3758u: goto label_2e3758;
        case 0x2e375cu: goto label_2e375c;
        case 0x2e3760u: goto label_2e3760;
        case 0x2e3764u: goto label_2e3764;
        case 0x2e3768u: goto label_2e3768;
        case 0x2e376cu: goto label_2e376c;
        case 0x2e3770u: goto label_2e3770;
        case 0x2e3774u: goto label_2e3774;
        case 0x2e3778u: goto label_2e3778;
        case 0x2e377cu: goto label_2e377c;
        case 0x2e3780u: goto label_2e3780;
        case 0x2e3784u: goto label_2e3784;
        case 0x2e3788u: goto label_2e3788;
        case 0x2e378cu: goto label_2e378c;
        case 0x2e3790u: goto label_2e3790;
        case 0x2e3794u: goto label_2e3794;
        case 0x2e3798u: goto label_2e3798;
        case 0x2e379cu: goto label_2e379c;
        case 0x2e37a0u: goto label_2e37a0;
        case 0x2e37a4u: goto label_2e37a4;
        case 0x2e37a8u: goto label_2e37a8;
        case 0x2e37acu: goto label_2e37ac;
        case 0x2e37b0u: goto label_2e37b0;
        case 0x2e37b4u: goto label_2e37b4;
        case 0x2e37b8u: goto label_2e37b8;
        case 0x2e37bcu: goto label_2e37bc;
        case 0x2e37c0u: goto label_2e37c0;
        case 0x2e37c4u: goto label_2e37c4;
        case 0x2e37c8u: goto label_2e37c8;
        case 0x2e37ccu: goto label_2e37cc;
        case 0x2e37d0u: goto label_2e37d0;
        case 0x2e37d4u: goto label_2e37d4;
        case 0x2e37d8u: goto label_2e37d8;
        case 0x2e37dcu: goto label_2e37dc;
        case 0x2e37e0u: goto label_2e37e0;
        case 0x2e37e4u: goto label_2e37e4;
        case 0x2e37e8u: goto label_2e37e8;
        case 0x2e37ecu: goto label_2e37ec;
        case 0x2e37f0u: goto label_2e37f0;
        case 0x2e37f4u: goto label_2e37f4;
        case 0x2e37f8u: goto label_2e37f8;
        case 0x2e37fcu: goto label_2e37fc;
        case 0x2e3800u: goto label_2e3800;
        case 0x2e3804u: goto label_2e3804;
        case 0x2e3808u: goto label_2e3808;
        case 0x2e380cu: goto label_2e380c;
        case 0x2e3810u: goto label_2e3810;
        case 0x2e3814u: goto label_2e3814;
        case 0x2e3818u: goto label_2e3818;
        case 0x2e381cu: goto label_2e381c;
        case 0x2e3820u: goto label_2e3820;
        case 0x2e3824u: goto label_2e3824;
        case 0x2e3828u: goto label_2e3828;
        case 0x2e382cu: goto label_2e382c;
        case 0x2e3830u: goto label_2e3830;
        case 0x2e3834u: goto label_2e3834;
        case 0x2e3838u: goto label_2e3838;
        case 0x2e383cu: goto label_2e383c;
        case 0x2e3840u: goto label_2e3840;
        case 0x2e3844u: goto label_2e3844;
        case 0x2e3848u: goto label_2e3848;
        case 0x2e384cu: goto label_2e384c;
        case 0x2e3850u: goto label_2e3850;
        case 0x2e3854u: goto label_2e3854;
        case 0x2e3858u: goto label_2e3858;
        case 0x2e385cu: goto label_2e385c;
        case 0x2e3860u: goto label_2e3860;
        case 0x2e3864u: goto label_2e3864;
        case 0x2e3868u: goto label_2e3868;
        case 0x2e386cu: goto label_2e386c;
        case 0x2e3870u: goto label_2e3870;
        case 0x2e3874u: goto label_2e3874;
        case 0x2e3878u: goto label_2e3878;
        case 0x2e387cu: goto label_2e387c;
        case 0x2e3880u: goto label_2e3880;
        case 0x2e3884u: goto label_2e3884;
        case 0x2e3888u: goto label_2e3888;
        case 0x2e388cu: goto label_2e388c;
        case 0x2e3890u: goto label_2e3890;
        case 0x2e3894u: goto label_2e3894;
        case 0x2e3898u: goto label_2e3898;
        case 0x2e389cu: goto label_2e389c;
        case 0x2e38a0u: goto label_2e38a0;
        case 0x2e38a4u: goto label_2e38a4;
        case 0x2e38a8u: goto label_2e38a8;
        case 0x2e38acu: goto label_2e38ac;
        case 0x2e38b0u: goto label_2e38b0;
        case 0x2e38b4u: goto label_2e38b4;
        case 0x2e38b8u: goto label_2e38b8;
        case 0x2e38bcu: goto label_2e38bc;
        case 0x2e38c0u: goto label_2e38c0;
        case 0x2e38c4u: goto label_2e38c4;
        case 0x2e38c8u: goto label_2e38c8;
        case 0x2e38ccu: goto label_2e38cc;
        case 0x2e38d0u: goto label_2e38d0;
        case 0x2e38d4u: goto label_2e38d4;
        case 0x2e38d8u: goto label_2e38d8;
        case 0x2e38dcu: goto label_2e38dc;
        case 0x2e38e0u: goto label_2e38e0;
        case 0x2e38e4u: goto label_2e38e4;
        case 0x2e38e8u: goto label_2e38e8;
        case 0x2e38ecu: goto label_2e38ec;
        case 0x2e38f0u: goto label_2e38f0;
        case 0x2e38f4u: goto label_2e38f4;
        case 0x2e38f8u: goto label_2e38f8;
        case 0x2e38fcu: goto label_2e38fc;
        case 0x2e3900u: goto label_2e3900;
        case 0x2e3904u: goto label_2e3904;
        case 0x2e3908u: goto label_2e3908;
        case 0x2e390cu: goto label_2e390c;
        case 0x2e3910u: goto label_2e3910;
        case 0x2e3914u: goto label_2e3914;
        case 0x2e3918u: goto label_2e3918;
        case 0x2e391cu: goto label_2e391c;
        case 0x2e3920u: goto label_2e3920;
        case 0x2e3924u: goto label_2e3924;
        case 0x2e3928u: goto label_2e3928;
        case 0x2e392cu: goto label_2e392c;
        case 0x2e3930u: goto label_2e3930;
        case 0x2e3934u: goto label_2e3934;
        case 0x2e3938u: goto label_2e3938;
        case 0x2e393cu: goto label_2e393c;
        case 0x2e3940u: goto label_2e3940;
        case 0x2e3944u: goto label_2e3944;
        case 0x2e3948u: goto label_2e3948;
        case 0x2e394cu: goto label_2e394c;
        case 0x2e3950u: goto label_2e3950;
        case 0x2e3954u: goto label_2e3954;
        case 0x2e3958u: goto label_2e3958;
        case 0x2e395cu: goto label_2e395c;
        case 0x2e3960u: goto label_2e3960;
        case 0x2e3964u: goto label_2e3964;
        case 0x2e3968u: goto label_2e3968;
        case 0x2e396cu: goto label_2e396c;
        case 0x2e3970u: goto label_2e3970;
        case 0x2e3974u: goto label_2e3974;
        case 0x2e3978u: goto label_2e3978;
        case 0x2e397cu: goto label_2e397c;
        case 0x2e3980u: goto label_2e3980;
        case 0x2e3984u: goto label_2e3984;
        case 0x2e3988u: goto label_2e3988;
        case 0x2e398cu: goto label_2e398c;
        case 0x2e3990u: goto label_2e3990;
        case 0x2e3994u: goto label_2e3994;
        case 0x2e3998u: goto label_2e3998;
        case 0x2e399cu: goto label_2e399c;
        case 0x2e39a0u: goto label_2e39a0;
        case 0x2e39a4u: goto label_2e39a4;
        case 0x2e39a8u: goto label_2e39a8;
        case 0x2e39acu: goto label_2e39ac;
        case 0x2e39b0u: goto label_2e39b0;
        case 0x2e39b4u: goto label_2e39b4;
        case 0x2e39b8u: goto label_2e39b8;
        case 0x2e39bcu: goto label_2e39bc;
        case 0x2e39c0u: goto label_2e39c0;
        case 0x2e39c4u: goto label_2e39c4;
        case 0x2e39c8u: goto label_2e39c8;
        case 0x2e39ccu: goto label_2e39cc;
        case 0x2e39d0u: goto label_2e39d0;
        case 0x2e39d4u: goto label_2e39d4;
        case 0x2e39d8u: goto label_2e39d8;
        case 0x2e39dcu: goto label_2e39dc;
        case 0x2e39e0u: goto label_2e39e0;
        case 0x2e39e4u: goto label_2e39e4;
        case 0x2e39e8u: goto label_2e39e8;
        case 0x2e39ecu: goto label_2e39ec;
        case 0x2e39f0u: goto label_2e39f0;
        case 0x2e39f4u: goto label_2e39f4;
        case 0x2e39f8u: goto label_2e39f8;
        case 0x2e39fcu: goto label_2e39fc;
        case 0x2e3a00u: goto label_2e3a00;
        case 0x2e3a04u: goto label_2e3a04;
        case 0x2e3a08u: goto label_2e3a08;
        case 0x2e3a0cu: goto label_2e3a0c;
        case 0x2e3a10u: goto label_2e3a10;
        case 0x2e3a14u: goto label_2e3a14;
        case 0x2e3a18u: goto label_2e3a18;
        case 0x2e3a1cu: goto label_2e3a1c;
        case 0x2e3a20u: goto label_2e3a20;
        case 0x2e3a24u: goto label_2e3a24;
        case 0x2e3a28u: goto label_2e3a28;
        case 0x2e3a2cu: goto label_2e3a2c;
        case 0x2e3a30u: goto label_2e3a30;
        case 0x2e3a34u: goto label_2e3a34;
        case 0x2e3a38u: goto label_2e3a38;
        case 0x2e3a3cu: goto label_2e3a3c;
        case 0x2e3a40u: goto label_2e3a40;
        case 0x2e3a44u: goto label_2e3a44;
        case 0x2e3a48u: goto label_2e3a48;
        case 0x2e3a4cu: goto label_2e3a4c;
        case 0x2e3a50u: goto label_2e3a50;
        case 0x2e3a54u: goto label_2e3a54;
        case 0x2e3a58u: goto label_2e3a58;
        case 0x2e3a5cu: goto label_2e3a5c;
        case 0x2e3a60u: goto label_2e3a60;
        case 0x2e3a64u: goto label_2e3a64;
        case 0x2e3a68u: goto label_2e3a68;
        case 0x2e3a6cu: goto label_2e3a6c;
        case 0x2e3a70u: goto label_2e3a70;
        case 0x2e3a74u: goto label_2e3a74;
        case 0x2e3a78u: goto label_2e3a78;
        case 0x2e3a7cu: goto label_2e3a7c;
        case 0x2e3a80u: goto label_2e3a80;
        case 0x2e3a84u: goto label_2e3a84;
        case 0x2e3a88u: goto label_2e3a88;
        case 0x2e3a8cu: goto label_2e3a8c;
        case 0x2e3a90u: goto label_2e3a90;
        case 0x2e3a94u: goto label_2e3a94;
        case 0x2e3a98u: goto label_2e3a98;
        case 0x2e3a9cu: goto label_2e3a9c;
        case 0x2e3aa0u: goto label_2e3aa0;
        case 0x2e3aa4u: goto label_2e3aa4;
        case 0x2e3aa8u: goto label_2e3aa8;
        case 0x2e3aacu: goto label_2e3aac;
        case 0x2e3ab0u: goto label_2e3ab0;
        case 0x2e3ab4u: goto label_2e3ab4;
        case 0x2e3ab8u: goto label_2e3ab8;
        case 0x2e3abcu: goto label_2e3abc;
        case 0x2e3ac0u: goto label_2e3ac0;
        case 0x2e3ac4u: goto label_2e3ac4;
        case 0x2e3ac8u: goto label_2e3ac8;
        case 0x2e3accu: goto label_2e3acc;
        case 0x2e3ad0u: goto label_2e3ad0;
        case 0x2e3ad4u: goto label_2e3ad4;
        case 0x2e3ad8u: goto label_2e3ad8;
        case 0x2e3adcu: goto label_2e3adc;
        case 0x2e3ae0u: goto label_2e3ae0;
        case 0x2e3ae4u: goto label_2e3ae4;
        case 0x2e3ae8u: goto label_2e3ae8;
        case 0x2e3aecu: goto label_2e3aec;
        case 0x2e3af0u: goto label_2e3af0;
        case 0x2e3af4u: goto label_2e3af4;
        case 0x2e3af8u: goto label_2e3af8;
        case 0x2e3afcu: goto label_2e3afc;
        case 0x2e3b00u: goto label_2e3b00;
        case 0x2e3b04u: goto label_2e3b04;
        case 0x2e3b08u: goto label_2e3b08;
        case 0x2e3b0cu: goto label_2e3b0c;
        case 0x2e3b10u: goto label_2e3b10;
        case 0x2e3b14u: goto label_2e3b14;
        case 0x2e3b18u: goto label_2e3b18;
        case 0x2e3b1cu: goto label_2e3b1c;
        case 0x2e3b20u: goto label_2e3b20;
        case 0x2e3b24u: goto label_2e3b24;
        case 0x2e3b28u: goto label_2e3b28;
        case 0x2e3b2cu: goto label_2e3b2c;
        case 0x2e3b30u: goto label_2e3b30;
        case 0x2e3b34u: goto label_2e3b34;
        case 0x2e3b38u: goto label_2e3b38;
        case 0x2e3b3cu: goto label_2e3b3c;
        case 0x2e3b40u: goto label_2e3b40;
        case 0x2e3b44u: goto label_2e3b44;
        case 0x2e3b48u: goto label_2e3b48;
        case 0x2e3b4cu: goto label_2e3b4c;
        case 0x2e3b50u: goto label_2e3b50;
        case 0x2e3b54u: goto label_2e3b54;
        case 0x2e3b58u: goto label_2e3b58;
        case 0x2e3b5cu: goto label_2e3b5c;
        case 0x2e3b60u: goto label_2e3b60;
        case 0x2e3b64u: goto label_2e3b64;
        case 0x2e3b68u: goto label_2e3b68;
        case 0x2e3b6cu: goto label_2e3b6c;
        case 0x2e3b70u: goto label_2e3b70;
        case 0x2e3b74u: goto label_2e3b74;
        case 0x2e3b78u: goto label_2e3b78;
        case 0x2e3b7cu: goto label_2e3b7c;
        case 0x2e3b80u: goto label_2e3b80;
        case 0x2e3b84u: goto label_2e3b84;
        case 0x2e3b88u: goto label_2e3b88;
        case 0x2e3b8cu: goto label_2e3b8c;
        case 0x2e3b90u: goto label_2e3b90;
        case 0x2e3b94u: goto label_2e3b94;
        case 0x2e3b98u: goto label_2e3b98;
        case 0x2e3b9cu: goto label_2e3b9c;
        case 0x2e3ba0u: goto label_2e3ba0;
        case 0x2e3ba4u: goto label_2e3ba4;
        case 0x2e3ba8u: goto label_2e3ba8;
        case 0x2e3bacu: goto label_2e3bac;
        case 0x2e3bb0u: goto label_2e3bb0;
        case 0x2e3bb4u: goto label_2e3bb4;
        case 0x2e3bb8u: goto label_2e3bb8;
        case 0x2e3bbcu: goto label_2e3bbc;
        case 0x2e3bc0u: goto label_2e3bc0;
        case 0x2e3bc4u: goto label_2e3bc4;
        case 0x2e3bc8u: goto label_2e3bc8;
        case 0x2e3bccu: goto label_2e3bcc;
        case 0x2e3bd0u: goto label_2e3bd0;
        case 0x2e3bd4u: goto label_2e3bd4;
        case 0x2e3bd8u: goto label_2e3bd8;
        case 0x2e3bdcu: goto label_2e3bdc;
        case 0x2e3be0u: goto label_2e3be0;
        case 0x2e3be4u: goto label_2e3be4;
        case 0x2e3be8u: goto label_2e3be8;
        case 0x2e3becu: goto label_2e3bec;
        case 0x2e3bf0u: goto label_2e3bf0;
        case 0x2e3bf4u: goto label_2e3bf4;
        case 0x2e3bf8u: goto label_2e3bf8;
        case 0x2e3bfcu: goto label_2e3bfc;
        case 0x2e3c00u: goto label_2e3c00;
        case 0x2e3c04u: goto label_2e3c04;
        case 0x2e3c08u: goto label_2e3c08;
        case 0x2e3c0cu: goto label_2e3c0c;
        case 0x2e3c10u: goto label_2e3c10;
        case 0x2e3c14u: goto label_2e3c14;
        case 0x2e3c18u: goto label_2e3c18;
        case 0x2e3c1cu: goto label_2e3c1c;
        case 0x2e3c20u: goto label_2e3c20;
        case 0x2e3c24u: goto label_2e3c24;
        case 0x2e3c28u: goto label_2e3c28;
        case 0x2e3c2cu: goto label_2e3c2c;
        case 0x2e3c30u: goto label_2e3c30;
        case 0x2e3c34u: goto label_2e3c34;
        case 0x2e3c38u: goto label_2e3c38;
        case 0x2e3c3cu: goto label_2e3c3c;
        case 0x2e3c40u: goto label_2e3c40;
        case 0x2e3c44u: goto label_2e3c44;
        case 0x2e3c48u: goto label_2e3c48;
        case 0x2e3c4cu: goto label_2e3c4c;
        case 0x2e3c50u: goto label_2e3c50;
        case 0x2e3c54u: goto label_2e3c54;
        case 0x2e3c58u: goto label_2e3c58;
        case 0x2e3c5cu: goto label_2e3c5c;
        case 0x2e3c60u: goto label_2e3c60;
        case 0x2e3c64u: goto label_2e3c64;
        case 0x2e3c68u: goto label_2e3c68;
        case 0x2e3c6cu: goto label_2e3c6c;
        case 0x2e3c70u: goto label_2e3c70;
        case 0x2e3c74u: goto label_2e3c74;
        case 0x2e3c78u: goto label_2e3c78;
        case 0x2e3c7cu: goto label_2e3c7c;
        case 0x2e3c80u: goto label_2e3c80;
        case 0x2e3c84u: goto label_2e3c84;
        case 0x2e3c88u: goto label_2e3c88;
        case 0x2e3c8cu: goto label_2e3c8c;
        case 0x2e3c90u: goto label_2e3c90;
        case 0x2e3c94u: goto label_2e3c94;
        case 0x2e3c98u: goto label_2e3c98;
        case 0x2e3c9cu: goto label_2e3c9c;
        case 0x2e3ca0u: goto label_2e3ca0;
        case 0x2e3ca4u: goto label_2e3ca4;
        case 0x2e3ca8u: goto label_2e3ca8;
        case 0x2e3cacu: goto label_2e3cac;
        case 0x2e3cb0u: goto label_2e3cb0;
        case 0x2e3cb4u: goto label_2e3cb4;
        case 0x2e3cb8u: goto label_2e3cb8;
        case 0x2e3cbcu: goto label_2e3cbc;
        case 0x2e3cc0u: goto label_2e3cc0;
        case 0x2e3cc4u: goto label_2e3cc4;
        case 0x2e3cc8u: goto label_2e3cc8;
        case 0x2e3cccu: goto label_2e3ccc;
        case 0x2e3cd0u: goto label_2e3cd0;
        case 0x2e3cd4u: goto label_2e3cd4;
        case 0x2e3cd8u: goto label_2e3cd8;
        case 0x2e3cdcu: goto label_2e3cdc;
        case 0x2e3ce0u: goto label_2e3ce0;
        case 0x2e3ce4u: goto label_2e3ce4;
        case 0x2e3ce8u: goto label_2e3ce8;
        case 0x2e3cecu: goto label_2e3cec;
        case 0x2e3cf0u: goto label_2e3cf0;
        case 0x2e3cf4u: goto label_2e3cf4;
        case 0x2e3cf8u: goto label_2e3cf8;
        case 0x2e3cfcu: goto label_2e3cfc;
        case 0x2e3d00u: goto label_2e3d00;
        case 0x2e3d04u: goto label_2e3d04;
        case 0x2e3d08u: goto label_2e3d08;
        case 0x2e3d0cu: goto label_2e3d0c;
        case 0x2e3d10u: goto label_2e3d10;
        case 0x2e3d14u: goto label_2e3d14;
        case 0x2e3d18u: goto label_2e3d18;
        case 0x2e3d1cu: goto label_2e3d1c;
        case 0x2e3d20u: goto label_2e3d20;
        case 0x2e3d24u: goto label_2e3d24;
        case 0x2e3d28u: goto label_2e3d28;
        case 0x2e3d2cu: goto label_2e3d2c;
        case 0x2e3d30u: goto label_2e3d30;
        case 0x2e3d34u: goto label_2e3d34;
        case 0x2e3d38u: goto label_2e3d38;
        case 0x2e3d3cu: goto label_2e3d3c;
        case 0x2e3d40u: goto label_2e3d40;
        case 0x2e3d44u: goto label_2e3d44;
        case 0x2e3d48u: goto label_2e3d48;
        case 0x2e3d4cu: goto label_2e3d4c;
        case 0x2e3d50u: goto label_2e3d50;
        case 0x2e3d54u: goto label_2e3d54;
        case 0x2e3d58u: goto label_2e3d58;
        case 0x2e3d5cu: goto label_2e3d5c;
        case 0x2e3d60u: goto label_2e3d60;
        case 0x2e3d64u: goto label_2e3d64;
        case 0x2e3d68u: goto label_2e3d68;
        case 0x2e3d6cu: goto label_2e3d6c;
        case 0x2e3d70u: goto label_2e3d70;
        case 0x2e3d74u: goto label_2e3d74;
        case 0x2e3d78u: goto label_2e3d78;
        case 0x2e3d7cu: goto label_2e3d7c;
        case 0x2e3d80u: goto label_2e3d80;
        case 0x2e3d84u: goto label_2e3d84;
        case 0x2e3d88u: goto label_2e3d88;
        case 0x2e3d8cu: goto label_2e3d8c;
        case 0x2e3d90u: goto label_2e3d90;
        case 0x2e3d94u: goto label_2e3d94;
        case 0x2e3d98u: goto label_2e3d98;
        case 0x2e3d9cu: goto label_2e3d9c;
        case 0x2e3da0u: goto label_2e3da0;
        case 0x2e3da4u: goto label_2e3da4;
        case 0x2e3da8u: goto label_2e3da8;
        case 0x2e3dacu: goto label_2e3dac;
        case 0x2e3db0u: goto label_2e3db0;
        case 0x2e3db4u: goto label_2e3db4;
        case 0x2e3db8u: goto label_2e3db8;
        case 0x2e3dbcu: goto label_2e3dbc;
        case 0x2e3dc0u: goto label_2e3dc0;
        case 0x2e3dc4u: goto label_2e3dc4;
        case 0x2e3dc8u: goto label_2e3dc8;
        case 0x2e3dccu: goto label_2e3dcc;
        case 0x2e3dd0u: goto label_2e3dd0;
        case 0x2e3dd4u: goto label_2e3dd4;
        case 0x2e3dd8u: goto label_2e3dd8;
        case 0x2e3ddcu: goto label_2e3ddc;
        case 0x2e3de0u: goto label_2e3de0;
        case 0x2e3de4u: goto label_2e3de4;
        case 0x2e3de8u: goto label_2e3de8;
        case 0x2e3decu: goto label_2e3dec;
        case 0x2e3df0u: goto label_2e3df0;
        case 0x2e3df4u: goto label_2e3df4;
        case 0x2e3df8u: goto label_2e3df8;
        case 0x2e3dfcu: goto label_2e3dfc;
        case 0x2e3e00u: goto label_2e3e00;
        case 0x2e3e04u: goto label_2e3e04;
        case 0x2e3e08u: goto label_2e3e08;
        case 0x2e3e0cu: goto label_2e3e0c;
        case 0x2e3e10u: goto label_2e3e10;
        case 0x2e3e14u: goto label_2e3e14;
        case 0x2e3e18u: goto label_2e3e18;
        case 0x2e3e1cu: goto label_2e3e1c;
        case 0x2e3e20u: goto label_2e3e20;
        case 0x2e3e24u: goto label_2e3e24;
        case 0x2e3e28u: goto label_2e3e28;
        case 0x2e3e2cu: goto label_2e3e2c;
        case 0x2e3e30u: goto label_2e3e30;
        case 0x2e3e34u: goto label_2e3e34;
        case 0x2e3e38u: goto label_2e3e38;
        case 0x2e3e3cu: goto label_2e3e3c;
        case 0x2e3e40u: goto label_2e3e40;
        case 0x2e3e44u: goto label_2e3e44;
        case 0x2e3e48u: goto label_2e3e48;
        case 0x2e3e4cu: goto label_2e3e4c;
        case 0x2e3e50u: goto label_2e3e50;
        case 0x2e3e54u: goto label_2e3e54;
        case 0x2e3e58u: goto label_2e3e58;
        case 0x2e3e5cu: goto label_2e3e5c;
        case 0x2e3e60u: goto label_2e3e60;
        case 0x2e3e64u: goto label_2e3e64;
        case 0x2e3e68u: goto label_2e3e68;
        case 0x2e3e6cu: goto label_2e3e6c;
        case 0x2e3e70u: goto label_2e3e70;
        case 0x2e3e74u: goto label_2e3e74;
        case 0x2e3e78u: goto label_2e3e78;
        case 0x2e3e7cu: goto label_2e3e7c;
        case 0x2e3e80u: goto label_2e3e80;
        case 0x2e3e84u: goto label_2e3e84;
        case 0x2e3e88u: goto label_2e3e88;
        case 0x2e3e8cu: goto label_2e3e8c;
        case 0x2e3e90u: goto label_2e3e90;
        case 0x2e3e94u: goto label_2e3e94;
        case 0x2e3e98u: goto label_2e3e98;
        case 0x2e3e9cu: goto label_2e3e9c;
        case 0x2e3ea0u: goto label_2e3ea0;
        case 0x2e3ea4u: goto label_2e3ea4;
        case 0x2e3ea8u: goto label_2e3ea8;
        case 0x2e3eacu: goto label_2e3eac;
        case 0x2e3eb0u: goto label_2e3eb0;
        case 0x2e3eb4u: goto label_2e3eb4;
        case 0x2e3eb8u: goto label_2e3eb8;
        case 0x2e3ebcu: goto label_2e3ebc;
        case 0x2e3ec0u: goto label_2e3ec0;
        case 0x2e3ec4u: goto label_2e3ec4;
        case 0x2e3ec8u: goto label_2e3ec8;
        case 0x2e3eccu: goto label_2e3ecc;
        case 0x2e3ed0u: goto label_2e3ed0;
        case 0x2e3ed4u: goto label_2e3ed4;
        case 0x2e3ed8u: goto label_2e3ed8;
        case 0x2e3edcu: goto label_2e3edc;
        case 0x2e3ee0u: goto label_2e3ee0;
        case 0x2e3ee4u: goto label_2e3ee4;
        case 0x2e3ee8u: goto label_2e3ee8;
        case 0x2e3eecu: goto label_2e3eec;
        case 0x2e3ef0u: goto label_2e3ef0;
        case 0x2e3ef4u: goto label_2e3ef4;
        case 0x2e3ef8u: goto label_2e3ef8;
        case 0x2e3efcu: goto label_2e3efc;
        case 0x2e3f00u: goto label_2e3f00;
        case 0x2e3f04u: goto label_2e3f04;
        case 0x2e3f08u: goto label_2e3f08;
        case 0x2e3f0cu: goto label_2e3f0c;
        case 0x2e3f10u: goto label_2e3f10;
        case 0x2e3f14u: goto label_2e3f14;
        case 0x2e3f18u: goto label_2e3f18;
        case 0x2e3f1cu: goto label_2e3f1c;
        case 0x2e3f20u: goto label_2e3f20;
        case 0x2e3f24u: goto label_2e3f24;
        case 0x2e3f28u: goto label_2e3f28;
        case 0x2e3f2cu: goto label_2e3f2c;
        case 0x2e3f30u: goto label_2e3f30;
        case 0x2e3f34u: goto label_2e3f34;
        case 0x2e3f38u: goto label_2e3f38;
        case 0x2e3f3cu: goto label_2e3f3c;
        case 0x2e3f40u: goto label_2e3f40;
        case 0x2e3f44u: goto label_2e3f44;
        case 0x2e3f48u: goto label_2e3f48;
        case 0x2e3f4cu: goto label_2e3f4c;
        case 0x2e3f50u: goto label_2e3f50;
        case 0x2e3f54u: goto label_2e3f54;
        case 0x2e3f58u: goto label_2e3f58;
        case 0x2e3f5cu: goto label_2e3f5c;
        case 0x2e3f60u: goto label_2e3f60;
        case 0x2e3f64u: goto label_2e3f64;
        case 0x2e3f68u: goto label_2e3f68;
        case 0x2e3f6cu: goto label_2e3f6c;
        case 0x2e3f70u: goto label_2e3f70;
        case 0x2e3f74u: goto label_2e3f74;
        case 0x2e3f78u: goto label_2e3f78;
        case 0x2e3f7cu: goto label_2e3f7c;
        case 0x2e3f80u: goto label_2e3f80;
        case 0x2e3f84u: goto label_2e3f84;
        case 0x2e3f88u: goto label_2e3f88;
        case 0x2e3f8cu: goto label_2e3f8c;
        case 0x2e3f90u: goto label_2e3f90;
        case 0x2e3f94u: goto label_2e3f94;
        case 0x2e3f98u: goto label_2e3f98;
        case 0x2e3f9cu: goto label_2e3f9c;
        case 0x2e3fa0u: goto label_2e3fa0;
        case 0x2e3fa4u: goto label_2e3fa4;
        case 0x2e3fa8u: goto label_2e3fa8;
        case 0x2e3facu: goto label_2e3fac;
        case 0x2e3fb0u: goto label_2e3fb0;
        case 0x2e3fb4u: goto label_2e3fb4;
        case 0x2e3fb8u: goto label_2e3fb8;
        case 0x2e3fbcu: goto label_2e3fbc;
        case 0x2e3fc0u: goto label_2e3fc0;
        case 0x2e3fc4u: goto label_2e3fc4;
        case 0x2e3fc8u: goto label_2e3fc8;
        case 0x2e3fccu: goto label_2e3fcc;
        case 0x2e3fd0u: goto label_2e3fd0;
        case 0x2e3fd4u: goto label_2e3fd4;
        case 0x2e3fd8u: goto label_2e3fd8;
        case 0x2e3fdcu: goto label_2e3fdc;
        case 0x2e3fe0u: goto label_2e3fe0;
        case 0x2e3fe4u: goto label_2e3fe4;
        default: break;
    }

    ctx->pc = 0x2e3630u;

label_2e3630:
    // 0x2e3630: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2e3630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2e3634:
    // 0x2e3634: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e3634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e3638:
    // 0x2e3638: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2e3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_2e363c:
    // 0x2e363c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2e363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_2e3640:
    // 0x2e3640: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e3640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3644:
    // 0x2e3644: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2e3644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_2e3648:
    // 0x2e3648: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2e3648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_2e364c:
    // 0x2e364c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2e364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_2e3650:
    // 0x2e3650: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2e3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_2e3654:
    // 0x2e3654: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2e3654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_2e3658:
    // 0x2e3658: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2e3658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_2e365c:
    // 0x2e365c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2e365cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_2e3660:
    // 0x2e3660: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e3660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e3664:
    // 0x2e3664: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2e3664u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2e3668:
    // 0x2e3668: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2e3668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2e366c:
    // 0x2e366c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2e366cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2e3670:
    // 0x2e3670: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e3674:
    // 0x2e3674: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2e3674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3678:
    // 0x2e3678: 0x8c940048  lw          $s4, 0x48($a0)
    ctx->pc = 0x2e3678u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2e367c:
    // 0x2e367c: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x2e367cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e3680:
    // 0x2e3680: 0xc08bfbc  jal         func_22FEF0
label_2e3684:
    if (ctx->pc == 0x2E3684u) {
        ctx->pc = 0x2E3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3680u;
        // 0x2e3684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3688u;
        goto label_2e3688;
    }
    ctx->pc = 0x2E3680u;
    SET_GPR_U32(ctx, 31, 0x2E3688u);
    ctx->pc = 0x2E3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3680u;
    // 0x2e3684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E3680u, 0x2E3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3688u;
label_2e3688:
    // 0x2e3688: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2e3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2e368c:
    // 0x2e368c: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e368cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e3690:
    // 0x2e3690: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2e3694:
    if (ctx->pc == 0x2E3694u) {
        ctx->pc = 0x2E3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3690u;
        // 0x2e3694: 0x268205dc  addiu       $v0, $s4, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3698u;
        goto label_2e3698;
    }
    ctx->pc = 0x2E3690u;
    {
        const bool branch_taken_0x2e3690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3690u;
        // 0x2e3694: 0x268205dc  addiu       $v0, $s4, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3690) {
            ctx->pc = 0x2E3784u;
            goto label_2e3784;
        }
    }
    ctx->pc = 0x2E3698u;
label_2e3698:
    // 0x2e3698: 0x26c50090  addiu       $a1, $s6, 0x90
    ctx->pc = 0x2e3698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_2e369c:
    // 0x2e369c: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x2e369cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_2e36a0:
    // 0x2e36a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e36a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2e36a4:
    // 0x2e36a4: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2e36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
label_2e36a8:
    // 0x2e36a8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2e36a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e36ac:
    // 0x2e36ac: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2e36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e36b0:
    // 0x2e36b0: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x2e36b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_2e36b4:
    // 0x2e36b4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2e36b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e36b8:
    // 0x2e36b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e36b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e36bc:
    // 0x2e36bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e36bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e36c0:
    // 0x2e36c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e36c4:
    // 0x2e36c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2e36c8:
    // 0x2e36c8: 0x0  nop
    ctx->pc = 0x2e36c8u;
    // NOP
label_2e36cc:
    // 0x2e36cc: 0x0  nop
    ctx->pc = 0x2e36ccu;
    // NOP
label_2e36d0:
    // 0x2e36d0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2e36d4:
    if (ctx->pc == 0x2E36D4u) {
        ctx->pc = 0x2E36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D0u;
        // 0x2e36d4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36D8u;
        goto label_2e36d8;
    }
    ctx->pc = 0x2E36D0u;
    {
        const bool branch_taken_0x2e36d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D0u;
        // 0x2e36d4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36d0) {
            ctx->pc = 0x2E36C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e36c0;
        }
    }
    ctx->pc = 0x2E36D8u;
label_2e36d8:
    // 0x2e36d8: 0xc0a2fc0  jal         func_28BF00
label_2e36dc:
    if (ctx->pc == 0x2E36DCu) {
        ctx->pc = 0x2E36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D8u;
        // 0x2e36dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36E0u;
        goto label_2e36e0;
    }
    ctx->pc = 0x2E36D8u;
    SET_GPR_U32(ctx, 31, 0x2E36E0u);
    ctx->pc = 0x2E36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36D8u;
    // 0x2e36dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2E36D8u, 0x2E36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36E0u;
label_2e36e0:
    // 0x2e36e0: 0x92a20042  lbu         $v0, 0x42($s5)
    ctx->pc = 0x2e36e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 66)));
label_2e36e4:
    // 0x2e36e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e36e8:
    if (ctx->pc == 0x2E36E8u) {
        ctx->pc = 0x2E36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36E4u;
        // 0x2e36e8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36ECu;
        goto label_2e36ec;
    }
    ctx->pc = 0x2E36E4u;
    {
        const bool branch_taken_0x2e36e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36E4u;
        // 0x2e36e8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36e4) {
            ctx->pc = 0x2E36F4u;
            goto label_2e36f4;
        }
    }
    ctx->pc = 0x2E36ECu;
label_2e36ec:
    // 0x2e36ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e36f0:
    if (ctx->pc == 0x2E36F0u) {
        ctx->pc = 0x2E36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36ECu;
        // 0x2e36f0: 0x2447bec8  addiu       $a3, $v0, -0x4138 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36F4u;
        goto label_2e36f4;
    }
    ctx->pc = 0x2E36ECu;
    {
        const bool branch_taken_0x2e36ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36ECu;
        // 0x2e36f0: 0x2447bec8  addiu       $a3, $v0, -0x4138 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36ec) {
            ctx->pc = 0x2E36FCu;
            goto label_2e36fc;
        }
    }
    ctx->pc = 0x2E36F4u;
label_2e36f4:
    // 0x2e36f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2e36f8:
    // 0x2e36f8: 0x2447be58  addiu       $a3, $v0, -0x41A8
    ctx->pc = 0x2e36f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950488));
label_2e36fc:
    // 0x2e36fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e36fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e3700:
    // 0x2e3700: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e3700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e3704:
    // 0x2e3704: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e3704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e3708:
    // 0x2e3708: 0xc0a71b4  jal         func_29C6D0
label_2e370c:
    if (ctx->pc == 0x2E370Cu) {
        ctx->pc = 0x2E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3708u;
        // 0x2e370c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3710u;
        goto label_2e3710;
    }
    ctx->pc = 0x2E3708u;
    SET_GPR_U32(ctx, 31, 0x2E3710u);
    ctx->pc = 0x2E370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3708u;
    // 0x2e370c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x2E3708u, 0x2E3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3710u;
label_2e3710:
    // 0x2e3710: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2e3714:
    // 0x2e3714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e3718:
    // 0x2e3718: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x2e3718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2e371c:
    // 0x2e371c: 0x26624b00  addiu       $v0, $s3, 0x4B00
    ctx->pc = 0x2e371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
label_2e3720:
    // 0x2e3720: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e3720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e3724:
    // 0x2e3724: 0xc13b782  jal         func_4EDE08
label_2e3728:
    if (ctx->pc == 0x2E3728u) {
        ctx->pc = 0x2E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3724u;
        // 0x2e3728: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E372Cu;
        goto label_2e372c;
    }
    ctx->pc = 0x2E3724u;
    SET_GPR_U32(ctx, 31, 0x2E372Cu);
    ctx->pc = 0x2E3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3724u;
    // 0x2e3728: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2E3724u, 0x2E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E372Cu;
label_2e372c:
    // 0x2e372c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3730:
    // 0x2e3730: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2e3734:
    // 0x2e3734: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_2e3738:
    if (ctx->pc == 0x2E3738u) {
        ctx->pc = 0x2E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3734u;
        // 0x2e3738: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E373Cu;
        goto label_2e373c;
    }
    ctx->pc = 0x2E3734u;
    {
        const bool branch_taken_0x2e3734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3734) {
            ctx->pc = 0x2E3738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3734u;
            // 0x2e3738: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3748u;
            goto label_2e3748;
        }
    }
    ctx->pc = 0x2E373Cu;
label_2e373c:
    // 0x2e373c: 0xc0a36c8  jal         func_28DB20
label_2e3740:
    if (ctx->pc == 0x2E3740u) {
        ctx->pc = 0x2E3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E373Cu;
        // 0x2e3740: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3744u;
        goto label_2e3744;
    }
    ctx->pc = 0x2E373Cu;
    SET_GPR_U32(ctx, 31, 0x2E3744u);
    ctx->pc = 0x2E3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E373Cu;
    // 0x2e3740: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E373Cu, 0x2E3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3744u;
label_2e3744:
    // 0x2e3744: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x2e3744u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
label_2e3748:
    // 0x2e3748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e374c:
    // 0x2e374c: 0xafb00080  sw          $s0, 0x80($sp)
    ctx->pc = 0x2e374cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 16));
label_2e3750:
    // 0x2e3750: 0xc0e409a  jal         func_390268
label_2e3754:
    if (ctx->pc == 0x2E3754u) {
        ctx->pc = 0x2E3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3750u;
        // 0x2e3754: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3758u;
        goto label_2e3758;
    }
    ctx->pc = 0x2E3750u;
    SET_GPR_U32(ctx, 31, 0x2E3758u);
    ctx->pc = 0x2E3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3750u;
    // 0x2e3754: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E3750u, 0x2E3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3758u;
label_2e3758:
    // 0x2e3758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e375c:
    // 0x2e375c: 0xc0a34d6  jal         func_28D358
label_2e3760:
    if (ctx->pc == 0x2E3760u) {
        ctx->pc = 0x2E3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E375Cu;
        // 0x2e3760: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3764u;
        goto label_2e3764;
    }
    ctx->pc = 0x2E375Cu;
    SET_GPR_U32(ctx, 31, 0x2E3764u);
    ctx->pc = 0x2E3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E375Cu;
    // 0x2e3760: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2E375Cu, 0x2E3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3764u;
label_2e3764:
    // 0x2e3764: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e3768:
    if (ctx->pc == 0x2E3768u) {
        ctx->pc = 0x2E3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3764u;
        // 0x2e3768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E376Cu;
        goto label_2e376c;
    }
    ctx->pc = 0x2E3764u;
    {
        const bool branch_taken_0x2e3764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3764u;
        // 0x2e3768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3764) {
            ctx->pc = 0x2E3784u;
            goto label_2e3784;
        }
    }
    ctx->pc = 0x2E376Cu;
label_2e376c:
    // 0x2e376c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e3770:
    // 0x2e3770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3774:
    // 0x2e3774: 0x26c40284  addiu       $a0, $s6, 0x284
    ctx->pc = 0x2e3774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 644));
label_2e3778:
    // 0x2e3778: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2e3778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2e377c:
    // 0x2e377c: 0xc0a6800  jal         func_29A000
label_2e3780:
    if (ctx->pc == 0x2E3780u) {
        ctx->pc = 0x2E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E377Cu;
        // 0x2e3780: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3784u;
        goto label_2e3784;
    }
    ctx->pc = 0x2E377Cu;
    SET_GPR_U32(ctx, 31, 0x2E3784u);
    ctx->pc = 0x2E3780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E377Cu;
    // 0x2e3780: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2E377Cu, 0x2E3784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3784u;
label_2e3784:
    // 0x2e3784: 0x92b30043  lbu         $s3, 0x43($s5)
    ctx->pc = 0x2e3784u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 67)));
label_2e3788:
    // 0x2e3788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e378c:
    // 0x2e378c: 0x56620042  bnel        $s3, $v0, . + 4 + (0x42 << 2)
label_2e3790:
    if (ctx->pc == 0x2E3790u) {
        ctx->pc = 0x2E3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E378Cu;
        // 0x2e3790: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3794u;
        goto label_2e3794;
    }
    ctx->pc = 0x2E378Cu;
    {
        const bool branch_taken_0x2e378c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e378c) {
            ctx->pc = 0x2E3790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E378Cu;
            // 0x2e3790: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3898u;
            goto label_2e3898;
        }
    }
    ctx->pc = 0x2E3794u;
label_2e3794:
    // 0x2e3794: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2e3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2e3798:
    // 0x2e3798: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e3798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e379c:
    // 0x2e379c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_2e37a0:
    if (ctx->pc == 0x2E37A0u) {
        ctx->pc = 0x2E37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E379Cu;
        // 0x2e37a0: 0x26821f40  addiu       $v0, $s4, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37A4u;
        goto label_2e37a4;
    }
    ctx->pc = 0x2E379Cu;
    {
        const bool branch_taken_0x2e379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E379Cu;
        // 0x2e37a0: 0x26821f40  addiu       $v0, $s4, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e379c) {
            ctx->pc = 0x2E3894u;
            goto label_2e3894;
        }
    }
    ctx->pc = 0x2E37A4u;
label_2e37a4:
    // 0x2e37a4: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x2e37a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2e37a8:
    // 0x2e37a8: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x2e37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_2e37ac:
    // 0x2e37ac: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x2e37acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e37b0:
    // 0x2e37b0: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2e37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2e37b4:
    // 0x2e37b4: 0x82c203b8  lb          $v0, 0x3B8($s6)
    ctx->pc = 0x2e37b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 952)));
label_2e37b8:
    // 0x2e37b8: 0x8ed100cc  lw          $s1, 0xCC($s6)
    ctx->pc = 0x2e37b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
label_2e37bc:
    // 0x2e37bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e37bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e37c0:
    // 0x2e37c0: 0x1623000a  bne         $s1, $v1, . + 4 + (0xA << 2)
label_2e37c4:
    if (ctx->pc == 0x2E37C4u) {
        ctx->pc = 0x2E37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37C0u;
        // 0x2e37c4: 0x242800a  movz        $s0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37C8u;
        goto label_2e37c8;
    }
    ctx->pc = 0x2E37C0u;
    {
        const bool branch_taken_0x2e37c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37C0u;
        // 0x2e37c4: 0x242800a  movz        $s0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37c0) {
            ctx->pc = 0x2E37ECu;
            goto label_2e37ec;
        }
    }
    ctx->pc = 0x2E37C8u;
label_2e37c8:
    // 0x2e37c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e37cc:
    // 0x2e37cc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e37ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e37d0:
    // 0x2e37d0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e37d4:
    // 0x2e37d4: 0xc0cd4ee  jal         func_3353B8
label_2e37d8:
    if (ctx->pc == 0x2E37D8u) {
        ctx->pc = 0x2E37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37D4u;
        // 0x2e37d8: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37DCu;
        goto label_2e37dc;
    }
    ctx->pc = 0x2E37D4u;
    SET_GPR_U32(ctx, 31, 0x2E37DCu);
    ctx->pc = 0x2E37D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37D4u;
    // 0x2e37d8: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E37D4u, 0x2E37DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37DCu;
label_2e37dc:
    // 0x2e37dc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2e37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2e37e0:
    // 0x2e37e0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2e37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2e37e4:
    // 0x2e37e4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2e37e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e37e8:
    // 0x2e37e8: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x2e37e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_2e37ec:
    // 0x2e37ec: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x2e37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_2e37f0:
    // 0x2e37f0: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_2e37f4:
    if (ctx->pc == 0x2E37F4u) {
        ctx->pc = 0x2E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F0u;
        // 0x2e37f4: 0x2623ff1f  addiu       $v1, $s1, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967071));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37F8u;
        goto label_2e37f8;
    }
    ctx->pc = 0x2E37F0u;
    {
        const bool branch_taken_0x2e37f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F0u;
        // 0x2e37f4: 0x2623ff1f  addiu       $v1, $s1, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37f0) {
            ctx->pc = 0x2E380Cu;
            goto label_2e380c;
        }
    }
    ctx->pc = 0x2E37F8u;
label_2e37f8:
    // 0x2e37f8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e37fc:
    // 0x2e37fc: 0xc136b80  jal         func_4DAE00
label_2e3800:
    if (ctx->pc == 0x2E3800u) {
        ctx->pc = 0x2E3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37FCu;
        // 0x2e3800: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3804u;
        goto label_2e3804;
    }
    ctx->pc = 0x2E37FCu;
    SET_GPR_U32(ctx, 31, 0x2E3804u);
    ctx->pc = 0x2E3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37FCu;
    // 0x2e3800: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2E37FCu, 0x2E3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3804u;
label_2e3804:
    // 0x2e3804: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2e3804u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2e3808:
    // 0x2e3808: 0x2623ff1f  addiu       $v1, $s1, -0xE1
    ctx->pc = 0x2e3808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967071));
label_2e380c:
    // 0x2e380c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e3810:
    // 0x2e3810: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e3810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e3814:
    // 0x2e3814: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3818:
    // 0x2e3818: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x2e3818u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_2e381c:
    // 0x2e381c: 0xc0a3658  jal         func_28D960
label_2e3820:
    if (ctx->pc == 0x2E3820u) {
        ctx->pc = 0x2E3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E381Cu;
        // 0x2e3820: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3824u;
        goto label_2e3824;
    }
    ctx->pc = 0x2E381Cu;
    SET_GPR_U32(ctx, 31, 0x2E3824u);
    ctx->pc = 0x2E3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E381Cu;
    // 0x2e3820: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2E381Cu, 0x2E3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3824u;
label_2e3824:
    // 0x2e3824: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2e3828:
    if (ctx->pc == 0x2E3828u) {
        ctx->pc = 0x2E382Cu;
        goto label_2e382c;
    }
    ctx->pc = 0x2E3824u;
    {
        const bool branch_taken_0x2e3824 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e3824) {
            ctx->pc = 0x2E3840u;
            goto label_2e3840;
        }
    }
    ctx->pc = 0x2E382Cu;
label_2e382c:
    // 0x2e382c: 0xc08a200  jal         func_228800
label_2e3830:
    if (ctx->pc == 0x2E3830u) {
        ctx->pc = 0x2E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E382Cu;
        // 0x2e3830: 0x8ec400cc  lw          $a0, 0xCC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3834u;
        goto label_2e3834;
    }
    ctx->pc = 0x2E382Cu;
    SET_GPR_U32(ctx, 31, 0x2E3834u);
    ctx->pc = 0x2E3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E382Cu;
    // 0x2e3830: 0x8ec400cc  lw          $a0, 0xCC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2E382Cu, 0x2E3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3834u;
label_2e3834:
    // 0x2e3834: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2e3834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2e3838:
    // 0x2e3838: 0x3863000b  xori        $v1, $v1, 0xB
    ctx->pc = 0x2e3838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
label_2e383c:
    // 0x2e383c: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x2e383cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_2e3840:
    // 0x2e3840: 0xc0a47b4  jal         func_291ED0
label_2e3844:
    if (ctx->pc == 0x2E3844u) {
        ctx->pc = 0x2E3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3840u;
        // 0x2e3844: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3848u;
        goto label_2e3848;
    }
    ctx->pc = 0x2E3840u;
    SET_GPR_U32(ctx, 31, 0x2E3848u);
    ctx->pc = 0x2E3844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3840u;
    // 0x2e3844: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E3840u, 0x2E3848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3848u;
label_2e3848:
    // 0x2e3848: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
label_2e384c:
    if (ctx->pc == 0x2E384Cu) {
        ctx->pc = 0x2E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3848u;
        // 0x2e384c: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3850u;
        goto label_2e3850;
    }
    ctx->pc = 0x2E3848u;
    {
        const bool branch_taken_0x2e3848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3848u;
        // 0x2e384c: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3848) {
            ctx->pc = 0x2E3858u;
            goto label_2e3858;
        }
    }
    ctx->pc = 0x2E3850u;
label_2e3850:
    // 0x2e3850: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
label_2e3854:
    if (ctx->pc == 0x2E3854u) {
        ctx->pc = 0x2E3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3850u;
        // 0x2e3854: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3858u;
        goto label_2e3858;
    }
    ctx->pc = 0x2E3850u;
    {
        const bool branch_taken_0x2e3850 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3850) {
            ctx->pc = 0x2E3854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3850u;
            // 0x2e3854: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3898u;
            goto label_2e3898;
        }
    }
    ctx->pc = 0x2E3858u;
label_2e3858:
    // 0x2e3858: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x2e3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_2e385c:
    // 0x2e385c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e385cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e3860:
    // 0x2e3860: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3864:
    // 0x2e3864: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_2e3868:
    if (ctx->pc == 0x2E3868u) {
        ctx->pc = 0x2E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3864u;
        // 0x2e3868: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E386Cu;
        goto label_2e386c;
    }
    ctx->pc = 0x2E3864u;
    {
        const bool branch_taken_0x2e3864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3864u;
        // 0x2e3868: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3864) {
            ctx->pc = 0x2E3874u;
            goto label_2e3874;
        }
    }
    ctx->pc = 0x2E386Cu;
label_2e386c:
    // 0x2e386c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e386cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e3870:
    // 0x2e3870: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3874:
    // 0x2e3874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e3878:
    // 0x2e3878: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e3878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e387c:
    // 0x2e387c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e3880:
    // 0x2e3880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3884:
    // 0x2e3884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3888:
    // 0x2e3888: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e3888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e388c:
    // 0x2e388c: 0xc088178  jal         func_2205E0
label_2e3890:
    if (ctx->pc == 0x2E3890u) {
        ctx->pc = 0x2E3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E388Cu;
        // 0x2e3890: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3894u;
        goto label_2e3894;
    }
    ctx->pc = 0x2E388Cu;
    SET_GPR_U32(ctx, 31, 0x2E3894u);
    ctx->pc = 0x2E3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E388Cu;
    // 0x2e3890: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E388Cu, 0x2E3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3894u;
label_2e3894:
    // 0x2e3894: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2e3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3898:
    // 0x2e3898: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2e3898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2e389c:
    // 0x2e389c: 0x1c4001c1  bgtz        $v0, . + 4 + (0x1C1 << 2)
label_2e38a0:
    if (ctx->pc == 0x2E38A0u) {
        ctx->pc = 0x2E38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E389Cu;
        // 0x2e38a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38A4u;
        goto label_2e38a4;
    }
    ctx->pc = 0x2E389Cu;
    {
        const bool branch_taken_0x2e389c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E389Cu;
        // 0x2e38a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e389c) {
            ctx->pc = 0x2E3FA4u;
            goto label_2e3fa4;
        }
    }
    ctx->pc = 0x2E38A4u;
label_2e38a4:
    // 0x2e38a4: 0xc08a08a  jal         func_228228
label_2e38a8:
    if (ctx->pc == 0x2E38A8u) {
        ctx->pc = 0x2E38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A4u;
        // 0x2e38a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38ACu;
        goto label_2e38ac;
    }
    ctx->pc = 0x2E38A4u;
    SET_GPR_U32(ctx, 31, 0x2E38ACu);
    ctx->pc = 0x2E38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E38A4u;
    // 0x2e38a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2E38A4u, 0x2E38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E38ACu;
label_2e38ac:
    // 0x2e38ac: 0x105001be  beq         $v0, $s0, . + 4 + (0x1BE << 2)
label_2e38b0:
    if (ctx->pc == 0x2E38B0u) {
        ctx->pc = 0x2E38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38ACu;
        // 0x2e38b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38B4u;
        goto label_2e38b4;
    }
    ctx->pc = 0x2E38ACu;
    {
        const bool branch_taken_0x2e38ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38ACu;
        // 0x2e38b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38ac) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E38B4u;
label_2e38b4:
    // 0x2e38b4: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2e38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_2e38b8:
    // 0x2e38b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e38bc:
    if (ctx->pc == 0x2E38BCu) {
        ctx->pc = 0x2E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B8u;
        // 0x2e38bc: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38C0u;
        goto label_2e38c0;
    }
    ctx->pc = 0x2E38B8u;
    {
        const bool branch_taken_0x2e38b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B8u;
        // 0x2e38bc: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38b8) {
            ctx->pc = 0x2E38C8u;
            goto label_2e38c8;
        }
    }
    ctx->pc = 0x2E38C0u;
label_2e38c0:
    // 0x2e38c0: 0x144001b9  bnez        $v0, . + 4 + (0x1B9 << 2)
label_2e38c4:
    if (ctx->pc == 0x2E38C4u) {
        ctx->pc = 0x2E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38C0u;
        // 0x2e38c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38C8u;
        goto label_2e38c8;
    }
    ctx->pc = 0x2E38C0u;
    {
        const bool branch_taken_0x2e38c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38C0u;
        // 0x2e38c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38c0) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E38C8u;
label_2e38c8:
    // 0x2e38c8: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x2e38c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e38cc:
    // 0x2e38cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e38ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e38d0:
    // 0x2e38d0: 0x0  nop
    ctx->pc = 0x2e38d0u;
    // NOP
label_2e38d4:
    // 0x2e38d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e38d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e38d8:
    // 0x2e38d8: 0x0  nop
    ctx->pc = 0x2e38d8u;
    // NOP
label_2e38dc:
    // 0x2e38dc: 0x45020037  bc1fl       . + 4 + (0x37 << 2)
label_2e38e0:
    if (ctx->pc == 0x2E38E0u) {
        ctx->pc = 0x2E38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38DCu;
        // 0x2e38e0: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38E4u;
        goto label_2e38e4;
    }
    ctx->pc = 0x2E38DCu;
    {
        const bool branch_taken_0x2e38dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e38dc) {
            ctx->pc = 0x2E38E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E38DCu;
            // 0x2e38e0: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39BCu;
            goto label_2e39bc;
        }
    }
    ctx->pc = 0x2E38E4u;
label_2e38e4:
    // 0x2e38e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e38e8:
    // 0x2e38e8: 0xc05959e  jal         func_165678
label_2e38ec:
    if (ctx->pc == 0x2E38ECu) {
        ctx->pc = 0x2E38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38E8u;
        // 0x2e38ec: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38F0u;
        goto label_2e38f0;
    }
    ctx->pc = 0x2E38E8u;
    SET_GPR_U32(ctx, 31, 0x2E38F0u);
    ctx->pc = 0x2E38ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E38E8u;
    // 0x2e38ec: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E38E8u, 0x2E38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E38F0u;
label_2e38f0:
    // 0x2e38f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e38f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e38f4:
    // 0x2e38f4: 0x52200031  beql        $s1, $zero, . + 4 + (0x31 << 2)
label_2e38f8:
    if (ctx->pc == 0x2E38F8u) {
        ctx->pc = 0x2E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38F4u;
        // 0x2e38f8: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38FCu;
        goto label_2e38fc;
    }
    ctx->pc = 0x2E38F4u;
    {
        const bool branch_taken_0x2e38f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e38f4) {
            ctx->pc = 0x2E38F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E38F4u;
            // 0x2e38f8: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39BCu;
            goto label_2e39bc;
        }
    }
    ctx->pc = 0x2E38FCu;
label_2e38fc:
    // 0x2e38fc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3900:
    // 0x2e3900: 0xc137832  jal         func_4DE0C8
label_2e3904:
    if (ctx->pc == 0x2E3904u) {
        ctx->pc = 0x2E3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3900u;
        // 0x2e3904: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3908u;
        goto label_2e3908;
    }
    ctx->pc = 0x2E3900u;
    SET_GPR_U32(ctx, 31, 0x2E3908u);
    ctx->pc = 0x2E3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3900u;
    // 0x2e3904: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2E3900u, 0x2E3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3908u;
label_2e3908:
    // 0x2e3908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e390c:
    // 0x2e390c: 0x5443002b  bnel        $v0, $v1, . + 4 + (0x2B << 2)
label_2e3910:
    if (ctx->pc == 0x2E3910u) {
        ctx->pc = 0x2E3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E390Cu;
        // 0x2e3910: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3914u;
        goto label_2e3914;
    }
    ctx->pc = 0x2E390Cu;
    {
        const bool branch_taken_0x2e390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e390c) {
            ctx->pc = 0x2E3910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E390Cu;
            // 0x2e3910: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39BCu;
            goto label_2e39bc;
        }
    }
    ctx->pc = 0x2E3914u;
label_2e3914:
    // 0x2e3914: 0x86c40092  lh          $a0, 0x92($s6)
    ctx->pc = 0x2e3914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2e3918:
    // 0x2e3918: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e3918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e391c:
    // 0x2e391c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x2e391cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2e3920:
    // 0x2e3920: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e3920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e3924:
    // 0x2e3924: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e3928:
    // 0x2e3928: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e3928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e392c:
    // 0x2e392c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e3930:
    // 0x2e3930: 0xc0cdb38  jal         func_336CE0
label_2e3934:
    if (ctx->pc == 0x2E3934u) {
        ctx->pc = 0x2E3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3930u;
        // 0x2e3934: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3938u;
        goto label_2e3938;
    }
    ctx->pc = 0x2E3930u;
    SET_GPR_U32(ctx, 31, 0x2E3938u);
    ctx->pc = 0x2E3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3930u;
    // 0x2e3934: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E3930u, 0x2E3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3938u;
label_2e3938:
    // 0x2e3938: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x2e3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e393c:
    // 0x2e393c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e393cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2e3940:
    // 0x2e3940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e3940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3944:
    // 0x2e3944: 0x0  nop
    ctx->pc = 0x2e3944u;
    // NOP
label_2e3948:
    // 0x2e3948: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_2e394c:
    if (ctx->pc == 0x2E394Cu) {
        ctx->pc = 0x2E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3948u;
        // 0x2e394c: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3950u;
        goto label_2e3950;
    }
    ctx->pc = 0x2E3948u;
    {
        const bool branch_taken_0x2e3948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3948) {
            ctx->pc = 0x2E394Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3948u;
            // 0x2e394c: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39BCu;
            goto label_2e39bc;
        }
    }
    ctx->pc = 0x2E3950u;
label_2e3950:
    // 0x2e3950: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2e3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3954:
    // 0x2e3954: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2e3954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2e3958:
    // 0x2e3958: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2e395c:
    if (ctx->pc == 0x2E395Cu) {
        ctx->pc = 0x2E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3958u;
        // 0x2e395c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3960u;
        goto label_2e3960;
    }
    ctx->pc = 0x2E3958u;
    {
        const bool branch_taken_0x2e3958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3958) {
            ctx->pc = 0x2E395Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3958u;
            // 0x2e395c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3960u;
            goto label_2e3960;
        }
    }
    ctx->pc = 0x2E3960u;
label_2e3960:
    // 0x2e3960: 0xc0a4e54  jal         func_293950
label_2e3964:
    if (ctx->pc == 0x2E3964u) {
        ctx->pc = 0x2E3968u;
        goto label_2e3968;
    }
    ctx->pc = 0x2E3960u;
    SET_GPR_U32(ctx, 31, 0x2E3968u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E3960u, 0x2E3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3968u;
label_2e3968:
    // 0x2e3968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e396c:
    // 0x2e396c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2e3970:
    if (ctx->pc == 0x2E3970u) {
        ctx->pc = 0x2E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E396Cu;
        // 0x2e3970: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3974u;
        goto label_2e3974;
    }
    ctx->pc = 0x2E396Cu;
    {
        const bool branch_taken_0x2e396c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e396c) {
            ctx->pc = 0x2E3970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E396Cu;
            // 0x2e3970: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39ACu;
            goto label_2e39ac;
        }
    }
    ctx->pc = 0x2E3974u;
label_2e3974:
    // 0x2e3974: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e3974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e3978:
    // 0x2e3978: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e3978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e397c:
    // 0x2e397c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e3980:
    // 0x2e3980: 0x40f809  jalr        $v0
label_2e3984:
    if (ctx->pc == 0x2E3984u) {
        ctx->pc = 0x2E3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3980u;
        // 0x2e3984: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3988u;
        goto label_2e3988;
    }
    ctx->pc = 0x2E3980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3988u);
        ctx->pc = 0x2E3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3980u;
        // 0x2e3984: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3980u, 0x2E3988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3988u;
label_2e3988:
    // 0x2e3988: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2e3988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e398c:
    // 0x2e398c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e398cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3990:
    // 0x2e3990: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2e3990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2e3994:
    // 0x2e3994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3998:
    // 0x2e3998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e399c:
    // 0x2e399c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e399cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e39a0:
    // 0x2e39a0: 0xc0b7eea  jal         func_2DFBA8
label_2e39a4:
    if (ctx->pc == 0x2E39A4u) {
        ctx->pc = 0x2E39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39A0u;
        // 0x2e39a4: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39A8u;
        goto label_2e39a8;
    }
    ctx->pc = 0x2E39A0u;
    SET_GPR_U32(ctx, 31, 0x2E39A8u);
    ctx->pc = 0x2E39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39A0u;
    // 0x2e39a4: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2E39A0u, 0x2E39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39A8u;
label_2e39a8:
    // 0x2e39a8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e39ac:
    // 0x2e39ac: 0xc0a35d6  jal         func_28D758
label_2e39b0:
    if (ctx->pc == 0x2E39B0u) {
        ctx->pc = 0x2E39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39ACu;
        // 0x2e39b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39B4u;
        goto label_2e39b4;
    }
    ctx->pc = 0x2E39ACu;
    SET_GPR_U32(ctx, 31, 0x2E39B4u);
    ctx->pc = 0x2E39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39ACu;
    // 0x2e39b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E39ACu, 0x2E39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39B4u;
label_2e39b4:
    // 0x2e39b4: 0x1000017c  b           . + 4 + (0x17C << 2)
label_2e39b8:
    if (ctx->pc == 0x2E39B8u) {
        ctx->pc = 0x2E39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39B4u;
        // 0x2e39b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39BCu;
        goto label_2e39bc;
    }
    ctx->pc = 0x2E39B4u;
    {
        const bool branch_taken_0x2e39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39B4u;
        // 0x2e39b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39b4) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E39BCu;
label_2e39bc:
    // 0x2e39bc: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x2e39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2e39c0:
    // 0x2e39c0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2e39c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e39c4:
    // 0x2e39c4: 0xc0e409a  jal         func_390268
label_2e39c8:
    if (ctx->pc == 0x2E39C8u) {
        ctx->pc = 0x2E39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39C4u;
        // 0x2e39c8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39CCu;
        goto label_2e39cc;
    }
    ctx->pc = 0x2E39C4u;
    SET_GPR_U32(ctx, 31, 0x2E39CCu);
    ctx->pc = 0x2E39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39C4u;
    // 0x2e39c8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E39C4u, 0x2E39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39CCu;
label_2e39cc:
    // 0x2e39cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e39ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e39d0:
    // 0x2e39d0: 0xc0a34d6  jal         func_28D358
label_2e39d4:
    if (ctx->pc == 0x2E39D4u) {
        ctx->pc = 0x2E39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39D0u;
        // 0x2e39d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39D8u;
        goto label_2e39d8;
    }
    ctx->pc = 0x2E39D0u;
    SET_GPR_U32(ctx, 31, 0x2E39D8u);
    ctx->pc = 0x2E39D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39D0u;
    // 0x2e39d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2E39D0u, 0x2E39D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39D8u;
label_2e39d8:
    // 0x2e39d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e39d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e39dc:
    // 0x2e39dc: 0x12e00171  beqz        $s7, . + 4 + (0x171 << 2)
label_2e39e0:
    if (ctx->pc == 0x2E39E0u) {
        ctx->pc = 0x2E39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39DCu;
        // 0x2e39e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39E4u;
        goto label_2e39e4;
    }
    ctx->pc = 0x2E39DCu;
    {
        const bool branch_taken_0x2e39dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39DCu;
        // 0x2e39e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39dc) {
            ctx->pc = 0x2E3FA4u;
            goto label_2e3fa4;
        }
    }
    ctx->pc = 0x2E39E4u;
label_2e39e4:
    // 0x2e39e4: 0x92a30041  lbu         $v1, 0x41($s5)
    ctx->pc = 0x2e39e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 65)));
label_2e39e8:
    // 0x2e39e8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2e39ec:
    if (ctx->pc == 0x2E39ECu) {
        ctx->pc = 0x2E39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39E8u;
        // 0x2e39ec: 0x8ef401a8  lw          $s4, 0x1A8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39F0u;
        goto label_2e39f0;
    }
    ctx->pc = 0x2E39E8u;
    {
        const bool branch_taken_0x2e39e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e39e8) {
            ctx->pc = 0x2E39ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E39E8u;
            // 0x2e39ec: 0x8ef401a8  lw          $s4, 0x1A8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3A14u;
            goto label_2e3a14;
        }
    }
    ctx->pc = 0x2E39F0u;
label_2e39f0:
    // 0x2e39f0: 0xc089bfc  jal         func_226FF0
label_2e39f4:
    if (ctx->pc == 0x2E39F4u) {
        ctx->pc = 0x2E39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39F0u;
        // 0x2e39f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39F8u;
        goto label_2e39f8;
    }
    ctx->pc = 0x2E39F0u;
    SET_GPR_U32(ctx, 31, 0x2E39F8u);
    ctx->pc = 0x2E39F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39F0u;
    // 0x2e39f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2E39F0u, 0x2E39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39F8u;
label_2e39f8:
    // 0x2e39f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2e39fc:
    if (ctx->pc == 0x2E39FCu) {
        ctx->pc = 0x2E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39F8u;
        // 0x2e39fc: 0x8ef401a8  lw          $s4, 0x1A8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3A00u;
        goto label_2e3a00;
    }
    ctx->pc = 0x2E39F8u;
    {
        const bool branch_taken_0x2e39f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e39f8) {
            ctx->pc = 0x2E39FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E39F8u;
            // 0x2e39fc: 0x8ef401a8  lw          $s4, 0x1A8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3A14u;
            goto label_2e3a14;
        }
    }
    ctx->pc = 0x2E3A00u;
label_2e3a00:
    // 0x2e3a00: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3a04:
    // 0x2e3a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3a08:
    // 0x2e3a08: 0xc0a33f8  jal         func_28CFE0
label_2e3a0c:
    if (ctx->pc == 0x2E3A0Cu) {
        ctx->pc = 0x2E3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A08u;
        // 0x2e3a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3A10u;
        goto label_2e3a10;
    }
    ctx->pc = 0x2E3A08u;
    SET_GPR_U32(ctx, 31, 0x2E3A10u);
    ctx->pc = 0x2E3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A08u;
    // 0x2e3a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E3A08u, 0x2E3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A10u;
label_2e3a10:
    // 0x2e3a10: 0x8ef401a8  lw          $s4, 0x1A8($s7)
    ctx->pc = 0x2e3a10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
label_2e3a14:
    // 0x2e3a14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e3a18:
    // 0x2e3a18: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x2e3a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2e3a1c:
    // 0x2e3a1c: 0x283100a  movz        $v0, $s4, $v1
    ctx->pc = 0x2e3a1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
label_2e3a20:
    // 0x2e3a20: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2e3a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e3a24:
    // 0x2e3a24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e3a28:
    if (ctx->pc == 0x2E3A28u) {
        ctx->pc = 0x2E3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A24u;
        // 0x2e3a28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3A2Cu;
        goto label_2e3a2c;
    }
    ctx->pc = 0x2E3A24u;
    {
        const bool branch_taken_0x2e3a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A24u;
        // 0x2e3a28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a24) {
            ctx->pc = 0x2E3A38u;
            goto label_2e3a38;
        }
    }
    ctx->pc = 0x2E3A2Cu;
label_2e3a2c:
    // 0x2e3a2c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e3a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e3a30:
    // 0x2e3a30: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x2e3a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2e3a34:
    // 0x2e3a34: 0x282300a  movz        $a2, $s4, $v0
    ctx->pc = 0x2e3a34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 20));
label_2e3a38:
    // 0x2e3a38: 0x26f20090  addiu       $s2, $s7, 0x90
    ctx->pc = 0x2e3a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
label_2e3a3c:
    // 0x2e3a3c: 0x26d00090  addiu       $s0, $s6, 0x90
    ctx->pc = 0x2e3a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_2e3a40:
    // 0x2e3a40: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2e3a44:
    // 0x2e3a44: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x2e3a44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_2e3a48:
    // 0x2e3a48: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2e3a48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2e3a4c:
    // 0x2e3a4c: 0x26714b00  addiu       $s1, $s3, 0x4B00
    ctx->pc = 0x2e3a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
label_2e3a50:
    // 0x2e3a50: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e3a54:
    // 0x2e3a54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e3a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e3a58:
    // 0x2e3a58: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e3a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e3a5c:
    // 0x2e3a5c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2e3a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2e3a60:
    // 0x2e3a60: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2e3a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2e3a64:
    // 0x2e3a64: 0xc0cdb38  jal         func_336CE0
label_2e3a68:
    if (ctx->pc == 0x2E3A68u) {
        ctx->pc = 0x2E3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A64u;
        // 0x2e3a68: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3A6Cu;
        goto label_2e3a6c;
    }
    ctx->pc = 0x2E3A64u;
    SET_GPR_U32(ctx, 31, 0x2E3A6Cu);
    ctx->pc = 0x2E3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A64u;
    // 0x2e3a68: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E3A64u, 0x2E3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A6Cu;
label_2e3a6c:
    // 0x2e3a6c: 0xafb00088  sw          $s0, 0x88($sp)
    ctx->pc = 0x2e3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
label_2e3a70:
    // 0x2e3a70: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e3a70u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2e3a74:
    // 0x2e3a74: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x2e3a74u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e3a78:
    // 0x2e3a78: 0x0  nop
    ctx->pc = 0x2e3a78u;
    // NOP
label_2e3a7c:
    // 0x2e3a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e3a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e3a80:
    // 0x2e3a80: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2e3a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2e3a84:
    // 0x2e3a84: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2e3a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2e3a88:
    // 0x2e3a88: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e3a8c:
    // 0x2e3a8c: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x2e3a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e3a90:
    // 0x2e3a90: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e3a94:
    // 0x2e3a94: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2e3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2e3a98:
    // 0x2e3a98: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2e3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2e3a9c:
    // 0x2e3a9c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2e3a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2e3aa0:
    // 0x2e3aa0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e3aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2e3aa4:
    // 0x2e3aa4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2e3aa4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e3aa8:
    // 0x2e3aa8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e3aa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e3aac:
    // 0x2e3aac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e3aacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e3ab0:
    // 0x2e3ab0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e3ab0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e3ab4:
    // 0x2e3ab4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e3ab4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e3ab8:
    // 0x2e3ab8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e3ab8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e3abc:
    // 0x2e3abc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e3abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e3ac0:
    // 0x2e3ac0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e3ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e3ac4:
    // 0x2e3ac4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2e3ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e3ac8:
    // 0x2e3ac8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e3ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e3acc:
    // 0x2e3acc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e3accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e3ad0:
    // 0x2e3ad0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e3ad0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2e3ad4:
    // 0x2e3ad4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e3ad4u;
    // VWAITQ (Q already resolved in this runtime)
label_2e3ad8:
    // 0x2e3ad8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2e3ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e3adc:
    // 0x2e3adc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2e3adcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2e3ae0:
    // 0x2e3ae0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2e3ae4:
    // 0x2e3ae4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2e3ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2e3ae8:
    // 0x2e3ae8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e3ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3aec:
    // 0x2e3aec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e3aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2e3af0:
    // 0x2e3af0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e3af4:
    // 0x2e3af4: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2e3af4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2e3af8:
    // 0x2e3af8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2e3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2e3afc:
    // 0x2e3afc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e3afcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e3b00:
    // 0x2e3b00: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2e3b04:
    // 0x2e3b04: 0xc0cd8ec  jal         func_3363B0
label_2e3b08:
    if (ctx->pc == 0x2E3B08u) {
        ctx->pc = 0x2E3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B04u;
        // 0x2e3b08: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B0Cu;
        goto label_2e3b0c;
    }
    ctx->pc = 0x2E3B04u;
    SET_GPR_U32(ctx, 31, 0x2E3B0Cu);
    ctx->pc = 0x2E3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B04u;
    // 0x2e3b08: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E3B04u, 0x2E3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B0Cu;
label_2e3b0c:
    // 0x2e3b0c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2e3b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2e3b10:
    // 0x2e3b10: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2e3b10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3b14:
    // 0x2e3b14: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2e3b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e3b18:
    // 0x2e3b18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e3b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e3b1c:
    // 0x2e3b1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e3b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e3b20:
    // 0x2e3b20: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2e3b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e3b24:
    // 0x2e3b24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e3b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e3b28:
    // 0x2e3b28: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2e3b28u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e3b2c:
    // 0x2e3b2c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e3b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3b30:
    // 0x2e3b30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2e3b30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e3b34:
    // 0x2e3b34: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_2e3b38:
    if (ctx->pc == 0x2E3B38u) {
        ctx->pc = 0x2E3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B34u;
        // 0x2e3b38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B3Cu;
        goto label_2e3b3c;
    }
    ctx->pc = 0x2E3B34u;
    {
        const bool branch_taken_0x2e3b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3b34) {
            ctx->pc = 0x2E3B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B34u;
            // 0x2e3b38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3B68u;
            goto label_2e3b68;
        }
    }
    ctx->pc = 0x2E3B3Cu;
label_2e3b3c:
    // 0x2e3b3c: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x2e3b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
label_2e3b40:
    // 0x2e3b40: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2e3b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_2e3b44:
    // 0x2e3b44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e3b48:
    // 0x2e3b48: 0x0  nop
    ctx->pc = 0x2e3b48u;
    // NOP
label_2e3b4c:
    // 0x2e3b4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e3b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3b50:
    // 0x2e3b50: 0x0  nop
    ctx->pc = 0x2e3b50u;
    // NOP
label_2e3b54:
    // 0x2e3b54: 0x45000078  bc1f        . + 4 + (0x78 << 2)
label_2e3b58:
    if (ctx->pc == 0x2E3B58u) {
        ctx->pc = 0x2E3B5Cu;
        goto label_2e3b5c;
    }
    ctx->pc = 0x2E3B54u;
    {
        const bool branch_taken_0x2e3b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3b54) {
            ctx->pc = 0x2E3D38u;
            goto label_2e3d38;
        }
    }
    ctx->pc = 0x2E3B5Cu;
label_2e3b5c:
    // 0x2e3b5c: 0x8ee201a8  lw          $v0, 0x1A8($s7)
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
label_2e3b60:
    // 0x2e3b60: 0x18400075  blez        $v0, . + 4 + (0x75 << 2)
label_2e3b64:
    if (ctx->pc == 0x2E3B64u) {
        ctx->pc = 0x2E3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B60u;
        // 0x2e3b64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B68u;
        goto label_2e3b68;
    }
    ctx->pc = 0x2E3B60u;
    {
        const bool branch_taken_0x2e3b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B60u;
        // 0x2e3b64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b60) {
            ctx->pc = 0x2E3D38u;
            goto label_2e3d38;
        }
    }
    ctx->pc = 0x2E3B68u;
label_2e3b68:
    // 0x2e3b68: 0xc088fa8  jal         func_223EA0
label_2e3b6c:
    if (ctx->pc == 0x2E3B6Cu) {
        ctx->pc = 0x2E3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B68u;
        // 0x2e3b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B70u;
        goto label_2e3b70;
    }
    ctx->pc = 0x2E3B68u;
    SET_GPR_U32(ctx, 31, 0x2E3B70u);
    ctx->pc = 0x2E3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B68u;
    // 0x2e3b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2E3B68u, 0x2E3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B70u;
label_2e3b70:
    // 0x2e3b70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e3b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3b74:
    // 0x2e3b74: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_2e3b78:
    if (ctx->pc == 0x2E3B78u) {
        ctx->pc = 0x2E3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B74u;
        // 0x2e3b78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B7Cu;
        goto label_2e3b7c;
    }
    ctx->pc = 0x2E3B74u;
    {
        const bool branch_taken_0x2e3b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B74u;
        // 0x2e3b78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b74) {
            ctx->pc = 0x2E3B8Cu;
            goto label_2e3b8c;
        }
    }
    ctx->pc = 0x2E3B7Cu;
label_2e3b7c:
    // 0x2e3b7c: 0xc089000  jal         func_224000
label_2e3b80:
    if (ctx->pc == 0x2E3B80u) {
        ctx->pc = 0x2E3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B7Cu;
        // 0x2e3b80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B84u;
        goto label_2e3b84;
    }
    ctx->pc = 0x2E3B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B84u);
    ctx->pc = 0x2E3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B7Cu;
    // 0x2e3b80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2E3B7Cu, 0x2E3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B84u;
label_2e3b84:
    // 0x2e3b84: 0x1451002f  bne         $v0, $s1, . + 4 + (0x2F << 2)
label_2e3b88:
    if (ctx->pc == 0x2E3B88u) {
        ctx->pc = 0x2E3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B84u;
        // 0x2e3b88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B8Cu;
        goto label_2e3b8c;
    }
    ctx->pc = 0x2E3B84u;
    {
        const bool branch_taken_0x2e3b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B84u;
        // 0x2e3b88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b84) {
            ctx->pc = 0x2E3C44u;
            goto label_2e3c44;
        }
    }
    ctx->pc = 0x2E3B8Cu;
label_2e3b8c:
    // 0x2e3b8c: 0xc089bfc  jal         func_226FF0
label_2e3b90:
    if (ctx->pc == 0x2E3B90u) {
        ctx->pc = 0x2E3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B8Cu;
        // 0x2e3b90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B94u;
        goto label_2e3b94;
    }
    ctx->pc = 0x2E3B8Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B94u);
    ctx->pc = 0x2E3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B8Cu;
    // 0x2e3b90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2E3B8Cu, 0x2E3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B94u;
label_2e3b94:
    // 0x2e3b94: 0xc0e57ce  jal         func_395F38
label_2e3b98:
    if (ctx->pc == 0x2E3B98u) {
        ctx->pc = 0x2E3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B94u;
        // 0x2e3b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B9Cu;
        goto label_2e3b9c;
    }
    ctx->pc = 0x2E3B94u;
    SET_GPR_U32(ctx, 31, 0x2E3B9Cu);
    ctx->pc = 0x2E3B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B94u;
    // 0x2e3b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2E3B94u, 0x2E3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B9Cu;
label_2e3b9c:
    // 0x2e3b9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e3b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3ba0:
    // 0x2e3ba0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2e3ba4:
    if (ctx->pc == 0x2E3BA4u) {
        ctx->pc = 0x2E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA0u;
        // 0x2e3ba4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BA8u;
        goto label_2e3ba8;
    }
    ctx->pc = 0x2E3BA0u;
    {
        const bool branch_taken_0x2e3ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA0u;
        // 0x2e3ba4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ba0) {
            ctx->pc = 0x2E3BF4u;
            goto label_2e3bf4;
        }
    }
    ctx->pc = 0x2E3BA8u;
label_2e3ba8:
    // 0x2e3ba8: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2e3ba8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_2e3bac:
    // 0x2e3bac: 0xc0e44cc  jal         func_391330
label_2e3bb0:
    if (ctx->pc == 0x2E3BB0u) {
        ctx->pc = 0x2E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BACu;
        // 0x2e3bb0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BB4u;
        goto label_2e3bb4;
    }
    ctx->pc = 0x2E3BACu;
    SET_GPR_U32(ctx, 31, 0x2E3BB4u);
    ctx->pc = 0x2E3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3BACu;
    // 0x2e3bb0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2E3BACu, 0x2E3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BB4u;
label_2e3bb4:
    // 0x2e3bb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e3bb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3bb8:
    // 0x2e3bb8: 0x80640087  lb          $a0, 0x87($v1)
    ctx->pc = 0x2e3bb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 135)));
label_2e3bbc:
    // 0x2e3bbc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e3bc0:
    // 0x2e3bc0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_2e3bc4:
    if (ctx->pc == 0x2E3BC4u) {
        ctx->pc = 0x2E3BC8u;
        goto label_2e3bc8;
    }
    ctx->pc = 0x2E3BC0u;
    {
        const bool branch_taken_0x2e3bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3bc0) {
            ctx->pc = 0x2E3BD0u;
            goto label_2e3bd0;
        }
    }
    ctx->pc = 0x2E3BC8u;
label_2e3bc8:
    // 0x2e3bc8: 0x8062005a  lb          $v0, 0x5A($v1)
    ctx->pc = 0x2e3bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 90)));
label_2e3bcc:
    // 0x2e3bcc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2e3bccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2e3bd0:
    // 0x2e3bd0: 0x14910009  bne         $a0, $s1, . + 4 + (0x9 << 2)
label_2e3bd4:
    if (ctx->pc == 0x2E3BD4u) {
        ctx->pc = 0x2E3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BD0u;
        // 0x2e3bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BD8u;
        goto label_2e3bd8;
    }
    ctx->pc = 0x2E3BD0u;
    {
        const bool branch_taken_0x2e3bd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BD0u;
        // 0x2e3bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bd0) {
            ctx->pc = 0x2E3BF8u;
            goto label_2e3bf8;
        }
    }
    ctx->pc = 0x2E3BD8u;
label_2e3bd8:
    // 0x2e3bd8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2e3bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2e3bdc:
    // 0x2e3bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e3be0:
    // 0x2e3be0: 0x0  nop
    ctx->pc = 0x2e3be0u;
    // NOP
label_2e3be4:
    // 0x2e3be4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2e3be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3be8:
    // 0x2e3be8: 0x0  nop
    ctx->pc = 0x2e3be8u;
    // NOP
label_2e3bec:
    // 0x2e3bec: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_2e3bf0:
    if (ctx->pc == 0x2E3BF0u) {
        ctx->pc = 0x2E3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BECu;
        // 0x2e3bf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BF4u;
        goto label_2e3bf4;
    }
    ctx->pc = 0x2E3BECu;
    {
        const bool branch_taken_0x2e3bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3bec) {
            ctx->pc = 0x2E3BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3BECu;
            // 0x2e3bf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3BF8u;
            goto label_2e3bf8;
        }
    }
    ctx->pc = 0x2E3BF4u;
label_2e3bf4:
    // 0x2e3bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3bf8:
    // 0x2e3bf8: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_2e3bfc:
    if (ctx->pc == 0x2E3BFCu) {
        ctx->pc = 0x2E3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BF8u;
        // 0x2e3bfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C00u;
        goto label_2e3c00;
    }
    ctx->pc = 0x2E3BF8u;
    {
        const bool branch_taken_0x2e3bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BF8u;
        // 0x2e3bfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bf8) {
            ctx->pc = 0x2E3C44u;
            goto label_2e3c44;
        }
    }
    ctx->pc = 0x2E3C00u;
label_2e3c00:
    // 0x2e3c00: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2e3c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2e3c04:
    // 0x2e3c04: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e3c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3c08:
    // 0x2e3c08: 0x0  nop
    ctx->pc = 0x2e3c08u;
    // NOP
label_2e3c0c:
    // 0x2e3c0c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2e3c10:
    if (ctx->pc == 0x2E3C10u) {
        ctx->pc = 0x2E3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C0Cu;
        // 0x2e3c10: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C14u;
        goto label_2e3c14;
    }
    ctx->pc = 0x2E3C0Cu;
    {
        const bool branch_taken_0x2e3c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C0Cu;
        // 0x2e3c10: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c0c) {
            ctx->pc = 0x2E3C44u;
            goto label_2e3c44;
        }
    }
    ctx->pc = 0x2E3C14u;
label_2e3c14:
    // 0x2e3c14: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3c18:
    // 0x2e3c18: 0xc0a33f8  jal         func_28CFE0
label_2e3c1c:
    if (ctx->pc == 0x2E3C1Cu) {
        ctx->pc = 0x2E3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C18u;
        // 0x2e3c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C20u;
        goto label_2e3c20;
    }
    ctx->pc = 0x2E3C18u;
    SET_GPR_U32(ctx, 31, 0x2E3C20u);
    ctx->pc = 0x2E3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C18u;
    // 0x2e3c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E3C18u, 0x2E3C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C20u;
label_2e3c20:
    // 0x2e3c20: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3c24:
    // 0x2e3c24: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e3c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c28:
    // 0x2e3c28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e3c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e3c2c:
    // 0x2e3c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3c30:
    // 0x2e3c30: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2e3c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2e3c34:
    // 0x2e3c34: 0xc0a3892  jal         func_28E248
label_2e3c38:
    if (ctx->pc == 0x2E3C38u) {
        ctx->pc = 0x2E3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C34u;
        // 0x2e3c38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C3Cu;
        goto label_2e3c3c;
    }
    ctx->pc = 0x2E3C34u;
    SET_GPR_U32(ctx, 31, 0x2E3C3Cu);
    ctx->pc = 0x2E3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C34u;
    // 0x2e3c38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2E3C34u, 0x2E3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C3Cu;
label_2e3c3c:
    // 0x2e3c3c: 0x100000da  b           . + 4 + (0xDA << 2)
label_2e3c40:
    if (ctx->pc == 0x2E3C40u) {
        ctx->pc = 0x2E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C3Cu;
        // 0x2e3c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C44u;
        goto label_2e3c44;
    }
    ctx->pc = 0x2E3C3Cu;
    {
        const bool branch_taken_0x2e3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C3Cu;
        // 0x2e3c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c3c) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3C44u;
label_2e3c44:
    // 0x2e3c44: 0xc088bd2  jal         func_222F48
label_2e3c48:
    if (ctx->pc == 0x2E3C48u) {
        ctx->pc = 0x2E3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C44u;
        // 0x2e3c48: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C4Cu;
        goto label_2e3c4c;
    }
    ctx->pc = 0x2E3C44u;
    SET_GPR_U32(ctx, 31, 0x2E3C4Cu);
    ctx->pc = 0x2E3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C44u;
    // 0x2e3c48: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222F48u, 0x2E3C44u, 0x2E3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C4Cu;
label_2e3c4c:
    // 0x2e3c4c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2e3c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2e3c50:
    // 0x2e3c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e3c54:
    // 0x2e3c54: 0x0  nop
    ctx->pc = 0x2e3c54u;
    // NOP
label_2e3c58:
    // 0x2e3c58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e3c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3c5c:
    // 0x2e3c5c: 0x0  nop
    ctx->pc = 0x2e3c5cu;
    // NOP
label_2e3c60:
    // 0x2e3c60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e3c64:
    if (ctx->pc == 0x2E3C64u) {
        ctx->pc = 0x2E3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C60u;
        // 0x2e3c64: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C68u;
        goto label_2e3c68;
    }
    ctx->pc = 0x2E3C60u;
    {
        const bool branch_taken_0x2e3c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3c60) {
            ctx->pc = 0x2E3C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3C60u;
            // 0x2e3c64: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C68u;
            goto label_2e3c68;
        }
    }
    ctx->pc = 0x2E3C68u;
label_2e3c68:
    // 0x2e3c68: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x2e3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_2e3c6c:
    // 0x2e3c6c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e3c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c70:
    // 0x2e3c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e3c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c74:
    // 0x2e3c74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e3c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c78:
    // 0x2e3c78: 0xc0b8d62  jal         func_2E3588
label_2e3c7c:
    if (ctx->pc == 0x2E3C7Cu) {
        ctx->pc = 0x2E3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C78u;
        // 0x2e3c7c: 0x42880b  movn        $s1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C80u;
        goto label_2e3c80;
    }
    ctx->pc = 0x2E3C78u;
    SET_GPR_U32(ctx, 31, 0x2E3C80u);
    ctx->pc = 0x2E3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C78u;
    // 0x2e3c7c: 0x42880b  movn        $s1, $v0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3588u, 0x2E3C78u, 0x2E3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C80u;
label_2e3c80:
    // 0x2e3c80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e3c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c84:
    // 0x2e3c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3c88:
    // 0x2e3c88: 0x164200c7  bne         $s2, $v0, . + 4 + (0xC7 << 2)
label_2e3c8c:
    if (ctx->pc == 0x2E3C8Cu) {
        ctx->pc = 0x2E3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C88u;
        // 0x2e3c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C90u;
        goto label_2e3c90;
    }
    ctx->pc = 0x2E3C88u;
    {
        const bool branch_taken_0x2e3c88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C88u;
        // 0x2e3c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c88) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3C90u;
label_2e3c90:
    // 0x2e3c90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e3c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c94:
    // 0x2e3c94: 0xc088e88  jal         func_223A20
label_2e3c98:
    if (ctx->pc == 0x2E3C98u) {
        ctx->pc = 0x2E3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C94u;
        // 0x2e3c98: 0x24100063  addiu       $s0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C9Cu;
        goto label_2e3c9c;
    }
    ctx->pc = 0x2E3C94u;
    SET_GPR_U32(ctx, 31, 0x2E3C9Cu);
    ctx->pc = 0x2E3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C94u;
    // 0x2e3c98: 0x24100063  addiu       $s0, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2E3C94u, 0x2E3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C9Cu;
label_2e3c9c:
    // 0x2e3c9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e3c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e3ca0:
    // 0x2e3ca0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3ca4:
    // 0x2e3ca4: 0xc0a367c  jal         func_28D9F0
label_2e3ca8:
    if (ctx->pc == 0x2E3CA8u) {
        ctx->pc = 0x2E3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CA4u;
        // 0x2e3ca8: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CACu;
        goto label_2e3cac;
    }
    ctx->pc = 0x2E3CA4u;
    SET_GPR_U32(ctx, 31, 0x2E3CACu);
    ctx->pc = 0x2E3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CA4u;
    // 0x2e3ca8: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E3CA4u, 0x2E3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CACu;
label_2e3cac:
    // 0x2e3cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3cb0:
    // 0x2e3cb0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2e3cb4:
    if (ctx->pc == 0x2E3CB4u) {
        ctx->pc = 0x2E3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CB0u;
        // 0x2e3cb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CB8u;
        goto label_2e3cb8;
    }
    ctx->pc = 0x2E3CB0u;
    {
        const bool branch_taken_0x2e3cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CB0u;
        // 0x2e3cb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cb0) {
            ctx->pc = 0x2E3CE4u;
            goto label_2e3ce4;
        }
    }
    ctx->pc = 0x2E3CB8u;
label_2e3cb8:
    // 0x2e3cb8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2e3cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3cbc:
    // 0x2e3cbc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e3cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e3cc0:
    // 0x2e3cc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e3cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e3cc4:
    // 0x2e3cc4: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2e3cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2e3cc8:
    // 0x2e3cc8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2e3cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2e3ccc:
    // 0x2e3ccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3cd0:
    // 0x2e3cd0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2e3cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e3cd4:
    // 0x2e3cd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e3cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e3cd8:
    // 0x2e3cd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3cdc:
    // 0x2e3cdc: 0xc0bee7a  jal         func_2FB9E8
label_2e3ce0:
    if (ctx->pc == 0x2E3CE0u) {
        ctx->pc = 0x2E3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CDCu;
        // 0x2e3ce0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CE4u;
        goto label_2e3ce4;
    }
    ctx->pc = 0x2E3CDCu;
    SET_GPR_U32(ctx, 31, 0x2E3CE4u);
    ctx->pc = 0x2E3CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CDCu;
    // 0x2e3ce0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E3CDCu, 0x2E3CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CE4u;
label_2e3ce4:
    // 0x2e3ce4: 0xc088e88  jal         func_223A20
label_2e3ce8:
    if (ctx->pc == 0x2E3CE8u) {
        ctx->pc = 0x2E3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CE4u;
        // 0x2e3ce8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CECu;
        goto label_2e3cec;
    }
    ctx->pc = 0x2E3CE4u;
    SET_GPR_U32(ctx, 31, 0x2E3CECu);
    ctx->pc = 0x2E3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CE4u;
    // 0x2e3ce8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2E3CE4u, 0x2E3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CECu;
label_2e3cec:
    // 0x2e3cec: 0x145200ae  bne         $v0, $s2, . + 4 + (0xAE << 2)
label_2e3cf0:
    if (ctx->pc == 0x2E3CF0u) {
        ctx->pc = 0x2E3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CECu;
        // 0x2e3cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CF4u;
        goto label_2e3cf4;
    }
    ctx->pc = 0x2E3CECu;
    {
        const bool branch_taken_0x2e3cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CECu;
        // 0x2e3cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cec) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3CF4u;
label_2e3cf4:
    // 0x2e3cf4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2e3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2e3cf8:
    // 0x2e3cf8: 0x26624b00  addiu       $v0, $s3, 0x4B00
    ctx->pc = 0x2e3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
label_2e3cfc:
    // 0x2e3cfc: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x2e3cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2e3d00:
    // 0x2e3d00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e3d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e3d04:
    // 0x2e3d04: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e3d08:
    // 0x2e3d08: 0xc0cd780  jal         func_335E00
label_2e3d0c:
    if (ctx->pc == 0x2E3D0Cu) {
        ctx->pc = 0x2E3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D08u;
        // 0x2e3d0c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D10u;
        goto label_2e3d10;
    }
    ctx->pc = 0x2E3D08u;
    SET_GPR_U32(ctx, 31, 0x2E3D10u);
    ctx->pc = 0x2E3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D08u;
    // 0x2e3d0c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2E3D08u, 0x2E3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D10u;
label_2e3d10:
    // 0x2e3d10: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3d14:
    // 0x2e3d14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e3d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e3d18:
    // 0x2e3d18: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2e3d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_2e3d1c:
    // 0x2e3d1c: 0xc0a2ab0  jal         func_28AAC0
label_2e3d20:
    if (ctx->pc == 0x2E3D20u) {
        ctx->pc = 0x2E3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D1Cu;
        // 0x2e3d20: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D24u;
        goto label_2e3d24;
    }
    ctx->pc = 0x2E3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D24u);
    ctx->pc = 0x2E3D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D1Cu;
    // 0x2e3d20: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2E3D1Cu, 0x2E3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D24u;
label_2e3d24:
    // 0x2e3d24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e3d28:
    // 0x2e3d28: 0xc0899aa  jal         func_2266A8
label_2e3d2c:
    if (ctx->pc == 0x2E3D2Cu) {
        ctx->pc = 0x2E3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D28u;
        // 0x2e3d2c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D30u;
        goto label_2e3d30;
    }
    ctx->pc = 0x2E3D28u;
    SET_GPR_U32(ctx, 31, 0x2E3D30u);
    ctx->pc = 0x2E3D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D28u;
    // 0x2e3d2c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2E3D28u, 0x2E3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D30u;
label_2e3d30:
    // 0x2e3d30: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2e3d34:
    if (ctx->pc == 0x2E3D34u) {
        ctx->pc = 0x2E3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D30u;
        // 0x2e3d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D38u;
        goto label_2e3d38;
    }
    ctx->pc = 0x2E3D30u;
    {
        const bool branch_taken_0x2e3d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D30u;
        // 0x2e3d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d30) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3D38u;
label_2e3d38:
    // 0x2e3d38: 0xc088e88  jal         func_223A20
label_2e3d3c:
    if (ctx->pc == 0x2E3D3Cu) {
        ctx->pc = 0x2E3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D38u;
        // 0x2e3d3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D40u;
        goto label_2e3d40;
    }
    ctx->pc = 0x2E3D38u;
    SET_GPR_U32(ctx, 31, 0x2E3D40u);
    ctx->pc = 0x2E3D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D38u;
    // 0x2e3d3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2E3D38u, 0x2E3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D40u;
label_2e3d40:
    // 0x2e3d40: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_2e3d44:
    if (ctx->pc == 0x2E3D44u) {
        ctx->pc = 0x2E3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D40u;
        // 0x2e3d44: 0x8fa20088  lw          $v0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D48u;
        goto label_2e3d48;
    }
    ctx->pc = 0x2E3D40u;
    {
        const bool branch_taken_0x2e3d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D40u;
        // 0x2e3d44: 0x8fa20088  lw          $v0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d40) {
            ctx->pc = 0x2E3FA4u;
            goto label_2e3fa4;
        }
    }
    ctx->pc = 0x2E3D48u;
label_2e3d48:
    // 0x2e3d48: 0x26704b00  addiu       $s0, $s3, 0x4B00
    ctx->pc = 0x2e3d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
label_2e3d4c:
    // 0x2e3d4c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2e3d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2e3d50:
    // 0x2e3d50: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e3d54:
    // 0x2e3d54: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2e3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2e3d58:
    // 0x2e3d58: 0xc0cd7d2  jal         func_335F48
label_2e3d5c:
    if (ctx->pc == 0x2E3D5Cu) {
        ctx->pc = 0x2E3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D58u;
        // 0x2e3d5c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D60u;
        goto label_2e3d60;
    }
    ctx->pc = 0x2E3D58u;
    SET_GPR_U32(ctx, 31, 0x2E3D60u);
    ctx->pc = 0x2E3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D58u;
    // 0x2e3d5c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2E3D58u, 0x2E3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D60u;
label_2e3d60:
    // 0x2e3d60: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2e3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2e3d64:
    // 0x2e3d64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e3d64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2e3d68:
    // 0x2e3d68: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x2e3d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2e3d6c:
    // 0x2e3d6c: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x2e3d6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2e3d70:
    // 0x2e3d70: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e3d74:
    // 0x2e3d74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e3d78:
    // 0x2e3d78: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2e3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2e3d7c:
    // 0x2e3d7c: 0xc0cd780  jal         func_335E00
label_2e3d80:
    if (ctx->pc == 0x2E3D80u) {
        ctx->pc = 0x2E3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D7Cu;
        // 0x2e3d80: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D84u;
        goto label_2e3d84;
    }
    ctx->pc = 0x2E3D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D84u);
    ctx->pc = 0x2E3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D7Cu;
    // 0x2e3d80: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2E3D7Cu, 0x2E3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D84u;
label_2e3d84:
    // 0x2e3d84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e3d84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e3d88:
    // 0x2e3d88: 0xc0cd742  jal         func_335D08
label_2e3d8c:
    if (ctx->pc == 0x2E3D8Cu) {
        ctx->pc = 0x2E3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D88u;
        // 0x2e3d8c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D90u;
        goto label_2e3d90;
    }
    ctx->pc = 0x2E3D88u;
    SET_GPR_U32(ctx, 31, 0x2E3D90u);
    ctx->pc = 0x2E3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D88u;
    // 0x2e3d8c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2E3D88u, 0x2E3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D90u;
label_2e3d90:
    // 0x2e3d90: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e3d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e3d94:
    // 0x2e3d94: 0xc0cdd2e  jal         func_3374B8
label_2e3d98:
    if (ctx->pc == 0x2E3D98u) {
        ctx->pc = 0x2E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D94u;
        // 0x2e3d98: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3D9Cu;
        goto label_2e3d9c;
    }
    ctx->pc = 0x2E3D94u;
    SET_GPR_U32(ctx, 31, 0x2E3D9Cu);
    ctx->pc = 0x2E3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D94u;
    // 0x2e3d98: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2E3D94u, 0x2E3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D9Cu;
label_2e3d9c:
    // 0x2e3d9c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2e3d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_2e3da0:
    // 0x2e3da0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2e3da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2e3da4:
    // 0x2e3da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e3da8:
    // 0x2e3da8: 0x0  nop
    ctx->pc = 0x2e3da8u;
    // NOP
label_2e3dac:
    // 0x2e3dac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e3dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3db0:
    // 0x2e3db0: 0x0  nop
    ctx->pc = 0x2e3db0u;
    // NOP
label_2e3db4:
    // 0x2e3db4: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_2e3db8:
    if (ctx->pc == 0x2E3DB8u) {
        ctx->pc = 0x2E3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DB4u;
        // 0x2e3db8: 0x92b00041  lbu         $s0, 0x41($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 65)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3DBCu;
        goto label_2e3dbc;
    }
    ctx->pc = 0x2E3DB4u;
    {
        const bool branch_taken_0x2e3db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3db4) {
            ctx->pc = 0x2E3DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3DB4u;
            // 0x2e3db8: 0x92b00041  lbu         $s0, 0x41($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3DF4u;
            goto label_2e3df4;
        }
    }
    ctx->pc = 0x2E3DBCu;
label_2e3dbc:
    // 0x2e3dbc: 0xc0a367c  jal         func_28D9F0
label_2e3dc0:
    if (ctx->pc == 0x2E3DC0u) {
        ctx->pc = 0x2E3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DBCu;
        // 0x2e3dc0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3DC4u;
        goto label_2e3dc4;
    }
    ctx->pc = 0x2E3DBCu;
    SET_GPR_U32(ctx, 31, 0x2E3DC4u);
    ctx->pc = 0x2E3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DBCu;
    // 0x2e3dc0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E3DBCu, 0x2E3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DC4u;
label_2e3dc4:
    // 0x2e3dc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e3dc8:
    if (ctx->pc == 0x2E3DC8u) {
        ctx->pc = 0x2E3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DC4u;
        // 0x2e3dc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3DCCu;
        goto label_2e3dcc;
    }
    ctx->pc = 0x2E3DC4u;
    {
        const bool branch_taken_0x2e3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DC4u;
        // 0x2e3dc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3dc4) {
            ctx->pc = 0x2E3DF0u;
            goto label_2e3df0;
        }
    }
    ctx->pc = 0x2E3DCCu;
label_2e3dcc:
    // 0x2e3dcc: 0x87c60002  lh          $a2, 0x2($fp)
    ctx->pc = 0x2e3dccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2e3dd0:
    // 0x2e3dd0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2e3dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3dd4:
    // 0x2e3dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3dd8:
    // 0x2e3dd8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2e3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2e3ddc:
    // 0x2e3ddc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e3ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2e3de0:
    // 0x2e3de0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e3de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e3de4:
    // 0x2e3de4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3de8:
    // 0x2e3de8: 0xc0bf800  jal         func_2FE000
label_2e3dec:
    if (ctx->pc == 0x2E3DECu) {
        ctx->pc = 0x2E3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DE8u;
        // 0x2e3dec: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3DF0u;
        goto label_2e3df0;
    }
    ctx->pc = 0x2E3DE8u;
    SET_GPR_U32(ctx, 31, 0x2E3DF0u);
    ctx->pc = 0x2E3DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DE8u;
    // 0x2e3dec: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E3DE8u, 0x2E3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DF0u;
label_2e3df0:
    // 0x2e3df0: 0x92b00041  lbu         $s0, 0x41($s5)
    ctx->pc = 0x2e3df0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 65)));
label_2e3df4:
    // 0x2e3df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3df8:
    // 0x2e3df8: 0x1602006b  bne         $s0, $v0, . + 4 + (0x6B << 2)
label_2e3dfc:
    if (ctx->pc == 0x2E3DFCu) {
        ctx->pc = 0x2E3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DF8u;
        // 0x2e3dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E00u;
        goto label_2e3e00;
    }
    ctx->pc = 0x2E3DF8u;
    {
        const bool branch_taken_0x2e3df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DF8u;
        // 0x2e3dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3df8) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3E00u;
label_2e3e00:
    // 0x2e3e00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e3e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e3e04:
    // 0x2e3e04: 0xc088fa8  jal         func_223EA0
label_2e3e08:
    if (ctx->pc == 0x2E3E08u) {
        ctx->pc = 0x2E3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E04u;
        // 0x2e3e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E0Cu;
        goto label_2e3e0c;
    }
    ctx->pc = 0x2E3E04u;
    SET_GPR_U32(ctx, 31, 0x2E3E0Cu);
    ctx->pc = 0x2E3E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E04u;
    // 0x2e3e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2E3E04u, 0x2E3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E0Cu;
label_2e3e0c:
    // 0x2e3e0c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2e3e10:
    if (ctx->pc == 0x2E3E10u) {
        ctx->pc = 0x2E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E0Cu;
        // 0x2e3e10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E14u;
        goto label_2e3e14;
    }
    ctx->pc = 0x2E3E0Cu;
    {
        const bool branch_taken_0x2e3e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E0Cu;
        // 0x2e3e10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e0c) {
            ctx->pc = 0x2E3E24u;
            goto label_2e3e24;
        }
    }
    ctx->pc = 0x2E3E14u;
label_2e3e14:
    // 0x2e3e14: 0xc089000  jal         func_224000
label_2e3e18:
    if (ctx->pc == 0x2E3E18u) {
        ctx->pc = 0x2E3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E14u;
        // 0x2e3e18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E1Cu;
        goto label_2e3e1c;
    }
    ctx->pc = 0x2E3E14u;
    SET_GPR_U32(ctx, 31, 0x2E3E1Cu);
    ctx->pc = 0x2E3E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E14u;
    // 0x2e3e18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2E3E14u, 0x2E3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E1Cu;
label_2e3e1c:
    // 0x2e3e1c: 0x14500011  bne         $v0, $s0, . + 4 + (0x11 << 2)
label_2e3e20:
    if (ctx->pc == 0x2E3E20u) {
        ctx->pc = 0x2E3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E1Cu;
        // 0x2e3e20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E24u;
        goto label_2e3e24;
    }
    ctx->pc = 0x2E3E1Cu;
    {
        const bool branch_taken_0x2e3e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E1Cu;
        // 0x2e3e20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e1c) {
            ctx->pc = 0x2E3E64u;
            goto label_2e3e64;
        }
    }
    ctx->pc = 0x2E3E24u;
label_2e3e24:
    // 0x2e3e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3e28:
    // 0x2e3e28: 0xc08c24c  jal         func_230930
label_2e3e2c:
    if (ctx->pc == 0x2E3E2Cu) {
        ctx->pc = 0x2E3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E28u;
        // 0x2e3e2c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E30u;
        goto label_2e3e30;
    }
    ctx->pc = 0x2E3E28u;
    SET_GPR_U32(ctx, 31, 0x2E3E30u);
    ctx->pc = 0x2E3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E28u;
    // 0x2e3e2c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230930u, 0x2E3E28u, 0x2E3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E30u;
label_2e3e30:
    // 0x2e3e30: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e3e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e3e34:
    // 0x2e3e34: 0x0  nop
    ctx->pc = 0x2e3e34u;
    // NOP
label_2e3e38:
    // 0x2e3e38: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2e3e3c:
    if (ctx->pc == 0x2E3E3Cu) {
        ctx->pc = 0x2E3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E38u;
        // 0x2e3e3c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E40u;
        goto label_2e3e40;
    }
    ctx->pc = 0x2E3E38u;
    {
        const bool branch_taken_0x2e3e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E38u;
        // 0x2e3e3c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e38) {
            ctx->pc = 0x2E3E64u;
            goto label_2e3e64;
        }
    }
    ctx->pc = 0x2E3E40u;
label_2e3e40:
    // 0x2e3e40: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3e44:
    // 0x2e3e44: 0xc0a33f8  jal         func_28CFE0
label_2e3e48:
    if (ctx->pc == 0x2E3E48u) {
        ctx->pc = 0x2E3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E44u;
        // 0x2e3e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E4Cu;
        goto label_2e3e4c;
    }
    ctx->pc = 0x2E3E44u;
    SET_GPR_U32(ctx, 31, 0x2E3E4Cu);
    ctx->pc = 0x2E3E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E44u;
    // 0x2e3e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E3E44u, 0x2E3E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E4Cu;
label_2e3e4c:
    // 0x2e3e4c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3e50:
    // 0x2e3e50: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e3e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e3e54:
    // 0x2e3e54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e3e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e3e58:
    // 0x2e3e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3e5c:
    // 0x2e3e5c: 0x1000ff75  b           . + 4 + (-0x8B << 2)
label_2e3e60:
    if (ctx->pc == 0x2E3E60u) {
        ctx->pc = 0x2E3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E5Cu;
        // 0x2e3e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E64u;
        goto label_2e3e64;
    }
    ctx->pc = 0x2E3E5Cu;
    {
        const bool branch_taken_0x2e3e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E5Cu;
        // 0x2e3e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e5c) {
            ctx->pc = 0x2E3C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c34;
        }
    }
    ctx->pc = 0x2E3E64u;
label_2e3e64:
    // 0x2e3e64: 0xc089bfc  jal         func_226FF0
label_2e3e68:
    if (ctx->pc == 0x2E3E68u) {
        ctx->pc = 0x2E3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E64u;
        // 0x2e3e68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E6Cu;
        goto label_2e3e6c;
    }
    ctx->pc = 0x2E3E64u;
    SET_GPR_U32(ctx, 31, 0x2E3E6Cu);
    ctx->pc = 0x2E3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E64u;
    // 0x2e3e68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2E3E64u, 0x2E3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E6Cu;
label_2e3e6c:
    // 0x2e3e6c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_2e3e70:
    if (ctx->pc == 0x2E3E70u) {
        ctx->pc = 0x2E3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E6Cu;
        // 0x2e3e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E74u;
        goto label_2e3e74;
    }
    ctx->pc = 0x2E3E6Cu;
    {
        const bool branch_taken_0x2e3e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E6Cu;
        // 0x2e3e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e6c) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3E74u;
label_2e3e74:
    // 0x2e3e74: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2e3e78:
    // 0x2e3e78: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2e3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e3e7c:
    // 0x2e3e7c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2e3e80:
    if (ctx->pc == 0x2E3E80u) {
        ctx->pc = 0x2E3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E7Cu;
        // 0x2e3e80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E84u;
        goto label_2e3e84;
    }
    ctx->pc = 0x2E3E7Cu;
    {
        const bool branch_taken_0x2e3e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e7c) {
            ctx->pc = 0x2E3E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3E7Cu;
            // 0x2e3e80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3E84u;
            goto label_2e3e84;
        }
    }
    ctx->pc = 0x2E3E84u;
label_2e3e84:
    // 0x2e3e84: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2e3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2e3e88:
    // 0x2e3e88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e3e88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2e3e8c:
    // 0x2e3e8c: 0x2010  mfhi        $a0
    ctx->pc = 0x2e3e8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e3e90:
    // 0x2e3e90: 0x14800045  bnez        $a0, . + 4 + (0x45 << 2)
label_2e3e94:
    if (ctx->pc == 0x2E3E94u) {
        ctx->pc = 0x2E3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E90u;
        // 0x2e3e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3E98u;
        goto label_2e3e98;
    }
    ctx->pc = 0x2E3E90u;
    {
        const bool branch_taken_0x2e3e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E90u;
        // 0x2e3e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e90) {
            ctx->pc = 0x2E3FA8u;
            goto label_2e3fa8;
        }
    }
    ctx->pc = 0x2E3E98u;
label_2e3e98:
    // 0x2e3e98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2e3e9c:
    // 0x2e3e9c: 0x26664b00  addiu       $a2, $s3, 0x4B00
    ctx->pc = 0x2e3e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
label_2e3ea0:
    // 0x2e3ea0: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x2e3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e3ea4:
    // 0x2e3ea4: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x2e3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_2e3ea8:
    // 0x2e3ea8: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2e3ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2e3eac:
    // 0x2e3eac: 0x2484f270  addiu       $a0, $a0, -0xD90
    ctx->pc = 0x2e3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963824));
label_2e3eb0:
    // 0x2e3eb0: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x2e3eb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2e3eb4:
    // 0x2e3eb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e3eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3eb8:
    // 0x2e3eb8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e3ebc:
    // 0x2e3ebc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2e3ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2e3ec0:
    // 0x2e3ec0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2e3ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2e3ec4:
    // 0x2e3ec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e3ec8:
    // 0x2e3ec8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e3ecc:
    // 0x2e3ecc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e3ed0:
    // 0x2e3ed0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e3ed4:
    // 0x2e3ed4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2e3ed4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e3ed8:
    // 0x2e3ed8: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2e3ed8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3edc:
    // 0x2e3edc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2e3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2e3ee0:
    // 0x2e3ee0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e3ee4:
    // 0x2e3ee4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2e3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2e3ee8:
    // 0x2e3ee8: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x2e3ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_2e3eec:
    // 0x2e3eec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e3eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3ef0:
    // 0x2e3ef0: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x2e3ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_2e3ef4:
    // 0x2e3ef4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e3ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e3ef8:
    // 0x2e3ef8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2e3ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2e3efc:
    // 0x2e3efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f00:
    // 0x2e3f00: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2e3f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2e3f04:
    // 0x2e3f04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3f08:
    // 0x2e3f08: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2e3f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_2e3f0c:
    // 0x2e3f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e3f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f10:
    // 0x2e3f10: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2e3f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_2e3f14:
    // 0x2e3f14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3f18:
    // 0x2e3f18: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e3f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3f1c:
    // 0x2e3f1c: 0xc0a757c  jal         func_29D5F0
label_2e3f20:
    if (ctx->pc == 0x2E3F20u) {
        ctx->pc = 0x2E3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F1Cu;
        // 0x2e3f20: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F24u;
        goto label_2e3f24;
    }
    ctx->pc = 0x2E3F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F24u);
    ctx->pc = 0x2E3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F1Cu;
    // 0x2e3f20: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2E3F1Cu, 0x2E3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F24u;
label_2e3f24:
    // 0x2e3f24: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e3f28:
    // 0x2e3f28: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x2e3f28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2e3f2c:
    // 0x2e3f2c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2e3f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f30:
    // 0x2e3f30: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2e3f34:
    if (ctx->pc == 0x2E3F34u) {
        ctx->pc = 0x2E3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F30u;
        // 0x2e3f34: 0x2472f2f0  addiu       $s2, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F38u;
        goto label_2e3f38;
    }
    ctx->pc = 0x2E3F30u;
    {
        const bool branch_taken_0x2e3f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F30u;
        // 0x2e3f34: 0x2472f2f0  addiu       $s2, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f30) {
            ctx->pc = 0x2E3F9Cu;
            goto label_2e3f9c;
        }
    }
    ctx->pc = 0x2E3F38u;
label_2e3f38:
    // 0x2e3f38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e3f3c:
    // 0x2e3f3c: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2e3f3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2e3f40:
    // 0x2e3f40: 0xc0e44cc  jal         func_391330
label_2e3f44:
    if (ctx->pc == 0x2E3F44u) {
        ctx->pc = 0x2E3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F40u;
        // 0x2e3f44: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F48u;
        goto label_2e3f48;
    }
    ctx->pc = 0x2E3F40u;
    SET_GPR_U32(ctx, 31, 0x2E3F48u);
    ctx->pc = 0x2E3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F40u;
    // 0x2e3f44: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2E3F40u, 0x2E3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F48u;
label_2e3f48:
    // 0x2e3f48: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x2e3f48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_2e3f4c:
    // 0x2e3f4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e3f50:
    // 0x2e3f50: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_2e3f54:
    if (ctx->pc == 0x2E3F54u) {
        ctx->pc = 0x2E3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F50u;
        // 0x2e3f54: 0x2602f2f0  addiu       $v0, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F58u;
        goto label_2e3f58;
    }
    ctx->pc = 0x2E3F50u;
    {
        const bool branch_taken_0x2e3f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F50u;
        // 0x2e3f54: 0x2602f2f0  addiu       $v0, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f50) {
            ctx->pc = 0x2E3FA0u;
            goto label_2e3fa0;
        }
    }
    ctx->pc = 0x2E3F58u;
label_2e3f58:
    // 0x2e3f58: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2e3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e3f5c:
    // 0x2e3f5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e3f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e3f60:
    // 0x2e3f60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e3f64:
    // 0x2e3f64: 0x40f809  jalr        $v0
label_2e3f68:
    if (ctx->pc == 0x2E3F68u) {
        ctx->pc = 0x2E3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F64u;
        // 0x2e3f68: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F6Cu;
        goto label_2e3f6c;
    }
    ctx->pc = 0x2E3F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3F6Cu);
        ctx->pc = 0x2E3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F64u;
        // 0x2e3f68: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F64u, 0x2E3F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3F6Cu;
label_2e3f6c:
    // 0x2e3f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e3f70:
    // 0x2e3f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f74:
    // 0x2e3f74: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e3f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e3f78:
    // 0x2e3f78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e3f7c:
    // 0x2e3f7c: 0x40f809  jalr        $v0
label_2e3f80:
    if (ctx->pc == 0x2E3F80u) {
        ctx->pc = 0x2E3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F7Cu;
        // 0x2e3f80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F84u;
        goto label_2e3f84;
    }
    ctx->pc = 0x2E3F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3F84u);
        ctx->pc = 0x2E3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F7Cu;
        // 0x2e3f80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F7Cu, 0x2E3F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3F84u;
label_2e3f84:
    // 0x2e3f84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e3f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f88:
    // 0x2e3f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f8c:
    // 0x2e3f8c: 0xc0b71c2  jal         func_2DC708
label_2e3f90:
    if (ctx->pc == 0x2E3F90u) {
        ctx->pc = 0x2E3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F8Cu;
        // 0x2e3f90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F94u;
        goto label_2e3f94;
    }
    ctx->pc = 0x2E3F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F94u);
    ctx->pc = 0x2E3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F8Cu;
    // 0x2e3f90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2E3F8Cu, 0x2E3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F94u;
label_2e3f94:
    // 0x2e3f94: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e3f98:
    if (ctx->pc == 0x2E3F98u) {
        ctx->pc = 0x2E3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F94u;
        // 0x2e3f98: 0xafb20040  sw          $s2, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F9Cu;
        goto label_2e3f9c;
    }
    ctx->pc = 0x2E3F94u;
    {
        const bool branch_taken_0x2e3f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F94u;
        // 0x2e3f98: 0xafb20040  sw          $s2, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f94) {
            ctx->pc = 0x2E3FA4u;
            goto label_2e3fa4;
        }
    }
    ctx->pc = 0x2E3F9Cu;
label_2e3f9c:
    // 0x2e3f9c: 0x2602f2f0  addiu       $v0, $s0, -0xD10
    ctx->pc = 0x2e3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
label_2e3fa0:
    // 0x2e3fa0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2e3fa4:
    // 0x2e3fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3fa8:
    // 0x2e3fa8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2e3fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2e3fac:
    // 0x2e3fac: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2e3facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2e3fb0:
    // 0x2e3fb0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2e3fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2e3fb4:
    // 0x2e3fb4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2e3fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e3fb8:
    // 0x2e3fb8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2e3fb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e3fbc:
    // 0x2e3fbc: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2e3fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e3fc0:
    // 0x2e3fc0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2e3fc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e3fc4:
    // 0x2e3fc4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2e3fc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e3fc8:
    // 0x2e3fc8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2e3fc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e3fcc:
    // 0x2e3fcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e3fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e3fd0:
    // 0x2e3fd0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2e3fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e3fd4:
    // 0x2e3fd4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2e3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e3fd8:
    // 0x2e3fd8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2e3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e3fdc:
    // 0x2e3fdc: 0x3e00008  jr          $ra
label_2e3fe0:
    if (ctx->pc == 0x2E3FE0u) {
        ctx->pc = 0x2E3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FDCu;
        // 0x2e3fe0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3FE4u;
        goto label_2e3fe4;
    }
    ctx->pc = 0x2E3FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FDCu;
        // 0x2e3fe0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3FE4u;
label_2e3fe4:
    // 0x2e3fe4: 0x0  nop
    ctx->pc = 0x2e3fe4u;
    // NOP
    ctx->pc = 0x2e3fe8u;
}
