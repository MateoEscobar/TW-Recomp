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

// Function: sub_002F28B8
// Address: 0x2f28b8 - 0x2f3118
void sub_002F28B8_0x2f28b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F28B8_0x2f28b8");
#endif

    switch (ctx->pc) {
        case 0x2f28b8u: goto label_2f28b8;
        case 0x2f28bcu: goto label_2f28bc;
        case 0x2f28c0u: goto label_2f28c0;
        case 0x2f28c4u: goto label_2f28c4;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28ccu: goto label_2f28cc;
        case 0x2f28d0u: goto label_2f28d0;
        case 0x2f28d4u: goto label_2f28d4;
        case 0x2f28d8u: goto label_2f28d8;
        case 0x2f28dcu: goto label_2f28dc;
        case 0x2f28e0u: goto label_2f28e0;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f28e8u: goto label_2f28e8;
        case 0x2f28ecu: goto label_2f28ec;
        case 0x2f28f0u: goto label_2f28f0;
        case 0x2f28f4u: goto label_2f28f4;
        case 0x2f28f8u: goto label_2f28f8;
        case 0x2f28fcu: goto label_2f28fc;
        case 0x2f2900u: goto label_2f2900;
        case 0x2f2904u: goto label_2f2904;
        case 0x2f2908u: goto label_2f2908;
        case 0x2f290cu: goto label_2f290c;
        case 0x2f2910u: goto label_2f2910;
        case 0x2f2914u: goto label_2f2914;
        case 0x2f2918u: goto label_2f2918;
        case 0x2f291cu: goto label_2f291c;
        case 0x2f2920u: goto label_2f2920;
        case 0x2f2924u: goto label_2f2924;
        case 0x2f2928u: goto label_2f2928;
        case 0x2f292cu: goto label_2f292c;
        case 0x2f2930u: goto label_2f2930;
        case 0x2f2934u: goto label_2f2934;
        case 0x2f2938u: goto label_2f2938;
        case 0x2f293cu: goto label_2f293c;
        case 0x2f2940u: goto label_2f2940;
        case 0x2f2944u: goto label_2f2944;
        case 0x2f2948u: goto label_2f2948;
        case 0x2f294cu: goto label_2f294c;
        case 0x2f2950u: goto label_2f2950;
        case 0x2f2954u: goto label_2f2954;
        case 0x2f2958u: goto label_2f2958;
        case 0x2f295cu: goto label_2f295c;
        case 0x2f2960u: goto label_2f2960;
        case 0x2f2964u: goto label_2f2964;
        case 0x2f2968u: goto label_2f2968;
        case 0x2f296cu: goto label_2f296c;
        case 0x2f2970u: goto label_2f2970;
        case 0x2f2974u: goto label_2f2974;
        case 0x2f2978u: goto label_2f2978;
        case 0x2f297cu: goto label_2f297c;
        case 0x2f2980u: goto label_2f2980;
        case 0x2f2984u: goto label_2f2984;
        case 0x2f2988u: goto label_2f2988;
        case 0x2f298cu: goto label_2f298c;
        case 0x2f2990u: goto label_2f2990;
        case 0x2f2994u: goto label_2f2994;
        case 0x2f2998u: goto label_2f2998;
        case 0x2f299cu: goto label_2f299c;
        case 0x2f29a0u: goto label_2f29a0;
        case 0x2f29a4u: goto label_2f29a4;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29acu: goto label_2f29ac;
        case 0x2f29b0u: goto label_2f29b0;
        case 0x2f29b4u: goto label_2f29b4;
        case 0x2f29b8u: goto label_2f29b8;
        case 0x2f29bcu: goto label_2f29bc;
        case 0x2f29c0u: goto label_2f29c0;
        case 0x2f29c4u: goto label_2f29c4;
        case 0x2f29c8u: goto label_2f29c8;
        case 0x2f29ccu: goto label_2f29cc;
        case 0x2f29d0u: goto label_2f29d0;
        case 0x2f29d4u: goto label_2f29d4;
        case 0x2f29d8u: goto label_2f29d8;
        case 0x2f29dcu: goto label_2f29dc;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29e4u: goto label_2f29e4;
        case 0x2f29e8u: goto label_2f29e8;
        case 0x2f29ecu: goto label_2f29ec;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f29f4u: goto label_2f29f4;
        case 0x2f29f8u: goto label_2f29f8;
        case 0x2f29fcu: goto label_2f29fc;
        case 0x2f2a00u: goto label_2f2a00;
        case 0x2f2a04u: goto label_2f2a04;
        case 0x2f2a08u: goto label_2f2a08;
        case 0x2f2a0cu: goto label_2f2a0c;
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a14u: goto label_2f2a14;
        case 0x2f2a18u: goto label_2f2a18;
        case 0x2f2a1cu: goto label_2f2a1c;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a24u: goto label_2f2a24;
        case 0x2f2a28u: goto label_2f2a28;
        case 0x2f2a2cu: goto label_2f2a2c;
        case 0x2f2a30u: goto label_2f2a30;
        case 0x2f2a34u: goto label_2f2a34;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2a3cu: goto label_2f2a3c;
        case 0x2f2a40u: goto label_2f2a40;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a48u: goto label_2f2a48;
        case 0x2f2a4cu: goto label_2f2a4c;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a54u: goto label_2f2a54;
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2a5cu: goto label_2f2a5c;
        case 0x2f2a60u: goto label_2f2a60;
        case 0x2f2a64u: goto label_2f2a64;
        case 0x2f2a68u: goto label_2f2a68;
        case 0x2f2a6cu: goto label_2f2a6c;
        case 0x2f2a70u: goto label_2f2a70;
        case 0x2f2a74u: goto label_2f2a74;
        case 0x2f2a78u: goto label_2f2a78;
        case 0x2f2a7cu: goto label_2f2a7c;
        case 0x2f2a80u: goto label_2f2a80;
        case 0x2f2a84u: goto label_2f2a84;
        case 0x2f2a88u: goto label_2f2a88;
        case 0x2f2a8cu: goto label_2f2a8c;
        case 0x2f2a90u: goto label_2f2a90;
        case 0x2f2a94u: goto label_2f2a94;
        case 0x2f2a98u: goto label_2f2a98;
        case 0x2f2a9cu: goto label_2f2a9c;
        case 0x2f2aa0u: goto label_2f2aa0;
        case 0x2f2aa4u: goto label_2f2aa4;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2ab0u: goto label_2f2ab0;
        case 0x2f2ab4u: goto label_2f2ab4;
        case 0x2f2ab8u: goto label_2f2ab8;
        case 0x2f2abcu: goto label_2f2abc;
        case 0x2f2ac0u: goto label_2f2ac0;
        case 0x2f2ac4u: goto label_2f2ac4;
        case 0x2f2ac8u: goto label_2f2ac8;
        case 0x2f2accu: goto label_2f2acc;
        case 0x2f2ad0u: goto label_2f2ad0;
        case 0x2f2ad4u: goto label_2f2ad4;
        case 0x2f2ad8u: goto label_2f2ad8;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2ae0u: goto label_2f2ae0;
        case 0x2f2ae4u: goto label_2f2ae4;
        case 0x2f2ae8u: goto label_2f2ae8;
        case 0x2f2aecu: goto label_2f2aec;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2af4u: goto label_2f2af4;
        case 0x2f2af8u: goto label_2f2af8;
        case 0x2f2afcu: goto label_2f2afc;
        case 0x2f2b00u: goto label_2f2b00;
        case 0x2f2b04u: goto label_2f2b04;
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b0cu: goto label_2f2b0c;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b14u: goto label_2f2b14;
        case 0x2f2b18u: goto label_2f2b18;
        case 0x2f2b1cu: goto label_2f2b1c;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b24u: goto label_2f2b24;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2b2cu: goto label_2f2b2c;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b34u: goto label_2f2b34;
        case 0x2f2b38u: goto label_2f2b38;
        case 0x2f2b3cu: goto label_2f2b3c;
        case 0x2f2b40u: goto label_2f2b40;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b48u: goto label_2f2b48;
        case 0x2f2b4cu: goto label_2f2b4c;
        case 0x2f2b50u: goto label_2f2b50;
        case 0x2f2b54u: goto label_2f2b54;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b5cu: goto label_2f2b5c;
        case 0x2f2b60u: goto label_2f2b60;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b68u: goto label_2f2b68;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b74u: goto label_2f2b74;
        case 0x2f2b78u: goto label_2f2b78;
        case 0x2f2b7cu: goto label_2f2b7c;
        case 0x2f2b80u: goto label_2f2b80;
        case 0x2f2b84u: goto label_2f2b84;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b90u: goto label_2f2b90;
        case 0x2f2b94u: goto label_2f2b94;
        case 0x2f2b98u: goto label_2f2b98;
        case 0x2f2b9cu: goto label_2f2b9c;
        case 0x2f2ba0u: goto label_2f2ba0;
        case 0x2f2ba4u: goto label_2f2ba4;
        case 0x2f2ba8u: goto label_2f2ba8;
        case 0x2f2bacu: goto label_2f2bac;
        case 0x2f2bb0u: goto label_2f2bb0;
        case 0x2f2bb4u: goto label_2f2bb4;
        case 0x2f2bb8u: goto label_2f2bb8;
        case 0x2f2bbcu: goto label_2f2bbc;
        case 0x2f2bc0u: goto label_2f2bc0;
        case 0x2f2bc4u: goto label_2f2bc4;
        case 0x2f2bc8u: goto label_2f2bc8;
        case 0x2f2bccu: goto label_2f2bcc;
        case 0x2f2bd0u: goto label_2f2bd0;
        case 0x2f2bd4u: goto label_2f2bd4;
        case 0x2f2bd8u: goto label_2f2bd8;
        case 0x2f2bdcu: goto label_2f2bdc;
        case 0x2f2be0u: goto label_2f2be0;
        case 0x2f2be4u: goto label_2f2be4;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2becu: goto label_2f2bec;
        case 0x2f2bf0u: goto label_2f2bf0;
        case 0x2f2bf4u: goto label_2f2bf4;
        case 0x2f2bf8u: goto label_2f2bf8;
        case 0x2f2bfcu: goto label_2f2bfc;
        case 0x2f2c00u: goto label_2f2c00;
        case 0x2f2c04u: goto label_2f2c04;
        case 0x2f2c08u: goto label_2f2c08;
        case 0x2f2c0cu: goto label_2f2c0c;
        case 0x2f2c10u: goto label_2f2c10;
        case 0x2f2c14u: goto label_2f2c14;
        case 0x2f2c18u: goto label_2f2c18;
        case 0x2f2c1cu: goto label_2f2c1c;
        case 0x2f2c20u: goto label_2f2c20;
        case 0x2f2c24u: goto label_2f2c24;
        case 0x2f2c28u: goto label_2f2c28;
        case 0x2f2c2cu: goto label_2f2c2c;
        case 0x2f2c30u: goto label_2f2c30;
        case 0x2f2c34u: goto label_2f2c34;
        case 0x2f2c38u: goto label_2f2c38;
        case 0x2f2c3cu: goto label_2f2c3c;
        case 0x2f2c40u: goto label_2f2c40;
        case 0x2f2c44u: goto label_2f2c44;
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2c4cu: goto label_2f2c4c;
        case 0x2f2c50u: goto label_2f2c50;
        case 0x2f2c54u: goto label_2f2c54;
        case 0x2f2c58u: goto label_2f2c58;
        case 0x2f2c5cu: goto label_2f2c5c;
        case 0x2f2c60u: goto label_2f2c60;
        case 0x2f2c64u: goto label_2f2c64;
        case 0x2f2c68u: goto label_2f2c68;
        case 0x2f2c6cu: goto label_2f2c6c;
        case 0x2f2c70u: goto label_2f2c70;
        case 0x2f2c74u: goto label_2f2c74;
        case 0x2f2c78u: goto label_2f2c78;
        case 0x2f2c7cu: goto label_2f2c7c;
        case 0x2f2c80u: goto label_2f2c80;
        case 0x2f2c84u: goto label_2f2c84;
        case 0x2f2c88u: goto label_2f2c88;
        case 0x2f2c8cu: goto label_2f2c8c;
        case 0x2f2c90u: goto label_2f2c90;
        case 0x2f2c94u: goto label_2f2c94;
        case 0x2f2c98u: goto label_2f2c98;
        case 0x2f2c9cu: goto label_2f2c9c;
        case 0x2f2ca0u: goto label_2f2ca0;
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2ca8u: goto label_2f2ca8;
        case 0x2f2cacu: goto label_2f2cac;
        case 0x2f2cb0u: goto label_2f2cb0;
        case 0x2f2cb4u: goto label_2f2cb4;
        case 0x2f2cb8u: goto label_2f2cb8;
        case 0x2f2cbcu: goto label_2f2cbc;
        case 0x2f2cc0u: goto label_2f2cc0;
        case 0x2f2cc4u: goto label_2f2cc4;
        case 0x2f2cc8u: goto label_2f2cc8;
        case 0x2f2cccu: goto label_2f2ccc;
        case 0x2f2cd0u: goto label_2f2cd0;
        case 0x2f2cd4u: goto label_2f2cd4;
        case 0x2f2cd8u: goto label_2f2cd8;
        case 0x2f2cdcu: goto label_2f2cdc;
        case 0x2f2ce0u: goto label_2f2ce0;
        case 0x2f2ce4u: goto label_2f2ce4;
        case 0x2f2ce8u: goto label_2f2ce8;
        case 0x2f2cecu: goto label_2f2cec;
        case 0x2f2cf0u: goto label_2f2cf0;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2cf8u: goto label_2f2cf8;
        case 0x2f2cfcu: goto label_2f2cfc;
        case 0x2f2d00u: goto label_2f2d00;
        case 0x2f2d04u: goto label_2f2d04;
        case 0x2f2d08u: goto label_2f2d08;
        case 0x2f2d0cu: goto label_2f2d0c;
        case 0x2f2d10u: goto label_2f2d10;
        case 0x2f2d14u: goto label_2f2d14;
        case 0x2f2d18u: goto label_2f2d18;
        case 0x2f2d1cu: goto label_2f2d1c;
        case 0x2f2d20u: goto label_2f2d20;
        case 0x2f2d24u: goto label_2f2d24;
        case 0x2f2d28u: goto label_2f2d28;
        case 0x2f2d2cu: goto label_2f2d2c;
        case 0x2f2d30u: goto label_2f2d30;
        case 0x2f2d34u: goto label_2f2d34;
        case 0x2f2d38u: goto label_2f2d38;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d40u: goto label_2f2d40;
        case 0x2f2d44u: goto label_2f2d44;
        case 0x2f2d48u: goto label_2f2d48;
        case 0x2f2d4cu: goto label_2f2d4c;
        case 0x2f2d50u: goto label_2f2d50;
        case 0x2f2d54u: goto label_2f2d54;
        case 0x2f2d58u: goto label_2f2d58;
        case 0x2f2d5cu: goto label_2f2d5c;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d68u: goto label_2f2d68;
        case 0x2f2d6cu: goto label_2f2d6c;
        case 0x2f2d70u: goto label_2f2d70;
        case 0x2f2d74u: goto label_2f2d74;
        case 0x2f2d78u: goto label_2f2d78;
        case 0x2f2d7cu: goto label_2f2d7c;
        case 0x2f2d80u: goto label_2f2d80;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2d88u: goto label_2f2d88;
        case 0x2f2d8cu: goto label_2f2d8c;
        case 0x2f2d90u: goto label_2f2d90;
        case 0x2f2d94u: goto label_2f2d94;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2d9cu: goto label_2f2d9c;
        case 0x2f2da0u: goto label_2f2da0;
        case 0x2f2da4u: goto label_2f2da4;
        case 0x2f2da8u: goto label_2f2da8;
        case 0x2f2dacu: goto label_2f2dac;
        case 0x2f2db0u: goto label_2f2db0;
        case 0x2f2db4u: goto label_2f2db4;
        case 0x2f2db8u: goto label_2f2db8;
        case 0x2f2dbcu: goto label_2f2dbc;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2dc4u: goto label_2f2dc4;
        case 0x2f2dc8u: goto label_2f2dc8;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2dd0u: goto label_2f2dd0;
        case 0x2f2dd4u: goto label_2f2dd4;
        case 0x2f2dd8u: goto label_2f2dd8;
        case 0x2f2ddcu: goto label_2f2ddc;
        case 0x2f2de0u: goto label_2f2de0;
        case 0x2f2de4u: goto label_2f2de4;
        case 0x2f2de8u: goto label_2f2de8;
        case 0x2f2decu: goto label_2f2dec;
        case 0x2f2df0u: goto label_2f2df0;
        case 0x2f2df4u: goto label_2f2df4;
        case 0x2f2df8u: goto label_2f2df8;
        case 0x2f2dfcu: goto label_2f2dfc;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2e04u: goto label_2f2e04;
        case 0x2f2e08u: goto label_2f2e08;
        case 0x2f2e0cu: goto label_2f2e0c;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2e14u: goto label_2f2e14;
        case 0x2f2e18u: goto label_2f2e18;
        case 0x2f2e1cu: goto label_2f2e1c;
        case 0x2f2e20u: goto label_2f2e20;
        case 0x2f2e24u: goto label_2f2e24;
        case 0x2f2e28u: goto label_2f2e28;
        case 0x2f2e2cu: goto label_2f2e2c;
        case 0x2f2e30u: goto label_2f2e30;
        case 0x2f2e34u: goto label_2f2e34;
        case 0x2f2e38u: goto label_2f2e38;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e40u: goto label_2f2e40;
        case 0x2f2e44u: goto label_2f2e44;
        case 0x2f2e48u: goto label_2f2e48;
        case 0x2f2e4cu: goto label_2f2e4c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2e54u: goto label_2f2e54;
        case 0x2f2e58u: goto label_2f2e58;
        case 0x2f2e5cu: goto label_2f2e5c;
        case 0x2f2e60u: goto label_2f2e60;
        case 0x2f2e64u: goto label_2f2e64;
        case 0x2f2e68u: goto label_2f2e68;
        case 0x2f2e6cu: goto label_2f2e6c;
        case 0x2f2e70u: goto label_2f2e70;
        case 0x2f2e74u: goto label_2f2e74;
        case 0x2f2e78u: goto label_2f2e78;
        case 0x2f2e7cu: goto label_2f2e7c;
        case 0x2f2e80u: goto label_2f2e80;
        case 0x2f2e84u: goto label_2f2e84;
        case 0x2f2e88u: goto label_2f2e88;
        case 0x2f2e8cu: goto label_2f2e8c;
        case 0x2f2e90u: goto label_2f2e90;
        case 0x2f2e94u: goto label_2f2e94;
        case 0x2f2e98u: goto label_2f2e98;
        case 0x2f2e9cu: goto label_2f2e9c;
        case 0x2f2ea0u: goto label_2f2ea0;
        case 0x2f2ea4u: goto label_2f2ea4;
        case 0x2f2ea8u: goto label_2f2ea8;
        case 0x2f2eacu: goto label_2f2eac;
        case 0x2f2eb0u: goto label_2f2eb0;
        case 0x2f2eb4u: goto label_2f2eb4;
        case 0x2f2eb8u: goto label_2f2eb8;
        case 0x2f2ebcu: goto label_2f2ebc;
        case 0x2f2ec0u: goto label_2f2ec0;
        case 0x2f2ec4u: goto label_2f2ec4;
        case 0x2f2ec8u: goto label_2f2ec8;
        case 0x2f2eccu: goto label_2f2ecc;
        case 0x2f2ed0u: goto label_2f2ed0;
        case 0x2f2ed4u: goto label_2f2ed4;
        case 0x2f2ed8u: goto label_2f2ed8;
        case 0x2f2edcu: goto label_2f2edc;
        case 0x2f2ee0u: goto label_2f2ee0;
        case 0x2f2ee4u: goto label_2f2ee4;
        case 0x2f2ee8u: goto label_2f2ee8;
        case 0x2f2eecu: goto label_2f2eec;
        case 0x2f2ef0u: goto label_2f2ef0;
        case 0x2f2ef4u: goto label_2f2ef4;
        case 0x2f2ef8u: goto label_2f2ef8;
        case 0x2f2efcu: goto label_2f2efc;
        case 0x2f2f00u: goto label_2f2f00;
        case 0x2f2f04u: goto label_2f2f04;
        case 0x2f2f08u: goto label_2f2f08;
        case 0x2f2f0cu: goto label_2f2f0c;
        case 0x2f2f10u: goto label_2f2f10;
        case 0x2f2f14u: goto label_2f2f14;
        case 0x2f2f18u: goto label_2f2f18;
        case 0x2f2f1cu: goto label_2f2f1c;
        case 0x2f2f20u: goto label_2f2f20;
        case 0x2f2f24u: goto label_2f2f24;
        case 0x2f2f28u: goto label_2f2f28;
        case 0x2f2f2cu: goto label_2f2f2c;
        case 0x2f2f30u: goto label_2f2f30;
        case 0x2f2f34u: goto label_2f2f34;
        case 0x2f2f38u: goto label_2f2f38;
        case 0x2f2f3cu: goto label_2f2f3c;
        case 0x2f2f40u: goto label_2f2f40;
        case 0x2f2f44u: goto label_2f2f44;
        case 0x2f2f48u: goto label_2f2f48;
        case 0x2f2f4cu: goto label_2f2f4c;
        case 0x2f2f50u: goto label_2f2f50;
        case 0x2f2f54u: goto label_2f2f54;
        case 0x2f2f58u: goto label_2f2f58;
        case 0x2f2f5cu: goto label_2f2f5c;
        case 0x2f2f60u: goto label_2f2f60;
        case 0x2f2f64u: goto label_2f2f64;
        case 0x2f2f68u: goto label_2f2f68;
        case 0x2f2f6cu: goto label_2f2f6c;
        case 0x2f2f70u: goto label_2f2f70;
        case 0x2f2f74u: goto label_2f2f74;
        case 0x2f2f78u: goto label_2f2f78;
        case 0x2f2f7cu: goto label_2f2f7c;
        case 0x2f2f80u: goto label_2f2f80;
        case 0x2f2f84u: goto label_2f2f84;
        case 0x2f2f88u: goto label_2f2f88;
        case 0x2f2f8cu: goto label_2f2f8c;
        case 0x2f2f90u: goto label_2f2f90;
        case 0x2f2f94u: goto label_2f2f94;
        case 0x2f2f98u: goto label_2f2f98;
        case 0x2f2f9cu: goto label_2f2f9c;
        case 0x2f2fa0u: goto label_2f2fa0;
        case 0x2f2fa4u: goto label_2f2fa4;
        case 0x2f2fa8u: goto label_2f2fa8;
        case 0x2f2facu: goto label_2f2fac;
        case 0x2f2fb0u: goto label_2f2fb0;
        case 0x2f2fb4u: goto label_2f2fb4;
        case 0x2f2fb8u: goto label_2f2fb8;
        case 0x2f2fbcu: goto label_2f2fbc;
        case 0x2f2fc0u: goto label_2f2fc0;
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fc8u: goto label_2f2fc8;
        case 0x2f2fccu: goto label_2f2fcc;
        case 0x2f2fd0u: goto label_2f2fd0;
        case 0x2f2fd4u: goto label_2f2fd4;
        case 0x2f2fd8u: goto label_2f2fd8;
        case 0x2f2fdcu: goto label_2f2fdc;
        case 0x2f2fe0u: goto label_2f2fe0;
        case 0x2f2fe4u: goto label_2f2fe4;
        case 0x2f2fe8u: goto label_2f2fe8;
        case 0x2f2fecu: goto label_2f2fec;
        case 0x2f2ff0u: goto label_2f2ff0;
        case 0x2f2ff4u: goto label_2f2ff4;
        case 0x2f2ff8u: goto label_2f2ff8;
        case 0x2f2ffcu: goto label_2f2ffc;
        case 0x2f3000u: goto label_2f3000;
        case 0x2f3004u: goto label_2f3004;
        case 0x2f3008u: goto label_2f3008;
        case 0x2f300cu: goto label_2f300c;
        case 0x2f3010u: goto label_2f3010;
        case 0x2f3014u: goto label_2f3014;
        case 0x2f3018u: goto label_2f3018;
        case 0x2f301cu: goto label_2f301c;
        case 0x2f3020u: goto label_2f3020;
        case 0x2f3024u: goto label_2f3024;
        case 0x2f3028u: goto label_2f3028;
        case 0x2f302cu: goto label_2f302c;
        case 0x2f3030u: goto label_2f3030;
        case 0x2f3034u: goto label_2f3034;
        case 0x2f3038u: goto label_2f3038;
        case 0x2f303cu: goto label_2f303c;
        case 0x2f3040u: goto label_2f3040;
        case 0x2f3044u: goto label_2f3044;
        case 0x2f3048u: goto label_2f3048;
        case 0x2f304cu: goto label_2f304c;
        case 0x2f3050u: goto label_2f3050;
        case 0x2f3054u: goto label_2f3054;
        case 0x2f3058u: goto label_2f3058;
        case 0x2f305cu: goto label_2f305c;
        case 0x2f3060u: goto label_2f3060;
        case 0x2f3064u: goto label_2f3064;
        case 0x2f3068u: goto label_2f3068;
        case 0x2f306cu: goto label_2f306c;
        case 0x2f3070u: goto label_2f3070;
        case 0x2f3074u: goto label_2f3074;
        case 0x2f3078u: goto label_2f3078;
        case 0x2f307cu: goto label_2f307c;
        case 0x2f3080u: goto label_2f3080;
        case 0x2f3084u: goto label_2f3084;
        case 0x2f3088u: goto label_2f3088;
        case 0x2f308cu: goto label_2f308c;
        case 0x2f3090u: goto label_2f3090;
        case 0x2f3094u: goto label_2f3094;
        case 0x2f3098u: goto label_2f3098;
        case 0x2f309cu: goto label_2f309c;
        case 0x2f30a0u: goto label_2f30a0;
        case 0x2f30a4u: goto label_2f30a4;
        case 0x2f30a8u: goto label_2f30a8;
        case 0x2f30acu: goto label_2f30ac;
        case 0x2f30b0u: goto label_2f30b0;
        case 0x2f30b4u: goto label_2f30b4;
        case 0x2f30b8u: goto label_2f30b8;
        case 0x2f30bcu: goto label_2f30bc;
        case 0x2f30c0u: goto label_2f30c0;
        case 0x2f30c4u: goto label_2f30c4;
        case 0x2f30c8u: goto label_2f30c8;
        case 0x2f30ccu: goto label_2f30cc;
        case 0x2f30d0u: goto label_2f30d0;
        case 0x2f30d4u: goto label_2f30d4;
        case 0x2f30d8u: goto label_2f30d8;
        case 0x2f30dcu: goto label_2f30dc;
        case 0x2f30e0u: goto label_2f30e0;
        case 0x2f30e4u: goto label_2f30e4;
        case 0x2f30e8u: goto label_2f30e8;
        case 0x2f30ecu: goto label_2f30ec;
        case 0x2f30f0u: goto label_2f30f0;
        case 0x2f30f4u: goto label_2f30f4;
        case 0x2f30f8u: goto label_2f30f8;
        case 0x2f30fcu: goto label_2f30fc;
        case 0x2f3100u: goto label_2f3100;
        case 0x2f3104u: goto label_2f3104;
        case 0x2f3108u: goto label_2f3108;
        case 0x2f310cu: goto label_2f310c;
        case 0x2f3110u: goto label_2f3110;
        case 0x2f3114u: goto label_2f3114;
        default: break;
    }

    ctx->pc = 0x2f28b8u;

label_2f28b8:
    // 0x2f28b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f28bc:
    // 0x2f28bc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f28bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2f28c0:
    // 0x2f28c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2f28c4:
    // 0x2f28c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f28c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f28c8:
    // 0x2f28c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2f28cc:
    // 0x2f28cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f28d0:
    // 0x2f28d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2f28d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2f28d4:
    // 0x2f28d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f28d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f28d8:
    // 0x2f28d8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2f28d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2f28dc:
    // 0x2f28dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f28e0:
    // 0x2f28e0: 0xc0bca06  jal         func_2F2818
label_2f28e4:
    if (ctx->pc == 0x2F28E4u) {
        ctx->pc = 0x2F28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28E0u;
        // 0x2f28e4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28E8u;
        goto label_2f28e8;
    }
    ctx->pc = 0x2F28E0u;
    SET_GPR_U32(ctx, 31, 0x2F28E8u);
    ctx->pc = 0x2F28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28E0u;
    // 0x2f28e4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2818u, 0x2F28E0u, 0x2F28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28E8u;
label_2f28e8:
    // 0x2f28e8: 0x9223004b  lbu         $v1, 0x4B($s1)
    ctx->pc = 0x2f28e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
label_2f28ec:
    // 0x2f28ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f28f0:
    // 0x2f28f0: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_2f28f4:
    if (ctx->pc == 0x2F28F4u) {
        ctx->pc = 0x2F28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28F0u;
        // 0x2f28f4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28F8u;
        goto label_2f28f8;
    }
    ctx->pc = 0x2F28F0u;
    {
        const bool branch_taken_0x2f28f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f28f0) {
            ctx->pc = 0x2F28F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F28F0u;
            // 0x2f28f4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2934u;
            goto label_2f2934;
        }
    }
    ctx->pc = 0x2F28F8u;
label_2f28f8:
    // 0x2f28f8: 0xc088bbc  jal         func_222EF0
label_2f28fc:
    if (ctx->pc == 0x2F28FCu) {
        ctx->pc = 0x2F28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28F8u;
        // 0x2f28fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2900u;
        goto label_2f2900;
    }
    ctx->pc = 0x2F28F8u;
    SET_GPR_U32(ctx, 31, 0x2F2900u);
    ctx->pc = 0x2F28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28F8u;
    // 0x2f28fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2F28F8u, 0x2F2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2900u;
label_2f2900:
    // 0x2f2900: 0x3c0142c6  lui         $at, 0x42C6
    ctx->pc = 0x2f2900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17094 << 16));
label_2f2904:
    // 0x2f2904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2908:
    // 0x2f2908: 0x0  nop
    ctx->pc = 0x2f2908u;
    // NOP
label_2f290c:
    // 0x2f290c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f290cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2910:
    // 0x2f2910: 0x0  nop
    ctx->pc = 0x2f2910u;
    // NOP
label_2f2914:
    // 0x2f2914: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2f2918:
    if (ctx->pc == 0x2F2918u) {
        ctx->pc = 0x2F2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2914u;
        // 0x2f2918: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F291Cu;
        goto label_2f291c;
    }
    ctx->pc = 0x2F2914u;
    {
        const bool branch_taken_0x2f2914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2914) {
            ctx->pc = 0x2F2918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2914u;
            // 0x2f2918: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2934u;
            goto label_2f2934;
        }
    }
    ctx->pc = 0x2F291Cu;
label_2f291c:
    // 0x2f291c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2f291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2f2920:
    // 0x2f2920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2924:
    // 0x2f2924: 0xc088ba0  jal         func_222E80
label_2f2928:
    if (ctx->pc == 0x2F2928u) {
        ctx->pc = 0x2F2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2924u;
        // 0x2f2928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F292Cu;
        goto label_2f292c;
    }
    ctx->pc = 0x2F2924u;
    SET_GPR_U32(ctx, 31, 0x2F292Cu);
    ctx->pc = 0x2F2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2924u;
    // 0x2f2928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x2F2924u, 0x2F292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F292Cu;
label_2f292c:
    // 0x2f292c: 0xa220004b  sb          $zero, 0x4B($s1)
    ctx->pc = 0x2f292cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
label_2f2930:
    // 0x2f2930: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f2930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f2934:
    // 0x2f2934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f2934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f2938:
    // 0x2f2938: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f2938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f293c:
    // 0x2f293c: 0xc0e409a  jal         func_390268
label_2f2940:
    if (ctx->pc == 0x2F2940u) {
        ctx->pc = 0x2F2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F293Cu;
        // 0x2f2940: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2944u;
        goto label_2f2944;
    }
    ctx->pc = 0x2F293Cu;
    SET_GPR_U32(ctx, 31, 0x2F2944u);
    ctx->pc = 0x2F2940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F293Cu;
    // 0x2f2940: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F293Cu, 0x2F2944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2944u;
label_2f2944:
    // 0x2f2944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2948:
    // 0x2f2948: 0xc0a34d6  jal         func_28D358
label_2f294c:
    if (ctx->pc == 0x2F294Cu) {
        ctx->pc = 0x2F294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2948u;
        // 0x2f294c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2950u;
        goto label_2f2950;
    }
    ctx->pc = 0x2F2948u;
    SET_GPR_U32(ctx, 31, 0x2F2950u);
    ctx->pc = 0x2F294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2948u;
    // 0x2f294c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F2948u, 0x2F2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2950u;
label_2f2950:
    // 0x2f2950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2954:
    // 0x2f2954: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2f2958:
    if (ctx->pc == 0x2F2958u) {
        ctx->pc = 0x2F2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2954u;
        // 0x2f2958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F295Cu;
        goto label_2f295c;
    }
    ctx->pc = 0x2F2954u;
    {
        const bool branch_taken_0x2f2954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2954u;
        // 0x2f2958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2954) {
            ctx->pc = 0x2F29A4u;
            goto label_2f29a4;
        }
    }
    ctx->pc = 0x2F295Cu;
label_2f295c:
    // 0x2f295c: 0xc0bc592  jal         func_2F1648
label_2f2960:
    if (ctx->pc == 0x2F2960u) {
        ctx->pc = 0x2F2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F295Cu;
        // 0x2f2960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2964u;
        goto label_2f2964;
    }
    ctx->pc = 0x2F295Cu;
    SET_GPR_U32(ctx, 31, 0x2F2964u);
    ctx->pc = 0x2F2960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F295Cu;
    // 0x2f2960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1648u, 0x2F295Cu, 0x2F2964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2964u;
label_2f2964:
    // 0x2f2964: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f2968:
    // 0x2f2968: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f296c:
    // 0x2f296c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2f2970:
    if (ctx->pc == 0x2F2970u) {
        ctx->pc = 0x2F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F296Cu;
        // 0x2f2970: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2974u;
        goto label_2f2974;
    }
    ctx->pc = 0x2F296Cu;
    {
        const bool branch_taken_0x2f296c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f296c) {
            ctx->pc = 0x2F2970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F296Cu;
            // 0x2f2970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2974u;
            goto label_2f2974;
        }
    }
    ctx->pc = 0x2F2974u;
label_2f2974:
    // 0x2f2974: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2f2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2f2978:
    // 0x2f2978: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f2978u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f297c:
    // 0x2f297c: 0x2010  mfhi        $a0
    ctx->pc = 0x2f297cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2f2980:
    // 0x2f2980: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_2f2984:
    if (ctx->pc == 0x2F2984u) {
        ctx->pc = 0x2F2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2980u;
        // 0x2f2984: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2988u;
        goto label_2f2988;
    }
    ctx->pc = 0x2F2980u;
    {
        const bool branch_taken_0x2f2980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2980) {
            ctx->pc = 0x2F2984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2980u;
            // 0x2f2984: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F29A8u;
            goto label_2f29a8;
        }
    }
    ctx->pc = 0x2F2988u;
label_2f2988:
    // 0x2f2988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f298c:
    // 0x2f298c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f298cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2990:
    // 0x2f2990: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2f2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2f2994:
    // 0x2f2994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2998:
    // 0x2f2998: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2f2998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2f299c:
    // 0x2f299c: 0xc0a6800  jal         func_29A000
label_2f29a0:
    if (ctx->pc == 0x2F29A0u) {
        ctx->pc = 0x2F29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F299Cu;
        // 0x2f29a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29A4u;
        goto label_2f29a4;
    }
    ctx->pc = 0x2F299Cu;
    SET_GPR_U32(ctx, 31, 0x2F29A4u);
    ctx->pc = 0x2F29A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F299Cu;
    // 0x2f29a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2F299Cu, 0x2F29A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29A4u;
label_2f29a4:
    // 0x2f29a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f29a8:
    // 0x2f29a8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f29a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f29ac:
    // 0x2f29ac: 0x1c4001cf  bgtz        $v0, . + 4 + (0x1CF << 2)
label_2f29b0:
    if (ctx->pc == 0x2F29B0u) {
        ctx->pc = 0x2F29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29ACu;
        // 0x2f29b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29B4u;
        goto label_2f29b4;
    }
    ctx->pc = 0x2F29ACu;
    {
        const bool branch_taken_0x2f29ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29ACu;
        // 0x2f29b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29ac) {
            ctx->pc = 0x2F30ECu;
            goto label_2f30ec;
        }
    }
    ctx->pc = 0x2F29B4u;
label_2f29b4:
    // 0x2f29b4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2f29b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2f29b8:
    // 0x2f29b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f29bc:
    // 0x2f29bc: 0xc089998  jal         func_226660
label_2f29c0:
    if (ctx->pc == 0x2F29C0u) {
        ctx->pc = 0x2F29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29BCu;
        // 0x2f29c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29C4u;
        goto label_2f29c4;
    }
    ctx->pc = 0x2F29BCu;
    SET_GPR_U32(ctx, 31, 0x2F29C4u);
    ctx->pc = 0x2F29C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29BCu;
    // 0x2f29c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F29BCu, 0x2F29C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29C4u;
label_2f29c4:
    // 0x2f29c4: 0x105301ca  beq         $v0, $s3, . + 4 + (0x1CA << 2)
label_2f29c8:
    if (ctx->pc == 0x2F29C8u) {
        ctx->pc = 0x2F29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29C4u;
        // 0x2f29c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29CCu;
        goto label_2f29cc;
    }
    ctx->pc = 0x2F29C4u;
    {
        const bool branch_taken_0x2f29c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29C4u;
        // 0x2f29c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29c4) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F29CCu;
label_2f29cc:
    // 0x2f29cc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2f29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2f29d0:
    // 0x2f29d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f29d4:
    // 0x2f29d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f29d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f29d8:
    // 0x2f29d8: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x2f29d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_2f29dc:
    // 0x2f29dc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2f29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2f29e0:
    // 0x2f29e0: 0x54600048  bnel        $v1, $zero, . + 4 + (0x48 << 2)
label_2f29e4:
    if (ctx->pc == 0x2F29E4u) {
        ctx->pc = 0x2F29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29E0u;
        // 0x2f29e4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29E8u;
        goto label_2f29e8;
    }
    ctx->pc = 0x2F29E0u;
    {
        const bool branch_taken_0x2f29e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f29e0) {
            ctx->pc = 0x2F29E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F29E0u;
            // 0x2f29e4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2B04u;
            goto label_2f2b04;
        }
    }
    ctx->pc = 0x2F29E8u;
label_2f29e8:
    // 0x2f29e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f29ec:
    // 0x2f29ec: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2f29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f29f0:
    // 0x2f29f0: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2f29f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2f29f4:
    // 0x2f29f4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_2f29f8:
    if (ctx->pc == 0x2F29F8u) {
        ctx->pc = 0x2F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29F4u;
        // 0x2f29f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29FCu;
        goto label_2f29fc;
    }
    ctx->pc = 0x2F29F4u;
    {
        const bool branch_taken_0x2f29f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29F4u;
        // 0x2f29f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29f4) {
            ctx->pc = 0x2F2A78u;
            goto label_2f2a78;
        }
    }
    ctx->pc = 0x2F29FCu;
label_2f29fc:
    // 0x2f29fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f2a00:
    // 0x2f2a00: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f2a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f2a04:
    // 0x2f2a04: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f2a08:
    // 0x2f2a08: 0x40f809  jalr        $v0
label_2f2a0c:
    if (ctx->pc == 0x2F2A0Cu) {
        ctx->pc = 0x2F2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A08u;
        // 0x2f2a0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A10u;
        goto label_2f2a10;
    }
    ctx->pc = 0x2F2A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2A10u);
        ctx->pc = 0x2F2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A08u;
        // 0x2f2a0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A08u, 0x2F2A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2A10u;
label_2f2a10:
    // 0x2f2a10: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2f2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f2a14:
    // 0x2f2a14: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_2f2a18:
    if (ctx->pc == 0x2F2A18u) {
        ctx->pc = 0x2F2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A14u;
        // 0x2f2a18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A1Cu;
        goto label_2f2a1c;
    }
    ctx->pc = 0x2F2A14u;
    {
        const bool branch_taken_0x2f2a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A14u;
        // 0x2f2a18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a14) {
            ctx->pc = 0x2F2A78u;
            goto label_2f2a78;
        }
    }
    ctx->pc = 0x2F2A1Cu;
label_2f2a1c:
    // 0x2f2a1c: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x2f2a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
label_2f2a20:
    // 0x2f2a20: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f2a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f2a24:
    // 0x2f2a24: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2f2a28:
    if (ctx->pc == 0x2F2A28u) {
        ctx->pc = 0x2F2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A24u;
        // 0x2f2a28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A2Cu;
        goto label_2f2a2c;
    }
    ctx->pc = 0x2F2A24u;
    {
        const bool branch_taken_0x2f2a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A24u;
        // 0x2f2a28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a24) {
            ctx->pc = 0x2F2A78u;
            goto label_2f2a78;
        }
    }
    ctx->pc = 0x2F2A2Cu;
label_2f2a2c:
    // 0x2f2a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2a30:
    // 0x2f2a30: 0xc087b0e  jal         func_21EC38
label_2f2a34:
    if (ctx->pc == 0x2F2A34u) {
        ctx->pc = 0x2F2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A30u;
        // 0x2f2a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A38u;
        goto label_2f2a38;
    }
    ctx->pc = 0x2F2A30u;
    SET_GPR_U32(ctx, 31, 0x2F2A38u);
    ctx->pc = 0x2F2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A30u;
    // 0x2f2a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2F2A30u, 0x2F2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A38u;
label_2f2a38:
    // 0x2f2a38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2a3c:
    // 0x2f2a3c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f2a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f2a40:
    // 0x2f2a40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f2a44:
    // 0x2f2a44: 0x40f809  jalr        $v0
label_2f2a48:
    if (ctx->pc == 0x2F2A48u) {
        ctx->pc = 0x2F2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A44u;
        // 0x2f2a48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A4Cu;
        goto label_2f2a4c;
    }
    ctx->pc = 0x2F2A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2A4Cu);
        ctx->pc = 0x2F2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A44u;
        // 0x2f2a48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A44u, 0x2F2A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2A4Cu;
label_2f2a4c:
    // 0x2f2a4c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2f2a50:
    // 0x2f2a50: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2f2a50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2f2a54:
    // 0x2f2a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a58:
    // 0x2f2a58: 0x24a57be8  addiu       $a1, $a1, 0x7BE8
    ctx->pc = 0x2f2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31720));
label_2f2a5c:
    // 0x2f2a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f2a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a60:
    // 0x2f2a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a64:
    // 0x2f2a64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a68:
    // 0x2f2a68: 0xc08e568  jal         func_2395A0
label_2f2a6c:
    if (ctx->pc == 0x2F2A6Cu) {
        ctx->pc = 0x2F2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A68u;
        // 0x2f2a6c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A70u;
        goto label_2f2a70;
    }
    ctx->pc = 0x2F2A68u;
    SET_GPR_U32(ctx, 31, 0x2F2A70u);
    ctx->pc = 0x2F2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A68u;
    // 0x2f2a6c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x2F2A68u, 0x2F2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A70u;
label_2f2a70:
    // 0x2f2a70: 0x1000000b  b           . + 4 + (0xB << 2)
label_2f2a74:
    if (ctx->pc == 0x2F2A74u) {
        ctx->pc = 0x2F2A78u;
        goto label_2f2a78;
    }
    ctx->pc = 0x2F2A70u;
    {
        const bool branch_taken_0x2f2a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a70) {
            ctx->pc = 0x2F2AA0u;
            goto label_2f2aa0;
        }
    }
    ctx->pc = 0x2F2A78u;
label_2f2a78:
    // 0x2f2a78: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f2a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f2a7c:
    // 0x2f2a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2a80:
    // 0x2f2a80: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f2a80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f2a84:
    // 0x2f2a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a88:
    // 0x2f2a88: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x2f2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2f2a8c:
    // 0x2f2a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f2a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a90:
    // 0x2f2a90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f2a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2a94:
    // 0x2f2a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a98:
    // 0x2f2a98: 0xc088178  jal         func_2205E0
label_2f2a9c:
    if (ctx->pc == 0x2F2A9Cu) {
        ctx->pc = 0x2F2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A98u;
        // 0x2f2a9c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AA0u;
        goto label_2f2aa0;
    }
    ctx->pc = 0x2F2A98u;
    SET_GPR_U32(ctx, 31, 0x2F2AA0u);
    ctx->pc = 0x2F2A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A98u;
    // 0x2f2a9c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F2A98u, 0x2F2AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AA0u;
label_2f2aa0:
    // 0x2f2aa0: 0xc0a367c  jal         func_28D9F0
label_2f2aa4:
    if (ctx->pc == 0x2F2AA4u) {
        ctx->pc = 0x2F2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AA0u;
        // 0x2f2aa4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AA8u;
        goto label_2f2aa8;
    }
    ctx->pc = 0x2F2AA0u;
    SET_GPR_U32(ctx, 31, 0x2F2AA8u);
    ctx->pc = 0x2F2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AA0u;
    // 0x2f2aa4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2AA0u, 0x2F2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AA8u;
label_2f2aa8:
    // 0x2f2aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2aac:
    // 0x2f2aac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2f2ab0:
    if (ctx->pc == 0x2F2AB0u) {
        ctx->pc = 0x2F2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AACu;
        // 0x2f2ab0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AB4u;
        goto label_2f2ab4;
    }
    ctx->pc = 0x2F2AACu;
    {
        const bool branch_taken_0x2f2aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AACu;
        // 0x2f2ab0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2aac) {
            ctx->pc = 0x2F2AF4u;
            goto label_2f2af4;
        }
    }
    ctx->pc = 0x2F2AB4u;
label_2f2ab4:
    // 0x2f2ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ab8:
    // 0x2f2ab8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f2ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f2abc:
    // 0x2f2abc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f2abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f2ac0:
    // 0x2f2ac0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f2ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f2ac4:
    // 0x2f2ac4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f2ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f2ac8:
    // 0x2f2ac8: 0xc0cd4fc  jal         func_3353F0
label_2f2acc:
    if (ctx->pc == 0x2F2ACCu) {
        ctx->pc = 0x2F2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AC8u;
        // 0x2f2acc: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AD0u;
        goto label_2f2ad0;
    }
    ctx->pc = 0x2F2AC8u;
    SET_GPR_U32(ctx, 31, 0x2F2AD0u);
    ctx->pc = 0x2F2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AC8u;
    // 0x2f2acc: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2F2AC8u, 0x2F2AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AD0u;
label_2f2ad0:
    // 0x2f2ad0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2ad4:
    // 0x2f2ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ad8:
    // 0x2f2ad8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f2ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f2adc:
    // 0x2f2adc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f2adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ae0:
    // 0x2f2ae0: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2f2ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2f2ae4:
    // 0x2f2ae4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f2ae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f2ae8:
    // 0x2f2ae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f2ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2aec:
    // 0x2f2aec: 0xc0be968  jal         func_2FA5A0
label_2f2af0:
    if (ctx->pc == 0x2F2AF0u) {
        ctx->pc = 0x2F2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AECu;
        // 0x2f2af0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AF4u;
        goto label_2f2af4;
    }
    ctx->pc = 0x2F2AECu;
    SET_GPR_U32(ctx, 31, 0x2F2AF4u);
    ctx->pc = 0x2F2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AECu;
    // 0x2f2af0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F2AECu, 0x2F2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AF4u;
label_2f2af4:
    // 0x2f2af4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2af8:
    // 0x2f2af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2afc:
    // 0x2f2afc: 0x1000017c  b           . + 4 + (0x17C << 2)
label_2f2b00:
    if (ctx->pc == 0x2F2B00u) {
        ctx->pc = 0x2F2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AFCu;
        // 0x2f2b00: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B04u;
        goto label_2f2b04;
    }
    ctx->pc = 0x2F2AFCu;
    {
        const bool branch_taken_0x2f2afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AFCu;
        // 0x2f2b00: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2afc) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2B04u;
label_2f2b04:
    // 0x2f2b04: 0x1473005a  bne         $v1, $s3, . + 4 + (0x5A << 2)
label_2f2b08:
    if (ctx->pc == 0x2F2B08u) {
        ctx->pc = 0x2F2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B04u;
        // 0x2f2b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B0Cu;
        goto label_2f2b0c;
    }
    ctx->pc = 0x2F2B04u;
    {
        const bool branch_taken_0x2f2b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B04u;
        // 0x2f2b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b04) {
            ctx->pc = 0x2F2C70u;
            goto label_2f2c70;
        }
    }
    ctx->pc = 0x2F2B0Cu;
label_2f2b0c:
    // 0x2f2b0c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f2b10:
    // 0x2f2b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b14:
    // 0x2f2b14: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f2b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f2b18:
    // 0x2f2b18: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f2b1c:
    // 0x2f2b1c: 0x60f809  jalr        $v1
label_2f2b20:
    if (ctx->pc == 0x2F2B20u) {
        ctx->pc = 0x2F2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B1Cu;
        // 0x2f2b20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B24u;
        goto label_2f2b24;
    }
    ctx->pc = 0x2F2B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2B24u);
        ctx->pc = 0x2F2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B1Cu;
        // 0x2f2b20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2B1Cu, 0x2F2B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2B24u;
label_2f2b24:
    // 0x2f2b24: 0xc08a0d0  jal         func_228340
label_2f2b28:
    if (ctx->pc == 0x2F2B28u) {
        ctx->pc = 0x2F2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B24u;
        // 0x2f2b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B2Cu;
        goto label_2f2b2c;
    }
    ctx->pc = 0x2F2B24u;
    SET_GPR_U32(ctx, 31, 0x2F2B2Cu);
    ctx->pc = 0x2F2B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B24u;
    // 0x2f2b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2F2B24u, 0x2F2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B2Cu;
label_2f2b2c:
    // 0x2f2b2c: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_2f2b30:
    if (ctx->pc == 0x2F2B30u) {
        ctx->pc = 0x2F2B34u;
        goto label_2f2b34;
    }
    ctx->pc = 0x2F2B2Cu;
    {
        const bool branch_taken_0x2f2b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f2b2c) {
            ctx->pc = 0x2F2B44u;
            goto label_2f2b44;
        }
    }
    ctx->pc = 0x2F2B34u;
label_2f2b34:
    // 0x2f2b34: 0xc08bfbc  jal         func_22FEF0
label_2f2b38:
    if (ctx->pc == 0x2F2B38u) {
        ctx->pc = 0x2F2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B34u;
        // 0x2f2b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B3Cu;
        goto label_2f2b3c;
    }
    ctx->pc = 0x2F2B34u;
    SET_GPR_U32(ctx, 31, 0x2F2B3Cu);
    ctx->pc = 0x2F2B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B34u;
    // 0x2f2b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F2B34u, 0x2F2B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B3Cu;
label_2f2b3c:
    // 0x2f2b3c: 0x1000016c  b           . + 4 + (0x16C << 2)
label_2f2b40:
    if (ctx->pc == 0x2F2B40u) {
        ctx->pc = 0x2F2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B3Cu;
        // 0x2f2b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B44u;
        goto label_2f2b44;
    }
    ctx->pc = 0x2F2B3Cu;
    {
        const bool branch_taken_0x2f2b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B3Cu;
        // 0x2f2b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b3c) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2B44u;
label_2f2b44:
    // 0x2f2b44: 0x56000046  bnel        $s0, $zero, . + 4 + (0x46 << 2)
label_2f2b48:
    if (ctx->pc == 0x2F2B48u) {
        ctx->pc = 0x2F2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B44u;
        // 0x2f2b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B4Cu;
        goto label_2f2b4c;
    }
    ctx->pc = 0x2F2B44u;
    {
        const bool branch_taken_0x2f2b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b44) {
            ctx->pc = 0x2F2B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2B44u;
            // 0x2f2b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2C60u;
            goto label_2f2c60;
        }
    }
    ctx->pc = 0x2F2B4Cu;
label_2f2b4c:
    // 0x2f2b4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f2b50:
    // 0x2f2b50: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2f2b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2f2b54:
    // 0x2f2b54: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2f2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2f2b58:
    // 0x2f2b58: 0x60f809  jalr        $v1
label_2f2b5c:
    if (ctx->pc == 0x2F2B5Cu) {
        ctx->pc = 0x2F2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B58u;
        // 0x2f2b5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B60u;
        goto label_2f2b60;
    }
    ctx->pc = 0x2F2B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2B60u);
        ctx->pc = 0x2F2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B58u;
        // 0x2f2b5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2B58u, 0x2F2B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2B60u;
label_2f2b60:
    // 0x2f2b60: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f2b64:
    // 0x2f2b64: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2f2b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2f2b68:
    // 0x2f2b68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f2b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2b6c:
    // 0x2f2b6c: 0xc0e409a  jal         func_390268
label_2f2b70:
    if (ctx->pc == 0x2F2B70u) {
        ctx->pc = 0x2F2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B6Cu;
        // 0x2f2b70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B74u;
        goto label_2f2b74;
    }
    ctx->pc = 0x2F2B6Cu;
    SET_GPR_U32(ctx, 31, 0x2F2B74u);
    ctx->pc = 0x2F2B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B6Cu;
    // 0x2f2b70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F2B6Cu, 0x2F2B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B74u;
label_2f2b74:
    // 0x2f2b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b78:
    // 0x2f2b78: 0xc0a34d6  jal         func_28D358
label_2f2b7c:
    if (ctx->pc == 0x2F2B7Cu) {
        ctx->pc = 0x2F2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B78u;
        // 0x2f2b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B80u;
        goto label_2f2b80;
    }
    ctx->pc = 0x2F2B78u;
    SET_GPR_U32(ctx, 31, 0x2F2B80u);
    ctx->pc = 0x2F2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B78u;
    // 0x2f2b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F2B78u, 0x2F2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B80u;
label_2f2b80:
    // 0x2f2b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b84:
    // 0x2f2b84: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_2f2b88:
    if (ctx->pc == 0x2F2B88u) {
        ctx->pc = 0x2F2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B84u;
        // 0x2f2b88: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B8Cu;
        goto label_2f2b8c;
    }
    ctx->pc = 0x2F2B84u;
    {
        const bool branch_taken_0x2f2b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b84) {
            ctx->pc = 0x2F2B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2B84u;
            // 0x2f2b88: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2B9Cu;
            goto label_2f2b9c;
        }
    }
    ctx->pc = 0x2F2B8Cu;
label_2f2b8c:
    // 0x2f2b8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2b90:
    // 0x2f2b90: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2f2b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_2f2b94:
    // 0x2f2b94: 0x10000155  b           . + 4 + (0x155 << 2)
label_2f2b98:
    if (ctx->pc == 0x2F2B98u) {
        ctx->pc = 0x2F2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B94u;
        // 0x2f2b98: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B9Cu;
        goto label_2f2b9c;
    }
    ctx->pc = 0x2F2B94u;
    {
        const bool branch_taken_0x2f2b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B94u;
        // 0x2f2b98: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b94) {
            ctx->pc = 0x2F30ECu;
            goto label_2f30ec;
        }
    }
    ctx->pc = 0x2F2B9Cu;
label_2f2b9c:
    // 0x2f2b9c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f2ba0:
    // 0x2f2ba0: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2f2ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f2ba4:
    // 0x2f2ba4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f2ba8:
    // 0x2f2ba8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f2ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f2bac:
    // 0x2f2bac: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f2bb0:
    // 0x2f2bb0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2f2bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f2bb4:
    // 0x2f2bb4: 0xc0cd780  jal         func_335E00
label_2f2bb8:
    if (ctx->pc == 0x2F2BB8u) {
        ctx->pc = 0x2F2BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BB4u;
        // 0x2f2bb8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BBCu;
        goto label_2f2bbc;
    }
    ctx->pc = 0x2F2BB4u;
    SET_GPR_U32(ctx, 31, 0x2F2BBCu);
    ctx->pc = 0x2F2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BB4u;
    // 0x2f2bb8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F2BB4u, 0x2F2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BBCu;
label_2f2bbc:
    // 0x2f2bbc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f2bbcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2f2bc0:
    // 0x2f2bc0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f2bc4:
    // 0x2f2bc4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2bc8:
    // 0x2f2bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2bcc:
    // 0x2f2bcc: 0x0  nop
    ctx->pc = 0x2f2bccu;
    // NOP
label_2f2bd0:
    // 0x2f2bd0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f2bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2bd4:
    // 0x2f2bd4: 0x0  nop
    ctx->pc = 0x2f2bd4u;
    // NOP
label_2f2bd8:
    // 0x2f2bd8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f2bdc:
    if (ctx->pc == 0x2F2BDCu) {
        ctx->pc = 0x2F2BE0u;
        goto label_2f2be0;
    }
    ctx->pc = 0x2F2BD8u;
    {
        const bool branch_taken_0x2f2bd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2bd8) {
            ctx->pc = 0x2F2BF4u;
            goto label_2f2bf4;
        }
    }
    ctx->pc = 0x2F2BE0u;
label_2f2be0:
    // 0x2f2be0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f2be4:
    // 0x2f2be4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2be8:
    // 0x2f2be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2bec:
    // 0x2f2bec: 0x0  nop
    ctx->pc = 0x2f2becu;
    // NOP
label_2f2bf0:
    // 0x2f2bf0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f2bf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f2bf4:
    // 0x2f2bf4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f2bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2f2bf8:
    // 0x2f2bf8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2bfc:
    // 0x2f2bfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c00:
    // 0x2f2c00: 0x0  nop
    ctx->pc = 0x2f2c00u;
    // NOP
label_2f2c04:
    // 0x2f2c04: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f2c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2c08:
    // 0x2f2c08: 0x0  nop
    ctx->pc = 0x2f2c08u;
    // NOP
label_2f2c0c:
    // 0x2f2c0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f2c10:
    if (ctx->pc == 0x2F2C10u) {
        ctx->pc = 0x2F2C14u;
        goto label_2f2c14;
    }
    ctx->pc = 0x2F2C0Cu;
    {
        const bool branch_taken_0x2f2c0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2c0c) {
            ctx->pc = 0x2F2C28u;
            goto label_2f2c28;
        }
    }
    ctx->pc = 0x2F2C14u;
label_2f2c14:
    // 0x2f2c14: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f2c18:
    // 0x2f2c18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2c1c:
    // 0x2f2c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c20:
    // 0x2f2c20: 0x0  nop
    ctx->pc = 0x2f2c20u;
    // NOP
label_2f2c24:
    // 0x2f2c24: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f2c24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f2c28:
    // 0x2f2c28: 0x3c013d07  lui         $at, 0x3D07
    ctx->pc = 0x2f2c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15623 << 16));
label_2f2c2c:
    // 0x2f2c2c: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x2f2c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
label_2f2c30:
    // 0x2f2c30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f2c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2c34:
    // 0x2f2c34: 0xc08f3e2  jal         func_23CF88
label_2f2c38:
    if (ctx->pc == 0x2F2C38u) {
        ctx->pc = 0x2F2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C34u;
        // 0x2f2c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C3Cu;
        goto label_2f2c3c;
    }
    ctx->pc = 0x2F2C34u;
    SET_GPR_U32(ctx, 31, 0x2F2C3Cu);
    ctx->pc = 0x2F2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C34u;
    // 0x2f2c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F2C34u, 0x2F2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C3Cu;
label_2f2c3c:
    // 0x2f2c3c: 0xc0a367c  jal         func_28D9F0
label_2f2c40:
    if (ctx->pc == 0x2F2C40u) {
        ctx->pc = 0x2F2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C3Cu;
        // 0x2f2c40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C44u;
        goto label_2f2c44;
    }
    ctx->pc = 0x2F2C3Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C44u);
    ctx->pc = 0x2F2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C3Cu;
    // 0x2f2c40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2C3Cu, 0x2F2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C44u;
label_2f2c44:
    // 0x2f2c44: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
label_2f2c48:
    if (ctx->pc == 0x2F2C48u) {
        ctx->pc = 0x2F2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C44u;
        // 0x2f2c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C4Cu;
        goto label_2f2c4c;
    }
    ctx->pc = 0x2F2C44u;
    {
        const bool branch_taken_0x2f2c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C44u;
        // 0x2f2c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c44) {
            ctx->pc = 0x2F30ECu;
            goto label_2f30ec;
        }
    }
    ctx->pc = 0x2F2C4Cu;
label_2f2c4c:
    // 0x2f2c4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2c50:
    // 0x2f2c50: 0xc0bebdc  jal         func_2FAF70
label_2f2c54:
    if (ctx->pc == 0x2F2C54u) {
        ctx->pc = 0x2F2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C50u;
        // 0x2f2c54: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C58u;
        goto label_2f2c58;
    }
    ctx->pc = 0x2F2C50u;
    SET_GPR_U32(ctx, 31, 0x2F2C58u);
    ctx->pc = 0x2F2C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C50u;
    // 0x2f2c54: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F2C50u, 0x2F2C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C58u;
label_2f2c58:
    // 0x2f2c58: 0x10000125  b           . + 4 + (0x125 << 2)
label_2f2c5c:
    if (ctx->pc == 0x2F2C5Cu) {
        ctx->pc = 0x2F2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C58u;
        // 0x2f2c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C60u;
        goto label_2f2c60;
    }
    ctx->pc = 0x2F2C58u;
    {
        const bool branch_taken_0x2f2c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C58u;
        // 0x2f2c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c58) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2C60u;
label_2f2c60:
    // 0x2f2c60: 0xc0bc676  jal         func_2F19D8
label_2f2c64:
    if (ctx->pc == 0x2F2C64u) {
        ctx->pc = 0x2F2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C60u;
        // 0x2f2c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C68u;
        goto label_2f2c68;
    }
    ctx->pc = 0x2F2C60u;
    SET_GPR_U32(ctx, 31, 0x2F2C68u);
    ctx->pc = 0x2F2C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C60u;
    // 0x2f2c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19D8u, 0x2F2C60u, 0x2F2C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C68u;
label_2f2c68:
    // 0x2f2c68: 0x10000121  b           . + 4 + (0x121 << 2)
label_2f2c6c:
    if (ctx->pc == 0x2F2C6Cu) {
        ctx->pc = 0x2F2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C68u;
        // 0x2f2c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C70u;
        goto label_2f2c70;
    }
    ctx->pc = 0x2F2C68u;
    {
        const bool branch_taken_0x2f2c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C68u;
        // 0x2f2c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c68) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2C70u;
label_2f2c70:
    // 0x2f2c70: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_2f2c74:
    if (ctx->pc == 0x2F2C74u) {
        ctx->pc = 0x2F2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C70u;
        // 0x2f2c74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C78u;
        goto label_2f2c78;
    }
    ctx->pc = 0x2F2C70u;
    {
        const bool branch_taken_0x2f2c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C70u;
        // 0x2f2c74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c70) {
            ctx->pc = 0x2F2D1Cu;
            goto label_2f2d1c;
        }
    }
    ctx->pc = 0x2F2C78u;
label_2f2c78:
    // 0x2f2c78: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f2c7c:
    // 0x2f2c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2c80:
    // 0x2f2c80: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f2c80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f2c84:
    // 0x2f2c84: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f2c88:
    // 0x2f2c88: 0x60f809  jalr        $v1
label_2f2c8c:
    if (ctx->pc == 0x2F2C8Cu) {
        ctx->pc = 0x2F2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C88u;
        // 0x2f2c8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C90u;
        goto label_2f2c90;
    }
    ctx->pc = 0x2F2C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2C90u);
        ctx->pc = 0x2F2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C88u;
        // 0x2f2c8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2C88u, 0x2F2C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2C90u;
label_2f2c90:
    // 0x2f2c90: 0xc08bfa0  jal         func_22FE80
label_2f2c94:
    if (ctx->pc == 0x2F2C94u) {
        ctx->pc = 0x2F2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C90u;
        // 0x2f2c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C98u;
        goto label_2f2c98;
    }
    ctx->pc = 0x2F2C90u;
    SET_GPR_U32(ctx, 31, 0x2F2C98u);
    ctx->pc = 0x2F2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C90u;
    // 0x2f2c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F2C90u, 0x2F2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C98u;
label_2f2c98:
    // 0x2f2c98: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x2f2c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_2f2c9c:
    // 0x2f2c9c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f2ca0:
    if (ctx->pc == 0x2F2CA0u) {
        ctx->pc = 0x2F2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C9Cu;
        // 0x2f2ca0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CA4u;
        goto label_2f2ca4;
    }
    ctx->pc = 0x2F2C9Cu;
    {
        const bool branch_taken_0x2f2c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C9Cu;
        // 0x2f2ca0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c9c) {
            ctx->pc = 0x2F2D10u;
            goto label_2f2d10;
        }
    }
    ctx->pc = 0x2F2CA4u;
label_2f2ca4:
    // 0x2f2ca4: 0x2405029d  addiu       $a1, $zero, 0x29D
    ctx->pc = 0x2f2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_2f2ca8:
    // 0x2f2ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2cac:
    // 0x2f2cac: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2f2cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_2f2cb0:
    // 0x2f2cb0: 0xc096a30  jal         func_25A8C0
label_2f2cb4:
    if (ctx->pc == 0x2F2CB4u) {
        ctx->pc = 0x2F2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CB0u;
        // 0x2f2cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CB8u;
        goto label_2f2cb8;
    }
    ctx->pc = 0x2F2CB0u;
    SET_GPR_U32(ctx, 31, 0x2F2CB8u);
    ctx->pc = 0x2F2CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CB0u;
    // 0x2f2cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x2F2CB0u, 0x2F2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CB8u;
label_2f2cb8:
    // 0x2f2cb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2cbc:
    // 0x2f2cbc: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2f2cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f2cc0:
    // 0x2f2cc0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2f2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f2cc4:
    // 0x2f2cc4: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2f2cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f2cc8:
    // 0x2f2cc8: 0x5453000d  bnel        $v0, $s3, . + 4 + (0xD << 2)
label_2f2ccc:
    if (ctx->pc == 0x2F2CCCu) {
        ctx->pc = 0x2F2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CC8u;
        // 0x2f2ccc: 0x92230048  lbu         $v1, 0x48($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CD0u;
        goto label_2f2cd0;
    }
    ctx->pc = 0x2F2CC8u;
    {
        const bool branch_taken_0x2f2cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f2cc8) {
            ctx->pc = 0x2F2CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CC8u;
            // 0x2f2ccc: 0x92230048  lbu         $v1, 0x48($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D00u;
            goto label_2f2d00;
        }
    }
    ctx->pc = 0x2F2CD0u;
label_2f2cd0:
    // 0x2f2cd0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2f2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2f2cd4:
    // 0x2f2cd4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f2cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f2cd8:
    // 0x2f2cd8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f2cdc:
    // 0x2f2cdc: 0x40f809  jalr        $v0
label_2f2ce0:
    if (ctx->pc == 0x2F2CE0u) {
        ctx->pc = 0x2F2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CDCu;
        // 0x2f2ce0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CE4u;
        goto label_2f2ce4;
    }
    ctx->pc = 0x2F2CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2CE4u);
        ctx->pc = 0x2F2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CDCu;
        // 0x2f2ce0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2CDCu, 0x2F2CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2CE4u;
label_2f2ce4:
    // 0x2f2ce4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2f2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f2ce8:
    // 0x2f2ce8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2f2cec:
    if (ctx->pc == 0x2F2CECu) {
        ctx->pc = 0x2F2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CE8u;
        // 0x2f2cec: 0x92230048  lbu         $v1, 0x48($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CF0u;
        goto label_2f2cf0;
    }
    ctx->pc = 0x2F2CE8u;
    {
        const bool branch_taken_0x2f2ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f2ce8) {
            ctx->pc = 0x2F2CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CE8u;
            // 0x2f2cec: 0x92230048  lbu         $v1, 0x48($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D00u;
            goto label_2f2d00;
        }
    }
    ctx->pc = 0x2F2CF0u;
label_2f2cf0:
    // 0x2f2cf0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2f2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f2cf4:
    // 0x2f2cf4: 0xc0c31e6  jal         func_30C798
label_2f2cf8:
    if (ctx->pc == 0x2F2CF8u) {
        ctx->pc = 0x2F2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CF4u;
        // 0x2f2cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CFCu;
        goto label_2f2cfc;
    }
    ctx->pc = 0x2F2CF4u;
    SET_GPR_U32(ctx, 31, 0x2F2CFCu);
    ctx->pc = 0x2F2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CF4u;
    // 0x2f2cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C798u, 0x2F2CF4u, 0x2F2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CFCu;
label_2f2cfc:
    // 0x2f2cfc: 0x92230048  lbu         $v1, 0x48($s1)
    ctx->pc = 0x2f2cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_2f2d00:
    // 0x2f2d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d04:
    // 0x2f2d04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f2d08:
    // 0x2f2d08: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_2f2d0c:
    if (ctx->pc == 0x2F2D0Cu) {
        ctx->pc = 0x2F2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D08u;
        // 0x2f2d0c: 0xa2230048  sb          $v1, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D10u;
        goto label_2f2d10;
    }
    ctx->pc = 0x2F2D08u;
    {
        const bool branch_taken_0x2f2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D08u;
        // 0x2f2d0c: 0xa2230048  sb          $v1, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d08) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2D10u;
label_2f2d10:
    // 0x2f2d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2d14:
    // 0x2f2d14: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_2f2d18:
    if (ctx->pc == 0x2F2D18u) {
        ctx->pc = 0x2F2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D14u;
        // 0x2f2d18: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D1Cu;
        goto label_2f2d1c;
    }
    ctx->pc = 0x2F2D14u;
    {
        const bool branch_taken_0x2f2d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D14u;
        // 0x2f2d18: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d14) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2D1Cu;
label_2f2d1c:
    // 0x2f2d1c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_2f2d20:
    if (ctx->pc == 0x2F2D20u) {
        ctx->pc = 0x2F2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D1Cu;
        // 0x2f2d20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D24u;
        goto label_2f2d24;
    }
    ctx->pc = 0x2F2D1Cu;
    {
        const bool branch_taken_0x2f2d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D1Cu;
        // 0x2f2d20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d1c) {
            ctx->pc = 0x2F2E18u;
            goto label_2f2e18;
        }
    }
    ctx->pc = 0x2F2D24u;
label_2f2d24:
    // 0x2f2d24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f2d28:
    // 0x2f2d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2d2c:
    // 0x2f2d2c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f2d30:
    // 0x2f2d30: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f2d34:
    // 0x2f2d34: 0x60f809  jalr        $v1
label_2f2d38:
    if (ctx->pc == 0x2F2D38u) {
        ctx->pc = 0x2F2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D34u;
        // 0x2f2d38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D3Cu;
        goto label_2f2d3c;
    }
    ctx->pc = 0x2F2D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2D3Cu);
        ctx->pc = 0x2F2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D34u;
        // 0x2f2d38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2D34u, 0x2F2D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2D3Cu;
label_2f2d3c:
    // 0x2f2d3c: 0xc08bfa0  jal         func_22FE80
label_2f2d40:
    if (ctx->pc == 0x2F2D40u) {
        ctx->pc = 0x2F2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D3Cu;
        // 0x2f2d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D44u;
        goto label_2f2d44;
    }
    ctx->pc = 0x2F2D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D44u);
    ctx->pc = 0x2F2D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D3Cu;
    // 0x2f2d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F2D3Cu, 0x2F2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D44u;
label_2f2d44:
    // 0x2f2d44: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2f2d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2d48:
    // 0x2f2d48: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f2d4c:
    // 0x2f2d4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2d50:
    // 0x2f2d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2d54:
    // 0x2f2d54: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f2d54u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2f2d58:
    // 0x2f2d58: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2f2d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2d5c:
    // 0x2f2d5c: 0x0  nop
    ctx->pc = 0x2f2d5cu;
    // NOP
label_2f2d60:
    // 0x2f2d60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f2d64:
    if (ctx->pc == 0x2F2D64u) {
        ctx->pc = 0x2F2D68u;
        goto label_2f2d68;
    }
    ctx->pc = 0x2F2D60u;
    {
        const bool branch_taken_0x2f2d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2d60) {
            ctx->pc = 0x2F2D7Cu;
            goto label_2f2d7c;
        }
    }
    ctx->pc = 0x2F2D68u;
label_2f2d68:
    // 0x2f2d68: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f2d6c:
    // 0x2f2d6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2d70:
    // 0x2f2d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2d74:
    // 0x2f2d74: 0x0  nop
    ctx->pc = 0x2f2d74u;
    // NOP
label_2f2d78:
    // 0x2f2d78: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f2d78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f2d7c:
    // 0x2f2d7c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f2d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2f2d80:
    // 0x2f2d80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2d84:
    // 0x2f2d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2d88:
    // 0x2f2d88: 0x0  nop
    ctx->pc = 0x2f2d88u;
    // NOP
label_2f2d8c:
    // 0x2f2d8c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f2d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2d90:
    // 0x2f2d90: 0x0  nop
    ctx->pc = 0x2f2d90u;
    // NOP
label_2f2d94:
    // 0x2f2d94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f2d98:
    if (ctx->pc == 0x2F2D98u) {
        ctx->pc = 0x2F2D9Cu;
        goto label_2f2d9c;
    }
    ctx->pc = 0x2F2D94u;
    {
        const bool branch_taken_0x2f2d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2d94) {
            ctx->pc = 0x2F2DB0u;
            goto label_2f2db0;
        }
    }
    ctx->pc = 0x2F2D9Cu;
label_2f2d9c:
    // 0x2f2d9c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f2da0:
    // 0x2f2da0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2da4:
    // 0x2f2da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2da8:
    // 0x2f2da8: 0x0  nop
    ctx->pc = 0x2f2da8u;
    // NOP
label_2f2dac:
    // 0x2f2dac: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f2dacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f2db0:
    // 0x2f2db0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f2db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f2db4:
    // 0x2f2db4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f2db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f2db8:
    // 0x2f2db8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f2db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f2dbc:
    // 0x2f2dbc: 0xc08f3e2  jal         func_23CF88
label_2f2dc0:
    if (ctx->pc == 0x2F2DC0u) {
        ctx->pc = 0x2F2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DBCu;
        // 0x2f2dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DC4u;
        goto label_2f2dc4;
    }
    ctx->pc = 0x2F2DBCu;
    SET_GPR_U32(ctx, 31, 0x2F2DC4u);
    ctx->pc = 0x2F2DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DBCu;
    // 0x2f2dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F2DBCu, 0x2F2DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DC4u;
label_2f2dc4:
    // 0x2f2dc4: 0xc0a367c  jal         func_28D9F0
label_2f2dc8:
    if (ctx->pc == 0x2F2DC8u) {
        ctx->pc = 0x2F2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DC4u;
        // 0x2f2dc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DCCu;
        goto label_2f2dcc;
    }
    ctx->pc = 0x2F2DC4u;
    SET_GPR_U32(ctx, 31, 0x2F2DCCu);
    ctx->pc = 0x2F2DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DC4u;
    // 0x2f2dc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2DC4u, 0x2F2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DCCu;
label_2f2dcc:
    // 0x2f2dcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f2dd0:
    if (ctx->pc == 0x2F2DD0u) {
        ctx->pc = 0x2F2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DCCu;
        // 0x2f2dd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DD4u;
        goto label_2f2dd4;
    }
    ctx->pc = 0x2F2DCCu;
    {
        const bool branch_taken_0x2f2dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DCCu;
        // 0x2f2dd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2dcc) {
            ctx->pc = 0x2F2DFCu;
            goto label_2f2dfc;
        }
    }
    ctx->pc = 0x2F2DD4u;
label_2f2dd4:
    // 0x2f2dd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f2dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f2dd8:
    // 0x2f2dd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f2dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f2ddc:
    // 0x2f2ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2de0:
    // 0x2f2de0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2de4:
    // 0x2f2de4: 0x24060195  addiu       $a2, $zero, 0x195
    ctx->pc = 0x2f2de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_2f2de8:
    // 0x2f2de8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2dec:
    // 0x2f2dec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f2decu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f2df0:
    // 0x2f2df0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f2df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2df4:
    // 0x2f2df4: 0xc0be968  jal         func_2FA5A0
label_2f2df8:
    if (ctx->pc == 0x2F2DF8u) {
        ctx->pc = 0x2F2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DF4u;
        // 0x2f2df8: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DFCu;
        goto label_2f2dfc;
    }
    ctx->pc = 0x2F2DF4u;
    SET_GPR_U32(ctx, 31, 0x2F2DFCu);
    ctx->pc = 0x2F2DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DF4u;
    // 0x2f2df8: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F2DF4u, 0x2F2DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DFCu;
label_2f2dfc:
    // 0x2f2dfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f2e00:
    // 0x2f2e00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2e04:
    // 0x2f2e04: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2f2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f2e08:
    // 0x2f2e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e0c:
    // 0x2f2e0c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2f2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_2f2e10:
    // 0x2f2e10: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_2f2e14:
    if (ctx->pc == 0x2F2E14u) {
        ctx->pc = 0x2F2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E10u;
        // 0x2f2e14: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E18u;
        goto label_2f2e18;
    }
    ctx->pc = 0x2F2E10u;
    {
        const bool branch_taken_0x2f2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E10u;
        // 0x2f2e14: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e10) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2E18u;
label_2f2e18:
    // 0x2f2e18: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2f2e1c:
    if (ctx->pc == 0x2F2E1Cu) {
        ctx->pc = 0x2F2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E18u;
        // 0x2f2e1c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E20u;
        goto label_2f2e20;
    }
    ctx->pc = 0x2F2E18u;
    {
        const bool branch_taken_0x2f2e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E18u;
        // 0x2f2e1c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e18) {
            ctx->pc = 0x2F2E80u;
            goto label_2f2e80;
        }
    }
    ctx->pc = 0x2F2E20u;
label_2f2e20:
    // 0x2f2e20: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f2e24:
    // 0x2f2e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e28:
    // 0x2f2e28: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f2e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f2e2c:
    // 0x2f2e2c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f2e30:
    // 0x2f2e30: 0x60f809  jalr        $v1
label_2f2e34:
    if (ctx->pc == 0x2F2E34u) {
        ctx->pc = 0x2F2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E30u;
        // 0x2f2e34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E38u;
        goto label_2f2e38;
    }
    ctx->pc = 0x2F2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2E38u);
        ctx->pc = 0x2F2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E30u;
        // 0x2f2e34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2E30u, 0x2F2E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2E38u;
label_2f2e38:
    // 0x2f2e38: 0xc08bfa0  jal         func_22FE80
label_2f2e3c:
    if (ctx->pc == 0x2F2E3Cu) {
        ctx->pc = 0x2F2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E38u;
        // 0x2f2e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E40u;
        goto label_2f2e40;
    }
    ctx->pc = 0x2F2E38u;
    SET_GPR_U32(ctx, 31, 0x2F2E40u);
    ctx->pc = 0x2F2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E38u;
    // 0x2f2e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F2E38u, 0x2F2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E40u;
label_2f2e40:
    // 0x2f2e40: 0xc0a367c  jal         func_28D9F0
label_2f2e44:
    if (ctx->pc == 0x2F2E44u) {
        ctx->pc = 0x2F2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E40u;
        // 0x2f2e44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E48u;
        goto label_2f2e48;
    }
    ctx->pc = 0x2F2E40u;
    SET_GPR_U32(ctx, 31, 0x2F2E48u);
    ctx->pc = 0x2F2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E40u;
    // 0x2f2e44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2E40u, 0x2F2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E48u;
label_2f2e48:
    // 0x2f2e48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f2e4c:
    if (ctx->pc == 0x2F2E4Cu) {
        ctx->pc = 0x2F2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E48u;
        // 0x2f2e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E50u;
        goto label_2f2e50;
    }
    ctx->pc = 0x2F2E48u;
    {
        const bool branch_taken_0x2f2e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E48u;
        // 0x2f2e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e48) {
            ctx->pc = 0x2F2E78u;
            goto label_2f2e78;
        }
    }
    ctx->pc = 0x2F2E50u;
label_2f2e50:
    // 0x2f2e50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f2e54:
    // 0x2f2e54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f2e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f2e58:
    // 0x2f2e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2e5c:
    // 0x2f2e5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2e60:
    // 0x2f2e60: 0x24060196  addiu       $a2, $zero, 0x196
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
label_2f2e64:
    // 0x2f2e64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f2e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2e68:
    // 0x2f2e68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f2e68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f2e6c:
    // 0x2f2e6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e70:
    // 0x2f2e70: 0xc0be968  jal         func_2FA5A0
label_2f2e74:
    if (ctx->pc == 0x2F2E74u) {
        ctx->pc = 0x2F2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E70u;
        // 0x2f2e74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E78u;
        goto label_2f2e78;
    }
    ctx->pc = 0x2F2E70u;
    SET_GPR_U32(ctx, 31, 0x2F2E78u);
    ctx->pc = 0x2F2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E70u;
    // 0x2f2e74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F2E70u, 0x2F2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E78u;
label_2f2e78:
    // 0x2f2e78: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2f2e7c:
    if (ctx->pc == 0x2F2E7Cu) {
        ctx->pc = 0x2F2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E78u;
        // 0x2f2e7c: 0xae33002c  sw          $s3, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E80u;
        goto label_2f2e80;
    }
    ctx->pc = 0x2F2E78u;
    {
        const bool branch_taken_0x2f2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E78u;
        // 0x2f2e7c: 0xae33002c  sw          $s3, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e78) {
            ctx->pc = 0x2F30ECu;
            goto label_2f30ec;
        }
    }
    ctx->pc = 0x2F2E80u;
label_2f2e80:
    // 0x2f2e80: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
label_2f2e84:
    if (ctx->pc == 0x2F2E84u) {
        ctx->pc = 0x2F2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E80u;
        // 0x2f2e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E88u;
        goto label_2f2e88;
    }
    ctx->pc = 0x2F2E80u;
    {
        const bool branch_taken_0x2f2e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E80u;
        // 0x2f2e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e80) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F2E88u;
label_2f2e88:
    // 0x2f2e88: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2f2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f2e8c:
    // 0x2f2e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e90:
    // 0x2f2e90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f2e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e94:
    // 0x2f2e94: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2f2e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2f2e98:
    // 0x2f2e98: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2f2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2f2e9c:
    // 0x2f2e9c: 0x40f809  jalr        $v0
label_2f2ea0:
    if (ctx->pc == 0x2F2EA0u) {
        ctx->pc = 0x2F2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E9Cu;
        // 0x2f2ea0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EA4u;
        goto label_2f2ea4;
    }
    ctx->pc = 0x2F2E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2EA4u);
        ctx->pc = 0x2F2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E9Cu;
        // 0x2f2ea0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2E9Cu, 0x2F2EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2EA4u;
label_2f2ea4:
    // 0x2f2ea4: 0xc08bfa0  jal         func_22FE80
label_2f2ea8:
    if (ctx->pc == 0x2F2EA8u) {
        ctx->pc = 0x2F2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EA4u;
        // 0x2f2ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EACu;
        goto label_2f2eac;
    }
    ctx->pc = 0x2F2EA4u;
    SET_GPR_U32(ctx, 31, 0x2F2EACu);
    ctx->pc = 0x2F2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EA4u;
    // 0x2f2ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F2EA4u, 0x2F2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EACu;
label_2f2eac:
    // 0x2f2eac: 0x9222004a  lbu         $v0, 0x4A($s1)
    ctx->pc = 0x2f2eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
label_2f2eb0:
    // 0x2f2eb0: 0x54530050  bnel        $v0, $s3, . + 4 + (0x50 << 2)
label_2f2eb4:
    if (ctx->pc == 0x2F2EB4u) {
        ctx->pc = 0x2F2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EB0u;
        // 0x2f2eb4: 0x86420092  lh          $v0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EB8u;
        goto label_2f2eb8;
    }
    ctx->pc = 0x2F2EB0u;
    {
        const bool branch_taken_0x2f2eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f2eb0) {
            ctx->pc = 0x2F2EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2EB0u;
            // 0x2f2eb4: 0x86420092  lh          $v0, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FF4u;
            goto label_2f2ff4;
        }
    }
    ctx->pc = 0x2F2EB8u;
label_2f2eb8:
    // 0x2f2eb8: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f2eb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f2ebc:
    // 0x2f2ebc: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2f2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f2ec0:
    // 0x2f2ec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f2ec4:
    // 0x2f2ec4: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2f2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2f2ec8:
    // 0x2f2ec8: 0xc0a367c  jal         func_28D9F0
label_2f2ecc:
    if (ctx->pc == 0x2F2ECCu) {
        ctx->pc = 0x2F2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EC8u;
        // 0x2f2ecc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2ED0u;
        goto label_2f2ed0;
    }
    ctx->pc = 0x2F2EC8u;
    SET_GPR_U32(ctx, 31, 0x2F2ED0u);
    ctx->pc = 0x2F2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EC8u;
    // 0x2f2ecc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2EC8u, 0x2F2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2ED0u;
label_2f2ed0:
    // 0x2f2ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ed4:
    // 0x2f2ed4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2f2ed8:
    if (ctx->pc == 0x2F2ED8u) {
        ctx->pc = 0x2F2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ED4u;
        // 0x2f2ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EDCu;
        goto label_2f2edc;
    }
    ctx->pc = 0x2F2ED4u;
    {
        const bool branch_taken_0x2f2ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ED4u;
        // 0x2f2ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ed4) {
            ctx->pc = 0x2F2F1Cu;
            goto label_2f2f1c;
        }
    }
    ctx->pc = 0x2F2EDCu;
label_2f2edc:
    // 0x2f2edc: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x2f2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f2ee0:
    // 0x2f2ee0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f2ee4:
    // 0x2f2ee4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f2ee8:
    // 0x2f2ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2eec:
    // 0x2f2eec: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f2eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f2ef0:
    // 0x2f2ef0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f2ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f2ef4:
    // 0x2f2ef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2ef8:
    // 0x2f2ef8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2f2ef8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2f2efc:
    // 0x2f2efc: 0xc0884f6  jal         func_2213D8
label_2f2f00:
    if (ctx->pc == 0x2F2F00u) {
        ctx->pc = 0x2F2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EFCu;
        // 0x2f2f00: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F04u;
        goto label_2f2f04;
    }
    ctx->pc = 0x2F2EFCu;
    SET_GPR_U32(ctx, 31, 0x2F2F04u);
    ctx->pc = 0x2F2F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EFCu;
    // 0x2f2f00: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F2EFCu, 0x2F2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F04u;
label_2f2f04:
    // 0x2f2f04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2f08:
    // 0x2f2f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f0c:
    // 0x2f2f0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f2f0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f2f10:
    // 0x2f2f10: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2f2f10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2f2f14:
    // 0x2f2f14: 0xc0bf70a  jal         func_2FDC28
label_2f2f18:
    if (ctx->pc == 0x2F2F18u) {
        ctx->pc = 0x2F2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F14u;
        // 0x2f2f18: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F1Cu;
        goto label_2f2f1c;
    }
    ctx->pc = 0x2F2F14u;
    SET_GPR_U32(ctx, 31, 0x2F2F1Cu);
    ctx->pc = 0x2F2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F14u;
    // 0x2f2f18: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2F2F14u, 0x2F2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F1Cu;
label_2f2f1c:
    // 0x2f2f1c: 0xc0a367c  jal         func_28D9F0
label_2f2f20:
    if (ctx->pc == 0x2F2F20u) {
        ctx->pc = 0x2F2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F1Cu;
        // 0x2f2f20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F24u;
        goto label_2f2f24;
    }
    ctx->pc = 0x2F2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F2F24u);
    ctx->pc = 0x2F2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F1Cu;
    // 0x2f2f20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2F1Cu, 0x2F2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F24u;
label_2f2f24:
    // 0x2f2f24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f2f28:
    if (ctx->pc == 0x2F2F28u) {
        ctx->pc = 0x2F2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F24u;
        // 0x2f2f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F2Cu;
        goto label_2f2f2c;
    }
    ctx->pc = 0x2F2F24u;
    {
        const bool branch_taken_0x2f2f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F24u;
        // 0x2f2f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f24) {
            ctx->pc = 0x2F2F54u;
            goto label_2f2f54;
        }
    }
    ctx->pc = 0x2F2F2Cu;
label_2f2f2c:
    // 0x2f2f2c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2f2f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2f2f30:
    // 0x2f2f30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f2f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f2f34:
    // 0x2f2f34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2f38:
    // 0x2f2f38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2f3c:
    // 0x2f2f3c: 0x24060299  addiu       $a2, $zero, 0x299
    ctx->pc = 0x2f2f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_2f2f40:
    // 0x2f2f40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f2f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2f44:
    // 0x2f2f44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f2f44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f2f48:
    // 0x2f2f48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f4c:
    // 0x2f2f4c: 0xc0be968  jal         func_2FA5A0
label_2f2f50:
    if (ctx->pc == 0x2F2F50u) {
        ctx->pc = 0x2F2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F4Cu;
        // 0x2f2f50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F54u;
        goto label_2f2f54;
    }
    ctx->pc = 0x2F2F4Cu;
    SET_GPR_U32(ctx, 31, 0x2F2F54u);
    ctx->pc = 0x2F2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F4Cu;
    // 0x2f2f50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F2F4Cu, 0x2F2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F54u;
label_2f2f54:
    // 0x2f2f54: 0xc0a367c  jal         func_28D9F0
label_2f2f58:
    if (ctx->pc == 0x2F2F58u) {
        ctx->pc = 0x2F2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F54u;
        // 0x2f2f58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F5Cu;
        goto label_2f2f5c;
    }
    ctx->pc = 0x2F2F54u;
    SET_GPR_U32(ctx, 31, 0x2F2F5Cu);
    ctx->pc = 0x2F2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F54u;
    // 0x2f2f58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F2F54u, 0x2F2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F5Cu;
label_2f2f5c:
    // 0x2f2f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f60:
    // 0x2f2f60: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2f2f64:
    if (ctx->pc == 0x2F2F64u) {
        ctx->pc = 0x2F2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F60u;
        // 0x2f2f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F68u;
        goto label_2f2f68;
    }
    ctx->pc = 0x2F2F60u;
    {
        const bool branch_taken_0x2f2f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F60u;
        // 0x2f2f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f60) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2F68u;
label_2f2f68:
    // 0x2f2f68: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x2f2f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f2f6c:
    // 0x2f2f6c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f2f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f2f70:
    // 0x2f2f70: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f2f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f2f74:
    // 0x2f2f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f78:
    // 0x2f2f78: 0xc0884f6  jal         func_2213D8
label_2f2f7c:
    if (ctx->pc == 0x2F2F7Cu) {
        ctx->pc = 0x2F2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F78u;
        // 0x2f2f7c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F80u;
        goto label_2f2f80;
    }
    ctx->pc = 0x2F2F78u;
    SET_GPR_U32(ctx, 31, 0x2F2F80u);
    ctx->pc = 0x2F2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F78u;
    // 0x2f2f7c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F2F78u, 0x2F2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F80u;
label_2f2f80:
    // 0x2f2f80: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f2f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2f84:
    // 0x2f2f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f88:
    // 0x2f2f88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f2f88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f2f8c:
    // 0x2f2f8c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2f2f8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2f2f90:
    // 0x2f2f90: 0xc0bf70a  jal         func_2FDC28
label_2f2f94:
    if (ctx->pc == 0x2F2F94u) {
        ctx->pc = 0x2F2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F90u;
        // 0x2f2f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F98u;
        goto label_2f2f98;
    }
    ctx->pc = 0x2F2F90u;
    SET_GPR_U32(ctx, 31, 0x2F2F98u);
    ctx->pc = 0x2F2F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F90u;
    // 0x2f2f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2F2F90u, 0x2F2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F98u;
label_2f2f98:
    // 0x2f2f98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2f9c:
    // 0x2f2f9c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2f2f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f2fa0:
    // 0x2f2fa0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2f2fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f2fa4:
    // 0x2f2fa4: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2f2fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f2fa8:
    // 0x2f2fa8: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
label_2f2fac:
    if (ctx->pc == 0x2F2FACu) {
        ctx->pc = 0x2F2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FA8u;
        // 0x2f2fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FB0u;
        goto label_2f2fb0;
    }
    ctx->pc = 0x2F2FA8u;
    {
        const bool branch_taken_0x2f2fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FA8u;
        // 0x2f2fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fa8) {
            ctx->pc = 0x2F2FE0u;
            goto label_2f2fe0;
        }
    }
    ctx->pc = 0x2F2FB0u;
label_2f2fb0:
    // 0x2f2fb0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2f2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2f2fb4:
    // 0x2f2fb4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f2fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f2fb8:
    // 0x2f2fb8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f2fbc:
    // 0x2f2fbc: 0x40f809  jalr        $v0
label_2f2fc0:
    if (ctx->pc == 0x2F2FC0u) {
        ctx->pc = 0x2F2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FBCu;
        // 0x2f2fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FC4u;
        goto label_2f2fc4;
    }
    ctx->pc = 0x2F2FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2FC4u);
        ctx->pc = 0x2F2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FBCu;
        // 0x2f2fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2FBCu, 0x2F2FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2FC4u;
label_2f2fc4:
    // 0x2f2fc4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2f2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f2fc8:
    // 0x2f2fc8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2f2fcc:
    if (ctx->pc == 0x2F2FCCu) {
        ctx->pc = 0x2F2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FC8u;
        // 0x2f2fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FD0u;
        goto label_2f2fd0;
    }
    ctx->pc = 0x2F2FC8u;
    {
        const bool branch_taken_0x2f2fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FC8u;
        // 0x2f2fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fc8) {
            ctx->pc = 0x2F2FE0u;
            goto label_2f2fe0;
        }
    }
    ctx->pc = 0x2F2FD0u;
label_2f2fd0:
    // 0x2f2fd0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f2fd4:
    // 0x2f2fd4: 0xc0c31d6  jal         func_30C758
label_2f2fd8:
    if (ctx->pc == 0x2F2FD8u) {
        ctx->pc = 0x2F2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FD4u;
        // 0x2f2fd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FDCu;
        goto label_2f2fdc;
    }
    ctx->pc = 0x2F2FD4u;
    SET_GPR_U32(ctx, 31, 0x2F2FDCu);
    ctx->pc = 0x2F2FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FD4u;
    // 0x2f2fd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C758u, 0x2F2FD4u, 0x2F2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FDCu;
label_2f2fdc:
    // 0x2f2fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2fe0:
    // 0x2f2fe0: 0x24140064  addiu       $s4, $zero, 0x64
    ctx->pc = 0x2f2fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f2fe4:
    // 0x2f2fe4: 0xa222004b  sb          $v0, 0x4B($s1)
    ctx->pc = 0x2f2fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 2));
label_2f2fe8:
    // 0x2f2fe8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f2fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f2fec:
    // 0x2f2fec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2f2ff0:
    if (ctx->pc == 0x2F2FF0u) {
        ctx->pc = 0x2F2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FECu;
        // 0x2f2ff0: 0xa220004a  sb          $zero, 0x4A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FF4u;
        goto label_2f2ff4;
    }
    ctx->pc = 0x2F2FECu;
    {
        const bool branch_taken_0x2f2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FECu;
        // 0x2f2ff0: 0xa220004a  sb          $zero, 0x4A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fec) {
            ctx->pc = 0x2F3068u;
            goto label_2f3068;
        }
    }
    ctx->pc = 0x2F2FF4u;
label_2f2ff4:
    // 0x2f2ff4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f2ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f2ff8:
    // 0x2f2ff8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f2ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2f2ffc:
    // 0x2f2ffc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f2ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2f3000:
    // 0x2f3000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3004:
    // 0x2f3004: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f3004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2f3008:
    // 0x2f3008: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f3008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f300c:
    // 0x2f300c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2f300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2f3010:
    // 0x2f3010: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2f3010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2f3014:
    // 0x2f3014: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2f3014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f3018:
    // 0x2f3018: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f3018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f301c:
    // 0x2f301c: 0xc1067b8  jal         func_419EE0
label_2f3020:
    if (ctx->pc == 0x2F3020u) {
        ctx->pc = 0x2F3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F301Cu;
        // 0x2f3020: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3024u;
        goto label_2f3024;
    }
    ctx->pc = 0x2F301Cu;
    SET_GPR_U32(ctx, 31, 0x2F3024u);
    ctx->pc = 0x2F3020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F301Cu;
    // 0x2f3020: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2F301Cu, 0x2F3024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3024u;
label_2f3024:
    // 0x2f3024: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f3028:
    if (ctx->pc == 0x2F3028u) {
        ctx->pc = 0x2F3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3024u;
        // 0x2f3028: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F302Cu;
        goto label_2f302c;
    }
    ctx->pc = 0x2F3024u;
    {
        const bool branch_taken_0x2f3024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3024u;
        // 0x2f3028: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3024) {
            ctx->pc = 0x2F306Cu;
            goto label_2f306c;
        }
    }
    ctx->pc = 0x2F302Cu;
label_2f302c:
    // 0x2f302c: 0xc087502  jal         func_21D408
label_2f3030:
    if (ctx->pc == 0x2F3030u) {
        ctx->pc = 0x2F3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F302Cu;
        // 0x2f3030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3034u;
        goto label_2f3034;
    }
    ctx->pc = 0x2F302Cu;
    SET_GPR_U32(ctx, 31, 0x2F3034u);
    ctx->pc = 0x2F3030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F302Cu;
    // 0x2f3030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F302Cu, 0x2F3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3034u;
label_2f3034:
    // 0x2f3034: 0xc136b80  jal         func_4DAE00
label_2f3038:
    if (ctx->pc == 0x2F3038u) {
        ctx->pc = 0x2F3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3034u;
        // 0x2f3038: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F303Cu;
        goto label_2f303c;
    }
    ctx->pc = 0x2F3034u;
    SET_GPR_U32(ctx, 31, 0x2F303Cu);
    ctx->pc = 0x2F3038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3034u;
    // 0x2f3038: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2F3034u, 0x2F303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F303Cu;
label_2f303c:
    // 0x2f303c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f3040:
    if (ctx->pc == 0x2F3040u) {
        ctx->pc = 0x2F3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F303Cu;
        // 0x2f3040: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3044u;
        goto label_2f3044;
    }
    ctx->pc = 0x2F303Cu;
    {
        const bool branch_taken_0x2f303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F303Cu;
        // 0x2f3040: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f303c) {
            ctx->pc = 0x2F3068u;
            goto label_2f3068;
        }
    }
    ctx->pc = 0x2F3044u;
label_2f3044:
    // 0x2f3044: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f3044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f3048:
    // 0x2f3048: 0xc0cd4ee  jal         func_3353B8
label_2f304c:
    if (ctx->pc == 0x2F304Cu) {
        ctx->pc = 0x2F304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3048u;
        // 0x2f304c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3050u;
        goto label_2f3050;
    }
    ctx->pc = 0x2F3048u;
    SET_GPR_U32(ctx, 31, 0x2F3050u);
    ctx->pc = 0x2F304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3048u;
    // 0x2f304c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F3048u, 0x2F3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3050u;
label_2f3050:
    // 0x2f3050: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2f3050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2f3054:
    // 0x2f3054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f3058:
    if (ctx->pc == 0x2F3058u) {
        ctx->pc = 0x2F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3054u;
        // 0x2f3058: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F305Cu;
        goto label_2f305c;
    }
    ctx->pc = 0x2F3054u;
    {
        const bool branch_taken_0x2f3054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3054u;
        // 0x2f3058: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3054) {
            ctx->pc = 0x2F3068u;
            goto label_2f3068;
        }
    }
    ctx->pc = 0x2F305Cu;
label_2f305c:
    // 0x2f305c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3060:
    // 0x2f3060: 0xc0bc88c  jal         func_2F2230
label_2f3064:
    if (ctx->pc == 0x2F3064u) {
        ctx->pc = 0x2F3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3060u;
        // 0x2f3064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3068u;
        goto label_2f3068;
    }
    ctx->pc = 0x2F3060u;
    SET_GPR_U32(ctx, 31, 0x2F3068u);
    ctx->pc = 0x2F3064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3060u;
    // 0x2f3064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2230u, 0x2F3060u, 0x2F3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3068u;
label_2f3068:
    // 0x2f3068: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2f3068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2f306c:
    // 0x2f306c: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x2f306cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2f3070:
    // 0x2f3070: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2f3070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f3074:
    // 0x2f3074: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f3078:
    if (ctx->pc == 0x2F3078u) {
        ctx->pc = 0x2F307Cu;
        goto label_2f307c;
    }
    ctx->pc = 0x2F3074u;
    {
        const bool branch_taken_0x2f3074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3074) {
            ctx->pc = 0x2F30A0u;
            goto label_2f30a0;
        }
    }
    ctx->pc = 0x2F307Cu;
label_2f307c:
    // 0x2f307c: 0xc0e409a  jal         func_390268
label_2f3080:
    if (ctx->pc == 0x2F3080u) {
        ctx->pc = 0x2F3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F307Cu;
        // 0x2f3080: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3084u;
        goto label_2f3084;
    }
    ctx->pc = 0x2F307Cu;
    SET_GPR_U32(ctx, 31, 0x2F3084u);
    ctx->pc = 0x2F3080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F307Cu;
    // 0x2f3080: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F307Cu, 0x2F3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3084u;
label_2f3084:
    // 0x2f3084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f3088:
    if (ctx->pc == 0x2F3088u) {
        ctx->pc = 0x2F308Cu;
        goto label_2f308c;
    }
    ctx->pc = 0x2F3084u;
    {
        const bool branch_taken_0x2f3084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3084) {
            ctx->pc = 0x2F30A0u;
            goto label_2f30a0;
        }
    }
    ctx->pc = 0x2F308Cu;
label_2f308c:
    // 0x2f308c: 0xc089f76  jal         func_227DD8
label_2f3090:
    if (ctx->pc == 0x2F3090u) {
        ctx->pc = 0x2F3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F308Cu;
        // 0x2f3090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3094u;
        goto label_2f3094;
    }
    ctx->pc = 0x2F308Cu;
    SET_GPR_U32(ctx, 31, 0x2F3094u);
    ctx->pc = 0x2F3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F308Cu;
    // 0x2f3090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2F308Cu, 0x2F3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3094u;
label_2f3094:
    // 0x2f3094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3098:
    // 0x2f3098: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
label_2f309c:
    if (ctx->pc == 0x2F309Cu) {
        ctx->pc = 0x2F309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3098u;
        // 0x2f309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30A0u;
        goto label_2f30a0;
    }
    ctx->pc = 0x2F3098u;
    {
        const bool branch_taken_0x2f3098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3098u;
        // 0x2f309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3098) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F30A0u;
label_2f30a0:
    // 0x2f30a0: 0xc0a367c  jal         func_28D9F0
label_2f30a4:
    if (ctx->pc == 0x2F30A4u) {
        ctx->pc = 0x2F30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30A0u;
        // 0x2f30a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30A8u;
        goto label_2f30a8;
    }
    ctx->pc = 0x2F30A0u;
    SET_GPR_U32(ctx, 31, 0x2F30A8u);
    ctx->pc = 0x2F30A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30A0u;
    // 0x2f30a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F30A0u, 0x2F30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30A8u;
label_2f30a8:
    // 0x2f30a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f30ac:
    if (ctx->pc == 0x2F30ACu) {
        ctx->pc = 0x2F30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30A8u;
        // 0x2f30ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30B0u;
        goto label_2f30b0;
    }
    ctx->pc = 0x2F30A8u;
    {
        const bool branch_taken_0x2f30a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30A8u;
        // 0x2f30ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30a8) {
            ctx->pc = 0x2F30D0u;
            goto label_2f30d0;
        }
    }
    ctx->pc = 0x2F30B0u;
label_2f30b0:
    // 0x2f30b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f30b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f30b4:
    // 0x2f30b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f30b8:
    // 0x2f30b8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2f30b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f30bc:
    // 0x2f30bc: 0x2406029e  addiu       $a2, $zero, 0x29E
    ctx->pc = 0x2f30bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
label_2f30c0:
    // 0x2f30c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f30c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f30c4:
    // 0x2f30c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f30c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f30c8:
    // 0x2f30c8: 0xc0be968  jal         func_2FA5A0
label_2f30cc:
    if (ctx->pc == 0x2F30CCu) {
        ctx->pc = 0x2F30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30C8u;
        // 0x2f30cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30D0u;
        goto label_2f30d0;
    }
    ctx->pc = 0x2F30C8u;
    SET_GPR_U32(ctx, 31, 0x2F30D0u);
    ctx->pc = 0x2F30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30C8u;
    // 0x2f30cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F30C8u, 0x2F30D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30D0u;
label_2f30d0:
    // 0x2f30d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f30d4:
    // 0x2f30d4: 0x92230046  lbu         $v1, 0x46($s1)
    ctx->pc = 0x2f30d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 70)));
label_2f30d8:
    // 0x2f30d8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2f30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2f30dc:
    // 0x2f30dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f30dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f30e0:
    // 0x2f30e0: 0xa2230047  sb          $v1, 0x47($s1)
    ctx->pc = 0x2f30e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 3));
label_2f30e4:
    // 0x2f30e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f30e8:
    if (ctx->pc == 0x2F30E8u) {
        ctx->pc = 0x2F30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30E4u;
        // 0x2f30e8: 0xa2200049  sb          $zero, 0x49($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30ECu;
        goto label_2f30ec;
    }
    ctx->pc = 0x2F30E4u;
    {
        const bool branch_taken_0x2f30e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30E4u;
        // 0x2f30e8: 0xa2200049  sb          $zero, 0x49($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30e4) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F30ECu;
label_2f30ec:
    // 0x2f30ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f30ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f30f0:
    // 0x2f30f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f30f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f30f4:
    // 0x2f30f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f30f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f30f8:
    // 0x2f30f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f30f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f30fc:
    // 0x2f30fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f30fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3100:
    // 0x2f3100: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2f3100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3104:
    // 0x2f3104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3108:
    // 0x2f3108: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2f3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f310c:
    // 0x2f310c: 0x3e00008  jr          $ra
label_2f3110:
    if (ctx->pc == 0x2F3110u) {
        ctx->pc = 0x2F3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F310Cu;
        // 0x2f3110: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3114u;
        goto label_2f3114;
    }
    ctx->pc = 0x2F310Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F310Cu;
        // 0x2f3110: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F310Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3114u;
label_2f3114:
    // 0x2f3114: 0x0  nop
    ctx->pc = 0x2f3114u;
    // NOP
    ctx->pc = 0x2f3118u;
}
