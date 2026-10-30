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

// Function: sub_003F3770
// Address: 0x3f3770 - 0x3f3f30
void sub_003F3770_0x3f3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3770_0x3f3770");
#endif

    switch (ctx->pc) {
        case 0x3f3770u: goto label_3f3770;
        case 0x3f3774u: goto label_3f3774;
        case 0x3f3778u: goto label_3f3778;
        case 0x3f377cu: goto label_3f377c;
        case 0x3f3780u: goto label_3f3780;
        case 0x3f3784u: goto label_3f3784;
        case 0x3f3788u: goto label_3f3788;
        case 0x3f378cu: goto label_3f378c;
        case 0x3f3790u: goto label_3f3790;
        case 0x3f3794u: goto label_3f3794;
        case 0x3f3798u: goto label_3f3798;
        case 0x3f379cu: goto label_3f379c;
        case 0x3f37a0u: goto label_3f37a0;
        case 0x3f37a4u: goto label_3f37a4;
        case 0x3f37a8u: goto label_3f37a8;
        case 0x3f37acu: goto label_3f37ac;
        case 0x3f37b0u: goto label_3f37b0;
        case 0x3f37b4u: goto label_3f37b4;
        case 0x3f37b8u: goto label_3f37b8;
        case 0x3f37bcu: goto label_3f37bc;
        case 0x3f37c0u: goto label_3f37c0;
        case 0x3f37c4u: goto label_3f37c4;
        case 0x3f37c8u: goto label_3f37c8;
        case 0x3f37ccu: goto label_3f37cc;
        case 0x3f37d0u: goto label_3f37d0;
        case 0x3f37d4u: goto label_3f37d4;
        case 0x3f37d8u: goto label_3f37d8;
        case 0x3f37dcu: goto label_3f37dc;
        case 0x3f37e0u: goto label_3f37e0;
        case 0x3f37e4u: goto label_3f37e4;
        case 0x3f37e8u: goto label_3f37e8;
        case 0x3f37ecu: goto label_3f37ec;
        case 0x3f37f0u: goto label_3f37f0;
        case 0x3f37f4u: goto label_3f37f4;
        case 0x3f37f8u: goto label_3f37f8;
        case 0x3f37fcu: goto label_3f37fc;
        case 0x3f3800u: goto label_3f3800;
        case 0x3f3804u: goto label_3f3804;
        case 0x3f3808u: goto label_3f3808;
        case 0x3f380cu: goto label_3f380c;
        case 0x3f3810u: goto label_3f3810;
        case 0x3f3814u: goto label_3f3814;
        case 0x3f3818u: goto label_3f3818;
        case 0x3f381cu: goto label_3f381c;
        case 0x3f3820u: goto label_3f3820;
        case 0x3f3824u: goto label_3f3824;
        case 0x3f3828u: goto label_3f3828;
        case 0x3f382cu: goto label_3f382c;
        case 0x3f3830u: goto label_3f3830;
        case 0x3f3834u: goto label_3f3834;
        case 0x3f3838u: goto label_3f3838;
        case 0x3f383cu: goto label_3f383c;
        case 0x3f3840u: goto label_3f3840;
        case 0x3f3844u: goto label_3f3844;
        case 0x3f3848u: goto label_3f3848;
        case 0x3f384cu: goto label_3f384c;
        case 0x3f3850u: goto label_3f3850;
        case 0x3f3854u: goto label_3f3854;
        case 0x3f3858u: goto label_3f3858;
        case 0x3f385cu: goto label_3f385c;
        case 0x3f3860u: goto label_3f3860;
        case 0x3f3864u: goto label_3f3864;
        case 0x3f3868u: goto label_3f3868;
        case 0x3f386cu: goto label_3f386c;
        case 0x3f3870u: goto label_3f3870;
        case 0x3f3874u: goto label_3f3874;
        case 0x3f3878u: goto label_3f3878;
        case 0x3f387cu: goto label_3f387c;
        case 0x3f3880u: goto label_3f3880;
        case 0x3f3884u: goto label_3f3884;
        case 0x3f3888u: goto label_3f3888;
        case 0x3f388cu: goto label_3f388c;
        case 0x3f3890u: goto label_3f3890;
        case 0x3f3894u: goto label_3f3894;
        case 0x3f3898u: goto label_3f3898;
        case 0x3f389cu: goto label_3f389c;
        case 0x3f38a0u: goto label_3f38a0;
        case 0x3f38a4u: goto label_3f38a4;
        case 0x3f38a8u: goto label_3f38a8;
        case 0x3f38acu: goto label_3f38ac;
        case 0x3f38b0u: goto label_3f38b0;
        case 0x3f38b4u: goto label_3f38b4;
        case 0x3f38b8u: goto label_3f38b8;
        case 0x3f38bcu: goto label_3f38bc;
        case 0x3f38c0u: goto label_3f38c0;
        case 0x3f38c4u: goto label_3f38c4;
        case 0x3f38c8u: goto label_3f38c8;
        case 0x3f38ccu: goto label_3f38cc;
        case 0x3f38d0u: goto label_3f38d0;
        case 0x3f38d4u: goto label_3f38d4;
        case 0x3f38d8u: goto label_3f38d8;
        case 0x3f38dcu: goto label_3f38dc;
        case 0x3f38e0u: goto label_3f38e0;
        case 0x3f38e4u: goto label_3f38e4;
        case 0x3f38e8u: goto label_3f38e8;
        case 0x3f38ecu: goto label_3f38ec;
        case 0x3f38f0u: goto label_3f38f0;
        case 0x3f38f4u: goto label_3f38f4;
        case 0x3f38f8u: goto label_3f38f8;
        case 0x3f38fcu: goto label_3f38fc;
        case 0x3f3900u: goto label_3f3900;
        case 0x3f3904u: goto label_3f3904;
        case 0x3f3908u: goto label_3f3908;
        case 0x3f390cu: goto label_3f390c;
        case 0x3f3910u: goto label_3f3910;
        case 0x3f3914u: goto label_3f3914;
        case 0x3f3918u: goto label_3f3918;
        case 0x3f391cu: goto label_3f391c;
        case 0x3f3920u: goto label_3f3920;
        case 0x3f3924u: goto label_3f3924;
        case 0x3f3928u: goto label_3f3928;
        case 0x3f392cu: goto label_3f392c;
        case 0x3f3930u: goto label_3f3930;
        case 0x3f3934u: goto label_3f3934;
        case 0x3f3938u: goto label_3f3938;
        case 0x3f393cu: goto label_3f393c;
        case 0x3f3940u: goto label_3f3940;
        case 0x3f3944u: goto label_3f3944;
        case 0x3f3948u: goto label_3f3948;
        case 0x3f394cu: goto label_3f394c;
        case 0x3f3950u: goto label_3f3950;
        case 0x3f3954u: goto label_3f3954;
        case 0x3f3958u: goto label_3f3958;
        case 0x3f395cu: goto label_3f395c;
        case 0x3f3960u: goto label_3f3960;
        case 0x3f3964u: goto label_3f3964;
        case 0x3f3968u: goto label_3f3968;
        case 0x3f396cu: goto label_3f396c;
        case 0x3f3970u: goto label_3f3970;
        case 0x3f3974u: goto label_3f3974;
        case 0x3f3978u: goto label_3f3978;
        case 0x3f397cu: goto label_3f397c;
        case 0x3f3980u: goto label_3f3980;
        case 0x3f3984u: goto label_3f3984;
        case 0x3f3988u: goto label_3f3988;
        case 0x3f398cu: goto label_3f398c;
        case 0x3f3990u: goto label_3f3990;
        case 0x3f3994u: goto label_3f3994;
        case 0x3f3998u: goto label_3f3998;
        case 0x3f399cu: goto label_3f399c;
        case 0x3f39a0u: goto label_3f39a0;
        case 0x3f39a4u: goto label_3f39a4;
        case 0x3f39a8u: goto label_3f39a8;
        case 0x3f39acu: goto label_3f39ac;
        case 0x3f39b0u: goto label_3f39b0;
        case 0x3f39b4u: goto label_3f39b4;
        case 0x3f39b8u: goto label_3f39b8;
        case 0x3f39bcu: goto label_3f39bc;
        case 0x3f39c0u: goto label_3f39c0;
        case 0x3f39c4u: goto label_3f39c4;
        case 0x3f39c8u: goto label_3f39c8;
        case 0x3f39ccu: goto label_3f39cc;
        case 0x3f39d0u: goto label_3f39d0;
        case 0x3f39d4u: goto label_3f39d4;
        case 0x3f39d8u: goto label_3f39d8;
        case 0x3f39dcu: goto label_3f39dc;
        case 0x3f39e0u: goto label_3f39e0;
        case 0x3f39e4u: goto label_3f39e4;
        case 0x3f39e8u: goto label_3f39e8;
        case 0x3f39ecu: goto label_3f39ec;
        case 0x3f39f0u: goto label_3f39f0;
        case 0x3f39f4u: goto label_3f39f4;
        case 0x3f39f8u: goto label_3f39f8;
        case 0x3f39fcu: goto label_3f39fc;
        case 0x3f3a00u: goto label_3f3a00;
        case 0x3f3a04u: goto label_3f3a04;
        case 0x3f3a08u: goto label_3f3a08;
        case 0x3f3a0cu: goto label_3f3a0c;
        case 0x3f3a10u: goto label_3f3a10;
        case 0x3f3a14u: goto label_3f3a14;
        case 0x3f3a18u: goto label_3f3a18;
        case 0x3f3a1cu: goto label_3f3a1c;
        case 0x3f3a20u: goto label_3f3a20;
        case 0x3f3a24u: goto label_3f3a24;
        case 0x3f3a28u: goto label_3f3a28;
        case 0x3f3a2cu: goto label_3f3a2c;
        case 0x3f3a30u: goto label_3f3a30;
        case 0x3f3a34u: goto label_3f3a34;
        case 0x3f3a38u: goto label_3f3a38;
        case 0x3f3a3cu: goto label_3f3a3c;
        case 0x3f3a40u: goto label_3f3a40;
        case 0x3f3a44u: goto label_3f3a44;
        case 0x3f3a48u: goto label_3f3a48;
        case 0x3f3a4cu: goto label_3f3a4c;
        case 0x3f3a50u: goto label_3f3a50;
        case 0x3f3a54u: goto label_3f3a54;
        case 0x3f3a58u: goto label_3f3a58;
        case 0x3f3a5cu: goto label_3f3a5c;
        case 0x3f3a60u: goto label_3f3a60;
        case 0x3f3a64u: goto label_3f3a64;
        case 0x3f3a68u: goto label_3f3a68;
        case 0x3f3a6cu: goto label_3f3a6c;
        case 0x3f3a70u: goto label_3f3a70;
        case 0x3f3a74u: goto label_3f3a74;
        case 0x3f3a78u: goto label_3f3a78;
        case 0x3f3a7cu: goto label_3f3a7c;
        case 0x3f3a80u: goto label_3f3a80;
        case 0x3f3a84u: goto label_3f3a84;
        case 0x3f3a88u: goto label_3f3a88;
        case 0x3f3a8cu: goto label_3f3a8c;
        case 0x3f3a90u: goto label_3f3a90;
        case 0x3f3a94u: goto label_3f3a94;
        case 0x3f3a98u: goto label_3f3a98;
        case 0x3f3a9cu: goto label_3f3a9c;
        case 0x3f3aa0u: goto label_3f3aa0;
        case 0x3f3aa4u: goto label_3f3aa4;
        case 0x3f3aa8u: goto label_3f3aa8;
        case 0x3f3aacu: goto label_3f3aac;
        case 0x3f3ab0u: goto label_3f3ab0;
        case 0x3f3ab4u: goto label_3f3ab4;
        case 0x3f3ab8u: goto label_3f3ab8;
        case 0x3f3abcu: goto label_3f3abc;
        case 0x3f3ac0u: goto label_3f3ac0;
        case 0x3f3ac4u: goto label_3f3ac4;
        case 0x3f3ac8u: goto label_3f3ac8;
        case 0x3f3accu: goto label_3f3acc;
        case 0x3f3ad0u: goto label_3f3ad0;
        case 0x3f3ad4u: goto label_3f3ad4;
        case 0x3f3ad8u: goto label_3f3ad8;
        case 0x3f3adcu: goto label_3f3adc;
        case 0x3f3ae0u: goto label_3f3ae0;
        case 0x3f3ae4u: goto label_3f3ae4;
        case 0x3f3ae8u: goto label_3f3ae8;
        case 0x3f3aecu: goto label_3f3aec;
        case 0x3f3af0u: goto label_3f3af0;
        case 0x3f3af4u: goto label_3f3af4;
        case 0x3f3af8u: goto label_3f3af8;
        case 0x3f3afcu: goto label_3f3afc;
        case 0x3f3b00u: goto label_3f3b00;
        case 0x3f3b04u: goto label_3f3b04;
        case 0x3f3b08u: goto label_3f3b08;
        case 0x3f3b0cu: goto label_3f3b0c;
        case 0x3f3b10u: goto label_3f3b10;
        case 0x3f3b14u: goto label_3f3b14;
        case 0x3f3b18u: goto label_3f3b18;
        case 0x3f3b1cu: goto label_3f3b1c;
        case 0x3f3b20u: goto label_3f3b20;
        case 0x3f3b24u: goto label_3f3b24;
        case 0x3f3b28u: goto label_3f3b28;
        case 0x3f3b2cu: goto label_3f3b2c;
        case 0x3f3b30u: goto label_3f3b30;
        case 0x3f3b34u: goto label_3f3b34;
        case 0x3f3b38u: goto label_3f3b38;
        case 0x3f3b3cu: goto label_3f3b3c;
        case 0x3f3b40u: goto label_3f3b40;
        case 0x3f3b44u: goto label_3f3b44;
        case 0x3f3b48u: goto label_3f3b48;
        case 0x3f3b4cu: goto label_3f3b4c;
        case 0x3f3b50u: goto label_3f3b50;
        case 0x3f3b54u: goto label_3f3b54;
        case 0x3f3b58u: goto label_3f3b58;
        case 0x3f3b5cu: goto label_3f3b5c;
        case 0x3f3b60u: goto label_3f3b60;
        case 0x3f3b64u: goto label_3f3b64;
        case 0x3f3b68u: goto label_3f3b68;
        case 0x3f3b6cu: goto label_3f3b6c;
        case 0x3f3b70u: goto label_3f3b70;
        case 0x3f3b74u: goto label_3f3b74;
        case 0x3f3b78u: goto label_3f3b78;
        case 0x3f3b7cu: goto label_3f3b7c;
        case 0x3f3b80u: goto label_3f3b80;
        case 0x3f3b84u: goto label_3f3b84;
        case 0x3f3b88u: goto label_3f3b88;
        case 0x3f3b8cu: goto label_3f3b8c;
        case 0x3f3b90u: goto label_3f3b90;
        case 0x3f3b94u: goto label_3f3b94;
        case 0x3f3b98u: goto label_3f3b98;
        case 0x3f3b9cu: goto label_3f3b9c;
        case 0x3f3ba0u: goto label_3f3ba0;
        case 0x3f3ba4u: goto label_3f3ba4;
        case 0x3f3ba8u: goto label_3f3ba8;
        case 0x3f3bacu: goto label_3f3bac;
        case 0x3f3bb0u: goto label_3f3bb0;
        case 0x3f3bb4u: goto label_3f3bb4;
        case 0x3f3bb8u: goto label_3f3bb8;
        case 0x3f3bbcu: goto label_3f3bbc;
        case 0x3f3bc0u: goto label_3f3bc0;
        case 0x3f3bc4u: goto label_3f3bc4;
        case 0x3f3bc8u: goto label_3f3bc8;
        case 0x3f3bccu: goto label_3f3bcc;
        case 0x3f3bd0u: goto label_3f3bd0;
        case 0x3f3bd4u: goto label_3f3bd4;
        case 0x3f3bd8u: goto label_3f3bd8;
        case 0x3f3bdcu: goto label_3f3bdc;
        case 0x3f3be0u: goto label_3f3be0;
        case 0x3f3be4u: goto label_3f3be4;
        case 0x3f3be8u: goto label_3f3be8;
        case 0x3f3becu: goto label_3f3bec;
        case 0x3f3bf0u: goto label_3f3bf0;
        case 0x3f3bf4u: goto label_3f3bf4;
        case 0x3f3bf8u: goto label_3f3bf8;
        case 0x3f3bfcu: goto label_3f3bfc;
        case 0x3f3c00u: goto label_3f3c00;
        case 0x3f3c04u: goto label_3f3c04;
        case 0x3f3c08u: goto label_3f3c08;
        case 0x3f3c0cu: goto label_3f3c0c;
        case 0x3f3c10u: goto label_3f3c10;
        case 0x3f3c14u: goto label_3f3c14;
        case 0x3f3c18u: goto label_3f3c18;
        case 0x3f3c1cu: goto label_3f3c1c;
        case 0x3f3c20u: goto label_3f3c20;
        case 0x3f3c24u: goto label_3f3c24;
        case 0x3f3c28u: goto label_3f3c28;
        case 0x3f3c2cu: goto label_3f3c2c;
        case 0x3f3c30u: goto label_3f3c30;
        case 0x3f3c34u: goto label_3f3c34;
        case 0x3f3c38u: goto label_3f3c38;
        case 0x3f3c3cu: goto label_3f3c3c;
        case 0x3f3c40u: goto label_3f3c40;
        case 0x3f3c44u: goto label_3f3c44;
        case 0x3f3c48u: goto label_3f3c48;
        case 0x3f3c4cu: goto label_3f3c4c;
        case 0x3f3c50u: goto label_3f3c50;
        case 0x3f3c54u: goto label_3f3c54;
        case 0x3f3c58u: goto label_3f3c58;
        case 0x3f3c5cu: goto label_3f3c5c;
        case 0x3f3c60u: goto label_3f3c60;
        case 0x3f3c64u: goto label_3f3c64;
        case 0x3f3c68u: goto label_3f3c68;
        case 0x3f3c6cu: goto label_3f3c6c;
        case 0x3f3c70u: goto label_3f3c70;
        case 0x3f3c74u: goto label_3f3c74;
        case 0x3f3c78u: goto label_3f3c78;
        case 0x3f3c7cu: goto label_3f3c7c;
        case 0x3f3c80u: goto label_3f3c80;
        case 0x3f3c84u: goto label_3f3c84;
        case 0x3f3c88u: goto label_3f3c88;
        case 0x3f3c8cu: goto label_3f3c8c;
        case 0x3f3c90u: goto label_3f3c90;
        case 0x3f3c94u: goto label_3f3c94;
        case 0x3f3c98u: goto label_3f3c98;
        case 0x3f3c9cu: goto label_3f3c9c;
        case 0x3f3ca0u: goto label_3f3ca0;
        case 0x3f3ca4u: goto label_3f3ca4;
        case 0x3f3ca8u: goto label_3f3ca8;
        case 0x3f3cacu: goto label_3f3cac;
        case 0x3f3cb0u: goto label_3f3cb0;
        case 0x3f3cb4u: goto label_3f3cb4;
        case 0x3f3cb8u: goto label_3f3cb8;
        case 0x3f3cbcu: goto label_3f3cbc;
        case 0x3f3cc0u: goto label_3f3cc0;
        case 0x3f3cc4u: goto label_3f3cc4;
        case 0x3f3cc8u: goto label_3f3cc8;
        case 0x3f3cccu: goto label_3f3ccc;
        case 0x3f3cd0u: goto label_3f3cd0;
        case 0x3f3cd4u: goto label_3f3cd4;
        case 0x3f3cd8u: goto label_3f3cd8;
        case 0x3f3cdcu: goto label_3f3cdc;
        case 0x3f3ce0u: goto label_3f3ce0;
        case 0x3f3ce4u: goto label_3f3ce4;
        case 0x3f3ce8u: goto label_3f3ce8;
        case 0x3f3cecu: goto label_3f3cec;
        case 0x3f3cf0u: goto label_3f3cf0;
        case 0x3f3cf4u: goto label_3f3cf4;
        case 0x3f3cf8u: goto label_3f3cf8;
        case 0x3f3cfcu: goto label_3f3cfc;
        case 0x3f3d00u: goto label_3f3d00;
        case 0x3f3d04u: goto label_3f3d04;
        case 0x3f3d08u: goto label_3f3d08;
        case 0x3f3d0cu: goto label_3f3d0c;
        case 0x3f3d10u: goto label_3f3d10;
        case 0x3f3d14u: goto label_3f3d14;
        case 0x3f3d18u: goto label_3f3d18;
        case 0x3f3d1cu: goto label_3f3d1c;
        case 0x3f3d20u: goto label_3f3d20;
        case 0x3f3d24u: goto label_3f3d24;
        case 0x3f3d28u: goto label_3f3d28;
        case 0x3f3d2cu: goto label_3f3d2c;
        case 0x3f3d30u: goto label_3f3d30;
        case 0x3f3d34u: goto label_3f3d34;
        case 0x3f3d38u: goto label_3f3d38;
        case 0x3f3d3cu: goto label_3f3d3c;
        case 0x3f3d40u: goto label_3f3d40;
        case 0x3f3d44u: goto label_3f3d44;
        case 0x3f3d48u: goto label_3f3d48;
        case 0x3f3d4cu: goto label_3f3d4c;
        case 0x3f3d50u: goto label_3f3d50;
        case 0x3f3d54u: goto label_3f3d54;
        case 0x3f3d58u: goto label_3f3d58;
        case 0x3f3d5cu: goto label_3f3d5c;
        case 0x3f3d60u: goto label_3f3d60;
        case 0x3f3d64u: goto label_3f3d64;
        case 0x3f3d68u: goto label_3f3d68;
        case 0x3f3d6cu: goto label_3f3d6c;
        case 0x3f3d70u: goto label_3f3d70;
        case 0x3f3d74u: goto label_3f3d74;
        case 0x3f3d78u: goto label_3f3d78;
        case 0x3f3d7cu: goto label_3f3d7c;
        case 0x3f3d80u: goto label_3f3d80;
        case 0x3f3d84u: goto label_3f3d84;
        case 0x3f3d88u: goto label_3f3d88;
        case 0x3f3d8cu: goto label_3f3d8c;
        case 0x3f3d90u: goto label_3f3d90;
        case 0x3f3d94u: goto label_3f3d94;
        case 0x3f3d98u: goto label_3f3d98;
        case 0x3f3d9cu: goto label_3f3d9c;
        case 0x3f3da0u: goto label_3f3da0;
        case 0x3f3da4u: goto label_3f3da4;
        case 0x3f3da8u: goto label_3f3da8;
        case 0x3f3dacu: goto label_3f3dac;
        case 0x3f3db0u: goto label_3f3db0;
        case 0x3f3db4u: goto label_3f3db4;
        case 0x3f3db8u: goto label_3f3db8;
        case 0x3f3dbcu: goto label_3f3dbc;
        case 0x3f3dc0u: goto label_3f3dc0;
        case 0x3f3dc4u: goto label_3f3dc4;
        case 0x3f3dc8u: goto label_3f3dc8;
        case 0x3f3dccu: goto label_3f3dcc;
        case 0x3f3dd0u: goto label_3f3dd0;
        case 0x3f3dd4u: goto label_3f3dd4;
        case 0x3f3dd8u: goto label_3f3dd8;
        case 0x3f3ddcu: goto label_3f3ddc;
        case 0x3f3de0u: goto label_3f3de0;
        case 0x3f3de4u: goto label_3f3de4;
        case 0x3f3de8u: goto label_3f3de8;
        case 0x3f3decu: goto label_3f3dec;
        case 0x3f3df0u: goto label_3f3df0;
        case 0x3f3df4u: goto label_3f3df4;
        case 0x3f3df8u: goto label_3f3df8;
        case 0x3f3dfcu: goto label_3f3dfc;
        case 0x3f3e00u: goto label_3f3e00;
        case 0x3f3e04u: goto label_3f3e04;
        case 0x3f3e08u: goto label_3f3e08;
        case 0x3f3e0cu: goto label_3f3e0c;
        case 0x3f3e10u: goto label_3f3e10;
        case 0x3f3e14u: goto label_3f3e14;
        case 0x3f3e18u: goto label_3f3e18;
        case 0x3f3e1cu: goto label_3f3e1c;
        case 0x3f3e20u: goto label_3f3e20;
        case 0x3f3e24u: goto label_3f3e24;
        case 0x3f3e28u: goto label_3f3e28;
        case 0x3f3e2cu: goto label_3f3e2c;
        case 0x3f3e30u: goto label_3f3e30;
        case 0x3f3e34u: goto label_3f3e34;
        case 0x3f3e38u: goto label_3f3e38;
        case 0x3f3e3cu: goto label_3f3e3c;
        case 0x3f3e40u: goto label_3f3e40;
        case 0x3f3e44u: goto label_3f3e44;
        case 0x3f3e48u: goto label_3f3e48;
        case 0x3f3e4cu: goto label_3f3e4c;
        case 0x3f3e50u: goto label_3f3e50;
        case 0x3f3e54u: goto label_3f3e54;
        case 0x3f3e58u: goto label_3f3e58;
        case 0x3f3e5cu: goto label_3f3e5c;
        case 0x3f3e60u: goto label_3f3e60;
        case 0x3f3e64u: goto label_3f3e64;
        case 0x3f3e68u: goto label_3f3e68;
        case 0x3f3e6cu: goto label_3f3e6c;
        case 0x3f3e70u: goto label_3f3e70;
        case 0x3f3e74u: goto label_3f3e74;
        case 0x3f3e78u: goto label_3f3e78;
        case 0x3f3e7cu: goto label_3f3e7c;
        case 0x3f3e80u: goto label_3f3e80;
        case 0x3f3e84u: goto label_3f3e84;
        case 0x3f3e88u: goto label_3f3e88;
        case 0x3f3e8cu: goto label_3f3e8c;
        case 0x3f3e90u: goto label_3f3e90;
        case 0x3f3e94u: goto label_3f3e94;
        case 0x3f3e98u: goto label_3f3e98;
        case 0x3f3e9cu: goto label_3f3e9c;
        case 0x3f3ea0u: goto label_3f3ea0;
        case 0x3f3ea4u: goto label_3f3ea4;
        case 0x3f3ea8u: goto label_3f3ea8;
        case 0x3f3eacu: goto label_3f3eac;
        case 0x3f3eb0u: goto label_3f3eb0;
        case 0x3f3eb4u: goto label_3f3eb4;
        case 0x3f3eb8u: goto label_3f3eb8;
        case 0x3f3ebcu: goto label_3f3ebc;
        case 0x3f3ec0u: goto label_3f3ec0;
        case 0x3f3ec4u: goto label_3f3ec4;
        case 0x3f3ec8u: goto label_3f3ec8;
        case 0x3f3eccu: goto label_3f3ecc;
        case 0x3f3ed0u: goto label_3f3ed0;
        case 0x3f3ed4u: goto label_3f3ed4;
        case 0x3f3ed8u: goto label_3f3ed8;
        case 0x3f3edcu: goto label_3f3edc;
        case 0x3f3ee0u: goto label_3f3ee0;
        case 0x3f3ee4u: goto label_3f3ee4;
        case 0x3f3ee8u: goto label_3f3ee8;
        case 0x3f3eecu: goto label_3f3eec;
        case 0x3f3ef0u: goto label_3f3ef0;
        case 0x3f3ef4u: goto label_3f3ef4;
        case 0x3f3ef8u: goto label_3f3ef8;
        case 0x3f3efcu: goto label_3f3efc;
        case 0x3f3f00u: goto label_3f3f00;
        case 0x3f3f04u: goto label_3f3f04;
        case 0x3f3f08u: goto label_3f3f08;
        case 0x3f3f0cu: goto label_3f3f0c;
        case 0x3f3f10u: goto label_3f3f10;
        case 0x3f3f14u: goto label_3f3f14;
        case 0x3f3f18u: goto label_3f3f18;
        case 0x3f3f1cu: goto label_3f3f1c;
        case 0x3f3f20u: goto label_3f3f20;
        case 0x3f3f24u: goto label_3f3f24;
        case 0x3f3f28u: goto label_3f3f28;
        case 0x3f3f2cu: goto label_3f3f2c;
        default: break;
    }

    ctx->pc = 0x3f3770u;

label_3f3770:
    // 0x3f3770: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3f3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3f3774:
    // 0x3f3774: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3f3774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3f3778:
    // 0x3f3778: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3f3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3f377c:
    // 0x3f377c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3f377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3f3780:
    // 0x3f3780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f3780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3784:
    // 0x3f3784: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3f3784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3f3788:
    // 0x3f3788: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3f3788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3f378c:
    // 0x3f378c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3f378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3f3790:
    // 0x3f3790: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3f3790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3f3794:
    // 0x3f3794: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3f3794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_3f3798:
    // 0x3f3798: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3f3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3f379c:
    // 0x3f379c: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x3f379cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3f37a0:
    // 0x3f37a0: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x3f37a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3f37a4:
    // 0x3f37a4: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3f37a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3f37a8:
    // 0x3f37a8: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3f37a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3f37ac:
    // 0x3f37ac: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3f37acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3f37b0:
    // 0x3f37b0: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3f37b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3f37b4:
    // 0x3f37b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f37b8:
    // 0x3f37b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f37b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f37bc:
    // 0x3f37bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f37c0:
    // 0x3f37c0: 0x40f809  jalr        $v0
label_3f37c4:
    if (ctx->pc == 0x3F37C4u) {
        ctx->pc = 0x3F37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37C0u;
        // 0x3f37c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F37C8u;
        goto label_3f37c8;
    }
    ctx->pc = 0x3F37C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F37C8u);
        ctx->pc = 0x3F37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37C0u;
        // 0x3f37c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F37C0u, 0x3F37C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F37C8u;
label_3f37c8:
    // 0x3f37c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f37c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f37cc:
    // 0x3f37cc: 0xc047e6c  jal         func_11F9B0
label_3f37d0:
    if (ctx->pc == 0x3F37D0u) {
        ctx->pc = 0x3F37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37CCu;
        // 0x3f37d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F37D4u;
        goto label_3f37d4;
    }
    ctx->pc = 0x3F37CCu;
    SET_GPR_U32(ctx, 31, 0x3F37D4u);
    ctx->pc = 0x3F37D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F37CCu;
    // 0x3f37d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3F37CCu, 0x3F37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F37D4u;
label_3f37d4:
    // 0x3f37d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f37d8:
    // 0x3f37d8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3f37d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3f37dc:
    // 0x3f37dc: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3f37dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3f37e0:
    // 0x3f37e0: 0xa0f809  jalr        $a1
label_3f37e4:
    if (ctx->pc == 0x3F37E4u) {
        ctx->pc = 0x3F37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37E0u;
        // 0x3f37e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F37E8u;
        goto label_3f37e8;
    }
    ctx->pc = 0x3F37E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3F37E8u);
        ctx->pc = 0x3F37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37E0u;
        // 0x3f37e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F37E0u, 0x3F37E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F37E8u;
label_3f37e8:
    // 0x3f37e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f37e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f37ec:
    // 0x3f37ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f37f0:
    // 0x3f37f0: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3f37f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3f37f4:
    // 0x3f37f4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f37f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f37f8:
    // 0x3f37f8: 0xc047e6c  jal         func_11F9B0
label_3f37fc:
    if (ctx->pc == 0x3F37FCu) {
        ctx->pc = 0x3F37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37F8u;
        // 0x3f37fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3800u;
        goto label_3f3800;
    }
    ctx->pc = 0x3F37F8u;
    SET_GPR_U32(ctx, 31, 0x3F3800u);
    ctx->pc = 0x3F37FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F37F8u;
    // 0x3f37fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3F37F8u, 0x3F3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3800u;
label_3f3800:
    // 0x3f3800: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3f3800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f3804:
    // 0x3f3804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f3804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f3808:
    // 0x3f3808: 0x2c62003d  sltiu       $v0, $v1, 0x3D
    ctx->pc = 0x3f3808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3f380c:
    // 0x3f380c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_3f3810:
    if (ctx->pc == 0x3F3810u) {
        ctx->pc = 0x3F3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F380Cu;
        // 0x3f3810: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3814u;
        goto label_3f3814;
    }
    ctx->pc = 0x3F380Cu;
    {
        const bool branch_taken_0x3f380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F380Cu;
        // 0x3f3810: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f380c) {
            ctx->pc = 0x3F3884u;
            goto label_3f3884;
        }
    }
    ctx->pc = 0x3F3814u;
label_3f3814:
    // 0x3f3814: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x3f3814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
label_3f3818:
    // 0x3f3818: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f381c:
    // 0x3f381c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3f381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_3f3820:
    // 0x3f3820: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f3820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3824:
    // 0x3f3824: 0xc0480ba  jal         func_1202E8
label_3f3828:
    if (ctx->pc == 0x3F3828u) {
        ctx->pc = 0x3F3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3824u;
        // 0x3f3828: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F382Cu;
        goto label_3f382c;
    }
    ctx->pc = 0x3F3824u;
    SET_GPR_U32(ctx, 31, 0x3F382Cu);
    ctx->pc = 0x3F3828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3824u;
    // 0x3f3828: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x3F3824u, 0x3F382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F382Cu;
label_3f382c:
    // 0x3f382c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3f3830:
    if (ctx->pc == 0x3F3830u) {
        ctx->pc = 0x3F3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F382Cu;
        // 0x3f3830: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3834u;
        goto label_3f3834;
    }
    ctx->pc = 0x3F382Cu;
    {
        const bool branch_taken_0x3f382c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f382c) {
            ctx->pc = 0x3F3830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F382Cu;
            // 0x3f3830: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3888u;
            goto label_3f3888;
        }
    }
    ctx->pc = 0x3F3834u;
label_3f3834:
    // 0x3f3834: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f3834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f3838:
    // 0x3f3838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f383c:
    // 0x3f383c: 0xc0cd4ee  jal         func_3353B8
label_3f3840:
    if (ctx->pc == 0x3F3840u) {
        ctx->pc = 0x3F3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F383Cu;
        // 0x3f3840: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3844u;
        goto label_3f3844;
    }
    ctx->pc = 0x3F383Cu;
    SET_GPR_U32(ctx, 31, 0x3F3844u);
    ctx->pc = 0x3F3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F383Cu;
    // 0x3f3840: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F383Cu, 0x3F3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3844u;
label_3f3844:
    // 0x3f3844: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f3844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3f3848:
    // 0x3f3848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f3848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f384c:
    // 0x3f384c: 0x24634728  addiu       $v1, $v1, 0x4728
    ctx->pc = 0x3f384cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18216));
label_3f3850:
    // 0x3f3850: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f3850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f3854:
    // 0x3f3854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f3854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3858:
    // 0x3f3858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f385c:
    // 0x3f385c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f3860:
    // 0x3f3860: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x3f3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_3f3864:
    // 0x3f3864: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f3864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3868:
    // 0x3f3868: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f3868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f386c:
    // 0x3f386c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3f386cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3f3870:
    // 0x3f3870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f3870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3874:
    // 0x3f3874: 0xc043f74  jal         func_10FDD0
label_3f3878:
    if (ctx->pc == 0x3F3878u) {
        ctx->pc = 0x3F3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3874u;
        // 0x3f3878: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F387Cu;
        goto label_3f387c;
    }
    ctx->pc = 0x3F3874u;
    SET_GPR_U32(ctx, 31, 0x3F387Cu);
    ctx->pc = 0x3F3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3874u;
    // 0x3f3878: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3F3874u, 0x3F387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F387Cu;
label_3f387c:
    // 0x3f387c: 0x1000019b  b           . + 4 + (0x19B << 2)
label_3f3880:
    if (ctx->pc == 0x3F3880u) {
        ctx->pc = 0x3F3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F387Cu;
        // 0x3f3880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3884u;
        goto label_3f3884;
    }
    ctx->pc = 0x3F387Cu;
    {
        const bool branch_taken_0x3f387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F387Cu;
        // 0x3f3880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f387c) {
            ctx->pc = 0x3F3EECu;
            goto label_3f3eec;
        }
    }
    ctx->pc = 0x3F3884u;
label_3f3884:
    // 0x3f3884: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f3884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3888:
    // 0x3f3888: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f3888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f388c:
    // 0x3f388c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f388cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3890:
    // 0x3f3890: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f3890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f3894:
    // 0x3f3894: 0xc136afa  jal         func_4DABE8
label_3f3898:
    if (ctx->pc == 0x3F3898u) {
        ctx->pc = 0x3F3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3894u;
        // 0x3f3898: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F389Cu;
        goto label_3f389c;
    }
    ctx->pc = 0x3F3894u;
    SET_GPR_U32(ctx, 31, 0x3F389Cu);
    ctx->pc = 0x3F3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3894u;
    // 0x3f3898: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3F3894u, 0x3F389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F389Cu;
label_3f389c:
    // 0x3f389c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f389cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f38a0:
    // 0x3f38a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f38a4:
    // 0x3f38a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f38a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f38a8:
    // 0x3f38a8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3f38a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38ac:
    // 0x3f38ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f38acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38b0:
    // 0x3f38b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f38b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38b4:
    // 0x3f38b4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3f38b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3f38b8:
    // 0x3f38b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3f38b8u;
    // VWAITQ (Q already resolved in this runtime)
label_3f38bc:
    // 0x3f38bc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3f38bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38c0:
    // 0x3f38c0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3f38c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3f38c4:
    // 0x3f38c4: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x3f38c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3f38c8:
    // 0x3f38c8: 0xc0e87c0  jal         func_3A1F00
label_3f38cc:
    if (ctx->pc == 0x3F38CCu) {
        ctx->pc = 0x3F38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F38C8u;
        // 0x3f38cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F38D0u;
        goto label_3f38d0;
    }
    ctx->pc = 0x3F38C8u;
    SET_GPR_U32(ctx, 31, 0x3F38D0u);
    ctx->pc = 0x3F38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F38C8u;
    // 0x3f38cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F38C8u, 0x3F38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F38D0u;
label_3f38d0:
    // 0x3f38d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f38d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f38d4:
    // 0x3f38d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f38d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f38d8:
    // 0x3f38d8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3f38d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38dc:
    // 0x3f38dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f38dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38e0:
    // 0x3f38e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f38e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38e4:
    // 0x3f38e4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3f38e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3f38e8:
    // 0x3f38e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3f38e8u;
    // VWAITQ (Q already resolved in this runtime)
label_3f38ec:
    // 0x3f38ec: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3f38ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f38f0:
    // 0x3f38f0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3f38f0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_3f38f4:
    // 0x3f38f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f38f8:
    // 0x3f38f8: 0x4486c800  mtc1        $a2, $f25
    ctx->pc = 0x3f38f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3f38fc:
    // 0x3f38fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3f38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f3900:
    // 0x3f3900: 0x2c420e11  sltiu       $v0, $v0, 0xE11
    ctx->pc = 0x3f3900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3601) ? 1 : 0);
label_3f3904:
    // 0x3f3904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3f3908:
    if (ctx->pc == 0x3F3908u) {
        ctx->pc = 0x3F390Cu;
        goto label_3f390c;
    }
    ctx->pc = 0x3F3904u;
    {
        const bool branch_taken_0x3f3904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3904) {
            ctx->pc = 0x3F3914u;
            goto label_3f3914;
        }
    }
    ctx->pc = 0x3F390Cu;
label_3f390c:
    // 0x3f390c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3910:
    // 0x3f3910: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3f3910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3f3914:
    // 0x3f3914: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3f3914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3f3918:
    // 0x3f3918: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3f3918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3f391c:
    // 0x3f391c: 0xc0e87c0  jal         func_3A1F00
label_3f3920:
    if (ctx->pc == 0x3F3920u) {
        ctx->pc = 0x3F3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F391Cu;
        // 0x3f3920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3924u;
        goto label_3f3924;
    }
    ctx->pc = 0x3F391Cu;
    SET_GPR_U32(ctx, 31, 0x3F3924u);
    ctx->pc = 0x3F3920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F391Cu;
    // 0x3f3920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F391Cu, 0x3F3924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3924u;
label_3f3924:
    // 0x3f3924: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3924u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3928:
    // 0x3f3928: 0x4618b834  c.lt.s      $f23, $f24
    ctx->pc = 0x3f3928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f392c:
    // 0x3f392c: 0x0  nop
    ctx->pc = 0x3f392cu;
    // NOP
label_3f3930:
    // 0x3f3930: 0x4500007d  bc1f        . + 4 + (0x7D << 2)
label_3f3934:
    if (ctx->pc == 0x3F3934u) {
        ctx->pc = 0x3F3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3930u;
        // 0x3f3934: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3938u;
        goto label_3f3938;
    }
    ctx->pc = 0x3F3930u;
    {
        const bool branch_taken_0x3f3930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3930u;
        // 0x3f3934: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3930) {
            ctx->pc = 0x3F3B28u;
            goto label_3f3b28;
        }
    }
    ctx->pc = 0x3F3938u;
label_3f3938:
    // 0x3f3938: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f3938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f393c:
    // 0x3f393c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_3f3940:
    if (ctx->pc == 0x3F3940u) {
        ctx->pc = 0x3F3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F393Cu;
        // 0x3f3940: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3944u;
        goto label_3f3944;
    }
    ctx->pc = 0x3F393Cu;
    {
        const bool branch_taken_0x3f393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F393Cu;
        // 0x3f3940: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f393c) {
            ctx->pc = 0x3F3A68u;
            goto label_3f3a68;
        }
    }
    ctx->pc = 0x3F3944u;
label_3f3944:
    // 0x3f3944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f3944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3948:
    // 0x3f3948: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f3948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f394c:
    // 0x3f394c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3f394cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3f3950:
    // 0x3f3950: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f3950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f3954:
    // 0x3f3954: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3958:
    // 0x3f3958: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x3f3958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_3f395c:
    // 0x3f395c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3f395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3f3960:
    // 0x3f3960: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f3960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f3964:
    // 0x3f3964: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3f3964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3f3968:
    // 0x3f3968: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f3968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f396c:
    // 0x3f396c: 0xc136afa  jal         func_4DABE8
label_3f3970:
    if (ctx->pc == 0x3F3970u) {
        ctx->pc = 0x3F3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F396Cu;
        // 0x3f3970: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3974u;
        goto label_3f3974;
    }
    ctx->pc = 0x3F396Cu;
    SET_GPR_U32(ctx, 31, 0x3F3974u);
    ctx->pc = 0x3F3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F396Cu;
    // 0x3f3970: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3F396Cu, 0x3F3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3974u;
label_3f3974:
    // 0x3f3974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f3974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3978:
    // 0x3f3978: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3f3978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3f397c:
    // 0x3f397c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f397cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3980:
    // 0x3f3980: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3f3980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3f3984:
    // 0x3f3984: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3f3984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3f3988:
    // 0x3f3988: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f3988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f398c:
    // 0x3f398c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f3990:
    // 0x3f3990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3994:
    // 0x3f3994: 0xc0cd508  jal         func_335420
label_3f3998:
    if (ctx->pc == 0x3F3998u) {
        ctx->pc = 0x3F3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3994u;
        // 0x3f3998: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F399Cu;
        goto label_3f399c;
    }
    ctx->pc = 0x3F3994u;
    SET_GPR_U32(ctx, 31, 0x3F399Cu);
    ctx->pc = 0x3F3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3994u;
    // 0x3f3998: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3994u, 0x3F399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F399Cu;
label_3f399c:
    // 0x3f399c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3f399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f39a0:
    // 0x3f39a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f39a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f39a4:
    // 0x3f39a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3f39a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3f39a8:
    // 0x3f39a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f39ac:
    // 0x3f39ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3f39acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f39b0:
    // 0x3f39b0: 0xc0cd508  jal         func_335420
label_3f39b4:
    if (ctx->pc == 0x3F39B4u) {
        ctx->pc = 0x3F39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F39B0u;
        // 0x3f39b4: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F39B8u;
        goto label_3f39b8;
    }
    ctx->pc = 0x3F39B0u;
    SET_GPR_U32(ctx, 31, 0x3F39B8u);
    ctx->pc = 0x3F39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F39B0u;
    // 0x3f39b4: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F39B0u, 0x3F39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F39B8u;
label_3f39b8:
    // 0x3f39b8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3f39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f39bc:
    // 0x3f39bc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3f39bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3f39c0:
    // 0x3f39c0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3f39c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3f39c4:
    // 0x3f39c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f39c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f39c8:
    // 0x3f39c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f39cc:
    // 0x3f39cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3f39ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f39d0:
    // 0x3f39d0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3f39d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3f39d4:
    // 0x3f39d4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f39d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f39d8:
    // 0x3f39d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f39d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f39dc:
    // 0x3f39dc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3f39dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f39e0:
    // 0x3f39e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3f39e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f39e4:
    // 0x3f39e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3f39e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f39e8:
    // 0x3f39e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3f39e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3f39ec:
    // 0x3f39ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x3f39ecu;
    // VWAITQ (Q already resolved in this runtime)
label_3f39f0:
    // 0x3f39f0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3f39f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f39f4:
    // 0x3f39f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f39f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f39f8:
    // 0x3f39f8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f39f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f39fc:
    // 0x3f39fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f3a00:
    // 0x3f3a00: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f3a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3f3a04:
    // 0x3f3a04: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3f3a08:
    // 0x3f3a08: 0xc0cd508  jal         func_335420
label_3f3a0c:
    if (ctx->pc == 0x3F3A0Cu) {
        ctx->pc = 0x3F3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A08u;
        // 0x3f3a0c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3A10u;
        goto label_3f3a10;
    }
    ctx->pc = 0x3F3A08u;
    SET_GPR_U32(ctx, 31, 0x3F3A10u);
    ctx->pc = 0x3F3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A08u;
    // 0x3f3a0c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3A08u, 0x3F3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A10u;
label_3f3a10:
    // 0x3f3a10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3a14:
    // 0x3f3a14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3f3a14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3f3a18:
    // 0x3f3a18: 0xc136b24  jal         func_4DAC90
label_3f3a1c:
    if (ctx->pc == 0x3F3A1Cu) {
        ctx->pc = 0x3F3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A18u;
        // 0x3f3a1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3A20u;
        goto label_3f3a20;
    }
    ctx->pc = 0x3F3A18u;
    SET_GPR_U32(ctx, 31, 0x3F3A20u);
    ctx->pc = 0x3F3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A18u;
    // 0x3f3a1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F3A18u, 0x3F3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A20u;
label_3f3a20:
    // 0x3f3a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3a24:
    // 0x3f3a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a28:
    // 0x3f3a28: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3f3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3f3a2c:
    // 0x3f3a2c: 0xc0cd4ee  jal         func_3353B8
label_3f3a30:
    if (ctx->pc == 0x3F3A30u) {
        ctx->pc = 0x3F3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A2Cu;
        // 0x3f3a30: 0xe7b6003c  swc1        $f22, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3A34u;
        goto label_3f3a34;
    }
    ctx->pc = 0x3F3A2Cu;
    SET_GPR_U32(ctx, 31, 0x3F3A34u);
    ctx->pc = 0x3F3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A2Cu;
    // 0x3f3a30: 0xe7b6003c  swc1        $f22, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F3A2Cu, 0x3F3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A34u;
label_3f3a34:
    // 0x3f3a34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f3a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3f3a38:
    // 0x3f3a38: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f3a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f3a3c:
    // 0x3f3a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f3a40:
    // 0x3f3a40: 0x24634718  addiu       $v1, $v1, 0x4718
    ctx->pc = 0x3f3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18200));
label_3f3a44:
    // 0x3f3a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f3a48:
    // 0x3f3a48: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x3f3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_3f3a4c:
    // 0x3f3a4c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3f3a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3f3a50:
    // 0x3f3a50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3a54:
    // 0x3f3a54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f3a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a58:
    // 0x3f3a58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3f3a58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3f3a5c:
    // 0x3f3a5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f3a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3a60:
    // 0x3f3a60: 0xc043f74  jal         func_10FDD0
label_3f3a64:
    if (ctx->pc == 0x3F3A64u) {
        ctx->pc = 0x3F3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A60u;
        // 0x3f3a64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3A68u;
        goto label_3f3a68;
    }
    ctx->pc = 0x3F3A60u;
    SET_GPR_U32(ctx, 31, 0x3F3A68u);
    ctx->pc = 0x3F3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A60u;
    // 0x3f3a64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3F3A60u, 0x3F3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A68u;
label_3f3a68:
    // 0x3f3a68: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x3f3a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_3f3a6c:
    // 0x3f3a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f3a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3a70:
    // 0x3f3a70: 0x0  nop
    ctx->pc = 0x3f3a70u;
    // NOP
label_3f3a74:
    // 0x3f3a74: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3f3a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3a78:
    // 0x3f3a78: 0x0  nop
    ctx->pc = 0x3f3a78u;
    // NOP
label_3f3a7c:
    // 0x3f3a7c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_3f3a80:
    if (ctx->pc == 0x3F3A80u) {
        ctx->pc = 0x3F3A84u;
        goto label_3f3a84;
    }
    ctx->pc = 0x3F3A7Cu;
    {
        const bool branch_taken_0x3f3a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3a7c) {
            ctx->pc = 0x3F3AE0u;
            goto label_3f3ae0;
        }
    }
    ctx->pc = 0x3F3A84u;
label_3f3a84:
    // 0x3f3a84: 0xc0e87c0  jal         func_3A1F00
label_3f3a88:
    if (ctx->pc == 0x3F3A88u) {
        ctx->pc = 0x3F3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A84u;
        // 0x3f3a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3A8Cu;
        goto label_3f3a8c;
    }
    ctx->pc = 0x3F3A84u;
    SET_GPR_U32(ctx, 31, 0x3F3A8Cu);
    ctx->pc = 0x3F3A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A84u;
    // 0x3f3a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F3A84u, 0x3F3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A8Cu;
label_3f3a8c:
    // 0x3f3a8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3a8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3a90:
    // 0x3f3a90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3a94:
    // 0x3f3a94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f3a94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f3a98:
    // 0x3f3a98: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3f3a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f3a9c:
    // 0x3f3a9c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3f3a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f3aa0:
    // 0x3f3aa0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3f3aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f3aa4:
    // 0x3f3aa4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3f3aa4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3f3aa8:
    // 0x3f3aa8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3f3aa8u;
    // VWAITQ (Q already resolved in this runtime)
label_3f3aac:
    // 0x3f3aac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3f3aacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f3ab0:
    // 0x3f3ab0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f3ab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f3ab4:
    // 0x3f3ab4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3f3ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3f3ab8:
    // 0x3f3ab8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3abc:
    // 0x3f3abc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f3ac0:
    // 0x3f3ac0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f3ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ac4:
    // 0x3f3ac4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f3ac8:
    // 0x3f3ac8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3f3acc:
    // 0x3f3acc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f3accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3f3ad0:
    // 0x3f3ad0: 0xc136b24  jal         func_4DAC90
label_3f3ad4:
    if (ctx->pc == 0x3F3AD4u) {
        ctx->pc = 0x3F3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3AD0u;
        // 0x3f3ad4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3AD8u;
        goto label_3f3ad8;
    }
    ctx->pc = 0x3F3AD0u;
    SET_GPR_U32(ctx, 31, 0x3F3AD8u);
    ctx->pc = 0x3F3AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3AD0u;
    // 0x3f3ad4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F3AD0u, 0x3F3AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3AD8u;
label_3f3ad8:
    // 0x3f3ad8: 0x10000044  b           . + 4 + (0x44 << 2)
label_3f3adc:
    if (ctx->pc == 0x3F3ADCu) {
        ctx->pc = 0x3F3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3AD8u;
        // 0x3f3adc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3AE0u;
        goto label_3f3ae0;
    }
    ctx->pc = 0x3F3AD8u;
    {
        const bool branch_taken_0x3f3ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3AD8u;
        // 0x3f3adc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ad8) {
            ctx->pc = 0x3F3BECu;
            goto label_3f3bec;
        }
    }
    ctx->pc = 0x3F3AE0u;
label_3f3ae0:
    // 0x3f3ae0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3f3ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3f3ae4:
    // 0x3f3ae4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f3ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3ae8:
    // 0x3f3ae8: 0x0  nop
    ctx->pc = 0x3f3ae8u;
    // NOP
label_3f3aec:
    // 0x3f3aec: 0x460dc834  c.lt.s      $f25, $f13
    ctx->pc = 0x3f3aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3af0:
    // 0x3f3af0: 0x0  nop
    ctx->pc = 0x3f3af0u;
    // NOP
label_3f3af4:
    // 0x3f3af4: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
label_3f3af8:
    if (ctx->pc == 0x3F3AF8u) {
        ctx->pc = 0x3F3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3AF4u;
        // 0x3f3af8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3AFCu;
        goto label_3f3afc;
    }
    ctx->pc = 0x3F3AF4u;
    {
        const bool branch_taken_0x3f3af4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3af4) {
            ctx->pc = 0x3F3AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3AF4u;
            // 0x3f3af8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3BECu;
            goto label_3f3bec;
        }
    }
    ctx->pc = 0x3F3AFCu;
label_3f3afc:
    // 0x3f3afc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f3afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f3b00:
    // 0x3f3b00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3b04:
    // 0x3f3b04: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f3b08:
    // 0x3f3b08: 0xc0cd508  jal         func_335420
label_3f3b0c:
    if (ctx->pc == 0x3F3B0Cu) {
        ctx->pc = 0x3F3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B08u;
        // 0x3f3b0c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B10u;
        goto label_3f3b10;
    }
    ctx->pc = 0x3F3B08u;
    SET_GPR_U32(ctx, 31, 0x3F3B10u);
    ctx->pc = 0x3F3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B08u;
    // 0x3f3b0c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3B08u, 0x3F3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B10u;
label_3f3b10:
    // 0x3f3b10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3b14:
    // 0x3f3b14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3f3b14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3f3b18:
    // 0x3f3b18: 0xc136b24  jal         func_4DAC90
label_3f3b1c:
    if (ctx->pc == 0x3F3B1Cu) {
        ctx->pc = 0x3F3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B18u;
        // 0x3f3b1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B20u;
        goto label_3f3b20;
    }
    ctx->pc = 0x3F3B18u;
    SET_GPR_U32(ctx, 31, 0x3F3B20u);
    ctx->pc = 0x3F3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B18u;
    // 0x3f3b1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F3B18u, 0x3F3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B20u;
label_3f3b20:
    // 0x3f3b20: 0x10000032  b           . + 4 + (0x32 << 2)
label_3f3b24:
    if (ctx->pc == 0x3F3B24u) {
        ctx->pc = 0x3F3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B20u;
        // 0x3f3b24: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B28u;
        goto label_3f3b28;
    }
    ctx->pc = 0x3F3B20u;
    {
        const bool branch_taken_0x3f3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B20u;
        // 0x3f3b24: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3b20) {
            ctx->pc = 0x3F3BECu;
            goto label_3f3bec;
        }
    }
    ctx->pc = 0x3F3B28u;
label_3f3b28:
    // 0x3f3b28: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3f3b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3f3b2c:
    // 0x3f3b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f3b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3b30:
    // 0x3f3b30: 0x26350010  addiu       $s5, $s1, 0x10
    ctx->pc = 0x3f3b30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3f3b34:
    // 0x3f3b34: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3f3b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3b38:
    // 0x3f3b38: 0x0  nop
    ctx->pc = 0x3f3b38u;
    // NOP
label_3f3b3c:
    // 0x3f3b3c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_3f3b40:
    if (ctx->pc == 0x3F3B40u) {
        ctx->pc = 0x3F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B3Cu;
        // 0x3f3b40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B44u;
        goto label_3f3b44;
    }
    ctx->pc = 0x3F3B3Cu;
    {
        const bool branch_taken_0x3f3b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B3Cu;
        // 0x3f3b40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3b3c) {
            ctx->pc = 0x3F3BE8u;
            goto label_3f3be8;
        }
    }
    ctx->pc = 0x3F3B44u;
label_3f3b44:
    // 0x3f3b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f3b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3b48:
    // 0x3f3b48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f3b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3b4c:
    // 0x3f3b4c: 0x0  nop
    ctx->pc = 0x3f3b4cu;
    // NOP
label_3f3b50:
    // 0x3f3b50: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x3f3b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3b54:
    // 0x3f3b54: 0x0  nop
    ctx->pc = 0x3f3b54u;
    // NOP
label_3f3b58:
    // 0x3f3b58: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_3f3b5c:
    if (ctx->pc == 0x3F3B5Cu) {
        ctx->pc = 0x3F3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B58u;
        // 0x3f3b5c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B60u;
        goto label_3f3b60;
    }
    ctx->pc = 0x3F3B58u;
    {
        const bool branch_taken_0x3f3b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3b58) {
            ctx->pc = 0x3F3B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3B58u;
            // 0x3f3b5c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3BECu;
            goto label_3f3bec;
        }
    }
    ctx->pc = 0x3F3B60u;
label_3f3b60:
    // 0x3f3b60: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3f3b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3f3b64:
    // 0x3f3b64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3f3b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3f3b68:
    // 0x3f3b68: 0xc0e87c0  jal         func_3A1F00
label_3f3b6c:
    if (ctx->pc == 0x3F3B6Cu) {
        ctx->pc = 0x3F3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B68u;
        // 0x3f3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B70u;
        goto label_3f3b70;
    }
    ctx->pc = 0x3F3B68u;
    SET_GPR_U32(ctx, 31, 0x3F3B70u);
    ctx->pc = 0x3F3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B68u;
    // 0x3f3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F3B68u, 0x3F3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B70u;
label_3f3b70:
    // 0x3f3b70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3f3b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3f3b74:
    // 0x3f3b74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f3b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f3b78:
    // 0x3f3b78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3b78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3b7c:
    // 0x3f3b7c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3f3b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3f3b80:
    // 0x3f3b80: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3f3b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3f3b84:
    // 0x3f3b84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f3b84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f3b88:
    // 0x3f3b88: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f3b8c:
    // 0x3f3b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b90:
    // 0x3f3b90: 0xc0cd508  jal         func_335420
label_3f3b94:
    if (ctx->pc == 0x3F3B94u) {
        ctx->pc = 0x3F3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B90u;
        // 0x3f3b94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3B98u;
        goto label_3f3b98;
    }
    ctx->pc = 0x3F3B90u;
    SET_GPR_U32(ctx, 31, 0x3F3B98u);
    ctx->pc = 0x3F3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B90u;
    // 0x3f3b94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3B90u, 0x3F3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B98u;
label_3f3b98:
    // 0x3f3b98: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3f3b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3b9c:
    // 0x3f3b9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f3b9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f3ba0:
    // 0x3f3ba0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3f3ba0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3f3ba4:
    // 0x3f3ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ba8:
    // 0x3f3ba8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3f3ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f3bac:
    // 0x3f3bac: 0xc0cd508  jal         func_335420
label_3f3bb0:
    if (ctx->pc == 0x3F3BB0u) {
        ctx->pc = 0x3F3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BACu;
        // 0x3f3bb0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3BB4u;
        goto label_3f3bb4;
    }
    ctx->pc = 0x3F3BACu;
    SET_GPR_U32(ctx, 31, 0x3F3BB4u);
    ctx->pc = 0x3F3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BACu;
    // 0x3f3bb0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3BACu, 0x3F3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BB4u;
label_3f3bb4:
    // 0x3f3bb4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3f3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3bb8:
    // 0x3f3bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bbc:
    // 0x3f3bbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f3bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f3bc0:
    // 0x3f3bc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3bc4:
    // 0x3f3bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3f3bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f3bc8:
    // 0x3f3bc8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3f3bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3f3bcc:
    // 0x3f3bcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f3bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3bd0:
    // 0x3f3bd0: 0xc0cd508  jal         func_335420
label_3f3bd4:
    if (ctx->pc == 0x3F3BD4u) {
        ctx->pc = 0x3F3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BD0u;
        // 0x3f3bd4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3BD8u;
        goto label_3f3bd8;
    }
    ctx->pc = 0x3F3BD0u;
    SET_GPR_U32(ctx, 31, 0x3F3BD8u);
    ctx->pc = 0x3F3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BD0u;
    // 0x3f3bd4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3BD0u, 0x3F3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BD8u;
label_3f3bd8:
    // 0x3f3bd8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3bdc:
    // 0x3f3bdc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3f3bdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3f3be0:
    // 0x3f3be0: 0xc136b24  jal         func_4DAC90
label_3f3be4:
    if (ctx->pc == 0x3F3BE4u) {
        ctx->pc = 0x3F3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BE0u;
        // 0x3f3be4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3BE8u;
        goto label_3f3be8;
    }
    ctx->pc = 0x3F3BE0u;
    SET_GPR_U32(ctx, 31, 0x3F3BE8u);
    ctx->pc = 0x3F3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BE0u;
    // 0x3f3be4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F3BE0u, 0x3F3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BE8u;
label_3f3be8:
    // 0x3f3be8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f3bec:
    // 0x3f3bec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f3becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3bf0:
    // 0x3f3bf0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3f3bf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bf4:
    // 0x3f3bf4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f3bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f3bf8:
    // 0x3f3bf8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f3bfc:
    // 0x3f3bfc: 0x40f809  jalr        $v0
label_3f3c00:
    if (ctx->pc == 0x3F3C00u) {
        ctx->pc = 0x3F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BFCu;
        // 0x3f3c00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3C04u;
        goto label_3f3c04;
    }
    ctx->pc = 0x3F3BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3C04u);
        ctx->pc = 0x3F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BFCu;
        // 0x3f3c00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3BFCu, 0x3F3C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3C04u;
label_3f3c04:
    // 0x3f3c04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3f3c08:
    // 0x3f3c08: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3f3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f3c0c:
    // 0x3f3c0c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3f3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3f3c10:
    // 0x3f3c10: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3f3c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f3c14:
    // 0x3f3c14: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3f3c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3f3c18:
    // 0x3f3c18: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f3c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f3c1c:
    // 0x3f3c1c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_3f3c20:
    if (ctx->pc == 0x3F3C20u) {
        ctx->pc = 0x3F3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C1Cu;
        // 0x3f3c20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3C24u;
        goto label_3f3c24;
    }
    ctx->pc = 0x3F3C1Cu;
    {
        const bool branch_taken_0x3f3c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c1c) {
            ctx->pc = 0x3F3C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3C1Cu;
            // 0x3f3c20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C24u;
            goto label_3f3c24;
        }
    }
    ctx->pc = 0x3F3C24u;
label_3f3c24:
    // 0x3f3c24: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3f3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f3c28:
    // 0x3f3c28: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3f3c28u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3f3c2c:
    // 0x3f3c2c: 0x1810  mfhi        $v1
    ctx->pc = 0x3f3c2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3f3c30:
    // 0x3f3c30: 0x5460004c  bnel        $v1, $zero, . + 4 + (0x4C << 2)
label_3f3c34:
    if (ctx->pc == 0x3F3C34u) {
        ctx->pc = 0x3F3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C30u;
        // 0x3f3c34: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3C38u;
        goto label_3f3c38;
    }
    ctx->pc = 0x3F3C30u;
    {
        const bool branch_taken_0x3f3c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c30) {
            ctx->pc = 0x3F3C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3C30u;
            // 0x3f3c34: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3D64u;
            goto label_3f3d64;
        }
    }
    ctx->pc = 0x3F3C38u;
label_3f3c38:
    // 0x3f3c38: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3f3c38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3f3c3c:
    // 0x3f3c3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f3c40:
    // 0x3f3c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f3c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3c44:
    // 0x3f3c44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f3c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f3c48:
    // 0x3f3c48: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x3f3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_3f3c4c:
    // 0x3f3c4c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f3c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f3c50:
    // 0x3f3c50: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3f3c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f3c54:
    // 0x3f3c54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3c54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3c58:
    // 0x3f3c58: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x3f3c58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f3c5c:
    // 0x3f3c5c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3f3c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c60:
    // 0x3f3c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3c64:
    // 0x3f3c64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3f3c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3f3c68:
    // 0x3f3c68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3c6c:
    // 0x3f3c6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f3c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3c70:
    // 0x3f3c70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f3c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f3c74:
    // 0x3f3c74: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f3c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f3c78:
    // 0x3f3c78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f3c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3c7c:
    // 0x3f3c7c: 0xc0e8db8  jal         func_3A36E0
label_3f3c80:
    if (ctx->pc == 0x3F3C80u) {
        ctx->pc = 0x3F3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C7Cu;
        // 0x3f3c80: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3C84u;
        goto label_3f3c84;
    }
    ctx->pc = 0x3F3C7Cu;
    SET_GPR_U32(ctx, 31, 0x3F3C84u);
    ctx->pc = 0x3F3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3C7Cu;
    // 0x3f3c80: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3F3C7Cu, 0x3F3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C84u;
label_3f3c84:
    // 0x3f3c84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3f3c88:
    if (ctx->pc == 0x3F3C88u) {
        ctx->pc = 0x3F3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C84u;
        // 0x3f3c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3C8Cu;
        goto label_3f3c8c;
    }
    ctx->pc = 0x3F3C84u;
    {
        const bool branch_taken_0x3f3c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C84u;
        // 0x3f3c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3c84) {
            ctx->pc = 0x3F3CBCu;
            goto label_3f3cbc;
        }
    }
    ctx->pc = 0x3F3C8Cu;
label_3f3c8c:
    // 0x3f3c8c: 0xc0e8f5c  jal         func_3A3D70
label_3f3c90:
    if (ctx->pc == 0x3F3C90u) {
        ctx->pc = 0x3F3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C8Cu;
        // 0x3f3c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3C94u;
        goto label_3f3c94;
    }
    ctx->pc = 0x3F3C8Cu;
    SET_GPR_U32(ctx, 31, 0x3F3C94u);
    ctx->pc = 0x3F3C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3C8Cu;
    // 0x3f3c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3F3C8Cu, 0x3F3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C94u;
label_3f3c94:
    // 0x3f3c94: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3f3c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f3c98:
    // 0x3f3c98: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3f3c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3f3c9c:
    // 0x3f3c9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f3c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f3ca0:
    // 0x3f3ca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f3ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f3ca4:
    // 0x3f3ca4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f3ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f3ca8:
    // 0x3f3ca8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3f3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3cac:
    // 0x3f3cac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f3cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f3cb0:
    // 0x3f3cb0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3f3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3f3cb4:
    // 0x3f3cb4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f3cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f3cb8:
    // 0x3f3cb8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3f3cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3f3cbc:
    // 0x3f3cbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f3cc0:
    // 0x3f3cc0: 0x7a270020  lq          $a3, 0x20($s1)
    ctx->pc = 0x3f3cc0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3f3cc4:
    // 0x3f3cc4: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x3f3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3f3cc8:
    // 0x3f3cc8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3cc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3ccc:
    // 0x3f3ccc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x3f3cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3f3cd0:
    // 0x3f3cd0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f3cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f3cd4:
    // 0x3f3cd4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f3cd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3cd8:
    // 0x3f3cd8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f3cd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f3cdc:
    // 0x3f3cdc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f3cdcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f3ce0:
    // 0x3f3ce0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f3ce0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3ce4:
    // 0x3f3ce4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f3ce4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f3ce8:
    // 0x3f3ce8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f3ce8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f3cec:
    // 0x3f3cec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f3cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3cf0:
    // 0x3f3cf0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f3cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f3cf4:
    // 0x3f3cf4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f3cf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f3cf8:
    // 0x3f3cf8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f3cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f3cfc:
    // 0x3f3cfc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f3cfcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f3d00:
    // 0x3f3d00: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f3d00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3d04:
    // 0x3f3d04: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f3d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f3d08:
    // 0x3f3d08: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f3d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f3d0c:
    // 0x3f3d0c: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x3f3d0cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f3d10:
    // 0x3f3d10: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f3d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f3d14:
    // 0x3f3d14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3d18:
    // 0x3f3d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f3d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d1c:
    // 0x3f3d1c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3f3d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3f3d20:
    // 0x3f3d20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f3d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d24:
    // 0x3f3d24: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x3f3d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
label_3f3d28:
    // 0x3f3d28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f3d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d2c:
    // 0x3f3d2c: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x3f3d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
label_3f3d30:
    // 0x3f3d30: 0xc0e8db8  jal         func_3A36E0
label_3f3d34:
    if (ctx->pc == 0x3F3D34u) {
        ctx->pc = 0x3F3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D30u;
        // 0x3f3d34: 0x7fa70070  sq          $a3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3D38u;
        goto label_3f3d38;
    }
    ctx->pc = 0x3F3D30u;
    SET_GPR_U32(ctx, 31, 0x3F3D38u);
    ctx->pc = 0x3F3D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3D30u;
    // 0x3f3d34: 0x7fa70070  sq          $a3, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3F3D30u, 0x3F3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3D38u;
label_3f3d38:
    // 0x3f3d38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3f3d3c:
    if (ctx->pc == 0x3F3D3Cu) {
        ctx->pc = 0x3F3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D38u;
        // 0x3f3d3c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3D40u;
        goto label_3f3d40;
    }
    ctx->pc = 0x3F3D38u;
    {
        const bool branch_taken_0x3f3d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D38u;
        // 0x3f3d3c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d38) {
            ctx->pc = 0x3F3D60u;
            goto label_3f3d60;
        }
    }
    ctx->pc = 0x3F3D40u;
label_3f3d40:
    // 0x3f3d40: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3f3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f3d44:
    // 0x3f3d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d48:
    // 0x3f3d48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f3d4c:
    // 0x3f3d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f3d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f3d50:
    // 0x3f3d50: 0xc0e8f5c  jal         func_3A3D70
label_3f3d54:
    if (ctx->pc == 0x3F3D54u) {
        ctx->pc = 0x3F3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D50u;
        // 0x3f3d54: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3D58u;
        goto label_3f3d58;
    }
    ctx->pc = 0x3F3D50u;
    SET_GPR_U32(ctx, 31, 0x3F3D58u);
    ctx->pc = 0x3F3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3D50u;
    // 0x3f3d54: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3F3D50u, 0x3F3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3D58u;
label_3f3d58:
    // 0x3f3d58: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3f3d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f3d5c:
    // 0x3f3d5c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f3d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f3d60:
    // 0x3f3d60: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3f3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f3d64:
    // 0x3f3d64: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3f3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3f3d68:
    // 0x3f3d68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3f3d6c:
    if (ctx->pc == 0x3F3D6Cu) {
        ctx->pc = 0x3F3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D68u;
        // 0x3f3d6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3D70u;
        goto label_3f3d70;
    }
    ctx->pc = 0x3F3D68u;
    {
        const bool branch_taken_0x3f3d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d68) {
            ctx->pc = 0x3F3D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3D68u;
            // 0x3f3d6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3D70u;
            goto label_3f3d70;
        }
    }
    ctx->pc = 0x3F3D70u;
label_3f3d70:
    // 0x3f3d70: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x3f3d70u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3f3d74:
    // 0x3f3d74: 0x1810  mfhi        $v1
    ctx->pc = 0x3f3d74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3f3d78:
    // 0x3f3d78: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_3f3d7c:
    if (ctx->pc == 0x3F3D7Cu) {
        ctx->pc = 0x3F3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D78u;
        // 0x3f3d7c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3D80u;
        goto label_3f3d80;
    }
    ctx->pc = 0x3F3D78u;
    {
        const bool branch_taken_0x3f3d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d78) {
            ctx->pc = 0x3F3D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3D78u;
            // 0x3f3d7c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3DCCu;
            goto label_3f3dcc;
        }
    }
    ctx->pc = 0x3F3D80u;
label_3f3d80:
    // 0x3f3d80: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f3d84:
    // 0x3f3d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3d88:
    // 0x3f3d88: 0xc0cd4ee  jal         func_3353B8
label_3f3d8c:
    if (ctx->pc == 0x3F3D8Cu) {
        ctx->pc = 0x3F3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D88u;
        // 0x3f3d8c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3D90u;
        goto label_3f3d90;
    }
    ctx->pc = 0x3F3D88u;
    SET_GPR_U32(ctx, 31, 0x3F3D90u);
    ctx->pc = 0x3F3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3D88u;
    // 0x3f3d8c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F3D88u, 0x3F3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3D90u;
label_3f3d90:
    // 0x3f3d90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3f3d94:
    // 0x3f3d94: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f3d98:
    // 0x3f3d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f3d9c:
    // 0x3f3d9c: 0x24634720  addiu       $v1, $v1, 0x4720
    ctx->pc = 0x3f3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18208));
label_3f3da0:
    // 0x3f3da0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f3da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3da4:
    // 0x3f3da4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3da8:
    // 0x3f3da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f3dac:
    // 0x3f3dac: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x3f3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_3f3db0:
    // 0x3f3db0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f3db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3db4:
    // 0x3f3db4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f3db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3db8:
    // 0x3f3db8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3f3db8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3f3dbc:
    // 0x3f3dbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f3dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3dc0:
    // 0x3f3dc0: 0xc043f74  jal         func_10FDD0
label_3f3dc4:
    if (ctx->pc == 0x3F3DC4u) {
        ctx->pc = 0x3F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DC0u;
        // 0x3f3dc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3DC8u;
        goto label_3f3dc8;
    }
    ctx->pc = 0x3F3DC0u;
    SET_GPR_U32(ctx, 31, 0x3F3DC8u);
    ctx->pc = 0x3F3DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3DC0u;
    // 0x3f3dc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3F3DC0u, 0x3F3DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3DC8u;
label_3f3dc8:
    // 0x3f3dc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f3dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f3dcc:
    // 0x3f3dcc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f3dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f3dd0:
    // 0x3f3dd0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f3dd4:
    // 0x3f3dd4: 0x40f809  jalr        $v0
label_3f3dd8:
    if (ctx->pc == 0x3F3DD8u) {
        ctx->pc = 0x3F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DD4u;
        // 0x3f3dd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3DDCu;
        goto label_3f3ddc;
    }
    ctx->pc = 0x3F3DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3DDCu);
        ctx->pc = 0x3F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DD4u;
        // 0x3f3dd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3DD4u, 0x3F3DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3DDCu;
label_3f3ddc:
    // 0x3f3ddc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3f3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3f3de0:
    // 0x3f3de0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f3de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f3de4:
    // 0x3f3de4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3f3de8:
    if (ctx->pc == 0x3F3DE8u) {
        ctx->pc = 0x3F3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DE4u;
        // 0x3f3de8: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3DECu;
        goto label_3f3dec;
    }
    ctx->pc = 0x3F3DE4u;
    {
        const bool branch_taken_0x3f3de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DE4u;
        // 0x3f3de8: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3de4) {
            ctx->pc = 0x3F3EBCu;
            goto label_3f3ebc;
        }
    }
    ctx->pc = 0x3F3DECu;
label_3f3dec:
    // 0x3f3dec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f3decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f3df0:
    // 0x3f3df0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3f3df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3df4:
    // 0x3f3df4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f3df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3df8:
    // 0x3f3df8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f3df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3dfc:
    // 0x3f3dfc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3f3dfcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3f3e00:
    // 0x3f3e00: 0x4a0003bf  vwaitq
    ctx->pc = 0x3f3e00u;
    // VWAITQ (Q already resolved in this runtime)
label_3f3e04:
    // 0x3f3e04: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3f3e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3e08:
    // 0x3f3e08: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3f3e08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3f3e0c:
    // 0x3f3e0c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3f3e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f3e10:
    // 0x3f3e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f3e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3e14:
    // 0x3f3e14: 0x0  nop
    ctx->pc = 0x3f3e14u;
    // NOP
label_3f3e18:
    // 0x3f3e18: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3f3e18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3e1c:
    // 0x3f3e1c: 0x0  nop
    ctx->pc = 0x3f3e1cu;
    // NOP
label_3f3e20:
    // 0x3f3e20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3f3e24:
    if (ctx->pc == 0x3F3E24u) {
        ctx->pc = 0x3F3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E20u;
        // 0x3f3e24: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3E28u;
        goto label_3f3e28;
    }
    ctx->pc = 0x3F3E20u;
    {
        const bool branch_taken_0x3f3e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E20u;
        // 0x3f3e24: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e20) {
            ctx->pc = 0x3F3E40u;
            goto label_3f3e40;
        }
    }
    ctx->pc = 0x3F3E28u;
label_3f3e28:
    // 0x3f3e28: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x3f3e28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
label_3f3e2c:
    // 0x3f3e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f3e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f3e30:
    // 0x3f3e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f3e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3e34:
    // 0x3f3e34: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f3e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f3e38:
    // 0x3f3e38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3f3e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3f3e3c:
    // 0x3f3e3c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f3e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f3e40:
    // 0x3f3e40: 0xc0e87c0  jal         func_3A1F00
label_3f3e44:
    if (ctx->pc == 0x3F3E44u) {
        ctx->pc = 0x3F3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E40u;
        // 0x3f3e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3E48u;
        goto label_3f3e48;
    }
    ctx->pc = 0x3F3E40u;
    SET_GPR_U32(ctx, 31, 0x3F3E48u);
    ctx->pc = 0x3F3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E40u;
    // 0x3f3e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F3E40u, 0x3F3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3E48u;
label_3f3e48:
    // 0x3f3e48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3e4c:
    // 0x3f3e4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3f3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f3e50:
    // 0x3f3e50: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3f3e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f3e54:
    // 0x3f3e54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f3e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e58:
    // 0x3f3e58: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f3e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f3e5c:
    // 0x3f3e5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f3e5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f3e60:
    // 0x3f3e60: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f3e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3e64:
    // 0x3f3e64: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f3e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3e68:
    // 0x3f3e68: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f3e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3e6c:
    // 0x3f3e6c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3f3e6cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_3f3e70:
    // 0x3f3e70: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x3f3e70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3e74:
    // 0x3f3e74: 0xc136b24  jal         func_4DAC90
label_3f3e78:
    if (ctx->pc == 0x3F3E78u) {
        ctx->pc = 0x3F3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E74u;
        // 0x3f3e78: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3E7Cu;
        goto label_3f3e7c;
    }
    ctx->pc = 0x3F3E74u;
    SET_GPR_U32(ctx, 31, 0x3F3E7Cu);
    ctx->pc = 0x3F3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E74u;
    // 0x3f3e78: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F3E74u, 0x3F3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3E7Cu;
label_3f3e7c:
    // 0x3f3e7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3e80:
    // 0x3f3e80: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f3e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f3e84:
    // 0x3f3e84: 0xc136afa  jal         func_4DABE8
label_3f3e88:
    if (ctx->pc == 0x3F3E88u) {
        ctx->pc = 0x3F3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E84u;
        // 0x3f3e88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3E8Cu;
        goto label_3f3e8c;
    }
    ctx->pc = 0x3F3E84u;
    SET_GPR_U32(ctx, 31, 0x3F3E8Cu);
    ctx->pc = 0x3F3E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E84u;
    // 0x3f3e88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3F3E84u, 0x3F3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3E8Cu;
label_3f3e8c:
    // 0x3f3e8c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x3f3e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3f3e90:
    // 0x3f3e90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3f3e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e94:
    // 0x3f3e94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f3e98:
    // 0x3f3e98: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3f3e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3f3e9c:
    // 0x3f3e9c: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x3f3e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f3ea0:
    // 0x3f3ea0: 0xc0f809  jalr        $a2
label_3f3ea4:
    if (ctx->pc == 0x3F3EA4u) {
        ctx->pc = 0x3F3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3EA0u;
        // 0x3f3ea4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3EA8u;
        goto label_3f3ea8;
    }
    ctx->pc = 0x3F3EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3F3EA8u);
        ctx->pc = 0x3F3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3EA0u;
        // 0x3f3ea4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3EA0u, 0x3F3EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3EA8u;
label_3f3ea8:
    // 0x3f3ea8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3f3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f3eac:
    // 0x3f3eac: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3f3eb0:
    // 0x3f3eb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f3eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f3eb4:
    // 0x3f3eb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f3eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f3eb8:
    // 0x3f3eb8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3f3eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3f3ebc:
    // 0x3f3ebc: 0xc0e87c0  jal         func_3A1F00
label_3f3ec0:
    if (ctx->pc == 0x3F3EC0u) {
        ctx->pc = 0x3F3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3EBCu;
        // 0x3f3ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3EC4u;
        goto label_3f3ec4;
    }
    ctx->pc = 0x3F3EBCu;
    SET_GPR_U32(ctx, 31, 0x3F3EC4u);
    ctx->pc = 0x3F3EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EBCu;
    // 0x3f3ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F3EBCu, 0x3F3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EC4u;
label_3f3ec4:
    // 0x3f3ec4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3ec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3ec8:
    // 0x3f3ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ecc:
    // 0x3f3ecc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3f3eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f3ed0:
    // 0x3f3ed0: 0xc0e9364  jal         func_3A4D90
label_3f3ed4:
    if (ctx->pc == 0x3F3ED4u) {
        ctx->pc = 0x3F3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3ED0u;
        // 0x3f3ed4: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3ED8u;
        goto label_3f3ed8;
    }
    ctx->pc = 0x3F3ED0u;
    SET_GPR_U32(ctx, 31, 0x3F3ED8u);
    ctx->pc = 0x3F3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3ED0u;
    // 0x3f3ed4: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3F3ED0u, 0x3F3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3ED8u;
label_3f3ed8:
    // 0x3f3ed8: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3f3ed8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f3edc:
    // 0x3f3edc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f3edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ee0:
    // 0x3f3ee0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f3ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f3ee4:
    // 0x3f3ee4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f3ee8:
    // 0x3f3ee8: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x3f3ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
label_3f3eec:
    // 0x3f3eec: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3f3eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3f3ef0:
    // 0x3f3ef0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3f3ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3f3ef4:
    // 0x3f3ef4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3f3ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3f3ef8:
    // 0x3f3ef8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3f3ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3f3efc:
    // 0x3f3efc: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3f3efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f3f00:
    // 0x3f3f00: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3f3f00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f3f04:
    // 0x3f3f04: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x3f3f04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f3f08:
    // 0x3f3f08: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3f3f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3f3f0c:
    // 0x3f3f0c: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x3f3f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3f3f10:
    // 0x3f3f10: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x3f3f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3f3f14:
    // 0x3f3f14: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x3f3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3f3f18:
    // 0x3f3f18: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x3f3f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f3f1c:
    // 0x3f3f1c: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x3f3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f3f20:
    // 0x3f3f20: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3f3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f3f24:
    // 0x3f3f24: 0x3e00008  jr          $ra
label_3f3f28:
    if (ctx->pc == 0x3F3F28u) {
        ctx->pc = 0x3F3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F24u;
        // 0x3f3f28: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3F2Cu;
        goto label_3f3f2c;
    }
    ctx->pc = 0x3F3F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F24u;
        // 0x3f3f28: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3F2Cu;
label_3f3f2c:
    // 0x3f3f2c: 0x0  nop
    ctx->pc = 0x3f3f2cu;
    // NOP
    ctx->pc = 0x3f3f30u;
}
