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

// Function: sub_00212840
// Address: 0x212840 - 0x213060
void sub_00212840_0x212840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212840_0x212840");
#endif

    switch (ctx->pc) {
        case 0x212840u: goto label_212840;
        case 0x212844u: goto label_212844;
        case 0x212848u: goto label_212848;
        case 0x21284cu: goto label_21284c;
        case 0x212850u: goto label_212850;
        case 0x212854u: goto label_212854;
        case 0x212858u: goto label_212858;
        case 0x21285cu: goto label_21285c;
        case 0x212860u: goto label_212860;
        case 0x212864u: goto label_212864;
        case 0x212868u: goto label_212868;
        case 0x21286cu: goto label_21286c;
        case 0x212870u: goto label_212870;
        case 0x212874u: goto label_212874;
        case 0x212878u: goto label_212878;
        case 0x21287cu: goto label_21287c;
        case 0x212880u: goto label_212880;
        case 0x212884u: goto label_212884;
        case 0x212888u: goto label_212888;
        case 0x21288cu: goto label_21288c;
        case 0x212890u: goto label_212890;
        case 0x212894u: goto label_212894;
        case 0x212898u: goto label_212898;
        case 0x21289cu: goto label_21289c;
        case 0x2128a0u: goto label_2128a0;
        case 0x2128a4u: goto label_2128a4;
        case 0x2128a8u: goto label_2128a8;
        case 0x2128acu: goto label_2128ac;
        case 0x2128b0u: goto label_2128b0;
        case 0x2128b4u: goto label_2128b4;
        case 0x2128b8u: goto label_2128b8;
        case 0x2128bcu: goto label_2128bc;
        case 0x2128c0u: goto label_2128c0;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128c8u: goto label_2128c8;
        case 0x2128ccu: goto label_2128cc;
        case 0x2128d0u: goto label_2128d0;
        case 0x2128d4u: goto label_2128d4;
        case 0x2128d8u: goto label_2128d8;
        case 0x2128dcu: goto label_2128dc;
        case 0x2128e0u: goto label_2128e0;
        case 0x2128e4u: goto label_2128e4;
        case 0x2128e8u: goto label_2128e8;
        case 0x2128ecu: goto label_2128ec;
        case 0x2128f0u: goto label_2128f0;
        case 0x2128f4u: goto label_2128f4;
        case 0x2128f8u: goto label_2128f8;
        case 0x2128fcu: goto label_2128fc;
        case 0x212900u: goto label_212900;
        case 0x212904u: goto label_212904;
        case 0x212908u: goto label_212908;
        case 0x21290cu: goto label_21290c;
        case 0x212910u: goto label_212910;
        case 0x212914u: goto label_212914;
        case 0x212918u: goto label_212918;
        case 0x21291cu: goto label_21291c;
        case 0x212920u: goto label_212920;
        case 0x212924u: goto label_212924;
        case 0x212928u: goto label_212928;
        case 0x21292cu: goto label_21292c;
        case 0x212930u: goto label_212930;
        case 0x212934u: goto label_212934;
        case 0x212938u: goto label_212938;
        case 0x21293cu: goto label_21293c;
        case 0x212940u: goto label_212940;
        case 0x212944u: goto label_212944;
        case 0x212948u: goto label_212948;
        case 0x21294cu: goto label_21294c;
        case 0x212950u: goto label_212950;
        case 0x212954u: goto label_212954;
        case 0x212958u: goto label_212958;
        case 0x21295cu: goto label_21295c;
        case 0x212960u: goto label_212960;
        case 0x212964u: goto label_212964;
        case 0x212968u: goto label_212968;
        case 0x21296cu: goto label_21296c;
        case 0x212970u: goto label_212970;
        case 0x212974u: goto label_212974;
        case 0x212978u: goto label_212978;
        case 0x21297cu: goto label_21297c;
        case 0x212980u: goto label_212980;
        case 0x212984u: goto label_212984;
        case 0x212988u: goto label_212988;
        case 0x21298cu: goto label_21298c;
        case 0x212990u: goto label_212990;
        case 0x212994u: goto label_212994;
        case 0x212998u: goto label_212998;
        case 0x21299cu: goto label_21299c;
        case 0x2129a0u: goto label_2129a0;
        case 0x2129a4u: goto label_2129a4;
        case 0x2129a8u: goto label_2129a8;
        case 0x2129acu: goto label_2129ac;
        case 0x2129b0u: goto label_2129b0;
        case 0x2129b4u: goto label_2129b4;
        case 0x2129b8u: goto label_2129b8;
        case 0x2129bcu: goto label_2129bc;
        case 0x2129c0u: goto label_2129c0;
        case 0x2129c4u: goto label_2129c4;
        case 0x2129c8u: goto label_2129c8;
        case 0x2129ccu: goto label_2129cc;
        case 0x2129d0u: goto label_2129d0;
        case 0x2129d4u: goto label_2129d4;
        case 0x2129d8u: goto label_2129d8;
        case 0x2129dcu: goto label_2129dc;
        case 0x2129e0u: goto label_2129e0;
        case 0x2129e4u: goto label_2129e4;
        case 0x2129e8u: goto label_2129e8;
        case 0x2129ecu: goto label_2129ec;
        case 0x2129f0u: goto label_2129f0;
        case 0x2129f4u: goto label_2129f4;
        case 0x2129f8u: goto label_2129f8;
        case 0x2129fcu: goto label_2129fc;
        case 0x212a00u: goto label_212a00;
        case 0x212a04u: goto label_212a04;
        case 0x212a08u: goto label_212a08;
        case 0x212a0cu: goto label_212a0c;
        case 0x212a10u: goto label_212a10;
        case 0x212a14u: goto label_212a14;
        case 0x212a18u: goto label_212a18;
        case 0x212a1cu: goto label_212a1c;
        case 0x212a20u: goto label_212a20;
        case 0x212a24u: goto label_212a24;
        case 0x212a28u: goto label_212a28;
        case 0x212a2cu: goto label_212a2c;
        case 0x212a30u: goto label_212a30;
        case 0x212a34u: goto label_212a34;
        case 0x212a38u: goto label_212a38;
        case 0x212a3cu: goto label_212a3c;
        case 0x212a40u: goto label_212a40;
        case 0x212a44u: goto label_212a44;
        case 0x212a48u: goto label_212a48;
        case 0x212a4cu: goto label_212a4c;
        case 0x212a50u: goto label_212a50;
        case 0x212a54u: goto label_212a54;
        case 0x212a58u: goto label_212a58;
        case 0x212a5cu: goto label_212a5c;
        case 0x212a60u: goto label_212a60;
        case 0x212a64u: goto label_212a64;
        case 0x212a68u: goto label_212a68;
        case 0x212a6cu: goto label_212a6c;
        case 0x212a70u: goto label_212a70;
        case 0x212a74u: goto label_212a74;
        case 0x212a78u: goto label_212a78;
        case 0x212a7cu: goto label_212a7c;
        case 0x212a80u: goto label_212a80;
        case 0x212a84u: goto label_212a84;
        case 0x212a88u: goto label_212a88;
        case 0x212a8cu: goto label_212a8c;
        case 0x212a90u: goto label_212a90;
        case 0x212a94u: goto label_212a94;
        case 0x212a98u: goto label_212a98;
        case 0x212a9cu: goto label_212a9c;
        case 0x212aa0u: goto label_212aa0;
        case 0x212aa4u: goto label_212aa4;
        case 0x212aa8u: goto label_212aa8;
        case 0x212aacu: goto label_212aac;
        case 0x212ab0u: goto label_212ab0;
        case 0x212ab4u: goto label_212ab4;
        case 0x212ab8u: goto label_212ab8;
        case 0x212abcu: goto label_212abc;
        case 0x212ac0u: goto label_212ac0;
        case 0x212ac4u: goto label_212ac4;
        case 0x212ac8u: goto label_212ac8;
        case 0x212accu: goto label_212acc;
        case 0x212ad0u: goto label_212ad0;
        case 0x212ad4u: goto label_212ad4;
        case 0x212ad8u: goto label_212ad8;
        case 0x212adcu: goto label_212adc;
        case 0x212ae0u: goto label_212ae0;
        case 0x212ae4u: goto label_212ae4;
        case 0x212ae8u: goto label_212ae8;
        case 0x212aecu: goto label_212aec;
        case 0x212af0u: goto label_212af0;
        case 0x212af4u: goto label_212af4;
        case 0x212af8u: goto label_212af8;
        case 0x212afcu: goto label_212afc;
        case 0x212b00u: goto label_212b00;
        case 0x212b04u: goto label_212b04;
        case 0x212b08u: goto label_212b08;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b10u: goto label_212b10;
        case 0x212b14u: goto label_212b14;
        case 0x212b18u: goto label_212b18;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b20u: goto label_212b20;
        case 0x212b24u: goto label_212b24;
        case 0x212b28u: goto label_212b28;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b30u: goto label_212b30;
        case 0x212b34u: goto label_212b34;
        case 0x212b38u: goto label_212b38;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b40u: goto label_212b40;
        case 0x212b44u: goto label_212b44;
        case 0x212b48u: goto label_212b48;
        case 0x212b4cu: goto label_212b4c;
        case 0x212b50u: goto label_212b50;
        case 0x212b54u: goto label_212b54;
        case 0x212b58u: goto label_212b58;
        case 0x212b5cu: goto label_212b5c;
        case 0x212b60u: goto label_212b60;
        case 0x212b64u: goto label_212b64;
        case 0x212b68u: goto label_212b68;
        case 0x212b6cu: goto label_212b6c;
        case 0x212b70u: goto label_212b70;
        case 0x212b74u: goto label_212b74;
        case 0x212b78u: goto label_212b78;
        case 0x212b7cu: goto label_212b7c;
        case 0x212b80u: goto label_212b80;
        case 0x212b84u: goto label_212b84;
        case 0x212b88u: goto label_212b88;
        case 0x212b8cu: goto label_212b8c;
        case 0x212b90u: goto label_212b90;
        case 0x212b94u: goto label_212b94;
        case 0x212b98u: goto label_212b98;
        case 0x212b9cu: goto label_212b9c;
        case 0x212ba0u: goto label_212ba0;
        case 0x212ba4u: goto label_212ba4;
        case 0x212ba8u: goto label_212ba8;
        case 0x212bacu: goto label_212bac;
        case 0x212bb0u: goto label_212bb0;
        case 0x212bb4u: goto label_212bb4;
        case 0x212bb8u: goto label_212bb8;
        case 0x212bbcu: goto label_212bbc;
        case 0x212bc0u: goto label_212bc0;
        case 0x212bc4u: goto label_212bc4;
        case 0x212bc8u: goto label_212bc8;
        case 0x212bccu: goto label_212bcc;
        case 0x212bd0u: goto label_212bd0;
        case 0x212bd4u: goto label_212bd4;
        case 0x212bd8u: goto label_212bd8;
        case 0x212bdcu: goto label_212bdc;
        case 0x212be0u: goto label_212be0;
        case 0x212be4u: goto label_212be4;
        case 0x212be8u: goto label_212be8;
        case 0x212becu: goto label_212bec;
        case 0x212bf0u: goto label_212bf0;
        case 0x212bf4u: goto label_212bf4;
        case 0x212bf8u: goto label_212bf8;
        case 0x212bfcu: goto label_212bfc;
        case 0x212c00u: goto label_212c00;
        case 0x212c04u: goto label_212c04;
        case 0x212c08u: goto label_212c08;
        case 0x212c0cu: goto label_212c0c;
        case 0x212c10u: goto label_212c10;
        case 0x212c14u: goto label_212c14;
        case 0x212c18u: goto label_212c18;
        case 0x212c1cu: goto label_212c1c;
        case 0x212c20u: goto label_212c20;
        case 0x212c24u: goto label_212c24;
        case 0x212c28u: goto label_212c28;
        case 0x212c2cu: goto label_212c2c;
        case 0x212c30u: goto label_212c30;
        case 0x212c34u: goto label_212c34;
        case 0x212c38u: goto label_212c38;
        case 0x212c3cu: goto label_212c3c;
        case 0x212c40u: goto label_212c40;
        case 0x212c44u: goto label_212c44;
        case 0x212c48u: goto label_212c48;
        case 0x212c4cu: goto label_212c4c;
        case 0x212c50u: goto label_212c50;
        case 0x212c54u: goto label_212c54;
        case 0x212c58u: goto label_212c58;
        case 0x212c5cu: goto label_212c5c;
        case 0x212c60u: goto label_212c60;
        case 0x212c64u: goto label_212c64;
        case 0x212c68u: goto label_212c68;
        case 0x212c6cu: goto label_212c6c;
        case 0x212c70u: goto label_212c70;
        case 0x212c74u: goto label_212c74;
        case 0x212c78u: goto label_212c78;
        case 0x212c7cu: goto label_212c7c;
        case 0x212c80u: goto label_212c80;
        case 0x212c84u: goto label_212c84;
        case 0x212c88u: goto label_212c88;
        case 0x212c8cu: goto label_212c8c;
        case 0x212c90u: goto label_212c90;
        case 0x212c94u: goto label_212c94;
        case 0x212c98u: goto label_212c98;
        case 0x212c9cu: goto label_212c9c;
        case 0x212ca0u: goto label_212ca0;
        case 0x212ca4u: goto label_212ca4;
        case 0x212ca8u: goto label_212ca8;
        case 0x212cacu: goto label_212cac;
        case 0x212cb0u: goto label_212cb0;
        case 0x212cb4u: goto label_212cb4;
        case 0x212cb8u: goto label_212cb8;
        case 0x212cbcu: goto label_212cbc;
        case 0x212cc0u: goto label_212cc0;
        case 0x212cc4u: goto label_212cc4;
        case 0x212cc8u: goto label_212cc8;
        case 0x212cccu: goto label_212ccc;
        case 0x212cd0u: goto label_212cd0;
        case 0x212cd4u: goto label_212cd4;
        case 0x212cd8u: goto label_212cd8;
        case 0x212cdcu: goto label_212cdc;
        case 0x212ce0u: goto label_212ce0;
        case 0x212ce4u: goto label_212ce4;
        case 0x212ce8u: goto label_212ce8;
        case 0x212cecu: goto label_212cec;
        case 0x212cf0u: goto label_212cf0;
        case 0x212cf4u: goto label_212cf4;
        case 0x212cf8u: goto label_212cf8;
        case 0x212cfcu: goto label_212cfc;
        case 0x212d00u: goto label_212d00;
        case 0x212d04u: goto label_212d04;
        case 0x212d08u: goto label_212d08;
        case 0x212d0cu: goto label_212d0c;
        case 0x212d10u: goto label_212d10;
        case 0x212d14u: goto label_212d14;
        case 0x212d18u: goto label_212d18;
        case 0x212d1cu: goto label_212d1c;
        case 0x212d20u: goto label_212d20;
        case 0x212d24u: goto label_212d24;
        case 0x212d28u: goto label_212d28;
        case 0x212d2cu: goto label_212d2c;
        case 0x212d30u: goto label_212d30;
        case 0x212d34u: goto label_212d34;
        case 0x212d38u: goto label_212d38;
        case 0x212d3cu: goto label_212d3c;
        case 0x212d40u: goto label_212d40;
        case 0x212d44u: goto label_212d44;
        case 0x212d48u: goto label_212d48;
        case 0x212d4cu: goto label_212d4c;
        case 0x212d50u: goto label_212d50;
        case 0x212d54u: goto label_212d54;
        case 0x212d58u: goto label_212d58;
        case 0x212d5cu: goto label_212d5c;
        case 0x212d60u: goto label_212d60;
        case 0x212d64u: goto label_212d64;
        case 0x212d68u: goto label_212d68;
        case 0x212d6cu: goto label_212d6c;
        case 0x212d70u: goto label_212d70;
        case 0x212d74u: goto label_212d74;
        case 0x212d78u: goto label_212d78;
        case 0x212d7cu: goto label_212d7c;
        case 0x212d80u: goto label_212d80;
        case 0x212d84u: goto label_212d84;
        case 0x212d88u: goto label_212d88;
        case 0x212d8cu: goto label_212d8c;
        case 0x212d90u: goto label_212d90;
        case 0x212d94u: goto label_212d94;
        case 0x212d98u: goto label_212d98;
        case 0x212d9cu: goto label_212d9c;
        case 0x212da0u: goto label_212da0;
        case 0x212da4u: goto label_212da4;
        case 0x212da8u: goto label_212da8;
        case 0x212dacu: goto label_212dac;
        case 0x212db0u: goto label_212db0;
        case 0x212db4u: goto label_212db4;
        case 0x212db8u: goto label_212db8;
        case 0x212dbcu: goto label_212dbc;
        case 0x212dc0u: goto label_212dc0;
        case 0x212dc4u: goto label_212dc4;
        case 0x212dc8u: goto label_212dc8;
        case 0x212dccu: goto label_212dcc;
        case 0x212dd0u: goto label_212dd0;
        case 0x212dd4u: goto label_212dd4;
        case 0x212dd8u: goto label_212dd8;
        case 0x212ddcu: goto label_212ddc;
        case 0x212de0u: goto label_212de0;
        case 0x212de4u: goto label_212de4;
        case 0x212de8u: goto label_212de8;
        case 0x212decu: goto label_212dec;
        case 0x212df0u: goto label_212df0;
        case 0x212df4u: goto label_212df4;
        case 0x212df8u: goto label_212df8;
        case 0x212dfcu: goto label_212dfc;
        case 0x212e00u: goto label_212e00;
        case 0x212e04u: goto label_212e04;
        case 0x212e08u: goto label_212e08;
        case 0x212e0cu: goto label_212e0c;
        case 0x212e10u: goto label_212e10;
        case 0x212e14u: goto label_212e14;
        case 0x212e18u: goto label_212e18;
        case 0x212e1cu: goto label_212e1c;
        case 0x212e20u: goto label_212e20;
        case 0x212e24u: goto label_212e24;
        case 0x212e28u: goto label_212e28;
        case 0x212e2cu: goto label_212e2c;
        case 0x212e30u: goto label_212e30;
        case 0x212e34u: goto label_212e34;
        case 0x212e38u: goto label_212e38;
        case 0x212e3cu: goto label_212e3c;
        case 0x212e40u: goto label_212e40;
        case 0x212e44u: goto label_212e44;
        case 0x212e48u: goto label_212e48;
        case 0x212e4cu: goto label_212e4c;
        case 0x212e50u: goto label_212e50;
        case 0x212e54u: goto label_212e54;
        case 0x212e58u: goto label_212e58;
        case 0x212e5cu: goto label_212e5c;
        case 0x212e60u: goto label_212e60;
        case 0x212e64u: goto label_212e64;
        case 0x212e68u: goto label_212e68;
        case 0x212e6cu: goto label_212e6c;
        case 0x212e70u: goto label_212e70;
        case 0x212e74u: goto label_212e74;
        case 0x212e78u: goto label_212e78;
        case 0x212e7cu: goto label_212e7c;
        case 0x212e80u: goto label_212e80;
        case 0x212e84u: goto label_212e84;
        case 0x212e88u: goto label_212e88;
        case 0x212e8cu: goto label_212e8c;
        case 0x212e90u: goto label_212e90;
        case 0x212e94u: goto label_212e94;
        case 0x212e98u: goto label_212e98;
        case 0x212e9cu: goto label_212e9c;
        case 0x212ea0u: goto label_212ea0;
        case 0x212ea4u: goto label_212ea4;
        case 0x212ea8u: goto label_212ea8;
        case 0x212eacu: goto label_212eac;
        case 0x212eb0u: goto label_212eb0;
        case 0x212eb4u: goto label_212eb4;
        case 0x212eb8u: goto label_212eb8;
        case 0x212ebcu: goto label_212ebc;
        case 0x212ec0u: goto label_212ec0;
        case 0x212ec4u: goto label_212ec4;
        case 0x212ec8u: goto label_212ec8;
        case 0x212eccu: goto label_212ecc;
        case 0x212ed0u: goto label_212ed0;
        case 0x212ed4u: goto label_212ed4;
        case 0x212ed8u: goto label_212ed8;
        case 0x212edcu: goto label_212edc;
        case 0x212ee0u: goto label_212ee0;
        case 0x212ee4u: goto label_212ee4;
        case 0x212ee8u: goto label_212ee8;
        case 0x212eecu: goto label_212eec;
        case 0x212ef0u: goto label_212ef0;
        case 0x212ef4u: goto label_212ef4;
        case 0x212ef8u: goto label_212ef8;
        case 0x212efcu: goto label_212efc;
        case 0x212f00u: goto label_212f00;
        case 0x212f04u: goto label_212f04;
        case 0x212f08u: goto label_212f08;
        case 0x212f0cu: goto label_212f0c;
        case 0x212f10u: goto label_212f10;
        case 0x212f14u: goto label_212f14;
        case 0x212f18u: goto label_212f18;
        case 0x212f1cu: goto label_212f1c;
        case 0x212f20u: goto label_212f20;
        case 0x212f24u: goto label_212f24;
        case 0x212f28u: goto label_212f28;
        case 0x212f2cu: goto label_212f2c;
        case 0x212f30u: goto label_212f30;
        case 0x212f34u: goto label_212f34;
        case 0x212f38u: goto label_212f38;
        case 0x212f3cu: goto label_212f3c;
        case 0x212f40u: goto label_212f40;
        case 0x212f44u: goto label_212f44;
        case 0x212f48u: goto label_212f48;
        case 0x212f4cu: goto label_212f4c;
        case 0x212f50u: goto label_212f50;
        case 0x212f54u: goto label_212f54;
        case 0x212f58u: goto label_212f58;
        case 0x212f5cu: goto label_212f5c;
        case 0x212f60u: goto label_212f60;
        case 0x212f64u: goto label_212f64;
        case 0x212f68u: goto label_212f68;
        case 0x212f6cu: goto label_212f6c;
        case 0x212f70u: goto label_212f70;
        case 0x212f74u: goto label_212f74;
        case 0x212f78u: goto label_212f78;
        case 0x212f7cu: goto label_212f7c;
        case 0x212f80u: goto label_212f80;
        case 0x212f84u: goto label_212f84;
        case 0x212f88u: goto label_212f88;
        case 0x212f8cu: goto label_212f8c;
        case 0x212f90u: goto label_212f90;
        case 0x212f94u: goto label_212f94;
        case 0x212f98u: goto label_212f98;
        case 0x212f9cu: goto label_212f9c;
        case 0x212fa0u: goto label_212fa0;
        case 0x212fa4u: goto label_212fa4;
        case 0x212fa8u: goto label_212fa8;
        case 0x212facu: goto label_212fac;
        case 0x212fb0u: goto label_212fb0;
        case 0x212fb4u: goto label_212fb4;
        case 0x212fb8u: goto label_212fb8;
        case 0x212fbcu: goto label_212fbc;
        case 0x212fc0u: goto label_212fc0;
        case 0x212fc4u: goto label_212fc4;
        case 0x212fc8u: goto label_212fc8;
        case 0x212fccu: goto label_212fcc;
        case 0x212fd0u: goto label_212fd0;
        case 0x212fd4u: goto label_212fd4;
        case 0x212fd8u: goto label_212fd8;
        case 0x212fdcu: goto label_212fdc;
        case 0x212fe0u: goto label_212fe0;
        case 0x212fe4u: goto label_212fe4;
        case 0x212fe8u: goto label_212fe8;
        case 0x212fecu: goto label_212fec;
        case 0x212ff0u: goto label_212ff0;
        case 0x212ff4u: goto label_212ff4;
        case 0x212ff8u: goto label_212ff8;
        case 0x212ffcu: goto label_212ffc;
        case 0x213000u: goto label_213000;
        case 0x213004u: goto label_213004;
        case 0x213008u: goto label_213008;
        case 0x21300cu: goto label_21300c;
        case 0x213010u: goto label_213010;
        case 0x213014u: goto label_213014;
        case 0x213018u: goto label_213018;
        case 0x21301cu: goto label_21301c;
        case 0x213020u: goto label_213020;
        case 0x213024u: goto label_213024;
        case 0x213028u: goto label_213028;
        case 0x21302cu: goto label_21302c;
        case 0x213030u: goto label_213030;
        case 0x213034u: goto label_213034;
        case 0x213038u: goto label_213038;
        case 0x21303cu: goto label_21303c;
        case 0x213040u: goto label_213040;
        case 0x213044u: goto label_213044;
        case 0x213048u: goto label_213048;
        case 0x21304cu: goto label_21304c;
        case 0x213050u: goto label_213050;
        case 0x213054u: goto label_213054;
        case 0x213058u: goto label_213058;
        case 0x21305cu: goto label_21305c;
        default: break;
    }

    ctx->pc = 0x212840u;

label_212840:
    // 0x212840: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x212840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_212844:
    // 0x212844: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x212844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_212848:
    // 0x212848: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x212848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_21284c:
    // 0x21284c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21284cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_212850:
    // 0x212850: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x212850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_212854:
    // 0x212854: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x212854u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212858:
    // 0x212858: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x212858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_21285c:
    // 0x21285c: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x21285cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_212860:
    // 0x212860: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x212860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_212864:
    // 0x212864: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x212864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_212868:
    // 0x212868: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x212868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_21286c:
    // 0x21286c: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x21286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_212870:
    // 0x212870: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x212870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_212874:
    // 0x212874: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x212874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_212878:
    // 0x212878: 0x104001ec  beqz        $v0, . + 4 + (0x1EC << 2)
label_21287c:
    if (ctx->pc == 0x21287Cu) {
        ctx->pc = 0x21287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212878u;
        // 0x21287c: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x212880u;
        goto label_212880;
    }
    ctx->pc = 0x212878u;
    {
        const bool branch_taken_0x212878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212878u;
        // 0x21287c: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212878) {
            ctx->pc = 0x21302Cu;
            goto label_21302c;
        }
    }
    ctx->pc = 0x212880u;
label_212880:
    // 0x212880: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x212880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212884:
    // 0x212884: 0xafd540f4  sw          $s5, 0x40F4($fp)
    ctx->pc = 0x212884u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16628), GPR_U32(ctx, 21));
label_212888:
    // 0x212888: 0xafd040f0  sw          $s0, 0x40F0($fp)
    ctx->pc = 0x212888u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16624), GPR_U32(ctx, 16));
label_21288c:
    // 0x21288c: 0xc0847be  jal         func_211EF8
label_212890:
    if (ctx->pc == 0x212890u) {
        ctx->pc = 0x212890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21288Cu;
        // 0x212890: 0xafc040f8  sw          $zero, 0x40F8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212894u;
        goto label_212894;
    }
    ctx->pc = 0x21288Cu;
    SET_GPR_U32(ctx, 31, 0x212894u);
    ctx->pc = 0x212890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21288Cu;
    // 0x212890: 0xafc040f8  sw          $zero, 0x40F8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EF8u, 0x21288Cu, 0x212894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212894u;
label_212894:
    // 0x212894: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x212894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_212898:
    // 0x212898: 0xc107458  jal         func_41D160
label_21289c:
    if (ctx->pc == 0x21289Cu) {
        ctx->pc = 0x21289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212898u;
        // 0x21289c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128A0u;
        goto label_2128a0;
    }
    ctx->pc = 0x212898u;
    SET_GPR_U32(ctx, 31, 0x2128A0u);
    ctx->pc = 0x21289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212898u;
    // 0x21289c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x212898u, 0x2128A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2128A0u;
label_2128a0:
    // 0x2128a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2128a4:
    if (ctx->pc == 0x2128A4u) {
        ctx->pc = 0x2128A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128A0u;
        // 0x2128a4: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128A8u;
        goto label_2128a8;
    }
    ctx->pc = 0x2128A0u;
    {
        const bool branch_taken_0x2128a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2128A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128A0u;
        // 0x2128a4: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128a0) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128A8u;
label_2128a8:
    // 0x2128a8: 0x8fc340f4  lw          $v1, 0x40F4($fp)
    ctx->pc = 0x2128a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_2128ac:
    // 0x2128ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2128acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2128b0:
    // 0x2128b0: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_2128b4:
    if (ctx->pc == 0x2128B4u) {
        ctx->pc = 0x2128B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128B0u;
        // 0x2128b4: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128B8u;
        goto label_2128b8;
    }
    ctx->pc = 0x2128B0u;
    {
        const bool branch_taken_0x2128b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2128b0) {
            ctx->pc = 0x2128B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2128B0u;
            // 0x2128b4: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128B8u;
label_2128b8:
    // 0x2128b8: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_2128bc:
    // 0x2128bc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2128c0:
    // 0x2128c0: 0xa3a300f0  sb          $v1, 0xF0($sp)
    ctx->pc = 0x2128c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 3));
label_2128c4:
    // 0x2128c4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x2128c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2128c8:
    // 0x2128c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2128c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2128cc:
    // 0x2128cc: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2128ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_2128d0:
    // 0x2128d0: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x2128d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_2128d4:
    // 0x2128d4: 0x240400d9  addiu       $a0, $zero, 0xD9
    ctx->pc = 0x2128d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_2128d8:
    // 0x2128d8: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x2128d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_2128dc:
    // 0x2128dc: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_2128e0:
    // 0x2128e0: 0xa3a400f4  sb          $a0, 0xF4($sp)
    ctx->pc = 0x2128e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 4));
label_2128e4:
    // 0x2128e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2128e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2128e8:
    // 0x2128e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2128e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2128ec:
    // 0x2128ec: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x2128ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_2128f0:
    // 0x2128f0: 0xa0700003  sb          $s0, 0x3($v1)
    ctx->pc = 0x2128f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 16));
label_2128f4:
    // 0x2128f4: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2128f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_2128f8:
    // 0x2128f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2128f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2128fc:
    // 0x2128fc: 0xafc44144  sw          $a0, 0x4144($fp)
    ctx->pc = 0x2128fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16708), GPR_U32(ctx, 4));
label_212900:
    // 0x212900: 0x10000013  b           . + 4 + (0x13 << 2)
label_212904:
    if (ctx->pc == 0x212904u) {
        ctx->pc = 0x212904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212900u;
        // 0x212904: 0x8fa200f4  lw          $v0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212908u;
        goto label_212908;
    }
    ctx->pc = 0x212900u;
    {
        const bool branch_taken_0x212900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212900u;
        // 0x212904: 0x8fa200f4  lw          $v0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212900) {
            ctx->pc = 0x212950u;
            goto label_212950;
        }
    }
    ctx->pc = 0x212908u;
label_212908:
    // 0x212908: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x212908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_21290c:
    // 0x21290c: 0xa3a200f8  sb          $v0, 0xF8($sp)
    ctx->pc = 0x21290cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 248), (uint8_t)GPR_U32(ctx, 2));
label_212910:
    // 0x212910: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x212910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_212914:
    // 0x212914: 0x2402009e  addiu       $v0, $zero, 0x9E
    ctx->pc = 0x212914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_212918:
    // 0x212918: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x212918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21291c:
    // 0x21291c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x21291cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_212920:
    // 0x212920: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x212920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_212924:
    // 0x212924: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x212924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_212928:
    // 0x212928: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x212928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_21292c:
    // 0x21292c: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x21292cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
label_212930:
    // 0x212930: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x212930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_212934:
    // 0x212934: 0xa3a500fc  sb          $a1, 0xFC($sp)
    ctx->pc = 0x212934u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 252), (uint8_t)GPR_U32(ctx, 5));
label_212938:
    // 0x212938: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x212938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_21293c:
    // 0x21293c: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x21293cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
label_212940:
    // 0x212940: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x212940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_212944:
    // 0x212944: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x212944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_212948:
    // 0x212948: 0xafc34144  sw          $v1, 0x4144($fp)
    ctx->pc = 0x212948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16708), GPR_U32(ctx, 3));
label_21294c:
    // 0x21294c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_212950:
    // 0x212950: 0xafc24148  sw          $v0, 0x4148($fp)
    ctx->pc = 0x212950u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16712), GPR_U32(ctx, 2));
label_212954:
    // 0x212954: 0x8fc440f4  lw          $a0, 0x40F4($fp)
    ctx->pc = 0x212954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212958:
    // 0x212958: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x212958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21295c:
    // 0x21295c: 0x24120240  addiu       $s2, $zero, 0x240
    ctx->pc = 0x21295cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212960:
    // 0x212960: 0x2463fa10  addiu       $v1, $v1, -0x5F0
    ctx->pc = 0x212960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
label_212964:
    // 0x212964: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x212964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_212968:
    // 0x212968: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x212968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_21296c:
    // 0x21296c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212970:
    // 0x212970: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x212970u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_212974:
    // 0x212974: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x212974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_212978:
    // 0x212978: 0x2610fa60  addiu       $s0, $s0, -0x5A0
    ctx->pc = 0x212978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965856));
label_21297c:
    // 0x21297c: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x21297cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_212980:
    // 0x212980: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x212980u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_212984:
    // 0x212984: 0x7fc340e0  sq          $v1, 0x40E0($fp)
    ctx->pc = 0x212984u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16608), GPR_VEC(ctx, 3));
label_212988:
    // 0x212988: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x212988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_21298c:
    // 0x21298c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x21298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_212990:
    // 0x212990: 0x27d33fe0  addiu       $s3, $fp, 0x3FE0
    ctx->pc = 0x212990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 16352));
label_212994:
    // 0x212994: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x212994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_212998:
    // 0x212998: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x212998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21299c:
    // 0x21299c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x21299cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2129a0:
    // 0x2129a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2129a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2129a4:
    // 0x2129a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2129a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2129a8:
    // 0x2129a8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2129a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2129ac:
    // 0x2129ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2129acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2129b0:
    // 0x2129b0: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x2129b0u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
label_2129b4:
    // 0x2129b4: 0xc48c0030  lwc1        $f12, 0x30($a0)
    ctx->pc = 0x2129b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2129b8:
    // 0x2129b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2129b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2129bc:
    // 0x2129bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2129bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2129c0:
    // 0x2129c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2129c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2129c4:
    // 0x2129c4: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x2129c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
label_2129c8:
    // 0x2129c8: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x2129c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2129cc:
    // 0x2129cc: 0x7faa0060  sq          $t2, 0x60($sp)
    ctx->pc = 0x2129ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
label_2129d0:
    // 0x2129d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2129d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2129d4:
    // 0x2129d4: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x2129d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_2129d8:
    // 0x2129d8: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x2129d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_2129dc:
    // 0x2129dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2129dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2129e0:
    // 0x2129e0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2129e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2129e4:
    // 0x2129e4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2129e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2129e8:
    // 0x2129e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2129e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2129ec:
    // 0x2129ec: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x2129ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_2129f0:
    // 0x2129f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2129f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2129f4:
    // 0x2129f4: 0xc06876e  jal         func_1A1DB8
label_2129f8:
    if (ctx->pc == 0x2129F8u) {
        ctx->pc = 0x2129F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129F4u;
        // 0x2129f8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2129FCu;
        goto label_2129fc;
    }
    ctx->pc = 0x2129F4u;
    SET_GPR_U32(ctx, 31, 0x2129FCu);
    ctx->pc = 0x2129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129F4u;
    // 0x2129f8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x2129F4u, 0x2129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129FCu;
label_2129fc:
    // 0x2129fc: 0x27c20400  addiu       $v0, $fp, 0x400
    ctx->pc = 0x2129fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
label_212a00:
    // 0x212a00: 0x27c30e30  addiu       $v1, $fp, 0xE30
    ctx->pc = 0x212a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3632));
label_212a04:
    // 0x212a04: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x212a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_212a08:
    // 0x212a08: 0x27c60e70  addiu       $a2, $fp, 0xE70
    ctx->pc = 0x212a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3696));
label_212a0c:
    // 0x212a0c: 0x8fc240f4  lw          $v0, 0x40F4($fp)
    ctx->pc = 0x212a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212a10:
    // 0x212a10: 0x27c71260  addiu       $a3, $fp, 0x1260
    ctx->pc = 0x212a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4704));
label_212a14:
    // 0x212a14: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x212a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_212a18:
    // 0x212a18: 0x27c812a0  addiu       $t0, $fp, 0x12A0
    ctx->pc = 0x212a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4768));
label_212a1c:
    // 0x212a1c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x212a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_212a20:
    // 0x212a20: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x212a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
label_212a24:
    // 0x212a24: 0xafa7013c  sw          $a3, 0x13C($sp)
    ctx->pc = 0x212a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 7));
label_212a28:
    // 0x212a28: 0x27c616d0  addiu       $a2, $fp, 0x16D0
    ctx->pc = 0x212a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 5840));
label_212a2c:
    // 0x212a2c: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x212a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
label_212a30:
    // 0x212a30: 0x27c71ac0  addiu       $a3, $fp, 0x1AC0
    ctx->pc = 0x212a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 6848));
label_212a34:
    // 0x212a34: 0x27c81b00  addiu       $t0, $fp, 0x1B00
    ctx->pc = 0x212a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 6912));
label_212a38:
    // 0x212a38: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x212a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
label_212a3c:
    // 0x212a3c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x212a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_212a40:
    // 0x212a40: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x212a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
label_212a44:
    // 0x212a44: 0x27c31690  addiu       $v1, $fp, 0x1690
    ctx->pc = 0x212a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5776));
label_212a48:
    // 0x212a48: 0xafa80118  sw          $t0, 0x118($sp)
    ctx->pc = 0x212a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 8));
label_212a4c:
    // 0x212a4c: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x212a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_212a50:
    // 0x212a50: 0x27c61ef0  addiu       $a2, $fp, 0x1EF0
    ctx->pc = 0x212a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
label_212a54:
    // 0x212a54: 0x27c33480  addiu       $v1, $fp, 0x3480
    ctx->pc = 0x212a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 13440));
label_212a58:
    // 0x212a58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212a5c:
    // 0x212a5c: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x212a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_212a60:
    // 0x212a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212a64:
    // 0x212a64: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x212a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_212a68:
    // 0x212a68: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x212a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212a6c:
    // 0x212a6c: 0xc068848  jal         func_1A2120
label_212a70:
    if (ctx->pc == 0x212A70u) {
        ctx->pc = 0x212A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A6Cu;
        // 0x212a70: 0xafa60134  sw          $a2, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A74u;
        goto label_212a74;
    }
    ctx->pc = 0x212A6Cu;
    SET_GPR_U32(ctx, 31, 0x212A74u);
    ctx->pc = 0x212A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A6Cu;
    // 0x212a70: 0xafa60134  sw          $a2, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x212A6Cu, 0x212A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A74u;
label_212a74:
    // 0x212a74: 0x8fc540f4  lw          $a1, 0x40F4($fp)
    ctx->pc = 0x212a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212a78:
    // 0x212a78: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x212a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_212a7c:
    // 0x212a7c: 0x8fc20068  lw          $v0, 0x68($fp)
    ctx->pc = 0x212a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 104)));
label_212a80:
    // 0x212a80: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x212a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_212a84:
    // 0x212a84: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x212a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_212a88:
    // 0x212a88: 0xa3aa0100  sb          $t2, 0x100($sp)
    ctx->pc = 0x212a88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 10));
label_212a8c:
    // 0x212a8c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x212a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_212a90:
    // 0x212a90: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x212a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_212a94:
    // 0x212a94: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x212a94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212a98:
    // 0x212a98: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x212a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_212a9c:
    // 0x212a9c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x212a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_212aa0:
    // 0x212aa0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x212aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_212aa4:
    // 0x212aa4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x212aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_212aa8:
    // 0x212aa8: 0xb18821  addu        $s1, $a1, $s1
    ctx->pc = 0x212aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_212aac:
    // 0x212aac: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x212aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_212ab0:
    // 0x212ab0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x212ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_212ab4:
    // 0x212ab4: 0xc62d0094  lwc1        $f13, 0x94($s1)
    ctx->pc = 0x212ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_212ab8:
    // 0x212ab8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_212abc:
    // 0x212abc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x212abcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_212ac0:
    // 0x212ac0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212ac4:
    // 0x212ac4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212ac4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212ac8:
    // 0x212ac8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x212ac8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_212acc:
    // 0x212acc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x212accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_212ad0:
    // 0x212ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212ad4:
    // 0x212ad4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x212ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_212ad8:
    // 0x212ad8: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x212ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
label_212adc:
    // 0x212adc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x212adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_212ae0:
    // 0x212ae0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x212ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212ae4:
    // 0x212ae4: 0xa0d60003  sb          $s6, 0x3($a2)
    ctx->pc = 0x212ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 22));
label_212ae8:
    // 0x212ae8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212aec:
    // 0x212aec: 0xa0ca0002  sb          $t2, 0x2($a2)
    ctx->pc = 0x212aecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 10));
label_212af0:
    // 0x212af0: 0xa0ca0001  sb          $t2, 0x1($a2)
    ctx->pc = 0x212af0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 10));
label_212af4:
    // 0x212af4: 0xc62c0090  lwc1        $f12, 0x90($s1)
    ctx->pc = 0x212af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212af8:
    // 0x212af8: 0xc0683f4  jal         func_1A0FD0
label_212afc:
    if (ctx->pc == 0x212AFCu) {
        ctx->pc = 0x212AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AF8u;
        // 0x212afc: 0x8fa60100  lw          $a2, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B00u;
        goto label_212b00;
    }
    ctx->pc = 0x212AF8u;
    SET_GPR_U32(ctx, 31, 0x212B00u);
    ctx->pc = 0x212AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF8u;
    // 0x212afc: 0x8fa60100  lw          $a2, 0x100($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x212AF8u, 0x212B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B00u;
label_212b00:
    // 0x212b00: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_212b04:
    // 0x212b04: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x212b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_212b08:
    // 0x212b08: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_212b0c:
    // 0x212b0c: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x212b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_212b10:
    // 0x212b10: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x212b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
label_212b14:
    // 0x212b14: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_212b18:
    // 0x212b18: 0xafa8011c  sw          $t0, 0x11C($sp)
    ctx->pc = 0x212b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 8));
label_212b1c:
    // 0x212b1c: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_212b20:
    // 0x212b20: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x212b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_212b24:
    // 0x212b24: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x212b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_212b28:
    // 0x212b28: 0x27b70108  addiu       $s7, $sp, 0x108
    ctx->pc = 0x212b28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_212b2c:
    // 0x212b2c: 0x27b4010c  addiu       $s4, $sp, 0x10C
    ctx->pc = 0x212b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_212b30:
    // 0x212b30: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x212b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_212b34:
    // 0x212b34: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x212b34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_212b38:
    // 0x212b38: 0x7a460010  lq          $a2, 0x10($s2)
    ctx->pc = 0x212b38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_212b3c:
    // 0x212b3c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x212b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_212b40:
    // 0x212b40: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x212b40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
label_212b44:
    // 0x212b44: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x212b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_212b48:
    // 0x212b48: 0x1643fffa  bne         $s2, $v1, . + 4 + (-0x6 << 2)
label_212b4c:
    if (ctx->pc == 0x212B4Cu) {
        ctx->pc = 0x212B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B48u;
        // 0x212b4c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B50u;
        goto label_212b50;
    }
    ctx->pc = 0x212B48u;
    {
        const bool branch_taken_0x212b48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x212B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B48u;
        // 0x212b4c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b48) {
            ctx->pc = 0x212B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212b34;
        }
    }
    ctx->pc = 0x212B50u;
label_212b50:
    // 0x212b50: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x212b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_212b54:
    // 0x212b54: 0x24080240  addiu       $t0, $zero, 0x240
    ctx->pc = 0x212b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212b58:
    // 0x212b58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x212b58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_212b5c:
    // 0x212b5c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x212b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_212b60:
    // 0x212b60: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_212b64:
    // 0x212b64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x212b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_212b68:
    // 0x212b68: 0x8fcb40f4  lw          $t3, 0x40F4($fp)
    ctx->pc = 0x212b68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212b6c:
    // 0x212b6c: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x212b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_212b70:
    // 0x212b70: 0xafc30068  sw          $v1, 0x68($fp)
    ctx->pc = 0x212b70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 3));
label_212b74:
    // 0x212b74: 0x2610fa40  addiu       $s0, $s0, -0x5C0
    ctx->pc = 0x212b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965824));
label_212b78:
    // 0x212b78: 0xafc00058  sw          $zero, 0x58($fp)
    ctx->pc = 0x212b78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 0));
label_212b7c:
    // 0x212b7c: 0x1685818  mult        $t3, $t3, $t0
    ctx->pc = 0x212b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_212b80:
    // 0x212b80: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x212b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_212b84:
    // 0x212b84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x212b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_212b88:
    // 0x212b88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x212b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_212b8c:
    // 0x212b8c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x212b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_212b90:
    // 0x212b90: 0x8c53d310  lw          $s3, -0x2CF0($v0)
    ctx->pc = 0x212b90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_212b94:
    // 0x212b94: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_212b98:
    // 0x212b98: 0x1701021  addu        $v0, $t3, $s0
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
label_212b9c:
    // 0x212b9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x212b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212ba0:
    // 0x212ba0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x212ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_212ba4:
    // 0x212ba4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x212ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_212ba8:
    // 0x212ba8: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x212ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_212bac:
    // 0x212bac: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x212bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_212bb0:
    // 0x212bb0: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x212bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_212bb4:
    // 0x212bb4: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x212bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_212bb8:
    // 0x212bb8: 0xb3a6006f  sdl         $a2, 0x6F($sp)
    ctx->pc = 0x212bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_212bbc:
    // 0x212bbc: 0xb7a60068  sdr         $a2, 0x68($sp)
    ctx->pc = 0x212bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_212bc0:
    // 0x212bc0: 0x20b5821  addu        $t3, $s0, $t3
    ctx->pc = 0x212bc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_212bc4:
    // 0x212bc4: 0xa3b10104  sb          $s1, 0x104($sp)
    ctx->pc = 0x212bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 17));
label_212bc8:
    // 0x212bc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x212bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212bcc:
    // 0x212bcc: 0xa1510003  sb          $s1, 0x3($t2)
    ctx->pc = 0x212bccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 17));
label_212bd0:
    // 0x212bd0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x212bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_212bd4:
    // 0x212bd4: 0xa1510001  sb          $s1, 0x1($t2)
    ctx->pc = 0x212bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 17));
label_212bd8:
    // 0x212bd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x212bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_212bdc:
    // 0x212bdc: 0xa1510002  sb          $s1, 0x2($t2)
    ctx->pc = 0x212bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 17));
label_212be0:
    // 0x212be0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212be0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212be4:
    // 0x212be4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x212be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212be8:
    // 0x212be8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x212be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212bec:
    // 0x212bec: 0x796300a0  lq          $v1, 0xA0($t3)
    ctx->pc = 0x212becu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 160)));
label_212bf0:
    // 0x212bf0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x212bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212bf4:
    // 0x212bf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x212bf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212bf8:
    // 0x212bf8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x212bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_212bfc:
    // 0x212bfc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x212bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_212c00:
    // 0x212c00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x212c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_212c04:
    // 0x212c04: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212c08:
    // 0x212c08: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212c08u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212c0c:
    // 0x212c0c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x212c0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_212c10:
    // 0x212c10: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x212c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_212c14:
    // 0x212c14: 0xc071dcc  jal         func_1C7730
label_212c18:
    if (ctx->pc == 0x212C18u) {
        ctx->pc = 0x212C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C14u;
        // 0x212c18: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C1Cu;
        goto label_212c1c;
    }
    ctx->pc = 0x212C14u;
    SET_GPR_U32(ctx, 31, 0x212C1Cu);
    ctx->pc = 0x212C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C14u;
    // 0x212c18: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7730u, 0x212C14u, 0x212C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C1Cu;
label_212c1c:
    // 0x212c1c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x212c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_212c20:
    // 0x212c20: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x212c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_212c24:
    // 0x212c24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212c28:
    // 0x212c28: 0x8fc240f4  lw          $v0, 0x40F4($fp)
    ctx->pc = 0x212c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212c2c:
    // 0x212c2c: 0x24030240  addiu       $v1, $zero, 0x240
    ctx->pc = 0x212c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212c30:
    // 0x212c30: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x212c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_212c34:
    // 0x212c34: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x212c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_212c38:
    // 0x212c38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x212c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_212c3c:
    // 0x212c3c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x212c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_212c40:
    // 0x212c40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x212c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_212c44:
    // 0x212c44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x212c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212c48:
    // 0x212c48: 0x7bac0050  lq          $t4, 0x50($sp)
    ctx->pc = 0x212c48u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212c4c:
    // 0x212c4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x212c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_212c50:
    // 0x212c50: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x212c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_212c54:
    // 0x212c54: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212c58:
    // 0x212c58: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x212c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_212c5c:
    // 0x212c5c: 0x8fa80104  lw          $t0, 0x104($sp)
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_212c60:
    // 0x212c60: 0x786a00c0  lq          $t2, 0xC0($v1)
    ctx->pc = 0x212c60u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 192)));
label_212c64:
    // 0x212c64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x212c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_212c68:
    // 0x212c68: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_212c6c:
    // 0x212c6c: 0xc44c00f0  lwc1        $f12, 0xF0($v0)
    ctx->pc = 0x212c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212c70:
    // 0x212c70: 0x792300e0  lq          $v1, 0xE0($t1)
    ctx->pc = 0x212c70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 224)));
label_212c74:
    // 0x212c74: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x212c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_212c78:
    // 0x212c78: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x212c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_212c7c:
    // 0x212c7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212c80:
    // 0x212c80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212c80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212c84:
    // 0x212c84: 0x482c1000  qmfc2.ni    $t4, $vf2
    ctx->pc = 0x212c84u;
    SET_GPR_VEC(ctx, 12, _mm_castps_si128(ctx->vu0_vf[2]));
label_212c88:
    // 0x212c88: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x212c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
label_212c8c:
    // 0x212c8c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x212c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212c90:
    // 0x212c90: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x212c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_212c94:
    // 0x212c94: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x212c94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_212c98:
    // 0x212c98: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x212c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_212c9c:
    // 0x212c9c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x212c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_212ca0:
    // 0x212ca0: 0xc06fa80  jal         func_1BEA00
label_212ca4:
    if (ctx->pc == 0x212CA4u) {
        ctx->pc = 0x212CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CA0u;
        // 0x212ca4: 0x7fac0080  sq          $t4, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212CA8u;
        goto label_212ca8;
    }
    ctx->pc = 0x212CA0u;
    SET_GPR_U32(ctx, 31, 0x212CA8u);
    ctx->pc = 0x212CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CA0u;
    // 0x212ca4: 0x7fac0080  sq          $t4, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA00u, 0x212CA0u, 0x212CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CA8u;
label_212ca8:
    // 0x212ca8: 0x8fc640f4  lw          $a2, 0x40F4($fp)
    ctx->pc = 0x212ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212cac:
    // 0x212cac: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x212cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212cb0:
    // 0x212cb0: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x212cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_212cb4:
    // 0x212cb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x212cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_212cb8:
    // 0x212cb8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x212cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_212cbc:
    // 0x212cbc: 0xa3a50108  sb          $a1, 0x108($sp)
    ctx->pc = 0x212cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 5));
label_212cc0:
    // 0x212cc0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x212cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_212cc4:
    // 0x212cc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_212cc8:
    // 0x212cc8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x212cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_212ccc:
    // 0x212ccc: 0x26070120  addiu       $a3, $s0, 0x120
    ctx->pc = 0x212cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_212cd0:
    // 0x212cd0: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x212cd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212cd4:
    // 0x212cd4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212cd8:
    // 0x212cd8: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x212cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_212cdc:
    // 0x212cdc: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x212cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_212ce0:
    // 0x212ce0: 0x78820100  lq          $v0, 0x100($a0)
    ctx->pc = 0x212ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 256)));
label_212ce4:
    // 0x212ce4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x212ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_212ce8:
    // 0x212ce8: 0xc4ac0110  lwc1        $f12, 0x110($a1)
    ctx->pc = 0x212ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212cec:
    // 0x212cec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_212cf0:
    // 0x212cf0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x212cf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_212cf4:
    // 0x212cf4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212cf8:
    // 0x212cf8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212cf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212cfc:
    // 0x212cfc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x212cfcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_212d00:
    // 0x212d00: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x212d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_212d04:
    // 0x212d04: 0x2407004b  addiu       $a3, $zero, 0x4B
    ctx->pc = 0x212d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_212d08:
    // 0x212d08: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x212d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_212d0c:
    // 0x212d0c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212d10:
    // 0x212d10: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x212d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_212d14:
    // 0x212d14: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x212d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_212d18:
    // 0x212d18: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x212d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_212d1c:
    // 0x212d1c: 0x2403ffdb  addiu       $v1, $zero, -0x25
    ctx->pc = 0x212d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
label_212d20:
    // 0x212d20: 0xa2e30001  sb          $v1, 0x1($s7)
    ctx->pc = 0x212d20u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 3));
label_212d24:
    // 0x212d24: 0x240a001d  addiu       $t2, $zero, 0x1D
    ctx->pc = 0x212d24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_212d28:
    // 0x212d28: 0xa2f10003  sb          $s1, 0x3($s7)
    ctx->pc = 0x212d28u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 17));
label_212d2c:
    // 0x212d2c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x212d2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_212d30:
    // 0x212d30: 0xa2e70002  sb          $a3, 0x2($s7)
    ctx->pc = 0x212d30u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 7));
label_212d34:
    // 0x212d34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x212d34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_212d38:
    // 0x212d38: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x212d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
label_212d3c:
    // 0x212d3c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x212d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_212d40:
    // 0x212d40: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x212d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_212d44:
    // 0x212d44: 0xc06db14  jal         func_1B6C50
label_212d48:
    if (ctx->pc == 0x212D48u) {
        ctx->pc = 0x212D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D44u;
        // 0x212d48: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D4Cu;
        goto label_212d4c;
    }
    ctx->pc = 0x212D44u;
    SET_GPR_U32(ctx, 31, 0x212D4Cu);
    ctx->pc = 0x212D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D44u;
    // 0x212d48: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C50u, 0x212D44u, 0x212D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D4Cu;
label_212d4c:
    // 0x212d4c: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x212d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_212d50:
    // 0x212d50: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x212d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_212d54:
    // 0x212d54: 0xa10200c4  sb          $v0, 0xC4($t0)
    ctx->pc = 0x212d54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 196), (uint8_t)GPR_U32(ctx, 2));
label_212d58:
    // 0x212d58: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x212d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_212d5c:
    // 0x212d5c: 0xc071a4a  jal         func_1C6928
label_212d60:
    if (ctx->pc == 0x212D60u) {
        ctx->pc = 0x212D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D5Cu;
        // 0x212d60: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D64u;
        goto label_212d64;
    }
    ctx->pc = 0x212D5Cu;
    SET_GPR_U32(ctx, 31, 0x212D64u);
    ctx->pc = 0x212D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D5Cu;
    // 0x212d60: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6928u, 0x212D5Cu, 0x212D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D64u;
label_212d64:
    // 0x212d64: 0x8fc640f4  lw          $a2, 0x40F4($fp)
    ctx->pc = 0x212d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212d68:
    // 0x212d68: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x212d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212d6c:
    // 0x212d6c: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x212d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_212d70:
    // 0x212d70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x212d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_212d74:
    // 0x212d74: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x212d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_212d78:
    // 0x212d78: 0xa3a8010c  sb          $t0, 0x10C($sp)
    ctx->pc = 0x212d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 268), (uint8_t)GPR_U32(ctx, 8));
label_212d7c:
    // 0x212d7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x212d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_212d80:
    // 0x212d80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_212d84:
    // 0x212d84: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x212d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_212d88:
    // 0x212d88: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x212d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_212d8c:
    // 0x212d8c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x212d8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212d90:
    // 0x212d90: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x212d90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_212d94:
    // 0x212d94: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x212d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_212d98:
    // 0x212d98: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x212d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_212d9c:
    // 0x212d9c: 0x78820130  lq          $v0, 0x130($a0)
    ctx->pc = 0x212d9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 304)));
label_212da0:
    // 0x212da0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x212da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_212da4:
    // 0x212da4: 0xc4ac0140  lwc1        $f12, 0x140($a1)
    ctx->pc = 0x212da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212da8:
    // 0x212da8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_212dac:
    // 0x212dac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x212dacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_212db0:
    // 0x212db0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212db4:
    // 0x212db4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212db4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212db8:
    // 0x212db8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x212db8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_212dbc:
    // 0x212dbc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x212dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_212dc0:
    // 0x212dc0: 0x2407004b  addiu       $a3, $zero, 0x4B
    ctx->pc = 0x212dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_212dc4:
    // 0x212dc4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x212dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_212dc8:
    // 0x212dc8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x212dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212dcc:
    // 0x212dcc: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x212dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_212dd0:
    // 0x212dd0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212dd4:
    // 0x212dd4: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x212dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_212dd8:
    // 0x212dd8: 0x2403ffdb  addiu       $v1, $zero, -0x25
    ctx->pc = 0x212dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
label_212ddc:
    // 0x212ddc: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x212ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
label_212de0:
    // 0x212de0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x212de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_212de4:
    // 0x212de4: 0xa2870002  sb          $a3, 0x2($s4)
    ctx->pc = 0x212de4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 7));
label_212de8:
    // 0x212de8: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x212de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_212dec:
    // 0x212dec: 0xa2910003  sb          $s1, 0x3($s4)
    ctx->pc = 0x212decu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 17));
label_212df0:
    // 0x212df0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x212df0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_212df4:
    // 0x212df4: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x212df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
label_212df8:
    // 0x212df8: 0x8fa7010c  lw          $a3, 0x10C($sp)
    ctx->pc = 0x212df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_212dfc:
    // 0x212dfc: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x212dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_212e00:
    // 0x212e00: 0xc06db14  jal         func_1B6C50
label_212e04:
    if (ctx->pc == 0x212E04u) {
        ctx->pc = 0x212E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E00u;
        // 0x212e04: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E08u;
        goto label_212e08;
    }
    ctx->pc = 0x212E00u;
    SET_GPR_U32(ctx, 31, 0x212E08u);
    ctx->pc = 0x212E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E00u;
    // 0x212e04: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C50u, 0x212E00u, 0x212E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E08u;
label_212e08:
    // 0x212e08: 0x8fa80148  lw          $t0, 0x148($sp)
    ctx->pc = 0x212e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_212e0c:
    // 0x212e0c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x212e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_212e10:
    // 0x212e10: 0xa10200c4  sb          $v0, 0xC4($t0)
    ctx->pc = 0x212e10u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 196), (uint8_t)GPR_U32(ctx, 2));
label_212e14:
    // 0x212e14: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x212e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_212e18:
    // 0x212e18: 0xc0725c8  jal         func_1C9720
label_212e1c:
    if (ctx->pc == 0x212E1Cu) {
        ctx->pc = 0x212E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E18u;
        // 0x212e1c: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E20u;
        goto label_212e20;
    }
    ctx->pc = 0x212E18u;
    SET_GPR_U32(ctx, 31, 0x212E20u);
    ctx->pc = 0x212E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E18u;
    // 0x212e1c: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9720u, 0x212E18u, 0x212E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E20u;
label_212e20:
    // 0x212e20: 0x8fcc40f4  lw          $t4, 0x40F4($fp)
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212e24:
    // 0x212e24: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x212e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212e28:
    // 0x212e28: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x212e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_212e2c:
    // 0x212e2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x212e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_212e30:
    // 0x212e30: 0x1856018  mult        $t4, $t4, $a1
    ctx->pc = 0x212e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_212e34:
    // 0x212e34: 0xa3a70110  sb          $a3, 0x110($sp)
    ctx->pc = 0x212e34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 7));
label_212e38:
    // 0x212e38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_212e3c:
    // 0x212e3c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x212e3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212e40:
    // 0x212e40: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x212e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_212e44:
    // 0x212e44: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212e48:
    // 0x212e48: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x212e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_212e4c:
    // 0x212e4c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x212e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_212e50:
    // 0x212e50: 0x20c2821  addu        $a1, $s0, $t4
    ctx->pc = 0x212e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
label_212e54:
    // 0x212e54: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x212e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_212e58:
    // 0x212e58: 0x78a20160  lq          $v0, 0x160($a1)
    ctx->pc = 0x212e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 352)));
label_212e5c:
    // 0x212e5c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x212e5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_212e60:
    // 0x212e60: 0x79870180  lq          $a3, 0x180($t4)
    ctx->pc = 0x212e60u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 12), 384)));
label_212e64:
    // 0x212e64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_212e68:
    // 0x212e68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x212e68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_212e6c:
    // 0x212e6c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212e70:
    // 0x212e70: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212e70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212e74:
    // 0x212e74: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x212e74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_212e78:
    // 0x212e78: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x212e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_212e7c:
    // 0x212e7c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x212e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212e80:
    // 0x212e80: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x212e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_212e84:
    // 0x212e84: 0x2402ffbc  addiu       $v0, $zero, -0x44
    ctx->pc = 0x212e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_212e88:
    // 0x212e88: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x212e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_212e8c:
    // 0x212e8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x212e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212e90:
    // 0x212e90: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x212e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_212e94:
    // 0x212e94: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x212e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212e98:
    // 0x212e98: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_212e9c:
    // 0x212e9c: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x212e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_212ea0:
    // 0x212ea0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x212ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_212ea4:
    // 0x212ea4: 0xa0710003  sb          $s1, 0x3($v1)
    ctx->pc = 0x212ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 17));
label_212ea8:
    // 0x212ea8: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x212ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
label_212eac:
    // 0x212eac: 0xc06abca  jal         func_1AAF28
label_212eb0:
    if (ctx->pc == 0x212EB0u) {
        ctx->pc = 0x212EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EACu;
        // 0x212eb0: 0x8fa70110  lw          $a3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EB4u;
        goto label_212eb4;
    }
    ctx->pc = 0x212EACu;
    SET_GPR_U32(ctx, 31, 0x212EB4u);
    ctx->pc = 0x212EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EACu;
    // 0x212eb0: 0x8fa70110  lw          $a3, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAF28u, 0x212EACu, 0x212EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EB4u;
label_212eb4:
    // 0x212eb4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x212eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_212eb8:
    // 0x212eb8: 0x2405ff80  addiu       $a1, $zero, -0x80
    ctx->pc = 0x212eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_212ebc:
    // 0x212ebc: 0xa06500c4  sb          $a1, 0xC4($v1)
    ctx->pc = 0x212ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 196), (uint8_t)GPR_U32(ctx, 5));
label_212ec0:
    // 0x212ec0: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x212ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_212ec4:
    // 0x212ec4: 0xc06ac04  jal         func_1AB010
label_212ec8:
    if (ctx->pc == 0x212EC8u) {
        ctx->pc = 0x212EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EC4u;
        // 0x212ec8: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212ECCu;
        goto label_212ecc;
    }
    ctx->pc = 0x212EC4u;
    SET_GPR_U32(ctx, 31, 0x212ECCu);
    ctx->pc = 0x212EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EC4u;
    // 0x212ec8: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB010u, 0x212EC4u, 0x212ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ECCu;
label_212ecc:
    // 0x212ecc: 0x8fc440f4  lw          $a0, 0x40F4($fp)
    ctx->pc = 0x212eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212ed0:
    // 0x212ed0: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x212ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_212ed4:
    // 0x212ed4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x212ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_212ed8:
    // 0x212ed8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x212ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_212edc:
    // 0x212edc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x212edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_212ee0:
    // 0x212ee0: 0xa3a30114  sb          $v1, 0x114($sp)
    ctx->pc = 0x212ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 276), (uint8_t)GPR_U32(ctx, 3));
label_212ee4:
    // 0x212ee4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x212ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_212ee8:
    // 0x212ee8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212eec:
    // 0x212eec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x212eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_212ef0:
    // 0x212ef0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x212ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212ef4:
    // 0x212ef4: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x212ef4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212ef8:
    // 0x212ef8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x212ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_212efc:
    // 0x212efc: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x212efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_212f00:
    // 0x212f00: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_212f04:
    // 0x212f04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x212f04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212f08:
    // 0x212f08: 0x784c0190  lq          $t4, 0x190($v0)
    ctx->pc = 0x212f08u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 2), 400)));
label_212f0c:
    // 0x212f0c: 0x786d01c0  lq          $t5, 0x1C0($v1)
    ctx->pc = 0x212f0cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 3), 448)));
label_212f10:
    // 0x212f10: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212f14:
    // 0x212f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212f18:
    // 0x212f18: 0x79ee01b0  lq          $t6, 0x1B0($t7)
    ctx->pc = 0x212f18u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 15), 432)));
label_212f1c:
    // 0x212f1c: 0x7a0301e0  lq          $v1, 0x1E0($s0)
    ctx->pc = 0x212f1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 480)));
label_212f20:
    // 0x212f20: 0x48ac0800  qmtc2.ni    $t4, $vf1
    ctx->pc = 0x212f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_212f24:
    // 0x212f24: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x212f24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_212f28:
    // 0x212f28: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212f2c:
    // 0x212f2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212f2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212f30:
    // 0x212f30: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x212f30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_212f34:
    // 0x212f34: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x212f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_212f38:
    // 0x212f38: 0x48ad0800  qmtc2.ni    $t5, $vf1
    ctx->pc = 0x212f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
label_212f3c:
    // 0x212f3c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x212f3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_212f40:
    // 0x212f40: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x212f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_212f44:
    // 0x212f44: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x212f44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_212f48:
    // 0x212f48: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x212f48u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_212f4c:
    // 0x212f4c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x212f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_212f50:
    // 0x212f50: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x212f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212f54:
    // 0x212f54: 0x7fad0030  sq          $t5, 0x30($sp)
    ctx->pc = 0x212f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 13));
label_212f58:
    // 0x212f58: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x212f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_212f5c:
    // 0x212f5c: 0x7fae0040  sq          $t6, 0x40($sp)
    ctx->pc = 0x212f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 14));
label_212f60:
    // 0x212f60: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x212f60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212f64:
    // 0x212f64: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x212f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_212f68:
    // 0x212f68: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x212f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
label_212f6c:
    // 0x212f6c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x212f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_212f70:
    // 0x212f70: 0x8fa70124  lw          $a3, 0x124($sp)
    ctx->pc = 0x212f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_212f74:
    // 0x212f74: 0x2403ffbc  addiu       $v1, $zero, -0x44
    ctx->pc = 0x212f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_212f78:
    // 0x212f78: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x212f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_212f7c:
    // 0x212f7c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x212f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
label_212f80:
    // 0x212f80: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x212f80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_212f84:
    // 0x212f84: 0xa0f10003  sb          $s1, 0x3($a3)
    ctx->pc = 0x212f84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 17));
label_212f88:
    // 0x212f88: 0xc06ab64  jal         func_1AAD90
label_212f8c:
    if (ctx->pc == 0x212F8Cu) {
        ctx->pc = 0x212F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F88u;
        // 0x212f8c: 0x8fa70114  lw          $a3, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F90u;
        goto label_212f90;
    }
    ctx->pc = 0x212F88u;
    SET_GPR_U32(ctx, 31, 0x212F90u);
    ctx->pc = 0x212F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F88u;
    // 0x212f8c: 0x8fa70114  lw          $a3, 0x114($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAD90u, 0x212F88u, 0x212F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F90u;
label_212f90:
    // 0x212f90: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_212f94:
    // 0x212f94: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x212f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_212f98:
    // 0x212f98: 0xa0a600c4  sb          $a2, 0xC4($a1)
    ctx->pc = 0x212f98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 196), (uint8_t)GPR_U32(ctx, 6));
label_212f9c:
    // 0x212f9c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x212f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_212fa0:
    // 0x212fa0: 0xc06ab8c  jal         func_1AAE30
label_212fa4:
    if (ctx->pc == 0x212FA4u) {
        ctx->pc = 0x212FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FA0u;
        // 0x212fa4: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212FA8u;
        goto label_212fa8;
    }
    ctx->pc = 0x212FA0u;
    SET_GPR_U32(ctx, 31, 0x212FA8u);
    ctx->pc = 0x212FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FA0u;
    // 0x212fa4: 0x8fc540f4  lw          $a1, 0x40F4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE30u, 0x212FA0u, 0x212FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FA8u;
label_212fa8:
    // 0x212fa8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x212fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_212fac:
    // 0x212fac: 0xc06fdf8  jal         func_1BF7E0
label_212fb0:
    if (ctx->pc == 0x212FB0u) {
        ctx->pc = 0x212FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FACu;
        // 0x212fb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212FB4u;
        goto label_212fb4;
    }
    ctx->pc = 0x212FACu;
    SET_GPR_U32(ctx, 31, 0x212FB4u);
    ctx->pc = 0x212FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FACu;
    // 0x212fb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF7E0u, 0x212FACu, 0x212FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FB4u;
label_212fb4:
    // 0x212fb4: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x212fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_212fb8:
    // 0x212fb8: 0xc0698b0  jal         func_1A62C0
label_212fbc:
    if (ctx->pc == 0x212FBCu) {
        ctx->pc = 0x212FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FB8u;
        // 0x212fbc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212FC0u;
        goto label_212fc0;
    }
    ctx->pc = 0x212FB8u;
    SET_GPR_U32(ctx, 31, 0x212FC0u);
    ctx->pc = 0x212FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FB8u;
    // 0x212fbc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A62C0u, 0x212FB8u, 0x212FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FC0u;
label_212fc0:
    // 0x212fc0: 0x8fc24120  lw          $v0, 0x4120($fp)
    ctx->pc = 0x212fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16672)));
label_212fc4:
    // 0x212fc4: 0x8fc540f4  lw          $a1, 0x40F4($fp)
    ctx->pc = 0x212fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16628)));
label_212fc8:
    // 0x212fc8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x212fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_212fcc:
    // 0x212fcc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x212fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_212fd0:
    // 0x212fd0: 0x60f809  jalr        $v1
label_212fd4:
    if (ctx->pc == 0x212FD4u) {
        ctx->pc = 0x212FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FD0u;
        // 0x212fd4: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212FD8u;
        goto label_212fd8;
    }
    ctx->pc = 0x212FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x212FD8u);
        ctx->pc = 0x212FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FD0u;
        // 0x212fd4: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212FD0u, 0x212FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212FD8u;
label_212fd8:
    // 0x212fd8: 0xafd24108  sw          $s2, 0x4108($fp)
    ctx->pc = 0x212fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16648), GPR_U32(ctx, 18));
label_212fdc:
    // 0x212fdc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_212fe0:
    // 0x212fe0: 0xc083816  jal         func_20E058
label_212fe4:
    if (ctx->pc == 0x212FE4u) {
        ctx->pc = 0x212FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FE0u;
        // 0x212fe4: 0xafd24100  sw          $s2, 0x4100($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16640), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212FE8u;
        goto label_212fe8;
    }
    ctx->pc = 0x212FE0u;
    SET_GPR_U32(ctx, 31, 0x212FE8u);
    ctx->pc = 0x212FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FE0u;
    // 0x212fe4: 0xafd24100  sw          $s2, 0x4100($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16640), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E058u, 0x212FE0u, 0x212FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FE8u;
label_212fe8:
    // 0x212fe8: 0xc08385a  jal         func_20E168
label_212fec:
    if (ctx->pc == 0x212FECu) {
        ctx->pc = 0x212FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FE8u;
        // 0x212fec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212FF0u;
        goto label_212ff0;
    }
    ctx->pc = 0x212FE8u;
    SET_GPR_U32(ctx, 31, 0x212FF0u);
    ctx->pc = 0x212FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FE8u;
    // 0x212fec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E168u, 0x212FE8u, 0x212FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FF0u;
label_212ff0:
    // 0x212ff0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x212ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_212ff4:
    // 0x212ff4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x212ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_212ff8:
    // 0x212ff8: 0xafc04114  sw          $zero, 0x4114($fp)
    ctx->pc = 0x212ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16660), GPR_U32(ctx, 0));
label_212ffc:
    // 0x212ffc: 0xafc04118  sw          $zero, 0x4118($fp)
    ctx->pc = 0x212ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 0));
label_213000:
    // 0x213000: 0xafc04104  sw          $zero, 0x4104($fp)
    ctx->pc = 0x213000u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16644), GPR_U32(ctx, 0));
label_213004:
    // 0x213004: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x213004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_213008:
    // 0x213008: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x213008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_21300c:
    // 0x21300c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x21300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_213010:
    // 0x213010: 0x40f809  jalr        $v0
label_213014:
    if (ctx->pc == 0x213014u) {
        ctx->pc = 0x213014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213010u;
        // 0x213014: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213018u;
        goto label_213018;
    }
    ctx->pc = 0x213010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213018u);
        ctx->pc = 0x213014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213010u;
        // 0x213014: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213010u, 0x213018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213018u;
label_213018:
    // 0x213018: 0xafc2411c  sw          $v0, 0x411C($fp)
    ctx->pc = 0x213018u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16668), GPR_U32(ctx, 2));
label_21301c:
    // 0x21301c: 0xafc04138  sw          $zero, 0x4138($fp)
    ctx->pc = 0x21301cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16696), GPR_U32(ctx, 0));
label_213020:
    // 0x213020: 0xafc0413c  sw          $zero, 0x413C($fp)
    ctx->pc = 0x213020u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16700), GPR_U32(ctx, 0));
label_213024:
    // 0x213024: 0xafc0410c  sw          $zero, 0x410C($fp)
    ctx->pc = 0x213024u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16652), GPR_U32(ctx, 0));
label_213028:
    // 0x213028: 0xafc04110  sw          $zero, 0x4110($fp)
    ctx->pc = 0x213028u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16656), GPR_U32(ctx, 0));
label_21302c:
    // 0x21302c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x21302cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_213030:
    // 0x213030: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x213030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_213034:
    // 0x213034: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x213034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_213038:
    // 0x213038: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x213038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_21303c:
    // 0x21303c: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x21303cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_213040:
    // 0x213040: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x213040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_213044:
    // 0x213044: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x213044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_213048:
    // 0x213048: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x213048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_21304c:
    // 0x21304c: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x21304cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_213050:
    // 0x213050: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x213050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_213054:
    // 0x213054: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x213054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_213058:
    // 0x213058: 0x3e00008  jr          $ra
label_21305c:
    if (ctx->pc == 0x21305Cu) {
        ctx->pc = 0x21305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213058u;
        // 0x21305c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213060u;
        goto label_fallthrough_0x213058;
    }
    ctx->pc = 0x213058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213058u;
        // 0x21305c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x213058:
    ctx->pc = 0x213060u;
}
