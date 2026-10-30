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

// Function: sub_001E3828
// Address: 0x1e3828 - 0x1e3d98
void sub_001E3828_0x1e3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3828_0x1e3828");
#endif

    switch (ctx->pc) {
        case 0x1e3828u: goto label_1e3828;
        case 0x1e382cu: goto label_1e382c;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3834u: goto label_1e3834;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e383cu: goto label_1e383c;
        case 0x1e3840u: goto label_1e3840;
        case 0x1e3844u: goto label_1e3844;
        case 0x1e3848u: goto label_1e3848;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e3850u: goto label_1e3850;
        case 0x1e3854u: goto label_1e3854;
        case 0x1e3858u: goto label_1e3858;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3860u: goto label_1e3860;
        case 0x1e3864u: goto label_1e3864;
        case 0x1e3868u: goto label_1e3868;
        case 0x1e386cu: goto label_1e386c;
        case 0x1e3870u: goto label_1e3870;
        case 0x1e3874u: goto label_1e3874;
        case 0x1e3878u: goto label_1e3878;
        case 0x1e387cu: goto label_1e387c;
        case 0x1e3880u: goto label_1e3880;
        case 0x1e3884u: goto label_1e3884;
        case 0x1e3888u: goto label_1e3888;
        case 0x1e388cu: goto label_1e388c;
        case 0x1e3890u: goto label_1e3890;
        case 0x1e3894u: goto label_1e3894;
        case 0x1e3898u: goto label_1e3898;
        case 0x1e389cu: goto label_1e389c;
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38a4u: goto label_1e38a4;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38acu: goto label_1e38ac;
        case 0x1e38b0u: goto label_1e38b0;
        case 0x1e38b4u: goto label_1e38b4;
        case 0x1e38b8u: goto label_1e38b8;
        case 0x1e38bcu: goto label_1e38bc;
        case 0x1e38c0u: goto label_1e38c0;
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e38c8u: goto label_1e38c8;
        case 0x1e38ccu: goto label_1e38cc;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38d4u: goto label_1e38d4;
        case 0x1e38d8u: goto label_1e38d8;
        case 0x1e38dcu: goto label_1e38dc;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e38e8u: goto label_1e38e8;
        case 0x1e38ecu: goto label_1e38ec;
        case 0x1e38f0u: goto label_1e38f0;
        case 0x1e38f4u: goto label_1e38f4;
        case 0x1e38f8u: goto label_1e38f8;
        case 0x1e38fcu: goto label_1e38fc;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3904u: goto label_1e3904;
        case 0x1e3908u: goto label_1e3908;
        case 0x1e390cu: goto label_1e390c;
        case 0x1e3910u: goto label_1e3910;
        case 0x1e3914u: goto label_1e3914;
        case 0x1e3918u: goto label_1e3918;
        case 0x1e391cu: goto label_1e391c;
        case 0x1e3920u: goto label_1e3920;
        case 0x1e3924u: goto label_1e3924;
        case 0x1e3928u: goto label_1e3928;
        case 0x1e392cu: goto label_1e392c;
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3934u: goto label_1e3934;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e393cu: goto label_1e393c;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e3944u: goto label_1e3944;
        case 0x1e3948u: goto label_1e3948;
        case 0x1e394cu: goto label_1e394c;
        case 0x1e3950u: goto label_1e3950;
        case 0x1e3954u: goto label_1e3954;
        case 0x1e3958u: goto label_1e3958;
        case 0x1e395cu: goto label_1e395c;
        case 0x1e3960u: goto label_1e3960;
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3968u: goto label_1e3968;
        case 0x1e396cu: goto label_1e396c;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e3974u: goto label_1e3974;
        case 0x1e3978u: goto label_1e3978;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3984u: goto label_1e3984;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e398cu: goto label_1e398c;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e3994u: goto label_1e3994;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a0u: goto label_1e39a0;
        case 0x1e39a4u: goto label_1e39a4;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39acu: goto label_1e39ac;
        case 0x1e39b0u: goto label_1e39b0;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39bcu: goto label_1e39bc;
        case 0x1e39c0u: goto label_1e39c0;
        case 0x1e39c4u: goto label_1e39c4;
        case 0x1e39c8u: goto label_1e39c8;
        case 0x1e39ccu: goto label_1e39cc;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39d4u: goto label_1e39d4;
        case 0x1e39d8u: goto label_1e39d8;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39e0u: goto label_1e39e0;
        case 0x1e39e4u: goto label_1e39e4;
        case 0x1e39e8u: goto label_1e39e8;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e39f0u: goto label_1e39f0;
        case 0x1e39f4u: goto label_1e39f4;
        case 0x1e39f8u: goto label_1e39f8;
        case 0x1e39fcu: goto label_1e39fc;
        case 0x1e3a00u: goto label_1e3a00;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a08u: goto label_1e3a08;
        case 0x1e3a0cu: goto label_1e3a0c;
        case 0x1e3a10u: goto label_1e3a10;
        case 0x1e3a14u: goto label_1e3a14;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a1cu: goto label_1e3a1c;
        case 0x1e3a20u: goto label_1e3a20;
        case 0x1e3a24u: goto label_1e3a24;
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a30u: goto label_1e3a30;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a38u: goto label_1e3a38;
        case 0x1e3a3cu: goto label_1e3a3c;
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a44u: goto label_1e3a44;
        case 0x1e3a48u: goto label_1e3a48;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        case 0x1e3a5cu: goto label_1e3a5c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a64u: goto label_1e3a64;
        case 0x1e3a68u: goto label_1e3a68;
        case 0x1e3a6cu: goto label_1e3a6c;
        case 0x1e3a70u: goto label_1e3a70;
        case 0x1e3a74u: goto label_1e3a74;
        case 0x1e3a78u: goto label_1e3a78;
        case 0x1e3a7cu: goto label_1e3a7c;
        case 0x1e3a80u: goto label_1e3a80;
        case 0x1e3a84u: goto label_1e3a84;
        case 0x1e3a88u: goto label_1e3a88;
        case 0x1e3a8cu: goto label_1e3a8c;
        case 0x1e3a90u: goto label_1e3a90;
        case 0x1e3a94u: goto label_1e3a94;
        case 0x1e3a98u: goto label_1e3a98;
        case 0x1e3a9cu: goto label_1e3a9c;
        case 0x1e3aa0u: goto label_1e3aa0;
        case 0x1e3aa4u: goto label_1e3aa4;
        case 0x1e3aa8u: goto label_1e3aa8;
        case 0x1e3aacu: goto label_1e3aac;
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab4u: goto label_1e3ab4;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac0u: goto label_1e3ac0;
        case 0x1e3ac4u: goto label_1e3ac4;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3accu: goto label_1e3acc;
        case 0x1e3ad0u: goto label_1e3ad0;
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ad8u: goto label_1e3ad8;
        case 0x1e3adcu: goto label_1e3adc;
        case 0x1e3ae0u: goto label_1e3ae0;
        case 0x1e3ae4u: goto label_1e3ae4;
        case 0x1e3ae8u: goto label_1e3ae8;
        case 0x1e3aecu: goto label_1e3aec;
        case 0x1e3af0u: goto label_1e3af0;
        case 0x1e3af4u: goto label_1e3af4;
        case 0x1e3af8u: goto label_1e3af8;
        case 0x1e3afcu: goto label_1e3afc;
        case 0x1e3b00u: goto label_1e3b00;
        case 0x1e3b04u: goto label_1e3b04;
        case 0x1e3b08u: goto label_1e3b08;
        case 0x1e3b0cu: goto label_1e3b0c;
        case 0x1e3b10u: goto label_1e3b10;
        case 0x1e3b14u: goto label_1e3b14;
        case 0x1e3b18u: goto label_1e3b18;
        case 0x1e3b1cu: goto label_1e3b1c;
        case 0x1e3b20u: goto label_1e3b20;
        case 0x1e3b24u: goto label_1e3b24;
        case 0x1e3b28u: goto label_1e3b28;
        case 0x1e3b2cu: goto label_1e3b2c;
        case 0x1e3b30u: goto label_1e3b30;
        case 0x1e3b34u: goto label_1e3b34;
        case 0x1e3b38u: goto label_1e3b38;
        case 0x1e3b3cu: goto label_1e3b3c;
        case 0x1e3b40u: goto label_1e3b40;
        case 0x1e3b44u: goto label_1e3b44;
        case 0x1e3b48u: goto label_1e3b48;
        case 0x1e3b4cu: goto label_1e3b4c;
        case 0x1e3b50u: goto label_1e3b50;
        case 0x1e3b54u: goto label_1e3b54;
        case 0x1e3b58u: goto label_1e3b58;
        case 0x1e3b5cu: goto label_1e3b5c;
        case 0x1e3b60u: goto label_1e3b60;
        case 0x1e3b64u: goto label_1e3b64;
        case 0x1e3b68u: goto label_1e3b68;
        case 0x1e3b6cu: goto label_1e3b6c;
        case 0x1e3b70u: goto label_1e3b70;
        case 0x1e3b74u: goto label_1e3b74;
        case 0x1e3b78u: goto label_1e3b78;
        case 0x1e3b7cu: goto label_1e3b7c;
        case 0x1e3b80u: goto label_1e3b80;
        case 0x1e3b84u: goto label_1e3b84;
        case 0x1e3b88u: goto label_1e3b88;
        case 0x1e3b8cu: goto label_1e3b8c;
        case 0x1e3b90u: goto label_1e3b90;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3b9cu: goto label_1e3b9c;
        case 0x1e3ba0u: goto label_1e3ba0;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bacu: goto label_1e3bac;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bb8u: goto label_1e3bb8;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bc0u: goto label_1e3bc0;
        case 0x1e3bc4u: goto label_1e3bc4;
        case 0x1e3bc8u: goto label_1e3bc8;
        case 0x1e3bccu: goto label_1e3bcc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bd4u: goto label_1e3bd4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be0u: goto label_1e3be0;
        case 0x1e3be4u: goto label_1e3be4;
        case 0x1e3be8u: goto label_1e3be8;
        case 0x1e3becu: goto label_1e3bec;
        case 0x1e3bf0u: goto label_1e3bf0;
        case 0x1e3bf4u: goto label_1e3bf4;
        case 0x1e3bf8u: goto label_1e3bf8;
        case 0x1e3bfcu: goto label_1e3bfc;
        case 0x1e3c00u: goto label_1e3c00;
        case 0x1e3c04u: goto label_1e3c04;
        case 0x1e3c08u: goto label_1e3c08;
        case 0x1e3c0cu: goto label_1e3c0c;
        case 0x1e3c10u: goto label_1e3c10;
        case 0x1e3c14u: goto label_1e3c14;
        case 0x1e3c18u: goto label_1e3c18;
        case 0x1e3c1cu: goto label_1e3c1c;
        case 0x1e3c20u: goto label_1e3c20;
        case 0x1e3c24u: goto label_1e3c24;
        case 0x1e3c28u: goto label_1e3c28;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c30u: goto label_1e3c30;
        case 0x1e3c34u: goto label_1e3c34;
        case 0x1e3c38u: goto label_1e3c38;
        case 0x1e3c3cu: goto label_1e3c3c;
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c44u: goto label_1e3c44;
        case 0x1e3c48u: goto label_1e3c48;
        case 0x1e3c4cu: goto label_1e3c4c;
        case 0x1e3c50u: goto label_1e3c50;
        case 0x1e3c54u: goto label_1e3c54;
        case 0x1e3c58u: goto label_1e3c58;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c60u: goto label_1e3c60;
        case 0x1e3c64u: goto label_1e3c64;
        case 0x1e3c68u: goto label_1e3c68;
        case 0x1e3c6cu: goto label_1e3c6c;
        case 0x1e3c70u: goto label_1e3c70;
        case 0x1e3c74u: goto label_1e3c74;
        case 0x1e3c78u: goto label_1e3c78;
        case 0x1e3c7cu: goto label_1e3c7c;
        case 0x1e3c80u: goto label_1e3c80;
        case 0x1e3c84u: goto label_1e3c84;
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3c8cu: goto label_1e3c8c;
        case 0x1e3c90u: goto label_1e3c90;
        case 0x1e3c94u: goto label_1e3c94;
        case 0x1e3c98u: goto label_1e3c98;
        case 0x1e3c9cu: goto label_1e3c9c;
        case 0x1e3ca0u: goto label_1e3ca0;
        case 0x1e3ca4u: goto label_1e3ca4;
        case 0x1e3ca8u: goto label_1e3ca8;
        case 0x1e3cacu: goto label_1e3cac;
        case 0x1e3cb0u: goto label_1e3cb0;
        case 0x1e3cb4u: goto label_1e3cb4;
        case 0x1e3cb8u: goto label_1e3cb8;
        case 0x1e3cbcu: goto label_1e3cbc;
        case 0x1e3cc0u: goto label_1e3cc0;
        case 0x1e3cc4u: goto label_1e3cc4;
        case 0x1e3cc8u: goto label_1e3cc8;
        case 0x1e3cccu: goto label_1e3ccc;
        case 0x1e3cd0u: goto label_1e3cd0;
        case 0x1e3cd4u: goto label_1e3cd4;
        case 0x1e3cd8u: goto label_1e3cd8;
        case 0x1e3cdcu: goto label_1e3cdc;
        case 0x1e3ce0u: goto label_1e3ce0;
        case 0x1e3ce4u: goto label_1e3ce4;
        case 0x1e3ce8u: goto label_1e3ce8;
        case 0x1e3cecu: goto label_1e3cec;
        case 0x1e3cf0u: goto label_1e3cf0;
        case 0x1e3cf4u: goto label_1e3cf4;
        case 0x1e3cf8u: goto label_1e3cf8;
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d00u: goto label_1e3d00;
        case 0x1e3d04u: goto label_1e3d04;
        case 0x1e3d08u: goto label_1e3d08;
        case 0x1e3d0cu: goto label_1e3d0c;
        case 0x1e3d10u: goto label_1e3d10;
        case 0x1e3d14u: goto label_1e3d14;
        case 0x1e3d18u: goto label_1e3d18;
        case 0x1e3d1cu: goto label_1e3d1c;
        case 0x1e3d20u: goto label_1e3d20;
        case 0x1e3d24u: goto label_1e3d24;
        case 0x1e3d28u: goto label_1e3d28;
        case 0x1e3d2cu: goto label_1e3d2c;
        case 0x1e3d30u: goto label_1e3d30;
        case 0x1e3d34u: goto label_1e3d34;
        case 0x1e3d38u: goto label_1e3d38;
        case 0x1e3d3cu: goto label_1e3d3c;
        case 0x1e3d40u: goto label_1e3d40;
        case 0x1e3d44u: goto label_1e3d44;
        case 0x1e3d48u: goto label_1e3d48;
        case 0x1e3d4cu: goto label_1e3d4c;
        case 0x1e3d50u: goto label_1e3d50;
        case 0x1e3d54u: goto label_1e3d54;
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d5cu: goto label_1e3d5c;
        case 0x1e3d60u: goto label_1e3d60;
        case 0x1e3d64u: goto label_1e3d64;
        case 0x1e3d68u: goto label_1e3d68;
        case 0x1e3d6cu: goto label_1e3d6c;
        case 0x1e3d70u: goto label_1e3d70;
        case 0x1e3d74u: goto label_1e3d74;
        case 0x1e3d78u: goto label_1e3d78;
        case 0x1e3d7cu: goto label_1e3d7c;
        case 0x1e3d80u: goto label_1e3d80;
        case 0x1e3d84u: goto label_1e3d84;
        case 0x1e3d88u: goto label_1e3d88;
        case 0x1e3d8cu: goto label_1e3d8c;
        case 0x1e3d90u: goto label_1e3d90;
        case 0x1e3d94u: goto label_1e3d94;
        default: break;
    }

    ctx->pc = 0x1e3828u;

label_1e3828:
    // 0x1e3828: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1e3828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1e382c:
    // 0x1e382c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e3830:
    // 0x1e3830: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1e3830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1e3834:
    // 0x1e3834: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1e3834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1e3838:
    // 0x1e3838: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e3838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e383c:
    // 0x1e383c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1e383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1e3840:
    // 0x1e3840: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1e3840u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1e3844:
    // 0x1e3844: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1e3844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1e3848:
    // 0x1e3848: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e3848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e384c:
    // 0x1e384c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e384cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3850:
    // 0x1e3850: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1e3850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1e3854:
    // 0x1e3854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3858:
    // 0x1e3858: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1e3858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1e385c:
    // 0x1e385c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1e385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1e3860:
    // 0x1e3860: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e3860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e3864:
    // 0x1e3864: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1e3864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1e3868:
    // 0x1e3868: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e386c:
    // 0x1e386c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e386cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1e3870:
    // 0x1e3870: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3874:
    // 0x1e3874: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e3874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1e3878:
    // 0x1e3878: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1e387c:
    if (ctx->pc == 0x1E387Cu) {
        ctx->pc = 0x1E387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3878u;
        // 0x1e387c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3880u;
        goto label_1e3880;
    }
    ctx->pc = 0x1E3878u;
    {
        const bool branch_taken_0x1e3878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3878u;
        // 0x1e387c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3878) {
            ctx->pc = 0x1E38D4u;
            goto label_1e38d4;
        }
    }
    ctx->pc = 0x1E3880u;
label_1e3880:
    // 0x1e3880: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e3884:
    // 0x1e3884: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e3888:
    if (ctx->pc == 0x1E3888u) {
        ctx->pc = 0x1E3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3884u;
        // 0x1e3888: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E388Cu;
        goto label_1e388c;
    }
    ctx->pc = 0x1E3884u;
    {
        const bool branch_taken_0x1e3884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3884u;
        // 0x1e3888: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3884) {
            ctx->pc = 0x1E38C0u;
            goto label_1e38c0;
        }
    }
    ctx->pc = 0x1E388Cu;
label_1e388c:
    // 0x1e388c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e388cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e3890:
    // 0x1e3890: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1e3890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1e3894:
    // 0x1e3894: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e3894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e3898:
    // 0x1e3898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e389c:
    // 0x1e389c: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1e389cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
label_1e38a0:
    // 0x1e38a0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1e38a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1e38a4:
    // 0x1e38a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e38a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e38a8:
    // 0x1e38a8: 0xac62ef10  sw          $v0, -0x10F0($v1)
    ctx->pc = 0x1e38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962960), GPR_U32(ctx, 2));
label_1e38ac:
    // 0x1e38ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e38acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e38b0:
    // 0x1e38b0: 0xe640eefc  swc1        $f0, -0x1104($s2)
    ctx->pc = 0x1e38b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962940), bits); }
label_1e38b4:
    // 0x1e38b4: 0xe621eef4  swc1        $f1, -0x110C($s1)
    ctx->pc = 0x1e38b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962932), bits); }
label_1e38b8:
    // 0x1e38b8: 0xe600eeec  swc1        $f0, -0x1114($s0)
    ctx->pc = 0x1e38b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962924), bits); }
label_1e38bc:
    // 0x1e38bc: 0xac62ef00  sw          $v0, -0x1100($v1)
    ctx->pc = 0x1e38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962944), GPR_U32(ctx, 2));
label_1e38c0:
    // 0x1e38c0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1e38c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1e38c4:
    // 0x1e38c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e38c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e38c8:
    // 0x1e38c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e38c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e38cc:
    // 0x1e38cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e38d0:
    // 0x1e38d0: 0xe440ef0c  swc1        $f0, -0x10F4($v0)
    ctx->pc = 0x1e38d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962956), bits); }
label_1e38d4:
    // 0x1e38d4: 0x8c82cdb4  lw          $v0, -0x324C($a0)
    ctx->pc = 0x1e38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_1e38d8:
    // 0x1e38d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e38dc:
    // 0x1e38dc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1e38dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1e38e0:
    // 0x1e38e0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1e38e4:
    if (ctx->pc == 0x1E38E4u) {
        ctx->pc = 0x1E38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E0u;
        // 0x1e38e4: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38E8u;
        goto label_1e38e8;
    }
    ctx->pc = 0x1E38E0u;
    {
        const bool branch_taken_0x1e38e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E0u;
        // 0x1e38e4: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38e0) {
            ctx->pc = 0x1E3930u;
            goto label_1e3930;
        }
    }
    ctx->pc = 0x1E38E8u;
label_1e38e8:
    // 0x1e38e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e38ec:
    if (ctx->pc == 0x1E38ECu) {
        ctx->pc = 0x1E38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E8u;
        // 0x1e38ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38F0u;
        goto label_1e38f0;
    }
    ctx->pc = 0x1E38E8u;
    {
        const bool branch_taken_0x1e38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E8u;
        // 0x1e38ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38e8) {
            ctx->pc = 0x1E3910u;
            goto label_1e3910;
        }
    }
    ctx->pc = 0x1E38F0u;
label_1e38f0:
    // 0x1e38f0: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1e38f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_1e38f4:
    // 0x1e38f4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1e38f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1e38f8:
    // 0x1e38f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e38f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e38fc:
    // 0x1e38fc: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x1e38fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
label_1e3900:
    // 0x1e3900: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e3900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1e3904:
    // 0x1e3904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3908:
    // 0x1e3908: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e390c:
    if (ctx->pc == 0x1E390Cu) {
        ctx->pc = 0x1E390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3908u;
        // 0x1e390c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3910u;
        goto label_1e3910;
    }
    ctx->pc = 0x1E3908u;
    {
        const bool branch_taken_0x1e3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3908u;
        // 0x1e390c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3908) {
            ctx->pc = 0x1E397Cu;
            goto label_1e397c;
        }
    }
    ctx->pc = 0x1E3910u;
label_1e3910:
    // 0x1e3910: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1e3910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
label_1e3914:
    // 0x1e3914: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1e3914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1e3918:
    // 0x1e3918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e391c:
    // 0x1e391c: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x1e391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
label_1e3920:
    // 0x1e3920: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e3920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1e3924:
    // 0x1e3924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3928:
    // 0x1e3928: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e392c:
    if (ctx->pc == 0x1E392Cu) {
        ctx->pc = 0x1E392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3928u;
        // 0x1e392c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3930u;
        goto label_1e3930;
    }
    ctx->pc = 0x1E3928u;
    {
        const bool branch_taken_0x1e3928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3928u;
        // 0x1e392c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3928) {
            ctx->pc = 0x1E397Cu;
            goto label_1e397c;
        }
    }
    ctx->pc = 0x1E3930u;
label_1e3930:
    // 0x1e3930: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1e3930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_1e3934:
    // 0x1e3934: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1e3938:
    if (ctx->pc == 0x1E3938u) {
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3934u;
        // 0x1e3938: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E393Cu;
        goto label_1e393c;
    }
    ctx->pc = 0x1E3934u;
    {
        const bool branch_taken_0x1e3934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3934u;
        // 0x1e3938: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3934) {
            ctx->pc = 0x1E3994u;
            goto label_1e3994;
        }
    }
    ctx->pc = 0x1E393Cu;
label_1e393c:
    // 0x1e393c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e3940:
    if (ctx->pc == 0x1E3940u) {
        ctx->pc = 0x1E3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E393Cu;
        // 0x1e3940: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3944u;
        goto label_1e3944;
    }
    ctx->pc = 0x1E393Cu;
    {
        const bool branch_taken_0x1e393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E393Cu;
        // 0x1e3940: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e393c) {
            ctx->pc = 0x1E3964u;
            goto label_1e3964;
        }
    }
    ctx->pc = 0x1E3944u;
label_1e3944:
    // 0x1e3944: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1e3944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1e3948:
    // 0x1e3948: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1e3948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1e394c:
    // 0x1e394c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e394cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3950:
    // 0x1e3950: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x1e3950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
label_1e3954:
    // 0x1e3954: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e3954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1e3958:
    // 0x1e3958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e395c:
    // 0x1e395c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e3960:
    if (ctx->pc == 0x1E3960u) {
        ctx->pc = 0x1E3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E395Cu;
        // 0x1e3960: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3964u;
        goto label_1e3964;
    }
    ctx->pc = 0x1E395Cu;
    {
        const bool branch_taken_0x1e395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E395Cu;
        // 0x1e3960: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e395c) {
            ctx->pc = 0x1E397Cu;
            goto label_1e397c;
        }
    }
    ctx->pc = 0x1E3964u;
label_1e3964:
    // 0x1e3964: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e3964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e3968:
    // 0x1e3968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e396c:
    // 0x1e396c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e3970:
    // 0x1e3970: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e3970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1e3974:
    // 0x1e3974: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e3974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e3978:
    // 0x1e3978: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e397c:
    // 0x1e397c: 0xe460ef0c  swc1        $f0, -0x10F4($v1)
    ctx->pc = 0x1e397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962956), bits); }
label_1e3980:
    // 0x1e3980: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e3980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e3984:
    // 0x1e3984: 0xe601eeec  swc1        $f1, -0x1114($s0)
    ctx->pc = 0x1e3984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962924), bits); }
label_1e3988:
    // 0x1e3988: 0xac62ef10  sw          $v0, -0x10F0($v1)
    ctx->pc = 0x1e3988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962960), GPR_U32(ctx, 2));
label_1e398c:
    // 0x1e398c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e3990:
    // 0x1e3990: 0xac62ef00  sw          $v0, -0x1100($v1)
    ctx->pc = 0x1e3990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962944), GPR_U32(ctx, 2));
label_1e3994:
    // 0x1e3994: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e3998:
    // 0x1e3998: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e3998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e399c:
    // 0x1e399c: 0xc078d48  jal         func_1E3520
label_1e39a0:
    if (ctx->pc == 0x1E39A0u) {
        ctx->pc = 0x1E39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E399Cu;
        // 0x1e39a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39A4u;
        goto label_1e39a4;
    }
    ctx->pc = 0x1E399Cu;
    SET_GPR_U32(ctx, 31, 0x1E39A4u);
    ctx->pc = 0x1E39A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E399Cu;
    // 0x1e39a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3520u, 0x1E399Cu, 0x1E39A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39A4u;
label_1e39a4:
    // 0x1e39a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e39a8:
    // 0x1e39a8: 0xc620eef4  lwc1        $f0, -0x110C($s1)
    ctx->pc = 0x1e39a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294962932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e39ac:
    // 0x1e39ac: 0xc441eef0  lwc1        $f1, -0x1110($v0)
    ctx->pc = 0x1e39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e39b0:
    // 0x1e39b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e39b4:
    // 0x1e39b4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e39b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e39b8:
    // 0x1e39b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1e39bc:
    // 0x1e39bc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e39bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e39c0:
    // 0x1e39c0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1e39c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1e39c4:
    // 0x1e39c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e39c8:
    // 0x1e39c8: 0x25086778  addiu       $t0, $t0, 0x6778
    ctx->pc = 0x1e39c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26488));
label_1e39cc:
    // 0x1e39cc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1e39ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e39d0:
    // 0x1e39d0: 0x24a56768  addiu       $a1, $a1, 0x6768
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26472));
label_1e39d4:
    // 0x1e39d4: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1e39d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1e39d8:
    // 0x1e39d8: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1e39d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e39dc:
    // 0x1e39dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1e39dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e39e0:
    // 0x1e39e0: 0x240900ba  addiu       $t1, $zero, 0xBA
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1e39e4:
    // 0x1e39e4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1e39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1e39e8:
    // 0x1e39e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e39e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e39ec:
    // 0x1e39ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e39ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e39f0:
    // 0x1e39f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1e39f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1e39f4:
    // 0x1e39f4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1e39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1e39f8:
    // 0x1e39f8: 0x40f809  jalr        $v0
label_1e39fc:
    if (ctx->pc == 0x1E39FCu) {
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39F8u;
        // 0x1e39fc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A00u;
        goto label_1e3a00;
    }
    ctx->pc = 0x1E39F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3A00u);
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39F8u;
        // 0x1e39fc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E39F8u, 0x1E3A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A00u;
label_1e3a00:
    // 0x1e3a00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e3a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a04:
    // 0x1e3a04: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_1e3a08:
    if (ctx->pc == 0x1E3A08u) {
        ctx->pc = 0x1E3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A04u;
        // 0x1e3a08: 0xaea80140  sw          $t0, 0x140($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A0Cu;
        goto label_1e3a0c;
    }
    ctx->pc = 0x1E3A04u;
    {
        const bool branch_taken_0x1e3a04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a04) {
            ctx->pc = 0x1E3A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3A04u;
            // 0x1e3a08: 0xaea80140  sw          $t0, 0x140($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3A1Cu;
            goto label_1e3a1c;
        }
    }
    ctx->pc = 0x1E3A0Cu;
label_1e3a0c:
    // 0x1e3a0c: 0xc0784ce  jal         func_1E1338
label_1e3a10:
    if (ctx->pc == 0x1E3A10u) {
        ctx->pc = 0x1E3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A0Cu;
        // 0x1e3a10: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A14u;
        goto label_1e3a14;
    }
    ctx->pc = 0x1E3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A14u);
    ctx->pc = 0x1E3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A0Cu;
    // 0x1e3a10: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x1E3A0Cu, 0x1E3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A14u;
label_1e3a14:
    // 0x1e3a14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e3a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a18:
    // 0x1e3a18: 0xaea80140  sw          $t0, 0x140($s5)
    ctx->pc = 0x1e3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 8));
label_1e3a1c:
    // 0x1e3a1c: 0x26a30060  addiu       $v1, $s5, 0x60
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1e3a20:
    // 0x1e3a20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a24:
    // 0x1e3a24: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x1e3a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_1e3a28:
    // 0x1e3a28: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1e3a2c:
    // 0x1e3a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a30:
    // 0x1e3a30: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1e3a34:
    // 0x1e3a34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e3a34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a38:
    // 0x1e3a38: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1e3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1e3a3c:
    // 0x1e3a3c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1e3a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1e3a40:
    // 0x1e3a40: 0x60f809  jalr        $v1
label_1e3a44:
    if (ctx->pc == 0x1E3A44u) {
        ctx->pc = 0x1E3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A40u;
        // 0x1e3a44: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A48u;
        goto label_1e3a48;
    }
    ctx->pc = 0x1E3A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3A48u);
        ctx->pc = 0x1E3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A40u;
        // 0x1e3a44: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A40u, 0x1E3A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A48u;
label_1e3a48:
    // 0x1e3a48: 0x8ea60140  lw          $a2, 0x140($s5)
    ctx->pc = 0x1e3a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3a4c:
    // 0x1e3a4c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1e3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1e3a50:
    // 0x1e3a50: 0x8c450350  lw          $a1, 0x350($v0)
    ctx->pc = 0x1e3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
label_1e3a54:
    // 0x1e3a54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3a58:
    // 0x1e3a58: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x1e3a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_1e3a5c:
    // 0x1e3a5c: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x1e3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_1e3a60:
    // 0x1e3a60: 0x40f809  jalr        $v0
label_1e3a64:
    if (ctx->pc == 0x1E3A64u) {
        ctx->pc = 0x1E3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A60u;
        // 0x1e3a64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A68u;
        goto label_1e3a68;
    }
    ctx->pc = 0x1E3A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3A68u);
        ctx->pc = 0x1E3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A60u;
        // 0x1e3a64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A60u, 0x1E3A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A68u;
label_1e3a68:
    // 0x1e3a68: 0x8ea50140  lw          $a1, 0x140($s5)
    ctx->pc = 0x1e3a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3a6c:
    // 0x1e3a6c: 0xc60ceeec  lwc1        $f12, -0x1114($s0)
    ctx->pc = 0x1e3a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294962924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3a70:
    // 0x1e3a70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3a74:
    // 0x1e3a74: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1e3a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1e3a78:
    // 0x1e3a78: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1e3a7c:
    // 0x1e3a7c: 0x60f809  jalr        $v1
label_1e3a80:
    if (ctx->pc == 0x1E3A80u) {
        ctx->pc = 0x1E3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A7Cu;
        // 0x1e3a80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A84u;
        goto label_1e3a84;
    }
    ctx->pc = 0x1E3A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3A84u);
        ctx->pc = 0x1E3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A7Cu;
        // 0x1e3a80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A7Cu, 0x1E3A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A84u;
label_1e3a84:
    // 0x1e3a84: 0x8ea50140  lw          $a1, 0x140($s5)
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3a88:
    // 0x1e3a88: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e3a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1e3a8c:
    // 0x1e3a8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e3a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3a90:
    // 0x1e3a90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3a94:
    // 0x1e3a94: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1e3a98:
    // 0x1e3a98: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1e3a9c:
    // 0x1e3a9c: 0x60f809  jalr        $v1
label_1e3aa0:
    if (ctx->pc == 0x1E3AA0u) {
        ctx->pc = 0x1E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A9Cu;
        // 0x1e3aa0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AA4u;
        goto label_1e3aa4;
    }
    ctx->pc = 0x1E3A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3AA4u);
        ctx->pc = 0x1E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A9Cu;
        // 0x1e3aa0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A9Cu, 0x1E3AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3AA4u;
label_1e3aa4:
    // 0x1e3aa4: 0x8ea60140  lw          $a2, 0x140($s5)
    ctx->pc = 0x1e3aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3aa8:
    // 0x1e3aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3aac:
    // 0x1e3aac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3ab0:
    // 0x1e3ab0: 0x84440160  lh          $a0, 0x160($v0)
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
label_1e3ab4:
    // 0x1e3ab4: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x1e3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_1e3ab8:
    // 0x1e3ab8: 0x60f809  jalr        $v1
label_1e3abc:
    if (ctx->pc == 0x1E3ABCu) {
        ctx->pc = 0x1E3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AB8u;
        // 0x1e3abc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AC0u;
        goto label_1e3ac0;
    }
    ctx->pc = 0x1E3AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3AC0u);
        ctx->pc = 0x1E3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AB8u;
        // 0x1e3abc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3AB8u, 0x1E3AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3AC0u;
label_1e3ac0:
    // 0x1e3ac0: 0x8ea50140  lw          $a1, 0x140($s5)
    ctx->pc = 0x1e3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3ac4:
    // 0x1e3ac4: 0xc64ceefc  lwc1        $f12, -0x1104($s2)
    ctx->pc = 0x1e3ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294962940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3ac8:
    // 0x1e3ac8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3acc:
    // 0x1e3acc: 0x84440178  lh          $a0, 0x178($v0)
    ctx->pc = 0x1e3accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 376)));
label_1e3ad0:
    // 0x1e3ad0: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x1e3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
label_1e3ad4:
    // 0x1e3ad4: 0x60f809  jalr        $v1
label_1e3ad8:
    if (ctx->pc == 0x1E3AD8u) {
        ctx->pc = 0x1E3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AD4u;
        // 0x1e3ad8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3ADCu;
        goto label_1e3adc;
    }
    ctx->pc = 0x1E3AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3ADCu);
        ctx->pc = 0x1E3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AD4u;
        // 0x1e3ad8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3AD4u, 0x1E3ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3ADCu;
label_1e3adc:
    // 0x1e3adc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1e3adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1e3ae0:
    // 0x1e3ae0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e3ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1e3ae4:
    // 0x1e3ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3ae8:
    // 0x1e3ae8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e3aec:
    // 0x1e3aec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1e3aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1e3af0:
    // 0x1e3af0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1e3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3af4:
    // 0x1e3af4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e3af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e3af8:
    // 0x1e3af8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e3afc:
    // 0x1e3afc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1e3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1e3b00:
    // 0x1e3b00: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1e3b00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b04:
    // 0x1e3b04: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1e3b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1e3b08:
    // 0x1e3b08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e3b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e3b0c:
    // 0x1e3b0c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1e3b10:
    // 0x1e3b10: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1e3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1e3b14:
    // 0x1e3b14: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1e3b18:
    // 0x1e3b18: 0xc05e602  jal         func_179808
label_1e3b1c:
    if (ctx->pc == 0x1E3B1Cu) {
        ctx->pc = 0x1E3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B18u;
        // 0x1e3b1c: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B20u;
        goto label_1e3b20;
    }
    ctx->pc = 0x1E3B18u;
    SET_GPR_U32(ctx, 31, 0x1E3B20u);
    ctx->pc = 0x1E3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B18u;
    // 0x1e3b1c: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E3B18u, 0x1E3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B20u;
label_1e3b20:
    // 0x1e3b20: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1e3b20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e3b24:
    // 0x1e3b24: 0x24120270  addiu       $s2, $zero, 0x270
    ctx->pc = 0x1e3b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1e3b28:
    // 0x1e3b28: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e3b28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1e3b2c:
    // 0x1e3b2c: 0x2f29018  mult        $s2, $s7, $s2
    ctx->pc = 0x1e3b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_1e3b30:
    // 0x1e3b30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b34:
    // 0x1e3b34: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1e3b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3b38:
    // 0x1e3b38: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e3b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e3b3c:
    // 0x1e3b3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b40:
    // 0x1e3b40: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e3b40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1e3b44:
    // 0x1e3b44: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3b48:
    // 0x1e3b48: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x1e3b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1e3b4c:
    // 0x1e3b4c: 0x26540150  addiu       $s4, $s2, 0x150
    ctx->pc = 0x1e3b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_1e3b50:
    // 0x1e3b50: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x1e3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_1e3b54:
    // 0x1e3b54: 0x2b4a021  addu        $s4, $s5, $s4
    ctx->pc = 0x1e3b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1e3b58:
    // 0x1e3b58: 0x26710150  addiu       $s1, $s3, 0x150
    ctx->pc = 0x1e3b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_1e3b5c:
    // 0x1e3b5c: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1e3b60:
    // 0x1e3b60: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1e3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1e3b64:
    // 0x1e3b64: 0x40f809  jalr        $v0
label_1e3b68:
    if (ctx->pc == 0x1E3B68u) {
        ctx->pc = 0x1E3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B64u;
        // 0x1e3b68: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B6Cu;
        goto label_1e3b6c;
    }
    ctx->pc = 0x1E3B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3B6Cu);
        ctx->pc = 0x1E3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B64u;
        // 0x1e3b68: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3B64u, 0x1E3B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3B6Cu;
label_1e3b6c:
    // 0x1e3b6c: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_1e3b70:
    // 0x1e3b70: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e3b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b74:
    // 0x1e3b74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3b78:
    // 0x1e3b78: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1e3b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1e3b7c:
    // 0x1e3b7c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1e3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1e3b80:
    // 0x1e3b80: 0x40f809  jalr        $v0
label_1e3b84:
    if (ctx->pc == 0x1E3B84u) {
        ctx->pc = 0x1E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B80u;
        // 0x1e3b84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B88u;
        goto label_1e3b88;
    }
    ctx->pc = 0x1E3B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3B88u);
        ctx->pc = 0x1E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B80u;
        // 0x1e3b84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3B80u, 0x1E3B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3B88u;
label_1e3b88:
    // 0x1e3b88: 0x2402ff86  addiu       $v0, $zero, -0x7A
    ctx->pc = 0x1e3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967174));
label_1e3b8c:
    // 0x1e3b8c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x1e3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1e3b90:
    // 0x1e3b90: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x1e3b90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
label_1e3b94:
    // 0x1e3b94: 0x26e40145  addiu       $a0, $s7, 0x145
    ctx->pc = 0x1e3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 325));
label_1e3b98:
    // 0x1e3b98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3b9c:
    // 0x1e3b9c: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x1e3b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
label_1e3ba0:
    // 0x1e3ba0: 0xa2c30002  sb          $v1, 0x2($s6)
    ctx->pc = 0x1e3ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 3));
label_1e3ba4:
    // 0x1e3ba4: 0xa2c20003  sb          $v0, 0x3($s6)
    ctx->pc = 0x1e3ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
label_1e3ba8:
    // 0x1e3ba8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3bac:
    // 0x1e3bac: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x1e3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_1e3bb0:
    // 0x1e3bb0: 0x8e700150  lw          $s0, 0x150($s3)
    ctx->pc = 0x1e3bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_1e3bb4:
    // 0x1e3bb4: 0x861100c8  lh          $s1, 0xC8($s0)
    ctx->pc = 0x1e3bb4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
label_1e3bb8:
    // 0x1e3bb8: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x1e3bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_1e3bbc:
    // 0x1e3bbc: 0xc067b9c  jal         func_19EE70
label_1e3bc0:
    if (ctx->pc == 0x1E3BC0u) {
        ctx->pc = 0x1E3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BBCu;
        // 0x1e3bc0: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BC4u;
        goto label_1e3bc4;
    }
    ctx->pc = 0x1E3BBCu;
    SET_GPR_U32(ctx, 31, 0x1E3BC4u);
    ctx->pc = 0x1E3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BBCu;
    // 0x1e3bc0: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E3BBCu, 0x1E3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BC4u;
label_1e3bc4:
    // 0x1e3bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bc8:
    // 0x1e3bc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e3bcc:
    // 0x1e3bcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e3bd0:
    // 0x1e3bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bd4:
    // 0x1e3bd4: 0xc44ceef8  lwc1        $f12, -0x1108($v0)
    ctx->pc = 0x1e3bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3bd8:
    // 0x1e3bd8: 0x60f809  jalr        $v1
label_1e3bdc:
    if (ctx->pc == 0x1E3BDCu) {
        ctx->pc = 0x1E3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BD8u;
        // 0x1e3bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BE0u;
        goto label_1e3be0;
    }
    ctx->pc = 0x1E3BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3BE0u);
        ctx->pc = 0x1E3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BD8u;
        // 0x1e3bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3BD8u, 0x1E3BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3BE0u;
label_1e3be0:
    // 0x1e3be0: 0x8e623960  lw          $v0, 0x3960($s3)
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14688)));
label_1e3be4:
    // 0x1e3be4: 0x26523960  addiu       $s2, $s2, 0x3960
    ctx->pc = 0x1e3be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14688));
label_1e3be8:
    // 0x1e3be8: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1e3bec:
    // 0x1e3bec: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e3becu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1e3bf0:
    // 0x1e3bf0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1e3bf4:
    // 0x1e3bf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bf8:
    // 0x1e3bf8: 0x8c4b00c4  lw          $t3, 0xC4($v0)
    ctx->pc = 0x1e3bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1e3bfc:
    // 0x1e3bfc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1e3bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3c00:
    // 0x1e3c00: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e3c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e3c04:
    // 0x1e3c04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c08:
    // 0x1e3c08: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e3c08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1e3c0c:
    // 0x1e3c0c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3c10:
    // 0x1e3c10: 0x160f809  jalr        $t3
label_1e3c14:
    if (ctx->pc == 0x1E3C14u) {
        ctx->pc = 0x1E3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C10u;
        // 0x1e3c14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C18u;
        goto label_1e3c18;
    }
    ctx->pc = 0x1E3C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x1E3C18u);
        ctx->pc = 0x1E3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C10u;
        // 0x1e3c14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C10u, 0x1E3C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C18u;
label_1e3c18:
    // 0x1e3c18: 0x8e633960  lw          $v1, 0x3960($s3)
    ctx->pc = 0x1e3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14688)));
label_1e3c1c:
    // 0x1e3c1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e3c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c20:
    // 0x1e3c20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3c24:
    // 0x1e3c24: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1e3c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1e3c28:
    // 0x1e3c28: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1e3c2c:
    // 0x1e3c2c: 0x40f809  jalr        $v0
label_1e3c30:
    if (ctx->pc == 0x1E3C30u) {
        ctx->pc = 0x1E3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C2Cu;
        // 0x1e3c30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C34u;
        goto label_1e3c34;
    }
    ctx->pc = 0x1E3C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3C34u);
        ctx->pc = 0x1E3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C2Cu;
        // 0x1e3c30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C2Cu, 0x1E3C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C34u;
label_1e3c34:
    // 0x1e3c34: 0x8e703960  lw          $s0, 0x3960($s3)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14688)));
label_1e3c38:
    // 0x1e3c38: 0x26e4015c  addiu       $a0, $s7, 0x15C
    ctx->pc = 0x1e3c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 348));
label_1e3c3c:
    // 0x1e3c3c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1e3c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1e3c40:
    // 0x1e3c40: 0x861100c8  lh          $s1, 0xC8($s0)
    ctx->pc = 0x1e3c40u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
label_1e3c44:
    // 0x1e3c44: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x1e3c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_1e3c48:
    // 0x1e3c48: 0xc067b9c  jal         func_19EE70
label_1e3c4c:
    if (ctx->pc == 0x1E3C4Cu) {
        ctx->pc = 0x1E3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C48u;
        // 0x1e3c4c: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C50u;
        goto label_1e3c50;
    }
    ctx->pc = 0x1E3C48u;
    SET_GPR_U32(ctx, 31, 0x1E3C50u);
    ctx->pc = 0x1E3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C48u;
    // 0x1e3c4c: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E3C48u, 0x1E3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C50u;
label_1e3c50:
    // 0x1e3c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c54:
    // 0x1e3c54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e3c58:
    // 0x1e3c58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e3c5c:
    // 0x1e3c5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3c60:
    // 0x1e3c60: 0xc44ceef8  lwc1        $f12, -0x1108($v0)
    ctx->pc = 0x1e3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3c64:
    // 0x1e3c64: 0x60f809  jalr        $v1
label_1e3c68:
    if (ctx->pc == 0x1E3C68u) {
        ctx->pc = 0x1E3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C64u;
        // 0x1e3c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C6Cu;
        goto label_1e3c6c;
    }
    ctx->pc = 0x1E3C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3C6Cu);
        ctx->pc = 0x1E3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C64u;
        // 0x1e3c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C64u, 0x1E3C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C6Cu;
label_1e3c6c:
    // 0x1e3c6c: 0x8ea60140  lw          $a2, 0x140($s5)
    ctx->pc = 0x1e3c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3c70:
    // 0x1e3c70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e3c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c74:
    // 0x1e3c74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3c78:
    // 0x1e3c78: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e3c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1e3c7c:
    // 0x1e3c7c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1e3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1e3c80:
    // 0x1e3c80: 0x60f809  jalr        $v1
label_1e3c84:
    if (ctx->pc == 0x1E3C84u) {
        ctx->pc = 0x1E3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C80u;
        // 0x1e3c84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C88u;
        goto label_1e3c88;
    }
    ctx->pc = 0x1E3C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3C88u);
        ctx->pc = 0x1E3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C80u;
        // 0x1e3c84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C80u, 0x1E3C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C88u;
label_1e3c88:
    // 0x1e3c88: 0x8ea70140  lw          $a3, 0x140($s5)
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3c8c:
    // 0x1e3c8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e3c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c90:
    // 0x1e3c90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e3c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c94:
    // 0x1e3c94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e3c98:
    // 0x1e3c98: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1e3c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1e3c9c:
    // 0x1e3c9c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1e3c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1e3ca0:
    // 0x1e3ca0: 0x60f809  jalr        $v1
label_1e3ca4:
    if (ctx->pc == 0x1E3CA4u) {
        ctx->pc = 0x1E3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CA0u;
        // 0x1e3ca4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CA8u;
        goto label_1e3ca8;
    }
    ctx->pc = 0x1E3CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3CA8u);
        ctx->pc = 0x1E3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CA0u;
        // 0x1e3ca4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3CA0u, 0x1E3CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3CA8u;
label_1e3ca8:
    // 0x1e3ca8: 0x2ee20017  sltiu       $v0, $s7, 0x17
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_1e3cac:
    // 0x1e3cac: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_1e3cb0:
    if (ctx->pc == 0x1E3CB0u) {
        ctx->pc = 0x1E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CACu;
        // 0x1e3cb0: 0x24120270  addiu       $s2, $zero, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CB4u;
        goto label_1e3cb4;
    }
    ctx->pc = 0x1E3CACu;
    {
        const bool branch_taken_0x1e3cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CACu;
        // 0x1e3cb0: 0x24120270  addiu       $s2, $zero, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cac) {
            ctx->pc = 0x1E3B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3b28;
        }
    }
    ctx->pc = 0x1E3CB4u;
label_1e3cb4:
    // 0x1e3cb4: 0x8ea60140  lw          $a2, 0x140($s5)
    ctx->pc = 0x1e3cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3cb8:
    // 0x1e3cb8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e3cbc:
    // 0x1e3cbc: 0x8c65ef00  lw          $a1, -0x1100($v1)
    ctx->pc = 0x1e3cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962944)));
label_1e3cc0:
    // 0x1e3cc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3cc4:
    // 0x1e3cc4: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1e3cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1e3cc8:
    // 0x1e3cc8: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1e3ccc:
    // 0x1e3ccc: 0x60f809  jalr        $v1
label_1e3cd0:
    if (ctx->pc == 0x1E3CD0u) {
        ctx->pc = 0x1E3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CCCu;
        // 0x1e3cd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CD4u;
        goto label_1e3cd4;
    }
    ctx->pc = 0x1E3CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3CD4u);
        ctx->pc = 0x1E3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CCCu;
        // 0x1e3cd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3CCCu, 0x1E3CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3CD4u;
label_1e3cd4:
    // 0x1e3cd4: 0x8ea60140  lw          $a2, 0x140($s5)
    ctx->pc = 0x1e3cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3cd8:
    // 0x1e3cd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e3cdc:
    // 0x1e3cdc: 0x8c45ef10  lw          $a1, -0x10F0($v0)
    ctx->pc = 0x1e3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962960)));
label_1e3ce0:
    // 0x1e3ce0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3ce4:
    // 0x1e3ce4: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x1e3ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_1e3ce8:
    // 0x1e3ce8: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1e3cec:
    // 0x1e3cec: 0x60f809  jalr        $v1
label_1e3cf0:
    if (ctx->pc == 0x1E3CF0u) {
        ctx->pc = 0x1E3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CECu;
        // 0x1e3cf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CF4u;
        goto label_1e3cf4;
    }
    ctx->pc = 0x1E3CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3CF4u);
        ctx->pc = 0x1E3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CECu;
        // 0x1e3cf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3CECu, 0x1E3CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3CF4u;
label_1e3cf4:
    // 0x1e3cf4: 0x8ea50140  lw          $a1, 0x140($s5)
    ctx->pc = 0x1e3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3cf8:
    // 0x1e3cf8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e3cfc:
    // 0x1e3cfc: 0xc46cef0c  lwc1        $f12, -0x10F4($v1)
    ctx->pc = 0x1e3cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3d00:
    // 0x1e3d00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3d04:
    // 0x1e3d04: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x1e3d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_1e3d08:
    // 0x1e3d08: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_1e3d0c:
    // 0x1e3d0c: 0x60f809  jalr        $v1
label_1e3d10:
    if (ctx->pc == 0x1E3D10u) {
        ctx->pc = 0x1E3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D0Cu;
        // 0x1e3d10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D14u;
        goto label_1e3d14;
    }
    ctx->pc = 0x1E3D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3D14u);
        ctx->pc = 0x1E3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D0Cu;
        // 0x1e3d10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D0Cu, 0x1E3D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3D14u;
label_1e3d14:
    // 0x1e3d14: 0x8ea50140  lw          $a1, 0x140($s5)
    ctx->pc = 0x1e3d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3d18:
    // 0x1e3d18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3d1c:
    // 0x1e3d1c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1e3d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1e3d20:
    // 0x1e3d20: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1e3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1e3d24:
    // 0x1e3d24: 0x60f809  jalr        $v1
label_1e3d28:
    if (ctx->pc == 0x1E3D28u) {
        ctx->pc = 0x1E3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D24u;
        // 0x1e3d28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D2Cu;
        goto label_1e3d2c;
    }
    ctx->pc = 0x1E3D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3D2Cu);
        ctx->pc = 0x1E3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D24u;
        // 0x1e3d28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D24u, 0x1E3D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3D2Cu;
label_1e3d2c:
    // 0x1e3d2c: 0x8ea50140  lw          $a1, 0x140($s5)
    ctx->pc = 0x1e3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_1e3d30:
    // 0x1e3d30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3d34:
    // 0x1e3d34: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e3d34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e3d38:
    // 0x1e3d38: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e3d3c:
    // 0x1e3d3c: 0x60f809  jalr        $v1
label_1e3d40:
    if (ctx->pc == 0x1E3D40u) {
        ctx->pc = 0x1E3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D3Cu;
        // 0x1e3d40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D44u;
        goto label_1e3d44;
    }
    ctx->pc = 0x1E3D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3D44u);
        ctx->pc = 0x1E3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D3Cu;
        // 0x1e3d40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D3Cu, 0x1E3D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3D44u;
label_1e3d44:
    // 0x1e3d44: 0xc067b9c  jal         func_19EE70
label_1e3d48:
    if (ctx->pc == 0x1E3D48u) {
        ctx->pc = 0x1E3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D44u;
        // 0x1e3d48: 0x24040131  addiu       $a0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D4Cu;
        goto label_1e3d4c;
    }
    ctx->pc = 0x1E3D44u;
    SET_GPR_U32(ctx, 31, 0x1E3D4Cu);
    ctx->pc = 0x1E3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D44u;
    // 0x1e3d48: 0x24040131  addiu       $a0, $zero, 0x131 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E3D44u, 0x1E3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D4Cu;
label_1e3d4c:
    // 0x1e3d4c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1e3d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1e3d50:
    // 0x1e3d50: 0xc073478  jal         func_1CD1E0
label_1e3d54:
    if (ctx->pc == 0x1E3D54u) {
        ctx->pc = 0x1E3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D50u;
        // 0x1e3d54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D58u;
        goto label_1e3d58;
    }
    ctx->pc = 0x1E3D50u;
    SET_GPR_U32(ctx, 31, 0x1E3D58u);
    ctx->pc = 0x1E3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D50u;
    // 0x1e3d54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E3D50u, 0x1E3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D58u;
label_1e3d58:
    // 0x1e3d58: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e3d5c:
    // 0x1e3d5c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1e3d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1e3d60:
    // 0x1e3d60: 0xa2a20130  sb          $v0, 0x130($s5)
    ctx->pc = 0x1e3d60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 304), (uint8_t)GPR_U32(ctx, 2));
label_1e3d64:
    // 0x1e3d64: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1e3d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e3d68:
    // 0x1e3d68: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1e3d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e3d6c:
    // 0x1e3d6c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1e3d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e3d70:
    // 0x1e3d70: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1e3d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e3d74:
    // 0x1e3d74: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1e3d74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e3d78:
    // 0x1e3d78: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1e3d78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e3d7c:
    // 0x1e3d7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e3d7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3d80:
    // 0x1e3d80: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1e3d80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3d84:
    // 0x1e3d84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e3d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3d88:
    // 0x1e3d88: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e3d8c:
    // 0x1e3d8c: 0x3e00008  jr          $ra
label_1e3d90:
    if (ctx->pc == 0x1E3D90u) {
        ctx->pc = 0x1E3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D8Cu;
        // 0x1e3d90: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D94u;
        goto label_1e3d94;
    }
    ctx->pc = 0x1E3D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D8Cu;
        // 0x1e3d90: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3D94u;
label_1e3d94:
    // 0x1e3d94: 0x0  nop
    ctx->pc = 0x1e3d94u;
    // NOP
    ctx->pc = 0x1e3d98u;
}
