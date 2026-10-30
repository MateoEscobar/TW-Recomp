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

// Function: sub_00491750
// Address: 0x491750 - 0x493418
void sub_00491750_0x491750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491750_0x491750");
#endif

    switch (ctx->pc) {
        case 0x491750u: goto label_491750;
        case 0x491754u: goto label_491754;
        case 0x491758u: goto label_491758;
        case 0x49175cu: goto label_49175c;
        case 0x491760u: goto label_491760;
        case 0x491764u: goto label_491764;
        case 0x491768u: goto label_491768;
        case 0x49176cu: goto label_49176c;
        case 0x491770u: goto label_491770;
        case 0x491774u: goto label_491774;
        case 0x491778u: goto label_491778;
        case 0x49177cu: goto label_49177c;
        case 0x491780u: goto label_491780;
        case 0x491784u: goto label_491784;
        case 0x491788u: goto label_491788;
        case 0x49178cu: goto label_49178c;
        case 0x491790u: goto label_491790;
        case 0x491794u: goto label_491794;
        case 0x491798u: goto label_491798;
        case 0x49179cu: goto label_49179c;
        case 0x4917a0u: goto label_4917a0;
        case 0x4917a4u: goto label_4917a4;
        case 0x4917a8u: goto label_4917a8;
        case 0x4917acu: goto label_4917ac;
        case 0x4917b0u: goto label_4917b0;
        case 0x4917b4u: goto label_4917b4;
        case 0x4917b8u: goto label_4917b8;
        case 0x4917bcu: goto label_4917bc;
        case 0x4917c0u: goto label_4917c0;
        case 0x4917c4u: goto label_4917c4;
        case 0x4917c8u: goto label_4917c8;
        case 0x4917ccu: goto label_4917cc;
        case 0x4917d0u: goto label_4917d0;
        case 0x4917d4u: goto label_4917d4;
        case 0x4917d8u: goto label_4917d8;
        case 0x4917dcu: goto label_4917dc;
        case 0x4917e0u: goto label_4917e0;
        case 0x4917e4u: goto label_4917e4;
        case 0x4917e8u: goto label_4917e8;
        case 0x4917ecu: goto label_4917ec;
        case 0x4917f0u: goto label_4917f0;
        case 0x4917f4u: goto label_4917f4;
        case 0x4917f8u: goto label_4917f8;
        case 0x4917fcu: goto label_4917fc;
        case 0x491800u: goto label_491800;
        case 0x491804u: goto label_491804;
        case 0x491808u: goto label_491808;
        case 0x49180cu: goto label_49180c;
        case 0x491810u: goto label_491810;
        case 0x491814u: goto label_491814;
        case 0x491818u: goto label_491818;
        case 0x49181cu: goto label_49181c;
        case 0x491820u: goto label_491820;
        case 0x491824u: goto label_491824;
        case 0x491828u: goto label_491828;
        case 0x49182cu: goto label_49182c;
        case 0x491830u: goto label_491830;
        case 0x491834u: goto label_491834;
        case 0x491838u: goto label_491838;
        case 0x49183cu: goto label_49183c;
        case 0x491840u: goto label_491840;
        case 0x491844u: goto label_491844;
        case 0x491848u: goto label_491848;
        case 0x49184cu: goto label_49184c;
        case 0x491850u: goto label_491850;
        case 0x491854u: goto label_491854;
        case 0x491858u: goto label_491858;
        case 0x49185cu: goto label_49185c;
        case 0x491860u: goto label_491860;
        case 0x491864u: goto label_491864;
        case 0x491868u: goto label_491868;
        case 0x49186cu: goto label_49186c;
        case 0x491870u: goto label_491870;
        case 0x491874u: goto label_491874;
        case 0x491878u: goto label_491878;
        case 0x49187cu: goto label_49187c;
        case 0x491880u: goto label_491880;
        case 0x491884u: goto label_491884;
        case 0x491888u: goto label_491888;
        case 0x49188cu: goto label_49188c;
        case 0x491890u: goto label_491890;
        case 0x491894u: goto label_491894;
        case 0x491898u: goto label_491898;
        case 0x49189cu: goto label_49189c;
        case 0x4918a0u: goto label_4918a0;
        case 0x4918a4u: goto label_4918a4;
        case 0x4918a8u: goto label_4918a8;
        case 0x4918acu: goto label_4918ac;
        case 0x4918b0u: goto label_4918b0;
        case 0x4918b4u: goto label_4918b4;
        case 0x4918b8u: goto label_4918b8;
        case 0x4918bcu: goto label_4918bc;
        case 0x4918c0u: goto label_4918c0;
        case 0x4918c4u: goto label_4918c4;
        case 0x4918c8u: goto label_4918c8;
        case 0x4918ccu: goto label_4918cc;
        case 0x4918d0u: goto label_4918d0;
        case 0x4918d4u: goto label_4918d4;
        case 0x4918d8u: goto label_4918d8;
        case 0x4918dcu: goto label_4918dc;
        case 0x4918e0u: goto label_4918e0;
        case 0x4918e4u: goto label_4918e4;
        case 0x4918e8u: goto label_4918e8;
        case 0x4918ecu: goto label_4918ec;
        case 0x4918f0u: goto label_4918f0;
        case 0x4918f4u: goto label_4918f4;
        case 0x4918f8u: goto label_4918f8;
        case 0x4918fcu: goto label_4918fc;
        case 0x491900u: goto label_491900;
        case 0x491904u: goto label_491904;
        case 0x491908u: goto label_491908;
        case 0x49190cu: goto label_49190c;
        case 0x491910u: goto label_491910;
        case 0x491914u: goto label_491914;
        case 0x491918u: goto label_491918;
        case 0x49191cu: goto label_49191c;
        case 0x491920u: goto label_491920;
        case 0x491924u: goto label_491924;
        case 0x491928u: goto label_491928;
        case 0x49192cu: goto label_49192c;
        case 0x491930u: goto label_491930;
        case 0x491934u: goto label_491934;
        case 0x491938u: goto label_491938;
        case 0x49193cu: goto label_49193c;
        case 0x491940u: goto label_491940;
        case 0x491944u: goto label_491944;
        case 0x491948u: goto label_491948;
        case 0x49194cu: goto label_49194c;
        case 0x491950u: goto label_491950;
        case 0x491954u: goto label_491954;
        case 0x491958u: goto label_491958;
        case 0x49195cu: goto label_49195c;
        case 0x491960u: goto label_491960;
        case 0x491964u: goto label_491964;
        case 0x491968u: goto label_491968;
        case 0x49196cu: goto label_49196c;
        case 0x491970u: goto label_491970;
        case 0x491974u: goto label_491974;
        case 0x491978u: goto label_491978;
        case 0x49197cu: goto label_49197c;
        case 0x491980u: goto label_491980;
        case 0x491984u: goto label_491984;
        case 0x491988u: goto label_491988;
        case 0x49198cu: goto label_49198c;
        case 0x491990u: goto label_491990;
        case 0x491994u: goto label_491994;
        case 0x491998u: goto label_491998;
        case 0x49199cu: goto label_49199c;
        case 0x4919a0u: goto label_4919a0;
        case 0x4919a4u: goto label_4919a4;
        case 0x4919a8u: goto label_4919a8;
        case 0x4919acu: goto label_4919ac;
        case 0x4919b0u: goto label_4919b0;
        case 0x4919b4u: goto label_4919b4;
        case 0x4919b8u: goto label_4919b8;
        case 0x4919bcu: goto label_4919bc;
        case 0x4919c0u: goto label_4919c0;
        case 0x4919c4u: goto label_4919c4;
        case 0x4919c8u: goto label_4919c8;
        case 0x4919ccu: goto label_4919cc;
        case 0x4919d0u: goto label_4919d0;
        case 0x4919d4u: goto label_4919d4;
        case 0x4919d8u: goto label_4919d8;
        case 0x4919dcu: goto label_4919dc;
        case 0x4919e0u: goto label_4919e0;
        case 0x4919e4u: goto label_4919e4;
        case 0x4919e8u: goto label_4919e8;
        case 0x4919ecu: goto label_4919ec;
        case 0x4919f0u: goto label_4919f0;
        case 0x4919f4u: goto label_4919f4;
        case 0x4919f8u: goto label_4919f8;
        case 0x4919fcu: goto label_4919fc;
        case 0x491a00u: goto label_491a00;
        case 0x491a04u: goto label_491a04;
        case 0x491a08u: goto label_491a08;
        case 0x491a0cu: goto label_491a0c;
        case 0x491a10u: goto label_491a10;
        case 0x491a14u: goto label_491a14;
        case 0x491a18u: goto label_491a18;
        case 0x491a1cu: goto label_491a1c;
        case 0x491a20u: goto label_491a20;
        case 0x491a24u: goto label_491a24;
        case 0x491a28u: goto label_491a28;
        case 0x491a2cu: goto label_491a2c;
        case 0x491a30u: goto label_491a30;
        case 0x491a34u: goto label_491a34;
        case 0x491a38u: goto label_491a38;
        case 0x491a3cu: goto label_491a3c;
        case 0x491a40u: goto label_491a40;
        case 0x491a44u: goto label_491a44;
        case 0x491a48u: goto label_491a48;
        case 0x491a4cu: goto label_491a4c;
        case 0x491a50u: goto label_491a50;
        case 0x491a54u: goto label_491a54;
        case 0x491a58u: goto label_491a58;
        case 0x491a5cu: goto label_491a5c;
        case 0x491a60u: goto label_491a60;
        case 0x491a64u: goto label_491a64;
        case 0x491a68u: goto label_491a68;
        case 0x491a6cu: goto label_491a6c;
        case 0x491a70u: goto label_491a70;
        case 0x491a74u: goto label_491a74;
        case 0x491a78u: goto label_491a78;
        case 0x491a7cu: goto label_491a7c;
        case 0x491a80u: goto label_491a80;
        case 0x491a84u: goto label_491a84;
        case 0x491a88u: goto label_491a88;
        case 0x491a8cu: goto label_491a8c;
        case 0x491a90u: goto label_491a90;
        case 0x491a94u: goto label_491a94;
        case 0x491a98u: goto label_491a98;
        case 0x491a9cu: goto label_491a9c;
        case 0x491aa0u: goto label_491aa0;
        case 0x491aa4u: goto label_491aa4;
        case 0x491aa8u: goto label_491aa8;
        case 0x491aacu: goto label_491aac;
        case 0x491ab0u: goto label_491ab0;
        case 0x491ab4u: goto label_491ab4;
        case 0x491ab8u: goto label_491ab8;
        case 0x491abcu: goto label_491abc;
        case 0x491ac0u: goto label_491ac0;
        case 0x491ac4u: goto label_491ac4;
        case 0x491ac8u: goto label_491ac8;
        case 0x491accu: goto label_491acc;
        case 0x491ad0u: goto label_491ad0;
        case 0x491ad4u: goto label_491ad4;
        case 0x491ad8u: goto label_491ad8;
        case 0x491adcu: goto label_491adc;
        case 0x491ae0u: goto label_491ae0;
        case 0x491ae4u: goto label_491ae4;
        case 0x491ae8u: goto label_491ae8;
        case 0x491aecu: goto label_491aec;
        case 0x491af0u: goto label_491af0;
        case 0x491af4u: goto label_491af4;
        case 0x491af8u: goto label_491af8;
        case 0x491afcu: goto label_491afc;
        case 0x491b00u: goto label_491b00;
        case 0x491b04u: goto label_491b04;
        case 0x491b08u: goto label_491b08;
        case 0x491b0cu: goto label_491b0c;
        case 0x491b10u: goto label_491b10;
        case 0x491b14u: goto label_491b14;
        case 0x491b18u: goto label_491b18;
        case 0x491b1cu: goto label_491b1c;
        case 0x491b20u: goto label_491b20;
        case 0x491b24u: goto label_491b24;
        case 0x491b28u: goto label_491b28;
        case 0x491b2cu: goto label_491b2c;
        case 0x491b30u: goto label_491b30;
        case 0x491b34u: goto label_491b34;
        case 0x491b38u: goto label_491b38;
        case 0x491b3cu: goto label_491b3c;
        case 0x491b40u: goto label_491b40;
        case 0x491b44u: goto label_491b44;
        case 0x491b48u: goto label_491b48;
        case 0x491b4cu: goto label_491b4c;
        case 0x491b50u: goto label_491b50;
        case 0x491b54u: goto label_491b54;
        case 0x491b58u: goto label_491b58;
        case 0x491b5cu: goto label_491b5c;
        case 0x491b60u: goto label_491b60;
        case 0x491b64u: goto label_491b64;
        case 0x491b68u: goto label_491b68;
        case 0x491b6cu: goto label_491b6c;
        case 0x491b70u: goto label_491b70;
        case 0x491b74u: goto label_491b74;
        case 0x491b78u: goto label_491b78;
        case 0x491b7cu: goto label_491b7c;
        case 0x491b80u: goto label_491b80;
        case 0x491b84u: goto label_491b84;
        case 0x491b88u: goto label_491b88;
        case 0x491b8cu: goto label_491b8c;
        case 0x491b90u: goto label_491b90;
        case 0x491b94u: goto label_491b94;
        case 0x491b98u: goto label_491b98;
        case 0x491b9cu: goto label_491b9c;
        case 0x491ba0u: goto label_491ba0;
        case 0x491ba4u: goto label_491ba4;
        case 0x491ba8u: goto label_491ba8;
        case 0x491bacu: goto label_491bac;
        case 0x491bb0u: goto label_491bb0;
        case 0x491bb4u: goto label_491bb4;
        case 0x491bb8u: goto label_491bb8;
        case 0x491bbcu: goto label_491bbc;
        case 0x491bc0u: goto label_491bc0;
        case 0x491bc4u: goto label_491bc4;
        case 0x491bc8u: goto label_491bc8;
        case 0x491bccu: goto label_491bcc;
        case 0x491bd0u: goto label_491bd0;
        case 0x491bd4u: goto label_491bd4;
        case 0x491bd8u: goto label_491bd8;
        case 0x491bdcu: goto label_491bdc;
        case 0x491be0u: goto label_491be0;
        case 0x491be4u: goto label_491be4;
        case 0x491be8u: goto label_491be8;
        case 0x491becu: goto label_491bec;
        case 0x491bf0u: goto label_491bf0;
        case 0x491bf4u: goto label_491bf4;
        case 0x491bf8u: goto label_491bf8;
        case 0x491bfcu: goto label_491bfc;
        case 0x491c00u: goto label_491c00;
        case 0x491c04u: goto label_491c04;
        case 0x491c08u: goto label_491c08;
        case 0x491c0cu: goto label_491c0c;
        case 0x491c10u: goto label_491c10;
        case 0x491c14u: goto label_491c14;
        case 0x491c18u: goto label_491c18;
        case 0x491c1cu: goto label_491c1c;
        case 0x491c20u: goto label_491c20;
        case 0x491c24u: goto label_491c24;
        case 0x491c28u: goto label_491c28;
        case 0x491c2cu: goto label_491c2c;
        case 0x491c30u: goto label_491c30;
        case 0x491c34u: goto label_491c34;
        case 0x491c38u: goto label_491c38;
        case 0x491c3cu: goto label_491c3c;
        case 0x491c40u: goto label_491c40;
        case 0x491c44u: goto label_491c44;
        case 0x491c48u: goto label_491c48;
        case 0x491c4cu: goto label_491c4c;
        case 0x491c50u: goto label_491c50;
        case 0x491c54u: goto label_491c54;
        case 0x491c58u: goto label_491c58;
        case 0x491c5cu: goto label_491c5c;
        case 0x491c60u: goto label_491c60;
        case 0x491c64u: goto label_491c64;
        case 0x491c68u: goto label_491c68;
        case 0x491c6cu: goto label_491c6c;
        case 0x491c70u: goto label_491c70;
        case 0x491c74u: goto label_491c74;
        case 0x491c78u: goto label_491c78;
        case 0x491c7cu: goto label_491c7c;
        case 0x491c80u: goto label_491c80;
        case 0x491c84u: goto label_491c84;
        case 0x491c88u: goto label_491c88;
        case 0x491c8cu: goto label_491c8c;
        case 0x491c90u: goto label_491c90;
        case 0x491c94u: goto label_491c94;
        case 0x491c98u: goto label_491c98;
        case 0x491c9cu: goto label_491c9c;
        case 0x491ca0u: goto label_491ca0;
        case 0x491ca4u: goto label_491ca4;
        case 0x491ca8u: goto label_491ca8;
        case 0x491cacu: goto label_491cac;
        case 0x491cb0u: goto label_491cb0;
        case 0x491cb4u: goto label_491cb4;
        case 0x491cb8u: goto label_491cb8;
        case 0x491cbcu: goto label_491cbc;
        case 0x491cc0u: goto label_491cc0;
        case 0x491cc4u: goto label_491cc4;
        case 0x491cc8u: goto label_491cc8;
        case 0x491cccu: goto label_491ccc;
        case 0x491cd0u: goto label_491cd0;
        case 0x491cd4u: goto label_491cd4;
        case 0x491cd8u: goto label_491cd8;
        case 0x491cdcu: goto label_491cdc;
        case 0x491ce0u: goto label_491ce0;
        case 0x491ce4u: goto label_491ce4;
        case 0x491ce8u: goto label_491ce8;
        case 0x491cecu: goto label_491cec;
        case 0x491cf0u: goto label_491cf0;
        case 0x491cf4u: goto label_491cf4;
        case 0x491cf8u: goto label_491cf8;
        case 0x491cfcu: goto label_491cfc;
        case 0x491d00u: goto label_491d00;
        case 0x491d04u: goto label_491d04;
        case 0x491d08u: goto label_491d08;
        case 0x491d0cu: goto label_491d0c;
        case 0x491d10u: goto label_491d10;
        case 0x491d14u: goto label_491d14;
        case 0x491d18u: goto label_491d18;
        case 0x491d1cu: goto label_491d1c;
        case 0x491d20u: goto label_491d20;
        case 0x491d24u: goto label_491d24;
        case 0x491d28u: goto label_491d28;
        case 0x491d2cu: goto label_491d2c;
        case 0x491d30u: goto label_491d30;
        case 0x491d34u: goto label_491d34;
        case 0x491d38u: goto label_491d38;
        case 0x491d3cu: goto label_491d3c;
        case 0x491d40u: goto label_491d40;
        case 0x491d44u: goto label_491d44;
        case 0x491d48u: goto label_491d48;
        case 0x491d4cu: goto label_491d4c;
        case 0x491d50u: goto label_491d50;
        case 0x491d54u: goto label_491d54;
        case 0x491d58u: goto label_491d58;
        case 0x491d5cu: goto label_491d5c;
        case 0x491d60u: goto label_491d60;
        case 0x491d64u: goto label_491d64;
        case 0x491d68u: goto label_491d68;
        case 0x491d6cu: goto label_491d6c;
        case 0x491d70u: goto label_491d70;
        case 0x491d74u: goto label_491d74;
        case 0x491d78u: goto label_491d78;
        case 0x491d7cu: goto label_491d7c;
        case 0x491d80u: goto label_491d80;
        case 0x491d84u: goto label_491d84;
        case 0x491d88u: goto label_491d88;
        case 0x491d8cu: goto label_491d8c;
        case 0x491d90u: goto label_491d90;
        case 0x491d94u: goto label_491d94;
        case 0x491d98u: goto label_491d98;
        case 0x491d9cu: goto label_491d9c;
        case 0x491da0u: goto label_491da0;
        case 0x491da4u: goto label_491da4;
        case 0x491da8u: goto label_491da8;
        case 0x491dacu: goto label_491dac;
        case 0x491db0u: goto label_491db0;
        case 0x491db4u: goto label_491db4;
        case 0x491db8u: goto label_491db8;
        case 0x491dbcu: goto label_491dbc;
        case 0x491dc0u: goto label_491dc0;
        case 0x491dc4u: goto label_491dc4;
        case 0x491dc8u: goto label_491dc8;
        case 0x491dccu: goto label_491dcc;
        case 0x491dd0u: goto label_491dd0;
        case 0x491dd4u: goto label_491dd4;
        case 0x491dd8u: goto label_491dd8;
        case 0x491ddcu: goto label_491ddc;
        case 0x491de0u: goto label_491de0;
        case 0x491de4u: goto label_491de4;
        case 0x491de8u: goto label_491de8;
        case 0x491decu: goto label_491dec;
        case 0x491df0u: goto label_491df0;
        case 0x491df4u: goto label_491df4;
        case 0x491df8u: goto label_491df8;
        case 0x491dfcu: goto label_491dfc;
        case 0x491e00u: goto label_491e00;
        case 0x491e04u: goto label_491e04;
        case 0x491e08u: goto label_491e08;
        case 0x491e0cu: goto label_491e0c;
        case 0x491e10u: goto label_491e10;
        case 0x491e14u: goto label_491e14;
        case 0x491e18u: goto label_491e18;
        case 0x491e1cu: goto label_491e1c;
        case 0x491e20u: goto label_491e20;
        case 0x491e24u: goto label_491e24;
        case 0x491e28u: goto label_491e28;
        case 0x491e2cu: goto label_491e2c;
        case 0x491e30u: goto label_491e30;
        case 0x491e34u: goto label_491e34;
        case 0x491e38u: goto label_491e38;
        case 0x491e3cu: goto label_491e3c;
        case 0x491e40u: goto label_491e40;
        case 0x491e44u: goto label_491e44;
        case 0x491e48u: goto label_491e48;
        case 0x491e4cu: goto label_491e4c;
        case 0x491e50u: goto label_491e50;
        case 0x491e54u: goto label_491e54;
        case 0x491e58u: goto label_491e58;
        case 0x491e5cu: goto label_491e5c;
        case 0x491e60u: goto label_491e60;
        case 0x491e64u: goto label_491e64;
        case 0x491e68u: goto label_491e68;
        case 0x491e6cu: goto label_491e6c;
        case 0x491e70u: goto label_491e70;
        case 0x491e74u: goto label_491e74;
        case 0x491e78u: goto label_491e78;
        case 0x491e7cu: goto label_491e7c;
        case 0x491e80u: goto label_491e80;
        case 0x491e84u: goto label_491e84;
        case 0x491e88u: goto label_491e88;
        case 0x491e8cu: goto label_491e8c;
        case 0x491e90u: goto label_491e90;
        case 0x491e94u: goto label_491e94;
        case 0x491e98u: goto label_491e98;
        case 0x491e9cu: goto label_491e9c;
        case 0x491ea0u: goto label_491ea0;
        case 0x491ea4u: goto label_491ea4;
        case 0x491ea8u: goto label_491ea8;
        case 0x491eacu: goto label_491eac;
        case 0x491eb0u: goto label_491eb0;
        case 0x491eb4u: goto label_491eb4;
        case 0x491eb8u: goto label_491eb8;
        case 0x491ebcu: goto label_491ebc;
        case 0x491ec0u: goto label_491ec0;
        case 0x491ec4u: goto label_491ec4;
        case 0x491ec8u: goto label_491ec8;
        case 0x491eccu: goto label_491ecc;
        case 0x491ed0u: goto label_491ed0;
        case 0x491ed4u: goto label_491ed4;
        case 0x491ed8u: goto label_491ed8;
        case 0x491edcu: goto label_491edc;
        case 0x491ee0u: goto label_491ee0;
        case 0x491ee4u: goto label_491ee4;
        case 0x491ee8u: goto label_491ee8;
        case 0x491eecu: goto label_491eec;
        case 0x491ef0u: goto label_491ef0;
        case 0x491ef4u: goto label_491ef4;
        case 0x491ef8u: goto label_491ef8;
        case 0x491efcu: goto label_491efc;
        case 0x491f00u: goto label_491f00;
        case 0x491f04u: goto label_491f04;
        case 0x491f08u: goto label_491f08;
        case 0x491f0cu: goto label_491f0c;
        case 0x491f10u: goto label_491f10;
        case 0x491f14u: goto label_491f14;
        case 0x491f18u: goto label_491f18;
        case 0x491f1cu: goto label_491f1c;
        case 0x491f20u: goto label_491f20;
        case 0x491f24u: goto label_491f24;
        case 0x491f28u: goto label_491f28;
        case 0x491f2cu: goto label_491f2c;
        case 0x491f30u: goto label_491f30;
        case 0x491f34u: goto label_491f34;
        case 0x491f38u: goto label_491f38;
        case 0x491f3cu: goto label_491f3c;
        case 0x491f40u: goto label_491f40;
        case 0x491f44u: goto label_491f44;
        case 0x491f48u: goto label_491f48;
        case 0x491f4cu: goto label_491f4c;
        case 0x491f50u: goto label_491f50;
        case 0x491f54u: goto label_491f54;
        case 0x491f58u: goto label_491f58;
        case 0x491f5cu: goto label_491f5c;
        case 0x491f60u: goto label_491f60;
        case 0x491f64u: goto label_491f64;
        case 0x491f68u: goto label_491f68;
        case 0x491f6cu: goto label_491f6c;
        case 0x491f70u: goto label_491f70;
        case 0x491f74u: goto label_491f74;
        case 0x491f78u: goto label_491f78;
        case 0x491f7cu: goto label_491f7c;
        case 0x491f80u: goto label_491f80;
        case 0x491f84u: goto label_491f84;
        case 0x491f88u: goto label_491f88;
        case 0x491f8cu: goto label_491f8c;
        case 0x491f90u: goto label_491f90;
        case 0x491f94u: goto label_491f94;
        case 0x491f98u: goto label_491f98;
        case 0x491f9cu: goto label_491f9c;
        case 0x491fa0u: goto label_491fa0;
        case 0x491fa4u: goto label_491fa4;
        case 0x491fa8u: goto label_491fa8;
        case 0x491facu: goto label_491fac;
        case 0x491fb0u: goto label_491fb0;
        case 0x491fb4u: goto label_491fb4;
        case 0x491fb8u: goto label_491fb8;
        case 0x491fbcu: goto label_491fbc;
        case 0x491fc0u: goto label_491fc0;
        case 0x491fc4u: goto label_491fc4;
        case 0x491fc8u: goto label_491fc8;
        case 0x491fccu: goto label_491fcc;
        case 0x491fd0u: goto label_491fd0;
        case 0x491fd4u: goto label_491fd4;
        case 0x491fd8u: goto label_491fd8;
        case 0x491fdcu: goto label_491fdc;
        case 0x491fe0u: goto label_491fe0;
        case 0x491fe4u: goto label_491fe4;
        case 0x491fe8u: goto label_491fe8;
        case 0x491fecu: goto label_491fec;
        case 0x491ff0u: goto label_491ff0;
        case 0x491ff4u: goto label_491ff4;
        case 0x491ff8u: goto label_491ff8;
        case 0x491ffcu: goto label_491ffc;
        case 0x492000u: goto label_492000;
        case 0x492004u: goto label_492004;
        case 0x492008u: goto label_492008;
        case 0x49200cu: goto label_49200c;
        case 0x492010u: goto label_492010;
        case 0x492014u: goto label_492014;
        case 0x492018u: goto label_492018;
        case 0x49201cu: goto label_49201c;
        case 0x492020u: goto label_492020;
        case 0x492024u: goto label_492024;
        case 0x492028u: goto label_492028;
        case 0x49202cu: goto label_49202c;
        case 0x492030u: goto label_492030;
        case 0x492034u: goto label_492034;
        case 0x492038u: goto label_492038;
        case 0x49203cu: goto label_49203c;
        case 0x492040u: goto label_492040;
        case 0x492044u: goto label_492044;
        case 0x492048u: goto label_492048;
        case 0x49204cu: goto label_49204c;
        case 0x492050u: goto label_492050;
        case 0x492054u: goto label_492054;
        case 0x492058u: goto label_492058;
        case 0x49205cu: goto label_49205c;
        case 0x492060u: goto label_492060;
        case 0x492064u: goto label_492064;
        case 0x492068u: goto label_492068;
        case 0x49206cu: goto label_49206c;
        case 0x492070u: goto label_492070;
        case 0x492074u: goto label_492074;
        case 0x492078u: goto label_492078;
        case 0x49207cu: goto label_49207c;
        case 0x492080u: goto label_492080;
        case 0x492084u: goto label_492084;
        case 0x492088u: goto label_492088;
        case 0x49208cu: goto label_49208c;
        case 0x492090u: goto label_492090;
        case 0x492094u: goto label_492094;
        case 0x492098u: goto label_492098;
        case 0x49209cu: goto label_49209c;
        case 0x4920a0u: goto label_4920a0;
        case 0x4920a4u: goto label_4920a4;
        case 0x4920a8u: goto label_4920a8;
        case 0x4920acu: goto label_4920ac;
        case 0x4920b0u: goto label_4920b0;
        case 0x4920b4u: goto label_4920b4;
        case 0x4920b8u: goto label_4920b8;
        case 0x4920bcu: goto label_4920bc;
        case 0x4920c0u: goto label_4920c0;
        case 0x4920c4u: goto label_4920c4;
        case 0x4920c8u: goto label_4920c8;
        case 0x4920ccu: goto label_4920cc;
        case 0x4920d0u: goto label_4920d0;
        case 0x4920d4u: goto label_4920d4;
        case 0x4920d8u: goto label_4920d8;
        case 0x4920dcu: goto label_4920dc;
        case 0x4920e0u: goto label_4920e0;
        case 0x4920e4u: goto label_4920e4;
        case 0x4920e8u: goto label_4920e8;
        case 0x4920ecu: goto label_4920ec;
        case 0x4920f0u: goto label_4920f0;
        case 0x4920f4u: goto label_4920f4;
        case 0x4920f8u: goto label_4920f8;
        case 0x4920fcu: goto label_4920fc;
        case 0x492100u: goto label_492100;
        case 0x492104u: goto label_492104;
        case 0x492108u: goto label_492108;
        case 0x49210cu: goto label_49210c;
        case 0x492110u: goto label_492110;
        case 0x492114u: goto label_492114;
        case 0x492118u: goto label_492118;
        case 0x49211cu: goto label_49211c;
        case 0x492120u: goto label_492120;
        case 0x492124u: goto label_492124;
        case 0x492128u: goto label_492128;
        case 0x49212cu: goto label_49212c;
        case 0x492130u: goto label_492130;
        case 0x492134u: goto label_492134;
        case 0x492138u: goto label_492138;
        case 0x49213cu: goto label_49213c;
        case 0x492140u: goto label_492140;
        case 0x492144u: goto label_492144;
        case 0x492148u: goto label_492148;
        case 0x49214cu: goto label_49214c;
        case 0x492150u: goto label_492150;
        case 0x492154u: goto label_492154;
        case 0x492158u: goto label_492158;
        case 0x49215cu: goto label_49215c;
        case 0x492160u: goto label_492160;
        case 0x492164u: goto label_492164;
        case 0x492168u: goto label_492168;
        case 0x49216cu: goto label_49216c;
        case 0x492170u: goto label_492170;
        case 0x492174u: goto label_492174;
        case 0x492178u: goto label_492178;
        case 0x49217cu: goto label_49217c;
        case 0x492180u: goto label_492180;
        case 0x492184u: goto label_492184;
        case 0x492188u: goto label_492188;
        case 0x49218cu: goto label_49218c;
        case 0x492190u: goto label_492190;
        case 0x492194u: goto label_492194;
        case 0x492198u: goto label_492198;
        case 0x49219cu: goto label_49219c;
        case 0x4921a0u: goto label_4921a0;
        case 0x4921a4u: goto label_4921a4;
        case 0x4921a8u: goto label_4921a8;
        case 0x4921acu: goto label_4921ac;
        case 0x4921b0u: goto label_4921b0;
        case 0x4921b4u: goto label_4921b4;
        case 0x4921b8u: goto label_4921b8;
        case 0x4921bcu: goto label_4921bc;
        case 0x4921c0u: goto label_4921c0;
        case 0x4921c4u: goto label_4921c4;
        case 0x4921c8u: goto label_4921c8;
        case 0x4921ccu: goto label_4921cc;
        case 0x4921d0u: goto label_4921d0;
        case 0x4921d4u: goto label_4921d4;
        case 0x4921d8u: goto label_4921d8;
        case 0x4921dcu: goto label_4921dc;
        case 0x4921e0u: goto label_4921e0;
        case 0x4921e4u: goto label_4921e4;
        case 0x4921e8u: goto label_4921e8;
        case 0x4921ecu: goto label_4921ec;
        case 0x4921f0u: goto label_4921f0;
        case 0x4921f4u: goto label_4921f4;
        case 0x4921f8u: goto label_4921f8;
        case 0x4921fcu: goto label_4921fc;
        case 0x492200u: goto label_492200;
        case 0x492204u: goto label_492204;
        case 0x492208u: goto label_492208;
        case 0x49220cu: goto label_49220c;
        case 0x492210u: goto label_492210;
        case 0x492214u: goto label_492214;
        case 0x492218u: goto label_492218;
        case 0x49221cu: goto label_49221c;
        case 0x492220u: goto label_492220;
        case 0x492224u: goto label_492224;
        case 0x492228u: goto label_492228;
        case 0x49222cu: goto label_49222c;
        case 0x492230u: goto label_492230;
        case 0x492234u: goto label_492234;
        case 0x492238u: goto label_492238;
        case 0x49223cu: goto label_49223c;
        case 0x492240u: goto label_492240;
        case 0x492244u: goto label_492244;
        case 0x492248u: goto label_492248;
        case 0x49224cu: goto label_49224c;
        case 0x492250u: goto label_492250;
        case 0x492254u: goto label_492254;
        case 0x492258u: goto label_492258;
        case 0x49225cu: goto label_49225c;
        case 0x492260u: goto label_492260;
        case 0x492264u: goto label_492264;
        case 0x492268u: goto label_492268;
        case 0x49226cu: goto label_49226c;
        case 0x492270u: goto label_492270;
        case 0x492274u: goto label_492274;
        case 0x492278u: goto label_492278;
        case 0x49227cu: goto label_49227c;
        case 0x492280u: goto label_492280;
        case 0x492284u: goto label_492284;
        case 0x492288u: goto label_492288;
        case 0x49228cu: goto label_49228c;
        case 0x492290u: goto label_492290;
        case 0x492294u: goto label_492294;
        case 0x492298u: goto label_492298;
        case 0x49229cu: goto label_49229c;
        case 0x4922a0u: goto label_4922a0;
        case 0x4922a4u: goto label_4922a4;
        case 0x4922a8u: goto label_4922a8;
        case 0x4922acu: goto label_4922ac;
        case 0x4922b0u: goto label_4922b0;
        case 0x4922b4u: goto label_4922b4;
        case 0x4922b8u: goto label_4922b8;
        case 0x4922bcu: goto label_4922bc;
        case 0x4922c0u: goto label_4922c0;
        case 0x4922c4u: goto label_4922c4;
        case 0x4922c8u: goto label_4922c8;
        case 0x4922ccu: goto label_4922cc;
        case 0x4922d0u: goto label_4922d0;
        case 0x4922d4u: goto label_4922d4;
        case 0x4922d8u: goto label_4922d8;
        case 0x4922dcu: goto label_4922dc;
        case 0x4922e0u: goto label_4922e0;
        case 0x4922e4u: goto label_4922e4;
        case 0x4922e8u: goto label_4922e8;
        case 0x4922ecu: goto label_4922ec;
        case 0x4922f0u: goto label_4922f0;
        case 0x4922f4u: goto label_4922f4;
        case 0x4922f8u: goto label_4922f8;
        case 0x4922fcu: goto label_4922fc;
        case 0x492300u: goto label_492300;
        case 0x492304u: goto label_492304;
        case 0x492308u: goto label_492308;
        case 0x49230cu: goto label_49230c;
        case 0x492310u: goto label_492310;
        case 0x492314u: goto label_492314;
        case 0x492318u: goto label_492318;
        case 0x49231cu: goto label_49231c;
        case 0x492320u: goto label_492320;
        case 0x492324u: goto label_492324;
        case 0x492328u: goto label_492328;
        case 0x49232cu: goto label_49232c;
        case 0x492330u: goto label_492330;
        case 0x492334u: goto label_492334;
        case 0x492338u: goto label_492338;
        case 0x49233cu: goto label_49233c;
        case 0x492340u: goto label_492340;
        case 0x492344u: goto label_492344;
        case 0x492348u: goto label_492348;
        case 0x49234cu: goto label_49234c;
        case 0x492350u: goto label_492350;
        case 0x492354u: goto label_492354;
        case 0x492358u: goto label_492358;
        case 0x49235cu: goto label_49235c;
        case 0x492360u: goto label_492360;
        case 0x492364u: goto label_492364;
        case 0x492368u: goto label_492368;
        case 0x49236cu: goto label_49236c;
        case 0x492370u: goto label_492370;
        case 0x492374u: goto label_492374;
        case 0x492378u: goto label_492378;
        case 0x49237cu: goto label_49237c;
        case 0x492380u: goto label_492380;
        case 0x492384u: goto label_492384;
        case 0x492388u: goto label_492388;
        case 0x49238cu: goto label_49238c;
        case 0x492390u: goto label_492390;
        case 0x492394u: goto label_492394;
        case 0x492398u: goto label_492398;
        case 0x49239cu: goto label_49239c;
        case 0x4923a0u: goto label_4923a0;
        case 0x4923a4u: goto label_4923a4;
        case 0x4923a8u: goto label_4923a8;
        case 0x4923acu: goto label_4923ac;
        case 0x4923b0u: goto label_4923b0;
        case 0x4923b4u: goto label_4923b4;
        case 0x4923b8u: goto label_4923b8;
        case 0x4923bcu: goto label_4923bc;
        case 0x4923c0u: goto label_4923c0;
        case 0x4923c4u: goto label_4923c4;
        case 0x4923c8u: goto label_4923c8;
        case 0x4923ccu: goto label_4923cc;
        case 0x4923d0u: goto label_4923d0;
        case 0x4923d4u: goto label_4923d4;
        case 0x4923d8u: goto label_4923d8;
        case 0x4923dcu: goto label_4923dc;
        case 0x4923e0u: goto label_4923e0;
        case 0x4923e4u: goto label_4923e4;
        case 0x4923e8u: goto label_4923e8;
        case 0x4923ecu: goto label_4923ec;
        case 0x4923f0u: goto label_4923f0;
        case 0x4923f4u: goto label_4923f4;
        case 0x4923f8u: goto label_4923f8;
        case 0x4923fcu: goto label_4923fc;
        case 0x492400u: goto label_492400;
        case 0x492404u: goto label_492404;
        case 0x492408u: goto label_492408;
        case 0x49240cu: goto label_49240c;
        case 0x492410u: goto label_492410;
        case 0x492414u: goto label_492414;
        case 0x492418u: goto label_492418;
        case 0x49241cu: goto label_49241c;
        case 0x492420u: goto label_492420;
        case 0x492424u: goto label_492424;
        case 0x492428u: goto label_492428;
        case 0x49242cu: goto label_49242c;
        case 0x492430u: goto label_492430;
        case 0x492434u: goto label_492434;
        case 0x492438u: goto label_492438;
        case 0x49243cu: goto label_49243c;
        case 0x492440u: goto label_492440;
        case 0x492444u: goto label_492444;
        case 0x492448u: goto label_492448;
        case 0x49244cu: goto label_49244c;
        case 0x492450u: goto label_492450;
        case 0x492454u: goto label_492454;
        case 0x492458u: goto label_492458;
        case 0x49245cu: goto label_49245c;
        case 0x492460u: goto label_492460;
        case 0x492464u: goto label_492464;
        case 0x492468u: goto label_492468;
        case 0x49246cu: goto label_49246c;
        case 0x492470u: goto label_492470;
        case 0x492474u: goto label_492474;
        case 0x492478u: goto label_492478;
        case 0x49247cu: goto label_49247c;
        case 0x492480u: goto label_492480;
        case 0x492484u: goto label_492484;
        case 0x492488u: goto label_492488;
        case 0x49248cu: goto label_49248c;
        case 0x492490u: goto label_492490;
        case 0x492494u: goto label_492494;
        case 0x492498u: goto label_492498;
        case 0x49249cu: goto label_49249c;
        case 0x4924a0u: goto label_4924a0;
        case 0x4924a4u: goto label_4924a4;
        case 0x4924a8u: goto label_4924a8;
        case 0x4924acu: goto label_4924ac;
        case 0x4924b0u: goto label_4924b0;
        case 0x4924b4u: goto label_4924b4;
        case 0x4924b8u: goto label_4924b8;
        case 0x4924bcu: goto label_4924bc;
        case 0x4924c0u: goto label_4924c0;
        case 0x4924c4u: goto label_4924c4;
        case 0x4924c8u: goto label_4924c8;
        case 0x4924ccu: goto label_4924cc;
        case 0x4924d0u: goto label_4924d0;
        case 0x4924d4u: goto label_4924d4;
        case 0x4924d8u: goto label_4924d8;
        case 0x4924dcu: goto label_4924dc;
        case 0x4924e0u: goto label_4924e0;
        case 0x4924e4u: goto label_4924e4;
        case 0x4924e8u: goto label_4924e8;
        case 0x4924ecu: goto label_4924ec;
        case 0x4924f0u: goto label_4924f0;
        case 0x4924f4u: goto label_4924f4;
        case 0x4924f8u: goto label_4924f8;
        case 0x4924fcu: goto label_4924fc;
        case 0x492500u: goto label_492500;
        case 0x492504u: goto label_492504;
        case 0x492508u: goto label_492508;
        case 0x49250cu: goto label_49250c;
        case 0x492510u: goto label_492510;
        case 0x492514u: goto label_492514;
        case 0x492518u: goto label_492518;
        case 0x49251cu: goto label_49251c;
        case 0x492520u: goto label_492520;
        case 0x492524u: goto label_492524;
        case 0x492528u: goto label_492528;
        case 0x49252cu: goto label_49252c;
        case 0x492530u: goto label_492530;
        case 0x492534u: goto label_492534;
        case 0x492538u: goto label_492538;
        case 0x49253cu: goto label_49253c;
        case 0x492540u: goto label_492540;
        case 0x492544u: goto label_492544;
        case 0x492548u: goto label_492548;
        case 0x49254cu: goto label_49254c;
        case 0x492550u: goto label_492550;
        case 0x492554u: goto label_492554;
        case 0x492558u: goto label_492558;
        case 0x49255cu: goto label_49255c;
        case 0x492560u: goto label_492560;
        case 0x492564u: goto label_492564;
        case 0x492568u: goto label_492568;
        case 0x49256cu: goto label_49256c;
        case 0x492570u: goto label_492570;
        case 0x492574u: goto label_492574;
        case 0x492578u: goto label_492578;
        case 0x49257cu: goto label_49257c;
        case 0x492580u: goto label_492580;
        case 0x492584u: goto label_492584;
        case 0x492588u: goto label_492588;
        case 0x49258cu: goto label_49258c;
        case 0x492590u: goto label_492590;
        case 0x492594u: goto label_492594;
        case 0x492598u: goto label_492598;
        case 0x49259cu: goto label_49259c;
        case 0x4925a0u: goto label_4925a0;
        case 0x4925a4u: goto label_4925a4;
        case 0x4925a8u: goto label_4925a8;
        case 0x4925acu: goto label_4925ac;
        case 0x4925b0u: goto label_4925b0;
        case 0x4925b4u: goto label_4925b4;
        case 0x4925b8u: goto label_4925b8;
        case 0x4925bcu: goto label_4925bc;
        case 0x4925c0u: goto label_4925c0;
        case 0x4925c4u: goto label_4925c4;
        case 0x4925c8u: goto label_4925c8;
        case 0x4925ccu: goto label_4925cc;
        case 0x4925d0u: goto label_4925d0;
        case 0x4925d4u: goto label_4925d4;
        case 0x4925d8u: goto label_4925d8;
        case 0x4925dcu: goto label_4925dc;
        case 0x4925e0u: goto label_4925e0;
        case 0x4925e4u: goto label_4925e4;
        case 0x4925e8u: goto label_4925e8;
        case 0x4925ecu: goto label_4925ec;
        case 0x4925f0u: goto label_4925f0;
        case 0x4925f4u: goto label_4925f4;
        case 0x4925f8u: goto label_4925f8;
        case 0x4925fcu: goto label_4925fc;
        case 0x492600u: goto label_492600;
        case 0x492604u: goto label_492604;
        case 0x492608u: goto label_492608;
        case 0x49260cu: goto label_49260c;
        case 0x492610u: goto label_492610;
        case 0x492614u: goto label_492614;
        case 0x492618u: goto label_492618;
        case 0x49261cu: goto label_49261c;
        case 0x492620u: goto label_492620;
        case 0x492624u: goto label_492624;
        case 0x492628u: goto label_492628;
        case 0x49262cu: goto label_49262c;
        case 0x492630u: goto label_492630;
        case 0x492634u: goto label_492634;
        case 0x492638u: goto label_492638;
        case 0x49263cu: goto label_49263c;
        case 0x492640u: goto label_492640;
        case 0x492644u: goto label_492644;
        case 0x492648u: goto label_492648;
        case 0x49264cu: goto label_49264c;
        case 0x492650u: goto label_492650;
        case 0x492654u: goto label_492654;
        case 0x492658u: goto label_492658;
        case 0x49265cu: goto label_49265c;
        case 0x492660u: goto label_492660;
        case 0x492664u: goto label_492664;
        case 0x492668u: goto label_492668;
        case 0x49266cu: goto label_49266c;
        case 0x492670u: goto label_492670;
        case 0x492674u: goto label_492674;
        case 0x492678u: goto label_492678;
        case 0x49267cu: goto label_49267c;
        case 0x492680u: goto label_492680;
        case 0x492684u: goto label_492684;
        case 0x492688u: goto label_492688;
        case 0x49268cu: goto label_49268c;
        case 0x492690u: goto label_492690;
        case 0x492694u: goto label_492694;
        case 0x492698u: goto label_492698;
        case 0x49269cu: goto label_49269c;
        case 0x4926a0u: goto label_4926a0;
        case 0x4926a4u: goto label_4926a4;
        case 0x4926a8u: goto label_4926a8;
        case 0x4926acu: goto label_4926ac;
        case 0x4926b0u: goto label_4926b0;
        case 0x4926b4u: goto label_4926b4;
        case 0x4926b8u: goto label_4926b8;
        case 0x4926bcu: goto label_4926bc;
        case 0x4926c0u: goto label_4926c0;
        case 0x4926c4u: goto label_4926c4;
        case 0x4926c8u: goto label_4926c8;
        case 0x4926ccu: goto label_4926cc;
        case 0x4926d0u: goto label_4926d0;
        case 0x4926d4u: goto label_4926d4;
        case 0x4926d8u: goto label_4926d8;
        case 0x4926dcu: goto label_4926dc;
        case 0x4926e0u: goto label_4926e0;
        case 0x4926e4u: goto label_4926e4;
        case 0x4926e8u: goto label_4926e8;
        case 0x4926ecu: goto label_4926ec;
        case 0x4926f0u: goto label_4926f0;
        case 0x4926f4u: goto label_4926f4;
        case 0x4926f8u: goto label_4926f8;
        case 0x4926fcu: goto label_4926fc;
        case 0x492700u: goto label_492700;
        case 0x492704u: goto label_492704;
        case 0x492708u: goto label_492708;
        case 0x49270cu: goto label_49270c;
        case 0x492710u: goto label_492710;
        case 0x492714u: goto label_492714;
        case 0x492718u: goto label_492718;
        case 0x49271cu: goto label_49271c;
        case 0x492720u: goto label_492720;
        case 0x492724u: goto label_492724;
        case 0x492728u: goto label_492728;
        case 0x49272cu: goto label_49272c;
        case 0x492730u: goto label_492730;
        case 0x492734u: goto label_492734;
        case 0x492738u: goto label_492738;
        case 0x49273cu: goto label_49273c;
        case 0x492740u: goto label_492740;
        case 0x492744u: goto label_492744;
        case 0x492748u: goto label_492748;
        case 0x49274cu: goto label_49274c;
        case 0x492750u: goto label_492750;
        case 0x492754u: goto label_492754;
        case 0x492758u: goto label_492758;
        case 0x49275cu: goto label_49275c;
        case 0x492760u: goto label_492760;
        case 0x492764u: goto label_492764;
        case 0x492768u: goto label_492768;
        case 0x49276cu: goto label_49276c;
        case 0x492770u: goto label_492770;
        case 0x492774u: goto label_492774;
        case 0x492778u: goto label_492778;
        case 0x49277cu: goto label_49277c;
        case 0x492780u: goto label_492780;
        case 0x492784u: goto label_492784;
        case 0x492788u: goto label_492788;
        case 0x49278cu: goto label_49278c;
        case 0x492790u: goto label_492790;
        case 0x492794u: goto label_492794;
        case 0x492798u: goto label_492798;
        case 0x49279cu: goto label_49279c;
        case 0x4927a0u: goto label_4927a0;
        case 0x4927a4u: goto label_4927a4;
        case 0x4927a8u: goto label_4927a8;
        case 0x4927acu: goto label_4927ac;
        case 0x4927b0u: goto label_4927b0;
        case 0x4927b4u: goto label_4927b4;
        case 0x4927b8u: goto label_4927b8;
        case 0x4927bcu: goto label_4927bc;
        case 0x4927c0u: goto label_4927c0;
        case 0x4927c4u: goto label_4927c4;
        case 0x4927c8u: goto label_4927c8;
        case 0x4927ccu: goto label_4927cc;
        case 0x4927d0u: goto label_4927d0;
        case 0x4927d4u: goto label_4927d4;
        case 0x4927d8u: goto label_4927d8;
        case 0x4927dcu: goto label_4927dc;
        case 0x4927e0u: goto label_4927e0;
        case 0x4927e4u: goto label_4927e4;
        case 0x4927e8u: goto label_4927e8;
        case 0x4927ecu: goto label_4927ec;
        case 0x4927f0u: goto label_4927f0;
        case 0x4927f4u: goto label_4927f4;
        case 0x4927f8u: goto label_4927f8;
        case 0x4927fcu: goto label_4927fc;
        case 0x492800u: goto label_492800;
        case 0x492804u: goto label_492804;
        case 0x492808u: goto label_492808;
        case 0x49280cu: goto label_49280c;
        case 0x492810u: goto label_492810;
        case 0x492814u: goto label_492814;
        case 0x492818u: goto label_492818;
        case 0x49281cu: goto label_49281c;
        case 0x492820u: goto label_492820;
        case 0x492824u: goto label_492824;
        case 0x492828u: goto label_492828;
        case 0x49282cu: goto label_49282c;
        case 0x492830u: goto label_492830;
        case 0x492834u: goto label_492834;
        case 0x492838u: goto label_492838;
        case 0x49283cu: goto label_49283c;
        case 0x492840u: goto label_492840;
        case 0x492844u: goto label_492844;
        case 0x492848u: goto label_492848;
        case 0x49284cu: goto label_49284c;
        case 0x492850u: goto label_492850;
        case 0x492854u: goto label_492854;
        case 0x492858u: goto label_492858;
        case 0x49285cu: goto label_49285c;
        case 0x492860u: goto label_492860;
        case 0x492864u: goto label_492864;
        case 0x492868u: goto label_492868;
        case 0x49286cu: goto label_49286c;
        case 0x492870u: goto label_492870;
        case 0x492874u: goto label_492874;
        case 0x492878u: goto label_492878;
        case 0x49287cu: goto label_49287c;
        case 0x492880u: goto label_492880;
        case 0x492884u: goto label_492884;
        case 0x492888u: goto label_492888;
        case 0x49288cu: goto label_49288c;
        case 0x492890u: goto label_492890;
        case 0x492894u: goto label_492894;
        case 0x492898u: goto label_492898;
        case 0x49289cu: goto label_49289c;
        case 0x4928a0u: goto label_4928a0;
        case 0x4928a4u: goto label_4928a4;
        case 0x4928a8u: goto label_4928a8;
        case 0x4928acu: goto label_4928ac;
        case 0x4928b0u: goto label_4928b0;
        case 0x4928b4u: goto label_4928b4;
        case 0x4928b8u: goto label_4928b8;
        case 0x4928bcu: goto label_4928bc;
        case 0x4928c0u: goto label_4928c0;
        case 0x4928c4u: goto label_4928c4;
        case 0x4928c8u: goto label_4928c8;
        case 0x4928ccu: goto label_4928cc;
        case 0x4928d0u: goto label_4928d0;
        case 0x4928d4u: goto label_4928d4;
        case 0x4928d8u: goto label_4928d8;
        case 0x4928dcu: goto label_4928dc;
        case 0x4928e0u: goto label_4928e0;
        case 0x4928e4u: goto label_4928e4;
        case 0x4928e8u: goto label_4928e8;
        case 0x4928ecu: goto label_4928ec;
        case 0x4928f0u: goto label_4928f0;
        case 0x4928f4u: goto label_4928f4;
        case 0x4928f8u: goto label_4928f8;
        case 0x4928fcu: goto label_4928fc;
        case 0x492900u: goto label_492900;
        case 0x492904u: goto label_492904;
        case 0x492908u: goto label_492908;
        case 0x49290cu: goto label_49290c;
        case 0x492910u: goto label_492910;
        case 0x492914u: goto label_492914;
        case 0x492918u: goto label_492918;
        case 0x49291cu: goto label_49291c;
        case 0x492920u: goto label_492920;
        case 0x492924u: goto label_492924;
        case 0x492928u: goto label_492928;
        case 0x49292cu: goto label_49292c;
        case 0x492930u: goto label_492930;
        case 0x492934u: goto label_492934;
        case 0x492938u: goto label_492938;
        case 0x49293cu: goto label_49293c;
        case 0x492940u: goto label_492940;
        case 0x492944u: goto label_492944;
        case 0x492948u: goto label_492948;
        case 0x49294cu: goto label_49294c;
        case 0x492950u: goto label_492950;
        case 0x492954u: goto label_492954;
        case 0x492958u: goto label_492958;
        case 0x49295cu: goto label_49295c;
        case 0x492960u: goto label_492960;
        case 0x492964u: goto label_492964;
        case 0x492968u: goto label_492968;
        case 0x49296cu: goto label_49296c;
        case 0x492970u: goto label_492970;
        case 0x492974u: goto label_492974;
        case 0x492978u: goto label_492978;
        case 0x49297cu: goto label_49297c;
        case 0x492980u: goto label_492980;
        case 0x492984u: goto label_492984;
        case 0x492988u: goto label_492988;
        case 0x49298cu: goto label_49298c;
        case 0x492990u: goto label_492990;
        case 0x492994u: goto label_492994;
        case 0x492998u: goto label_492998;
        case 0x49299cu: goto label_49299c;
        case 0x4929a0u: goto label_4929a0;
        case 0x4929a4u: goto label_4929a4;
        case 0x4929a8u: goto label_4929a8;
        case 0x4929acu: goto label_4929ac;
        case 0x4929b0u: goto label_4929b0;
        case 0x4929b4u: goto label_4929b4;
        case 0x4929b8u: goto label_4929b8;
        case 0x4929bcu: goto label_4929bc;
        case 0x4929c0u: goto label_4929c0;
        case 0x4929c4u: goto label_4929c4;
        case 0x4929c8u: goto label_4929c8;
        case 0x4929ccu: goto label_4929cc;
        case 0x4929d0u: goto label_4929d0;
        case 0x4929d4u: goto label_4929d4;
        case 0x4929d8u: goto label_4929d8;
        case 0x4929dcu: goto label_4929dc;
        case 0x4929e0u: goto label_4929e0;
        case 0x4929e4u: goto label_4929e4;
        case 0x4929e8u: goto label_4929e8;
        case 0x4929ecu: goto label_4929ec;
        case 0x4929f0u: goto label_4929f0;
        case 0x4929f4u: goto label_4929f4;
        case 0x4929f8u: goto label_4929f8;
        case 0x4929fcu: goto label_4929fc;
        case 0x492a00u: goto label_492a00;
        case 0x492a04u: goto label_492a04;
        case 0x492a08u: goto label_492a08;
        case 0x492a0cu: goto label_492a0c;
        case 0x492a10u: goto label_492a10;
        case 0x492a14u: goto label_492a14;
        case 0x492a18u: goto label_492a18;
        case 0x492a1cu: goto label_492a1c;
        case 0x492a20u: goto label_492a20;
        case 0x492a24u: goto label_492a24;
        case 0x492a28u: goto label_492a28;
        case 0x492a2cu: goto label_492a2c;
        case 0x492a30u: goto label_492a30;
        case 0x492a34u: goto label_492a34;
        case 0x492a38u: goto label_492a38;
        case 0x492a3cu: goto label_492a3c;
        case 0x492a40u: goto label_492a40;
        case 0x492a44u: goto label_492a44;
        case 0x492a48u: goto label_492a48;
        case 0x492a4cu: goto label_492a4c;
        case 0x492a50u: goto label_492a50;
        case 0x492a54u: goto label_492a54;
        case 0x492a58u: goto label_492a58;
        case 0x492a5cu: goto label_492a5c;
        case 0x492a60u: goto label_492a60;
        case 0x492a64u: goto label_492a64;
        case 0x492a68u: goto label_492a68;
        case 0x492a6cu: goto label_492a6c;
        case 0x492a70u: goto label_492a70;
        case 0x492a74u: goto label_492a74;
        case 0x492a78u: goto label_492a78;
        case 0x492a7cu: goto label_492a7c;
        case 0x492a80u: goto label_492a80;
        case 0x492a84u: goto label_492a84;
        case 0x492a88u: goto label_492a88;
        case 0x492a8cu: goto label_492a8c;
        case 0x492a90u: goto label_492a90;
        case 0x492a94u: goto label_492a94;
        case 0x492a98u: goto label_492a98;
        case 0x492a9cu: goto label_492a9c;
        case 0x492aa0u: goto label_492aa0;
        case 0x492aa4u: goto label_492aa4;
        case 0x492aa8u: goto label_492aa8;
        case 0x492aacu: goto label_492aac;
        case 0x492ab0u: goto label_492ab0;
        case 0x492ab4u: goto label_492ab4;
        case 0x492ab8u: goto label_492ab8;
        case 0x492abcu: goto label_492abc;
        case 0x492ac0u: goto label_492ac0;
        case 0x492ac4u: goto label_492ac4;
        case 0x492ac8u: goto label_492ac8;
        case 0x492accu: goto label_492acc;
        case 0x492ad0u: goto label_492ad0;
        case 0x492ad4u: goto label_492ad4;
        case 0x492ad8u: goto label_492ad8;
        case 0x492adcu: goto label_492adc;
        case 0x492ae0u: goto label_492ae0;
        case 0x492ae4u: goto label_492ae4;
        case 0x492ae8u: goto label_492ae8;
        case 0x492aecu: goto label_492aec;
        case 0x492af0u: goto label_492af0;
        case 0x492af4u: goto label_492af4;
        case 0x492af8u: goto label_492af8;
        case 0x492afcu: goto label_492afc;
        case 0x492b00u: goto label_492b00;
        case 0x492b04u: goto label_492b04;
        case 0x492b08u: goto label_492b08;
        case 0x492b0cu: goto label_492b0c;
        case 0x492b10u: goto label_492b10;
        case 0x492b14u: goto label_492b14;
        case 0x492b18u: goto label_492b18;
        case 0x492b1cu: goto label_492b1c;
        case 0x492b20u: goto label_492b20;
        case 0x492b24u: goto label_492b24;
        case 0x492b28u: goto label_492b28;
        case 0x492b2cu: goto label_492b2c;
        case 0x492b30u: goto label_492b30;
        case 0x492b34u: goto label_492b34;
        case 0x492b38u: goto label_492b38;
        case 0x492b3cu: goto label_492b3c;
        case 0x492b40u: goto label_492b40;
        case 0x492b44u: goto label_492b44;
        case 0x492b48u: goto label_492b48;
        case 0x492b4cu: goto label_492b4c;
        case 0x492b50u: goto label_492b50;
        case 0x492b54u: goto label_492b54;
        case 0x492b58u: goto label_492b58;
        case 0x492b5cu: goto label_492b5c;
        case 0x492b60u: goto label_492b60;
        case 0x492b64u: goto label_492b64;
        case 0x492b68u: goto label_492b68;
        case 0x492b6cu: goto label_492b6c;
        case 0x492b70u: goto label_492b70;
        case 0x492b74u: goto label_492b74;
        case 0x492b78u: goto label_492b78;
        case 0x492b7cu: goto label_492b7c;
        case 0x492b80u: goto label_492b80;
        case 0x492b84u: goto label_492b84;
        case 0x492b88u: goto label_492b88;
        case 0x492b8cu: goto label_492b8c;
        case 0x492b90u: goto label_492b90;
        case 0x492b94u: goto label_492b94;
        case 0x492b98u: goto label_492b98;
        case 0x492b9cu: goto label_492b9c;
        case 0x492ba0u: goto label_492ba0;
        case 0x492ba4u: goto label_492ba4;
        case 0x492ba8u: goto label_492ba8;
        case 0x492bacu: goto label_492bac;
        case 0x492bb0u: goto label_492bb0;
        case 0x492bb4u: goto label_492bb4;
        case 0x492bb8u: goto label_492bb8;
        case 0x492bbcu: goto label_492bbc;
        case 0x492bc0u: goto label_492bc0;
        case 0x492bc4u: goto label_492bc4;
        case 0x492bc8u: goto label_492bc8;
        case 0x492bccu: goto label_492bcc;
        case 0x492bd0u: goto label_492bd0;
        case 0x492bd4u: goto label_492bd4;
        case 0x492bd8u: goto label_492bd8;
        case 0x492bdcu: goto label_492bdc;
        case 0x492be0u: goto label_492be0;
        case 0x492be4u: goto label_492be4;
        case 0x492be8u: goto label_492be8;
        case 0x492becu: goto label_492bec;
        case 0x492bf0u: goto label_492bf0;
        case 0x492bf4u: goto label_492bf4;
        case 0x492bf8u: goto label_492bf8;
        case 0x492bfcu: goto label_492bfc;
        case 0x492c00u: goto label_492c00;
        case 0x492c04u: goto label_492c04;
        case 0x492c08u: goto label_492c08;
        case 0x492c0cu: goto label_492c0c;
        case 0x492c10u: goto label_492c10;
        case 0x492c14u: goto label_492c14;
        case 0x492c18u: goto label_492c18;
        case 0x492c1cu: goto label_492c1c;
        case 0x492c20u: goto label_492c20;
        case 0x492c24u: goto label_492c24;
        case 0x492c28u: goto label_492c28;
        case 0x492c2cu: goto label_492c2c;
        case 0x492c30u: goto label_492c30;
        case 0x492c34u: goto label_492c34;
        case 0x492c38u: goto label_492c38;
        case 0x492c3cu: goto label_492c3c;
        case 0x492c40u: goto label_492c40;
        case 0x492c44u: goto label_492c44;
        case 0x492c48u: goto label_492c48;
        case 0x492c4cu: goto label_492c4c;
        case 0x492c50u: goto label_492c50;
        case 0x492c54u: goto label_492c54;
        case 0x492c58u: goto label_492c58;
        case 0x492c5cu: goto label_492c5c;
        case 0x492c60u: goto label_492c60;
        case 0x492c64u: goto label_492c64;
        case 0x492c68u: goto label_492c68;
        case 0x492c6cu: goto label_492c6c;
        case 0x492c70u: goto label_492c70;
        case 0x492c74u: goto label_492c74;
        case 0x492c78u: goto label_492c78;
        case 0x492c7cu: goto label_492c7c;
        case 0x492c80u: goto label_492c80;
        case 0x492c84u: goto label_492c84;
        case 0x492c88u: goto label_492c88;
        case 0x492c8cu: goto label_492c8c;
        case 0x492c90u: goto label_492c90;
        case 0x492c94u: goto label_492c94;
        case 0x492c98u: goto label_492c98;
        case 0x492c9cu: goto label_492c9c;
        case 0x492ca0u: goto label_492ca0;
        case 0x492ca4u: goto label_492ca4;
        case 0x492ca8u: goto label_492ca8;
        case 0x492cacu: goto label_492cac;
        case 0x492cb0u: goto label_492cb0;
        case 0x492cb4u: goto label_492cb4;
        case 0x492cb8u: goto label_492cb8;
        case 0x492cbcu: goto label_492cbc;
        case 0x492cc0u: goto label_492cc0;
        case 0x492cc4u: goto label_492cc4;
        case 0x492cc8u: goto label_492cc8;
        case 0x492cccu: goto label_492ccc;
        case 0x492cd0u: goto label_492cd0;
        case 0x492cd4u: goto label_492cd4;
        case 0x492cd8u: goto label_492cd8;
        case 0x492cdcu: goto label_492cdc;
        case 0x492ce0u: goto label_492ce0;
        case 0x492ce4u: goto label_492ce4;
        case 0x492ce8u: goto label_492ce8;
        case 0x492cecu: goto label_492cec;
        case 0x492cf0u: goto label_492cf0;
        case 0x492cf4u: goto label_492cf4;
        case 0x492cf8u: goto label_492cf8;
        case 0x492cfcu: goto label_492cfc;
        case 0x492d00u: goto label_492d00;
        case 0x492d04u: goto label_492d04;
        case 0x492d08u: goto label_492d08;
        case 0x492d0cu: goto label_492d0c;
        case 0x492d10u: goto label_492d10;
        case 0x492d14u: goto label_492d14;
        case 0x492d18u: goto label_492d18;
        case 0x492d1cu: goto label_492d1c;
        case 0x492d20u: goto label_492d20;
        case 0x492d24u: goto label_492d24;
        case 0x492d28u: goto label_492d28;
        case 0x492d2cu: goto label_492d2c;
        case 0x492d30u: goto label_492d30;
        case 0x492d34u: goto label_492d34;
        case 0x492d38u: goto label_492d38;
        case 0x492d3cu: goto label_492d3c;
        case 0x492d40u: goto label_492d40;
        case 0x492d44u: goto label_492d44;
        case 0x492d48u: goto label_492d48;
        case 0x492d4cu: goto label_492d4c;
        case 0x492d50u: goto label_492d50;
        case 0x492d54u: goto label_492d54;
        case 0x492d58u: goto label_492d58;
        case 0x492d5cu: goto label_492d5c;
        case 0x492d60u: goto label_492d60;
        case 0x492d64u: goto label_492d64;
        case 0x492d68u: goto label_492d68;
        case 0x492d6cu: goto label_492d6c;
        case 0x492d70u: goto label_492d70;
        case 0x492d74u: goto label_492d74;
        case 0x492d78u: goto label_492d78;
        case 0x492d7cu: goto label_492d7c;
        case 0x492d80u: goto label_492d80;
        case 0x492d84u: goto label_492d84;
        case 0x492d88u: goto label_492d88;
        case 0x492d8cu: goto label_492d8c;
        case 0x492d90u: goto label_492d90;
        case 0x492d94u: goto label_492d94;
        case 0x492d98u: goto label_492d98;
        case 0x492d9cu: goto label_492d9c;
        case 0x492da0u: goto label_492da0;
        case 0x492da4u: goto label_492da4;
        case 0x492da8u: goto label_492da8;
        case 0x492dacu: goto label_492dac;
        case 0x492db0u: goto label_492db0;
        case 0x492db4u: goto label_492db4;
        case 0x492db8u: goto label_492db8;
        case 0x492dbcu: goto label_492dbc;
        case 0x492dc0u: goto label_492dc0;
        case 0x492dc4u: goto label_492dc4;
        case 0x492dc8u: goto label_492dc8;
        case 0x492dccu: goto label_492dcc;
        case 0x492dd0u: goto label_492dd0;
        case 0x492dd4u: goto label_492dd4;
        case 0x492dd8u: goto label_492dd8;
        case 0x492ddcu: goto label_492ddc;
        case 0x492de0u: goto label_492de0;
        case 0x492de4u: goto label_492de4;
        case 0x492de8u: goto label_492de8;
        case 0x492decu: goto label_492dec;
        case 0x492df0u: goto label_492df0;
        case 0x492df4u: goto label_492df4;
        case 0x492df8u: goto label_492df8;
        case 0x492dfcu: goto label_492dfc;
        case 0x492e00u: goto label_492e00;
        case 0x492e04u: goto label_492e04;
        case 0x492e08u: goto label_492e08;
        case 0x492e0cu: goto label_492e0c;
        case 0x492e10u: goto label_492e10;
        case 0x492e14u: goto label_492e14;
        case 0x492e18u: goto label_492e18;
        case 0x492e1cu: goto label_492e1c;
        case 0x492e20u: goto label_492e20;
        case 0x492e24u: goto label_492e24;
        case 0x492e28u: goto label_492e28;
        case 0x492e2cu: goto label_492e2c;
        case 0x492e30u: goto label_492e30;
        case 0x492e34u: goto label_492e34;
        case 0x492e38u: goto label_492e38;
        case 0x492e3cu: goto label_492e3c;
        case 0x492e40u: goto label_492e40;
        case 0x492e44u: goto label_492e44;
        case 0x492e48u: goto label_492e48;
        case 0x492e4cu: goto label_492e4c;
        case 0x492e50u: goto label_492e50;
        case 0x492e54u: goto label_492e54;
        case 0x492e58u: goto label_492e58;
        case 0x492e5cu: goto label_492e5c;
        case 0x492e60u: goto label_492e60;
        case 0x492e64u: goto label_492e64;
        case 0x492e68u: goto label_492e68;
        case 0x492e6cu: goto label_492e6c;
        case 0x492e70u: goto label_492e70;
        case 0x492e74u: goto label_492e74;
        case 0x492e78u: goto label_492e78;
        case 0x492e7cu: goto label_492e7c;
        case 0x492e80u: goto label_492e80;
        case 0x492e84u: goto label_492e84;
        case 0x492e88u: goto label_492e88;
        case 0x492e8cu: goto label_492e8c;
        case 0x492e90u: goto label_492e90;
        case 0x492e94u: goto label_492e94;
        case 0x492e98u: goto label_492e98;
        case 0x492e9cu: goto label_492e9c;
        case 0x492ea0u: goto label_492ea0;
        case 0x492ea4u: goto label_492ea4;
        case 0x492ea8u: goto label_492ea8;
        case 0x492eacu: goto label_492eac;
        case 0x492eb0u: goto label_492eb0;
        case 0x492eb4u: goto label_492eb4;
        case 0x492eb8u: goto label_492eb8;
        case 0x492ebcu: goto label_492ebc;
        case 0x492ec0u: goto label_492ec0;
        case 0x492ec4u: goto label_492ec4;
        case 0x492ec8u: goto label_492ec8;
        case 0x492eccu: goto label_492ecc;
        case 0x492ed0u: goto label_492ed0;
        case 0x492ed4u: goto label_492ed4;
        case 0x492ed8u: goto label_492ed8;
        case 0x492edcu: goto label_492edc;
        case 0x492ee0u: goto label_492ee0;
        case 0x492ee4u: goto label_492ee4;
        case 0x492ee8u: goto label_492ee8;
        case 0x492eecu: goto label_492eec;
        case 0x492ef0u: goto label_492ef0;
        case 0x492ef4u: goto label_492ef4;
        case 0x492ef8u: goto label_492ef8;
        case 0x492efcu: goto label_492efc;
        case 0x492f00u: goto label_492f00;
        case 0x492f04u: goto label_492f04;
        case 0x492f08u: goto label_492f08;
        case 0x492f0cu: goto label_492f0c;
        case 0x492f10u: goto label_492f10;
        case 0x492f14u: goto label_492f14;
        case 0x492f18u: goto label_492f18;
        case 0x492f1cu: goto label_492f1c;
        case 0x492f20u: goto label_492f20;
        case 0x492f24u: goto label_492f24;
        case 0x492f28u: goto label_492f28;
        case 0x492f2cu: goto label_492f2c;
        case 0x492f30u: goto label_492f30;
        case 0x492f34u: goto label_492f34;
        case 0x492f38u: goto label_492f38;
        case 0x492f3cu: goto label_492f3c;
        case 0x492f40u: goto label_492f40;
        case 0x492f44u: goto label_492f44;
        case 0x492f48u: goto label_492f48;
        case 0x492f4cu: goto label_492f4c;
        case 0x492f50u: goto label_492f50;
        case 0x492f54u: goto label_492f54;
        case 0x492f58u: goto label_492f58;
        case 0x492f5cu: goto label_492f5c;
        case 0x492f60u: goto label_492f60;
        case 0x492f64u: goto label_492f64;
        case 0x492f68u: goto label_492f68;
        case 0x492f6cu: goto label_492f6c;
        case 0x492f70u: goto label_492f70;
        case 0x492f74u: goto label_492f74;
        case 0x492f78u: goto label_492f78;
        case 0x492f7cu: goto label_492f7c;
        case 0x492f80u: goto label_492f80;
        case 0x492f84u: goto label_492f84;
        case 0x492f88u: goto label_492f88;
        case 0x492f8cu: goto label_492f8c;
        case 0x492f90u: goto label_492f90;
        case 0x492f94u: goto label_492f94;
        case 0x492f98u: goto label_492f98;
        case 0x492f9cu: goto label_492f9c;
        case 0x492fa0u: goto label_492fa0;
        case 0x492fa4u: goto label_492fa4;
        case 0x492fa8u: goto label_492fa8;
        case 0x492facu: goto label_492fac;
        case 0x492fb0u: goto label_492fb0;
        case 0x492fb4u: goto label_492fb4;
        case 0x492fb8u: goto label_492fb8;
        case 0x492fbcu: goto label_492fbc;
        case 0x492fc0u: goto label_492fc0;
        case 0x492fc4u: goto label_492fc4;
        case 0x492fc8u: goto label_492fc8;
        case 0x492fccu: goto label_492fcc;
        case 0x492fd0u: goto label_492fd0;
        case 0x492fd4u: goto label_492fd4;
        case 0x492fd8u: goto label_492fd8;
        case 0x492fdcu: goto label_492fdc;
        case 0x492fe0u: goto label_492fe0;
        case 0x492fe4u: goto label_492fe4;
        case 0x492fe8u: goto label_492fe8;
        case 0x492fecu: goto label_492fec;
        case 0x492ff0u: goto label_492ff0;
        case 0x492ff4u: goto label_492ff4;
        case 0x492ff8u: goto label_492ff8;
        case 0x492ffcu: goto label_492ffc;
        case 0x493000u: goto label_493000;
        case 0x493004u: goto label_493004;
        case 0x493008u: goto label_493008;
        case 0x49300cu: goto label_49300c;
        case 0x493010u: goto label_493010;
        case 0x493014u: goto label_493014;
        case 0x493018u: goto label_493018;
        case 0x49301cu: goto label_49301c;
        case 0x493020u: goto label_493020;
        case 0x493024u: goto label_493024;
        case 0x493028u: goto label_493028;
        case 0x49302cu: goto label_49302c;
        case 0x493030u: goto label_493030;
        case 0x493034u: goto label_493034;
        case 0x493038u: goto label_493038;
        case 0x49303cu: goto label_49303c;
        case 0x493040u: goto label_493040;
        case 0x493044u: goto label_493044;
        case 0x493048u: goto label_493048;
        case 0x49304cu: goto label_49304c;
        case 0x493050u: goto label_493050;
        case 0x493054u: goto label_493054;
        case 0x493058u: goto label_493058;
        case 0x49305cu: goto label_49305c;
        case 0x493060u: goto label_493060;
        case 0x493064u: goto label_493064;
        case 0x493068u: goto label_493068;
        case 0x49306cu: goto label_49306c;
        case 0x493070u: goto label_493070;
        case 0x493074u: goto label_493074;
        case 0x493078u: goto label_493078;
        case 0x49307cu: goto label_49307c;
        case 0x493080u: goto label_493080;
        case 0x493084u: goto label_493084;
        case 0x493088u: goto label_493088;
        case 0x49308cu: goto label_49308c;
        case 0x493090u: goto label_493090;
        case 0x493094u: goto label_493094;
        case 0x493098u: goto label_493098;
        case 0x49309cu: goto label_49309c;
        case 0x4930a0u: goto label_4930a0;
        case 0x4930a4u: goto label_4930a4;
        case 0x4930a8u: goto label_4930a8;
        case 0x4930acu: goto label_4930ac;
        case 0x4930b0u: goto label_4930b0;
        case 0x4930b4u: goto label_4930b4;
        case 0x4930b8u: goto label_4930b8;
        case 0x4930bcu: goto label_4930bc;
        case 0x4930c0u: goto label_4930c0;
        case 0x4930c4u: goto label_4930c4;
        case 0x4930c8u: goto label_4930c8;
        case 0x4930ccu: goto label_4930cc;
        case 0x4930d0u: goto label_4930d0;
        case 0x4930d4u: goto label_4930d4;
        case 0x4930d8u: goto label_4930d8;
        case 0x4930dcu: goto label_4930dc;
        case 0x4930e0u: goto label_4930e0;
        case 0x4930e4u: goto label_4930e4;
        case 0x4930e8u: goto label_4930e8;
        case 0x4930ecu: goto label_4930ec;
        case 0x4930f0u: goto label_4930f0;
        case 0x4930f4u: goto label_4930f4;
        case 0x4930f8u: goto label_4930f8;
        case 0x4930fcu: goto label_4930fc;
        case 0x493100u: goto label_493100;
        case 0x493104u: goto label_493104;
        case 0x493108u: goto label_493108;
        case 0x49310cu: goto label_49310c;
        case 0x493110u: goto label_493110;
        case 0x493114u: goto label_493114;
        case 0x493118u: goto label_493118;
        case 0x49311cu: goto label_49311c;
        case 0x493120u: goto label_493120;
        case 0x493124u: goto label_493124;
        case 0x493128u: goto label_493128;
        case 0x49312cu: goto label_49312c;
        case 0x493130u: goto label_493130;
        case 0x493134u: goto label_493134;
        case 0x493138u: goto label_493138;
        case 0x49313cu: goto label_49313c;
        case 0x493140u: goto label_493140;
        case 0x493144u: goto label_493144;
        case 0x493148u: goto label_493148;
        case 0x49314cu: goto label_49314c;
        case 0x493150u: goto label_493150;
        case 0x493154u: goto label_493154;
        case 0x493158u: goto label_493158;
        case 0x49315cu: goto label_49315c;
        case 0x493160u: goto label_493160;
        case 0x493164u: goto label_493164;
        case 0x493168u: goto label_493168;
        case 0x49316cu: goto label_49316c;
        case 0x493170u: goto label_493170;
        case 0x493174u: goto label_493174;
        case 0x493178u: goto label_493178;
        case 0x49317cu: goto label_49317c;
        case 0x493180u: goto label_493180;
        case 0x493184u: goto label_493184;
        case 0x493188u: goto label_493188;
        case 0x49318cu: goto label_49318c;
        case 0x493190u: goto label_493190;
        case 0x493194u: goto label_493194;
        case 0x493198u: goto label_493198;
        case 0x49319cu: goto label_49319c;
        case 0x4931a0u: goto label_4931a0;
        case 0x4931a4u: goto label_4931a4;
        case 0x4931a8u: goto label_4931a8;
        case 0x4931acu: goto label_4931ac;
        case 0x4931b0u: goto label_4931b0;
        case 0x4931b4u: goto label_4931b4;
        case 0x4931b8u: goto label_4931b8;
        case 0x4931bcu: goto label_4931bc;
        case 0x4931c0u: goto label_4931c0;
        case 0x4931c4u: goto label_4931c4;
        case 0x4931c8u: goto label_4931c8;
        case 0x4931ccu: goto label_4931cc;
        case 0x4931d0u: goto label_4931d0;
        case 0x4931d4u: goto label_4931d4;
        case 0x4931d8u: goto label_4931d8;
        case 0x4931dcu: goto label_4931dc;
        case 0x4931e0u: goto label_4931e0;
        case 0x4931e4u: goto label_4931e4;
        case 0x4931e8u: goto label_4931e8;
        case 0x4931ecu: goto label_4931ec;
        case 0x4931f0u: goto label_4931f0;
        case 0x4931f4u: goto label_4931f4;
        case 0x4931f8u: goto label_4931f8;
        case 0x4931fcu: goto label_4931fc;
        case 0x493200u: goto label_493200;
        case 0x493204u: goto label_493204;
        case 0x493208u: goto label_493208;
        case 0x49320cu: goto label_49320c;
        case 0x493210u: goto label_493210;
        case 0x493214u: goto label_493214;
        case 0x493218u: goto label_493218;
        case 0x49321cu: goto label_49321c;
        case 0x493220u: goto label_493220;
        case 0x493224u: goto label_493224;
        case 0x493228u: goto label_493228;
        case 0x49322cu: goto label_49322c;
        case 0x493230u: goto label_493230;
        case 0x493234u: goto label_493234;
        case 0x493238u: goto label_493238;
        case 0x49323cu: goto label_49323c;
        case 0x493240u: goto label_493240;
        case 0x493244u: goto label_493244;
        case 0x493248u: goto label_493248;
        case 0x49324cu: goto label_49324c;
        case 0x493250u: goto label_493250;
        case 0x493254u: goto label_493254;
        case 0x493258u: goto label_493258;
        case 0x49325cu: goto label_49325c;
        case 0x493260u: goto label_493260;
        case 0x493264u: goto label_493264;
        case 0x493268u: goto label_493268;
        case 0x49326cu: goto label_49326c;
        case 0x493270u: goto label_493270;
        case 0x493274u: goto label_493274;
        case 0x493278u: goto label_493278;
        case 0x49327cu: goto label_49327c;
        case 0x493280u: goto label_493280;
        case 0x493284u: goto label_493284;
        case 0x493288u: goto label_493288;
        case 0x49328cu: goto label_49328c;
        case 0x493290u: goto label_493290;
        case 0x493294u: goto label_493294;
        case 0x493298u: goto label_493298;
        case 0x49329cu: goto label_49329c;
        case 0x4932a0u: goto label_4932a0;
        case 0x4932a4u: goto label_4932a4;
        case 0x4932a8u: goto label_4932a8;
        case 0x4932acu: goto label_4932ac;
        case 0x4932b0u: goto label_4932b0;
        case 0x4932b4u: goto label_4932b4;
        case 0x4932b8u: goto label_4932b8;
        case 0x4932bcu: goto label_4932bc;
        case 0x4932c0u: goto label_4932c0;
        case 0x4932c4u: goto label_4932c4;
        case 0x4932c8u: goto label_4932c8;
        case 0x4932ccu: goto label_4932cc;
        case 0x4932d0u: goto label_4932d0;
        case 0x4932d4u: goto label_4932d4;
        case 0x4932d8u: goto label_4932d8;
        case 0x4932dcu: goto label_4932dc;
        case 0x4932e0u: goto label_4932e0;
        case 0x4932e4u: goto label_4932e4;
        case 0x4932e8u: goto label_4932e8;
        case 0x4932ecu: goto label_4932ec;
        case 0x4932f0u: goto label_4932f0;
        case 0x4932f4u: goto label_4932f4;
        case 0x4932f8u: goto label_4932f8;
        case 0x4932fcu: goto label_4932fc;
        case 0x493300u: goto label_493300;
        case 0x493304u: goto label_493304;
        case 0x493308u: goto label_493308;
        case 0x49330cu: goto label_49330c;
        case 0x493310u: goto label_493310;
        case 0x493314u: goto label_493314;
        case 0x493318u: goto label_493318;
        case 0x49331cu: goto label_49331c;
        case 0x493320u: goto label_493320;
        case 0x493324u: goto label_493324;
        case 0x493328u: goto label_493328;
        case 0x49332cu: goto label_49332c;
        case 0x493330u: goto label_493330;
        case 0x493334u: goto label_493334;
        case 0x493338u: goto label_493338;
        case 0x49333cu: goto label_49333c;
        case 0x493340u: goto label_493340;
        case 0x493344u: goto label_493344;
        case 0x493348u: goto label_493348;
        case 0x49334cu: goto label_49334c;
        case 0x493350u: goto label_493350;
        case 0x493354u: goto label_493354;
        case 0x493358u: goto label_493358;
        case 0x49335cu: goto label_49335c;
        case 0x493360u: goto label_493360;
        case 0x493364u: goto label_493364;
        case 0x493368u: goto label_493368;
        case 0x49336cu: goto label_49336c;
        case 0x493370u: goto label_493370;
        case 0x493374u: goto label_493374;
        case 0x493378u: goto label_493378;
        case 0x49337cu: goto label_49337c;
        case 0x493380u: goto label_493380;
        case 0x493384u: goto label_493384;
        case 0x493388u: goto label_493388;
        case 0x49338cu: goto label_49338c;
        case 0x493390u: goto label_493390;
        case 0x493394u: goto label_493394;
        case 0x493398u: goto label_493398;
        case 0x49339cu: goto label_49339c;
        case 0x4933a0u: goto label_4933a0;
        case 0x4933a4u: goto label_4933a4;
        case 0x4933a8u: goto label_4933a8;
        case 0x4933acu: goto label_4933ac;
        case 0x4933b0u: goto label_4933b0;
        case 0x4933b4u: goto label_4933b4;
        case 0x4933b8u: goto label_4933b8;
        case 0x4933bcu: goto label_4933bc;
        case 0x4933c0u: goto label_4933c0;
        case 0x4933c4u: goto label_4933c4;
        case 0x4933c8u: goto label_4933c8;
        case 0x4933ccu: goto label_4933cc;
        case 0x4933d0u: goto label_4933d0;
        case 0x4933d4u: goto label_4933d4;
        case 0x4933d8u: goto label_4933d8;
        case 0x4933dcu: goto label_4933dc;
        case 0x4933e0u: goto label_4933e0;
        case 0x4933e4u: goto label_4933e4;
        case 0x4933e8u: goto label_4933e8;
        case 0x4933ecu: goto label_4933ec;
        case 0x4933f0u: goto label_4933f0;
        case 0x4933f4u: goto label_4933f4;
        case 0x4933f8u: goto label_4933f8;
        case 0x4933fcu: goto label_4933fc;
        case 0x493400u: goto label_493400;
        case 0x493404u: goto label_493404;
        case 0x493408u: goto label_493408;
        case 0x49340cu: goto label_49340c;
        case 0x493410u: goto label_493410;
        case 0x493414u: goto label_493414;
        default: break;
    }

    ctx->pc = 0x491750u;

label_491750:
    // 0x491750: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x491750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_491754:
    // 0x491754: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x491754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_491758:
    // 0x491758: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x491758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_49175c:
    // 0x49175c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49175cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_491760:
    // 0x491760: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x491760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_491764:
    // 0x491764: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x491764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_491768:
    // 0x491768: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x491768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_49176c:
    // 0x49176c: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x49176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_491770:
    // 0x491770: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x491770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_491774:
    // 0x491774: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x491774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_491778:
    // 0x491778: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x491778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_49177c:
    // 0x49177c: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x49177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_491780:
    // 0x491780: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x491780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_491784:
    // 0x491784: 0xc124064  jal         func_490190
label_491788:
    if (ctx->pc == 0x491788u) {
        ctx->pc = 0x491788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491784u;
        // 0x491788: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49178Cu;
        goto label_49178c;
    }
    ctx->pc = 0x491784u;
    SET_GPR_U32(ctx, 31, 0x49178Cu);
    ctx->pc = 0x491788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491784u;
    // 0x491788: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490190u, 0x491784u, 0x49178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49178Cu;
label_49178c:
    // 0x49178c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_491790:
    if (ctx->pc == 0x491790u) {
        ctx->pc = 0x491790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49178Cu;
        // 0x491790: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491794u;
        goto label_491794;
    }
    ctx->pc = 0x49178Cu;
    {
        const bool branch_taken_0x49178c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49178c) {
            ctx->pc = 0x491790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49178Cu;
            // 0x491790: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49179Cu;
            goto label_49179c;
        }
    }
    ctx->pc = 0x491794u;
label_491794:
    // 0x491794: 0x100005f9  b           . + 4 + (0x5F9 << 2)
label_491798:
    if (ctx->pc == 0x491798u) {
        ctx->pc = 0x491798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491794u;
        // 0x491798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49179Cu;
        goto label_49179c;
    }
    ctx->pc = 0x491794u;
    {
        const bool branch_taken_0x491794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491794u;
        // 0x491798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491794) {
            ctx->pc = 0x492F7Cu;
            goto label_492f7c;
        }
    }
    ctx->pc = 0x49179Cu;
label_49179c:
    // 0x49179c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_4917a0:
    // 0x4917a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4917a4:
    if (ctx->pc == 0x4917A4u) {
        ctx->pc = 0x4917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4917A0u;
        // 0x4917a4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4917A8u;
        goto label_4917a8;
    }
    ctx->pc = 0x4917A0u;
    {
        const bool branch_taken_0x4917a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4917a0) {
            ctx->pc = 0x4917A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4917A0u;
            // 0x4917a4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4917B8u;
            goto label_4917b8;
        }
    }
    ctx->pc = 0x4917A8u;
label_4917a8:
    // 0x4917a8: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x4917a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_4917ac:
    // 0x4917ac: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x4917acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
label_4917b0:
    // 0x4917b0: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x4917b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
label_4917b4:
    // 0x4917b4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4917b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4917b8:
    // 0x4917b8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4917b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4917bc:
    // 0x4917bc: 0xa2200017  sb          $zero, 0x17($s1)
    ctx->pc = 0x4917bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 0));
label_4917c0:
    // 0x4917c0: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x4917c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
label_4917c4:
    // 0x4917c4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x4917c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_4917c8:
    // 0x4917c8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x4917c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_4917cc:
    // 0x4917cc: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x4917ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_4917d0:
    // 0x4917d0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x4917d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_4917d4:
    // 0x4917d4: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x4917d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_4917d8:
    // 0x4917d8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x4917d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_4917dc:
    // 0x4917dc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4917dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4917e0:
    // 0x4917e0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x4917e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_4917e4:
    // 0x4917e4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x4917e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_4917e8:
    // 0x4917e8: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x4917e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
label_4917ec:
    // 0x4917ec: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4917ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4917f0:
    // 0x4917f0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4917f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4917f4:
    // 0x4917f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4917f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4917f8:
    // 0x4917f8: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x4917f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_4917fc:
    // 0x4917fc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x4917fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_491800:
    // 0x491800: 0x106005d5  beqz        $v1, . + 4 + (0x5D5 << 2)
label_491804:
    if (ctx->pc == 0x491804u) {
        ctx->pc = 0x491804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491800u;
        // 0x491804: 0xae44002c  sw          $a0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491808u;
        goto label_491808;
    }
    ctx->pc = 0x491800u;
    {
        const bool branch_taken_0x491800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x491804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491800u;
        // 0x491804: 0xae44002c  sw          $a0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491800) {
            ctx->pc = 0x492F58u;
            goto label_492f58;
        }
    }
    ctx->pc = 0x491808u;
label_491808:
    // 0x491808: 0x108005d4  beqz        $a0, . + 4 + (0x5D4 << 2)
label_49180c:
    if (ctx->pc == 0x49180Cu) {
        ctx->pc = 0x49180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491808u;
        // 0x49180c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491810u;
        goto label_491810;
    }
    ctx->pc = 0x491808u;
    {
        const bool branch_taken_0x491808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491808u;
        // 0x49180c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491808) {
            ctx->pc = 0x492F5Cu;
            goto label_492f5c;
        }
    }
    ctx->pc = 0x491810u;
label_491810:
    // 0x491810: 0x92430020  lbu         $v1, 0x20($s2)
    ctx->pc = 0x491810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_491814:
    // 0x491814: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x491814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_491818:
    // 0x491818: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
label_49181c:
    if (ctx->pc == 0x49181Cu) {
        ctx->pc = 0x49181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491818u;
        // 0x49181c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491820u;
        goto label_491820;
    }
    ctx->pc = 0x491818u;
    {
        const bool branch_taken_0x491818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491818u;
        // 0x49181c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491818) {
            ctx->pc = 0x491794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491794;
        }
    }
    ctx->pc = 0x491820u;
label_491820:
    // 0x491820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x491820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_491824:
    // 0x491824: 0x2442f790  addiu       $v0, $v0, -0x870
    ctx->pc = 0x491824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965136));
label_491828:
    // 0x491828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49182c:
    // 0x49182c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_491830:
    // 0x491830: 0x800008  jr          $a0
label_491834:
    if (ctx->pc == 0x491834u) {
        ctx->pc = 0x491838u;
        goto label_491838;
    }
    ctx->pc = 0x491830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x491794u: goto label_491794;
            case 0x491838u: goto label_491838;
            case 0x4918A0u: goto label_4918a0;
            case 0x492D78u: goto label_492d78;
            case 0x492E64u: goto label_492e64;
            case 0x492EB8u: goto label_492eb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x491838u;
label_491838:
    // 0x491838: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x491838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_49183c:
    // 0x49183c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_491840:
    // 0x491840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_491844:
    if (ctx->pc == 0x491844u) {
        ctx->pc = 0x491844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491840u;
        // 0x491844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491848u;
        goto label_491848;
    }
    ctx->pc = 0x491840u;
    {
        const bool branch_taken_0x491840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x491844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491840u;
        // 0x491844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491840) {
            ctx->pc = 0x491858u;
            goto label_491858;
        }
    }
    ctx->pc = 0x491848u;
label_491848:
    // 0x491848: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x491848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_49184c:
    // 0x49184c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49184cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_491850:
    // 0x491850: 0x100005ac  b           . + 4 + (0x5AC << 2)
label_491854:
    if (ctx->pc == 0x491854u) {
        ctx->pc = 0x491854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491850u;
        // 0x491854: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491858u;
        goto label_491858;
    }
    ctx->pc = 0x491850u;
    {
        const bool branch_taken_0x491850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491850u;
        // 0x491854: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491850) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x491858u;
label_491858:
    // 0x491858: 0x8f8486c0  lw          $a0, -0x7940($gp)
    ctx->pc = 0x491858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_49185c:
    // 0x49185c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x49185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_491860:
    // 0x491860: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x491860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_491864:
    // 0x491864: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x491864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_491868:
    // 0x491868: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x491868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_49186c:
    // 0x49186c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x49186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_491870:
    // 0x491870: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x491870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491874:
    // 0x491874: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x491874u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_491878:
    // 0x491878: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x491878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_49187c:
    // 0x49187c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x49187cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_491880:
    // 0x491880: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x491880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_491884:
    // 0x491884: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x491884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_491888:
    // 0x491888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_49188c:
    if (ctx->pc == 0x49188Cu) {
        ctx->pc = 0x49188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491888u;
        // 0x49188c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491890u;
        goto label_491890;
    }
    ctx->pc = 0x491888u;
    {
        const bool branch_taken_0x491888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491888u;
        // 0x49188c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491888) {
            ctx->pc = 0x4918A0u;
            goto label_4918a0;
        }
    }
    ctx->pc = 0x491890u;
label_491890:
    // 0x491890: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x491890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_491894:
    // 0x491894: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x491894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_491898:
    // 0x491898: 0x1000059a  b           . + 4 + (0x59A << 2)
label_49189c:
    if (ctx->pc == 0x49189Cu) {
        ctx->pc = 0x49189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491898u;
        // 0x49189c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4918A0u;
        goto label_4918a0;
    }
    ctx->pc = 0x491898u;
    {
        const bool branch_taken_0x491898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491898u;
        // 0x49189c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491898) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x4918A0u;
label_4918a0:
    // 0x4918a0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4918a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4918a4:
    // 0x4918a4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4918a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4918a8:
    // 0x4918a8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4918a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4918ac:
    // 0x4918ac: 0x2463f670  addiu       $v1, $v1, -0x990
    ctx->pc = 0x4918acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
label_4918b0:
    // 0x4918b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4918b4:
    // 0x4918b4: 0x2484f5f0  addiu       $a0, $a0, -0xA10
    ctx->pc = 0x4918b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
label_4918b8:
    // 0x4918b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4918b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4918bc:
    // 0x4918bc: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x4918bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4918c0:
    // 0x4918c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4918c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4918c4:
    // 0x4918c4: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x4918c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4918c8:
    // 0x4918c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4918c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4918cc:
    // 0x4918cc: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x4918ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4918d0:
    // 0x4918d0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4918d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4918d4:
    // 0x4918d4: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x4918d4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4918d8:
    // 0x4918d8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_4918dc:
    if (ctx->pc == 0x4918DCu) {
        ctx->pc = 0x4918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918D8u;
        // 0x4918dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4918E0u;
        goto label_4918e0;
    }
    ctx->pc = 0x4918D8u;
    {
        const bool branch_taken_0x4918d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918D8u;
        // 0x4918dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4918d8) {
            ctx->pc = 0x4918FCu;
            goto label_4918fc;
        }
    }
    ctx->pc = 0x4918E0u;
label_4918e0:
    // 0x4918e0: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x4918e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_4918e4:
    // 0x4918e4: 0x0  nop
    ctx->pc = 0x4918e4u;
    // NOP
label_4918e8:
    // 0x4918e8: 0x0  nop
    ctx->pc = 0x4918e8u;
    // NOP
label_4918ec:
    // 0x4918ec: 0x0  nop
    ctx->pc = 0x4918ecu;
    // NOP
label_4918f0:
    // 0x4918f0: 0x0  nop
    ctx->pc = 0x4918f0u;
    // NOP
label_4918f4:
    // 0x4918f4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_4918f8:
    if (ctx->pc == 0x4918F8u) {
        ctx->pc = 0x4918F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918F4u;
        // 0x4918f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4918FCu;
        goto label_4918fc;
    }
    ctx->pc = 0x4918F4u;
    {
        const bool branch_taken_0x4918f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4918F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918F4u;
        // 0x4918f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4918f4) {
            ctx->pc = 0x4918E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4918e0;
        }
    }
    ctx->pc = 0x4918FCu;
label_4918fc:
    // 0x4918fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4918fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491900:
    // 0x491900: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x491900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_491904:
    // 0x491904: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x491904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_491908:
    // 0x491908: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x491908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49190c:
    // 0x49190c: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x49190cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_491910:
    // 0x491910: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_491914:
    if (ctx->pc == 0x491914u) {
        ctx->pc = 0x491914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491910u;
        // 0x491914: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491918u;
        goto label_491918;
    }
    ctx->pc = 0x491910u;
    {
        const bool branch_taken_0x491910 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x491914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491910u;
        // 0x491914: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491910) {
            ctx->pc = 0x491934u;
            goto label_491934;
        }
    }
    ctx->pc = 0x491918u;
label_491918:
    // 0x491918: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x491918u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_49191c:
    // 0x49191c: 0x0  nop
    ctx->pc = 0x49191cu;
    // NOP
label_491920:
    // 0x491920: 0x0  nop
    ctx->pc = 0x491920u;
    // NOP
label_491924:
    // 0x491924: 0x0  nop
    ctx->pc = 0x491924u;
    // NOP
label_491928:
    // 0x491928: 0x0  nop
    ctx->pc = 0x491928u;
    // NOP
label_49192c:
    // 0x49192c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_491930:
    if (ctx->pc == 0x491930u) {
        ctx->pc = 0x491930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49192Cu;
        // 0x491930: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491934u;
        goto label_491934;
    }
    ctx->pc = 0x49192Cu;
    {
        const bool branch_taken_0x49192c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x491930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49192Cu;
        // 0x491930: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49192c) {
            ctx->pc = 0x491918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491918;
        }
    }
    ctx->pc = 0x491934u;
label_491934:
    // 0x491934: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x491934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_491938:
    // 0x491938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49193c:
    // 0x49193c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x49193cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_491940:
    // 0x491940: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x491940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_491944:
    // 0x491944: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x491944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_491948:
    // 0x491948: 0x33680  sll         $a2, $v1, 26
    ctx->pc = 0x491948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_49194c:
    // 0x49194c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x49194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_491950:
    // 0x491950: 0x3c8182b  sltu        $v1, $fp, $t0
    ctx->pc = 0x491950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_491954:
    // 0x491954: 0x42f80  sll         $a1, $a0, 30
    ctx->pc = 0x491954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
label_491958:
    // 0x491958: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_49195c:
    if (ctx->pc == 0x49195Cu) {
        ctx->pc = 0x49195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491958u;
        // 0x49195c: 0x1e1182  srl         $v0, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491960u;
        goto label_491960;
    }
    ctx->pc = 0x491958u;
    {
        const bool branch_taken_0x491958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491958u;
        // 0x49195c: 0x1e1182  srl         $v0, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491958) {
            ctx->pc = 0x491964u;
            goto label_491964;
        }
    }
    ctx->pc = 0x491960u;
label_491960:
    // 0x491960: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x491960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
label_491964:
    // 0x491964: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x491964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_491968:
    // 0x491968: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x491968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_49196c:
    // 0x49196c: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x49196cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_491970:
    // 0x491970: 0x97838758  lhu         $v1, -0x78A8($gp)
    ctx->pc = 0x491970u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936408)));
label_491974:
    // 0x491974: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x491974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_491978:
    // 0x491978: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x491978u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_49197c:
    // 0x49197c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491980:
    // 0x491980: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x491980u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
label_491984:
    // 0x491984: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x491984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_491988:
    // 0x491988: 0xa2240034  sb          $a0, 0x34($s1)
    ctx->pc = 0x491988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 4));
label_49198c:
    // 0x49198c: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x49198cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_491990:
    // 0x491990: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x491990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_491994:
    // 0x491994: 0x92440023  lbu         $a0, 0x23($s2)
    ctx->pc = 0x491994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_491998:
    // 0x491998: 0x30830060  andi        $v1, $a0, 0x60
    ctx->pc = 0x491998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
label_49199c:
    // 0x49199c: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_4919a0:
    if (ctx->pc == 0x4919A0u) {
        ctx->pc = 0x4919A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49199Cu;
        // 0x4919a0: 0x28620021  slti        $v0, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4919A4u;
        goto label_4919a4;
    }
    ctx->pc = 0x49199Cu;
    {
        const bool branch_taken_0x49199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4919A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49199Cu;
        // 0x4919a0: 0x28620021  slti        $v0, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49199c) {
            ctx->pc = 0x491AE0u;
            goto label_491ae0;
        }
    }
    ctx->pc = 0x4919A4u;
label_4919a4:
    // 0x4919a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4919a8:
    if (ctx->pc == 0x4919A8u) {
        ctx->pc = 0x4919A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919A4u;
        // 0x4919a8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4919ACu;
        goto label_4919ac;
    }
    ctx->pc = 0x4919A4u;
    {
        const bool branch_taken_0x4919a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4919A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919A4u;
        // 0x4919a8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919a4) {
            ctx->pc = 0x4919BCu;
            goto label_4919bc;
        }
    }
    ctx->pc = 0x4919ACu;
label_4919ac:
    // 0x4919ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4919b0:
    if (ctx->pc == 0x4919B0u) {
        ctx->pc = 0x4919B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919ACu;
        // 0x4919b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4919B4u;
        goto label_4919b4;
    }
    ctx->pc = 0x4919ACu;
    {
        const bool branch_taken_0x4919ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4919B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919ACu;
        // 0x4919b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919ac) {
            ctx->pc = 0x4919CCu;
            goto label_4919cc;
        }
    }
    ctx->pc = 0x4919B4u;
label_4919b4:
    // 0x4919b4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_4919b8:
    if (ctx->pc == 0x4919B8u) {
        ctx->pc = 0x4919BCu;
        goto label_4919bc;
    }
    ctx->pc = 0x4919B4u;
    {
        const bool branch_taken_0x4919b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4919b4) {
            ctx->pc = 0x491B70u;
            goto label_491b70;
        }
    }
    ctx->pc = 0x4919BCu;
label_4919bc:
    // 0x4919bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_4919c0:
    if (ctx->pc == 0x4919C0u) {
        ctx->pc = 0x4919C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919BCu;
        // 0x4919c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4919C4u;
        goto label_4919c4;
    }
    ctx->pc = 0x4919BCu;
    {
        const bool branch_taken_0x4919bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4919C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919BCu;
        // 0x4919c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919bc) {
            ctx->pc = 0x491A60u;
            goto label_491a60;
        }
    }
    ctx->pc = 0x4919C4u;
label_4919c4:
    // 0x4919c4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_4919c8:
    if (ctx->pc == 0x4919C8u) {
        ctx->pc = 0x4919CCu;
        goto label_4919cc;
    }
    ctx->pc = 0x4919C4u;
    {
        const bool branch_taken_0x4919c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4919c4) {
            ctx->pc = 0x491B70u;
            goto label_491b70;
        }
    }
    ctx->pc = 0x4919CCu;
label_4919cc:
    // 0x4919cc: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x4919ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_4919d0:
    // 0x4919d0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x4919d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_4919d4:
    // 0x4919d4: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x4919d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_4919d8:
    // 0x4919d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4919d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4919dc:
    // 0x4919dc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x4919dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_4919e0:
    // 0x4919e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4919e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4919e4:
    // 0x4919e4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_4919e8:
    if (ctx->pc == 0x4919E8u) {
        ctx->pc = 0x4919E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919E4u;
        // 0x4919e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4919ECu;
        goto label_4919ec;
    }
    ctx->pc = 0x4919E4u;
    {
        const bool branch_taken_0x4919e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4919E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919E4u;
        // 0x4919e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919e4) {
            ctx->pc = 0x491A40u;
            goto label_491a40;
        }
    }
    ctx->pc = 0x4919ECu;
label_4919ec:
    // 0x4919ec: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x4919ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4919f0:
    // 0x4919f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4919f4:
    if (ctx->pc == 0x4919F4u) {
        ctx->pc = 0x4919F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919F0u;
        // 0x4919f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4919F8u;
        goto label_4919f8;
    }
    ctx->pc = 0x4919F0u;
    {
        const bool branch_taken_0x4919f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4919F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919F0u;
        // 0x4919f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919f0) {
            ctx->pc = 0x491A08u;
            goto label_491a08;
        }
    }
    ctx->pc = 0x4919F8u;
label_4919f8:
    // 0x4919f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4919fc:
    if (ctx->pc == 0x4919FCu) {
        ctx->pc = 0x4919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919F8u;
        // 0x4919fc: 0x3c0200a0  lui         $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A00u;
        goto label_491a00;
    }
    ctx->pc = 0x4919F8u;
    {
        const bool branch_taken_0x4919f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4919F8u;
        // 0x4919fc: 0x3c0200a0  lui         $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919f8) {
            ctx->pc = 0x491A1Cu;
            goto label_491a1c;
        }
    }
    ctx->pc = 0x491A00u;
label_491a00:
    // 0x491a00: 0x10000012  b           . + 4 + (0x12 << 2)
label_491a04:
    if (ctx->pc == 0x491A04u) {
        ctx->pc = 0x491A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A00u;
        // 0x491a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A08u;
        goto label_491a08;
    }
    ctx->pc = 0x491A00u;
    {
        const bool branch_taken_0x491a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A00u;
        // 0x491a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a00) {
            ctx->pc = 0x491A4Cu;
            goto label_491a4c;
        }
    }
    ctx->pc = 0x491A08u;
label_491a08:
    // 0x491a08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_491a0c:
    // 0x491a0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_491a10:
    if (ctx->pc == 0x491A10u) {
        ctx->pc = 0x491A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A0Cu;
        // 0x491a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A14u;
        goto label_491a14;
    }
    ctx->pc = 0x491A0Cu;
    {
        const bool branch_taken_0x491a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x491A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A0Cu;
        // 0x491a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a0c) {
            ctx->pc = 0x491A30u;
            goto label_491a30;
        }
    }
    ctx->pc = 0x491A14u;
label_491a14:
    // 0x491a14: 0x1000000e  b           . + 4 + (0xE << 2)
label_491a18:
    if (ctx->pc == 0x491A18u) {
        ctx->pc = 0x491A1Cu;
        goto label_491a1c;
    }
    ctx->pc = 0x491A14u;
    {
        const bool branch_taken_0x491a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491a14) {
            ctx->pc = 0x491A50u;
            goto label_491a50;
        }
    }
    ctx->pc = 0x491A1Cu;
label_491a1c:
    // 0x491a1c: 0x34a30004  ori         $v1, $a1, 0x4
    ctx->pc = 0x491a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_491a20:
    // 0x491a20: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x491a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_491a24:
    // 0x491a24: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x491a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_491a28:
    // 0x491a28: 0x10000055  b           . + 4 + (0x55 << 2)
label_491a2c:
    if (ctx->pc == 0x491A2Cu) {
        ctx->pc = 0x491A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A28u;
        // 0x491a2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A30u;
        goto label_491a30;
    }
    ctx->pc = 0x491A28u;
    {
        const bool branch_taken_0x491a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A28u;
        // 0x491a2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a28) {
            ctx->pc = 0x491B80u;
            goto label_491b80;
        }
    }
    ctx->pc = 0x491A30u;
label_491a30:
    // 0x491a30: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x491a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_491a34:
    // 0x491a34: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x491a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_491a38:
    // 0x491a38: 0x10000051  b           . + 4 + (0x51 << 2)
label_491a3c:
    if (ctx->pc == 0x491A3Cu) {
        ctx->pc = 0x491A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A38u;
        // 0x491a3c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A40u;
        goto label_491a40;
    }
    ctx->pc = 0x491A38u;
    {
        const bool branch_taken_0x491a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A38u;
        // 0x491a3c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a38) {
            ctx->pc = 0x491B80u;
            goto label_491b80;
        }
    }
    ctx->pc = 0x491A40u;
label_491a40:
    // 0x491a40: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x491a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_491a44:
    // 0x491a44: 0x1000004e  b           . + 4 + (0x4E << 2)
label_491a48:
    if (ctx->pc == 0x491A48u) {
        ctx->pc = 0x491A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A44u;
        // 0x491a48: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A4Cu;
        goto label_491a4c;
    }
    ctx->pc = 0x491A44u;
    {
        const bool branch_taken_0x491a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A44u;
        // 0x491a48: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a44) {
            ctx->pc = 0x491B80u;
            goto label_491b80;
        }
    }
    ctx->pc = 0x491A4Cu;
label_491a4c:
    // 0x491a4c: 0x0  nop
    ctx->pc = 0x491a4cu;
    // NOP
label_491a50:
    // 0x491a50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x491a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_491a54:
    // 0x491a54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x491a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_491a58:
    // 0x491a58: 0x1000052a  b           . + 4 + (0x52A << 2)
label_491a5c:
    if (ctx->pc == 0x491A5Cu) {
        ctx->pc = 0x491A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A58u;
        // 0x491a5c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491A60u;
        goto label_491a60;
    }
    ctx->pc = 0x491A58u;
    {
        const bool branch_taken_0x491a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A58u;
        // 0x491a5c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a58) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x491A60u;
label_491a60:
    // 0x491a60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x491a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_491a64:
    // 0x491a64: 0x3c030140  lui         $v1, 0x140
    ctx->pc = 0x491a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)320 << 16));
label_491a68:
    // 0x491a68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x491a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_491a6c:
    // 0x491a6c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x491a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_491a70:
    // 0x491a70: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x491a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_491a74:
    // 0x491a74: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x491a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_491a78:
    // 0x491a78: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x491a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_491a7c:
    // 0x491a7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x491a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_491a80:
    // 0x491a80: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x491a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_491a84:
    // 0x491a84: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x491a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_491a88:
    // 0x491a88: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x491a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_491a8c:
    // 0x491a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x491a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491a90:
    // 0x491a90: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x491a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_491a94:
    // 0x491a94: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x491a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_491a98:
    // 0x491a98: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_491a9c:
    if (ctx->pc == 0x491A9Cu) {
        ctx->pc = 0x491A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A98u;
        // 0x491a9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491AA0u;
        goto label_491aa0;
    }
    ctx->pc = 0x491A98u;
    {
        const bool branch_taken_0x491a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x491A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A98u;
        // 0x491a9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a98) {
            ctx->pc = 0x491AB0u;
            goto label_491ab0;
        }
    }
    ctx->pc = 0x491AA0u;
label_491aa0:
    // 0x491aa0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_491aa4:
    if (ctx->pc == 0x491AA4u) {
        ctx->pc = 0x491AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AA0u;
        // 0x491aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491AA8u;
        goto label_491aa8;
    }
    ctx->pc = 0x491AA0u;
    {
        const bool branch_taken_0x491aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x491AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AA0u;
        // 0x491aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491aa0) {
            ctx->pc = 0x491AC0u;
            goto label_491ac0;
        }
    }
    ctx->pc = 0x491AA8u;
label_491aa8:
    // 0x491aa8: 0x1000000a  b           . + 4 + (0xA << 2)
label_491aac:
    if (ctx->pc == 0x491AACu) {
        ctx->pc = 0x491AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AA8u;
        // 0x491aac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491AB0u;
        goto label_491ab0;
    }
    ctx->pc = 0x491AA8u;
    {
        const bool branch_taken_0x491aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AA8u;
        // 0x491aac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491aa8) {
            ctx->pc = 0x491AD4u;
            goto label_491ad4;
        }
    }
    ctx->pc = 0x491AB0u;
label_491ab0:
    // 0x491ab0: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x491ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_491ab4:
    // 0x491ab4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x491ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_491ab8:
    // 0x491ab8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_491abc:
    if (ctx->pc == 0x491ABCu) {
        ctx->pc = 0x491ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AB8u;
        // 0x491abc: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491AC0u;
        goto label_491ac0;
    }
    ctx->pc = 0x491AB8u;
    {
        const bool branch_taken_0x491ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AB8u;
        // 0x491abc: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491ab8) {
            ctx->pc = 0x491B38u;
            goto label_491b38;
        }
    }
    ctx->pc = 0x491AC0u;
label_491ac0:
    // 0x491ac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x491ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491ac4:
    // 0x491ac4: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x491ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_491ac8:
    // 0x491ac8: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x491ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_491acc:
    // 0x491acc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_491ad0:
    if (ctx->pc == 0x491AD0u) {
        ctx->pc = 0x491AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491ACCu;
        // 0x491ad0: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491AD4u;
        goto label_491ad4;
    }
    ctx->pc = 0x491ACCu;
    {
        const bool branch_taken_0x491acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491ACCu;
        // 0x491ad0: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491acc) {
            ctx->pc = 0x491B80u;
            goto label_491b80;
        }
    }
    ctx->pc = 0x491AD4u;
label_491ad4:
    // 0x491ad4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x491ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_491ad8:
    // 0x491ad8: 0x1000050a  b           . + 4 + (0x50A << 2)
label_491adc:
    if (ctx->pc == 0x491ADCu) {
        ctx->pc = 0x491ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AD8u;
        // 0x491adc: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491AE0u;
        goto label_491ae0;
    }
    ctx->pc = 0x491AD8u;
    {
        const bool branch_taken_0x491ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491AD8u;
        // 0x491adc: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491ad8) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x491AE0u;
label_491ae0:
    // 0x491ae0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x491ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_491ae4:
    // 0x491ae4: 0x3c030130  lui         $v1, 0x130
    ctx->pc = 0x491ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)304 << 16));
label_491ae8:
    // 0x491ae8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x491ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_491aec:
    // 0x491aec: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x491aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_491af0:
    // 0x491af0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x491af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_491af4:
    // 0x491af4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x491af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_491af8:
    // 0x491af8: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x491af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_491afc:
    // 0x491afc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x491afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_491b00:
    // 0x491b00: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x491b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_491b04:
    // 0x491b04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x491b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491b08:
    // 0x491b08: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x491b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_491b0c:
    // 0x491b0c: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x491b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_491b10:
    // 0x491b10: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x491b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_491b14:
    // 0x491b14: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_491b18:
    if (ctx->pc == 0x491B18u) {
        ctx->pc = 0x491B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B14u;
        // 0x491b18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B1Cu;
        goto label_491b1c;
    }
    ctx->pc = 0x491B14u;
    {
        const bool branch_taken_0x491b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x491B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B14u;
        // 0x491b18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b14) {
            ctx->pc = 0x491B2Cu;
            goto label_491b2c;
        }
    }
    ctx->pc = 0x491B1Cu;
label_491b1c:
    // 0x491b1c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_491b20:
    if (ctx->pc == 0x491B20u) {
        ctx->pc = 0x491B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B1Cu;
        // 0x491b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B24u;
        goto label_491b24;
    }
    ctx->pc = 0x491B1Cu;
    {
        const bool branch_taken_0x491b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x491B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B1Cu;
        // 0x491b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b1c) {
            ctx->pc = 0x491B4Cu;
            goto label_491b4c;
        }
    }
    ctx->pc = 0x491B24u;
label_491b24:
    // 0x491b24: 0x1000000e  b           . + 4 + (0xE << 2)
label_491b28:
    if (ctx->pc == 0x491B28u) {
        ctx->pc = 0x491B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B24u;
        // 0x491b28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B2Cu;
        goto label_491b2c;
    }
    ctx->pc = 0x491B24u;
    {
        const bool branch_taken_0x491b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B24u;
        // 0x491b28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b24) {
            ctx->pc = 0x491B60u;
            goto label_491b60;
        }
    }
    ctx->pc = 0x491B2Cu;
label_491b2c:
    // 0x491b2c: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x491b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_491b30:
    // 0x491b30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x491b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_491b34:
    // 0x491b34: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x491b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_491b38:
    // 0x491b38: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x491b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_491b3c:
    // 0x491b3c: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x491b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_491b40:
    // 0x491b40: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x491b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_491b44:
    // 0x491b44: 0x1000000e  b           . + 4 + (0xE << 2)
label_491b48:
    if (ctx->pc == 0x491B48u) {
        ctx->pc = 0x491B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B44u;
        // 0x491b48: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B4Cu;
        goto label_491b4c;
    }
    ctx->pc = 0x491B44u;
    {
        const bool branch_taken_0x491b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B44u;
        // 0x491b48: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b44) {
            ctx->pc = 0x491B80u;
            goto label_491b80;
        }
    }
    ctx->pc = 0x491B4Cu;
label_491b4c:
    // 0x491b4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x491b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491b50:
    // 0x491b50: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x491b50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_491b54:
    // 0x491b54: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x491b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_491b58:
    // 0x491b58: 0x10000009  b           . + 4 + (0x9 << 2)
label_491b5c:
    if (ctx->pc == 0x491B5Cu) {
        ctx->pc = 0x491B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B58u;
        // 0x491b5c: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B60u;
        goto label_491b60;
    }
    ctx->pc = 0x491B58u;
    {
        const bool branch_taken_0x491b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B58u;
        // 0x491b5c: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b58) {
            ctx->pc = 0x491B80u;
            goto label_491b80;
        }
    }
    ctx->pc = 0x491B60u;
label_491b60:
    // 0x491b60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x491b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_491b64:
    // 0x491b64: 0x100004e7  b           . + 4 + (0x4E7 << 2)
label_491b68:
    if (ctx->pc == 0x491B68u) {
        ctx->pc = 0x491B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B64u;
        // 0x491b68: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B6Cu;
        goto label_491b6c;
    }
    ctx->pc = 0x491B64u;
    {
        const bool branch_taken_0x491b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B64u;
        // 0x491b68: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b64) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x491B6Cu;
label_491b6c:
    // 0x491b6c: 0x0  nop
    ctx->pc = 0x491b6cu;
    // NOP
label_491b70:
    // 0x491b70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x491b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_491b74:
    // 0x491b74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x491b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_491b78:
    // 0x491b78: 0x100004e2  b           . + 4 + (0x4E2 << 2)
label_491b7c:
    if (ctx->pc == 0x491B7Cu) {
        ctx->pc = 0x491B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B78u;
        // 0x491b7c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491B80u;
        goto label_491b80;
    }
    ctx->pc = 0x491B78u;
    {
        const bool branch_taken_0x491b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B78u;
        // 0x491b7c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b78) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x491B80u;
label_491b80:
    // 0x491b80: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x491b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_491b84:
    // 0x491b84: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x491b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_491b88:
    // 0x491b88: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x491b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_491b8c:
    // 0x491b8c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x491b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_491b90:
    // 0x491b90: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x491b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_491b94:
    // 0x491b94: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x491b94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_491b98:
    // 0x491b98: 0x10600112  beqz        $v1, . + 4 + (0x112 << 2)
label_491b9c:
    if (ctx->pc == 0x491B9Cu) {
        ctx->pc = 0x491B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B98u;
        // 0x491b9c: 0xae460018  sw          $a2, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491BA0u;
        goto label_491ba0;
    }
    ctx->pc = 0x491B98u;
    {
        const bool branch_taken_0x491b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491B98u;
        // 0x491b9c: 0xae460018  sw          $a2, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b98) {
            ctx->pc = 0x491FE4u;
            goto label_491fe4;
        }
    }
    ctx->pc = 0x491BA0u;
label_491ba0:
    // 0x491ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491ba4:
    // 0x491ba4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x491ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_491ba8:
    // 0x491ba8: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x491ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
label_491bac:
    // 0x491bac: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x491bacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_491bb0:
    // 0x491bb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x491bb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_491bb4:
    // 0x491bb4: 0x3d7182b  sltu        $v1, $fp, $s7
    ctx->pc = 0x491bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_491bb8:
    // 0x491bb8: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x491bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491bbc:
    // 0x491bbc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x491bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_491bc0:
    // 0x491bc0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x491bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_491bc4:
    // 0x491bc4: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x491bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_491bc8:
    // 0x491bc8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x491bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_491bcc:
    // 0x491bcc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x491bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_491bd0:
    // 0x491bd0: 0xffa00038  sd          $zero, 0x38($sp)
    ctx->pc = 0x491bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 0));
label_491bd4:
    // 0x491bd4: 0xffa00030  sd          $zero, 0x30($sp)
    ctx->pc = 0x491bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
label_491bd8:
    // 0x491bd8: 0xffa00028  sd          $zero, 0x28($sp)
    ctx->pc = 0x491bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 0));
label_491bdc:
    // 0x491bdc: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x491bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
label_491be0:
    // 0x491be0: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x491be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
label_491be4:
    // 0x491be4: 0xffa20058  sd          $v0, 0x58($sp)
    ctx->pc = 0x491be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
label_491be8:
    // 0x491be8: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x491be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
label_491bec:
    // 0x491bec: 0xffa20078  sd          $v0, 0x78($sp)
    ctx->pc = 0x491becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
label_491bf0:
    // 0x491bf0: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x491bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
label_491bf4:
    // 0x491bf4: 0xffa20068  sd          $v0, 0x68($sp)
    ctx->pc = 0x491bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
label_491bf8:
    // 0x491bf8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_491bfc:
    if (ctx->pc == 0x491BFCu) {
        ctx->pc = 0x491BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491BF8u;
        // 0x491bfc: 0x1e1182  srl         $v0, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C00u;
        goto label_491c00;
    }
    ctx->pc = 0x491BF8u;
    {
        const bool branch_taken_0x491bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x491BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491BF8u;
        // 0x491bfc: 0x1e1182  srl         $v0, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491bf8) {
            ctx->pc = 0x491C04u;
            goto label_491c04;
        }
    }
    ctx->pc = 0x491C00u;
label_491c00:
    // 0x491c00: 0x171182  srl         $v0, $s7, 6
    ctx->pc = 0x491c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 6));
label_491c04:
    // 0x491c04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x491c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_491c08:
    // 0x491c08: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x491c08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_491c0c:
    // 0x491c0c: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x491c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_491c10:
    // 0x491c10: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x491c10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_491c14:
    // 0x491c14: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x491c14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_491c18:
    // 0x491c18: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x491c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_491c1c:
    // 0x491c1c: 0x108000a1  beqz        $a0, . + 4 + (0xA1 << 2)
label_491c20:
    if (ctx->pc == 0x491C20u) {
        ctx->pc = 0x491C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C1Cu;
        // 0x491c20: 0x27ab00b4  addiu       $t3, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C24u;
        goto label_491c24;
    }
    ctx->pc = 0x491C1Cu;
    {
        const bool branch_taken_0x491c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x491C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C1Cu;
        // 0x491c20: 0x27ab00b4  addiu       $t3, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491c1c) {
            ctx->pc = 0x491EA4u;
            goto label_491ea4;
        }
    }
    ctx->pc = 0x491C24u;
label_491c24:
    // 0x491c24: 0x10e0009f  beqz        $a3, . + 4 + (0x9F << 2)
label_491c28:
    if (ctx->pc == 0x491C28u) {
        ctx->pc = 0x491C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C24u;
        // 0x491c28: 0x8f828740  lw          $v0, -0x78C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C2Cu;
        goto label_491c2c;
    }
    ctx->pc = 0x491C24u;
    {
        const bool branch_taken_0x491c24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x491C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C24u;
        // 0x491c28: 0x8f828740  lw          $v0, -0x78C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491c24) {
            ctx->pc = 0x491EA4u;
            goto label_491ea4;
        }
    }
    ctx->pc = 0x491C2Cu;
label_491c2c:
    // 0x491c2c: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
label_491c30:
    if (ctx->pc == 0x491C30u) {
        ctx->pc = 0x491C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C2Cu;
        // 0x491c30: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C34u;
        goto label_491c34;
    }
    ctx->pc = 0x491C2Cu;
    {
        const bool branch_taken_0x491c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491c2c) {
            ctx->pc = 0x491C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491C2Cu;
            // 0x491c30: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491EA8u;
            goto label_491ea8;
        }
    }
    ctx->pc = 0x491C34u;
label_491c34:
    // 0x491c34: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x491c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_491c38:
    // 0x491c38: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x491c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_491c3c:
    // 0x491c3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_491c40:
    if (ctx->pc == 0x491C40u) {
        ctx->pc = 0x491C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C3Cu;
        // 0x491c40: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C44u;
        goto label_491c44;
    }
    ctx->pc = 0x491C3Cu;
    {
        const bool branch_taken_0x491c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491c3c) {
            ctx->pc = 0x491C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491C3Cu;
            // 0x491c40: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491C60u;
            goto label_491c60;
        }
    }
    ctx->pc = 0x491C44u;
label_491c44:
    // 0x491c44: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x491c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491c48:
    // 0x491c48: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x491c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_491c4c:
    // 0x491c4c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_491c50:
    if (ctx->pc == 0x491C50u) {
        ctx->pc = 0x491C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C4Cu;
        // 0x491c50: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C54u;
        goto label_491c54;
    }
    ctx->pc = 0x491C4Cu;
    {
        const bool branch_taken_0x491c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491c4c) {
            ctx->pc = 0x491C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491C4Cu;
            // 0x491c50: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491C60u;
            goto label_491c60;
        }
    }
    ctx->pc = 0x491C54u;
label_491c54:
    // 0x491c54: 0x1000008f  b           . + 4 + (0x8F << 2)
label_491c58:
    if (ctx->pc == 0x491C58u) {
        ctx->pc = 0x491C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C54u;
        // 0x491c58: 0x2c820008  sltiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491C5Cu;
        goto label_491c5c;
    }
    ctx->pc = 0x491C54u;
    {
        const bool branch_taken_0x491c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C54u;
        // 0x491c58: 0x2c820008  sltiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491c54) {
            ctx->pc = 0x491E94u;
            goto label_491e94;
        }
    }
    ctx->pc = 0x491C5Cu;
label_491c5c:
    // 0x491c5c: 0x0  nop
    ctx->pc = 0x491c5cu;
    // NOP
label_491c60:
    // 0x491c60: 0xe10c0  sll         $v0, $t6, 3
    ctx->pc = 0x491c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_491c64:
    // 0x491c64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x491c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491c68:
    // 0x491c68: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x491c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_491c6c:
    // 0x491c6c: 0x771818  mult        $v1, $v1, $s7
    ctx->pc = 0x491c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_491c70:
    // 0x491c70: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x491c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_491c74:
    // 0x491c74: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x491c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_491c78:
    // 0x491c78: 0x3d7282b  sltu        $a1, $fp, $s7
    ctx->pc = 0x491c78u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_491c7c:
    // 0x491c7c: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x491c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_491c80:
    // 0x491c80: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x491c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_491c84:
    // 0x491c84: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x491c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_491c88:
    // 0x491c88: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x491c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_491c8c:
    // 0x491c8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x491c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_491c90:
    // 0x491c90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_491c94:
    // 0x491c94: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x491c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_491c98:
    // 0x491c98: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_491c9c:
    if (ctx->pc == 0x491C9Cu) {
        ctx->pc = 0x491C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C98u;
        // 0x491c9c: 0x1e1182  srl         $v0, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491CA0u;
        goto label_491ca0;
    }
    ctx->pc = 0x491C98u;
    {
        const bool branch_taken_0x491c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x491C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C98u;
        // 0x491c9c: 0x1e1182  srl         $v0, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491c98) {
            ctx->pc = 0x491CA4u;
            goto label_491ca4;
        }
    }
    ctx->pc = 0x491CA0u;
label_491ca0:
    // 0x491ca0: 0x171182  srl         $v0, $s7, 6
    ctx->pc = 0x491ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 6));
label_491ca4:
    // 0x491ca4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x491ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_491ca8:
    // 0x491ca8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x491ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_491cac:
    // 0x491cac: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x491cacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_491cb0:
    // 0x491cb0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x491cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_491cb4:
    // 0x491cb4: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x491cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_491cb8:
    // 0x491cb8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x491cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_491cbc:
    // 0x491cbc: 0x7fa70100  sq          $a3, 0x100($sp)
    ctx->pc = 0x491cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 7));
label_491cc0:
    // 0x491cc0: 0x1029b8  dsll        $a1, $s0, 6
    ctx->pc = 0x491cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << 6);
label_491cc4:
    // 0x491cc4: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x491cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
label_491cc8:
    // 0x491cc8: 0x7fa90120  sq          $t1, 0x120($sp)
    ctx->pc = 0x491cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 9));
label_491ccc:
    // 0x491ccc: 0x7faa0130  sq          $t2, 0x130($sp)
    ctx->pc = 0x491cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 10));
label_491cd0:
    // 0x491cd0: 0x7fab0140  sq          $t3, 0x140($sp)
    ctx->pc = 0x491cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 11));
label_491cd4:
    // 0x491cd4: 0x7fad0150  sq          $t5, 0x150($sp)
    ctx->pc = 0x491cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 13));
label_491cd8:
    // 0x491cd8: 0xc10b602  jal         func_42D808
label_491cdc:
    if (ctx->pc == 0x491CDCu) {
        ctx->pc = 0x491CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491CD8u;
        // 0x491cdc: 0x7fae0160  sq          $t6, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491CE0u;
        goto label_491ce0;
    }
    ctx->pc = 0x491CD8u;
    SET_GPR_U32(ctx, 31, 0x491CE0u);
    ctx->pc = 0x491CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491CD8u;
    // 0x491cdc: 0x7fae0160  sq          $t6, 0x160($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x491CD8u, 0x491CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491CE0u;
label_491ce0:
    // 0x491ce0: 0x7ba80110  lq          $t0, 0x110($sp)
    ctx->pc = 0x491ce0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_491ce4:
    // 0x491ce4: 0x23778  dsll        $a2, $v0, 29
    ctx->pc = 0x491ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 29);
label_491ce8:
    // 0x491ce8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x491ce8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_491cec:
    // 0x491cec: 0x7ba70100  lq          $a3, 0x100($sp)
    ctx->pc = 0x491cecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_491cf0:
    // 0x491cf0: 0x7ba90120  lq          $t1, 0x120($sp)
    ctx->pc = 0x491cf0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_491cf4:
    // 0x491cf4: 0x7baa0130  lq          $t2, 0x130($sp)
    ctx->pc = 0x491cf4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_491cf8:
    // 0x491cf8: 0x7bab0140  lq          $t3, 0x140($sp)
    ctx->pc = 0x491cf8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_491cfc:
    // 0x491cfc: 0x7bad0150  lq          $t5, 0x150($sp)
    ctx->pc = 0x491cfcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_491d00:
    // 0x491d00: 0x12080017  beq         $s0, $t0, . + 4 + (0x17 << 2)
label_491d04:
    if (ctx->pc == 0x491D04u) {
        ctx->pc = 0x491D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D00u;
        // 0x491d04: 0x7bae0160  lq          $t6, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491D08u;
        goto label_491d08;
    }
    ctx->pc = 0x491D00u;
    {
        const bool branch_taken_0x491d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x491D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D00u;
        // 0x491d04: 0x7bae0160  lq          $t6, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491d00) {
            ctx->pc = 0x491D60u;
            goto label_491d60;
        }
    }
    ctx->pc = 0x491D08u;
label_491d08:
    // 0x491d08: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_491d0c:
    if (ctx->pc == 0x491D0Cu) {
        ctx->pc = 0x491D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D08u;
        // 0x491d0c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491D10u;
        goto label_491d10;
    }
    ctx->pc = 0x491D08u;
    {
        const bool branch_taken_0x491d08 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x491d08) {
            ctx->pc = 0x491D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491D08u;
            // 0x491d0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x491D10u;
            goto label_491d10;
        }
    }
    ctx->pc = 0x491D10u;
label_491d10:
    // 0x491d10: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x491d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_491d14:
    // 0x491d14: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x491d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_491d18:
    // 0x491d18: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x491d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_491d1c:
    // 0x491d1c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x491d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491d20:
    // 0x491d20: 0x34a5f800  ori         $a1, $a1, 0xF800
    ctx->pc = 0x491d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63488);
label_491d24:
    // 0x491d24: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x491d24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_491d28:
    // 0x491d28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x491d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_491d2c:
    // 0x491d2c: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x491d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_491d30:
    // 0x491d30: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x491d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_491d34:
    // 0x491d34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x491d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491d38:
    // 0x491d38: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x491d38u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_491d3c:
    // 0x491d3c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x491d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_491d40:
    // 0x491d40: 0x1012  mflo        $v0
    ctx->pc = 0x491d40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_491d44:
    // 0x491d44: 0x6d001b  divu        $zero, $v1, $t5
    ctx->pc = 0x491d44u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_491d48:
    // 0x491d48: 0x1812  mflo        $v1
    ctx->pc = 0x491d48u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_491d4c:
    // 0x491d4c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x491d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_491d50:
    // 0x491d50: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x491d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_491d54:
    // 0x491d54: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x491d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_491d58:
    // 0x491d58: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x491d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_491d5c:
    // 0x491d5c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x491d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_491d60:
    // 0x491d60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x491d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_491d64:
    // 0x491d64: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x491d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_491d68:
    // 0x491d68: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x491d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_491d6c:
    // 0x491d6c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x491d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_491d70:
    // 0x491d70: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x491d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_491d74:
    // 0x491d74: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x491d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_491d78:
    // 0x491d78: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x491d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_491d7c:
    // 0x491d7c: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x491d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
label_491d80:
    // 0x491d80: 0x304207c0  andi        $v0, $v0, 0x7C0
    ctx->pc = 0x491d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1984);
label_491d84:
    // 0x491d84: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x491d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_491d88:
    // 0x491d88: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x491d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_491d8c:
    // 0x491d8c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x491d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_491d90:
    // 0x491d90: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_491d94:
    if (ctx->pc == 0x491D94u) {
        ctx->pc = 0x491D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D90u;
        // 0x491d94: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491D98u;
        goto label_491d98;
    }
    ctx->pc = 0x491D90u;
    {
        const bool branch_taken_0x491d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x491D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D90u;
        // 0x491d94: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491d90) {
            ctx->pc = 0x491E28u;
            goto label_491e28;
        }
    }
    ctx->pc = 0x491D98u;
label_491d98:
    // 0x491d98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x491d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_491d9c:
    // 0x491d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x491d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_491da0:
    // 0x491da0: 0x2442f7b0  addiu       $v0, $v0, -0x850
    ctx->pc = 0x491da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965168));
label_491da4:
    // 0x491da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_491da8:
    // 0x491da8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x491da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_491dac:
    // 0x491dac: 0x800008  jr          $a0
label_491db0:
    if (ctx->pc == 0x491DB0u) {
        ctx->pc = 0x491DB4u;
        goto label_491db4;
    }
    ctx->pc = 0x491DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x491DB4u: goto label_491db4;
            case 0x491DC4u: goto label_491dc4;
            case 0x491DD4u: goto label_491dd4;
            case 0x491DE4u: goto label_491de4;
            case 0x491DF4u: goto label_491df4;
            case 0x491E28u: goto label_491e28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491DACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x491DB4u;
label_491db4:
    // 0x491db4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x491db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_491db8:
    // 0x491db8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x491db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_491dbc:
    // 0x491dbc: 0x10000010  b           . + 4 + (0x10 << 2)
label_491dc0:
    if (ctx->pc == 0x491DC0u) {
        ctx->pc = 0x491DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DBCu;
        // 0x491dc0: 0x2463f6f0  addiu       $v1, $v1, -0x910 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491DC4u;
        goto label_491dc4;
    }
    ctx->pc = 0x491DBCu;
    {
        const bool branch_taken_0x491dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DBCu;
        // 0x491dc0: 0x2463f6f0  addiu       $v1, $v1, -0x910 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491dbc) {
            ctx->pc = 0x491E00u;
            goto label_491e00;
        }
    }
    ctx->pc = 0x491DC4u;
label_491dc4:
    // 0x491dc4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x491dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_491dc8:
    // 0x491dc8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x491dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_491dcc:
    // 0x491dcc: 0x1000000c  b           . + 4 + (0xC << 2)
label_491dd0:
    if (ctx->pc == 0x491DD0u) {
        ctx->pc = 0x491DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DCCu;
        // 0x491dd0: 0x2463f710  addiu       $v1, $v1, -0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491DD4u;
        goto label_491dd4;
    }
    ctx->pc = 0x491DCCu;
    {
        const bool branch_taken_0x491dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DCCu;
        // 0x491dd0: 0x2463f710  addiu       $v1, $v1, -0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491dcc) {
            ctx->pc = 0x491E00u;
            goto label_491e00;
        }
    }
    ctx->pc = 0x491DD4u;
label_491dd4:
    // 0x491dd4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x491dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_491dd8:
    // 0x491dd8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x491dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_491ddc:
    // 0x491ddc: 0x10000008  b           . + 4 + (0x8 << 2)
label_491de0:
    if (ctx->pc == 0x491DE0u) {
        ctx->pc = 0x491DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DDCu;
        // 0x491de0: 0x2463f730  addiu       $v1, $v1, -0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491DE4u;
        goto label_491de4;
    }
    ctx->pc = 0x491DDCu;
    {
        const bool branch_taken_0x491ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DDCu;
        // 0x491de0: 0x2463f730  addiu       $v1, $v1, -0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491ddc) {
            ctx->pc = 0x491E00u;
            goto label_491e00;
        }
    }
    ctx->pc = 0x491DE4u;
label_491de4:
    // 0x491de4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x491de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_491de8:
    // 0x491de8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x491de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_491dec:
    // 0x491dec: 0x10000004  b           . + 4 + (0x4 << 2)
label_491df0:
    if (ctx->pc == 0x491DF0u) {
        ctx->pc = 0x491DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DECu;
        // 0x491df0: 0x2463f750  addiu       $v1, $v1, -0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491DF4u;
        goto label_491df4;
    }
    ctx->pc = 0x491DECu;
    {
        const bool branch_taken_0x491dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491DECu;
        // 0x491df0: 0x2463f750  addiu       $v1, $v1, -0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491dec) {
            ctx->pc = 0x491E00u;
            goto label_491e00;
        }
    }
    ctx->pc = 0x491DF4u;
label_491df4:
    // 0x491df4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x491df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_491df8:
    // 0x491df8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x491df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_491dfc:
    // 0x491dfc: 0x2463f770  addiu       $v1, $v1, -0x890
    ctx->pc = 0x491dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965104));
label_491e00:
    // 0x491e00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x491e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_491e04:
    // 0x491e04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x491e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_491e08:
    // 0x491e08: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x491e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_491e0c:
    // 0x491e0c: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x491e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_491e10:
    // 0x491e10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x491e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_491e14:
    // 0x491e14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x491e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_491e18:
    // 0x491e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x491e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_491e1c:
    // 0x491e1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x491e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_491e20:
    // 0x491e20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x491e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_491e24:
    // 0x491e24: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x491e24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_491e28:
    // 0x491e28: 0xe61018  mult        $v0, $a3, $a2
    ctx->pc = 0x491e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_491e2c:
    // 0x491e2c: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x491e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_491e30:
    // 0x491e30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x491e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_491e34:
    // 0x491e34: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x491e34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_491e38:
    // 0x491e38: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x491e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_491e3c:
    // 0x491e3c: 0x17b842  srl         $s7, $s7, 1
    ctx->pc = 0x491e3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
label_491e40:
    // 0x491e40: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x491e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_491e44:
    // 0x491e44: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x491e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_491e48:
    // 0x491e48: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x491e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_491e4c:
    // 0x491e4c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x491e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_491e50:
    // 0x491e50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x491e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_491e54:
    // 0x491e54: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
label_491e58:
    if (ctx->pc == 0x491E58u) {
        ctx->pc = 0x491E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E54u;
        // 0x491e58: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491E5Cu;
        goto label_491e5c;
    }
    ctx->pc = 0x491E54u;
    {
        const bool branch_taken_0x491e54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x491E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E54u;
        // 0x491e58: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e54) {
            ctx->pc = 0x491EA4u;
            goto label_491ea4;
        }
    }
    ctx->pc = 0x491E5Cu;
label_491e5c:
    // 0x491e5c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_491e60:
    if (ctx->pc == 0x491E60u) {
        ctx->pc = 0x491E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E5Cu;
        // 0x491e60: 0x8f828740  lw          $v0, -0x78C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491E64u;
        goto label_491e64;
    }
    ctx->pc = 0x491E5Cu;
    {
        const bool branch_taken_0x491e5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x491E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E5Cu;
        // 0x491e60: 0x8f828740  lw          $v0, -0x78C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e5c) {
            ctx->pc = 0x491EA4u;
            goto label_491ea4;
        }
    }
    ctx->pc = 0x491E64u;
label_491e64:
    // 0x491e64: 0x1c2102b  sltu        $v0, $t6, $v0
    ctx->pc = 0x491e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_491e68:
    // 0x491e68: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_491e6c:
    if (ctx->pc == 0x491E6Cu) {
        ctx->pc = 0x491E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E68u;
        // 0x491e6c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491E70u;
        goto label_491e70;
    }
    ctx->pc = 0x491E68u;
    {
        const bool branch_taken_0x491e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e68) {
            ctx->pc = 0x491E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491E68u;
            // 0x491e6c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491EA8u;
            goto label_491ea8;
        }
    }
    ctx->pc = 0x491E70u;
label_491e70:
    // 0x491e70: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x491e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_491e74:
    // 0x491e74: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x491e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_491e78:
    // 0x491e78: 0x5440ff79  bnel        $v0, $zero, . + 4 + (-0x87 << 2)
label_491e7c:
    if (ctx->pc == 0x491E7Cu) {
        ctx->pc = 0x491E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E78u;
        // 0x491e7c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491E80u;
        goto label_491e80;
    }
    ctx->pc = 0x491E78u;
    {
        const bool branch_taken_0x491e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491e78) {
            ctx->pc = 0x491E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491E78u;
            // 0x491e7c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491c60;
        }
    }
    ctx->pc = 0x491E80u;
label_491e80:
    // 0x491e80: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x491e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491e84:
    // 0x491e84: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x491e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_491e88:
    // 0x491e88: 0x5440ff75  bnel        $v0, $zero, . + 4 + (-0x8B << 2)
label_491e8c:
    if (ctx->pc == 0x491E8Cu) {
        ctx->pc = 0x491E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E88u;
        // 0x491e8c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491E90u;
        goto label_491e90;
    }
    ctx->pc = 0x491E88u;
    {
        const bool branch_taken_0x491e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491e88) {
            ctx->pc = 0x491E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491E88u;
            // 0x491e8c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491c60;
        }
    }
    ctx->pc = 0x491E90u;
label_491e90:
    // 0x491e90: 0x2ee20008  sltiu       $v0, $s7, 0x8
    ctx->pc = 0x491e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_491e94:
    // 0x491e94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_491e98:
    if (ctx->pc == 0x491E98u) {
        ctx->pc = 0x491E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E94u;
        // 0x491e98: 0x2ce20008  sltiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491E9Cu;
        goto label_491e9c;
    }
    ctx->pc = 0x491E94u;
    {
        const bool branch_taken_0x491e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E94u;
        // 0x491e98: 0x2ce20008  sltiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e94) {
            ctx->pc = 0x491EA4u;
            goto label_491ea4;
        }
    }
    ctx->pc = 0x491E9Cu;
label_491e9c:
    // 0x491e9c: 0x5040ff70  beql        $v0, $zero, . + 4 + (-0x90 << 2)
label_491ea0:
    if (ctx->pc == 0x491EA0u) {
        ctx->pc = 0x491EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E9Cu;
        // 0x491ea0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491EA4u;
        goto label_491ea4;
    }
    ctx->pc = 0x491E9Cu;
    {
        const bool branch_taken_0x491e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e9c) {
            ctx->pc = 0x491EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491E9Cu;
            // 0x491ea0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491c60;
        }
    }
    ctx->pc = 0x491EA4u;
label_491ea4:
    // 0x491ea4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x491ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_491ea8:
    // 0x491ea8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x491ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_491eac:
    // 0x491eac: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x491eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_491eb0:
    // 0x491eb0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x491eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_491eb4:
    // 0x491eb4: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x491eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491eb8:
    // 0x491eb8: 0x63502  srl         $a2, $a2, 20
    ctx->pc = 0x491eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
label_491ebc:
    // 0x491ebc: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x491ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_491ec0:
    // 0x491ec0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x491ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_491ec4:
    // 0x491ec4: 0xc12415c  jal         func_490570
label_491ec8:
    if (ctx->pc == 0x491EC8u) {
        ctx->pc = 0x491EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491EC4u;
        // 0x491ec8: 0x7fae0160  sq          $t6, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491ECCu;
        goto label_491ecc;
    }
    ctx->pc = 0x491EC4u;
    SET_GPR_U32(ctx, 31, 0x491ECCu);
    ctx->pc = 0x491EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491EC4u;
    // 0x491ec8: 0x7fae0160  sq          $t6, 0x160($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490570u, 0x491EC4u, 0x491ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491ECCu;
label_491ecc:
    // 0x491ecc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x491eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_491ed0:
    // 0x491ed0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x491ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_491ed4:
    // 0x491ed4: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x491ed4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_491ed8:
    // 0x491ed8: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x491ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_491edc:
    // 0x491edc: 0xdfa50058  ld          $a1, 0x58($sp)
    ctx->pc = 0x491edcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_491ee0:
    // 0x491ee0: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x491ee0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_491ee4:
    // 0x491ee4: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x491ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_491ee8:
    // 0x491ee8: 0xdfab0060  ld          $t3, 0x60($sp)
    ctx->pc = 0x491ee8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_491eec:
    // 0x491eec: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x491eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
label_491ef0:
    // 0x491ef0: 0xdfa70028  ld          $a3, 0x28($sp)
    ctx->pc = 0x491ef0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_491ef4:
    // 0x491ef4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x491ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_491ef8:
    // 0x491ef8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x491ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_491efc:
    // 0x491efc: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x491efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_491f00:
    // 0x491f00: 0xdfa90068  ld          $t1, 0x68($sp)
    ctx->pc = 0x491f00u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_491f04:
    // 0x491f04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x491f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_491f08:
    // 0x491f08: 0xb58bc  dsll32      $t3, $t3, 2
    ctx->pc = 0x491f08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 2));
label_491f0c:
    // 0x491f0c: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x491f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
label_491f10:
    // 0x491f10: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x491f10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_491f14:
    // 0x491f14: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x491f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
label_491f18:
    // 0x491f18: 0xdfa80070  ld          $t0, 0x70($sp)
    ctx->pc = 0x491f18u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_491f1c:
    // 0x491f1c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x491f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
label_491f20:
    // 0x491f20: 0xdfa60038  ld          $a2, 0x38($sp)
    ctx->pc = 0x491f20u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_491f24:
    // 0x491f24: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x491f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_491f28:
    // 0x491f28: 0x94dbc  dsll32      $t1, $t1, 22
    ctx->pc = 0x491f28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 22));
label_491f2c:
    // 0x491f2c: 0xdfaa0078  ld          $t2, 0x78($sp)
    ctx->pc = 0x491f2cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_491f30:
    // 0x491f30: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x491f30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_491f34:
    // 0x491f34: 0x893825  or          $a3, $a0, $t1
    ctx->pc = 0x491f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_491f38:
    // 0x491f38: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x491f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_491f3c:
    // 0x491f3c: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x491f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
label_491f40:
    // 0x491f40: 0x30c63fff  andi        $a2, $a2, 0x3FFF
    ctx->pc = 0x491f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
label_491f44:
    // 0x491f44: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x491f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_491f48:
    // 0x491f48: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x491f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
label_491f4c:
    // 0x491f4c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x491f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_491f50:
    // 0x491f50: 0xdfa30080  ld          $v1, 0x80($sp)
    ctx->pc = 0x491f50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_491f54:
    // 0x491f54: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x491f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_491f58:
    // 0x491f58: 0xa50bc  dsll32      $t2, $t2, 2
    ctx->pc = 0x491f58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 2));
label_491f5c:
    // 0x491f5c: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x491f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_491f60:
    // 0x491f60: 0x1846018  mult        $t4, $t4, $a0
    ctx->pc = 0x491f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_491f64:
    // 0x491f64: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x491f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_491f68:
    // 0x491f68: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x491f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
label_491f6c:
    // 0x491f6c: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x491f6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_491f70:
    // 0x491f70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x491f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_491f74:
    // 0x491f74: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x491f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
label_491f78:
    // 0x491f78: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x491f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_491f7c:
    // 0x491f7c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x491f7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_491f80:
    // 0x491f80: 0x7bae0160  lq          $t6, 0x160($sp)
    ctx->pc = 0x491f80u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_491f84:
    // 0x491f84: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x491f84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491f88:
    // 0x491f88: 0x8faf00b0  lw          $t7, 0xB0($sp)
    ctx->pc = 0x491f88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_491f8c:
    // 0x491f8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x491f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_491f90:
    // 0x491f90: 0x25cdffff  addiu       $t5, $t6, -0x1
    ctx->pc = 0x491f90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_491f94:
    // 0x491f94: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x491f94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_491f98:
    // 0x491f98: 0x7183f  dsra32      $v1, $a3, 0
    ctx->pc = 0x491f98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 7) >> (32 + 0));
label_491f9c:
    // 0x491f9c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x491f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_491fa0:
    // 0x491fa0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x491fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_491fa4:
    // 0x491fa4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x491fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_491fa8:
    // 0x491fa8: 0xa22d0016  sb          $t5, 0x16($s1)
    ctx->pc = 0x491fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 13));
label_491fac:
    // 0x491fac: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x491facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_491fb0:
    // 0x491fb0: 0xae26001c  sw          $a2, 0x1C($s1)
    ctx->pc = 0x491fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 6));
label_491fb4:
    // 0x491fb4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x491fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_491fb8:
    // 0x491fb8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x491fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_491fbc:
    // 0x491fbc: 0xae2c002c  sw          $t4, 0x2C($s1)
    ctx->pc = 0x491fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 12));
label_491fc0:
    // 0x491fc0: 0x11800057  beqz        $t4, . + 4 + (0x57 << 2)
label_491fc4:
    if (ctx->pc == 0x491FC4u) {
        ctx->pc = 0x491FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FC0u;
        // 0x491fc4: 0xae2f0030  sw          $t7, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491FC8u;
        goto label_491fc8;
    }
    ctx->pc = 0x491FC0u;
    {
        const bool branch_taken_0x491fc0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x491FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FC0u;
        // 0x491fc4: 0xae2f0030  sw          $t7, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fc0) {
            ctx->pc = 0x492120u;
            goto label_492120;
        }
    }
    ctx->pc = 0x491FC8u;
label_491fc8:
    // 0x491fc8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x491fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_491fcc:
    // 0x491fcc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x491fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_491fd0:
    // 0x491fd0: 0x146f0054  bne         $v1, $t7, . + 4 + (0x54 << 2)
label_491fd4:
    if (ctx->pc == 0x491FD4u) {
        ctx->pc = 0x491FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FD0u;
        // 0x491fd4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491FD8u;
        goto label_491fd8;
    }
    ctx->pc = 0x491FD0u;
    {
        const bool branch_taken_0x491fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 15));
        ctx->pc = 0x491FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FD0u;
        // 0x491fd4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fd0) {
            ctx->pc = 0x492124u;
            goto label_492124;
        }
    }
    ctx->pc = 0x491FD8u;
label_491fd8:
    // 0x491fd8: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x491fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
label_491fdc:
    // 0x491fdc: 0x10000051  b           . + 4 + (0x51 << 2)
label_491fe0:
    if (ctx->pc == 0x491FE0u) {
        ctx->pc = 0x491FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FDCu;
        // 0x491fe0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491FE4u;
        goto label_491fe4;
    }
    ctx->pc = 0x491FDCu;
    {
        const bool branch_taken_0x491fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FDCu;
        // 0x491fe0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fdc) {
            ctx->pc = 0x492124u;
            goto label_492124;
        }
    }
    ctx->pc = 0x491FE4u;
label_491fe4:
    // 0x491fe4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x491fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_491fe8:
    // 0x491fe8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x491fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_491fec:
    // 0x491fec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x491fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_491ff0:
    // 0x491ff0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x491ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_491ff4:
    // 0x491ff4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x491ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_491ff8:
    // 0x491ff8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x491ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_491ffc:
    // 0x491ffc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x491ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_492000:
    // 0x492000: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x492000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
label_492004:
    // 0x492004: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x492004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_492008:
    // 0x492008: 0x2408f800  addiu       $t0, $zero, -0x800
    ctx->pc = 0x492008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_49200c:
    // 0x49200c: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x49200cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_492010:
    // 0x492010: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x492010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
label_492014:
    // 0x492014: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x492014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_492018:
    // 0x492018: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x492018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_49201c:
    // 0x49201c: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x49201cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
label_492020:
    // 0x492020: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x492020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_492024:
    // 0x492024: 0xae260018  sw          $a2, 0x18($s1)
    ctx->pc = 0x492024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 6));
label_492028:
    // 0x492028: 0x1e1982  srl         $v1, $fp, 6
    ctx->pc = 0x492028u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
label_49202c:
    // 0x49202c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x49202cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_492030:
    // 0x492030: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x492030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_492034:
    // 0x492034: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x492034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_492038:
    // 0x492038: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x492038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_49203c:
    // 0x49203c: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x49203cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_492040:
    // 0x492040: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_492044:
    if (ctx->pc == 0x492044u) {
        ctx->pc = 0x492044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492040u;
        // 0x492044: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492048u;
        goto label_492048;
    }
    ctx->pc = 0x492040u;
    {
        const bool branch_taken_0x492040 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x492040) {
            ctx->pc = 0x492044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492040u;
            // 0x492044: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x492048u;
            goto label_492048;
        }
    }
    ctx->pc = 0x492048u;
label_492048:
    // 0x492048: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x492048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49204c:
    // 0x49204c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x49204cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_492050:
    // 0x492050: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x492050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_492054:
    // 0x492054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492058:
    // 0x492058: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x492058u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_49205c:
    // 0x49205c: 0x2012  mflo        $a0
    ctx->pc = 0x49205cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_492060:
    // 0x492060: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x492060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_492064:
    // 0x492064: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x492064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_492068:
    // 0x492068: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x492068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_49206c:
    // 0x49206c: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x49206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_492070:
    // 0x492070: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x492070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_492074:
    // 0x492074: 0xae27002c  sw          $a3, 0x2C($s1)
    ctx->pc = 0x492074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 7));
label_492078:
    // 0x492078: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49207c:
    // 0x49207c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x49207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_492080:
    // 0x492080: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x492080u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_492084:
    // 0x492084: 0x1012  mflo        $v0
    ctx->pc = 0x492084u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_492088:
    // 0x492088: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x492088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49208c:
    // 0x49208c: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x49208cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492090:
    // 0x492090: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x492090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_492094:
    // 0x492094: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_492098:
    if (ctx->pc == 0x492098u) {
        ctx->pc = 0x492098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492094u;
        // 0x492098: 0xae250030  sw          $a1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49209Cu;
        goto label_49209c;
    }
    ctx->pc = 0x492094u;
    {
        const bool branch_taken_0x492094 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x492098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492094u;
        // 0x492098: 0xae250030  sw          $a1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492094) {
            ctx->pc = 0x492120u;
            goto label_492120;
        }
    }
    ctx->pc = 0x49209Cu;
label_49209c:
    // 0x49209c: 0x9e1818  mult        $v1, $a0, $fp
    ctx->pc = 0x49209cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4920a0:
    // 0x4920a0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4920a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4920a4:
    // 0x4920a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4920a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4920a8:
    // 0x4920a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4920ac:
    if (ctx->pc == 0x4920ACu) {
        ctx->pc = 0x4920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920A8u;
        // 0x4920ac: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4920B0u;
        goto label_4920b0;
    }
    ctx->pc = 0x4920A8u;
    {
        const bool branch_taken_0x4920a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920A8u;
        // 0x4920ac: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4920a8) {
            ctx->pc = 0x4920C4u;
            goto label_4920c4;
        }
    }
    ctx->pc = 0x4920B0u;
label_4920b0:
    // 0x4920b0: 0xcd1818  mult        $v1, $a2, $t5
    ctx->pc = 0x4920b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4920b4:
    // 0x4920b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4920b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4920b8:
    // 0x4920b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4920b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4920bc:
    // 0x4920bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4920c0:
    if (ctx->pc == 0x4920C0u) {
        ctx->pc = 0x4920C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920BCu;
        // 0x4920c0: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4920C4u;
        goto label_4920c4;
    }
    ctx->pc = 0x4920BCu;
    {
        const bool branch_taken_0x4920bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4920C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920BCu;
        // 0x4920c0: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4920bc) {
            ctx->pc = 0x4920D0u;
            goto label_4920d0;
        }
    }
    ctx->pc = 0x4920C4u;
label_4920c4:
    // 0x4920c4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_4920c8:
    // 0x4920c8: 0x10000016  b           . + 4 + (0x16 << 2)
label_4920cc:
    if (ctx->pc == 0x4920CCu) {
        ctx->pc = 0x4920CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920C8u;
        // 0x4920cc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4920D0u;
        goto label_4920d0;
    }
    ctx->pc = 0x4920C8u;
    {
        const bool branch_taken_0x4920c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4920CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920C8u;
        // 0x4920cc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4920c8) {
            ctx->pc = 0x492124u;
            goto label_492124;
        }
    }
    ctx->pc = 0x4920D0u;
label_4920d0:
    // 0x4920d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x4920d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4920d4:
    // 0x4920d4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x4920d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4920d8:
    // 0x4920d8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x4920d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4920dc:
    // 0x4920dc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4920dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_4920e0:
    // 0x4920e0: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x4920e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4920e4:
    // 0x4920e4: 0x8b001b  divu        $zero, $a0, $t3
    ctx->pc = 0x4920e4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4920e8:
    // 0x4920e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4920e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4920ec:
    // 0x4920ec: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x4920ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_4920f0:
    // 0x4920f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4920f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_4920f4:
    // 0x4920f4: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
label_4920f8:
    if (ctx->pc == 0x4920F8u) {
        ctx->pc = 0x4920F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4920F4u;
        // 0x4920f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4920FCu;
        goto label_4920fc;
    }
    ctx->pc = 0x4920F4u;
    {
        const bool branch_taken_0x4920f4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4920f4) {
            ctx->pc = 0x4920F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4920F4u;
            // 0x4920f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4920FCu;
            goto label_4920fc;
        }
    }
    ctx->pc = 0x4920FCu;
label_4920fc:
    // 0x4920fc: 0x2012  mflo        $a0
    ctx->pc = 0x4920fcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_492100:
    // 0x492100: 0x69001b  divu        $zero, $v1, $t1
    ctx->pc = 0x492100u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_492104:
    // 0x492104: 0x1812  mflo        $v1
    ctx->pc = 0x492104u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_492108:
    // 0x492108: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x492108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49210c:
    // 0x49210c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x49210cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_492110:
    // 0x492110: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x492110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_492114:
    // 0x492114: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x492114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_492118:
    // 0x492118: 0x10000002  b           . + 4 + (0x2 << 2)
label_49211c:
    if (ctx->pc == 0x49211Cu) {
        ctx->pc = 0x49211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492118u;
        // 0x49211c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492120u;
        goto label_492120;
    }
    ctx->pc = 0x492118u;
    {
        const bool branch_taken_0x492118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492118u;
        // 0x49211c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492118) {
            ctx->pc = 0x492124u;
            goto label_492124;
        }
    }
    ctx->pc = 0x492120u;
label_492120:
    // 0x492120: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x492120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_492124:
    // 0x492124: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x492124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492128:
    // 0x492128: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x492128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_49212c:
    // 0x49212c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x49212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_492130:
    // 0x492130: 0x8f8486d0  lw          $a0, -0x7930($gp)
    ctx->pc = 0x492130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
label_492134:
    // 0x492134: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x492134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_492138:
    // 0x492138: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x492138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49213c:
    // 0x49213c: 0x148002cf  bnez        $a0, . + 4 + (0x2CF << 2)
label_492140:
    if (ctx->pc == 0x492140u) {
        ctx->pc = 0x492140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49213Cu;
        // 0x492140: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492144u;
        goto label_492144;
    }
    ctx->pc = 0x49213Cu;
    {
        const bool branch_taken_0x49213c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x492140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49213Cu;
        // 0x492140: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49213c) {
            ctx->pc = 0x492C7Cu;
            goto label_492c7c;
        }
    }
    ctx->pc = 0x492144u;
label_492144:
    // 0x492144: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x492144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_492148:
    // 0x492148: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x492148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_49214c:
    // 0x49214c: 0x544002cc  bnel        $v0, $zero, . + 4 + (0x2CC << 2)
label_492150:
    if (ctx->pc == 0x492150u) {
        ctx->pc = 0x492150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49214Cu;
        // 0x492150: 0x92420021  lbu         $v0, 0x21($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492154u;
        goto label_492154;
    }
    ctx->pc = 0x49214Cu;
    {
        const bool branch_taken_0x49214c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49214c) {
            ctx->pc = 0x492150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49214Cu;
            // 0x492150: 0x92420021  lbu         $v0, 0x21($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492C80u;
            goto label_492c80;
        }
    }
    ctx->pc = 0x492154u;
label_492154:
    // 0x492154: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x492154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_492158:
    // 0x492158: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x492158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49215c:
    // 0x49215c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x49215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_492160:
    // 0x492160: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x492160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492164:
    // 0x492164: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x492164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492168:
    // 0x492168: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x492168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_49216c:
    // 0x49216c: 0x28427fff  slti        $v0, $v0, 0x7FFF
    ctx->pc = 0x49216cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32767) ? 1 : 0);
label_492170:
    // 0x492170: 0x104002c2  beqz        $v0, . + 4 + (0x2C2 << 2)
label_492174:
    if (ctx->pc == 0x492174u) {
        ctx->pc = 0x492174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492170u;
        // 0x492174: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492178u;
        goto label_492178;
    }
    ctx->pc = 0x492170u;
    {
        const bool branch_taken_0x492170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492170u;
        // 0x492174: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492170) {
            ctx->pc = 0x492C7Cu;
            goto label_492c7c;
        }
    }
    ctx->pc = 0x492178u;
label_492178:
    // 0x492178: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x492178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_49217c:
    // 0x49217c: 0xffa000f8  sd          $zero, 0xF8($sp)
    ctx->pc = 0x49217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
label_492180:
    // 0x492180: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x492180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_492184:
    // 0x492184: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x492184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_492188:
    // 0x492188: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x492188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
label_49218c:
    // 0x49218c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x49218cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_492190:
    // 0x492190: 0x14640044  bne         $v1, $a0, . + 4 + (0x44 << 2)
label_492194:
    if (ctx->pc == 0x492194u) {
        ctx->pc = 0x492194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492190u;
        // 0x492194: 0xa2250036  sb          $a1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492198u;
        goto label_492198;
    }
    ctx->pc = 0x492190u;
    {
        const bool branch_taken_0x492190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x492194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492190u;
        // 0x492194: 0xa2250036  sb          $a1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492190) {
            ctx->pc = 0x4922A4u;
            goto label_4922a4;
        }
    }
    ctx->pc = 0x492198u;
label_492198:
    // 0x492198: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x492198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49219c:
    // 0x49219c: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x49219cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_4921a0:
    // 0x4921a0: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x4921a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_4921a4:
    // 0x4921a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4921a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4921a8:
    // 0x4921a8: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_4921ac:
    if (ctx->pc == 0x4921ACu) {
        ctx->pc = 0x4921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4921A8u;
        // 0x4921ac: 0xa2230036  sb          $v1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4921B0u;
        goto label_4921b0;
    }
    ctx->pc = 0x4921A8u;
    {
        const bool branch_taken_0x4921a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4921A8u;
        // 0x4921ac: 0xa2230036  sb          $v1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4921a8) {
            ctx->pc = 0x4922A4u;
            goto label_4922a4;
        }
    }
    ctx->pc = 0x4921B0u;
label_4921b0:
    // 0x4921b0: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x4921b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_4921b4:
    // 0x4921b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4921b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4921b8:
    // 0x4921b8: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x4921b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4921bc:
    // 0x4921bc: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x4921bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4921c0:
    // 0x4921c0: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x4921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_4921c4:
    // 0x4921c4: 0xdc430050  ld          $v1, 0x50($v0)
    ctx->pc = 0x4921c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 80)));
label_4921c8:
    // 0x4921c8: 0x54640037  bnel        $v1, $a0, . + 4 + (0x37 << 2)
label_4921cc:
    if (ctx->pc == 0x4921CCu) {
        ctx->pc = 0x4921CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4921C8u;
        // 0x4921cc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4921D0u;
        goto label_4921d0;
    }
    ctx->pc = 0x4921C8u;
    {
        const bool branch_taken_0x4921c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4921c8) {
            ctx->pc = 0x4921CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4921C8u;
            // 0x4921cc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4922A8u;
            goto label_4922a8;
        }
    }
    ctx->pc = 0x4921D0u;
label_4921d0:
    // 0x4921d0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x4921d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_4921d4:
    // 0x4921d4: 0x2404ffe1  addiu       $a0, $zero, -0x1F
    ctx->pc = 0x4921d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_4921d8:
    // 0x4921d8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4921d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4921dc:
    // 0x4921dc: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x4921dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_4921e0:
    // 0x4921e0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x4921e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_4921e4:
    // 0x4921e4: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x4921e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_4921e8:
    // 0x4921e8: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x4921e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_4921ec:
    // 0x4921ec: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x4921ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4921f0:
    // 0x4921f0: 0x3a34821  addu        $t1, $sp, $v1
    ctx->pc = 0x4921f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_4921f4:
    // 0x4921f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4921f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4921f8:
    // 0x4921f8: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x4921f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
label_4921fc:
    // 0x4921fc: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x4921fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_492200:
    // 0x492200: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x492200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_492204:
    // 0x492204: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x492204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_492208:
    // 0x492208: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x492208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_49220c:
    // 0x49220c: 0x30e50002  andi        $a1, $a3, 0x2
    ctx->pc = 0x49220cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_492210:
    // 0x492210: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x492210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_492214:
    // 0x492214: 0x3463ffe1  ori         $v1, $v1, 0xFFE1
    ctx->pc = 0x492214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65505);
label_492218:
    // 0x492218: 0x8d280090  lw          $t0, 0x90($t1)
    ctx->pc = 0x492218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
label_49221c:
    // 0x49221c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x49221cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_492220:
    // 0x492220: 0x630ba  dsrl        $a2, $a2, 2
    ctx->pc = 0x492220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 2);
label_492224:
    // 0x492224: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x492224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_492228:
    // 0x492228: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x492228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_49222c:
    // 0x49222c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x49222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_492230:
    // 0x492230: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x492230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_492234:
    // 0x492234: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x492234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_492238:
    // 0x492238: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x492238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_49223c:
    // 0x49223c: 0x310507ff  andi        $a1, $t0, 0x7FF
    ctx->pc = 0x49223cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_492240:
    // 0x492240: 0x30e60008  andi        $a2, $a3, 0x8
    ctx->pc = 0x492240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_492244:
    // 0x492244: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492248:
    // 0x492248: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x492248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_49224c:
    // 0x49224c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x49224cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_492250:
    // 0x492250: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x492250u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_492254:
    // 0x492254: 0x84442  srl         $t0, $t0, 17
    ctx->pc = 0x492254u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 17));
label_492258:
    // 0x492258: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x492258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_49225c:
    // 0x49225c: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x49225cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_492260:
    // 0x492260: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x492260u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_492264:
    // 0x492264: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x492264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_492268:
    // 0x492268: 0x310803f8  andi        $t0, $t0, 0x3F8
    ctx->pc = 0x492268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1016);
label_49226c:
    // 0x49226c: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x49226cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_492270:
    // 0x492270: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x492270u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_492274:
    // 0x492274: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x492274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_492278:
    // 0x492278: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x492278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49227c:
    // 0x49227c: 0x320c2  srl         $a0, $v1, 3
    ctx->pc = 0x49227cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_492280:
    // 0x492280: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x492280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_492284:
    // 0x492284: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x492284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_492288:
    // 0x492288: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x492288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_49228c:
    // 0x49228c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_492290:
    if (ctx->pc == 0x492290u) {
        ctx->pc = 0x492290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49228Cu;
        // 0x492290: 0x3063003f  andi        $v1, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492294u;
        goto label_492294;
    }
    ctx->pc = 0x49228Cu;
    {
        const bool branch_taken_0x49228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49228Cu;
        // 0x492290: 0x3063003f  andi        $v1, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49228c) {
            ctx->pc = 0x4922A4u;
            goto label_4922a4;
        }
    }
    ctx->pc = 0x492294u;
label_492294:
    // 0x492294: 0x414c0  sll         $v0, $a0, 19
    ctx->pc = 0x492294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
label_492298:
    // 0x492298: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x492298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_49229c:
    // 0x49229c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4922a0:
    // 0x4922a0: 0xffa200f8  sd          $v0, 0xF8($sp)
    ctx->pc = 0x4922a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
label_4922a4:
    // 0x4922a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4922a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4922a8:
    // 0x4922a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4922a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4922ac:
    // 0x4922ac: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4922acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_4922b0:
    // 0x4922b0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4922b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4922b4:
    // 0x4922b4: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
label_4922b8:
    if (ctx->pc == 0x4922B8u) {
        ctx->pc = 0x4922B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4922B4u;
        // 0x4922b8: 0x92230016  lbu         $v1, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4922BCu;
        goto label_4922bc;
    }
    ctx->pc = 0x4922B4u;
    {
        const bool branch_taken_0x4922b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4922b4) {
            ctx->pc = 0x4922B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4922B4u;
            // 0x4922b8: 0x92230016  lbu         $v1, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4923ECu;
            goto label_4923ec;
        }
    }
    ctx->pc = 0x4922BCu;
label_4922bc:
    // 0x4922bc: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x4922bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_4922c0:
    // 0x4922c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4922c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4922c4:
    // 0x4922c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4922c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4922c8:
    // 0x4922c8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4922c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4922cc:
    // 0x4922cc: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x4922ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_4922d0:
    // 0x4922d0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4922d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4922d4:
    // 0x4922d4: 0x14640044  bne         $v1, $a0, . + 4 + (0x44 << 2)
label_4922d8:
    if (ctx->pc == 0x4922D8u) {
        ctx->pc = 0x4922D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4922D4u;
        // 0x4922d8: 0xa2220036  sb          $v0, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4922DCu;
        goto label_4922dc;
    }
    ctx->pc = 0x4922D4u;
    {
        const bool branch_taken_0x4922d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4922D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4922D4u;
        // 0x4922d8: 0xa2220036  sb          $v0, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4922d4) {
            ctx->pc = 0x4923E8u;
            goto label_4923e8;
        }
    }
    ctx->pc = 0x4922DCu;
label_4922dc:
    // 0x4922dc: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x4922dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_4922e0:
    // 0x4922e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4922e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4922e4:
    // 0x4922e4: 0x23082  srl         $a2, $v0, 2
    ctx->pc = 0x4922e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4922e8:
    // 0x4922e8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4922e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4922ec:
    // 0x4922ec: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x4922ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_4922f0:
    // 0x4922f0: 0xdc430050  ld          $v1, 0x50($v0)
    ctx->pc = 0x4922f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 80)));
label_4922f4:
    // 0x4922f4: 0x5464003c  bnel        $v1, $a0, . + 4 + (0x3C << 2)
label_4922f8:
    if (ctx->pc == 0x4922F8u) {
        ctx->pc = 0x4922F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4922F4u;
        // 0x4922f8: 0xffa000f8  sd          $zero, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4922FCu;
        goto label_4922fc;
    }
    ctx->pc = 0x4922F4u;
    {
        const bool branch_taken_0x4922f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4922f4) {
            ctx->pc = 0x4922F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4922F4u;
            // 0x4922f8: 0xffa000f8  sd          $zero, 0xF8($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4923E8u;
            goto label_4923e8;
        }
    }
    ctx->pc = 0x4922FCu;
label_4922fc:
    // 0x4922fc: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x4922fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_492300:
    // 0x492300: 0x2405ffe0  addiu       $a1, $zero, -0x20
    ctx->pc = 0x492300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_492304:
    // 0x492304: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x492304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_492308:
    // 0x492308: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x492308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_49230c:
    // 0x49230c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x49230cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_492310:
    // 0x492310: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x492310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_492314:
    // 0x492314: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x492314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_492318:
    // 0x492318: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x492318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_49231c:
    // 0x49231c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49231cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_492320:
    // 0x492320: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x492320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_492324:
    // 0x492324: 0x3a65821  addu        $t3, $sp, $a2
    ctx->pc = 0x492324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_492328:
    // 0x492328: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x492328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_49232c:
    // 0x49232c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x49232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_492330:
    // 0x492330: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x492330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_492334:
    // 0x492334: 0x31260001  andi        $a2, $t1, 0x1
    ctx->pc = 0x492334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_492338:
    // 0x492338: 0x3484ffe0  ori         $a0, $a0, 0xFFE0
    ctx->pc = 0x492338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65504);
label_49233c:
    // 0x49233c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x49233cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_492340:
    // 0x492340: 0x30e80008  andi        $t0, $a3, 0x8
    ctx->pc = 0x492340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_492344:
    // 0x492344: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x492344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_492348:
    // 0x492348: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x492348u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_49234c:
    // 0x49234c: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x49234cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
label_492350:
    // 0x492350: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x492350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_492354:
    // 0x492354: 0x8d6a0090  lw          $t2, 0x90($t3)
    ctx->pc = 0x492354u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 144)));
label_492358:
    // 0x492358: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x492358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_49235c:
    // 0x49235c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49235cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_492360:
    // 0x492360: 0x840ba  dsrl        $t0, $t0, 2
    ctx->pc = 0x492360u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 2);
label_492364:
    // 0x492364: 0x31220004  andi        $v0, $t1, 0x4
    ctx->pc = 0x492364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
label_492368:
    // 0x492368: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x492368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_49236c:
    // 0x49236c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x49236cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_492370:
    // 0x492370: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x492370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_492374:
    // 0x492374: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x492374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_492378:
    // 0x492378: 0x314307ff  andi        $v1, $t2, 0x7FF
    ctx->pc = 0x492378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2047);
label_49237c:
    // 0x49237c: 0x31260008  andi        $a2, $t1, 0x8
    ctx->pc = 0x49237cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
label_492380:
    // 0x492380: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x492380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_492384:
    // 0x492384: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x492384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_492388:
    // 0x492388: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x492388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_49238c:
    // 0x49238c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x49238cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_492390:
    // 0x492390: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x492390u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_492394:
    // 0x492394: 0xa5482  srl         $t2, $t2, 18
    ctx->pc = 0x492394u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
label_492398:
    // 0x492398: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x492398u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_49239c:
    // 0x49239c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x49239cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4923a0:
    // 0x4923a0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4923a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_4923a4:
    // 0x4923a4: 0x314a01fc  andi        $t2, $t2, 0x1FC
    ctx->pc = 0x4923a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)508);
label_4923a8:
    // 0x4923a8: 0x31290010  andi        $t1, $t1, 0x10
    ctx->pc = 0x4923a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16);
label_4923ac:
    // 0x4923ac: 0xaa2823  subu        $a1, $a1, $t2
    ctx->pc = 0x4923acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4923b0:
    // 0x4923b0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4923b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_4923b4:
    // 0x4923b4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4923b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4923b8:
    // 0x4923b8: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x4923b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_4923bc:
    // 0x4923bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4923bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4923c0:
    // 0x4923c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4923c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4923c4:
    // 0x4923c4: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x4923c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_4923c8:
    // 0x4923c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4923cc:
    if (ctx->pc == 0x4923CCu) {
        ctx->pc = 0x4923CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4923C8u;
        // 0x4923cc: 0x3084003f  andi        $a0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4923D0u;
        goto label_4923d0;
    }
    ctx->pc = 0x4923C8u;
    {
        const bool branch_taken_0x4923c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4923CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4923C8u;
        // 0x4923cc: 0x3084003f  andi        $a0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4923c8) {
            ctx->pc = 0x4923E4u;
            goto label_4923e4;
        }
    }
    ctx->pc = 0x4923D0u;
label_4923d0:
    // 0x4923d0: 0x314c0  sll         $v0, $v1, 19
    ctx->pc = 0x4923d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_4923d4:
    // 0x4923d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4923d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4923d8:
    // 0x4923d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4923d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4923dc:
    // 0x4923dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4923e0:
    if (ctx->pc == 0x4923E0u) {
        ctx->pc = 0x4923E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4923DCu;
        // 0x4923e0: 0xffa200f8  sd          $v0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4923E4u;
        goto label_4923e4;
    }
    ctx->pc = 0x4923DCu;
    {
        const bool branch_taken_0x4923dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4923E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4923DCu;
        // 0x4923e0: 0xffa200f8  sd          $v0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4923dc) {
            ctx->pc = 0x4923E8u;
            goto label_4923e8;
        }
    }
    ctx->pc = 0x4923E4u;
label_4923e4:
    // 0x4923e4: 0xffa000f8  sd          $zero, 0xF8($sp)
    ctx->pc = 0x4923e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
label_4923e8:
    // 0x4923e8: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x4923e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_4923ec:
    // 0x4923ec: 0x27a900b8  addiu       $t1, $sp, 0xB8
    ctx->pc = 0x4923ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_4923f0:
    // 0x4923f0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4923f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4923f4:
    // 0x4923f4: 0x27aa00bc  addiu       $t2, $sp, 0xBC
    ctx->pc = 0x4923f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_4923f8:
    // 0x4923f8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x4923f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_4923fc:
    // 0x4923fc: 0x92280036  lbu         $t0, 0x36($s1)
    ctx->pc = 0x4923fcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_492400:
    // 0x492400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x492400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_492404:
    // 0x492404: 0x42502  srl         $a0, $a0, 20
    ctx->pc = 0x492404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 20));
label_492408:
    // 0x492408: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x492408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49240c:
    // 0x49240c: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x49240cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_492410:
    // 0x492410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_492414:
    // 0x492414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x492414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492418:
    // 0x492418: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_49241c:
    // 0x49241c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49241cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492420:
    // 0x492420: 0x2cc3003b  sltiu       $v1, $a2, 0x3B
    ctx->pc = 0x492420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_492424:
    // 0x492424: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_492428:
    if (ctx->pc == 0x492428u) {
        ctx->pc = 0x492428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492424u;
        // 0x492428: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49242Cu;
        goto label_49242c;
    }
    ctx->pc = 0x492424u;
    {
        const bool branch_taken_0x492424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x492428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492424u;
        // 0x492428: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492424) {
            ctx->pc = 0x492464u;
            goto label_492464;
        }
    }
    ctx->pc = 0x49242Cu;
label_49242c:
    // 0x49242c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x49242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_492430:
    // 0x492430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x492430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_492434:
    // 0x492434: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x492434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_492438:
    // 0x492438: 0x2463f810  addiu       $v1, $v1, -0x7F0
    ctx->pc = 0x492438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965264));
label_49243c:
    // 0x49243c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_492440:
    // 0x492440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_492444:
    // 0x492444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x492444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492448:
    // 0x492448: 0x800008  jr          $a0
label_49244c:
    if (ctx->pc == 0x49244Cu) {
        ctx->pc = 0x492450u;
        goto label_492450;
    }
    ctx->pc = 0x492448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492448u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x492450u;
label_492450:
    // 0x492450: 0x10000004  b           . + 4 + (0x4 << 2)
label_492454:
    if (ctx->pc == 0x492454u) {
        ctx->pc = 0x492454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492450u;
        // 0x492454: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492458u;
        goto label_492458;
    }
    ctx->pc = 0x492450u;
    {
        const bool branch_taken_0x492450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492450u;
        // 0x492454: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492450) {
            ctx->pc = 0x492464u;
            goto label_492464;
        }
    }
    ctx->pc = 0x492458u;
label_492458:
    // 0x492458: 0x10000002  b           . + 4 + (0x2 << 2)
label_49245c:
    if (ctx->pc == 0x49245Cu) {
        ctx->pc = 0x49245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492458u;
        // 0x49245c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492460u;
        goto label_492460;
    }
    ctx->pc = 0x492458u;
    {
        const bool branch_taken_0x492458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492458u;
        // 0x49245c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492458) {
            ctx->pc = 0x492464u;
            goto label_492464;
        }
    }
    ctx->pc = 0x492460u;
label_492460:
    // 0x492460: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x492460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_492464:
    // 0x492464: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x492464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
label_492468:
    // 0x492468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_49246c:
    if (ctx->pc == 0x49246Cu) {
        ctx->pc = 0x49246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492468u;
        // 0x49246c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492470u;
        goto label_492470;
    }
    ctx->pc = 0x492468u;
    {
        const bool branch_taken_0x492468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492468u;
        // 0x49246c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492468) {
            ctx->pc = 0x492480u;
            goto label_492480;
        }
    }
    ctx->pc = 0x492470u;
label_492470:
    // 0x492470: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_492474:
    if (ctx->pc == 0x492474u) {
        ctx->pc = 0x492474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492470u;
        // 0x492474: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492478u;
        goto label_492478;
    }
    ctx->pc = 0x492470u;
    {
        const bool branch_taken_0x492470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x492474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492470u;
        // 0x492474: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492470) {
            ctx->pc = 0x492484u;
            goto label_492484;
        }
    }
    ctx->pc = 0x492478u;
label_492478:
    // 0x492478: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x492478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49247c:
    // 0x49247c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x49247cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492480:
    // 0x492480: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x492480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_492484:
    // 0x492484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_492488:
    if (ctx->pc == 0x492488u) {
        ctx->pc = 0x492488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492484u;
        // 0x492488: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49248Cu;
        goto label_49248c;
    }
    ctx->pc = 0x492484u;
    {
        const bool branch_taken_0x492484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492484u;
        // 0x492488: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492484) {
            ctx->pc = 0x49249Cu;
            goto label_49249c;
        }
    }
    ctx->pc = 0x49248Cu;
label_49248c:
    // 0x49248c: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
label_492490:
    if (ctx->pc == 0x492490u) {
        ctx->pc = 0x492490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49248Cu;
        // 0x492490: 0x92220016  lbu         $v0, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492494u;
        goto label_492494;
    }
    ctx->pc = 0x49248Cu;
    {
        const bool branch_taken_0x49248c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x49248c) {
            ctx->pc = 0x492490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49248Cu;
            // 0x492490: 0x92220016  lbu         $v0, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4924A0u;
            goto label_4924a0;
        }
    }
    ctx->pc = 0x492494u;
label_492494:
    // 0x492494: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x492494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_492498:
    // 0x492498: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x492498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49249c:
    // 0x49249c: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x49249cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_4924a0:
    // 0x4924a0: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x4924a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
label_4924a4:
    // 0x4924a4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4924a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4924a8:
    // 0x4924a8: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4924a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_4924ac:
    // 0x4924ac: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x4924acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4924b0:
    // 0x4924b0: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4924b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_4924b4:
    // 0x4924b4: 0x8e4f000c  lw          $t7, 0xC($s2)
    ctx->pc = 0x4924b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4924b8:
    // 0x4924b8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_4924bc:
    if (ctx->pc == 0x4924BCu) {
        ctx->pc = 0x4924BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4924B8u;
        // 0x4924bc: 0x8e4e0010  lw          $t6, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4924C0u;
        goto label_4924c0;
    }
    ctx->pc = 0x4924B8u;
    {
        const bool branch_taken_0x4924b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4924BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4924B8u;
        // 0x4924bc: 0x8e4e0010  lw          $t6, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4924b8) {
            ctx->pc = 0x49251Cu;
            goto label_49251c;
        }
    }
    ctx->pc = 0x4924C0u;
label_4924c0:
    // 0x4924c0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x4924c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_4924c4:
    // 0x4924c4: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x4924c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4924c8:
    // 0x4924c8: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x4924c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_4924cc:
    // 0x4924cc: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x4924ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_4924d0:
    // 0x4924d0: 0x1e6202a  slt         $a0, $t7, $a2
    ctx->pc = 0x4924d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4924d4:
    // 0x4924d4: 0x1c7282a  slt         $a1, $t6, $a3
    ctx->pc = 0x4924d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_4924d8:
    // 0x4924d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4924d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4924dc:
    // 0x4924dc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4924dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4924e0:
    // 0x4924e0: 0x1e4100a  movz        $v0, $t7, $a0
    ctx->pc = 0x4924e0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
label_4924e4:
    // 0x4924e4: 0x1c5180a  movz        $v1, $t6, $a1
    ctx->pc = 0x4924e4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
label_4924e8:
    // 0x4924e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4924e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4924ec:
    // 0x4924ec: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4924ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4924f0:
    // 0x4924f0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x4924f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4924f4:
    // 0x4924f4: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x4924f4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_4924f8:
    // 0x4924f8: 0xe7043  sra         $t6, $t6, 1
    ctx->pc = 0x4924f8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 1));
label_4924fc:
    // 0x4924fc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x4924fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_492500:
    // 0x492500: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x492500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492504:
    // 0x492504: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x492504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_492508:
    // 0x492508: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x492508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_49250c:
    // 0x49250c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x49250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_492510:
    // 0x492510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x492510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_492514:
    // 0x492514: 0x1580ffee  bnez        $t4, . + 4 + (-0x12 << 2)
label_492518:
    if (ctx->pc == 0x492518u) {
        ctx->pc = 0x492518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492514u;
        // 0x492518: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49251Cu;
        goto label_49251c;
    }
    ctx->pc = 0x492514u;
    {
        const bool branch_taken_0x492514 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x492518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492514u;
        // 0x492518: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492514) {
            ctx->pc = 0x4924D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4924d0;
        }
    }
    ctx->pc = 0x49251Cu;
label_49251c:
    // 0x49251c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x49251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492520:
    // 0x492520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_492524:
    if (ctx->pc == 0x492524u) {
        ctx->pc = 0x492524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492520u;
        // 0x492524: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492528u;
        goto label_492528;
    }
    ctx->pc = 0x492520u;
    {
        const bool branch_taken_0x492520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492520u;
        // 0x492524: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492520) {
            ctx->pc = 0x492550u;
            goto label_492550;
        }
    }
    ctx->pc = 0x492528u;
label_492528:
    // 0x492528: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x492528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49252c:
    // 0x49252c: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x49252cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_492530:
    // 0x492530: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x492530u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_492534:
    // 0x492534: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x492534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_492538:
    // 0x492538: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x492538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_49253c:
    // 0x49253c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x49253cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492540:
    // 0x492540: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x492540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_492544:
    // 0x492544: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x492544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492548:
    // 0x492548: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x492548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_49254c:
    // 0x49254c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x49254cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_492550:
    // 0x492550: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x492550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_492554:
    // 0x492554: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x492554u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_492558:
    // 0x492558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x492558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49255c:
    // 0x49255c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x49255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492560:
    // 0x492560: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x492560u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_492564:
    // 0x492564: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x492564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_492568:
    // 0x492568: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_49256c:
    if (ctx->pc == 0x49256Cu) {
        ctx->pc = 0x49256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492568u;
        // 0x49256c: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492570u;
        goto label_492570;
    }
    ctx->pc = 0x492568u;
    {
        const bool branch_taken_0x492568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492568u;
        // 0x49256c: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492568) {
            ctx->pc = 0x492594u;
            goto label_492594;
        }
    }
    ctx->pc = 0x492570u;
label_492570:
    // 0x492570: 0x24ac0001  addiu       $t4, $a1, 0x1
    ctx->pc = 0x492570u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_492574:
    // 0x492574: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x492574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_492578:
    // 0x492578: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x492578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49257c:
    // 0x49257c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_492580:
    if (ctx->pc == 0x492580u) {
        ctx->pc = 0x492580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49257Cu;
        // 0x492580: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492584u;
        goto label_492584;
    }
    ctx->pc = 0x49257Cu;
    {
        const bool branch_taken_0x49257c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49257Cu;
        // 0x492580: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49257c) {
            ctx->pc = 0x49258Cu;
            goto label_49258c;
        }
    }
    ctx->pc = 0x492584u;
label_492584:
    // 0x492584: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x492584u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_492588:
    // 0x492588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x492588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49258c:
    // 0x49258c: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
label_492590:
    if (ctx->pc == 0x492590u) {
        ctx->pc = 0x492590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49258Cu;
        // 0x492590: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492594u;
        goto label_492594;
    }
    ctx->pc = 0x49258Cu;
    {
        const bool branch_taken_0x49258c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x492590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49258Cu;
        // 0x492590: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49258c) {
            ctx->pc = 0x492578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_492578;
        }
    }
    ctx->pc = 0x492594u;
label_492594:
    // 0x492594: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_492598:
    if (ctx->pc == 0x492598u) {
        ctx->pc = 0x492598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492594u;
        // 0x492598: 0xdfa600f8  ld          $a2, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49259Cu;
        goto label_49259c;
    }
    ctx->pc = 0x492594u;
    {
        const bool branch_taken_0x492594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x492598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492594u;
        // 0x492598: 0xdfa600f8  ld          $a2, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492594) {
            ctx->pc = 0x4925E4u;
            goto label_4925e4;
        }
    }
    ctx->pc = 0x49259Cu;
label_49259c:
    // 0x49259c: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x49259cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_4925a0:
    // 0x4925a0: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
label_4925a4:
    if (ctx->pc == 0x4925A4u) {
        ctx->pc = 0x4925A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4925A0u;
        // 0x4925a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4925A8u;
        goto label_4925a8;
    }
    ctx->pc = 0x4925A0u;
    {
        const bool branch_taken_0x4925a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4925A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4925A0u;
        // 0x4925a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4925a0) {
            ctx->pc = 0x4925E4u;
            goto label_4925e4;
        }
    }
    ctx->pc = 0x4925A8u;
label_4925a8:
    // 0x4925a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4925a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4925ac:
    // 0x4925ac: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4925acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_4925b0:
    // 0x4925b0: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4925b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_4925b4:
    // 0x4925b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4925b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4925b8:
    // 0x4925b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4925b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4925bc:
    // 0x4925bc: 0x34a5ffc0  ori         $a1, $a1, 0xFFC0
    ctx->pc = 0x4925bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65472);
label_4925c0:
    // 0x4925c0: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x4925c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_4925c4:
    // 0x4925c4: 0x2566ad18  addiu       $a2, $t3, -0x52E8
    ctx->pc = 0x4925c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946072));
label_4925c8:
    // 0x4925c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4925c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4925cc:
    // 0x4925cc: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4925ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4925d0:
    // 0x4925d0: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x4925d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_4925d4:
    // 0x4925d4: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x4925d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_4925d8:
    // 0x4925d8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4925d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4925dc:
    // 0x4925dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_4925e0:
    if (ctx->pc == 0x4925E0u) {
        ctx->pc = 0x4925E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4925DCu;
        // 0x4925e0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4925E4u;
        goto label_4925e4;
    }
    ctx->pc = 0x4925DCu;
    {
        const bool branch_taken_0x4925dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4925E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4925DCu;
        // 0x4925e0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4925dc) {
            ctx->pc = 0x49260Cu;
            goto label_49260c;
        }
    }
    ctx->pc = 0x4925E4u;
label_4925e4:
    // 0x4925e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4925e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4925e8:
    // 0x4925e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4925e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4925ec:
    // 0x4925ec: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4925ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_4925f0:
    // 0x4925f0: 0x2484003f  addiu       $a0, $a0, 0x3F
    ctx->pc = 0x4925f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
label_4925f4:
    // 0x4925f4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4925f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4925f8:
    // 0x4925f8: 0x2563ad18  addiu       $v1, $t3, -0x52E8
    ctx->pc = 0x4925f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946072));
label_4925fc:
    // 0x4925fc: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4925fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_492600:
    // 0x492600: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x492600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_492604:
    // 0x492604: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x492604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_492608:
    // 0x492608: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x492608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_49260c:
    // 0x49260c: 0x40f809  jalr        $v0
label_492610:
    if (ctx->pc == 0x492610u) {
        ctx->pc = 0x492610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49260Cu;
        // 0x492610: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492614u;
        goto label_492614;
    }
    ctx->pc = 0x49260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492614u);
        ctx->pc = 0x492610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49260Cu;
        // 0x492610: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49260Cu, 0x492614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492614u;
label_492614:
    // 0x492614: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x492614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_492618:
    // 0x492618: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x492618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49261c:
    // 0x49261c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_492620:
    if (ctx->pc == 0x492620u) {
        ctx->pc = 0x492620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49261Cu;
        // 0x492620: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492624u;
        goto label_492624;
    }
    ctx->pc = 0x49261Cu;
    {
        const bool branch_taken_0x49261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49261c) {
            ctx->pc = 0x492620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49261Cu;
            // 0x492620: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492678u;
            goto label_492678;
        }
    }
    ctx->pc = 0x492624u;
label_492624:
    // 0x492624: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x492624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492628:
    // 0x492628: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x492628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_49262c:
    // 0x49262c: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x49262cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492630:
    // 0x492630: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x492630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_492634:
    // 0x492634: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x492634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
label_492638:
    // 0x492638: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x492638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_49263c:
    // 0x49263c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_492640:
    // 0x492640: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x492640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_492644:
    // 0x492644: 0x24c6003f  addiu       $a2, $a2, 0x3F
    ctx->pc = 0x492644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
label_492648:
    // 0x492648: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x492648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_49264c:
    // 0x49264c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x49264cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_492650:
    // 0x492650: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x492650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_492654:
    // 0x492654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492658:
    // 0x492658: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x492658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_49265c:
    // 0x49265c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_492660:
    // 0x492660: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x492660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_492664:
    // 0x492664: 0xc11eff2  jal         func_47BFC8
label_492668:
    if (ctx->pc == 0x492668u) {
        ctx->pc = 0x492668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492664u;
        // 0x492668: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49266Cu;
        goto label_49266c;
    }
    ctx->pc = 0x492664u;
    SET_GPR_U32(ctx, 31, 0x49266Cu);
    ctx->pc = 0x492668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492664u;
    // 0x492668: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x492664u, 0x49266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49266Cu;
label_49266c:
    // 0x49266c: 0x10000228  b           . + 4 + (0x228 << 2)
label_492670:
    if (ctx->pc == 0x492670u) {
        ctx->pc = 0x492670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49266Cu;
        // 0x492670: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492674u;
        goto label_492674;
    }
    ctx->pc = 0x49266Cu;
    {
        const bool branch_taken_0x49266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49266Cu;
        // 0x492670: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49266c) {
            ctx->pc = 0x492F10u;
            goto label_492f10;
        }
    }
    ctx->pc = 0x492674u;
label_492674:
    // 0x492674: 0x0  nop
    ctx->pc = 0x492674u;
    // NOP
label_492678:
    // 0x492678: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x492678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_49267c:
    // 0x49267c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x49267cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_492680:
    // 0x492680: 0x34a5ff80  ori         $a1, $a1, 0xFF80
    ctx->pc = 0x492680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65408);
label_492684:
    // 0x492684: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x492684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_492688:
    // 0x492688: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x492688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_49268c:
    // 0x49268c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_492690:
    // 0x492690: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x492690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_492694:
    // 0x492694: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x492694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_492698:
    // 0x492698: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x492698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_49269c:
    // 0x49269c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x49269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4926a0:
    // 0x4926a0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x4926a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_4926a4:
    // 0x4926a4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x4926a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_4926a8:
    // 0x4926a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4926ac:
    if (ctx->pc == 0x4926ACu) {
        ctx->pc = 0x4926ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4926A8u;
        // 0x4926ac: 0xdfa200f8  ld          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4926B0u;
        goto label_4926b0;
    }
    ctx->pc = 0x4926A8u;
    {
        const bool branch_taken_0x4926a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4926ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4926A8u;
        // 0x4926ac: 0xdfa200f8  ld          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4926a8) {
            ctx->pc = 0x4926E0u;
            goto label_4926e0;
        }
    }
    ctx->pc = 0x4926B0u;
label_4926b0:
    // 0x4926b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_4926b4:
    if (ctx->pc == 0x4926B4u) {
        ctx->pc = 0x4926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4926B0u;
        // 0x4926b4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4926B8u;
        goto label_4926b8;
    }
    ctx->pc = 0x4926B0u;
    {
        const bool branch_taken_0x4926b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4926B0u;
        // 0x4926b4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4926b0) {
            ctx->pc = 0x4926E4u;
            goto label_4926e4;
        }
    }
    ctx->pc = 0x4926B8u;
label_4926b8:
    // 0x4926b8: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x4926b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_4926bc:
    // 0x4926bc: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x4926bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4926c0:
    // 0x4926c0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x4926c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4926c4:
    // 0x4926c4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x4926c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_4926c8:
    // 0x4926c8: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x4926c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_4926cc:
    // 0x4926cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4926ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4926d0:
    // 0x4926d0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4926d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4926d4:
    // 0x4926d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4926d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4926d8:
    // 0x4926d8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x4926d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_4926dc:
    // 0x4926dc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x4926dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_4926e0:
    // 0x4926e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4926e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4926e4:
    // 0x4926e4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x4926e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_4926e8:
    // 0x4926e8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4926e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4926ec:
    // 0x4926ec: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x4926ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_4926f0:
    // 0x4926f0: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x4926f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4926f4:
    // 0x4926f4: 0x8e4f000c  lw          $t7, 0xC($s2)
    ctx->pc = 0x4926f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4926f8:
    // 0x4926f8: 0x7128a389  pcpyld      $s4, $t1, $t0
    ctx->pc = 0x4926f8u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_4926fc:
    // 0x4926fc: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x4926fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_492700:
    // 0x492700: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x492700u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_492704:
    // 0x492704: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x492704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_492708:
    // 0x492708: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x492708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_49270c:
    // 0x49270c: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x49270cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_492710:
    // 0x492710: 0x7128ab89  pcpyld      $s5, $t1, $t0
    ctx->pc = 0x492710u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492714:
    // 0x492714: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x492714u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492718:
    // 0x492718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x492718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49271c:
    // 0x49271c: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
label_492720:
    if (ctx->pc == 0x492720u) {
        ctx->pc = 0x492720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49271Cu;
        // 0x492720: 0x8e4e0010  lw          $t6, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492724u;
        goto label_492724;
    }
    ctx->pc = 0x49271Cu;
    {
        const bool branch_taken_0x49271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49271Cu;
        // 0x492720: 0x8e4e0010  lw          $t6, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49271c) {
            ctx->pc = 0x492A44u;
            goto label_492a44;
        }
    }
    ctx->pc = 0x492724u;
label_492724:
    // 0x492724: 0x241e0013  addiu       $fp, $zero, 0x13
    ctx->pc = 0x492724u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_492728:
    // 0x492728: 0x24190014  addiu       $t9, $zero, 0x14
    ctx->pc = 0x492728u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49272c:
    // 0x49272c: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x49272cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_492730:
    // 0x492730: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x492730u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492734:
    // 0x492734: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x492734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_492738:
    // 0x492738: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x492738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_49273c:
    // 0x49273c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x49273cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_492740:
    // 0x492740: 0x7d540000  sq          $s4, 0x0($t2)
    ctx->pc = 0x492740u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 20));
label_492744:
    // 0x492744: 0x1e4102a  slt         $v0, $t7, $a0
    ctx->pc = 0x492744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_492748:
    // 0x492748: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x492748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49274c:
    // 0x49274c: 0x1c5182a  slt         $v1, $t6, $a1
    ctx->pc = 0x49274cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_492750:
    // 0x492750: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x492750u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_492754:
    // 0x492754: 0x1e2300a  movz        $a2, $t7, $v0
    ctx->pc = 0x492754u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 15));
label_492758:
    // 0x492758: 0x1c3280a  movz        $a1, $t6, $v1
    ctx->pc = 0x492758u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 14));
label_49275c:
    // 0x49275c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x49275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_492760:
    // 0x492760: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_492764:
    if (ctx->pc == 0x492764u) {
        ctx->pc = 0x492764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492760u;
        // 0x492764: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492768u;
        goto label_492768;
    }
    ctx->pc = 0x492760u;
    {
        const bool branch_taken_0x492760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492760u;
        // 0x492764: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492760) {
            ctx->pc = 0x49277Cu;
            goto label_49277c;
        }
    }
    ctx->pc = 0x492768u;
label_492768:
    // 0x492768: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x492768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_49276c:
    // 0x49276c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x49276cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_492770:
    // 0x492770: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x492770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_492774:
    // 0x492774: 0x505e000a  beql        $v0, $fp, . + 4 + (0xA << 2)
label_492778:
    if (ctx->pc == 0x492778u) {
        ctx->pc = 0x492778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492774u;
        // 0x492778: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49277Cu;
        goto label_49277c;
    }
    ctx->pc = 0x492774u;
    {
        const bool branch_taken_0x492774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x492774) {
            ctx->pc = 0x492778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492774u;
            // 0x492778: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4927A0u;
            goto label_4927a0;
        }
    }
    ctx->pc = 0x49277Cu;
label_49277c:
    // 0x49277c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x49277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_492780:
    // 0x492780: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_492784:
    if (ctx->pc == 0x492784u) {
        ctx->pc = 0x492784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492780u;
        // 0x492784: 0x9e620000  lwu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492788u;
        goto label_492788;
    }
    ctx->pc = 0x492780u;
    {
        const bool branch_taken_0x492780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492780) {
            ctx->pc = 0x492784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492780u;
            // 0x492784: 0x9e620000  lwu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4927BCu;
            goto label_4927bc;
        }
    }
    ctx->pc = 0x492788u;
label_492788:
    // 0x492788: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x492788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_49278c:
    // 0x49278c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x49278cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_492790:
    // 0x492790: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x492790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_492794:
    // 0x492794: 0x54590009  bnel        $v0, $t9, . + 4 + (0x9 << 2)
label_492798:
    if (ctx->pc == 0x492798u) {
        ctx->pc = 0x492798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492794u;
        // 0x492798: 0x9e620000  lwu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49279Cu;
        goto label_49279c;
    }
    ctx->pc = 0x492794u;
    {
        const bool branch_taken_0x492794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        if (branch_taken_0x492794) {
            ctx->pc = 0x492798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492794u;
            // 0x492798: 0x9e620000  lwu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4927BCu;
            goto label_4927bc;
        }
    }
    ctx->pc = 0x49279Cu;
label_49279c:
    // 0x49279c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x49279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4927a0:
    // 0x4927a0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x4927a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_4927a4:
    // 0x4927a4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4927a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_4927a8:
    // 0x4927a8: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x4927a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4927ac:
    // 0x4927ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4927acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4927b0:
    // 0x4927b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4927b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4927b4:
    // 0x4927b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4927b8:
    if (ctx->pc == 0x4927B8u) {
        ctx->pc = 0x4927B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927B4u;
        // 0x4927b8: 0x3407a  dsrl        $t0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4927BCu;
        goto label_4927bc;
    }
    ctx->pc = 0x4927B4u;
    {
        const bool branch_taken_0x4927b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4927B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927B4u;
        // 0x4927b8: 0x3407a  dsrl        $t0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4927b4) {
            ctx->pc = 0x4927C4u;
            goto label_4927c4;
        }
    }
    ctx->pc = 0x4927BCu;
label_4927bc:
    // 0x4927bc: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x4927bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4927c0:
    // 0x4927c0: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x4927c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_4927c4:
    // 0x4927c4: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x4927c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_4927c8:
    // 0x4927c8: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x4927c8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_4927cc:
    // 0x4927cc: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x4927ccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_4927d0:
    // 0x4927d0: 0x92230036  lbu         $v1, 0x36($s1)
    ctx->pc = 0x4927d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_4927d4:
    // 0x4927d4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4927d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4927d8:
    // 0x4927d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4927dc:
    if (ctx->pc == 0x4927DCu) {
        ctx->pc = 0x4927DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927D8u;
        // 0x4927dc: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4927E0u;
        goto label_4927e0;
    }
    ctx->pc = 0x4927D8u;
    {
        const bool branch_taken_0x4927d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4927DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927D8u;
        // 0x4927dc: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4927d8) {
            ctx->pc = 0x4927F4u;
            goto label_4927f4;
        }
    }
    ctx->pc = 0x4927E0u;
label_4927e0:
    // 0x4927e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4927e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4927e4:
    // 0x4927e4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4927e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_4927e8:
    // 0x4927e8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4927e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4927ec:
    // 0x4927ec: 0x105e000a  beq         $v0, $fp, . + 4 + (0xA << 2)
label_4927f0:
    if (ctx->pc == 0x4927F0u) {
        ctx->pc = 0x4927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927ECu;
        // 0x4927f0: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4927F4u;
        goto label_4927f4;
    }
    ctx->pc = 0x4927ECu;
    {
        const bool branch_taken_0x4927ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x4927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927ECu;
        // 0x4927f0: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4927ec) {
            ctx->pc = 0x492818u;
            goto label_492818;
        }
    }
    ctx->pc = 0x4927F4u;
label_4927f4:
    // 0x4927f4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4927f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4927f8:
    // 0x4927f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4927fc:
    if (ctx->pc == 0x4927FCu) {
        ctx->pc = 0x4927FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927F8u;
        // 0x4927fc: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492800u;
        goto label_492800;
    }
    ctx->pc = 0x4927F8u;
    {
        const bool branch_taken_0x4927f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4927FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4927F8u;
        // 0x4927fc: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4927f8) {
            ctx->pc = 0x492828u;
            goto label_492828;
        }
    }
    ctx->pc = 0x492800u;
label_492800:
    // 0x492800: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x492800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_492804:
    // 0x492804: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x492804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_492808:
    // 0x492808: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x492808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_49280c:
    // 0x49280c: 0x14590006  bne         $v0, $t9, . + 4 + (0x6 << 2)
label_492810:
    if (ctx->pc == 0x492810u) {
        ctx->pc = 0x492810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49280Cu;
        // 0x492810: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492814u;
        goto label_492814;
    }
    ctx->pc = 0x49280Cu;
    {
        const bool branch_taken_0x49280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        ctx->pc = 0x492810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49280Cu;
        // 0x492810: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49280c) {
            ctx->pc = 0x492828u;
            goto label_492828;
        }
    }
    ctx->pc = 0x492814u;
label_492814:
    // 0x492814: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x492814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
label_492818:
    // 0x492818: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x492818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
label_49281c:
    // 0x49281c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_492820:
    // 0x492820: 0x10000002  b           . + 4 + (0x2 << 2)
label_492824:
    if (ctx->pc == 0x492824u) {
        ctx->pc = 0x492824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492820u;
        // 0x492824: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492828u;
        goto label_492828;
    }
    ctx->pc = 0x492820u;
    {
        const bool branch_taken_0x492820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492820u;
        // 0x492824: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492820) {
            ctx->pc = 0x49282Cu;
            goto label_49282c;
        }
    }
    ctx->pc = 0x492828u;
label_492828:
    // 0x492828: 0xc24025  or          $t0, $a2, $v0
    ctx->pc = 0x492828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_49282c:
    // 0x49282c: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x49282cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_492830:
    // 0x492830: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x492830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_492834:
    // 0x492834: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492834u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492838:
    // 0x492838: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x492838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_49283c:
    // 0x49283c: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x49283cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
label_492840:
    // 0x492840: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x492840u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_492844:
    // 0x492844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x492844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492848:
    // 0x492848: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x492848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_49284c:
    // 0x49284c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x49284cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_492850:
    // 0x492850: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492850u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492854:
    // 0x492854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x492854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492858:
    // 0x492858: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x492858u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_49285c:
    // 0x49285c: 0x2d82821  addu        $a1, $s6, $t8
    ctx->pc = 0x49285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
label_492860:
    // 0x492860: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x492860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_492864:
    // 0x492864: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x492864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_492868:
    // 0x492868: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x492868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49286c:
    // 0x49286c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x49286cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_492870:
    // 0x492870: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x492870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_492874:
    // 0x492874: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x492874u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_492878:
    // 0x492878: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x492878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_49287c:
    // 0x49287c: 0x70883b89  pcpyld      $a3, $a0, $t0
    ctx->pc = 0x49287cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
label_492880:
    // 0x492880: 0x31027fff  andi        $v0, $t0, 0x7FFF
    ctx->pc = 0x492880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
label_492884:
    // 0x492884: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x492884u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_492888:
    // 0x492888: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x492888u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_49288c:
    // 0x49288c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x49288cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_492890:
    // 0x492890: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x492890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_492894:
    // 0x492894: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_492898:
    if (ctx->pc == 0x492898u) {
        ctx->pc = 0x492898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492894u;
        // 0x492898: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49289Cu;
        goto label_49289c;
    }
    ctx->pc = 0x492894u;
    {
        const bool branch_taken_0x492894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492894u;
        // 0x492898: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492894) {
            ctx->pc = 0x4929D8u;
            goto label_4929d8;
        }
    }
    ctx->pc = 0x49289Cu;
label_49289c:
    // 0x49289c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x49289cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_4928a0:
    // 0x4928a0: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x4928a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_4928a4:
    // 0x4928a4: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x4928a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
label_4928a8:
    // 0x4928a8: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x4928a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
label_4928ac:
    // 0x4928ac: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x4928acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_4928b0:
    // 0x4928b0: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x4928b0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_4928b4:
    // 0x4928b4: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x4928b4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_4928b8:
    // 0x4928b8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x4928b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_4928bc:
    // 0x4928bc: 0x7d750000  sq          $s5, 0x0($t3)
    ctx->pc = 0x4928bcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 21));
label_4928c0:
    // 0x4928c0: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x4928c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_4928c4:
    // 0x4928c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4928c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4928c8:
    // 0x4928c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4928cc:
    if (ctx->pc == 0x4928CCu) {
        ctx->pc = 0x4928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4928C8u;
        // 0x4928cc: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4928D0u;
        goto label_4928d0;
    }
    ctx->pc = 0x4928C8u;
    {
        const bool branch_taken_0x4928c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4928C8u;
        // 0x4928cc: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4928c8) {
            ctx->pc = 0x492908u;
            goto label_492908;
        }
    }
    ctx->pc = 0x4928D0u;
label_4928d0:
    // 0x4928d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4928d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4928d4:
    // 0x4928d4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4928d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_4928d8:
    // 0x4928d8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4928d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4928dc:
    // 0x4928dc: 0x545e000b  bnel        $v0, $fp, . + 4 + (0xB << 2)
label_4928e0:
    if (ctx->pc == 0x4928E0u) {
        ctx->pc = 0x4928E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4928DCu;
        // 0x4928e0: 0x92220036  lbu         $v0, 0x36($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4928E4u;
        goto label_4928e4;
    }
    ctx->pc = 0x4928DCu;
    {
        const bool branch_taken_0x4928dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x4928dc) {
            ctx->pc = 0x4928E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4928DCu;
            // 0x4928e0: 0x92220036  lbu         $v0, 0x36($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49290Cu;
            goto label_49290c;
        }
    }
    ctx->pc = 0x4928E4u;
label_4928e4:
    // 0x4928e4: 0xdda20040  ld          $v0, 0x40($t5)
    ctx->pc = 0x4928e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_4928e8:
    // 0x4928e8: 0xdda40000  ld          $a0, 0x0($t5)
    ctx->pc = 0x4928e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_4928ec:
    // 0x4928ec: 0x3042003e  andi        $v0, $v0, 0x3E
    ctx->pc = 0x4928ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)62);
label_4928f0:
    // 0x4928f0: 0x21bf8  dsll        $v1, $v0, 15
    ctx->pc = 0x4928f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 15);
label_4928f4:
    // 0x4928f4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4928f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4928f8:
    // 0x4928f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4928f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4928fc:
    // 0x4928fc: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x4928fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_492900:
    // 0x492900: 0x10000024  b           . + 4 + (0x24 << 2)
label_492904:
    if (ctx->pc == 0x492904u) {
        ctx->pc = 0x492904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492900u;
        // 0x492904: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492908u;
        goto label_492908;
    }
    ctx->pc = 0x492900u;
    {
        const bool branch_taken_0x492900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492900u;
        // 0x492904: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492900) {
            ctx->pc = 0x492994u;
            goto label_492994;
        }
    }
    ctx->pc = 0x492908u;
label_492908:
    // 0x492908: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x492908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_49290c:
    // 0x49290c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x49290cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_492910:
    // 0x492910: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_492914:
    if (ctx->pc == 0x492914u) {
        ctx->pc = 0x492914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492910u;
        // 0x492914: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492918u;
        goto label_492918;
    }
    ctx->pc = 0x492910u;
    {
        const bool branch_taken_0x492910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492910u;
        // 0x492914: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492910) {
            ctx->pc = 0x492960u;
            goto label_492960;
        }
    }
    ctx->pc = 0x492918u;
label_492918:
    // 0x492918: 0x51502  srl         $v0, $a1, 20
    ctx->pc = 0x492918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
label_49291c:
    // 0x49291c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x49291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_492920:
    // 0x492920: 0x54590010  bnel        $v0, $t9, . + 4 + (0x10 << 2)
label_492924:
    if (ctx->pc == 0x492924u) {
        ctx->pc = 0x492924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492920u;
        // 0x492924: 0xdda60040  ld          $a2, 0x40($t5) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492928u;
        goto label_492928;
    }
    ctx->pc = 0x492920u;
    {
        const bool branch_taken_0x492920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        if (branch_taken_0x492920) {
            ctx->pc = 0x492924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492920u;
            // 0x492924: 0xdda60040  ld          $a2, 0x40($t5) (Delay Slot)
            SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492964u;
            goto label_492964;
        }
    }
    ctx->pc = 0x492928u;
label_492928:
    // 0x492928: 0xdda40040  ld          $a0, 0x40($t5)
    ctx->pc = 0x492928u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_49292c:
    // 0x49292c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x49292cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_492930:
    // 0x492930: 0xdda30000  ld          $v1, 0x0($t5)
    ctx->pc = 0x492930u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_492934:
    // 0x492934: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x492934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_492938:
    // 0x492938: 0x632bc  dsll32      $a2, $a2, 10
    ctx->pc = 0x492938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 10));
label_49293c:
    // 0x49293c: 0x3084003e  andi        $a0, $a0, 0x3E
    ctx->pc = 0x49293cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)62);
label_492940:
    // 0x492940: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x492940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_492944:
    // 0x492944: 0x413f8  dsll        $v0, $a0, 15
    ctx->pc = 0x492944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 15);
label_492948:
    // 0x492948: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x492948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_49294c:
    // 0x49294c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x49294cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_492950:
    // 0x492950: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x492950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_492954:
    // 0x492954: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x492954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_492958:
    // 0x492958: 0x1000000e  b           . + 4 + (0xE << 2)
label_49295c:
    if (ctx->pc == 0x49295Cu) {
        ctx->pc = 0x49295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492958u;
        // 0x49295c: 0x464025  or          $t0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492960u;
        goto label_492960;
    }
    ctx->pc = 0x492958u;
    {
        const bool branch_taken_0x492958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492958u;
        // 0x49295c: 0x464025  or          $t0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492958) {
            ctx->pc = 0x492994u;
            goto label_492994;
        }
    }
    ctx->pc = 0x492960u;
label_492960:
    // 0x492960: 0xdda60040  ld          $a2, 0x40($t5)
    ctx->pc = 0x492960u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_492964:
    // 0x492964: 0x52d02  srl         $a1, $a1, 20
    ctx->pc = 0x492964u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
label_492968:
    // 0x492968: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x492968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_49296c:
    // 0x49296c: 0xdda40000  ld          $a0, 0x0($t5)
    ctx->pc = 0x49296cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_492970:
    // 0x492970: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x492970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_492974:
    // 0x492974: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x492974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_492978:
    // 0x492978: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x492978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_49297c:
    // 0x49297c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x49297cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_492980:
    // 0x492980: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x492980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_492984:
    // 0x492984: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x492984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_492988:
    // 0x492988: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x492988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_49298c:
    // 0x49298c: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x49298cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_492990:
    // 0x492990: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x492990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_492994:
    // 0x492994: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x492994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_492998:
    // 0x492998: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x492998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_49299c:
    // 0x49299c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x49299cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4929a0:
    // 0x4929a0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x4929a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_4929a4:
    // 0x4929a4: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x4929a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
label_4929a8:
    // 0x4929a8: 0x2542ffb0  addiu       $v0, $t2, -0x50
    ctx->pc = 0x4929a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
label_4929ac:
    // 0x4929ac: 0x70a83b89  pcpyld      $a3, $a1, $t0
    ctx->pc = 0x4929acu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
label_4929b0:
    // 0x4929b0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4929b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_4929b4:
    // 0x4929b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4929b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4929b8:
    // 0x4929b8: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x4929b8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_4929bc:
    // 0x4929bc: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x4929bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4929c0:
    // 0x4929c0: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x4929c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
label_4929c4:
    // 0x4929c4: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x4929c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_4929c8:
    // 0x4929c8: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x4929c8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_4929cc:
    // 0x4929cc: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x4929ccu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_4929d0:
    // 0x4929d0: 0x10000010  b           . + 4 + (0x10 << 2)
label_4929d4:
    if (ctx->pc == 0x4929D4u) {
        ctx->pc = 0x4929D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4929D0u;
        // 0x4929d4: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4929D8u;
        goto label_4929d8;
    }
    ctx->pc = 0x4929D0u;
    {
        const bool branch_taken_0x4929d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4929D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4929D0u;
        // 0x4929d4: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4929d0) {
            ctx->pc = 0x492A14u;
            goto label_492a14;
        }
    }
    ctx->pc = 0x4929D8u;
label_4929d8:
    // 0x4929d8: 0x9562fff0  lhu         $v0, -0x10($t3)
    ctx->pc = 0x4929d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967280)));
label_4929dc:
    // 0x4929dc: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x4929dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_4929e0:
    // 0x4929e0: 0x9564fffc  lhu         $a0, -0x4($t3)
    ctx->pc = 0x4929e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967292)));
label_4929e4:
    // 0x4929e4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x4929e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_4929e8:
    // 0x4929e8: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x4929e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_4929ec:
    // 0x4929ec: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x4929ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
label_4929f0:
    // 0x4929f0: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4929f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4929f4:
    // 0x4929f4: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x4929f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
label_4929f8:
    // 0x4929f8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x4929f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
label_4929fc:
    // 0x4929fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4929fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_492a00:
    // 0x492a00: 0x864025  or          $t0, $a0, $a2
    ctx->pc = 0x492a00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_492a04:
    // 0x492a04: 0xad63fff0  sw          $v1, -0x10($t3)
    ctx->pc = 0x492a04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967280), GPR_U32(ctx, 3));
label_492a08:
    // 0x492a08: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x492a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_492a0c:
    // 0x492a0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x492a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_492a10:
    // 0x492a10: 0xad62fffc  sw          $v0, -0x4($t3)
    ctx->pc = 0x492a10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967292), GPR_U32(ctx, 2));
label_492a14:
    // 0x492a14: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x492a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_492a18:
    // 0x492a18: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x492a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_492a1c:
    // 0x492a1c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x492a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_492a20:
    // 0x492a20: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x492a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_492a24:
    // 0x492a24: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x492a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_492a28:
    // 0x492a28: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x492a28u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_492a2c:
    // 0x492a2c: 0x6c182a  slt         $v1, $v1, $t4
    ctx->pc = 0x492a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_492a30:
    // 0x492a30: 0xe7043  sra         $t6, $t6, 1
    ctx->pc = 0x492a30u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 1));
label_492a34:
    // 0x492a34: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x492a34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_492a38:
    // 0x492a38: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x492a38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
label_492a3c:
    // 0x492a3c: 0x1060ff3e  beqz        $v1, . + 4 + (-0xC2 << 2)
label_492a40:
    if (ctx->pc == 0x492A40u) {
        ctx->pc = 0x492A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A3Cu;
        // 0x492a40: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492A44u;
        goto label_492a44;
    }
    ctx->pc = 0x492A3Cu;
    {
        const bool branch_taken_0x492a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x492A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A3Cu;
        // 0x492a40: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492a3c) {
            ctx->pc = 0x492738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_492738;
        }
    }
    ctx->pc = 0x492A44u;
label_492a44:
    // 0x492a44: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x492a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492a48:
    // 0x492a48: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_492a4c:
    if (ctx->pc == 0x492A4Cu) {
        ctx->pc = 0x492A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A48u;
        // 0x492a4c: 0xdfa300f8  ld          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492A50u;
        goto label_492a50;
    }
    ctx->pc = 0x492A48u;
    {
        const bool branch_taken_0x492a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A48u;
        // 0x492a4c: 0xdfa300f8  ld          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492a48) {
            ctx->pc = 0x492C24u;
            goto label_492c24;
        }
    }
    ctx->pc = 0x492A50u;
label_492a50:
    // 0x492a50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_492a54:
    if (ctx->pc == 0x492A54u) {
        ctx->pc = 0x492A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A50u;
        // 0x492a54: 0x25420050  addiu       $v0, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492A58u;
        goto label_492a58;
    }
    ctx->pc = 0x492A50u;
    {
        const bool branch_taken_0x492a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x492A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A50u;
        // 0x492a54: 0x25420050  addiu       $v0, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492a50) {
            ctx->pc = 0x492A5Cu;
            goto label_492a5c;
        }
    }
    ctx->pc = 0x492A58u;
label_492a58:
    // 0x492a58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x492a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_492a5c:
    // 0x492a5c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x492a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_492a60:
    // 0x492a60: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x492a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_492a64:
    // 0x492a64: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x492a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_492a68:
    // 0x492a68: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x492a68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_492a6c:
    // 0x492a6c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x492a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_492a70:
    // 0x492a70: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x492a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492a74:
    // 0x492a74: 0xdfa400f8  ld          $a0, 0xF8($sp)
    ctx->pc = 0x492a74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_492a78:
    // 0x492a78: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x492a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_492a7c:
    // 0x492a7c: 0x71243b89  pcpyld      $a3, $t1, $a0
    ctx->pc = 0x492a7cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
label_492a80:
    // 0x492a80: 0x7d47ffc0  sq          $a3, -0x40($t2)
    ctx->pc = 0x492a80u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967232), GPR_VEC(ctx, 7));
label_492a84:
    // 0x492a84: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x492a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_492a88:
    // 0x492a88: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x492a88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_492a8c:
    // 0x492a8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x492a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492a90:
    // 0x492a90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x492a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_492a94:
    // 0x492a94: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492a94u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492a98:
    // 0x492a98: 0x7d47ffd0  sq          $a3, -0x30($t2)
    ctx->pc = 0x492a98u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967248), GPR_VEC(ctx, 7));
label_492a9c:
    // 0x492a9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x492a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492aa0:
    // 0x492aa0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x492aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492aa4:
    // 0x492aa4: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x492aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_492aa8:
    // 0x492aa8: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492aa8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492aac:
    // 0x492aac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x492aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_492ab0:
    // 0x492ab0: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x492ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
label_492ab4:
    // 0x492ab4: 0x7d47ffe0  sq          $a3, -0x20($t2)
    ctx->pc = 0x492ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967264), GPR_VEC(ctx, 7));
label_492ab8:
    // 0x492ab8: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x492ab8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
label_492abc:
    // 0x492abc: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x492abcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
label_492ac0:
    // 0x492ac0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x492ac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_492ac4:
    // 0x492ac4: 0x7d54ffb0  sq          $s4, -0x50($t2)
    ctx->pc = 0x492ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967216), GPR_VEC(ctx, 20));
label_492ac8:
    // 0x492ac8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x492ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_492acc:
    // 0x492acc: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x492accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_492ad0:
    // 0x492ad0: 0x70883b89  pcpyld      $a3, $a0, $t0
    ctx->pc = 0x492ad0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
label_492ad4:
    // 0x492ad4: 0x31027fff  andi        $v0, $t0, 0x7FFF
    ctx->pc = 0x492ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
label_492ad8:
    // 0x492ad8: 0x7d47fff0  sq          $a3, -0x10($t2)
    ctx->pc = 0x492ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967280), GPR_VEC(ctx, 7));
label_492adc:
    // 0x492adc: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x492adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_492ae0:
    // 0x492ae0: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x492ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_492ae4:
    // 0x492ae4: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492ae4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492ae8:
    // 0x492ae8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x492ae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_492aec:
    // 0x492aec: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x492aecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_492af0:
    // 0x492af0: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x492af0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_492af4:
    // 0x492af4: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x492af4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_492af8:
    // 0x492af8: 0x7d750000  sq          $s5, 0x0($t3)
    ctx->pc = 0x492af8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 21));
label_492afc:
    // 0x492afc: 0xdfa400f8  ld          $a0, 0xF8($sp)
    ctx->pc = 0x492afcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_492b00:
    // 0x492b00: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_492b04:
    if (ctx->pc == 0x492B04u) {
        ctx->pc = 0x492B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492B00u;
        // 0x492b04: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492B08u;
        goto label_492b08;
    }
    ctx->pc = 0x492B00u;
    {
        const bool branch_taken_0x492b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x492B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492B00u;
        // 0x492b04: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492b00) {
            ctx->pc = 0x492B7Cu;
            goto label_492b7c;
        }
    }
    ctx->pc = 0x492B08u;
label_492b08:
    // 0x492b08: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x492b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_492b0c:
    // 0x492b0c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x492b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_492b10:
    // 0x492b10: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_492b14:
    if (ctx->pc == 0x492B14u) {
        ctx->pc = 0x492B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492B10u;
        // 0x492b14: 0x7967ffc0  lq          $a3, -0x40($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 4294967232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492B18u;
        goto label_492b18;
    }
    ctx->pc = 0x492B10u;
    {
        const bool branch_taken_0x492b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492b10) {
            ctx->pc = 0x492B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492B10u;
            // 0x492b14: 0x7967ffc0  lq          $a3, -0x40($t3) (Delay Slot)
            SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 4294967232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492BBCu;
            goto label_492bbc;
        }
    }
    ctx->pc = 0x492B18u;
label_492b18:
    // 0x492b18: 0x7962ffc0  lq          $v0, -0x40($t3)
    ctx->pc = 0x492b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 4294967232)));
label_492b1c:
    // 0x492b1c: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x492b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_492b20:
    // 0x492b20: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x492b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_492b24:
    // 0x492b24: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x492b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_492b28:
    // 0x492b28: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x492b28u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
label_492b2c:
    // 0x492b2c: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x492b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
label_492b30:
    // 0x492b30: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x492b30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_492b34:
    // 0x492b34: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x492b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_492b38:
    // 0x492b38: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x492b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_492b3c:
    // 0x492b3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x492b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_492b40:
    // 0x492b40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492b44:
    // 0x492b44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x492b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_492b48:
    // 0x492b48: 0x9563ffc0  lhu         $v1, -0x40($t3)
    ctx->pc = 0x492b48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967232)));
label_492b4c:
    // 0x492b4c: 0x9562ffcc  lhu         $v0, -0x34($t3)
    ctx->pc = 0x492b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967244)));
label_492b50:
    // 0x492b50: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x492b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_492b54:
    // 0x492b54: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x492b54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_492b58:
    // 0x492b58: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x492b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_492b5c:
    // 0x492b5c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x492b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
label_492b60:
    // 0x492b60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x492b60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_492b64:
    // 0x492b64: 0x474025  or          $t0, $v0, $a3
    ctx->pc = 0x492b64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_492b68:
    // 0x492b68: 0xad63ffc0  sw          $v1, -0x40($t3)
    ctx->pc = 0x492b68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967232), GPR_U32(ctx, 3));
label_492b6c:
    // 0x492b6c: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x492b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_492b70:
    // 0x492b70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x492b70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_492b74:
    // 0x492b74: 0x10000014  b           . + 4 + (0x14 << 2)
label_492b78:
    if (ctx->pc == 0x492B78u) {
        ctx->pc = 0x492B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492B74u;
        // 0x492b78: 0xad62ffcc  sw          $v0, -0x34($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294967244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492B7Cu;
        goto label_492b7c;
    }
    ctx->pc = 0x492B74u;
    {
        const bool branch_taken_0x492b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492B74u;
        // 0x492b78: 0xad62ffcc  sw          $v0, -0x34($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294967244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492b74) {
            ctx->pc = 0x492BC8u;
            goto label_492bc8;
        }
    }
    ctx->pc = 0x492B7Cu;
label_492b7c:
    // 0x492b7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x492b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_492b80:
    // 0x492b80: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x492b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_492b84:
    // 0x492b84: 0x9e240010  lwu         $a0, 0x10($s1)
    ctx->pc = 0x492b84u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_492b88:
    // 0x492b88: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x492b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_492b8c:
    // 0x492b8c: 0x6307c  dsll32      $a2, $a2, 1
    ctx->pc = 0x492b8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 1));
label_492b90:
    // 0x492b90: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x492b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_492b94:
    // 0x492b94: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x492b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_492b98:
    // 0x492b98: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x492b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_492b9c:
    // 0x492b9c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x492b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_492ba0:
    // 0x492ba0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x492ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_492ba4:
    // 0x492ba4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x492ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_492ba8:
    // 0x492ba8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x492ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_492bac:
    // 0x492bac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x492bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_492bb0:
    // 0x492bb0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x492bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_492bb4:
    // 0x492bb4: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x492bb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_492bb8:
    // 0x492bb8: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x492bb8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_492bbc:
    // 0x492bbc: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x492bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_492bc0:
    // 0x492bc0: 0x26090005  addiu       $t1, $s0, 0x5
    ctx->pc = 0x492bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_492bc4:
    // 0x492bc4: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x492bc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_492bc8:
    // 0x492bc8: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x492bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_492bcc:
    // 0x492bcc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x492bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_492bd0:
    // 0x492bd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_492bd4:
    if (ctx->pc == 0x492BD4u) {
        ctx->pc = 0x492BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BD0u;
        // 0x492bd4: 0x2542ffb0  addiu       $v0, $t2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492BD8u;
        goto label_492bd8;
    }
    ctx->pc = 0x492BD0u;
    {
        const bool branch_taken_0x492bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BD0u;
        // 0x492bd4: 0x2542ffb0  addiu       $v0, $t2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492bd0) {
            ctx->pc = 0x492C00u;
            goto label_492c00;
        }
    }
    ctx->pc = 0x492BD8u;
label_492bd8:
    // 0x492bd8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x492bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_492bdc:
    // 0x492bdc: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x492bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_492be0:
    // 0x492be0: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x492be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_492be4:
    // 0x492be4: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x492be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_492be8:
    // 0x492be8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x492be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_492bec:
    // 0x492bec: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x492becu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492bf0:
    // 0x492bf0: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x492bf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_492bf4:
    // 0x492bf4: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492bf4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492bf8:
    // 0x492bf8: 0x1000000a  b           . + 4 + (0xA << 2)
label_492bfc:
    if (ctx->pc == 0x492BFCu) {
        ctx->pc = 0x492BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BF8u;
        // 0x492bfc: 0x7d670000  sq          $a3, 0x0($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C00u;
        goto label_492c00;
    }
    ctx->pc = 0x492BF8u;
    {
        const bool branch_taken_0x492bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BF8u;
        // 0x492bfc: 0x7d670000  sq          $a3, 0x0($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492bf8) {
            ctx->pc = 0x492C24u;
            goto label_492c24;
        }
    }
    ctx->pc = 0x492C00u;
label_492c00:
    // 0x492c00: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x492c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_492c04:
    // 0x492c04: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x492c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_492c08:
    // 0x492c08: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x492c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_492c0c:
    // 0x492c0c: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x492c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_492c10:
    // 0x492c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x492c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_492c14:
    // 0x492c14: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x492c14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492c18:
    // 0x492c18: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x492c18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_492c1c:
    // 0x492c1c: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x492c1cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_492c20:
    // 0x492c20: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x492c20u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_492c24:
    // 0x492c24: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x492c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_492c28:
    // 0x492c28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_492c2c:
    if (ctx->pc == 0x492C2Cu) {
        ctx->pc = 0x492C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C28u;
        // 0x492c2c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C30u;
        goto label_492c30;
    }
    ctx->pc = 0x492C28u;
    {
        const bool branch_taken_0x492c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C28u;
        // 0x492c2c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c28) {
            ctx->pc = 0x492C48u;
            goto label_492c48;
        }
    }
    ctx->pc = 0x492C30u;
label_492c30:
    // 0x492c30: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x492c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492c34:
    // 0x492c34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x492c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_492c38:
    // 0x492c38: 0xc10f644  jal         func_43D910
label_492c3c:
    if (ctx->pc == 0x492C3Cu) {
        ctx->pc = 0x492C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C38u;
        // 0x492c3c: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C40u;
        goto label_492c40;
    }
    ctx->pc = 0x492C38u;
    SET_GPR_U32(ctx, 31, 0x492C40u);
    ctx->pc = 0x492C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492C38u;
    // 0x492c3c: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x492C38u, 0x492C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C40u;
label_492c40:
    // 0x492c40: 0x1000003e  b           . + 4 + (0x3E << 2)
label_492c44:
    if (ctx->pc == 0x492C44u) {
        ctx->pc = 0x492C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C40u;
        // 0x492c44: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C48u;
        goto label_492c48;
    }
    ctx->pc = 0x492C40u;
    {
        const bool branch_taken_0x492c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C40u;
        // 0x492c44: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c40) {
            ctx->pc = 0x492D3Cu;
            goto label_492d3c;
        }
    }
    ctx->pc = 0x492C48u;
label_492c48:
    // 0x492c48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x492c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_492c4c:
    // 0x492c4c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x492c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492c50:
    // 0x492c50: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x492c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_492c54:
    // 0x492c54: 0x972821  addu        $a1, $a0, $s7
    ctx->pc = 0x492c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_492c58:
    // 0x492c58: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x492c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_492c5c:
    // 0x492c5c: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x492c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_492c60:
    // 0x492c60: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x492c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_492c64:
    // 0x492c64: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x492c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_492c68:
    // 0x492c68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x492c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_492c6c:
    // 0x492c6c: 0xc10f644  jal         func_43D910
label_492c70:
    if (ctx->pc == 0x492C70u) {
        ctx->pc = 0x492C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C6Cu;
        // 0x492c70: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C74u;
        goto label_492c74;
    }
    ctx->pc = 0x492C6Cu;
    SET_GPR_U32(ctx, 31, 0x492C74u);
    ctx->pc = 0x492C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492C6Cu;
    // 0x492c70: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x492C6Cu, 0x492C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C74u;
label_492c74:
    // 0x492c74: 0x10000031  b           . + 4 + (0x31 << 2)
label_492c78:
    if (ctx->pc == 0x492C78u) {
        ctx->pc = 0x492C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C74u;
        // 0x492c78: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C7Cu;
        goto label_492c7c;
    }
    ctx->pc = 0x492C74u;
    {
        const bool branch_taken_0x492c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C74u;
        // 0x492c78: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c74) {
            ctx->pc = 0x492D3Cu;
            goto label_492d3c;
        }
    }
    ctx->pc = 0x492C7Cu;
label_492c7c:
    // 0x492c7c: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x492c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_492c80:
    // 0x492c80: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x492c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
label_492c84:
    // 0x492c84: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x492c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_492c88:
    // 0x492c88: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_492c8c:
    if (ctx->pc == 0x492C8Cu) {
        ctx->pc = 0x492C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C88u;
        // 0x492c8c: 0xa2420021  sb          $v0, 0x21($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492C90u;
        goto label_492c90;
    }
    ctx->pc = 0x492C88u;
    {
        const bool branch_taken_0x492c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C88u;
        // 0x492c8c: 0xa2420021  sb          $v0, 0x21($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c88) {
            ctx->pc = 0x492D2Cu;
            goto label_492d2c;
        }
    }
    ctx->pc = 0x492C90u;
label_492c90:
    // 0x492c90: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x492c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_492c94:
    // 0x492c94: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x492c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492c98:
    // 0x492c98: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x492c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492c9c:
    // 0x492c9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x492c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_492ca0:
    // 0x492ca0: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x492ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_492ca4:
    // 0x492ca4: 0x34a50411  ori         $a1, $a1, 0x411
    ctx->pc = 0x492ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
label_492ca8:
    // 0x492ca8: 0x40f809  jalr        $v0
label_492cac:
    if (ctx->pc == 0x492CACu) {
        ctx->pc = 0x492CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CA8u;
        // 0x492cac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492CB0u;
        goto label_492cb0;
    }
    ctx->pc = 0x492CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492CB0u);
        ctx->pc = 0x492CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CA8u;
        // 0x492cac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492CA8u, 0x492CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492CB0u;
label_492cb0:
    // 0x492cb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x492cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492cb4:
    // 0x492cb4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_492cb8:
    if (ctx->pc == 0x492CB8u) {
        ctx->pc = 0x492CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CB4u;
        // 0x492cb8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492CBCu;
        goto label_492cbc;
    }
    ctx->pc = 0x492CB4u;
    {
        const bool branch_taken_0x492cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CB4u;
        // 0x492cb8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492cb4) {
            ctx->pc = 0x492CE8u;
            goto label_492ce8;
        }
    }
    ctx->pc = 0x492CBCu;
label_492cbc:
    // 0x492cbc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x492cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492cc0:
    // 0x492cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492cc4:
    // 0x492cc4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x492cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492cc8:
    // 0x492cc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x492cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_492ccc:
    // 0x492ccc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x492cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_492cd0:
    // 0x492cd0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x492cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_492cd4:
    // 0x492cd4: 0xc11eff2  jal         func_47BFC8
label_492cd8:
    if (ctx->pc == 0x492CD8u) {
        ctx->pc = 0x492CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CD4u;
        // 0x492cd8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492CDCu;
        goto label_492cdc;
    }
    ctx->pc = 0x492CD4u;
    SET_GPR_U32(ctx, 31, 0x492CDCu);
    ctx->pc = 0x492CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492CD4u;
    // 0x492cd8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x492CD4u, 0x492CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492CDCu;
label_492cdc:
    // 0x492cdc: 0x1000008c  b           . + 4 + (0x8C << 2)
label_492ce0:
    if (ctx->pc == 0x492CE0u) {
        ctx->pc = 0x492CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CDCu;
        // 0x492ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492CE4u;
        goto label_492ce4;
    }
    ctx->pc = 0x492CDCu;
    {
        const bool branch_taken_0x492cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CDCu;
        // 0x492ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492cdc) {
            ctx->pc = 0x492F10u;
            goto label_492f10;
        }
    }
    ctx->pc = 0x492CE4u;
label_492ce4:
    // 0x492ce4: 0x0  nop
    ctx->pc = 0x492ce4u;
    // NOP
label_492ce8:
    // 0x492ce8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x492ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_492cec:
    // 0x492cec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_492cf0:
    if (ctx->pc == 0x492CF0u) {
        ctx->pc = 0x492CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CECu;
        // 0x492cf0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492CF4u;
        goto label_492cf4;
    }
    ctx->pc = 0x492CECu;
    {
        const bool branch_taken_0x492cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492cec) {
            ctx->pc = 0x492CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492CECu;
            // 0x492cf0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492D04u;
            goto label_492d04;
        }
    }
    ctx->pc = 0x492CF4u;
label_492cf4:
    // 0x492cf4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x492cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492cf8:
    // 0x492cf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x492cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_492cfc:
    // 0x492cfc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x492cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_492d00:
    // 0x492d00: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x492d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_492d04:
    // 0x492d04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x492d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_492d08:
    // 0x492d08: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_492d0c:
    if (ctx->pc == 0x492D0Cu) {
        ctx->pc = 0x492D10u;
        goto label_492d10;
    }
    ctx->pc = 0x492D08u;
    {
        const bool branch_taken_0x492d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x492d08) {
            ctx->pc = 0x492D1Cu;
            goto label_492d1c;
        }
    }
    ctx->pc = 0x492D10u;
label_492d10:
    // 0x492d10: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x492d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_492d14:
    // 0x492d14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x492d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_492d18:
    // 0x492d18: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x492d18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
label_492d1c:
    // 0x492d1c: 0xc128890  jal         func_4A2240
label_492d20:
    if (ctx->pc == 0x492D20u) {
        ctx->pc = 0x492D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D1Cu;
        // 0x492d20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492D24u;
        goto label_492d24;
    }
    ctx->pc = 0x492D1Cu;
    SET_GPR_U32(ctx, 31, 0x492D24u);
    ctx->pc = 0x492D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492D1Cu;
    // 0x492d20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2240u, 0x492D1Cu, 0x492D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D24u;
label_492d24:
    // 0x492d24: 0x10000005  b           . + 4 + (0x5 << 2)
label_492d28:
    if (ctx->pc == 0x492D28u) {
        ctx->pc = 0x492D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D24u;
        // 0x492d28: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492D2Cu;
        goto label_492d2c;
    }
    ctx->pc = 0x492D24u;
    {
        const bool branch_taken_0x492d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D24u;
        // 0x492d28: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d24) {
            ctx->pc = 0x492D3Cu;
            goto label_492d3c;
        }
    }
    ctx->pc = 0x492D2Cu;
label_492d2c:
    // 0x492d2c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x492d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_492d30:
    // 0x492d30: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x492d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_492d34:
    // 0x492d34: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x492d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_492d38:
    // 0x492d38: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x492d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_492d3c:
    // 0x492d3c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x492d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_492d40:
    // 0x492d40: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x492d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
label_492d44:
    // 0x492d44: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x492d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_492d48:
    // 0x492d48: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x492d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_492d4c:
    // 0x492d4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_492d50:
    // 0x492d50: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_492d54:
    if (ctx->pc == 0x492D54u) {
        ctx->pc = 0x492D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D50u;
        // 0x492d54: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492D58u;
        goto label_492d58;
    }
    ctx->pc = 0x492D50u;
    {
        const bool branch_taken_0x492d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D50u;
        // 0x492d54: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d50) {
            ctx->pc = 0x492F6Cu;
            goto label_492f6c;
        }
    }
    ctx->pc = 0x492D58u;
label_492d58:
    // 0x492d58: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x492d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_492d5c:
    // 0x492d5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x492d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_492d60:
    // 0x492d60: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_492d64:
    if (ctx->pc == 0x492D64u) {
        ctx->pc = 0x492D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D60u;
        // 0x492d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492D68u;
        goto label_492d68;
    }
    ctx->pc = 0x492D60u;
    {
        const bool branch_taken_0x492d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D60u;
        // 0x492d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d60) {
            ctx->pc = 0x492F70u;
            goto label_492f70;
        }
    }
    ctx->pc = 0x492D68u;
label_492d68:
    // 0x492d68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x492d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_492d6c:
    // 0x492d6c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x492d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_492d70:
    // 0x492d70: 0x1000007d  b           . + 4 + (0x7D << 2)
label_492d74:
    if (ctx->pc == 0x492D74u) {
        ctx->pc = 0x492D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D70u;
        // 0x492d74: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492D78u;
        goto label_492d78;
    }
    ctx->pc = 0x492D70u;
    {
        const bool branch_taken_0x492d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D70u;
        // 0x492d74: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d70) {
            ctx->pc = 0x492F68u;
            goto label_492f68;
        }
    }
    ctx->pc = 0x492D78u;
label_492d78:
    // 0x492d78: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x492d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_492d7c:
    // 0x492d7c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x492d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_492d80:
    // 0x492d80: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x492d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_492d84:
    // 0x492d84: 0x24a5f5f0  addiu       $a1, $a1, -0xA10
    ctx->pc = 0x492d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964720));
label_492d88:
    // 0x492d88: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x492d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_492d8c:
    // 0x492d8c: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x492d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_492d90:
    // 0x492d90: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x492d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_492d94:
    // 0x492d94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x492d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_492d98:
    // 0x492d98: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x492d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_492d9c:
    // 0x492d9c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x492d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_492da0:
    // 0x492da0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x492da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_492da4:
    // 0x492da4: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x492da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
label_492da8:
    // 0x492da8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x492da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_492dac:
    // 0x492dac: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x492dacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_492db0:
    // 0x492db0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x492db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_492db4:
    // 0x492db4: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x492db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_492db8:
    // 0x492db8: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x492db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_492dbc:
    // 0x492dbc: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x492dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
label_492dc0:
    // 0x492dc0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_492dc4:
    if (ctx->pc == 0x492DC4u) {
        ctx->pc = 0x492DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492DC0u;
        // 0x492dc4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492DC8u;
        goto label_492dc8;
    }
    ctx->pc = 0x492DC0u;
    {
        const bool branch_taken_0x492dc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x492dc0) {
            ctx->pc = 0x492DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492DC0u;
            // 0x492dc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x492DC8u;
            goto label_492dc8;
        }
    }
    ctx->pc = 0x492DC8u;
label_492dc8:
    // 0x492dc8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x492dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_492dcc:
    // 0x492dcc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x492dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_492dd0:
    // 0x492dd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492dd4:
    // 0x492dd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x492dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_492dd8:
    // 0x492dd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492ddc:
    // 0x492ddc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x492ddcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_492de0:
    // 0x492de0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x492de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_492de4:
    // 0x492de4: 0x1812  mflo        $v1
    ctx->pc = 0x492de4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_492de8:
    // 0x492de8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x492de8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_492dec:
    // 0x492dec: 0x1012  mflo        $v0
    ctx->pc = 0x492decu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_492df0:
    // 0x492df0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x492df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_492df4:
    // 0x492df4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x492df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_492df8:
    // 0x492df8: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x492df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_492dfc:
    // 0x492dfc: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x492dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_492e00:
    // 0x492e00: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x492e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_492e04:
    // 0x492e04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_492e08:
    if (ctx->pc == 0x492E08u) {
        ctx->pc = 0x492E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E04u;
        // 0x492e08: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E0Cu;
        goto label_492e0c;
    }
    ctx->pc = 0x492E04u;
    {
        const bool branch_taken_0x492e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492e04) {
            ctx->pc = 0x492E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492E04u;
            // 0x492e08: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492E50u;
            goto label_492e50;
        }
    }
    ctx->pc = 0x492E0Cu;
label_492e0c:
    // 0x492e0c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x492e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_492e10:
    // 0x492e10: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x492e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_492e14:
    // 0x492e14: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x492e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_492e18:
    // 0x492e18: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x492e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_492e1c:
    // 0x492e1c: 0x40f809  jalr        $v0
label_492e20:
    if (ctx->pc == 0x492E20u) {
        ctx->pc = 0x492E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E1Cu;
        // 0x492e20: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E24u;
        goto label_492e24;
    }
    ctx->pc = 0x492E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492E24u);
        ctx->pc = 0x492E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E1Cu;
        // 0x492e20: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492E1Cu, 0x492E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492E24u;
label_492e24:
    // 0x492e24: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_492e28:
    if (ctx->pc == 0x492E28u) {
        ctx->pc = 0x492E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E24u;
        // 0x492e28: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E2Cu;
        goto label_492e2c;
    }
    ctx->pc = 0x492E24u;
    {
        const bool branch_taken_0x492e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E24u;
        // 0x492e28: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e24) {
            ctx->pc = 0x492E50u;
            goto label_492e50;
        }
    }
    ctx->pc = 0x492E2Cu;
label_492e2c:
    // 0x492e2c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x492e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_492e30:
    // 0x492e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492e34:
    // 0x492e34: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x492e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_492e38:
    // 0x492e38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x492e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_492e3c:
    // 0x492e3c: 0xc11eff2  jal         func_47BFC8
label_492e40:
    if (ctx->pc == 0x492E40u) {
        ctx->pc = 0x492E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E3Cu;
        // 0x492e40: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E44u;
        goto label_492e44;
    }
    ctx->pc = 0x492E3Cu;
    SET_GPR_U32(ctx, 31, 0x492E44u);
    ctx->pc = 0x492E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492E3Cu;
    // 0x492e40: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x492E3Cu, 0x492E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E44u;
label_492e44:
    // 0x492e44: 0x10000032  b           . + 4 + (0x32 << 2)
label_492e48:
    if (ctx->pc == 0x492E48u) {
        ctx->pc = 0x492E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E44u;
        // 0x492e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E4Cu;
        goto label_492e4c;
    }
    ctx->pc = 0x492E44u;
    {
        const bool branch_taken_0x492e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E44u;
        // 0x492e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e44) {
            ctx->pc = 0x492F10u;
            goto label_492f10;
        }
    }
    ctx->pc = 0x492E4Cu;
label_492e4c:
    // 0x492e4c: 0x0  nop
    ctx->pc = 0x492e4cu;
    // NOP
label_492e50:
    // 0x492e50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x492e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_492e54:
    // 0x492e54: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x492e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_492e58:
    // 0x492e58: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x492e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_492e5c:
    // 0x492e5c: 0x10000042  b           . + 4 + (0x42 << 2)
label_492e60:
    if (ctx->pc == 0x492E60u) {
        ctx->pc = 0x492E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E5Cu;
        // 0x492e60: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E64u;
        goto label_492e64;
    }
    ctx->pc = 0x492E5Cu;
    {
        const bool branch_taken_0x492e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E5Cu;
        // 0x492e60: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e5c) {
            ctx->pc = 0x492F68u;
            goto label_492f68;
        }
    }
    ctx->pc = 0x492E64u;
label_492e64:
    // 0x492e64: 0x8f8486c0  lw          $a0, -0x7940($gp)
    ctx->pc = 0x492e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_492e68:
    // 0x492e68: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x492e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_492e6c:
    // 0x492e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x492e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_492e70:
    // 0x492e70: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x492e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_492e74:
    // 0x492e74: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x492e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_492e78:
    // 0x492e78: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x492e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_492e7c:
    // 0x492e7c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x492e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_492e80:
    // 0x492e80: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x492e80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_492e84:
    // 0x492e84: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x492e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_492e88:
    // 0x492e88: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x492e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_492e8c:
    // 0x492e8c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x492e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492e90:
    // 0x492e90: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x492e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_492e94:
    // 0x492e94: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_492e98:
    if (ctx->pc == 0x492E98u) {
        ctx->pc = 0x492E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E94u;
        // 0x492e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492E9Cu;
        goto label_492e9c;
    }
    ctx->pc = 0x492E94u;
    {
        const bool branch_taken_0x492e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E94u;
        // 0x492e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e94) {
            ctx->pc = 0x492EF8u;
            goto label_492ef8;
        }
    }
    ctx->pc = 0x492E9Cu;
label_492e9c:
    // 0x492e9c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x492e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_492ea0:
    // 0x492ea0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x492ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_492ea4:
    // 0x492ea4: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x492ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
label_492ea8:
    // 0x492ea8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x492ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_492eac:
    // 0x492eac: 0x1000002d  b           . + 4 + (0x2D << 2)
label_492eb0:
    if (ctx->pc == 0x492EB0u) {
        ctx->pc = 0x492EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EACu;
        // 0x492eb0: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492EB4u;
        goto label_492eb4;
    }
    ctx->pc = 0x492EACu;
    {
        const bool branch_taken_0x492eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EACu;
        // 0x492eb0: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492eac) {
            ctx->pc = 0x492F64u;
            goto label_492f64;
        }
    }
    ctx->pc = 0x492EB4u;
label_492eb4:
    // 0x492eb4: 0x0  nop
    ctx->pc = 0x492eb4u;
    // NOP
label_492eb8:
    // 0x492eb8: 0x8f8286c0  lw          $v0, -0x7940($gp)
    ctx->pc = 0x492eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_492ebc:
    // 0x492ebc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x492ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_492ec0:
    // 0x492ec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x492ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492ec4:
    // 0x492ec4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x492ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_492ec8:
    // 0x492ec8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_492ecc:
    if (ctx->pc == 0x492ECCu) {
        ctx->pc = 0x492ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EC8u;
        // 0x492ecc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492ED0u;
        goto label_492ed0;
    }
    ctx->pc = 0x492EC8u;
    {
        const bool branch_taken_0x492ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EC8u;
        // 0x492ecc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ec8) {
            ctx->pc = 0x492EE4u;
            goto label_492ee4;
        }
    }
    ctx->pc = 0x492ED0u;
label_492ed0:
    // 0x492ed0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x492ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_492ed4:
    // 0x492ed4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x492ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_492ed8:
    // 0x492ed8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x492ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_492edc:
    // 0x492edc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_492ee0:
    if (ctx->pc == 0x492EE0u) {
        ctx->pc = 0x492EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EDCu;
        // 0x492ee0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492EE4u;
        goto label_492ee4;
    }
    ctx->pc = 0x492EDCu;
    {
        const bool branch_taken_0x492edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492edc) {
            ctx->pc = 0x492EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492EDCu;
            // 0x492ee0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492F20u;
            goto label_492f20;
        }
    }
    ctx->pc = 0x492EE4u;
label_492ee4:
    // 0x492ee4: 0x938286cc  lbu         $v0, -0x7934($gp)
    ctx->pc = 0x492ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936268)));
label_492ee8:
    // 0x492ee8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_492eec:
    if (ctx->pc == 0x492EECu) {
        ctx->pc = 0x492EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EE8u;
        // 0x492eec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492EF0u;
        goto label_492ef0;
    }
    ctx->pc = 0x492EE8u;
    {
        const bool branch_taken_0x492ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492ee8) {
            ctx->pc = 0x492EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492EE8u;
            // 0x492eec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492F20u;
            goto label_492f20;
        }
    }
    ctx->pc = 0x492EF0u;
label_492ef0:
    // 0x492ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492ef4:
    // 0x492ef4: 0x0  nop
    ctx->pc = 0x492ef4u;
    // NOP
label_492ef8:
    // 0x492ef8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x492ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_492efc:
    // 0x492efc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x492efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_492f00:
    // 0x492f00: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x492f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_492f04:
    // 0x492f04: 0xc11eff2  jal         func_47BFC8
label_492f08:
    if (ctx->pc == 0x492F08u) {
        ctx->pc = 0x492F0Cu;
        goto label_492f0c;
    }
    ctx->pc = 0x492F04u;
    SET_GPR_U32(ctx, 31, 0x492F0Cu);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x492F04u, 0x492F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F0Cu;
label_492f0c:
    // 0x492f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x492f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_492f10:
    // 0x492f10: 0xc11f024  jal         func_47C090
label_492f14:
    if (ctx->pc == 0x492F14u) {
        ctx->pc = 0x492F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492F10u;
        // 0x492f14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492F18u;
        goto label_492f18;
    }
    ctx->pc = 0x492F10u;
    SET_GPR_U32(ctx, 31, 0x492F18u);
    ctx->pc = 0x492F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492F10u;
    // 0x492f14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x492F10u, 0x492F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F18u;
label_492f18:
    // 0x492f18: 0x10000018  b           . + 4 + (0x18 << 2)
label_492f1c:
    if (ctx->pc == 0x492F1Cu) {
        ctx->pc = 0x492F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492F18u;
        // 0x492f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492F20u;
        goto label_492f20;
    }
    ctx->pc = 0x492F18u;
    {
        const bool branch_taken_0x492f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492F18u;
        // 0x492f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492f18) {
            ctx->pc = 0x492F7Cu;
            goto label_492f7c;
        }
    }
    ctx->pc = 0x492F20u;
label_492f20:
    // 0x492f20: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x492f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_492f24:
    // 0x492f24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x492f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_492f28:
    // 0x492f28: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x492f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_492f2c:
    // 0x492f2c: 0xa2440021  sb          $a0, 0x21($s2)
    ctx->pc = 0x492f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 4));
label_492f30:
    // 0x492f30: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x492f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_492f34:
    // 0x492f34: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x492f34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_492f38:
    // 0x492f38: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x492f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_492f3c:
    // 0x492f3c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x492f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_492f40:
    // 0x492f40: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x492f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_492f44:
    // 0x492f44: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x492f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_492f48:
    // 0x492f48: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x492f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_492f4c:
    // 0x492f4c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x492f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_492f50:
    // 0x492f50: 0x10000005  b           . + 4 + (0x5 << 2)
label_492f54:
    if (ctx->pc == 0x492F54u) {
        ctx->pc = 0x492F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492F50u;
        // 0x492f54: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492F58u;
        goto label_492f58;
    }
    ctx->pc = 0x492F50u;
    {
        const bool branch_taken_0x492f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492F50u;
        // 0x492f54: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492f50) {
            ctx->pc = 0x492F68u;
            goto label_492f68;
        }
    }
    ctx->pc = 0x492F58u;
label_492f58:
    // 0x492f58: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x492f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_492f5c:
    // 0x492f5c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x492f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_492f60:
    // 0x492f60: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x492f60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
label_492f64:
    // 0x492f64: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x492f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_492f68:
    // 0x492f68: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x492f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_492f6c:
    // 0x492f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492f70:
    // 0x492f70: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x492f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_492f74:
    // 0x492f74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x492f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_492f78:
    // 0x492f78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x492f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_492f7c:
    // 0x492f7c: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x492f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_492f80:
    // 0x492f80: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x492f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_492f84:
    // 0x492f84: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x492f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_492f88:
    // 0x492f88: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x492f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_492f8c:
    // 0x492f8c: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x492f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_492f90:
    // 0x492f90: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x492f90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_492f94:
    // 0x492f94: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x492f94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_492f98:
    // 0x492f98: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x492f98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_492f9c:
    // 0x492f9c: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x492f9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_492fa0:
    // 0x492fa0: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x492fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_492fa4:
    // 0x492fa4: 0x3e00008  jr          $ra
label_492fa8:
    if (ctx->pc == 0x492FA8u) {
        ctx->pc = 0x492FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492FA4u;
        // 0x492fa8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492FACu;
        goto label_492fac;
    }
    ctx->pc = 0x492FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492FA4u;
        // 0x492fa8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492FACu;
label_492fac:
    // 0x492fac: 0x0  nop
    ctx->pc = 0x492facu;
    // NOP
label_492fb0:
    // 0x492fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x492fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_492fb4:
    // 0x492fb4: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x492fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_492fb8:
    // 0x492fb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x492fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_492fbc:
    // 0x492fbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x492fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_492fc0:
    // 0x492fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x492fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_492fc4:
    // 0x492fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x492fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_492fc8:
    // 0x492fc8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x492fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_492fcc:
    // 0x492fcc: 0x92050036  lbu         $a1, 0x36($s0)
    ctx->pc = 0x492fccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_492fd0:
    // 0x492fd0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x492fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_492fd4:
    // 0x492fd4: 0x5040010b  beql        $v0, $zero, . + 4 + (0x10B << 2)
label_492fd8:
    if (ctx->pc == 0x492FD8u) {
        ctx->pc = 0x492FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492FD4u;
        // 0x492fd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x492FDCu;
        goto label_492fdc;
    }
    ctx->pc = 0x492FD4u;
    {
        const bool branch_taken_0x492fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492fd4) {
            ctx->pc = 0x492FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492FD4u;
            // 0x492fd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493404u;
            goto label_493404;
        }
    }
    ctx->pc = 0x492FDCu;
label_492fdc:
    // 0x492fdc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x492fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_492fe0:
    // 0x492fe0: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x492fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_492fe4:
    // 0x492fe4: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x492fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_492fe8:
    // 0x492fe8: 0x24c3ffed  addiu       $v1, $a2, -0x13
    ctx->pc = 0x492fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
label_492fec:
    // 0x492fec: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x492fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_492ff0:
    // 0x492ff0: 0x10600103  beqz        $v1, . + 4 + (0x103 << 2)
label_492ff4:
    if (ctx->pc == 0x492FF4u) {
        ctx->pc = 0x492FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492FF0u;
        // 0x492ff4: 0x30a40002  andi        $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x492FF8u;
        goto label_492ff8;
    }
    ctx->pc = 0x492FF0u;
    {
        const bool branch_taken_0x492ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x492FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492FF0u;
        // 0x492ff4: 0x30a40002  andi        $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ff0) {
            ctx->pc = 0x493400u;
            goto label_493400;
        }
    }
    ctx->pc = 0x492FF8u;
label_492ff8:
    // 0x492ff8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x492ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_492ffc:
    // 0x492ffc: 0xdc430030  ld          $v1, 0x30($v0)
    ctx->pc = 0x492ffcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_493000:
    // 0x493000: 0x31e3a  dsrl        $v1, $v1, 24
    ctx->pc = 0x493000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 24);
label_493004:
    // 0x493004: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_493008:
    if (ctx->pc == 0x493008u) {
        ctx->pc = 0x493008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493004u;
        // 0x493008: 0x3068003f  andi        $t0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49300Cu;
        goto label_49300c;
    }
    ctx->pc = 0x493004u;
    {
        const bool branch_taken_0x493004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x493008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493004u;
        // 0x493008: 0x3068003f  andi        $t0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493004) {
            ctx->pc = 0x493014u;
            goto label_493014;
        }
    }
    ctx->pc = 0x49300Cu;
label_49300c:
    // 0x49300c: 0x510000fd  beql        $t0, $zero, . + 4 + (0xFD << 2)
label_493010:
    if (ctx->pc == 0x493010u) {
        ctx->pc = 0x493010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49300Cu;
        // 0x493010: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493014u;
        goto label_493014;
    }
    ctx->pc = 0x49300Cu;
    {
        const bool branch_taken_0x49300c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x49300c) {
            ctx->pc = 0x493010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49300Cu;
            // 0x493010: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493404u;
            goto label_493404;
        }
    }
    ctx->pc = 0x493014u;
label_493014:
    // 0x493014: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x493014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_493018:
    // 0x493018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49301c:
    if (ctx->pc == 0x49301Cu) {
        ctx->pc = 0x49301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493018u;
        // 0x49301c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493020u;
        goto label_493020;
    }
    ctx->pc = 0x493018u;
    {
        const bool branch_taken_0x493018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493018u;
        // 0x49301c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493018) {
            ctx->pc = 0x493028u;
            goto label_493028;
        }
    }
    ctx->pc = 0x493020u;
label_493020:
    // 0x493020: 0x510200f8  beql        $t0, $v0, . + 4 + (0xF8 << 2)
label_493024:
    if (ctx->pc == 0x493024u) {
        ctx->pc = 0x493024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493020u;
        // 0x493024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493028u;
        goto label_493028;
    }
    ctx->pc = 0x493020u;
    {
        const bool branch_taken_0x493020 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x493020) {
            ctx->pc = 0x493024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493020u;
            // 0x493024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493404u;
            goto label_493404;
        }
    }
    ctx->pc = 0x493028u;
label_493028:
    // 0x493028: 0x30a20006  andi        $v0, $a1, 0x6
    ctx->pc = 0x493028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
label_49302c:
    // 0x49302c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_493030:
    if (ctx->pc == 0x493030u) {
        ctx->pc = 0x493030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49302Cu;
        // 0x493030: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493034u;
        goto label_493034;
    }
    ctx->pc = 0x49302Cu;
    {
        const bool branch_taken_0x49302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49302c) {
            ctx->pc = 0x493030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49302Cu;
            // 0x493030: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493044u;
            goto label_493044;
        }
    }
    ctx->pc = 0x493034u;
label_493034:
    // 0x493034: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x493034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_493038:
    // 0x493038: 0x504800f2  beql        $v0, $t0, . + 4 + (0xF2 << 2)
label_49303c:
    if (ctx->pc == 0x49303Cu) {
        ctx->pc = 0x49303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493038u;
        // 0x49303c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493040u;
        goto label_493040;
    }
    ctx->pc = 0x493038u;
    {
        const bool branch_taken_0x493038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x493038) {
            ctx->pc = 0x49303Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493038u;
            // 0x49303c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493404u;
            goto label_493404;
        }
    }
    ctx->pc = 0x493040u;
label_493040:
    // 0x493040: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x493040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_493044:
    // 0x493044: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
label_493048:
    if (ctx->pc == 0x493048u) {
        ctx->pc = 0x493048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493044u;
        // 0x493048: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49304Cu;
        goto label_49304c;
    }
    ctx->pc = 0x493044u;
    {
        const bool branch_taken_0x493044 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x493044) {
            ctx->pc = 0x493048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493044u;
            // 0x493048: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493060u;
            goto label_493060;
        }
    }
    ctx->pc = 0x49304Cu;
label_49304c:
    // 0x49304c: 0xc123142  jal         func_48C508
label_493050:
    if (ctx->pc == 0x493050u) {
        ctx->pc = 0x493054u;
        goto label_493054;
    }
    ctx->pc = 0x49304Cu;
    SET_GPR_U32(ctx, 31, 0x493054u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x49304Cu, 0x493054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493054u;
label_493054:
    // 0x493054: 0xc123142  jal         func_48C508
label_493058:
    if (ctx->pc == 0x493058u) {
        ctx->pc = 0x49305Cu;
        goto label_49305c;
    }
    ctx->pc = 0x493054u;
    SET_GPR_U32(ctx, 31, 0x49305Cu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x493054u, 0x49305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49305Cu;
label_49305c:
    // 0x49305c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x49305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_493060:
    // 0x493060: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x493060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_493064:
    // 0x493064: 0x92080036  lbu         $t0, 0x36($s0)
    ctx->pc = 0x493064u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_493068:
    // 0x493068: 0x27ab0004  addiu       $t3, $sp, 0x4
    ctx->pc = 0x493068u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_49306c:
    // 0x49306c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x49306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_493070:
    // 0x493070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x493070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493074:
    // 0x493074: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x493074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_493078:
    // 0x493078: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x493078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_49307c:
    // 0x49307c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_493080:
    if (ctx->pc == 0x493080u) {
        ctx->pc = 0x493080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49307Cu;
        // 0x493080: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493084u;
        goto label_493084;
    }
    ctx->pc = 0x49307Cu;
    {
        const bool branch_taken_0x49307c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49307Cu;
        // 0x493080: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49307c) {
            ctx->pc = 0x4930BCu;
            goto label_4930bc;
        }
    }
    ctx->pc = 0x493084u;
label_493084:
    // 0x493084: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x493084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_493088:
    // 0x493088: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_49308c:
    // 0x49308c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x49308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_493090:
    // 0x493090: 0x2463f900  addiu       $v1, $v1, -0x700
    ctx->pc = 0x493090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
label_493094:
    // 0x493094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x493094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_493098:
    // 0x493098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49309c:
    // 0x49309c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4930a0:
    // 0x4930a0: 0x800008  jr          $a0
label_4930a4:
    if (ctx->pc == 0x4930A4u) {
        ctx->pc = 0x4930A8u;
        goto label_4930a8;
    }
    ctx->pc = 0x4930A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4930A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4930A8u;
label_4930a8:
    // 0x4930a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4930ac:
    if (ctx->pc == 0x4930ACu) {
        ctx->pc = 0x4930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930A8u;
        // 0x4930ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4930B0u;
        goto label_4930b0;
    }
    ctx->pc = 0x4930A8u;
    {
        const bool branch_taken_0x4930a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930A8u;
        // 0x4930ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930a8) {
            ctx->pc = 0x4930BCu;
            goto label_4930bc;
        }
    }
    ctx->pc = 0x4930B0u;
label_4930b0:
    // 0x4930b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4930b4:
    if (ctx->pc == 0x4930B4u) {
        ctx->pc = 0x4930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930B0u;
        // 0x4930b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4930B8u;
        goto label_4930b8;
    }
    ctx->pc = 0x4930B0u;
    {
        const bool branch_taken_0x4930b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930B0u;
        // 0x4930b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930b0) {
            ctx->pc = 0x4930BCu;
            goto label_4930bc;
        }
    }
    ctx->pc = 0x4930B8u;
label_4930b8:
    // 0x4930b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4930b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4930bc:
    // 0x4930bc: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x4930bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
label_4930c0:
    // 0x4930c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4930c4:
    if (ctx->pc == 0x4930C4u) {
        ctx->pc = 0x4930C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930C0u;
        // 0x4930c4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4930C8u;
        goto label_4930c8;
    }
    ctx->pc = 0x4930C0u;
    {
        const bool branch_taken_0x4930c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4930C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930C0u;
        // 0x4930c4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930c0) {
            ctx->pc = 0x4930D8u;
            goto label_4930d8;
        }
    }
    ctx->pc = 0x4930C8u;
label_4930c8:
    // 0x4930c8: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_4930cc:
    if (ctx->pc == 0x4930CCu) {
        ctx->pc = 0x4930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930C8u;
        // 0x4930cc: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4930D0u;
        goto label_4930d0;
    }
    ctx->pc = 0x4930C8u;
    {
        const bool branch_taken_0x4930c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930C8u;
        // 0x4930cc: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930c8) {
            ctx->pc = 0x4930DCu;
            goto label_4930dc;
        }
    }
    ctx->pc = 0x4930D0u;
label_4930d0:
    // 0x4930d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4930d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4930d4:
    // 0x4930d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4930d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4930d8:
    // 0x4930d8: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x4930d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_4930dc:
    // 0x4930dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4930e0:
    if (ctx->pc == 0x4930E0u) {
        ctx->pc = 0x4930E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930DCu;
        // 0x4930e0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4930E4u;
        goto label_4930e4;
    }
    ctx->pc = 0x4930DCu;
    {
        const bool branch_taken_0x4930dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4930E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930DCu;
        // 0x4930e0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930dc) {
            ctx->pc = 0x4930F4u;
            goto label_4930f4;
        }
    }
    ctx->pc = 0x4930E4u;
label_4930e4:
    // 0x4930e4: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
label_4930e8:
    if (ctx->pc == 0x4930E8u) {
        ctx->pc = 0x4930E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930E4u;
        // 0x4930e8: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4930ECu;
        goto label_4930ec;
    }
    ctx->pc = 0x4930E4u;
    {
        const bool branch_taken_0x4930e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x4930e4) {
            ctx->pc = 0x4930E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4930E4u;
            // 0x4930e8: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4930F8u;
            goto label_4930f8;
        }
    }
    ctx->pc = 0x4930ECu;
label_4930ec:
    // 0x4930ec: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4930ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4930f0:
    // 0x4930f0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4930f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4930f4:
    // 0x4930f4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4930f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4930f8:
    // 0x4930f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4930f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4930fc:
    // 0x4930fc: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4930fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_493100:
    // 0x493100: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x493100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493104:
    // 0x493104: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x493104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_493108:
    // 0x493108: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x493108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_49310c:
    // 0x49310c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x49310cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_493110:
    // 0x493110: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_493114:
    if (ctx->pc == 0x493114u) {
        ctx->pc = 0x493114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493110u;
        // 0x493114: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493118u;
        goto label_493118;
    }
    ctx->pc = 0x493110u;
    {
        const bool branch_taken_0x493110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x493114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493110u;
        // 0x493114: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493110) {
            ctx->pc = 0x4931C8u;
            goto label_4931c8;
        }
    }
    ctx->pc = 0x493118u;
label_493118:
    // 0x493118: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x493118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49311c:
    // 0x49311c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x49311cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_493120:
    // 0x493120: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x493120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_493124:
    // 0x493124: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x493124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_493128:
    // 0x493128: 0x92040036  lbu         $a0, 0x36($s0)
    ctx->pc = 0x493128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_49312c:
    // 0x49312c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x49312cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_493130:
    // 0x493130: 0xe3300a  movz        $a2, $a3, $v1
    ctx->pc = 0x493130u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
label_493134:
    // 0x493134: 0x102280a  movz        $a1, $t0, $v0
    ctx->pc = 0x493134u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
label_493138:
    // 0x493138: 0x30840006  andi        $a0, $a0, 0x6
    ctx->pc = 0x493138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_49313c:
    // 0x49313c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_493140:
    if (ctx->pc == 0x493140u) {
        ctx->pc = 0x493140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49313Cu;
        // 0x493140: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493144u;
        goto label_493144;
    }
    ctx->pc = 0x49313Cu;
    {
        const bool branch_taken_0x49313c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x493140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49313Cu;
        // 0x493140: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49313c) {
            ctx->pc = 0x493150u;
            goto label_493150;
        }
    }
    ctx->pc = 0x493144u;
label_493144:
    // 0x493144: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x493144u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_493148:
    // 0x493148: 0x10000003  b           . + 4 + (0x3 << 2)
label_49314c:
    if (ctx->pc == 0x49314Cu) {
        ctx->pc = 0x49314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493148u;
        // 0x49314c: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x493150u;
        goto label_493150;
    }
    ctx->pc = 0x493148u;
    {
        const bool branch_taken_0x493148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493148u;
        // 0x49314c: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493148) {
            ctx->pc = 0x493158u;
            goto label_493158;
        }
    }
    ctx->pc = 0x493150u;
label_493150:
    // 0x493150: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x493150u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_493154:
    // 0x493154: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x493154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_493158:
    // 0x493158: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x493158u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
label_49315c:
    // 0x49315c: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x49315cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_493160:
    // 0x493160: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x493160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_493164:
    // 0x493164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_493168:
    if (ctx->pc == 0x493168u) {
        ctx->pc = 0x493168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493164u;
        // 0x493168: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49316Cu;
        goto label_49316c;
    }
    ctx->pc = 0x493164u;
    {
        const bool branch_taken_0x493164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493164u;
        // 0x493168: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493164) {
            ctx->pc = 0x493178u;
            goto label_493178;
        }
    }
    ctx->pc = 0x49316Cu;
label_49316c:
    // 0x49316c: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x49316cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_493170:
    // 0x493170: 0x10000003  b           . + 4 + (0x3 << 2)
label_493174:
    if (ctx->pc == 0x493174u) {
        ctx->pc = 0x493174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493170u;
        // 0x493174: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x493178u;
        goto label_493178;
    }
    ctx->pc = 0x493170u;
    {
        const bool branch_taken_0x493170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493170u;
        // 0x493174: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493170) {
            ctx->pc = 0x493180u;
            goto label_493180;
        }
    }
    ctx->pc = 0x493178u;
label_493178:
    // 0x493178: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x493178u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_49317c:
    // 0x49317c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x49317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_493180:
    // 0x493180: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x493180u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
label_493184:
    // 0x493184: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x493184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_493188:
    // 0x493188: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x493188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_49318c:
    // 0x49318c: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x49318cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_493190:
    // 0x493190: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x493190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
label_493194:
    // 0x493194: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x493194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_493198:
    // 0x493198: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x493198u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_49319c:
    // 0x49319c: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x49319cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_4931a0:
    // 0x4931a0: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x4931a0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_4931a4:
    // 0x4931a4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4931a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4931a8:
    // 0x4931a8: 0x8a202a  slt         $a0, $a0, $t2
    ctx->pc = 0x4931a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_4931ac:
    // 0x4931ac: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x4931acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_4931b0:
    // 0x4931b0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x4931b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_4931b4:
    // 0x4931b4: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x4931b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
label_4931b8:
    // 0x4931b8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x4931b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4931bc:
    // 0x4931bc: 0x1080ffd6  beqz        $a0, . + 4 + (-0x2A << 2)
label_4931c0:
    if (ctx->pc == 0x4931C0u) {
        ctx->pc = 0x4931C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4931BCu;
        // 0x4931c0: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4931C4u;
        goto label_4931c4;
    }
    ctx->pc = 0x4931BCu;
    {
        const bool branch_taken_0x4931bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4931C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4931BCu;
        // 0x4931c0: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4931bc) {
            ctx->pc = 0x493118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493118;
        }
    }
    ctx->pc = 0x4931C4u;
label_4931c4:
    // 0x4931c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4931c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4931c8:
    // 0x4931c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4931c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4931cc:
    // 0x4931cc: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x4931ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4931d0:
    // 0x4931d0: 0x18e00041  blez        $a3, . + 4 + (0x41 << 2)
label_4931d4:
    if (ctx->pc == 0x4931D4u) {
        ctx->pc = 0x4931D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4931D0u;
        // 0x4931d4: 0x24490010  addiu       $t1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4931D8u;
        goto label_4931d8;
    }
    ctx->pc = 0x4931D0u;
    {
        const bool branch_taken_0x4931d0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4931D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4931D0u;
        // 0x4931d4: 0x24490010  addiu       $t1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4931d0) {
            ctx->pc = 0x4932D8u;
            goto label_4932d8;
        }
    }
    ctx->pc = 0x4931D8u;
label_4931d8:
    // 0x4931d8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4931d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4931dc:
    // 0x4931dc: 0x24180013  addiu       $t8, $zero, 0x13
    ctx->pc = 0x4931dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4931e0:
    // 0x4931e0: 0x3c0c003f  lui         $t4, 0x3F
    ctx->pc = 0x4931e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)63 << 16));
label_4931e4:
    // 0x4931e4: 0x340bfffc  ori         $t3, $zero, 0xFFFC
    ctx->pc = 0x4931e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
label_4931e8:
    // 0x4931e8: 0xb5fb8  dsll        $t3, $t3, 30
    ctx->pc = 0x4931e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 30);
label_4931ec:
    // 0x4931ec: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x4931ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
label_4931f0:
    // 0x4931f0: 0x739bc  dsll32      $a3, $a3, 6
    ctx->pc = 0x4931f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 6));
label_4931f4:
    // 0x4931f4: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x4931f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4931f8:
    // 0x4931f8: 0x3c0e0200  lui         $t6, 0x200
    ctx->pc = 0x4931f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)512 << 16));
label_4931fc:
    // 0x4931fc: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x4931fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_493200:
    // 0x493200: 0xd6abc  dsll32      $t5, $t5, 10
    ctx->pc = 0x493200u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 10));
label_493204:
    // 0x493204: 0x0  nop
    ctx->pc = 0x493204u;
    // NOP
label_493208:
    // 0x493208: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x493208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_49320c:
    // 0x49320c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x49320cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_493210:
    // 0x493210: 0xdd280000  ld          $t0, 0x0($t1)
    ctx->pc = 0x493210u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_493214:
    // 0x493214: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x493214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_493218:
    // 0x493218: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x493218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49321c:
    // 0x49321c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_493220:
    if (ctx->pc == 0x493220u) {
        ctx->pc = 0x493220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49321Cu;
        // 0x493220: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493224u;
        goto label_493224;
    }
    ctx->pc = 0x49321Cu;
    {
        const bool branch_taken_0x49321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49321Cu;
        // 0x493220: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49321c) {
            ctx->pc = 0x493254u;
            goto label_493254;
        }
    }
    ctx->pc = 0x493224u;
label_493224:
    // 0x493224: 0x61502  srl         $v0, $a2, 20
    ctx->pc = 0x493224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
label_493228:
    // 0x493228: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x493228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_49322c:
    // 0x49322c: 0x1458000a  bne         $v0, $t8, . + 4 + (0xA << 2)
label_493230:
    if (ctx->pc == 0x493230u) {
        ctx->pc = 0x493230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49322Cu;
        // 0x493230: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x493234u;
        goto label_493234;
    }
    ctx->pc = 0x49322Cu;
    {
        const bool branch_taken_0x49322c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x493230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49322Cu;
        // 0x493230: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49322c) {
            ctx->pc = 0x493258u;
            goto label_493258;
        }
    }
    ctx->pc = 0x493234u;
label_493234:
    // 0x493234: 0x10c1024  and         $v0, $t0, $t4
    ctx->pc = 0x493234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
label_493238:
    // 0x493238: 0x1072024  and         $a0, $t0, $a3
    ctx->pc = 0x493238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_49323c:
    // 0x49323c: 0x10b1824  and         $v1, $t0, $t3
    ctx->pc = 0x49323cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
label_493240:
    // 0x493240: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x493240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_493244:
    // 0x493244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x493244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_493248:
    // 0x493248: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x493248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
label_49324c:
    // 0x49324c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_493250:
    if (ctx->pc == 0x493250u) {
        ctx->pc = 0x493250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49324Cu;
        // 0x493250: 0x444025  or          $t0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493254u;
        goto label_493254;
    }
    ctx->pc = 0x49324Cu;
    {
        const bool branch_taken_0x49324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49324Cu;
        // 0x493250: 0x444025  or          $t0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49324c) {
            ctx->pc = 0x4932C8u;
            goto label_4932c8;
        }
    }
    ctx->pc = 0x493254u;
label_493254:
    // 0x493254: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x493254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_493258:
    // 0x493258: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_49325c:
    if (ctx->pc == 0x49325Cu) {
        ctx->pc = 0x49325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493258u;
        // 0x49325c: 0x61502  srl         $v0, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493260u;
        goto label_493260;
    }
    ctx->pc = 0x493258u;
    {
        const bool branch_taken_0x493258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493258u;
        // 0x49325c: 0x61502  srl         $v0, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493258) {
            ctx->pc = 0x493294u;
            goto label_493294;
        }
    }
    ctx->pc = 0x493260u;
label_493260:
    // 0x493260: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x493260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_493264:
    // 0x493264: 0x144f000c  bne         $v0, $t7, . + 4 + (0xC << 2)
label_493268:
    if (ctx->pc == 0x493268u) {
        ctx->pc = 0x493268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493264u;
        // 0x493268: 0x63502  srl         $a2, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49326Cu;
        goto label_49326c;
    }
    ctx->pc = 0x493264u;
    {
        const bool branch_taken_0x493264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x493268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493264u;
        // 0x493268: 0x63502  srl         $a2, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493264) {
            ctx->pc = 0x493298u;
            goto label_493298;
        }
    }
    ctx->pc = 0x49326Cu;
label_49326c:
    // 0x49326c: 0x10c1024  and         $v0, $t0, $t4
    ctx->pc = 0x49326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
label_493270:
    // 0x493270: 0x10b1824  and         $v1, $t0, $t3
    ctx->pc = 0x493270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
label_493274:
    // 0x493274: 0x1072024  and         $a0, $t0, $a3
    ctx->pc = 0x493274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_493278:
    // 0x493278: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x493278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_49327c:
    // 0x49327c: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x49327cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_493280:
    // 0x493280: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x493280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
label_493284:
    // 0x493284: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x493284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_493288:
    // 0x493288: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x493288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49328c:
    // 0x49328c: 0x1000000e  b           . + 4 + (0xE << 2)
label_493290:
    if (ctx->pc == 0x493290u) {
        ctx->pc = 0x493290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49328Cu;
        // 0x493290: 0x4d4025  or          $t0, $v0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493294u;
        goto label_493294;
    }
    ctx->pc = 0x49328Cu;
    {
        const bool branch_taken_0x49328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49328Cu;
        // 0x493290: 0x4d4025  or          $t0, $v0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49328c) {
            ctx->pc = 0x4932C8u;
            goto label_4932c8;
        }
    }
    ctx->pc = 0x493294u;
label_493294:
    // 0x493294: 0x63502  srl         $a2, $a2, 20
    ctx->pc = 0x493294u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
label_493298:
    // 0x493298: 0x10c1824  and         $v1, $t0, $t4
    ctx->pc = 0x493298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
label_49329c:
    // 0x49329c: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x49329cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_4932a0:
    // 0x4932a0: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x4932a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_4932a4:
    // 0x4932a4: 0x62e00  sll         $a1, $a2, 24
    ctx->pc = 0x4932a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_4932a8:
    // 0x4932a8: 0x1072024  and         $a0, $t0, $a3
    ctx->pc = 0x4932a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_4932ac:
    // 0x4932ac: 0x10b1024  and         $v0, $t0, $t3
    ctx->pc = 0x4932acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
label_4932b0:
    // 0x4932b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4932b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4932b4:
    // 0x4932b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4932b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4932b8:
    // 0x4932b8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x4932b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_4932bc:
    // 0x4932bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4932bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4932c0:
    // 0x4932c0: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x4932c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
label_4932c4:
    // 0x4932c4: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x4932c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_4932c8:
    // 0x4932c8: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x4932c8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
label_4932cc:
    // 0x4932cc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4932ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4932d0:
    // 0x4932d0: 0x1540ffcd  bnez        $t2, . + 4 + (-0x33 << 2)
label_4932d4:
    if (ctx->pc == 0x4932D4u) {
        ctx->pc = 0x4932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4932D0u;
        // 0x4932d4: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4932D8u;
        goto label_4932d8;
    }
    ctx->pc = 0x4932D0u;
    {
        const bool branch_taken_0x4932d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4932D0u;
        // 0x4932d4: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4932d0) {
            ctx->pc = 0x493208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493208;
        }
    }
    ctx->pc = 0x4932D8u;
label_4932d8:
    // 0x4932d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4932d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4932dc:
    // 0x4932dc: 0xdc43ffc0  ld          $v1, -0x40($v0)
    ctx->pc = 0x4932dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967232)));
label_4932e0:
    // 0x4932e0: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_4932e4:
    if (ctx->pc == 0x4932E4u) {
        ctx->pc = 0x4932E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4932E0u;
        // 0x4932e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4932E8u;
        goto label_4932e8;
    }
    ctx->pc = 0x4932E0u;
    {
        const bool branch_taken_0x4932e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4932E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4932E0u;
        // 0x4932e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4932e0) {
            ctx->pc = 0x4933E8u;
            goto label_4933e8;
        }
    }
    ctx->pc = 0x4932E8u;
label_4932e8:
    // 0x4932e8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4932e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4932ec:
    // 0x4932ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4932ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4932f0:
    // 0x4932f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4932f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4932f4:
    // 0x4932f4: 0x38840008  xori        $a0, $a0, 0x8
    ctx->pc = 0x4932f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)8);
label_4932f8:
    // 0x4932f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4932f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4932fc:
    // 0x4932fc: 0x104280b  movn        $a1, $t0, $a0
    ctx->pc = 0x4932fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
label_493300:
    // 0x493300: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x493300u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_493304:
    // 0x493304: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x493304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_493308:
    // 0x493308: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x493308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49330c:
    // 0x49330c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x49330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_493310:
    // 0x493310: 0x92050036  lbu         $a1, 0x36($s0)
    ctx->pc = 0x493310u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_493314:
    // 0x493314: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x493314u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_493318:
    // 0x493318: 0x3067000f  andi        $a3, $v1, 0xF
    ctx->pc = 0x493318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_49331c:
    // 0x49331c: 0x107200b  movn        $a0, $t0, $a3
    ctx->pc = 0x49331cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
label_493320:
    // 0x493320: 0x30a30006  andi        $v1, $a1, 0x6
    ctx->pc = 0x493320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
label_493324:
    // 0x493324: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x493324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_493328:
    // 0x493328: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_49332c:
    if (ctx->pc == 0x49332Cu) {
        ctx->pc = 0x49332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493328u;
        // 0x49332c: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493330u;
        goto label_493330;
    }
    ctx->pc = 0x493328u;
    {
        const bool branch_taken_0x493328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493328u;
        // 0x49332c: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493328) {
            ctx->pc = 0x493370u;
            goto label_493370;
        }
    }
    ctx->pc = 0x493330u;
label_493330:
    // 0x493330: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x493330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_493334:
    // 0x493334: 0x24c50005  addiu       $a1, $a2, 0x5
    ctx->pc = 0x493334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_493338:
    // 0x493338: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x493338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
label_49333c:
    // 0x49333c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x49333cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_493340:
    // 0x493340: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x493340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_493344:
    // 0x493344: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x493344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_493348:
    // 0x493348: 0x9522fff0  lhu         $v0, -0x10($t1)
    ctx->pc = 0x493348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967280)));
label_49334c:
    // 0x49334c: 0x9523fffc  lhu         $v1, -0x4($t1)
    ctx->pc = 0x49334cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967292)));
label_493350:
    // 0x493350: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x493350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_493354:
    // 0x493354: 0x464025  or          $t0, $v0, $a2
    ctx->pc = 0x493354u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_493358:
    // 0x493358: 0x65182f  dsubu       $v1, $v1, $a1
    ctx->pc = 0x493358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_49335c:
    // 0x49335c: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x49335cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
label_493360:
    // 0x493360: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x493360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_493364:
    // 0x493364: 0x674025  or          $t0, $v1, $a3
    ctx->pc = 0x493364u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_493368:
    // 0x493368: 0x1000001c  b           . + 4 + (0x1C << 2)
label_49336c:
    if (ctx->pc == 0x49336Cu) {
        ctx->pc = 0x49336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493368u;
        // 0x49336c: 0xad24fff0  sw          $a0, -0x10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294967280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493370u;
        goto label_493370;
    }
    ctx->pc = 0x493368u;
    {
        const bool branch_taken_0x493368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493368u;
        // 0x49336c: 0xad24fff0  sw          $a0, -0x10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294967280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493368) {
            ctx->pc = 0x4933DCu;
            goto label_4933dc;
        }
    }
    ctx->pc = 0x493370u;
label_493370:
    // 0x493370: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x493370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_493374:
    // 0x493374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493378:
    if (ctx->pc == 0x493378u) {
        ctx->pc = 0x493378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493374u;
        // 0x493378: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49337Cu;
        goto label_49337c;
    }
    ctx->pc = 0x493374u;
    {
        const bool branch_taken_0x493374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493374u;
        // 0x493378: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493374) {
            ctx->pc = 0x493384u;
            goto label_493384;
        }
    }
    ctx->pc = 0x49337Cu;
label_49337c:
    // 0x49337c: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
label_493380:
    if (ctx->pc == 0x493380u) {
        ctx->pc = 0x493380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49337Cu;
        // 0x493380: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493384u;
        goto label_493384;
    }
    ctx->pc = 0x49337Cu;
    {
        const bool branch_taken_0x49337c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x49337c) {
            ctx->pc = 0x493380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49337Cu;
            // 0x493380: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493398u;
            goto label_493398;
        }
    }
    ctx->pc = 0x493384u;
label_493384:
    // 0x493384: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_493388:
    if (ctx->pc == 0x493388u) {
        ctx->pc = 0x493388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493384u;
        // 0x493388: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49338Cu;
        goto label_49338c;
    }
    ctx->pc = 0x493384u;
    {
        const bool branch_taken_0x493384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493384) {
            ctx->pc = 0x493388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493384u;
            // 0x493388: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4933ECu;
            goto label_4933ec;
        }
    }
    ctx->pc = 0x49338Cu;
label_49338c:
    // 0x49338c: 0x54e80017  bnel        $a3, $t0, . + 4 + (0x17 << 2)
label_493390:
    if (ctx->pc == 0x493390u) {
        ctx->pc = 0x493390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49338Cu;
        // 0x493390: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493394u;
        goto label_493394;
    }
    ctx->pc = 0x49338Cu;
    {
        const bool branch_taken_0x49338c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x49338c) {
            ctx->pc = 0x493390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49338Cu;
            // 0x493390: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4933ECu;
            goto label_4933ec;
        }
    }
    ctx->pc = 0x493394u;
label_493394:
    // 0x493394: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x493394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_493398:
    // 0x493398: 0x24c40005  addiu       $a0, $a2, 0x5
    ctx->pc = 0x493398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_49339c:
    // 0x49339c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x49339cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4933a0:
    // 0x4933a0: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x4933a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
label_4933a4:
    // 0x4933a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4933a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4933a8:
    // 0x4933a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4933a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_4933ac:
    // 0x4933ac: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x4933acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_4933b0:
    // 0x4933b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4933b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4933b4:
    // 0x4933b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4933b8:
    // 0x4933b8: 0x9522fff0  lhu         $v0, -0x10($t1)
    ctx->pc = 0x4933b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967280)));
label_4933bc:
    // 0x4933bc: 0x9523fffc  lhu         $v1, -0x4($t1)
    ctx->pc = 0x4933bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967292)));
label_4933c0:
    // 0x4933c0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x4933c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_4933c4:
    // 0x4933c4: 0x464025  or          $t0, $v0, $a2
    ctx->pc = 0x4933c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4933c8:
    // 0x4933c8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x4933c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_4933cc:
    // 0x4933cc: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x4933ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
label_4933d0:
    // 0x4933d0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4933d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_4933d4:
    // 0x4933d4: 0x674025  or          $t0, $v1, $a3
    ctx->pc = 0x4933d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4933d8:
    // 0x4933d8: 0xad25fff0  sw          $a1, -0x10($t1)
    ctx->pc = 0x4933d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967280), GPR_U32(ctx, 5));
label_4933dc:
    // 0x4933dc: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4933dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_4933e0:
    // 0x4933e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4933e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4933e4:
    // 0x4933e4: 0xad22fffc  sw          $v0, -0x4($t1)
    ctx->pc = 0x4933e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967292), GPR_U32(ctx, 2));
label_4933e8:
    // 0x4933e8: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x4933e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4933ec:
    // 0x4933ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4933ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4933f0:
    // 0x4933f0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x4933f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4933f4:
    // 0x4933f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4933f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4933f8:
    // 0x4933f8: 0xc10f644  jal         func_43D910
label_4933fc:
    if (ctx->pc == 0x4933FCu) {
        ctx->pc = 0x4933FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4933F8u;
        // 0x4933fc: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493400u;
        goto label_493400;
    }
    ctx->pc = 0x4933F8u;
    SET_GPR_U32(ctx, 31, 0x493400u);
    ctx->pc = 0x4933FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4933F8u;
    // 0x4933fc: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4933F8u, 0x493400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493400u;
label_493400:
    // 0x493400: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x493400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_493404:
    // 0x493404: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x493404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_493408:
    // 0x493408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x493408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49340c:
    // 0x49340c: 0x3e00008  jr          $ra
label_493410:
    if (ctx->pc == 0x493410u) {
        ctx->pc = 0x493410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49340Cu;
        // 0x493410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493414u;
        goto label_493414;
    }
    ctx->pc = 0x49340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49340Cu;
        // 0x493410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493414u;
label_493414:
    // 0x493414: 0x0  nop
    ctx->pc = 0x493414u;
    // NOP
    ctx->pc = 0x493418u;
}
