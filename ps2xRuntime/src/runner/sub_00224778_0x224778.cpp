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

// Function: sub_00224778
// Address: 0x224778 - 0x224ea0
void sub_00224778_0x224778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224778_0x224778");
#endif

    switch (ctx->pc) {
        case 0x224778u: goto label_224778;
        case 0x22477cu: goto label_22477c;
        case 0x224780u: goto label_224780;
        case 0x224784u: goto label_224784;
        case 0x224788u: goto label_224788;
        case 0x22478cu: goto label_22478c;
        case 0x224790u: goto label_224790;
        case 0x224794u: goto label_224794;
        case 0x224798u: goto label_224798;
        case 0x22479cu: goto label_22479c;
        case 0x2247a0u: goto label_2247a0;
        case 0x2247a4u: goto label_2247a4;
        case 0x2247a8u: goto label_2247a8;
        case 0x2247acu: goto label_2247ac;
        case 0x2247b0u: goto label_2247b0;
        case 0x2247b4u: goto label_2247b4;
        case 0x2247b8u: goto label_2247b8;
        case 0x2247bcu: goto label_2247bc;
        case 0x2247c0u: goto label_2247c0;
        case 0x2247c4u: goto label_2247c4;
        case 0x2247c8u: goto label_2247c8;
        case 0x2247ccu: goto label_2247cc;
        case 0x2247d0u: goto label_2247d0;
        case 0x2247d4u: goto label_2247d4;
        case 0x2247d8u: goto label_2247d8;
        case 0x2247dcu: goto label_2247dc;
        case 0x2247e0u: goto label_2247e0;
        case 0x2247e4u: goto label_2247e4;
        case 0x2247e8u: goto label_2247e8;
        case 0x2247ecu: goto label_2247ec;
        case 0x2247f0u: goto label_2247f0;
        case 0x2247f4u: goto label_2247f4;
        case 0x2247f8u: goto label_2247f8;
        case 0x2247fcu: goto label_2247fc;
        case 0x224800u: goto label_224800;
        case 0x224804u: goto label_224804;
        case 0x224808u: goto label_224808;
        case 0x22480cu: goto label_22480c;
        case 0x224810u: goto label_224810;
        case 0x224814u: goto label_224814;
        case 0x224818u: goto label_224818;
        case 0x22481cu: goto label_22481c;
        case 0x224820u: goto label_224820;
        case 0x224824u: goto label_224824;
        case 0x224828u: goto label_224828;
        case 0x22482cu: goto label_22482c;
        case 0x224830u: goto label_224830;
        case 0x224834u: goto label_224834;
        case 0x224838u: goto label_224838;
        case 0x22483cu: goto label_22483c;
        case 0x224840u: goto label_224840;
        case 0x224844u: goto label_224844;
        case 0x224848u: goto label_224848;
        case 0x22484cu: goto label_22484c;
        case 0x224850u: goto label_224850;
        case 0x224854u: goto label_224854;
        case 0x224858u: goto label_224858;
        case 0x22485cu: goto label_22485c;
        case 0x224860u: goto label_224860;
        case 0x224864u: goto label_224864;
        case 0x224868u: goto label_224868;
        case 0x22486cu: goto label_22486c;
        case 0x224870u: goto label_224870;
        case 0x224874u: goto label_224874;
        case 0x224878u: goto label_224878;
        case 0x22487cu: goto label_22487c;
        case 0x224880u: goto label_224880;
        case 0x224884u: goto label_224884;
        case 0x224888u: goto label_224888;
        case 0x22488cu: goto label_22488c;
        case 0x224890u: goto label_224890;
        case 0x224894u: goto label_224894;
        case 0x224898u: goto label_224898;
        case 0x22489cu: goto label_22489c;
        case 0x2248a0u: goto label_2248a0;
        case 0x2248a4u: goto label_2248a4;
        case 0x2248a8u: goto label_2248a8;
        case 0x2248acu: goto label_2248ac;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248b8u: goto label_2248b8;
        case 0x2248bcu: goto label_2248bc;
        case 0x2248c0u: goto label_2248c0;
        case 0x2248c4u: goto label_2248c4;
        case 0x2248c8u: goto label_2248c8;
        case 0x2248ccu: goto label_2248cc;
        case 0x2248d0u: goto label_2248d0;
        case 0x2248d4u: goto label_2248d4;
        case 0x2248d8u: goto label_2248d8;
        case 0x2248dcu: goto label_2248dc;
        case 0x2248e0u: goto label_2248e0;
        case 0x2248e4u: goto label_2248e4;
        case 0x2248e8u: goto label_2248e8;
        case 0x2248ecu: goto label_2248ec;
        case 0x2248f0u: goto label_2248f0;
        case 0x2248f4u: goto label_2248f4;
        case 0x2248f8u: goto label_2248f8;
        case 0x2248fcu: goto label_2248fc;
        case 0x224900u: goto label_224900;
        case 0x224904u: goto label_224904;
        case 0x224908u: goto label_224908;
        case 0x22490cu: goto label_22490c;
        case 0x224910u: goto label_224910;
        case 0x224914u: goto label_224914;
        case 0x224918u: goto label_224918;
        case 0x22491cu: goto label_22491c;
        case 0x224920u: goto label_224920;
        case 0x224924u: goto label_224924;
        case 0x224928u: goto label_224928;
        case 0x22492cu: goto label_22492c;
        case 0x224930u: goto label_224930;
        case 0x224934u: goto label_224934;
        case 0x224938u: goto label_224938;
        case 0x22493cu: goto label_22493c;
        case 0x224940u: goto label_224940;
        case 0x224944u: goto label_224944;
        case 0x224948u: goto label_224948;
        case 0x22494cu: goto label_22494c;
        case 0x224950u: goto label_224950;
        case 0x224954u: goto label_224954;
        case 0x224958u: goto label_224958;
        case 0x22495cu: goto label_22495c;
        case 0x224960u: goto label_224960;
        case 0x224964u: goto label_224964;
        case 0x224968u: goto label_224968;
        case 0x22496cu: goto label_22496c;
        case 0x224970u: goto label_224970;
        case 0x224974u: goto label_224974;
        case 0x224978u: goto label_224978;
        case 0x22497cu: goto label_22497c;
        case 0x224980u: goto label_224980;
        case 0x224984u: goto label_224984;
        case 0x224988u: goto label_224988;
        case 0x22498cu: goto label_22498c;
        case 0x224990u: goto label_224990;
        case 0x224994u: goto label_224994;
        case 0x224998u: goto label_224998;
        case 0x22499cu: goto label_22499c;
        case 0x2249a0u: goto label_2249a0;
        case 0x2249a4u: goto label_2249a4;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249acu: goto label_2249ac;
        case 0x2249b0u: goto label_2249b0;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249b8u: goto label_2249b8;
        case 0x2249bcu: goto label_2249bc;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249c4u: goto label_2249c4;
        case 0x2249c8u: goto label_2249c8;
        case 0x2249ccu: goto label_2249cc;
        case 0x2249d0u: goto label_2249d0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249d8u: goto label_2249d8;
        case 0x2249dcu: goto label_2249dc;
        case 0x2249e0u: goto label_2249e0;
        case 0x2249e4u: goto label_2249e4;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249ecu: goto label_2249ec;
        case 0x2249f0u: goto label_2249f0;
        case 0x2249f4u: goto label_2249f4;
        case 0x2249f8u: goto label_2249f8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a00u: goto label_224a00;
        case 0x224a04u: goto label_224a04;
        case 0x224a08u: goto label_224a08;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a10u: goto label_224a10;
        case 0x224a14u: goto label_224a14;
        case 0x224a18u: goto label_224a18;
        case 0x224a1cu: goto label_224a1c;
        case 0x224a20u: goto label_224a20;
        case 0x224a24u: goto label_224a24;
        case 0x224a28u: goto label_224a28;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a30u: goto label_224a30;
        case 0x224a34u: goto label_224a34;
        case 0x224a38u: goto label_224a38;
        case 0x224a3cu: goto label_224a3c;
        case 0x224a40u: goto label_224a40;
        case 0x224a44u: goto label_224a44;
        case 0x224a48u: goto label_224a48;
        case 0x224a4cu: goto label_224a4c;
        case 0x224a50u: goto label_224a50;
        case 0x224a54u: goto label_224a54;
        case 0x224a58u: goto label_224a58;
        case 0x224a5cu: goto label_224a5c;
        case 0x224a60u: goto label_224a60;
        case 0x224a64u: goto label_224a64;
        case 0x224a68u: goto label_224a68;
        case 0x224a6cu: goto label_224a6c;
        case 0x224a70u: goto label_224a70;
        case 0x224a74u: goto label_224a74;
        case 0x224a78u: goto label_224a78;
        case 0x224a7cu: goto label_224a7c;
        case 0x224a80u: goto label_224a80;
        case 0x224a84u: goto label_224a84;
        case 0x224a88u: goto label_224a88;
        case 0x224a8cu: goto label_224a8c;
        case 0x224a90u: goto label_224a90;
        case 0x224a94u: goto label_224a94;
        case 0x224a98u: goto label_224a98;
        case 0x224a9cu: goto label_224a9c;
        case 0x224aa0u: goto label_224aa0;
        case 0x224aa4u: goto label_224aa4;
        case 0x224aa8u: goto label_224aa8;
        case 0x224aacu: goto label_224aac;
        case 0x224ab0u: goto label_224ab0;
        case 0x224ab4u: goto label_224ab4;
        case 0x224ab8u: goto label_224ab8;
        case 0x224abcu: goto label_224abc;
        case 0x224ac0u: goto label_224ac0;
        case 0x224ac4u: goto label_224ac4;
        case 0x224ac8u: goto label_224ac8;
        case 0x224accu: goto label_224acc;
        case 0x224ad0u: goto label_224ad0;
        case 0x224ad4u: goto label_224ad4;
        case 0x224ad8u: goto label_224ad8;
        case 0x224adcu: goto label_224adc;
        case 0x224ae0u: goto label_224ae0;
        case 0x224ae4u: goto label_224ae4;
        case 0x224ae8u: goto label_224ae8;
        case 0x224aecu: goto label_224aec;
        case 0x224af0u: goto label_224af0;
        case 0x224af4u: goto label_224af4;
        case 0x224af8u: goto label_224af8;
        case 0x224afcu: goto label_224afc;
        case 0x224b00u: goto label_224b00;
        case 0x224b04u: goto label_224b04;
        case 0x224b08u: goto label_224b08;
        case 0x224b0cu: goto label_224b0c;
        case 0x224b10u: goto label_224b10;
        case 0x224b14u: goto label_224b14;
        case 0x224b18u: goto label_224b18;
        case 0x224b1cu: goto label_224b1c;
        case 0x224b20u: goto label_224b20;
        case 0x224b24u: goto label_224b24;
        case 0x224b28u: goto label_224b28;
        case 0x224b2cu: goto label_224b2c;
        case 0x224b30u: goto label_224b30;
        case 0x224b34u: goto label_224b34;
        case 0x224b38u: goto label_224b38;
        case 0x224b3cu: goto label_224b3c;
        case 0x224b40u: goto label_224b40;
        case 0x224b44u: goto label_224b44;
        case 0x224b48u: goto label_224b48;
        case 0x224b4cu: goto label_224b4c;
        case 0x224b50u: goto label_224b50;
        case 0x224b54u: goto label_224b54;
        case 0x224b58u: goto label_224b58;
        case 0x224b5cu: goto label_224b5c;
        case 0x224b60u: goto label_224b60;
        case 0x224b64u: goto label_224b64;
        case 0x224b68u: goto label_224b68;
        case 0x224b6cu: goto label_224b6c;
        case 0x224b70u: goto label_224b70;
        case 0x224b74u: goto label_224b74;
        case 0x224b78u: goto label_224b78;
        case 0x224b7cu: goto label_224b7c;
        case 0x224b80u: goto label_224b80;
        case 0x224b84u: goto label_224b84;
        case 0x224b88u: goto label_224b88;
        case 0x224b8cu: goto label_224b8c;
        case 0x224b90u: goto label_224b90;
        case 0x224b94u: goto label_224b94;
        case 0x224b98u: goto label_224b98;
        case 0x224b9cu: goto label_224b9c;
        case 0x224ba0u: goto label_224ba0;
        case 0x224ba4u: goto label_224ba4;
        case 0x224ba8u: goto label_224ba8;
        case 0x224bacu: goto label_224bac;
        case 0x224bb0u: goto label_224bb0;
        case 0x224bb4u: goto label_224bb4;
        case 0x224bb8u: goto label_224bb8;
        case 0x224bbcu: goto label_224bbc;
        case 0x224bc0u: goto label_224bc0;
        case 0x224bc4u: goto label_224bc4;
        case 0x224bc8u: goto label_224bc8;
        case 0x224bccu: goto label_224bcc;
        case 0x224bd0u: goto label_224bd0;
        case 0x224bd4u: goto label_224bd4;
        case 0x224bd8u: goto label_224bd8;
        case 0x224bdcu: goto label_224bdc;
        case 0x224be0u: goto label_224be0;
        case 0x224be4u: goto label_224be4;
        case 0x224be8u: goto label_224be8;
        case 0x224becu: goto label_224bec;
        case 0x224bf0u: goto label_224bf0;
        case 0x224bf4u: goto label_224bf4;
        case 0x224bf8u: goto label_224bf8;
        case 0x224bfcu: goto label_224bfc;
        case 0x224c00u: goto label_224c00;
        case 0x224c04u: goto label_224c04;
        case 0x224c08u: goto label_224c08;
        case 0x224c0cu: goto label_224c0c;
        case 0x224c10u: goto label_224c10;
        case 0x224c14u: goto label_224c14;
        case 0x224c18u: goto label_224c18;
        case 0x224c1cu: goto label_224c1c;
        case 0x224c20u: goto label_224c20;
        case 0x224c24u: goto label_224c24;
        case 0x224c28u: goto label_224c28;
        case 0x224c2cu: goto label_224c2c;
        case 0x224c30u: goto label_224c30;
        case 0x224c34u: goto label_224c34;
        case 0x224c38u: goto label_224c38;
        case 0x224c3cu: goto label_224c3c;
        case 0x224c40u: goto label_224c40;
        case 0x224c44u: goto label_224c44;
        case 0x224c48u: goto label_224c48;
        case 0x224c4cu: goto label_224c4c;
        case 0x224c50u: goto label_224c50;
        case 0x224c54u: goto label_224c54;
        case 0x224c58u: goto label_224c58;
        case 0x224c5cu: goto label_224c5c;
        case 0x224c60u: goto label_224c60;
        case 0x224c64u: goto label_224c64;
        case 0x224c68u: goto label_224c68;
        case 0x224c6cu: goto label_224c6c;
        case 0x224c70u: goto label_224c70;
        case 0x224c74u: goto label_224c74;
        case 0x224c78u: goto label_224c78;
        case 0x224c7cu: goto label_224c7c;
        case 0x224c80u: goto label_224c80;
        case 0x224c84u: goto label_224c84;
        case 0x224c88u: goto label_224c88;
        case 0x224c8cu: goto label_224c8c;
        case 0x224c90u: goto label_224c90;
        case 0x224c94u: goto label_224c94;
        case 0x224c98u: goto label_224c98;
        case 0x224c9cu: goto label_224c9c;
        case 0x224ca0u: goto label_224ca0;
        case 0x224ca4u: goto label_224ca4;
        case 0x224ca8u: goto label_224ca8;
        case 0x224cacu: goto label_224cac;
        case 0x224cb0u: goto label_224cb0;
        case 0x224cb4u: goto label_224cb4;
        case 0x224cb8u: goto label_224cb8;
        case 0x224cbcu: goto label_224cbc;
        case 0x224cc0u: goto label_224cc0;
        case 0x224cc4u: goto label_224cc4;
        case 0x224cc8u: goto label_224cc8;
        case 0x224cccu: goto label_224ccc;
        case 0x224cd0u: goto label_224cd0;
        case 0x224cd4u: goto label_224cd4;
        case 0x224cd8u: goto label_224cd8;
        case 0x224cdcu: goto label_224cdc;
        case 0x224ce0u: goto label_224ce0;
        case 0x224ce4u: goto label_224ce4;
        case 0x224ce8u: goto label_224ce8;
        case 0x224cecu: goto label_224cec;
        case 0x224cf0u: goto label_224cf0;
        case 0x224cf4u: goto label_224cf4;
        case 0x224cf8u: goto label_224cf8;
        case 0x224cfcu: goto label_224cfc;
        case 0x224d00u: goto label_224d00;
        case 0x224d04u: goto label_224d04;
        case 0x224d08u: goto label_224d08;
        case 0x224d0cu: goto label_224d0c;
        case 0x224d10u: goto label_224d10;
        case 0x224d14u: goto label_224d14;
        case 0x224d18u: goto label_224d18;
        case 0x224d1cu: goto label_224d1c;
        case 0x224d20u: goto label_224d20;
        case 0x224d24u: goto label_224d24;
        case 0x224d28u: goto label_224d28;
        case 0x224d2cu: goto label_224d2c;
        case 0x224d30u: goto label_224d30;
        case 0x224d34u: goto label_224d34;
        case 0x224d38u: goto label_224d38;
        case 0x224d3cu: goto label_224d3c;
        case 0x224d40u: goto label_224d40;
        case 0x224d44u: goto label_224d44;
        case 0x224d48u: goto label_224d48;
        case 0x224d4cu: goto label_224d4c;
        case 0x224d50u: goto label_224d50;
        case 0x224d54u: goto label_224d54;
        case 0x224d58u: goto label_224d58;
        case 0x224d5cu: goto label_224d5c;
        case 0x224d60u: goto label_224d60;
        case 0x224d64u: goto label_224d64;
        case 0x224d68u: goto label_224d68;
        case 0x224d6cu: goto label_224d6c;
        case 0x224d70u: goto label_224d70;
        case 0x224d74u: goto label_224d74;
        case 0x224d78u: goto label_224d78;
        case 0x224d7cu: goto label_224d7c;
        case 0x224d80u: goto label_224d80;
        case 0x224d84u: goto label_224d84;
        case 0x224d88u: goto label_224d88;
        case 0x224d8cu: goto label_224d8c;
        case 0x224d90u: goto label_224d90;
        case 0x224d94u: goto label_224d94;
        case 0x224d98u: goto label_224d98;
        case 0x224d9cu: goto label_224d9c;
        case 0x224da0u: goto label_224da0;
        case 0x224da4u: goto label_224da4;
        case 0x224da8u: goto label_224da8;
        case 0x224dacu: goto label_224dac;
        case 0x224db0u: goto label_224db0;
        case 0x224db4u: goto label_224db4;
        case 0x224db8u: goto label_224db8;
        case 0x224dbcu: goto label_224dbc;
        case 0x224dc0u: goto label_224dc0;
        case 0x224dc4u: goto label_224dc4;
        case 0x224dc8u: goto label_224dc8;
        case 0x224dccu: goto label_224dcc;
        case 0x224dd0u: goto label_224dd0;
        case 0x224dd4u: goto label_224dd4;
        case 0x224dd8u: goto label_224dd8;
        case 0x224ddcu: goto label_224ddc;
        case 0x224de0u: goto label_224de0;
        case 0x224de4u: goto label_224de4;
        case 0x224de8u: goto label_224de8;
        case 0x224decu: goto label_224dec;
        case 0x224df0u: goto label_224df0;
        case 0x224df4u: goto label_224df4;
        case 0x224df8u: goto label_224df8;
        case 0x224dfcu: goto label_224dfc;
        case 0x224e00u: goto label_224e00;
        case 0x224e04u: goto label_224e04;
        case 0x224e08u: goto label_224e08;
        case 0x224e0cu: goto label_224e0c;
        case 0x224e10u: goto label_224e10;
        case 0x224e14u: goto label_224e14;
        case 0x224e18u: goto label_224e18;
        case 0x224e1cu: goto label_224e1c;
        case 0x224e20u: goto label_224e20;
        case 0x224e24u: goto label_224e24;
        case 0x224e28u: goto label_224e28;
        case 0x224e2cu: goto label_224e2c;
        case 0x224e30u: goto label_224e30;
        case 0x224e34u: goto label_224e34;
        case 0x224e38u: goto label_224e38;
        case 0x224e3cu: goto label_224e3c;
        case 0x224e40u: goto label_224e40;
        case 0x224e44u: goto label_224e44;
        case 0x224e48u: goto label_224e48;
        case 0x224e4cu: goto label_224e4c;
        case 0x224e50u: goto label_224e50;
        case 0x224e54u: goto label_224e54;
        case 0x224e58u: goto label_224e58;
        case 0x224e5cu: goto label_224e5c;
        case 0x224e60u: goto label_224e60;
        case 0x224e64u: goto label_224e64;
        case 0x224e68u: goto label_224e68;
        case 0x224e6cu: goto label_224e6c;
        case 0x224e70u: goto label_224e70;
        case 0x224e74u: goto label_224e74;
        case 0x224e78u: goto label_224e78;
        case 0x224e7cu: goto label_224e7c;
        case 0x224e80u: goto label_224e80;
        case 0x224e84u: goto label_224e84;
        case 0x224e88u: goto label_224e88;
        case 0x224e8cu: goto label_224e8c;
        case 0x224e90u: goto label_224e90;
        case 0x224e94u: goto label_224e94;
        case 0x224e98u: goto label_224e98;
        case 0x224e9cu: goto label_224e9c;
        default: break;
    }

    ctx->pc = 0x224778u;

label_224778:
    // 0x224778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x224778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22477c:
    // 0x22477c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_224780:
    // 0x224780: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x224780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_224784:
    // 0x224784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x224784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_224788:
    // 0x224788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x224788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22478c:
    // 0x22478c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22478cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224790:
    // 0x224790: 0x3c0500c0  lui         $a1, 0xC0
    ctx->pc = 0x224790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
label_224794:
    // 0x224794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224798:
    // 0x224798: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x224798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22479c:
    // 0x22479c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22479cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2247a0:
    // 0x2247a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2247a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2247a4:
    // 0x2247a4: 0xc089998  jal         func_226660
label_2247a8:
    if (ctx->pc == 0x2247A8u) {
        ctx->pc = 0x2247A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247A4u;
        // 0x2247a8: 0x34a58200  ori         $a1, $a1, 0x8200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247ACu;
        goto label_2247ac;
    }
    ctx->pc = 0x2247A4u;
    SET_GPR_U32(ctx, 31, 0x2247ACu);
    ctx->pc = 0x2247A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247A4u;
    // 0x2247a8: 0x34a58200  ori         $a1, $a1, 0x8200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2247A4u, 0x2247ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247ACu;
label_2247ac:
    // 0x2247ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2247b0:
    if (ctx->pc == 0x2247B0u) {
        ctx->pc = 0x2247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247ACu;
        // 0x2247b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247B4u;
        goto label_2247b4;
    }
    ctx->pc = 0x2247ACu;
    {
        const bool branch_taken_0x2247ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247ACu;
        // 0x2247b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247ac) {
            ctx->pc = 0x2247D4u;
            goto label_2247d4;
        }
    }
    ctx->pc = 0x2247B4u;
label_2247b4:
    // 0x2247b4: 0xc08997c  jal         func_2265F0
label_2247b8:
    if (ctx->pc == 0x2247B8u) {
        ctx->pc = 0x2247B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247B4u;
        // 0x2247b8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247BCu;
        goto label_2247bc;
    }
    ctx->pc = 0x2247B4u;
    SET_GPR_U32(ctx, 31, 0x2247BCu);
    ctx->pc = 0x2247B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247B4u;
    // 0x2247b8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2247B4u, 0x2247BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247BCu;
label_2247bc:
    // 0x2247bc: 0x104001af  beqz        $v0, . + 4 + (0x1AF << 2)
label_2247c0:
    if (ctx->pc == 0x2247C0u) {
        ctx->pc = 0x2247C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247BCu;
        // 0x2247c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247C4u;
        goto label_2247c4;
    }
    ctx->pc = 0x2247BCu;
    {
        const bool branch_taken_0x2247bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247BCu;
        // 0x2247c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247bc) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x2247C4u;
label_2247c4:
    // 0x2247c4: 0xc08997c  jal         func_2265F0
label_2247c8:
    if (ctx->pc == 0x2247C8u) {
        ctx->pc = 0x2247C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247C4u;
        // 0x2247c8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247CCu;
        goto label_2247cc;
    }
    ctx->pc = 0x2247C4u;
    SET_GPR_U32(ctx, 31, 0x2247CCu);
    ctx->pc = 0x2247C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247C4u;
    // 0x2247c8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2247C4u, 0x2247CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247CCu;
label_2247cc:
    // 0x2247cc: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
label_2247d0:
    if (ctx->pc == 0x2247D0u) {
        ctx->pc = 0x2247D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247CCu;
        // 0x2247d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247D4u;
        goto label_2247d4;
    }
    ctx->pc = 0x2247CCu;
    {
        const bool branch_taken_0x2247cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247CCu;
        // 0x2247d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247cc) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2247D4u;
label_2247d4:
    // 0x2247d4: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x2247d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
label_2247d8:
    // 0x2247d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2247d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2247dc:
    // 0x2247dc: 0xc089998  jal         func_226660
label_2247e0:
    if (ctx->pc == 0x2247E0u) {
        ctx->pc = 0x2247E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247DCu;
        // 0x2247e0: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247E4u;
        goto label_2247e4;
    }
    ctx->pc = 0x2247DCu;
    SET_GPR_U32(ctx, 31, 0x2247E4u);
    ctx->pc = 0x2247E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247DCu;
    // 0x2247e0: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2247DCu, 0x2247E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247E4u;
label_2247e4:
    // 0x2247e4: 0x144001a6  bnez        $v0, . + 4 + (0x1A6 << 2)
label_2247e8:
    if (ctx->pc == 0x2247E8u) {
        ctx->pc = 0x2247E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247E4u;
        // 0x2247e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247ECu;
        goto label_2247ec;
    }
    ctx->pc = 0x2247E4u;
    {
        const bool branch_taken_0x2247e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2247E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247E4u;
        // 0x2247e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247e4) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2247ECu;
label_2247ec:
    // 0x2247ec: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2247f0:
    // 0x2247f0: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x2247f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_2247f4:
    // 0x2247f4: 0x146001a2  bnez        $v1, . + 4 + (0x1A2 << 2)
label_2247f8:
    if (ctx->pc == 0x2247F8u) {
        ctx->pc = 0x2247F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247F4u;
        // 0x2247f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247FCu;
        goto label_2247fc;
    }
    ctx->pc = 0x2247F4u;
    {
        const bool branch_taken_0x2247f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2247F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247F4u;
        // 0x2247f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247f4) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2247FCu;
label_2247fc:
    // 0x2247fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2247fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224800:
    // 0x224800: 0xc08a62e  jal         func_2298B8
label_224804:
    if (ctx->pc == 0x224804u) {
        ctx->pc = 0x224804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224800u;
        // 0x224804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224808u;
        goto label_224808;
    }
    ctx->pc = 0x224800u;
    SET_GPR_U32(ctx, 31, 0x224808u);
    ctx->pc = 0x224804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224800u;
    // 0x224804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x224800u, 0x224808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224808u;
label_224808:
    // 0x224808: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x224808u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22480c:
    // 0x22480c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22480cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224810:
    // 0x224810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224814:
    // 0x224814: 0xc08c24c  jal         func_230930
label_224818:
    if (ctx->pc == 0x224818u) {
        ctx->pc = 0x224818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224814u;
        // 0x224818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22481Cu;
        goto label_22481c;
    }
    ctx->pc = 0x224814u;
    SET_GPR_U32(ctx, 31, 0x22481Cu);
    ctx->pc = 0x224818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224814u;
    // 0x224818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230930u, 0x224814u, 0x22481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22481Cu;
label_22481c:
    // 0x22481c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22481cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224820:
    // 0x224820: 0x0  nop
    ctx->pc = 0x224820u;
    // NOP
label_224824:
    // 0x224824: 0x45010196  bc1t        . + 4 + (0x196 << 2)
label_224828:
    if (ctx->pc == 0x224828u) {
        ctx->pc = 0x224828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224824u;
        // 0x224828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22482Cu;
        goto label_22482c;
    }
    ctx->pc = 0x224824u;
    {
        const bool branch_taken_0x224824 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224824u;
        // 0x224828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224824) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x22482Cu;
label_22482c:
    // 0x22482c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_224830:
    // 0x224830: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
label_224834:
    if (ctx->pc == 0x224834u) {
        ctx->pc = 0x224838u;
        goto label_224838;
    }
    ctx->pc = 0x224830u;
    {
        const bool branch_taken_0x224830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x224830) {
            ctx->pc = 0x2248A4u;
            goto label_2248a4;
        }
    }
    ctx->pc = 0x224838u;
label_224838:
    // 0x224838: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_22483c:
    if (ctx->pc == 0x22483Cu) {
        ctx->pc = 0x22483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224838u;
        // 0x22483c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224840u;
        goto label_224840;
    }
    ctx->pc = 0x224838u;
    {
        const bool branch_taken_0x224838 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x22483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224838u;
        // 0x22483c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224838) {
            ctx->pc = 0x22484Cu;
            goto label_22484c;
        }
    }
    ctx->pc = 0x224840u;
label_224840:
    // 0x224840: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x224840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_224844:
    // 0x224844: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_224848:
    if (ctx->pc == 0x224848u) {
        ctx->pc = 0x224848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224844u;
        // 0x224848: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22484Cu;
        goto label_22484c;
    }
    ctx->pc = 0x224844u;
    {
        const bool branch_taken_0x224844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224844) {
            ctx->pc = 0x224848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224844u;
            // 0x224848: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224858u;
            goto label_224858;
        }
    }
    ctx->pc = 0x22484Cu;
label_22484c:
    // 0x22484c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x22484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_224850:
    // 0x224850: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_224854:
    if (ctx->pc == 0x224854u) {
        ctx->pc = 0x224854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224850u;
        // 0x224854: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224858u;
        goto label_224858;
    }
    ctx->pc = 0x224850u;
    {
        const bool branch_taken_0x224850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x224850) {
            ctx->pc = 0x224854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224850u;
            // 0x224854: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224858u;
            goto label_224858;
        }
    }
    ctx->pc = 0x224858u;
label_224858:
    // 0x224858: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_22485c:
    if (ctx->pc == 0x22485Cu) {
        ctx->pc = 0x22485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224858u;
        // 0x22485c: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224860u;
        goto label_224860;
    }
    ctx->pc = 0x224858u;
    {
        const bool branch_taken_0x224858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224858u;
        // 0x22485c: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224858) {
            ctx->pc = 0x224908u;
            goto label_224908;
        }
    }
    ctx->pc = 0x224860u;
label_224860:
    // 0x224860: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_224864:
    if (ctx->pc == 0x224864u) {
        ctx->pc = 0x224864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224860u;
        // 0x224864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224868u;
        goto label_224868;
    }
    ctx->pc = 0x224860u;
    {
        const bool branch_taken_0x224860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224860u;
        // 0x224864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224860) {
            ctx->pc = 0x2248CCu;
            goto label_2248cc;
        }
    }
    ctx->pc = 0x224868u;
label_224868:
    // 0x224868: 0xc089bfc  jal         func_226FF0
label_22486c:
    if (ctx->pc == 0x22486Cu) {
        ctx->pc = 0x22486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224868u;
        // 0x22486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224870u;
        goto label_224870;
    }
    ctx->pc = 0x224868u;
    SET_GPR_U32(ctx, 31, 0x224870u);
    ctx->pc = 0x22486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224868u;
    // 0x22486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x224868u, 0x224870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224870u;
label_224870:
    // 0x224870: 0xc0e57ce  jal         func_395F38
label_224874:
    if (ctx->pc == 0x224874u) {
        ctx->pc = 0x224874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224870u;
        // 0x224874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224878u;
        goto label_224878;
    }
    ctx->pc = 0x224870u;
    SET_GPR_U32(ctx, 31, 0x224878u);
    ctx->pc = 0x224874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224870u;
    // 0x224874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x224870u, 0x224878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224878u;
label_224878:
    // 0x224878: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22487c:
    // 0x22487c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_224880:
    if (ctx->pc == 0x224880u) {
        ctx->pc = 0x224880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22487Cu;
        // 0x224880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224884u;
        goto label_224884;
    }
    ctx->pc = 0x22487Cu;
    {
        const bool branch_taken_0x22487c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22487Cu;
        // 0x224880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22487c) {
            ctx->pc = 0x2248C8u;
            goto label_2248c8;
        }
    }
    ctx->pc = 0x224884u;
label_224884:
    // 0x224884: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x224884u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_224888:
    // 0x224888: 0xc0e44cc  jal         func_391330
label_22488c:
    if (ctx->pc == 0x22488Cu) {
        ctx->pc = 0x22488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224888u;
        // 0x22488c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224890u;
        goto label_224890;
    }
    ctx->pc = 0x224888u;
    SET_GPR_U32(ctx, 31, 0x224890u);
    ctx->pc = 0x22488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224888u;
    // 0x22488c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x224888u, 0x224890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224890u;
label_224890:
    // 0x224890: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x224890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_224894:
    // 0x224894: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x224894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_224898:
    // 0x224898: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x224898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22489c:
    // 0x22489c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2248a0:
    if (ctx->pc == 0x2248A0u) {
        ctx->pc = 0x2248A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22489Cu;
        // 0x2248a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248A4u;
        goto label_2248a4;
    }
    ctx->pc = 0x22489Cu;
    {
        const bool branch_taken_0x22489c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22489Cu;
        // 0x2248a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22489c) {
            ctx->pc = 0x2248CCu;
            goto label_2248cc;
        }
    }
    ctx->pc = 0x2248A4u;
label_2248a4:
    // 0x2248a4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2248a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2248a8:
    // 0x2248a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2248a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2248ac:
    // 0x2248ac: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2248acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2248b0:
    // 0x2248b0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2248b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2248b4:
    // 0x2248b4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2248b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2248b8:
    // 0x2248b8: 0xc08997c  jal         func_2265F0
label_2248bc:
    if (ctx->pc == 0x2248BCu) {
        ctx->pc = 0x2248BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248B8u;
        // 0x2248bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248C0u;
        goto label_2248c0;
    }
    ctx->pc = 0x2248B8u;
    SET_GPR_U32(ctx, 31, 0x2248C0u);
    ctx->pc = 0x2248BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248B8u;
    // 0x2248bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2248B8u, 0x2248C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248C0u;
label_2248c0:
    // 0x2248c0: 0x1000016f  b           . + 4 + (0x16F << 2)
label_2248c4:
    if (ctx->pc == 0x2248C4u) {
        ctx->pc = 0x2248C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248C0u;
        // 0x2248c4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248C8u;
        goto label_2248c8;
    }
    ctx->pc = 0x2248C0u;
    {
        const bool branch_taken_0x2248c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248C0u;
        // 0x2248c4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248c0) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2248C8u;
label_2248c8:
    // 0x2248c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2248c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2248cc:
    // 0x2248cc: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2248ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2248d0:
    // 0x2248d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2248d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2248d4:
    // 0x2248d4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2248d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2248d8:
    // 0x2248d8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2248d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2248dc:
    // 0x2248dc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2248dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2248e0:
    // 0x2248e0: 0xc08997c  jal         func_2265F0
label_2248e4:
    if (ctx->pc == 0x2248E4u) {
        ctx->pc = 0x2248E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248E0u;
        // 0x2248e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248E8u;
        goto label_2248e8;
    }
    ctx->pc = 0x2248E0u;
    SET_GPR_U32(ctx, 31, 0x2248E8u);
    ctx->pc = 0x2248E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248E0u;
    // 0x2248e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2248E0u, 0x2248E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248E8u;
label_2248e8:
    // 0x2248e8: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
label_2248ec:
    if (ctx->pc == 0x2248ECu) {
        ctx->pc = 0x2248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248E8u;
        // 0x2248ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248F0u;
        goto label_2248f0;
    }
    ctx->pc = 0x2248E8u;
    {
        const bool branch_taken_0x2248e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248E8u;
        // 0x2248ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248e8) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2248F0u;
label_2248f0:
    // 0x2248f0: 0x3c05000e  lui         $a1, 0xE
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
label_2248f4:
    // 0x2248f4: 0x34a53000  ori         $a1, $a1, 0x3000
    ctx->pc = 0x2248f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
label_2248f8:
    // 0x2248f8: 0xc08997c  jal         func_2265F0
label_2248fc:
    if (ctx->pc == 0x2248FCu) {
        ctx->pc = 0x2248FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248F8u;
        // 0x2248fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224900u;
        goto label_224900;
    }
    ctx->pc = 0x2248F8u;
    SET_GPR_U32(ctx, 31, 0x224900u);
    ctx->pc = 0x2248FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248F8u;
    // 0x2248fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2248F8u, 0x224900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224900u;
label_224900:
    // 0x224900: 0x10000125  b           . + 4 + (0x125 << 2)
label_224904:
    if (ctx->pc == 0x224904u) {
        ctx->pc = 0x224904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224900u;
        // 0x224904: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224908u;
        goto label_224908;
    }
    ctx->pc = 0x224900u;
    {
        const bool branch_taken_0x224900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224900u;
        // 0x224904: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224900) {
            ctx->pc = 0x224D98u;
            goto label_224d98;
        }
    }
    ctx->pc = 0x224908u;
label_224908:
    // 0x224908: 0x2623fff4  addiu       $v1, $s1, -0xC
    ctx->pc = 0x224908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
label_22490c:
    // 0x22490c: 0x2c620022  sltiu       $v0, $v1, 0x22
    ctx->pc = 0x22490cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
label_224910:
    // 0x224910: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
label_224914:
    if (ctx->pc == 0x224914u) {
        ctx->pc = 0x224914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224910u;
        // 0x224914: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224918u;
        goto label_224918;
    }
    ctx->pc = 0x224910u;
    {
        const bool branch_taken_0x224910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224910u;
        // 0x224914: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224910) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224918u;
label_224918:
    // 0x224918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22491c:
    // 0x22491c: 0x2442b420  addiu       $v0, $v0, -0x4BE0
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
label_224920:
    // 0x224920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_224924:
    // 0x224924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_224928:
    // 0x224928: 0x800008  jr          $a0
label_22492c:
    if (ctx->pc == 0x22492Cu) {
        ctx->pc = 0x224930u;
        goto label_224930;
    }
    ctx->pc = 0x224928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224930u: goto label_224930;
            case 0x224950u: goto label_224950;
            case 0x2249A4u: goto label_2249a4;
            case 0x224A70u: goto label_224a70;
            case 0x224AB0u: goto label_224ab0;
            case 0x224AD0u: goto label_224ad0;
            case 0x224B10u: goto label_224b10;
            case 0x224B5Cu: goto label_224b5c;
            case 0x224B8Cu: goto label_224b8c;
            case 0x224B98u: goto label_224b98;
            case 0x224BCCu: goto label_224bcc;
            case 0x224C24u: goto label_224c24;
            case 0x224CB4u: goto label_224cb4;
            case 0x224D00u: goto label_224d00;
            case 0x224DA0u: goto label_224da0;
            case 0x224E0Cu: goto label_224e0c;
            case 0x224E7Cu: goto label_224e7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224930u;
label_224930:
    // 0x224930: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x224930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224934:
    // 0x224934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224938:
    // 0x224938: 0xc088fa8  jal         func_223EA0
label_22493c:
    if (ctx->pc == 0x22493Cu) {
        ctx->pc = 0x22493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224938u;
        // 0x22493c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224940u;
        goto label_224940;
    }
    ctx->pc = 0x224938u;
    SET_GPR_U32(ctx, 31, 0x224940u);
    ctx->pc = 0x22493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224938u;
    // 0x22493c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x224938u, 0x224940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224940u;
label_224940:
    // 0x224940: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
label_224944:
    if (ctx->pc == 0x224944u) {
        ctx->pc = 0x224944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224940u;
        // 0x224944: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224948u;
        goto label_224948;
    }
    ctx->pc = 0x224940u;
    {
        const bool branch_taken_0x224940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224940u;
        // 0x224944: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224940) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224948u;
label_224948:
    // 0x224948: 0x1000000d  b           . + 4 + (0xD << 2)
label_22494c:
    if (ctx->pc == 0x22494Cu) {
        ctx->pc = 0x224950u;
        goto label_224950;
    }
    ctx->pc = 0x224948u;
    {
        const bool branch_taken_0x224948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224948) {
            ctx->pc = 0x224980u;
            goto label_224980;
        }
    }
    ctx->pc = 0x224950u;
label_224950:
    // 0x224950: 0x12500148  beq         $s2, $s0, . + 4 + (0x148 << 2)
label_224954:
    if (ctx->pc == 0x224954u) {
        ctx->pc = 0x224954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224950u;
        // 0x224954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224958u;
        goto label_224958;
    }
    ctx->pc = 0x224950u;
    {
        const bool branch_taken_0x224950 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x224954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224950u;
        // 0x224954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224950) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224958u;
label_224958:
    // 0x224958: 0xc089480  jal         func_225200
label_22495c:
    if (ctx->pc == 0x22495Cu) {
        ctx->pc = 0x22495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224958u;
        // 0x22495c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224960u;
        goto label_224960;
    }
    ctx->pc = 0x224958u;
    SET_GPR_U32(ctx, 31, 0x224960u);
    ctx->pc = 0x22495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224958u;
    // 0x22495c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x224958u, 0x224960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224960u;
label_224960:
    // 0x224960: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
label_224964:
    if (ctx->pc == 0x224964u) {
        ctx->pc = 0x224964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224960u;
        // 0x224964: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224968u;
        goto label_224968;
    }
    ctx->pc = 0x224960u;
    {
        const bool branch_taken_0x224960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224960u;
        // 0x224964: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224960) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224968u;
label_224968:
    // 0x224968: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x224968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22496c:
    // 0x22496c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224970:
    // 0x224970: 0xc089998  jal         func_226660
label_224974:
    if (ctx->pc == 0x224974u) {
        ctx->pc = 0x224974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224970u;
        // 0x224974: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224978u;
        goto label_224978;
    }
    ctx->pc = 0x224970u;
    SET_GPR_U32(ctx, 31, 0x224978u);
    ctx->pc = 0x224974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224970u;
    // 0x224974: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x224970u, 0x224978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224978u;
label_224978:
    // 0x224978: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
label_22497c:
    if (ctx->pc == 0x22497Cu) {
        ctx->pc = 0x22497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224978u;
        // 0x22497c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224980u;
        goto label_224980;
    }
    ctx->pc = 0x224978u;
    {
        const bool branch_taken_0x224978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224978u;
        // 0x22497c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224978) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224980u;
label_224980:
    // 0x224980: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224984:
    // 0x224984: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224988:
    // 0x224988: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_22498c:
    // 0x22498c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x22498cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224990:
    // 0x224990: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224994:
    // 0x224994: 0xc08997c  jal         func_2265F0
label_224998:
    if (ctx->pc == 0x224998u) {
        ctx->pc = 0x224998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224994u;
        // 0x224998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22499Cu;
        goto label_22499c;
    }
    ctx->pc = 0x224994u;
    SET_GPR_U32(ctx, 31, 0x22499Cu);
    ctx->pc = 0x224998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224994u;
    // 0x224998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224994u, 0x22499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22499Cu;
label_22499c:
    // 0x22499c: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_2249a0:
    if (ctx->pc == 0x2249A0u) {
        ctx->pc = 0x2249A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22499Cu;
        // 0x2249a0: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2249A4u;
        goto label_2249a4;
    }
    ctx->pc = 0x22499Cu;
    {
        const bool branch_taken_0x22499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22499Cu;
        // 0x2249a0: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22499c) {
            ctx->pc = 0x224CF8u;
            goto label_224cf8;
        }
    }
    ctx->pc = 0x2249A4u;
label_2249a4:
    // 0x2249a4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2249a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2249a8:
    // 0x2249a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2249a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2249ac:
    // 0x2249ac: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2249acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2249b0:
    // 0x2249b0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2249b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2249b4:
    // 0x2249b4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2249b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2249b8:
    // 0x2249b8: 0xc08997c  jal         func_2265F0
label_2249bc:
    if (ctx->pc == 0x2249BCu) {
        ctx->pc = 0x2249BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249B8u;
        // 0x2249bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2249C0u;
        goto label_2249c0;
    }
    ctx->pc = 0x2249B8u;
    SET_GPR_U32(ctx, 31, 0x2249C0u);
    ctx->pc = 0x2249BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249B8u;
    // 0x2249bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2249B8u, 0x2249C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249C0u;
label_2249c0:
    // 0x2249c0: 0x1440012f  bnez        $v0, . + 4 + (0x12F << 2)
label_2249c4:
    if (ctx->pc == 0x2249C4u) {
        ctx->pc = 0x2249C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249C0u;
        // 0x2249c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2249C8u;
        goto label_2249c8;
    }
    ctx->pc = 0x2249C0u;
    {
        const bool branch_taken_0x2249c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2249C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249C0u;
        // 0x2249c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249c0) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2249C8u;
label_2249c8:
    // 0x2249c8: 0xc088c1a  jal         func_223068
label_2249cc:
    if (ctx->pc == 0x2249CCu) {
        ctx->pc = 0x2249CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249C8u;
        // 0x2249cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2249D0u;
        goto label_2249d0;
    }
    ctx->pc = 0x2249C8u;
    SET_GPR_U32(ctx, 31, 0x2249D0u);
    ctx->pc = 0x2249CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249C8u;
    // 0x2249cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x2249C8u, 0x2249D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249D0u;
label_2249d0:
    // 0x2249d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2249d4:
    // 0x2249d4: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2249d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2249d8:
    // 0x2249d8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2249d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2249dc:
    // 0x2249dc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2249e0:
    if (ctx->pc == 0x2249E0u) {
        ctx->pc = 0x2249E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249DCu;
        // 0x2249e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2249E4u;
        goto label_2249e4;
    }
    ctx->pc = 0x2249DCu;
    {
        const bool branch_taken_0x2249dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2249dc) {
            ctx->pc = 0x2249E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2249DCu;
            // 0x2249e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2249E4u;
            goto label_2249e4;
        }
    }
    ctx->pc = 0x2249E4u;
label_2249e4:
    // 0x2249e4: 0x84a30148  lh          $v1, 0x148($a1)
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
label_2249e8:
    // 0x2249e8: 0x1012  mflo        $v0
    ctx->pc = 0x2249e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2249ec:
    // 0x2249ec: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2249ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2249f0:
    // 0x2249f0: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
label_2249f4:
    if (ctx->pc == 0x2249F4u) {
        ctx->pc = 0x2249F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249F0u;
        // 0x2249f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2249F8u;
        goto label_2249f8;
    }
    ctx->pc = 0x2249F0u;
    {
        const bool branch_taken_0x2249f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2249F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249F0u;
        // 0x2249f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249f0) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x2249F8u;
label_2249f8:
    // 0x2249f8: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2249f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2249fc:
    // 0x2249fc: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2249fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_224a00:
    // 0x224a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x224a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_224a04:
    // 0x224a04: 0x1440011e  bnez        $v0, . + 4 + (0x11E << 2)
label_224a08:
    if (ctx->pc == 0x224A08u) {
        ctx->pc = 0x224A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A04u;
        // 0x224a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A0Cu;
        goto label_224a0c;
    }
    ctx->pc = 0x224A04u;
    {
        const bool branch_taken_0x224a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A04u;
        // 0x224a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a04) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224A0Cu;
label_224a0c:
    // 0x224a0c: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x224a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
label_224a10:
    // 0x224a10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224a14:
    // 0x224a14: 0x34a591ef  ori         $a1, $a1, 0x91EF
    ctx->pc = 0x224a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37359);
label_224a18:
    // 0x224a18: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224a1c:
    // 0x224a1c: 0x34a507d0  ori         $a1, $a1, 0x7D0
    ctx->pc = 0x224a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2000);
label_224a20:
    // 0x224a20: 0xc08997c  jal         func_2265F0
label_224a24:
    if (ctx->pc == 0x224A24u) {
        ctx->pc = 0x224A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A20u;
        // 0x224a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A28u;
        goto label_224a28;
    }
    ctx->pc = 0x224A20u;
    SET_GPR_U32(ctx, 31, 0x224A28u);
    ctx->pc = 0x224A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A20u;
    // 0x224a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224A20u, 0x224A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A28u;
label_224a28:
    // 0x224a28: 0x14400115  bnez        $v0, . + 4 + (0x115 << 2)
label_224a2c:
    if (ctx->pc == 0x224A2Cu) {
        ctx->pc = 0x224A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A28u;
        // 0x224a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A30u;
        goto label_224a30;
    }
    ctx->pc = 0x224A28u;
    {
        const bool branch_taken_0x224a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A28u;
        // 0x224a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a28) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224A30u;
label_224a30:
    // 0x224a30: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x224a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_224a34:
    // 0x224a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224a38:
    // 0x224a38: 0xc089998  jal         func_226660
label_224a3c:
    if (ctx->pc == 0x224A3Cu) {
        ctx->pc = 0x224A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A38u;
        // 0x224a3c: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A40u;
        goto label_224a40;
    }
    ctx->pc = 0x224A38u;
    SET_GPR_U32(ctx, 31, 0x224A40u);
    ctx->pc = 0x224A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A38u;
    // 0x224a3c: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x224A38u, 0x224A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A40u;
label_224a40:
    // 0x224a40: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
label_224a44:
    if (ctx->pc == 0x224A44u) {
        ctx->pc = 0x224A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A40u;
        // 0x224a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A48u;
        goto label_224a48;
    }
    ctx->pc = 0x224A40u;
    {
        const bool branch_taken_0x224a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A40u;
        // 0x224a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a40) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224A48u;
label_224a48:
    // 0x224a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224a4c:
    // 0x224a4c: 0xc08997c  jal         func_2265F0
label_224a50:
    if (ctx->pc == 0x224A50u) {
        ctx->pc = 0x224A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A4Cu;
        // 0x224a50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A54u;
        goto label_224a54;
    }
    ctx->pc = 0x224A4Cu;
    SET_GPR_U32(ctx, 31, 0x224A54u);
    ctx->pc = 0x224A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A4Cu;
    // 0x224a50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224A4Cu, 0x224A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A54u;
label_224a54:
    // 0x224a54: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_224a58:
    if (ctx->pc == 0x224A58u) {
        ctx->pc = 0x224A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A54u;
        // 0x224a58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A5Cu;
        goto label_224a5c;
    }
    ctx->pc = 0x224A54u;
    {
        const bool branch_taken_0x224a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A54u;
        // 0x224a58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a54) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224A5Cu;
label_224a5c:
    // 0x224a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224a60:
    // 0x224a60: 0xc099cb4  jal         func_2672D0
label_224a64:
    if (ctx->pc == 0x224A64u) {
        ctx->pc = 0x224A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A60u;
        // 0x224a64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A68u;
        goto label_224a68;
    }
    ctx->pc = 0x224A60u;
    SET_GPR_U32(ctx, 31, 0x224A68u);
    ctx->pc = 0x224A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A60u;
    // 0x224a64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x224A60u, 0x224A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A68u;
label_224a68:
    // 0x224a68: 0x10000105  b           . + 4 + (0x105 << 2)
label_224a6c:
    if (ctx->pc == 0x224A6Cu) {
        ctx->pc = 0x224A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A68u;
        // 0x224a6c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A70u;
        goto label_224a70;
    }
    ctx->pc = 0x224A68u;
    {
        const bool branch_taken_0x224a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A68u;
        // 0x224a6c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a68) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224A70u;
label_224a70:
    // 0x224a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224a74:
    // 0x224a74: 0xc08997c  jal         func_2265F0
label_224a78:
    if (ctx->pc == 0x224A78u) {
        ctx->pc = 0x224A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A74u;
        // 0x224a78: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A7Cu;
        goto label_224a7c;
    }
    ctx->pc = 0x224A74u;
    SET_GPR_U32(ctx, 31, 0x224A7Cu);
    ctx->pc = 0x224A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A74u;
    // 0x224a78: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224A74u, 0x224A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A7Cu;
label_224a7c:
    // 0x224a7c: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
label_224a80:
    if (ctx->pc == 0x224A80u) {
        ctx->pc = 0x224A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A7Cu;
        // 0x224a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A84u;
        goto label_224a84;
    }
    ctx->pc = 0x224A7Cu;
    {
        const bool branch_taken_0x224a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A7Cu;
        // 0x224a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a7c) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224A84u;
label_224a84:
    // 0x224a84: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224a88:
    // 0x224a88: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224a8c:
    // 0x224a8c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224a90:
    // 0x224a90: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224a94:
    // 0x224a94: 0x34a50700  ori         $a1, $a1, 0x700
    ctx->pc = 0x224a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1792);
label_224a98:
    // 0x224a98: 0xc08997c  jal         func_2265F0
label_224a9c:
    if (ctx->pc == 0x224A9Cu) {
        ctx->pc = 0x224AA0u;
        goto label_224aa0;
    }
    ctx->pc = 0x224A98u;
    SET_GPR_U32(ctx, 31, 0x224AA0u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224A98u, 0x224AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AA0u;
label_224aa0:
    // 0x224aa0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_224aa4:
    if (ctx->pc == 0x224AA4u) {
        ctx->pc = 0x224AA8u;
        goto label_224aa8;
    }
    ctx->pc = 0x224AA0u;
    {
        const bool branch_taken_0x224aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224aa0) {
            ctx->pc = 0x224C10u;
            goto label_224c10;
        }
    }
    ctx->pc = 0x224AA8u;
label_224aa8:
    // 0x224aa8: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_224aac:
    if (ctx->pc == 0x224AACu) {
        ctx->pc = 0x224AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA8u;
        // 0x224aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224AB0u;
        goto label_224ab0;
    }
    ctx->pc = 0x224AA8u;
    {
        const bool branch_taken_0x224aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA8u;
        // 0x224aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224aa8) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224AB0u;
label_224ab0:
    // 0x224ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224ab4:
    // 0x224ab4: 0x240510c0  addiu       $a1, $zero, 0x10C0
    ctx->pc = 0x224ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4288));
label_224ab8:
    // 0x224ab8: 0xc08997c  jal         func_2265F0
label_224abc:
    if (ctx->pc == 0x224ABCu) {
        ctx->pc = 0x224AC0u;
        goto label_224ac0;
    }
    ctx->pc = 0x224AB8u;
    SET_GPR_U32(ctx, 31, 0x224AC0u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224AB8u, 0x224AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AC0u;
label_224ac0:
    // 0x224ac0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_224ac4:
    if (ctx->pc == 0x224AC4u) {
        ctx->pc = 0x224AC8u;
        goto label_224ac8;
    }
    ctx->pc = 0x224AC0u;
    {
        const bool branch_taken_0x224ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224ac0) {
            ctx->pc = 0x224C10u;
            goto label_224c10;
        }
    }
    ctx->pc = 0x224AC8u;
label_224ac8:
    // 0x224ac8: 0x100000ed  b           . + 4 + (0xED << 2)
label_224acc:
    if (ctx->pc == 0x224ACCu) {
        ctx->pc = 0x224ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AC8u;
        // 0x224acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224AD0u;
        goto label_224ad0;
    }
    ctx->pc = 0x224AC8u;
    {
        const bool branch_taken_0x224ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AC8u;
        // 0x224acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ac8) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224AD0u;
label_224ad0:
    // 0x224ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224ad4:
    // 0x224ad4: 0xc08997c  jal         func_2265F0
label_224ad8:
    if (ctx->pc == 0x224AD8u) {
        ctx->pc = 0x224AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AD4u;
        // 0x224ad8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224ADCu;
        goto label_224adc;
    }
    ctx->pc = 0x224AD4u;
    SET_GPR_U32(ctx, 31, 0x224ADCu);
    ctx->pc = 0x224AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224AD4u;
    // 0x224ad8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224AD4u, 0x224ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224ADCu;
label_224adc:
    // 0x224adc: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_224ae0:
    if (ctx->pc == 0x224AE0u) {
        ctx->pc = 0x224AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ADCu;
        // 0x224ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224AE4u;
        goto label_224ae4;
    }
    ctx->pc = 0x224ADCu;
    {
        const bool branch_taken_0x224adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ADCu;
        // 0x224ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224adc) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224AE4u;
label_224ae4:
    // 0x224ae4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224ae8:
    // 0x224ae8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224aec:
    // 0x224aec: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224af0:
    // 0x224af0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224af4:
    // 0x224af4: 0x34a50700  ori         $a1, $a1, 0x700
    ctx->pc = 0x224af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1792);
label_224af8:
    // 0x224af8: 0xc08997c  jal         func_2265F0
label_224afc:
    if (ctx->pc == 0x224AFCu) {
        ctx->pc = 0x224AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AF8u;
        // 0x224afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B00u;
        goto label_224b00;
    }
    ctx->pc = 0x224AF8u;
    SET_GPR_U32(ctx, 31, 0x224B00u);
    ctx->pc = 0x224AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224AF8u;
    // 0x224afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224AF8u, 0x224B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B00u;
label_224b00:
    // 0x224b00: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_224b04:
    if (ctx->pc == 0x224B04u) {
        ctx->pc = 0x224B08u;
        goto label_224b08;
    }
    ctx->pc = 0x224B00u;
    {
        const bool branch_taken_0x224b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b00) {
            ctx->pc = 0x224CA0u;
            goto label_224ca0;
        }
    }
    ctx->pc = 0x224B08u;
label_224b08:
    // 0x224b08: 0x100000dd  b           . + 4 + (0xDD << 2)
label_224b0c:
    if (ctx->pc == 0x224B0Cu) {
        ctx->pc = 0x224B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B08u;
        // 0x224b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B10u;
        goto label_224b10;
    }
    ctx->pc = 0x224B08u;
    {
        const bool branch_taken_0x224b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B08u;
        // 0x224b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b08) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224B10u;
label_224b10:
    // 0x224b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224b14:
    // 0x224b14: 0xc08997c  jal         func_2265F0
label_224b18:
    if (ctx->pc == 0x224B18u) {
        ctx->pc = 0x224B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B14u;
        // 0x224b18: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B1Cu;
        goto label_224b1c;
    }
    ctx->pc = 0x224B14u;
    SET_GPR_U32(ctx, 31, 0x224B1Cu);
    ctx->pc = 0x224B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B14u;
    // 0x224b18: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224B14u, 0x224B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B1Cu;
label_224b1c:
    // 0x224b1c: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
label_224b20:
    if (ctx->pc == 0x224B20u) {
        ctx->pc = 0x224B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B1Cu;
        // 0x224b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B24u;
        goto label_224b24;
    }
    ctx->pc = 0x224B1Cu;
    {
        const bool branch_taken_0x224b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B1Cu;
        // 0x224b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b1c) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224B24u;
label_224b24:
    // 0x224b24: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224b28:
    // 0x224b28: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224b28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224b2c:
    // 0x224b2c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224b30:
    // 0x224b30: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224b34:
    // 0x224b34: 0x34a50700  ori         $a1, $a1, 0x700
    ctx->pc = 0x224b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1792);
label_224b38:
    // 0x224b38: 0xc08997c  jal         func_2265F0
label_224b3c:
    if (ctx->pc == 0x224B3Cu) {
        ctx->pc = 0x224B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B38u;
        // 0x224b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B40u;
        goto label_224b40;
    }
    ctx->pc = 0x224B38u;
    SET_GPR_U32(ctx, 31, 0x224B40u);
    ctx->pc = 0x224B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B38u;
    // 0x224b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224B38u, 0x224B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B40u;
label_224b40:
    // 0x224b40: 0x544000cf  bnel        $v0, $zero, . + 4 + (0xCF << 2)
label_224b44:
    if (ctx->pc == 0x224B44u) {
        ctx->pc = 0x224B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B40u;
        // 0x224b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B48u;
        goto label_224b48;
    }
    ctx->pc = 0x224B40u;
    {
        const bool branch_taken_0x224b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224b40) {
            ctx->pc = 0x224B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224B40u;
            // 0x224b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224B48u;
label_224b48:
    // 0x224b48: 0xc0e409a  jal         func_390268
label_224b4c:
    if (ctx->pc == 0x224B4Cu) {
        ctx->pc = 0x224B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B48u;
        // 0x224b4c: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B50u;
        goto label_224b50;
    }
    ctx->pc = 0x224B48u;
    SET_GPR_U32(ctx, 31, 0x224B50u);
    ctx->pc = 0x224B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B48u;
    // 0x224b4c: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x224B48u, 0x224B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B50u;
label_224b50:
    // 0x224b50: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x224b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_224b54:
    // 0x224b54: 0x100000ca  b           . + 4 + (0xCA << 2)
label_224b58:
    if (ctx->pc == 0x224B58u) {
        ctx->pc = 0x224B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B54u;
        // 0x224b58: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B5Cu;
        goto label_224b5c;
    }
    ctx->pc = 0x224B54u;
    {
        const bool branch_taken_0x224b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B54u;
        // 0x224b58: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b54) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224B5Cu;
label_224b5c:
    // 0x224b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224b60:
    // 0x224b60: 0xc08997c  jal         func_2265F0
label_224b64:
    if (ctx->pc == 0x224B64u) {
        ctx->pc = 0x224B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B60u;
        // 0x224b64: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B68u;
        goto label_224b68;
    }
    ctx->pc = 0x224B60u;
    SET_GPR_U32(ctx, 31, 0x224B68u);
    ctx->pc = 0x224B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B60u;
    // 0x224b64: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224B60u, 0x224B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B68u;
label_224b68:
    // 0x224b68: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_224b6c:
    if (ctx->pc == 0x224B6Cu) {
        ctx->pc = 0x224B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B68u;
        // 0x224b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B70u;
        goto label_224b70;
    }
    ctx->pc = 0x224B68u;
    {
        const bool branch_taken_0x224b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B68u;
        // 0x224b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b68) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224B70u;
label_224b70:
    // 0x224b70: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224b74:
    // 0x224b74: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224b78:
    // 0x224b78: 0x34a5d3ee  ori         $a1, $a1, 0xD3EE
    ctx->pc = 0x224b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54254);
label_224b7c:
    // 0x224b7c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224b80:
    // 0x224b80: 0x34a503f0  ori         $a1, $a1, 0x3F0
    ctx->pc = 0x224b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1008);
label_224b84:
    // 0x224b84: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_224b88:
    if (ctx->pc == 0x224B88u) {
        ctx->pc = 0x224B8Cu;
        goto label_224b8c;
    }
    ctx->pc = 0x224B84u;
    {
        const bool branch_taken_0x224b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b84) {
            ctx->pc = 0x224A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224a98;
        }
    }
    ctx->pc = 0x224B8Cu;
label_224b8c:
    // 0x224b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224b90:
    // 0x224b90: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_224b94:
    if (ctx->pc == 0x224B94u) {
        ctx->pc = 0x224B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B90u;
        // 0x224b94: 0x24051400  addiu       $a1, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B98u;
        goto label_224b98;
    }
    ctx->pc = 0x224B90u;
    {
        const bool branch_taken_0x224b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B90u;
        // 0x224b94: 0x24051400  addiu       $a1, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b90) {
            ctx->pc = 0x224AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ab8;
        }
    }
    ctx->pc = 0x224B98u;
label_224b98:
    // 0x224b98: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224b9c:
    // 0x224b9c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224ba0:
    // 0x224ba0: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224ba4:
    // 0x224ba4: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224ba8:
    // 0x224ba8: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224bac:
    // 0x224bac: 0xc08997c  jal         func_2265F0
label_224bb0:
    if (ctx->pc == 0x224BB0u) {
        ctx->pc = 0x224BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BACu;
        // 0x224bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BB4u;
        goto label_224bb4;
    }
    ctx->pc = 0x224BACu;
    SET_GPR_U32(ctx, 31, 0x224BB4u);
    ctx->pc = 0x224BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BACu;
    // 0x224bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224BACu, 0x224BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BB4u;
label_224bb4:
    // 0x224bb4: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
label_224bb8:
    if (ctx->pc == 0x224BB8u) {
        ctx->pc = 0x224BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BB4u;
        // 0x224bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BBCu;
        goto label_224bbc;
    }
    ctx->pc = 0x224BB4u;
    {
        const bool branch_taken_0x224bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BB4u;
        // 0x224bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bb4) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224BBCu;
label_224bbc:
    // 0x224bbc: 0xc088ee6  jal         func_223B98
label_224bc0:
    if (ctx->pc == 0x224BC0u) {
        ctx->pc = 0x224BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BBCu;
        // 0x224bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BC4u;
        goto label_224bc4;
    }
    ctx->pc = 0x224BBCu;
    SET_GPR_U32(ctx, 31, 0x224BC4u);
    ctx->pc = 0x224BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BBCu;
    // 0x224bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x224BBCu, 0x224BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BC4u;
label_224bc4:
    // 0x224bc4: 0x100000af  b           . + 4 + (0xAF << 2)
label_224bc8:
    if (ctx->pc == 0x224BC8u) {
        ctx->pc = 0x224BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BC4u;
        // 0x224bc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BCCu;
        goto label_224bcc;
    }
    ctx->pc = 0x224BC4u;
    {
        const bool branch_taken_0x224bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BC4u;
        // 0x224bc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bc4) {
            ctx->pc = 0x224E84u;
            goto label_224e84;
        }
    }
    ctx->pc = 0x224BCCu;
label_224bcc:
    // 0x224bcc: 0xc088a42  jal         func_222908
label_224bd0:
    if (ctx->pc == 0x224BD0u) {
        ctx->pc = 0x224BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BCCu;
        // 0x224bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BD4u;
        goto label_224bd4;
    }
    ctx->pc = 0x224BCCu;
    SET_GPR_U32(ctx, 31, 0x224BD4u);
    ctx->pc = 0x224BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BCCu;
    // 0x224bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x224BCCu, 0x224BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BD4u;
label_224bd4:
    // 0x224bd4: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
label_224bd8:
    if (ctx->pc == 0x224BD8u) {
        ctx->pc = 0x224BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BD4u;
        // 0x224bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BDCu;
        goto label_224bdc;
    }
    ctx->pc = 0x224BD4u;
    {
        const bool branch_taken_0x224bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BD4u;
        // 0x224bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bd4) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224BDCu;
label_224bdc:
    // 0x224bdc: 0xc08997c  jal         func_2265F0
label_224be0:
    if (ctx->pc == 0x224BE0u) {
        ctx->pc = 0x224BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BDCu;
        // 0x224be0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BE4u;
        goto label_224be4;
    }
    ctx->pc = 0x224BDCu;
    SET_GPR_U32(ctx, 31, 0x224BE4u);
    ctx->pc = 0x224BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BDCu;
    // 0x224be0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224BDCu, 0x224BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BE4u;
label_224be4:
    // 0x224be4: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_224be8:
    if (ctx->pc == 0x224BE8u) {
        ctx->pc = 0x224BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BE4u;
        // 0x224be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224BECu;
        goto label_224bec;
    }
    ctx->pc = 0x224BE4u;
    {
        const bool branch_taken_0x224be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BE4u;
        // 0x224be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224be4) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224BECu;
label_224bec:
    // 0x224bec: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224bf0:
    // 0x224bf0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224bf4:
    // 0x224bf4: 0x34a5d3ee  ori         $a1, $a1, 0xD3EE
    ctx->pc = 0x224bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54254);
label_224bf8:
    // 0x224bf8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224bfc:
    // 0x224bfc: 0x34a503f0  ori         $a1, $a1, 0x3F0
    ctx->pc = 0x224bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1008);
label_224c00:
    // 0x224c00: 0xc08997c  jal         func_2265F0
label_224c04:
    if (ctx->pc == 0x224C04u) {
        ctx->pc = 0x224C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C00u;
        // 0x224c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C08u;
        goto label_224c08;
    }
    ctx->pc = 0x224C00u;
    SET_GPR_U32(ctx, 31, 0x224C08u);
    ctx->pc = 0x224C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C00u;
    // 0x224c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224C00u, 0x224C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C08u;
label_224c08:
    // 0x224c08: 0x5440009d  bnel        $v0, $zero, . + 4 + (0x9D << 2)
label_224c0c:
    if (ctx->pc == 0x224C0Cu) {
        ctx->pc = 0x224C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C08u;
        // 0x224c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C10u;
        goto label_224c10;
    }
    ctx->pc = 0x224C08u;
    {
        const bool branch_taken_0x224c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224c08) {
            ctx->pc = 0x224C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224C08u;
            // 0x224c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224C10u;
label_224c10:
    // 0x224c10: 0xc0e409a  jal         func_390268
label_224c14:
    if (ctx->pc == 0x224C14u) {
        ctx->pc = 0x224C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C10u;
        // 0x224c14: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C18u;
        goto label_224c18;
    }
    ctx->pc = 0x224C10u;
    SET_GPR_U32(ctx, 31, 0x224C18u);
    ctx->pc = 0x224C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C10u;
    // 0x224c14: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x224C10u, 0x224C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C18u;
label_224c18:
    // 0x224c18: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x224c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_224c1c:
    // 0x224c1c: 0x10000098  b           . + 4 + (0x98 << 2)
label_224c20:
    if (ctx->pc == 0x224C20u) {
        ctx->pc = 0x224C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C1Cu;
        // 0x224c20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C24u;
        goto label_224c24;
    }
    ctx->pc = 0x224C1Cu;
    {
        const bool branch_taken_0x224c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C1Cu;
        // 0x224c20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c1c) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224C24u;
label_224c24:
    // 0x224c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224c28:
    // 0x224c28: 0xc08997c  jal         func_2265F0
label_224c2c:
    if (ctx->pc == 0x224C2Cu) {
        ctx->pc = 0x224C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C28u;
        // 0x224c2c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C30u;
        goto label_224c30;
    }
    ctx->pc = 0x224C28u;
    SET_GPR_U32(ctx, 31, 0x224C30u);
    ctx->pc = 0x224C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C28u;
    // 0x224c2c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224C28u, 0x224C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C30u;
label_224c30:
    // 0x224c30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_224c34:
    if (ctx->pc == 0x224C34u) {
        ctx->pc = 0x224C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C30u;
        // 0x224c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C38u;
        goto label_224c38;
    }
    ctx->pc = 0x224C30u;
    {
        const bool branch_taken_0x224c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C30u;
        // 0x224c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c30) {
            ctx->pc = 0x224C6Cu;
            goto label_224c6c;
        }
    }
    ctx->pc = 0x224C38u;
label_224c38:
    // 0x224c38: 0xc087502  jal         func_21D408
label_224c3c:
    if (ctx->pc == 0x224C3Cu) {
        ctx->pc = 0x224C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C38u;
        // 0x224c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C40u;
        goto label_224c40;
    }
    ctx->pc = 0x224C38u;
    SET_GPR_U32(ctx, 31, 0x224C40u);
    ctx->pc = 0x224C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C38u;
    // 0x224c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x224C38u, 0x224C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C40u;
label_224c40:
    // 0x224c40: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x224c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_224c44:
    // 0x224c44: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_224c48:
    if (ctx->pc == 0x224C48u) {
        ctx->pc = 0x224C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C44u;
        // 0x224c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C4Cu;
        goto label_224c4c;
    }
    ctx->pc = 0x224C44u;
    {
        const bool branch_taken_0x224c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x224c44) {
            ctx->pc = 0x224C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224C44u;
            // 0x224c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224C6Cu;
            goto label_224c6c;
        }
    }
    ctx->pc = 0x224C4Cu;
label_224c4c:
    // 0x224c4c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x224c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_224c50:
    // 0x224c50: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x224c50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_224c54:
    // 0x224c54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x224c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_224c58:
    // 0x224c58: 0x40f809  jalr        $v0
label_224c5c:
    if (ctx->pc == 0x224C5Cu) {
        ctx->pc = 0x224C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C58u;
        // 0x224c5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C60u;
        goto label_224c60;
    }
    ctx->pc = 0x224C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224C60u);
        ctx->pc = 0x224C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C58u;
        // 0x224c5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C58u, 0x224C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224C60u;
label_224c60:
    // 0x224c60: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_224c64:
    // 0x224c64: 0x10430083  beq         $v0, $v1, . + 4 + (0x83 << 2)
label_224c68:
    if (ctx->pc == 0x224C68u) {
        ctx->pc = 0x224C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C64u;
        // 0x224c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C6Cu;
        goto label_224c6c;
    }
    ctx->pc = 0x224C64u;
    {
        const bool branch_taken_0x224c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C64u;
        // 0x224c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c64) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224C6Cu;
label_224c6c:
    // 0x224c6c: 0xc08997c  jal         func_2265F0
label_224c70:
    if (ctx->pc == 0x224C70u) {
        ctx->pc = 0x224C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C6Cu;
        // 0x224c70: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C74u;
        goto label_224c74;
    }
    ctx->pc = 0x224C6Cu;
    SET_GPR_U32(ctx, 31, 0x224C74u);
    ctx->pc = 0x224C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C6Cu;
    // 0x224c70: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224C6Cu, 0x224C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C74u;
label_224c74:
    // 0x224c74: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_224c78:
    if (ctx->pc == 0x224C78u) {
        ctx->pc = 0x224C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C74u;
        // 0x224c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C7Cu;
        goto label_224c7c;
    }
    ctx->pc = 0x224C74u;
    {
        const bool branch_taken_0x224c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C74u;
        // 0x224c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c74) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224C7Cu;
label_224c7c:
    // 0x224c7c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224c80:
    // 0x224c80: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224c84:
    // 0x224c84: 0x34a5d3ee  ori         $a1, $a1, 0xD3EE
    ctx->pc = 0x224c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54254);
label_224c88:
    // 0x224c88: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224c8c:
    // 0x224c8c: 0x34a503f0  ori         $a1, $a1, 0x3F0
    ctx->pc = 0x224c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1008);
label_224c90:
    // 0x224c90: 0xc08997c  jal         func_2265F0
label_224c94:
    if (ctx->pc == 0x224C94u) {
        ctx->pc = 0x224C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C90u;
        // 0x224c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C98u;
        goto label_224c98;
    }
    ctx->pc = 0x224C90u;
    SET_GPR_U32(ctx, 31, 0x224C98u);
    ctx->pc = 0x224C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C90u;
    // 0x224c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224C90u, 0x224C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C98u;
label_224c98:
    // 0x224c98: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
label_224c9c:
    if (ctx->pc == 0x224C9Cu) {
        ctx->pc = 0x224C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C98u;
        // 0x224c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CA0u;
        goto label_224ca0;
    }
    ctx->pc = 0x224C98u;
    {
        const bool branch_taken_0x224c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224c98) {
            ctx->pc = 0x224C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224C98u;
            // 0x224c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224CA0u;
label_224ca0:
    // 0x224ca0: 0xc0e409a  jal         func_390268
label_224ca4:
    if (ctx->pc == 0x224CA4u) {
        ctx->pc = 0x224CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CA0u;
        // 0x224ca4: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CA8u;
        goto label_224ca8;
    }
    ctx->pc = 0x224CA0u;
    SET_GPR_U32(ctx, 31, 0x224CA8u);
    ctx->pc = 0x224CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CA0u;
    // 0x224ca4: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x224CA0u, 0x224CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CA8u;
label_224ca8:
    // 0x224ca8: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x224ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_224cac:
    // 0x224cac: 0x10000074  b           . + 4 + (0x74 << 2)
label_224cb0:
    if (ctx->pc == 0x224CB0u) {
        ctx->pc = 0x224CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CACu;
        // 0x224cb0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CB4u;
        goto label_224cb4;
    }
    ctx->pc = 0x224CACu;
    {
        const bool branch_taken_0x224cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CACu;
        // 0x224cb0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cac) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224CB4u;
label_224cb4:
    // 0x224cb4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224cb8:
    // 0x224cb8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224cbc:
    // 0x224cbc: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224cc0:
    // 0x224cc0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224cc4:
    // 0x224cc4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224cc8:
    // 0x224cc8: 0xc08997c  jal         func_2265F0
label_224ccc:
    if (ctx->pc == 0x224CCCu) {
        ctx->pc = 0x224CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CC8u;
        // 0x224ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CD0u;
        goto label_224cd0;
    }
    ctx->pc = 0x224CC8u;
    SET_GPR_U32(ctx, 31, 0x224CD0u);
    ctx->pc = 0x224CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CC8u;
    // 0x224ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224CC8u, 0x224CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CD0u;
label_224cd0:
    // 0x224cd0: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_224cd4:
    if (ctx->pc == 0x224CD4u) {
        ctx->pc = 0x224CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD0u;
        // 0x224cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CD8u;
        goto label_224cd8;
    }
    ctx->pc = 0x224CD0u;
    {
        const bool branch_taken_0x224cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD0u;
        // 0x224cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cd0) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224CD8u;
label_224cd8:
    // 0x224cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224cdc:
    // 0x224cdc: 0xc089540  jal         func_225500
label_224ce0:
    if (ctx->pc == 0x224CE0u) {
        ctx->pc = 0x224CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CDCu;
        // 0x224ce0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CE4u;
        goto label_224ce4;
    }
    ctx->pc = 0x224CDCu;
    SET_GPR_U32(ctx, 31, 0x224CE4u);
    ctx->pc = 0x224CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CDCu;
    // 0x224ce0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225500u, 0x224CDCu, 0x224CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CE4u;
label_224ce4:
    // 0x224ce4: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
label_224ce8:
    if (ctx->pc == 0x224CE8u) {
        ctx->pc = 0x224CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CE4u;
        // 0x224ce8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CECu;
        goto label_224cec;
    }
    ctx->pc = 0x224CE4u;
    {
        const bool branch_taken_0x224ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ce4) {
            ctx->pc = 0x224CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224CE4u;
            // 0x224ce8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224CECu;
label_224cec:
    // 0x224cec: 0xc089666  jal         func_225998
label_224cf0:
    if (ctx->pc == 0x224CF0u) {
        ctx->pc = 0x224CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CECu;
        // 0x224cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CF4u;
        goto label_224cf4;
    }
    ctx->pc = 0x224CECu;
    SET_GPR_U32(ctx, 31, 0x224CF4u);
    ctx->pc = 0x224CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CECu;
    // 0x224cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225998u, 0x224CECu, 0x224CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CF4u;
label_224cf4:
    // 0x224cf4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x224cf4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_224cf8:
    // 0x224cf8: 0x10000061  b           . + 4 + (0x61 << 2)
label_224cfc:
    if (ctx->pc == 0x224CFCu) {
        ctx->pc = 0x224CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CF8u;
        // 0x224cfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D00u;
        goto label_224d00;
    }
    ctx->pc = 0x224CF8u;
    {
        const bool branch_taken_0x224cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CF8u;
        // 0x224cfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cf8) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224D00u;
label_224d00:
    // 0x224d00: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224d04:
    // 0x224d04: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224d08:
    // 0x224d08: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224d0c:
    // 0x224d0c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224d10:
    // 0x224d10: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224d14:
    // 0x224d14: 0xc08997c  jal         func_2265F0
label_224d18:
    if (ctx->pc == 0x224D18u) {
        ctx->pc = 0x224D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D14u;
        // 0x224d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D1Cu;
        goto label_224d1c;
    }
    ctx->pc = 0x224D14u;
    SET_GPR_U32(ctx, 31, 0x224D1Cu);
    ctx->pc = 0x224D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D14u;
    // 0x224d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224D14u, 0x224D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D1Cu;
label_224d1c:
    // 0x224d1c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_224d20:
    if (ctx->pc == 0x224D20u) {
        ctx->pc = 0x224D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D1Cu;
        // 0x224d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D24u;
        goto label_224d24;
    }
    ctx->pc = 0x224D1Cu;
    {
        const bool branch_taken_0x224d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D1Cu;
        // 0x224d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d1c) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224D24u;
label_224d24:
    // 0x224d24: 0xc088c1a  jal         func_223068
label_224d28:
    if (ctx->pc == 0x224D28u) {
        ctx->pc = 0x224D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D24u;
        // 0x224d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D2Cu;
        goto label_224d2c;
    }
    ctx->pc = 0x224D24u;
    SET_GPR_U32(ctx, 31, 0x224D2Cu);
    ctx->pc = 0x224D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D24u;
    // 0x224d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x224D24u, 0x224D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D2Cu;
label_224d2c:
    // 0x224d2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x224d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_224d30:
    // 0x224d30: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x224d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_224d34:
    // 0x224d34: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x224d34u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_224d38:
    // 0x224d38: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_224d3c:
    if (ctx->pc == 0x224D3Cu) {
        ctx->pc = 0x224D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D38u;
        // 0x224d3c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D40u;
        goto label_224d40;
    }
    ctx->pc = 0x224D38u;
    {
        const bool branch_taken_0x224d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d38) {
            ctx->pc = 0x224D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224D38u;
            // 0x224d3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x224D40u;
            goto label_224d40;
        }
    }
    ctx->pc = 0x224D40u;
label_224d40:
    // 0x224d40: 0x84a30148  lh          $v1, 0x148($a1)
    ctx->pc = 0x224d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
label_224d44:
    // 0x224d44: 0x1012  mflo        $v0
    ctx->pc = 0x224d44u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_224d48:
    // 0x224d48: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x224d48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_224d4c:
    // 0x224d4c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_224d50:
    if (ctx->pc == 0x224D50u) {
        ctx->pc = 0x224D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D4Cu;
        // 0x224d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D54u;
        goto label_224d54;
    }
    ctx->pc = 0x224D4Cu;
    {
        const bool branch_taken_0x224d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D4Cu;
        // 0x224d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d4c) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224D54u;
label_224d54:
    // 0x224d54: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x224d54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_224d58:
    // 0x224d58: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x224d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_224d5c:
    // 0x224d5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x224d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_224d60:
    // 0x224d60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_224d64:
    if (ctx->pc == 0x224D64u) {
        ctx->pc = 0x224D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D60u;
        // 0x224d64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D68u;
        goto label_224d68;
    }
    ctx->pc = 0x224D60u;
    {
        const bool branch_taken_0x224d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D60u;
        // 0x224d64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d60) {
            ctx->pc = 0x224D98u;
            goto label_224d98;
        }
    }
    ctx->pc = 0x224D68u;
label_224d68:
    // 0x224d68: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224d6c:
    // 0x224d6c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224d70:
    // 0x224d70: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224d74:
    // 0x224d74: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224d78:
    // 0x224d78: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224d7c:
    // 0x224d7c: 0xc08997c  jal         func_2265F0
label_224d80:
    if (ctx->pc == 0x224D80u) {
        ctx->pc = 0x224D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D7Cu;
        // 0x224d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D84u;
        goto label_224d84;
    }
    ctx->pc = 0x224D7Cu;
    SET_GPR_U32(ctx, 31, 0x224D84u);
    ctx->pc = 0x224D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D7Cu;
    // 0x224d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224D7Cu, 0x224D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D84u;
label_224d84:
    // 0x224d84: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_224d88:
    if (ctx->pc == 0x224D88u) {
        ctx->pc = 0x224D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D84u;
        // 0x224d88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D8Cu;
        goto label_224d8c;
    }
    ctx->pc = 0x224D84u;
    {
        const bool branch_taken_0x224d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224d84) {
            ctx->pc = 0x224D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224D84u;
            // 0x224d88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224D8Cu;
label_224d8c:
    // 0x224d8c: 0xc088f04  jal         func_223C10
label_224d90:
    if (ctx->pc == 0x224D90u) {
        ctx->pc = 0x224D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D8Cu;
        // 0x224d90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D94u;
        goto label_224d94;
    }
    ctx->pc = 0x224D8Cu;
    SET_GPR_U32(ctx, 31, 0x224D94u);
    ctx->pc = 0x224D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D8Cu;
    // 0x224d90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x224D8Cu, 0x224D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D94u;
label_224d94:
    // 0x224d94: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x224d94u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_224d98:
    // 0x224d98: 0x10000039  b           . + 4 + (0x39 << 2)
label_224d9c:
    if (ctx->pc == 0x224D9Cu) {
        ctx->pc = 0x224D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D98u;
        // 0x224d9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DA0u;
        goto label_224da0;
    }
    ctx->pc = 0x224D98u;
    {
        const bool branch_taken_0x224d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D98u;
        // 0x224d9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d98) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224DA0u;
label_224da0:
    // 0x224da0: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224da4:
    // 0x224da4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224da8:
    // 0x224da8: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224dac:
    // 0x224dac: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224db0:
    // 0x224db0: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224db4:
    // 0x224db4: 0xc08997c  jal         func_2265F0
label_224db8:
    if (ctx->pc == 0x224DB8u) {
        ctx->pc = 0x224DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DB4u;
        // 0x224db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DBCu;
        goto label_224dbc;
    }
    ctx->pc = 0x224DB4u;
    SET_GPR_U32(ctx, 31, 0x224DBCu);
    ctx->pc = 0x224DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224DB4u;
    // 0x224db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224DB4u, 0x224DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DBCu;
label_224dbc:
    // 0x224dbc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_224dc0:
    if (ctx->pc == 0x224DC0u) {
        ctx->pc = 0x224DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DBCu;
        // 0x224dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DC4u;
        goto label_224dc4;
    }
    ctx->pc = 0x224DBCu;
    {
        const bool branch_taken_0x224dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DBCu;
        // 0x224dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dbc) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224DC4u;
label_224dc4:
    // 0x224dc4: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x224dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_224dc8:
    // 0x224dc8: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x224dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_224dcc:
    // 0x224dcc: 0x34a5f080  ori         $a1, $a1, 0xF080
    ctx->pc = 0x224dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61568);
label_224dd0:
    // 0x224dd0: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x224dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_224dd4:
    // 0x224dd4: 0xc08997c  jal         func_2265F0
label_224dd8:
    if (ctx->pc == 0x224DD8u) {
        ctx->pc = 0x224DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DD4u;
        // 0x224dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DDCu;
        goto label_224ddc;
    }
    ctx->pc = 0x224DD4u;
    SET_GPR_U32(ctx, 31, 0x224DDCu);
    ctx->pc = 0x224DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224DD4u;
    // 0x224dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224DD4u, 0x224DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DDCu;
label_224ddc:
    // 0x224ddc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_224de0:
    if (ctx->pc == 0x224DE0u) {
        ctx->pc = 0x224DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DDCu;
        // 0x224de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DE4u;
        goto label_224de4;
    }
    ctx->pc = 0x224DDCu;
    {
        const bool branch_taken_0x224ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DDCu;
        // 0x224de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ddc) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224DE4u;
label_224de4:
    // 0x224de4: 0xc088a06  jal         func_222818
label_224de8:
    if (ctx->pc == 0x224DE8u) {
        ctx->pc = 0x224DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE4u;
        // 0x224de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DECu;
        goto label_224dec;
    }
    ctx->pc = 0x224DE4u;
    SET_GPR_U32(ctx, 31, 0x224DECu);
    ctx->pc = 0x224DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224DE4u;
    // 0x224de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222818u, 0x224DE4u, 0x224DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DECu;
label_224dec:
    // 0x224dec: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_224df0:
    if (ctx->pc == 0x224DF0u) {
        ctx->pc = 0x224DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DECu;
        // 0x224df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DF4u;
        goto label_224df4;
    }
    ctx->pc = 0x224DECu;
    {
        const bool branch_taken_0x224dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DECu;
        // 0x224df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dec) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224DF4u;
label_224df4:
    // 0x224df4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x224df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_224df8:
    // 0x224df8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x224df8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_224dfc:
    // 0x224dfc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_224e00:
    if (ctx->pc == 0x224E00u) {
        ctx->pc = 0x224E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DFCu;
        // 0x224e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E04u;
        goto label_224e04;
    }
    ctx->pc = 0x224DFCu;
    {
        const bool branch_taken_0x224dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DFCu;
        // 0x224e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dfc) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224E04u;
label_224e04:
    // 0x224e04: 0x1000001f  b           . + 4 + (0x1F << 2)
label_224e08:
    if (ctx->pc == 0x224E08u) {
        ctx->pc = 0x224E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E04u;
        // 0x224e08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E0Cu;
        goto label_224e0c;
    }
    ctx->pc = 0x224E04u;
    {
        const bool branch_taken_0x224e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E04u;
        // 0x224e08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e04) {
            ctx->pc = 0x224E84u;
            goto label_224e84;
        }
    }
    ctx->pc = 0x224E0Cu;
label_224e0c:
    // 0x224e0c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224e10:
    // 0x224e10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224e14:
    // 0x224e14: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224e18:
    // 0x224e18: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224e1c:
    // 0x224e1c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224e20:
    // 0x224e20: 0xc08997c  jal         func_2265F0
label_224e24:
    if (ctx->pc == 0x224E24u) {
        ctx->pc = 0x224E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E20u;
        // 0x224e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E28u;
        goto label_224e28;
    }
    ctx->pc = 0x224E20u;
    SET_GPR_U32(ctx, 31, 0x224E28u);
    ctx->pc = 0x224E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E20u;
    // 0x224e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224E20u, 0x224E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E28u;
label_224e28:
    // 0x224e28: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_224e2c:
    if (ctx->pc == 0x224E2Cu) {
        ctx->pc = 0x224E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E28u;
        // 0x224e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E30u;
        goto label_224e30;
    }
    ctx->pc = 0x224E28u;
    {
        const bool branch_taken_0x224e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E28u;
        // 0x224e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e28) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224E30u;
label_224e30:
    // 0x224e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224e34:
    // 0x224e34: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x224e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_224e38:
    // 0x224e38: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x224e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_224e3c:
    // 0x224e3c: 0x34a5f080  ori         $a1, $a1, 0xF080
    ctx->pc = 0x224e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61568);
label_224e40:
    // 0x224e40: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x224e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_224e44:
    // 0x224e44: 0xc08997c  jal         func_2265F0
label_224e48:
    if (ctx->pc == 0x224E48u) {
        ctx->pc = 0x224E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E44u;
        // 0x224e48: 0x8e1100cc  lw          $s1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E4Cu;
        goto label_224e4c;
    }
    ctx->pc = 0x224E44u;
    SET_GPR_U32(ctx, 31, 0x224E4Cu);
    ctx->pc = 0x224E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E44u;
    // 0x224e48: 0x8e1100cc  lw          $s1, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224E44u, 0x224E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E4Cu;
label_224e4c:
    // 0x224e4c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_224e50:
    if (ctx->pc == 0x224E50u) {
        ctx->pc = 0x224E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E4Cu;
        // 0x224e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E54u;
        goto label_224e54;
    }
    ctx->pc = 0x224E4Cu;
    {
        const bool branch_taken_0x224e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E4Cu;
        // 0x224e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e4c) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224E54u;
label_224e54:
    // 0x224e54: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x224e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_224e58:
    // 0x224e58: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
label_224e5c:
    if (ctx->pc == 0x224E5Cu) {
        ctx->pc = 0x224E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E58u;
        // 0x224e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E60u;
        goto label_224e60;
    }
    ctx->pc = 0x224E58u;
    {
        const bool branch_taken_0x224e58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x224e58) {
            ctx->pc = 0x224E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224E58u;
            // 0x224e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224E60u;
label_224e60:
    // 0x224e60: 0xc089000  jal         func_224000
label_224e64:
    if (ctx->pc == 0x224E64u) {
        ctx->pc = 0x224E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E60u;
        // 0x224e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E68u;
        goto label_224e68;
    }
    ctx->pc = 0x224E60u;
    SET_GPR_U32(ctx, 31, 0x224E68u);
    ctx->pc = 0x224E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E60u;
    // 0x224e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x224E60u, 0x224E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E68u;
label_224e68:
    // 0x224e68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224e6c:
    // 0x224e6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_224e70:
    if (ctx->pc == 0x224E70u) {
        ctx->pc = 0x224E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E6Cu;
        // 0x224e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E74u;
        goto label_224e74;
    }
    ctx->pc = 0x224E6Cu;
    {
        const bool branch_taken_0x224e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E6Cu;
        // 0x224e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e6c) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224E74u;
label_224e74:
    // 0x224e74: 0x10000002  b           . + 4 + (0x2 << 2)
label_224e78:
    if (ctx->pc == 0x224E78u) {
        ctx->pc = 0x224E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E74u;
        // 0x224e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E7Cu;
        goto label_224e7c;
    }
    ctx->pc = 0x224E74u;
    {
        const bool branch_taken_0x224e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E74u;
        // 0x224e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e74) {
            ctx->pc = 0x224E80u;
            goto label_224e80;
        }
    }
    ctx->pc = 0x224E7Cu;
label_224e7c:
    // 0x224e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224e80:
    // 0x224e80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x224e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_224e84:
    // 0x224e84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x224e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224e88:
    // 0x224e88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x224e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224e8c:
    // 0x224e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224e90:
    // 0x224e90: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x224e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_224e94:
    // 0x224e94: 0x3e00008  jr          $ra
label_224e98:
    if (ctx->pc == 0x224E98u) {
        ctx->pc = 0x224E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E94u;
        // 0x224e98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E9Cu;
        goto label_224e9c;
    }
    ctx->pc = 0x224E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E94u;
        // 0x224e98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E9Cu;
label_224e9c:
    // 0x224e9c: 0x0  nop
    ctx->pc = 0x224e9cu;
    // NOP
    ctx->pc = 0x224ea0u;
}
