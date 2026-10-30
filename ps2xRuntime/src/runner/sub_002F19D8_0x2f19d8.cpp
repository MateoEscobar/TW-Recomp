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

// Function: sub_002F19D8
// Address: 0x2f19d8 - 0x2f1f90
void sub_002F19D8_0x2f19d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F19D8_0x2f19d8");
#endif

    switch (ctx->pc) {
        case 0x2f19d8u: goto label_2f19d8;
        case 0x2f19dcu: goto label_2f19dc;
        case 0x2f19e0u: goto label_2f19e0;
        case 0x2f19e4u: goto label_2f19e4;
        case 0x2f19e8u: goto label_2f19e8;
        case 0x2f19ecu: goto label_2f19ec;
        case 0x2f19f0u: goto label_2f19f0;
        case 0x2f19f4u: goto label_2f19f4;
        case 0x2f19f8u: goto label_2f19f8;
        case 0x2f19fcu: goto label_2f19fc;
        case 0x2f1a00u: goto label_2f1a00;
        case 0x2f1a04u: goto label_2f1a04;
        case 0x2f1a08u: goto label_2f1a08;
        case 0x2f1a0cu: goto label_2f1a0c;
        case 0x2f1a10u: goto label_2f1a10;
        case 0x2f1a14u: goto label_2f1a14;
        case 0x2f1a18u: goto label_2f1a18;
        case 0x2f1a1cu: goto label_2f1a1c;
        case 0x2f1a20u: goto label_2f1a20;
        case 0x2f1a24u: goto label_2f1a24;
        case 0x2f1a28u: goto label_2f1a28;
        case 0x2f1a2cu: goto label_2f1a2c;
        case 0x2f1a30u: goto label_2f1a30;
        case 0x2f1a34u: goto label_2f1a34;
        case 0x2f1a38u: goto label_2f1a38;
        case 0x2f1a3cu: goto label_2f1a3c;
        case 0x2f1a40u: goto label_2f1a40;
        case 0x2f1a44u: goto label_2f1a44;
        case 0x2f1a48u: goto label_2f1a48;
        case 0x2f1a4cu: goto label_2f1a4c;
        case 0x2f1a50u: goto label_2f1a50;
        case 0x2f1a54u: goto label_2f1a54;
        case 0x2f1a58u: goto label_2f1a58;
        case 0x2f1a5cu: goto label_2f1a5c;
        case 0x2f1a60u: goto label_2f1a60;
        case 0x2f1a64u: goto label_2f1a64;
        case 0x2f1a68u: goto label_2f1a68;
        case 0x2f1a6cu: goto label_2f1a6c;
        case 0x2f1a70u: goto label_2f1a70;
        case 0x2f1a74u: goto label_2f1a74;
        case 0x2f1a78u: goto label_2f1a78;
        case 0x2f1a7cu: goto label_2f1a7c;
        case 0x2f1a80u: goto label_2f1a80;
        case 0x2f1a84u: goto label_2f1a84;
        case 0x2f1a88u: goto label_2f1a88;
        case 0x2f1a8cu: goto label_2f1a8c;
        case 0x2f1a90u: goto label_2f1a90;
        case 0x2f1a94u: goto label_2f1a94;
        case 0x2f1a98u: goto label_2f1a98;
        case 0x2f1a9cu: goto label_2f1a9c;
        case 0x2f1aa0u: goto label_2f1aa0;
        case 0x2f1aa4u: goto label_2f1aa4;
        case 0x2f1aa8u: goto label_2f1aa8;
        case 0x2f1aacu: goto label_2f1aac;
        case 0x2f1ab0u: goto label_2f1ab0;
        case 0x2f1ab4u: goto label_2f1ab4;
        case 0x2f1ab8u: goto label_2f1ab8;
        case 0x2f1abcu: goto label_2f1abc;
        case 0x2f1ac0u: goto label_2f1ac0;
        case 0x2f1ac4u: goto label_2f1ac4;
        case 0x2f1ac8u: goto label_2f1ac8;
        case 0x2f1accu: goto label_2f1acc;
        case 0x2f1ad0u: goto label_2f1ad0;
        case 0x2f1ad4u: goto label_2f1ad4;
        case 0x2f1ad8u: goto label_2f1ad8;
        case 0x2f1adcu: goto label_2f1adc;
        case 0x2f1ae0u: goto label_2f1ae0;
        case 0x2f1ae4u: goto label_2f1ae4;
        case 0x2f1ae8u: goto label_2f1ae8;
        case 0x2f1aecu: goto label_2f1aec;
        case 0x2f1af0u: goto label_2f1af0;
        case 0x2f1af4u: goto label_2f1af4;
        case 0x2f1af8u: goto label_2f1af8;
        case 0x2f1afcu: goto label_2f1afc;
        case 0x2f1b00u: goto label_2f1b00;
        case 0x2f1b04u: goto label_2f1b04;
        case 0x2f1b08u: goto label_2f1b08;
        case 0x2f1b0cu: goto label_2f1b0c;
        case 0x2f1b10u: goto label_2f1b10;
        case 0x2f1b14u: goto label_2f1b14;
        case 0x2f1b18u: goto label_2f1b18;
        case 0x2f1b1cu: goto label_2f1b1c;
        case 0x2f1b20u: goto label_2f1b20;
        case 0x2f1b24u: goto label_2f1b24;
        case 0x2f1b28u: goto label_2f1b28;
        case 0x2f1b2cu: goto label_2f1b2c;
        case 0x2f1b30u: goto label_2f1b30;
        case 0x2f1b34u: goto label_2f1b34;
        case 0x2f1b38u: goto label_2f1b38;
        case 0x2f1b3cu: goto label_2f1b3c;
        case 0x2f1b40u: goto label_2f1b40;
        case 0x2f1b44u: goto label_2f1b44;
        case 0x2f1b48u: goto label_2f1b48;
        case 0x2f1b4cu: goto label_2f1b4c;
        case 0x2f1b50u: goto label_2f1b50;
        case 0x2f1b54u: goto label_2f1b54;
        case 0x2f1b58u: goto label_2f1b58;
        case 0x2f1b5cu: goto label_2f1b5c;
        case 0x2f1b60u: goto label_2f1b60;
        case 0x2f1b64u: goto label_2f1b64;
        case 0x2f1b68u: goto label_2f1b68;
        case 0x2f1b6cu: goto label_2f1b6c;
        case 0x2f1b70u: goto label_2f1b70;
        case 0x2f1b74u: goto label_2f1b74;
        case 0x2f1b78u: goto label_2f1b78;
        case 0x2f1b7cu: goto label_2f1b7c;
        case 0x2f1b80u: goto label_2f1b80;
        case 0x2f1b84u: goto label_2f1b84;
        case 0x2f1b88u: goto label_2f1b88;
        case 0x2f1b8cu: goto label_2f1b8c;
        case 0x2f1b90u: goto label_2f1b90;
        case 0x2f1b94u: goto label_2f1b94;
        case 0x2f1b98u: goto label_2f1b98;
        case 0x2f1b9cu: goto label_2f1b9c;
        case 0x2f1ba0u: goto label_2f1ba0;
        case 0x2f1ba4u: goto label_2f1ba4;
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bacu: goto label_2f1bac;
        case 0x2f1bb0u: goto label_2f1bb0;
        case 0x2f1bb4u: goto label_2f1bb4;
        case 0x2f1bb8u: goto label_2f1bb8;
        case 0x2f1bbcu: goto label_2f1bbc;
        case 0x2f1bc0u: goto label_2f1bc0;
        case 0x2f1bc4u: goto label_2f1bc4;
        case 0x2f1bc8u: goto label_2f1bc8;
        case 0x2f1bccu: goto label_2f1bcc;
        case 0x2f1bd0u: goto label_2f1bd0;
        case 0x2f1bd4u: goto label_2f1bd4;
        case 0x2f1bd8u: goto label_2f1bd8;
        case 0x2f1bdcu: goto label_2f1bdc;
        case 0x2f1be0u: goto label_2f1be0;
        case 0x2f1be4u: goto label_2f1be4;
        case 0x2f1be8u: goto label_2f1be8;
        case 0x2f1becu: goto label_2f1bec;
        case 0x2f1bf0u: goto label_2f1bf0;
        case 0x2f1bf4u: goto label_2f1bf4;
        case 0x2f1bf8u: goto label_2f1bf8;
        case 0x2f1bfcu: goto label_2f1bfc;
        case 0x2f1c00u: goto label_2f1c00;
        case 0x2f1c04u: goto label_2f1c04;
        case 0x2f1c08u: goto label_2f1c08;
        case 0x2f1c0cu: goto label_2f1c0c;
        case 0x2f1c10u: goto label_2f1c10;
        case 0x2f1c14u: goto label_2f1c14;
        case 0x2f1c18u: goto label_2f1c18;
        case 0x2f1c1cu: goto label_2f1c1c;
        case 0x2f1c20u: goto label_2f1c20;
        case 0x2f1c24u: goto label_2f1c24;
        case 0x2f1c28u: goto label_2f1c28;
        case 0x2f1c2cu: goto label_2f1c2c;
        case 0x2f1c30u: goto label_2f1c30;
        case 0x2f1c34u: goto label_2f1c34;
        case 0x2f1c38u: goto label_2f1c38;
        case 0x2f1c3cu: goto label_2f1c3c;
        case 0x2f1c40u: goto label_2f1c40;
        case 0x2f1c44u: goto label_2f1c44;
        case 0x2f1c48u: goto label_2f1c48;
        case 0x2f1c4cu: goto label_2f1c4c;
        case 0x2f1c50u: goto label_2f1c50;
        case 0x2f1c54u: goto label_2f1c54;
        case 0x2f1c58u: goto label_2f1c58;
        case 0x2f1c5cu: goto label_2f1c5c;
        case 0x2f1c60u: goto label_2f1c60;
        case 0x2f1c64u: goto label_2f1c64;
        case 0x2f1c68u: goto label_2f1c68;
        case 0x2f1c6cu: goto label_2f1c6c;
        case 0x2f1c70u: goto label_2f1c70;
        case 0x2f1c74u: goto label_2f1c74;
        case 0x2f1c78u: goto label_2f1c78;
        case 0x2f1c7cu: goto label_2f1c7c;
        case 0x2f1c80u: goto label_2f1c80;
        case 0x2f1c84u: goto label_2f1c84;
        case 0x2f1c88u: goto label_2f1c88;
        case 0x2f1c8cu: goto label_2f1c8c;
        case 0x2f1c90u: goto label_2f1c90;
        case 0x2f1c94u: goto label_2f1c94;
        case 0x2f1c98u: goto label_2f1c98;
        case 0x2f1c9cu: goto label_2f1c9c;
        case 0x2f1ca0u: goto label_2f1ca0;
        case 0x2f1ca4u: goto label_2f1ca4;
        case 0x2f1ca8u: goto label_2f1ca8;
        case 0x2f1cacu: goto label_2f1cac;
        case 0x2f1cb0u: goto label_2f1cb0;
        case 0x2f1cb4u: goto label_2f1cb4;
        case 0x2f1cb8u: goto label_2f1cb8;
        case 0x2f1cbcu: goto label_2f1cbc;
        case 0x2f1cc0u: goto label_2f1cc0;
        case 0x2f1cc4u: goto label_2f1cc4;
        case 0x2f1cc8u: goto label_2f1cc8;
        case 0x2f1cccu: goto label_2f1ccc;
        case 0x2f1cd0u: goto label_2f1cd0;
        case 0x2f1cd4u: goto label_2f1cd4;
        case 0x2f1cd8u: goto label_2f1cd8;
        case 0x2f1cdcu: goto label_2f1cdc;
        case 0x2f1ce0u: goto label_2f1ce0;
        case 0x2f1ce4u: goto label_2f1ce4;
        case 0x2f1ce8u: goto label_2f1ce8;
        case 0x2f1cecu: goto label_2f1cec;
        case 0x2f1cf0u: goto label_2f1cf0;
        case 0x2f1cf4u: goto label_2f1cf4;
        case 0x2f1cf8u: goto label_2f1cf8;
        case 0x2f1cfcu: goto label_2f1cfc;
        case 0x2f1d00u: goto label_2f1d00;
        case 0x2f1d04u: goto label_2f1d04;
        case 0x2f1d08u: goto label_2f1d08;
        case 0x2f1d0cu: goto label_2f1d0c;
        case 0x2f1d10u: goto label_2f1d10;
        case 0x2f1d14u: goto label_2f1d14;
        case 0x2f1d18u: goto label_2f1d18;
        case 0x2f1d1cu: goto label_2f1d1c;
        case 0x2f1d20u: goto label_2f1d20;
        case 0x2f1d24u: goto label_2f1d24;
        case 0x2f1d28u: goto label_2f1d28;
        case 0x2f1d2cu: goto label_2f1d2c;
        case 0x2f1d30u: goto label_2f1d30;
        case 0x2f1d34u: goto label_2f1d34;
        case 0x2f1d38u: goto label_2f1d38;
        case 0x2f1d3cu: goto label_2f1d3c;
        case 0x2f1d40u: goto label_2f1d40;
        case 0x2f1d44u: goto label_2f1d44;
        case 0x2f1d48u: goto label_2f1d48;
        case 0x2f1d4cu: goto label_2f1d4c;
        case 0x2f1d50u: goto label_2f1d50;
        case 0x2f1d54u: goto label_2f1d54;
        case 0x2f1d58u: goto label_2f1d58;
        case 0x2f1d5cu: goto label_2f1d5c;
        case 0x2f1d60u: goto label_2f1d60;
        case 0x2f1d64u: goto label_2f1d64;
        case 0x2f1d68u: goto label_2f1d68;
        case 0x2f1d6cu: goto label_2f1d6c;
        case 0x2f1d70u: goto label_2f1d70;
        case 0x2f1d74u: goto label_2f1d74;
        case 0x2f1d78u: goto label_2f1d78;
        case 0x2f1d7cu: goto label_2f1d7c;
        case 0x2f1d80u: goto label_2f1d80;
        case 0x2f1d84u: goto label_2f1d84;
        case 0x2f1d88u: goto label_2f1d88;
        case 0x2f1d8cu: goto label_2f1d8c;
        case 0x2f1d90u: goto label_2f1d90;
        case 0x2f1d94u: goto label_2f1d94;
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1d9cu: goto label_2f1d9c;
        case 0x2f1da0u: goto label_2f1da0;
        case 0x2f1da4u: goto label_2f1da4;
        case 0x2f1da8u: goto label_2f1da8;
        case 0x2f1dacu: goto label_2f1dac;
        case 0x2f1db0u: goto label_2f1db0;
        case 0x2f1db4u: goto label_2f1db4;
        case 0x2f1db8u: goto label_2f1db8;
        case 0x2f1dbcu: goto label_2f1dbc;
        case 0x2f1dc0u: goto label_2f1dc0;
        case 0x2f1dc4u: goto label_2f1dc4;
        case 0x2f1dc8u: goto label_2f1dc8;
        case 0x2f1dccu: goto label_2f1dcc;
        case 0x2f1dd0u: goto label_2f1dd0;
        case 0x2f1dd4u: goto label_2f1dd4;
        case 0x2f1dd8u: goto label_2f1dd8;
        case 0x2f1ddcu: goto label_2f1ddc;
        case 0x2f1de0u: goto label_2f1de0;
        case 0x2f1de4u: goto label_2f1de4;
        case 0x2f1de8u: goto label_2f1de8;
        case 0x2f1decu: goto label_2f1dec;
        case 0x2f1df0u: goto label_2f1df0;
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1df8u: goto label_2f1df8;
        case 0x2f1dfcu: goto label_2f1dfc;
        case 0x2f1e00u: goto label_2f1e00;
        case 0x2f1e04u: goto label_2f1e04;
        case 0x2f1e08u: goto label_2f1e08;
        case 0x2f1e0cu: goto label_2f1e0c;
        case 0x2f1e10u: goto label_2f1e10;
        case 0x2f1e14u: goto label_2f1e14;
        case 0x2f1e18u: goto label_2f1e18;
        case 0x2f1e1cu: goto label_2f1e1c;
        case 0x2f1e20u: goto label_2f1e20;
        case 0x2f1e24u: goto label_2f1e24;
        case 0x2f1e28u: goto label_2f1e28;
        case 0x2f1e2cu: goto label_2f1e2c;
        case 0x2f1e30u: goto label_2f1e30;
        case 0x2f1e34u: goto label_2f1e34;
        case 0x2f1e38u: goto label_2f1e38;
        case 0x2f1e3cu: goto label_2f1e3c;
        case 0x2f1e40u: goto label_2f1e40;
        case 0x2f1e44u: goto label_2f1e44;
        case 0x2f1e48u: goto label_2f1e48;
        case 0x2f1e4cu: goto label_2f1e4c;
        case 0x2f1e50u: goto label_2f1e50;
        case 0x2f1e54u: goto label_2f1e54;
        case 0x2f1e58u: goto label_2f1e58;
        case 0x2f1e5cu: goto label_2f1e5c;
        case 0x2f1e60u: goto label_2f1e60;
        case 0x2f1e64u: goto label_2f1e64;
        case 0x2f1e68u: goto label_2f1e68;
        case 0x2f1e6cu: goto label_2f1e6c;
        case 0x2f1e70u: goto label_2f1e70;
        case 0x2f1e74u: goto label_2f1e74;
        case 0x2f1e78u: goto label_2f1e78;
        case 0x2f1e7cu: goto label_2f1e7c;
        case 0x2f1e80u: goto label_2f1e80;
        case 0x2f1e84u: goto label_2f1e84;
        case 0x2f1e88u: goto label_2f1e88;
        case 0x2f1e8cu: goto label_2f1e8c;
        case 0x2f1e90u: goto label_2f1e90;
        case 0x2f1e94u: goto label_2f1e94;
        case 0x2f1e98u: goto label_2f1e98;
        case 0x2f1e9cu: goto label_2f1e9c;
        case 0x2f1ea0u: goto label_2f1ea0;
        case 0x2f1ea4u: goto label_2f1ea4;
        case 0x2f1ea8u: goto label_2f1ea8;
        case 0x2f1eacu: goto label_2f1eac;
        case 0x2f1eb0u: goto label_2f1eb0;
        case 0x2f1eb4u: goto label_2f1eb4;
        case 0x2f1eb8u: goto label_2f1eb8;
        case 0x2f1ebcu: goto label_2f1ebc;
        case 0x2f1ec0u: goto label_2f1ec0;
        case 0x2f1ec4u: goto label_2f1ec4;
        case 0x2f1ec8u: goto label_2f1ec8;
        case 0x2f1eccu: goto label_2f1ecc;
        case 0x2f1ed0u: goto label_2f1ed0;
        case 0x2f1ed4u: goto label_2f1ed4;
        case 0x2f1ed8u: goto label_2f1ed8;
        case 0x2f1edcu: goto label_2f1edc;
        case 0x2f1ee0u: goto label_2f1ee0;
        case 0x2f1ee4u: goto label_2f1ee4;
        case 0x2f1ee8u: goto label_2f1ee8;
        case 0x2f1eecu: goto label_2f1eec;
        case 0x2f1ef0u: goto label_2f1ef0;
        case 0x2f1ef4u: goto label_2f1ef4;
        case 0x2f1ef8u: goto label_2f1ef8;
        case 0x2f1efcu: goto label_2f1efc;
        case 0x2f1f00u: goto label_2f1f00;
        case 0x2f1f04u: goto label_2f1f04;
        case 0x2f1f08u: goto label_2f1f08;
        case 0x2f1f0cu: goto label_2f1f0c;
        case 0x2f1f10u: goto label_2f1f10;
        case 0x2f1f14u: goto label_2f1f14;
        case 0x2f1f18u: goto label_2f1f18;
        case 0x2f1f1cu: goto label_2f1f1c;
        case 0x2f1f20u: goto label_2f1f20;
        case 0x2f1f24u: goto label_2f1f24;
        case 0x2f1f28u: goto label_2f1f28;
        case 0x2f1f2cu: goto label_2f1f2c;
        case 0x2f1f30u: goto label_2f1f30;
        case 0x2f1f34u: goto label_2f1f34;
        case 0x2f1f38u: goto label_2f1f38;
        case 0x2f1f3cu: goto label_2f1f3c;
        case 0x2f1f40u: goto label_2f1f40;
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f48u: goto label_2f1f48;
        case 0x2f1f4cu: goto label_2f1f4c;
        case 0x2f1f50u: goto label_2f1f50;
        case 0x2f1f54u: goto label_2f1f54;
        case 0x2f1f58u: goto label_2f1f58;
        case 0x2f1f5cu: goto label_2f1f5c;
        case 0x2f1f60u: goto label_2f1f60;
        case 0x2f1f64u: goto label_2f1f64;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f6cu: goto label_2f1f6c;
        case 0x2f1f70u: goto label_2f1f70;
        case 0x2f1f74u: goto label_2f1f74;
        case 0x2f1f78u: goto label_2f1f78;
        case 0x2f1f7cu: goto label_2f1f7c;
        case 0x2f1f80u: goto label_2f1f80;
        case 0x2f1f84u: goto label_2f1f84;
        case 0x2f1f88u: goto label_2f1f88;
        case 0x2f1f8cu: goto label_2f1f8c;
        default: break;
    }

    ctx->pc = 0x2f19d8u;

label_2f19d8:
    // 0x2f19d8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2f19d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_2f19dc:
    // 0x2f19dc: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x2f19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_2f19e0:
    // 0x2f19e0: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x2f19e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_2f19e4:
    // 0x2f19e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f19e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f19e8:
    // 0x2f19e8: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x2f19e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_2f19ec:
    // 0x2f19ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f19ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f19f0:
    // 0x2f19f0: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x2f19f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_2f19f4:
    // 0x2f19f4: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x2f19f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_2f19f8:
    // 0x2f19f8: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x2f19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_2f19fc:
    // 0x2f19fc: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x2f19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_2f1a00:
    // 0x2f1a00: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x2f1a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_2f1a04:
    // 0x2f1a04: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x2f1a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_2f1a08:
    // 0x2f1a08: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2f1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_2f1a0c:
    // 0x2f1a0c: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x2f1a0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2f1a10:
    // 0x2f1a10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f1a14:
    // 0x2f1a14: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2f1a14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1a18:
    // 0x2f1a18: 0xc089bfc  jal         func_226FF0
label_2f1a1c:
    if (ctx->pc == 0x2F1A1Cu) {
        ctx->pc = 0x2F1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A18u;
        // 0x2f1a1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A20u;
        goto label_2f1a20;
    }
    ctx->pc = 0x2F1A18u;
    SET_GPR_U32(ctx, 31, 0x2F1A20u);
    ctx->pc = 0x2F1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A18u;
    // 0x2f1a1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F1A18u, 0x2F1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A20u;
label_2f1a20:
    // 0x2f1a20: 0xc0e57ce  jal         func_395F38
label_2f1a24:
    if (ctx->pc == 0x2F1A24u) {
        ctx->pc = 0x2F1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A20u;
        // 0x2f1a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A28u;
        goto label_2f1a28;
    }
    ctx->pc = 0x2F1A20u;
    SET_GPR_U32(ctx, 31, 0x2F1A28u);
    ctx->pc = 0x2F1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A20u;
    // 0x2f1a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F1A20u, 0x2F1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A28u;
label_2f1a28:
    // 0x2f1a28: 0x12a00148  beqz        $s5, . + 4 + (0x148 << 2)
label_2f1a2c:
    if (ctx->pc == 0x2F1A2Cu) {
        ctx->pc = 0x2F1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A28u;
        // 0x2f1a2c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A30u;
        goto label_2f1a30;
    }
    ctx->pc = 0x2F1A28u;
    {
        const bool branch_taken_0x2f1a28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A28u;
        // 0x2f1a2c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a28) {
            ctx->pc = 0x2F1F4Cu;
            goto label_2f1f4c;
        }
    }
    ctx->pc = 0x2F1A30u;
label_2f1a30:
    // 0x2f1a30: 0x12e00147  beqz        $s7, . + 4 + (0x147 << 2)
label_2f1a34:
    if (ctx->pc == 0x2F1A34u) {
        ctx->pc = 0x2F1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A30u;
        // 0x2f1a34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A38u;
        goto label_2f1a38;
    }
    ctx->pc = 0x2F1A30u;
    {
        const bool branch_taken_0x2f1a30 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A30u;
        // 0x2f1a34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a30) {
            ctx->pc = 0x2F1F50u;
            goto label_2f1f50;
        }
    }
    ctx->pc = 0x2F1A38u;
label_2f1a38:
    // 0x2f1a38: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x2f1a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_2f1a3c:
    // 0x2f1a3c: 0x10400144  beqz        $v0, . + 4 + (0x144 << 2)
label_2f1a40:
    if (ctx->pc == 0x2F1A40u) {
        ctx->pc = 0x2F1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A3Cu;
        // 0x2f1a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A44u;
        goto label_2f1a44;
    }
    ctx->pc = 0x2F1A3Cu;
    {
        const bool branch_taken_0x2f1a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A3Cu;
        // 0x2f1a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a3c) {
            ctx->pc = 0x2F1F50u;
            goto label_2f1f50;
        }
    }
    ctx->pc = 0x2F1A44u;
label_2f1a44:
    // 0x2f1a44: 0xc088ed2  jal         func_223B48
label_2f1a48:
    if (ctx->pc == 0x2F1A48u) {
        ctx->pc = 0x2F1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A44u;
        // 0x2f1a48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A4Cu;
        goto label_2f1a4c;
    }
    ctx->pc = 0x2F1A44u;
    SET_GPR_U32(ctx, 31, 0x2F1A4Cu);
    ctx->pc = 0x2F1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A44u;
    // 0x2f1a48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F1A44u, 0x2F1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A4Cu;
label_2f1a4c:
    // 0x2f1a4c: 0x14400140  bnez        $v0, . + 4 + (0x140 << 2)
label_2f1a50:
    if (ctx->pc == 0x2F1A50u) {
        ctx->pc = 0x2F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A4Cu;
        // 0x2f1a50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A54u;
        goto label_2f1a54;
    }
    ctx->pc = 0x2F1A4Cu;
    {
        const bool branch_taken_0x2f1a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A4Cu;
        // 0x2f1a50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a4c) {
            ctx->pc = 0x2F1F50u;
            goto label_2f1f50;
        }
    }
    ctx->pc = 0x2F1A54u;
label_2f1a54:
    // 0x2f1a54: 0xc0899ae  jal         func_2266B8
label_2f1a58:
    if (ctx->pc == 0x2F1A58u) {
        ctx->pc = 0x2F1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A54u;
        // 0x2f1a58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A5Cu;
        goto label_2f1a5c;
    }
    ctx->pc = 0x2F1A54u;
    SET_GPR_U32(ctx, 31, 0x2F1A5Cu);
    ctx->pc = 0x2F1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A54u;
    // 0x2f1a58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2F1A54u, 0x2F1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A5Cu;
label_2f1a5c:
    // 0x2f1a5c: 0x38420299  xori        $v0, $v0, 0x299
    ctx->pc = 0x2f1a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)665);
label_2f1a60:
    // 0x2f1a60: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
label_2f1a64:
    if (ctx->pc == 0x2F1A64u) {
        ctx->pc = 0x2F1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A60u;
        // 0x2f1a64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A68u;
        goto label_2f1a68;
    }
    ctx->pc = 0x2F1A60u;
    {
        const bool branch_taken_0x2f1a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A60u;
        // 0x2f1a64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a60) {
            ctx->pc = 0x2F1F4Cu;
            goto label_2f1f4c;
        }
    }
    ctx->pc = 0x2F1A68u;
label_2f1a68:
    // 0x2f1a68: 0xc08997c  jal         func_2265F0
label_2f1a6c:
    if (ctx->pc == 0x2F1A6Cu) {
        ctx->pc = 0x2F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A68u;
        // 0x2f1a6c: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A70u;
        goto label_2f1a70;
    }
    ctx->pc = 0x2F1A68u;
    SET_GPR_U32(ctx, 31, 0x2F1A70u);
    ctx->pc = 0x2F1A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A68u;
    // 0x2f1a6c: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F1A68u, 0x2F1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A70u;
label_2f1a70:
    // 0x2f1a70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1a74:
    // 0x2f1a74: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
label_2f1a78:
    if (ctx->pc == 0x2F1A78u) {
        ctx->pc = 0x2F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A74u;
        // 0x2f1a78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A7Cu;
        goto label_2f1a7c;
    }
    ctx->pc = 0x2F1A74u;
    {
        const bool branch_taken_0x2f1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A74u;
        // 0x2f1a78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a74) {
            ctx->pc = 0x2F1AACu;
            goto label_2f1aac;
        }
    }
    ctx->pc = 0x2F1A7Cu;
label_2f1a7c:
    // 0x2f1a7c: 0xc08997c  jal         func_2265F0
label_2f1a80:
    if (ctx->pc == 0x2F1A80u) {
        ctx->pc = 0x2F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A7Cu;
        // 0x2f1a80: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A84u;
        goto label_2f1a84;
    }
    ctx->pc = 0x2F1A7Cu;
    SET_GPR_U32(ctx, 31, 0x2F1A84u);
    ctx->pc = 0x2F1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A7Cu;
    // 0x2f1a80: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F1A7Cu, 0x2F1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A84u;
label_2f1a84:
    // 0x2f1a84: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_2f1a88:
    if (ctx->pc == 0x2F1A88u) {
        ctx->pc = 0x2F1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A84u;
        // 0x2f1a88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A8Cu;
        goto label_2f1a8c;
    }
    ctx->pc = 0x2F1A84u;
    {
        const bool branch_taken_0x2f1a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A84u;
        // 0x2f1a88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a84) {
            ctx->pc = 0x2F1AACu;
            goto label_2f1aac;
        }
    }
    ctx->pc = 0x2F1A8Cu;
label_2f1a8c:
    // 0x2f1a8c: 0xc08997c  jal         func_2265F0
label_2f1a90:
    if (ctx->pc == 0x2F1A90u) {
        ctx->pc = 0x2F1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A8Cu;
        // 0x2f1a90: 0x24050c00  addiu       $a1, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A94u;
        goto label_2f1a94;
    }
    ctx->pc = 0x2F1A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F1A94u);
    ctx->pc = 0x2F1A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A8Cu;
    // 0x2f1a90: 0x24050c00  addiu       $a1, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F1A8Cu, 0x2F1A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A94u;
label_2f1a94:
    // 0x2f1a94: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2f1a98:
    if (ctx->pc == 0x2F1A98u) {
        ctx->pc = 0x2F1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A94u;
        // 0x2f1a98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A9Cu;
        goto label_2f1a9c;
    }
    ctx->pc = 0x2F1A94u;
    {
        const bool branch_taken_0x2f1a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A94u;
        // 0x2f1a98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a94) {
            ctx->pc = 0x2F1AACu;
            goto label_2f1aac;
        }
    }
    ctx->pc = 0x2F1A9Cu;
label_2f1a9c:
    // 0x2f1a9c: 0xc08997c  jal         func_2265F0
label_2f1aa0:
    if (ctx->pc == 0x2F1AA0u) {
        ctx->pc = 0x2F1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A9Cu;
        // 0x2f1aa0: 0x24050300  addiu       $a1, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AA4u;
        goto label_2f1aa4;
    }
    ctx->pc = 0x2F1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2F1AA4u);
    ctx->pc = 0x2F1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A9Cu;
    // 0x2f1aa0: 0x24050300  addiu       $a1, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F1A9Cu, 0x2F1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AA4u;
label_2f1aa4:
    // 0x2f1aa4: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_2f1aa8:
    if (ctx->pc == 0x2F1AA8u) {
        ctx->pc = 0x2F1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AA4u;
        // 0x2f1aa8: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AACu;
        goto label_2f1aac;
    }
    ctx->pc = 0x2F1AA4u;
    {
        const bool branch_taken_0x2f1aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f1aa4) {
            ctx->pc = 0x2F1AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1AA4u;
            // 0x2f1aa8: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1AD4u;
            goto label_2f1ad4;
        }
    }
    ctx->pc = 0x2F1AACu;
label_2f1aac:
    // 0x2f1aac: 0xc0e409a  jal         func_390268
label_2f1ab0:
    if (ctx->pc == 0x2F1AB0u) {
        ctx->pc = 0x2F1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AACu;
        // 0x2f1ab0: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AB4u;
        goto label_2f1ab4;
    }
    ctx->pc = 0x2F1AACu;
    SET_GPR_U32(ctx, 31, 0x2F1AB4u);
    ctx->pc = 0x2F1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AACu;
    // 0x2f1ab0: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F1AACu, 0x2F1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AB4u;
label_2f1ab4:
    // 0x2f1ab4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2f1ab8:
    if (ctx->pc == 0x2F1AB8u) {
        ctx->pc = 0x2F1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AB4u;
        // 0x2f1ab8: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1ABCu;
        goto label_2f1abc;
    }
    ctx->pc = 0x2F1AB4u;
    {
        const bool branch_taken_0x2f1ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ab4) {
            ctx->pc = 0x2F1AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1AB4u;
            // 0x2f1ab8: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1AD4u;
            goto label_2f1ad4;
        }
    }
    ctx->pc = 0x2F1ABCu;
label_2f1abc:
    // 0x2f1abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f1abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ac0:
    // 0x2f1ac0: 0xc088aa4  jal         func_222A90
label_2f1ac4:
    if (ctx->pc == 0x2F1AC4u) {
        ctx->pc = 0x2F1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AC0u;
        // 0x2f1ac4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AC8u;
        goto label_2f1ac8;
    }
    ctx->pc = 0x2F1AC0u;
    SET_GPR_U32(ctx, 31, 0x2F1AC8u);
    ctx->pc = 0x2F1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AC0u;
    // 0x2f1ac4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2F1AC0u, 0x2F1AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AC8u;
label_2f1ac8:
    // 0x2f1ac8: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
label_2f1acc:
    if (ctx->pc == 0x2F1ACCu) {
        ctx->pc = 0x2F1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AC8u;
        // 0x2f1acc: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AD0u;
        goto label_2f1ad0;
    }
    ctx->pc = 0x2F1AC8u;
    {
        const bool branch_taken_0x2f1ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AC8u;
        // 0x2f1acc: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ac8) {
            ctx->pc = 0x2F1F60u;
            goto label_2f1f60;
        }
    }
    ctx->pc = 0x2F1AD0u;
label_2f1ad0:
    // 0x2f1ad0: 0x86c50092  lh          $a1, 0x92($s6)
    ctx->pc = 0x2f1ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2f1ad4:
    // 0x2f1ad4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f1ad8:
    // 0x2f1ad8: 0x24514b00  addiu       $s1, $v0, 0x4B00
    ctx->pc = 0x2f1ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f1adc:
    // 0x2f1adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ae0:
    // 0x2f1ae0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f1ae4:
    // 0x2f1ae4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2f1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2f1ae8:
    // 0x2f1ae8: 0xc0cd8c2  jal         func_336308
label_2f1aec:
    if (ctx->pc == 0x2F1AECu) {
        ctx->pc = 0x2F1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AE8u;
        // 0x2f1aec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AF0u;
        goto label_2f1af0;
    }
    ctx->pc = 0x2F1AE8u;
    SET_GPR_U32(ctx, 31, 0x2F1AF0u);
    ctx->pc = 0x2F1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AE8u;
    // 0x2f1aec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2F1AE8u, 0x2F1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AF0u;
label_2f1af0:
    // 0x2f1af0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2f1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2f1af4:
    // 0x2f1af4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2f1af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f1af8:
    // 0x2f1af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1afc:
    // 0x2f1afc: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2f1afcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2f1b00:
    // 0x2f1b00: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2f1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2f1b04:
    // 0x2f1b04: 0x60f809  jalr        $v1
label_2f1b08:
    if (ctx->pc == 0x2F1B08u) {
        ctx->pc = 0x2F1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B04u;
        // 0x2f1b08: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1B0Cu;
        goto label_2f1b0c;
    }
    ctx->pc = 0x2F1B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1B0Cu);
        ctx->pc = 0x2F1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B04u;
        // 0x2f1b08: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B04u, 0x2F1B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1B0Cu;
label_2f1b0c:
    // 0x2f1b0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f1b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f1b10:
    // 0x2f1b10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f1b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f1b14:
    // 0x2f1b14: 0xc088ee6  jal         func_223B98
label_2f1b18:
    if (ctx->pc == 0x2F1B18u) {
        ctx->pc = 0x2F1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B14u;
        // 0x2f1b18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1B1Cu;
        goto label_2f1b1c;
    }
    ctx->pc = 0x2F1B14u;
    SET_GPR_U32(ctx, 31, 0x2F1B1Cu);
    ctx->pc = 0x2F1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B14u;
    // 0x2f1b18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2F1B14u, 0x2F1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B1Cu;
label_2f1b1c:
    // 0x2f1b1c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f1b20:
    if (ctx->pc == 0x2F1B20u) {
        ctx->pc = 0x2F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B1Cu;
        // 0x2f1b20: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1B24u;
        goto label_2f1b24;
    }
    ctx->pc = 0x2F1B1Cu;
    {
        const bool branch_taken_0x2f1b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B1Cu;
        // 0x2f1b20: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b1c) {
            ctx->pc = 0x2F1B90u;
            goto label_2f1b90;
        }
    }
    ctx->pc = 0x2F1B24u;
label_2f1b24:
    // 0x2f1b24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f1b28:
    // 0x2f1b28: 0x86a40092  lh          $a0, 0x92($s5)
    ctx->pc = 0x2f1b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2f1b2c:
    // 0x2f1b2c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2f1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2f1b30:
    // 0x2f1b30: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2f1b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2f1b34:
    // 0x2f1b34: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f1b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f1b38:
    // 0x2f1b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1b3c:
    // 0x2f1b3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f1b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1b40:
    // 0x2f1b40: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f1b44:
    // 0x2f1b44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f1b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f1b48:
    // 0x2f1b48: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2f1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2f1b4c:
    // 0x2f1b4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f1b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f1b50:
    // 0x2f1b50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f1b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f1b54:
    // 0x2f1b54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f1b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1b58:
    // 0x2f1b58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f1b58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1b5c:
    // 0x2f1b5c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2f1b5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1b60:
    // 0x2f1b60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f1b60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f1b64:
    // 0x2f1b64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f1b64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f1b68:
    // 0x2f1b68: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f1b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1b6c:
    // 0x2f1b6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f1b6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f1b70:
    // 0x2f1b70: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f1b70u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f1b74:
    // 0x2f1b74: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2f1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2f1b78:
    // 0x2f1b78: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f1b7c:
    // 0x2f1b7c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f1b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f1b80:
    // 0x2f1b80: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f1b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f1b84:
    // 0x2f1b84: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f1b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f1b88:
    // 0x2f1b88: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f1b8c:
    if (ctx->pc == 0x2F1B8Cu) {
        ctx->pc = 0x2F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B88u;
        // 0x2f1b8c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1B90u;
        goto label_2f1b90;
    }
    ctx->pc = 0x2F1B88u;
    {
        const bool branch_taken_0x2f1b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B88u;
        // 0x2f1b8c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b88) {
            ctx->pc = 0x2F1BA4u;
            goto label_2f1ba4;
        }
    }
    ctx->pc = 0x2F1B90u;
label_2f1b90:
    // 0x2f1b90: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2f1b90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2f1b94:
    // 0x2f1b94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f1b98:
    // 0x2f1b98: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f1b9c:
    // 0x2f1b9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f1b9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1ba0:
    // 0x2f1ba0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f1ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f1ba4:
    // 0x2f1ba4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f1ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f1ba8:
    // 0x2f1ba8: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2f1ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f1bac:
    // 0x2f1bac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f1bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bb0:
    // 0x2f1bb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f1bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bb4:
    // 0x2f1bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bb8:
    // 0x2f1bb8: 0xc0bc5c6  jal         func_2F1718
label_2f1bbc:
    if (ctx->pc == 0x2F1BBCu) {
        ctx->pc = 0x2F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BB8u;
        // 0x2f1bbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BC0u;
        goto label_2f1bc0;
    }
    ctx->pc = 0x2F1BB8u;
    SET_GPR_U32(ctx, 31, 0x2F1BC0u);
    ctx->pc = 0x2F1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BB8u;
    // 0x2f1bbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2F1BB8u, 0x2F1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BC0u;
label_2f1bc0:
    // 0x2f1bc0: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x2f1bc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f1bc4:
    // 0x2f1bc4: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x2f1bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f1bc8:
    // 0x2f1bc8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f1bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f1bcc:
    // 0x2f1bcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1bd0:
    // 0x2f1bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bd4:
    // 0x2f1bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f1bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bd8:
    // 0x2f1bd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2f1bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bdc:
    // 0x2f1bdc: 0xc0b9d82  jal         func_2E7608
label_2f1be0:
    if (ctx->pc == 0x2F1BE0u) {
        ctx->pc = 0x2F1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BDCu;
        // 0x2f1be0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BE4u;
        goto label_2f1be4;
    }
    ctx->pc = 0x2F1BDCu;
    SET_GPR_U32(ctx, 31, 0x2F1BE4u);
    ctx->pc = 0x2F1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BDCu;
    // 0x2f1be0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7608u, 0x2F1BDCu, 0x2F1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BE4u;
label_2f1be4:
    // 0x2f1be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1be8:
    // 0x2f1be8: 0xc08a61a  jal         func_229868
label_2f1bec:
    if (ctx->pc == 0x2F1BECu) {
        ctx->pc = 0x2F1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BE8u;
        // 0x2f1bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BF0u;
        goto label_2f1bf0;
    }
    ctx->pc = 0x2F1BE8u;
    SET_GPR_U32(ctx, 31, 0x2F1BF0u);
    ctx->pc = 0x2F1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BE8u;
    // 0x2f1bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2F1BE8u, 0x2F1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BF0u;
label_2f1bf0:
    // 0x2f1bf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f1bf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bf4:
    // 0x2f1bf4: 0xc0e57ce  jal         func_395F38
label_2f1bf8:
    if (ctx->pc == 0x2F1BF8u) {
        ctx->pc = 0x2F1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BF4u;
        // 0x2f1bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BFCu;
        goto label_2f1bfc;
    }
    ctx->pc = 0x2F1BF4u;
    SET_GPR_U32(ctx, 31, 0x2F1BFCu);
    ctx->pc = 0x2F1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BF4u;
    // 0x2f1bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F1BF4u, 0x2F1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BFCu;
label_2f1bfc:
    // 0x2f1bfc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2f1c00:
    if (ctx->pc == 0x2F1C00u) {
        ctx->pc = 0x2F1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BFCu;
        // 0x2f1c00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C04u;
        goto label_2f1c04;
    }
    ctx->pc = 0x2F1BFCu;
    {
        const bool branch_taken_0x2f1bfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BFCu;
        // 0x2f1c00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bfc) {
            ctx->pc = 0x2F1C14u;
            goto label_2f1c14;
        }
    }
    ctx->pc = 0x2F1C04u;
label_2f1c04:
    // 0x2f1c04: 0xc0bc7e4  jal         func_2F1F90
label_2f1c08:
    if (ctx->pc == 0x2F1C08u) {
        ctx->pc = 0x2F1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C04u;
        // 0x2f1c08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C0Cu;
        goto label_2f1c0c;
    }
    ctx->pc = 0x2F1C04u;
    SET_GPR_U32(ctx, 31, 0x2F1C0Cu);
    ctx->pc = 0x2F1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C04u;
    // 0x2f1c08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1F90u, 0x2F1C04u, 0x2F1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C0Cu;
label_2f1c0c:
    // 0x2f1c0c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f1c10:
    if (ctx->pc == 0x2F1C10u) {
        ctx->pc = 0x2F1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C0Cu;
        // 0x2f1c10: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C14u;
        goto label_2f1c14;
    }
    ctx->pc = 0x2F1C0Cu;
    {
        const bool branch_taken_0x2f1c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C0Cu;
        // 0x2f1c10: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c0c) {
            ctx->pc = 0x2F1C38u;
            goto label_2f1c38;
        }
    }
    ctx->pc = 0x2F1C14u;
label_2f1c14:
    // 0x2f1c14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f1c18:
    if (ctx->pc == 0x2F1C18u) {
        ctx->pc = 0x2F1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C14u;
        // 0x2f1c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C1Cu;
        goto label_2f1c1c;
    }
    ctx->pc = 0x2F1C14u;
    {
        const bool branch_taken_0x2f1c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C14u;
        // 0x2f1c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c14) {
            ctx->pc = 0x2F1C2Cu;
            goto label_2f1c2c;
        }
    }
    ctx->pc = 0x2F1C1Cu;
label_2f1c1c:
    // 0x2f1c1c: 0xc0bc7f4  jal         func_2F1FD0
label_2f1c20:
    if (ctx->pc == 0x2F1C20u) {
        ctx->pc = 0x2F1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C1Cu;
        // 0x2f1c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C24u;
        goto label_2f1c24;
    }
    ctx->pc = 0x2F1C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F1C24u);
    ctx->pc = 0x2F1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C1Cu;
    // 0x2f1c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1FD0u, 0x2F1C1Cu, 0x2F1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C24u;
label_2f1c24:
    // 0x2f1c24: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f1c28:
    if (ctx->pc == 0x2F1C28u) {
        ctx->pc = 0x2F1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C24u;
        // 0x2f1c28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C2Cu;
        goto label_2f1c2c;
    }
    ctx->pc = 0x2F1C24u;
    {
        const bool branch_taken_0x2f1c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C24u;
        // 0x2f1c28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c24) {
            ctx->pc = 0x2F1C3Cu;
            goto label_2f1c3c;
        }
    }
    ctx->pc = 0x2F1C2Cu;
label_2f1c2c:
    // 0x2f1c2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c30:
    // 0x2f1c30: 0xc0bc822  jal         func_2F2088
label_2f1c34:
    if (ctx->pc == 0x2F1C34u) {
        ctx->pc = 0x2F1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C30u;
        // 0x2f1c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C38u;
        goto label_2f1c38;
    }
    ctx->pc = 0x2F1C30u;
    SET_GPR_U32(ctx, 31, 0x2F1C38u);
    ctx->pc = 0x2F1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C30u;
    // 0x2f1c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2088u, 0x2F1C30u, 0x2F1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C38u;
label_2f1c38:
    // 0x2f1c38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f1c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c3c:
    // 0x2f1c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1c40:
    // 0x2f1c40: 0x146200c7  bne         $v1, $v0, . + 4 + (0xC7 << 2)
label_2f1c44:
    if (ctx->pc == 0x2F1C44u) {
        ctx->pc = 0x2F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C40u;
        // 0x2f1c44: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C48u;
        goto label_2f1c48;
    }
    ctx->pc = 0x2F1C40u;
    {
        const bool branch_taken_0x2f1c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C40u;
        // 0x2f1c44: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c40) {
            ctx->pc = 0x2F1F60u;
            goto label_2f1f60;
        }
    }
    ctx->pc = 0x2F1C48u;
label_2f1c48:
    // 0x2f1c48: 0xc0a367c  jal         func_28D9F0
label_2f1c4c:
    if (ctx->pc == 0x2F1C4Cu) {
        ctx->pc = 0x2F1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C48u;
        // 0x2f1c4c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C50u;
        goto label_2f1c50;
    }
    ctx->pc = 0x2F1C48u;
    SET_GPR_U32(ctx, 31, 0x2F1C50u);
    ctx->pc = 0x2F1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C48u;
    // 0x2f1c4c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F1C48u, 0x2F1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C50u;
label_2f1c50:
    // 0x2f1c50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f1c54:
    if (ctx->pc == 0x2F1C54u) {
        ctx->pc = 0x2F1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C50u;
        // 0x2f1c54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C58u;
        goto label_2f1c58;
    }
    ctx->pc = 0x2F1C50u;
    {
        const bool branch_taken_0x2f1c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C50u;
        // 0x2f1c54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c50) {
            ctx->pc = 0x2F1C78u;
            goto label_2f1c78;
        }
    }
    ctx->pc = 0x2F1C58u;
label_2f1c58:
    // 0x2f1c58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f1c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1c5c:
    // 0x2f1c5c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f1c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f1c60:
    // 0x2f1c60: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2f1c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2f1c64:
    // 0x2f1c64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f1c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1c68:
    // 0x2f1c68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f1c68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f1c6c:
    // 0x2f1c6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f1c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c70:
    // 0x2f1c70: 0xc0be968  jal         func_2FA5A0
label_2f1c74:
    if (ctx->pc == 0x2F1C74u) {
        ctx->pc = 0x2F1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C70u;
        // 0x2f1c74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C78u;
        goto label_2f1c78;
    }
    ctx->pc = 0x2F1C70u;
    SET_GPR_U32(ctx, 31, 0x2F1C78u);
    ctx->pc = 0x2F1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C70u;
    // 0x2f1c74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F1C70u, 0x2F1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C78u;
label_2f1c78:
    // 0x2f1c78: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x2f1c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_2f1c7c:
    // 0x2f1c7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f1c80:
    // 0x2f1c80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f1c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f1c84:
    // 0x2f1c84: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2f1c88:
    if (ctx->pc == 0x2F1C88u) {
        ctx->pc = 0x2F1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C84u;
        // 0x2f1c88: 0xa2420047  sb          $v0, 0x47($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C8Cu;
        goto label_2f1c8c;
    }
    ctx->pc = 0x2F1C84u;
    {
        const bool branch_taken_0x2f1c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C84u;
        // 0x2f1c88: 0xa2420047  sb          $v0, 0x47($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c84) {
            ctx->pc = 0x2F1CB4u;
            goto label_2f1cb4;
        }
    }
    ctx->pc = 0x2F1C8Cu;
label_2f1c8c:
    // 0x2f1c8c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2f1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2f1c90:
    // 0x2f1c90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1c94:
    // 0x2f1c94: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f1c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f1c98:
    // 0x2f1c98: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f1c9c:
    // 0x2f1c9c: 0x60f809  jalr        $v1
label_2f1ca0:
    if (ctx->pc == 0x2F1CA0u) {
        ctx->pc = 0x2F1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C9Cu;
        // 0x2f1ca0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CA4u;
        goto label_2f1ca4;
    }
    ctx->pc = 0x2F1C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1CA4u);
        ctx->pc = 0x2F1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C9Cu;
        // 0x2f1ca0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C9Cu, 0x2F1CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1CA4u;
label_2f1ca4:
    // 0x2f1ca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1ca8:
    // 0x2f1ca8: 0xa2400048  sb          $zero, 0x48($s2)
    ctx->pc = 0x2f1ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 0));
label_2f1cac:
    // 0x2f1cac: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f1cb0:
    if (ctx->pc == 0x2F1CB0u) {
        ctx->pc = 0x2F1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CACu;
        // 0x2f1cb0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CB4u;
        goto label_2f1cb4;
    }
    ctx->pc = 0x2F1CACu;
    {
        const bool branch_taken_0x2f1cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CACu;
        // 0x2f1cb0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cac) {
            ctx->pc = 0x2F1CECu;
            goto label_2f1cec;
        }
    }
    ctx->pc = 0x2F1CB4u;
label_2f1cb4:
    // 0x2f1cb4: 0xc0a367c  jal         func_28D9F0
label_2f1cb8:
    if (ctx->pc == 0x2F1CB8u) {
        ctx->pc = 0x2F1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CB4u;
        // 0x2f1cb8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CBCu;
        goto label_2f1cbc;
    }
    ctx->pc = 0x2F1CB4u;
    SET_GPR_U32(ctx, 31, 0x2F1CBCu);
    ctx->pc = 0x2F1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CB4u;
    // 0x2f1cb8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F1CB4u, 0x2F1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1CBCu;
label_2f1cbc:
    // 0x2f1cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1cc0:
    // 0x2f1cc0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_2f1cc4:
    if (ctx->pc == 0x2F1CC4u) {
        ctx->pc = 0x2F1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CC0u;
        // 0x2f1cc4: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CC8u;
        goto label_2f1cc8;
    }
    ctx->pc = 0x2F1CC0u;
    {
        const bool branch_taken_0x2f1cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1cc0) {
            ctx->pc = 0x2F1CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1CC0u;
            // 0x2f1cc4: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1CF0u;
            goto label_2f1cf0;
        }
    }
    ctx->pc = 0x2F1CC8u;
label_2f1cc8:
    // 0x2f1cc8: 0x9645003c  lhu         $a1, 0x3C($s2)
    ctx->pc = 0x2f1cc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_2f1ccc:
    // 0x2f1ccc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f1cd0:
    // 0x2f1cd0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f1cd4:
    // 0x2f1cd4: 0xc0cd4fc  jal         func_3353F0
label_2f1cd8:
    if (ctx->pc == 0x2F1CD8u) {
        ctx->pc = 0x2F1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CD4u;
        // 0x2f1cd8: 0x24a603e8  addiu       $a2, $a1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CDCu;
        goto label_2f1cdc;
    }
    ctx->pc = 0x2F1CD4u;
    SET_GPR_U32(ctx, 31, 0x2F1CDCu);
    ctx->pc = 0x2F1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CD4u;
    // 0x2f1cd8: 0x24a603e8  addiu       $a2, $a1, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2F1CD4u, 0x2F1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1CDCu;
label_2f1cdc:
    // 0x2f1cdc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f1ce0:
    // 0x2f1ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ce4:
    // 0x2f1ce4: 0xc0bebdc  jal         func_2FAF70
label_2f1ce8:
    if (ctx->pc == 0x2F1CE8u) {
        ctx->pc = 0x2F1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CE4u;
        // 0x2f1ce8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CECu;
        goto label_2f1cec;
    }
    ctx->pc = 0x2F1CE4u;
    SET_GPR_U32(ctx, 31, 0x2F1CECu);
    ctx->pc = 0x2F1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CE4u;
    // 0x2f1ce8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F1CE4u, 0x2F1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1CECu;
label_2f1cec:
    // 0x2f1cec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2f1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2f1cf0:
    // 0x2f1cf0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f1cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f1cf4:
    // 0x2f1cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f1cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f1cf8:
    // 0x2f1cf8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f1cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f1cfc:
    // 0x2f1cfc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f1cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f1d00:
    // 0x2f1d00: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x2f1d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_2f1d04:
    // 0x2f1d04: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2f1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2f1d08:
    // 0x2f1d08: 0x40f809  jalr        $v0
label_2f1d0c:
    if (ctx->pc == 0x2F1D0Cu) {
        ctx->pc = 0x2F1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D08u;
        // 0x2f1d0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D10u;
        goto label_2f1d10;
    }
    ctx->pc = 0x2F1D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1D10u);
        ctx->pc = 0x2F1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D08u;
        // 0x2f1d0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D08u, 0x2F1D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1D10u;
label_2f1d10:
    // 0x2f1d10: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_2f1d14:
    // 0x2f1d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d18:
    // 0x2f1d18: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2f1d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f1d1c:
    // 0x2f1d1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f1d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f1d20:
    // 0x2f1d20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f1d20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f1d24:
    // 0x2f1d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f1d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1d28:
    // 0x2f1d28: 0xc043f74  jal         func_10FDD0
label_2f1d2c:
    if (ctx->pc == 0x2F1D2Cu) {
        ctx->pc = 0x2F1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D28u;
        // 0x2f1d2c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D30u;
        goto label_2f1d30;
    }
    ctx->pc = 0x2F1D28u;
    SET_GPR_U32(ctx, 31, 0x2F1D30u);
    ctx->pc = 0x2F1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D28u;
    // 0x2f1d2c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2F1D28u, 0x2F1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D30u;
label_2f1d30:
    // 0x2f1d30: 0x12600069  beqz        $s3, . + 4 + (0x69 << 2)
label_2f1d34:
    if (ctx->pc == 0x2F1D34u) {
        ctx->pc = 0x2F1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D30u;
        // 0x2f1d34: 0x27be0040  addiu       $fp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D38u;
        goto label_2f1d38;
    }
    ctx->pc = 0x2F1D30u;
    {
        const bool branch_taken_0x2f1d30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D30u;
        // 0x2f1d34: 0x27be0040  addiu       $fp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d30) {
            ctx->pc = 0x2F1ED8u;
            goto label_2f1ed8;
        }
    }
    ctx->pc = 0x2F1D38u;
label_2f1d38:
    // 0x2f1d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d3c:
    // 0x2f1d3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f1d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d40:
    // 0x2f1d40: 0xc10c1fa  jal         func_4307E8
label_2f1d44:
    if (ctx->pc == 0x2F1D44u) {
        ctx->pc = 0x2F1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D40u;
        // 0x2f1d44: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D48u;
        goto label_2f1d48;
    }
    ctx->pc = 0x2F1D40u;
    SET_GPR_U32(ctx, 31, 0x2F1D48u);
    ctx->pc = 0x2F1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D40u;
    // 0x2f1d44: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2F1D40u, 0x2F1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D48u;
label_2f1d48:
    // 0x2f1d48: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x2f1d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f1d4c:
    // 0x2f1d4c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f1d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2f1d50:
    // 0x2f1d50: 0x24a44b00  addiu       $a0, $a1, 0x4B00
    ctx->pc = 0x2f1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2f1d54:
    // 0x2f1d54: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f1d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f1d58:
    // 0x2f1d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f1d5c:
    // 0x2f1d5c: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2f1d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f1d60:
    // 0x2f1d60: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f1d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f1d64:
    // 0x2f1d64: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2f1d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2f1d68:
    // 0x2f1d68: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f1d6c:
    // 0x2f1d6c: 0x8650003e  lh          $s0, 0x3E($s2)
    ctx->pc = 0x2f1d6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
label_2f1d70:
    // 0x2f1d70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f1d74:
    // 0x2f1d74: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f1d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2f1d78:
    // 0x2f1d78: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f1d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1d7c:
    // 0x2f1d7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f1d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f1d80:
    // 0x2f1d80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f1d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f1d84:
    // 0x2f1d84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f1d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f1d88:
    // 0x2f1d88: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f1d8c:
    if (ctx->pc == 0x2F1D8Cu) {
        ctx->pc = 0x2F1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D88u;
        // 0x2f1d8c: 0x460100c0  add.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D90u;
        goto label_2f1d90;
    }
    ctx->pc = 0x2F1D88u;
    {
        const bool branch_taken_0x2f1d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D88u;
        // 0x2f1d8c: 0x460100c0  add.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d88) {
            ctx->pc = 0x2F1DC0u;
            goto label_2f1dc0;
        }
    }
    ctx->pc = 0x2F1D90u;
label_2f1d90:
    // 0x2f1d90: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f1d90u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1d94:
    // 0x2f1d94: 0x0  nop
    ctx->pc = 0x2f1d94u;
    // NOP
label_2f1d98:
    // 0x2f1d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f1d9c:
    // 0x2f1d9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f1d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f1da0:
    // 0x2f1da0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f1da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f1da4:
    // 0x2f1da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f1da8:
    // 0x2f1da8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f1da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f1dac:
    // 0x2f1dac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f1dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f1db0:
    // 0x2f1db0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f1db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f1db4:
    // 0x2f1db4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f1db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2f1db8:
    // 0x2f1db8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f1db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f1dbc:
    // 0x2f1dbc: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f1dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2f1dc0:
    // 0x2f1dc0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2f1dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1dc4:
    // 0x2f1dc4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2f1dc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f1dc8:
    // 0x2f1dc8: 0x0  nop
    ctx->pc = 0x2f1dc8u;
    // NOP
label_2f1dcc:
    // 0x2f1dcc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f1dd0:
    if (ctx->pc == 0x2F1DD0u) {
        ctx->pc = 0x2F1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DCCu;
        // 0x2f1dd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1DD4u;
        goto label_2f1dd4;
    }
    ctx->pc = 0x2F1DCCu;
    {
        const bool branch_taken_0x2f1dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DCCu;
        // 0x2f1dd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1dcc) {
            ctx->pc = 0x2F1DD8u;
            goto label_2f1dd8;
        }
    }
    ctx->pc = 0x2F1DD4u;
label_2f1dd4:
    // 0x2f1dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1dd8:
    // 0x2f1dd8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f1dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ddc:
    // 0x2f1ddc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2f1ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f1de0:
    // 0x2f1de0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1de4:
    // 0x2f1de4: 0xc0992f6  jal         func_264BD8
label_2f1de8:
    if (ctx->pc == 0x2F1DE8u) {
        ctx->pc = 0x2F1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DE4u;
        // 0x2f1de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1DECu;
        goto label_2f1dec;
    }
    ctx->pc = 0x2F1DE4u;
    SET_GPR_U32(ctx, 31, 0x2F1DECu);
    ctx->pc = 0x2F1DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DE4u;
    // 0x2f1de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x2F1DE4u, 0x2F1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1DECu;
label_2f1dec:
    // 0x2f1dec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f1decu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1df0:
    // 0x2f1df0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2f1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f1df4:
    // 0x2f1df4: 0xacb40020  sw          $s4, 0x20($a1)
    ctx->pc = 0x2f1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 20));
label_2f1df8:
    // 0x2f1df8: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x2f1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
label_2f1dfc:
    // 0x2f1dfc: 0xafb70128  sw          $s7, 0x128($sp)
    ctx->pc = 0x2f1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 23));
label_2f1e00:
    // 0x2f1e00: 0xafb30144  sw          $s3, 0x144($sp)
    ctx->pc = 0x2f1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 19));
label_2f1e04:
    // 0x2f1e04: 0xafb60124  sw          $s6, 0x124($sp)
    ctx->pc = 0x2f1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 22));
label_2f1e08:
    // 0x2f1e08: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x2f1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_2f1e0c:
    // 0x2f1e0c: 0xa3b40131  sb          $s4, 0x131($sp)
    ctx->pc = 0x2f1e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 20));
label_2f1e10:
    // 0x2f1e10: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f1e14:
    // 0x2f1e14: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2f1e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2f1e18:
    // 0x2f1e18: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f1e1c:
    // 0x2f1e1c: 0x40f809  jalr        $v0
label_2f1e20:
    if (ctx->pc == 0x2F1E20u) {
        ctx->pc = 0x2F1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E1Cu;
        // 0x2f1e20: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E24u;
        goto label_2f1e24;
    }
    ctx->pc = 0x2F1E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1E24u);
        ctx->pc = 0x2F1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E1Cu;
        // 0x2f1e20: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1E1Cu, 0x2F1E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1E24u;
label_2f1e24:
    // 0x2f1e24: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x2f1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f1e28:
    // 0x2f1e28: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2f1e28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2f1e2c:
    // 0x2f1e2c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2f1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1e30:
    // 0x2f1e30: 0x26107b98  addiu       $s0, $s0, 0x7B98
    ctx->pc = 0x2f1e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31640));
label_2f1e34:
    // 0x2f1e34: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2f1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1e38:
    // 0x2f1e38: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2f1e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f1e3c:
    // 0x2f1e3c: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x2f1e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f1e40:
    // 0x2f1e40: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x2f1e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f1e44:
    // 0x2f1e44: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2f1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2f1e48:
    // 0x2f1e48: 0x6ba20157  ldl         $v0, 0x157($sp)
    ctx->pc = 0x2f1e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f1e4c:
    // 0x2f1e4c: 0x6fa20150  ldr         $v0, 0x150($sp)
    ctx->pc = 0x2f1e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f1e50:
    // 0x2f1e50: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2f1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2f1e54:
    // 0x2f1e54: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2f1e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1e58:
    // 0x2f1e58: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2f1e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1e5c:
    // 0x2f1e5c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2f1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2f1e60:
    // 0x2f1e60: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f1e64:
    // 0x2f1e64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f1e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f1e68:
    // 0x2f1e68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f1e6c:
    // 0x2f1e6c: 0x40f809  jalr        $v0
label_2f1e70:
    if (ctx->pc == 0x2F1E70u) {
        ctx->pc = 0x2F1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E6Cu;
        // 0x2f1e70: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E74u;
        goto label_2f1e74;
    }
    ctx->pc = 0x2F1E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1E74u);
        ctx->pc = 0x2F1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E6Cu;
        // 0x2f1e70: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1E6Cu, 0x2F1E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1E74u;
label_2f1e74:
    // 0x2f1e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e78:
    // 0x2f1e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f1e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e7c:
    // 0x2f1e7c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f1e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e80:
    // 0x2f1e80: 0xc0e6fec  jal         func_39BFB0
label_2f1e84:
    if (ctx->pc == 0x2F1E84u) {
        ctx->pc = 0x2F1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E80u;
        // 0x2f1e84: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E88u;
        goto label_2f1e88;
    }
    ctx->pc = 0x2F1E80u;
    SET_GPR_U32(ctx, 31, 0x2F1E88u);
    ctx->pc = 0x2F1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E80u;
    // 0x2f1e84: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFB0u, 0x2F1E80u, 0x2F1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E88u;
label_2f1e88:
    // 0x2f1e88: 0x16750006  bne         $s3, $s5, . + 4 + (0x6 << 2)
label_2f1e8c:
    if (ctx->pc == 0x2F1E8Cu) {
        ctx->pc = 0x2F1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E88u;
        // 0x2f1e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E90u;
        goto label_2f1e90;
    }
    ctx->pc = 0x2F1E88u;
    {
        const bool branch_taken_0x2f1e88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E88u;
        // 0x2f1e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e88) {
            ctx->pc = 0x2F1EA4u;
            goto label_2f1ea4;
        }
    }
    ctx->pc = 0x2F1E90u;
label_2f1e90:
    // 0x2f1e90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f1e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e94:
    // 0x2f1e94: 0xc0bc88c  jal         func_2F2230
label_2f1e98:
    if (ctx->pc == 0x2F1E98u) {
        ctx->pc = 0x2F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E94u;
        // 0x2f1e98: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E9Cu;
        goto label_2f1e9c;
    }
    ctx->pc = 0x2F1E94u;
    SET_GPR_U32(ctx, 31, 0x2F1E9Cu);
    ctx->pc = 0x2F1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E94u;
    // 0x2f1e98: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2230u, 0x2F1E94u, 0x2F1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E9Cu;
label_2f1e9c:
    // 0x2f1e9c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2f1ea0:
    if (ctx->pc == 0x2F1EA0u) {
        ctx->pc = 0x2F1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E9Cu;
        // 0x2f1ea0: 0xa2540049  sb          $s4, 0x49($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 73), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EA4u;
        goto label_2f1ea4;
    }
    ctx->pc = 0x2F1E9Cu;
    {
        const bool branch_taken_0x2f1e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E9Cu;
        // 0x2f1ea0: 0xa2540049  sb          $s4, 0x49($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 73), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e9c) {
            ctx->pc = 0x2F1F1Cu;
            goto label_2f1f1c;
        }
    }
    ctx->pc = 0x2F1EA4u;
label_2f1ea4:
    // 0x2f1ea4: 0xc087502  jal         func_21D408
label_2f1ea8:
    if (ctx->pc == 0x2F1EA8u) {
        ctx->pc = 0x2F1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EA4u;
        // 0x2f1ea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EACu;
        goto label_2f1eac;
    }
    ctx->pc = 0x2F1EA4u;
    SET_GPR_U32(ctx, 31, 0x2F1EACu);
    ctx->pc = 0x2F1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EA4u;
    // 0x2f1ea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F1EA4u, 0x2F1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1EACu;
label_2f1eac:
    // 0x2f1eac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f1eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f1eb0:
    // 0x2f1eb0: 0xc0a408c  jal         func_290230
label_2f1eb4:
    if (ctx->pc == 0x2F1EB4u) {
        ctx->pc = 0x2F1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EB0u;
        // 0x2f1eb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EB8u;
        goto label_2f1eb8;
    }
    ctx->pc = 0x2F1EB0u;
    SET_GPR_U32(ctx, 31, 0x2F1EB8u);
    ctx->pc = 0x2F1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EB0u;
    // 0x2f1eb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2F1EB0u, 0x2F1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1EB8u;
label_2f1eb8:
    // 0x2f1eb8: 0x54540019  bnel        $v0, $s4, . + 4 + (0x19 << 2)
label_2f1ebc:
    if (ctx->pc == 0x2F1EBCu) {
        ctx->pc = 0x2F1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EB8u;
        // 0x2f1ebc: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EC0u;
        goto label_2f1ec0;
    }
    ctx->pc = 0x2F1EB8u;
    {
        const bool branch_taken_0x2f1eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2f1eb8) {
            ctx->pc = 0x2F1EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1EB8u;
            // 0x2f1ebc: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1F20u;
            goto label_2f1f20;
        }
    }
    ctx->pc = 0x2F1EC0u;
label_2f1ec0:
    // 0x2f1ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ec4:
    // 0x2f1ec4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f1ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ec8:
    // 0x2f1ec8: 0xc0bc88c  jal         func_2F2230
label_2f1ecc:
    if (ctx->pc == 0x2F1ECCu) {
        ctx->pc = 0x2F1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EC8u;
        // 0x2f1ecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1ED0u;
        goto label_2f1ed0;
    }
    ctx->pc = 0x2F1EC8u;
    SET_GPR_U32(ctx, 31, 0x2F1ED0u);
    ctx->pc = 0x2F1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EC8u;
    // 0x2f1ecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2230u, 0x2F1EC8u, 0x2F1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1ED0u;
label_2f1ed0:
    // 0x2f1ed0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f1ed4:
    if (ctx->pc == 0x2F1ED4u) {
        ctx->pc = 0x2F1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1ED0u;
        // 0x2f1ed4: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1ED8u;
        goto label_2f1ed8;
    }
    ctx->pc = 0x2F1ED0u;
    {
        const bool branch_taken_0x2f1ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1ED0u;
        // 0x2f1ed4: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ed0) {
            ctx->pc = 0x2F1F20u;
            goto label_2f1f20;
        }
    }
    ctx->pc = 0x2F1ED8u;
label_2f1ed8:
    // 0x2f1ed8: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x2f1ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_2f1edc:
    // 0x2f1edc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f1edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f1ee0:
    // 0x2f1ee0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2f1ee4:
    if (ctx->pc == 0x2F1EE4u) {
        ctx->pc = 0x2F1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EE0u;
        // 0x2f1ee4: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EE8u;
        goto label_2f1ee8;
    }
    ctx->pc = 0x2F1EE0u;
    {
        const bool branch_taken_0x2f1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ee0) {
            ctx->pc = 0x2F1EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1EE0u;
            // 0x2f1ee4: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1F20u;
            goto label_2f1f20;
        }
    }
    ctx->pc = 0x2F1EE8u;
label_2f1ee8:
    // 0x2f1ee8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f1ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f1eec:
    // 0x2f1eec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1ef0:
    // 0x2f1ef0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f1ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f1ef4:
    // 0x2f1ef4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f1ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ef8:
    // 0x2f1ef8: 0xc0b9de8  jal         func_2E77A0
label_2f1efc:
    if (ctx->pc == 0x2F1EFCu) {
        ctx->pc = 0x2F1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EF8u;
        // 0x2f1efc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F00u;
        goto label_2f1f00;
    }
    ctx->pc = 0x2F1EF8u;
    SET_GPR_U32(ctx, 31, 0x2F1F00u);
    ctx->pc = 0x2F1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EF8u;
    // 0x2f1efc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E77A0u, 0x2F1EF8u, 0x2F1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F00u;
label_2f1f00:
    // 0x2f1f00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1f04:
    // 0x2f1f04: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2f1f08:
    if (ctx->pc == 0x2F1F08u) {
        ctx->pc = 0x2F1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F04u;
        // 0x2f1f08: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F0Cu;
        goto label_2f1f0c;
    }
    ctx->pc = 0x2F1F04u;
    {
        const bool branch_taken_0x2f1f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1f04) {
            ctx->pc = 0x2F1F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1F04u;
            // 0x2f1f08: 0x92420047  lbu         $v0, 0x47($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1F20u;
            goto label_2f1f20;
        }
    }
    ctx->pc = 0x2F1F0Cu;
label_2f1f0c:
    // 0x2f1f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f10:
    // 0x2f1f10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f14:
    // 0x2f1f14: 0xc0bc88c  jal         func_2F2230
label_2f1f18:
    if (ctx->pc == 0x2F1F18u) {
        ctx->pc = 0x2F1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F14u;
        // 0x2f1f18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F1Cu;
        goto label_2f1f1c;
    }
    ctx->pc = 0x2F1F14u;
    SET_GPR_U32(ctx, 31, 0x2F1F1Cu);
    ctx->pc = 0x2F1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F14u;
    // 0x2f1f18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2230u, 0x2F1F14u, 0x2F1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F1Cu;
label_2f1f1c:
    // 0x2f1f1c: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x2f1f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_2f1f20:
    // 0x2f1f20: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2f1f24:
    if (ctx->pc == 0x2F1F24u) {
        ctx->pc = 0x2F1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F20u;
        // 0x2f1f24: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F28u;
        goto label_2f1f28;
    }
    ctx->pc = 0x2F1F20u;
    {
        const bool branch_taken_0x2f1f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F20u;
        // 0x2f1f24: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f20) {
            ctx->pc = 0x2F1F60u;
            goto label_2f1f60;
        }
    }
    ctx->pc = 0x2F1F28u;
label_2f1f28:
    // 0x2f1f28: 0x92420049  lbu         $v0, 0x49($s2)
    ctx->pc = 0x2f1f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 73)));
label_2f1f2c:
    // 0x2f1f2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2f1f30:
    if (ctx->pc == 0x2F1F30u) {
        ctx->pc = 0x2F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F2Cu;
        // 0x2f1f30: 0x7bb101e0  lq          $s1, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F34u;
        goto label_2f1f34;
    }
    ctx->pc = 0x2F1F2Cu;
    {
        const bool branch_taken_0x2f1f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F2Cu;
        // 0x2f1f30: 0x7bb101e0  lq          $s1, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f2c) {
            ctx->pc = 0x2F1F64u;
            goto label_2f1f64;
        }
    }
    ctx->pc = 0x2F1F34u;
label_2f1f34:
    // 0x2f1f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f38:
    // 0x2f1f38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f1f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f3c:
    // 0x2f1f3c: 0xc0bc88c  jal         func_2F2230
label_2f1f40:
    if (ctx->pc == 0x2F1F40u) {
        ctx->pc = 0x2F1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F3Cu;
        // 0x2f1f40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F44u;
        goto label_2f1f44;
    }
    ctx->pc = 0x2F1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F44u);
    ctx->pc = 0x2F1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F3Cu;
    // 0x2f1f40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2230u, 0x2F1F3Cu, 0x2F1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F44u;
label_2f1f44:
    // 0x2f1f44: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f1f48:
    if (ctx->pc == 0x2F1F48u) {
        ctx->pc = 0x2F1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F44u;
        // 0x2f1f48: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F4Cu;
        goto label_2f1f4c;
    }
    ctx->pc = 0x2F1F44u;
    {
        const bool branch_taken_0x2f1f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F44u;
        // 0x2f1f48: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f44) {
            ctx->pc = 0x2F1F60u;
            goto label_2f1f60;
        }
    }
    ctx->pc = 0x2F1F4Cu;
label_2f1f4c:
    // 0x2f1f4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1f50:
    // 0x2f1f50: 0xa2400049  sb          $zero, 0x49($s2)
    ctx->pc = 0x2f1f50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 73), (uint8_t)GPR_U32(ctx, 0));
label_2f1f54:
    // 0x2f1f54: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2f1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_2f1f58:
    // 0x2f1f58: 0xa2400048  sb          $zero, 0x48($s2)
    ctx->pc = 0x2f1f58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 0));
label_2f1f5c:
    // 0x2f1f5c: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x2f1f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2f1f60:
    // 0x2f1f60: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x2f1f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2f1f64:
    // 0x2f1f64: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x2f1f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f1f68:
    // 0x2f1f68: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x2f1f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2f1f6c:
    // 0x2f1f6c: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x2f1f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f1f70:
    // 0x2f1f70: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x2f1f70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f1f74:
    // 0x2f1f74: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x2f1f74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2f1f78:
    // 0x2f1f78: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x2f1f78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f1f7c:
    // 0x2f1f7c: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x2f1f7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2f1f80:
    // 0x2f1f80: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2f1f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2f1f84:
    // 0x2f1f84: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2f1f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f1f88:
    // 0x2f1f88: 0x3e00008  jr          $ra
label_2f1f8c:
    if (ctx->pc == 0x2F1F8Cu) {
        ctx->pc = 0x2F1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F88u;
        // 0x2f1f8c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F90u;
        goto label_fallthrough_0x2f1f88;
    }
    ctx->pc = 0x2F1F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F88u;
        // 0x2f1f8c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f1f88:
    ctx->pc = 0x2F1F90u;
}
