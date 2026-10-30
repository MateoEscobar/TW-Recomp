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

// Function: sub_00190810
// Address: 0x190810 - 0x191158
void sub_00190810_0x190810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190810_0x190810");
#endif

    switch (ctx->pc) {
        case 0x190810u: goto label_190810;
        case 0x190814u: goto label_190814;
        case 0x190818u: goto label_190818;
        case 0x19081cu: goto label_19081c;
        case 0x190820u: goto label_190820;
        case 0x190824u: goto label_190824;
        case 0x190828u: goto label_190828;
        case 0x19082cu: goto label_19082c;
        case 0x190830u: goto label_190830;
        case 0x190834u: goto label_190834;
        case 0x190838u: goto label_190838;
        case 0x19083cu: goto label_19083c;
        case 0x190840u: goto label_190840;
        case 0x190844u: goto label_190844;
        case 0x190848u: goto label_190848;
        case 0x19084cu: goto label_19084c;
        case 0x190850u: goto label_190850;
        case 0x190854u: goto label_190854;
        case 0x190858u: goto label_190858;
        case 0x19085cu: goto label_19085c;
        case 0x190860u: goto label_190860;
        case 0x190864u: goto label_190864;
        case 0x190868u: goto label_190868;
        case 0x19086cu: goto label_19086c;
        case 0x190870u: goto label_190870;
        case 0x190874u: goto label_190874;
        case 0x190878u: goto label_190878;
        case 0x19087cu: goto label_19087c;
        case 0x190880u: goto label_190880;
        case 0x190884u: goto label_190884;
        case 0x190888u: goto label_190888;
        case 0x19088cu: goto label_19088c;
        case 0x190890u: goto label_190890;
        case 0x190894u: goto label_190894;
        case 0x190898u: goto label_190898;
        case 0x19089cu: goto label_19089c;
        case 0x1908a0u: goto label_1908a0;
        case 0x1908a4u: goto label_1908a4;
        case 0x1908a8u: goto label_1908a8;
        case 0x1908acu: goto label_1908ac;
        case 0x1908b0u: goto label_1908b0;
        case 0x1908b4u: goto label_1908b4;
        case 0x1908b8u: goto label_1908b8;
        case 0x1908bcu: goto label_1908bc;
        case 0x1908c0u: goto label_1908c0;
        case 0x1908c4u: goto label_1908c4;
        case 0x1908c8u: goto label_1908c8;
        case 0x1908ccu: goto label_1908cc;
        case 0x1908d0u: goto label_1908d0;
        case 0x1908d4u: goto label_1908d4;
        case 0x1908d8u: goto label_1908d8;
        case 0x1908dcu: goto label_1908dc;
        case 0x1908e0u: goto label_1908e0;
        case 0x1908e4u: goto label_1908e4;
        case 0x1908e8u: goto label_1908e8;
        case 0x1908ecu: goto label_1908ec;
        case 0x1908f0u: goto label_1908f0;
        case 0x1908f4u: goto label_1908f4;
        case 0x1908f8u: goto label_1908f8;
        case 0x1908fcu: goto label_1908fc;
        case 0x190900u: goto label_190900;
        case 0x190904u: goto label_190904;
        case 0x190908u: goto label_190908;
        case 0x19090cu: goto label_19090c;
        case 0x190910u: goto label_190910;
        case 0x190914u: goto label_190914;
        case 0x190918u: goto label_190918;
        case 0x19091cu: goto label_19091c;
        case 0x190920u: goto label_190920;
        case 0x190924u: goto label_190924;
        case 0x190928u: goto label_190928;
        case 0x19092cu: goto label_19092c;
        case 0x190930u: goto label_190930;
        case 0x190934u: goto label_190934;
        case 0x190938u: goto label_190938;
        case 0x19093cu: goto label_19093c;
        case 0x190940u: goto label_190940;
        case 0x190944u: goto label_190944;
        case 0x190948u: goto label_190948;
        case 0x19094cu: goto label_19094c;
        case 0x190950u: goto label_190950;
        case 0x190954u: goto label_190954;
        case 0x190958u: goto label_190958;
        case 0x19095cu: goto label_19095c;
        case 0x190960u: goto label_190960;
        case 0x190964u: goto label_190964;
        case 0x190968u: goto label_190968;
        case 0x19096cu: goto label_19096c;
        case 0x190970u: goto label_190970;
        case 0x190974u: goto label_190974;
        case 0x190978u: goto label_190978;
        case 0x19097cu: goto label_19097c;
        case 0x190980u: goto label_190980;
        case 0x190984u: goto label_190984;
        case 0x190988u: goto label_190988;
        case 0x19098cu: goto label_19098c;
        case 0x190990u: goto label_190990;
        case 0x190994u: goto label_190994;
        case 0x190998u: goto label_190998;
        case 0x19099cu: goto label_19099c;
        case 0x1909a0u: goto label_1909a0;
        case 0x1909a4u: goto label_1909a4;
        case 0x1909a8u: goto label_1909a8;
        case 0x1909acu: goto label_1909ac;
        case 0x1909b0u: goto label_1909b0;
        case 0x1909b4u: goto label_1909b4;
        case 0x1909b8u: goto label_1909b8;
        case 0x1909bcu: goto label_1909bc;
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        case 0x1909d4u: goto label_1909d4;
        case 0x1909d8u: goto label_1909d8;
        case 0x1909dcu: goto label_1909dc;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909e4u: goto label_1909e4;
        case 0x1909e8u: goto label_1909e8;
        case 0x1909ecu: goto label_1909ec;
        case 0x1909f0u: goto label_1909f0;
        case 0x1909f4u: goto label_1909f4;
        case 0x1909f8u: goto label_1909f8;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a00u: goto label_190a00;
        case 0x190a04u: goto label_190a04;
        case 0x190a08u: goto label_190a08;
        case 0x190a0cu: goto label_190a0c;
        case 0x190a10u: goto label_190a10;
        case 0x190a14u: goto label_190a14;
        case 0x190a18u: goto label_190a18;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a20u: goto label_190a20;
        case 0x190a24u: goto label_190a24;
        case 0x190a28u: goto label_190a28;
        case 0x190a2cu: goto label_190a2c;
        case 0x190a30u: goto label_190a30;
        case 0x190a34u: goto label_190a34;
        case 0x190a38u: goto label_190a38;
        case 0x190a3cu: goto label_190a3c;
        case 0x190a40u: goto label_190a40;
        case 0x190a44u: goto label_190a44;
        case 0x190a48u: goto label_190a48;
        case 0x190a4cu: goto label_190a4c;
        case 0x190a50u: goto label_190a50;
        case 0x190a54u: goto label_190a54;
        case 0x190a58u: goto label_190a58;
        case 0x190a5cu: goto label_190a5c;
        case 0x190a60u: goto label_190a60;
        case 0x190a64u: goto label_190a64;
        case 0x190a68u: goto label_190a68;
        case 0x190a6cu: goto label_190a6c;
        case 0x190a70u: goto label_190a70;
        case 0x190a74u: goto label_190a74;
        case 0x190a78u: goto label_190a78;
        case 0x190a7cu: goto label_190a7c;
        case 0x190a80u: goto label_190a80;
        case 0x190a84u: goto label_190a84;
        case 0x190a88u: goto label_190a88;
        case 0x190a8cu: goto label_190a8c;
        case 0x190a90u: goto label_190a90;
        case 0x190a94u: goto label_190a94;
        case 0x190a98u: goto label_190a98;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa0u: goto label_190aa0;
        case 0x190aa4u: goto label_190aa4;
        case 0x190aa8u: goto label_190aa8;
        case 0x190aacu: goto label_190aac;
        case 0x190ab0u: goto label_190ab0;
        case 0x190ab4u: goto label_190ab4;
        case 0x190ab8u: goto label_190ab8;
        case 0x190abcu: goto label_190abc;
        case 0x190ac0u: goto label_190ac0;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ac8u: goto label_190ac8;
        case 0x190accu: goto label_190acc;
        case 0x190ad0u: goto label_190ad0;
        case 0x190ad4u: goto label_190ad4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190adcu: goto label_190adc;
        case 0x190ae0u: goto label_190ae0;
        case 0x190ae4u: goto label_190ae4;
        case 0x190ae8u: goto label_190ae8;
        case 0x190aecu: goto label_190aec;
        case 0x190af0u: goto label_190af0;
        case 0x190af4u: goto label_190af4;
        case 0x190af8u: goto label_190af8;
        case 0x190afcu: goto label_190afc;
        case 0x190b00u: goto label_190b00;
        case 0x190b04u: goto label_190b04;
        case 0x190b08u: goto label_190b08;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b10u: goto label_190b10;
        case 0x190b14u: goto label_190b14;
        case 0x190b18u: goto label_190b18;
        case 0x190b1cu: goto label_190b1c;
        case 0x190b20u: goto label_190b20;
        case 0x190b24u: goto label_190b24;
        case 0x190b28u: goto label_190b28;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b30u: goto label_190b30;
        case 0x190b34u: goto label_190b34;
        case 0x190b38u: goto label_190b38;
        case 0x190b3cu: goto label_190b3c;
        case 0x190b40u: goto label_190b40;
        case 0x190b44u: goto label_190b44;
        case 0x190b48u: goto label_190b48;
        case 0x190b4cu: goto label_190b4c;
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b60u: goto label_190b60;
        case 0x190b64u: goto label_190b64;
        case 0x190b68u: goto label_190b68;
        case 0x190b6cu: goto label_190b6c;
        case 0x190b70u: goto label_190b70;
        case 0x190b74u: goto label_190b74;
        case 0x190b78u: goto label_190b78;
        case 0x190b7cu: goto label_190b7c;
        case 0x190b80u: goto label_190b80;
        case 0x190b84u: goto label_190b84;
        case 0x190b88u: goto label_190b88;
        case 0x190b8cu: goto label_190b8c;
        case 0x190b90u: goto label_190b90;
        case 0x190b94u: goto label_190b94;
        case 0x190b98u: goto label_190b98;
        case 0x190b9cu: goto label_190b9c;
        case 0x190ba0u: goto label_190ba0;
        case 0x190ba4u: goto label_190ba4;
        case 0x190ba8u: goto label_190ba8;
        case 0x190bacu: goto label_190bac;
        case 0x190bb0u: goto label_190bb0;
        case 0x190bb4u: goto label_190bb4;
        case 0x190bb8u: goto label_190bb8;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc4u: goto label_190bc4;
        case 0x190bc8u: goto label_190bc8;
        case 0x190bccu: goto label_190bcc;
        case 0x190bd0u: goto label_190bd0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190bd8u: goto label_190bd8;
        case 0x190bdcu: goto label_190bdc;
        case 0x190be0u: goto label_190be0;
        case 0x190be4u: goto label_190be4;
        case 0x190be8u: goto label_190be8;
        case 0x190becu: goto label_190bec;
        case 0x190bf0u: goto label_190bf0;
        case 0x190bf4u: goto label_190bf4;
        case 0x190bf8u: goto label_190bf8;
        case 0x190bfcu: goto label_190bfc;
        case 0x190c00u: goto label_190c00;
        case 0x190c04u: goto label_190c04;
        case 0x190c08u: goto label_190c08;
        case 0x190c0cu: goto label_190c0c;
        case 0x190c10u: goto label_190c10;
        case 0x190c14u: goto label_190c14;
        case 0x190c18u: goto label_190c18;
        case 0x190c1cu: goto label_190c1c;
        case 0x190c20u: goto label_190c20;
        case 0x190c24u: goto label_190c24;
        case 0x190c28u: goto label_190c28;
        case 0x190c2cu: goto label_190c2c;
        case 0x190c30u: goto label_190c30;
        case 0x190c34u: goto label_190c34;
        case 0x190c38u: goto label_190c38;
        case 0x190c3cu: goto label_190c3c;
        case 0x190c40u: goto label_190c40;
        case 0x190c44u: goto label_190c44;
        case 0x190c48u: goto label_190c48;
        case 0x190c4cu: goto label_190c4c;
        case 0x190c50u: goto label_190c50;
        case 0x190c54u: goto label_190c54;
        case 0x190c58u: goto label_190c58;
        case 0x190c5cu: goto label_190c5c;
        case 0x190c60u: goto label_190c60;
        case 0x190c64u: goto label_190c64;
        case 0x190c68u: goto label_190c68;
        case 0x190c6cu: goto label_190c6c;
        case 0x190c70u: goto label_190c70;
        case 0x190c74u: goto label_190c74;
        case 0x190c78u: goto label_190c78;
        case 0x190c7cu: goto label_190c7c;
        case 0x190c80u: goto label_190c80;
        case 0x190c84u: goto label_190c84;
        case 0x190c88u: goto label_190c88;
        case 0x190c8cu: goto label_190c8c;
        case 0x190c90u: goto label_190c90;
        case 0x190c94u: goto label_190c94;
        case 0x190c98u: goto label_190c98;
        case 0x190c9cu: goto label_190c9c;
        case 0x190ca0u: goto label_190ca0;
        case 0x190ca4u: goto label_190ca4;
        case 0x190ca8u: goto label_190ca8;
        case 0x190cacu: goto label_190cac;
        case 0x190cb0u: goto label_190cb0;
        case 0x190cb4u: goto label_190cb4;
        case 0x190cb8u: goto label_190cb8;
        case 0x190cbcu: goto label_190cbc;
        case 0x190cc0u: goto label_190cc0;
        case 0x190cc4u: goto label_190cc4;
        case 0x190cc8u: goto label_190cc8;
        case 0x190cccu: goto label_190ccc;
        case 0x190cd0u: goto label_190cd0;
        case 0x190cd4u: goto label_190cd4;
        case 0x190cd8u: goto label_190cd8;
        case 0x190cdcu: goto label_190cdc;
        case 0x190ce0u: goto label_190ce0;
        case 0x190ce4u: goto label_190ce4;
        case 0x190ce8u: goto label_190ce8;
        case 0x190cecu: goto label_190cec;
        case 0x190cf0u: goto label_190cf0;
        case 0x190cf4u: goto label_190cf4;
        case 0x190cf8u: goto label_190cf8;
        case 0x190cfcu: goto label_190cfc;
        case 0x190d00u: goto label_190d00;
        case 0x190d04u: goto label_190d04;
        case 0x190d08u: goto label_190d08;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d10u: goto label_190d10;
        case 0x190d14u: goto label_190d14;
        case 0x190d18u: goto label_190d18;
        case 0x190d1cu: goto label_190d1c;
        case 0x190d20u: goto label_190d20;
        case 0x190d24u: goto label_190d24;
        case 0x190d28u: goto label_190d28;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d30u: goto label_190d30;
        case 0x190d34u: goto label_190d34;
        case 0x190d38u: goto label_190d38;
        case 0x190d3cu: goto label_190d3c;
        case 0x190d40u: goto label_190d40;
        case 0x190d44u: goto label_190d44;
        case 0x190d48u: goto label_190d48;
        case 0x190d4cu: goto label_190d4c;
        case 0x190d50u: goto label_190d50;
        case 0x190d54u: goto label_190d54;
        case 0x190d58u: goto label_190d58;
        case 0x190d5cu: goto label_190d5c;
        case 0x190d60u: goto label_190d60;
        case 0x190d64u: goto label_190d64;
        case 0x190d68u: goto label_190d68;
        case 0x190d6cu: goto label_190d6c;
        case 0x190d70u: goto label_190d70;
        case 0x190d74u: goto label_190d74;
        case 0x190d78u: goto label_190d78;
        case 0x190d7cu: goto label_190d7c;
        case 0x190d80u: goto label_190d80;
        case 0x190d84u: goto label_190d84;
        case 0x190d88u: goto label_190d88;
        case 0x190d8cu: goto label_190d8c;
        case 0x190d90u: goto label_190d90;
        case 0x190d94u: goto label_190d94;
        case 0x190d98u: goto label_190d98;
        case 0x190d9cu: goto label_190d9c;
        case 0x190da0u: goto label_190da0;
        case 0x190da4u: goto label_190da4;
        case 0x190da8u: goto label_190da8;
        case 0x190dacu: goto label_190dac;
        case 0x190db0u: goto label_190db0;
        case 0x190db4u: goto label_190db4;
        case 0x190db8u: goto label_190db8;
        case 0x190dbcu: goto label_190dbc;
        case 0x190dc0u: goto label_190dc0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190dc8u: goto label_190dc8;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd0u: goto label_190dd0;
        case 0x190dd4u: goto label_190dd4;
        case 0x190dd8u: goto label_190dd8;
        case 0x190ddcu: goto label_190ddc;
        case 0x190de0u: goto label_190de0;
        case 0x190de4u: goto label_190de4;
        case 0x190de8u: goto label_190de8;
        case 0x190decu: goto label_190dec;
        case 0x190df0u: goto label_190df0;
        case 0x190df4u: goto label_190df4;
        case 0x190df8u: goto label_190df8;
        case 0x190dfcu: goto label_190dfc;
        case 0x190e00u: goto label_190e00;
        case 0x190e04u: goto label_190e04;
        case 0x190e08u: goto label_190e08;
        case 0x190e0cu: goto label_190e0c;
        case 0x190e10u: goto label_190e10;
        case 0x190e14u: goto label_190e14;
        case 0x190e18u: goto label_190e18;
        case 0x190e1cu: goto label_190e1c;
        case 0x190e20u: goto label_190e20;
        case 0x190e24u: goto label_190e24;
        case 0x190e28u: goto label_190e28;
        case 0x190e2cu: goto label_190e2c;
        case 0x190e30u: goto label_190e30;
        case 0x190e34u: goto label_190e34;
        case 0x190e38u: goto label_190e38;
        case 0x190e3cu: goto label_190e3c;
        case 0x190e40u: goto label_190e40;
        case 0x190e44u: goto label_190e44;
        case 0x190e48u: goto label_190e48;
        case 0x190e4cu: goto label_190e4c;
        case 0x190e50u: goto label_190e50;
        case 0x190e54u: goto label_190e54;
        case 0x190e58u: goto label_190e58;
        case 0x190e5cu: goto label_190e5c;
        case 0x190e60u: goto label_190e60;
        case 0x190e64u: goto label_190e64;
        case 0x190e68u: goto label_190e68;
        case 0x190e6cu: goto label_190e6c;
        case 0x190e70u: goto label_190e70;
        case 0x190e74u: goto label_190e74;
        case 0x190e78u: goto label_190e78;
        case 0x190e7cu: goto label_190e7c;
        case 0x190e80u: goto label_190e80;
        case 0x190e84u: goto label_190e84;
        case 0x190e88u: goto label_190e88;
        case 0x190e8cu: goto label_190e8c;
        case 0x190e90u: goto label_190e90;
        case 0x190e94u: goto label_190e94;
        case 0x190e98u: goto label_190e98;
        case 0x190e9cu: goto label_190e9c;
        case 0x190ea0u: goto label_190ea0;
        case 0x190ea4u: goto label_190ea4;
        case 0x190ea8u: goto label_190ea8;
        case 0x190eacu: goto label_190eac;
        case 0x190eb0u: goto label_190eb0;
        case 0x190eb4u: goto label_190eb4;
        case 0x190eb8u: goto label_190eb8;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ec0u: goto label_190ec0;
        case 0x190ec4u: goto label_190ec4;
        case 0x190ec8u: goto label_190ec8;
        case 0x190eccu: goto label_190ecc;
        case 0x190ed0u: goto label_190ed0;
        case 0x190ed4u: goto label_190ed4;
        case 0x190ed8u: goto label_190ed8;
        case 0x190edcu: goto label_190edc;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ee4u: goto label_190ee4;
        case 0x190ee8u: goto label_190ee8;
        case 0x190eecu: goto label_190eec;
        case 0x190ef0u: goto label_190ef0;
        case 0x190ef4u: goto label_190ef4;
        case 0x190ef8u: goto label_190ef8;
        case 0x190efcu: goto label_190efc;
        case 0x190f00u: goto label_190f00;
        case 0x190f04u: goto label_190f04;
        case 0x190f08u: goto label_190f08;
        case 0x190f0cu: goto label_190f0c;
        case 0x190f10u: goto label_190f10;
        case 0x190f14u: goto label_190f14;
        case 0x190f18u: goto label_190f18;
        case 0x190f1cu: goto label_190f1c;
        case 0x190f20u: goto label_190f20;
        case 0x190f24u: goto label_190f24;
        case 0x190f28u: goto label_190f28;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f30u: goto label_190f30;
        case 0x190f34u: goto label_190f34;
        case 0x190f38u: goto label_190f38;
        case 0x190f3cu: goto label_190f3c;
        case 0x190f40u: goto label_190f40;
        case 0x190f44u: goto label_190f44;
        case 0x190f48u: goto label_190f48;
        case 0x190f4cu: goto label_190f4c;
        case 0x190f50u: goto label_190f50;
        case 0x190f54u: goto label_190f54;
        case 0x190f58u: goto label_190f58;
        case 0x190f5cu: goto label_190f5c;
        case 0x190f60u: goto label_190f60;
        case 0x190f64u: goto label_190f64;
        case 0x190f68u: goto label_190f68;
        case 0x190f6cu: goto label_190f6c;
        case 0x190f70u: goto label_190f70;
        case 0x190f74u: goto label_190f74;
        case 0x190f78u: goto label_190f78;
        case 0x190f7cu: goto label_190f7c;
        case 0x190f80u: goto label_190f80;
        case 0x190f84u: goto label_190f84;
        case 0x190f88u: goto label_190f88;
        case 0x190f8cu: goto label_190f8c;
        case 0x190f90u: goto label_190f90;
        case 0x190f94u: goto label_190f94;
        case 0x190f98u: goto label_190f98;
        case 0x190f9cu: goto label_190f9c;
        case 0x190fa0u: goto label_190fa0;
        case 0x190fa4u: goto label_190fa4;
        case 0x190fa8u: goto label_190fa8;
        case 0x190facu: goto label_190fac;
        case 0x190fb0u: goto label_190fb0;
        case 0x190fb4u: goto label_190fb4;
        case 0x190fb8u: goto label_190fb8;
        case 0x190fbcu: goto label_190fbc;
        case 0x190fc0u: goto label_190fc0;
        case 0x190fc4u: goto label_190fc4;
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        default: break;
    }

    ctx->pc = 0x190810u;

label_190810:
    // 0x190810: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x190810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_190814:
    // 0x190814: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x190814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_190818:
    // 0x190818: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x190818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_19081c:
    // 0x19081c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19081cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190820:
    // 0x190820: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x190820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_190824:
    // 0x190824: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x190824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_190828:
    // 0x190828: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x190828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_19082c:
    // 0x19082c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x19082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_190830:
    // 0x190830: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x190830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_190834:
    // 0x190834: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x190834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_190838:
    // 0x190838: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x190838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_19083c:
    // 0x19083c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_190840:
    // 0x190840: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_190844:
    // 0x190844: 0x14400237  bnez        $v0, . + 4 + (0x237 << 2)
label_190848:
    if (ctx->pc == 0x190848u) {
        ctx->pc = 0x190848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190844u;
        // 0x190848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19084Cu;
        goto label_19084c;
    }
    ctx->pc = 0x190844u;
    {
        const bool branch_taken_0x190844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190844u;
        // 0x190848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190844) {
            ctx->pc = 0x191124u;
            goto label_191124;
        }
    }
    ctx->pc = 0x19084Cu;
label_19084c:
    // 0x19084c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x19084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_190850:
    // 0x190850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x190850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_190854:
    // 0x190854: 0x8c435340  lw          $v1, 0x5340($v0)
    ctx->pc = 0x190854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
label_190858:
    // 0x190858: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x190858u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19085c:
    // 0x19085c: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x19085cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_190860:
    // 0x190860: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x190860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_190864:
    // 0x190864: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x190864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_190868:
    // 0x190868: 0xc05509a  jal         func_154268
label_19086c:
    if (ctx->pc == 0x19086Cu) {
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190870u;
        goto label_190870;
    }
    ctx->pc = 0x190868u;
    SET_GPR_U32(ctx, 31, 0x190870u);
    ctx->pc = 0x19086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190868u;
    // 0x19086c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154268u, 0x190868u, 0x190870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x190870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_190874:
    // 0x190874: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_190878:
    // 0x190878: 0x24673270  addiu       $a3, $v1, 0x3270
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_19087c:
    // 0x19087c: 0x88e20003  lwl         $v0, 0x3($a3)
    ctx->pc = 0x19087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_190880:
    // 0x190880: 0x98e20000  lwr         $v0, 0x0($a3)
    ctx->pc = 0x190880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_190884:
    // 0x190884: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x190884u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_190888:
    // 0x190888: 0x80e50005  lb          $a1, 0x5($a3)
    ctx->pc = 0x190888u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_19088c:
    // 0x19088c: 0xaba20023  swl         $v0, 0x23($sp)
    ctx->pc = 0x19088cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_190890:
    // 0x190890: 0xbba20020  swr         $v0, 0x20($sp)
    ctx->pc = 0x190890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_190894:
    // 0x190894: 0xa3a40024  sb          $a0, 0x24($sp)
    ctx->pc = 0x190894u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 4));
label_190898:
    // 0x190898: 0xa3a50025  sb          $a1, 0x25($sp)
    ctx->pc = 0x190898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 37), (uint8_t)GPR_U32(ctx, 5));
label_19089c:
    // 0x19089c: 0x24723270  addiu       $s2, $v1, 0x3270
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_1908a0:
    // 0x1908a0: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1908a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1908a4:
    // 0x1908a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1908a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1908a8:
    // 0x1908a8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1908ac:
    // 0x1908ac: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1908acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1908b0:
    // 0x1908b0: 0x60f809  jalr        $v1
label_1908b4:
    if (ctx->pc == 0x1908B4u) {
        ctx->pc = 0x1908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908B0u;
        // 0x1908b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908B8u;
        goto label_1908b8;
    }
    ctx->pc = 0x1908B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1908B8u);
        ctx->pc = 0x1908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908B0u;
        // 0x1908b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1908B0u, 0x1908B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1908B8u;
label_1908b8:
    // 0x1908b8: 0x8e0a27e4  lw          $t2, 0x27E4($s0)
    ctx->pc = 0x1908b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1908bc:
    // 0x1908bc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1908bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1908c0:
    // 0x1908c0: 0x24533278  addiu       $s3, $v0, 0x3278
    ctx->pc = 0x1908c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12920));
label_1908c4:
    // 0x1908c4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1908c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1908c8:
    // 0x1908c8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1908cc:
    // 0x1908cc: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_1908d0:
    // 0x1908d0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1908d4:
    // 0x1908d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1908d8:
    // 0x1908d8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1908dc:
    // 0x1908dc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1908dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1908e0:
    // 0x1908e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1908e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1908e4:
    // 0x1908e4: 0x2409006f  addiu       $t1, $zero, 0x6F
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_1908e8:
    // 0x1908e8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1908ec:
    // 0x1908ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1908ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1908f0:
    // 0x1908f0: 0x40f809  jalr        $v0
label_1908f4:
    if (ctx->pc == 0x1908F4u) {
        ctx->pc = 0x1908F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908F0u;
        // 0x1908f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908F8u;
        goto label_1908f8;
    }
    ctx->pc = 0x1908F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1908F8u);
        ctx->pc = 0x1908F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908F0u;
        // 0x1908f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1908F0u, 0x1908F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1908F8u;
label_1908f8:
    // 0x1908f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1908f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1908fc:
    // 0x1908fc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_190900:
    if (ctx->pc == 0x190900u) {
        ctx->pc = 0x190900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908FCu;
        // 0x190900: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190904u;
        goto label_190904;
    }
    ctx->pc = 0x1908FCu;
    {
        const bool branch_taken_0x1908fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908FCu;
        // 0x190900: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908fc) {
            ctx->pc = 0x19090Cu;
            goto label_19090c;
        }
    }
    ctx->pc = 0x190904u;
label_190904:
    // 0x190904: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x190904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_190908:
    // 0x190908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19090c:
    // 0x19090c: 0x8ec6003c  lw          $a2, 0x3C($s6)
    ctx->pc = 0x19090cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
label_190910:
    // 0x190910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190914:
    // 0x190914: 0x8ec500f0  lw          $a1, 0xF0($s6)
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_190918:
    // 0x190918: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x190918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19091c:
    // 0x19091c: 0xc0ce108  jal         func_338420
label_190920:
    if (ctx->pc == 0x190920u) {
        ctx->pc = 0x190920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19091Cu;
        // 0x190920: 0x24c60064  addiu       $a2, $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190924u;
        goto label_190924;
    }
    ctx->pc = 0x19091Cu;
    SET_GPR_U32(ctx, 31, 0x190924u);
    ctx->pc = 0x190920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19091Cu;
    // 0x190920: 0x24c60064  addiu       $a2, $a2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x19091Cu, 0x190924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190924u;
label_190924:
    // 0x190924: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x190924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_190928:
    // 0x190928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19092c:
    // 0x19092c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_190930:
    // 0x190930: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x190930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190934:
    // 0x190934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x190934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190938:
    // 0x190938: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x190938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_19093c:
    // 0x19093c: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x19093cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_190940:
    // 0x190940: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x190940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_190944:
    // 0x190944: 0x40f809  jalr        $v0
label_190948:
    if (ctx->pc == 0x190948u) {
        ctx->pc = 0x190948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190944u;
        // 0x190948: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19094Cu;
        goto label_19094c;
    }
    ctx->pc = 0x190944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19094Cu);
        ctx->pc = 0x190948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190944u;
        // 0x190948: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190944u, 0x19094Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19094Cu;
label_19094c:
    // 0x19094c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19094cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_190950:
    // 0x190950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190954:
    // 0x190954: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_190958:
    // 0x190958: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x190958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19095c:
    // 0x19095c: 0x8ec700f0  lw          $a3, 0xF0($s6)
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_190960:
    // 0x190960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x190960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190964:
    // 0x190964: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x190964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_190968:
    // 0x190968: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x190968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_19096c:
    // 0x19096c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x19096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_190970:
    // 0x190970: 0x60f809  jalr        $v1
label_190974:
    if (ctx->pc == 0x190974u) {
        ctx->pc = 0x190974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190970u;
        // 0x190974: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190978u;
        goto label_190978;
    }
    ctx->pc = 0x190970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x190978u);
        ctx->pc = 0x190974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190970u;
        // 0x190974: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190970u, 0x190978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190978u;
label_190978:
    // 0x190978: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x190978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_19097c:
    // 0x19097c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19097cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190980:
    // 0x190980: 0x8c8627e4  lw          $a2, 0x27E4($a0)
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_190984:
    // 0x190984: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_190988:
    // 0x190988: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x190988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_19098c:
    // 0x19098c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x19098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_190990:
    // 0x190990: 0x60f809  jalr        $v1
label_190994:
    if (ctx->pc == 0x190994u) {
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190990u;
        // 0x190994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190998u;
        goto label_190998;
    }
    ctx->pc = 0x190990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x190998u);
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190990u;
        // 0x190994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190990u, 0x190998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190998u;
label_190998:
    // 0x190998: 0xc051060  jal         func_144180
label_19099c:
    if (ctx->pc == 0x19099Cu) {
        ctx->pc = 0x19099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190998u;
        // 0x19099c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909A0u;
        goto label_1909a0;
    }
    ctx->pc = 0x190998u;
    SET_GPR_U32(ctx, 31, 0x1909A0u);
    ctx->pc = 0x19099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190998u;
    // 0x19099c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144180u, 0x190998u, 0x1909A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1909A0u;
label_1909a0:
    // 0x1909a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1909a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1909a4:
    // 0x1909a4: 0x8ca627e4  lw          $a2, 0x27E4($a1)
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10212)));
label_1909a8:
    // 0x1909a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1909a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1909ac:
    // 0x1909ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1909acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1909b0:
    // 0x1909b0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1909b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1909b4:
    // 0x1909b4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1909b8:
    // 0x1909b8: 0x60f809  jalr        $v1
label_1909bc:
    if (ctx->pc == 0x1909BCu) {
        ctx->pc = 0x1909BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909B8u;
        // 0x1909bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909C0u;
        goto label_1909c0;
    }
    ctx->pc = 0x1909B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1909C0u);
        ctx->pc = 0x1909BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909B8u;
        // 0x1909bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909B8u, 0x1909C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1909C0u;
label_1909c0:
    // 0x1909c0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1909c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1909c4:
    // 0x1909c4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1909c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1909c8:
    // 0x1909c8: 0x8ccc27e4  lw          $t4, 0x27E4($a2)
    ctx->pc = 0x1909c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10212)));
label_1909cc:
    // 0x1909cc: 0x24a532a8  addiu       $a1, $a1, 0x32A8
    ctx->pc = 0x1909ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12968));
label_1909d0:
    // 0x1909d0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1909d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1909d4:
    // 0x1909d4: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1909d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1909d8:
    // 0x1909d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1909d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1909dc:
    // 0x1909dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1909dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1909e0:
    // 0x1909e0: 0x24090077  addiu       $t1, $zero, 0x77
    ctx->pc = 0x1909e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1909e4:
    // 0x1909e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1909e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1909e8:
    // 0x1909e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1909ec:
    // 0x1909ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1909ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1909f0:
    // 0x1909f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1909f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1909f4:
    // 0x1909f4: 0x40f809  jalr        $v0
label_1909f8:
    if (ctx->pc == 0x1909F8u) {
        ctx->pc = 0x1909F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F4u;
        // 0x1909f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909FCu;
        goto label_1909fc;
    }
    ctx->pc = 0x1909F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1909FCu);
        ctx->pc = 0x1909F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F4u;
        // 0x1909f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909F4u, 0x1909FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1909FCu;
label_1909fc:
    // 0x1909fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1909fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190a00:
    // 0x190a00: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_190a04:
    if (ctx->pc == 0x190A04u) {
        ctx->pc = 0x190A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A00u;
        // 0x190a04: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A08u;
        goto label_190a08;
    }
    ctx->pc = 0x190A00u;
    {
        const bool branch_taken_0x190a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A00u;
        // 0x190a04: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a00) {
            ctx->pc = 0x190A2Cu;
            goto label_190a2c;
        }
    }
    ctx->pc = 0x190A08u;
label_190a08:
    // 0x190a08: 0xc051048  jal         func_144120
label_190a0c:
    if (ctx->pc == 0x190A0Cu) {
        ctx->pc = 0x190A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A08u;
        // 0x190a0c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A10u;
        goto label_190a10;
    }
    ctx->pc = 0x190A08u;
    SET_GPR_U32(ctx, 31, 0x190A10u);
    ctx->pc = 0x190A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A08u;
    // 0x190a0c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x190A08u, 0x190A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A10u;
label_190a10:
    // 0x190a10: 0x8ec700f0  lw          $a3, 0xF0($s6)
    ctx->pc = 0x190a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_190a14:
    // 0x190a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190a18:
    // 0x190a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190a1c:
    // 0x190a1c: 0xc0639fa  jal         func_18E7E8
label_190a20:
    if (ctx->pc == 0x190A20u) {
        ctx->pc = 0x190A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A1Cu;
        // 0x190a20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A24u;
        goto label_190a24;
    }
    ctx->pc = 0x190A1Cu;
    SET_GPR_U32(ctx, 31, 0x190A24u);
    ctx->pc = 0x190A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A1Cu;
    // 0x190a20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7E8u, 0x190A1Cu, 0x190A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A24u;
label_190a24:
    // 0x190a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190a28:
    // 0x190a28: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x190a28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_190a2c:
    // 0x190a2c: 0xaed000f4  sw          $s0, 0xF4($s6)
    ctx->pc = 0x190a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 244), GPR_U32(ctx, 16));
label_190a30:
    // 0x190a30: 0x8ce627e4  lw          $a2, 0x27E4($a3)
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10212)));
label_190a34:
    // 0x190a34: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x190a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_190a38:
    // 0x190a38: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x190a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_190a3c:
    // 0x190a3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x190a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190a40:
    // 0x190a40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x190a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_190a44:
    // 0x190a44: 0x8ec500f0  lw          $a1, 0xF0($s6)
    ctx->pc = 0x190a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_190a48:
    // 0x190a48: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x190a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_190a4c:
    // 0x190a4c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x190a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_190a50:
    // 0x190a50: 0x60f809  jalr        $v1
label_190a54:
    if (ctx->pc == 0x190A54u) {
        ctx->pc = 0x190A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A50u;
        // 0x190a54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A58u;
        goto label_190a58;
    }
    ctx->pc = 0x190A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x190A58u);
        ctx->pc = 0x190A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A50u;
        // 0x190a54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A50u, 0x190A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190A58u;
label_190a58:
    // 0x190a58: 0xc11a890  jal         func_46A240
label_190a5c:
    if (ctx->pc == 0x190A5Cu) {
        ctx->pc = 0x190A60u;
        goto label_190a60;
    }
    ctx->pc = 0x190A58u;
    SET_GPR_U32(ctx, 31, 0x190A60u);
    ctx->pc = 0x46A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A240u, 0x190A58u, 0x190A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A60u;
label_190a60:
    // 0x190a60: 0xc12107a  jal         func_4841E8
label_190a64:
    if (ctx->pc == 0x190A64u) {
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A60u;
        // 0x190a64: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A68u;
        goto label_190a68;
    }
    ctx->pc = 0x190A60u;
    SET_GPR_U32(ctx, 31, 0x190A68u);
    ctx->pc = 0x190A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A60u;
    // 0x190a64: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x190A60u, 0x190A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x190a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_190a6c:
    // 0x190a6c: 0xc11a4b6  jal         func_4692D8
label_190a70:
    if (ctx->pc == 0x190A70u) {
        ctx->pc = 0x190A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A6Cu;
        // 0x190a70: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A74u;
        goto label_190a74;
    }
    ctx->pc = 0x190A6Cu;
    SET_GPR_U32(ctx, 31, 0x190A74u);
    ctx->pc = 0x190A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A6Cu;
    // 0x190a70: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4692D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4692D8u, 0x190A6Cu, 0x190A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A74u;
label_190a74:
    // 0x190a74: 0xc12107a  jal         func_4841E8
label_190a78:
    if (ctx->pc == 0x190A78u) {
        ctx->pc = 0x190A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A74u;
        // 0x190a78: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A7Cu;
        goto label_190a7c;
    }
    ctx->pc = 0x190A74u;
    SET_GPR_U32(ctx, 31, 0x190A7Cu);
    ctx->pc = 0x190A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A74u;
    // 0x190a78: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x190A74u, 0x190A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A7Cu;
label_190a7c:
    // 0x190a7c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x190a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_190a80:
    // 0x190a80: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x190a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_190a84:
    // 0x190a84: 0xc11a830  jal         func_46A0C0
label_190a88:
    if (ctx->pc == 0x190A88u) {
        ctx->pc = 0x190A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A84u;
        // 0x190a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A8Cu;
        goto label_190a8c;
    }
    ctx->pc = 0x190A84u;
    SET_GPR_U32(ctx, 31, 0x190A8Cu);
    ctx->pc = 0x190A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A84u;
    // 0x190a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x190A84u, 0x190A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A8Cu;
label_190a8c:
    // 0x190a8c: 0x8ec3004c  lw          $v1, 0x4C($s6)
    ctx->pc = 0x190a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_190a90:
    // 0x190a90: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_190a94:
    // 0x190a94: 0x8ec40048  lw          $a0, 0x48($s6)
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190a98:
    // 0x190a98: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_190a9c:
    // 0x190a9c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x190a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_190aa0:
    // 0x190aa0: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x190aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_190aa4:
    // 0x190aa4: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x190aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_190aa8:
    // 0x190aa8: 0x2012  mflo        $a0
    ctx->pc = 0x190aa8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_190aac:
    // 0x190aac: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x190aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_190ab0:
    // 0x190ab0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_190ab4:
    // 0x190ab4: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_190ab8:
    // 0x190ab8: 0xc11ac5c  jal         func_46B170
label_190abc:
    if (ctx->pc == 0x190ABCu) {
        ctx->pc = 0x190ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AB8u;
        // 0x190abc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AC0u;
        goto label_190ac0;
    }
    ctx->pc = 0x190AB8u;
    SET_GPR_U32(ctx, 31, 0x190AC0u);
    ctx->pc = 0x190ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AB8u;
    // 0x190abc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x190AB8u, 0x190AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AC0u;
label_190ac0:
    // 0x190ac0: 0xc11b3b6  jal         func_46CED8
label_190ac4:
    if (ctx->pc == 0x190AC4u) {
        ctx->pc = 0x190AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AC0u;
        // 0x190ac4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AC8u;
        goto label_190ac8;
    }
    ctx->pc = 0x190AC0u;
    SET_GPR_U32(ctx, 31, 0x190AC8u);
    ctx->pc = 0x190AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AC0u;
    // 0x190ac4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x190AC0u, 0x190AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AC8u;
label_190ac8:
    // 0x190ac8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x190ac8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190acc:
    // 0x190acc: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x190accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_190ad0:
    // 0x190ad0: 0x246732b0  addiu       $a3, $v1, 0x32B0
    ctx->pc = 0x190ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12976));
label_190ad4:
    // 0x190ad4: 0x88e20003  lwl         $v0, 0x3($a3)
    ctx->pc = 0x190ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_190ad8:
    // 0x190ad8: 0x98e20000  lwr         $v0, 0x0($a3)
    ctx->pc = 0x190ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_190adc:
    // 0x190adc: 0xaba20033  swl         $v0, 0x33($sp)
    ctx->pc = 0x190adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_190ae0:
    // 0x190ae0: 0xbba20030  swr         $v0, 0x30($sp)
    ctx->pc = 0x190ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_190ae4:
    // 0x190ae4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x190ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_190ae8:
    // 0x190ae8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_190aec:
    // 0x190aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190af0:
    // 0x190af0: 0x8ba20033  lwl         $v0, 0x33($sp)
    ctx->pc = 0x190af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_190af4:
    // 0x190af4: 0x9ba20030  lwr         $v0, 0x30($sp)
    ctx->pc = 0x190af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_190af8:
    // 0x190af8: 0xaae20007  swl         $v0, 0x7($s7)
    ctx->pc = 0x190af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_190afc:
    // 0x190afc: 0xbae20004  swr         $v0, 0x4($s7)
    ctx->pc = 0x190afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_190b00:
    // 0x190b00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x190b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_190b04:
    // 0x190b04: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x190b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_190b08:
    // 0x190b08: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x190b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_190b0c:
    // 0x190b0c: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x190b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_190b10:
    // 0x190b10: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x190b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_190b14:
    // 0x190b14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_190b18:
    // 0x190b18: 0xb2e70013  sdl         $a3, 0x13($s7)
    ctx->pc = 0x190b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_190b1c:
    // 0x190b1c: 0xb6e7000c  sdr         $a3, 0xC($s7)
    ctx->pc = 0x190b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_190b20:
    // 0x190b20: 0xaee20014  sw          $v0, 0x14($s7)
    ctx->pc = 0x190b20u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 2));
label_190b24:
    // 0x190b24: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_190b28:
    // 0x190b28: 0xc11b404  jal         func_46D010
label_190b2c:
    if (ctx->pc == 0x190B2Cu) {
        ctx->pc = 0x190B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B28u;
        // 0x190b2c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B30u;
        goto label_190b30;
    }
    ctx->pc = 0x190B28u;
    SET_GPR_U32(ctx, 31, 0x190B30u);
    ctx->pc = 0x190B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B28u;
    // 0x190b2c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x190B28u, 0x190B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B30u;
label_190b30:
    // 0x190b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190b34:
    // 0x190b34: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x190b34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190b38:
    // 0x190b38: 0xc11affa  jal         func_46BFE8
label_190b3c:
    if (ctx->pc == 0x190B3Cu) {
        ctx->pc = 0x190B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B38u;
        // 0x190b3c: 0x24050ffa  addiu       $a1, $zero, 0xFFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4090));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B40u;
        goto label_190b40;
    }
    ctx->pc = 0x190B38u;
    SET_GPR_U32(ctx, 31, 0x190B40u);
    ctx->pc = 0x190B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B38u;
    // 0x190b3c: 0x24050ffa  addiu       $a1, $zero, 0xFFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4090));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x190B38u, 0x190B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B40u;
label_190b40:
    // 0x190b40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190b44:
    // 0x190b44: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x190b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_190b48:
    // 0x190b48: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x190b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_190b4c:
    // 0x190b4c: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
label_190b50:
    if (ctx->pc == 0x190B50u) {
        ctx->pc = 0x190B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B4Cu;
        // 0x190b50: 0xafa60064  sw          $a2, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B54u;
        goto label_190b54;
    }
    ctx->pc = 0x190B4Cu;
    {
        const bool branch_taken_0x190b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B4Cu;
        // 0x190b50: 0xafa60064  sw          $a2, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b4c) {
            ctx->pc = 0x191028u;
            goto label_191028;
        }
    }
    ctx->pc = 0x190B54u;
label_190b54:
    // 0x190b54: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x190b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190b58:
    // 0x190b58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x190b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190b5c:
    // 0x190b5c: 0x1060012d  beqz        $v1, . + 4 + (0x12D << 2)
label_190b60:
    if (ctx->pc == 0x190B60u) {
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B64u;
        goto label_190b64;
    }
    ctx->pc = 0x190B5Cu;
    {
        const bool branch_taken_0x190b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b5c) {
            ctx->pc = 0x191014u;
            goto label_191014;
        }
    }
    ctx->pc = 0x190B64u;
label_190b64:
    // 0x190b64: 0x26870002  addiu       $a3, $s4, 0x2
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_190b68:
    // 0x190b68: 0xafbe0068  sw          $fp, 0x68($sp)
    ctx->pc = 0x190b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 30));
label_190b6c:
    // 0x190b6c: 0xafa7006c  sw          $a3, 0x6C($sp)
    ctx->pc = 0x190b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 7));
label_190b70:
    // 0x190b70: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x190b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190b74:
    // 0x190b74: 0x0  nop
    ctx->pc = 0x190b74u;
    // NOP
label_190b78:
    // 0x190b78: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_190b7c:
    // 0x190b7c: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x190b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190b80:
    // 0x190b80: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_190b84:
    // 0x190b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190b88:
    // 0x190b88: 0x8ba30033  lwl         $v1, 0x33($sp)
    ctx->pc = 0x190b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_190b8c:
    // 0x190b8c: 0x9ba30030  lwr         $v1, 0x30($sp)
    ctx->pc = 0x190b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_190b90:
    // 0x190b90: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x190b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_190b94:
    // 0x190b94: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x190b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_190b98:
    // 0x190b98: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x190b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190b9c:
    // 0x190b9c: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
label_190ba0:
    // 0x190ba0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x190ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_190ba4:
    // 0x190ba4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x190ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190ba8:
    // 0x190ba8: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x190ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_190bac:
    // 0x190bac: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x190bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_190bb0:
    // 0x190bb0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x190bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_190bb4:
    // 0x190bb4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x190bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_190bb8:
    // 0x190bb8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_190bbc:
    if (ctx->pc == 0x190BBCu) {
        ctx->pc = 0x190BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BB8u;
        // 0x190bbc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BC0u;
        goto label_190bc0;
    }
    ctx->pc = 0x190BB8u;
    {
        const bool branch_taken_0x190bb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BB8u;
        // 0x190bbc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bb8) {
            ctx->pc = 0x190BD4u;
            goto label_190bd4;
        }
    }
    ctx->pc = 0x190BC0u;
label_190bc0:
    // 0x190bc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190bc4:
    // 0x190bc4: 0x0  nop
    ctx->pc = 0x190bc4u;
    // NOP
label_190bc8:
    // 0x190bc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190bcc:
    // 0x190bcc: 0x10000007  b           . + 4 + (0x7 << 2)
label_190bd0:
    if (ctx->pc == 0x190BD0u) {
        ctx->pc = 0x190BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BCCu;
        // 0x190bd0: 0x8ec20048  lw          $v0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BD4u;
        goto label_190bd4;
    }
    ctx->pc = 0x190BCCu;
    {
        const bool branch_taken_0x190bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BCCu;
        // 0x190bd0: 0x8ec20048  lw          $v0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bcc) {
            ctx->pc = 0x190BECu;
            goto label_190bec;
        }
    }
    ctx->pc = 0x190BD4u;
label_190bd4:
    // 0x190bd4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_190bd8:
    // 0x190bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190bdc:
    // 0x190bdc: 0x0  nop
    ctx->pc = 0x190bdcu;
    // NOP
label_190be0:
    // 0x190be0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190be4:
    // 0x190be4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x190be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_190be8:
    // 0x190be8: 0x8ec20048  lw          $v0, 0x48($s6)
    ctx->pc = 0x190be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190bec:
    // 0x190bec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_190bf0:
    // 0x190bf0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_190bf4:
    if (ctx->pc == 0x190BF4u) {
        ctx->pc = 0x190BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BF0u;
        // 0x190bf4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BF8u;
        goto label_190bf8;
    }
    ctx->pc = 0x190BF0u;
    {
        const bool branch_taken_0x190bf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BF0u;
        // 0x190bf4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bf0) {
            ctx->pc = 0x190C0Cu;
            goto label_190c0c;
        }
    }
    ctx->pc = 0x190BF8u;
label_190bf8:
    // 0x190bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190bfc:
    // 0x190bfc: 0x0  nop
    ctx->pc = 0x190bfcu;
    // NOP
label_190c00:
    // 0x190c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190c04:
    // 0x190c04: 0x10000007  b           . + 4 + (0x7 << 2)
label_190c08:
    if (ctx->pc == 0x190C08u) {
        ctx->pc = 0x190C0Cu;
        goto label_190c0c;
    }
    ctx->pc = 0x190C04u;
    {
        const bool branch_taken_0x190c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c04) {
            ctx->pc = 0x190C24u;
            goto label_190c24;
        }
    }
    ctx->pc = 0x190C0Cu;
label_190c0c:
    // 0x190c0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190c10:
    // 0x190c10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190c14:
    // 0x190c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190c18:
    // 0x190c18: 0x0  nop
    ctx->pc = 0x190c18u;
    // NOP
label_190c1c:
    // 0x190c1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190c20:
    // 0x190c20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190c24:
    // 0x190c24: 0x0  nop
    ctx->pc = 0x190c24u;
    // NOP
label_190c28:
    // 0x190c28: 0x0  nop
    ctx->pc = 0x190c28u;
    // NOP
label_190c2c:
    // 0x190c2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190c2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_190c30:
    // 0x190c30: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x190c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_190c34:
    // 0x190c34: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x190c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
label_190c38:
    // 0x190c38: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x190c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190c3c:
    // 0x190c3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x190c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_190c40:
    // 0x190c40: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_190c44:
    if (ctx->pc == 0x190C44u) {
        ctx->pc = 0x190C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C40u;
        // 0x190c44: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C48u;
        goto label_190c48;
    }
    ctx->pc = 0x190C40u;
    {
        const bool branch_taken_0x190c40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x190c40) {
            ctx->pc = 0x190C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C40u;
            // 0x190c44: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C5Cu;
            goto label_190c5c;
        }
    }
    ctx->pc = 0x190C48u;
label_190c48:
    // 0x190c48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190c4c:
    // 0x190c4c: 0x0  nop
    ctx->pc = 0x190c4cu;
    // NOP
label_190c50:
    // 0x190c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190c54:
    // 0x190c54: 0x10000006  b           . + 4 + (0x6 << 2)
label_190c58:
    if (ctx->pc == 0x190C58u) {
        ctx->pc = 0x190C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C54u;
        // 0x190c58: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C5Cu;
        goto label_190c5c;
    }
    ctx->pc = 0x190C54u;
    {
        const bool branch_taken_0x190c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C54u;
        // 0x190c58: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c54) {
            ctx->pc = 0x190C70u;
            goto label_190c70;
        }
    }
    ctx->pc = 0x190C5Cu;
label_190c5c:
    // 0x190c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190c60:
    // 0x190c60: 0x0  nop
    ctx->pc = 0x190c60u;
    // NOP
label_190c64:
    // 0x190c64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190c68:
    // 0x190c68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x190c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_190c6c:
    // 0x190c6c: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_190c70:
    // 0x190c70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_190c74:
    // 0x190c74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_190c78:
    if (ctx->pc == 0x190C78u) {
        ctx->pc = 0x190C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C74u;
        // 0x190c78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C7Cu;
        goto label_190c7c;
    }
    ctx->pc = 0x190C74u;
    {
        const bool branch_taken_0x190c74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C74u;
        // 0x190c78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c74) {
            ctx->pc = 0x190C90u;
            goto label_190c90;
        }
    }
    ctx->pc = 0x190C7Cu;
label_190c7c:
    // 0x190c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190c80:
    // 0x190c80: 0x0  nop
    ctx->pc = 0x190c80u;
    // NOP
label_190c84:
    // 0x190c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190c88:
    // 0x190c88: 0x10000007  b           . + 4 + (0x7 << 2)
label_190c8c:
    if (ctx->pc == 0x190C8Cu) {
        ctx->pc = 0x190C90u;
        goto label_190c90;
    }
    ctx->pc = 0x190C88u;
    {
        const bool branch_taken_0x190c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c88) {
            ctx->pc = 0x190CA8u;
            goto label_190ca8;
        }
    }
    ctx->pc = 0x190C90u;
label_190c90:
    // 0x190c90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190c94:
    // 0x190c94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190c98:
    // 0x190c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190c9c:
    // 0x190c9c: 0x0  nop
    ctx->pc = 0x190c9cu;
    // NOP
label_190ca0:
    // 0x190ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190ca4:
    // 0x190ca4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190ca8:
    // 0x190ca8: 0x0  nop
    ctx->pc = 0x190ca8u;
    // NOP
label_190cac:
    // 0x190cac: 0x0  nop
    ctx->pc = 0x190cacu;
    // NOP
label_190cb0:
    // 0x190cb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190cb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_190cb4:
    // 0x190cb4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_190cb8:
    // 0x190cb8: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x190cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190cbc:
    // 0x190cbc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x190cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_190cc0:
    // 0x190cc0: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x190cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_190cc4:
    // 0x190cc4: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x190cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_190cc8:
    // 0x190cc8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_190ccc:
    if (ctx->pc == 0x190CCCu) {
        ctx->pc = 0x190CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC8u;
        // 0x190ccc: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CD0u;
        goto label_190cd0;
    }
    ctx->pc = 0x190CC8u;
    {
        const bool branch_taken_0x190cc8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x190CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC8u;
        // 0x190ccc: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cc8) {
            ctx->pc = 0x190CE4u;
            goto label_190ce4;
        }
    }
    ctx->pc = 0x190CD0u;
label_190cd0:
    // 0x190cd0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x190cd0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190cd4:
    // 0x190cd4: 0x0  nop
    ctx->pc = 0x190cd4u;
    // NOP
label_190cd8:
    // 0x190cd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190cdc:
    // 0x190cdc: 0x10000009  b           . + 4 + (0x9 << 2)
label_190ce0:
    if (ctx->pc == 0x190CE0u) {
        ctx->pc = 0x190CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CDCu;
        // 0x190ce0: 0x8ec20048  lw          $v0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CE4u;
        goto label_190ce4;
    }
    ctx->pc = 0x190CDCu;
    {
        const bool branch_taken_0x190cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CDCu;
        // 0x190ce0: 0x8ec20048  lw          $v0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cdc) {
            ctx->pc = 0x190D04u;
            goto label_190d04;
        }
    }
    ctx->pc = 0x190CE4u;
label_190ce4:
    // 0x190ce4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x190ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_190ce8:
    // 0x190ce8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_190cec:
    // 0x190cec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190cf0:
    // 0x190cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190cf4:
    // 0x190cf4: 0x0  nop
    ctx->pc = 0x190cf4u;
    // NOP
label_190cf8:
    // 0x190cf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190cfc:
    // 0x190cfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x190cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_190d00:
    // 0x190d00: 0x8ec20048  lw          $v0, 0x48($s6)
    ctx->pc = 0x190d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190d04:
    // 0x190d04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_190d08:
    // 0x190d08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_190d0c:
    if (ctx->pc == 0x190D0Cu) {
        ctx->pc = 0x190D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D08u;
        // 0x190d0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D10u;
        goto label_190d10;
    }
    ctx->pc = 0x190D08u;
    {
        const bool branch_taken_0x190d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D08u;
        // 0x190d0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d08) {
            ctx->pc = 0x190D24u;
            goto label_190d24;
        }
    }
    ctx->pc = 0x190D10u;
label_190d10:
    // 0x190d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d14:
    // 0x190d14: 0x0  nop
    ctx->pc = 0x190d14u;
    // NOP
label_190d18:
    // 0x190d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190d1c:
    // 0x190d1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_190d20:
    if (ctx->pc == 0x190D20u) {
        ctx->pc = 0x190D24u;
        goto label_190d24;
    }
    ctx->pc = 0x190D1Cu;
    {
        const bool branch_taken_0x190d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d1c) {
            ctx->pc = 0x190D3Cu;
            goto label_190d3c;
        }
    }
    ctx->pc = 0x190D24u;
label_190d24:
    // 0x190d24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190d28:
    // 0x190d28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190d2c:
    // 0x190d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d30:
    // 0x190d30: 0x0  nop
    ctx->pc = 0x190d30u;
    // NOP
label_190d34:
    // 0x190d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190d38:
    // 0x190d38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190d3c:
    // 0x190d3c: 0x0  nop
    ctx->pc = 0x190d3cu;
    // NOP
label_190d40:
    // 0x190d40: 0x0  nop
    ctx->pc = 0x190d40u;
    // NOP
label_190d44:
    // 0x190d44: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190d44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_190d48:
    // 0x190d48: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_190d4c:
    // 0x190d4c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x190d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190d50:
    // 0x190d50: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_190d54:
    // 0x190d54: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_190d58:
    if (ctx->pc == 0x190D58u) {
        ctx->pc = 0x190D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D54u;
        // 0x190d58: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D5Cu;
        goto label_190d5c;
    }
    ctx->pc = 0x190D54u;
    {
        const bool branch_taken_0x190d54 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x190D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D54u;
        // 0x190d58: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d54) {
            ctx->pc = 0x190D70u;
            goto label_190d70;
        }
    }
    ctx->pc = 0x190D5Cu;
label_190d5c:
    // 0x190d5c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x190d5cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190d60:
    // 0x190d60: 0x0  nop
    ctx->pc = 0x190d60u;
    // NOP
label_190d64:
    // 0x190d64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190d68:
    // 0x190d68: 0x10000009  b           . + 4 + (0x9 << 2)
label_190d6c:
    if (ctx->pc == 0x190D6Cu) {
        ctx->pc = 0x190D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D68u;
        // 0x190d6c: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D70u;
        goto label_190d70;
    }
    ctx->pc = 0x190D68u;
    {
        const bool branch_taken_0x190d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D68u;
        // 0x190d6c: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d68) {
            ctx->pc = 0x190D90u;
            goto label_190d90;
        }
    }
    ctx->pc = 0x190D70u;
label_190d70:
    // 0x190d70: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_190d74:
    // 0x190d74: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x190d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_190d78:
    // 0x190d78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190d7c:
    // 0x190d7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190d80:
    // 0x190d80: 0x0  nop
    ctx->pc = 0x190d80u;
    // NOP
label_190d84:
    // 0x190d84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190d88:
    // 0x190d88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x190d88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_190d8c:
    // 0x190d8c: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x190d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_190d90:
    // 0x190d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_190d94:
    // 0x190d94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_190d98:
    if (ctx->pc == 0x190D98u) {
        ctx->pc = 0x190D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D94u;
        // 0x190d98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D9Cu;
        goto label_190d9c;
    }
    ctx->pc = 0x190D94u;
    {
        const bool branch_taken_0x190d94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D94u;
        // 0x190d98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d94) {
            ctx->pc = 0x190DB0u;
            goto label_190db0;
        }
    }
    ctx->pc = 0x190D9Cu;
label_190d9c:
    // 0x190d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190da0:
    // 0x190da0: 0x0  nop
    ctx->pc = 0x190da0u;
    // NOP
label_190da4:
    // 0x190da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190da8:
    // 0x190da8: 0x10000007  b           . + 4 + (0x7 << 2)
label_190dac:
    if (ctx->pc == 0x190DACu) {
        ctx->pc = 0x190DB0u;
        goto label_190db0;
    }
    ctx->pc = 0x190DA8u;
    {
        const bool branch_taken_0x190da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190da8) {
            ctx->pc = 0x190DC8u;
            goto label_190dc8;
        }
    }
    ctx->pc = 0x190DB0u;
label_190db0:
    // 0x190db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190db4:
    // 0x190db4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190db8:
    // 0x190db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190dbc:
    // 0x190dbc: 0x0  nop
    ctx->pc = 0x190dbcu;
    // NOP
label_190dc0:
    // 0x190dc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190dc4:
    // 0x190dc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190dc8:
    // 0x190dc8: 0x0  nop
    ctx->pc = 0x190dc8u;
    // NOP
label_190dcc:
    // 0x190dcc: 0x0  nop
    ctx->pc = 0x190dccu;
    // NOP
label_190dd0:
    // 0x190dd0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190dd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_190dd4:
    // 0x190dd4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x190dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_190dd8:
    // 0x190dd8: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x190dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_190ddc:
    // 0x190ddc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x190ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_190de0:
    // 0x190de0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x190de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_190de4:
    // 0x190de4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x190de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_190de8:
    // 0x190de8: 0x8ec4004c  lw          $a0, 0x4C($s6)
    ctx->pc = 0x190de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_190dec:
    // 0x190dec: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x190decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_190df0:
    // 0x190df0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x190df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_190df4:
    // 0x190df4: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
label_190df8:
    if (ctx->pc == 0x190DF8u) {
        ctx->pc = 0x190DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF4u;
        // 0x190df8: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DFCu;
        goto label_190dfc;
    }
    ctx->pc = 0x190DF4u;
    {
        const bool branch_taken_0x190df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190df4) {
            ctx->pc = 0x190DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190DF4u;
            // 0x190df8: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191004u;
            goto label_191004;
        }
    }
    ctx->pc = 0x190DFCu;
label_190dfc:
    // 0x190dfc: 0x8eca0048  lw          $t2, 0x48($s6)
    ctx->pc = 0x190dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190e00:
    // 0x190e00: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x190e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_190e04:
    // 0x190e04: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x190e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_190e08:
    // 0x190e08: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_190e0c:
    if (ctx->pc == 0x190E0Cu) {
        ctx->pc = 0x190E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E08u;
        // 0x190e0c: 0x32850001  andi        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E10u;
        goto label_190e10;
    }
    ctx->pc = 0x190E08u;
    {
        const bool branch_taken_0x190e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E08u;
        // 0x190e0c: 0x32850001  andi        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e08) {
            ctx->pc = 0x190F5Cu;
            goto label_190f5c;
        }
    }
    ctx->pc = 0x190E10u;
label_190e10:
    // 0x190e10: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x190e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190e14:
    // 0x190e14: 0x8e75002c  lw          $s5, 0x2C($s3)
    ctx->pc = 0x190e14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_190e18:
    // 0x190e18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x190e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_190e1c:
    // 0x190e1c: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
label_190e20:
    if (ctx->pc == 0x190E20u) {
        ctx->pc = 0x190E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E1Cu;
        // 0x190e20: 0x548821  addu        $s1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E24u;
        goto label_190e24;
    }
    ctx->pc = 0x190E1Cu;
    {
        const bool branch_taken_0x190e1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E1Cu;
        // 0x190e20: 0x548821  addu        $s1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e1c) {
            ctx->pc = 0x190EC4u;
            goto label_190ec4;
        }
    }
    ctx->pc = 0x190E24u;
label_190e24:
    // 0x190e24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_190e28:
    // 0x190e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190e2c:
    // 0x190e2c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x190e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190e30:
    // 0x190e30: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x190e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190e34:
    // 0x190e34: 0x1541018  mult        $v0, $t2, $s4
    ctx->pc = 0x190e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190e38:
    // 0x190e38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_190e3c:
    // 0x190e3c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x190e3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_190e40:
    // 0x190e40: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x190e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190e44:
    // 0x190e44: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x190e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_190e48:
    // 0x190e48: 0x25060001  addiu       $a2, $t0, 0x1
    ctx->pc = 0x190e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_190e4c:
    // 0x190e4c: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x190e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_190e50:
    // 0x190e50: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x190e50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_190e54:
    // 0x190e54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x190e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_190e58:
    // 0x190e58: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x190e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_190e5c:
    // 0x190e5c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_190e60:
    // 0x190e60: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_190e64:
    // 0x190e64: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_190e68:
    // 0x190e68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_190e6c:
    // 0x190e6c: 0xc11afb0  jal         func_46BEC0
label_190e70:
    if (ctx->pc == 0x190E70u) {
        ctx->pc = 0x190E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E6Cu;
        // 0x190e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E74u;
        goto label_190e74;
    }
    ctx->pc = 0x190E6Cu;
    SET_GPR_U32(ctx, 31, 0x190E74u);
    ctx->pc = 0x190E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E6Cu;
    // 0x190e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x190E6Cu, 0x190E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E74u;
label_190e74:
    // 0x190e74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190e78:
    // 0x190e78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190e7c:
    // 0x190e7c: 0xc11afb6  jal         func_46BED8
label_190e80:
    if (ctx->pc == 0x190E80u) {
        ctx->pc = 0x190E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E7Cu;
        // 0x190e80: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E84u;
        goto label_190e84;
    }
    ctx->pc = 0x190E7Cu;
    SET_GPR_U32(ctx, 31, 0x190E84u);
    ctx->pc = 0x190E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E7Cu;
    // 0x190e80: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x190E7Cu, 0x190E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E84u;
label_190e84:
    // 0x190e84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190e84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190e88:
    // 0x190e88: 0x8ec70048  lw          $a3, 0x48($s6)
    ctx->pc = 0x190e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190e8c:
    // 0x190e8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x190e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_190e90:
    // 0x190e90: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x190e90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_190e94:
    // 0x190e94: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_190e98:
    // 0x190e98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190e9c:
    // 0x190e9c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x190e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190ea0:
    // 0x190ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190ea4:
    // 0x190ea4: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x190ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190ea8:
    // 0x190ea8: 0xf41018  mult        $v0, $a3, $s4
    ctx->pc = 0x190ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190eac:
    // 0x190eac: 0x25060001  addiu       $a2, $t0, 0x1
    ctx->pc = 0x190eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_190eb0:
    // 0x190eb0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x190eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_190eb4:
    // 0x190eb4: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x190eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_190eb8:
    // 0x190eb8: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x190eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190ebc:
    // 0x190ebc: 0x10000049  b           . + 4 + (0x49 << 2)
label_190ec0:
    if (ctx->pc == 0x190EC0u) {
        ctx->pc = 0x190EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EBCu;
        // 0x190ec0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EC4u;
        goto label_190ec4;
    }
    ctx->pc = 0x190EBCu;
    {
        const bool branch_taken_0x190ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EBCu;
        // 0x190ec0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ebc) {
            ctx->pc = 0x190FE4u;
            goto label_190fe4;
        }
    }
    ctx->pc = 0x190EC4u;
label_190ec4:
    // 0x190ec4: 0x1541018  mult        $v0, $t2, $s4
    ctx->pc = 0x190ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190ec8:
    // 0x190ec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190ecc:
    // 0x190ecc: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x190eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190ed0:
    // 0x190ed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x190ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_190ed4:
    // 0x190ed4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x190ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_190ed8:
    // 0x190ed8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x190ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_190edc:
    // 0x190edc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x190edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_190ee0:
    // 0x190ee0: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x190ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190ee4:
    // 0x190ee4: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190ee8:
    // 0x190ee8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x190ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_190eec:
    // 0x190eec: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x190eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_190ef0:
    // 0x190ef0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x190ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_190ef4:
    // 0x190ef4: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x190ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_190ef8:
    // 0x190ef8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x190ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_190efc:
    // 0x190efc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_190f00:
    // 0x190f00: 0xc11afb0  jal         func_46BEC0
label_190f04:
    if (ctx->pc == 0x190F04u) {
        ctx->pc = 0x190F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F00u;
        // 0x190f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F08u;
        goto label_190f08;
    }
    ctx->pc = 0x190F00u;
    SET_GPR_U32(ctx, 31, 0x190F08u);
    ctx->pc = 0x190F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F00u;
    // 0x190f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x190F00u, 0x190F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F08u;
label_190f08:
    // 0x190f08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190f0c:
    // 0x190f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190f10:
    // 0x190f10: 0xc11afb6  jal         func_46BED8
label_190f14:
    if (ctx->pc == 0x190F14u) {
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F18u;
        goto label_190f18;
    }
    ctx->pc = 0x190F10u;
    SET_GPR_U32(ctx, 31, 0x190F18u);
    ctx->pc = 0x190F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F10u;
    // 0x190f14: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x190F10u, 0x190F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F18u;
label_190f18:
    // 0x190f18: 0x8ec60048  lw          $a2, 0x48($s6)
    ctx->pc = 0x190f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_190f1c:
    // 0x190f1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190f20:
    // 0x190f20: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x190f20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_190f24:
    // 0x190f24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190f28:
    // 0x190f28: 0xd41018  mult        $v0, $a2, $s4
    ctx->pc = 0x190f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190f2c:
    // 0x190f2c: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_190f30:
    // 0x190f30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190f34:
    // 0x190f34: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190f38:
    // 0x190f38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_190f3c:
    // 0x190f3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_190f40:
    // 0x190f40: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x190f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_190f44:
    // 0x190f44: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x190f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190f48:
    // 0x190f48: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190f4c:
    // 0x190f4c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_190f50:
    // 0x190f50: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x190f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_190f54:
    // 0x190f54: 0x10000023  b           . + 4 + (0x23 << 2)
label_190f58:
    if (ctx->pc == 0x190F58u) {
        ctx->pc = 0x190F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F54u;
        // 0x190f58: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F5Cu;
        goto label_190f5c;
    }
    ctx->pc = 0x190F54u;
    {
        const bool branch_taken_0x190f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F54u;
        // 0x190f58: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f54) {
            ctx->pc = 0x190FE4u;
            goto label_190fe4;
        }
    }
    ctx->pc = 0x190F5Cu;
label_190f5c:
    // 0x190f5c: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_190f60:
    // 0x190f60: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x190f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_190f64:
    // 0x190f64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_190f68:
    if (ctx->pc == 0x190F68u) {
        ctx->pc = 0x190F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F64u;
        // 0x190f68: 0x3c31018  mult        $v0, $fp, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F6Cu;
        goto label_190f6c;
    }
    ctx->pc = 0x190F64u;
    {
        const bool branch_taken_0x190f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F64u;
        // 0x190f68: 0x3c31018  mult        $v0, $fp, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f64) {
            ctx->pc = 0x191000u;
            goto label_191000;
        }
    }
    ctx->pc = 0x190F6Cu;
label_190f6c:
    // 0x190f6c: 0x8e6b002c  lw          $t3, 0x2C($s3)
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_190f70:
    // 0x190f70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_190f74:
    // 0x190f74: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_190f78:
    if (ctx->pc == 0x190F78u) {
        ctx->pc = 0x190F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F74u;
        // 0x190f78: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F7Cu;
        goto label_190f7c;
    }
    ctx->pc = 0x190F74u;
    {
        const bool branch_taken_0x190f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F74u;
        // 0x190f78: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f74) {
            ctx->pc = 0x190FACu;
            goto label_190fac;
        }
    }
    ctx->pc = 0x190F7Cu;
label_190f7c:
    // 0x190f7c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_190f80:
    // 0x190f80: 0x1543018  mult        $a2, $t2, $s4
    ctx->pc = 0x190f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_190f84:
    // 0x190f84: 0x15e3818  mult        $a3, $t2, $fp
    ctx->pc = 0x190f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_190f88:
    // 0x190f88: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x190f88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_190f8c:
    // 0x190f8c: 0x1434018  mult        $t0, $t2, $v1
    ctx->pc = 0x190f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_190f90:
    // 0x190f90: 0x1708021  addu        $s0, $t3, $s0
    ctx->pc = 0x190f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
label_190f94:
    // 0x190f94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190f98:
    // 0x190f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190f9c:
    // 0x190f9c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x190f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_190fa0:
    // 0x190fa0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x190fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_190fa4:
    // 0x190fa4: 0x1000000f  b           . + 4 + (0xF << 2)
label_190fa8:
    if (ctx->pc == 0x190FA8u) {
        ctx->pc = 0x190FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FA4u;
        // 0x190fa8: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FACu;
        goto label_190fac;
    }
    ctx->pc = 0x190FA4u;
    {
        const bool branch_taken_0x190fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FA4u;
        // 0x190fa8: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fa4) {
            ctx->pc = 0x190FE4u;
            goto label_190fe4;
        }
    }
    ctx->pc = 0x190FACu;
label_190fac:
    // 0x190fac: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x190facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_190fb0:
    // 0x190fb0: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_190fb4:
    // 0x190fb4: 0x15e1018  mult        $v0, $t2, $fp
    ctx->pc = 0x190fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_190fb8:
    // 0x190fb8: 0x1708021  addu        $s0, $t3, $s0
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
label_190fbc:
    // 0x190fbc: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x190fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_190fc0:
    // 0x190fc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190fc4:
    // 0x190fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190fc8:
    // 0x190fc8: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_190fcc:
    // 0x190fcc: 0x724021  addu        $t0, $v1, $s2
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_190fd0:
    // 0x190fd0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x190fd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_190fd4:
    // 0x190fd4: 0x1541818  mult        $v1, $t2, $s4
    ctx->pc = 0x190fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_190fd8:
    // 0x190fd8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x190fd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_190fdc:
    // 0x190fdc: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_190fe0:
    // 0x190fe0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x190fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_190fe4:
    // 0x190fe4: 0xc11afb0  jal         func_46BEC0
label_190fe8:
    if (ctx->pc == 0x190FE8u) {
        ctx->pc = 0x190FECu;
        goto label_190fec;
    }
    ctx->pc = 0x190FE4u;
    SET_GPR_U32(ctx, 31, 0x190FECu);
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x190FE4u, 0x190FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190FECu;
label_190fec:
    // 0x190fec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190ff0:
    // 0x190ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190ff4:
    // 0x190ff4: 0xc11afb6  jal         func_46BED8
label_190ff8:
    if (ctx->pc == 0x190FF8u) {
        ctx->pc = 0x190FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FF4u;
        // 0x190ff8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FFCu;
        goto label_190ffc;
    }
    ctx->pc = 0x190FF4u;
    SET_GPR_U32(ctx, 31, 0x190FFCu);
    ctx->pc = 0x190FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190FF4u;
    // 0x190ff8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x190FF4u, 0x190FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190FFCu;
label_190ffc:
    // 0x190ffc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191000:
    // 0x191000: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x191000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_191004:
    // 0x191004: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x191004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_191008:
    // 0x191008: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x191008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19100c:
    // 0x19100c: 0x1440feda  bnez        $v0, . + 4 + (-0x126 << 2)
label_191010:
    if (ctx->pc == 0x191010u) {
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0x2831018  mult        $v0, $s4, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191014u;
        goto label_191014;
    }
    ctx->pc = 0x19100Cu;
    {
        const bool branch_taken_0x19100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0x2831018  mult        $v0, $s4, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19100c) {
            ctx->pc = 0x190B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190b78;
        }
    }
    ctx->pc = 0x191014u;
label_191014:
    // 0x191014: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_191018:
    // 0x191018: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x191018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19101c:
    // 0x19101c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x19101cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191020:
    // 0x191020: 0x5440fecd  bnel        $v0, $zero, . + 4 + (-0x133 << 2)
label_191024:
    if (ctx->pc == 0x191024u) {
        ctx->pc = 0x191024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191020u;
        // 0x191024: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191028u;
        goto label_191028;
    }
    ctx->pc = 0x191020u;
    {
        const bool branch_taken_0x191020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191020) {
            ctx->pc = 0x191024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191020u;
            // 0x191024: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190b58;
        }
    }
    ctx->pc = 0x191028u;
label_191028:
    // 0x191028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19102c:
    // 0x19102c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19102cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_191030:
    // 0x191030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191034:
    // 0x191034: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_191038:
    // 0x191038: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x191038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_19103c:
    // 0x19103c: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x19103cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_191040:
    // 0x191040: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x191040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_191044:
    // 0x191044: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x191044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_191048:
    // 0x191048: 0x6ba50057  ldl         $a1, 0x57($sp)
    ctx->pc = 0x191048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19104c:
    // 0x19104c: 0x6fa50050  ldr         $a1, 0x50($sp)
    ctx->pc = 0x19104cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_191050:
    // 0x191050: 0x6ba6005f  ldl         $a2, 0x5F($sp)
    ctx->pc = 0x191050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_191054:
    // 0x191054: 0x6fa60058  ldr         $a2, 0x58($sp)
    ctx->pc = 0x191054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_191058:
    // 0x191058: 0xb065000b  sdl         $a1, 0xB($v1)
    ctx->pc = 0x191058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19105c:
    // 0x19105c: 0xb4650004  sdr         $a1, 0x4($v1)
    ctx->pc = 0x19105cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191060:
    // 0x191060: 0xb0660013  sdl         $a2, 0x13($v1)
    ctx->pc = 0x191060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191064:
    // 0x191064: 0xb466000c  sdr         $a2, 0xC($v1)
    ctx->pc = 0x191064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191068:
    // 0x191068: 0xc11aba8  jal         func_46AEA0
label_19106c:
    if (ctx->pc == 0x19106Cu) {
        ctx->pc = 0x19106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191068u;
        // 0x19106c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191070u;
        goto label_191070;
    }
    ctx->pc = 0x191068u;
    SET_GPR_U32(ctx, 31, 0x191070u);
    ctx->pc = 0x19106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191068u;
    // 0x19106c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x191068u, 0x191070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191070u;
label_191070:
    // 0x191070: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191074:
    // 0x191074: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x191074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_191078:
    // 0x191078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19107c:
    // 0x19107c: 0xc11a984  jal         func_46A610
label_191080:
    if (ctx->pc == 0x191080u) {
        ctx->pc = 0x191080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19107Cu;
        // 0x191080: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191084u;
        goto label_191084;
    }
    ctx->pc = 0x19107Cu;
    SET_GPR_U32(ctx, 31, 0x191084u);
    ctx->pc = 0x191080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19107Cu;
    // 0x191080: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x19107Cu, 0x191084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191084u;
label_191084:
    // 0x191084: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_191088:
    // 0x191088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19108c:
    // 0x19108c: 0xc11a864  jal         func_46A190
label_191090:
    if (ctx->pc == 0x191090u) {
        ctx->pc = 0x191090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19108Cu;
        // 0x191090: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191094u;
        goto label_191094;
    }
    ctx->pc = 0x19108Cu;
    SET_GPR_U32(ctx, 31, 0x191094u);
    ctx->pc = 0x191090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19108Cu;
    // 0x191090: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A190u, 0x19108Cu, 0x191094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191094u;
label_191094:
    // 0x191094: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_191098:
    // 0x191098: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x191098u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_19109c:
    // 0x19109c: 0xc120fde  jal         func_483F78
label_1910a0:
    if (ctx->pc == 0x1910A0u) {
        ctx->pc = 0x1910A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19109Cu;
        // 0x1910a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910A4u;
        goto label_1910a4;
    }
    ctx->pc = 0x19109Cu;
    SET_GPR_U32(ctx, 31, 0x1910A4u);
    ctx->pc = 0x1910A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19109Cu;
    // 0x1910a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483F78u, 0x19109Cu, 0x1910A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910A4u;
label_1910a4:
    // 0x1910a4: 0xc1194c4  jal         func_465310
label_1910a8:
    if (ctx->pc == 0x1910A8u) {
        ctx->pc = 0x1910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910A4u;
        // 0x1910a8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910ACu;
        goto label_1910ac;
    }
    ctx->pc = 0x1910A4u;
    SET_GPR_U32(ctx, 31, 0x1910ACu);
    ctx->pc = 0x1910A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910A4u;
    // 0x1910a8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x1910A4u, 0x1910ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910ACu;
label_1910ac:
    // 0x1910ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1910b0:
    // 0x1910b0: 0x8ec500f0  lw          $a1, 0xF0($s6)
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_1910b4:
    // 0x1910b4: 0x8c6627e4  lw          $a2, 0x27E4($v1)
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1910b8:
    // 0x1910b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1910bc:
    // 0x1910bc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1910c0:
    // 0x1910c0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1910c4:
    // 0x1910c4: 0x60f809  jalr        $v1
label_1910c8:
    if (ctx->pc == 0x1910C8u) {
        ctx->pc = 0x1910C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910C4u;
        // 0x1910c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910CCu;
        goto label_1910cc;
    }
    ctx->pc = 0x1910C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1910CCu);
        ctx->pc = 0x1910C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910C4u;
        // 0x1910c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1910C4u, 0x1910CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1910CCu;
label_1910cc:
    // 0x1910cc: 0xc11b010  jal         func_46C040
label_1910d0:
    if (ctx->pc == 0x1910D0u) {
        ctx->pc = 0x1910D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910CCu;
        // 0x1910d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910D4u;
        goto label_1910d4;
    }
    ctx->pc = 0x1910CCu;
    SET_GPR_U32(ctx, 31, 0x1910D4u);
    ctx->pc = 0x1910D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910CCu;
    // 0x1910d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x1910CCu, 0x1910D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910D4u;
label_1910d4:
    // 0x1910d4: 0xc11b3e4  jal         func_46CF90
label_1910d8:
    if (ctx->pc == 0x1910D8u) {
        ctx->pc = 0x1910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D4u;
        // 0x1910d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910DCu;
        goto label_1910dc;
    }
    ctx->pc = 0x1910D4u;
    SET_GPR_U32(ctx, 31, 0x1910DCu);
    ctx->pc = 0x1910D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910D4u;
    // 0x1910d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x1910D4u, 0x1910DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910DCu;
label_1910dc:
    // 0x1910dc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1910e0:
    // 0x1910e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1910e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1910e4:
    // 0x1910e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1910e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1910e8:
    // 0x1910e8: 0xc064568  jal         func_1915A0
label_1910ec:
    if (ctx->pc == 0x1910ECu) {
        ctx->pc = 0x1910ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E8u;
        // 0x1910ec: 0xaec30034  sw          $v1, 0x34($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910F0u;
        goto label_1910f0;
    }
    ctx->pc = 0x1910E8u;
    SET_GPR_U32(ctx, 31, 0x1910F0u);
    ctx->pc = 0x1910ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910E8u;
    // 0x1910ec: 0xaec30034  sw          $v1, 0x34($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1915A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1915A0u, 0x1910E8u, 0x1910F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910F0u;
label_1910f0:
    // 0x1910f0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1910f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1910f4:
    // 0x1910f4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1910f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1910f8:
    // 0x1910f8: 0x8c8627e4  lw          $a2, 0x27E4($a0)
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1910fc:
    // 0x1910fc: 0x8ce5b9b8  lw          $a1, -0x4648($a3)
    ctx->pc = 0x1910fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294949304)));
label_191100:
    // 0x191100: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x191100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_191104:
    // 0x191104: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_191108:
    // 0x191108: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_19110c:
    // 0x19110c: 0x60f809  jalr        $v1
label_191110:
    if (ctx->pc == 0x191110u) {
        ctx->pc = 0x191110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19110Cu;
        // 0x191110: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191114u;
        goto label_191114;
    }
    ctx->pc = 0x19110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x191114u);
        ctx->pc = 0x191110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19110Cu;
        // 0x191110: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19110Cu, 0x191114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191114u;
label_191114:
    // 0x191114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x191114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_191118:
    // 0x191118: 0xc0550a4  jal         func_154290
label_19111c:
    if (ctx->pc == 0x19111Cu) {
        ctx->pc = 0x19111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191118u;
        // 0x19111c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191120u;
        goto label_191120;
    }
    ctx->pc = 0x191118u;
    SET_GPR_U32(ctx, 31, 0x191120u);
    ctx->pc = 0x19111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191118u;
    // 0x19111c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154290u, 0x191118u, 0x191120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191120u;
label_191120:
    // 0x191120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191124:
    // 0x191124: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x191124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_191128:
    // 0x191128: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x191128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_19112c:
    // 0x19112c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x19112cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_191130:
    // 0x191130: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x191130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_191134:
    // 0x191134: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x191134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_191138:
    // 0x191138: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x191138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19113c:
    // 0x19113c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x19113cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_191140:
    // 0x191140: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x191140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_191144:
    // 0x191144: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x191144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_191148:
    // 0x191148: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x191148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19114c:
    // 0x19114c: 0x3e00008  jr          $ra
label_191150:
    if (ctx->pc == 0x191150u) {
        ctx->pc = 0x191150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19114Cu;
        // 0x191150: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191154u;
        goto label_191154;
    }
    ctx->pc = 0x19114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19114Cu;
        // 0x191150: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191154u;
label_191154:
    // 0x191154: 0x0  nop
    ctx->pc = 0x191154u;
    // NOP
    ctx->pc = 0x191158u;
}
