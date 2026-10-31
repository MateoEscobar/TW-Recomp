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

// Function: sub_001F3610
// Address: 0x1f3610 - 0x1f47c8
void sub_001F3610_0x1f3610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3610_0x1f3610");
#endif

    switch (ctx->pc) {
        case 0x1f3610u: goto label_1f3610;
        case 0x1f3614u: goto label_1f3614;
        case 0x1f3618u: goto label_1f3618;
        case 0x1f361cu: goto label_1f361c;
        case 0x1f3620u: goto label_1f3620;
        case 0x1f3624u: goto label_1f3624;
        case 0x1f3628u: goto label_1f3628;
        case 0x1f362cu: goto label_1f362c;
        case 0x1f3630u: goto label_1f3630;
        case 0x1f3634u: goto label_1f3634;
        case 0x1f3638u: goto label_1f3638;
        case 0x1f363cu: goto label_1f363c;
        case 0x1f3640u: goto label_1f3640;
        case 0x1f3644u: goto label_1f3644;
        case 0x1f3648u: goto label_1f3648;
        case 0x1f364cu: goto label_1f364c;
        case 0x1f3650u: goto label_1f3650;
        case 0x1f3654u: goto label_1f3654;
        case 0x1f3658u: goto label_1f3658;
        case 0x1f365cu: goto label_1f365c;
        case 0x1f3660u: goto label_1f3660;
        case 0x1f3664u: goto label_1f3664;
        case 0x1f3668u: goto label_1f3668;
        case 0x1f366cu: goto label_1f366c;
        case 0x1f3670u: goto label_1f3670;
        case 0x1f3674u: goto label_1f3674;
        case 0x1f3678u: goto label_1f3678;
        case 0x1f367cu: goto label_1f367c;
        case 0x1f3680u: goto label_1f3680;
        case 0x1f3684u: goto label_1f3684;
        case 0x1f3688u: goto label_1f3688;
        case 0x1f368cu: goto label_1f368c;
        case 0x1f3690u: goto label_1f3690;
        case 0x1f3694u: goto label_1f3694;
        case 0x1f3698u: goto label_1f3698;
        case 0x1f369cu: goto label_1f369c;
        case 0x1f36a0u: goto label_1f36a0;
        case 0x1f36a4u: goto label_1f36a4;
        case 0x1f36a8u: goto label_1f36a8;
        case 0x1f36acu: goto label_1f36ac;
        case 0x1f36b0u: goto label_1f36b0;
        case 0x1f36b4u: goto label_1f36b4;
        case 0x1f36b8u: goto label_1f36b8;
        case 0x1f36bcu: goto label_1f36bc;
        case 0x1f36c0u: goto label_1f36c0;
        case 0x1f36c4u: goto label_1f36c4;
        case 0x1f36c8u: goto label_1f36c8;
        case 0x1f36ccu: goto label_1f36cc;
        case 0x1f36d0u: goto label_1f36d0;
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f36d8u: goto label_1f36d8;
        case 0x1f36dcu: goto label_1f36dc;
        case 0x1f36e0u: goto label_1f36e0;
        case 0x1f36e4u: goto label_1f36e4;
        case 0x1f36e8u: goto label_1f36e8;
        case 0x1f36ecu: goto label_1f36ec;
        case 0x1f36f0u: goto label_1f36f0;
        case 0x1f36f4u: goto label_1f36f4;
        case 0x1f36f8u: goto label_1f36f8;
        case 0x1f36fcu: goto label_1f36fc;
        case 0x1f3700u: goto label_1f3700;
        case 0x1f3704u: goto label_1f3704;
        case 0x1f3708u: goto label_1f3708;
        case 0x1f370cu: goto label_1f370c;
        case 0x1f3710u: goto label_1f3710;
        case 0x1f3714u: goto label_1f3714;
        case 0x1f3718u: goto label_1f3718;
        case 0x1f371cu: goto label_1f371c;
        case 0x1f3720u: goto label_1f3720;
        case 0x1f3724u: goto label_1f3724;
        case 0x1f3728u: goto label_1f3728;
        case 0x1f372cu: goto label_1f372c;
        case 0x1f3730u: goto label_1f3730;
        case 0x1f3734u: goto label_1f3734;
        case 0x1f3738u: goto label_1f3738;
        case 0x1f373cu: goto label_1f373c;
        case 0x1f3740u: goto label_1f3740;
        case 0x1f3744u: goto label_1f3744;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f374cu: goto label_1f374c;
        case 0x1f3750u: goto label_1f3750;
        case 0x1f3754u: goto label_1f3754;
        case 0x1f3758u: goto label_1f3758;
        case 0x1f375cu: goto label_1f375c;
        case 0x1f3760u: goto label_1f3760;
        case 0x1f3764u: goto label_1f3764;
        case 0x1f3768u: goto label_1f3768;
        case 0x1f376cu: goto label_1f376c;
        case 0x1f3770u: goto label_1f3770;
        case 0x1f3774u: goto label_1f3774;
        case 0x1f3778u: goto label_1f3778;
        case 0x1f377cu: goto label_1f377c;
        case 0x1f3780u: goto label_1f3780;
        case 0x1f3784u: goto label_1f3784;
        case 0x1f3788u: goto label_1f3788;
        case 0x1f378cu: goto label_1f378c;
        case 0x1f3790u: goto label_1f3790;
        case 0x1f3794u: goto label_1f3794;
        case 0x1f3798u: goto label_1f3798;
        case 0x1f379cu: goto label_1f379c;
        case 0x1f37a0u: goto label_1f37a0;
        case 0x1f37a4u: goto label_1f37a4;
        case 0x1f37a8u: goto label_1f37a8;
        case 0x1f37acu: goto label_1f37ac;
        case 0x1f37b0u: goto label_1f37b0;
        case 0x1f37b4u: goto label_1f37b4;
        case 0x1f37b8u: goto label_1f37b8;
        case 0x1f37bcu: goto label_1f37bc;
        case 0x1f37c0u: goto label_1f37c0;
        case 0x1f37c4u: goto label_1f37c4;
        case 0x1f37c8u: goto label_1f37c8;
        case 0x1f37ccu: goto label_1f37cc;
        case 0x1f37d0u: goto label_1f37d0;
        case 0x1f37d4u: goto label_1f37d4;
        case 0x1f37d8u: goto label_1f37d8;
        case 0x1f37dcu: goto label_1f37dc;
        case 0x1f37e0u: goto label_1f37e0;
        case 0x1f37e4u: goto label_1f37e4;
        case 0x1f37e8u: goto label_1f37e8;
        case 0x1f37ecu: goto label_1f37ec;
        case 0x1f37f0u: goto label_1f37f0;
        case 0x1f37f4u: goto label_1f37f4;
        case 0x1f37f8u: goto label_1f37f8;
        case 0x1f37fcu: goto label_1f37fc;
        case 0x1f3800u: goto label_1f3800;
        case 0x1f3804u: goto label_1f3804;
        case 0x1f3808u: goto label_1f3808;
        case 0x1f380cu: goto label_1f380c;
        case 0x1f3810u: goto label_1f3810;
        case 0x1f3814u: goto label_1f3814;
        case 0x1f3818u: goto label_1f3818;
        case 0x1f381cu: goto label_1f381c;
        case 0x1f3820u: goto label_1f3820;
        case 0x1f3824u: goto label_1f3824;
        case 0x1f3828u: goto label_1f3828;
        case 0x1f382cu: goto label_1f382c;
        case 0x1f3830u: goto label_1f3830;
        case 0x1f3834u: goto label_1f3834;
        case 0x1f3838u: goto label_1f3838;
        case 0x1f383cu: goto label_1f383c;
        case 0x1f3840u: goto label_1f3840;
        case 0x1f3844u: goto label_1f3844;
        case 0x1f3848u: goto label_1f3848;
        case 0x1f384cu: goto label_1f384c;
        case 0x1f3850u: goto label_1f3850;
        case 0x1f3854u: goto label_1f3854;
        case 0x1f3858u: goto label_1f3858;
        case 0x1f385cu: goto label_1f385c;
        case 0x1f3860u: goto label_1f3860;
        case 0x1f3864u: goto label_1f3864;
        case 0x1f3868u: goto label_1f3868;
        case 0x1f386cu: goto label_1f386c;
        case 0x1f3870u: goto label_1f3870;
        case 0x1f3874u: goto label_1f3874;
        case 0x1f3878u: goto label_1f3878;
        case 0x1f387cu: goto label_1f387c;
        case 0x1f3880u: goto label_1f3880;
        case 0x1f3884u: goto label_1f3884;
        case 0x1f3888u: goto label_1f3888;
        case 0x1f388cu: goto label_1f388c;
        case 0x1f3890u: goto label_1f3890;
        case 0x1f3894u: goto label_1f3894;
        case 0x1f3898u: goto label_1f3898;
        case 0x1f389cu: goto label_1f389c;
        case 0x1f38a0u: goto label_1f38a0;
        case 0x1f38a4u: goto label_1f38a4;
        case 0x1f38a8u: goto label_1f38a8;
        case 0x1f38acu: goto label_1f38ac;
        case 0x1f38b0u: goto label_1f38b0;
        case 0x1f38b4u: goto label_1f38b4;
        case 0x1f38b8u: goto label_1f38b8;
        case 0x1f38bcu: goto label_1f38bc;
        case 0x1f38c0u: goto label_1f38c0;
        case 0x1f38c4u: goto label_1f38c4;
        case 0x1f38c8u: goto label_1f38c8;
        case 0x1f38ccu: goto label_1f38cc;
        case 0x1f38d0u: goto label_1f38d0;
        case 0x1f38d4u: goto label_1f38d4;
        case 0x1f38d8u: goto label_1f38d8;
        case 0x1f38dcu: goto label_1f38dc;
        case 0x1f38e0u: goto label_1f38e0;
        case 0x1f38e4u: goto label_1f38e4;
        case 0x1f38e8u: goto label_1f38e8;
        case 0x1f38ecu: goto label_1f38ec;
        case 0x1f38f0u: goto label_1f38f0;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f38f8u: goto label_1f38f8;
        case 0x1f38fcu: goto label_1f38fc;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f3904u: goto label_1f3904;
        case 0x1f3908u: goto label_1f3908;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f3910u: goto label_1f3910;
        case 0x1f3914u: goto label_1f3914;
        case 0x1f3918u: goto label_1f3918;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3920u: goto label_1f3920;
        case 0x1f3924u: goto label_1f3924;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f392cu: goto label_1f392c;
        case 0x1f3930u: goto label_1f3930;
        case 0x1f3934u: goto label_1f3934;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f393cu: goto label_1f393c;
        case 0x1f3940u: goto label_1f3940;
        case 0x1f3944u: goto label_1f3944;
        case 0x1f3948u: goto label_1f3948;
        case 0x1f394cu: goto label_1f394c;
        case 0x1f3950u: goto label_1f3950;
        case 0x1f3954u: goto label_1f3954;
        case 0x1f3958u: goto label_1f3958;
        case 0x1f395cu: goto label_1f395c;
        case 0x1f3960u: goto label_1f3960;
        case 0x1f3964u: goto label_1f3964;
        case 0x1f3968u: goto label_1f3968;
        case 0x1f396cu: goto label_1f396c;
        case 0x1f3970u: goto label_1f3970;
        case 0x1f3974u: goto label_1f3974;
        case 0x1f3978u: goto label_1f3978;
        case 0x1f397cu: goto label_1f397c;
        case 0x1f3980u: goto label_1f3980;
        case 0x1f3984u: goto label_1f3984;
        case 0x1f3988u: goto label_1f3988;
        case 0x1f398cu: goto label_1f398c;
        case 0x1f3990u: goto label_1f3990;
        case 0x1f3994u: goto label_1f3994;
        case 0x1f3998u: goto label_1f3998;
        case 0x1f399cu: goto label_1f399c;
        case 0x1f39a0u: goto label_1f39a0;
        case 0x1f39a4u: goto label_1f39a4;
        case 0x1f39a8u: goto label_1f39a8;
        case 0x1f39acu: goto label_1f39ac;
        case 0x1f39b0u: goto label_1f39b0;
        case 0x1f39b4u: goto label_1f39b4;
        case 0x1f39b8u: goto label_1f39b8;
        case 0x1f39bcu: goto label_1f39bc;
        case 0x1f39c0u: goto label_1f39c0;
        case 0x1f39c4u: goto label_1f39c4;
        case 0x1f39c8u: goto label_1f39c8;
        case 0x1f39ccu: goto label_1f39cc;
        case 0x1f39d0u: goto label_1f39d0;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f39d8u: goto label_1f39d8;
        case 0x1f39dcu: goto label_1f39dc;
        case 0x1f39e0u: goto label_1f39e0;
        case 0x1f39e4u: goto label_1f39e4;
        case 0x1f39e8u: goto label_1f39e8;
        case 0x1f39ecu: goto label_1f39ec;
        case 0x1f39f0u: goto label_1f39f0;
        case 0x1f39f4u: goto label_1f39f4;
        case 0x1f39f8u: goto label_1f39f8;
        case 0x1f39fcu: goto label_1f39fc;
        case 0x1f3a00u: goto label_1f3a00;
        case 0x1f3a04u: goto label_1f3a04;
        case 0x1f3a08u: goto label_1f3a08;
        case 0x1f3a0cu: goto label_1f3a0c;
        case 0x1f3a10u: goto label_1f3a10;
        case 0x1f3a14u: goto label_1f3a14;
        case 0x1f3a18u: goto label_1f3a18;
        case 0x1f3a1cu: goto label_1f3a1c;
        case 0x1f3a20u: goto label_1f3a20;
        case 0x1f3a24u: goto label_1f3a24;
        case 0x1f3a28u: goto label_1f3a28;
        case 0x1f3a2cu: goto label_1f3a2c;
        case 0x1f3a30u: goto label_1f3a30;
        case 0x1f3a34u: goto label_1f3a34;
        case 0x1f3a38u: goto label_1f3a38;
        case 0x1f3a3cu: goto label_1f3a3c;
        case 0x1f3a40u: goto label_1f3a40;
        case 0x1f3a44u: goto label_1f3a44;
        case 0x1f3a48u: goto label_1f3a48;
        case 0x1f3a4cu: goto label_1f3a4c;
        case 0x1f3a50u: goto label_1f3a50;
        case 0x1f3a54u: goto label_1f3a54;
        case 0x1f3a58u: goto label_1f3a58;
        case 0x1f3a5cu: goto label_1f3a5c;
        case 0x1f3a60u: goto label_1f3a60;
        case 0x1f3a64u: goto label_1f3a64;
        case 0x1f3a68u: goto label_1f3a68;
        case 0x1f3a6cu: goto label_1f3a6c;
        case 0x1f3a70u: goto label_1f3a70;
        case 0x1f3a74u: goto label_1f3a74;
        case 0x1f3a78u: goto label_1f3a78;
        case 0x1f3a7cu: goto label_1f3a7c;
        case 0x1f3a80u: goto label_1f3a80;
        case 0x1f3a84u: goto label_1f3a84;
        case 0x1f3a88u: goto label_1f3a88;
        case 0x1f3a8cu: goto label_1f3a8c;
        case 0x1f3a90u: goto label_1f3a90;
        case 0x1f3a94u: goto label_1f3a94;
        case 0x1f3a98u: goto label_1f3a98;
        case 0x1f3a9cu: goto label_1f3a9c;
        case 0x1f3aa0u: goto label_1f3aa0;
        case 0x1f3aa4u: goto label_1f3aa4;
        case 0x1f3aa8u: goto label_1f3aa8;
        case 0x1f3aacu: goto label_1f3aac;
        case 0x1f3ab0u: goto label_1f3ab0;
        case 0x1f3ab4u: goto label_1f3ab4;
        case 0x1f3ab8u: goto label_1f3ab8;
        case 0x1f3abcu: goto label_1f3abc;
        case 0x1f3ac0u: goto label_1f3ac0;
        case 0x1f3ac4u: goto label_1f3ac4;
        case 0x1f3ac8u: goto label_1f3ac8;
        case 0x1f3accu: goto label_1f3acc;
        case 0x1f3ad0u: goto label_1f3ad0;
        case 0x1f3ad4u: goto label_1f3ad4;
        case 0x1f3ad8u: goto label_1f3ad8;
        case 0x1f3adcu: goto label_1f3adc;
        case 0x1f3ae0u: goto label_1f3ae0;
        case 0x1f3ae4u: goto label_1f3ae4;
        case 0x1f3ae8u: goto label_1f3ae8;
        case 0x1f3aecu: goto label_1f3aec;
        case 0x1f3af0u: goto label_1f3af0;
        case 0x1f3af4u: goto label_1f3af4;
        case 0x1f3af8u: goto label_1f3af8;
        case 0x1f3afcu: goto label_1f3afc;
        case 0x1f3b00u: goto label_1f3b00;
        case 0x1f3b04u: goto label_1f3b04;
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b0cu: goto label_1f3b0c;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b14u: goto label_1f3b14;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b1cu: goto label_1f3b1c;
        case 0x1f3b20u: goto label_1f3b20;
        case 0x1f3b24u: goto label_1f3b24;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b2cu: goto label_1f3b2c;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b34u: goto label_1f3b34;
        case 0x1f3b38u: goto label_1f3b38;
        case 0x1f3b3cu: goto label_1f3b3c;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b44u: goto label_1f3b44;
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3b4cu: goto label_1f3b4c;
        case 0x1f3b50u: goto label_1f3b50;
        case 0x1f3b54u: goto label_1f3b54;
        case 0x1f3b58u: goto label_1f3b58;
        case 0x1f3b5cu: goto label_1f3b5c;
        case 0x1f3b60u: goto label_1f3b60;
        case 0x1f3b64u: goto label_1f3b64;
        case 0x1f3b68u: goto label_1f3b68;
        case 0x1f3b6cu: goto label_1f3b6c;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b74u: goto label_1f3b74;
        case 0x1f3b78u: goto label_1f3b78;
        case 0x1f3b7cu: goto label_1f3b7c;
        case 0x1f3b80u: goto label_1f3b80;
        case 0x1f3b84u: goto label_1f3b84;
        case 0x1f3b88u: goto label_1f3b88;
        case 0x1f3b8cu: goto label_1f3b8c;
        case 0x1f3b90u: goto label_1f3b90;
        case 0x1f3b94u: goto label_1f3b94;
        case 0x1f3b98u: goto label_1f3b98;
        case 0x1f3b9cu: goto label_1f3b9c;
        case 0x1f3ba0u: goto label_1f3ba0;
        case 0x1f3ba4u: goto label_1f3ba4;
        case 0x1f3ba8u: goto label_1f3ba8;
        case 0x1f3bacu: goto label_1f3bac;
        case 0x1f3bb0u: goto label_1f3bb0;
        case 0x1f3bb4u: goto label_1f3bb4;
        case 0x1f3bb8u: goto label_1f3bb8;
        case 0x1f3bbcu: goto label_1f3bbc;
        case 0x1f3bc0u: goto label_1f3bc0;
        case 0x1f3bc4u: goto label_1f3bc4;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bccu: goto label_1f3bcc;
        case 0x1f3bd0u: goto label_1f3bd0;
        case 0x1f3bd4u: goto label_1f3bd4;
        case 0x1f3bd8u: goto label_1f3bd8;
        case 0x1f3bdcu: goto label_1f3bdc;
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3be4u: goto label_1f3be4;
        case 0x1f3be8u: goto label_1f3be8;
        case 0x1f3becu: goto label_1f3bec;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3bf4u: goto label_1f3bf4;
        case 0x1f3bf8u: goto label_1f3bf8;
        case 0x1f3bfcu: goto label_1f3bfc;
        case 0x1f3c00u: goto label_1f3c00;
        case 0x1f3c04u: goto label_1f3c04;
        case 0x1f3c08u: goto label_1f3c08;
        case 0x1f3c0cu: goto label_1f3c0c;
        case 0x1f3c10u: goto label_1f3c10;
        case 0x1f3c14u: goto label_1f3c14;
        case 0x1f3c18u: goto label_1f3c18;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c20u: goto label_1f3c20;
        case 0x1f3c24u: goto label_1f3c24;
        case 0x1f3c28u: goto label_1f3c28;
        case 0x1f3c2cu: goto label_1f3c2c;
        case 0x1f3c30u: goto label_1f3c30;
        case 0x1f3c34u: goto label_1f3c34;
        case 0x1f3c38u: goto label_1f3c38;
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3c40u: goto label_1f3c40;
        case 0x1f3c44u: goto label_1f3c44;
        case 0x1f3c48u: goto label_1f3c48;
        case 0x1f3c4cu: goto label_1f3c4c;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c5cu: goto label_1f3c5c;
        case 0x1f3c60u: goto label_1f3c60;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c6cu: goto label_1f3c6c;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c74u: goto label_1f3c74;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c84u: goto label_1f3c84;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c90u: goto label_1f3c90;
        case 0x1f3c94u: goto label_1f3c94;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3c9cu: goto label_1f3c9c;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3cb0u: goto label_1f3cb0;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cc0u: goto label_1f3cc0;
        case 0x1f3cc4u: goto label_1f3cc4;
        case 0x1f3cc8u: goto label_1f3cc8;
        case 0x1f3cccu: goto label_1f3ccc;
        case 0x1f3cd0u: goto label_1f3cd0;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3cd8u: goto label_1f3cd8;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3ce0u: goto label_1f3ce0;
        case 0x1f3ce4u: goto label_1f3ce4;
        case 0x1f3ce8u: goto label_1f3ce8;
        case 0x1f3cecu: goto label_1f3cec;
        case 0x1f3cf0u: goto label_1f3cf0;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3cf8u: goto label_1f3cf8;
        case 0x1f3cfcu: goto label_1f3cfc;
        case 0x1f3d00u: goto label_1f3d00;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d08u: goto label_1f3d08;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d14u: goto label_1f3d14;
        case 0x1f3d18u: goto label_1f3d18;
        case 0x1f3d1cu: goto label_1f3d1c;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d28u: goto label_1f3d28;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d30u: goto label_1f3d30;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d38u: goto label_1f3d38;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d40u: goto label_1f3d40;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d48u: goto label_1f3d48;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d50u: goto label_1f3d50;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d68u: goto label_1f3d68;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d78u: goto label_1f3d78;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d80u: goto label_1f3d80;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d90u: goto label_1f3d90;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d98u: goto label_1f3d98;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3da4u: goto label_1f3da4;
        case 0x1f3da8u: goto label_1f3da8;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3db8u: goto label_1f3db8;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dc4u: goto label_1f3dc4;
        case 0x1f3dc8u: goto label_1f3dc8;
        case 0x1f3dccu: goto label_1f3dcc;
        case 0x1f3dd0u: goto label_1f3dd0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3dd8u: goto label_1f3dd8;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3de0u: goto label_1f3de0;
        case 0x1f3de4u: goto label_1f3de4;
        case 0x1f3de8u: goto label_1f3de8;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df0u: goto label_1f3df0;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3dfcu: goto label_1f3dfc;
        case 0x1f3e00u: goto label_1f3e00;
        case 0x1f3e04u: goto label_1f3e04;
        case 0x1f3e08u: goto label_1f3e08;
        case 0x1f3e0cu: goto label_1f3e0c;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e14u: goto label_1f3e14;
        case 0x1f3e18u: goto label_1f3e18;
        case 0x1f3e1cu: goto label_1f3e1c;
        case 0x1f3e20u: goto label_1f3e20;
        case 0x1f3e24u: goto label_1f3e24;
        case 0x1f3e28u: goto label_1f3e28;
        case 0x1f3e2cu: goto label_1f3e2c;
        case 0x1f3e30u: goto label_1f3e30;
        case 0x1f3e34u: goto label_1f3e34;
        case 0x1f3e38u: goto label_1f3e38;
        case 0x1f3e3cu: goto label_1f3e3c;
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3e44u: goto label_1f3e44;
        case 0x1f3e48u: goto label_1f3e48;
        case 0x1f3e4cu: goto label_1f3e4c;
        case 0x1f3e50u: goto label_1f3e50;
        case 0x1f3e54u: goto label_1f3e54;
        case 0x1f3e58u: goto label_1f3e58;
        case 0x1f3e5cu: goto label_1f3e5c;
        case 0x1f3e60u: goto label_1f3e60;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e68u: goto label_1f3e68;
        case 0x1f3e6cu: goto label_1f3e6c;
        case 0x1f3e70u: goto label_1f3e70;
        case 0x1f3e74u: goto label_1f3e74;
        case 0x1f3e78u: goto label_1f3e78;
        case 0x1f3e7cu: goto label_1f3e7c;
        case 0x1f3e80u: goto label_1f3e80;
        case 0x1f3e84u: goto label_1f3e84;
        case 0x1f3e88u: goto label_1f3e88;
        case 0x1f3e8cu: goto label_1f3e8c;
        case 0x1f3e90u: goto label_1f3e90;
        case 0x1f3e94u: goto label_1f3e94;
        case 0x1f3e98u: goto label_1f3e98;
        case 0x1f3e9cu: goto label_1f3e9c;
        case 0x1f3ea0u: goto label_1f3ea0;
        case 0x1f3ea4u: goto label_1f3ea4;
        case 0x1f3ea8u: goto label_1f3ea8;
        case 0x1f3eacu: goto label_1f3eac;
        case 0x1f3eb0u: goto label_1f3eb0;
        case 0x1f3eb4u: goto label_1f3eb4;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ebcu: goto label_1f3ebc;
        case 0x1f3ec0u: goto label_1f3ec0;
        case 0x1f3ec4u: goto label_1f3ec4;
        case 0x1f3ec8u: goto label_1f3ec8;
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3ed4u: goto label_1f3ed4;
        case 0x1f3ed8u: goto label_1f3ed8;
        case 0x1f3edcu: goto label_1f3edc;
        case 0x1f3ee0u: goto label_1f3ee0;
        case 0x1f3ee4u: goto label_1f3ee4;
        case 0x1f3ee8u: goto label_1f3ee8;
        case 0x1f3eecu: goto label_1f3eec;
        case 0x1f3ef0u: goto label_1f3ef0;
        case 0x1f3ef4u: goto label_1f3ef4;
        case 0x1f3ef8u: goto label_1f3ef8;
        case 0x1f3efcu: goto label_1f3efc;
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f04u: goto label_1f3f04;
        case 0x1f3f08u: goto label_1f3f08;
        case 0x1f3f0cu: goto label_1f3f0c;
        case 0x1f3f10u: goto label_1f3f10;
        case 0x1f3f14u: goto label_1f3f14;
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f1cu: goto label_1f3f1c;
        case 0x1f3f20u: goto label_1f3f20;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f28u: goto label_1f3f28;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f30u: goto label_1f3f30;
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f38u: goto label_1f3f38;
        case 0x1f3f3cu: goto label_1f3f3c;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f4cu: goto label_1f3f4c;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f54u: goto label_1f3f54;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f68u: goto label_1f3f68;
        case 0x1f3f6cu: goto label_1f3f6c;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3f74u: goto label_1f3f74;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3f80u: goto label_1f3f80;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3f88u: goto label_1f3f88;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3f90u: goto label_1f3f90;
        case 0x1f3f94u: goto label_1f3f94;
        case 0x1f3f98u: goto label_1f3f98;
        case 0x1f3f9cu: goto label_1f3f9c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f4090u: goto label_1f4090;
        case 0x1f4094u: goto label_1f4094;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f409cu: goto label_1f409c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a4u: goto label_1f40a4;
        case 0x1f40a8u: goto label_1f40a8;
        case 0x1f40acu: goto label_1f40ac;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40b4u: goto label_1f40b4;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40bcu: goto label_1f40bc;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40c4u: goto label_1f40c4;
        case 0x1f40c8u: goto label_1f40c8;
        case 0x1f40ccu: goto label_1f40cc;
        case 0x1f40d0u: goto label_1f40d0;
        case 0x1f40d4u: goto label_1f40d4;
        case 0x1f40d8u: goto label_1f40d8;
        case 0x1f40dcu: goto label_1f40dc;
        case 0x1f40e0u: goto label_1f40e0;
        case 0x1f40e4u: goto label_1f40e4;
        case 0x1f40e8u: goto label_1f40e8;
        case 0x1f40ecu: goto label_1f40ec;
        case 0x1f40f0u: goto label_1f40f0;
        case 0x1f40f4u: goto label_1f40f4;
        case 0x1f40f8u: goto label_1f40f8;
        case 0x1f40fcu: goto label_1f40fc;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4104u: goto label_1f4104;
        case 0x1f4108u: goto label_1f4108;
        case 0x1f410cu: goto label_1f410c;
        case 0x1f4110u: goto label_1f4110;
        case 0x1f4114u: goto label_1f4114;
        case 0x1f4118u: goto label_1f4118;
        case 0x1f411cu: goto label_1f411c;
        case 0x1f4120u: goto label_1f4120;
        case 0x1f4124u: goto label_1f4124;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f412cu: goto label_1f412c;
        case 0x1f4130u: goto label_1f4130;
        case 0x1f4134u: goto label_1f4134;
        case 0x1f4138u: goto label_1f4138;
        case 0x1f413cu: goto label_1f413c;
        case 0x1f4140u: goto label_1f4140;
        case 0x1f4144u: goto label_1f4144;
        case 0x1f4148u: goto label_1f4148;
        case 0x1f414cu: goto label_1f414c;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f4154u: goto label_1f4154;
        case 0x1f4158u: goto label_1f4158;
        case 0x1f415cu: goto label_1f415c;
        case 0x1f4160u: goto label_1f4160;
        case 0x1f4164u: goto label_1f4164;
        case 0x1f4168u: goto label_1f4168;
        case 0x1f416cu: goto label_1f416c;
        case 0x1f4170u: goto label_1f4170;
        case 0x1f4174u: goto label_1f4174;
        case 0x1f4178u: goto label_1f4178;
        case 0x1f417cu: goto label_1f417c;
        case 0x1f4180u: goto label_1f4180;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f4188u: goto label_1f4188;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f4190u: goto label_1f4190;
        case 0x1f4194u: goto label_1f4194;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f419cu: goto label_1f419c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41a4u: goto label_1f41a4;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b0u: goto label_1f41b0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41b8u: goto label_1f41b8;
        case 0x1f41bcu: goto label_1f41bc;
        case 0x1f41c0u: goto label_1f41c0;
        case 0x1f41c4u: goto label_1f41c4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41ccu: goto label_1f41cc;
        case 0x1f41d0u: goto label_1f41d0;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41e0u: goto label_1f41e0;
        case 0x1f41e4u: goto label_1f41e4;
        case 0x1f41e8u: goto label_1f41e8;
        case 0x1f41ecu: goto label_1f41ec;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41f4u: goto label_1f41f4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4200u: goto label_1f4200;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4208u: goto label_1f4208;
        case 0x1f420cu: goto label_1f420c;
        case 0x1f4210u: goto label_1f4210;
        case 0x1f4214u: goto label_1f4214;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f421cu: goto label_1f421c;
        case 0x1f4220u: goto label_1f4220;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4228u: goto label_1f4228;
        case 0x1f422cu: goto label_1f422c;
        case 0x1f4230u: goto label_1f4230;
        case 0x1f4234u: goto label_1f4234;
        case 0x1f4238u: goto label_1f4238;
        case 0x1f423cu: goto label_1f423c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4244u: goto label_1f4244;
        case 0x1f4248u: goto label_1f4248;
        case 0x1f424cu: goto label_1f424c;
        case 0x1f4250u: goto label_1f4250;
        case 0x1f4254u: goto label_1f4254;
        case 0x1f4258u: goto label_1f4258;
        case 0x1f425cu: goto label_1f425c;
        case 0x1f4260u: goto label_1f4260;
        case 0x1f4264u: goto label_1f4264;
        case 0x1f4268u: goto label_1f4268;
        case 0x1f426cu: goto label_1f426c;
        case 0x1f4270u: goto label_1f4270;
        case 0x1f4274u: goto label_1f4274;
        case 0x1f4278u: goto label_1f4278;
        case 0x1f427cu: goto label_1f427c;
        case 0x1f4280u: goto label_1f4280;
        case 0x1f4284u: goto label_1f4284;
        case 0x1f4288u: goto label_1f4288;
        case 0x1f428cu: goto label_1f428c;
        case 0x1f4290u: goto label_1f4290;
        case 0x1f4294u: goto label_1f4294;
        case 0x1f4298u: goto label_1f4298;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42a4u: goto label_1f42a4;
        case 0x1f42a8u: goto label_1f42a8;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42b4u: goto label_1f42b4;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f42c0u: goto label_1f42c0;
        case 0x1f42c4u: goto label_1f42c4;
        case 0x1f42c8u: goto label_1f42c8;
        case 0x1f42ccu: goto label_1f42cc;
        case 0x1f42d0u: goto label_1f42d0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42d8u: goto label_1f42d8;
        case 0x1f42dcu: goto label_1f42dc;
        case 0x1f42e0u: goto label_1f42e0;
        case 0x1f42e4u: goto label_1f42e4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42ecu: goto label_1f42ec;
        case 0x1f42f0u: goto label_1f42f0;
        case 0x1f42f4u: goto label_1f42f4;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f42fcu: goto label_1f42fc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4304u: goto label_1f4304;
        case 0x1f4308u: goto label_1f4308;
        case 0x1f430cu: goto label_1f430c;
        case 0x1f4310u: goto label_1f4310;
        case 0x1f4314u: goto label_1f4314;
        case 0x1f4318u: goto label_1f4318;
        case 0x1f431cu: goto label_1f431c;
        case 0x1f4320u: goto label_1f4320;
        case 0x1f4324u: goto label_1f4324;
        case 0x1f4328u: goto label_1f4328;
        case 0x1f432cu: goto label_1f432c;
        case 0x1f4330u: goto label_1f4330;
        case 0x1f4334u: goto label_1f4334;
        case 0x1f4338u: goto label_1f4338;
        case 0x1f433cu: goto label_1f433c;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4344u: goto label_1f4344;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f434cu: goto label_1f434c;
        case 0x1f4350u: goto label_1f4350;
        case 0x1f4354u: goto label_1f4354;
        case 0x1f4358u: goto label_1f4358;
        case 0x1f435cu: goto label_1f435c;
        case 0x1f4360u: goto label_1f4360;
        case 0x1f4364u: goto label_1f4364;
        case 0x1f4368u: goto label_1f4368;
        case 0x1f436cu: goto label_1f436c;
        case 0x1f4370u: goto label_1f4370;
        case 0x1f4374u: goto label_1f4374;
        case 0x1f4378u: goto label_1f4378;
        case 0x1f437cu: goto label_1f437c;
        case 0x1f4380u: goto label_1f4380;
        case 0x1f4384u: goto label_1f4384;
        case 0x1f4388u: goto label_1f4388;
        case 0x1f438cu: goto label_1f438c;
        case 0x1f4390u: goto label_1f4390;
        case 0x1f4394u: goto label_1f4394;
        case 0x1f4398u: goto label_1f4398;
        case 0x1f439cu: goto label_1f439c;
        case 0x1f43a0u: goto label_1f43a0;
        case 0x1f43a4u: goto label_1f43a4;
        case 0x1f43a8u: goto label_1f43a8;
        case 0x1f43acu: goto label_1f43ac;
        case 0x1f43b0u: goto label_1f43b0;
        case 0x1f43b4u: goto label_1f43b4;
        case 0x1f43b8u: goto label_1f43b8;
        case 0x1f43bcu: goto label_1f43bc;
        case 0x1f43c0u: goto label_1f43c0;
        case 0x1f43c4u: goto label_1f43c4;
        case 0x1f43c8u: goto label_1f43c8;
        case 0x1f43ccu: goto label_1f43cc;
        case 0x1f43d0u: goto label_1f43d0;
        case 0x1f43d4u: goto label_1f43d4;
        case 0x1f43d8u: goto label_1f43d8;
        case 0x1f43dcu: goto label_1f43dc;
        case 0x1f43e0u: goto label_1f43e0;
        case 0x1f43e4u: goto label_1f43e4;
        case 0x1f43e8u: goto label_1f43e8;
        case 0x1f43ecu: goto label_1f43ec;
        case 0x1f43f0u: goto label_1f43f0;
        case 0x1f43f4u: goto label_1f43f4;
        case 0x1f43f8u: goto label_1f43f8;
        case 0x1f43fcu: goto label_1f43fc;
        case 0x1f4400u: goto label_1f4400;
        case 0x1f4404u: goto label_1f4404;
        case 0x1f4408u: goto label_1f4408;
        case 0x1f440cu: goto label_1f440c;
        case 0x1f4410u: goto label_1f4410;
        case 0x1f4414u: goto label_1f4414;
        case 0x1f4418u: goto label_1f4418;
        case 0x1f441cu: goto label_1f441c;
        case 0x1f4420u: goto label_1f4420;
        case 0x1f4424u: goto label_1f4424;
        case 0x1f4428u: goto label_1f4428;
        case 0x1f442cu: goto label_1f442c;
        case 0x1f4430u: goto label_1f4430;
        case 0x1f4434u: goto label_1f4434;
        case 0x1f4438u: goto label_1f4438;
        case 0x1f443cu: goto label_1f443c;
        case 0x1f4440u: goto label_1f4440;
        case 0x1f4444u: goto label_1f4444;
        case 0x1f4448u: goto label_1f4448;
        case 0x1f444cu: goto label_1f444c;
        case 0x1f4450u: goto label_1f4450;
        case 0x1f4454u: goto label_1f4454;
        case 0x1f4458u: goto label_1f4458;
        case 0x1f445cu: goto label_1f445c;
        case 0x1f4460u: goto label_1f4460;
        case 0x1f4464u: goto label_1f4464;
        case 0x1f4468u: goto label_1f4468;
        case 0x1f446cu: goto label_1f446c;
        case 0x1f4470u: goto label_1f4470;
        case 0x1f4474u: goto label_1f4474;
        case 0x1f4478u: goto label_1f4478;
        case 0x1f447cu: goto label_1f447c;
        case 0x1f4480u: goto label_1f4480;
        case 0x1f4484u: goto label_1f4484;
        case 0x1f4488u: goto label_1f4488;
        case 0x1f448cu: goto label_1f448c;
        case 0x1f4490u: goto label_1f4490;
        case 0x1f4494u: goto label_1f4494;
        case 0x1f4498u: goto label_1f4498;
        case 0x1f449cu: goto label_1f449c;
        case 0x1f44a0u: goto label_1f44a0;
        case 0x1f44a4u: goto label_1f44a4;
        case 0x1f44a8u: goto label_1f44a8;
        case 0x1f44acu: goto label_1f44ac;
        case 0x1f44b0u: goto label_1f44b0;
        case 0x1f44b4u: goto label_1f44b4;
        case 0x1f44b8u: goto label_1f44b8;
        case 0x1f44bcu: goto label_1f44bc;
        case 0x1f44c0u: goto label_1f44c0;
        case 0x1f44c4u: goto label_1f44c4;
        case 0x1f44c8u: goto label_1f44c8;
        case 0x1f44ccu: goto label_1f44cc;
        case 0x1f44d0u: goto label_1f44d0;
        case 0x1f44d4u: goto label_1f44d4;
        case 0x1f44d8u: goto label_1f44d8;
        case 0x1f44dcu: goto label_1f44dc;
        case 0x1f44e0u: goto label_1f44e0;
        case 0x1f44e4u: goto label_1f44e4;
        case 0x1f44e8u: goto label_1f44e8;
        case 0x1f44ecu: goto label_1f44ec;
        case 0x1f44f0u: goto label_1f44f0;
        case 0x1f44f4u: goto label_1f44f4;
        case 0x1f44f8u: goto label_1f44f8;
        case 0x1f44fcu: goto label_1f44fc;
        case 0x1f4500u: goto label_1f4500;
        case 0x1f4504u: goto label_1f4504;
        case 0x1f4508u: goto label_1f4508;
        case 0x1f450cu: goto label_1f450c;
        case 0x1f4510u: goto label_1f4510;
        case 0x1f4514u: goto label_1f4514;
        case 0x1f4518u: goto label_1f4518;
        case 0x1f451cu: goto label_1f451c;
        case 0x1f4520u: goto label_1f4520;
        case 0x1f4524u: goto label_1f4524;
        case 0x1f4528u: goto label_1f4528;
        case 0x1f452cu: goto label_1f452c;
        case 0x1f4530u: goto label_1f4530;
        case 0x1f4534u: goto label_1f4534;
        case 0x1f4538u: goto label_1f4538;
        case 0x1f453cu: goto label_1f453c;
        case 0x1f4540u: goto label_1f4540;
        case 0x1f4544u: goto label_1f4544;
        case 0x1f4548u: goto label_1f4548;
        case 0x1f454cu: goto label_1f454c;
        case 0x1f4550u: goto label_1f4550;
        case 0x1f4554u: goto label_1f4554;
        case 0x1f4558u: goto label_1f4558;
        case 0x1f455cu: goto label_1f455c;
        case 0x1f4560u: goto label_1f4560;
        case 0x1f4564u: goto label_1f4564;
        case 0x1f4568u: goto label_1f4568;
        case 0x1f456cu: goto label_1f456c;
        case 0x1f4570u: goto label_1f4570;
        case 0x1f4574u: goto label_1f4574;
        case 0x1f4578u: goto label_1f4578;
        case 0x1f457cu: goto label_1f457c;
        case 0x1f4580u: goto label_1f4580;
        case 0x1f4584u: goto label_1f4584;
        case 0x1f4588u: goto label_1f4588;
        case 0x1f458cu: goto label_1f458c;
        case 0x1f4590u: goto label_1f4590;
        case 0x1f4594u: goto label_1f4594;
        case 0x1f4598u: goto label_1f4598;
        case 0x1f459cu: goto label_1f459c;
        case 0x1f45a0u: goto label_1f45a0;
        case 0x1f45a4u: goto label_1f45a4;
        case 0x1f45a8u: goto label_1f45a8;
        case 0x1f45acu: goto label_1f45ac;
        case 0x1f45b0u: goto label_1f45b0;
        case 0x1f45b4u: goto label_1f45b4;
        case 0x1f45b8u: goto label_1f45b8;
        case 0x1f45bcu: goto label_1f45bc;
        case 0x1f45c0u: goto label_1f45c0;
        case 0x1f45c4u: goto label_1f45c4;
        case 0x1f45c8u: goto label_1f45c8;
        case 0x1f45ccu: goto label_1f45cc;
        case 0x1f45d0u: goto label_1f45d0;
        case 0x1f45d4u: goto label_1f45d4;
        case 0x1f45d8u: goto label_1f45d8;
        case 0x1f45dcu: goto label_1f45dc;
        case 0x1f45e0u: goto label_1f45e0;
        case 0x1f45e4u: goto label_1f45e4;
        case 0x1f45e8u: goto label_1f45e8;
        case 0x1f45ecu: goto label_1f45ec;
        case 0x1f45f0u: goto label_1f45f0;
        case 0x1f45f4u: goto label_1f45f4;
        case 0x1f45f8u: goto label_1f45f8;
        case 0x1f45fcu: goto label_1f45fc;
        case 0x1f4600u: goto label_1f4600;
        case 0x1f4604u: goto label_1f4604;
        case 0x1f4608u: goto label_1f4608;
        case 0x1f460cu: goto label_1f460c;
        case 0x1f4610u: goto label_1f4610;
        case 0x1f4614u: goto label_1f4614;
        case 0x1f4618u: goto label_1f4618;
        case 0x1f461cu: goto label_1f461c;
        case 0x1f4620u: goto label_1f4620;
        case 0x1f4624u: goto label_1f4624;
        case 0x1f4628u: goto label_1f4628;
        case 0x1f462cu: goto label_1f462c;
        case 0x1f4630u: goto label_1f4630;
        case 0x1f4634u: goto label_1f4634;
        case 0x1f4638u: goto label_1f4638;
        case 0x1f463cu: goto label_1f463c;
        case 0x1f4640u: goto label_1f4640;
        case 0x1f4644u: goto label_1f4644;
        case 0x1f4648u: goto label_1f4648;
        case 0x1f464cu: goto label_1f464c;
        case 0x1f4650u: goto label_1f4650;
        case 0x1f4654u: goto label_1f4654;
        case 0x1f4658u: goto label_1f4658;
        case 0x1f465cu: goto label_1f465c;
        case 0x1f4660u: goto label_1f4660;
        case 0x1f4664u: goto label_1f4664;
        case 0x1f4668u: goto label_1f4668;
        case 0x1f466cu: goto label_1f466c;
        case 0x1f4670u: goto label_1f4670;
        case 0x1f4674u: goto label_1f4674;
        case 0x1f4678u: goto label_1f4678;
        case 0x1f467cu: goto label_1f467c;
        case 0x1f4680u: goto label_1f4680;
        case 0x1f4684u: goto label_1f4684;
        case 0x1f4688u: goto label_1f4688;
        case 0x1f468cu: goto label_1f468c;
        case 0x1f4690u: goto label_1f4690;
        case 0x1f4694u: goto label_1f4694;
        case 0x1f4698u: goto label_1f4698;
        case 0x1f469cu: goto label_1f469c;
        case 0x1f46a0u: goto label_1f46a0;
        case 0x1f46a4u: goto label_1f46a4;
        case 0x1f46a8u: goto label_1f46a8;
        case 0x1f46acu: goto label_1f46ac;
        case 0x1f46b0u: goto label_1f46b0;
        case 0x1f46b4u: goto label_1f46b4;
        case 0x1f46b8u: goto label_1f46b8;
        case 0x1f46bcu: goto label_1f46bc;
        case 0x1f46c0u: goto label_1f46c0;
        case 0x1f46c4u: goto label_1f46c4;
        case 0x1f46c8u: goto label_1f46c8;
        case 0x1f46ccu: goto label_1f46cc;
        case 0x1f46d0u: goto label_1f46d0;
        case 0x1f46d4u: goto label_1f46d4;
        case 0x1f46d8u: goto label_1f46d8;
        case 0x1f46dcu: goto label_1f46dc;
        case 0x1f46e0u: goto label_1f46e0;
        case 0x1f46e4u: goto label_1f46e4;
        case 0x1f46e8u: goto label_1f46e8;
        case 0x1f46ecu: goto label_1f46ec;
        case 0x1f46f0u: goto label_1f46f0;
        case 0x1f46f4u: goto label_1f46f4;
        case 0x1f46f8u: goto label_1f46f8;
        case 0x1f46fcu: goto label_1f46fc;
        case 0x1f4700u: goto label_1f4700;
        case 0x1f4704u: goto label_1f4704;
        case 0x1f4708u: goto label_1f4708;
        case 0x1f470cu: goto label_1f470c;
        case 0x1f4710u: goto label_1f4710;
        case 0x1f4714u: goto label_1f4714;
        case 0x1f4718u: goto label_1f4718;
        case 0x1f471cu: goto label_1f471c;
        case 0x1f4720u: goto label_1f4720;
        case 0x1f4724u: goto label_1f4724;
        case 0x1f4728u: goto label_1f4728;
        case 0x1f472cu: goto label_1f472c;
        case 0x1f4730u: goto label_1f4730;
        case 0x1f4734u: goto label_1f4734;
        case 0x1f4738u: goto label_1f4738;
        case 0x1f473cu: goto label_1f473c;
        case 0x1f4740u: goto label_1f4740;
        case 0x1f4744u: goto label_1f4744;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f474cu: goto label_1f474c;
        case 0x1f4750u: goto label_1f4750;
        case 0x1f4754u: goto label_1f4754;
        case 0x1f4758u: goto label_1f4758;
        case 0x1f475cu: goto label_1f475c;
        case 0x1f4760u: goto label_1f4760;
        case 0x1f4764u: goto label_1f4764;
        case 0x1f4768u: goto label_1f4768;
        case 0x1f476cu: goto label_1f476c;
        case 0x1f4770u: goto label_1f4770;
        case 0x1f4774u: goto label_1f4774;
        case 0x1f4778u: goto label_1f4778;
        case 0x1f477cu: goto label_1f477c;
        case 0x1f4780u: goto label_1f4780;
        case 0x1f4784u: goto label_1f4784;
        case 0x1f4788u: goto label_1f4788;
        case 0x1f478cu: goto label_1f478c;
        case 0x1f4790u: goto label_1f4790;
        case 0x1f4794u: goto label_1f4794;
        case 0x1f4798u: goto label_1f4798;
        case 0x1f479cu: goto label_1f479c;
        case 0x1f47a0u: goto label_1f47a0;
        case 0x1f47a4u: goto label_1f47a4;
        case 0x1f47a8u: goto label_1f47a8;
        case 0x1f47acu: goto label_1f47ac;
        case 0x1f47b0u: goto label_1f47b0;
        case 0x1f47b4u: goto label_1f47b4;
        case 0x1f47b8u: goto label_1f47b8;
        case 0x1f47bcu: goto label_1f47bc;
        case 0x1f47c0u: goto label_1f47c0;
        case 0x1f47c4u: goto label_1f47c4;
        default: break;
    }

    ctx->pc = 0x1f3610u;

label_1f3610:
    // 0x1f3610: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1f3614:
    // 0x1f3614: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1f3614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1f3618:
    // 0x1f3618: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1f3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1f361c:
    // 0x1f361c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f361cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3620:
    // 0x1f3620: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1f3620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1f3624:
    // 0x1f3624: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1f3624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_1f3628:
    // 0x1f3628: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1f3628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_1f362c:
    // 0x1f362c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1f362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_1f3630:
    // 0x1f3630: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1f3630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_1f3634:
    // 0x1f3634: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1f3634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_1f3638:
    // 0x1f3638: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1f3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1f363c:
    // 0x1f363c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1f3640:
    // 0x1f3640: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x1f3640u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f3644:
    // 0x1f3644: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1f3644u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f3648:
    // 0x1f3648: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1f3648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f364c:
    // 0x1f364c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f3650:
    // 0x1f3650: 0x1440044e  bnez        $v0, . + 4 + (0x44E << 2)
label_1f3654:
    if (ctx->pc == 0x1F3654u) {
        ctx->pc = 0x1F3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3650u;
        // 0x1f3654: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3658u;
        goto label_1f3658;
    }
    ctx->pc = 0x1F3650u;
    {
        const bool branch_taken_0x1f3650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3650u;
        // 0x1f3654: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3650) {
            ctx->pc = 0x1F478Cu;
            goto label_1f478c;
        }
    }
    ctx->pc = 0x1F3658u;
label_1f3658:
    // 0x1f3658: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f3658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f365c:
    // 0x1f365c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1f365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1f3660:
    // 0x1f3660: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3664:
    // 0x1f3664: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1f3664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f3668:
    // 0x1f3668: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1f366c:
    if (ctx->pc == 0x1F366Cu) {
        ctx->pc = 0x1F366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3668u;
        // 0x1f366c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3670u;
        goto label_1f3670;
    }
    ctx->pc = 0x1F3668u;
    {
        const bool branch_taken_0x1f3668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3668u;
        // 0x1f366c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3668) {
            ctx->pc = 0x1F3800u;
            goto label_1f3800;
        }
    }
    ctx->pc = 0x1F3670u;
label_1f3670:
    // 0x1f3670: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1f3674:
    if (ctx->pc == 0x1F3674u) {
        ctx->pc = 0x1F3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3670u;
        // 0x1f3674: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3678u;
        goto label_1f3678;
    }
    ctx->pc = 0x1F3670u;
    {
        const bool branch_taken_0x1f3670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3670u;
        // 0x1f3674: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3670) {
            ctx->pc = 0x1F373Cu;
            goto label_1f373c;
        }
    }
    ctx->pc = 0x1F3678u;
label_1f3678:
    // 0x1f3678: 0x3c013e94  lui         $at, 0x3E94
    ctx->pc = 0x1f3678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16020 << 16));
label_1f367c:
    // 0x1f367c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1f367cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1f3680:
    // 0x1f3680: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f3680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1f3684:
    // 0x1f3684: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1f3684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1f3688:
    // 0x1f3688: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1f3688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1f368c:
    // 0x1f368c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1f368cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1f3690:
    // 0x1f3690: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1f3690u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1f3694:
    // 0x1f3694: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1f3694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1f3698:
    // 0x1f3698: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f369c:
    // 0x1f369c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f369cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f36a0:
    // 0x1f36a0: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1f36a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1f36a4:
    // 0x1f36a4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1f36a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1f36a8:
    // 0x1f36a8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f36a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f36ac:
    // 0x1f36ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f36acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f36b0:
    // 0x1f36b0: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1f36b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1f36b4:
    // 0x1f36b4: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x1f36b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_1f36b8:
    // 0x1f36b8: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1f36b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1f36bc:
    // 0x1f36bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f36bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f36c0:
    // 0x1f36c0: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1f36c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1f36c4:
    // 0x1f36c4: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1f36c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_1f36c8:
    // 0x1f36c8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1f36c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1f36cc:
    // 0x1f36cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f36ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f36d0:
    // 0x1f36d0: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1f36d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1f36d4:
    // 0x1f36d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1f36d8:
    // 0x1f36d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f36d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f36dc:
    // 0x1f36dc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f36dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1f36e0:
    // 0x1f36e0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1f36e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1f36e4:
    // 0x1f36e4: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_1f36e8:
    // 0x1f36e8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1f36e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1f36ec:
    // 0x1f36ec: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f36ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1f36f0:
    // 0x1f36f0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1f36f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1f36f4:
    // 0x1f36f4: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
label_1f36f8:
    // 0x1f36f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f36f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f36fc:
    // 0x1f36fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f36fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3700:
    // 0x1f3700: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f3700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f3704:
    // 0x1f3704: 0x3c013e06  lui         $at, 0x3E06
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15878 << 16));
label_1f3708:
    // 0x1f3708: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f370c:
    // 0x1f370c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f370cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3710:
    // 0x1f3710: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f3710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f3714:
    // 0x1f3714: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x1f3714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_1f3718:
    // 0x1f3718: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f3718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1f371c:
    // 0x1f371c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f371cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f3720:
    // 0x1f3720: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
label_1f3724:
    // 0x1f3724: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f3724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f3728:
    // 0x1f3728: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f3728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f372c:
    // 0x1f372c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1f3730:
    // 0x1f3730: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f3730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f3734:
    // 0x1f3734: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_1f3738:
    if (ctx->pc == 0x1F3738u) {
        ctx->pc = 0x1F3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3734u;
        // 0x1f3738: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F373Cu;
        goto label_1f373c;
    }
    ctx->pc = 0x1F3734u;
    {
        const bool branch_taken_0x1f3734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3734u;
        // 0x1f3738: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3734) {
            ctx->pc = 0x1F39DCu;
            goto label_1f39dc;
        }
    }
    ctx->pc = 0x1F373Cu;
label_1f373c:
    // 0x1f373c: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1f373cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_1f3740:
    // 0x1f3740: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f3740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1f3744:
    // 0x1f3744: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f3744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1f3748:
    // 0x1f3748: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_1f374c:
    // 0x1f374c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f374cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f3750:
    // 0x1f3750: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1f3750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1f3754:
    // 0x1f3754: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1f3754u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1f3758:
    // 0x1f3758: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1f3758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1f375c:
    // 0x1f375c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f375cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3760:
    // 0x1f3760: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3764:
    // 0x1f3764: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1f3768:
    // 0x1f3768: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1f3768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_1f376c:
    // 0x1f376c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f376cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3770:
    // 0x1f3770: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f3770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3774:
    // 0x1f3774: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1f3774u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1f3778:
    // 0x1f3778: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_1f377c:
    // 0x1f377c: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1f377cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1f3780:
    // 0x1f3780: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f3784:
    // 0x1f3784: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1f3784u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1f3788:
    // 0x1f3788: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1f3788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_1f378c:
    // 0x1f378c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1f378cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1f3790:
    // 0x1f3790: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f3790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f3794:
    // 0x1f3794: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1f3794u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1f3798:
    // 0x1f3798: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1f379c:
    // 0x1f379c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f379cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f37a0:
    // 0x1f37a0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f37a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1f37a4:
    // 0x1f37a4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1f37a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1f37a8:
    // 0x1f37a8: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1f37a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_1f37ac:
    // 0x1f37ac: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1f37acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1f37b0:
    // 0x1f37b0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f37b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1f37b4:
    // 0x1f37b4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1f37b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1f37b8:
    // 0x1f37b8: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x1f37b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_1f37bc:
    // 0x1f37bc: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1f37bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1f37c0:
    // 0x1f37c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f37c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f37c4:
    // 0x1f37c4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f37c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f37c8:
    // 0x1f37c8: 0x3c013dc7  lui         $at, 0x3DC7
    ctx->pc = 0x1f37c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15815 << 16));
label_1f37cc:
    // 0x1f37cc: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1f37ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1f37d0:
    // 0x1f37d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f37d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f37d4:
    // 0x1f37d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f37d8:
    // 0x1f37d8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1f37d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_1f37dc:
    // 0x1f37dc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f37dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1f37e0:
    // 0x1f37e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f37e4:
    // 0x1f37e4: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x1f37e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
label_1f37e8:
    // 0x1f37e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f37e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f37ec:
    // 0x1f37ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f37ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f37f0:
    // 0x1f37f0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f37f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1f37f4:
    // 0x1f37f4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f37f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f37f8:
    // 0x1f37f8: 0x10000078  b           . + 4 + (0x78 << 2)
label_1f37fc:
    if (ctx->pc == 0x1F37FCu) {
        ctx->pc = 0x1F37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37F8u;
        // 0x1f37fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3800u;
        goto label_1f3800;
    }
    ctx->pc = 0x1F37F8u;
    {
        const bool branch_taken_0x1f37f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37F8u;
        // 0x1f37fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f37f8) {
            ctx->pc = 0x1F39DCu;
            goto label_1f39dc;
        }
    }
    ctx->pc = 0x1F3800u;
label_1f3800:
    // 0x1f3800: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1f3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f3804:
    // 0x1f3804: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1f3808:
    if (ctx->pc == 0x1F3808u) {
        ctx->pc = 0x1F3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3804u;
        // 0x1f3808: 0x3c0a0051  lui         $t2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F380Cu;
        goto label_1f380c;
    }
    ctx->pc = 0x1F3804u;
    {
        const bool branch_taken_0x1f3804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3804u;
        // 0x1f3808: 0x3c0a0051  lui         $t2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3804) {
            ctx->pc = 0x1F390Cu;
            goto label_1f390c;
        }
    }
    ctx->pc = 0x1F380Cu;
label_1f380c:
    // 0x1f380c: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1f3810:
    // 0x1f3810: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1f3810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1f3814:
    // 0x1f3814: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f3814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1f3818:
    // 0x1f3818: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1f3818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_1f381c:
    // 0x1f381c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1f381cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1f3820:
    // 0x1f3820: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f3820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1f3824:
    // 0x1f3824: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1f3824u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1f3828:
    // 0x1f3828: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1f3828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1f382c:
    // 0x1f382c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f382cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3830:
    // 0x1f3830: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1f3830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1f3834:
    // 0x1f3834: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1f3834u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1f3838:
    // 0x1f3838: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x1f3838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_1f383c:
    // 0x1f383c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f383cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f3840:
    // 0x1f3840: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3844:
    // 0x1f3844: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1f3848:
    // 0x1f3848: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1f3848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1f384c:
    // 0x1f384c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f384cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3850:
    // 0x1f3850: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f3854:
    // 0x1f3854: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1f3854u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1f3858:
    // 0x1f3858: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1f385c:
    // 0x1f385c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f385cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f3860:
    // 0x1f3860: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1f3864:
    // 0x1f3864: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f3864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1f3868:
    // 0x1f3868: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f386c:
    // 0x1f386c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f386cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1f3870:
    // 0x1f3870: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1f3870u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1f3874:
    // 0x1f3874: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1f3874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1f3878:
    // 0x1f3878: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1f3878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1f387c:
    // 0x1f387c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f387cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1f3880:
    // 0x1f3880: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f3884:
    // 0x1f3884: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1f3884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1f3888:
    // 0x1f3888: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f3888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f388c:
    // 0x1f388c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f388cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3890:
    // 0x1f3890: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f3890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f3894:
    // 0x1f3894: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
label_1f3898:
    // 0x1f3898: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1f3898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1f389c:
    // 0x1f389c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f389cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f38a0:
    // 0x1f38a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f38a4:
    // 0x1f38a4: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_1f38a8:
    // 0x1f38a8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f38a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f38ac:
    // 0x1f38ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f38acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f38b0:
    // 0x1f38b0: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
label_1f38b4:
    // 0x1f38b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f38b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f38b8:
    // 0x1f38b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f38b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f38bc:
    // 0x1f38bc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f38bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f38c0:
    // 0x1f38c0: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1f38c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_1f38c4:
    // 0x1f38c4: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1f38c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1f38c8:
    // 0x1f38c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f38c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f38cc:
    // 0x1f38cc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1f38ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1f38d0:
    // 0x1f38d0: 0xe447f3fc  swc1        $f7, -0xC04($v0)
    ctx->pc = 0x1f38d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964220), bits); }
label_1f38d4:
    // 0x1f38d4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1f38d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f38d8:
    // 0x1f38d8: 0xe462f40c  swc1        $f2, -0xBF4($v1)
    ctx->pc = 0x1f38d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964236), bits); }
label_1f38dc:
    // 0x1f38dc: 0xe483f410  swc1        $f3, -0xBF0($a0)
    ctx->pc = 0x1f38dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964240), bits); }
label_1f38e0:
    // 0x1f38e0: 0xe4a0f41c  swc1        $f0, -0xBE4($a1)
    ctx->pc = 0x1f38e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964252), bits); }
label_1f38e4:
    // 0x1f38e4: 0xe4c1ee80  swc1        $f1, -0x1180($a2)
    ctx->pc = 0x1f38e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962816), bits); }
label_1f38e8:
    // 0x1f38e8: 0xe54af400  swc1        $f10, -0xC00($t2)
    ctx->pc = 0x1f38e8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964224), bits); }
label_1f38ec:
    // 0x1f38ec: 0xe56bf404  swc1        $f11, -0xBFC($t3)
    ctx->pc = 0x1f38ecu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964228), bits); }
label_1f38f0:
    // 0x1f38f0: 0xe58cf408  swc1        $f12, -0xBF8($t4)
    ctx->pc = 0x1f38f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964232), bits); }
label_1f38f4:
    // 0x1f38f4: 0xe5a8f414  swc1        $f8, -0xBEC($t5)
    ctx->pc = 0x1f38f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964244), bits); }
label_1f38f8:
    // 0x1f38f8: 0xe5c9f418  swc1        $f9, -0xBE8($t6)
    ctx->pc = 0x1f38f8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964248), bits); }
label_1f38fc:
    // 0x1f38fc: 0xe526f420  swc1        $f6, -0xBE0($t1)
    ctx->pc = 0x1f38fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964256), bits); }
label_1f3900:
    // 0x1f3900: 0xe505f424  swc1        $f5, -0xBDC($t0)
    ctx->pc = 0x1f3900u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964260), bits); }
label_1f3904:
    // 0x1f3904: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1f3908:
    if (ctx->pc == 0x1F3908u) {
        ctx->pc = 0x1F3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3904u;
        // 0x1f3908: 0xe4e4f428  swc1        $f4, -0xBD8($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F390Cu;
        goto label_1f390c;
    }
    ctx->pc = 0x1F3904u;
    {
        const bool branch_taken_0x1f3904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3904u;
        // 0x1f3908: 0xe4e4f428  swc1        $f4, -0xBD8($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3904) {
            ctx->pc = 0x1F3B3Cu;
            goto label_1f3b3c;
        }
    }
    ctx->pc = 0x1F390Cu;
label_1f390c:
    // 0x1f390c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1f390cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f3910:
    // 0x1f3910: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1f3914:
    if (ctx->pc == 0x1F3914u) {
        ctx->pc = 0x1F3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3910u;
        // 0x1f3914: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3918u;
        goto label_1f3918;
    }
    ctx->pc = 0x1F3910u;
    {
        const bool branch_taken_0x1f3910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3910u;
        // 0x1f3914: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3910) {
            ctx->pc = 0x1F3A30u;
            goto label_1f3a30;
        }
    }
    ctx->pc = 0x1F3918u;
label_1f3918:
    // 0x1f3918: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x1f3918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
label_1f391c:
    // 0x1f391c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1f391cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1f3920:
    // 0x1f3920: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f3920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1f3924:
    // 0x1f3924: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1f3924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_1f3928:
    // 0x1f3928: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1f3928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1f392c:
    // 0x1f392c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1f392cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1f3930:
    // 0x1f3930: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1f3934:
    // 0x1f3934: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1f3934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1f3938:
    // 0x1f3938: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f393c:
    // 0x1f393c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3940:
    // 0x1f3940: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1f3940u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1f3944:
    // 0x1f3944: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1f3944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_1f3948:
    // 0x1f3948: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1f3948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1f394c:
    // 0x1f394c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f394cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3950:
    // 0x1f3950: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1f3950u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1f3954:
    // 0x1f3954: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f3954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f3958:
    // 0x1f3958: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f3958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f395c:
    // 0x1f395c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f3960:
    // 0x1f3960: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1f3960u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1f3964:
    // 0x1f3964: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_1f3968:
    // 0x1f3968: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1f3968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1f396c:
    // 0x1f396c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f396cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f3970:
    // 0x1f3970: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1f3970u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1f3974:
    // 0x1f3974: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f3974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1f3978:
    // 0x1f3978: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f397c:
    // 0x1f397c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f397cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1f3980:
    // 0x1f3980: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1f3980u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1f3984:
    // 0x1f3984: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1f3984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1f3988:
    // 0x1f3988: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f398c:
    // 0x1f398c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f398cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1f3990:
    // 0x1f3990: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1f3990u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1f3994:
    // 0x1f3994: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_1f3998:
    // 0x1f3998: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f3998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f399c:
    // 0x1f399c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f39a0:
    // 0x1f39a0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f39a4:
    // 0x1f39a4: 0x3c013e0a  lui         $at, 0x3E0A
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15882 << 16));
label_1f39a8:
    // 0x1f39a8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f39a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1f39ac:
    // 0x1f39ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f39acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f39b0:
    // 0x1f39b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f39b4:
    // 0x1f39b4: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x1f39b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_1f39b8:
    // 0x1f39b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f39b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1f39bc:
    // 0x1f39bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f39c0:
    // 0x1f39c0: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x1f39c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
label_1f39c4:
    // 0x1f39c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f39c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f39c8:
    // 0x1f39c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f39c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f39cc:
    // 0x1f39cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f39d0:
    // 0x1f39d0: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1f39d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_1f39d4:
    // 0x1f39d4: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1f39d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1f39d8:
    // 0x1f39d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f39d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f39dc:
    // 0x1f39dc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f39dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f39e0:
    // 0x1f39e0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1f39e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1f39e4:
    // 0x1f39e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f39e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f39e8:
    // 0x1f39e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f39e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f39ec:
    // 0x1f39ec: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1f39f0:
    // 0x1f39f0: 0xe448f3fc  swc1        $f8, -0xC04($v0)
    ctx->pc = 0x1f39f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964220), bits); }
label_1f39f4:
    // 0x1f39f4: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1f39f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1f39f8:
    // 0x1f39f8: 0xe462f40c  swc1        $f2, -0xBF4($v1)
    ctx->pc = 0x1f39f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964236), bits); }
label_1f39fc:
    // 0x1f39fc: 0xe483f410  swc1        $f3, -0xBF0($a0)
    ctx->pc = 0x1f39fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964240), bits); }
label_1f3a00:
    // 0x1f3a00: 0xe4a0f41c  swc1        $f0, -0xBE4($a1)
    ctx->pc = 0x1f3a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964252), bits); }
label_1f3a04:
    // 0x1f3a04: 0xe4c1ee80  swc1        $f1, -0x1180($a2)
    ctx->pc = 0x1f3a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962816), bits); }
label_1f3a08:
    // 0x1f3a08: 0xe56bf400  swc1        $f11, -0xC00($t3)
    ctx->pc = 0x1f3a08u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964224), bits); }
label_1f3a0c:
    // 0x1f3a0c: 0xe58cf404  swc1        $f12, -0xBFC($t4)
    ctx->pc = 0x1f3a0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964228), bits); }
label_1f3a10:
    // 0x1f3a10: 0xe5adf408  swc1        $f13, -0xBF8($t5)
    ctx->pc = 0x1f3a10u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964232), bits); }
label_1f3a14:
    // 0x1f3a14: 0xe5c9f414  swc1        $f9, -0xBEC($t6)
    ctx->pc = 0x1f3a14u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964244), bits); }
label_1f3a18:
    // 0x1f3a18: 0xe5eaf418  swc1        $f10, -0xBE8($t7)
    ctx->pc = 0x1f3a18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964248), bits); }
label_1f3a1c:
    // 0x1f3a1c: 0xe547f420  swc1        $f7, -0xBE0($t2)
    ctx->pc = 0x1f3a1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964256), bits); }
label_1f3a20:
    // 0x1f3a20: 0xe526f424  swc1        $f6, -0xBDC($t1)
    ctx->pc = 0x1f3a20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964260), bits); }
label_1f3a24:
    // 0x1f3a24: 0xe505f428  swc1        $f5, -0xBD8($t0)
    ctx->pc = 0x1f3a24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964264), bits); }
label_1f3a28:
    // 0x1f3a28: 0x10000044  b           . + 4 + (0x44 << 2)
label_1f3a2c:
    if (ctx->pc == 0x1F3A2Cu) {
        ctx->pc = 0x1F3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A28u;
        // 0x1f3a2c: 0xe4e4f430  swc1        $f4, -0xBD0($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3A30u;
        goto label_1f3a30;
    }
    ctx->pc = 0x1F3A28u;
    {
        const bool branch_taken_0x1f3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A28u;
        // 0x1f3a2c: 0xe4e4f430  swc1        $f4, -0xBD0($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a28) {
            ctx->pc = 0x1F3B3Cu;
            goto label_1f3b3c;
        }
    }
    ctx->pc = 0x1F3A30u;
label_1f3a30:
    // 0x1f3a30: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f3a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1f3a34:
    // 0x1f3a34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3a38:
    // 0x1f3a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3a3c:
    // 0x1f3a3c: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1f3a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1f3a40:
    // 0x1f3a40: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1f3a44:
    // 0x1f3a44: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f3a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1f3a48:
    // 0x1f3a48: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f3a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f3a4c:
    // 0x1f3a4c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1f3a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1f3a50:
    // 0x1f3a50: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1f3a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1f3a54:
    // 0x1f3a54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3a58:
    // 0x1f3a58: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f3a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1f3a5c:
    // 0x1f3a5c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1f3a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1f3a60:
    // 0x1f3a60: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1f3a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1f3a64:
    // 0x1f3a64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f3a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f3a68:
    // 0x1f3a68: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1f3a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1f3a6c:
    // 0x1f3a6c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1f3a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1f3a70:
    // 0x1f3a70: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f3a74:
    // 0x1f3a74: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f3a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f3a78:
    // 0x1f3a78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f3a7c:
    // 0x1f3a7c: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1f3a7cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1f3a80:
    // 0x1f3a80: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1f3a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_1f3a84:
    // 0x1f3a84: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1f3a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1f3a88:
    // 0x1f3a88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f3a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f3a8c:
    // 0x1f3a8c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1f3a8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1f3a90:
    // 0x1f3a90: 0x3c013ed7  lui         $at, 0x3ED7
    ctx->pc = 0x1f3a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16087 << 16));
label_1f3a94:
    // 0x1f3a94: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f3a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1f3a98:
    // 0x1f3a98: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f3a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1f3a9c:
    // 0x1f3a9c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1f3aa0:
    // 0x1f3aa0: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
label_1f3aa4:
    // 0x1f3aa4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f3aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1f3aa8:
    // 0x1f3aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3aac:
    // 0x1f3aac: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1f3aacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1f3ab0:
    // 0x1f3ab0: 0x3c013dd4  lui         $at, 0x3DD4
    ctx->pc = 0x1f3ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15828 << 16));
label_1f3ab4:
    // 0x1f3ab4: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1f3ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1f3ab8:
    // 0x1f3ab8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3abc:
    // 0x1f3abc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f3ac0:
    // 0x1f3ac0: 0x3c01410b  lui         $at, 0x410B
    ctx->pc = 0x1f3ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16651 << 16));
label_1f3ac4:
    // 0x1f3ac4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f3ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f3ac8:
    // 0x1f3ac8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f3ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1f3acc:
    // 0x1f3acc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f3ad0:
    // 0x1f3ad0: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x1f3ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
label_1f3ad4:
    // 0x1f3ad4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f3ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f3ad8:
    // 0x1f3ad8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f3ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1f3adc:
    // 0x1f3adc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f3ae0:
    // 0x1f3ae0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f3ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1f3ae4:
    // 0x1f3ae4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f3ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f3ae8:
    // 0x1f3ae8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f3aec:
    // 0x1f3aec: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1f3aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1f3af0:
    // 0x1f3af0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3af4:
    // 0x1f3af4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f3af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f3af8:
    // 0x1f3af8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f3afc:
    // 0x1f3afc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1f3afcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1f3b00:
    // 0x1f3b00: 0xe4a5f3fc  swc1        $f5, -0xC04($a1)
    ctx->pc = 0x1f3b00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964220), bits); }
label_1f3b04:
    // 0x1f3b04: 0xe442f40c  swc1        $f2, -0xBF4($v0)
    ctx->pc = 0x1f3b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964236), bits); }
label_1f3b08:
    // 0x1f3b08: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x1f3b08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b0c:
    // 0x1f3b0c: 0xe463f410  swc1        $f3, -0xBF0($v1)
    ctx->pc = 0x1f3b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964240), bits); }
label_1f3b10:
    // 0x1f3b10: 0xe480f41c  swc1        $f0, -0xBE4($a0)
    ctx->pc = 0x1f3b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964252), bits); }
label_1f3b14:
    // 0x1f3b14: 0xe4c1ee80  swc1        $f1, -0x1180($a2)
    ctx->pc = 0x1f3b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962816), bits); }
label_1f3b18:
    // 0x1f3b18: 0xe52af404  swc1        $f10, -0xBFC($t1)
    ctx->pc = 0x1f3b18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964228), bits); }
label_1f3b1c:
    // 0x1f3b1c: 0xe54bf408  swc1        $f11, -0xBF8($t2)
    ctx->pc = 0x1f3b1cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964232), bits); }
label_1f3b20:
    // 0x1f3b20: 0xe56cf414  swc1        $f12, -0xBEC($t3)
    ctx->pc = 0x1f3b20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964244), bits); }
label_1f3b24:
    // 0x1f3b24: 0xe589f418  swc1        $f9, -0xBE8($t4)
    ctx->pc = 0x1f3b24u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964248), bits); }
label_1f3b28:
    // 0x1f3b28: 0xe5a7f420  swc1        $f7, -0xBE0($t5)
    ctx->pc = 0x1f3b28u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964256), bits); }
label_1f3b2c:
    // 0x1f3b2c: 0xe5c8f424  swc1        $f8, -0xBDC($t6)
    ctx->pc = 0x1f3b2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964260), bits); }
label_1f3b30:
    // 0x1f3b30: 0xe506f428  swc1        $f6, -0xBD8($t0)
    ctx->pc = 0x1f3b30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964264), bits); }
label_1f3b34:
    // 0x1f3b34: 0xe4e4f430  swc1        $f4, -0xBD0($a3)
    ctx->pc = 0x1f3b34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964272), bits); }
label_1f3b38:
    // 0x1f3b38: 0xe5ecf400  swc1        $f12, -0xC00($t7)
    ctx->pc = 0x1f3b38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964224), bits); }
label_1f3b3c:
    // 0x1f3b3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f3b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f3b40:
    // 0x1f3b40: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f3b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f3b44:
    // 0x1f3b44: 0xc07cd72  jal         func_1F35C8
label_1f3b48:
    if (ctx->pc == 0x1F3B48u) {
        ctx->pc = 0x1F3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B44u;
        // 0x1f3b48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B4Cu;
        goto label_1f3b4c;
    }
    ctx->pc = 0x1F3B44u;
    SET_GPR_U32(ctx, 31, 0x1F3B4Cu);
    ctx->pc = 0x1F3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B44u;
    // 0x1f3b48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F35C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F35C8u, 0x1F3B44u, 0x1F3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B4Cu;
label_1f3b4c:
    // 0x1f3b4c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1f3b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1f3b50:
    // 0x1f3b50: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x1f3b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_1f3b54:
    // 0x1f3b54: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1f3b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1f3b58:
    // 0x1f3b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3b5c:
    // 0x1f3b5c: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1f3b60:
    // 0x1f3b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f3b64:
    // 0x1f3b64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f3b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f3b68:
    // 0x1f3b68: 0x26177540  addiu       $s7, $s0, 0x7540
    ctx->pc = 0x1f3b68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 30016));
label_1f3b6c:
    // 0x1f3b6c: 0xe6400144  swc1        $f0, 0x144($s2)
    ctx->pc = 0x1f3b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
label_1f3b70:
    // 0x1f3b70: 0xc07f728  jal         func_1FDCA0
label_1f3b74:
    if (ctx->pc == 0x1F3B74u) {
        ctx->pc = 0x1F3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B70u;
        // 0x1f3b74: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B78u;
        goto label_1f3b78;
    }
    ctx->pc = 0x1F3B70u;
    SET_GPR_U32(ctx, 31, 0x1F3B78u);
    ctx->pc = 0x1F3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B70u;
    // 0x1f3b74: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1F3B70u, 0x1F3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B78u;
label_1f3b78:
    // 0x1f3b78: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f3b78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f3b7c:
    // 0x1f3b7c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f3b80:
    // 0x1f3b80: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x1f3b80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1f3b84:
    // 0x1f3b84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f3b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b88:
    // 0x1f3b88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f3b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f3b8c:
    // 0x1f3b8c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f3b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f3b90:
    // 0x1f3b90: 0x24a57530  addiu       $a1, $a1, 0x7530
    ctx->pc = 0x1f3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30000));
label_1f3b94:
    // 0x1f3b94: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1f3b98:
    // 0x1f3b98: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f3b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f3b9c:
    // 0x1f3b9c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1f3b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1f3ba0:
    // 0x1f3ba0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3ba4:
    // 0x1f3ba4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f3ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ba8:
    // 0x1f3ba8: 0x24090111  addiu       $t1, $zero, 0x111
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
label_1f3bac:
    // 0x1f3bac: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3bb0:
    // 0x1f3bb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3bb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bb4:
    // 0x1f3bb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3bb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bb8:
    // 0x1f3bb8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f3bbc:
    // 0x1f3bbc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f3bc0:
    // 0x1f3bc0: 0x40f809  jalr        $v0
label_1f3bc4:
    if (ctx->pc == 0x1F3BC4u) {
        ctx->pc = 0x1F3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BC0u;
        // 0x1f3bc4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BC8u;
        goto label_1f3bc8;
    }
    ctx->pc = 0x1F3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3BC8u);
        ctx->pc = 0x1F3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BC0u;
        // 0x1f3bc4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3BC0u, 0x1F3BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3BC8u;
label_1f3bc8:
    // 0x1f3bc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f3bcc:
    if (ctx->pc == 0x1F3BCCu) {
        ctx->pc = 0x1F3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BC8u;
        // 0x1f3bcc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BD0u;
        goto label_1f3bd0;
    }
    ctx->pc = 0x1F3BC8u;
    {
        const bool branch_taken_0x1f3bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BC8u;
        // 0x1f3bcc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bc8) {
            ctx->pc = 0x1F3BDCu;
            goto label_1f3bdc;
        }
    }
    ctx->pc = 0x1F3BD0u;
label_1f3bd0:
    // 0x1f3bd0: 0xc0733e2  jal         func_1CCF88
label_1f3bd4:
    if (ctx->pc == 0x1F3BD4u) {
        ctx->pc = 0x1F3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BD0u;
        // 0x1f3bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BD8u;
        goto label_1f3bd8;
    }
    ctx->pc = 0x1F3BD0u;
    SET_GPR_U32(ctx, 31, 0x1F3BD8u);
    ctx->pc = 0x1F3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BD0u;
    // 0x1f3bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F3BD0u, 0x1F3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BD8u;
label_1f3bd8:
    // 0x1f3bd8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1f3bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f3bdc:
    // 0x1f3bdc: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1f3bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1f3be0:
    // 0x1f3be0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1f3be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1f3be4:
    // 0x1f3be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3be8:
    // 0x1f3be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bec:
    // 0x1f3bec: 0xc05e602  jal         func_179808
label_1f3bf0:
    if (ctx->pc == 0x1F3BF0u) {
        ctx->pc = 0x1F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BECu;
        // 0x1f3bf0: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BF4u;
        goto label_1f3bf4;
    }
    ctx->pc = 0x1F3BECu;
    SET_GPR_U32(ctx, 31, 0x1F3BF4u);
    ctx->pc = 0x1F3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BECu;
    // 0x1f3bf0: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F3BECu, 0x1F3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BF4u;
label_1f3bf4:
    // 0x1f3bf4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1f3bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1f3bf8:
    // 0x1f3bf8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f3bfc:
    // 0x1f3bfc: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1f3bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f3c00:
    // 0x1f3c00: 0x8e14d310  lw          $s4, -0x2CF0($s0)
    ctx->pc = 0x1f3c00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955792)));
label_1f3c04:
    // 0x1f3c04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c08:
    // 0x1f3c08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c0c:
    // 0x1f3c0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3c10:
    // 0x1f3c10: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f3c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c14:
    // 0x1f3c14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f3c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3c18:
    // 0x1f3c18: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f3c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f3c1c:
    // 0x1f3c1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3c1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c20:
    // 0x1f3c20: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1f3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_1f3c24:
    // 0x1f3c24: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f3c24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f3c28:
    // 0x1f3c28: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f3c2c:
    // 0x1f3c2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f3c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c30:
    // 0x1f3c30: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f3c34:
    // 0x1f3c34: 0x40f809  jalr        $v0
label_1f3c38:
    if (ctx->pc == 0x1F3C38u) {
        ctx->pc = 0x1F3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C34u;
        // 0x1f3c38: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C3Cu;
        goto label_1f3c3c;
    }
    ctx->pc = 0x1F3C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3C3Cu);
        ctx->pc = 0x1F3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C34u;
        // 0x1f3c38: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3C34u, 0x1F3C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3C3Cu;
label_1f3c3c:
    // 0x1f3c3c: 0xc067b9c  jal         func_19EE70
label_1f3c40:
    if (ctx->pc == 0x1F3C40u) {
        ctx->pc = 0x1F3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C3Cu;
        // 0x1f3c40: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C44u;
        goto label_1f3c44;
    }
    ctx->pc = 0x1F3C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C44u);
    ctx->pc = 0x1F3C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C3Cu;
    // 0x1f3c40: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F3C3Cu, 0x1F3C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C44u;
label_1f3c44:
    // 0x1f3c44: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f3c48:
    // 0x1f3c48: 0xc073478  jal         func_1CD1E0
label_1f3c4c:
    if (ctx->pc == 0x1F3C4Cu) {
        ctx->pc = 0x1F3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C48u;
        // 0x1f3c4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C50u;
        goto label_1f3c50;
    }
    ctx->pc = 0x1F3C48u;
    SET_GPR_U32(ctx, 31, 0x1F3C50u);
    ctx->pc = 0x1F3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C48u;
    // 0x1f3c4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F3C48u, 0x1F3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C50u;
label_1f3c50:
    // 0x1f3c50: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f3c50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f3c54:
    // 0x1f3c54: 0x26057578  addiu       $a1, $s0, 0x7578
    ctx->pc = 0x1f3c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 30072));
label_1f3c58:
    // 0x1f3c58: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f3c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f3c5c:
    // 0x1f3c5c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3c60:
    // 0x1f3c60: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3c64:
    // 0x1f3c64: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f3c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c68:
    // 0x1f3c68: 0x24090118  addiu       $t1, $zero, 0x118
    ctx->pc = 0x1f3c68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_1f3c6c:
    // 0x1f3c6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3c6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c70:
    // 0x1f3c70: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f3c74:
    // 0x1f3c74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3c74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c78:
    // 0x1f3c78: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f3c7c:
    // 0x1f3c7c: 0x40f809  jalr        $v0
label_1f3c80:
    if (ctx->pc == 0x1F3C80u) {
        ctx->pc = 0x1F3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C7Cu;
        // 0x1f3c80: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C84u;
        goto label_1f3c84;
    }
    ctx->pc = 0x1F3C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3C84u);
        ctx->pc = 0x1F3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C7Cu;
        // 0x1f3c80: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3C7Cu, 0x1F3C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3C84u;
label_1f3c84:
    // 0x1f3c84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f3c88:
    if (ctx->pc == 0x1F3C88u) {
        ctx->pc = 0x1F3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C84u;
        // 0x1f3c88: 0xae420170  sw          $v0, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C8Cu;
        goto label_1f3c8c;
    }
    ctx->pc = 0x1F3C84u;
    {
        const bool branch_taken_0x1f3c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c84) {
            ctx->pc = 0x1F3C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3C84u;
            // 0x1f3c88: 0xae420170  sw          $v0, 0x170($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3C98u;
            goto label_1f3c98;
        }
    }
    ctx->pc = 0x1F3C8Cu;
label_1f3c8c:
    // 0x1f3c8c: 0xc0686fe  jal         func_1A1BF8
label_1f3c90:
    if (ctx->pc == 0x1F3C90u) {
        ctx->pc = 0x1F3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C8Cu;
        // 0x1f3c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C94u;
        goto label_1f3c94;
    }
    ctx->pc = 0x1F3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C94u);
    ctx->pc = 0x1F3C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C8Cu;
    // 0x1f3c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F3C8Cu, 0x1F3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C94u;
label_1f3c94:
    // 0x1f3c94: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x1f3c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_1f3c98:
    // 0x1f3c98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3c9c:
    // 0x1f3c9c: 0x8e4a008c  lw          $t2, 0x8C($s2)
    ctx->pc = 0x1f3c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f3ca0:
    // 0x1f3ca0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3ca4:
    // 0x1f3ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3ca8:
    // 0x1f3ca8: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f3cac:
    // 0x1f3cac: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1f3cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1f3cb0:
    // 0x1f3cb0: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1f3cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1f3cb4:
    // 0x1f3cb4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f3cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3cb8:
    // 0x1f3cb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f3cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cbc:
    // 0x1f3cbc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f3cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f3cc0:
    // 0x1f3cc0: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1f3cc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1f3cc4:
    // 0x1f3cc4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1f3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1f3cc8:
    // 0x1f3cc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3cc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ccc:
    // 0x1f3ccc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f3cd0:
    // 0x1f3cd0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1f3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1f3cd4:
    // 0x1f3cd4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f3cd8:
    // 0x1f3cd8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f3cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f3cdc:
    // 0x1f3cdc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f3cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f3ce0:
    // 0x1f3ce0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3ce4:
    // 0x1f3ce4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f3ce8:
    // 0x1f3ce8: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1f3ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1f3cec:
    // 0x1f3cec: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1f3cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1f3cf0:
    // 0x1f3cf0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f3cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1f3cf4:
    // 0x1f3cf4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f3cf8:
    // 0x1f3cf8: 0x40f809  jalr        $v0
label_1f3cfc:
    if (ctx->pc == 0x1F3CFCu) {
        ctx->pc = 0x1F3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CF8u;
        // 0x1f3cfc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D00u;
        goto label_1f3d00;
    }
    ctx->pc = 0x1F3CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3D00u);
        ctx->pc = 0x1F3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CF8u;
        // 0x1f3cfc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3CF8u, 0x1F3D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3D00u;
label_1f3d00:
    // 0x1f3d00: 0x8e460170  lw          $a2, 0x170($s2)
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1f3d04:
    // 0x1f3d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3d08:
    // 0x1f3d08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3d0c:
    // 0x1f3d0c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1f3d10:
    // 0x1f3d10: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1f3d14:
    // 0x1f3d14: 0x60f809  jalr        $v1
label_1f3d18:
    if (ctx->pc == 0x1F3D18u) {
        ctx->pc = 0x1F3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D14u;
        // 0x1f3d18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D1Cu;
        goto label_1f3d1c;
    }
    ctx->pc = 0x1F3D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3D1Cu);
        ctx->pc = 0x1F3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D14u;
        // 0x1f3d18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3D14u, 0x1F3D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3D1Cu;
label_1f3d1c:
    // 0x1f3d1c: 0x8e450170  lw          $a1, 0x170($s2)
    ctx->pc = 0x1f3d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1f3d20:
    // 0x1f3d20: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f3d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1f3d24:
    // 0x1f3d24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f3d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1f3d28:
    // 0x1f3d28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3d2c:
    // 0x1f3d2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3d30:
    // 0x1f3d30: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f3d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f3d34:
    // 0x1f3d34: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f3d38:
    // 0x1f3d38: 0x60f809  jalr        $v1
label_1f3d3c:
    if (ctx->pc == 0x1F3D3Cu) {
        ctx->pc = 0x1F3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D38u;
        // 0x1f3d3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D40u;
        goto label_1f3d40;
    }
    ctx->pc = 0x1F3D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3D40u);
        ctx->pc = 0x1F3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D38u;
        // 0x1f3d3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3D38u, 0x1F3D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3D40u;
label_1f3d40:
    // 0x1f3d40: 0xc6c0f400  lwc1        $f0, -0xC00($s6)
    ctx->pc = 0x1f3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294964224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d44:
    // 0x1f3d44: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f3d48:
    // 0x1f3d48: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f3d48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f3d4c:
    // 0x1f3d4c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f3d50:
    // 0x1f3d50: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1f3d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f3d54:
    // 0x1f3d54: 0x24a57588  addiu       $a1, $a1, 0x7588
    ctx->pc = 0x1f3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30088));
label_1f3d58:
    // 0x1f3d58: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f3d58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f3d5c:
    // 0x1f3d5c: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1f3d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1f3d60:
    // 0x1f3d60: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1f3d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f3d64:
    // 0x1f3d64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3d68:
    // 0x1f3d68: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1f3d68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f3d6c:
    // 0x1f3d6c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f3d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d70:
    // 0x1f3d70: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1f3d74:
    // 0x1f3d74: 0x24090120  addiu       $t1, $zero, 0x120
    ctx->pc = 0x1f3d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_1f3d78:
    // 0x1f3d78: 0xe6760008  swc1        $f22, 0x8($s3)
    ctx->pc = 0x1f3d78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1f3d7c:
    // 0x1f3d7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3d7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d80:
    // 0x1f3d80: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1f3d80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1f3d84:
    // 0x1f3d84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3d84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d88:
    // 0x1f3d88: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f3d88u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f3d8c:
    // 0x1f3d8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3d90:
    // 0x1f3d90: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f3d94:
    // 0x1f3d94: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f3d98:
    // 0x1f3d98: 0x40f809  jalr        $v0
label_1f3d9c:
    if (ctx->pc == 0x1F3D9Cu) {
        ctx->pc = 0x1F3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D98u;
        // 0x1f3d9c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DA0u;
        goto label_1f3da0;
    }
    ctx->pc = 0x1F3D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3DA0u);
        ctx->pc = 0x1F3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D98u;
        // 0x1f3d9c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3D98u, 0x1F3DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3DA0u;
label_1f3da0:
    // 0x1f3da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3da4:
    // 0x1f3da4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_1f3da8:
    if (ctx->pc == 0x1F3DA8u) {
        ctx->pc = 0x1F3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DA4u;
        // 0x1f3da8: 0xae500094  sw          $s0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DACu;
        goto label_1f3dac;
    }
    ctx->pc = 0x1F3DA4u;
    {
        const bool branch_taken_0x1f3da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3da4) {
            ctx->pc = 0x1F3DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3DA4u;
            // 0x1f3da8: 0xae500094  sw          $s0, 0x94($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3DD8u;
            goto label_1f3dd8;
        }
    }
    ctx->pc = 0x1F3DACu;
label_1f3dac:
    // 0x1f3dac: 0xc0733e2  jal         func_1CCF88
label_1f3db0:
    if (ctx->pc == 0x1F3DB0u) {
        ctx->pc = 0x1F3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DACu;
        // 0x1f3db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DB4u;
        goto label_1f3db4;
    }
    ctx->pc = 0x1F3DACu;
    SET_GPR_U32(ctx, 31, 0x1F3DB4u);
    ctx->pc = 0x1F3DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DACu;
    // 0x1f3db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F3DACu, 0x1F3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DB4u;
label_1f3db4:
    // 0x1f3db4: 0xc06a38c  jal         func_1A8E30
label_1f3db8:
    if (ctx->pc == 0x1F3DB8u) {
        ctx->pc = 0x1F3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DB4u;
        // 0x1f3db8: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DBCu;
        goto label_1f3dbc;
    }
    ctx->pc = 0x1F3DB4u;
    SET_GPR_U32(ctx, 31, 0x1F3DBCu);
    ctx->pc = 0x1F3DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DB4u;
    // 0x1f3db8: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1F3DB4u, 0x1F3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DBCu;
label_1f3dbc:
    // 0x1f3dbc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f3dc0:
    // 0x1f3dc0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f3dc4:
    // 0x1f3dc4: 0x2463c968  addiu       $v1, $v1, -0x3698
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953320));
label_1f3dc8:
    // 0x1f3dc8: 0x2442c8e8  addiu       $v0, $v0, -0x3718
    ctx->pc = 0x1f3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953192));
label_1f3dcc:
    // 0x1f3dcc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1f3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1f3dd0:
    // 0x1f3dd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f3dd4:
    // 0x1f3dd4: 0xae500094  sw          $s0, 0x94($s2)
    ctx->pc = 0x1f3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 16));
label_1f3dd8:
    // 0x1f3dd8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f3ddc:
    // 0x1f3ddc: 0x24567598  addiu       $s6, $v0, 0x7598
    ctx->pc = 0x1f3ddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 30104));
label_1f3de0:
    // 0x1f3de0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1f3de4:
    // 0x1f3de4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3de8:
    // 0x1f3de8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3dec:
    // 0x1f3dec: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1f3df0:
    // 0x1f3df0: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f3df4:
    // 0x1f3df4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3df8:
    // 0x1f3df8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f3df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f3dfc:
    // 0x1f3dfc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e00:
    // 0x1f3e00: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f3e04:
    // 0x1f3e04: 0x3508000a  ori         $t0, $t0, 0xA
    ctx->pc = 0x1f3e04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
label_1f3e08:
    // 0x1f3e08: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1f3e0c:
    // 0x1f3e0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f3e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e10:
    // 0x1f3e10: 0x60f809  jalr        $v1
label_1f3e14:
    if (ctx->pc == 0x1F3E14u) {
        ctx->pc = 0x1F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E10u;
        // 0x1f3e14: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E18u;
        goto label_1f3e18;
    }
    ctx->pc = 0x1F3E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3E18u);
        ctx->pc = 0x1F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E10u;
        // 0x1f3e14: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3E10u, 0x1F3E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3E18u;
label_1f3e18:
    // 0x1f3e18: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x1f3e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_1f3e1c:
    // 0x1f3e1c: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_1f3e20:
    // 0x1f3e20: 0xc080b0c  jal         func_202C30
label_1f3e24:
    if (ctx->pc == 0x1F3E24u) {
        ctx->pc = 0x1F3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E20u;
        // 0x1f3e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E28u;
        goto label_1f3e28;
    }
    ctx->pc = 0x1F3E20u;
    SET_GPR_U32(ctx, 31, 0x1F3E28u);
    ctx->pc = 0x1F3E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E20u;
    // 0x1f3e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F3E20u, 0x1F3E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E28u;
label_1f3e28:
    // 0x1f3e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e2c:
    // 0x1f3e2c: 0xc080b32  jal         func_202CC8
label_1f3e30:
    if (ctx->pc == 0x1F3E30u) {
        ctx->pc = 0x1F3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E2Cu;
        // 0x1f3e30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E34u;
        goto label_1f3e34;
    }
    ctx->pc = 0x1F3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E34u);
    ctx->pc = 0x1F3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E2Cu;
    // 0x1f3e30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC8u, 0x1F3E2Cu, 0x1F3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E34u;
label_1f3e34:
    // 0x1f3e34: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1f3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1f3e38:
    // 0x1f3e38: 0xc073478  jal         func_1CD1E0
label_1f3e3c:
    if (ctx->pc == 0x1F3E3Cu) {
        ctx->pc = 0x1F3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E38u;
        // 0x1f3e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E40u;
        goto label_1f3e40;
    }
    ctx->pc = 0x1F3E38u;
    SET_GPR_U32(ctx, 31, 0x1F3E40u);
    ctx->pc = 0x1F3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E38u;
    // 0x1f3e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F3E38u, 0x1F3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E40u;
label_1f3e40:
    // 0x1f3e40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f3e44:
    // 0x1f3e44: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f3e44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f3e48:
    // 0x1f3e48: 0xc460f404  lwc1        $f0, -0xBFC($v1)
    ctx->pc = 0x1f3e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e4c:
    // 0x1f3e4c: 0x24090128  addiu       $t1, $zero, 0x128
    ctx->pc = 0x1f3e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_1f3e50:
    // 0x1f3e50: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1f3e50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f3e54:
    // 0x1f3e54: 0x262575a0  addiu       $a1, $s1, 0x75A0
    ctx->pc = 0x1f3e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30112));
label_1f3e58:
    // 0x1f3e58: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1f3e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f3e5c:
    // 0x1f3e5c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f3e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f3e60:
    // 0x1f3e60: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f3e60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f3e64:
    // 0x1f3e64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3e68:
    // 0x1f3e68: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f3e68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f3e6c:
    // 0x1f3e6c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f3e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e70:
    // 0x1f3e70: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1f3e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f3e74:
    // 0x1f3e74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3e74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e78:
    // 0x1f3e78: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1f3e7c:
    // 0x1f3e7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3e7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e80:
    // 0x1f3e80: 0xe6760008  swc1        $f22, 0x8($s3)
    ctx->pc = 0x1f3e80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1f3e84:
    // 0x1f3e84: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1f3e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1f3e88:
    // 0x1f3e88: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3e8c:
    // 0x1f3e8c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f3e90:
    // 0x1f3e90: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f3e94:
    // 0x1f3e94: 0x40f809  jalr        $v0
label_1f3e98:
    if (ctx->pc == 0x1F3E98u) {
        ctx->pc = 0x1F3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E94u;
        // 0x1f3e98: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E9Cu;
        goto label_1f3e9c;
    }
    ctx->pc = 0x1F3E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3E9Cu);
        ctx->pc = 0x1F3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E94u;
        // 0x1f3e98: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3E94u, 0x1F3E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3E9Cu;
label_1f3e9c:
    // 0x1f3e9c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f3e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ea0:
    // 0x1f3ea0: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1f3ea4:
    if (ctx->pc == 0x1F3EA4u) {
        ctx->pc = 0x1F3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EA0u;
        // 0x1f3ea4: 0xae490098  sw          $t1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3EA8u;
        goto label_1f3ea8;
    }
    ctx->pc = 0x1F3EA0u;
    {
        const bool branch_taken_0x1f3ea0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ea0) {
            ctx->pc = 0x1F3EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3EA0u;
            // 0x1f3ea4: 0xae490098  sw          $t1, 0x98($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3EB8u;
            goto label_1f3eb8;
        }
    }
    ctx->pc = 0x1F3EA8u;
label_1f3ea8:
    // 0x1f3ea8: 0xc0705aa  jal         func_1C16A8
label_1f3eac:
    if (ctx->pc == 0x1F3EACu) {
        ctx->pc = 0x1F3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EA8u;
        // 0x1f3eac: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3EB0u;
        goto label_1f3eb0;
    }
    ctx->pc = 0x1F3EA8u;
    SET_GPR_U32(ctx, 31, 0x1F3EB0u);
    ctx->pc = 0x1F3EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EA8u;
    // 0x1f3eac: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1F3EA8u, 0x1F3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EB0u;
label_1f3eb0:
    // 0x1f3eb0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f3eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3eb4:
    // 0x1f3eb4: 0xae490098  sw          $t1, 0x98($s2)
    ctx->pc = 0x1f3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 9));
label_1f3eb8:
    // 0x1f3eb8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f3eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f3ebc:
    // 0x1f3ebc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1f3ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1f3ec0:
    // 0x1f3ec0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f3ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f3ec4:
    // 0x1f3ec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3ec8:
    // 0x1f3ec8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1f3ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f3ecc:
    // 0x1f3ecc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f3ed0:
    // 0x1f3ed0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f3ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ed4:
    // 0x1f3ed4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f3ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ed8:
    // 0x1f3ed8: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1f3ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1f3edc:
    // 0x1f3edc: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1f3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1f3ee0:
    // 0x1f3ee0: 0x40f809  jalr        $v0
label_1f3ee4:
    if (ctx->pc == 0x1F3EE4u) {
        ctx->pc = 0x1F3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EE0u;
        // 0x1f3ee4: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3EE8u;
        goto label_1f3ee8;
    }
    ctx->pc = 0x1F3EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3EE8u);
        ctx->pc = 0x1F3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EE0u;
        // 0x1f3ee4: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3EE0u, 0x1F3EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3EE8u;
label_1f3ee8:
    // 0x1f3ee8: 0x8e470098  lw          $a3, 0x98($s2)
    ctx->pc = 0x1f3ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f3eec:
    // 0x1f3eec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f3eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ef0:
    // 0x1f3ef0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3ef4:
    // 0x1f3ef4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f3ef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f3ef8:
    // 0x1f3ef8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f3efc:
    // 0x1f3efc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1f3efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1f3f00:
    // 0x1f3f00: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1f3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f3f04:
    // 0x1f3f04: 0x60f809  jalr        $v1
label_1f3f08:
    if (ctx->pc == 0x1F3F08u) {
        ctx->pc = 0x1F3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F04u;
        // 0x1f3f08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F0Cu;
        goto label_1f3f0c;
    }
    ctx->pc = 0x1F3F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3F0Cu);
        ctx->pc = 0x1F3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F04u;
        // 0x1f3f08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F04u, 0x1F3F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3F0Cu;
label_1f3f0c:
    // 0x1f3f0c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f3f10:
    // 0x1f3f10: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1f3f14:
    // 0x1f3f14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f3f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f3f18:
    // 0x1f3f18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3f1c:
    // 0x1f3f1c: 0xc480f408  lwc1        $f0, -0xBF8($a0)
    ctx->pc = 0x1f3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f20:
    // 0x1f3f20: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f3f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f3f24:
    // 0x1f3f24: 0x24a57530  addiu       $a1, $a1, 0x7530
    ctx->pc = 0x1f3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30000));
label_1f3f28:
    // 0x1f3f28: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f3f28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f3f2c:
    // 0x1f3f2c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f3f30:
    // 0x1f3f30: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1f3f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f3f34:
    // 0x1f3f34: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3f38:
    // 0x1f3f38: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1f3f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f3f3c:
    // 0x1f3f3c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f3f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f40:
    // 0x1f3f40: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1f3f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f3f44:
    // 0x1f3f44: 0x2409012e  addiu       $t1, $zero, 0x12E
    ctx->pc = 0x1f3f44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_1f3f48:
    // 0x1f3f48: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f3f4c:
    // 0x1f3f4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3f4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f50:
    // 0x1f3f50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3f50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f54:
    // 0x1f3f54: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3f58:
    // 0x1f3f58: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f3f5c:
    // 0x1f3f5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f3f60:
    // 0x1f3f60: 0x40f809  jalr        $v0
label_1f3f64:
    if (ctx->pc == 0x1F3F64u) {
        ctx->pc = 0x1F3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F60u;
        // 0x1f3f64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F68u;
        goto label_1f3f68;
    }
    ctx->pc = 0x1F3F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3F68u);
        ctx->pc = 0x1F3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F60u;
        // 0x1f3f64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F60u, 0x1F3F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3F68u;
label_1f3f68:
    // 0x1f3f68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f3f6c:
    if (ctx->pc == 0x1F3F6Cu) {
        ctx->pc = 0x1F3F70u;
        goto label_1f3f70;
    }
    ctx->pc = 0x1F3F68u;
    {
        const bool branch_taken_0x1f3f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f68) {
            ctx->pc = 0x1F3F78u;
            goto label_1f3f78;
        }
    }
    ctx->pc = 0x1F3F70u;
label_1f3f70:
    // 0x1f3f70: 0xc0733e2  jal         func_1CCF88
label_1f3f74:
    if (ctx->pc == 0x1F3F74u) {
        ctx->pc = 0x1F3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F70u;
        // 0x1f3f74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F78u;
        goto label_1f3f78;
    }
    ctx->pc = 0x1F3F70u;
    SET_GPR_U32(ctx, 31, 0x1F3F78u);
    ctx->pc = 0x1F3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F70u;
    // 0x1f3f74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F3F70u, 0x1F3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F78u;
label_1f3f78:
    // 0x1f3f78: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1f3f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1f3f7c:
    // 0x1f3f7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f3f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f3f80:
    // 0x1f3f80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f3f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f3f84:
    // 0x1f3f84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f3f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f3f88:
    // 0x1f3f88: 0xae420174  sw          $v0, 0x174($s2)
    ctx->pc = 0x1f3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 2));
label_1f3f8c:
    // 0x1f3f8c: 0xc05e602  jal         func_179808
label_1f3f90:
    if (ctx->pc == 0x1F3F90u) {
        ctx->pc = 0x1F3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F8Cu;
        // 0x1f3f90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F94u;
        goto label_1f3f94;
    }
    ctx->pc = 0x1F3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F94u);
    ctx->pc = 0x1F3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F8Cu;
    // 0x1f3f90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F3F8Cu, 0x1F3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F94u;
label_1f3f94:
    // 0x1f3f94: 0x8e4c0174  lw          $t4, 0x174($s2)
    ctx->pc = 0x1f3f94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1f3f98:
    // 0x1f3f98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f3f9c:
    // 0x1f3f9c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f3fa0:
    // 0x1f3fa0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f3fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fa4:
    // 0x1f3fa4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3fa8:
    // 0x1f3fa8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3fac:
    // 0x1f3fac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f3facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3fb0:
    // 0x1f3fb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f3fb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fb4:
    // 0x1f3fb4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f3fb8:
    // 0x1f3fb8: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f3fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f3fbc:
    // 0x1f3fbc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f3fc0:
    // 0x1f3fc0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f3fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fc4:
    // 0x1f3fc4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f3fc8:
    // 0x1f3fc8: 0x40f809  jalr        $v0
label_1f3fcc:
    if (ctx->pc == 0x1F3FCCu) {
        ctx->pc = 0x1F3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FC8u;
        // 0x1f3fcc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FD0u;
        goto label_1f3fd0;
    }
    ctx->pc = 0x1F3FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3FD0u);
        ctx->pc = 0x1F3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FC8u;
        // 0x1f3fcc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3FC8u, 0x1F3FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3FD0u;
label_1f3fd0:
    // 0x1f3fd0: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1f3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1f3fd4:
    // 0x1f3fd4: 0xc073478  jal         func_1CD1E0
label_1f3fd8:
    if (ctx->pc == 0x1F3FD8u) {
        ctx->pc = 0x1F3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FD4u;
        // 0x1f3fd8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FDCu;
        goto label_1f3fdc;
    }
    ctx->pc = 0x1F3FD4u;
    SET_GPR_U32(ctx, 31, 0x1F3FDCu);
    ctx->pc = 0x1F3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FD4u;
    // 0x1f3fd8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F3FD4u, 0x1F3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FDCu;
label_1f3fdc:
    // 0x1f3fdc: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f3fdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f3fe0:
    // 0x1f3fe0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f3fe4:
    // 0x1f3fe4: 0x24a575b8  addiu       $a1, $a1, 0x75B8
    ctx->pc = 0x1f3fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30136));
label_1f3fe8:
    // 0x1f3fe8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f3fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fec:
    // 0x1f3fec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3ff0:
    // 0x1f3ff0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1f3ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1f3ff4:
    // 0x1f3ff4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3ff8:
    // 0x1f3ff8: 0x24090134  addiu       $t1, $zero, 0x134
    ctx->pc = 0x1f3ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_1f3ffc:
    // 0x1f3ffc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3ffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f4000:
    // 0x1f4000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f4000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4004:
    // 0x1f4004: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f4008:
    // 0x1f4008: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f4008u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f400c:
    // 0x1f400c: 0x40f809  jalr        $v0
label_1f4010:
    if (ctx->pc == 0x1F4010u) {
        ctx->pc = 0x1F4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F400Cu;
        // 0x1f4010: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4014u;
        goto label_1f4014;
    }
    ctx->pc = 0x1F400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4014u);
        ctx->pc = 0x1F4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F400Cu;
        // 0x1f4010: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F400Cu, 0x1F4014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4014u;
label_1f4014:
    // 0x1f4014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4018:
    // 0x1f4018: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_1f401c:
    if (ctx->pc == 0x1F401Cu) {
        ctx->pc = 0x1F401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4018u;
        // 0x1f401c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4020u;
        goto label_1f4020;
    }
    ctx->pc = 0x1F4018u;
    {
        const bool branch_taken_0x1f4018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4018u;
        // 0x1f401c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4018) {
            ctx->pc = 0x1F4074u;
            goto label_1f4074;
        }
    }
    ctx->pc = 0x1F4020u;
label_1f4020:
    // 0x1f4020: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f4024:
    // 0x1f4024: 0xa3a30080  sb          $v1, 0x80($sp)
    ctx->pc = 0x1f4024u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 3));
label_1f4028:
    // 0x1f4028: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f4028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f402c:
    // 0x1f402c: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1f402cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1f4030:
    // 0x1f4030: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1f4030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1f4034:
    // 0x1f4034: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f4034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1f4038:
    // 0x1f4038: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f4038u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1f403c:
    // 0x1f403c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f403cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1f4040:
    // 0x1f4040: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f4040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f4044:
    // 0x1f4044: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1f4044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1f4048:
    // 0x1f4048: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f4048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f404c:
    // 0x1f404c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f404cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f4050:
    // 0x1f4050: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f4050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4054:
    // 0x1f4054: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x1f4054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f4058:
    // 0x1f4058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f405c:
    // 0x1f405c: 0xc4ccf414  lwc1        $f12, -0xBEC($a2)
    ctx->pc = 0x1f405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f4060:
    // 0x1f4060: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1f4060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1f4064:
    // 0x1f4064: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1f4064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1f4068:
    // 0x1f4068: 0xc0683f4  jal         func_1A0FD0
label_1f406c:
    if (ctx->pc == 0x1F406Cu) {
        ctx->pc = 0x1F406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4068u;
        // 0x1f406c: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4070u;
        goto label_1f4070;
    }
    ctx->pc = 0x1F4068u;
    SET_GPR_U32(ctx, 31, 0x1F4070u);
    ctx->pc = 0x1F406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4068u;
    // 0x1f406c: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1F4068u, 0x1F4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4070u;
label_1f4070:
    // 0x1f4070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4074:
    // 0x1f4074: 0xae440178  sw          $a0, 0x178($s2)
    ctx->pc = 0x1f4074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 4));
label_1f4078:
    // 0x1f4078: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f4078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f407c:
    // 0x1f407c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1f407cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1f4080:
    // 0x1f4080: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x1f4080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1f4084:
    // 0x1f4084: 0x27a30084  addiu       $v1, $sp, 0x84
    ctx->pc = 0x1f4084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1f4088:
    // 0x1f4088: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1f4088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f408c:
    // 0x1f408c: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x1f408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_1f4090:
    // 0x1f4090: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1f4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1f4094:
    // 0x1f4094: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4098:
    // 0x1f4098: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1f409c:
    // 0x1f409c: 0xac470054  sw          $a3, 0x54($v0)
    ctx->pc = 0x1f409cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 7));
label_1f40a0:
    // 0x1f40a0: 0x241400bf  addiu       $s4, $zero, 0xBF
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_1f40a4:
    // 0x1f40a4: 0xa3a50084  sb          $a1, 0x84($sp)
    ctx->pc = 0x1f40a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 5));
label_1f40a8:
    // 0x1f40a8: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1f40ac:
    // 0x1f40ac: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1f40acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1f40b0:
    // 0x1f40b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f40b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f40b4:
    // 0x1f40b4: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1f40b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_1f40b8:
    // 0x1f40b8: 0x264700d8  addiu       $a3, $s2, 0xD8
    ctx->pc = 0x1f40b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
label_1f40bc:
    // 0x1f40bc: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x1f40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
label_1f40c0:
    // 0x1f40c0: 0x264200dc  addiu       $v0, $s2, 0xDC
    ctx->pc = 0x1f40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 220));
label_1f40c4:
    // 0x1f40c4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f40c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1f40c8:
    // 0x1f40c8: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f40cc:
    // 0x1f40cc: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x1f40ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_1f40d0:
    // 0x1f40d0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f40d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f40d4:
    // 0x1f40d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f40d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1f40d8:
    // 0x1f40d8: 0x26500148  addiu       $s0, $s2, 0x148
    ctx->pc = 0x1f40d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
label_1f40dc:
    // 0x1f40dc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1f40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1f40e0:
    // 0x1f40e0: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x1f40e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_1f40e4:
    // 0x1f40e4: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1f40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1f40e8:
    // 0x1f40e8: 0x8e430178  lw          $v1, 0x178($s2)
    ctx->pc = 0x1f40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_1f40ec:
    // 0x1f40ec: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x1f40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_1f40f0:
    // 0x1f40f0: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1f40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_1f40f4:
    // 0x1f40f4: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f40f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f40f8:
    // 0x1f40f8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f40fc:
    // 0x1f40fc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1f40fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1f4100:
    // 0x1f4100: 0x24487540  addiu       $t0, $v0, 0x7540
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
label_1f4104:
    // 0x1f4104: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f4108:
    // 0x1f4108: 0x24c57578  addiu       $a1, $a2, 0x7578
    ctx->pc = 0x1f4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 30072));
label_1f410c:
    // 0x1f410c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f410cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f4110:
    // 0x1f4110: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f4110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f4114:
    // 0x1f4114: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f4114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f4118:
    // 0x1f4118: 0x2409013b  addiu       $t1, $zero, 0x13B
    ctx->pc = 0x1f4118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
label_1f411c:
    // 0x1f411c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f4120:
    // 0x1f4120: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f4120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4124:
    // 0x1f4124: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f4124u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4128:
    // 0x1f4128: 0x40f809  jalr        $v0
label_1f412c:
    if (ctx->pc == 0x1F412Cu) {
        ctx->pc = 0x1F412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4128u;
        // 0x1f412c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4130u;
        goto label_1f4130;
    }
    ctx->pc = 0x1F4128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4130u);
        ctx->pc = 0x1F412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4128u;
        // 0x1f412c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4128u, 0x1F4130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4130u;
label_1f4130:
    // 0x1f4130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f4134:
    if (ctx->pc == 0x1F4134u) {
        ctx->pc = 0x1F4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4130u;
        // 0x1f4134: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4138u;
        goto label_1f4138;
    }
    ctx->pc = 0x1F4130u;
    {
        const bool branch_taken_0x1f4130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4130u;
        // 0x1f4134: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4130) {
            ctx->pc = 0x1F4144u;
            goto label_1f4144;
        }
    }
    ctx->pc = 0x1F4138u;
label_1f4138:
    // 0x1f4138: 0xc0686fe  jal         func_1A1BF8
label_1f413c:
    if (ctx->pc == 0x1F413Cu) {
        ctx->pc = 0x1F413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4138u;
        // 0x1f413c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4140u;
        goto label_1f4140;
    }
    ctx->pc = 0x1F4138u;
    SET_GPR_U32(ctx, 31, 0x1F4140u);
    ctx->pc = 0x1F413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4138u;
    // 0x1f413c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F4138u, 0x1F4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4140u;
label_1f4140:
    // 0x1f4140: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f4144:
    // 0x1f4144: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f4148:
    // 0x1f4148: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f4148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f414c:
    // 0x1f414c: 0xc07d316  jal         func_1F4C58
label_1f4150:
    if (ctx->pc == 0x1F4150u) {
        ctx->pc = 0x1F4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F414Cu;
        // 0x1f4150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4154u;
        goto label_1f4154;
    }
    ctx->pc = 0x1F414Cu;
    SET_GPR_U32(ctx, 31, 0x1F4154u);
    ctx->pc = 0x1F4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F414Cu;
    // 0x1f4150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C58u, 0x1F414Cu, 0x1F4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4154u;
label_1f4154:
    // 0x1f4154: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f4158:
    // 0x1f4158: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1f4158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f415c:
    // 0x1f415c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f415cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f4160:
    // 0x1f4160: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f4164:
    // 0x1f4164: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f4164u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f4168:
    // 0x1f4168: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1f4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1f416c:
    // 0x1f416c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f4170:
    // 0x1f4170: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1f4170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1f4174:
    // 0x1f4174: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1f4174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1f4178:
    // 0x1f4178: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f417c:
    // 0x1f417c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4180:
    // 0x1f4180: 0xc480f418  lwc1        $f0, -0xBE8($a0)
    ctx->pc = 0x1f4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4184:
    // 0x1f4184: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f4184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4188:
    // 0x1f4188: 0x8e4a008c  lw          $t2, 0x8C($s2)
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f418c:
    // 0x1f418c: 0x35290017  ori         $t1, $t1, 0x17
    ctx->pc = 0x1f418cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23);
label_1f4190:
    // 0x1f4190: 0xa3b40088  sb          $s4, 0x88($sp)
    ctx->pc = 0x1f4190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 20));
label_1f4194:
    // 0x1f4194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f4194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4198:
    // 0x1f4198: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f419c:
    // 0x1f419c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f419cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f41a0:
    // 0x1f41a0: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x1f41a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
label_1f41a4:
    // 0x1f41a4: 0xa2340002  sb          $s4, 0x2($s1)
    ctx->pc = 0x1f41a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
label_1f41a8:
    // 0x1f41a8: 0xa2360003  sb          $s6, 0x3($s1)
    ctx->pc = 0x1f41a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 22));
label_1f41ac:
    // 0x1f41ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f41b0:
    // 0x1f41b0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1f41b4:
    // 0x1f41b4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f41b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f41b8:
    // 0x1f41b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1f41bc:
    // 0x1f41bc: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1f41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
label_1f41c0:
    // 0x1f41c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f41c4:
    // 0x1f41c4: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x1f41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_1f41c8:
    // 0x1f41c8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f41cc:
    // 0x1f41cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f41d0:
    // 0x1f41d0: 0x60f809  jalr        $v1
label_1f41d4:
    if (ctx->pc == 0x1F41D4u) {
        ctx->pc = 0x1F41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41D0u;
        // 0x1f41d4: 0xc44cf430  lwc1        $f12, -0xBD0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41D8u;
        goto label_1f41d8;
    }
    ctx->pc = 0x1F41D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F41D8u);
        ctx->pc = 0x1F41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41D0u;
        // 0x1f41d4: 0xc44cf430  lwc1        $f12, -0xBD0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F41D0u, 0x1F41D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F41D8u;
label_1f41d8:
    // 0x1f41d8: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x1f41d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f41dc:
    // 0x1f41dc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_1f41e0:
    if (ctx->pc == 0x1F41E0u) {
        ctx->pc = 0x1F41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41DCu;
        // 0x1f41e0: 0x8fcc27e4  lw          $t4, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41E4u;
        goto label_1f41e4;
    }
    ctx->pc = 0x1F41DCu;
    {
        const bool branch_taken_0x1f41dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41DCu;
        // 0x1f41e0: 0x8fcc27e4  lw          $t4, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41dc) {
            ctx->pc = 0x1F40F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f40f8;
        }
    }
    ctx->pc = 0x1F41E4u;
label_1f41e4:
    // 0x1f41e4: 0xc07f734  jal         func_1FDCD0
label_1f41e8:
    if (ctx->pc == 0x1F41E8u) {
        ctx->pc = 0x1F41ECu;
        goto label_1f41ec;
    }
    ctx->pc = 0x1F41E4u;
    SET_GPR_U32(ctx, 31, 0x1F41ECu);
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1F41E4u, 0x1F41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41ECu;
label_1f41ec:
    // 0x1f41ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f41ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f41f0:
    // 0x1f41f0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f41f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1f41f4:
    // 0x1f41f4: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1f41f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f41f8:
    // 0x1f41f8: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1f41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1f41fc:
    // 0x1f41fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f4200:
    // 0x1f4200: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f4200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f4204:
    // 0x1f4204: 0x24737540  addiu       $s3, $v1, 0x7540
    ctx->pc = 0x1f4204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 30016));
label_1f4208:
    // 0x1f4208: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1f4208u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f420c:
    // 0x1f420c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f4210:
    // 0x1f4210: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f4210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f4214:
    // 0x1f4214: 0x24a575c0  addiu       $a1, $a1, 0x75C0
    ctx->pc = 0x1f4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30144));
label_1f4218:
    // 0x1f4218: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x1f4218u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f421c:
    // 0x1f421c: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1f421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1f4220:
    // 0x1f4220: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f4224:
    // 0x1f4224: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f4224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f4228:
    // 0x1f4228: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1f4228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f422c:
    // 0x1f422c: 0x24090143  addiu       $t1, $zero, 0x143
    ctx->pc = 0x1f422cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
label_1f4230:
    // 0x1f4230: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f4230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f4234:
    // 0x1f4234: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f4234u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4238:
    // 0x1f4238: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f4238u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f423c:
    // 0x1f423c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f423cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f4240:
    // 0x1f4240: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f4244:
    // 0x1f4244: 0x40f809  jalr        $v0
label_1f4248:
    if (ctx->pc == 0x1F4248u) {
        ctx->pc = 0x1F4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4244u;
        // 0x1f4248: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F424Cu;
        goto label_1f424c;
    }
    ctx->pc = 0x1F4244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F424Cu);
        ctx->pc = 0x1F4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4244u;
        // 0x1f4248: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4244u, 0x1F424Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F424Cu;
label_1f424c:
    // 0x1f424c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f4250:
    if (ctx->pc == 0x1F4250u) {
        ctx->pc = 0x1F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F424Cu;
        // 0x1f4250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4254u;
        goto label_1f4254;
    }
    ctx->pc = 0x1F424Cu;
    {
        const bool branch_taken_0x1f424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F424Cu;
        // 0x1f4250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f424c) {
            ctx->pc = 0x1F4260u;
            goto label_1f4260;
        }
    }
    ctx->pc = 0x1F4254u;
label_1f4254:
    // 0x1f4254: 0xc073a9c  jal         func_1CEA70
label_1f4258:
    if (ctx->pc == 0x1F4258u) {
        ctx->pc = 0x1F4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4254u;
        // 0x1f4258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F425Cu;
        goto label_1f425c;
    }
    ctx->pc = 0x1F4254u;
    SET_GPR_U32(ctx, 31, 0x1F425Cu);
    ctx->pc = 0x1F4258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4254u;
    // 0x1f4258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1F4254u, 0x1F425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F425Cu;
label_1f425c:
    // 0x1f425c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f425cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4260:
    // 0x1f4260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4264:
    // 0x1f4264: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f4264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f4268:
    // 0x1f4268: 0xc073ad0  jal         func_1CEB40
label_1f426c:
    if (ctx->pc == 0x1F426Cu) {
        ctx->pc = 0x1F426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4268u;
        // 0x1f426c: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4270u;
        goto label_1f4270;
    }
    ctx->pc = 0x1F4268u;
    SET_GPR_U32(ctx, 31, 0x1F4270u);
    ctx->pc = 0x1F426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4268u;
    // 0x1f426c: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1F4268u, 0x1F4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4270u;
label_1f4270:
    // 0x1f4270: 0xc067b9c  jal         func_19EE70
label_1f4274:
    if (ctx->pc == 0x1F4274u) {
        ctx->pc = 0x1F4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4270u;
        // 0x1f4274: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4278u;
        goto label_1f4278;
    }
    ctx->pc = 0x1F4270u;
    SET_GPR_U32(ctx, 31, 0x1F4278u);
    ctx->pc = 0x1F4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4270u;
    // 0x1f4274: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F4270u, 0x1F4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4278u;
label_1f4278:
    // 0x1f4278: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1f4278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1f427c:
    // 0x1f427c: 0xc073b0a  jal         func_1CEC28
label_1f4280:
    if (ctx->pc == 0x1F4280u) {
        ctx->pc = 0x1F4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F427Cu;
        // 0x1f4280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4284u;
        goto label_1f4284;
    }
    ctx->pc = 0x1F427Cu;
    SET_GPR_U32(ctx, 31, 0x1F4284u);
    ctx->pc = 0x1F4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F427Cu;
    // 0x1f4280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1F427Cu, 0x1F4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4284u;
label_1f4284:
    // 0x1f4284: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1f4284u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f4288:
    // 0x1f4288: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1f4288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1f428c:
    // 0x1f428c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f428cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f4290:
    // 0x1f4290: 0x248575a0  addiu       $a1, $a0, 0x75A0
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 30112));
label_1f4294:
    // 0x1f4294: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x1f4294u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f4298:
    // 0x1f4298: 0x24090149  addiu       $t1, $zero, 0x149
    ctx->pc = 0x1f4298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
label_1f429c:
    // 0x1f429c: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x1f429cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f42a0:
    // 0x1f42a0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f42a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f42a4:
    // 0x1f42a4: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f42a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f42a8:
    // 0x1f42a8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f42a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f42ac:
    // 0x1f42ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1f42acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f42b0:
    // 0x1f42b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f42b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f42b4:
    // 0x1f42b4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f42b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f42b8:
    // 0x1f42b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f42b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f42bc:
    // 0x1f42bc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f42bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f42c0:
    // 0x1f42c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f42c4:
    // 0x1f42c4: 0x40f809  jalr        $v0
label_1f42c8:
    if (ctx->pc == 0x1F42C8u) {
        ctx->pc = 0x1F42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C4u;
        // 0x1f42c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42CCu;
        goto label_1f42cc;
    }
    ctx->pc = 0x1F42C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F42CCu);
        ctx->pc = 0x1F42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C4u;
        // 0x1f42c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F42C4u, 0x1F42CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F42CCu;
label_1f42cc:
    // 0x1f42cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f42ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f42d0:
    // 0x1f42d0: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1f42d4:
    if (ctx->pc == 0x1F42D4u) {
        ctx->pc = 0x1F42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D0u;
        // 0x1f42d4: 0xae4900a8  sw          $t1, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42D8u;
        goto label_1f42d8;
    }
    ctx->pc = 0x1F42D0u;
    {
        const bool branch_taken_0x1f42d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f42d0) {
            ctx->pc = 0x1F42D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F42D0u;
            // 0x1f42d4: 0xae4900a8  sw          $t1, 0xA8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F42E8u;
            goto label_1f42e8;
        }
    }
    ctx->pc = 0x1F42D8u;
label_1f42d8:
    // 0x1f42d8: 0xc0705aa  jal         func_1C16A8
label_1f42dc:
    if (ctx->pc == 0x1F42DCu) {
        ctx->pc = 0x1F42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D8u;
        // 0x1f42dc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42E0u;
        goto label_1f42e0;
    }
    ctx->pc = 0x1F42D8u;
    SET_GPR_U32(ctx, 31, 0x1F42E0u);
    ctx->pc = 0x1F42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F42D8u;
    // 0x1f42dc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1F42D8u, 0x1F42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42E0u;
label_1f42e0:
    // 0x1f42e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f42e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f42e4:
    // 0x1f42e4: 0xae4900a8  sw          $t1, 0xA8($s2)
    ctx->pc = 0x1f42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 9));
label_1f42e8:
    // 0x1f42e8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f42ec:
    // 0x1f42ec: 0x245475d8  addiu       $s4, $v0, 0x75D8
    ctx->pc = 0x1f42ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30168));
label_1f42f0:
    // 0x1f42f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1f42f4:
    // 0x1f42f4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f42f8:
    // 0x1f42f8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f42f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f42fc:
    // 0x1f42fc: 0x8ca6d310  lw          $a2, -0x2CF0($a1)
    ctx->pc = 0x1f42fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955792)));
label_1f4300:
    // 0x1f4300: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f4304:
    // 0x1f4304: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1f4308:
    // 0x1f4308: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f4308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f430c:
    // 0x1f430c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1f430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1f4310:
    // 0x1f4310: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f4310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1f4314:
    // 0x1f4314: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1f4314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1f4318:
    // 0x1f4318: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f4318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f431c:
    // 0x1f431c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f431cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f4320:
    // 0x1f4320: 0x40f809  jalr        $v0
label_1f4324:
    if (ctx->pc == 0x1F4324u) {
        ctx->pc = 0x1F4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4320u;
        // 0x1f4324: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4328u;
        goto label_1f4328;
    }
    ctx->pc = 0x1F4320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4328u);
        ctx->pc = 0x1F4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4320u;
        // 0x1f4324: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4320u, 0x1F4328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4328u;
label_1f4328:
    // 0x1f4328: 0x8e5100a8  lw          $s1, 0xA8($s2)
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_1f432c:
    // 0x1f432c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1f432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1f4330:
    // 0x1f4330: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f4330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f4334:
    // 0x1f4334: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x1f4334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_1f4338:
    // 0x1f4338: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1f4338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1f433c:
    // 0x1f433c: 0xc067b9c  jal         func_19EE70
label_1f4340:
    if (ctx->pc == 0x1F4340u) {
        ctx->pc = 0x1F4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F433Cu;
        // 0x1f4340: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4344u;
        goto label_1f4344;
    }
    ctx->pc = 0x1F433Cu;
    SET_GPR_U32(ctx, 31, 0x1F4344u);
    ctx->pc = 0x1F4340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F433Cu;
    // 0x1f4340: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F433Cu, 0x1F4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4344u;
label_1f4344:
    // 0x1f4344: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f4344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4348:
    // 0x1f4348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f434c:
    // 0x1f434c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1f434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1f4350:
    // 0x1f4350: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f4350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f4354:
    // 0x1f4354: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4358:
    // 0x1f4358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f435c:
    // 0x1f435c: 0x60f809  jalr        $v1
label_1f4360:
    if (ctx->pc == 0x1F4360u) {
        ctx->pc = 0x1F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F435Cu;
        // 0x1f4360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4364u;
        goto label_1f4364;
    }
    ctx->pc = 0x1F435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4364u);
        ctx->pc = 0x1F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F435Cu;
        // 0x1f4360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F435Cu, 0x1F4364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4364u;
label_1f4364:
    // 0x1f4364: 0x8e4600a8  lw          $a2, 0xA8($s2)
    ctx->pc = 0x1f4364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_1f4368:
    // 0x1f4368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f436c:
    // 0x1f436c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4370:
    // 0x1f4370: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f4370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f4374:
    // 0x1f4374: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f4374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f4378:
    // 0x1f4378: 0x60f809  jalr        $v1
label_1f437c:
    if (ctx->pc == 0x1F437Cu) {
        ctx->pc = 0x1F437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4378u;
        // 0x1f437c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4380u;
        goto label_1f4380;
    }
    ctx->pc = 0x1F4378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4380u);
        ctx->pc = 0x1F437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4378u;
        // 0x1f437c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4378u, 0x1F4380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4380u;
label_1f4380:
    // 0x1f4380: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f4384:
    // 0x1f4384: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f4384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f4388:
    // 0x1f4388: 0x244475d0  addiu       $a0, $v0, 0x75D0
    ctx->pc = 0x1f4388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30160));
label_1f438c:
    // 0x1f438c: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x1f438cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f4390:
    // 0x1f4390: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x1f4390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f4394:
    // 0x1f4394: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1f4394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f4398:
    // 0x1f4398: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1f4398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f439c:
    // 0x1f439c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f439cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f43a0:
    // 0x1f43a0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f43a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f43a4:
    // 0x1f43a4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f43a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f43a8:
    // 0x1f43a8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f43ac:
    // 0x1f43ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1f43acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f43b0:
    // 0x1f43b0: 0x24090152  addiu       $t1, $zero, 0x152
    ctx->pc = 0x1f43b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_1f43b4:
    // 0x1f43b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f43b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f43b8:
    // 0x1f43b8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f43b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f43bc:
    // 0x1f43bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f43bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f43c0:
    // 0x1f43c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f43c4:
    // 0x1f43c4: 0x40f809  jalr        $v0
label_1f43c8:
    if (ctx->pc == 0x1F43C8u) {
        ctx->pc = 0x1F43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43C4u;
        // 0x1f43c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F43CCu;
        goto label_1f43cc;
    }
    ctx->pc = 0x1F43C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F43CCu);
        ctx->pc = 0x1F43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43C4u;
        // 0x1f43c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F43C4u, 0x1F43CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F43CCu;
label_1f43cc:
    // 0x1f43cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f43d0:
    if (ctx->pc == 0x1F43D0u) {
        ctx->pc = 0x1F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43CCu;
        // 0x1f43d0: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F43D4u;
        goto label_1f43d4;
    }
    ctx->pc = 0x1F43CCu;
    {
        const bool branch_taken_0x1f43cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f43cc) {
            ctx->pc = 0x1F43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F43CCu;
            // 0x1f43d0: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F43E0u;
            goto label_1f43e0;
        }
    }
    ctx->pc = 0x1F43D4u;
label_1f43d4:
    // 0x1f43d4: 0xc074fbc  jal         func_1D3EF0
label_1f43d8:
    if (ctx->pc == 0x1F43D8u) {
        ctx->pc = 0x1F43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43D4u;
        // 0x1f43d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F43DCu;
        goto label_1f43dc;
    }
    ctx->pc = 0x1F43D4u;
    SET_GPR_U32(ctx, 31, 0x1F43DCu);
    ctx->pc = 0x1F43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43D4u;
    // 0x1f43d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1F43D4u, 0x1F43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43DCu;
label_1f43dc:
    // 0x1f43dc: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x1f43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
label_1f43e0:
    // 0x1f43e0: 0xc07f730  jal         func_1FDCC0
label_1f43e4:
    if (ctx->pc == 0x1F43E4u) {
        ctx->pc = 0x1F43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43E0u;
        // 0x1f43e4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F43E8u;
        goto label_1f43e8;
    }
    ctx->pc = 0x1F43E0u;
    SET_GPR_U32(ctx, 31, 0x1F43E8u);
    ctx->pc = 0x1F43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43E0u;
    // 0x1f43e4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCC0u, 0x1F43E0u, 0x1F43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43E8u;
label_1f43e8:
    // 0x1f43e8: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1f43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f43ec:
    // 0x1f43ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f43ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f43f0:
    // 0x1f43f0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1f43f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f43f4:
    // 0x1f43f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f43f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f43f8:
    // 0x1f43f8: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x1f43f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f43fc:
    // 0x1f43fc: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1f43fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f4400:
    // 0x1f4400: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1f4400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f4404:
    // 0x1f4404: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x1f4404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1f4408:
    // 0x1f4408: 0xc075044  jal         func_1D4110
label_1f440c:
    if (ctx->pc == 0x1F440Cu) {
        ctx->pc = 0x1F440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4408u;
        // 0x1f440c: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4410u;
        goto label_1f4410;
    }
    ctx->pc = 0x1F4408u;
    SET_GPR_U32(ctx, 31, 0x1F4410u);
    ctx->pc = 0x1F440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4408u;
    // 0x1f440c: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1F4408u, 0x1F4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4410u;
label_1f4410:
    // 0x1f4410: 0xc067b9c  jal         func_19EE70
label_1f4414:
    if (ctx->pc == 0x1F4414u) {
        ctx->pc = 0x1F4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4410u;
        // 0x1f4414: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4418u;
        goto label_1f4418;
    }
    ctx->pc = 0x1F4410u;
    SET_GPR_U32(ctx, 31, 0x1F4418u);
    ctx->pc = 0x1F4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4410u;
    // 0x1f4414: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F4410u, 0x1F4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4418u;
label_1f4418:
    // 0x1f4418: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f4418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f441c:
    // 0x1f441c: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1f441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f4420:
    // 0x1f4420: 0x8c76d320  lw          $s6, -0x2CE0($v1)
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1f4424:
    // 0x1f4424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4428:
    // 0x1f4428: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1f4428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_1f442c:
    // 0x1f442c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f442cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f4430:
    // 0x1f4430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4434:
    // 0x1f4434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4438:
    // 0x1f4438: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f4438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f443c:
    // 0x1f443c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f443cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4440:
    // 0x1f4440: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1f4440u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f4444:
    // 0x1f4444: 0xc07508c  jal         func_1D4230
label_1f4448:
    if (ctx->pc == 0x1F4448u) {
        ctx->pc = 0x1F4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4444u;
        // 0x1f4448: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F444Cu;
        goto label_1f444c;
    }
    ctx->pc = 0x1F4444u;
    SET_GPR_U32(ctx, 31, 0x1F444Cu);
    ctx->pc = 0x1F4448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4444u;
    // 0x1f4448: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F4444u, 0x1F444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F444Cu;
label_1f444c:
    // 0x1f444c: 0xc067b9c  jal         func_19EE70
label_1f4450:
    if (ctx->pc == 0x1F4450u) {
        ctx->pc = 0x1F4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F444Cu;
        // 0x1f4450: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4454u;
        goto label_1f4454;
    }
    ctx->pc = 0x1F444Cu;
    SET_GPR_U32(ctx, 31, 0x1F4454u);
    ctx->pc = 0x1F4450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F444Cu;
    // 0x1f4450: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F444Cu, 0x1F4454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4454u;
label_1f4454:
    // 0x1f4454: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1f4454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f4458:
    // 0x1f4458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f445c:
    // 0x1f445c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f445cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4460:
    // 0x1f4460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4464:
    // 0x1f4464: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f4464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f4468:
    // 0x1f4468: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f4468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f446c:
    // 0x1f446c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1f446cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f4470:
    // 0x1f4470: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1f4470u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f4474:
    // 0x1f4474: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1f4474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_1f4478:
    // 0x1f4478: 0xc07508c  jal         func_1D4230
label_1f447c:
    if (ctx->pc == 0x1F447Cu) {
        ctx->pc = 0x1F447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4478u;
        // 0x1f447c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4480u;
        goto label_1f4480;
    }
    ctx->pc = 0x1F4478u;
    SET_GPR_U32(ctx, 31, 0x1F4480u);
    ctx->pc = 0x1F447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4478u;
    // 0x1f447c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F4478u, 0x1F4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4480u;
label_1f4480:
    // 0x1f4480: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x1f4480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f4484:
    // 0x1f4484: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4488:
    // 0x1f4488: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f4488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f448c:
    // 0x1f448c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f4490:
    // 0x1f4490: 0x60f809  jalr        $v1
label_1f4494:
    if (ctx->pc == 0x1F4494u) {
        ctx->pc = 0x1F4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4490u;
        // 0x1f4494: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4498u;
        goto label_1f4498;
    }
    ctx->pc = 0x1F4490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4498u);
        ctx->pc = 0x1F4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4490u;
        // 0x1f4494: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4490u, 0x1F4498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4498u;
label_1f4498:
    // 0x1f4498: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f4498u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f449c:
    // 0x1f449c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f44a0:
    // 0x1f44a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1f44a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f44a4:
    // 0x1f44a4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f44a8:
    // 0x1f44a8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f44ac:
    // 0x1f44ac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f44acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f44b0:
    // 0x1f44b0: 0x2409015a  addiu       $t1, $zero, 0x15A
    ctx->pc = 0x1f44b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
label_1f44b4:
    // 0x1f44b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f44b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f44b8:
    // 0x1f44b8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f44bc:
    // 0x1f44bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f44bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f44c0:
    // 0x1f44c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f44c4:
    // 0x1f44c4: 0x40f809  jalr        $v0
label_1f44c8:
    if (ctx->pc == 0x1F44C8u) {
        ctx->pc = 0x1F44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44C4u;
        // 0x1f44c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F44CCu;
        goto label_1f44cc;
    }
    ctx->pc = 0x1F44C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F44CCu);
        ctx->pc = 0x1F44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44C4u;
        // 0x1f44c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F44C4u, 0x1F44CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F44CCu;
label_1f44cc:
    // 0x1f44cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f44d0:
    if (ctx->pc == 0x1F44D0u) {
        ctx->pc = 0x1F44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44CCu;
        // 0x1f44d0: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F44D4u;
        goto label_1f44d4;
    }
    ctx->pc = 0x1F44CCu;
    {
        const bool branch_taken_0x1f44cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44CCu;
        // 0x1f44d0: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f44cc) {
            ctx->pc = 0x1F44E0u;
            goto label_1f44e0;
        }
    }
    ctx->pc = 0x1F44D4u;
label_1f44d4:
    // 0x1f44d4: 0xc074fbc  jal         func_1D3EF0
label_1f44d8:
    if (ctx->pc == 0x1F44D8u) {
        ctx->pc = 0x1F44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44D4u;
        // 0x1f44d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F44DCu;
        goto label_1f44dc;
    }
    ctx->pc = 0x1F44D4u;
    SET_GPR_U32(ctx, 31, 0x1F44DCu);
    ctx->pc = 0x1F44D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F44D4u;
    // 0x1f44d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1F44D4u, 0x1F44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F44DCu;
label_1f44dc:
    // 0x1f44dc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1f44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f44e0:
    // 0x1f44e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f44e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f44e4:
    // 0x1f44e4: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x1f44e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1f44e8:
    // 0x1f44e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f44e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f44ec:
    // 0x1f44ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f44ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f44f0:
    // 0x1f44f0: 0xc075044  jal         func_1D4110
label_1f44f4:
    if (ctx->pc == 0x1F44F4u) {
        ctx->pc = 0x1F44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44F0u;
        // 0x1f44f4: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F44F8u;
        goto label_1f44f8;
    }
    ctx->pc = 0x1F44F0u;
    SET_GPR_U32(ctx, 31, 0x1F44F8u);
    ctx->pc = 0x1F44F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F44F0u;
    // 0x1f44f4: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1F44F0u, 0x1F44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F44F8u;
label_1f44f8:
    // 0x1f44f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f44f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f44fc:
    // 0x1f44fc: 0x8fb3008c  lw          $s3, 0x8C($sp)
    ctx->pc = 0x1f44fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1f4500:
    // 0x1f4500: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f4504:
    // 0x1f4504: 0x8fb10094  lw          $s1, 0x94($sp)
    ctx->pc = 0x1f4504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1f4508:
    // 0x1f4508: 0xc067b9c  jal         func_19EE70
label_1f450c:
    if (ctx->pc == 0x1F450Cu) {
        ctx->pc = 0x1F450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4508u;
        // 0x1f450c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4510u;
        goto label_1f4510;
    }
    ctx->pc = 0x1F4508u;
    SET_GPR_U32(ctx, 31, 0x1F4510u);
    ctx->pc = 0x1F450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4508u;
    // 0x1f450c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F4508u, 0x1F4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4510u;
label_1f4510:
    // 0x1f4510: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f4510u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4514:
    // 0x1f4514: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1f4514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f4518:
    // 0x1f4518: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1f4518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f451c:
    // 0x1f451c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1f451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_1f4520:
    // 0x1f4520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4524:
    // 0x1f4524: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x1f4524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1f4528:
    // 0x1f4528: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f4528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f452c:
    // 0x1f452c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f452cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4530:
    // 0x1f4530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4534:
    // 0x1f4534: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f4534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f4538:
    // 0x1f4538: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f453c:
    // 0x1f453c: 0xc07508c  jal         func_1D4230
label_1f4540:
    if (ctx->pc == 0x1F4540u) {
        ctx->pc = 0x1F4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F453Cu;
        // 0x1f4540: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4544u;
        goto label_1f4544;
    }
    ctx->pc = 0x1F453Cu;
    SET_GPR_U32(ctx, 31, 0x1F4544u);
    ctx->pc = 0x1F4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F453Cu;
    // 0x1f4540: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F453Cu, 0x1F4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4544u;
label_1f4544:
    // 0x1f4544: 0xc067b9c  jal         func_19EE70
label_1f4548:
    if (ctx->pc == 0x1F4548u) {
        ctx->pc = 0x1F4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4544u;
        // 0x1f4548: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F454Cu;
        goto label_1f454c;
    }
    ctx->pc = 0x1F4544u;
    SET_GPR_U32(ctx, 31, 0x1F454Cu);
    ctx->pc = 0x1F4548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4544u;
    // 0x1f4548: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F4544u, 0x1F454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F454Cu;
label_1f454c:
    // 0x1f454c: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1f454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f4550:
    // 0x1f4550: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1f4550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f4554:
    // 0x1f4554: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1f4554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_1f4558:
    // 0x1f4558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f455c:
    // 0x1f455c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f455cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4560:
    // 0x1f4560: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f4560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f4564:
    // 0x1f4564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4568:
    // 0x1f4568: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f456c:
    // 0x1f456c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f456cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4570:
    // 0x1f4570: 0xc07508c  jal         func_1D4230
label_1f4574:
    if (ctx->pc == 0x1F4574u) {
        ctx->pc = 0x1F4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4570u;
        // 0x1f4574: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4578u;
        goto label_1f4578;
    }
    ctx->pc = 0x1F4570u;
    SET_GPR_U32(ctx, 31, 0x1F4578u);
    ctx->pc = 0x1F4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4570u;
    // 0x1f4574: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F4570u, 0x1F4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4578u;
label_1f4578:
    // 0x1f4578: 0x265700d8  addiu       $s7, $s2, 0xD8
    ctx->pc = 0x1f4578u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
label_1f457c:
    // 0x1f457c: 0x8e4600a0  lw          $a2, 0xA0($s2)
    ctx->pc = 0x1f457cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f4580:
    // 0x1f4580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4584:
    // 0x1f4584: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x1f4584u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4588:
    // 0x1f4588: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f4588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f458c:
    // 0x1f458c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f458cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f4590:
    // 0x1f4590: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f4594:
    // 0x1f4594: 0x60f809  jalr        $v1
label_1f4598:
    if (ctx->pc == 0x1F4598u) {
        ctx->pc = 0x1F4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4594u;
        // 0x1f4598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F459Cu;
        goto label_1f459c;
    }
    ctx->pc = 0x1F4594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F459Cu);
        ctx->pc = 0x1F4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4594u;
        // 0x1f4598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4594u, 0x1F459Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F459Cu;
label_1f459c:
    // 0x1f459c: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1f459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f45a0:
    // 0x1f45a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f45a4:
    // 0x1f45a4: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1f45a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1f45a8:
    // 0x1f45a8: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1f45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1f45ac:
    // 0x1f45ac: 0x60f809  jalr        $v1
label_1f45b0:
    if (ctx->pc == 0x1F45B0u) {
        ctx->pc = 0x1F45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45ACu;
        // 0x1f45b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F45B4u;
        goto label_1f45b4;
    }
    ctx->pc = 0x1F45ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F45B4u);
        ctx->pc = 0x1F45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45ACu;
        // 0x1f45b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F45ACu, 0x1F45B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F45B4u;
label_1f45b4:
    // 0x1f45b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f45b8:
    // 0x1f45b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f45b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f45bc:
    // 0x1f45bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f45bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1f45c0:
    // 0x1f45c0: 0xc047e6c  jal         func_11F9B0
label_1f45c4:
    if (ctx->pc == 0x1F45C4u) {
        ctx->pc = 0x1F45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45C0u;
        // 0x1f45c4: 0xae4200ac  sw          $v0, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F45C8u;
        goto label_1f45c8;
    }
    ctx->pc = 0x1F45C0u;
    SET_GPR_U32(ctx, 31, 0x1F45C8u);
    ctx->pc = 0x1F45C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45C0u;
    // 0x1f45c4: 0xae4200ac  sw          $v0, 0xAC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F45C0u, 0x1F45C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45C8u;
label_1f45c8:
    // 0x1f45c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f45cc:
    // 0x1f45cc: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1f45ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1f45d0:
    // 0x1f45d0: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1f45d4:
    // 0x1f45d4: 0xa0f809  jalr        $a1
label_1f45d8:
    if (ctx->pc == 0x1F45D8u) {
        ctx->pc = 0x1F45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45D4u;
        // 0x1f45d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F45DCu;
        goto label_1f45dc;
    }
    ctx->pc = 0x1F45D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F45DCu);
        ctx->pc = 0x1F45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45D4u;
        // 0x1f45d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F45D4u, 0x1F45DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F45DCu;
label_1f45dc:
    // 0x1f45dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1f45dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f45e0:
    // 0x1f45e0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1f45e4:
    // 0x1f45e4: 0xc0cd7d2  jal         func_335F48
label_1f45e8:
    if (ctx->pc == 0x1F45E8u) {
        ctx->pc = 0x1F45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45E4u;
        // 0x1f45e8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F45ECu;
        goto label_1f45ec;
    }
    ctx->pc = 0x1F45E4u;
    SET_GPR_U32(ctx, 31, 0x1F45ECu);
    ctx->pc = 0x1F45E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45E4u;
    // 0x1f45e8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x1F45E4u, 0x1F45ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45ECu;
label_1f45ec:
    // 0x1f45ec: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f45ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1f45f0:
    // 0x1f45f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f45f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1f45f4:
    // 0x1f45f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f45f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f45f8:
    // 0x1f45f8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f45f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f45fc:
    // 0x1f45fc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1f45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_1f4600:
    // 0x1f4600: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1f4600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1f4604:
    // 0x1f4604: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f4604u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f4608:
    // 0x1f4608: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f4608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1f460c:
    // 0x1f460c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1f460cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1f4610:
    // 0x1f4610: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4614:
    // 0x1f4614: 0xc4a0f420  lwc1        $f0, -0xBE0($a1)
    ctx->pc = 0x1f4614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4618:
    // 0x1f4618: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f4618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f461c:
    // 0x1f461c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f4620:
    // 0x1f4620: 0xc4c0f424  lwc1        $f0, -0xBDC($a2)
    ctx->pc = 0x1f4620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4624:
    // 0x1f4624: 0xe64100b0  swc1        $f1, 0xB0($s2)
    ctx->pc = 0x1f4624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
label_1f4628:
    // 0x1f4628: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f4628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f462c:
    // 0x1f462c: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x1f462cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f4630:
    // 0x1f4630: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x1f4630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f4634:
    // 0x1f4634: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1f4634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1f4638:
    // 0x1f4638: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x1f4638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f463c:
    // 0x1f463c: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x1f463cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f4640:
    // 0x1f4640: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1f4640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1f4644:
    // 0x1f4644: 0x0  nop
    ctx->pc = 0x1f4644u;
    // NOP
label_1f4648:
    // 0x1f4648: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1f4648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_1f464c:
    // 0x1f464c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1f4650:
    if (ctx->pc == 0x1F4650u) {
        ctx->pc = 0x1F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F464Cu;
        // 0x1f4650: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4654u;
        goto label_1f4654;
    }
    ctx->pc = 0x1F464Cu;
    {
        const bool branch_taken_0x1f464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F464Cu;
        // 0x1f4650: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f464c) {
            ctx->pc = 0x1F46B4u;
            goto label_1f46b4;
        }
    }
    ctx->pc = 0x1F4654u;
label_1f4654:
    // 0x1f4654: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f4654u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f4658:
    // 0x1f4658: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f465c:
    // 0x1f465c: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
label_1f4660:
    if (ctx->pc == 0x1F4660u) {
        ctx->pc = 0x1F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F465Cu;
        // 0x1f4660: 0x24c5f428  addiu       $a1, $a2, -0xBD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4664u;
        goto label_1f4664;
    }
    ctx->pc = 0x1F465Cu;
    {
        const bool branch_taken_0x1f465c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F465Cu;
        // 0x1f4660: 0x24c5f428  addiu       $a1, $a2, -0xBD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f465c) {
            ctx->pc = 0x1F4678u;
            goto label_1f4678;
        }
    }
    ctx->pc = 0x1F4664u;
label_1f4664:
    // 0x1f4664: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x1f4664u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4668:
    // 0x1f4668: 0x0  nop
    ctx->pc = 0x1f4668u;
    // NOP
label_1f466c:
    // 0x1f466c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f466cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f4670:
    // 0x1f4670: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f4674:
    if (ctx->pc == 0x1F4674u) {
        ctx->pc = 0x1F4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4670u;
        // 0x1f4674: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4678u;
        goto label_1f4678;
    }
    ctx->pc = 0x1F4670u;
    {
        const bool branch_taken_0x1f4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4670u;
        // 0x1f4674: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4670) {
            ctx->pc = 0x1F4698u;
            goto label_1f4698;
        }
    }
    ctx->pc = 0x1F4678u;
label_1f4678:
    // 0x1f4678: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x1f4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1f467c:
    // 0x1f467c: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_1f4680:
    // 0x1f4680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f4680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f4684:
    // 0x1f4684: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f4684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4688:
    // 0x1f4688: 0x0  nop
    ctx->pc = 0x1f4688u;
    // NOP
label_1f468c:
    // 0x1f468c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f468cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f4690:
    // 0x1f4690: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1f4690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1f4694:
    // 0x1f4694: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f4694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4698:
    // 0x1f4698: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1f4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f469c:
    // 0x1f469c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f469cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1f46a0:
    // 0x1f46a0: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1f46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f46a4:
    // 0x1f46a4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1f46a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f46a8:
    // 0x1f46a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f46a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f46ac:
    // 0x1f46ac: 0x10000019  b           . + 4 + (0x19 << 2)
label_1f46b0:
    if (ctx->pc == 0x1F46B0u) {
        ctx->pc = 0x1F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46ACu;
        // 0x1f46b0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F46B4u;
        goto label_1f46b4;
    }
    ctx->pc = 0x1F46ACu;
    {
        const bool branch_taken_0x1f46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46ACu;
        // 0x1f46b0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46ac) {
            ctx->pc = 0x1F4714u;
            goto label_1f4714;
        }
    }
    ctx->pc = 0x1F46B4u;
label_1f46b4:
    // 0x1f46b4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f46b8:
    // 0x1f46b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f46b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f46bc:
    // 0x1f46bc: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_1f46c0:
    if (ctx->pc == 0x1F46C0u) {
        ctx->pc = 0x1F46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46BCu;
        // 0x1f46c0: 0x24e5f428  addiu       $a1, $a3, -0xBD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F46C4u;
        goto label_1f46c4;
    }
    ctx->pc = 0x1F46BCu;
    {
        const bool branch_taken_0x1f46bc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1F46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46BCu;
        // 0x1f46c0: 0x24e5f428  addiu       $a1, $a3, -0xBD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46bc) {
            ctx->pc = 0x1F46D8u;
            goto label_1f46d8;
        }
    }
    ctx->pc = 0x1F46C4u;
label_1f46c4:
    // 0x1f46c4: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x1f46c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f46c8:
    // 0x1f46c8: 0x0  nop
    ctx->pc = 0x1f46c8u;
    // NOP
label_1f46cc:
    // 0x1f46cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f46ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f46d0:
    // 0x1f46d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f46d4:
    if (ctx->pc == 0x1F46D4u) {
        ctx->pc = 0x1F46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46D0u;
        // 0x1f46d4: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F46D8u;
        goto label_1f46d8;
    }
    ctx->pc = 0x1F46D0u;
    {
        const bool branch_taken_0x1f46d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46D0u;
        // 0x1f46d4: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46d0) {
            ctx->pc = 0x1F46F8u;
            goto label_1f46f8;
        }
    }
    ctx->pc = 0x1F46D8u;
label_1f46d8:
    // 0x1f46d8: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1f46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_1f46dc:
    // 0x1f46dc: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x1f46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_1f46e0:
    // 0x1f46e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f46e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f46e4:
    // 0x1f46e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f46e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f46e8:
    // 0x1f46e8: 0x0  nop
    ctx->pc = 0x1f46e8u;
    // NOP
label_1f46ec:
    // 0x1f46ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f46ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f46f0:
    // 0x1f46f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1f46f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1f46f4:
    // 0x1f46f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1f46f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f46f8:
    // 0x1f46f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f46f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f46fc:
    // 0x1f46fc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1f46fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4700:
    // 0x1f4700: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f4700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f4704:
    // 0x1f4704: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1f4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f4708:
    // 0x1f4708: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1f4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f470c:
    // 0x1f470c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f470cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f4710:
    // 0x1f4710: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f4710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f4714:
    // 0x1f4714: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1f4714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f4718:
    // 0x1f4718: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x1f4718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f471c:
    // 0x1f471c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4720:
    // 0x1f4720: 0xc046e0e  jal         func_11B838
label_1f4724:
    if (ctx->pc == 0x1F4724u) {
        ctx->pc = 0x1F4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4720u;
        // 0x1f4724: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4728u;
        goto label_1f4728;
    }
    ctx->pc = 0x1F4720u;
    SET_GPR_U32(ctx, 31, 0x1F4728u);
    ctx->pc = 0x1F4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4720u;
    // 0x1f4724: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x1F4720u, 0x1F4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4728u;
label_1f4728:
    // 0x1f4728: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f4728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f472c:
    // 0x1f472c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4730:
    // 0x1f4730: 0xc046e5c  jal         func_11B970
label_1f4734:
    if (ctx->pc == 0x1F4734u) {
        ctx->pc = 0x1F4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4730u;
        // 0x1f4734: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4738u;
        goto label_1f4738;
    }
    ctx->pc = 0x1F4730u;
    SET_GPR_U32(ctx, 31, 0x1F4738u);
    ctx->pc = 0x1F4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4730u;
    // 0x1f4734: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1F4730u, 0x1F4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4738u;
label_1f4738:
    // 0x1f4738: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x1f4738u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_1f473c:
    // 0x1f473c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1f473cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1f4740:
    // 0x1f4740: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1f4740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1f4744:
    // 0x1f4744: 0x2fc20009  sltiu       $v0, $fp, 0x9
    ctx->pc = 0x1f4744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f4748:
    // 0x1f4748: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_1f474c:
    if (ctx->pc == 0x1F474Cu) {
        ctx->pc = 0x1F474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4748u;
        // 0x1f474c: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4750u;
        goto label_1f4750;
    }
    ctx->pc = 0x1F4748u;
    {
        const bool branch_taken_0x1f4748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4748u;
        // 0x1f474c: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4748) {
            ctx->pc = 0x1F4648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4648;
        }
    }
    ctx->pc = 0x1F4750u;
label_1f4750:
    // 0x1f4750: 0xc07d296  jal         func_1F4A58
label_1f4754:
    if (ctx->pc == 0x1F4754u) {
        ctx->pc = 0x1F4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4750u;
        // 0x1f4754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4758u;
        goto label_1f4758;
    }
    ctx->pc = 0x1F4750u;
    SET_GPR_U32(ctx, 31, 0x1F4758u);
    ctx->pc = 0x1F4754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4750u;
    // 0x1f4754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A58u, 0x1F4750u, 0x1F4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4758u;
label_1f4758:
    // 0x1f4758: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f4758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f475c:
    // 0x1f475c: 0xc080b10  jal         func_202C40
label_1f4760:
    if (ctx->pc == 0x1F4760u) {
        ctx->pc = 0x1F4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F475Cu;
        // 0x1f4760: 0x2444ef80  addiu       $a0, $v0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4764u;
        goto label_1f4764;
    }
    ctx->pc = 0x1F475Cu;
    SET_GPR_U32(ctx, 31, 0x1F4764u);
    ctx->pc = 0x1F4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F475Cu;
    // 0x1f4760: 0x2444ef80  addiu       $a0, $v0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C40u, 0x1F475Cu, 0x1F4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4764u;
label_1f4764:
    // 0x1f4764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4768:
    // 0x1f4768: 0xc07d2fc  jal         func_1F4BF0
label_1f476c:
    if (ctx->pc == 0x1F476Cu) {
        ctx->pc = 0x1F476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4768u;
        // 0x1f476c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4770u;
        goto label_1f4770;
    }
    ctx->pc = 0x1F4768u;
    SET_GPR_U32(ctx, 31, 0x1F4770u);
    ctx->pc = 0x1F476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4768u;
    // 0x1f476c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BF0u, 0x1F4768u, 0x1F4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4770u;
label_1f4770:
    // 0x1f4770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4774:
    // 0x1f4774: 0xc07d356  jal         func_1F4D58
label_1f4778:
    if (ctx->pc == 0x1F4778u) {
        ctx->pc = 0x1F4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4774u;
        // 0x1f4778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F477Cu;
        goto label_1f477c;
    }
    ctx->pc = 0x1F4774u;
    SET_GPR_U32(ctx, 31, 0x1F477Cu);
    ctx->pc = 0x1F4778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4774u;
    // 0x1f4778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D58u, 0x1F4774u, 0x1F477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F477Cu;
label_1f477c:
    // 0x1f477c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4780:
    // 0x1f4780: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1f4780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1f4784:
    // 0x1f4784: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1f4784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1f4788:
    // 0x1f4788: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1f4788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1f478c:
    // 0x1f478c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1f478cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1f4790:
    // 0x1f4790: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1f4790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1f4794:
    // 0x1f4794: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1f4794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1f4798:
    // 0x1f4798: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1f4798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f479c:
    // 0x1f479c: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1f479cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f47a0:
    // 0x1f47a0: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1f47a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f47a4:
    // 0x1f47a4: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x1f47a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f47a8:
    // 0x1f47a8: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1f47a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f47ac:
    // 0x1f47ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f47acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1f47b0:
    // 0x1f47b0: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x1f47b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f47b4:
    // 0x1f47b4: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1f47b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f47b8:
    // 0x1f47b8: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1f47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f47bc:
    // 0x1f47bc: 0x3e00008  jr          $ra
label_1f47c0:
    if (ctx->pc == 0x1F47C0u) {
        ctx->pc = 0x1F47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47BCu;
        // 0x1f47c0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F47C4u;
        goto label_1f47c4;
    }
    ctx->pc = 0x1F47BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47BCu;
        // 0x1f47c0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F47BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F47C4u;
label_1f47c4:
    // 0x1f47c4: 0x0  nop
    ctx->pc = 0x1f47c4u;
    // NOP
    ctx->pc = 0x1f47c8u;
}
