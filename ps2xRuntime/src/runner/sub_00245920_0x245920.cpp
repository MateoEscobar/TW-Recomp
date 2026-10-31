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

// Function: sub_00245920
// Address: 0x245920 - 0x247958
void sub_00245920_0x245920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245920_0x245920");
#endif

    switch (ctx->pc) {
        case 0x245920u: goto label_245920;
        case 0x245924u: goto label_245924;
        case 0x245928u: goto label_245928;
        case 0x24592cu: goto label_24592c;
        case 0x245930u: goto label_245930;
        case 0x245934u: goto label_245934;
        case 0x245938u: goto label_245938;
        case 0x24593cu: goto label_24593c;
        case 0x245940u: goto label_245940;
        case 0x245944u: goto label_245944;
        case 0x245948u: goto label_245948;
        case 0x24594cu: goto label_24594c;
        case 0x245950u: goto label_245950;
        case 0x245954u: goto label_245954;
        case 0x245958u: goto label_245958;
        case 0x24595cu: goto label_24595c;
        case 0x245960u: goto label_245960;
        case 0x245964u: goto label_245964;
        case 0x245968u: goto label_245968;
        case 0x24596cu: goto label_24596c;
        case 0x245970u: goto label_245970;
        case 0x245974u: goto label_245974;
        case 0x245978u: goto label_245978;
        case 0x24597cu: goto label_24597c;
        case 0x245980u: goto label_245980;
        case 0x245984u: goto label_245984;
        case 0x245988u: goto label_245988;
        case 0x24598cu: goto label_24598c;
        case 0x245990u: goto label_245990;
        case 0x245994u: goto label_245994;
        case 0x245998u: goto label_245998;
        case 0x24599cu: goto label_24599c;
        case 0x2459a0u: goto label_2459a0;
        case 0x2459a4u: goto label_2459a4;
        case 0x2459a8u: goto label_2459a8;
        case 0x2459acu: goto label_2459ac;
        case 0x2459b0u: goto label_2459b0;
        case 0x2459b4u: goto label_2459b4;
        case 0x2459b8u: goto label_2459b8;
        case 0x2459bcu: goto label_2459bc;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459c4u: goto label_2459c4;
        case 0x2459c8u: goto label_2459c8;
        case 0x2459ccu: goto label_2459cc;
        case 0x2459d0u: goto label_2459d0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459d8u: goto label_2459d8;
        case 0x2459dcu: goto label_2459dc;
        case 0x2459e0u: goto label_2459e0;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459e8u: goto label_2459e8;
        case 0x2459ecu: goto label_2459ec;
        case 0x2459f0u: goto label_2459f0;
        case 0x2459f4u: goto label_2459f4;
        case 0x2459f8u: goto label_2459f8;
        case 0x2459fcu: goto label_2459fc;
        case 0x245a00u: goto label_245a00;
        case 0x245a04u: goto label_245a04;
        case 0x245a08u: goto label_245a08;
        case 0x245a0cu: goto label_245a0c;
        case 0x245a10u: goto label_245a10;
        case 0x245a14u: goto label_245a14;
        case 0x245a18u: goto label_245a18;
        case 0x245a1cu: goto label_245a1c;
        case 0x245a20u: goto label_245a20;
        case 0x245a24u: goto label_245a24;
        case 0x245a28u: goto label_245a28;
        case 0x245a2cu: goto label_245a2c;
        case 0x245a30u: goto label_245a30;
        case 0x245a34u: goto label_245a34;
        case 0x245a38u: goto label_245a38;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a40u: goto label_245a40;
        case 0x245a44u: goto label_245a44;
        case 0x245a48u: goto label_245a48;
        case 0x245a4cu: goto label_245a4c;
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        case 0x245b10u: goto label_245b10;
        case 0x245b14u: goto label_245b14;
        case 0x245b18u: goto label_245b18;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b20u: goto label_245b20;
        case 0x245b24u: goto label_245b24;
        case 0x245b28u: goto label_245b28;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b30u: goto label_245b30;
        case 0x245b34u: goto label_245b34;
        case 0x245b38u: goto label_245b38;
        case 0x245b3cu: goto label_245b3c;
        case 0x245b40u: goto label_245b40;
        case 0x245b44u: goto label_245b44;
        case 0x245b48u: goto label_245b48;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b50u: goto label_245b50;
        case 0x245b54u: goto label_245b54;
        case 0x245b58u: goto label_245b58;
        case 0x245b5cu: goto label_245b5c;
        case 0x245b60u: goto label_245b60;
        case 0x245b64u: goto label_245b64;
        case 0x245b68u: goto label_245b68;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b70u: goto label_245b70;
        case 0x245b74u: goto label_245b74;
        case 0x245b78u: goto label_245b78;
        case 0x245b7cu: goto label_245b7c;
        case 0x245b80u: goto label_245b80;
        case 0x245b84u: goto label_245b84;
        case 0x245b88u: goto label_245b88;
        case 0x245b8cu: goto label_245b8c;
        case 0x245b90u: goto label_245b90;
        case 0x245b94u: goto label_245b94;
        case 0x245b98u: goto label_245b98;
        case 0x245b9cu: goto label_245b9c;
        case 0x245ba0u: goto label_245ba0;
        case 0x245ba4u: goto label_245ba4;
        case 0x245ba8u: goto label_245ba8;
        case 0x245bacu: goto label_245bac;
        case 0x245bb0u: goto label_245bb0;
        case 0x245bb4u: goto label_245bb4;
        case 0x245bb8u: goto label_245bb8;
        case 0x245bbcu: goto label_245bbc;
        case 0x245bc0u: goto label_245bc0;
        case 0x245bc4u: goto label_245bc4;
        case 0x245bc8u: goto label_245bc8;
        case 0x245bccu: goto label_245bcc;
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        case 0x245f50u: goto label_245f50;
        case 0x245f54u: goto label_245f54;
        case 0x245f58u: goto label_245f58;
        case 0x245f5cu: goto label_245f5c;
        case 0x245f60u: goto label_245f60;
        case 0x245f64u: goto label_245f64;
        case 0x245f68u: goto label_245f68;
        case 0x245f6cu: goto label_245f6c;
        case 0x245f70u: goto label_245f70;
        case 0x245f74u: goto label_245f74;
        case 0x245f78u: goto label_245f78;
        case 0x245f7cu: goto label_245f7c;
        case 0x245f80u: goto label_245f80;
        case 0x245f84u: goto label_245f84;
        case 0x245f88u: goto label_245f88;
        case 0x245f8cu: goto label_245f8c;
        case 0x245f90u: goto label_245f90;
        case 0x245f94u: goto label_245f94;
        case 0x245f98u: goto label_245f98;
        case 0x245f9cu: goto label_245f9c;
        case 0x245fa0u: goto label_245fa0;
        case 0x245fa4u: goto label_245fa4;
        case 0x245fa8u: goto label_245fa8;
        case 0x245facu: goto label_245fac;
        case 0x245fb0u: goto label_245fb0;
        case 0x245fb4u: goto label_245fb4;
        case 0x245fb8u: goto label_245fb8;
        case 0x245fbcu: goto label_245fbc;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fc4u: goto label_245fc4;
        case 0x245fc8u: goto label_245fc8;
        case 0x245fccu: goto label_245fcc;
        case 0x245fd0u: goto label_245fd0;
        case 0x245fd4u: goto label_245fd4;
        case 0x245fd8u: goto label_245fd8;
        case 0x245fdcu: goto label_245fdc;
        case 0x245fe0u: goto label_245fe0;
        case 0x245fe4u: goto label_245fe4;
        case 0x245fe8u: goto label_245fe8;
        case 0x245fecu: goto label_245fec;
        case 0x245ff0u: goto label_245ff0;
        case 0x245ff4u: goto label_245ff4;
        case 0x245ff8u: goto label_245ff8;
        case 0x245ffcu: goto label_245ffc;
        case 0x246000u: goto label_246000;
        case 0x246004u: goto label_246004;
        case 0x246008u: goto label_246008;
        case 0x24600cu: goto label_24600c;
        case 0x246010u: goto label_246010;
        case 0x246014u: goto label_246014;
        case 0x246018u: goto label_246018;
        case 0x24601cu: goto label_24601c;
        case 0x246020u: goto label_246020;
        case 0x246024u: goto label_246024;
        case 0x246028u: goto label_246028;
        case 0x24602cu: goto label_24602c;
        case 0x246030u: goto label_246030;
        case 0x246034u: goto label_246034;
        case 0x246038u: goto label_246038;
        case 0x24603cu: goto label_24603c;
        case 0x246040u: goto label_246040;
        case 0x246044u: goto label_246044;
        case 0x246048u: goto label_246048;
        case 0x24604cu: goto label_24604c;
        case 0x246050u: goto label_246050;
        case 0x246054u: goto label_246054;
        case 0x246058u: goto label_246058;
        case 0x24605cu: goto label_24605c;
        case 0x246060u: goto label_246060;
        case 0x246064u: goto label_246064;
        case 0x246068u: goto label_246068;
        case 0x24606cu: goto label_24606c;
        case 0x246070u: goto label_246070;
        case 0x246074u: goto label_246074;
        case 0x246078u: goto label_246078;
        case 0x24607cu: goto label_24607c;
        case 0x246080u: goto label_246080;
        case 0x246084u: goto label_246084;
        case 0x246088u: goto label_246088;
        case 0x24608cu: goto label_24608c;
        case 0x246090u: goto label_246090;
        case 0x246094u: goto label_246094;
        case 0x246098u: goto label_246098;
        case 0x24609cu: goto label_24609c;
        case 0x2460a0u: goto label_2460a0;
        case 0x2460a4u: goto label_2460a4;
        case 0x2460a8u: goto label_2460a8;
        case 0x2460acu: goto label_2460ac;
        case 0x2460b0u: goto label_2460b0;
        case 0x2460b4u: goto label_2460b4;
        case 0x2460b8u: goto label_2460b8;
        case 0x2460bcu: goto label_2460bc;
        case 0x2460c0u: goto label_2460c0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460c8u: goto label_2460c8;
        case 0x2460ccu: goto label_2460cc;
        case 0x2460d0u: goto label_2460d0;
        case 0x2460d4u: goto label_2460d4;
        case 0x2460d8u: goto label_2460d8;
        case 0x2460dcu: goto label_2460dc;
        case 0x2460e0u: goto label_2460e0;
        case 0x2460e4u: goto label_2460e4;
        case 0x2460e8u: goto label_2460e8;
        case 0x2460ecu: goto label_2460ec;
        case 0x2460f0u: goto label_2460f0;
        case 0x2460f4u: goto label_2460f4;
        case 0x2460f8u: goto label_2460f8;
        case 0x2460fcu: goto label_2460fc;
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        case 0x2461a0u: goto label_2461a0;
        case 0x2461a4u: goto label_2461a4;
        case 0x2461a8u: goto label_2461a8;
        case 0x2461acu: goto label_2461ac;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461b4u: goto label_2461b4;
        case 0x2461b8u: goto label_2461b8;
        case 0x2461bcu: goto label_2461bc;
        case 0x2461c0u: goto label_2461c0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        case 0x2461d0u: goto label_2461d0;
        case 0x2461d4u: goto label_2461d4;
        case 0x2461d8u: goto label_2461d8;
        case 0x2461dcu: goto label_2461dc;
        case 0x2461e0u: goto label_2461e0;
        case 0x2461e4u: goto label_2461e4;
        case 0x2461e8u: goto label_2461e8;
        case 0x2461ecu: goto label_2461ec;
        case 0x2461f0u: goto label_2461f0;
        case 0x2461f4u: goto label_2461f4;
        case 0x2461f8u: goto label_2461f8;
        case 0x2461fcu: goto label_2461fc;
        case 0x246200u: goto label_246200;
        case 0x246204u: goto label_246204;
        case 0x246208u: goto label_246208;
        case 0x24620cu: goto label_24620c;
        case 0x246210u: goto label_246210;
        case 0x246214u: goto label_246214;
        case 0x246218u: goto label_246218;
        case 0x24621cu: goto label_24621c;
        case 0x246220u: goto label_246220;
        case 0x246224u: goto label_246224;
        case 0x246228u: goto label_246228;
        case 0x24622cu: goto label_24622c;
        case 0x246230u: goto label_246230;
        case 0x246234u: goto label_246234;
        case 0x246238u: goto label_246238;
        case 0x24623cu: goto label_24623c;
        case 0x246240u: goto label_246240;
        case 0x246244u: goto label_246244;
        case 0x246248u: goto label_246248;
        case 0x24624cu: goto label_24624c;
        case 0x246250u: goto label_246250;
        case 0x246254u: goto label_246254;
        case 0x246258u: goto label_246258;
        case 0x24625cu: goto label_24625c;
        case 0x246260u: goto label_246260;
        case 0x246264u: goto label_246264;
        case 0x246268u: goto label_246268;
        case 0x24626cu: goto label_24626c;
        case 0x246270u: goto label_246270;
        case 0x246274u: goto label_246274;
        case 0x246278u: goto label_246278;
        case 0x24627cu: goto label_24627c;
        case 0x246280u: goto label_246280;
        case 0x246284u: goto label_246284;
        case 0x246288u: goto label_246288;
        case 0x24628cu: goto label_24628c;
        case 0x246290u: goto label_246290;
        case 0x246294u: goto label_246294;
        case 0x246298u: goto label_246298;
        case 0x24629cu: goto label_24629c;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462a8u: goto label_2462a8;
        case 0x2462acu: goto label_2462ac;
        case 0x2462b0u: goto label_2462b0;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462b8u: goto label_2462b8;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462c0u: goto label_2462c0;
        case 0x2462c4u: goto label_2462c4;
        case 0x2462c8u: goto label_2462c8;
        case 0x2462ccu: goto label_2462cc;
        case 0x2462d0u: goto label_2462d0;
        case 0x2462d4u: goto label_2462d4;
        case 0x2462d8u: goto label_2462d8;
        case 0x2462dcu: goto label_2462dc;
        case 0x2462e0u: goto label_2462e0;
        case 0x2462e4u: goto label_2462e4;
        case 0x2462e8u: goto label_2462e8;
        case 0x2462ecu: goto label_2462ec;
        case 0x2462f0u: goto label_2462f0;
        case 0x2462f4u: goto label_2462f4;
        case 0x2462f8u: goto label_2462f8;
        case 0x2462fcu: goto label_2462fc;
        case 0x246300u: goto label_246300;
        case 0x246304u: goto label_246304;
        case 0x246308u: goto label_246308;
        case 0x24630cu: goto label_24630c;
        case 0x246310u: goto label_246310;
        case 0x246314u: goto label_246314;
        case 0x246318u: goto label_246318;
        case 0x24631cu: goto label_24631c;
        case 0x246320u: goto label_246320;
        case 0x246324u: goto label_246324;
        case 0x246328u: goto label_246328;
        case 0x24632cu: goto label_24632c;
        case 0x246330u: goto label_246330;
        case 0x246334u: goto label_246334;
        case 0x246338u: goto label_246338;
        case 0x24633cu: goto label_24633c;
        case 0x246340u: goto label_246340;
        case 0x246344u: goto label_246344;
        case 0x246348u: goto label_246348;
        case 0x24634cu: goto label_24634c;
        case 0x246350u: goto label_246350;
        case 0x246354u: goto label_246354;
        case 0x246358u: goto label_246358;
        case 0x24635cu: goto label_24635c;
        case 0x246360u: goto label_246360;
        case 0x246364u: goto label_246364;
        case 0x246368u: goto label_246368;
        case 0x24636cu: goto label_24636c;
        case 0x246370u: goto label_246370;
        case 0x246374u: goto label_246374;
        case 0x246378u: goto label_246378;
        case 0x24637cu: goto label_24637c;
        case 0x246380u: goto label_246380;
        case 0x246384u: goto label_246384;
        case 0x246388u: goto label_246388;
        case 0x24638cu: goto label_24638c;
        case 0x246390u: goto label_246390;
        case 0x246394u: goto label_246394;
        case 0x246398u: goto label_246398;
        case 0x24639cu: goto label_24639c;
        case 0x2463a0u: goto label_2463a0;
        case 0x2463a4u: goto label_2463a4;
        case 0x2463a8u: goto label_2463a8;
        case 0x2463acu: goto label_2463ac;
        case 0x2463b0u: goto label_2463b0;
        case 0x2463b4u: goto label_2463b4;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        case 0x246478u: goto label_246478;
        case 0x24647cu: goto label_24647c;
        case 0x246480u: goto label_246480;
        case 0x246484u: goto label_246484;
        case 0x246488u: goto label_246488;
        case 0x24648cu: goto label_24648c;
        case 0x246490u: goto label_246490;
        case 0x246494u: goto label_246494;
        case 0x246498u: goto label_246498;
        case 0x24649cu: goto label_24649c;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464a4u: goto label_2464a4;
        case 0x2464a8u: goto label_2464a8;
        case 0x2464acu: goto label_2464ac;
        case 0x2464b0u: goto label_2464b0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        case 0x246540u: goto label_246540;
        case 0x246544u: goto label_246544;
        case 0x246548u: goto label_246548;
        case 0x24654cu: goto label_24654c;
        case 0x246550u: goto label_246550;
        case 0x246554u: goto label_246554;
        case 0x246558u: goto label_246558;
        case 0x24655cu: goto label_24655c;
        case 0x246560u: goto label_246560;
        case 0x246564u: goto label_246564;
        case 0x246568u: goto label_246568;
        case 0x24656cu: goto label_24656c;
        case 0x246570u: goto label_246570;
        case 0x246574u: goto label_246574;
        case 0x246578u: goto label_246578;
        case 0x24657cu: goto label_24657c;
        case 0x246580u: goto label_246580;
        case 0x246584u: goto label_246584;
        case 0x246588u: goto label_246588;
        case 0x24658cu: goto label_24658c;
        case 0x246590u: goto label_246590;
        case 0x246594u: goto label_246594;
        case 0x246598u: goto label_246598;
        case 0x24659cu: goto label_24659c;
        case 0x2465a0u: goto label_2465a0;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465a8u: goto label_2465a8;
        case 0x2465acu: goto label_2465ac;
        case 0x2465b0u: goto label_2465b0;
        case 0x2465b4u: goto label_2465b4;
        case 0x2465b8u: goto label_2465b8;
        case 0x2465bcu: goto label_2465bc;
        case 0x2465c0u: goto label_2465c0;
        case 0x2465c4u: goto label_2465c4;
        case 0x2465c8u: goto label_2465c8;
        case 0x2465ccu: goto label_2465cc;
        case 0x2465d0u: goto label_2465d0;
        case 0x2465d4u: goto label_2465d4;
        case 0x2465d8u: goto label_2465d8;
        case 0x2465dcu: goto label_2465dc;
        case 0x2465e0u: goto label_2465e0;
        case 0x2465e4u: goto label_2465e4;
        case 0x2465e8u: goto label_2465e8;
        case 0x2465ecu: goto label_2465ec;
        case 0x2465f0u: goto label_2465f0;
        case 0x2465f4u: goto label_2465f4;
        case 0x2465f8u: goto label_2465f8;
        case 0x2465fcu: goto label_2465fc;
        case 0x246600u: goto label_246600;
        case 0x246604u: goto label_246604;
        case 0x246608u: goto label_246608;
        case 0x24660cu: goto label_24660c;
        case 0x246610u: goto label_246610;
        case 0x246614u: goto label_246614;
        case 0x246618u: goto label_246618;
        case 0x24661cu: goto label_24661c;
        case 0x246620u: goto label_246620;
        case 0x246624u: goto label_246624;
        case 0x246628u: goto label_246628;
        case 0x24662cu: goto label_24662c;
        case 0x246630u: goto label_246630;
        case 0x246634u: goto label_246634;
        case 0x246638u: goto label_246638;
        case 0x24663cu: goto label_24663c;
        case 0x246640u: goto label_246640;
        case 0x246644u: goto label_246644;
        case 0x246648u: goto label_246648;
        case 0x24664cu: goto label_24664c;
        case 0x246650u: goto label_246650;
        case 0x246654u: goto label_246654;
        case 0x246658u: goto label_246658;
        case 0x24665cu: goto label_24665c;
        case 0x246660u: goto label_246660;
        case 0x246664u: goto label_246664;
        case 0x246668u: goto label_246668;
        case 0x24666cu: goto label_24666c;
        case 0x246670u: goto label_246670;
        case 0x246674u: goto label_246674;
        case 0x246678u: goto label_246678;
        case 0x24667cu: goto label_24667c;
        case 0x246680u: goto label_246680;
        case 0x246684u: goto label_246684;
        case 0x246688u: goto label_246688;
        case 0x24668cu: goto label_24668c;
        case 0x246690u: goto label_246690;
        case 0x246694u: goto label_246694;
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        case 0x246980u: goto label_246980;
        case 0x246984u: goto label_246984;
        case 0x246988u: goto label_246988;
        case 0x24698cu: goto label_24698c;
        case 0x246990u: goto label_246990;
        case 0x246994u: goto label_246994;
        case 0x246998u: goto label_246998;
        case 0x24699cu: goto label_24699c;
        case 0x2469a0u: goto label_2469a0;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469a8u: goto label_2469a8;
        case 0x2469acu: goto label_2469ac;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469b4u: goto label_2469b4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469bcu: goto label_2469bc;
        case 0x2469c0u: goto label_2469c0;
        case 0x2469c4u: goto label_2469c4;
        case 0x2469c8u: goto label_2469c8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469d4u: goto label_2469d4;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469dcu: goto label_2469dc;
        case 0x2469e0u: goto label_2469e0;
        case 0x2469e4u: goto label_2469e4;
        case 0x2469e8u: goto label_2469e8;
        case 0x2469ecu: goto label_2469ec;
        case 0x2469f0u: goto label_2469f0;
        case 0x2469f4u: goto label_2469f4;
        case 0x2469f8u: goto label_2469f8;
        case 0x2469fcu: goto label_2469fc;
        case 0x246a00u: goto label_246a00;
        case 0x246a04u: goto label_246a04;
        case 0x246a08u: goto label_246a08;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a10u: goto label_246a10;
        case 0x246a14u: goto label_246a14;
        case 0x246a18u: goto label_246a18;
        case 0x246a1cu: goto label_246a1c;
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        case 0x246b08u: goto label_246b08;
        case 0x246b0cu: goto label_246b0c;
        case 0x246b10u: goto label_246b10;
        case 0x246b14u: goto label_246b14;
        case 0x246b18u: goto label_246b18;
        case 0x246b1cu: goto label_246b1c;
        case 0x246b20u: goto label_246b20;
        case 0x246b24u: goto label_246b24;
        case 0x246b28u: goto label_246b28;
        case 0x246b2cu: goto label_246b2c;
        case 0x246b30u: goto label_246b30;
        case 0x246b34u: goto label_246b34;
        case 0x246b38u: goto label_246b38;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b40u: goto label_246b40;
        case 0x246b44u: goto label_246b44;
        case 0x246b48u: goto label_246b48;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b50u: goto label_246b50;
        case 0x246b54u: goto label_246b54;
        case 0x246b58u: goto label_246b58;
        case 0x246b5cu: goto label_246b5c;
        case 0x246b60u: goto label_246b60;
        case 0x246b64u: goto label_246b64;
        case 0x246b68u: goto label_246b68;
        case 0x246b6cu: goto label_246b6c;
        case 0x246b70u: goto label_246b70;
        case 0x246b74u: goto label_246b74;
        case 0x246b78u: goto label_246b78;
        case 0x246b7cu: goto label_246b7c;
        case 0x246b80u: goto label_246b80;
        case 0x246b84u: goto label_246b84;
        case 0x246b88u: goto label_246b88;
        case 0x246b8cu: goto label_246b8c;
        case 0x246b90u: goto label_246b90;
        case 0x246b94u: goto label_246b94;
        case 0x246b98u: goto label_246b98;
        case 0x246b9cu: goto label_246b9c;
        case 0x246ba0u: goto label_246ba0;
        case 0x246ba4u: goto label_246ba4;
        case 0x246ba8u: goto label_246ba8;
        case 0x246bacu: goto label_246bac;
        case 0x246bb0u: goto label_246bb0;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bb8u: goto label_246bb8;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bc0u: goto label_246bc0;
        case 0x246bc4u: goto label_246bc4;
        case 0x246bc8u: goto label_246bc8;
        case 0x246bccu: goto label_246bcc;
        case 0x246bd0u: goto label_246bd0;
        case 0x246bd4u: goto label_246bd4;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bdcu: goto label_246bdc;
        case 0x246be0u: goto label_246be0;
        case 0x246be4u: goto label_246be4;
        case 0x246be8u: goto label_246be8;
        case 0x246becu: goto label_246bec;
        case 0x246bf0u: goto label_246bf0;
        case 0x246bf4u: goto label_246bf4;
        case 0x246bf8u: goto label_246bf8;
        case 0x246bfcu: goto label_246bfc;
        case 0x246c00u: goto label_246c00;
        case 0x246c04u: goto label_246c04;
        case 0x246c08u: goto label_246c08;
        case 0x246c0cu: goto label_246c0c;
        case 0x246c10u: goto label_246c10;
        case 0x246c14u: goto label_246c14;
        case 0x246c18u: goto label_246c18;
        case 0x246c1cu: goto label_246c1c;
        case 0x246c20u: goto label_246c20;
        case 0x246c24u: goto label_246c24;
        case 0x246c28u: goto label_246c28;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c30u: goto label_246c30;
        case 0x246c34u: goto label_246c34;
        case 0x246c38u: goto label_246c38;
        case 0x246c3cu: goto label_246c3c;
        case 0x246c40u: goto label_246c40;
        case 0x246c44u: goto label_246c44;
        case 0x246c48u: goto label_246c48;
        case 0x246c4cu: goto label_246c4c;
        case 0x246c50u: goto label_246c50;
        case 0x246c54u: goto label_246c54;
        case 0x246c58u: goto label_246c58;
        case 0x246c5cu: goto label_246c5c;
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246ddcu: goto label_246ddc;
        case 0x246de0u: goto label_246de0;
        case 0x246de4u: goto label_246de4;
        case 0x246de8u: goto label_246de8;
        case 0x246decu: goto label_246dec;
        case 0x246df0u: goto label_246df0;
        case 0x246df4u: goto label_246df4;
        case 0x246df8u: goto label_246df8;
        case 0x246dfcu: goto label_246dfc;
        case 0x246e00u: goto label_246e00;
        case 0x246e04u: goto label_246e04;
        case 0x246e08u: goto label_246e08;
        case 0x246e0cu: goto label_246e0c;
        case 0x246e10u: goto label_246e10;
        case 0x246e14u: goto label_246e14;
        case 0x246e18u: goto label_246e18;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e20u: goto label_246e20;
        case 0x246e24u: goto label_246e24;
        case 0x246e28u: goto label_246e28;
        case 0x246e2cu: goto label_246e2c;
        case 0x246e30u: goto label_246e30;
        case 0x246e34u: goto label_246e34;
        case 0x246e38u: goto label_246e38;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e40u: goto label_246e40;
        case 0x246e44u: goto label_246e44;
        case 0x246e48u: goto label_246e48;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e50u: goto label_246e50;
        case 0x246e54u: goto label_246e54;
        case 0x246e58u: goto label_246e58;
        case 0x246e5cu: goto label_246e5c;
        case 0x246e60u: goto label_246e60;
        case 0x246e64u: goto label_246e64;
        case 0x246e68u: goto label_246e68;
        case 0x246e6cu: goto label_246e6c;
        case 0x246e70u: goto label_246e70;
        case 0x246e74u: goto label_246e74;
        case 0x246e78u: goto label_246e78;
        case 0x246e7cu: goto label_246e7c;
        case 0x246e80u: goto label_246e80;
        case 0x246e84u: goto label_246e84;
        case 0x246e88u: goto label_246e88;
        case 0x246e8cu: goto label_246e8c;
        case 0x246e90u: goto label_246e90;
        case 0x246e94u: goto label_246e94;
        case 0x246e98u: goto label_246e98;
        case 0x246e9cu: goto label_246e9c;
        case 0x246ea0u: goto label_246ea0;
        case 0x246ea4u: goto label_246ea4;
        case 0x246ea8u: goto label_246ea8;
        case 0x246eacu: goto label_246eac;
        case 0x246eb0u: goto label_246eb0;
        case 0x246eb4u: goto label_246eb4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ec0u: goto label_246ec0;
        case 0x246ec4u: goto label_246ec4;
        case 0x246ec8u: goto label_246ec8;
        case 0x246eccu: goto label_246ecc;
        case 0x246ed0u: goto label_246ed0;
        case 0x246ed4u: goto label_246ed4;
        case 0x246ed8u: goto label_246ed8;
        case 0x246edcu: goto label_246edc;
        case 0x246ee0u: goto label_246ee0;
        case 0x246ee4u: goto label_246ee4;
        case 0x246ee8u: goto label_246ee8;
        case 0x246eecu: goto label_246eec;
        case 0x246ef0u: goto label_246ef0;
        case 0x246ef4u: goto label_246ef4;
        case 0x246ef8u: goto label_246ef8;
        case 0x246efcu: goto label_246efc;
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        case 0x246f0cu: goto label_246f0c;
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470bcu: goto label_2470bc;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470c4u: goto label_2470c4;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470d0u: goto label_2470d0;
        case 0x2470d4u: goto label_2470d4;
        case 0x2470d8u: goto label_2470d8;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e4u: goto label_2470e4;
        case 0x2470e8u: goto label_2470e8;
        case 0x2470ecu: goto label_2470ec;
        case 0x2470f0u: goto label_2470f0;
        case 0x2470f4u: goto label_2470f4;
        case 0x2470f8u: goto label_2470f8;
        case 0x2470fcu: goto label_2470fc;
        case 0x247100u: goto label_247100;
        case 0x247104u: goto label_247104;
        case 0x247108u: goto label_247108;
        case 0x24710cu: goto label_24710c;
        case 0x247110u: goto label_247110;
        case 0x247114u: goto label_247114;
        case 0x247118u: goto label_247118;
        case 0x24711cu: goto label_24711c;
        case 0x247120u: goto label_247120;
        case 0x247124u: goto label_247124;
        case 0x247128u: goto label_247128;
        case 0x24712cu: goto label_24712c;
        case 0x247130u: goto label_247130;
        case 0x247134u: goto label_247134;
        case 0x247138u: goto label_247138;
        case 0x24713cu: goto label_24713c;
        case 0x247140u: goto label_247140;
        case 0x247144u: goto label_247144;
        case 0x247148u: goto label_247148;
        case 0x24714cu: goto label_24714c;
        case 0x247150u: goto label_247150;
        case 0x247154u: goto label_247154;
        case 0x247158u: goto label_247158;
        case 0x24715cu: goto label_24715c;
        case 0x247160u: goto label_247160;
        case 0x247164u: goto label_247164;
        case 0x247168u: goto label_247168;
        case 0x24716cu: goto label_24716c;
        case 0x247170u: goto label_247170;
        case 0x247174u: goto label_247174;
        case 0x247178u: goto label_247178;
        case 0x24717cu: goto label_24717c;
        case 0x247180u: goto label_247180;
        case 0x247184u: goto label_247184;
        case 0x247188u: goto label_247188;
        case 0x24718cu: goto label_24718c;
        case 0x247190u: goto label_247190;
        case 0x247194u: goto label_247194;
        case 0x247198u: goto label_247198;
        case 0x24719cu: goto label_24719c;
        case 0x2471a0u: goto label_2471a0;
        case 0x2471a4u: goto label_2471a4;
        case 0x2471a8u: goto label_2471a8;
        case 0x2471acu: goto label_2471ac;
        case 0x2471b0u: goto label_2471b0;
        case 0x2471b4u: goto label_2471b4;
        case 0x2471b8u: goto label_2471b8;
        case 0x2471bcu: goto label_2471bc;
        case 0x2471c0u: goto label_2471c0;
        case 0x2471c4u: goto label_2471c4;
        case 0x2471c8u: goto label_2471c8;
        case 0x2471ccu: goto label_2471cc;
        case 0x2471d0u: goto label_2471d0;
        case 0x2471d4u: goto label_2471d4;
        case 0x2471d8u: goto label_2471d8;
        case 0x2471dcu: goto label_2471dc;
        case 0x2471e0u: goto label_2471e0;
        case 0x2471e4u: goto label_2471e4;
        case 0x2471e8u: goto label_2471e8;
        case 0x2471ecu: goto label_2471ec;
        case 0x2471f0u: goto label_2471f0;
        case 0x2471f4u: goto label_2471f4;
        case 0x2471f8u: goto label_2471f8;
        case 0x2471fcu: goto label_2471fc;
        case 0x247200u: goto label_247200;
        case 0x247204u: goto label_247204;
        case 0x247208u: goto label_247208;
        case 0x24720cu: goto label_24720c;
        case 0x247210u: goto label_247210;
        case 0x247214u: goto label_247214;
        case 0x247218u: goto label_247218;
        case 0x24721cu: goto label_24721c;
        case 0x247220u: goto label_247220;
        case 0x247224u: goto label_247224;
        case 0x247228u: goto label_247228;
        case 0x24722cu: goto label_24722c;
        case 0x247230u: goto label_247230;
        case 0x247234u: goto label_247234;
        case 0x247238u: goto label_247238;
        case 0x24723cu: goto label_24723c;
        case 0x247240u: goto label_247240;
        case 0x247244u: goto label_247244;
        case 0x247248u: goto label_247248;
        case 0x24724cu: goto label_24724c;
        case 0x247250u: goto label_247250;
        case 0x247254u: goto label_247254;
        case 0x247258u: goto label_247258;
        case 0x24725cu: goto label_24725c;
        case 0x247260u: goto label_247260;
        case 0x247264u: goto label_247264;
        case 0x247268u: goto label_247268;
        case 0x24726cu: goto label_24726c;
        case 0x247270u: goto label_247270;
        case 0x247274u: goto label_247274;
        case 0x247278u: goto label_247278;
        case 0x24727cu: goto label_24727c;
        case 0x247280u: goto label_247280;
        case 0x247284u: goto label_247284;
        case 0x247288u: goto label_247288;
        case 0x24728cu: goto label_24728c;
        case 0x247290u: goto label_247290;
        case 0x247294u: goto label_247294;
        case 0x247298u: goto label_247298;
        case 0x24729cu: goto label_24729c;
        case 0x2472a0u: goto label_2472a0;
        case 0x2472a4u: goto label_2472a4;
        case 0x2472a8u: goto label_2472a8;
        case 0x2472acu: goto label_2472ac;
        case 0x2472b0u: goto label_2472b0;
        case 0x2472b4u: goto label_2472b4;
        case 0x2472b8u: goto label_2472b8;
        case 0x2472bcu: goto label_2472bc;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472c4u: goto label_2472c4;
        case 0x2472c8u: goto label_2472c8;
        case 0x2472ccu: goto label_2472cc;
        case 0x2472d0u: goto label_2472d0;
        case 0x2472d4u: goto label_2472d4;
        case 0x2472d8u: goto label_2472d8;
        case 0x2472dcu: goto label_2472dc;
        case 0x2472e0u: goto label_2472e0;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472e8u: goto label_2472e8;
        case 0x2472ecu: goto label_2472ec;
        case 0x2472f0u: goto label_2472f0;
        case 0x2472f4u: goto label_2472f4;
        case 0x2472f8u: goto label_2472f8;
        case 0x2472fcu: goto label_2472fc;
        case 0x247300u: goto label_247300;
        case 0x247304u: goto label_247304;
        case 0x247308u: goto label_247308;
        case 0x24730cu: goto label_24730c;
        case 0x247310u: goto label_247310;
        case 0x247314u: goto label_247314;
        case 0x247318u: goto label_247318;
        case 0x24731cu: goto label_24731c;
        case 0x247320u: goto label_247320;
        case 0x247324u: goto label_247324;
        case 0x247328u: goto label_247328;
        case 0x24732cu: goto label_24732c;
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        case 0x247430u: goto label_247430;
        case 0x247434u: goto label_247434;
        case 0x247438u: goto label_247438;
        case 0x24743cu: goto label_24743c;
        case 0x247440u: goto label_247440;
        case 0x247444u: goto label_247444;
        case 0x247448u: goto label_247448;
        case 0x24744cu: goto label_24744c;
        case 0x247450u: goto label_247450;
        case 0x247454u: goto label_247454;
        case 0x247458u: goto label_247458;
        case 0x24745cu: goto label_24745c;
        case 0x247460u: goto label_247460;
        case 0x247464u: goto label_247464;
        case 0x247468u: goto label_247468;
        case 0x24746cu: goto label_24746c;
        case 0x247470u: goto label_247470;
        case 0x247474u: goto label_247474;
        case 0x247478u: goto label_247478;
        case 0x24747cu: goto label_24747c;
        case 0x247480u: goto label_247480;
        case 0x247484u: goto label_247484;
        case 0x247488u: goto label_247488;
        case 0x24748cu: goto label_24748c;
        case 0x247490u: goto label_247490;
        case 0x247494u: goto label_247494;
        case 0x247498u: goto label_247498;
        case 0x24749cu: goto label_24749c;
        case 0x2474a0u: goto label_2474a0;
        case 0x2474a4u: goto label_2474a4;
        case 0x2474a8u: goto label_2474a8;
        case 0x2474acu: goto label_2474ac;
        case 0x2474b0u: goto label_2474b0;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474b8u: goto label_2474b8;
        case 0x2474bcu: goto label_2474bc;
        case 0x2474c0u: goto label_2474c0;
        case 0x2474c4u: goto label_2474c4;
        case 0x2474c8u: goto label_2474c8;
        case 0x2474ccu: goto label_2474cc;
        case 0x2474d0u: goto label_2474d0;
        case 0x2474d4u: goto label_2474d4;
        case 0x2474d8u: goto label_2474d8;
        case 0x2474dcu: goto label_2474dc;
        case 0x2474e0u: goto label_2474e0;
        case 0x2474e4u: goto label_2474e4;
        case 0x2474e8u: goto label_2474e8;
        case 0x2474ecu: goto label_2474ec;
        case 0x2474f0u: goto label_2474f0;
        case 0x2474f4u: goto label_2474f4;
        case 0x2474f8u: goto label_2474f8;
        case 0x2474fcu: goto label_2474fc;
        case 0x247500u: goto label_247500;
        case 0x247504u: goto label_247504;
        case 0x247508u: goto label_247508;
        case 0x24750cu: goto label_24750c;
        case 0x247510u: goto label_247510;
        case 0x247514u: goto label_247514;
        case 0x247518u: goto label_247518;
        case 0x24751cu: goto label_24751c;
        case 0x247520u: goto label_247520;
        case 0x247524u: goto label_247524;
        case 0x247528u: goto label_247528;
        case 0x24752cu: goto label_24752c;
        case 0x247530u: goto label_247530;
        case 0x247534u: goto label_247534;
        case 0x247538u: goto label_247538;
        case 0x24753cu: goto label_24753c;
        case 0x247540u: goto label_247540;
        case 0x247544u: goto label_247544;
        case 0x247548u: goto label_247548;
        case 0x24754cu: goto label_24754c;
        case 0x247550u: goto label_247550;
        case 0x247554u: goto label_247554;
        case 0x247558u: goto label_247558;
        case 0x24755cu: goto label_24755c;
        case 0x247560u: goto label_247560;
        case 0x247564u: goto label_247564;
        case 0x247568u: goto label_247568;
        case 0x24756cu: goto label_24756c;
        case 0x247570u: goto label_247570;
        case 0x247574u: goto label_247574;
        case 0x247578u: goto label_247578;
        case 0x24757cu: goto label_24757c;
        case 0x247580u: goto label_247580;
        case 0x247584u: goto label_247584;
        case 0x247588u: goto label_247588;
        case 0x24758cu: goto label_24758c;
        case 0x247590u: goto label_247590;
        case 0x247594u: goto label_247594;
        case 0x247598u: goto label_247598;
        case 0x24759cu: goto label_24759c;
        case 0x2475a0u: goto label_2475a0;
        case 0x2475a4u: goto label_2475a4;
        case 0x2475a8u: goto label_2475a8;
        case 0x2475acu: goto label_2475ac;
        case 0x2475b0u: goto label_2475b0;
        case 0x2475b4u: goto label_2475b4;
        case 0x2475b8u: goto label_2475b8;
        case 0x2475bcu: goto label_2475bc;
        case 0x2475c0u: goto label_2475c0;
        case 0x2475c4u: goto label_2475c4;
        case 0x2475c8u: goto label_2475c8;
        case 0x2475ccu: goto label_2475cc;
        case 0x2475d0u: goto label_2475d0;
        case 0x2475d4u: goto label_2475d4;
        case 0x2475d8u: goto label_2475d8;
        case 0x2475dcu: goto label_2475dc;
        case 0x2475e0u: goto label_2475e0;
        case 0x2475e4u: goto label_2475e4;
        case 0x2475e8u: goto label_2475e8;
        case 0x2475ecu: goto label_2475ec;
        case 0x2475f0u: goto label_2475f0;
        case 0x2475f4u: goto label_2475f4;
        case 0x2475f8u: goto label_2475f8;
        case 0x2475fcu: goto label_2475fc;
        case 0x247600u: goto label_247600;
        case 0x247604u: goto label_247604;
        case 0x247608u: goto label_247608;
        case 0x24760cu: goto label_24760c;
        case 0x247610u: goto label_247610;
        case 0x247614u: goto label_247614;
        case 0x247618u: goto label_247618;
        case 0x24761cu: goto label_24761c;
        case 0x247620u: goto label_247620;
        case 0x247624u: goto label_247624;
        case 0x247628u: goto label_247628;
        case 0x24762cu: goto label_24762c;
        case 0x247630u: goto label_247630;
        case 0x247634u: goto label_247634;
        case 0x247638u: goto label_247638;
        case 0x24763cu: goto label_24763c;
        case 0x247640u: goto label_247640;
        case 0x247644u: goto label_247644;
        case 0x247648u: goto label_247648;
        case 0x24764cu: goto label_24764c;
        case 0x247650u: goto label_247650;
        case 0x247654u: goto label_247654;
        case 0x247658u: goto label_247658;
        case 0x24765cu: goto label_24765c;
        case 0x247660u: goto label_247660;
        case 0x247664u: goto label_247664;
        case 0x247668u: goto label_247668;
        case 0x24766cu: goto label_24766c;
        case 0x247670u: goto label_247670;
        case 0x247674u: goto label_247674;
        case 0x247678u: goto label_247678;
        case 0x24767cu: goto label_24767c;
        case 0x247680u: goto label_247680;
        case 0x247684u: goto label_247684;
        case 0x247688u: goto label_247688;
        case 0x24768cu: goto label_24768c;
        case 0x247690u: goto label_247690;
        case 0x247694u: goto label_247694;
        case 0x247698u: goto label_247698;
        case 0x24769cu: goto label_24769c;
        case 0x2476a0u: goto label_2476a0;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476a8u: goto label_2476a8;
        case 0x2476acu: goto label_2476ac;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476b8u: goto label_2476b8;
        case 0x2476bcu: goto label_2476bc;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476c4u: goto label_2476c4;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476ccu: goto label_2476cc;
        case 0x2476d0u: goto label_2476d0;
        case 0x2476d4u: goto label_2476d4;
        case 0x2476d8u: goto label_2476d8;
        case 0x2476dcu: goto label_2476dc;
        case 0x2476e0u: goto label_2476e0;
        case 0x2476e4u: goto label_2476e4;
        case 0x2476e8u: goto label_2476e8;
        case 0x2476ecu: goto label_2476ec;
        case 0x2476f0u: goto label_2476f0;
        case 0x2476f4u: goto label_2476f4;
        case 0x2476f8u: goto label_2476f8;
        case 0x2476fcu: goto label_2476fc;
        case 0x247700u: goto label_247700;
        case 0x247704u: goto label_247704;
        case 0x247708u: goto label_247708;
        case 0x24770cu: goto label_24770c;
        case 0x247710u: goto label_247710;
        case 0x247714u: goto label_247714;
        case 0x247718u: goto label_247718;
        case 0x24771cu: goto label_24771c;
        case 0x247720u: goto label_247720;
        case 0x247724u: goto label_247724;
        case 0x247728u: goto label_247728;
        case 0x24772cu: goto label_24772c;
        case 0x247730u: goto label_247730;
        case 0x247734u: goto label_247734;
        case 0x247738u: goto label_247738;
        case 0x24773cu: goto label_24773c;
        case 0x247740u: goto label_247740;
        case 0x247744u: goto label_247744;
        case 0x247748u: goto label_247748;
        case 0x24774cu: goto label_24774c;
        case 0x247750u: goto label_247750;
        case 0x247754u: goto label_247754;
        case 0x247758u: goto label_247758;
        case 0x24775cu: goto label_24775c;
        case 0x247760u: goto label_247760;
        case 0x247764u: goto label_247764;
        case 0x247768u: goto label_247768;
        case 0x24776cu: goto label_24776c;
        case 0x247770u: goto label_247770;
        case 0x247774u: goto label_247774;
        case 0x247778u: goto label_247778;
        case 0x24777cu: goto label_24777c;
        case 0x247780u: goto label_247780;
        case 0x247784u: goto label_247784;
        case 0x247788u: goto label_247788;
        case 0x24778cu: goto label_24778c;
        case 0x247790u: goto label_247790;
        case 0x247794u: goto label_247794;
        case 0x247798u: goto label_247798;
        case 0x24779cu: goto label_24779c;
        case 0x2477a0u: goto label_2477a0;
        case 0x2477a4u: goto label_2477a4;
        case 0x2477a8u: goto label_2477a8;
        case 0x2477acu: goto label_2477ac;
        case 0x2477b0u: goto label_2477b0;
        case 0x2477b4u: goto label_2477b4;
        case 0x2477b8u: goto label_2477b8;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477c0u: goto label_2477c0;
        case 0x2477c4u: goto label_2477c4;
        case 0x2477c8u: goto label_2477c8;
        case 0x2477ccu: goto label_2477cc;
        case 0x2477d0u: goto label_2477d0;
        case 0x2477d4u: goto label_2477d4;
        case 0x2477d8u: goto label_2477d8;
        case 0x2477dcu: goto label_2477dc;
        case 0x2477e0u: goto label_2477e0;
        case 0x2477e4u: goto label_2477e4;
        case 0x2477e8u: goto label_2477e8;
        case 0x2477ecu: goto label_2477ec;
        case 0x2477f0u: goto label_2477f0;
        case 0x2477f4u: goto label_2477f4;
        case 0x2477f8u: goto label_2477f8;
        case 0x2477fcu: goto label_2477fc;
        case 0x247800u: goto label_247800;
        case 0x247804u: goto label_247804;
        case 0x247808u: goto label_247808;
        case 0x24780cu: goto label_24780c;
        case 0x247810u: goto label_247810;
        case 0x247814u: goto label_247814;
        case 0x247818u: goto label_247818;
        case 0x24781cu: goto label_24781c;
        case 0x247820u: goto label_247820;
        case 0x247824u: goto label_247824;
        case 0x247828u: goto label_247828;
        case 0x24782cu: goto label_24782c;
        case 0x247830u: goto label_247830;
        case 0x247834u: goto label_247834;
        case 0x247838u: goto label_247838;
        case 0x24783cu: goto label_24783c;
        case 0x247840u: goto label_247840;
        case 0x247844u: goto label_247844;
        case 0x247848u: goto label_247848;
        case 0x24784cu: goto label_24784c;
        case 0x247850u: goto label_247850;
        case 0x247854u: goto label_247854;
        case 0x247858u: goto label_247858;
        case 0x24785cu: goto label_24785c;
        case 0x247860u: goto label_247860;
        case 0x247864u: goto label_247864;
        case 0x247868u: goto label_247868;
        case 0x24786cu: goto label_24786c;
        case 0x247870u: goto label_247870;
        case 0x247874u: goto label_247874;
        case 0x247878u: goto label_247878;
        case 0x24787cu: goto label_24787c;
        case 0x247880u: goto label_247880;
        case 0x247884u: goto label_247884;
        case 0x247888u: goto label_247888;
        case 0x24788cu: goto label_24788c;
        case 0x247890u: goto label_247890;
        case 0x247894u: goto label_247894;
        case 0x247898u: goto label_247898;
        case 0x24789cu: goto label_24789c;
        case 0x2478a0u: goto label_2478a0;
        case 0x2478a4u: goto label_2478a4;
        case 0x2478a8u: goto label_2478a8;
        case 0x2478acu: goto label_2478ac;
        case 0x2478b0u: goto label_2478b0;
        case 0x2478b4u: goto label_2478b4;
        case 0x2478b8u: goto label_2478b8;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        default: break;
    }

    ctx->pc = 0x245920u;

label_245920:
    // 0x245920: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x245920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_245924:
    // 0x245924: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x245924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_245928:
    // 0x245928: 0x7fb102b0  sq          $s1, 0x2B0($sp)
    ctx->pc = 0x245928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 17));
label_24592c:
    // 0x24592c: 0x2c6200cb  sltiu       $v0, $v1, 0xCB
    ctx->pc = 0x24592cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)203) ? 1 : 0);
label_245930:
    // 0x245930: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x245930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
label_245934:
    // 0x245934: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x245934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245938:
    // 0x245938: 0x7fb002c0  sq          $s0, 0x2C0($sp)
    ctx->pc = 0x245938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 16));
label_24593c:
    // 0x24593c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24593cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245940:
    // 0x245940: 0x7fb202a0  sq          $s2, 0x2A0($sp)
    ctx->pc = 0x245940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 18));
label_245944:
    // 0x245944: 0x7fb40280  sq          $s4, 0x280($sp)
    ctx->pc = 0x245944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 20));
label_245948:
    // 0x245948: 0x7fb50270  sq          $s5, 0x270($sp)
    ctx->pc = 0x245948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 21));
label_24594c:
    // 0x24594c: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x24594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
label_245950:
    // 0x245950: 0xe7b502d8  swc1        $f21, 0x2D8($sp)
    ctx->pc = 0x245950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_245954:
    // 0x245954: 0x104007f4  beqz        $v0, . + 4 + (0x7F4 << 2)
label_245958:
    if (ctx->pc == 0x245958u) {
        ctx->pc = 0x245958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245954u;
        // 0x245958: 0xe7b402d0  swc1        $f20, 0x2D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24595Cu;
        goto label_24595c;
    }
    ctx->pc = 0x245954u;
    {
        const bool branch_taken_0x245954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245954u;
        // 0x245958: 0xe7b402d0  swc1        $f20, 0x2D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245954) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x24595Cu;
label_24595c:
    // 0x24595c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x24595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_245960:
    // 0x245960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_245964:
    // 0x245964: 0x2442c980  addiu       $v0, $v0, -0x3680
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
label_245968:
    // 0x245968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24596c:
    // 0x24596c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245970:
    // 0x245970: 0x800008  jr          $a0
label_245974:
    if (ctx->pc == 0x245974u) {
        ctx->pc = 0x245978u;
        goto label_245978;
    }
    ctx->pc = 0x245970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245978u: goto label_245978;
            case 0x245A40u: goto label_245a40;
            case 0x245C64u: goto label_245c64;
            case 0x245D54u: goto label_245d54;
            case 0x245E28u: goto label_245e28;
            case 0x245EB0u: goto label_245eb0;
            case 0x245F0Cu: goto label_245f0c;
            case 0x2460B0u: goto label_2460b0;
            case 0x2469A4u: goto label_2469a4;
            case 0x2469D8u: goto label_2469d8;
            case 0x2469E8u: goto label_2469e8;
            case 0x246A38u: goto label_246a38;
            case 0x246A90u: goto label_246a90;
            case 0x246AE8u: goto label_246ae8;
            case 0x246B74u: goto label_246b74;
            case 0x246BA0u: goto label_246ba0;
            case 0x246BBCu: goto label_246bbc;
            case 0x246BD8u: goto label_246bd8;
            case 0x246BE8u: goto label_246be8;
            case 0x246C4Cu: goto label_246c4c;
            case 0x246D88u: goto label_246d88;
            case 0x246DF8u: goto label_246df8;
            case 0x246EE0u: goto label_246ee0;
            case 0x246FB8u: goto label_246fb8;
            case 0x24707Cu: goto label_24707c;
            case 0x247100u: goto label_247100;
            case 0x247184u: goto label_247184;
            case 0x2471C4u: goto label_2471c4;
            case 0x2471E0u: goto label_2471e0;
            case 0x247208u: goto label_247208;
            case 0x247220u: goto label_247220;
            case 0x247238u: goto label_247238;
            case 0x247700u: goto label_247700;
            case 0x247730u: goto label_247730;
            case 0x2477ECu: goto label_2477ec;
            case 0x2478D8u: goto label_2478d8;
            case 0x2478ECu: goto label_2478ec;
            case 0x247928u: goto label_247928;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245970u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245978u;
label_245978:
    // 0x245978: 0xc088e30  jal         func_2238C0
label_24597c:
    if (ctx->pc == 0x24597Cu) {
        ctx->pc = 0x24597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245978u;
        // 0x24597c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245980u;
        goto label_245980;
    }
    ctx->pc = 0x245978u;
    SET_GPR_U32(ctx, 31, 0x245980u);
    ctx->pc = 0x24597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245978u;
    // 0x24597c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x245978u, 0x245980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245980u;
label_245980:
    // 0x245980: 0x104007e9  beqz        $v0, . + 4 + (0x7E9 << 2)
label_245984:
    if (ctx->pc == 0x245984u) {
        ctx->pc = 0x245984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245980u;
        // 0x245984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245988u;
        goto label_245988;
    }
    ctx->pc = 0x245980u;
    {
        const bool branch_taken_0x245980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245980u;
        // 0x245984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245980) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x245988u;
label_245988:
    // 0x245988: 0xc0899aa  jal         func_2266A8
label_24598c:
    if (ctx->pc == 0x24598Cu) {
        ctx->pc = 0x24598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245988u;
        // 0x24598c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245990u;
        goto label_245990;
    }
    ctx->pc = 0x245988u;
    SET_GPR_U32(ctx, 31, 0x245990u);
    ctx->pc = 0x24598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245988u;
    // 0x24598c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x245988u, 0x245990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245990u;
label_245990:
    // 0x245990: 0xc0874fa  jal         func_21D3E8
label_245994:
    if (ctx->pc == 0x245994u) {
        ctx->pc = 0x245994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245990u;
        // 0x245994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245998u;
        goto label_245998;
    }
    ctx->pc = 0x245990u;
    SET_GPR_U32(ctx, 31, 0x245998u);
    ctx->pc = 0x245994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245990u;
    // 0x245994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x245990u, 0x245998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245998u;
label_245998:
    // 0x245998: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x245998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_24599c:
    // 0x24599c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2459a0:
    if (ctx->pc == 0x2459A0u) {
        ctx->pc = 0x2459A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24599Cu;
        // 0x2459a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459A4u;
        goto label_2459a4;
    }
    ctx->pc = 0x24599Cu;
    {
        const bool branch_taken_0x24599c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2459A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24599Cu;
        // 0x2459a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24599c) {
            ctx->pc = 0x2459A8u;
            goto label_2459a8;
        }
    }
    ctx->pc = 0x2459A4u;
label_2459a4:
    // 0x2459a4: 0xa26203ba  sb          $v0, 0x3BA($s3)
    ctx->pc = 0x2459a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 954), (uint8_t)GPR_U32(ctx, 2));
label_2459a8:
    // 0x2459a8: 0xc087502  jal         func_21D408
label_2459ac:
    if (ctx->pc == 0x2459ACu) {
        ctx->pc = 0x2459ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459A8u;
        // 0x2459ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459B0u;
        goto label_2459b0;
    }
    ctx->pc = 0x2459A8u;
    SET_GPR_U32(ctx, 31, 0x2459B0u);
    ctx->pc = 0x2459ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459A8u;
    // 0x2459ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2459A8u, 0x2459B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459B0u;
label_2459b0:
    // 0x2459b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2459b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2459b4:
    // 0x2459b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2459b8:
    // 0x2459b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2459b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2459bc:
    // 0x2459bc: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_2459c0:
    if (ctx->pc == 0x2459C0u) {
        ctx->pc = 0x2459C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459BCu;
        // 0x2459c0: 0x926203ba  lbu         $v0, 0x3BA($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 954)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459C4u;
        goto label_2459c4;
    }
    ctx->pc = 0x2459BCu;
    {
        const bool branch_taken_0x2459bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2459bc) {
            ctx->pc = 0x2459C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2459BCu;
            // 0x2459c0: 0x926203ba  lbu         $v0, 0x3BA($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 954)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2459DCu;
            goto label_2459dc;
        }
    }
    ctx->pc = 0x2459C4u;
label_2459c4:
    // 0x2459c4: 0xc0874fa  jal         func_21D3E8
label_2459c8:
    if (ctx->pc == 0x2459C8u) {
        ctx->pc = 0x2459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459C4u;
        // 0x2459c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459CCu;
        goto label_2459cc;
    }
    ctx->pc = 0x2459C4u;
    SET_GPR_U32(ctx, 31, 0x2459CCu);
    ctx->pc = 0x2459C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459C4u;
    // 0x2459c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2459C4u, 0x2459CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459CCu;
label_2459cc:
    // 0x2459cc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2459ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2459d0:
    // 0x2459d0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2459d4:
    if (ctx->pc == 0x2459D4u) {
        ctx->pc = 0x2459D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D0u;
        // 0x2459d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459D8u;
        goto label_2459d8;
    }
    ctx->pc = 0x2459D0u;
    {
        const bool branch_taken_0x2459d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D0u;
        // 0x2459d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459d0) {
            ctx->pc = 0x245A34u;
            goto label_245a34;
        }
    }
    ctx->pc = 0x2459D8u;
label_2459d8:
    // 0x2459d8: 0x926203ba  lbu         $v0, 0x3BA($s3)
    ctx->pc = 0x2459d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 954)));
label_2459dc:
    // 0x2459dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2459e0:
    if (ctx->pc == 0x2459E0u) {
        ctx->pc = 0x2459E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459DCu;
        // 0x2459e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459E4u;
        goto label_2459e4;
    }
    ctx->pc = 0x2459DCu;
    {
        const bool branch_taken_0x2459dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459DCu;
        // 0x2459e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459dc) {
            ctx->pc = 0x245A34u;
            goto label_245a34;
        }
    }
    ctx->pc = 0x2459E4u;
label_2459e4:
    // 0x2459e4: 0xc0874fa  jal         func_21D3E8
label_2459e8:
    if (ctx->pc == 0x2459E8u) {
        ctx->pc = 0x2459E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459E4u;
        // 0x2459e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459ECu;
        goto label_2459ec;
    }
    ctx->pc = 0x2459E4u;
    SET_GPR_U32(ctx, 31, 0x2459ECu);
    ctx->pc = 0x2459E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459E4u;
    // 0x2459e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2459E4u, 0x2459ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459ECu;
label_2459ec:
    // 0x2459ec: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2459ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2459f0:
    // 0x2459f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2459f4:
    if (ctx->pc == 0x2459F4u) {
        ctx->pc = 0x2459F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459F0u;
        // 0x2459f4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459F8u;
        goto label_2459f8;
    }
    ctx->pc = 0x2459F0u;
    {
        const bool branch_taken_0x2459f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459F0u;
        // 0x2459f4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459f0) {
            ctx->pc = 0x245A00u;
            goto label_245a00;
        }
    }
    ctx->pc = 0x2459F8u;
label_2459f8:
    // 0x2459f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2459fc:
    if (ctx->pc == 0x2459FCu) {
        ctx->pc = 0x2459FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459F8u;
        // 0x2459fc: 0x8e650380  lw          $a1, 0x380($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A00u;
        goto label_245a00;
    }
    ctx->pc = 0x2459F8u;
    {
        const bool branch_taken_0x2459f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459F8u;
        // 0x2459fc: 0x8e650380  lw          $a1, 0x380($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459f8) {
            ctx->pc = 0x245A18u;
            goto label_245a18;
        }
    }
    ctx->pc = 0x245A00u;
label_245a00:
    // 0x245a00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x245a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_245a04:
    // 0x245a04: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x245a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_245a08:
    // 0x245a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a0c:
    // 0x245a0c: 0xc0e409a  jal         func_390268
label_245a10:
    if (ctx->pc == 0x245A10u) {
        ctx->pc = 0x245A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A0Cu;
        // 0x245a10: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A14u;
        goto label_245a14;
    }
    ctx->pc = 0x245A0Cu;
    SET_GPR_U32(ctx, 31, 0x245A14u);
    ctx->pc = 0x245A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A0Cu;
    // 0x245a10: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x245A0Cu, 0x245A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A14u;
label_245a14:
    // 0x245a14: 0x8c450380  lw          $a1, 0x380($v0)
    ctx->pc = 0x245a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_245a18:
    // 0x245a18: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x245a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_245a1c:
    // 0x245a1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x245a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_245a20:
    // 0x245a20: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x245a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_245a24:
    // 0x245a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a28:
    // 0x245a28: 0xc10796c  jal         func_41E5B0
label_245a2c:
    if (ctx->pc == 0x245A2Cu) {
        ctx->pc = 0x245A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A28u;
        // 0x245a2c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A30u;
        goto label_245a30;
    }
    ctx->pc = 0x245A28u;
    SET_GPR_U32(ctx, 31, 0x245A30u);
    ctx->pc = 0x245A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A28u;
    // 0x245a2c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x245A28u, 0x245A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A30u;
label_245a30:
    // 0x245a30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x245a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_245a34:
    // 0x245a34: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x245a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_245a38:
    // 0x245a38: 0x100007bb  b           . + 4 + (0x7BB << 2)
label_245a3c:
    if (ctx->pc == 0x245A3Cu) {
        ctx->pc = 0x245A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A38u;
        // 0x245a3c: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A40u;
        goto label_245a40;
    }
    ctx->pc = 0x245A38u;
    {
        const bool branch_taken_0x245a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A38u;
        // 0x245a3c: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a38) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x245A40u;
label_245a40:
    // 0x245a40: 0xc0ea146  jal         func_3A8518
label_245a44:
    if (ctx->pc == 0x245A44u) {
        ctx->pc = 0x245A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A40u;
        // 0x245a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A48u;
        goto label_245a48;
    }
    ctx->pc = 0x245A40u;
    SET_GPR_U32(ctx, 31, 0x245A48u);
    ctx->pc = 0x245A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A40u;
    // 0x245a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x245A40u, 0x245A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A48u;
label_245a48:
    // 0x245a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245a4c:
    // 0x245a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a50:
    // 0x245a50: 0xc0ea12a  jal         func_3A84A8
label_245a54:
    if (ctx->pc == 0x245A54u) {
        ctx->pc = 0x245A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A50u;
        // 0x245a54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A58u;
        goto label_245a58;
    }
    ctx->pc = 0x245A50u;
    SET_GPR_U32(ctx, 31, 0x245A58u);
    ctx->pc = 0x245A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A50u;
    // 0x245a54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x245A50u, 0x245A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A58u;
label_245a58:
    // 0x245a58: 0xc0ea13a  jal         func_3A84E8
label_245a5c:
    if (ctx->pc == 0x245A5Cu) {
        ctx->pc = 0x245A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A58u;
        // 0x245a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A60u;
        goto label_245a60;
    }
    ctx->pc = 0x245A58u;
    SET_GPR_U32(ctx, 31, 0x245A60u);
    ctx->pc = 0x245A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A58u;
    // 0x245a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x245A58u, 0x245A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A60u;
label_245a60:
    // 0x245a60: 0xc088e30  jal         func_2238C0
label_245a64:
    if (ctx->pc == 0x245A64u) {
        ctx->pc = 0x245A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A60u;
        // 0x245a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A68u;
        goto label_245a68;
    }
    ctx->pc = 0x245A60u;
    SET_GPR_U32(ctx, 31, 0x245A68u);
    ctx->pc = 0x245A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A60u;
    // 0x245a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x245A60u, 0x245A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A68u;
label_245a68:
    // 0x245a68: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_245a6c:
    if (ctx->pc == 0x245A6Cu) {
        ctx->pc = 0x245A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A68u;
        // 0x245a6c: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A70u;
        goto label_245a70;
    }
    ctx->pc = 0x245A68u;
    {
        const bool branch_taken_0x245a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A68u;
        // 0x245a6c: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a68) {
            ctx->pc = 0x245C48u;
            goto label_245c48;
        }
    }
    ctx->pc = 0x245A70u;
label_245a70:
    // 0x245a70: 0x8e62036c  lw          $v0, 0x36C($s3)
    ctx->pc = 0x245a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 876)));
label_245a74:
    // 0x245a74: 0xc0e4060  jal         func_390180
label_245a78:
    if (ctx->pc == 0x245A78u) {
        ctx->pc = 0x245A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A74u;
        // 0x245a78: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A7Cu;
        goto label_245a7c;
    }
    ctx->pc = 0x245A74u;
    SET_GPR_U32(ctx, 31, 0x245A7Cu);
    ctx->pc = 0x245A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A74u;
    // 0x245a78: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x245A74u, 0x245A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A7Cu;
label_245a7c:
    // 0x245a7c: 0xc0e6ee8  jal         func_39BBA0
label_245a80:
    if (ctx->pc == 0x245A80u) {
        ctx->pc = 0x245A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A7Cu;
        // 0x245a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A84u;
        goto label_245a84;
    }
    ctx->pc = 0x245A7Cu;
    SET_GPR_U32(ctx, 31, 0x245A84u);
    ctx->pc = 0x245A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A7Cu;
    // 0x245a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x245A7Cu, 0x245A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A84u;
label_245a84:
    // 0x245a84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a88:
    // 0x245a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x245a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_245a8c:
    // 0x245a8c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_245a90:
    if (ctx->pc == 0x245A90u) {
        ctx->pc = 0x245A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A8Cu;
        // 0x245a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A94u;
        goto label_245a94;
    }
    ctx->pc = 0x245A8Cu;
    {
        const bool branch_taken_0x245a8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x245A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A8Cu;
        // 0x245a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a8c) {
            ctx->pc = 0x245AA4u;
            goto label_245aa4;
        }
    }
    ctx->pc = 0x245A94u;
label_245a94:
    // 0x245a94: 0xc0899aa  jal         func_2266A8
label_245a98:
    if (ctx->pc == 0x245A98u) {
        ctx->pc = 0x245A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A94u;
        // 0x245a98: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A9Cu;
        goto label_245a9c;
    }
    ctx->pc = 0x245A94u;
    SET_GPR_U32(ctx, 31, 0x245A9Cu);
    ctx->pc = 0x245A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A94u;
    // 0x245a98: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x245A94u, 0x245A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A9Cu;
label_245a9c:
    // 0x245a9c: 0x100007a3  b           . + 4 + (0x7A3 << 2)
label_245aa0:
    if (ctx->pc == 0x245AA0u) {
        ctx->pc = 0x245AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A9Cu;
        // 0x245aa0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AA4u;
        goto label_245aa4;
    }
    ctx->pc = 0x245A9Cu;
    {
        const bool branch_taken_0x245a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A9Cu;
        // 0x245aa0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a9c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245AA4u;
label_245aa4:
    // 0x245aa4: 0x10c007a0  beqz        $a2, . + 4 + (0x7A0 << 2)
label_245aa8:
    if (ctx->pc == 0x245AA8u) {
        ctx->pc = 0x245AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AA4u;
        // 0x245aa8: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AACu;
        goto label_245aac;
    }
    ctx->pc = 0x245AA4u;
    {
        const bool branch_taken_0x245aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AA4u;
        // 0x245aa8: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245aa4) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x245AACu;
label_245aac:
    // 0x245aac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x245aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_245ab0:
    // 0x245ab0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x245ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_245ab4:
    // 0x245ab4: 0x24514b00  addiu       $s1, $v0, 0x4B00
    ctx->pc = 0x245ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_245ab8:
    // 0x245ab8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x245ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_245abc:
    // 0x245abc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x245abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_245ac0:
    // 0x245ac0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x245ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_245ac4:
    // 0x245ac4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x245ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_245ac8:
    // 0x245ac8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x245ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_245acc:
    // 0x245acc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_245ad0:
    // 0x245ad0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x245ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_245ad4:
    // 0x245ad4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x245ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_245ad8:
    // 0x245ad8: 0x40f809  jalr        $v0
label_245adc:
    if (ctx->pc == 0x245ADCu) {
        ctx->pc = 0x245ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AD8u;
        // 0x245adc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AE0u;
        goto label_245ae0;
    }
    ctx->pc = 0x245AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245AE0u);
        ctx->pc = 0x245ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AD8u;
        // 0x245adc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245AD8u, 0x245AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245AE0u;
label_245ae0:
    // 0x245ae0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x245ae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245ae4:
    // 0x245ae4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x245ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_245ae8:
    // 0x245ae8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_245aec:
    // 0x245aec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x245aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_245af0:
    // 0x245af0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x245af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_245af4:
    // 0x245af4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x245af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_245af8:
    // 0x245af8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x245af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_245afc:
    // 0x245afc: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x245afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_245b00:
    // 0x245b00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245b04:
    // 0x245b04: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x245b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245b08:
    // 0x245b08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245b0c:
    // 0x245b0c: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x245b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_245b10:
    // 0x245b10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x245b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_245b14:
    // 0x245b14: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x245b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_245b18:
    // 0x245b18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x245b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_245b1c:
    // 0x245b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_245b20:
    // 0x245b20: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x245b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_245b24:
    // 0x245b24: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x245b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_245b28:
    // 0x245b28: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x245b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_245b2c:
    // 0x245b2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x245b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_245b30:
    // 0x245b30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x245b30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245b34:
    // 0x245b34: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x245b34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_245b38:
    // 0x245b38: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x245b38u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_245b3c:
    // 0x245b3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x245b3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_245b40:
    // 0x245b40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x245b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_245b44:
    // 0x245b44: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x245b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_245b48:
    // 0x245b48: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x245b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_245b4c:
    // 0x245b4c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x245b4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_245b50:
    // 0x245b50: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x245b50u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_245b54:
    // 0x245b54: 0x4a0003bf  vwaitq
    ctx->pc = 0x245b54u;
    // VWAITQ (Q already resolved in this runtime)
label_245b58:
    // 0x245b58: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x245b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_245b5c:
    // 0x245b5c: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x245b5cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_245b60:
    // 0x245b60: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x245b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_245b64:
    // 0x245b64: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x245b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_245b68:
    // 0x245b68: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x245b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
label_245b6c:
    // 0x245b6c: 0xc1036e2  jal         func_40DB88
label_245b70:
    if (ctx->pc == 0x245B70u) {
        ctx->pc = 0x245B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B6Cu;
        // 0x245b70: 0x7fa900a0  sq          $t1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B74u;
        goto label_245b74;
    }
    ctx->pc = 0x245B6Cu;
    SET_GPR_U32(ctx, 31, 0x245B74u);
    ctx->pc = 0x245B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B6Cu;
    // 0x245b70: 0x7fa900a0  sq          $t1, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x245B6Cu, 0x245B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B74u;
label_245b74:
    // 0x245b74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_245b78:
    // 0x245b78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_245b7c:
    if (ctx->pc == 0x245B7Cu) {
        ctx->pc = 0x245B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B78u;
        // 0x245b7c: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B80u;
        goto label_245b80;
    }
    ctx->pc = 0x245B78u;
    {
        const bool branch_taken_0x245b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B78u;
        // 0x245b7c: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b78) {
            ctx->pc = 0x245BFCu;
            goto label_245bfc;
        }
    }
    ctx->pc = 0x245B80u;
label_245b80:
    // 0x245b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245b84:
    // 0x245b84: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x245b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_245b88:
    // 0x245b88: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x245b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_245b8c:
    // 0x245b8c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x245b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_245b90:
    // 0x245b90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x245b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245b94:
    // 0x245b94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x245b94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_245b98:
    // 0x245b98: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x245b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_245b9c:
    // 0x245b9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x245b9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_245ba0:
    // 0x245ba0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x245ba0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_245ba4:
    // 0x245ba4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x245ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_245ba8:
    // 0x245ba8: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_245bac:
    // 0x245bac: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x245bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_245bb0:
    // 0x245bb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_245bb4:
    // 0x245bb4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x245bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_245bb8:
    // 0x245bb8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x245bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_245bbc:
    // 0x245bbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x245bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_245bc0:
    // 0x245bc0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x245bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_245bc4:
    // 0x245bc4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x245bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_245bc8:
    // 0x245bc8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x245bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245bcc:
    // 0x245bcc: 0xc08f4ae  jal         func_23D2B8
label_245bd0:
    if (ctx->pc == 0x245BD0u) {
        ctx->pc = 0x245BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BCCu;
        // 0x245bd0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BD4u;
        goto label_245bd4;
    }
    ctx->pc = 0x245BCCu;
    SET_GPR_U32(ctx, 31, 0x245BD4u);
    ctx->pc = 0x245BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BCCu;
    // 0x245bd0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x245BCCu, 0x245BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BD4u;
label_245bd4:
    // 0x245bd4: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x245bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_245bd8:
    // 0x245bd8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x245bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_245bdc:
    // 0x245bdc: 0xc0cd5ea  jal         func_3357A8
label_245be0:
    if (ctx->pc == 0x245BE0u) {
        ctx->pc = 0x245BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BDCu;
        // 0x245be0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BE4u;
        goto label_245be4;
    }
    ctx->pc = 0x245BDCu;
    SET_GPR_U32(ctx, 31, 0x245BE4u);
    ctx->pc = 0x245BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BDCu;
    // 0x245be0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x245BDCu, 0x245BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BE4u;
label_245be4:
    // 0x245be4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245be8:
    // 0x245be8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x245be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_245bec:
    // 0x245bec: 0xc08f3e2  jal         func_23CF88
label_245bf0:
    if (ctx->pc == 0x245BF0u) {
        ctx->pc = 0x245BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BECu;
        // 0x245bf0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BF4u;
        goto label_245bf4;
    }
    ctx->pc = 0x245BECu;
    SET_GPR_U32(ctx, 31, 0x245BF4u);
    ctx->pc = 0x245BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BECu;
    // 0x245bf0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x245BECu, 0x245BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BF4u;
label_245bf4:
    // 0x245bf4: 0x1000074d  b           . + 4 + (0x74D << 2)
label_245bf8:
    if (ctx->pc == 0x245BF8u) {
        ctx->pc = 0x245BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BF4u;
        // 0x245bf8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BFCu;
        goto label_245bfc;
    }
    ctx->pc = 0x245BF4u;
    {
        const bool branch_taken_0x245bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BF4u;
        // 0x245bf8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bf4) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245BFCu;
label_245bfc:
    // 0x245bfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x245bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_245c00:
    // 0x245c00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x245c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_245c04:
    // 0x245c04: 0xc136afa  jal         func_4DABE8
label_245c08:
    if (ctx->pc == 0x245C08u) {
        ctx->pc = 0x245C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C04u;
        // 0x245c08: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C0Cu;
        goto label_245c0c;
    }
    ctx->pc = 0x245C04u;
    SET_GPR_U32(ctx, 31, 0x245C0Cu);
    ctx->pc = 0x245C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C04u;
    // 0x245c08: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x245C04u, 0x245C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C0Cu;
label_245c0c:
    // 0x245c0c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x245c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_245c10:
    // 0x245c10: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x245c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_245c14:
    // 0x245c14: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x245c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_245c18:
    // 0x245c18: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x245c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_245c1c:
    // 0x245c1c: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x245c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_245c20:
    // 0x245c20: 0xc0cd5ea  jal         func_3357A8
label_245c24:
    if (ctx->pc == 0x245C24u) {
        ctx->pc = 0x245C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C20u;
        // 0x245c24: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C28u;
        goto label_245c28;
    }
    ctx->pc = 0x245C20u;
    SET_GPR_U32(ctx, 31, 0x245C28u);
    ctx->pc = 0x245C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C20u;
    // 0x245c24: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x245C20u, 0x245C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C28u;
label_245c28:
    // 0x245c28: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_245c2c:
    // 0x245c2c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x245c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_245c30:
    // 0x245c30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x245c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_245c34:
    // 0x245c34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245c38:
    // 0x245c38: 0xc08f3e2  jal         func_23CF88
label_245c3c:
    if (ctx->pc == 0x245C3Cu) {
        ctx->pc = 0x245C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C38u;
        // 0x245c3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C40u;
        goto label_245c40;
    }
    ctx->pc = 0x245C38u;
    SET_GPR_U32(ctx, 31, 0x245C40u);
    ctx->pc = 0x245C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C38u;
    // 0x245c3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x245C38u, 0x245C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C40u;
label_245c40:
    // 0x245c40: 0x1000073a  b           . + 4 + (0x73A << 2)
label_245c44:
    if (ctx->pc == 0x245C44u) {
        ctx->pc = 0x245C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C40u;
        // 0x245c44: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C48u;
        goto label_245c48;
    }
    ctx->pc = 0x245C40u;
    {
        const bool branch_taken_0x245c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C40u;
        // 0x245c44: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c40) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245C48u;
label_245c48:
    // 0x245c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245c4c:
    // 0x245c4c: 0xc08997c  jal         func_2265F0
label_245c50:
    if (ctx->pc == 0x245C50u) {
        ctx->pc = 0x245C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C4Cu;
        // 0x245c50: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C54u;
        goto label_245c54;
    }
    ctx->pc = 0x245C4Cu;
    SET_GPR_U32(ctx, 31, 0x245C54u);
    ctx->pc = 0x245C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C4Cu;
    // 0x245c50: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x245C4Cu, 0x245C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C54u;
label_245c54:
    // 0x245c54: 0x50400734  beql        $v0, $zero, . + 4 + (0x734 << 2)
label_245c58:
    if (ctx->pc == 0x245C58u) {
        ctx->pc = 0x245C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C54u;
        // 0x245c58: 0xae700344  sw          $s0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C5Cu;
        goto label_245c5c;
    }
    ctx->pc = 0x245C54u;
    {
        const bool branch_taken_0x245c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c54) {
            ctx->pc = 0x245C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C54u;
            // 0x245c58: 0xae700344  sw          $s0, 0x344($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x245C5Cu;
label_245c5c:
    // 0x245c5c: 0x10000733  b           . + 4 + (0x733 << 2)
label_245c60:
    if (ctx->pc == 0x245C60u) {
        ctx->pc = 0x245C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C5Cu;
        // 0x245c60: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C64u;
        goto label_245c64;
    }
    ctx->pc = 0x245C5Cu;
    {
        const bool branch_taken_0x245c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C5Cu;
        // 0x245c60: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c5c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245C64u;
label_245c64:
    // 0x245c64: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x245c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_245c68:
    // 0x245c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245c6c:
    // 0x245c6c: 0xc0ea12a  jal         func_3A84A8
label_245c70:
    if (ctx->pc == 0x245C70u) {
        ctx->pc = 0x245C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C6Cu;
        // 0x245c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C74u;
        goto label_245c74;
    }
    ctx->pc = 0x245C6Cu;
    SET_GPR_U32(ctx, 31, 0x245C74u);
    ctx->pc = 0x245C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C6Cu;
    // 0x245c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x245C6Cu, 0x245C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C74u;
label_245c74:
    // 0x245c74: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x245c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245c78:
    // 0x245c78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245c7c:
    // 0x245c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245c80:
    // 0x245c80: 0xc0ea12a  jal         func_3A84A8
label_245c84:
    if (ctx->pc == 0x245C84u) {
        ctx->pc = 0x245C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C80u;
        // 0x245c84: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C88u;
        goto label_245c88;
    }
    ctx->pc = 0x245C80u;
    SET_GPR_U32(ctx, 31, 0x245C88u);
    ctx->pc = 0x245C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C80u;
    // 0x245c84: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x245C80u, 0x245C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C88u;
label_245c88:
    // 0x245c88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x245c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245c8c:
    // 0x245c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245c90:
    // 0x245c90: 0xc0ea146  jal         func_3A8518
label_245c94:
    if (ctx->pc == 0x245C94u) {
        ctx->pc = 0x245C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C90u;
        // 0x245c94: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C98u;
        goto label_245c98;
    }
    ctx->pc = 0x245C90u;
    SET_GPR_U32(ctx, 31, 0x245C98u);
    ctx->pc = 0x245C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C90u;
    // 0x245c94: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x245C90u, 0x245C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C98u;
label_245c98:
    // 0x245c98: 0xc0ea146  jal         func_3A8518
label_245c9c:
    if (ctx->pc == 0x245C9Cu) {
        ctx->pc = 0x245C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C98u;
        // 0x245c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CA0u;
        goto label_245ca0;
    }
    ctx->pc = 0x245C98u;
    SET_GPR_U32(ctx, 31, 0x245CA0u);
    ctx->pc = 0x245C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C98u;
    // 0x245c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x245C98u, 0x245CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CA0u;
label_245ca0:
    // 0x245ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245ca4:
    // 0x245ca4: 0xc0ea14c  jal         func_3A8530
label_245ca8:
    if (ctx->pc == 0x245CA8u) {
        ctx->pc = 0x245CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CA4u;
        // 0x245ca8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CACu;
        goto label_245cac;
    }
    ctx->pc = 0x245CA4u;
    SET_GPR_U32(ctx, 31, 0x245CACu);
    ctx->pc = 0x245CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CA4u;
    // 0x245ca8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x245CA4u, 0x245CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CACu;
label_245cac:
    // 0x245cac: 0xc08a61a  jal         func_229868
label_245cb0:
    if (ctx->pc == 0x245CB0u) {
        ctx->pc = 0x245CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CACu;
        // 0x245cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CB4u;
        goto label_245cb4;
    }
    ctx->pc = 0x245CACu;
    SET_GPR_U32(ctx, 31, 0x245CB4u);
    ctx->pc = 0x245CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CACu;
    // 0x245cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x245CACu, 0x245CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CB4u;
label_245cb4:
    // 0x245cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245cb8:
    // 0x245cb8: 0xc0ea14c  jal         func_3A8530
label_245cbc:
    if (ctx->pc == 0x245CBCu) {
        ctx->pc = 0x245CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CB8u;
        // 0x245cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CC0u;
        goto label_245cc0;
    }
    ctx->pc = 0x245CB8u;
    SET_GPR_U32(ctx, 31, 0x245CC0u);
    ctx->pc = 0x245CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CB8u;
    // 0x245cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x245CB8u, 0x245CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CC0u;
label_245cc0:
    // 0x245cc0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x245cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_245cc4:
    // 0x245cc4: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_245cc8:
    // 0x245cc8: 0xc06c8f4  jal         func_1B23D0
label_245ccc:
    if (ctx->pc == 0x245CCCu) {
        ctx->pc = 0x245CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CC8u;
        // 0x245ccc: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CD0u;
        goto label_245cd0;
    }
    ctx->pc = 0x245CC8u;
    SET_GPR_U32(ctx, 31, 0x245CD0u);
    ctx->pc = 0x245CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CC8u;
    // 0x245ccc: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B23D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B23D0u, 0x245CC8u, 0x245CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CD0u;
label_245cd0:
    // 0x245cd0: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_245cd4:
    // 0x245cd4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x245cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_245cd8:
    // 0x245cd8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x245cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_245cdc:
    // 0x245cdc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x245cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245ce0:
    // 0x245ce0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x245ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_245ce4:
    // 0x245ce4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x245ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_245ce8:
    // 0x245ce8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x245ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_245cec:
    // 0x245cec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_245cf0:
    // 0x245cf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_245cf4:
    // 0x245cf4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x245cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245cf8:
    // 0x245cf8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x245cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_245cfc:
    // 0x245cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245d00:
    // 0x245d00: 0x0  nop
    ctx->pc = 0x245d00u;
    // NOP
label_245d04:
    // 0x245d04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_245d08:
    if (ctx->pc == 0x245D08u) {
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D0Cu;
        goto label_245d0c;
    }
    ctx->pc = 0x245D04u;
    {
        const bool branch_taken_0x245d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d04) {
            ctx->pc = 0x245D10u;
            goto label_245d10;
        }
    }
    ctx->pc = 0x245D0Cu;
label_245d0c:
    // 0x245d0c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x245d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245d10:
    // 0x245d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245d14:
    // 0x245d14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245d18:
    // 0x245d18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245d1c:
    // 0x245d1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x245d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245d20:
    // 0x245d20: 0xc0875a0  jal         func_21D680
label_245d24:
    if (ctx->pc == 0x245D24u) {
        ctx->pc = 0x245D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D20u;
        // 0x245d24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D28u;
        goto label_245d28;
    }
    ctx->pc = 0x245D20u;
    SET_GPR_U32(ctx, 31, 0x245D28u);
    ctx->pc = 0x245D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D20u;
    // 0x245d24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x245D20u, 0x245D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D28u;
label_245d28:
    // 0x245d28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x245d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_245d2c:
    // 0x245d2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245d30:
    // 0x245d30: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x245d30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245d34:
    // 0x245d34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x245d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_245d38:
    // 0x245d38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x245d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245d3c:
    // 0x245d3c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x245d3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_245d40:
    // 0x245d40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x245d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_245d44:
    // 0x245d44: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x245d44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_245d48:
    // 0x245d48: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x245d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_245d4c:
    // 0x245d4c: 0x100006f6  b           . + 4 + (0x6F6 << 2)
label_245d50:
    if (ctx->pc == 0x245D50u) {
        ctx->pc = 0x245D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D4Cu;
        // 0x245d50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D54u;
        goto label_245d54;
    }
    ctx->pc = 0x245D4Cu;
    {
        const bool branch_taken_0x245d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D4Cu;
        // 0x245d50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d4c) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x245D54u;
label_245d54:
    // 0x245d54: 0xc089c18  jal         func_227060
label_245d58:
    if (ctx->pc == 0x245D58u) {
        ctx->pc = 0x245D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D54u;
        // 0x245d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D5Cu;
        goto label_245d5c;
    }
    ctx->pc = 0x245D54u;
    SET_GPR_U32(ctx, 31, 0x245D5Cu);
    ctx->pc = 0x245D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D54u;
    // 0x245d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x245D54u, 0x245D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D5Cu;
label_245d5c:
    // 0x245d5c: 0xc0e57ce  jal         func_395F38
label_245d60:
    if (ctx->pc == 0x245D60u) {
        ctx->pc = 0x245D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D5Cu;
        // 0x245d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D64u;
        goto label_245d64;
    }
    ctx->pc = 0x245D5Cu;
    SET_GPR_U32(ctx, 31, 0x245D64u);
    ctx->pc = 0x245D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D5Cu;
    // 0x245d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x245D5Cu, 0x245D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D64u;
label_245d64:
    // 0x245d64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245d68:
    // 0x245d68: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_245d6c:
    if (ctx->pc == 0x245D6Cu) {
        ctx->pc = 0x245D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D68u;
        // 0x245d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D70u;
        goto label_245d70;
    }
    ctx->pc = 0x245D68u;
    {
        const bool branch_taken_0x245d68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D68u;
        // 0x245d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d68) {
            ctx->pc = 0x245DCCu;
            goto label_245dcc;
        }
    }
    ctx->pc = 0x245D70u;
label_245d70:
    // 0x245d70: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x245d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_245d74:
    // 0x245d74: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_245d78:
    // 0x245d78: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_245d7c:
    // 0x245d7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x245d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_245d80:
    // 0x245d80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x245d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_245d84:
    // 0x245d84: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x245d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_245d88:
    // 0x245d88: 0xc0e8b48  jal         func_3A2D20
label_245d8c:
    if (ctx->pc == 0x245D8Cu) {
        ctx->pc = 0x245D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D88u;
        // 0x245d8c: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D90u;
        goto label_245d90;
    }
    ctx->pc = 0x245D88u;
    SET_GPR_U32(ctx, 31, 0x245D90u);
    ctx->pc = 0x245D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D88u;
    // 0x245d8c: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x245D88u, 0x245D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D90u;
label_245d90:
    // 0x245d90: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x245d90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_245d94:
    // 0x245d94: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x245d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_245d98:
    // 0x245d98: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_245d9c:
    // 0x245d9c: 0xc0e8b58  jal         func_3A2D60
label_245da0:
    if (ctx->pc == 0x245DA0u) {
        ctx->pc = 0x245DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D9Cu;
        // 0x245da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DA4u;
        goto label_245da4;
    }
    ctx->pc = 0x245D9Cu;
    SET_GPR_U32(ctx, 31, 0x245DA4u);
    ctx->pc = 0x245DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D9Cu;
    // 0x245da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x245D9Cu, 0x245DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DA4u;
label_245da4:
    // 0x245da4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x245da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_245da8:
    // 0x245da8: 0xc0e8b58  jal         func_3A2D60
label_245dac:
    if (ctx->pc == 0x245DACu) {
        ctx->pc = 0x245DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DA8u;
        // 0x245dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DB0u;
        goto label_245db0;
    }
    ctx->pc = 0x245DA8u;
    SET_GPR_U32(ctx, 31, 0x245DB0u);
    ctx->pc = 0x245DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DA8u;
    // 0x245dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x245DA8u, 0x245DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DB0u;
label_245db0:
    // 0x245db0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x245db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_245db4:
    // 0x245db4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245db8:
    // 0x245db8: 0xc0e8b80  jal         func_3A2E00
label_245dbc:
    if (ctx->pc == 0x245DBCu) {
        ctx->pc = 0x245DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB8u;
        // 0x245dbc: 0x2406003e  addiu       $a2, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DC0u;
        goto label_245dc0;
    }
    ctx->pc = 0x245DB8u;
    SET_GPR_U32(ctx, 31, 0x245DC0u);
    ctx->pc = 0x245DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DB8u;
    // 0x245dbc: 0x2406003e  addiu       $a2, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x245DB8u, 0x245DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DC0u;
label_245dc0:
    // 0x245dc0: 0xc0e8b50  jal         func_3A2D40
label_245dc4:
    if (ctx->pc == 0x245DC4u) {
        ctx->pc = 0x245DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DC0u;
        // 0x245dc4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DC8u;
        goto label_245dc8;
    }
    ctx->pc = 0x245DC0u;
    SET_GPR_U32(ctx, 31, 0x245DC8u);
    ctx->pc = 0x245DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DC0u;
    // 0x245dc4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x245DC0u, 0x245DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DC8u;
label_245dc8:
    // 0x245dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245dcc:
    // 0x245dcc: 0xc089c20  jal         func_227080
label_245dd0:
    if (ctx->pc == 0x245DD0u) {
        ctx->pc = 0x245DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DCCu;
        // 0x245dd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DD4u;
        goto label_245dd4;
    }
    ctx->pc = 0x245DCCu;
    SET_GPR_U32(ctx, 31, 0x245DD4u);
    ctx->pc = 0x245DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DCCu;
    // 0x245dd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x245DCCu, 0x245DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DD4u;
label_245dd4:
    // 0x245dd4: 0xc0962a2  jal         func_258A88
label_245dd8:
    if (ctx->pc == 0x245DD8u) {
        ctx->pc = 0x245DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DD4u;
        // 0x245dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DDCu;
        goto label_245ddc;
    }
    ctx->pc = 0x245DD4u;
    SET_GPR_U32(ctx, 31, 0x245DDCu);
    ctx->pc = 0x245DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DD4u;
    // 0x245dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x245DD4u, 0x245DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DDCu;
label_245ddc:
    // 0x245ddc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x245ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_245de0:
    // 0x245de0: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x245de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
label_245de4:
    // 0x245de4: 0xc089974  jal         func_2265D0
label_245de8:
    if (ctx->pc == 0x245DE8u) {
        ctx->pc = 0x245DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DE4u;
        // 0x245de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DECu;
        goto label_245dec;
    }
    ctx->pc = 0x245DE4u;
    SET_GPR_U32(ctx, 31, 0x245DECu);
    ctx->pc = 0x245DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DE4u;
    // 0x245de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x245DE4u, 0x245DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DECu;
label_245dec:
    // 0x245dec: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x245decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_245df0:
    // 0x245df0: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x245df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
label_245df4:
    // 0x245df4: 0xc089988  jal         func_226620
label_245df8:
    if (ctx->pc == 0x245DF8u) {
        ctx->pc = 0x245DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DF4u;
        // 0x245df8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DFCu;
        goto label_245dfc;
    }
    ctx->pc = 0x245DF4u;
    SET_GPR_U32(ctx, 31, 0x245DFCu);
    ctx->pc = 0x245DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DF4u;
    // 0x245df8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x245DF4u, 0x245DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DFCu;
label_245dfc:
    // 0x245dfc: 0xc08a1a8  jal         func_2286A0
label_245e00:
    if (ctx->pc == 0x245E00u) {
        ctx->pc = 0x245E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DFCu;
        // 0x245e00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E04u;
        goto label_245e04;
    }
    ctx->pc = 0x245DFCu;
    SET_GPR_U32(ctx, 31, 0x245E04u);
    ctx->pc = 0x245E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DFCu;
    // 0x245e00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x245DFCu, 0x245E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E04u;
label_245e04:
    // 0x245e04: 0x1440038d  bnez        $v0, . + 4 + (0x38D << 2)
label_245e08:
    if (ctx->pc == 0x245E08u) {
        ctx->pc = 0x245E0Cu;
        goto label_245e0c;
    }
    ctx->pc = 0x245E04u;
    {
        const bool branch_taken_0x245e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e04) {
            ctx->pc = 0x246C3Cu;
            goto label_246c3c;
        }
    }
    ctx->pc = 0x245E0Cu;
label_245e0c:
    // 0x245e0c: 0xc08c6a0  jal         func_231A80
label_245e10:
    if (ctx->pc == 0x245E10u) {
        ctx->pc = 0x245E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E0Cu;
        // 0x245e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E14u;
        goto label_245e14;
    }
    ctx->pc = 0x245E0Cu;
    SET_GPR_U32(ctx, 31, 0x245E14u);
    ctx->pc = 0x245E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E0Cu;
    // 0x245e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x245E0Cu, 0x245E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E14u;
label_245e14:
    // 0x245e14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x245e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_245e18:
    // 0x245e18: 0x144306c4  bne         $v0, $v1, . + 4 + (0x6C4 << 2)
label_245e1c:
    if (ctx->pc == 0x245E1Cu) {
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E20u;
        goto label_245e20;
    }
    ctx->pc = 0x245E18u;
    {
        const bool branch_taken_0x245e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e18) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0x10000386  b           . + 4 + (0x386 << 2)
label_245e24:
    if (ctx->pc == 0x245E24u) {
        ctx->pc = 0x245E28u;
        goto label_245e28;
    }
    ctx->pc = 0x245E20u;
    {
        const bool branch_taken_0x245e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e20) {
            ctx->pc = 0x246C3Cu;
            goto label_246c3c;
        }
    }
    ctx->pc = 0x245E28u;
label_245e28:
    // 0x245e28: 0xc089f86  jal         func_227E18
label_245e2c:
    if (ctx->pc == 0x245E2Cu) {
        ctx->pc = 0x245E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E28u;
        // 0x245e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E30u;
        goto label_245e30;
    }
    ctx->pc = 0x245E28u;
    SET_GPR_U32(ctx, 31, 0x245E30u);
    ctx->pc = 0x245E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E28u;
    // 0x245e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x245E28u, 0x245E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E30u;
label_245e30:
    // 0x245e30: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_245e34:
    if (ctx->pc == 0x245E34u) {
        ctx->pc = 0x245E38u;
        goto label_245e38;
    }
    ctx->pc = 0x245E30u;
    {
        const bool branch_taken_0x245e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e30) {
            ctx->pc = 0x245E80u;
            goto label_245e80;
        }
    }
    ctx->pc = 0x245E38u;
label_245e38:
    // 0x245e38: 0xc089fac  jal         func_227EB0
label_245e3c:
    if (ctx->pc == 0x245E3Cu) {
        ctx->pc = 0x245E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E38u;
        // 0x245e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E40u;
        goto label_245e40;
    }
    ctx->pc = 0x245E38u;
    SET_GPR_U32(ctx, 31, 0x245E40u);
    ctx->pc = 0x245E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E38u;
    // 0x245e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x245E38u, 0x245E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E40u;
label_245e40:
    // 0x245e40: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_245e44:
    if (ctx->pc == 0x245E44u) {
        ctx->pc = 0x245E48u;
        goto label_245e48;
    }
    ctx->pc = 0x245E40u;
    {
        const bool branch_taken_0x245e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e40) {
            ctx->pc = 0x245E80u;
            goto label_245e80;
        }
    }
    ctx->pc = 0x245E48u;
label_245e48:
    // 0x245e48: 0xc089f76  jal         func_227DD8
label_245e4c:
    if (ctx->pc == 0x245E4Cu) {
        ctx->pc = 0x245E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E48u;
        // 0x245e4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E50u;
        goto label_245e50;
    }
    ctx->pc = 0x245E48u;
    SET_GPR_U32(ctx, 31, 0x245E50u);
    ctx->pc = 0x245E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E48u;
    // 0x245e4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x245E48u, 0x245E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E50u;
label_245e50:
    // 0x245e50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_245e54:
    if (ctx->pc == 0x245E54u) {
        ctx->pc = 0x245E58u;
        goto label_245e58;
    }
    ctx->pc = 0x245E50u;
    {
        const bool branch_taken_0x245e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e50) {
            ctx->pc = 0x245E80u;
            goto label_245e80;
        }
    }
    ctx->pc = 0x245E58u;
label_245e58:
    // 0x245e58: 0xc089f66  jal         func_227D98
label_245e5c:
    if (ctx->pc == 0x245E5Cu) {
        ctx->pc = 0x245E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E58u;
        // 0x245e5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E60u;
        goto label_245e60;
    }
    ctx->pc = 0x245E58u;
    SET_GPR_U32(ctx, 31, 0x245E60u);
    ctx->pc = 0x245E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E58u;
    // 0x245e5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x245E58u, 0x245E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E60u;
label_245e60:
    // 0x245e60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_245e64:
    if (ctx->pc == 0x245E64u) {
        ctx->pc = 0x245E68u;
        goto label_245e68;
    }
    ctx->pc = 0x245E60u;
    {
        const bool branch_taken_0x245e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e60) {
            ctx->pc = 0x245E80u;
            goto label_245e80;
        }
    }
    ctx->pc = 0x245E68u;
label_245e68:
    // 0x245e68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_245e6c:
    // 0x245e6c: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x245e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
label_245e70:
    // 0x245e70: 0xc089974  jal         func_2265D0
label_245e74:
    if (ctx->pc == 0x245E74u) {
        ctx->pc = 0x245E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E70u;
        // 0x245e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E78u;
        goto label_245e78;
    }
    ctx->pc = 0x245E70u;
    SET_GPR_U32(ctx, 31, 0x245E78u);
    ctx->pc = 0x245E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E70u;
    // 0x245e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x245E70u, 0x245E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E78u;
label_245e78:
    // 0x245e78: 0x100006ac  b           . + 4 + (0x6AC << 2)
label_245e7c:
    if (ctx->pc == 0x245E7Cu) {
        ctx->pc = 0x245E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E78u;
        // 0x245e7c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E80u;
        goto label_245e80;
    }
    ctx->pc = 0x245E78u;
    {
        const bool branch_taken_0x245e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E78u;
        // 0x245e7c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e78) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245E80u;
label_245e80:
    // 0x245e80: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x245e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_245e84:
    // 0x245e84: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x245e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_245e88:
    // 0x245e88: 0xc089988  jal         func_226620
label_245e8c:
    if (ctx->pc == 0x245E8Cu) {
        ctx->pc = 0x245E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E88u;
        // 0x245e8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E90u;
        goto label_245e90;
    }
    ctx->pc = 0x245E88u;
    SET_GPR_U32(ctx, 31, 0x245E90u);
    ctx->pc = 0x245E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E88u;
    // 0x245e8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x245E88u, 0x245E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E90u;
label_245e90:
    // 0x245e90: 0xc089fac  jal         func_227EB0
label_245e94:
    if (ctx->pc == 0x245E94u) {
        ctx->pc = 0x245E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E90u;
        // 0x245e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E98u;
        goto label_245e98;
    }
    ctx->pc = 0x245E90u;
    SET_GPR_U32(ctx, 31, 0x245E98u);
    ctx->pc = 0x245E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E90u;
    // 0x245e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x245E90u, 0x245E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E98u;
label_245e98:
    // 0x245e98: 0x104006a4  beqz        $v0, . + 4 + (0x6A4 << 2)
label_245e9c:
    if (ctx->pc == 0x245E9Cu) {
        ctx->pc = 0x245E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E98u;
        // 0x245e9c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EA0u;
        goto label_245ea0;
    }
    ctx->pc = 0x245E98u;
    {
        const bool branch_taken_0x245e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E98u;
        // 0x245e9c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e98) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245EA0u;
label_245ea0:
    // 0x245ea0: 0xc099d30  jal         func_2674C0
label_245ea4:
    if (ctx->pc == 0x245EA4u) {
        ctx->pc = 0x245EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EA0u;
        // 0x245ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EA8u;
        goto label_245ea8;
    }
    ctx->pc = 0x245EA0u;
    SET_GPR_U32(ctx, 31, 0x245EA8u);
    ctx->pc = 0x245EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EA0u;
    // 0x245ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2674C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2674C0u, 0x245EA0u, 0x245EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EA8u;
label_245ea8:
    // 0x245ea8: 0x100006a0  b           . + 4 + (0x6A0 << 2)
label_245eac:
    if (ctx->pc == 0x245EACu) {
        ctx->pc = 0x245EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EA8u;
        // 0x245eac: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EB0u;
        goto label_245eb0;
    }
    ctx->pc = 0x245EA8u;
    {
        const bool branch_taken_0x245ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EA8u;
        // 0x245eac: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ea8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x245EB0u;
label_245eb0:
    // 0x245eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245eb4:
    // 0x245eb4: 0xc089c04  jal         func_227010
label_245eb8:
    if (ctx->pc == 0x245EB8u) {
        ctx->pc = 0x245EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB4u;
        // 0x245eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EBCu;
        goto label_245ebc;
    }
    ctx->pc = 0x245EB4u;
    SET_GPR_U32(ctx, 31, 0x245EBCu);
    ctx->pc = 0x245EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EB4u;
    // 0x245eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227010u, 0x245EB4u, 0x245EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EBCu;
label_245ebc:
    // 0x245ebc: 0xc095018  jal         func_254060
label_245ec0:
    if (ctx->pc == 0x245EC0u) {
        ctx->pc = 0x245EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EBCu;
        // 0x245ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EC4u;
        goto label_245ec4;
    }
    ctx->pc = 0x245EBCu;
    SET_GPR_U32(ctx, 31, 0x245EC4u);
    ctx->pc = 0x245EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EBCu;
    // 0x245ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x245EBCu, 0x245EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EC4u;
label_245ec4:
    // 0x245ec4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x245ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245ec8:
    // 0x245ec8: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x245ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_245ecc:
    // 0x245ecc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x245eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_245ed0:
    // 0x245ed0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_245ed4:
    if (ctx->pc == 0x245ED4u) {
        ctx->pc = 0x245ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245ED0u;
        // 0x245ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245ED8u;
        goto label_245ed8;
    }
    ctx->pc = 0x245ED0u;
    {
        const bool branch_taken_0x245ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245ED0u;
        // 0x245ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ed0) {
            ctx->pc = 0x245EF0u;
            goto label_245ef0;
        }
    }
    ctx->pc = 0x245ED8u;
label_245ed8:
    // 0x245ed8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_245edc:
    if (ctx->pc == 0x245EDCu) {
        ctx->pc = 0x245EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245ED8u;
        // 0x245edc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EE0u;
        goto label_245ee0;
    }
    ctx->pc = 0x245ED8u;
    {
        const bool branch_taken_0x245ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245ED8u;
        // 0x245edc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ed8) {
            ctx->pc = 0x245EF0u;
            goto label_245ef0;
        }
    }
    ctx->pc = 0x245EE0u;
label_245ee0:
    // 0x245ee0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_245ee4:
    if (ctx->pc == 0x245EE4u) {
        ctx->pc = 0x245EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EE0u;
        // 0x245ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EE8u;
        goto label_245ee8;
    }
    ctx->pc = 0x245EE0u;
    {
        const bool branch_taken_0x245ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EE0u;
        // 0x245ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ee0) {
            ctx->pc = 0x245EF0u;
            goto label_245ef0;
        }
    }
    ctx->pc = 0x245EE8u;
label_245ee8:
    // 0x245ee8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_245eec:
    if (ctx->pc == 0x245EECu) {
        ctx->pc = 0x245EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EE8u;
        // 0x245eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EF0u;
        goto label_245ef0;
    }
    ctx->pc = 0x245EE8u;
    {
        const bool branch_taken_0x245ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x245EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EE8u;
        // 0x245eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ee8) {
            ctx->pc = 0x245EFCu;
            goto label_245efc;
        }
    }
    ctx->pc = 0x245EF0u;
label_245ef0:
    // 0x245ef0: 0xc094fca  jal         func_253F28
label_245ef4:
    if (ctx->pc == 0x245EF4u) {
        ctx->pc = 0x245EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EF0u;
        // 0x245ef4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EF8u;
        goto label_245ef8;
    }
    ctx->pc = 0x245EF0u;
    SET_GPR_U32(ctx, 31, 0x245EF8u);
    ctx->pc = 0x245EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EF0u;
    // 0x245ef4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x245EF0u, 0x245EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EF8u;
label_245ef8:
    // 0x245ef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245efc:
    // 0x245efc: 0xc089974  jal         func_2265D0
label_245f00:
    if (ctx->pc == 0x245F00u) {
        ctx->pc = 0x245F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EFCu;
        // 0x245f00: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F04u;
        goto label_245f04;
    }
    ctx->pc = 0x245EFCu;
    SET_GPR_U32(ctx, 31, 0x245F04u);
    ctx->pc = 0x245F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EFCu;
    // 0x245f00: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x245EFCu, 0x245F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F04u;
label_245f04:
    // 0x245f04: 0x100002a3  b           . + 4 + (0x2A3 << 2)
label_245f08:
    if (ctx->pc == 0x245F08u) {
        ctx->pc = 0x245F0Cu;
        goto label_245f0c;
    }
    ctx->pc = 0x245F04u;
    {
        const bool branch_taken_0x245f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f04) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x245F0Cu;
label_245f0c:
    // 0x245f0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245f10:
    // 0x245f10: 0xc08997c  jal         func_2265F0
label_245f14:
    if (ctx->pc == 0x245F14u) {
        ctx->pc = 0x245F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F10u;
        // 0x245f14: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F18u;
        goto label_245f18;
    }
    ctx->pc = 0x245F10u;
    SET_GPR_U32(ctx, 31, 0x245F18u);
    ctx->pc = 0x245F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F10u;
    // 0x245f14: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x245F10u, 0x245F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F18u;
label_245f18:
    // 0x245f18: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_245f1c:
    if (ctx->pc == 0x245F1Cu) {
        ctx->pc = 0x245F20u;
        goto label_245f20;
    }
    ctx->pc = 0x245F18u;
    {
        const bool branch_taken_0x245f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245f18) {
            ctx->pc = 0x2460A0u;
            goto label_2460a0;
        }
    }
    ctx->pc = 0x245F20u;
label_245f20:
    // 0x245f20: 0xc0ea14c  jal         func_3A8530
label_245f24:
    if (ctx->pc == 0x245F24u) {
        ctx->pc = 0x245F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F20u;
        // 0x245f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F28u;
        goto label_245f28;
    }
    ctx->pc = 0x245F20u;
    SET_GPR_U32(ctx, 31, 0x245F28u);
    ctx->pc = 0x245F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F20u;
    // 0x245f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x245F20u, 0x245F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F28u;
label_245f28:
    // 0x245f28: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_245f2c:
    // 0x245f2c: 0xc0e57ce  jal         func_395F38
label_245f30:
    if (ctx->pc == 0x245F30u) {
        ctx->pc = 0x245F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F2Cu;
        // 0x245f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F34u;
        goto label_245f34;
    }
    ctx->pc = 0x245F2Cu;
    SET_GPR_U32(ctx, 31, 0x245F34u);
    ctx->pc = 0x245F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F2Cu;
    // 0x245f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x245F2Cu, 0x245F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F34u;
label_245f34:
    // 0x245f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245f38:
    // 0x245f38: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x245f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_245f3c:
    // 0x245f3c: 0x96500112  lhu         $s0, 0x112($s2)
    ctx->pc = 0x245f3cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_245f40:
    // 0x245f40: 0xc0e44cc  jal         func_391330
label_245f44:
    if (ctx->pc == 0x245F44u) {
        ctx->pc = 0x245F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F40u;
        // 0x245f44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F48u;
        goto label_245f48;
    }
    ctx->pc = 0x245F40u;
    SET_GPR_U32(ctx, 31, 0x245F48u);
    ctx->pc = 0x245F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F40u;
    // 0x245f44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x245F40u, 0x245F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F48u;
label_245f48:
    // 0x245f48: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x245f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_245f4c:
    // 0x245f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x245f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245f50:
    // 0x245f50: 0xc0e44cc  jal         func_391330
label_245f54:
    if (ctx->pc == 0x245F54u) {
        ctx->pc = 0x245F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F50u;
        // 0x245f54: 0x80540065  lb          $s4, 0x65($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F58u;
        goto label_245f58;
    }
    ctx->pc = 0x245F50u;
    SET_GPR_U32(ctx, 31, 0x245F58u);
    ctx->pc = 0x245F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F50u;
    // 0x245f54: 0x80540065  lb          $s4, 0x65($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x245F50u, 0x245F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F58u;
label_245f58:
    // 0x245f58: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x245f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_245f5c:
    // 0x245f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x245f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245f60:
    // 0x245f60: 0xc0e44cc  jal         func_391330
label_245f64:
    if (ctx->pc == 0x245F64u) {
        ctx->pc = 0x245F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F60u;
        // 0x245f64: 0x80550087  lb          $s5, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F68u;
        goto label_245f68;
    }
    ctx->pc = 0x245F60u;
    SET_GPR_U32(ctx, 31, 0x245F68u);
    ctx->pc = 0x245F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F60u;
    // 0x245f64: 0x80550087  lb          $s5, 0x87($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x245F60u, 0x245F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F68u;
label_245f68:
    // 0x245f68: 0x80500086  lb          $s0, 0x86($v0)
    ctx->pc = 0x245f68u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_245f6c:
    // 0x245f6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245f70:
    // 0x245f70: 0xc089c20  jal         func_227080
label_245f74:
    if (ctx->pc == 0x245F74u) {
        ctx->pc = 0x245F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F70u;
        // 0x245f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F78u;
        goto label_245f78;
    }
    ctx->pc = 0x245F70u;
    SET_GPR_U32(ctx, 31, 0x245F78u);
    ctx->pc = 0x245F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F70u;
    // 0x245f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x245F70u, 0x245F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F78u;
label_245f78:
    // 0x245f78: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_245f7c:
    // 0x245f7c: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
label_245f80:
    if (ctx->pc == 0x245F80u) {
        ctx->pc = 0x245F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F7Cu;
        // 0x245f80: 0x2682fffb  addiu       $v0, $s4, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F84u;
        goto label_245f84;
    }
    ctx->pc = 0x245F7Cu;
    {
        const bool branch_taken_0x245f7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x245F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F7Cu;
        // 0x245f80: 0x2682fffb  addiu       $v0, $s4, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f7c) {
            ctx->pc = 0x245FF8u;
            goto label_245ff8;
        }
    }
    ctx->pc = 0x245F84u;
label_245f84:
    // 0x245f84: 0xc089000  jal         func_224000
label_245f88:
    if (ctx->pc == 0x245F88u) {
        ctx->pc = 0x245F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F84u;
        // 0x245f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F8Cu;
        goto label_245f8c;
    }
    ctx->pc = 0x245F84u;
    SET_GPR_U32(ctx, 31, 0x245F8Cu);
    ctx->pc = 0x245F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F84u;
    // 0x245f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x245F84u, 0x245F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F8Cu;
label_245f8c:
    // 0x245f8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_245f90:
    if (ctx->pc == 0x245F90u) {
        ctx->pc = 0x245F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F8Cu;
        // 0x245f90: 0x826201b0  lb          $v0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F94u;
        goto label_245f94;
    }
    ctx->pc = 0x245F8Cu;
    {
        const bool branch_taken_0x245f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f8c) {
            ctx->pc = 0x245F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245F8Cu;
            // 0x245f90: 0x826201b0  lb          $v0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245FA0u;
            goto label_245fa0;
        }
    }
    ctx->pc = 0x245F94u;
label_245f94:
    // 0x245f94: 0xc095fce  jal         func_257F38
label_245f98:
    if (ctx->pc == 0x245F98u) {
        ctx->pc = 0x245F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F94u;
        // 0x245f98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F9Cu;
        goto label_245f9c;
    }
    ctx->pc = 0x245F94u;
    SET_GPR_U32(ctx, 31, 0x245F9Cu);
    ctx->pc = 0x245F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F94u;
    // 0x245f98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x245F94u, 0x245F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F9Cu;
label_245f9c:
    // 0x245f9c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x245f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_245fa0:
    // 0x245fa0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x245fa0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_245fa4:
    // 0x245fa4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_245fa8:
    if (ctx->pc == 0x245FA8u) {
        ctx->pc = 0x245FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FA4u;
        // 0x245fa8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FACu;
        goto label_245fac;
    }
    ctx->pc = 0x245FA4u;
    {
        const bool branch_taken_0x245fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FA4u;
        // 0x245fa8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fa4) {
            ctx->pc = 0x246048u;
            goto label_246048;
        }
    }
    ctx->pc = 0x245FACu;
label_245fac:
    // 0x245fac: 0x9242010a  lbu         $v0, 0x10A($s2)
    ctx->pc = 0x245facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 266)));
label_245fb0:
    // 0x245fb0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_245fb4:
    if (ctx->pc == 0x245FB4u) {
        ctx->pc = 0x245FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FB0u;
        // 0x245fb4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FB8u;
        goto label_245fb8;
    }
    ctx->pc = 0x245FB0u;
    {
        const bool branch_taken_0x245fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FB0u;
        // 0x245fb4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fb0) {
            ctx->pc = 0x246048u;
            goto label_246048;
        }
    }
    ctx->pc = 0x245FB8u;
label_245fb8:
    // 0x245fb8: 0x9243010b  lbu         $v1, 0x10B($s2)
    ctx->pc = 0x245fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 267)));
label_245fbc:
    // 0x245fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x245fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245fc0:
    // 0x245fc0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x245fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_245fc4:
    // 0x245fc4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x245fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_245fc8:
    // 0x245fc8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_245fcc:
    if (ctx->pc == 0x245FCCu) {
        ctx->pc = 0x245FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FC8u;
        // 0x245fcc: 0xa245010a  sb          $a1, 0x10A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 266), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FD0u;
        goto label_245fd0;
    }
    ctx->pc = 0x245FC8u;
    {
        const bool branch_taken_0x245fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FC8u;
        // 0x245fcc: 0xa245010a  sb          $a1, 0x10A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 266), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fc8) {
            ctx->pc = 0x246044u;
            goto label_246044;
        }
    }
    ctx->pc = 0x245FD0u;
label_245fd0:
    // 0x245fd0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x245fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_245fd4:
    // 0x245fd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x245fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245fd8:
    // 0x245fd8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x245fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_245fdc:
    // 0x245fdc: 0xa2300a  movz        $a2, $a1, $v0
    ctx->pc = 0x245fdcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_245fe0:
    // 0x245fe0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x245fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_245fe4:
    // 0x245fe4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x245fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245fe8:
    // 0x245fe8: 0xc13b662  jal         func_4ED988
label_245fec:
    if (ctx->pc == 0x245FECu) {
        ctx->pc = 0x245FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FE8u;
        // 0x245fec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FF0u;
        goto label_245ff0;
    }
    ctx->pc = 0x245FE8u;
    SET_GPR_U32(ctx, 31, 0x245FF0u);
    ctx->pc = 0x245FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FE8u;
    // 0x245fec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x245FE8u, 0x245FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FF0u;
label_245ff0:
    // 0x245ff0: 0x10000015  b           . + 4 + (0x15 << 2)
label_245ff4:
    if (ctx->pc == 0x245FF4u) {
        ctx->pc = 0x245FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FF0u;
        // 0x245ff4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FF8u;
        goto label_245ff8;
    }
    ctx->pc = 0x245FF0u;
    {
        const bool branch_taken_0x245ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FF0u;
        // 0x245ff4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ff0) {
            ctx->pc = 0x246048u;
            goto label_246048;
        }
    }
    ctx->pc = 0x245FF8u;
label_245ff8:
    // 0x245ff8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x245ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_245ffc:
    // 0x245ffc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_246000:
    if (ctx->pc == 0x246000u) {
        ctx->pc = 0x246004u;
        goto label_246004;
    }
    ctx->pc = 0x245FFCu;
    {
        const bool branch_taken_0x245ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ffc) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x246004u;
label_246004:
    // 0x246004: 0xc08c6a0  jal         func_231A80
label_246008:
    if (ctx->pc == 0x246008u) {
        ctx->pc = 0x246008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246004u;
        // 0x246008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24600Cu;
        goto label_24600c;
    }
    ctx->pc = 0x246004u;
    SET_GPR_U32(ctx, 31, 0x24600Cu);
    ctx->pc = 0x246008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246004u;
    // 0x246008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x246004u, 0x24600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24600Cu;
label_24600c:
    // 0x24600c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_246010:
    // 0x246010: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_246014:
    if (ctx->pc == 0x246014u) {
        ctx->pc = 0x246018u;
        goto label_246018;
    }
    ctx->pc = 0x246010u;
    {
        const bool branch_taken_0x246010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246010) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x246018u;
label_246018:
    // 0x246018: 0xc08c6a0  jal         func_231A80
label_24601c:
    if (ctx->pc == 0x24601Cu) {
        ctx->pc = 0x24601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246018u;
        // 0x24601c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246020u;
        goto label_246020;
    }
    ctx->pc = 0x246018u;
    SET_GPR_U32(ctx, 31, 0x246020u);
    ctx->pc = 0x24601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246018u;
    // 0x24601c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x246018u, 0x246020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246020u;
label_246020:
    // 0x246020: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x246020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_246024:
    // 0x246024: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_246028:
    if (ctx->pc == 0x246028u) {
        ctx->pc = 0x246028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246024u;
        // 0x246028: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24602Cu;
        goto label_24602c;
    }
    ctx->pc = 0x246024u;
    {
        const bool branch_taken_0x246024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x246028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246024u;
        // 0x246028: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246024) {
            ctx->pc = 0x246048u;
            goto label_246048;
        }
    }
    ctx->pc = 0x24602Cu;
label_24602c:
    // 0x24602c: 0xc089bfc  jal         func_226FF0
label_246030:
    if (ctx->pc == 0x246030u) {
        ctx->pc = 0x246030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24602Cu;
        // 0x246030: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246034u;
        goto label_246034;
    }
    ctx->pc = 0x24602Cu;
    SET_GPR_U32(ctx, 31, 0x246034u);
    ctx->pc = 0x246030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24602Cu;
    // 0x246030: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x24602Cu, 0x246034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246034u;
label_246034:
    // 0x246034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246038:
    if (ctx->pc == 0x246038u) {
        ctx->pc = 0x246038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246034u;
        // 0x246038: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24603Cu;
        goto label_24603c;
    }
    ctx->pc = 0x246034u;
    {
        const bool branch_taken_0x246034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246034u;
        // 0x246038: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246034) {
            ctx->pc = 0x246048u;
            goto label_246048;
        }
    }
    ctx->pc = 0x24603Cu;
label_24603c:
    // 0x24603c: 0xc095fce  jal         func_257F38
label_246040:
    if (ctx->pc == 0x246040u) {
        ctx->pc = 0x246040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24603Cu;
        // 0x246040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246044u;
        goto label_246044;
    }
    ctx->pc = 0x24603Cu;
    SET_GPR_U32(ctx, 31, 0x246044u);
    ctx->pc = 0x246040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24603Cu;
    // 0x246040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x24603Cu, 0x246044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246044u;
label_246044:
    // 0x246044: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x246044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_246048:
    // 0x246048: 0x56020010  bnel        $s0, $v0, . + 4 + (0x10 << 2)
label_24604c:
    if (ctx->pc == 0x24604Cu) {
        ctx->pc = 0x24604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246048u;
        // 0x24604c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246050u;
        goto label_246050;
    }
    ctx->pc = 0x246048u;
    {
        const bool branch_taken_0x246048 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x246048) {
            ctx->pc = 0x24604Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246048u;
            // 0x24604c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24608Cu;
            goto label_24608c;
        }
    }
    ctx->pc = 0x246050u;
label_246050:
    // 0x246050: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x246050u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_246054:
    // 0x246054: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x246054u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_246058:
    // 0x246058: 0x10400633  beqz        $v0, . + 4 + (0x633 << 2)
label_24605c:
    if (ctx->pc == 0x24605Cu) {
        ctx->pc = 0x24605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246058u;
        // 0x24605c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246060u;
        goto label_246060;
    }
    ctx->pc = 0x246058u;
    {
        const bool branch_taken_0x246058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246058u;
        // 0x24605c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246058) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246060u;
label_246060:
    // 0x246060: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x246060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_246064:
    // 0x246064: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x246064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_246068:
    // 0x246068: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x246068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24606c:
    // 0x24606c: 0xc107908  jal         func_41E420
label_246070:
    if (ctx->pc == 0x246070u) {
        ctx->pc = 0x246070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24606Cu;
        // 0x246070: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246074u;
        goto label_246074;
    }
    ctx->pc = 0x24606Cu;
    SET_GPR_U32(ctx, 31, 0x246074u);
    ctx->pc = 0x246070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24606Cu;
    // 0x246070: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x24606Cu, 0x246074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246074u;
label_246074:
    // 0x246074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246078:
    // 0x246078: 0xc1077b4  jal         func_41DED0
label_24607c:
    if (ctx->pc == 0x24607Cu) {
        ctx->pc = 0x24607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246078u;
        // 0x24607c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246080u;
        goto label_246080;
    }
    ctx->pc = 0x246078u;
    SET_GPR_U32(ctx, 31, 0x246080u);
    ctx->pc = 0x24607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246078u;
    // 0x24607c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x246078u, 0x246080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246080u;
label_246080:
    // 0x246080: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x246080u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_246084:
    // 0x246084: 0x120004ea  beqz        $s0, . + 4 + (0x4EA << 2)
label_246088:
    if (ctx->pc == 0x246088u) {
        ctx->pc = 0x246088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246084u;
        // 0x246088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24608Cu;
        goto label_24608c;
    }
    ctx->pc = 0x246084u;
    {
        const bool branch_taken_0x246084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x246088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246084u;
        // 0x246088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246084) {
            ctx->pc = 0x247430u;
            goto label_247430;
        }
    }
    ctx->pc = 0x24608Cu;
label_24608c:
    // 0x24608c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24608cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246090:
    // 0x246090: 0xc09796a  jal         func_25E5A8
label_246094:
    if (ctx->pc == 0x246094u) {
        ctx->pc = 0x246094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246090u;
        // 0x246094: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246098u;
        goto label_246098;
    }
    ctx->pc = 0x246090u;
    SET_GPR_U32(ctx, 31, 0x246098u);
    ctx->pc = 0x246094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246090u;
    // 0x246094: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5A8u, 0x246090u, 0x246098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246098u;
label_246098:
    // 0x246098: 0x10000624  b           . + 4 + (0x624 << 2)
label_24609c:
    if (ctx->pc == 0x24609Cu) {
        ctx->pc = 0x24609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246098u;
        // 0x24609c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460A0u;
        goto label_2460a0;
    }
    ctx->pc = 0x246098u;
    {
        const bool branch_taken_0x246098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246098u;
        // 0x24609c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246098) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2460A0u;
label_2460a0:
    // 0x2460a0: 0xc0ea14c  jal         func_3A8530
label_2460a4:
    if (ctx->pc == 0x2460A4u) {
        ctx->pc = 0x2460A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460A0u;
        // 0x2460a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460A8u;
        goto label_2460a8;
    }
    ctx->pc = 0x2460A0u;
    SET_GPR_U32(ctx, 31, 0x2460A8u);
    ctx->pc = 0x2460A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460A0u;
    // 0x2460a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x2460A0u, 0x2460A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460A8u;
label_2460a8:
    // 0x2460a8: 0x10000620  b           . + 4 + (0x620 << 2)
label_2460ac:
    if (ctx->pc == 0x2460ACu) {
        ctx->pc = 0x2460ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460A8u;
        // 0x2460ac: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460B0u;
        goto label_2460b0;
    }
    ctx->pc = 0x2460A8u;
    {
        const bool branch_taken_0x2460a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460A8u;
        // 0x2460ac: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460a8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2460B0u;
label_2460b0:
    // 0x2460b0: 0xc0ea14c  jal         func_3A8530
label_2460b4:
    if (ctx->pc == 0x2460B4u) {
        ctx->pc = 0x2460B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460B0u;
        // 0x2460b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460B8u;
        goto label_2460b8;
    }
    ctx->pc = 0x2460B0u;
    SET_GPR_U32(ctx, 31, 0x2460B8u);
    ctx->pc = 0x2460B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460B0u;
    // 0x2460b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x2460B0u, 0x2460B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460B8u;
label_2460b8:
    // 0x2460b8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2460b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2460bc:
    // 0x2460bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2460bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2460c0:
    // 0x2460c0: 0xc0e57ce  jal         func_395F38
label_2460c4:
    if (ctx->pc == 0x2460C4u) {
        ctx->pc = 0x2460C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460C0u;
        // 0x2460c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460C8u;
        goto label_2460c8;
    }
    ctx->pc = 0x2460C0u;
    SET_GPR_U32(ctx, 31, 0x2460C8u);
    ctx->pc = 0x2460C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460C0u;
    // 0x2460c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2460C0u, 0x2460C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460C8u;
label_2460c8:
    // 0x2460c8: 0x94450112  lhu         $a1, 0x112($v0)
    ctx->pc = 0x2460c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_2460cc:
    // 0x2460cc: 0xc0e44cc  jal         func_391330
label_2460d0:
    if (ctx->pc == 0x2460D0u) {
        ctx->pc = 0x2460D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460CCu;
        // 0x2460d0: 0x8e242c04  lw          $a0, 0x2C04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460D4u;
        goto label_2460d4;
    }
    ctx->pc = 0x2460CCu;
    SET_GPR_U32(ctx, 31, 0x2460D4u);
    ctx->pc = 0x2460D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460CCu;
    // 0x2460d0: 0x8e242c04  lw          $a0, 0x2C04($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2460CCu, 0x2460D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460D4u;
label_2460d4:
    // 0x2460d4: 0x80500087  lb          $s0, 0x87($v0)
    ctx->pc = 0x2460d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_2460d8:
    // 0x2460d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2460d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2460dc:
    // 0x2460dc: 0xc089c20  jal         func_227080
label_2460e0:
    if (ctx->pc == 0x2460E0u) {
        ctx->pc = 0x2460E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460DCu;
        // 0x2460e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460E4u;
        goto label_2460e4;
    }
    ctx->pc = 0x2460DCu;
    SET_GPR_U32(ctx, 31, 0x2460E4u);
    ctx->pc = 0x2460E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460DCu;
    // 0x2460e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x2460DCu, 0x2460E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460E4u;
label_2460e4:
    // 0x2460e4: 0xc095018  jal         func_254060
label_2460e8:
    if (ctx->pc == 0x2460E8u) {
        ctx->pc = 0x2460E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460E4u;
        // 0x2460e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460ECu;
        goto label_2460ec;
    }
    ctx->pc = 0x2460E4u;
    SET_GPR_U32(ctx, 31, 0x2460ECu);
    ctx->pc = 0x2460E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460E4u;
    // 0x2460e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x2460E4u, 0x2460ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460ECu;
label_2460ec:
    // 0x2460ec: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_2460f0:
    if (ctx->pc == 0x2460F0u) {
        ctx->pc = 0x2460F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460ECu;
        // 0x2460f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460F4u;
        goto label_2460f4;
    }
    ctx->pc = 0x2460ECu;
    {
        const bool branch_taken_0x2460ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2460F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460ECu;
        // 0x2460f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460ec) {
            ctx->pc = 0x2460FCu;
            goto label_2460fc;
        }
    }
    ctx->pc = 0x2460F4u;
label_2460f4:
    // 0x2460f4: 0xc0887b4  jal         func_221ED0
label_2460f8:
    if (ctx->pc == 0x2460F8u) {
        ctx->pc = 0x2460F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460F4u;
        // 0x2460f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460FCu;
        goto label_2460fc;
    }
    ctx->pc = 0x2460F4u;
    SET_GPR_U32(ctx, 31, 0x2460FCu);
    ctx->pc = 0x2460F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460F4u;
    // 0x2460f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2460F4u, 0x2460FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460FCu;
label_2460fc:
    // 0x2460fc: 0xc0e57ce  jal         func_395F38
label_246100:
    if (ctx->pc == 0x246100u) {
        ctx->pc = 0x246100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460FCu;
        // 0x246100: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246104u;
        goto label_246104;
    }
    ctx->pc = 0x2460FCu;
    SET_GPR_U32(ctx, 31, 0x246104u);
    ctx->pc = 0x246100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460FCu;
    // 0x246100: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2460FCu, 0x246104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246104u;
label_246104:
    // 0x246104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246108:
    // 0x246108: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x246108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_24610c:
    // 0x24610c: 0xc0e44cc  jal         func_391330
label_246110:
    if (ctx->pc == 0x246110u) {
        ctx->pc = 0x246110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24610Cu;
        // 0x246110: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246114u;
        goto label_246114;
    }
    ctx->pc = 0x24610Cu;
    SET_GPR_U32(ctx, 31, 0x246114u);
    ctx->pc = 0x246110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24610Cu;
    // 0x246110: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24610Cu, 0x246114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246114u;
label_246114:
    // 0x246114: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
label_246118:
    if (ctx->pc == 0x246118u) {
        ctx->pc = 0x246118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246114u;
        // 0x246118: 0x80510086  lb          $s1, 0x86($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24611Cu;
        goto label_24611c;
    }
    ctx->pc = 0x246114u;
    {
        const bool branch_taken_0x246114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x246118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246114u;
        // 0x246118: 0x80510086  lb          $s1, 0x86($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246114) {
            ctx->pc = 0x24628Cu;
            goto label_24628c;
        }
    }
    ctx->pc = 0x24611Cu;
label_24611c:
    // 0x24611c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_246120:
    // 0x246120: 0x1222005a  beq         $s1, $v0, . + 4 + (0x5A << 2)
label_246124:
    if (ctx->pc == 0x246124u) {
        ctx->pc = 0x246124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246120u;
        // 0x246124: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246128u;
        goto label_246128;
    }
    ctx->pc = 0x246120u;
    {
        const bool branch_taken_0x246120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x246124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246120u;
        // 0x246124: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246120) {
            ctx->pc = 0x24628Cu;
            goto label_24628c;
        }
    }
    ctx->pc = 0x246128u;
label_246128:
    // 0x246128: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
label_24612c:
    if (ctx->pc == 0x24612Cu) {
        ctx->pc = 0x24612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246128u;
        // 0x24612c: 0x2623ffef  addiu       $v1, $s1, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246130u;
        goto label_246130;
    }
    ctx->pc = 0x246128u;
    {
        const bool branch_taken_0x246128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246128u;
        // 0x24612c: 0x2623ffef  addiu       $v1, $s1, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246128) {
            ctx->pc = 0x246290u;
            goto label_246290;
        }
    }
    ctx->pc = 0x246130u;
label_246130:
    // 0x246130: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x246130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_246134:
    // 0x246134: 0xa2000116  sb          $zero, 0x116($s0)
    ctx->pc = 0x246134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 278), (uint8_t)GPR_U32(ctx, 0));
label_246138:
    // 0x246138: 0xa200013c  sb          $zero, 0x13C($s0)
    ctx->pc = 0x246138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 316), (uint8_t)GPR_U32(ctx, 0));
label_24613c:
    // 0x24613c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_246140:
    // 0x246140: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x246140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_246144:
    // 0x246144: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x246144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_246148:
    // 0x246148: 0x40f809  jalr        $v0
label_24614c:
    if (ctx->pc == 0x24614Cu) {
        ctx->pc = 0x24614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246148u;
        // 0x24614c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246150u;
        goto label_246150;
    }
    ctx->pc = 0x246148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246150u);
        ctx->pc = 0x24614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246148u;
        // 0x24614c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246148u, 0x246150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246150u;
label_246150:
    // 0x246150: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_246154:
    if (ctx->pc == 0x246154u) {
        ctx->pc = 0x246154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246150u;
        // 0x246154: 0x2623ffef  addiu       $v1, $s1, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246158u;
        goto label_246158;
    }
    ctx->pc = 0x246150u;
    {
        const bool branch_taken_0x246150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246150u;
        // 0x246154: 0x2623ffef  addiu       $v1, $s1, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246150) {
            ctx->pc = 0x246290u;
            goto label_246290;
        }
    }
    ctx->pc = 0x246158u;
label_246158:
    // 0x246158: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x246158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24615c:
    // 0x24615c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x24615cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_246160:
    // 0x246160: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x246160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_246164:
    // 0x246164: 0x40f809  jalr        $v0
label_246168:
    if (ctx->pc == 0x246168u) {
        ctx->pc = 0x246168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246164u;
        // 0x246168: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24616Cu;
        goto label_24616c;
    }
    ctx->pc = 0x246164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24616Cu);
        ctx->pc = 0x246168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246164u;
        // 0x246168: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246164u, 0x24616Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24616Cu;
label_24616c:
    // 0x24616c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x24616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_246170:
    // 0x246170: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x246170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_246174:
    // 0x246174: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x246174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_246178:
    // 0x246178: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x246178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24617c:
    // 0x24617c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x24617cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_246180:
    // 0x246180: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x246180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_246184:
    // 0x246184: 0x40f809  jalr        $v0
label_246188:
    if (ctx->pc == 0x246188u) {
        ctx->pc = 0x246188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246184u;
        // 0x246188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24618Cu;
        goto label_24618c;
    }
    ctx->pc = 0x246184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24618Cu);
        ctx->pc = 0x246188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246184u;
        // 0x246188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246184u, 0x24618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24618Cu;
label_24618c:
    // 0x24618c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x24618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_246190:
    // 0x246190: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x246190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_246194:
    // 0x246194: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x246194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_246198:
    // 0x246198: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24619c:
    // 0x24619c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x24619cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_2461a0:
    // 0x2461a0: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x2461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_2461a4:
    // 0x2461a4: 0x40f809  jalr        $v0
label_2461a8:
    if (ctx->pc == 0x2461A8u) {
        ctx->pc = 0x2461A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461A4u;
        // 0x2461a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461ACu;
        goto label_2461ac;
    }
    ctx->pc = 0x2461A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2461ACu);
        ctx->pc = 0x2461A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461A4u;
        // 0x2461a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461A4u, 0x2461ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2461ACu;
label_2461ac:
    // 0x2461ac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2461acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2461b0:
    // 0x2461b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2461b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2461b4:
    // 0x2461b4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x2461b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_2461b8:
    // 0x2461b8: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x2461b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2461bc:
    // 0x2461bc: 0xc0f809  jalr        $a2
label_2461c0:
    if (ctx->pc == 0x2461C0u) {
        ctx->pc = 0x2461C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461BCu;
        // 0x2461c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461C4u;
        goto label_2461c4;
    }
    ctx->pc = 0x2461BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2461C4u);
        ctx->pc = 0x2461C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461BCu;
        // 0x2461c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461BCu, 0x2461C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2461C4u;
label_2461c4:
    // 0x2461c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2461c8:
    // 0x2461c8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2461c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2461cc:
    // 0x2461cc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2461d0:
    // 0x2461d0: 0x40f809  jalr        $v0
label_2461d4:
    if (ctx->pc == 0x2461D4u) {
        ctx->pc = 0x2461D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461D0u;
        // 0x2461d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461D8u;
        goto label_2461d8;
    }
    ctx->pc = 0x2461D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2461D8u);
        ctx->pc = 0x2461D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461D0u;
        // 0x2461d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461D0u, 0x2461D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2461D8u;
label_2461d8:
    // 0x2461d8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2461d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2461dc:
    // 0x2461dc: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2461dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_2461e0:
    // 0x2461e0: 0x3463df81  ori         $v1, $v1, 0xDF81
    ctx->pc = 0x2461e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57217);
label_2461e4:
    // 0x2461e4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2461e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2461e8:
    // 0x2461e8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x2461e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_2461ec:
    // 0x2461ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2461f0:
    // 0x2461f0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2461f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2461f4:
    // 0x2461f4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2461f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2461f8:
    // 0x2461f8: 0x40f809  jalr        $v0
label_2461fc:
    if (ctx->pc == 0x2461FCu) {
        ctx->pc = 0x2461FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461F8u;
        // 0x2461fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246200u;
        goto label_246200;
    }
    ctx->pc = 0x2461F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246200u);
        ctx->pc = 0x2461FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461F8u;
        // 0x2461fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461F8u, 0x246200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246200u;
label_246200:
    // 0x246200: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x246200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_246204:
    // 0x246204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246208:
    // 0x246208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x246208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24620c:
    // 0x24620c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246210:
    // 0x246210: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x246210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_246214:
    // 0x246214: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x246214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_246218:
    // 0x246218: 0x60f809  jalr        $v1
label_24621c:
    if (ctx->pc == 0x24621Cu) {
        ctx->pc = 0x24621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246218u;
        // 0x24621c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246220u;
        goto label_246220;
    }
    ctx->pc = 0x246218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x246220u);
        ctx->pc = 0x24621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246218u;
        // 0x24621c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246218u, 0x246220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246220u;
label_246220:
    // 0x246220: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x246220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246224:
    // 0x246224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246228:
    // 0x246228: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x246228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_24622c:
    // 0x24622c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_246230:
    // 0x246230: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x246230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_246234:
    // 0x246234: 0xc0f809  jalr        $a2
label_246238:
    if (ctx->pc == 0x246238u) {
        ctx->pc = 0x246238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246234u;
        // 0x246238: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24623Cu;
        goto label_24623c;
    }
    ctx->pc = 0x246234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24623Cu);
        ctx->pc = 0x246238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246234u;
        // 0x246238: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246234u, 0x24623Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24623Cu;
label_24623c:
    // 0x24623c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_246240:
    // 0x246240: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x246240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_246244:
    // 0x246244: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_246248:
    // 0x246248: 0x40f809  jalr        $v0
label_24624c:
    if (ctx->pc == 0x24624Cu) {
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246250u;
        goto label_246250;
    }
    ctx->pc = 0x246248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246250u);
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246248u, 0x246250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246250u;
label_246250:
    // 0x246250: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x246250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_246254:
    // 0x246254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246258:
    // 0x246258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x246258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24625c:
    // 0x24625c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24625cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246260:
    // 0x246260: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x246260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_246264:
    // 0x246264: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_246268:
    // 0x246268: 0x60f809  jalr        $v1
label_24626c:
    if (ctx->pc == 0x24626Cu) {
        ctx->pc = 0x24626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246268u;
        // 0x24626c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246270u;
        goto label_246270;
    }
    ctx->pc = 0x246268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x246270u);
        ctx->pc = 0x24626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246268u;
        // 0x24626c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246268u, 0x246270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246270u;
label_246270:
    // 0x246270: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x246270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246274:
    // 0x246274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246278:
    // 0x246278: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x246278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_24627c:
    // 0x24627c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_246280:
    // 0x246280: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x246280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_246284:
    // 0x246284: 0x60f809  jalr        $v1
label_246288:
    if (ctx->pc == 0x246288u) {
        ctx->pc = 0x246288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246284u;
        // 0x246288: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24628Cu;
        goto label_24628c;
    }
    ctx->pc = 0x246284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24628Cu);
        ctx->pc = 0x246288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246284u;
        // 0x246288: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246284u, 0x24628Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24628Cu;
label_24628c:
    // 0x24628c: 0x2623ffef  addiu       $v1, $s1, -0x11
    ctx->pc = 0x24628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967279));
label_246290:
    // 0x246290: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x246290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_246294:
    // 0x246294: 0x104001a7  beqz        $v0, . + 4 + (0x1A7 << 2)
label_246298:
    if (ctx->pc == 0x246298u) {
        ctx->pc = 0x246298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246294u;
        // 0x246298: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24629Cu;
        goto label_24629c;
    }
    ctx->pc = 0x246294u;
    {
        const bool branch_taken_0x246294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246294u;
        // 0x246298: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246294) {
            ctx->pc = 0x246934u;
            goto label_246934;
        }
    }
    ctx->pc = 0x24629Cu;
label_24629c:
    // 0x24629c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24629cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2462a0:
    // 0x2462a0: 0x2442ccb0  addiu       $v0, $v0, -0x3350
    ctx->pc = 0x2462a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954160));
label_2462a4:
    // 0x2462a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2462a8:
    // 0x2462a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2462ac:
    // 0x2462ac: 0x800008  jr          $a0
label_2462b0:
    if (ctx->pc == 0x2462B0u) {
        ctx->pc = 0x2462B4u;
        goto label_2462b4;
    }
    ctx->pc = 0x2462ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2462B4u: goto label_2462b4;
            case 0x24632Cu: goto label_24632c;
            case 0x2463A4u: goto label_2463a4;
            case 0x24641Cu: goto label_24641c;
            case 0x246494u: goto label_246494;
            case 0x246534u: goto label_246534;
            case 0x2465ACu: goto label_2465ac;
            case 0x246634u: goto label_246634;
            case 0x24668Cu: goto label_24668c;
            case 0x2466B4u: goto label_2466b4;
            case 0x2467F0u: goto label_2467f0;
            case 0x246868u: goto label_246868;
            case 0x2468FCu: goto label_2468fc;
            case 0x246934u: goto label_246934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2462B4u;
label_2462b4:
    // 0x2462b4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2462b8:
    // 0x2462b8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2462b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2462bc:
    // 0x2462bc: 0xc04444c  jal         func_111130
label_2462c0:
    if (ctx->pc == 0x2462C0u) {
        ctx->pc = 0x2462C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462BCu;
        // 0x2462c0: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462C4u;
        goto label_2462c4;
    }
    ctx->pc = 0x2462BCu;
    SET_GPR_U32(ctx, 31, 0x2462C4u);
    ctx->pc = 0x2462C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462BCu;
    // 0x2462c0: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x2462BCu, 0x2462C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462C4u;
label_2462c4:
    // 0x2462c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2462c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2462c8:
    // 0x2462c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2462c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2462cc:
    // 0x2462cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2462ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2462d0:
    // 0x2462d0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2462d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2462d4:
    // 0x2462d4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2462d8:
    // 0x2462d8: 0x40f809  jalr        $v0
label_2462dc:
    if (ctx->pc == 0x2462DCu) {
        ctx->pc = 0x2462DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462D8u;
        // 0x2462dc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462E0u;
        goto label_2462e0;
    }
    ctx->pc = 0x2462D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2462E0u);
        ctx->pc = 0x2462DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462D8u;
        // 0x2462dc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462D8u, 0x2462E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2462E0u;
label_2462e0:
    // 0x2462e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2462e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2462e4:
    // 0x2462e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2462e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2462e8:
    // 0x2462e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2462e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2462ec:
    // 0x2462ec: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x2462ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_2462f0:
    // 0x2462f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2462f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2462f4:
    // 0x2462f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2462f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2462f8:
    // 0x2462f8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2462f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2462fc:
    // 0x2462fc: 0xc043f74  jal         func_10FDD0
label_246300:
    if (ctx->pc == 0x246300u) {
        ctx->pc = 0x246300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462FCu;
        // 0x246300: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246304u;
        goto label_246304;
    }
    ctx->pc = 0x2462FCu;
    SET_GPR_U32(ctx, 31, 0x246304u);
    ctx->pc = 0x246300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462FCu;
    // 0x246300: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2462FCu, 0x246304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246304u;
label_246304:
    // 0x246304: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x246304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246308:
    // 0x246308: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24630c:
    // 0x24630c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_246310:
    // 0x246310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246314:
    // 0x246314: 0xc0e637e  jal         func_398DF8
label_246318:
    if (ctx->pc == 0x246318u) {
        ctx->pc = 0x246318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246314u;
        // 0x246318: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24631Cu;
        goto label_24631c;
    }
    ctx->pc = 0x246314u;
    SET_GPR_U32(ctx, 31, 0x24631Cu);
    ctx->pc = 0x246318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246314u;
    // 0x246318: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246314u, 0x24631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24631Cu;
label_24631c:
    // 0x24631c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24631cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_246320:
    // 0x246320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246324:
    // 0x246324: 0x1000017e  b           . + 4 + (0x17E << 2)
label_246328:
    if (ctx->pc == 0x246328u) {
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0x24a5c898  addiu       $a1, $a1, -0x3768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24632Cu;
        goto label_24632c;
    }
    ctx->pc = 0x246324u;
    {
        const bool branch_taken_0x246324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0x24a5c898  addiu       $a1, $a1, -0x3768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246324) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x24632Cu;
label_24632c:
    // 0x24632c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_246330:
    // 0x246330: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x246330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246334:
    // 0x246334: 0xc04444c  jal         func_111130
label_246338:
    if (ctx->pc == 0x246338u) {
        ctx->pc = 0x246338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246334u;
        // 0x246338: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24633Cu;
        goto label_24633c;
    }
    ctx->pc = 0x246334u;
    SET_GPR_U32(ctx, 31, 0x24633Cu);
    ctx->pc = 0x246338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246334u;
    // 0x246338: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x246334u, 0x24633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24633Cu;
label_24633c:
    // 0x24633c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x24633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_246340:
    // 0x246340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246344:
    // 0x246344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246348:
    // 0x246348: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x246348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_24634c:
    // 0x24634c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x24634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_246350:
    // 0x246350: 0x40f809  jalr        $v0
label_246354:
    if (ctx->pc == 0x246354u) {
        ctx->pc = 0x246354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246350u;
        // 0x246354: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246358u;
        goto label_246358;
    }
    ctx->pc = 0x246350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246358u);
        ctx->pc = 0x246354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246350u;
        // 0x246354: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246350u, 0x246358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246358u;
label_246358:
    // 0x246358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24635c:
    // 0x24635c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24635cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246360:
    // 0x246360: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x246360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246364:
    // 0x246364: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x246364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_246368:
    // 0x246368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24636c:
    // 0x24636c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246370:
    // 0x246370: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x246370u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246374:
    // 0x246374: 0xc043f74  jal         func_10FDD0
label_246378:
    if (ctx->pc == 0x246378u) {
        ctx->pc = 0x246378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246374u;
        // 0x246378: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24637Cu;
        goto label_24637c;
    }
    ctx->pc = 0x246374u;
    SET_GPR_U32(ctx, 31, 0x24637Cu);
    ctx->pc = 0x246378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246374u;
    // 0x246378: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x246374u, 0x24637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24637Cu;
label_24637c:
    // 0x24637c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246380:
    // 0x246380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246384:
    // 0x246384: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x246384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_246388:
    // 0x246388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24638c:
    // 0x24638c: 0xc0e637e  jal         func_398DF8
label_246390:
    if (ctx->pc == 0x246390u) {
        ctx->pc = 0x246390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24638Cu;
        // 0x246390: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246394u;
        goto label_246394;
    }
    ctx->pc = 0x24638Cu;
    SET_GPR_U32(ctx, 31, 0x246394u);
    ctx->pc = 0x246390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24638Cu;
    // 0x246390: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24638Cu, 0x246394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246394u;
label_246394:
    // 0x246394: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x246394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_246398:
    // 0x246398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24639c:
    // 0x24639c: 0x10000160  b           . + 4 + (0x160 << 2)
label_2463a0:
    if (ctx->pc == 0x2463A0u) {
        ctx->pc = 0x2463A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24639Cu;
        // 0x2463a0: 0x24a5c8a8  addiu       $a1, $a1, -0x3758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463A4u;
        goto label_2463a4;
    }
    ctx->pc = 0x24639Cu;
    {
        const bool branch_taken_0x24639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24639Cu;
        // 0x2463a0: 0x24a5c8a8  addiu       $a1, $a1, -0x3758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24639c) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x2463A4u;
label_2463a4:
    // 0x2463a4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2463a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2463a8:
    // 0x2463a8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2463a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2463ac:
    // 0x2463ac: 0xc04444c  jal         func_111130
label_2463b0:
    if (ctx->pc == 0x2463B0u) {
        ctx->pc = 0x2463B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463ACu;
        // 0x2463b0: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463B4u;
        goto label_2463b4;
    }
    ctx->pc = 0x2463ACu;
    SET_GPR_U32(ctx, 31, 0x2463B4u);
    ctx->pc = 0x2463B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463ACu;
    // 0x2463b0: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x2463ACu, 0x2463B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463B4u;
label_2463b4:
    // 0x2463b4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2463b8:
    // 0x2463b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2463b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2463bc:
    // 0x2463bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2463bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2463c0:
    // 0x2463c0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2463c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2463c4:
    // 0x2463c4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2463c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2463c8:
    // 0x2463c8: 0x40f809  jalr        $v0
label_2463cc:
    if (ctx->pc == 0x2463CCu) {
        ctx->pc = 0x2463CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463C8u;
        // 0x2463cc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463D0u;
        goto label_2463d0;
    }
    ctx->pc = 0x2463C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2463D0u);
        ctx->pc = 0x2463CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463C8u;
        // 0x2463cc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2463C8u, 0x2463D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2463D0u;
label_2463d0:
    // 0x2463d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2463d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2463d4:
    // 0x2463d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2463d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2463d8:
    // 0x2463d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2463d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2463dc:
    // 0x2463dc: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x2463dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_2463e0:
    // 0x2463e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2463e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2463e4:
    // 0x2463e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2463e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2463e8:
    // 0x2463e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2463e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2463ec:
    // 0x2463ec: 0xc043f74  jal         func_10FDD0
label_2463f0:
    if (ctx->pc == 0x2463F0u) {
        ctx->pc = 0x2463F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463ECu;
        // 0x2463f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463F4u;
        goto label_2463f4;
    }
    ctx->pc = 0x2463ECu;
    SET_GPR_U32(ctx, 31, 0x2463F4u);
    ctx->pc = 0x2463F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463ECu;
    // 0x2463f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2463ECu, 0x2463F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463F4u;
label_2463f4:
    // 0x2463f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2463f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2463f8:
    // 0x2463f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2463f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2463fc:
    // 0x2463fc: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x2463fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_246400:
    // 0x246400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246404:
    // 0x246404: 0xc0e637e  jal         func_398DF8
label_246408:
    if (ctx->pc == 0x246408u) {
        ctx->pc = 0x246408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246404u;
        // 0x246408: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24640Cu;
        goto label_24640c;
    }
    ctx->pc = 0x246404u;
    SET_GPR_U32(ctx, 31, 0x24640Cu);
    ctx->pc = 0x246408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246404u;
    // 0x246408: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246404u, 0x24640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24640Cu;
label_24640c:
    // 0x24640c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24640cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_246410:
    // 0x246410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246414:
    // 0x246414: 0x10000142  b           . + 4 + (0x142 << 2)
label_246418:
    if (ctx->pc == 0x246418u) {
        ctx->pc = 0x246418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246414u;
        // 0x246418: 0x24a5c8b8  addiu       $a1, $a1, -0x3748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24641Cu;
        goto label_24641c;
    }
    ctx->pc = 0x246414u;
    {
        const bool branch_taken_0x246414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246414u;
        // 0x246418: 0x24a5c8b8  addiu       $a1, $a1, -0x3748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246414) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x24641Cu;
label_24641c:
    // 0x24641c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x24641cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_246420:
    // 0x246420: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_246424:
    // 0x246424: 0xc04444c  jal         func_111130
label_246428:
    if (ctx->pc == 0x246428u) {
        ctx->pc = 0x246428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246424u;
        // 0x246428: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24642Cu;
        goto label_24642c;
    }
    ctx->pc = 0x246424u;
    SET_GPR_U32(ctx, 31, 0x24642Cu);
    ctx->pc = 0x246428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246424u;
    // 0x246428: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x246424u, 0x24642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24642Cu;
label_24642c:
    // 0x24642c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x24642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_246430:
    // 0x246430: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246434:
    // 0x246434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246438:
    // 0x246438: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x246438u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_24643c:
    // 0x24643c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x24643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_246440:
    // 0x246440: 0x40f809  jalr        $v0
label_246444:
    if (ctx->pc == 0x246444u) {
        ctx->pc = 0x246444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246440u;
        // 0x246444: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246448u;
        goto label_246448;
    }
    ctx->pc = 0x246440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246448u);
        ctx->pc = 0x246444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246440u;
        // 0x246444: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246440u, 0x246448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246448u;
label_246448:
    // 0x246448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24644c:
    // 0x24644c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24644cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246450:
    // 0x246450: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x246450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246454:
    // 0x246454: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x246454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_246458:
    // 0x246458: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24645c:
    // 0x24645c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246460:
    // 0x246460: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x246460u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246464:
    // 0x246464: 0xc043f74  jal         func_10FDD0
label_246468:
    if (ctx->pc == 0x246468u) {
        ctx->pc = 0x246468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246464u;
        // 0x246468: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24646Cu;
        goto label_24646c;
    }
    ctx->pc = 0x246464u;
    SET_GPR_U32(ctx, 31, 0x24646Cu);
    ctx->pc = 0x246468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246464u;
    // 0x246468: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x246464u, 0x24646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24646Cu;
label_24646c:
    // 0x24646c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246470:
    // 0x246470: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246474:
    // 0x246474: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x246474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_246478:
    // 0x246478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24647c:
    // 0x24647c: 0xc0e637e  jal         func_398DF8
label_246480:
    if (ctx->pc == 0x246480u) {
        ctx->pc = 0x246480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24647Cu;
        // 0x246480: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246484u;
        goto label_246484;
    }
    ctx->pc = 0x24647Cu;
    SET_GPR_U32(ctx, 31, 0x246484u);
    ctx->pc = 0x246480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24647Cu;
    // 0x246480: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24647Cu, 0x246484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246484u;
label_246484:
    // 0x246484: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x246484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_246488:
    // 0x246488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24648c:
    // 0x24648c: 0x10000124  b           . + 4 + (0x124 << 2)
label_246490:
    if (ctx->pc == 0x246490u) {
        ctx->pc = 0x246490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24648Cu;
        // 0x246490: 0x24a5c8c8  addiu       $a1, $a1, -0x3738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246494u;
        goto label_246494;
    }
    ctx->pc = 0x24648Cu;
    {
        const bool branch_taken_0x24648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24648Cu;
        // 0x246490: 0x24a5c8c8  addiu       $a1, $a1, -0x3738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24648c) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x246494u;
label_246494:
    // 0x246494: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x246494u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_246498:
    // 0x246498: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x246498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_24649c:
    // 0x24649c: 0xc04444c  jal         func_111130
label_2464a0:
    if (ctx->pc == 0x2464A0u) {
        ctx->pc = 0x2464A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24649Cu;
        // 0x2464a0: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464A4u;
        goto label_2464a4;
    }
    ctx->pc = 0x24649Cu;
    SET_GPR_U32(ctx, 31, 0x2464A4u);
    ctx->pc = 0x2464A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24649Cu;
    // 0x2464a0: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x24649Cu, 0x2464A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464A4u;
label_2464a4:
    // 0x2464a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2464a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2464a8:
    // 0x2464a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2464a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2464ac:
    // 0x2464ac: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2464acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2464b0:
    // 0x2464b0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2464b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2464b4:
    // 0x2464b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2464b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2464b8:
    // 0x2464b8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2464b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2464bc:
    // 0x2464bc: 0x40f809  jalr        $v0
label_2464c0:
    if (ctx->pc == 0x2464C0u) {
        ctx->pc = 0x2464C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464BCu;
        // 0x2464c0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464C4u;
        goto label_2464c4;
    }
    ctx->pc = 0x2464BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2464C4u);
        ctx->pc = 0x2464C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464BCu;
        // 0x2464c0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2464BCu, 0x2464C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2464C4u;
label_2464c4:
    // 0x2464c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2464c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2464c8:
    // 0x2464c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2464c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2464cc:
    // 0x2464cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2464ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2464d0:
    // 0x2464d0: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x2464d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_2464d4:
    // 0x2464d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2464d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2464d8:
    // 0x2464d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2464d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2464dc:
    // 0x2464dc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2464dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2464e0:
    // 0x2464e0: 0xc043f74  jal         func_10FDD0
label_2464e4:
    if (ctx->pc == 0x2464E4u) {
        ctx->pc = 0x2464E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464E0u;
        // 0x2464e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464E8u;
        goto label_2464e8;
    }
    ctx->pc = 0x2464E0u;
    SET_GPR_U32(ctx, 31, 0x2464E8u);
    ctx->pc = 0x2464E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464E0u;
    // 0x2464e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2464E0u, 0x2464E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E8u;
label_2464e8:
    // 0x2464e8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2464e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2464ec:
    // 0x2464ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2464ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2464f0:
    // 0x2464f0: 0x2610c8d8  addiu       $s0, $s0, -0x3728
    ctx->pc = 0x2464f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953176));
label_2464f4:
    // 0x2464f4: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x2464f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
label_2464f8:
    // 0x2464f8: 0xc0cd4ee  jal         func_3353B8
label_2464fc:
    if (ctx->pc == 0x2464FCu) {
        ctx->pc = 0x2464FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464F8u;
        // 0x2464fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246500u;
        goto label_246500;
    }
    ctx->pc = 0x2464F8u;
    SET_GPR_U32(ctx, 31, 0x246500u);
    ctx->pc = 0x2464FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464F8u;
    // 0x2464fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2464F8u, 0x246500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246500u;
label_246500:
    // 0x246500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246504:
    // 0x246504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246508:
    // 0x246508: 0xc10ca28  jal         func_4328A0
label_24650c:
    if (ctx->pc == 0x24650Cu) {
        ctx->pc = 0x24650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246508u;
        // 0x24650c: 0x24460061  addiu       $a2, $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246510u;
        goto label_246510;
    }
    ctx->pc = 0x246508u;
    SET_GPR_U32(ctx, 31, 0x246510u);
    ctx->pc = 0x24650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246508u;
    // 0x24650c: 0x24460061  addiu       $a2, $v0, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x246508u, 0x246510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246510u;
label_246510:
    // 0x246510: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x246510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246514:
    // 0x246514: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246518:
    // 0x246518: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x246518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_24651c:
    // 0x24651c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24651cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246520:
    // 0x246520: 0xc0e637e  jal         func_398DF8
label_246524:
    if (ctx->pc == 0x246524u) {
        ctx->pc = 0x246524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246520u;
        // 0x246524: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246528u;
        goto label_246528;
    }
    ctx->pc = 0x246520u;
    SET_GPR_U32(ctx, 31, 0x246528u);
    ctx->pc = 0x246524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246520u;
    // 0x246524: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246520u, 0x246528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246528u;
label_246528:
    // 0x246528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24652c:
    // 0x24652c: 0x100000fc  b           . + 4 + (0xFC << 2)
label_246530:
    if (ctx->pc == 0x246530u) {
        ctx->pc = 0x246530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24652Cu;
        // 0x246530: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246534u;
        goto label_246534;
    }
    ctx->pc = 0x24652Cu;
    {
        const bool branch_taken_0x24652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24652Cu;
        // 0x246530: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24652c) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x246534u;
label_246534:
    // 0x246534: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x246534u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_246538:
    // 0x246538: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x246538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_24653c:
    // 0x24653c: 0xc04444c  jal         func_111130
label_246540:
    if (ctx->pc == 0x246540u) {
        ctx->pc = 0x246540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24653Cu;
        // 0x246540: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246544u;
        goto label_246544;
    }
    ctx->pc = 0x24653Cu;
    SET_GPR_U32(ctx, 31, 0x246544u);
    ctx->pc = 0x246540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24653Cu;
    // 0x246540: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x24653Cu, 0x246544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246544u;
label_246544:
    // 0x246544: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x246544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_246548:
    // 0x246548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24654c:
    // 0x24654c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246550:
    // 0x246550: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x246550u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_246554:
    // 0x246554: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x246554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_246558:
    // 0x246558: 0x40f809  jalr        $v0
label_24655c:
    if (ctx->pc == 0x24655Cu) {
        ctx->pc = 0x24655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246558u;
        // 0x24655c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246560u;
        goto label_246560;
    }
    ctx->pc = 0x246558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246560u);
        ctx->pc = 0x24655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246558u;
        // 0x24655c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246558u, 0x246560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246560u;
label_246560:
    // 0x246560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_246564:
    // 0x246564: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246568:
    // 0x246568: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x246568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24656c:
    // 0x24656c: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x24656cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_246570:
    // 0x246570: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246574:
    // 0x246574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246578:
    // 0x246578: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x246578u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_24657c:
    // 0x24657c: 0xc043f74  jal         func_10FDD0
label_246580:
    if (ctx->pc == 0x246580u) {
        ctx->pc = 0x246580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24657Cu;
        // 0x246580: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246584u;
        goto label_246584;
    }
    ctx->pc = 0x24657Cu;
    SET_GPR_U32(ctx, 31, 0x246584u);
    ctx->pc = 0x246580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24657Cu;
    // 0x246580: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x24657Cu, 0x246584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246584u;
label_246584:
    // 0x246584: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x246584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246588:
    // 0x246588: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24658c:
    // 0x24658c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x24658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_246590:
    // 0x246590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246594:
    // 0x246594: 0xc0e637e  jal         func_398DF8
label_246598:
    if (ctx->pc == 0x246598u) {
        ctx->pc = 0x246598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246594u;
        // 0x246598: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24659Cu;
        goto label_24659c;
    }
    ctx->pc = 0x246594u;
    SET_GPR_U32(ctx, 31, 0x24659Cu);
    ctx->pc = 0x246598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246594u;
    // 0x246598: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246594u, 0x24659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24659Cu;
label_24659c:
    // 0x24659c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24659cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2465a0:
    // 0x2465a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2465a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2465a4:
    // 0x2465a4: 0x100000de  b           . + 4 + (0xDE << 2)
label_2465a8:
    if (ctx->pc == 0x2465A8u) {
        ctx->pc = 0x2465A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465A4u;
        // 0x2465a8: 0x24a5c8e8  addiu       $a1, $a1, -0x3718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465ACu;
        goto label_2465ac;
    }
    ctx->pc = 0x2465A4u;
    {
        const bool branch_taken_0x2465a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465A4u;
        // 0x2465a8: 0x24a5c8e8  addiu       $a1, $a1, -0x3718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465a4) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x2465ACu;
label_2465ac:
    // 0x2465ac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2465acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2465b0:
    // 0x2465b0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2465b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2465b4:
    // 0x2465b4: 0xc04444c  jal         func_111130
label_2465b8:
    if (ctx->pc == 0x2465B8u) {
        ctx->pc = 0x2465B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465B4u;
        // 0x2465b8: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465BCu;
        goto label_2465bc;
    }
    ctx->pc = 0x2465B4u;
    SET_GPR_U32(ctx, 31, 0x2465BCu);
    ctx->pc = 0x2465B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465B4u;
    // 0x2465b8: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x2465B4u, 0x2465BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465BCu;
label_2465bc:
    // 0x2465bc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2465bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2465c0:
    // 0x2465c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2465c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2465c4:
    // 0x2465c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2465c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2465c8:
    // 0x2465c8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2465c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2465cc:
    // 0x2465cc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2465d0:
    // 0x2465d0: 0x40f809  jalr        $v0
label_2465d4:
    if (ctx->pc == 0x2465D4u) {
        ctx->pc = 0x2465D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465D0u;
        // 0x2465d4: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465D8u;
        goto label_2465d8;
    }
    ctx->pc = 0x2465D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2465D8u);
        ctx->pc = 0x2465D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465D0u;
        // 0x2465d4: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465D0u, 0x2465D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2465D8u;
label_2465d8:
    // 0x2465d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2465d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2465dc:
    // 0x2465dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2465dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2465e0:
    // 0x2465e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2465e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2465e4:
    // 0x2465e4: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x2465e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_2465e8:
    // 0x2465e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2465e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2465ec:
    // 0x2465ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2465ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2465f0:
    // 0x2465f0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2465f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2465f4:
    // 0x2465f4: 0xc043f74  jal         func_10FDD0
label_2465f8:
    if (ctx->pc == 0x2465F8u) {
        ctx->pc = 0x2465F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465F4u;
        // 0x2465f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465FCu;
        goto label_2465fc;
    }
    ctx->pc = 0x2465F4u;
    SET_GPR_U32(ctx, 31, 0x2465FCu);
    ctx->pc = 0x2465F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465F4u;
    // 0x2465f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2465F4u, 0x2465FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465FCu;
label_2465fc:
    // 0x2465fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2465fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246600:
    // 0x246600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246604:
    // 0x246604: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x246604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_246608:
    // 0x246608: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24660c:
    // 0x24660c: 0xc0e637e  jal         func_398DF8
label_246610:
    if (ctx->pc == 0x246610u) {
        ctx->pc = 0x246610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24660Cu;
        // 0x246610: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246614u;
        goto label_246614;
    }
    ctx->pc = 0x24660Cu;
    SET_GPR_U32(ctx, 31, 0x246614u);
    ctx->pc = 0x246610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24660Cu;
    // 0x246610: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24660Cu, 0x246614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246614u;
label_246614:
    // 0x246614: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x246614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_246618:
    // 0x246618: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x246618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_24661c:
    // 0x24661c: 0xc0cd4ee  jal         func_3353B8
label_246620:
    if (ctx->pc == 0x246620u) {
        ctx->pc = 0x246620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24661Cu;
        // 0x246620: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246624u;
        goto label_246624;
    }
    ctx->pc = 0x24661Cu;
    SET_GPR_U32(ctx, 31, 0x246624u);
    ctx->pc = 0x246620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24661Cu;
    // 0x246620: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x24661Cu, 0x246624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246624u;
label_246624:
    // 0x246624: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x246624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_246628:
    // 0x246628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24662c:
    // 0x24662c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_246630:
    if (ctx->pc == 0x246630u) {
        ctx->pc = 0x246630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24662Cu;
        // 0x246630: 0x24a5c8f8  addiu       $a1, $a1, -0x3708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246634u;
        goto label_246634;
    }
    ctx->pc = 0x24662Cu;
    {
        const bool branch_taken_0x24662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24662Cu;
        // 0x246630: 0x24a5c8f8  addiu       $a1, $a1, -0x3708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24662c) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x246634u;
label_246634:
    // 0x246634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246638:
    // 0x246638: 0xc0e5748  jal         func_395D20
label_24663c:
    if (ctx->pc == 0x24663Cu) {
        ctx->pc = 0x24663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246638u;
        // 0x24663c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246640u;
        goto label_246640;
    }
    ctx->pc = 0x246638u;
    SET_GPR_U32(ctx, 31, 0x246640u);
    ctx->pc = 0x24663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246638u;
    // 0x24663c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x246638u, 0x246640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246640u;
label_246640:
    // 0x246640: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x246640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_246644:
    // 0x246644: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246648:
    // 0x246648: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x246648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_24664c:
    // 0x24664c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24664cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246650:
    // 0x246650: 0xc0e637e  jal         func_398DF8
label_246654:
    if (ctx->pc == 0x246654u) {
        ctx->pc = 0x246654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246650u;
        // 0x246654: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246658u;
        goto label_246658;
    }
    ctx->pc = 0x246650u;
    SET_GPR_U32(ctx, 31, 0x246658u);
    ctx->pc = 0x246654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246650u;
    // 0x246654: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246650u, 0x246658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246658u;
label_246658:
    // 0x246658: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x246658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24665c:
    // 0x24665c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24665cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_246660:
    // 0x246660: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x246660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_246664:
    // 0x246664: 0x40f809  jalr        $v0
label_246668:
    if (ctx->pc == 0x246668u) {
        ctx->pc = 0x246668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246664u;
        // 0x246668: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24666Cu;
        goto label_24666c;
    }
    ctx->pc = 0x246664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24666Cu);
        ctx->pc = 0x246668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246664u;
        // 0x246668: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246664u, 0x24666Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24666Cu;
label_24666c:
    // 0x24666c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24666cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246670:
    // 0x246670: 0xae620364  sw          $v0, 0x364($s3)
    ctx->pc = 0x246670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 2));
label_246674:
    // 0x246674: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x246674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_246678:
    // 0x246678: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x246678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24667c:
    // 0x24667c: 0xc106be0  jal         func_41AF80
label_246680:
    if (ctx->pc == 0x246680u) {
        ctx->pc = 0x246680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24667Cu;
        // 0x246680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246684u;
        goto label_246684;
    }
    ctx->pc = 0x24667Cu;
    SET_GPR_U32(ctx, 31, 0x246684u);
    ctx->pc = 0x246680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24667Cu;
    // 0x246680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AF80u, 0x24667Cu, 0x246684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246684u;
label_246684:
    // 0x246684: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_246688:
    if (ctx->pc == 0x246688u) {
        ctx->pc = 0x24668Cu;
        goto label_24668c;
    }
    ctx->pc = 0x246684u;
    {
        const bool branch_taken_0x246684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246684) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x24668Cu;
label_24668c:
    // 0x24668c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_246690:
    // 0x246690: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246694:
    // 0x246694: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x246694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_246698:
    // 0x246698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24669c:
    // 0x24669c: 0xc0e637e  jal         func_398DF8
label_2466a0:
    if (ctx->pc == 0x2466A0u) {
        ctx->pc = 0x2466A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24669Cu;
        // 0x2466a0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466A4u;
        goto label_2466a4;
    }
    ctx->pc = 0x24669Cu;
    SET_GPR_U32(ctx, 31, 0x2466A4u);
    ctx->pc = 0x2466A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24669Cu;
    // 0x2466a0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24669Cu, 0x2466A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466A4u;
label_2466a4:
    // 0x2466a4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2466a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2466a8:
    // 0x2466a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2466a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2466ac:
    // 0x2466ac: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2466b0:
    if (ctx->pc == 0x2466B0u) {
        ctx->pc = 0x2466B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466ACu;
        // 0x2466b0: 0x24a5c908  addiu       $a1, $a1, -0x36F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466B4u;
        goto label_2466b4;
    }
    ctx->pc = 0x2466ACu;
    {
        const bool branch_taken_0x2466ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466ACu;
        // 0x2466b0: 0x24a5c908  addiu       $a1, $a1, -0x36F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466ac) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x2466B4u;
label_2466b4:
    // 0x2466b4: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x2466b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_2466b8:
    // 0x2466b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2466b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2466bc:
    // 0x2466bc: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_2466c0:
    if (ctx->pc == 0x2466C0u) {
        ctx->pc = 0x2466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466BCu;
        // 0x2466c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466C4u;
        goto label_2466c4;
    }
    ctx->pc = 0x2466BCu;
    {
        const bool branch_taken_0x2466bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466BCu;
        // 0x2466c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466bc) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2466C4u;
label_2466c4:
    // 0x2466c4: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x2466c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_2466c8:
    // 0x2466c8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2466cc:
    // 0x2466cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2466ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2466d0:
    // 0x2466d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2466d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2466d4:
    // 0x2466d4: 0xc107908  jal         func_41E420
label_2466d8:
    if (ctx->pc == 0x2466D8u) {
        ctx->pc = 0x2466D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466D4u;
        // 0x2466d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466DCu;
        goto label_2466dc;
    }
    ctx->pc = 0x2466D4u;
    SET_GPR_U32(ctx, 31, 0x2466DCu);
    ctx->pc = 0x2466D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2466D4u;
    // 0x2466d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2466D4u, 0x2466DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466DCu;
label_2466dc:
    // 0x2466dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2466dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2466e0:
    // 0x2466e0: 0xc1077b4  jal         func_41DED0
label_2466e4:
    if (ctx->pc == 0x2466E4u) {
        ctx->pc = 0x2466E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E0u;
        // 0x2466e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466E8u;
        goto label_2466e8;
    }
    ctx->pc = 0x2466E0u;
    SET_GPR_U32(ctx, 31, 0x2466E8u);
    ctx->pc = 0x2466E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2466E0u;
    // 0x2466e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x2466E0u, 0x2466E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466E8u;
label_2466e8:
    // 0x2466e8: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2466e8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2466ec:
    // 0x2466ec: 0x120000a9  beqz        $s0, . + 4 + (0xA9 << 2)
label_2466f0:
    if (ctx->pc == 0x2466F0u) {
        ctx->pc = 0x2466F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466ECu;
        // 0x2466f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466F4u;
        goto label_2466f4;
    }
    ctx->pc = 0x2466ECu;
    {
        const bool branch_taken_0x2466ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466ECu;
        // 0x2466f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466ec) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2466F4u;
label_2466f4:
    // 0x2466f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2466f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2466f8:
    // 0x2466f8: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x2466f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_2466fc:
    // 0x2466fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2466fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246700:
    // 0x246700: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x246700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_246704:
    // 0x246704: 0xc0e637e  jal         func_398DF8
label_246708:
    if (ctx->pc == 0x246708u) {
        ctx->pc = 0x246708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246704u;
        // 0x246708: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24670Cu;
        goto label_24670c;
    }
    ctx->pc = 0x246704u;
    SET_GPR_U32(ctx, 31, 0x24670Cu);
    ctx->pc = 0x246708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246704u;
    // 0x246708: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246704u, 0x24670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24670Cu;
label_24670c:
    // 0x24670c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x24670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_246710:
    // 0x246710: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x246710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_246714:
    // 0x246714: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x246714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_246718:
    // 0x246718: 0xc107908  jal         func_41E420
label_24671c:
    if (ctx->pc == 0x24671Cu) {
        ctx->pc = 0x24671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246718u;
        // 0x24671c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246720u;
        goto label_246720;
    }
    ctx->pc = 0x246718u;
    SET_GPR_U32(ctx, 31, 0x246720u);
    ctx->pc = 0x24671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246718u;
    // 0x24671c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x246718u, 0x246720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246720u;
label_246720:
    // 0x246720: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x246720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_246724:
    // 0x246724: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_246728:
    // 0x246728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24672c:
    if (ctx->pc == 0x24672Cu) {
        ctx->pc = 0x24672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246728u;
        // 0x24672c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246730u;
        goto label_246730;
    }
    ctx->pc = 0x246728u;
    {
        const bool branch_taken_0x246728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246728u;
        // 0x24672c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246728) {
            ctx->pc = 0x246748u;
            goto label_246748;
        }
    }
    ctx->pc = 0x246730u;
label_246730:
    // 0x246730: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x246730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_246734:
    // 0x246734: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x246734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_246738:
    // 0x246738: 0xc107908  jal         func_41E420
label_24673c:
    if (ctx->pc == 0x24673Cu) {
        ctx->pc = 0x24673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246738u;
        // 0x24673c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246740u;
        goto label_246740;
    }
    ctx->pc = 0x246738u;
    SET_GPR_U32(ctx, 31, 0x246740u);
    ctx->pc = 0x24673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246738u;
    // 0x24673c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x246738u, 0x246740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246740u;
label_246740:
    // 0x246740: 0x10000002  b           . + 4 + (0x2 << 2)
label_246744:
    if (ctx->pc == 0x246744u) {
        ctx->pc = 0x246744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246740u;
        // 0x246744: 0x2023823  subu        $a3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246748u;
        goto label_246748;
    }
    ctx->pc = 0x246740u;
    {
        const bool branch_taken_0x246740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246740u;
        // 0x246744: 0x2023823  subu        $a3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246740) {
            ctx->pc = 0x24674Cu;
            goto label_24674c;
        }
    }
    ctx->pc = 0x246748u;
label_246748:
    // 0x246748: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24674c:
    // 0x24674c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x24674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_246750:
    // 0x246750: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x246750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_246754:
    // 0x246754: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x246754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_246758:
    // 0x246758: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x246758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24675c:
    // 0x24675c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x24675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_246760:
    // 0x246760: 0xc10796c  jal         func_41E5B0
label_246764:
    if (ctx->pc == 0x246764u) {
        ctx->pc = 0x246764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246760u;
        // 0x246764: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246768u;
        goto label_246768;
    }
    ctx->pc = 0x246760u;
    SET_GPR_U32(ctx, 31, 0x246768u);
    ctx->pc = 0x246764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246760u;
    // 0x246764: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x246760u, 0x246768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246768u;
label_246768:
    // 0x246768: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_24676c:
    // 0x24676c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_246770:
    // 0x246770: 0xc1078c8  jal         func_41E320
label_246774:
    if (ctx->pc == 0x246774u) {
        ctx->pc = 0x246774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246770u;
        // 0x246774: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246778u;
        goto label_246778;
    }
    ctx->pc = 0x246770u;
    SET_GPR_U32(ctx, 31, 0x246778u);
    ctx->pc = 0x246774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246770u;
    // 0x246774: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x246770u, 0x246778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246778u;
label_246778:
    // 0x246778: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_24677c:
    // 0x24677c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24677cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246780:
    // 0x246780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246784:
    // 0x246784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x246784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246788:
    // 0x246788: 0xc043f36  jal         func_10FCD8
label_24678c:
    if (ctx->pc == 0x24678Cu) {
        ctx->pc = 0x24678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246788u;
        // 0x24678c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246790u;
        goto label_246790;
    }
    ctx->pc = 0x246788u;
    SET_GPR_U32(ctx, 31, 0x246790u);
    ctx->pc = 0x24678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246788u;
    // 0x24678c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x246788u, 0x246790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246790u;
label_246790:
    // 0x246790: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_246794:
    // 0x246794: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x246794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_246798:
    // 0x246798: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24679c:
    if (ctx->pc == 0x24679Cu) {
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467A0u;
        goto label_2467a0;
    }
    ctx->pc = 0x246798u;
    {
        const bool branch_taken_0x246798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246798) {
            ctx->pc = 0x2467ACu;
            goto label_2467ac;
        }
    }
    ctx->pc = 0x2467A0u;
label_2467a0:
    // 0x2467a0: 0xc107444  jal         func_41D110
label_2467a4:
    if (ctx->pc == 0x2467A4u) {
        ctx->pc = 0x2467A8u;
        goto label_2467a8;
    }
    ctx->pc = 0x2467A0u;
    SET_GPR_U32(ctx, 31, 0x2467A8u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2467A0u, 0x2467A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467A8u;
label_2467a8:
    // 0x2467a8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2467a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2467ac:
    // 0x2467ac: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_2467b0:
    if (ctx->pc == 0x2467B0u) {
        ctx->pc = 0x2467B4u;
        goto label_2467b4;
    }
    ctx->pc = 0x2467ACu;
    {
        const bool branch_taken_0x2467ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2467ac) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2467B4u;
label_2467b4:
    // 0x2467b4: 0xc073a8e  jal         func_1CEA38
label_2467b8:
    if (ctx->pc == 0x2467B8u) {
        ctx->pc = 0x2467B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467B4u;
        // 0x2467b8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467BCu;
        goto label_2467bc;
    }
    ctx->pc = 0x2467B4u;
    SET_GPR_U32(ctx, 31, 0x2467BCu);
    ctx->pc = 0x2467B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467B4u;
    // 0x2467b8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2467B4u, 0x2467BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467BCu;
label_2467bc:
    // 0x2467bc: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_2467c0:
    if (ctx->pc == 0x2467C0u) {
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467C4u;
        goto label_2467c4;
    }
    ctx->pc = 0x2467BCu;
    {
        const bool branch_taken_0x2467bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467bc) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2467C4u;
label_2467c4:
    // 0x2467c4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2467c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2467c8:
    // 0x2467c8: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2467c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_2467cc:
    // 0x2467cc: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_2467d0:
    if (ctx->pc == 0x2467D0u) {
        ctx->pc = 0x2467D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467CCu;
        // 0x2467d0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467D4u;
        goto label_2467d4;
    }
    ctx->pc = 0x2467CCu;
    {
        const bool branch_taken_0x2467cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2467D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467CCu;
        // 0x2467d0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467cc) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2467D4u;
label_2467d4:
    // 0x2467d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2467d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2467d8:
    // 0x2467d8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2467d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2467dc:
    // 0x2467dc: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x2467dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_2467e0:
    // 0x2467e0: 0xc107948  jal         func_41E520
label_2467e4:
    if (ctx->pc == 0x2467E4u) {
        ctx->pc = 0x2467E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467E0u;
        // 0x2467e4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467E8u;
        goto label_2467e8;
    }
    ctx->pc = 0x2467E0u;
    SET_GPR_U32(ctx, 31, 0x2467E8u);
    ctx->pc = 0x2467E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467E0u;
    // 0x2467e4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E520u, 0x2467E0u, 0x2467E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467E8u;
label_2467e8:
    // 0x2467e8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2467ec:
    if (ctx->pc == 0x2467ECu) {
        ctx->pc = 0x2467F0u;
        goto label_2467f0;
    }
    ctx->pc = 0x2467E8u;
    {
        const bool branch_taken_0x2467e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2467e8) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2467F0u;
label_2467f0:
    // 0x2467f0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2467f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2467f4:
    // 0x2467f4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2467f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2467f8:
    // 0x2467f8: 0xc04444c  jal         func_111130
label_2467fc:
    if (ctx->pc == 0x2467FCu) {
        ctx->pc = 0x2467FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467F8u;
        // 0x2467fc: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246800u;
        goto label_246800;
    }
    ctx->pc = 0x2467F8u;
    SET_GPR_U32(ctx, 31, 0x246800u);
    ctx->pc = 0x2467FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467F8u;
    // 0x2467fc: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x2467F8u, 0x246800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246800u;
label_246800:
    // 0x246800: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x246800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_246804:
    // 0x246804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246808:
    // 0x246808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24680c:
    // 0x24680c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x24680cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_246810:
    // 0x246810: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_246814:
    // 0x246814: 0x40f809  jalr        $v0
label_246818:
    if (ctx->pc == 0x246818u) {
        ctx->pc = 0x246818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246814u;
        // 0x246818: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24681Cu;
        goto label_24681c;
    }
    ctx->pc = 0x246814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24681Cu);
        ctx->pc = 0x246818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246814u;
        // 0x246818: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246814u, 0x24681Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24681Cu;
label_24681c:
    // 0x24681c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_246820:
    // 0x246820: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246824:
    // 0x246824: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x246824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246828:
    // 0x246828: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_24682c:
    // 0x24682c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24682cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246830:
    // 0x246830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246834:
    // 0x246834: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x246834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246838:
    // 0x246838: 0xc043f74  jal         func_10FDD0
label_24683c:
    if (ctx->pc == 0x24683Cu) {
        ctx->pc = 0x24683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246838u;
        // 0x24683c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246840u;
        goto label_246840;
    }
    ctx->pc = 0x246838u;
    SET_GPR_U32(ctx, 31, 0x246840u);
    ctx->pc = 0x24683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246838u;
    // 0x24683c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x246838u, 0x246840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246840u;
label_246840:
    // 0x246840: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246844:
    // 0x246844: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246848:
    // 0x246848: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x246848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_24684c:
    // 0x24684c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24684cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246850:
    // 0x246850: 0xc0e637e  jal         func_398DF8
label_246854:
    if (ctx->pc == 0x246854u) {
        ctx->pc = 0x246854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246850u;
        // 0x246854: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246858u;
        goto label_246858;
    }
    ctx->pc = 0x246850u;
    SET_GPR_U32(ctx, 31, 0x246858u);
    ctx->pc = 0x246854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246850u;
    // 0x246854: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x246850u, 0x246858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246858u;
label_246858:
    // 0x246858: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x246858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24685c:
    // 0x24685c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246860:
    // 0x246860: 0x1000002f  b           . + 4 + (0x2F << 2)
label_246864:
    if (ctx->pc == 0x246864u) {
        ctx->pc = 0x246864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246860u;
        // 0x246864: 0x24a5c918  addiu       $a1, $a1, -0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246868u;
        goto label_246868;
    }
    ctx->pc = 0x246860u;
    {
        const bool branch_taken_0x246860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246860u;
        // 0x246864: 0x24a5c918  addiu       $a1, $a1, -0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246860) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x246868u;
label_246868:
    // 0x246868: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x246868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_24686c:
    // 0x24686c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24686cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_246870:
    // 0x246870: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_246874:
    if (ctx->pc == 0x246874u) {
        ctx->pc = 0x246874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246870u;
        // 0x246874: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246878u;
        goto label_246878;
    }
    ctx->pc = 0x246870u;
    {
        const bool branch_taken_0x246870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246870u;
        // 0x246874: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246870) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x246878u;
label_246878:
    // 0x246878: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x246878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_24687c:
    // 0x24687c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x24687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_246880:
    // 0x246880: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_246884:
    // 0x246884: 0xc107908  jal         func_41E420
label_246888:
    if (ctx->pc == 0x246888u) {
        ctx->pc = 0x246888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246884u;
        // 0x246888: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24688Cu;
        goto label_24688c;
    }
    ctx->pc = 0x246884u;
    SET_GPR_U32(ctx, 31, 0x24688Cu);
    ctx->pc = 0x246888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246884u;
    // 0x246888: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x246884u, 0x24688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24688Cu;
label_24688c:
    // 0x24688c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24688cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246890:
    // 0x246890: 0xc1077b4  jal         func_41DED0
label_246894:
    if (ctx->pc == 0x246894u) {
        ctx->pc = 0x246894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246890u;
        // 0x246894: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246898u;
        goto label_246898;
    }
    ctx->pc = 0x246890u;
    SET_GPR_U32(ctx, 31, 0x246898u);
    ctx->pc = 0x246894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246890u;
    // 0x246894: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x246890u, 0x246898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246898u;
label_246898:
    // 0x246898: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x246898u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24689c:
    // 0x24689c: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_2468a0:
    if (ctx->pc == 0x2468A0u) {
        ctx->pc = 0x2468A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24689Cu;
        // 0x2468a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468A4u;
        goto label_2468a4;
    }
    ctx->pc = 0x24689Cu;
    {
        const bool branch_taken_0x24689c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24689Cu;
        // 0x2468a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24689c) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x2468A4u;
label_2468a4:
    // 0x2468a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2468a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2468a8:
    // 0x2468a8: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x2468a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_2468ac:
    // 0x2468ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2468acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2468b0:
    // 0x2468b0: 0xc0e637e  jal         func_398DF8
label_2468b4:
    if (ctx->pc == 0x2468B4u) {
        ctx->pc = 0x2468B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468B0u;
        // 0x2468b4: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468B8u;
        goto label_2468b8;
    }
    ctx->pc = 0x2468B0u;
    SET_GPR_U32(ctx, 31, 0x2468B8u);
    ctx->pc = 0x2468B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2468B0u;
    // 0x2468b4: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x2468B0u, 0x2468B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468B8u;
label_2468b8:
    // 0x2468b8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2468b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2468bc:
    // 0x2468bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2468c0:
    // 0x2468c0: 0xc0cd4ee  jal         func_3353B8
label_2468c4:
    if (ctx->pc == 0x2468C4u) {
        ctx->pc = 0x2468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468C0u;
        // 0x2468c4: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468C8u;
        goto label_2468c8;
    }
    ctx->pc = 0x2468C0u;
    SET_GPR_U32(ctx, 31, 0x2468C8u);
    ctx->pc = 0x2468C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2468C0u;
    // 0x2468c4: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2468C0u, 0x2468C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468C8u;
label_2468c8:
    // 0x2468c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2468c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2468cc:
    // 0x2468cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2468ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2468d0:
    // 0x2468d0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2468d4:
    // 0x2468d4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2468d8:
    if (ctx->pc == 0x2468D8u) {
        ctx->pc = 0x2468D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468D4u;
        // 0x2468d8: 0x2445c930  addiu       $a1, $v0, -0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468DCu;
        goto label_2468dc;
    }
    ctx->pc = 0x2468D4u;
    {
        const bool branch_taken_0x2468d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2468D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468D4u;
        // 0x2468d8: 0x2445c930  addiu       $a1, $v0, -0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468d4) {
            ctx->pc = 0x2468E4u;
            goto label_2468e4;
        }
    }
    ctx->pc = 0x2468DCu;
label_2468dc:
    // 0x2468dc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2468dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2468e0:
    // 0x2468e0: 0x2445c940  addiu       $a1, $v0, -0x36C0
    ctx->pc = 0x2468e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
label_2468e4:
    // 0x2468e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2468e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2468e8:
    // 0x2468e8: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
label_2468ec:
    if (ctx->pc == 0x2468ECu) {
        ctx->pc = 0x2468ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468E8u;
        // 0x2468ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468F0u;
        goto label_2468f0;
    }
    ctx->pc = 0x2468E8u;
    {
        const bool branch_taken_0x2468e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2468ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468E8u;
        // 0x2468ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468e8) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x2468F0u;
label_2468f0:
    // 0x2468f0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2468f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2468f4:
    // 0x2468f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2468f8:
    if (ctx->pc == 0x2468F8u) {
        ctx->pc = 0x2468F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468F4u;
        // 0x2468f8: 0x2445c950  addiu       $a1, $v0, -0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468FCu;
        goto label_2468fc;
    }
    ctx->pc = 0x2468F4u;
    {
        const bool branch_taken_0x2468f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468F4u;
        // 0x2468f8: 0x2445c950  addiu       $a1, $v0, -0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468f4) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x2468FCu;
label_2468fc:
    // 0x2468fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2468fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_246900:
    // 0x246900: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246904:
    // 0x246904: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x246904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_246908:
    // 0x246908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24690c:
    // 0x24690c: 0xc0e637e  jal         func_398DF8
label_246910:
    if (ctx->pc == 0x246910u) {
        ctx->pc = 0x246910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24690Cu;
        // 0x246910: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246914u;
        goto label_246914;
    }
    ctx->pc = 0x24690Cu;
    SET_GPR_U32(ctx, 31, 0x246914u);
    ctx->pc = 0x246910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24690Cu;
    // 0x246910: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24690Cu, 0x246914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246914u;
label_246914:
    // 0x246914: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x246914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_246918:
    // 0x246918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24691c:
    // 0x24691c: 0x24a5c960  addiu       $a1, $a1, -0x36A0
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953312));
label_246920:
    // 0x246920: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x246920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246924:
    // 0x246924: 0xc0930a0  jal         func_24C280
label_246928:
    if (ctx->pc == 0x246928u) {
        ctx->pc = 0x246928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246924u;
        // 0x246928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24692Cu;
        goto label_24692c;
    }
    ctx->pc = 0x246924u;
    SET_GPR_U32(ctx, 31, 0x24692Cu);
    ctx->pc = 0x246928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246924u;
    // 0x246928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x246924u, 0x24692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24692Cu;
label_24692c:
    // 0x24692c: 0x10000019  b           . + 4 + (0x19 << 2)
label_246930:
    if (ctx->pc == 0x246930u) {
        ctx->pc = 0x246934u;
        goto label_246934;
    }
    ctx->pc = 0x24692Cu;
    {
        const bool branch_taken_0x24692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24692c) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x246934u;
label_246934:
    // 0x246934: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_246938:
    if (ctx->pc == 0x246938u) {
        ctx->pc = 0x246938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246934u;
        // 0x246938: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24693Cu;
        goto label_24693c;
    }
    ctx->pc = 0x246934u;
    {
        const bool branch_taken_0x246934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x246938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246934u;
        // 0x246938: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246934) {
            ctx->pc = 0x246950u;
            goto label_246950;
        }
    }
    ctx->pc = 0x24693Cu;
label_24693c:
    // 0x24693c: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x24693cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_246940:
    // 0x246940: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x246940u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_246944:
    // 0x246944: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_246948:
    if (ctx->pc == 0x246948u) {
        ctx->pc = 0x246948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246944u;
        // 0x246948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24694Cu;
        goto label_24694c;
    }
    ctx->pc = 0x246944u;
    {
        const bool branch_taken_0x246944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246944u;
        // 0x246948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246944) {
            ctx->pc = 0x246968u;
            goto label_246968;
        }
    }
    ctx->pc = 0x24694Cu;
label_24694c:
    // 0x24694c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_246950:
    // 0x246950: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246954:
    // 0x246954: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x246954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_246958:
    // 0x246958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24695c:
    // 0x24695c: 0xc0e637e  jal         func_398DF8
label_246960:
    if (ctx->pc == 0x246960u) {
        ctx->pc = 0x246960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24695Cu;
        // 0x246960: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246964u;
        goto label_246964;
    }
    ctx->pc = 0x24695Cu;
    SET_GPR_U32(ctx, 31, 0x246964u);
    ctx->pc = 0x246960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24695Cu;
    // 0x246960: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24695Cu, 0x246964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246964u;
label_246964:
    // 0x246964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246968:
    // 0x246968: 0xc08efc0  jal         func_23BF00
label_24696c:
    if (ctx->pc == 0x24696Cu) {
        ctx->pc = 0x24696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246968u;
        // 0x24696c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246970u;
        goto label_246970;
    }
    ctx->pc = 0x246968u;
    SET_GPR_U32(ctx, 31, 0x246970u);
    ctx->pc = 0x24696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246968u;
    // 0x24696c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF00u, 0x246968u, 0x246970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246970u;
label_246970:
    // 0x246970: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_246974:
    if (ctx->pc == 0x246974u) {
        ctx->pc = 0x246974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246970u;
        // 0x246974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246978u;
        goto label_246978;
    }
    ctx->pc = 0x246970u;
    {
        const bool branch_taken_0x246970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246970u;
        // 0x246974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246970) {
            ctx->pc = 0x246994u;
            goto label_246994;
        }
    }
    ctx->pc = 0x246978u;
label_246978:
    // 0x246978: 0xc089c04  jal         func_227010
label_24697c:
    if (ctx->pc == 0x24697Cu) {
        ctx->pc = 0x24697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246978u;
        // 0x24697c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246980u;
        goto label_246980;
    }
    ctx->pc = 0x246978u;
    SET_GPR_U32(ctx, 31, 0x246980u);
    ctx->pc = 0x24697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246978u;
    // 0x24697c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227010u, 0x246978u, 0x246980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246980u;
label_246980:
    // 0x246980: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x246980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_246984:
    // 0x246984: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246988:
    // 0x246988: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x246988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_24698c:
    // 0x24698c: 0xc0e6b68  jal         func_39ADA0
label_246990:
    if (ctx->pc == 0x246990u) {
        ctx->pc = 0x246990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24698Cu;
        // 0x246990: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246994u;
        goto label_246994;
    }
    ctx->pc = 0x24698Cu;
    SET_GPR_U32(ctx, 31, 0x246994u);
    ctx->pc = 0x246990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24698Cu;
    // 0x246990: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADA0u, 0x24698Cu, 0x246994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246994u;
label_246994:
    // 0x246994: 0xc08c07c  jal         func_2301F0
label_246998:
    if (ctx->pc == 0x246998u) {
        ctx->pc = 0x246998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246994u;
        // 0x246998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24699Cu;
        goto label_24699c;
    }
    ctx->pc = 0x246994u;
    SET_GPR_U32(ctx, 31, 0x24699Cu);
    ctx->pc = 0x246998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246994u;
    // 0x246998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x246994u, 0x24699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24699Cu;
label_24699c:
    // 0x24699c: 0x100003e3  b           . + 4 + (0x3E3 << 2)
label_2469a0:
    if (ctx->pc == 0x2469A0u) {
        ctx->pc = 0x2469A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24699Cu;
        // 0x2469a0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469A4u;
        goto label_2469a4;
    }
    ctx->pc = 0x24699Cu;
    {
        const bool branch_taken_0x24699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24699Cu;
        // 0x2469a0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24699c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2469A4u;
label_2469a4:
    // 0x2469a4: 0xc0ea146  jal         func_3A8518
label_2469a8:
    if (ctx->pc == 0x2469A8u) {
        ctx->pc = 0x2469A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A4u;
        // 0x2469a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469ACu;
        goto label_2469ac;
    }
    ctx->pc = 0x2469A4u;
    SET_GPR_U32(ctx, 31, 0x2469ACu);
    ctx->pc = 0x2469A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469A4u;
    // 0x2469a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x2469A4u, 0x2469ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469ACu;
label_2469ac:
    // 0x2469ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2469acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2469b0:
    // 0x2469b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2469b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2469b4:
    // 0x2469b4: 0xc08997c  jal         func_2265F0
label_2469b8:
    if (ctx->pc == 0x2469B8u) {
        ctx->pc = 0x2469B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469B4u;
        // 0x2469b8: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469BCu;
        goto label_2469bc;
    }
    ctx->pc = 0x2469B4u;
    SET_GPR_U32(ctx, 31, 0x2469BCu);
    ctx->pc = 0x2469B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469B4u;
    // 0x2469b8: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2469B4u, 0x2469BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469BCu;
label_2469bc:
    // 0x2469bc: 0x544003db  bnel        $v0, $zero, . + 4 + (0x3DB << 2)
label_2469c0:
    if (ctx->pc == 0x2469C0u) {
        ctx->pc = 0x2469C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469BCu;
        // 0x2469c0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469C4u;
        goto label_2469c4;
    }
    ctx->pc = 0x2469BCu;
    {
        const bool branch_taken_0x2469bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2469bc) {
            ctx->pc = 0x2469C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2469BCu;
            // 0x2469c0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2469C4u;
label_2469c4:
    // 0x2469c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2469c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2469c8:
    // 0x2469c8: 0xc0887b4  jal         func_221ED0
label_2469cc:
    if (ctx->pc == 0x2469CCu) {
        ctx->pc = 0x2469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C8u;
        // 0x2469cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469D0u;
        goto label_2469d0;
    }
    ctx->pc = 0x2469C8u;
    SET_GPR_U32(ctx, 31, 0x2469D0u);
    ctx->pc = 0x2469CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469C8u;
    // 0x2469cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2469C8u, 0x2469D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469D0u;
label_2469d0:
    // 0x2469d0: 0x100003d6  b           . + 4 + (0x3D6 << 2)
label_2469d4:
    if (ctx->pc == 0x2469D4u) {
        ctx->pc = 0x2469D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D0u;
        // 0x2469d4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469D8u;
        goto label_2469d8;
    }
    ctx->pc = 0x2469D0u;
    {
        const bool branch_taken_0x2469d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D0u;
        // 0x2469d4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469d0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2469D8u;
label_2469d8:
    // 0x2469d8: 0xc094fca  jal         func_253F28
label_2469dc:
    if (ctx->pc == 0x2469DCu) {
        ctx->pc = 0x2469DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D8u;
        // 0x2469dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469E0u;
        goto label_2469e0;
    }
    ctx->pc = 0x2469D8u;
    SET_GPR_U32(ctx, 31, 0x2469E0u);
    ctx->pc = 0x2469DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469D8u;
    // 0x2469dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x2469D8u, 0x2469E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469E0u;
label_2469e0:
    // 0x2469e0: 0x100003d2  b           . + 4 + (0x3D2 << 2)
label_2469e4:
    if (ctx->pc == 0x2469E4u) {
        ctx->pc = 0x2469E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E0u;
        // 0x2469e4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469E8u;
        goto label_2469e8;
    }
    ctx->pc = 0x2469E0u;
    {
        const bool branch_taken_0x2469e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E0u;
        // 0x2469e4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469e0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2469E8u;
label_2469e8:
    // 0x2469e8: 0xc0ea146  jal         func_3A8518
label_2469ec:
    if (ctx->pc == 0x2469ECu) {
        ctx->pc = 0x2469ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E8u;
        // 0x2469ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469F0u;
        goto label_2469f0;
    }
    ctx->pc = 0x2469E8u;
    SET_GPR_U32(ctx, 31, 0x2469F0u);
    ctx->pc = 0x2469ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469E8u;
    // 0x2469ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x2469E8u, 0x2469F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469F0u;
label_2469f0:
    // 0x2469f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2469f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2469f4:
    // 0x2469f4: 0xc0ea146  jal         func_3A8518
label_2469f8:
    if (ctx->pc == 0x2469F8u) {
        ctx->pc = 0x2469F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469F4u;
        // 0x2469f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469FCu;
        goto label_2469fc;
    }
    ctx->pc = 0x2469F4u;
    SET_GPR_U32(ctx, 31, 0x2469FCu);
    ctx->pc = 0x2469F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469F4u;
    // 0x2469f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x2469F4u, 0x2469FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469FCu;
label_2469fc:
    // 0x2469fc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2469fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_246a00:
    // 0x246a00: 0x3845001a  xori        $a1, $v0, 0x1A
    ctx->pc = 0x246a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)26);
label_246a04:
    // 0x246a04: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x246a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_246a08:
    // 0x246a08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246a0c:
    // 0x246a0c: 0x3a03001a  xori        $v1, $s0, 0x1A
    ctx->pc = 0x246a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)26);
label_246a10:
    // 0x246a10: 0x45380b  movn        $a3, $v0, $a1
    ctx->pc = 0x246a10u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_246a14:
    // 0x246a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_246a18:
    // 0x246a18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246a1c:
    // 0x246a1c: 0x203400b  movn        $t0, $s0, $v1
    ctx->pc = 0x246a1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
label_246a20:
    // 0x246a20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x246a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_246a24:
    // 0x246a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246a28:
    // 0x246a28: 0xc0882b2  jal         func_220AC8
label_246a2c:
    if (ctx->pc == 0x246A2Cu) {
        ctx->pc = 0x246A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A28u;
        // 0x246a2c: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A30u;
        goto label_246a30;
    }
    ctx->pc = 0x246A28u;
    SET_GPR_U32(ctx, 31, 0x246A30u);
    ctx->pc = 0x246A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A28u;
    // 0x246a2c: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x246A28u, 0x246A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A30u;
label_246a30:
    // 0x246a30: 0x100003be  b           . + 4 + (0x3BE << 2)
label_246a34:
    if (ctx->pc == 0x246A34u) {
        ctx->pc = 0x246A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A30u;
        // 0x246a34: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A38u;
        goto label_246a38;
    }
    ctx->pc = 0x246A30u;
    {
        const bool branch_taken_0x246a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A30u;
        // 0x246a34: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a30) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246A38u;
label_246a38:
    // 0x246a38: 0xc0ea14c  jal         func_3A8530
label_246a3c:
    if (ctx->pc == 0x246A3Cu) {
        ctx->pc = 0x246A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A38u;
        // 0x246a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A40u;
        goto label_246a40;
    }
    ctx->pc = 0x246A38u;
    SET_GPR_U32(ctx, 31, 0x246A40u);
    ctx->pc = 0x246A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A38u;
    // 0x246a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x246A38u, 0x246A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A40u;
label_246a40:
    // 0x246a40: 0xc08a61a  jal         func_229868
label_246a44:
    if (ctx->pc == 0x246A44u) {
        ctx->pc = 0x246A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A40u;
        // 0x246a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A48u;
        goto label_246a48;
    }
    ctx->pc = 0x246A40u;
    SET_GPR_U32(ctx, 31, 0x246A48u);
    ctx->pc = 0x246A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A40u;
    // 0x246a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x246A40u, 0x246A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A48u;
label_246a48:
    // 0x246a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246a4c:
    // 0x246a4c: 0x520003b7  beql        $s0, $zero, . + 4 + (0x3B7 << 2)
label_246a50:
    if (ctx->pc == 0x246A50u) {
        ctx->pc = 0x246A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A4Cu;
        // 0x246a50: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A54u;
        goto label_246a54;
    }
    ctx->pc = 0x246A4Cu;
    {
        const bool branch_taken_0x246a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a4c) {
            ctx->pc = 0x246A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A4Cu;
            // 0x246a50: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246A54u;
label_246a54:
    // 0x246a54: 0xc089526  jal         func_225498
label_246a58:
    if (ctx->pc == 0x246A58u) {
        ctx->pc = 0x246A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A54u;
        // 0x246a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A5Cu;
        goto label_246a5c;
    }
    ctx->pc = 0x246A54u;
    SET_GPR_U32(ctx, 31, 0x246A5Cu);
    ctx->pc = 0x246A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A54u;
    // 0x246a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225498u, 0x246A54u, 0x246A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A5Cu;
label_246a5c:
    // 0x246a5c: 0x504003b3  beql        $v0, $zero, . + 4 + (0x3B3 << 2)
label_246a60:
    if (ctx->pc == 0x246A60u) {
        ctx->pc = 0x246A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A5Cu;
        // 0x246a60: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A64u;
        goto label_246a64;
    }
    ctx->pc = 0x246A5Cu;
    {
        const bool branch_taken_0x246a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a5c) {
            ctx->pc = 0x246A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A5Cu;
            // 0x246a60: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246A64u;
label_246a64:
    // 0x246a64: 0xc088eb4  jal         func_223AD0
label_246a68:
    if (ctx->pc == 0x246A68u) {
        ctx->pc = 0x246A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A64u;
        // 0x246a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A6Cu;
        goto label_246a6c;
    }
    ctx->pc = 0x246A64u;
    SET_GPR_U32(ctx, 31, 0x246A6Cu);
    ctx->pc = 0x246A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A64u;
    // 0x246a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x246A64u, 0x246A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A6Cu;
label_246a6c:
    // 0x246a6c: 0x104003ae  beqz        $v0, . + 4 + (0x3AE << 2)
label_246a70:
    if (ctx->pc == 0x246A70u) {
        ctx->pc = 0x246A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A6Cu;
        // 0x246a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A74u;
        goto label_246a74;
    }
    ctx->pc = 0x246A6Cu;
    {
        const bool branch_taken_0x246a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A6Cu;
        // 0x246a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a6c) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246A74u;
label_246a74:
    // 0x246a74: 0xc0899d8  jal         func_226760
label_246a78:
    if (ctx->pc == 0x246A78u) {
        ctx->pc = 0x246A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A74u;
        // 0x246a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A7Cu;
        goto label_246a7c;
    }
    ctx->pc = 0x246A74u;
    SET_GPR_U32(ctx, 31, 0x246A7Cu);
    ctx->pc = 0x246A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A74u;
    // 0x246a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x246A74u, 0x246A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A7Cu;
label_246a7c:
    // 0x246a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246a80:
    // 0x246a80: 0xc0899aa  jal         func_2266A8
label_246a84:
    if (ctx->pc == 0x246A84u) {
        ctx->pc = 0x246A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A80u;
        // 0x246a84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A88u;
        goto label_246a88;
    }
    ctx->pc = 0x246A80u;
    SET_GPR_U32(ctx, 31, 0x246A88u);
    ctx->pc = 0x246A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A80u;
    // 0x246a84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x246A80u, 0x246A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A88u;
label_246a88:
    // 0x246a88: 0x100003a8  b           . + 4 + (0x3A8 << 2)
label_246a8c:
    if (ctx->pc == 0x246A8Cu) {
        ctx->pc = 0x246A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A88u;
        // 0x246a8c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A90u;
        goto label_246a90;
    }
    ctx->pc = 0x246A88u;
    {
        const bool branch_taken_0x246a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A88u;
        // 0x246a8c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a88) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246A90u;
label_246a90:
    // 0x246a90: 0xc0ea14c  jal         func_3A8530
label_246a94:
    if (ctx->pc == 0x246A94u) {
        ctx->pc = 0x246A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A90u;
        // 0x246a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A98u;
        goto label_246a98;
    }
    ctx->pc = 0x246A90u;
    SET_GPR_U32(ctx, 31, 0x246A98u);
    ctx->pc = 0x246A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A90u;
    // 0x246a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x246A90u, 0x246A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A98u;
label_246a98:
    // 0x246a98: 0xc08a61a  jal         func_229868
label_246a9c:
    if (ctx->pc == 0x246A9Cu) {
        ctx->pc = 0x246A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A98u;
        // 0x246a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AA0u;
        goto label_246aa0;
    }
    ctx->pc = 0x246A98u;
    SET_GPR_U32(ctx, 31, 0x246AA0u);
    ctx->pc = 0x246A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A98u;
    // 0x246a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x246A98u, 0x246AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AA0u;
label_246aa0:
    // 0x246aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246aa4:
    // 0x246aa4: 0x520003a1  beql        $s0, $zero, . + 4 + (0x3A1 << 2)
label_246aa8:
    if (ctx->pc == 0x246AA8u) {
        ctx->pc = 0x246AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AA4u;
        // 0x246aa8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AACu;
        goto label_246aac;
    }
    ctx->pc = 0x246AA4u;
    {
        const bool branch_taken_0x246aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x246aa4) {
            ctx->pc = 0x246AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246AA4u;
            // 0x246aa8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246AACu;
label_246aac:
    // 0x246aac: 0xc089526  jal         func_225498
label_246ab0:
    if (ctx->pc == 0x246AB0u) {
        ctx->pc = 0x246AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AACu;
        // 0x246ab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AB4u;
        goto label_246ab4;
    }
    ctx->pc = 0x246AACu;
    SET_GPR_U32(ctx, 31, 0x246AB4u);
    ctx->pc = 0x246AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AACu;
    // 0x246ab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225498u, 0x246AACu, 0x246AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB4u;
label_246ab4:
    // 0x246ab4: 0x5040039d  beql        $v0, $zero, . + 4 + (0x39D << 2)
label_246ab8:
    if (ctx->pc == 0x246AB8u) {
        ctx->pc = 0x246AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB4u;
        // 0x246ab8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246ABCu;
        goto label_246abc;
    }
    ctx->pc = 0x246AB4u;
    {
        const bool branch_taken_0x246ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ab4) {
            ctx->pc = 0x246AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246AB4u;
            // 0x246ab8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246ABCu;
label_246abc:
    // 0x246abc: 0xc088eb4  jal         func_223AD0
label_246ac0:
    if (ctx->pc == 0x246AC0u) {
        ctx->pc = 0x246AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ABCu;
        // 0x246ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AC4u;
        goto label_246ac4;
    }
    ctx->pc = 0x246ABCu;
    SET_GPR_U32(ctx, 31, 0x246AC4u);
    ctx->pc = 0x246AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246ABCu;
    // 0x246ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x246ABCu, 0x246AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AC4u;
label_246ac4:
    // 0x246ac4: 0x10400398  beqz        $v0, . + 4 + (0x398 << 2)
label_246ac8:
    if (ctx->pc == 0x246AC8u) {
        ctx->pc = 0x246AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AC4u;
        // 0x246ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246ACCu;
        goto label_246acc;
    }
    ctx->pc = 0x246AC4u;
    {
        const bool branch_taken_0x246ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AC4u;
        // 0x246ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ac4) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246ACCu;
label_246acc:
    // 0x246acc: 0xc0899d8  jal         func_226760
label_246ad0:
    if (ctx->pc == 0x246AD0u) {
        ctx->pc = 0x246AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ACCu;
        // 0x246ad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AD4u;
        goto label_246ad4;
    }
    ctx->pc = 0x246ACCu;
    SET_GPR_U32(ctx, 31, 0x246AD4u);
    ctx->pc = 0x246AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246ACCu;
    // 0x246ad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x246ACCu, 0x246AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AD4u;
label_246ad4:
    // 0x246ad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246ad8:
    // 0x246ad8: 0xc0899aa  jal         func_2266A8
label_246adc:
    if (ctx->pc == 0x246ADCu) {
        ctx->pc = 0x246ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AD8u;
        // 0x246adc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AE0u;
        goto label_246ae0;
    }
    ctx->pc = 0x246AD8u;
    SET_GPR_U32(ctx, 31, 0x246AE0u);
    ctx->pc = 0x246ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AD8u;
    // 0x246adc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x246AD8u, 0x246AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AE0u;
label_246ae0:
    // 0x246ae0: 0x10000392  b           . + 4 + (0x392 << 2)
label_246ae4:
    if (ctx->pc == 0x246AE4u) {
        ctx->pc = 0x246AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AE0u;
        // 0x246ae4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AE8u;
        goto label_246ae8;
    }
    ctx->pc = 0x246AE0u;
    {
        const bool branch_taken_0x246ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AE0u;
        // 0x246ae4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ae0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246AE8u;
label_246ae8:
    // 0x246ae8: 0xc089526  jal         func_225498
label_246aec:
    if (ctx->pc == 0x246AECu) {
        ctx->pc = 0x246AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AE8u;
        // 0x246aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AF0u;
        goto label_246af0;
    }
    ctx->pc = 0x246AE8u;
    SET_GPR_U32(ctx, 31, 0x246AF0u);
    ctx->pc = 0x246AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AE8u;
    // 0x246aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225498u, 0x246AE8u, 0x246AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AF0u;
label_246af0:
    // 0x246af0: 0x1040038d  beqz        $v0, . + 4 + (0x38D << 2)
label_246af4:
    if (ctx->pc == 0x246AF4u) {
        ctx->pc = 0x246AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AF0u;
        // 0x246af4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AF8u;
        goto label_246af8;
    }
    ctx->pc = 0x246AF0u;
    {
        const bool branch_taken_0x246af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AF0u;
        // 0x246af4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246af0) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246AF8u;
label_246af8:
    // 0x246af8: 0xc08997c  jal         func_2265F0
label_246afc:
    if (ctx->pc == 0x246AFCu) {
        ctx->pc = 0x246AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AF8u;
        // 0x246afc: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B00u;
        goto label_246b00;
    }
    ctx->pc = 0x246AF8u;
    SET_GPR_U32(ctx, 31, 0x246B00u);
    ctx->pc = 0x246AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AF8u;
    // 0x246afc: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x246AF8u, 0x246B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B00u;
label_246b00:
    // 0x246b00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_246b04:
    if (ctx->pc == 0x246B04u) {
        ctx->pc = 0x246B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B00u;
        // 0x246b04: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B08u;
        goto label_246b08;
    }
    ctx->pc = 0x246B00u;
    {
        const bool branch_taken_0x246b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B00u;
        // 0x246b04: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b00) {
            ctx->pc = 0x246B24u;
            goto label_246b24;
        }
    }
    ctx->pc = 0x246B08u;
label_246b08:
    // 0x246b08: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x246b08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_246b0c:
    // 0x246b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x246b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_246b10:
    // 0x246b10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x246b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_246b14:
    // 0x246b14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_246b18:
    // 0x246b18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x246b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_246b1c:
    // 0x246b1c: 0x14400383  bnez        $v0, . + 4 + (0x383 << 2)
label_246b20:
    if (ctx->pc == 0x246B20u) {
        ctx->pc = 0x246B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B1Cu;
        // 0x246b20: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B24u;
        goto label_246b24;
    }
    ctx->pc = 0x246B1Cu;
    {
        const bool branch_taken_0x246b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B1Cu;
        // 0x246b20: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b1c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246B24u;
label_246b24:
    // 0x246b24: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x246b24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_246b28:
    // 0x246b28: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x246b28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_246b2c:
    // 0x246b2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_246b30:
    if (ctx->pc == 0x246B30u) {
        ctx->pc = 0x246B34u;
        goto label_246b34;
    }
    ctx->pc = 0x246B2Cu;
    {
        const bool branch_taken_0x246b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b2c) {
            ctx->pc = 0x246B4Cu;
            goto label_246b4c;
        }
    }
    ctx->pc = 0x246B34u;
label_246b34:
    // 0x246b34: 0xc0874fa  jal         func_21D3E8
label_246b38:
    if (ctx->pc == 0x246B38u) {
        ctx->pc = 0x246B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B34u;
        // 0x246b38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B3Cu;
        goto label_246b3c;
    }
    ctx->pc = 0x246B34u;
    SET_GPR_U32(ctx, 31, 0x246B3Cu);
    ctx->pc = 0x246B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B34u;
    // 0x246b38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x246B34u, 0x246B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B3Cu;
label_246b3c:
    // 0x246b3c: 0xc09ee62  jal         func_27B988
label_246b40:
    if (ctx->pc == 0x246B40u) {
        ctx->pc = 0x246B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B3Cu;
        // 0x246b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B44u;
        goto label_246b44;
    }
    ctx->pc = 0x246B3Cu;
    SET_GPR_U32(ctx, 31, 0x246B44u);
    ctx->pc = 0x246B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B3Cu;
    // 0x246b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B988u, 0x246B3Cu, 0x246B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B44u;
label_246b44:
    // 0x246b44: 0x10000005  b           . + 4 + (0x5 << 2)
label_246b48:
    if (ctx->pc == 0x246B48u) {
        ctx->pc = 0x246B4Cu;
        goto label_246b4c;
    }
    ctx->pc = 0x246B44u;
    {
        const bool branch_taken_0x246b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b44) {
            ctx->pc = 0x246B5Cu;
            goto label_246b5c;
        }
    }
    ctx->pc = 0x246B4Cu;
label_246b4c:
    // 0x246b4c: 0xc087502  jal         func_21D408
label_246b50:
    if (ctx->pc == 0x246B50u) {
        ctx->pc = 0x246B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B4Cu;
        // 0x246b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B54u;
        goto label_246b54;
    }
    ctx->pc = 0x246B4Cu;
    SET_GPR_U32(ctx, 31, 0x246B54u);
    ctx->pc = 0x246B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B4Cu;
    // 0x246b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x246B4Cu, 0x246B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B54u;
label_246b54:
    // 0x246b54: 0xc0a31aa  jal         func_28C6A8
label_246b58:
    if (ctx->pc == 0x246B58u) {
        ctx->pc = 0x246B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B54u;
        // 0x246b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B5Cu;
        goto label_246b5c;
    }
    ctx->pc = 0x246B54u;
    SET_GPR_U32(ctx, 31, 0x246B5Cu);
    ctx->pc = 0x246B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B54u;
    // 0x246b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C6A8u, 0x246B54u, 0x246B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B5Cu;
label_246b5c:
    // 0x246b5c: 0x10400372  beqz        $v0, . + 4 + (0x372 << 2)
label_246b60:
    if (ctx->pc == 0x246B60u) {
        ctx->pc = 0x246B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B5Cu;
        // 0x246b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B64u;
        goto label_246b64;
    }
    ctx->pc = 0x246B5Cu;
    {
        const bool branch_taken_0x246b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B5Cu;
        // 0x246b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b5c) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246B64u;
label_246b64:
    // 0x246b64: 0xc0899aa  jal         func_2266A8
label_246b68:
    if (ctx->pc == 0x246B68u) {
        ctx->pc = 0x246B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B64u;
        // 0x246b68: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B6Cu;
        goto label_246b6c;
    }
    ctx->pc = 0x246B64u;
    SET_GPR_U32(ctx, 31, 0x246B6Cu);
    ctx->pc = 0x246B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B64u;
    // 0x246b68: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x246B64u, 0x246B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B6Cu;
label_246b6c:
    // 0x246b6c: 0x1000036f  b           . + 4 + (0x36F << 2)
label_246b70:
    if (ctx->pc == 0x246B70u) {
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B74u;
        goto label_246b74;
    }
    ctx->pc = 0x246B6Cu;
    {
        const bool branch_taken_0x246b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b6c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0xc0ea146  jal         func_3A8518
label_246b78:
    if (ctx->pc == 0x246B78u) {
        ctx->pc = 0x246B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B74u;
        // 0x246b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B7Cu;
        goto label_246b7c;
    }
    ctx->pc = 0x246B74u;
    SET_GPR_U32(ctx, 31, 0x246B7Cu);
    ctx->pc = 0x246B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B74u;
    // 0x246b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246B74u, 0x246B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B7Cu;
label_246b7c:
    // 0x246b7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246b80:
    // 0x246b80: 0xc0ea146  jal         func_3A8518
label_246b84:
    if (ctx->pc == 0x246B84u) {
        ctx->pc = 0x246B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B80u;
        // 0x246b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B88u;
        goto label_246b88;
    }
    ctx->pc = 0x246B80u;
    SET_GPR_U32(ctx, 31, 0x246B88u);
    ctx->pc = 0x246B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B80u;
    // 0x246b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246B80u, 0x246B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B88u;
label_246b88:
    // 0x246b88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246b8c:
    // 0x246b8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246b90:
    // 0x246b90: 0xc091ff0  jal         func_247FC0
label_246b94:
    if (ctx->pc == 0x246B94u) {
        ctx->pc = 0x246B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B90u;
        // 0x246b94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B98u;
        goto label_246b98;
    }
    ctx->pc = 0x246B90u;
    SET_GPR_U32(ctx, 31, 0x246B98u);
    ctx->pc = 0x246B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B90u;
    // 0x246b94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247FC0u, 0x246B90u, 0x246B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B98u;
label_246b98:
    // 0x246b98: 0x10000364  b           . + 4 + (0x364 << 2)
label_246b9c:
    if (ctx->pc == 0x246B9Cu) {
        ctx->pc = 0x246B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B98u;
        // 0x246b9c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BA0u;
        goto label_246ba0;
    }
    ctx->pc = 0x246B98u;
    {
        const bool branch_taken_0x246b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B98u;
        // 0x246b9c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b98) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246BA0u;
label_246ba0:
    // 0x246ba0: 0xc0ea146  jal         func_3A8518
label_246ba4:
    if (ctx->pc == 0x246BA4u) {
        ctx->pc = 0x246BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BA0u;
        // 0x246ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BA8u;
        goto label_246ba8;
    }
    ctx->pc = 0x246BA0u;
    SET_GPR_U32(ctx, 31, 0x246BA8u);
    ctx->pc = 0x246BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BA0u;
    // 0x246ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246BA0u, 0x246BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BA8u;
label_246ba8:
    // 0x246ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246bac:
    // 0x246bac: 0xc09205c  jal         func_248170
label_246bb0:
    if (ctx->pc == 0x246BB0u) {
        ctx->pc = 0x246BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BACu;
        // 0x246bb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BB4u;
        goto label_246bb4;
    }
    ctx->pc = 0x246BACu;
    SET_GPR_U32(ctx, 31, 0x246BB4u);
    ctx->pc = 0x246BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BACu;
    // 0x246bb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248170u, 0x246BACu, 0x246BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BB4u;
label_246bb4:
    // 0x246bb4: 0x1000035d  b           . + 4 + (0x35D << 2)
label_246bb8:
    if (ctx->pc == 0x246BB8u) {
        ctx->pc = 0x246BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB4u;
        // 0x246bb8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BBCu;
        goto label_246bbc;
    }
    ctx->pc = 0x246BB4u;
    {
        const bool branch_taken_0x246bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB4u;
        // 0x246bb8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bb4) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246BBCu;
label_246bbc:
    // 0x246bbc: 0xc0ea146  jal         func_3A8518
label_246bc0:
    if (ctx->pc == 0x246BC0u) {
        ctx->pc = 0x246BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BBCu;
        // 0x246bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BC4u;
        goto label_246bc4;
    }
    ctx->pc = 0x246BBCu;
    SET_GPR_U32(ctx, 31, 0x246BC4u);
    ctx->pc = 0x246BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BBCu;
    // 0x246bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246BBCu, 0x246BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BC4u;
label_246bc4:
    // 0x246bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246bc8:
    // 0x246bc8: 0xc092044  jal         func_248110
label_246bcc:
    if (ctx->pc == 0x246BCCu) {
        ctx->pc = 0x246BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BC8u;
        // 0x246bcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BD0u;
        goto label_246bd0;
    }
    ctx->pc = 0x246BC8u;
    SET_GPR_U32(ctx, 31, 0x246BD0u);
    ctx->pc = 0x246BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BC8u;
    // 0x246bcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248110u, 0x246BC8u, 0x246BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BD0u;
label_246bd0:
    // 0x246bd0: 0x10000356  b           . + 4 + (0x356 << 2)
label_246bd4:
    if (ctx->pc == 0x246BD4u) {
        ctx->pc = 0x246BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD0u;
        // 0x246bd4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BD8u;
        goto label_246bd8;
    }
    ctx->pc = 0x246BD0u;
    {
        const bool branch_taken_0x246bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD0u;
        // 0x246bd4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bd0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246BD8u;
label_246bd8:
    // 0x246bd8: 0xc09209c  jal         func_248270
label_246bdc:
    if (ctx->pc == 0x246BDCu) {
        ctx->pc = 0x246BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD8u;
        // 0x246bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BE0u;
        goto label_246be0;
    }
    ctx->pc = 0x246BD8u;
    SET_GPR_U32(ctx, 31, 0x246BE0u);
    ctx->pc = 0x246BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BD8u;
    // 0x246bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248270u, 0x246BD8u, 0x246BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BE0u;
label_246be0:
    // 0x246be0: 0x10000352  b           . + 4 + (0x352 << 2)
label_246be4:
    if (ctx->pc == 0x246BE4u) {
        ctx->pc = 0x246BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BE0u;
        // 0x246be4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BE8u;
        goto label_246be8;
    }
    ctx->pc = 0x246BE0u;
    {
        const bool branch_taken_0x246be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BE0u;
        // 0x246be4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246be0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246BE8u;
label_246be8:
    // 0x246be8: 0xc089bfc  jal         func_226FF0
label_246bec:
    if (ctx->pc == 0x246BECu) {
        ctx->pc = 0x246BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BE8u;
        // 0x246bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BF0u;
        goto label_246bf0;
    }
    ctx->pc = 0x246BE8u;
    SET_GPR_U32(ctx, 31, 0x246BF0u);
    ctx->pc = 0x246BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BE8u;
    // 0x246bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x246BE8u, 0x246BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BF0u;
label_246bf0:
    // 0x246bf0: 0x1040034d  beqz        $v0, . + 4 + (0x34D << 2)
label_246bf4:
    if (ctx->pc == 0x246BF4u) {
        ctx->pc = 0x246BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BF0u;
        // 0x246bf4: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BF8u;
        goto label_246bf8;
    }
    ctx->pc = 0x246BF0u;
    {
        const bool branch_taken_0x246bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BF0u;
        // 0x246bf4: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bf0) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246BF8u;
label_246bf8:
    // 0x246bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246bfc:
    // 0x246bfc: 0xc089998  jal         func_226660
label_246c00:
    if (ctx->pc == 0x246C00u) {
        ctx->pc = 0x246C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BFCu;
        // 0x246c00: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C04u;
        goto label_246c04;
    }
    ctx->pc = 0x246BFCu;
    SET_GPR_U32(ctx, 31, 0x246C04u);
    ctx->pc = 0x246C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BFCu;
    // 0x246c00: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x246BFCu, 0x246C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C04u;
label_246c04:
    // 0x246c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_246c08:
    if (ctx->pc == 0x246C08u) {
        ctx->pc = 0x246C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C04u;
        // 0x246c08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C0Cu;
        goto label_246c0c;
    }
    ctx->pc = 0x246C04u;
    {
        const bool branch_taken_0x246c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C04u;
        // 0x246c08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c04) {
            ctx->pc = 0x246C1Cu;
            goto label_246c1c;
        }
    }
    ctx->pc = 0x246C0Cu;
label_246c0c:
    // 0x246c0c: 0xc0961b6  jal         func_2586D8
label_246c10:
    if (ctx->pc == 0x246C10u) {
        ctx->pc = 0x246C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C0Cu;
        // 0x246c10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C14u;
        goto label_246c14;
    }
    ctx->pc = 0x246C0Cu;
    SET_GPR_U32(ctx, 31, 0x246C14u);
    ctx->pc = 0x246C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C0Cu;
    // 0x246c10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2586D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586D8u, 0x246C0Cu, 0x246C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C14u;
label_246c14:
    // 0x246c14: 0x10000345  b           . + 4 + (0x345 << 2)
label_246c18:
    if (ctx->pc == 0x246C18u) {
        ctx->pc = 0x246C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C14u;
        // 0x246c18: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C1Cu;
        goto label_246c1c;
    }
    ctx->pc = 0x246C14u;
    {
        const bool branch_taken_0x246c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C14u;
        // 0x246c18: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c14) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246C1Cu;
label_246c1c:
    // 0x246c1c: 0xc089998  jal         func_226660
label_246c20:
    if (ctx->pc == 0x246C20u) {
        ctx->pc = 0x246C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C1Cu;
        // 0x246c20: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C24u;
        goto label_246c24;
    }
    ctx->pc = 0x246C1Cu;
    SET_GPR_U32(ctx, 31, 0x246C24u);
    ctx->pc = 0x246C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C1Cu;
    // 0x246c20: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x246C1Cu, 0x246C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C24u;
label_246c24:
    // 0x246c24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_246c28:
    if (ctx->pc == 0x246C28u) {
        ctx->pc = 0x246C2Cu;
        goto label_246c2c;
    }
    ctx->pc = 0x246C24u;
    {
        const bool branch_taken_0x246c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246c24) {
            ctx->pc = 0x246C3Cu;
            goto label_246c3c;
        }
    }
    ctx->pc = 0x246C2Cu;
label_246c2c:
    // 0x246c2c: 0xc089f4a  jal         func_227D28
label_246c30:
    if (ctx->pc == 0x246C30u) {
        ctx->pc = 0x246C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C2Cu;
        // 0x246c30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C34u;
        goto label_246c34;
    }
    ctx->pc = 0x246C2Cu;
    SET_GPR_U32(ctx, 31, 0x246C34u);
    ctx->pc = 0x246C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C2Cu;
    // 0x246c30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x246C2Cu, 0x246C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C34u;
label_246c34:
    // 0x246c34: 0x1040033d  beqz        $v0, . + 4 + (0x33D << 2)
label_246c38:
    if (ctx->pc == 0x246C38u) {
        ctx->pc = 0x246C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C34u;
        // 0x246c38: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C3Cu;
        goto label_246c3c;
    }
    ctx->pc = 0x246C34u;
    {
        const bool branch_taken_0x246c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C34u;
        // 0x246c38: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c34) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246C3Cu;
label_246c3c:
    // 0x246c3c: 0xc095fce  jal         func_257F38
label_246c40:
    if (ctx->pc == 0x246C40u) {
        ctx->pc = 0x246C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C3Cu;
        // 0x246c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C44u;
        goto label_246c44;
    }
    ctx->pc = 0x246C3Cu;
    SET_GPR_U32(ctx, 31, 0x246C44u);
    ctx->pc = 0x246C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C3Cu;
    // 0x246c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x246C3Cu, 0x246C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C44u;
label_246c44:
    // 0x246c44: 0x10000339  b           . + 4 + (0x339 << 2)
label_246c48:
    if (ctx->pc == 0x246C48u) {
        ctx->pc = 0x246C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C44u;
        // 0x246c48: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C4Cu;
        goto label_246c4c;
    }
    ctx->pc = 0x246C44u;
    {
        const bool branch_taken_0x246c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C44u;
        // 0x246c48: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c44) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246C4Cu;
label_246c4c:
    // 0x246c4c: 0xc0ea146  jal         func_3A8518
label_246c50:
    if (ctx->pc == 0x246C50u) {
        ctx->pc = 0x246C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C4Cu;
        // 0x246c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C54u;
        goto label_246c54;
    }
    ctx->pc = 0x246C4Cu;
    SET_GPR_U32(ctx, 31, 0x246C54u);
    ctx->pc = 0x246C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C4Cu;
    // 0x246c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246C4Cu, 0x246C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C54u;
label_246c54:
    // 0x246c54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246c58:
    // 0x246c58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246c5c:
    // 0x246c5c: 0xc0ea12a  jal         func_3A84A8
label_246c60:
    if (ctx->pc == 0x246C60u) {
        ctx->pc = 0x246C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C5Cu;
        // 0x246c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C64u;
        goto label_246c64;
    }
    ctx->pc = 0x246C5Cu;
    SET_GPR_U32(ctx, 31, 0x246C64u);
    ctx->pc = 0x246C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C5Cu;
    // 0x246c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x246C5Cu, 0x246C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x246c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_246c68:
    // 0x246c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246c6c:
    // 0x246c6c: 0xc0ea132  jal         func_3A84C8
label_246c70:
    if (ctx->pc == 0x246C70u) {
        ctx->pc = 0x246C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C6Cu;
        // 0x246c70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C74u;
        goto label_246c74;
    }
    ctx->pc = 0x246C6Cu;
    SET_GPR_U32(ctx, 31, 0x246C74u);
    ctx->pc = 0x246C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C6Cu;
    // 0x246c70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84C8u, 0x246C6Cu, 0x246C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C74u;
label_246c74:
    // 0x246c74: 0xc089c18  jal         func_227060
label_246c78:
    if (ctx->pc == 0x246C78u) {
        ctx->pc = 0x246C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C74u;
        // 0x246c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C7Cu;
        goto label_246c7c;
    }
    ctx->pc = 0x246C74u;
    SET_GPR_U32(ctx, 31, 0x246C7Cu);
    ctx->pc = 0x246C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C74u;
    // 0x246c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x246C74u, 0x246C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C7Cu;
label_246c7c:
    // 0x246c7c: 0xc0e57ce  jal         func_395F38
label_246c80:
    if (ctx->pc == 0x246C80u) {
        ctx->pc = 0x246C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C7Cu;
        // 0x246c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C84u;
        goto label_246c84;
    }
    ctx->pc = 0x246C7Cu;
    SET_GPR_U32(ctx, 31, 0x246C84u);
    ctx->pc = 0x246C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C7Cu;
    // 0x246c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x246C7Cu, 0x246C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C84u;
label_246c84:
    // 0x246c84: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_246c88:
    if (ctx->pc == 0x246C88u) {
        ctx->pc = 0x246C8Cu;
        goto label_246c8c;
    }
    ctx->pc = 0x246C84u;
    {
        const bool branch_taken_0x246c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c84) {
            ctx->pc = 0x246CF4u;
            goto label_246cf4;
        }
    }
    ctx->pc = 0x246C8Cu;
label_246c8c:
    // 0x246c8c: 0xc089bfc  jal         func_226FF0
label_246c90:
    if (ctx->pc == 0x246C90u) {
        ctx->pc = 0x246C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C8Cu;
        // 0x246c90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C94u;
        goto label_246c94;
    }
    ctx->pc = 0x246C8Cu;
    SET_GPR_U32(ctx, 31, 0x246C94u);
    ctx->pc = 0x246C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C8Cu;
    // 0x246c90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x246C8Cu, 0x246C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C94u;
label_246c94:
    // 0x246c94: 0xc0e57ce  jal         func_395F38
label_246c98:
    if (ctx->pc == 0x246C98u) {
        ctx->pc = 0x246C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C94u;
        // 0x246c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C9Cu;
        goto label_246c9c;
    }
    ctx->pc = 0x246C94u;
    SET_GPR_U32(ctx, 31, 0x246C9Cu);
    ctx->pc = 0x246C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C94u;
    // 0x246c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x246C94u, 0x246C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C9Cu;
label_246c9c:
    // 0x246c9c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_246ca0:
    if (ctx->pc == 0x246CA0u) {
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA4u;
        goto label_246ca4;
    }
    ctx->pc = 0x246C9Cu;
    {
        const bool branch_taken_0x246c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c9c) {
            ctx->pc = 0x246CF4u;
            goto label_246cf4;
        }
    }
    ctx->pc = 0x246CA4u;
label_246ca4:
    // 0x246ca4: 0xc087408  jal         func_21D020
label_246ca8:
    if (ctx->pc == 0x246CA8u) {
        ctx->pc = 0x246CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA4u;
        // 0x246ca8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CACu;
        goto label_246cac;
    }
    ctx->pc = 0x246CA4u;
    SET_GPR_U32(ctx, 31, 0x246CACu);
    ctx->pc = 0x246CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CA4u;
    // 0x246ca8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x246CA4u, 0x246CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CACu;
label_246cac:
    // 0x246cac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246cb0:
    // 0x246cb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x246cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246cb4:
    // 0x246cb4: 0xc136b24  jal         func_4DAC90
label_246cb8:
    if (ctx->pc == 0x246CB8u) {
        ctx->pc = 0x246CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CB4u;
        // 0x246cb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CBCu;
        goto label_246cbc;
    }
    ctx->pc = 0x246CB4u;
    SET_GPR_U32(ctx, 31, 0x246CBCu);
    ctx->pc = 0x246CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CB4u;
    // 0x246cb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x246CB4u, 0x246CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CBCu;
label_246cbc:
    // 0x246cbc: 0xc0e8b48  jal         func_3A2D20
label_246cc0:
    if (ctx->pc == 0x246CC0u) {
        ctx->pc = 0x246CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CBCu;
        // 0x246cc0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CC4u;
        goto label_246cc4;
    }
    ctx->pc = 0x246CBCu;
    SET_GPR_U32(ctx, 31, 0x246CC4u);
    ctx->pc = 0x246CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CBCu;
    // 0x246cc0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x246CBCu, 0x246CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CC4u;
label_246cc4:
    // 0x246cc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246cc8:
    // 0x246cc8: 0xc0e8b70  jal         func_3A2DC0
label_246ccc:
    if (ctx->pc == 0x246CCCu) {
        ctx->pc = 0x246CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC8u;
        // 0x246ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CD0u;
        goto label_246cd0;
    }
    ctx->pc = 0x246CC8u;
    SET_GPR_U32(ctx, 31, 0x246CD0u);
    ctx->pc = 0x246CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CC8u;
    // 0x246ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x246CC8u, 0x246CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CD0u;
label_246cd0:
    // 0x246cd0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246cd4:
    // 0x246cd4: 0xc0e8b68  jal         func_3A2DA0
label_246cd8:
    if (ctx->pc == 0x246CD8u) {
        ctx->pc = 0x246CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CD4u;
        // 0x246cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CDCu;
        goto label_246cdc;
    }
    ctx->pc = 0x246CD4u;
    SET_GPR_U32(ctx, 31, 0x246CDCu);
    ctx->pc = 0x246CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CD4u;
    // 0x246cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246CD4u, 0x246CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CDCu;
label_246cdc:
    // 0x246cdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246ce0:
    // 0x246ce0: 0xc0e8b58  jal         func_3A2D60
label_246ce4:
    if (ctx->pc == 0x246CE4u) {
        ctx->pc = 0x246CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CE0u;
        // 0x246ce4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CE8u;
        goto label_246ce8;
    }
    ctx->pc = 0x246CE0u;
    SET_GPR_U32(ctx, 31, 0x246CE8u);
    ctx->pc = 0x246CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CE0u;
    // 0x246ce4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246CE0u, 0x246CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CE8u;
label_246ce8:
    // 0x246ce8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246cec:
    // 0x246cec: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_246cf0:
    if (ctx->pc == 0x246CF0u) {
        ctx->pc = 0x246CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CECu;
        // 0x246cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CF4u;
        goto label_246cf4;
    }
    ctx->pc = 0x246CECu;
    {
        const bool branch_taken_0x246cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CECu;
        // 0x246cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cec) {
            ctx->pc = 0x246F70u;
            goto label_246f70;
        }
    }
    ctx->pc = 0x246CF4u;
label_246cf4:
    // 0x246cf4: 0xc089bfc  jal         func_226FF0
label_246cf8:
    if (ctx->pc == 0x246CF8u) {
        ctx->pc = 0x246CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CF4u;
        // 0x246cf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CFCu;
        goto label_246cfc;
    }
    ctx->pc = 0x246CF4u;
    SET_GPR_U32(ctx, 31, 0x246CFCu);
    ctx->pc = 0x246CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CF4u;
    // 0x246cf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x246CF4u, 0x246CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CFCu;
label_246cfc:
    // 0x246cfc: 0xc0e57ce  jal         func_395F38
label_246d00:
    if (ctx->pc == 0x246D00u) {
        ctx->pc = 0x246D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CFCu;
        // 0x246d00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D04u;
        goto label_246d04;
    }
    ctx->pc = 0x246CFCu;
    SET_GPR_U32(ctx, 31, 0x246D04u);
    ctx->pc = 0x246D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CFCu;
    // 0x246d00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x246CFCu, 0x246D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D04u;
label_246d04:
    // 0x246d04: 0x10400308  beqz        $v0, . + 4 + (0x308 << 2)
label_246d08:
    if (ctx->pc == 0x246D08u) {
        ctx->pc = 0x246D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D04u;
        // 0x246d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D0Cu;
        goto label_246d0c;
    }
    ctx->pc = 0x246D04u;
    {
        const bool branch_taken_0x246d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D04u;
        // 0x246d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d04) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246D0Cu;
label_246d0c:
    // 0x246d0c: 0xc087408  jal         func_21D020
label_246d10:
    if (ctx->pc == 0x246D10u) {
        ctx->pc = 0x246D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D0Cu;
        // 0x246d10: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D14u;
        goto label_246d14;
    }
    ctx->pc = 0x246D0Cu;
    SET_GPR_U32(ctx, 31, 0x246D14u);
    ctx->pc = 0x246D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D0Cu;
    // 0x246d10: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x246D0Cu, 0x246D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D14u;
label_246d14:
    // 0x246d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246d18:
    // 0x246d18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x246d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246d1c:
    // 0x246d1c: 0xc136b24  jal         func_4DAC90
label_246d20:
    if (ctx->pc == 0x246D20u) {
        ctx->pc = 0x246D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D1Cu;
        // 0x246d20: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D24u;
        goto label_246d24;
    }
    ctx->pc = 0x246D1Cu;
    SET_GPR_U32(ctx, 31, 0x246D24u);
    ctx->pc = 0x246D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D1Cu;
    // 0x246d20: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x246D1Cu, 0x246D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D24u;
label_246d24:
    // 0x246d24: 0xc0e8b48  jal         func_3A2D20
label_246d28:
    if (ctx->pc == 0x246D28u) {
        ctx->pc = 0x246D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D24u;
        // 0x246d28: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D2Cu;
        goto label_246d2c;
    }
    ctx->pc = 0x246D24u;
    SET_GPR_U32(ctx, 31, 0x246D2Cu);
    ctx->pc = 0x246D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D24u;
    // 0x246d28: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x246D24u, 0x246D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D2Cu;
label_246d2c:
    // 0x246d2c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246d30:
    // 0x246d30: 0xc0e8b70  jal         func_3A2DC0
label_246d34:
    if (ctx->pc == 0x246D34u) {
        ctx->pc = 0x246D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D30u;
        // 0x246d34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D38u;
        goto label_246d38;
    }
    ctx->pc = 0x246D30u;
    SET_GPR_U32(ctx, 31, 0x246D38u);
    ctx->pc = 0x246D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D30u;
    // 0x246d34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x246D30u, 0x246D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D38u;
label_246d38:
    // 0x246d38: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246d3c:
    // 0x246d3c: 0xc0e8b68  jal         func_3A2DA0
label_246d40:
    if (ctx->pc == 0x246D40u) {
        ctx->pc = 0x246D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D3Cu;
        // 0x246d40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D44u;
        goto label_246d44;
    }
    ctx->pc = 0x246D3Cu;
    SET_GPR_U32(ctx, 31, 0x246D44u);
    ctx->pc = 0x246D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D3Cu;
    // 0x246d40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246D3Cu, 0x246D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D44u;
label_246d44:
    // 0x246d44: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246d48:
    // 0x246d48: 0xc0e8b58  jal         func_3A2D60
label_246d4c:
    if (ctx->pc == 0x246D4Cu) {
        ctx->pc = 0x246D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D48u;
        // 0x246d4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D50u;
        goto label_246d50;
    }
    ctx->pc = 0x246D48u;
    SET_GPR_U32(ctx, 31, 0x246D50u);
    ctx->pc = 0x246D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D48u;
    // 0x246d4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246D48u, 0x246D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D50u;
label_246d50:
    // 0x246d50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246d54:
    // 0x246d54: 0xc0e8b58  jal         func_3A2D60
label_246d58:
    if (ctx->pc == 0x246D58u) {
        ctx->pc = 0x246D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D54u;
        // 0x246d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D5Cu;
        goto label_246d5c;
    }
    ctx->pc = 0x246D54u;
    SET_GPR_U32(ctx, 31, 0x246D5Cu);
    ctx->pc = 0x246D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D54u;
    // 0x246d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246D54u, 0x246D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D5Cu;
label_246d5c:
    // 0x246d5c: 0xc089f4a  jal         func_227D28
label_246d60:
    if (ctx->pc == 0x246D60u) {
        ctx->pc = 0x246D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D5Cu;
        // 0x246d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D64u;
        goto label_246d64;
    }
    ctx->pc = 0x246D5Cu;
    SET_GPR_U32(ctx, 31, 0x246D64u);
    ctx->pc = 0x246D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D5Cu;
    // 0x246d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x246D5Cu, 0x246D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D64u;
label_246d64:
    // 0x246d64: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246d68:
    // 0x246d68: 0xc0e8b68  jal         func_3A2DA0
label_246d6c:
    if (ctx->pc == 0x246D6Cu) {
        ctx->pc = 0x246D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D68u;
        // 0x246d6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D70u;
        goto label_246d70;
    }
    ctx->pc = 0x246D68u;
    SET_GPR_U32(ctx, 31, 0x246D70u);
    ctx->pc = 0x246D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D68u;
    // 0x246d6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246D68u, 0x246D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D70u;
label_246d70:
    // 0x246d70: 0xc089bfc  jal         func_226FF0
label_246d74:
    if (ctx->pc == 0x246D74u) {
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D78u;
        goto label_246d78;
    }
    ctx->pc = 0x246D70u;
    SET_GPR_U32(ctx, 31, 0x246D78u);
    ctx->pc = 0x246D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D70u;
    // 0x246d74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x246D70u, 0x246D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D78u;
label_246d78:
    // 0x246d78: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246d7c:
    // 0x246d7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246d80:
    // 0x246d80: 0x10000087  b           . + 4 + (0x87 << 2)
label_246d84:
    if (ctx->pc == 0x246D84u) {
        ctx->pc = 0x246D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D80u;
        // 0x246d84: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D88u;
        goto label_246d88;
    }
    ctx->pc = 0x246D80u;
    {
        const bool branch_taken_0x246d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D80u;
        // 0x246d84: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d80) {
            ctx->pc = 0x246FA0u;
            goto label_246fa0;
        }
    }
    ctx->pc = 0x246D88u;
label_246d88:
    // 0x246d88: 0xc0ea146  jal         func_3A8518
label_246d8c:
    if (ctx->pc == 0x246D8Cu) {
        ctx->pc = 0x246D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D88u;
        // 0x246d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D90u;
        goto label_246d90;
    }
    ctx->pc = 0x246D88u;
    SET_GPR_U32(ctx, 31, 0x246D90u);
    ctx->pc = 0x246D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D88u;
    // 0x246d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246D88u, 0x246D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D90u;
label_246d90:
    // 0x246d90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246d94:
    // 0x246d94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x246d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246d98:
    // 0x246d98: 0xc0ea12a  jal         func_3A84A8
label_246d9c:
    if (ctx->pc == 0x246D9Cu) {
        ctx->pc = 0x246D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D98u;
        // 0x246d9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DA0u;
        goto label_246da0;
    }
    ctx->pc = 0x246D98u;
    SET_GPR_U32(ctx, 31, 0x246DA0u);
    ctx->pc = 0x246D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D98u;
    // 0x246d9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x246D98u, 0x246DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DA0u;
label_246da0:
    // 0x246da0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x246da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_246da4:
    // 0x246da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246da8:
    // 0x246da8: 0xc0ea132  jal         func_3A84C8
label_246dac:
    if (ctx->pc == 0x246DACu) {
        ctx->pc = 0x246DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DA8u;
        // 0x246dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB0u;
        goto label_246db0;
    }
    ctx->pc = 0x246DA8u;
    SET_GPR_U32(ctx, 31, 0x246DB0u);
    ctx->pc = 0x246DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DA8u;
    // 0x246dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84C8u, 0x246DA8u, 0x246DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DB0u;
label_246db0:
    // 0x246db0: 0xc089c18  jal         func_227060
label_246db4:
    if (ctx->pc == 0x246DB4u) {
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB8u;
        goto label_246db8;
    }
    ctx->pc = 0x246DB0u;
    SET_GPR_U32(ctx, 31, 0x246DB8u);
    ctx->pc = 0x246DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DB0u;
    // 0x246db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x246DB0u, 0x246DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DB8u;
label_246db8:
    // 0x246db8: 0xc0e57ce  jal         func_395F38
label_246dbc:
    if (ctx->pc == 0x246DBCu) {
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB8u;
        // 0x246dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DC0u;
        goto label_246dc0;
    }
    ctx->pc = 0x246DB8u;
    SET_GPR_U32(ctx, 31, 0x246DC0u);
    ctx->pc = 0x246DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DB8u;
    // 0x246dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x246DB8u, 0x246DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DC0u;
label_246dc0:
    // 0x246dc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246dc4:
    // 0x246dc4: 0x106002d8  beqz        $v1, . + 4 + (0x2D8 << 2)
label_246dc8:
    if (ctx->pc == 0x246DC8u) {
        ctx->pc = 0x246DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DC4u;
        // 0x246dc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DCCu;
        goto label_246dcc;
    }
    ctx->pc = 0x246DC4u;
    {
        const bool branch_taken_0x246dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DC4u;
        // 0x246dc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dc4) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246DCCu;
label_246dcc:
    // 0x246dcc: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x246dccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_246dd0:
    // 0x246dd0: 0xc0e44cc  jal         func_391330
label_246dd4:
    if (ctx->pc == 0x246DD4u) {
        ctx->pc = 0x246DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DD0u;
        // 0x246dd4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DD8u;
        goto label_246dd8;
    }
    ctx->pc = 0x246DD0u;
    SET_GPR_U32(ctx, 31, 0x246DD8u);
    ctx->pc = 0x246DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DD0u;
    // 0x246dd4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x246DD0u, 0x246DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DD8u;
label_246dd8:
    // 0x246dd8: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x246dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_246ddc:
    // 0x246ddc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x246ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_246de0:
    // 0x246de0: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
label_246de4:
    if (ctx->pc == 0x246DE4u) {
        ctx->pc = 0x246DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DE0u;
        // 0x246de4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DE8u;
        goto label_246de8;
    }
    ctx->pc = 0x246DE0u;
    {
        const bool branch_taken_0x246de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DE0u;
        // 0x246de4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246de0) {
            ctx->pc = 0x246F20u;
            goto label_246f20;
        }
    }
    ctx->pc = 0x246DE8u;
label_246de8:
    // 0x246de8: 0x146202d0  bne         $v1, $v0, . + 4 + (0x2D0 << 2)
label_246dec:
    if (ctx->pc == 0x246DECu) {
        ctx->pc = 0x246DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DE8u;
        // 0x246dec: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DF0u;
        goto label_246df0;
    }
    ctx->pc = 0x246DE8u;
    {
        const bool branch_taken_0x246de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x246DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DE8u;
        // 0x246dec: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246de8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246DF0u;
label_246df0:
    // 0x246df0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_246df4:
    if (ctx->pc == 0x246DF4u) {
        ctx->pc = 0x246DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DF0u;
        // 0x246df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DF8u;
        goto label_246df8;
    }
    ctx->pc = 0x246DF0u;
    {
        const bool branch_taken_0x246df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DF0u;
        // 0x246df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246df0) {
            ctx->pc = 0x246F24u;
            goto label_246f24;
        }
    }
    ctx->pc = 0x246DF8u;
label_246df8:
    // 0x246df8: 0xc0ea146  jal         func_3A8518
label_246dfc:
    if (ctx->pc == 0x246DFCu) {
        ctx->pc = 0x246DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DF8u;
        // 0x246dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E00u;
        goto label_246e00;
    }
    ctx->pc = 0x246DF8u;
    SET_GPR_U32(ctx, 31, 0x246E00u);
    ctx->pc = 0x246DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DF8u;
    // 0x246dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246DF8u, 0x246E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E00u;
label_246e00:
    // 0x246e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246e04:
    // 0x246e04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x246e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246e08:
    // 0x246e08: 0xc0ea12a  jal         func_3A84A8
label_246e0c:
    if (ctx->pc == 0x246E0Cu) {
        ctx->pc = 0x246E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E08u;
        // 0x246e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E10u;
        goto label_246e10;
    }
    ctx->pc = 0x246E08u;
    SET_GPR_U32(ctx, 31, 0x246E10u);
    ctx->pc = 0x246E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E08u;
    // 0x246e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x246E08u, 0x246E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E10u;
label_246e10:
    // 0x246e10: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x246e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_246e14:
    // 0x246e14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246e18:
    // 0x246e18: 0xc0ea132  jal         func_3A84C8
label_246e1c:
    if (ctx->pc == 0x246E1Cu) {
        ctx->pc = 0x246E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E18u;
        // 0x246e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E20u;
        goto label_246e20;
    }
    ctx->pc = 0x246E18u;
    SET_GPR_U32(ctx, 31, 0x246E20u);
    ctx->pc = 0x246E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E18u;
    // 0x246e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84C8u, 0x246E18u, 0x246E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E20u;
label_246e20:
    // 0x246e20: 0xc089c18  jal         func_227060
label_246e24:
    if (ctx->pc == 0x246E24u) {
        ctx->pc = 0x246E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E20u;
        // 0x246e24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E28u;
        goto label_246e28;
    }
    ctx->pc = 0x246E20u;
    SET_GPR_U32(ctx, 31, 0x246E28u);
    ctx->pc = 0x246E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E20u;
    // 0x246e24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x246E20u, 0x246E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E28u;
label_246e28:
    // 0x246e28: 0xc0e57ce  jal         func_395F38
label_246e2c:
    if (ctx->pc == 0x246E2Cu) {
        ctx->pc = 0x246E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E28u;
        // 0x246e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E30u;
        goto label_246e30;
    }
    ctx->pc = 0x246E28u;
    SET_GPR_U32(ctx, 31, 0x246E30u);
    ctx->pc = 0x246E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E28u;
    // 0x246e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x246E28u, 0x246E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E30u;
label_246e30:
    // 0x246e30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246e34:
    // 0x246e34: 0x106002bc  beqz        $v1, . + 4 + (0x2BC << 2)
label_246e38:
    if (ctx->pc == 0x246E38u) {
        ctx->pc = 0x246E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E34u;
        // 0x246e38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E3Cu;
        goto label_246e3c;
    }
    ctx->pc = 0x246E34u;
    {
        const bool branch_taken_0x246e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E34u;
        // 0x246e38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e34) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x246E3Cu;
label_246e3c:
    // 0x246e3c: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x246e3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_246e40:
    // 0x246e40: 0xc0e44cc  jal         func_391330
label_246e44:
    if (ctx->pc == 0x246E44u) {
        ctx->pc = 0x246E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E40u;
        // 0x246e44: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E48u;
        goto label_246e48;
    }
    ctx->pc = 0x246E40u;
    SET_GPR_U32(ctx, 31, 0x246E48u);
    ctx->pc = 0x246E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E40u;
    // 0x246e44: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x246E40u, 0x246E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E48u;
label_246e48:
    // 0x246e48: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x246e48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_246e4c:
    // 0x246e4c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_246e50:
    // 0x246e50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_246e54:
    if (ctx->pc == 0x246E54u) {
        ctx->pc = 0x246E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E50u;
        // 0x246e54: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E58u;
        goto label_246e58;
    }
    ctx->pc = 0x246E50u;
    {
        const bool branch_taken_0x246e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E50u;
        // 0x246e54: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e50) {
            ctx->pc = 0x246E60u;
            goto label_246e60;
        }
    }
    ctx->pc = 0x246E58u;
label_246e58:
    // 0x246e58: 0x146202b4  bne         $v1, $v0, . + 4 + (0x2B4 << 2)
label_246e5c:
    if (ctx->pc == 0x246E5Cu) {
        ctx->pc = 0x246E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E58u;
        // 0x246e5c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E60u;
        goto label_246e60;
    }
    ctx->pc = 0x246E58u;
    {
        const bool branch_taken_0x246e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x246E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E58u;
        // 0x246e5c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e58) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246E60u;
label_246e60:
    // 0x246e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246e64:
    // 0x246e64: 0xc087408  jal         func_21D020
label_246e68:
    if (ctx->pc == 0x246E68u) {
        ctx->pc = 0x246E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E64u;
        // 0x246e68: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E6Cu;
        goto label_246e6c;
    }
    ctx->pc = 0x246E64u;
    SET_GPR_U32(ctx, 31, 0x246E6Cu);
    ctx->pc = 0x246E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E64u;
    // 0x246e68: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x246E64u, 0x246E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E6Cu;
label_246e6c:
    // 0x246e6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246e70:
    // 0x246e70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x246e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246e74:
    // 0x246e74: 0xc136b24  jal         func_4DAC90
label_246e78:
    if (ctx->pc == 0x246E78u) {
        ctx->pc = 0x246E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E74u;
        // 0x246e78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E7Cu;
        goto label_246e7c;
    }
    ctx->pc = 0x246E74u;
    SET_GPR_U32(ctx, 31, 0x246E7Cu);
    ctx->pc = 0x246E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E74u;
    // 0x246e78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x246E74u, 0x246E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E7Cu;
label_246e7c:
    // 0x246e7c: 0xc0e8b48  jal         func_3A2D20
label_246e80:
    if (ctx->pc == 0x246E80u) {
        ctx->pc = 0x246E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E7Cu;
        // 0x246e80: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E84u;
        goto label_246e84;
    }
    ctx->pc = 0x246E7Cu;
    SET_GPR_U32(ctx, 31, 0x246E84u);
    ctx->pc = 0x246E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E7Cu;
    // 0x246e80: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x246E7Cu, 0x246E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E84u;
label_246e84:
    // 0x246e84: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246e88:
    // 0x246e88: 0xc0e8b70  jal         func_3A2DC0
label_246e8c:
    if (ctx->pc == 0x246E8Cu) {
        ctx->pc = 0x246E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E88u;
        // 0x246e8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E90u;
        goto label_246e90;
    }
    ctx->pc = 0x246E88u;
    SET_GPR_U32(ctx, 31, 0x246E90u);
    ctx->pc = 0x246E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E88u;
    // 0x246e8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x246E88u, 0x246E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E90u;
label_246e90:
    // 0x246e90: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246e94:
    // 0x246e94: 0xc0e8b68  jal         func_3A2DA0
label_246e98:
    if (ctx->pc == 0x246E98u) {
        ctx->pc = 0x246E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E94u;
        // 0x246e98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E9Cu;
        goto label_246e9c;
    }
    ctx->pc = 0x246E94u;
    SET_GPR_U32(ctx, 31, 0x246E9Cu);
    ctx->pc = 0x246E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E94u;
    // 0x246e98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246E94u, 0x246E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E9Cu;
label_246e9c:
    // 0x246e9c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246ea0:
    // 0x246ea0: 0xc0e8b58  jal         func_3A2D60
label_246ea4:
    if (ctx->pc == 0x246EA4u) {
        ctx->pc = 0x246EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EA0u;
        // 0x246ea4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EA8u;
        goto label_246ea8;
    }
    ctx->pc = 0x246EA0u;
    SET_GPR_U32(ctx, 31, 0x246EA8u);
    ctx->pc = 0x246EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EA0u;
    // 0x246ea4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246EA0u, 0x246EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EA8u;
label_246ea8:
    // 0x246ea8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246eac:
    // 0x246eac: 0xc0e8b58  jal         func_3A2D60
label_246eb0:
    if (ctx->pc == 0x246EB0u) {
        ctx->pc = 0x246EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EACu;
        // 0x246eb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EB4u;
        goto label_246eb4;
    }
    ctx->pc = 0x246EACu;
    SET_GPR_U32(ctx, 31, 0x246EB4u);
    ctx->pc = 0x246EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EACu;
    // 0x246eb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246EACu, 0x246EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EB4u;
label_246eb4:
    // 0x246eb4: 0xc089f4a  jal         func_227D28
label_246eb8:
    if (ctx->pc == 0x246EB8u) {
        ctx->pc = 0x246EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EB4u;
        // 0x246eb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EBCu;
        goto label_246ebc;
    }
    ctx->pc = 0x246EB4u;
    SET_GPR_U32(ctx, 31, 0x246EBCu);
    ctx->pc = 0x246EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EB4u;
    // 0x246eb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x246EB4u, 0x246EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EBCu;
label_246ebc:
    // 0x246ebc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246ec0:
    // 0x246ec0: 0xc0e8b68  jal         func_3A2DA0
label_246ec4:
    if (ctx->pc == 0x246EC4u) {
        ctx->pc = 0x246EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC0u;
        // 0x246ec4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EC8u;
        goto label_246ec8;
    }
    ctx->pc = 0x246EC0u;
    SET_GPR_U32(ctx, 31, 0x246EC8u);
    ctx->pc = 0x246EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EC0u;
    // 0x246ec4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246EC0u, 0x246EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EC8u;
label_246ec8:
    // 0x246ec8: 0xc089c18  jal         func_227060
label_246ecc:
    if (ctx->pc == 0x246ECCu) {
        ctx->pc = 0x246ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC8u;
        // 0x246ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246ED0u;
        goto label_246ed0;
    }
    ctx->pc = 0x246EC8u;
    SET_GPR_U32(ctx, 31, 0x246ED0u);
    ctx->pc = 0x246ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EC8u;
    // 0x246ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x246EC8u, 0x246ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246ED0u;
label_246ed0:
    // 0x246ed0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246ed4:
    // 0x246ed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246ed8:
    // 0x246ed8: 0x10000031  b           . + 4 + (0x31 << 2)
label_246edc:
    if (ctx->pc == 0x246EDCu) {
        ctx->pc = 0x246EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ED8u;
        // 0x246edc: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EE0u;
        goto label_246ee0;
    }
    ctx->pc = 0x246ED8u;
    {
        const bool branch_taken_0x246ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ED8u;
        // 0x246edc: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ed8) {
            ctx->pc = 0x246FA0u;
            goto label_246fa0;
        }
    }
    ctx->pc = 0x246EE0u;
label_246ee0:
    // 0x246ee0: 0xc0ea146  jal         func_3A8518
label_246ee4:
    if (ctx->pc == 0x246EE4u) {
        ctx->pc = 0x246EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EE0u;
        // 0x246ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EE8u;
        goto label_246ee8;
    }
    ctx->pc = 0x246EE0u;
    SET_GPR_U32(ctx, 31, 0x246EE8u);
    ctx->pc = 0x246EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EE0u;
    // 0x246ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246EE0u, 0x246EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EE8u;
label_246ee8:
    // 0x246ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246eec:
    // 0x246eec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x246eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246ef0:
    // 0x246ef0: 0xc0ea12a  jal         func_3A84A8
label_246ef4:
    if (ctx->pc == 0x246EF4u) {
        ctx->pc = 0x246EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EF0u;
        // 0x246ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EF8u;
        goto label_246ef8;
    }
    ctx->pc = 0x246EF0u;
    SET_GPR_U32(ctx, 31, 0x246EF8u);
    ctx->pc = 0x246EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EF0u;
    // 0x246ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x246EF0u, 0x246EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EF8u;
label_246ef8:
    // 0x246ef8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x246ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_246efc:
    // 0x246efc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246f00:
    // 0x246f00: 0xc0ea132  jal         func_3A84C8
label_246f04:
    if (ctx->pc == 0x246F04u) {
        ctx->pc = 0x246F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F00u;
        // 0x246f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F08u;
        goto label_246f08;
    }
    ctx->pc = 0x246F00u;
    SET_GPR_U32(ctx, 31, 0x246F08u);
    ctx->pc = 0x246F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F00u;
    // 0x246f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84C8u, 0x246F00u, 0x246F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F08u;
label_246f08:
    // 0x246f08: 0xc089c18  jal         func_227060
label_246f0c:
    if (ctx->pc == 0x246F0Cu) {
        ctx->pc = 0x246F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F08u;
        // 0x246f0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F10u;
        goto label_246f10;
    }
    ctx->pc = 0x246F08u;
    SET_GPR_U32(ctx, 31, 0x246F10u);
    ctx->pc = 0x246F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F08u;
    // 0x246f0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x246F08u, 0x246F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F10u;
label_246f10:
    // 0x246f10: 0xc0e57ce  jal         func_395F38
label_246f14:
    if (ctx->pc == 0x246F14u) {
        ctx->pc = 0x246F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F10u;
        // 0x246f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F18u;
        goto label_246f18;
    }
    ctx->pc = 0x246F10u;
    SET_GPR_U32(ctx, 31, 0x246F18u);
    ctx->pc = 0x246F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F10u;
    // 0x246f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x246F10u, 0x246F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F18u;
label_246f18:
    // 0x246f18: 0x10400284  beqz        $v0, . + 4 + (0x284 << 2)
label_246f1c:
    if (ctx->pc == 0x246F1Cu) {
        ctx->pc = 0x246F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F18u;
        // 0x246f1c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F20u;
        goto label_246f20;
    }
    ctx->pc = 0x246F18u;
    {
        const bool branch_taken_0x246f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F18u;
        // 0x246f1c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f18) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246F20u;
label_246f20:
    // 0x246f20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246f24:
    // 0x246f24: 0xc087408  jal         func_21D020
label_246f28:
    if (ctx->pc == 0x246F28u) {
        ctx->pc = 0x246F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F24u;
        // 0x246f28: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F2Cu;
        goto label_246f2c;
    }
    ctx->pc = 0x246F24u;
    SET_GPR_U32(ctx, 31, 0x246F2Cu);
    ctx->pc = 0x246F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F24u;
    // 0x246f28: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x246F24u, 0x246F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F2Cu;
label_246f2c:
    // 0x246f2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246f30:
    // 0x246f30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x246f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246f34:
    // 0x246f34: 0xc136b24  jal         func_4DAC90
label_246f38:
    if (ctx->pc == 0x246F38u) {
        ctx->pc = 0x246F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F34u;
        // 0x246f38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F3Cu;
        goto label_246f3c;
    }
    ctx->pc = 0x246F34u;
    SET_GPR_U32(ctx, 31, 0x246F3Cu);
    ctx->pc = 0x246F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F34u;
    // 0x246f38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x246F34u, 0x246F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F3Cu;
label_246f3c:
    // 0x246f3c: 0xc0e8b48  jal         func_3A2D20
label_246f40:
    if (ctx->pc == 0x246F40u) {
        ctx->pc = 0x246F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F3Cu;
        // 0x246f40: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F44u;
        goto label_246f44;
    }
    ctx->pc = 0x246F3Cu;
    SET_GPR_U32(ctx, 31, 0x246F44u);
    ctx->pc = 0x246F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F3Cu;
    // 0x246f40: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x246F3Cu, 0x246F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F44u;
label_246f44:
    // 0x246f44: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246f48:
    // 0x246f48: 0xc0e8b70  jal         func_3A2DC0
label_246f4c:
    if (ctx->pc == 0x246F4Cu) {
        ctx->pc = 0x246F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F48u;
        // 0x246f4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F50u;
        goto label_246f50;
    }
    ctx->pc = 0x246F48u;
    SET_GPR_U32(ctx, 31, 0x246F50u);
    ctx->pc = 0x246F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F48u;
    // 0x246f4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x246F48u, 0x246F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F50u;
label_246f50:
    // 0x246f50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246f54:
    // 0x246f54: 0xc0e8b68  jal         func_3A2DA0
label_246f58:
    if (ctx->pc == 0x246F58u) {
        ctx->pc = 0x246F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F54u;
        // 0x246f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F5Cu;
        goto label_246f5c;
    }
    ctx->pc = 0x246F54u;
    SET_GPR_U32(ctx, 31, 0x246F5Cu);
    ctx->pc = 0x246F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F54u;
    // 0x246f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246F54u, 0x246F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F5Cu;
label_246f5c:
    // 0x246f5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246f60:
    // 0x246f60: 0xc0e8b58  jal         func_3A2D60
label_246f64:
    if (ctx->pc == 0x246F64u) {
        ctx->pc = 0x246F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F60u;
        // 0x246f64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F68u;
        goto label_246f68;
    }
    ctx->pc = 0x246F60u;
    SET_GPR_U32(ctx, 31, 0x246F68u);
    ctx->pc = 0x246F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F60u;
    // 0x246f64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246F60u, 0x246F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F68u;
label_246f68:
    // 0x246f68: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246f6c:
    // 0x246f6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x246f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_246f70:
    // 0x246f70: 0xc0e8b58  jal         func_3A2D60
label_246f74:
    if (ctx->pc == 0x246F74u) {
        ctx->pc = 0x246F78u;
        goto label_246f78;
    }
    ctx->pc = 0x246F70u;
    SET_GPR_U32(ctx, 31, 0x246F78u);
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x246F70u, 0x246F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F78u;
label_246f78:
    // 0x246f78: 0xc089f4a  jal         func_227D28
label_246f7c:
    if (ctx->pc == 0x246F7Cu) {
        ctx->pc = 0x246F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F78u;
        // 0x246f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F80u;
        goto label_246f80;
    }
    ctx->pc = 0x246F78u;
    SET_GPR_U32(ctx, 31, 0x246F80u);
    ctx->pc = 0x246F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F78u;
    // 0x246f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x246F78u, 0x246F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F80u;
label_246f80:
    // 0x246f80: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246f84:
    // 0x246f84: 0xc0e8b68  jal         func_3A2DA0
label_246f88:
    if (ctx->pc == 0x246F88u) {
        ctx->pc = 0x246F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F84u;
        // 0x246f88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F8Cu;
        goto label_246f8c;
    }
    ctx->pc = 0x246F84u;
    SET_GPR_U32(ctx, 31, 0x246F8Cu);
    ctx->pc = 0x246F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F84u;
    // 0x246f88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x246F84u, 0x246F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F8Cu;
label_246f8c:
    // 0x246f8c: 0xc089c18  jal         func_227060
label_246f90:
    if (ctx->pc == 0x246F90u) {
        ctx->pc = 0x246F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F8Cu;
        // 0x246f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F94u;
        goto label_246f94;
    }
    ctx->pc = 0x246F8Cu;
    SET_GPR_U32(ctx, 31, 0x246F94u);
    ctx->pc = 0x246F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F8Cu;
    // 0x246f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x246F8Cu, 0x246F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F94u;
label_246f94:
    // 0x246f94: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_246f98:
    // 0x246f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246f9c:
    // 0x246f9c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x246f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_246fa0:
    // 0x246fa0: 0xc0e8b80  jal         func_3A2E00
label_246fa4:
    if (ctx->pc == 0x246FA4u) {
        ctx->pc = 0x246FA8u;
        goto label_246fa8;
    }
    ctx->pc = 0x246FA0u;
    SET_GPR_U32(ctx, 31, 0x246FA8u);
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x246FA0u, 0x246FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FA8u;
label_246fa8:
    // 0x246fa8: 0xc0e8b50  jal         func_3A2D40
label_246fac:
    if (ctx->pc == 0x246FACu) {
        ctx->pc = 0x246FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA8u;
        // 0x246fac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FB0u;
        goto label_246fb0;
    }
    ctx->pc = 0x246FA8u;
    SET_GPR_U32(ctx, 31, 0x246FB0u);
    ctx->pc = 0x246FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FA8u;
    // 0x246fac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x246FA8u, 0x246FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FB0u;
label_246fb0:
    // 0x246fb0: 0x1000025e  b           . + 4 + (0x25E << 2)
label_246fb4:
    if (ctx->pc == 0x246FB4u) {
        ctx->pc = 0x246FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FB0u;
        // 0x246fb4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FB8u;
        goto label_246fb8;
    }
    ctx->pc = 0x246FB0u;
    {
        const bool branch_taken_0x246fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FB0u;
        // 0x246fb4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fb0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x246FB8u;
label_246fb8:
    // 0x246fb8: 0xc0ea146  jal         func_3A8518
label_246fbc:
    if (ctx->pc == 0x246FBCu) {
        ctx->pc = 0x246FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FB8u;
        // 0x246fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FC0u;
        goto label_246fc0;
    }
    ctx->pc = 0x246FB8u;
    SET_GPR_U32(ctx, 31, 0x246FC0u);
    ctx->pc = 0x246FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FB8u;
    // 0x246fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x246FB8u, 0x246FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FC0u;
label_246fc0:
    // 0x246fc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246fc4:
    // 0x246fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246fc8:
    // 0x246fc8: 0xc0ea12a  jal         func_3A84A8
label_246fcc:
    if (ctx->pc == 0x246FCCu) {
        ctx->pc = 0x246FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FC8u;
        // 0x246fcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FD0u;
        goto label_246fd0;
    }
    ctx->pc = 0x246FC8u;
    SET_GPR_U32(ctx, 31, 0x246FD0u);
    ctx->pc = 0x246FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FC8u;
    // 0x246fcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x246FC8u, 0x246FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FD0u;
label_246fd0:
    // 0x246fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246fd4:
    // 0x246fd4: 0xc0ea132  jal         func_3A84C8
label_246fd8:
    if (ctx->pc == 0x246FD8u) {
        ctx->pc = 0x246FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FD4u;
        // 0x246fd8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FDCu;
        goto label_246fdc;
    }
    ctx->pc = 0x246FD4u;
    SET_GPR_U32(ctx, 31, 0x246FDCu);
    ctx->pc = 0x246FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FD4u;
    // 0x246fd8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84C8u, 0x246FD4u, 0x246FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FDCu;
label_246fdc:
    // 0x246fdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x246fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_246fe0:
    // 0x246fe0: 0x8e630348  lw          $v1, 0x348($s3)
    ctx->pc = 0x246fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 840)));
label_246fe4:
    // 0x246fe4: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x246fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_246fe8:
    // 0x246fe8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_246fec:
    if (ctx->pc == 0x246FECu) {
        ctx->pc = 0x246FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FE8u;
        // 0x246fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FF0u;
        goto label_246ff0;
    }
    ctx->pc = 0x246FE8u;
    {
        const bool branch_taken_0x246fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x246FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FE8u;
        // 0x246fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fe8) {
            ctx->pc = 0x246FFCu;
            goto label_246ffc;
        }
    }
    ctx->pc = 0x246FF0u;
label_246ff0:
    // 0x246ff0: 0x8e62034c  lw          $v0, 0x34C($s3)
    ctx->pc = 0x246ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 844)));
label_246ff4:
    // 0x246ff4: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_246ff8:
    if (ctx->pc == 0x246FF8u) {
        ctx->pc = 0x246FFCu;
        goto label_246ffc;
    }
    ctx->pc = 0x246FF4u;
    {
        const bool branch_taken_0x246ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x246ff4) {
            ctx->pc = 0x247000u;
            goto label_247000;
        }
    }
    ctx->pc = 0x246FFCu;
label_246ffc:
    // 0x246ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247000:
    // 0x247000: 0x10a0024a  beqz        $a1, . + 4 + (0x24A << 2)
label_247004:
    if (ctx->pc == 0x247004u) {
        ctx->pc = 0x247004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247000u;
        // 0x247004: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247008u;
        goto label_247008;
    }
    ctx->pc = 0x247000u;
    {
        const bool branch_taken_0x247000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x247004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247000u;
        // 0x247004: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247000) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247008u;
label_247008:
    // 0x247008: 0xc0e4060  jal         func_390180
label_24700c:
    if (ctx->pc == 0x24700Cu) {
        ctx->pc = 0x24700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247008u;
        // 0x24700c: 0x26640348  addiu       $a0, $s3, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247010u;
        goto label_247010;
    }
    ctx->pc = 0x247008u;
    SET_GPR_U32(ctx, 31, 0x247010u);
    ctx->pc = 0x24700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247008u;
    // 0x24700c: 0x26640348  addiu       $a0, $s3, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x247008u, 0x247010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247010u;
label_247010:
    // 0x247010: 0xc0e57ce  jal         func_395F38
label_247014:
    if (ctx->pc == 0x247014u) {
        ctx->pc = 0x247014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247010u;
        // 0x247014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247018u;
        goto label_247018;
    }
    ctx->pc = 0x247010u;
    SET_GPR_U32(ctx, 31, 0x247018u);
    ctx->pc = 0x247014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247010u;
    // 0x247014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x247010u, 0x247018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247018u;
label_247018:
    // 0x247018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24701c:
    // 0x24701c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_247020:
    if (ctx->pc == 0x247020u) {
        ctx->pc = 0x247024u;
        goto label_247024;
    }
    ctx->pc = 0x24701Cu;
    {
        const bool branch_taken_0x24701c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24701c) {
            ctx->pc = 0x247040u;
            goto label_247040;
        }
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0xc0e4060  jal         func_390180
label_247028:
    if (ctx->pc == 0x247028u) {
        ctx->pc = 0x247028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247024u;
        // 0x247028: 0x2664034c  addiu       $a0, $s3, 0x34C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 844));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24702Cu;
        goto label_24702c;
    }
    ctx->pc = 0x247024u;
    SET_GPR_U32(ctx, 31, 0x24702Cu);
    ctx->pc = 0x247028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247024u;
    // 0x247028: 0x2664034c  addiu       $a0, $s3, 0x34C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x247024u, 0x24702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24702Cu;
label_24702c:
    // 0x24702c: 0xc0e57ce  jal         func_395F38
label_247030:
    if (ctx->pc == 0x247030u) {
        ctx->pc = 0x247030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24702Cu;
        // 0x247030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247034u;
        goto label_247034;
    }
    ctx->pc = 0x24702Cu;
    SET_GPR_U32(ctx, 31, 0x247034u);
    ctx->pc = 0x247030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24702Cu;
    // 0x247030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24702Cu, 0x247034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247034u;
label_247034:
    // 0x247034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247038:
    // 0x247038: 0x5200023c  beql        $s0, $zero, . + 4 + (0x23C << 2)
label_24703c:
    if (ctx->pc == 0x24703Cu) {
        ctx->pc = 0x24703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247038u;
        // 0x24703c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247040u;
        goto label_247040;
    }
    ctx->pc = 0x247038u;
    {
        const bool branch_taken_0x247038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x247038) {
            ctx->pc = 0x24703Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247038u;
            // 0x24703c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247040u;
label_247040:
    // 0x247040: 0xc087408  jal         func_21D020
label_247044:
    if (ctx->pc == 0x247044u) {
        ctx->pc = 0x247044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247040u;
        // 0x247044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247048u;
        goto label_247048;
    }
    ctx->pc = 0x247040u;
    SET_GPR_U32(ctx, 31, 0x247048u);
    ctx->pc = 0x247044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247040u;
    // 0x247044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x247040u, 0x247048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247048u;
label_247048:
    // 0x247048: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24704c:
    // 0x24704c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24704cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247050:
    // 0x247050: 0xc136b24  jal         func_4DAC90
label_247054:
    if (ctx->pc == 0x247054u) {
        ctx->pc = 0x247054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247050u;
        // 0x247054: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247058u;
        goto label_247058;
    }
    ctx->pc = 0x247050u;
    SET_GPR_U32(ctx, 31, 0x247058u);
    ctx->pc = 0x247054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247050u;
    // 0x247054: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x247050u, 0x247058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247058u;
label_247058:
    // 0x247058: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x247058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24705c:
    // 0x24705c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247060:
    // 0x247060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247064:
    // 0x247064: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x247064u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_247068:
    // 0x247068: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x247068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24706c:
    // 0x24706c: 0xc0e896c  jal         func_3A25B0
label_247070:
    if (ctx->pc == 0x247070u) {
        ctx->pc = 0x247070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24706Cu;
        // 0x247070: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247074u;
        goto label_247074;
    }
    ctx->pc = 0x24706Cu;
    SET_GPR_U32(ctx, 31, 0x247074u);
    ctx->pc = 0x247070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24706Cu;
    // 0x247070: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x24706Cu, 0x247074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247074u;
label_247074:
    // 0x247074: 0x1000022d  b           . + 4 + (0x22D << 2)
label_247078:
    if (ctx->pc == 0x247078u) {
        ctx->pc = 0x247078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247074u;
        // 0x247078: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24707Cu;
        goto label_24707c;
    }
    ctx->pc = 0x247074u;
    {
        const bool branch_taken_0x247074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247074u;
        // 0x247078: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247074) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x24707Cu;
label_24707c:
    // 0x24707c: 0xc0ea146  jal         func_3A8518
label_247080:
    if (ctx->pc == 0x247080u) {
        ctx->pc = 0x247080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24707Cu;
        // 0x247080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247084u;
        goto label_247084;
    }
    ctx->pc = 0x24707Cu;
    SET_GPR_U32(ctx, 31, 0x247084u);
    ctx->pc = 0x247080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24707Cu;
    // 0x247080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x24707Cu, 0x247084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247084u;
label_247084:
    // 0x247084: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x247084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_247088:
    // 0x247088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24708c:
    // 0x24708c: 0x27a40244  addiu       $a0, $sp, 0x244
    ctx->pc = 0x24708cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_247090:
    // 0x247090: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x247090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
label_247094:
    // 0x247094: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x247094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_247098:
    // 0x247098: 0xc043d5e  jal         func_10F578
label_24709c:
    if (ctx->pc == 0x24709Cu) {
        ctx->pc = 0x24709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247098u;
        // 0x24709c: 0xafa20248  sw          $v0, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470A0u;
        goto label_2470a0;
    }
    ctx->pc = 0x247098u;
    SET_GPR_U32(ctx, 31, 0x2470A0u);
    ctx->pc = 0x24709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247098u;
    // 0x24709c: 0xafa20248  sw          $v0, 0x248($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x247098u, 0x2470A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470A0u;
label_2470a0:
    // 0x2470a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2470a4:
    if (ctx->pc == 0x2470A4u) {
        ctx->pc = 0x2470A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A0u;
        // 0x2470a4: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470A8u;
        goto label_2470a8;
    }
    ctx->pc = 0x2470A0u;
    {
        const bool branch_taken_0x2470a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A0u;
        // 0x2470a4: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470a0) {
            ctx->pc = 0x2470B4u;
            goto label_2470b4;
        }
    }
    ctx->pc = 0x2470A8u;
label_2470a8:
    // 0x2470a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2470a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2470ac:
    // 0x2470ac: 0xc0440c6  jal         func_110318
label_2470b0:
    if (ctx->pc == 0x2470B0u) {
        ctx->pc = 0x2470B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470ACu;
        // 0x2470b0: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470B4u;
        goto label_2470b4;
    }
    ctx->pc = 0x2470ACu;
    SET_GPR_U32(ctx, 31, 0x2470B4u);
    ctx->pc = 0x2470B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470ACu;
    // 0x2470b0: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x2470ACu, 0x2470B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B4u;
label_2470b4:
    // 0x2470b4: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2470b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2470b8:
    // 0x2470b8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2470b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2470bc:
    // 0x2470bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2470bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2470c0:
    // 0x2470c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2470c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2470c4:
    // 0x2470c4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2470c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2470c8:
    // 0x2470c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2470cc:
    // 0x2470cc: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x2470ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_2470d0:
    // 0x2470d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2470d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2470d4:
    // 0x2470d4: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2470d8:
    // 0x2470d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2470d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2470dc:
    // 0x2470dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2470dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2470e0:
    // 0x2470e0: 0xc043f74  jal         func_10FDD0
label_2470e4:
    if (ctx->pc == 0x2470E4u) {
        ctx->pc = 0x2470E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470E0u;
        // 0x2470e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470E8u;
        goto label_2470e8;
    }
    ctx->pc = 0x2470E0u;
    SET_GPR_U32(ctx, 31, 0x2470E8u);
    ctx->pc = 0x2470E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470E0u;
    // 0x2470e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2470E0u, 0x2470E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470E8u;
label_2470e8:
    // 0x2470e8: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x2470e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_2470ec:
    // 0x2470ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2470ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2470f0:
    // 0x2470f0: 0xc087bd6  jal         func_21EF58
label_2470f4:
    if (ctx->pc == 0x2470F4u) {
        ctx->pc = 0x2470F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F0u;
        // 0x2470f4: 0x27a50248  addiu       $a1, $sp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470F8u;
        goto label_2470f8;
    }
    ctx->pc = 0x2470F0u;
    SET_GPR_U32(ctx, 31, 0x2470F8u);
    ctx->pc = 0x2470F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470F0u;
    // 0x2470f4: 0x27a50248  addiu       $a1, $sp, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x2470F0u, 0x2470F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470F8u;
label_2470f8:
    // 0x2470f8: 0x1000020c  b           . + 4 + (0x20C << 2)
label_2470fc:
    if (ctx->pc == 0x2470FCu) {
        ctx->pc = 0x2470FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F8u;
        // 0x2470fc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247100u;
        goto label_247100;
    }
    ctx->pc = 0x2470F8u;
    {
        const bool branch_taken_0x2470f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F8u;
        // 0x2470fc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470f8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247100u;
label_247100:
    // 0x247100: 0xc0ea146  jal         func_3A8518
label_247104:
    if (ctx->pc == 0x247104u) {
        ctx->pc = 0x247104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247100u;
        // 0x247104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247108u;
        goto label_247108;
    }
    ctx->pc = 0x247100u;
    SET_GPR_U32(ctx, 31, 0x247108u);
    ctx->pc = 0x247104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247100u;
    // 0x247104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x247100u, 0x247108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247108u;
label_247108:
    // 0x247108: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x247108u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_24710c:
    // 0x24710c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24710cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247110:
    // 0x247110: 0x27a4024c  addiu       $a0, $sp, 0x24C
    ctx->pc = 0x247110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_247114:
    // 0x247114: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x247114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
label_247118:
    // 0x247118: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x247118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_24711c:
    // 0x24711c: 0xc043d5e  jal         func_10F578
label_247120:
    if (ctx->pc == 0x247120u) {
        ctx->pc = 0x247120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24711Cu;
        // 0x247120: 0xafa20250  sw          $v0, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247124u;
        goto label_247124;
    }
    ctx->pc = 0x24711Cu;
    SET_GPR_U32(ctx, 31, 0x247124u);
    ctx->pc = 0x247120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24711Cu;
    // 0x247120: 0xafa20250  sw          $v0, 0x250($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x24711Cu, 0x247124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247124u;
label_247124:
    // 0x247124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_247128:
    if (ctx->pc == 0x247128u) {
        ctx->pc = 0x247128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247124u;
        // 0x247128: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24712Cu;
        goto label_24712c;
    }
    ctx->pc = 0x247124u;
    {
        const bool branch_taken_0x247124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247124u;
        // 0x247128: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247124) {
            ctx->pc = 0x247138u;
            goto label_247138;
        }
    }
    ctx->pc = 0x24712Cu;
label_24712c:
    // 0x24712c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24712cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247130:
    // 0x247130: 0xc0440c6  jal         func_110318
label_247134:
    if (ctx->pc == 0x247134u) {
        ctx->pc = 0x247134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247130u;
        // 0x247134: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247138u;
        goto label_247138;
    }
    ctx->pc = 0x247130u;
    SET_GPR_U32(ctx, 31, 0x247138u);
    ctx->pc = 0x247134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247130u;
    // 0x247134: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x247130u, 0x247138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247138u;
label_247138:
    // 0x247138: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x247138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_24713c:
    // 0x24713c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x24713cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_247140:
    // 0x247140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_247144:
    // 0x247144: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x247144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247148:
    // 0x247148: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x247148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_24714c:
    // 0x24714c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24714cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_247150:
    // 0x247150: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x247150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_247154:
    // 0x247154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247158:
    // 0x247158: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x247158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24715c:
    // 0x24715c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24715cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_247160:
    // 0x247160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247164:
    // 0x247164: 0xc043f74  jal         func_10FDD0
label_247168:
    if (ctx->pc == 0x247168u) {
        ctx->pc = 0x247168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247164u;
        // 0x247168: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24716Cu;
        goto label_24716c;
    }
    ctx->pc = 0x247164u;
    SET_GPR_U32(ctx, 31, 0x24716Cu);
    ctx->pc = 0x247168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247164u;
    // 0x247168: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x247164u, 0x24716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24716Cu;
label_24716c:
    // 0x24716c: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x24716cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_247170:
    // 0x247170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247174:
    // 0x247174: 0xc087bd6  jal         func_21EF58
label_247178:
    if (ctx->pc == 0x247178u) {
        ctx->pc = 0x247178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247174u;
        // 0x247178: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24717Cu;
        goto label_24717c;
    }
    ctx->pc = 0x247174u;
    SET_GPR_U32(ctx, 31, 0x24717Cu);
    ctx->pc = 0x247178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247174u;
    // 0x247178: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x247174u, 0x24717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24717Cu;
label_24717c:
    // 0x24717c: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_247180:
    if (ctx->pc == 0x247180u) {
        ctx->pc = 0x247180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24717Cu;
        // 0x247180: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247184u;
        goto label_247184;
    }
    ctx->pc = 0x24717Cu;
    {
        const bool branch_taken_0x24717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24717Cu;
        // 0x247180: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24717c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247184u;
label_247184:
    // 0x247184: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x247184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
label_247188:
    // 0x247188: 0x27a40254  addiu       $a0, $sp, 0x254
    ctx->pc = 0x247188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
label_24718c:
    // 0x24718c: 0xc043d5e  jal         func_10F578
label_247190:
    if (ctx->pc == 0x247190u) {
        ctx->pc = 0x247190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24718Cu;
        // 0x247190: 0xafa20254  sw          $v0, 0x254($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247194u;
        goto label_247194;
    }
    ctx->pc = 0x24718Cu;
    SET_GPR_U32(ctx, 31, 0x247194u);
    ctx->pc = 0x247190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24718Cu;
    // 0x247190: 0xafa20254  sw          $v0, 0x254($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x24718Cu, 0x247194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247194u;
label_247194:
    // 0x247194: 0x104001e4  beqz        $v0, . + 4 + (0x1E4 << 2)
label_247198:
    if (ctx->pc == 0x247198u) {
        ctx->pc = 0x247198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247194u;
        // 0x247198: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24719Cu;
        goto label_24719c;
    }
    ctx->pc = 0x247194u;
    {
        const bool branch_taken_0x247194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247194u;
        // 0x247198: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247194) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x24719Cu;
label_24719c:
    // 0x24719c: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_2471a0:
    // 0x2471a0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2471a4:
    // 0x2471a4: 0xc0440c6  jal         func_110318
label_2471a8:
    if (ctx->pc == 0x2471A8u) {
        ctx->pc = 0x2471A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471A4u;
        // 0x2471a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471ACu;
        goto label_2471ac;
    }
    ctx->pc = 0x2471A4u;
    SET_GPR_U32(ctx, 31, 0x2471ACu);
    ctx->pc = 0x2471A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471A4u;
    // 0x2471a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x2471A4u, 0x2471ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471ACu;
label_2471ac:
    // 0x2471ac: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
label_2471b0:
    // 0x2471b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2471b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2471b4:
    // 0x2471b4: 0xc087bd6  jal         func_21EF58
label_2471b8:
    if (ctx->pc == 0x2471B8u) {
        ctx->pc = 0x2471B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471B4u;
        // 0x2471b8: 0x24a58690  addiu       $a1, $a1, -0x7970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471BCu;
        goto label_2471bc;
    }
    ctx->pc = 0x2471B4u;
    SET_GPR_U32(ctx, 31, 0x2471BCu);
    ctx->pc = 0x2471B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471B4u;
    // 0x2471b8: 0x24a58690  addiu       $a1, $a1, -0x7970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x2471B4u, 0x2471BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471BCu;
label_2471bc:
    // 0x2471bc: 0x100001db  b           . + 4 + (0x1DB << 2)
label_2471c0:
    if (ctx->pc == 0x2471C0u) {
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471C4u;
        goto label_2471c4;
    }
    ctx->pc = 0x2471BCu;
    {
        const bool branch_taken_0x2471bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471bc) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2471C4u;
label_2471c4:
    // 0x2471c4: 0xc0ea146  jal         func_3A8518
label_2471c8:
    if (ctx->pc == 0x2471C8u) {
        ctx->pc = 0x2471C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471C4u;
        // 0x2471c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471CCu;
        goto label_2471cc;
    }
    ctx->pc = 0x2471C4u;
    SET_GPR_U32(ctx, 31, 0x2471CCu);
    ctx->pc = 0x2471C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471C4u;
    // 0x2471c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x2471C4u, 0x2471CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471CCu;
label_2471cc:
    // 0x2471cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2471ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2471d0:
    // 0x2471d0: 0xc087dc0  jal         func_21F700
label_2471d4:
    if (ctx->pc == 0x2471D4u) {
        ctx->pc = 0x2471D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471D0u;
        // 0x2471d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471D8u;
        goto label_2471d8;
    }
    ctx->pc = 0x2471D0u;
    SET_GPR_U32(ctx, 31, 0x2471D8u);
    ctx->pc = 0x2471D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471D0u;
    // 0x2471d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F700u, 0x2471D0u, 0x2471D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471D8u;
label_2471d8:
    // 0x2471d8: 0x100001d4  b           . + 4 + (0x1D4 << 2)
label_2471dc:
    if (ctx->pc == 0x2471DCu) {
        ctx->pc = 0x2471DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471D8u;
        // 0x2471dc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471E0u;
        goto label_2471e0;
    }
    ctx->pc = 0x2471D8u;
    {
        const bool branch_taken_0x2471d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471D8u;
        // 0x2471dc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471d8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2471E0u;
label_2471e0:
    // 0x2471e0: 0xc087502  jal         func_21D408
label_2471e4:
    if (ctx->pc == 0x2471E4u) {
        ctx->pc = 0x2471E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471E0u;
        // 0x2471e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471E8u;
        goto label_2471e8;
    }
    ctx->pc = 0x2471E0u;
    SET_GPR_U32(ctx, 31, 0x2471E8u);
    ctx->pc = 0x2471E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471E0u;
    // 0x2471e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2471E0u, 0x2471E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471E8u;
label_2471e8:
    // 0x2471e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2471e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2471ec:
    // 0x2471ec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2471ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2471f0:
    // 0x2471f0: 0x106001ce  beqz        $v1, . + 4 + (0x1CE << 2)
label_2471f4:
    if (ctx->pc == 0x2471F4u) {
        ctx->pc = 0x2471F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471F0u;
        // 0x2471f4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471F8u;
        goto label_2471f8;
    }
    ctx->pc = 0x2471F0u;
    {
        const bool branch_taken_0x2471f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471F0u;
        // 0x2471f4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471f0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2471F8u;
label_2471f8:
    // 0x2471f8: 0xc0960cc  jal         func_258330
label_2471fc:
    if (ctx->pc == 0x2471FCu) {
        ctx->pc = 0x2471FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471F8u;
        // 0x2471fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247200u;
        goto label_247200;
    }
    ctx->pc = 0x2471F8u;
    SET_GPR_U32(ctx, 31, 0x247200u);
    ctx->pc = 0x2471FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471F8u;
    // 0x2471fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x2471F8u, 0x247200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247200u;
label_247200:
    // 0x247200: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_247204:
    if (ctx->pc == 0x247204u) {
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247200u;
        // 0x247204: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247208u;
        goto label_247208;
    }
    ctx->pc = 0x247200u;
    {
        const bool branch_taken_0x247200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247200u;
        // 0x247204: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247200) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247208u;
label_247208:
    // 0x247208: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x247208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_24720c:
    // 0x24720c: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x24720cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_247210:
    // 0x247210: 0xc089974  jal         func_2265D0
label_247214:
    if (ctx->pc == 0x247214u) {
        ctx->pc = 0x247214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247210u;
        // 0x247214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247218u;
        goto label_247218;
    }
    ctx->pc = 0x247210u;
    SET_GPR_U32(ctx, 31, 0x247218u);
    ctx->pc = 0x247214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247210u;
    // 0x247214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x247210u, 0x247218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247218u;
label_247218:
    // 0x247218: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_24721c:
    if (ctx->pc == 0x24721Cu) {
        ctx->pc = 0x24721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247218u;
        // 0x24721c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247220u;
        goto label_247220;
    }
    ctx->pc = 0x247218u;
    {
        const bool branch_taken_0x247218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247218u;
        // 0x24721c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247218) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247220u;
label_247220:
    // 0x247220: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x247220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_247224:
    // 0x247224: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x247224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_247228:
    // 0x247228: 0xc089988  jal         func_226620
label_24722c:
    if (ctx->pc == 0x24722Cu) {
        ctx->pc = 0x24722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247228u;
        // 0x24722c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247230u;
        goto label_247230;
    }
    ctx->pc = 0x247228u;
    SET_GPR_U32(ctx, 31, 0x247230u);
    ctx->pc = 0x24722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247228u;
    // 0x24722c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x247228u, 0x247230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247230u;
label_247230:
    // 0x247230: 0x100001be  b           . + 4 + (0x1BE << 2)
label_247234:
    if (ctx->pc == 0x247234u) {
        ctx->pc = 0x247234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247230u;
        // 0x247234: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247238u;
        goto label_247238;
    }
    ctx->pc = 0x247230u;
    {
        const bool branch_taken_0x247230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247230u;
        // 0x247234: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247230) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247238u;
label_247238:
    // 0x247238: 0xc0899ae  jal         func_2266B8
label_24723c:
    if (ctx->pc == 0x24723Cu) {
        ctx->pc = 0x24723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247238u;
        // 0x24723c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247240u;
        goto label_247240;
    }
    ctx->pc = 0x247238u;
    SET_GPR_U32(ctx, 31, 0x247240u);
    ctx->pc = 0x24723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247238u;
    // 0x24723c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x247238u, 0x247240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247240u;
label_247240:
    // 0x247240: 0x2842009c  slti        $v0, $v0, 0x9C
    ctx->pc = 0x247240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)156) ? 1 : 0);
label_247244:
    // 0x247244: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_247248:
    if (ctx->pc == 0x247248u) {
        ctx->pc = 0x247248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247244u;
        // 0x247248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24724Cu;
        goto label_24724c;
    }
    ctx->pc = 0x247244u;
    {
        const bool branch_taken_0x247244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247244u;
        // 0x247248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247244) {
            ctx->pc = 0x247268u;
            goto label_247268;
        }
    }
    ctx->pc = 0x24724Cu;
label_24724c:
    // 0x24724c: 0xc0899ae  jal         func_2266B8
label_247250:
    if (ctx->pc == 0x247250u) {
        ctx->pc = 0x247250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24724Cu;
        // 0x247250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247254u;
        goto label_247254;
    }
    ctx->pc = 0x24724Cu;
    SET_GPR_U32(ctx, 31, 0x247254u);
    ctx->pc = 0x247250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24724Cu;
    // 0x247250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x24724Cu, 0x247254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247254u;
label_247254:
    // 0x247254: 0x284200a4  slti        $v0, $v0, 0xA4
    ctx->pc = 0x247254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)164) ? 1 : 0);
label_247258:
    // 0x247258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24725c:
    if (ctx->pc == 0x24725Cu) {
        ctx->pc = 0x24725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247258u;
        // 0x24725c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247260u;
        goto label_247260;
    }
    ctx->pc = 0x247258u;
    {
        const bool branch_taken_0x247258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247258u;
        // 0x24725c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247258) {
            ctx->pc = 0x247268u;
            goto label_247268;
        }
    }
    ctx->pc = 0x247260u;
label_247260:
    // 0x247260: 0xc088e80  jal         func_223A00
label_247264:
    if (ctx->pc == 0x247264u) {
        ctx->pc = 0x247264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247260u;
        // 0x247264: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247268u;
        goto label_247268;
    }
    ctx->pc = 0x247260u;
    SET_GPR_U32(ctx, 31, 0x247268u);
    ctx->pc = 0x247264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247260u;
    // 0x247264: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x247260u, 0x247268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247268u;
label_247268:
    // 0x247268: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_24726c:
    if (ctx->pc == 0x24726Cu) {
        ctx->pc = 0x247270u;
        goto label_247270;
    }
    ctx->pc = 0x247268u;
    {
        const bool branch_taken_0x247268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247268) {
            ctx->pc = 0x2473A8u;
            goto label_2473a8;
        }
    }
    ctx->pc = 0x247270u;
label_247270:
    // 0x247270: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x247270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_247274:
    // 0x247274: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x247274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_247278:
    // 0x247278: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x247278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24727c:
    // 0x24727c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x24727cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_247280:
    // 0x247280: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x247280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_247284:
    // 0x247284: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x247284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_247288:
    // 0x247288: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x247288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_24728c:
    // 0x24728c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x24728cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_247290:
    // 0x247290: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x247290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_247294:
    // 0x247294: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x247294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_247298:
    // 0x247298: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x247298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_24729c:
    // 0x24729c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x24729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2472a0:
    // 0x2472a0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2472a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2472a4:
    // 0x2472a4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2472a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2472a8:
    // 0x2472a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2472a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2472ac:
    // 0x2472ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2472b0:
    // 0x2472b0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2472b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2472b4:
    // 0x2472b4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2472b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2472b8:
    // 0x2472b8: 0x40f809  jalr        $v0
label_2472bc:
    if (ctx->pc == 0x2472BCu) {
        ctx->pc = 0x2472BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472B8u;
        // 0x2472bc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472C0u;
        goto label_2472c0;
    }
    ctx->pc = 0x2472B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2472C0u);
        ctx->pc = 0x2472BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472B8u;
        // 0x2472bc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2472B8u, 0x2472C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x2472c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2472c4:
    // 0x2472c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2472c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2472c8:
    // 0x2472c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2472c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2472cc:
    // 0x2472cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2472ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2472d0:
    // 0x2472d0: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x2472d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_2472d4:
    // 0x2472d4: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x2472d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_2472d8:
    // 0x2472d8: 0x60f809  jalr        $v1
label_2472dc:
    if (ctx->pc == 0x2472DCu) {
        ctx->pc = 0x2472DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472D8u;
        // 0x2472dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472E0u;
        goto label_2472e0;
    }
    ctx->pc = 0x2472D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2472E0u);
        ctx->pc = 0x2472DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472D8u;
        // 0x2472dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2472D8u, 0x2472E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2472E0u;
label_2472e0:
    // 0x2472e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2472e4:
    // 0x2472e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2472e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2472e8:
    // 0x2472e8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2472e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2472ec:
    // 0x2472ec: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2472ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2472f0:
    // 0x2472f0: 0x40f809  jalr        $v0
label_2472f4:
    if (ctx->pc == 0x2472F4u) {
        ctx->pc = 0x2472F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472F0u;
        // 0x2472f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472F8u;
        goto label_2472f8;
    }
    ctx->pc = 0x2472F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2472F8u);
        ctx->pc = 0x2472F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472F0u;
        // 0x2472f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2472F0u, 0x2472F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2472F8u;
label_2472f8:
    // 0x2472f8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2472f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2472fc:
    // 0x2472fc: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_247300:
    // 0x247300: 0x34c60408  ori         $a2, $a2, 0x408
    ctx->pc = 0x247300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1032);
label_247304:
    // 0x247304: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x247304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_247308:
    // 0x247308: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x247308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_24730c:
    // 0x24730c: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_247310:
    // 0x247310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x247310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_247314:
    // 0x247314: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x247314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_247318:
    // 0x247318: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x247318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_24731c:
    // 0x24731c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247320:
    // 0x247320: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x247320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_247324:
    // 0x247324: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x247324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247328:
    // 0x247328: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x247328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_24732c:
    // 0x24732c: 0xc0cf9fc  jal         func_33E7F0
label_247330:
    if (ctx->pc == 0x247330u) {
        ctx->pc = 0x247330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24732Cu;
        // 0x247330: 0x266705c0  addiu       $a3, $s3, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247334u;
        goto label_247334;
    }
    ctx->pc = 0x24732Cu;
    SET_GPR_U32(ctx, 31, 0x247334u);
    ctx->pc = 0x247330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24732Cu;
    // 0x247330: 0x266705c0  addiu       $a3, $s3, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x24732Cu, 0x247334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247334u;
label_247334:
    // 0x247334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247338:
    // 0x247338: 0x10a0017b  beqz        $a1, . + 4 + (0x17B << 2)
label_24733c:
    if (ctx->pc == 0x24733Cu) {
        ctx->pc = 0x24733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247338u;
        // 0x24733c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247340u;
        goto label_247340;
    }
    ctx->pc = 0x247338u;
    {
        const bool branch_taken_0x247338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247338u;
        // 0x24733c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247338) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x247340u;
label_247340:
    // 0x247340: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x247340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247344:
    // 0x247344: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x247344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_247348:
    // 0x247348: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x247348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_24734c:
    // 0x24734c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247350:
    // 0x247350: 0x2610ff40  addiu       $s0, $s0, -0xC0
    ctx->pc = 0x247350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967104));
label_247354:
    // 0x247354: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x247354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_247358:
    // 0x247358: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x247358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_24735c:
    // 0x24735c: 0x40f809  jalr        $v0
label_247360:
    if (ctx->pc == 0x247360u) {
        ctx->pc = 0x247360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24735Cu;
        // 0x247360: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247364u;
        goto label_247364;
    }
    ctx->pc = 0x24735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247364u);
        ctx->pc = 0x247360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24735Cu;
        // 0x247360: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24735Cu, 0x247364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247364u;
label_247364:
    // 0x247364: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x247364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_247368:
    // 0x247368: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_24736c:
    // 0x24736c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_247370:
    // 0x247370: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_247374:
    // 0x247374: 0xc0f809  jalr        $a2
label_247378:
    if (ctx->pc == 0x247378u) {
        ctx->pc = 0x247378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247374u;
        // 0x247378: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24737Cu;
        goto label_24737c;
    }
    ctx->pc = 0x247374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24737Cu);
        ctx->pc = 0x247378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247374u;
        // 0x247378: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247374u, 0x24737Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24737Cu;
label_24737c:
    // 0x24737c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_247380:
    if (ctx->pc == 0x247380u) {
        ctx->pc = 0x247380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24737Cu;
        // 0x247380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247384u;
        goto label_247384;
    }
    ctx->pc = 0x24737Cu;
    {
        const bool branch_taken_0x24737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24737Cu;
        // 0x247380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24737c) {
            ctx->pc = 0x247398u;
            goto label_247398;
        }
    }
    ctx->pc = 0x247384u;
label_247384:
    // 0x247384: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x247384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247388:
    // 0x247388: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_24738c:
    // 0x24738c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_247390:
    // 0x247390: 0x40f809  jalr        $v0
label_247394:
    if (ctx->pc == 0x247394u) {
        ctx->pc = 0x247394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247390u;
        // 0x247394: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247398u;
        goto label_247398;
    }
    ctx->pc = 0x247390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247398u);
        ctx->pc = 0x247394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247390u;
        // 0x247394: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247390u, 0x247398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247398u;
label_247398:
    // 0x247398: 0x5611ffed  bnel        $s0, $s1, . + 4 + (-0x13 << 2)
label_24739c:
    if (ctx->pc == 0x24739Cu) {
        ctx->pc = 0x24739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247398u;
        // 0x24739c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473A0u;
        goto label_2473a0;
    }
    ctx->pc = 0x247398u;
    {
        const bool branch_taken_0x247398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x247398) {
            ctx->pc = 0x24739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247398u;
            // 0x24739c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247350;
        }
    }
    ctx->pc = 0x2473A0u;
label_2473a0:
    // 0x2473a0: 0x10000162  b           . + 4 + (0x162 << 2)
label_2473a4:
    if (ctx->pc == 0x2473A4u) {
        ctx->pc = 0x2473A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A0u;
        // 0x2473a4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473A8u;
        goto label_2473a8;
    }
    ctx->pc = 0x2473A0u;
    {
        const bool branch_taken_0x2473a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A0u;
        // 0x2473a4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473a0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2473A8u;
label_2473a8:
    // 0x2473a8: 0xc0899ae  jal         func_2266B8
label_2473ac:
    if (ctx->pc == 0x2473ACu) {
        ctx->pc = 0x2473ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A8u;
        // 0x2473ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473B0u;
        goto label_2473b0;
    }
    ctx->pc = 0x2473A8u;
    SET_GPR_U32(ctx, 31, 0x2473B0u);
    ctx->pc = 0x2473ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473A8u;
    // 0x2473ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2473A8u, 0x2473B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473B0u;
label_2473b0:
    // 0x2473b0: 0x24030299  addiu       $v1, $zero, 0x299
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_2473b4:
    // 0x2473b4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2473b8:
    if (ctx->pc == 0x2473B8u) {
        ctx->pc = 0x2473BCu;
        goto label_2473bc;
    }
    ctx->pc = 0x2473B4u;
    {
        const bool branch_taken_0x2473b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2473b4) {
            ctx->pc = 0x2473CCu;
            goto label_2473cc;
        }
    }
    ctx->pc = 0x2473BCu;
label_2473bc:
    // 0x2473bc: 0xc0a10a0  jal         func_284280
label_2473c0:
    if (ctx->pc == 0x2473C0u) {
        ctx->pc = 0x2473C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473BCu;
        // 0x2473c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473C4u;
        goto label_2473c4;
    }
    ctx->pc = 0x2473BCu;
    SET_GPR_U32(ctx, 31, 0x2473C4u);
    ctx->pc = 0x2473C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473BCu;
    // 0x2473c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284280u, 0x2473BCu, 0x2473C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473C4u;
label_2473c4:
    // 0x2473c4: 0x10000159  b           . + 4 + (0x159 << 2)
label_2473c8:
    if (ctx->pc == 0x2473C8u) {
        ctx->pc = 0x2473C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473C4u;
        // 0x2473c8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473CCu;
        goto label_2473cc;
    }
    ctx->pc = 0x2473C4u;
    {
        const bool branch_taken_0x2473c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473C4u;
        // 0x2473c8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473c4) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2473CCu;
label_2473cc:
    // 0x2473cc: 0xc0899ae  jal         func_2266B8
label_2473d0:
    if (ctx->pc == 0x2473D0u) {
        ctx->pc = 0x2473D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473CCu;
        // 0x2473d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473D4u;
        goto label_2473d4;
    }
    ctx->pc = 0x2473CCu;
    SET_GPR_U32(ctx, 31, 0x2473D4u);
    ctx->pc = 0x2473D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473CCu;
    // 0x2473d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2473CCu, 0x2473D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473D4u;
label_2473d4:
    // 0x2473d4: 0x2403029a  addiu       $v1, $zero, 0x29A
    ctx->pc = 0x2473d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
label_2473d8:
    // 0x2473d8: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_2473dc:
    if (ctx->pc == 0x2473DCu) {
        ctx->pc = 0x2473E0u;
        goto label_2473e0;
    }
    ctx->pc = 0x2473D8u;
    {
        const bool branch_taken_0x2473d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2473d8) {
            ctx->pc = 0x247444u;
            goto label_247444;
        }
    }
    ctx->pc = 0x2473E0u;
label_2473e0:
    // 0x2473e0: 0xc089c18  jal         func_227060
label_2473e4:
    if (ctx->pc == 0x2473E4u) {
        ctx->pc = 0x2473E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473E0u;
        // 0x2473e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473E8u;
        goto label_2473e8;
    }
    ctx->pc = 0x2473E0u;
    SET_GPR_U32(ctx, 31, 0x2473E8u);
    ctx->pc = 0x2473E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473E0u;
    // 0x2473e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2473E0u, 0x2473E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473E8u;
label_2473e8:
    // 0x2473e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2473ec:
    if (ctx->pc == 0x2473ECu) {
        ctx->pc = 0x2473F0u;
        goto label_2473f0;
    }
    ctx->pc = 0x2473E8u;
    {
        const bool branch_taken_0x2473e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2473e8) {
            ctx->pc = 0x247444u;
            goto label_247444;
        }
    }
    ctx->pc = 0x2473F0u;
label_2473f0:
    // 0x2473f0: 0xc089c18  jal         func_227060
label_2473f4:
    if (ctx->pc == 0x2473F4u) {
        ctx->pc = 0x2473F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473F0u;
        // 0x2473f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473F8u;
        goto label_2473f8;
    }
    ctx->pc = 0x2473F0u;
    SET_GPR_U32(ctx, 31, 0x2473F8u);
    ctx->pc = 0x2473F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473F0u;
    // 0x2473f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2473F0u, 0x2473F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473F8u;
label_2473f8:
    // 0x2473f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2473f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2473fc:
    // 0x2473fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2473fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_247400:
    // 0x247400: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_247404:
    // 0x247404: 0xa0f809  jalr        $a1
label_247408:
    if (ctx->pc == 0x247408u) {
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24740Cu;
        goto label_24740c;
    }
    ctx->pc = 0x247404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24740Cu);
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247404u, 0x24740Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24740Cu;
label_24740c:
    // 0x24740c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247410:
    // 0x247410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247414:
    // 0x247414: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x247414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_247418:
    // 0x247418: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24741c:
    // 0x24741c: 0x40f809  jalr        $v0
label_247420:
    if (ctx->pc == 0x247420u) {
        ctx->pc = 0x247420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24741Cu;
        // 0x247420: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247424u;
        goto label_247424;
    }
    ctx->pc = 0x24741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247424u);
        ctx->pc = 0x247420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24741Cu;
        // 0x247420: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24741Cu, 0x247424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247424u;
label_247424:
    // 0x247424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247428:
    // 0x247428: 0xc0e5bc2  jal         func_396F08
label_24742c:
    if (ctx->pc == 0x24742Cu) {
        ctx->pc = 0x24742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247428u;
        // 0x24742c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247430u;
        goto label_247430;
    }
    ctx->pc = 0x247428u;
    SET_GPR_U32(ctx, 31, 0x247430u);
    ctx->pc = 0x24742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247428u;
    // 0x24742c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396F08u, 0x247428u, 0x247430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247430u;
label_247430:
    // 0x247430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247434:
    // 0x247434: 0xc089c20  jal         func_227080
label_247438:
    if (ctx->pc == 0x247438u) {
        ctx->pc = 0x247438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247434u;
        // 0x247438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24743Cu;
        goto label_24743c;
    }
    ctx->pc = 0x247434u;
    SET_GPR_U32(ctx, 31, 0x24743Cu);
    ctx->pc = 0x247438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247434u;
    // 0x247438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x247434u, 0x24743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24743Cu;
label_24743c:
    // 0x24743c: 0x1000013b  b           . + 4 + (0x13B << 2)
label_247440:
    if (ctx->pc == 0x247440u) {
        ctx->pc = 0x247440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24743Cu;
        // 0x247440: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247444u;
        goto label_247444;
    }
    ctx->pc = 0x24743Cu;
    {
        const bool branch_taken_0x24743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24743Cu;
        // 0x247440: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24743c) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247444u;
label_247444:
    // 0x247444: 0xc0899ae  jal         func_2266B8
label_247448:
    if (ctx->pc == 0x247448u) {
        ctx->pc = 0x247448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247444u;
        // 0x247448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24744Cu;
        goto label_24744c;
    }
    ctx->pc = 0x247444u;
    SET_GPR_U32(ctx, 31, 0x24744Cu);
    ctx->pc = 0x247448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247444u;
    // 0x247448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x247444u, 0x24744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24744Cu;
label_24744c:
    // 0x24744c: 0x2403029c  addiu       $v1, $zero, 0x29C
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_247450:
    // 0x247450: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
label_247454:
    if (ctx->pc == 0x247454u) {
        ctx->pc = 0x247458u;
        goto label_247458;
    }
    ctx->pc = 0x247450u;
    {
        const bool branch_taken_0x247450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x247450) {
            ctx->pc = 0x2474E0u;
            goto label_2474e0;
        }
    }
    ctx->pc = 0x247458u;
label_247458:
    // 0x247458: 0xc087502  jal         func_21D408
label_24745c:
    if (ctx->pc == 0x24745Cu) {
        ctx->pc = 0x24745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247458u;
        // 0x24745c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247460u;
        goto label_247460;
    }
    ctx->pc = 0x247458u;
    SET_GPR_U32(ctx, 31, 0x247460u);
    ctx->pc = 0x24745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247458u;
    // 0x24745c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x247458u, 0x247460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247460u;
label_247460:
    // 0x247460: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_247464:
    if (ctx->pc == 0x247464u) {
        ctx->pc = 0x247468u;
        goto label_247468;
    }
    ctx->pc = 0x247460u;
    {
        const bool branch_taken_0x247460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247460) {
            ctx->pc = 0x2474E0u;
            goto label_2474e0;
        }
    }
    ctx->pc = 0x247468u;
label_247468:
    // 0x247468: 0xc087502  jal         func_21D408
label_24746c:
    if (ctx->pc == 0x24746Cu) {
        ctx->pc = 0x24746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247468u;
        // 0x24746c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247470u;
        goto label_247470;
    }
    ctx->pc = 0x247468u;
    SET_GPR_U32(ctx, 31, 0x247470u);
    ctx->pc = 0x24746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247468u;
    // 0x24746c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x247468u, 0x247470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247470u;
label_247470:
    // 0x247470: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_247474:
    // 0x247474: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_247478:
    // 0x247478: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_24747c:
    if (ctx->pc == 0x24747Cu) {
        ctx->pc = 0x247480u;
        goto label_247480;
    }
    ctx->pc = 0x247478u;
    {
        const bool branch_taken_0x247478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247478) {
            ctx->pc = 0x2474E0u;
            goto label_2474e0;
        }
    }
    ctx->pc = 0x247480u;
label_247480:
    // 0x247480: 0xc087502  jal         func_21D408
label_247484:
    if (ctx->pc == 0x247484u) {
        ctx->pc = 0x247484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247480u;
        // 0x247484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247488u;
        goto label_247488;
    }
    ctx->pc = 0x247480u;
    SET_GPR_U32(ctx, 31, 0x247488u);
    ctx->pc = 0x247484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247480u;
    // 0x247484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x247480u, 0x247488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247488u;
label_247488:
    // 0x247488: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x247488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24748c:
    // 0x24748c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x24748cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_247490:
    // 0x247490: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_247494:
    if (ctx->pc == 0x247494u) {
        ctx->pc = 0x247494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247490u;
        // 0x247494: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247498u;
        goto label_247498;
    }
    ctx->pc = 0x247490u;
    {
        const bool branch_taken_0x247490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x247494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247490u;
        // 0x247494: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247490) {
            ctx->pc = 0x2474A4u;
            goto label_2474a4;
        }
    }
    ctx->pc = 0x247498u;
label_247498:
    // 0x247498: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x247498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24749c:
    // 0x24749c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2474a0:
    if (ctx->pc == 0x2474A0u) {
        ctx->pc = 0x2474A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24749Cu;
        // 0x2474a0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474A4u;
        goto label_2474a4;
    }
    ctx->pc = 0x24749Cu;
    {
        const bool branch_taken_0x24749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24749Cu;
        // 0x2474a0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24749c) {
            ctx->pc = 0x2474A8u;
            goto label_2474a8;
        }
    }
    ctx->pc = 0x2474A4u;
label_2474a4:
    // 0x2474a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2474a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2474a8:
    // 0x2474a8: 0x52000120  beql        $s0, $zero, . + 4 + (0x120 << 2)
label_2474ac:
    if (ctx->pc == 0x2474ACu) {
        ctx->pc = 0x2474ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474A8u;
        // 0x2474ac: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474B0u;
        goto label_2474b0;
    }
    ctx->pc = 0x2474A8u;
    {
        const bool branch_taken_0x2474a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2474a8) {
            ctx->pc = 0x2474ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2474A8u;
            // 0x2474ac: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2474B0u;
label_2474b0:
    // 0x2474b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2474b4:
    // 0x2474b4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2474b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2474b8:
    // 0x2474b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2474b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2474bc:
    // 0x2474bc: 0x40f809  jalr        $v0
label_2474c0:
    if (ctx->pc == 0x2474C0u) {
        ctx->pc = 0x2474C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474BCu;
        // 0x2474c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474C4u;
        goto label_2474c4;
    }
    ctx->pc = 0x2474BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2474C4u);
        ctx->pc = 0x2474C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474BCu;
        // 0x2474c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2474BCu, 0x2474C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2474C4u;
label_2474c4:
    // 0x2474c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2474c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2474c8:
    // 0x2474c8: 0x54430118  bnel        $v0, $v1, . + 4 + (0x118 << 2)
label_2474cc:
    if (ctx->pc == 0x2474CCu) {
        ctx->pc = 0x2474CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474C8u;
        // 0x2474cc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474D0u;
        goto label_2474d0;
    }
    ctx->pc = 0x2474C8u;
    {
        const bool branch_taken_0x2474c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2474c8) {
            ctx->pc = 0x2474CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2474C8u;
            // 0x2474cc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2474D0u;
label_2474d0:
    // 0x2474d0: 0xc0b1f08  jal         func_2C7C20
label_2474d4:
    if (ctx->pc == 0x2474D4u) {
        ctx->pc = 0x2474D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474D0u;
        // 0x2474d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474D8u;
        goto label_2474d8;
    }
    ctx->pc = 0x2474D0u;
    SET_GPR_U32(ctx, 31, 0x2474D8u);
    ctx->pc = 0x2474D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474D0u;
    // 0x2474d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7C20u, 0x2474D0u, 0x2474D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474D8u;
label_2474d8:
    // 0x2474d8: 0x10000114  b           . + 4 + (0x114 << 2)
label_2474dc:
    if (ctx->pc == 0x2474DCu) {
        ctx->pc = 0x2474DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474D8u;
        // 0x2474dc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474E0u;
        goto label_2474e0;
    }
    ctx->pc = 0x2474D8u;
    {
        const bool branch_taken_0x2474d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474D8u;
        // 0x2474dc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474d8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2474E0u;
label_2474e0:
    // 0x2474e0: 0xc0e4060  jal         func_390180
label_2474e4:
    if (ctx->pc == 0x2474E4u) {
        ctx->pc = 0x2474E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474E0u;
        // 0x2474e4: 0x26640348  addiu       $a0, $s3, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474E8u;
        goto label_2474e8;
    }
    ctx->pc = 0x2474E0u;
    SET_GPR_U32(ctx, 31, 0x2474E8u);
    ctx->pc = 0x2474E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474E0u;
    // 0x2474e4: 0x26640348  addiu       $a0, $s3, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2474E0u, 0x2474E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474E8u;
label_2474e8:
    // 0x2474e8: 0xc0e57ce  jal         func_395F38
label_2474ec:
    if (ctx->pc == 0x2474ECu) {
        ctx->pc = 0x2474ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474E8u;
        // 0x2474ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474F0u;
        goto label_2474f0;
    }
    ctx->pc = 0x2474E8u;
    SET_GPR_U32(ctx, 31, 0x2474F0u);
    ctx->pc = 0x2474ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474E8u;
    // 0x2474ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2474E8u, 0x2474F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474F0u;
label_2474f0:
    // 0x2474f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2474f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2474f4:
    // 0x2474f4: 0xc089bfc  jal         func_226FF0
label_2474f8:
    if (ctx->pc == 0x2474F8u) {
        ctx->pc = 0x2474F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474F4u;
        // 0x2474f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2474FCu;
        goto label_2474fc;
    }
    ctx->pc = 0x2474F4u;
    SET_GPR_U32(ctx, 31, 0x2474FCu);
    ctx->pc = 0x2474F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474F4u;
    // 0x2474f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2474F4u, 0x2474FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474FCu;
label_2474fc:
    // 0x2474fc: 0xc0e57ce  jal         func_395F38
label_247500:
    if (ctx->pc == 0x247500u) {
        ctx->pc = 0x247500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474FCu;
        // 0x247500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247504u;
        goto label_247504;
    }
    ctx->pc = 0x2474FCu;
    SET_GPR_U32(ctx, 31, 0x247504u);
    ctx->pc = 0x247500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474FCu;
    // 0x247500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2474FCu, 0x247504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247504u;
label_247504:
    // 0x247504: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_247508:
    if (ctx->pc == 0x247508u) {
        ctx->pc = 0x247508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247504u;
        // 0x247508: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24750Cu;
        goto label_24750c;
    }
    ctx->pc = 0x247504u;
    {
        const bool branch_taken_0x247504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247504u;
        // 0x247508: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247504) {
            ctx->pc = 0x24752Cu;
            goto label_24752c;
        }
    }
    ctx->pc = 0x24750Cu;
label_24750c:
    // 0x24750c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_247510:
    // 0x247510: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x247510u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_247514:
    // 0x247514: 0xc0e44cc  jal         func_391330
label_247518:
    if (ctx->pc == 0x247518u) {
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24751Cu;
        goto label_24751c;
    }
    ctx->pc = 0x247514u;
    SET_GPR_U32(ctx, 31, 0x24751Cu);
    ctx->pc = 0x247518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247514u;
    // 0x247518: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247514u, 0x24751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24751Cu;
label_24751c:
    // 0x24751c: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x24751cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_247520:
    // 0x247520: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_247524:
    // 0x247524: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_247528:
    if (ctx->pc == 0x247528u) {
        ctx->pc = 0x24752Cu;
        goto label_24752c;
    }
    ctx->pc = 0x247524u;
    {
        const bool branch_taken_0x247524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247524) {
            ctx->pc = 0x247550u;
            goto label_247550;
        }
    }
    ctx->pc = 0x24752Cu;
label_24752c:
    // 0x24752c: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_247530:
    if (ctx->pc == 0x247530u) {
        ctx->pc = 0x247530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24752Cu;
        // 0x247530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247534u;
        goto label_247534;
    }
    ctx->pc = 0x24752Cu;
    {
        const bool branch_taken_0x24752c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24752Cu;
        // 0x247530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24752c) {
            ctx->pc = 0x2475E0u;
            goto label_2475e0;
        }
    }
    ctx->pc = 0x247534u;
label_247534:
    // 0x247534: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x247534u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_247538:
    // 0x247538: 0xc0e44cc  jal         func_391330
label_24753c:
    if (ctx->pc == 0x24753Cu) {
        ctx->pc = 0x24753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247538u;
        // 0x24753c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247540u;
        goto label_247540;
    }
    ctx->pc = 0x247538u;
    SET_GPR_U32(ctx, 31, 0x247540u);
    ctx->pc = 0x24753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247538u;
    // 0x24753c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247538u, 0x247540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247540u;
label_247540:
    // 0x247540: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x247540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_247544:
    // 0x247544: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x247544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_247548:
    // 0x247548: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_24754c:
    if (ctx->pc == 0x24754Cu) {
        ctx->pc = 0x247550u;
        goto label_247550;
    }
    ctx->pc = 0x247548u;
    {
        const bool branch_taken_0x247548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247548) {
            ctx->pc = 0x2475E0u;
            goto label_2475e0;
        }
    }
    ctx->pc = 0x247550u;
label_247550:
    // 0x247550: 0xc089b98  jal         func_226E60
label_247554:
    if (ctx->pc == 0x247554u) {
        ctx->pc = 0x247554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247550u;
        // 0x247554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247558u;
        goto label_247558;
    }
    ctx->pc = 0x247550u;
    SET_GPR_U32(ctx, 31, 0x247558u);
    ctx->pc = 0x247554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247550u;
    // 0x247554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x247550u, 0x247558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247558u;
label_247558:
    // 0x247558: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24755c:
    // 0x24755c: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
label_247560:
    if (ctx->pc == 0x247560u) {
        ctx->pc = 0x247560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24755Cu;
        // 0x247560: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247564u;
        goto label_247564;
    }
    ctx->pc = 0x24755Cu;
    {
        const bool branch_taken_0x24755c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x247560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24755Cu;
        // 0x247560: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24755c) {
            ctx->pc = 0x2475E0u;
            goto label_2475e0;
        }
    }
    ctx->pc = 0x247564u;
label_247564:
    // 0x247564: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
label_247568:
    // 0x247568: 0xa3a40258  sb          $a0, 0x258($sp)
    ctx->pc = 0x247568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 600), (uint8_t)GPR_U32(ctx, 4));
label_24756c:
    // 0x24756c: 0x27a30258  addiu       $v1, $sp, 0x258
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
label_247570:
    // 0x247570: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x247570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_247574:
    // 0x247574: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x247574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_247578:
    // 0x247578: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x247578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_24757c:
    // 0x24757c: 0x8e650640  lw          $a1, 0x640($s3)
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1600)));
label_247580:
    // 0x247580: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_247584:
    // 0x247584: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_247588:
    if (ctx->pc == 0x247588u) {
        ctx->pc = 0x247588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247584u;
        // 0x247588: 0x51602  srl         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24758Cu;
        goto label_24758c;
    }
    ctx->pc = 0x247584u;
    {
        const bool branch_taken_0x247584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x247588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247584u;
        // 0x247588: 0x51602  srl         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247584) {
            ctx->pc = 0x2475ACu;
            goto label_2475ac;
        }
    }
    ctx->pc = 0x24758Cu;
label_24758c:
    // 0x24758c: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x24758cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_247590:
    // 0x247590: 0x52402  srl         $a0, $a1, 16
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_247594:
    // 0x247594: 0xa3a2025c  sb          $v0, 0x25C($sp)
    ctx->pc = 0x247594u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 604), (uint8_t)GPR_U32(ctx, 2));
label_247598:
    // 0x247598: 0xa3a5025d  sb          $a1, 0x25D($sp)
    ctx->pc = 0x247598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 605), (uint8_t)GPR_U32(ctx, 5));
label_24759c:
    // 0x24759c: 0xa3a3025e  sb          $v1, 0x25E($sp)
    ctx->pc = 0x24759cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 606), (uint8_t)GPR_U32(ctx, 3));
label_2475a0:
    // 0x2475a0: 0xa3a4025f  sb          $a0, 0x25F($sp)
    ctx->pc = 0x2475a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 607), (uint8_t)GPR_U32(ctx, 4));
label_2475a4:
    // 0x2475a4: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x2475a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2475a8:
    // 0x2475a8: 0xacc20644  sw          $v0, 0x644($a2)
    ctx->pc = 0x2475a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1604), GPR_U32(ctx, 2));
label_2475ac:
    // 0x2475ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2475b0:
    // 0x2475b0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2475b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2475b4:
    // 0x2475b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2475b8:
    // 0x2475b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2475b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2475bc:
    // 0x2475bc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2475bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2475c0:
    // 0x2475c0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2475c4:
    // 0x2475c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2475c8:
    // 0x2475c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2475cc:
    // 0x2475cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2475ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2475d0:
    // 0x2475d0: 0xc088178  jal         func_2205E0
label_2475d4:
    if (ctx->pc == 0x2475D4u) {
        ctx->pc = 0x2475D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475D0u;
        // 0x2475d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2475D8u;
        goto label_2475d8;
    }
    ctx->pc = 0x2475D0u;
    SET_GPR_U32(ctx, 31, 0x2475D8u);
    ctx->pc = 0x2475D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475D0u;
    // 0x2475d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2475D0u, 0x2475D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475D8u;
label_2475d8:
    // 0x2475d8: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2475dc:
    if (ctx->pc == 0x2475DCu) {
        ctx->pc = 0x2475DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475D8u;
        // 0x2475dc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2475E0u;
        goto label_2475e0;
    }
    ctx->pc = 0x2475D8u;
    {
        const bool branch_taken_0x2475d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2475DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475D8u;
        // 0x2475dc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475d8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2475E0u;
label_2475e0:
    // 0x2475e0: 0xc088e78  jal         func_2239E0
label_2475e4:
    if (ctx->pc == 0x2475E4u) {
        ctx->pc = 0x2475E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475E0u;
        // 0x2475e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2475E8u;
        goto label_2475e8;
    }
    ctx->pc = 0x2475E0u;
    SET_GPR_U32(ctx, 31, 0x2475E8u);
    ctx->pc = 0x2475E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475E0u;
    // 0x2475e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x2475E0u, 0x2475E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475E8u;
label_2475e8:
    // 0x2475e8: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
label_2475ec:
    if (ctx->pc == 0x2475ECu) {
        ctx->pc = 0x2475ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475E8u;
        // 0x2475ec: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2475F0u;
        goto label_2475f0;
    }
    ctx->pc = 0x2475E8u;
    {
        const bool branch_taken_0x2475e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2475ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475E8u;
        // 0x2475ec: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475e8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2475F0u;
label_2475f0:
    // 0x2475f0: 0xc089bfc  jal         func_226FF0
label_2475f4:
    if (ctx->pc == 0x2475F4u) {
        ctx->pc = 0x2475F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475F0u;
        // 0x2475f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2475F8u;
        goto label_2475f8;
    }
    ctx->pc = 0x2475F0u;
    SET_GPR_U32(ctx, 31, 0x2475F8u);
    ctx->pc = 0x2475F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475F0u;
    // 0x2475f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2475F0u, 0x2475F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475F8u;
label_2475f8:
    // 0x2475f8: 0xc0e57ce  jal         func_395F38
label_2475fc:
    if (ctx->pc == 0x2475FCu) {
        ctx->pc = 0x2475FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475F8u;
        // 0x2475fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247600u;
        goto label_247600;
    }
    ctx->pc = 0x2475F8u;
    SET_GPR_U32(ctx, 31, 0x247600u);
    ctx->pc = 0x2475FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475F8u;
    // 0x2475fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2475F8u, 0x247600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247600u;
label_247600:
    // 0x247600: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247604:
    // 0x247604: 0x122000c8  beqz        $s1, . + 4 + (0xC8 << 2)
label_247608:
    if (ctx->pc == 0x247608u) {
        ctx->pc = 0x247608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247604u;
        // 0x247608: 0x267000c4  addiu       $s0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24760Cu;
        goto label_24760c;
    }
    ctx->pc = 0x247604u;
    {
        const bool branch_taken_0x247604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247604u;
        // 0x247608: 0x267000c4  addiu       $s0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247604) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x24760Cu;
label_24760c:
    // 0x24760c: 0xc0e409a  jal         func_390268
label_247610:
    if (ctx->pc == 0x247610u) {
        ctx->pc = 0x247610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24760Cu;
        // 0x247610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247614u;
        goto label_247614;
    }
    ctx->pc = 0x24760Cu;
    SET_GPR_U32(ctx, 31, 0x247614u);
    ctx->pc = 0x247610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24760Cu;
    // 0x247610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24760Cu, 0x247614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247614u;
label_247614:
    // 0x247614: 0x504000c5  beql        $v0, $zero, . + 4 + (0xC5 << 2)
label_247618:
    if (ctx->pc == 0x247618u) {
        ctx->pc = 0x247618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247614u;
        // 0x247618: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24761Cu;
        goto label_24761c;
    }
    ctx->pc = 0x247614u;
    {
        const bool branch_taken_0x247614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247614) {
            ctx->pc = 0x247618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247614u;
            // 0x247618: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x24761Cu;
label_24761c:
    // 0x24761c: 0xc0e409a  jal         func_390268
label_247620:
    if (ctx->pc == 0x247620u) {
        ctx->pc = 0x247620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24761Cu;
        // 0x247620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247624u;
        goto label_247624;
    }
    ctx->pc = 0x24761Cu;
    SET_GPR_U32(ctx, 31, 0x247624u);
    ctx->pc = 0x247620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24761Cu;
    // 0x247620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24761Cu, 0x247624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247624u;
label_247624:
    // 0x247624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247628:
    // 0x247628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24762c:
    // 0x24762c: 0xc0e4d14  jal         func_393450
label_247630:
    if (ctx->pc == 0x247630u) {
        ctx->pc = 0x247630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24762Cu;
        // 0x247630: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247634u;
        goto label_247634;
    }
    ctx->pc = 0x24762Cu;
    SET_GPR_U32(ctx, 31, 0x247634u);
    ctx->pc = 0x247630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24762Cu;
    // 0x247630: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393450u, 0x24762Cu, 0x247634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247634u;
label_247634:
    // 0x247634: 0x9222010d  lbu         $v0, 0x10D($s1)
    ctx->pc = 0x247634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_247638:
    // 0x247638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24763c:
    if (ctx->pc == 0x24763Cu) {
        ctx->pc = 0x24763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247638u;
        // 0x24763c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247640u;
        goto label_247640;
    }
    ctx->pc = 0x247638u;
    {
        const bool branch_taken_0x247638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247638u;
        // 0x24763c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247638) {
            ctx->pc = 0x24764Cu;
            goto label_24764c;
        }
    }
    ctx->pc = 0x247640u;
label_247640:
    // 0x247640: 0x9222010e  lbu         $v0, 0x10E($s1)
    ctx->pc = 0x247640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 270)));
label_247644:
    // 0x247644: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_247648:
    if (ctx->pc == 0x247648u) {
        ctx->pc = 0x24764Cu;
        goto label_24764c;
    }
    ctx->pc = 0x247644u;
    {
        const bool branch_taken_0x247644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247644) {
            ctx->pc = 0x247650u;
            goto label_247650;
        }
    }
    ctx->pc = 0x24764Cu;
label_24764c:
    // 0x24764c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247650:
    // 0x247650: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
label_247654:
    if (ctx->pc == 0x247654u) {
        ctx->pc = 0x247654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247650u;
        // 0x247654: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247658u;
        goto label_247658;
    }
    ctx->pc = 0x247650u;
    {
        const bool branch_taken_0x247650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247650u;
        // 0x247654: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247650) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x247658u;
label_247658:
    // 0x247658: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x247658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24765c:
    // 0x24765c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x24765cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_247660:
    // 0x247660: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x247660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_247664:
    // 0x247664: 0x60f809  jalr        $v1
label_247668:
    if (ctx->pc == 0x247668u) {
        ctx->pc = 0x247668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247664u;
        // 0x247668: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24766Cu;
        goto label_24766c;
    }
    ctx->pc = 0x247664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24766Cu);
        ctx->pc = 0x247668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247664u;
        // 0x247668: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247664u, 0x24766Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24766Cu;
label_24766c:
    // 0x24766c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x24766cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_247670:
    // 0x247670: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x247670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_247674:
    // 0x247674: 0x86660092  lh          $a2, 0x92($s3)
    ctx->pc = 0x247674u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_247678:
    // 0x247678: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x247678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_24767c:
    // 0x24767c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_247680:
    // 0x247680: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_247684:
    // 0x247684: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x247684u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_247688:
    // 0x247688: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x247688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24768c:
    // 0x24768c: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x24768cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_247690:
    // 0x247690: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x247690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_247694:
    // 0x247694: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_247698:
    // 0x247698: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x247698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_24769c:
    // 0x24769c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24769cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2476a0:
    // 0x2476a0: 0xc136afa  jal         func_4DABE8
label_2476a4:
    if (ctx->pc == 0x2476A4u) {
        ctx->pc = 0x2476A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476A0u;
        // 0x2476a4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476A8u;
        goto label_2476a8;
    }
    ctx->pc = 0x2476A0u;
    SET_GPR_U32(ctx, 31, 0x2476A8u);
    ctx->pc = 0x2476A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476A0u;
    // 0x2476a4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2476A0u, 0x2476A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476A8u;
label_2476a8:
    // 0x2476a8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2476a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2476ac:
    // 0x2476ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2476acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2476b0:
    // 0x2476b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2476b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2476b4:
    // 0x2476b4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2476b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2476b8:
    // 0x2476b8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2476b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2476bc:
    // 0x2476bc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2476bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2476c0:
    // 0x2476c0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2476c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2476c4:
    // 0x2476c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2476c4u;
    // VWAITQ (Q already resolved in this runtime)
label_2476c8:
    // 0x2476c8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2476c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2476cc:
    // 0x2476cc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2476ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2476d0:
    // 0x2476d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2476d4:
    // 0x2476d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2476d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2476d8:
    // 0x2476d8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2476d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2476dc:
    // 0x2476dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2476dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2476e0:
    // 0x2476e0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2476e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2476e4:
    // 0x2476e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2476e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2476e8:
    // 0x2476e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2476e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2476ec:
    // 0x2476ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2476ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2476f0:
    // 0x2476f0: 0xc0e4f88  jal         func_393E20
label_2476f4:
    if (ctx->pc == 0x2476F4u) {
        ctx->pc = 0x2476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F0u;
        // 0x2476f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476F8u;
        goto label_2476f8;
    }
    ctx->pc = 0x2476F0u;
    SET_GPR_U32(ctx, 31, 0x2476F8u);
    ctx->pc = 0x2476F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476F0u;
    // 0x2476f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393E20u, 0x2476F0u, 0x2476F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476F8u;
label_2476f8:
    // 0x2476f8: 0x1000008c  b           . + 4 + (0x8C << 2)
label_2476fc:
    if (ctx->pc == 0x2476FCu) {
        ctx->pc = 0x2476FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F8u;
        // 0x2476fc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247700u;
        goto label_247700;
    }
    ctx->pc = 0x2476F8u;
    {
        const bool branch_taken_0x2476f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F8u;
        // 0x2476fc: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476f8) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247700u;
label_247700:
    // 0x247700: 0xc0ea146  jal         func_3A8518
label_247704:
    if (ctx->pc == 0x247704u) {
        ctx->pc = 0x247704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247700u;
        // 0x247704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247708u;
        goto label_247708;
    }
    ctx->pc = 0x247700u;
    SET_GPR_U32(ctx, 31, 0x247708u);
    ctx->pc = 0x247704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247700u;
    // 0x247704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x247700u, 0x247708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247708u;
label_247708:
    // 0x247708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24770c:
    // 0x24770c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24770cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247710:
    // 0x247710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247714:
    // 0x247714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247718:
    // 0x247718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24771c:
    // 0x24771c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24771cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247720:
    // 0x247720: 0xc087900  jal         func_21E400
label_247724:
    if (ctx->pc == 0x247724u) {
        ctx->pc = 0x247724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247720u;
        // 0x247724: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247728u;
        goto label_247728;
    }
    ctx->pc = 0x247720u;
    SET_GPR_U32(ctx, 31, 0x247728u);
    ctx->pc = 0x247724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247720u;
    // 0x247724: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x247720u, 0x247728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247728u;
label_247728:
    // 0x247728: 0x10000080  b           . + 4 + (0x80 << 2)
label_24772c:
    if (ctx->pc == 0x24772Cu) {
        ctx->pc = 0x24772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247728u;
        // 0x24772c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247730u;
        goto label_247730;
    }
    ctx->pc = 0x247728u;
    {
        const bool branch_taken_0x247728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247728u;
        // 0x24772c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247728) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x247730u;
label_247730:
    // 0x247730: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x247730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247734:
    // 0x247734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247738:
    // 0x247738: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x247738u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_24773c:
    // 0x24773c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x24773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_247740:
    // 0x247740: 0x60f809  jalr        $v1
label_247744:
    if (ctx->pc == 0x247744u) {
        ctx->pc = 0x247744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247740u;
        // 0x247744: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247748u;
        goto label_247748;
    }
    ctx->pc = 0x247740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247748u);
        ctx->pc = 0x247744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247740u;
        // 0x247744: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247740u, 0x247748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247748u;
label_247748:
    // 0x247748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24774c:
    // 0x24774c: 0xc0ea12a  jal         func_3A84A8
label_247750:
    if (ctx->pc == 0x247750u) {
        ctx->pc = 0x247750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24774Cu;
        // 0x247750: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247754u;
        goto label_247754;
    }
    ctx->pc = 0x24774Cu;
    SET_GPR_U32(ctx, 31, 0x247754u);
    ctx->pc = 0x247750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24774Cu;
    // 0x247750: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x24774Cu, 0x247754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247754u;
label_247754:
    // 0x247754: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x247754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247758:
    // 0x247758: 0x7a620320  lq          $v0, 0x320($s3)
    ctx->pc = 0x247758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 800)));
label_24775c:
    // 0x24775c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x24775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_247760:
    // 0x247760: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x247760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_247764:
    // 0x247764: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x247764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_247768:
    // 0x247768: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x247768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24776c:
    // 0x24776c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x24776cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_247770:
    // 0x247770: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x247770u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_247774:
    // 0x247774: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x247774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_247778:
    // 0x247778: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x247778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24777c:
    // 0x24777c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x24777cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_247780:
    // 0x247780: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x247780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_247784:
    // 0x247784: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x247784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_247788:
    // 0x247788: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x247788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24778c:
    // 0x24778c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x24778cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_247790:
    // 0x247790: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x247790u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_247794:
    // 0x247794: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x247794u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_247798:
    // 0x247798: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x247798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24779c:
    // 0x24779c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x24779cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2477a0:
    // 0x2477a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2477a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_2477a4:
    // 0x2477a4: 0x7a660310  lq          $a2, 0x310($s3)
    ctx->pc = 0x2477a4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 784)));
label_2477a8:
    // 0x2477a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2477a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2477ac:
    // 0x2477ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2477acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2477b0:
    // 0x2477b0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2477b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2477b4:
    // 0x2477b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2477b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2477b8:
    // 0x2477b8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2477b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2477bc:
    // 0x2477bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2477bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2477c0:
    // 0x2477c0: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2477c0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_2477c4:
    // 0x2477c4: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x2477c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_2477c8:
    // 0x2477c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2477cc:
    // 0x2477cc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2477ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2477d0:
    // 0x2477d0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2477d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2477d4:
    // 0x2477d4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2477d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2477d8:
    // 0x2477d8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2477d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_2477dc:
    // 0x2477dc: 0x40f809  jalr        $v0
label_2477e0:
    if (ctx->pc == 0x2477E0u) {
        ctx->pc = 0x2477E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477DCu;
        // 0x2477e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2477E4u;
        goto label_2477e4;
    }
    ctx->pc = 0x2477DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2477E4u);
        ctx->pc = 0x2477E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477DCu;
        // 0x2477e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477DCu, 0x2477E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2477E4u;
label_2477e4:
    // 0x2477e4: 0x10000051  b           . + 4 + (0x51 << 2)
label_2477e8:
    if (ctx->pc == 0x2477E8u) {
        ctx->pc = 0x2477E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477E4u;
        // 0x2477e8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2477ECu;
        goto label_2477ec;
    }
    ctx->pc = 0x2477E4u;
    {
        const bool branch_taken_0x2477e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2477E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477E4u;
        // 0x2477e8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477e4) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2477ECu;
label_2477ec:
    // 0x2477ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2477f0:
    // 0x2477f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2477f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2477f4:
    // 0x2477f4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2477f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2477f8:
    // 0x2477f8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2477f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2477fc:
    // 0x2477fc: 0x60f809  jalr        $v1
label_247800:
    if (ctx->pc == 0x247800u) {
        ctx->pc = 0x247800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477FCu;
        // 0x247800: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247804u;
        goto label_247804;
    }
    ctx->pc = 0x2477FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247804u);
        ctx->pc = 0x247800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477FCu;
        // 0x247800: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477FCu, 0x247804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247804u;
label_247804:
    // 0x247804: 0xc0ea13a  jal         func_3A84E8
label_247808:
    if (ctx->pc == 0x247808u) {
        ctx->pc = 0x247808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247804u;
        // 0x247808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24780Cu;
        goto label_24780c;
    }
    ctx->pc = 0x247804u;
    SET_GPR_U32(ctx, 31, 0x24780Cu);
    ctx->pc = 0x247808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247804u;
    // 0x247808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x247804u, 0x24780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24780Cu;
label_24780c:
    // 0x24780c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24780cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_247810:
    // 0x247810: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x247810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247814:
    // 0x247814: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x247814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_247818:
    // 0x247818: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x247818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_24781c:
    // 0x24781c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x24781cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_247820:
    // 0x247820: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x247820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_247824:
    // 0x247824: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x247824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_247828:
    // 0x247828: 0xc12e310  jal         func_4B8C40
label_24782c:
    if (ctx->pc == 0x24782Cu) {
        ctx->pc = 0x24782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247828u;
        // 0x24782c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247830u;
        goto label_247830;
    }
    ctx->pc = 0x247828u;
    SET_GPR_U32(ctx, 31, 0x247830u);
    ctx->pc = 0x24782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247828u;
    // 0x24782c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x247828u, 0x247830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247830u;
label_247830:
    // 0x247830: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x247830u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_247834:
    // 0x247834: 0xc12e29c  jal         func_4B8A70
label_247838:
    if (ctx->pc == 0x247838u) {
        ctx->pc = 0x247838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247834u;
        // 0x247838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24783Cu;
        goto label_24783c;
    }
    ctx->pc = 0x247834u;
    SET_GPR_U32(ctx, 31, 0x24783Cu);
    ctx->pc = 0x247838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247834u;
    // 0x247838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x247834u, 0x24783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24783Cu;
label_24783c:
    // 0x24783c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x24783cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247840:
    // 0x247840: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x247840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_247844:
    // 0x247844: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x247844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_247848:
    // 0x247848: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x247848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24784c:
    // 0x24784c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24784cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247850:
    // 0x247850: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x247850u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_247854:
    // 0x247854: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x247854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_247858:
    // 0x247858: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x247858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24785c:
    // 0x24785c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_247860:
    // 0x247860: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x247860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247864:
    // 0x247864: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x247864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247868:
    // 0x247868: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x247868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24786c:
    // 0x24786c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x24786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_247870:
    // 0x247870: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x247870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_247874:
    // 0x247874: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x247874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_247878:
    // 0x247878: 0x7a630320  lq          $v1, 0x320($s3)
    ctx->pc = 0x247878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 800)));
label_24787c:
    // 0x24787c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x24787cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247880:
    // 0x247880: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x247880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_247884:
    // 0x247884: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x247884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_247888:
    // 0x247888: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x247888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24788c:
    // 0x24788c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x24788cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_247890:
    // 0x247890: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x247890u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_247894:
    // 0x247894: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x247894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_247898:
    // 0x247898: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x247898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24789c:
    // 0x24789c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x24789cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2478a0:
    // 0x2478a0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2478a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2478a4:
    // 0x2478a4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x2478a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2478a8:
    // 0x2478a8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x2478a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2478ac:
    // 0x2478ac: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2478acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2478b0:
    // 0x2478b0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2478b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2478b4:
    // 0x2478b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2478b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2478b8:
    // 0x2478b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2478b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2478bc:
    // 0x2478bc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2478bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2478c0:
    // 0x2478c0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2478c4:
    // 0x2478c4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2478c8:
    // 0x2478c8: 0x60f809  jalr        $v1
label_2478cc:
    if (ctx->pc == 0x2478CCu) {
        ctx->pc = 0x2478CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478C8u;
        // 0x2478cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478D0u;
        goto label_2478d0;
    }
    ctx->pc = 0x2478C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2478D0u);
        ctx->pc = 0x2478CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478C8u;
        // 0x2478cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2478C8u, 0x2478D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2478D0u;
label_2478d0:
    // 0x2478d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_2478d4:
    if (ctx->pc == 0x2478D4u) {
        ctx->pc = 0x2478D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478D0u;
        // 0x2478d4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478D8u;
        goto label_2478d8;
    }
    ctx->pc = 0x2478D0u;
    {
        const bool branch_taken_0x2478d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2478D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478D0u;
        // 0x2478d4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478d0) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2478D8u;
label_2478d8:
    // 0x2478d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2478d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2478dc:
    // 0x2478dc: 0xc0ea132  jal         func_3A84C8
label_2478e0:
    if (ctx->pc == 0x2478E0u) {
        ctx->pc = 0x2478E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478DCu;
        // 0x2478e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478E4u;
        goto label_2478e4;
    }
    ctx->pc = 0x2478DCu;
    SET_GPR_U32(ctx, 31, 0x2478E4u);
    ctx->pc = 0x2478E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478DCu;
    // 0x2478e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84C8u, 0x2478DCu, 0x2478E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478E4u;
label_2478e4:
    // 0x2478e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2478e8:
    if (ctx->pc == 0x2478E8u) {
        ctx->pc = 0x2478E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478E4u;
        // 0x2478e8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478ECu;
        goto label_2478ec;
    }
    ctx->pc = 0x2478E4u;
    {
        const bool branch_taken_0x2478e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2478E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478E4u;
        // 0x2478e8: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478e4) {
            ctx->pc = 0x24792Cu;
            goto label_24792c;
        }
    }
    ctx->pc = 0x2478ECu;
label_2478ec:
    // 0x2478ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2478ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2478f0:
    // 0x2478f0: 0xc0ea12a  jal         func_3A84A8
label_2478f4:
    if (ctx->pc == 0x2478F4u) {
        ctx->pc = 0x2478F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478F0u;
        // 0x2478f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478F8u;
        goto label_2478f8;
    }
    ctx->pc = 0x2478F0u;
    SET_GPR_U32(ctx, 31, 0x2478F8u);
    ctx->pc = 0x2478F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478F0u;
    // 0x2478f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x2478F0u, 0x2478F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478F8u;
label_2478f8:
    // 0x2478f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2478f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2478fc:
    // 0x2478fc: 0xc09e8be  jal         func_27A2F8
label_247900:
    if (ctx->pc == 0x247900u) {
        ctx->pc = 0x247900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478FCu;
        // 0x247900: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247904u;
        goto label_247904;
    }
    ctx->pc = 0x2478FCu;
    SET_GPR_U32(ctx, 31, 0x247904u);
    ctx->pc = 0x247900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478FCu;
    // 0x247900: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A2F8u, 0x2478FCu, 0x247904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247904u;
label_247904:
    // 0x247904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247908:
    // 0x247908: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_24790c:
    if (ctx->pc == 0x24790Cu) {
        ctx->pc = 0x24790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247908u;
        // 0x24790c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247910u;
        goto label_247910;
    }
    ctx->pc = 0x247908u;
    {
        const bool branch_taken_0x247908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247908u;
        // 0x24790c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247908) {
            ctx->pc = 0x247928u;
            goto label_247928;
        }
    }
    ctx->pc = 0x247910u;
label_247910:
    // 0x247910: 0xc089b0c  jal         func_226C30
label_247914:
    if (ctx->pc == 0x247914u) {
        ctx->pc = 0x247914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247910u;
        // 0x247914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247918u;
        goto label_247918;
    }
    ctx->pc = 0x247910u;
    SET_GPR_U32(ctx, 31, 0x247918u);
    ctx->pc = 0x247914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247910u;
    // 0x247914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x247910u, 0x247918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247918u;
label_247918:
    // 0x247918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24791c:
    // 0x24791c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247920:
    // 0x247920: 0xc09d9ac  jal         func_2766B0
label_247924:
    if (ctx->pc == 0x247924u) {
        ctx->pc = 0x247924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247920u;
        // 0x247924: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247928u;
        goto label_247928;
    }
    ctx->pc = 0x247920u;
    SET_GPR_U32(ctx, 31, 0x247928u);
    ctx->pc = 0x247924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247920u;
    // 0x247924: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766B0u, 0x247920u, 0x247928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247928u;
label_247928:
    // 0x247928: 0x7bb002c0  lq          $s0, 0x2C0($sp)
    ctx->pc = 0x247928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_24792c:
    // 0x24792c: 0x7bb102b0  lq          $s1, 0x2B0($sp)
    ctx->pc = 0x24792cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_247930:
    // 0x247930: 0x7bb202a0  lq          $s2, 0x2A0($sp)
    ctx->pc = 0x247930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_247934:
    // 0x247934: 0x7bb30290  lq          $s3, 0x290($sp)
    ctx->pc = 0x247934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_247938:
    // 0x247938: 0x7bb40280  lq          $s4, 0x280($sp)
    ctx->pc = 0x247938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_24793c:
    // 0x24793c: 0x7bb50270  lq          $s5, 0x270($sp)
    ctx->pc = 0x24793cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_247940:
    // 0x247940: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x247940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_247944:
    // 0x247944: 0xc7b502d8  lwc1        $f21, 0x2D8($sp)
    ctx->pc = 0x247944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_247948:
    // 0x247948: 0xc7b402d0  lwc1        $f20, 0x2D0($sp)
    ctx->pc = 0x247948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24794c:
    // 0x24794c: 0x3e00008  jr          $ra
label_247950:
    if (ctx->pc == 0x247950u) {
        ctx->pc = 0x247950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24794Cu;
        // 0x247950: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247954u;
        goto label_247954;
    }
    ctx->pc = 0x24794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24794Cu;
        // 0x247950: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247954u;
label_247954:
    // 0x247954: 0x0  nop
    ctx->pc = 0x247954u;
    // NOP
    ctx->pc = 0x247958u;
}
