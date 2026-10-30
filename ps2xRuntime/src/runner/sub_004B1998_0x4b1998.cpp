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

// Function: sub_004B1998
// Address: 0x4b1998 - 0x4b2710
void sub_004B1998_0x4b1998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1998_0x4b1998");
#endif

    switch (ctx->pc) {
        case 0x4b1998u: goto label_4b1998;
        case 0x4b199cu: goto label_4b199c;
        case 0x4b19a0u: goto label_4b19a0;
        case 0x4b19a4u: goto label_4b19a4;
        case 0x4b19a8u: goto label_4b19a8;
        case 0x4b19acu: goto label_4b19ac;
        case 0x4b19b0u: goto label_4b19b0;
        case 0x4b19b4u: goto label_4b19b4;
        case 0x4b19b8u: goto label_4b19b8;
        case 0x4b19bcu: goto label_4b19bc;
        case 0x4b19c0u: goto label_4b19c0;
        case 0x4b19c4u: goto label_4b19c4;
        case 0x4b19c8u: goto label_4b19c8;
        case 0x4b19ccu: goto label_4b19cc;
        case 0x4b19d0u: goto label_4b19d0;
        case 0x4b19d4u: goto label_4b19d4;
        case 0x4b19d8u: goto label_4b19d8;
        case 0x4b19dcu: goto label_4b19dc;
        case 0x4b19e0u: goto label_4b19e0;
        case 0x4b19e4u: goto label_4b19e4;
        case 0x4b19e8u: goto label_4b19e8;
        case 0x4b19ecu: goto label_4b19ec;
        case 0x4b19f0u: goto label_4b19f0;
        case 0x4b19f4u: goto label_4b19f4;
        case 0x4b19f8u: goto label_4b19f8;
        case 0x4b19fcu: goto label_4b19fc;
        case 0x4b1a00u: goto label_4b1a00;
        case 0x4b1a04u: goto label_4b1a04;
        case 0x4b1a08u: goto label_4b1a08;
        case 0x4b1a0cu: goto label_4b1a0c;
        case 0x4b1a10u: goto label_4b1a10;
        case 0x4b1a14u: goto label_4b1a14;
        case 0x4b1a18u: goto label_4b1a18;
        case 0x4b1a1cu: goto label_4b1a1c;
        case 0x4b1a20u: goto label_4b1a20;
        case 0x4b1a24u: goto label_4b1a24;
        case 0x4b1a28u: goto label_4b1a28;
        case 0x4b1a2cu: goto label_4b1a2c;
        case 0x4b1a30u: goto label_4b1a30;
        case 0x4b1a34u: goto label_4b1a34;
        case 0x4b1a38u: goto label_4b1a38;
        case 0x4b1a3cu: goto label_4b1a3c;
        case 0x4b1a40u: goto label_4b1a40;
        case 0x4b1a44u: goto label_4b1a44;
        case 0x4b1a48u: goto label_4b1a48;
        case 0x4b1a4cu: goto label_4b1a4c;
        case 0x4b1a50u: goto label_4b1a50;
        case 0x4b1a54u: goto label_4b1a54;
        case 0x4b1a58u: goto label_4b1a58;
        case 0x4b1a5cu: goto label_4b1a5c;
        case 0x4b1a60u: goto label_4b1a60;
        case 0x4b1a64u: goto label_4b1a64;
        case 0x4b1a68u: goto label_4b1a68;
        case 0x4b1a6cu: goto label_4b1a6c;
        case 0x4b1a70u: goto label_4b1a70;
        case 0x4b1a74u: goto label_4b1a74;
        case 0x4b1a78u: goto label_4b1a78;
        case 0x4b1a7cu: goto label_4b1a7c;
        case 0x4b1a80u: goto label_4b1a80;
        case 0x4b1a84u: goto label_4b1a84;
        case 0x4b1a88u: goto label_4b1a88;
        case 0x4b1a8cu: goto label_4b1a8c;
        case 0x4b1a90u: goto label_4b1a90;
        case 0x4b1a94u: goto label_4b1a94;
        case 0x4b1a98u: goto label_4b1a98;
        case 0x4b1a9cu: goto label_4b1a9c;
        case 0x4b1aa0u: goto label_4b1aa0;
        case 0x4b1aa4u: goto label_4b1aa4;
        case 0x4b1aa8u: goto label_4b1aa8;
        case 0x4b1aacu: goto label_4b1aac;
        case 0x4b1ab0u: goto label_4b1ab0;
        case 0x4b1ab4u: goto label_4b1ab4;
        case 0x4b1ab8u: goto label_4b1ab8;
        case 0x4b1abcu: goto label_4b1abc;
        case 0x4b1ac0u: goto label_4b1ac0;
        case 0x4b1ac4u: goto label_4b1ac4;
        case 0x4b1ac8u: goto label_4b1ac8;
        case 0x4b1accu: goto label_4b1acc;
        case 0x4b1ad0u: goto label_4b1ad0;
        case 0x4b1ad4u: goto label_4b1ad4;
        case 0x4b1ad8u: goto label_4b1ad8;
        case 0x4b1adcu: goto label_4b1adc;
        case 0x4b1ae0u: goto label_4b1ae0;
        case 0x4b1ae4u: goto label_4b1ae4;
        case 0x4b1ae8u: goto label_4b1ae8;
        case 0x4b1aecu: goto label_4b1aec;
        case 0x4b1af0u: goto label_4b1af0;
        case 0x4b1af4u: goto label_4b1af4;
        case 0x4b1af8u: goto label_4b1af8;
        case 0x4b1afcu: goto label_4b1afc;
        case 0x4b1b00u: goto label_4b1b00;
        case 0x4b1b04u: goto label_4b1b04;
        case 0x4b1b08u: goto label_4b1b08;
        case 0x4b1b0cu: goto label_4b1b0c;
        case 0x4b1b10u: goto label_4b1b10;
        case 0x4b1b14u: goto label_4b1b14;
        case 0x4b1b18u: goto label_4b1b18;
        case 0x4b1b1cu: goto label_4b1b1c;
        case 0x4b1b20u: goto label_4b1b20;
        case 0x4b1b24u: goto label_4b1b24;
        case 0x4b1b28u: goto label_4b1b28;
        case 0x4b1b2cu: goto label_4b1b2c;
        case 0x4b1b30u: goto label_4b1b30;
        case 0x4b1b34u: goto label_4b1b34;
        case 0x4b1b38u: goto label_4b1b38;
        case 0x4b1b3cu: goto label_4b1b3c;
        case 0x4b1b40u: goto label_4b1b40;
        case 0x4b1b44u: goto label_4b1b44;
        case 0x4b1b48u: goto label_4b1b48;
        case 0x4b1b4cu: goto label_4b1b4c;
        case 0x4b1b50u: goto label_4b1b50;
        case 0x4b1b54u: goto label_4b1b54;
        case 0x4b1b58u: goto label_4b1b58;
        case 0x4b1b5cu: goto label_4b1b5c;
        case 0x4b1b60u: goto label_4b1b60;
        case 0x4b1b64u: goto label_4b1b64;
        case 0x4b1b68u: goto label_4b1b68;
        case 0x4b1b6cu: goto label_4b1b6c;
        case 0x4b1b70u: goto label_4b1b70;
        case 0x4b1b74u: goto label_4b1b74;
        case 0x4b1b78u: goto label_4b1b78;
        case 0x4b1b7cu: goto label_4b1b7c;
        case 0x4b1b80u: goto label_4b1b80;
        case 0x4b1b84u: goto label_4b1b84;
        case 0x4b1b88u: goto label_4b1b88;
        case 0x4b1b8cu: goto label_4b1b8c;
        case 0x4b1b90u: goto label_4b1b90;
        case 0x4b1b94u: goto label_4b1b94;
        case 0x4b1b98u: goto label_4b1b98;
        case 0x4b1b9cu: goto label_4b1b9c;
        case 0x4b1ba0u: goto label_4b1ba0;
        case 0x4b1ba4u: goto label_4b1ba4;
        case 0x4b1ba8u: goto label_4b1ba8;
        case 0x4b1bacu: goto label_4b1bac;
        case 0x4b1bb0u: goto label_4b1bb0;
        case 0x4b1bb4u: goto label_4b1bb4;
        case 0x4b1bb8u: goto label_4b1bb8;
        case 0x4b1bbcu: goto label_4b1bbc;
        case 0x4b1bc0u: goto label_4b1bc0;
        case 0x4b1bc4u: goto label_4b1bc4;
        case 0x4b1bc8u: goto label_4b1bc8;
        case 0x4b1bccu: goto label_4b1bcc;
        case 0x4b1bd0u: goto label_4b1bd0;
        case 0x4b1bd4u: goto label_4b1bd4;
        case 0x4b1bd8u: goto label_4b1bd8;
        case 0x4b1bdcu: goto label_4b1bdc;
        case 0x4b1be0u: goto label_4b1be0;
        case 0x4b1be4u: goto label_4b1be4;
        case 0x4b1be8u: goto label_4b1be8;
        case 0x4b1becu: goto label_4b1bec;
        case 0x4b1bf0u: goto label_4b1bf0;
        case 0x4b1bf4u: goto label_4b1bf4;
        case 0x4b1bf8u: goto label_4b1bf8;
        case 0x4b1bfcu: goto label_4b1bfc;
        case 0x4b1c00u: goto label_4b1c00;
        case 0x4b1c04u: goto label_4b1c04;
        case 0x4b1c08u: goto label_4b1c08;
        case 0x4b1c0cu: goto label_4b1c0c;
        case 0x4b1c10u: goto label_4b1c10;
        case 0x4b1c14u: goto label_4b1c14;
        case 0x4b1c18u: goto label_4b1c18;
        case 0x4b1c1cu: goto label_4b1c1c;
        case 0x4b1c20u: goto label_4b1c20;
        case 0x4b1c24u: goto label_4b1c24;
        case 0x4b1c28u: goto label_4b1c28;
        case 0x4b1c2cu: goto label_4b1c2c;
        case 0x4b1c30u: goto label_4b1c30;
        case 0x4b1c34u: goto label_4b1c34;
        case 0x4b1c38u: goto label_4b1c38;
        case 0x4b1c3cu: goto label_4b1c3c;
        case 0x4b1c40u: goto label_4b1c40;
        case 0x4b1c44u: goto label_4b1c44;
        case 0x4b1c48u: goto label_4b1c48;
        case 0x4b1c4cu: goto label_4b1c4c;
        case 0x4b1c50u: goto label_4b1c50;
        case 0x4b1c54u: goto label_4b1c54;
        case 0x4b1c58u: goto label_4b1c58;
        case 0x4b1c5cu: goto label_4b1c5c;
        case 0x4b1c60u: goto label_4b1c60;
        case 0x4b1c64u: goto label_4b1c64;
        case 0x4b1c68u: goto label_4b1c68;
        case 0x4b1c6cu: goto label_4b1c6c;
        case 0x4b1c70u: goto label_4b1c70;
        case 0x4b1c74u: goto label_4b1c74;
        case 0x4b1c78u: goto label_4b1c78;
        case 0x4b1c7cu: goto label_4b1c7c;
        case 0x4b1c80u: goto label_4b1c80;
        case 0x4b1c84u: goto label_4b1c84;
        case 0x4b1c88u: goto label_4b1c88;
        case 0x4b1c8cu: goto label_4b1c8c;
        case 0x4b1c90u: goto label_4b1c90;
        case 0x4b1c94u: goto label_4b1c94;
        case 0x4b1c98u: goto label_4b1c98;
        case 0x4b1c9cu: goto label_4b1c9c;
        case 0x4b1ca0u: goto label_4b1ca0;
        case 0x4b1ca4u: goto label_4b1ca4;
        case 0x4b1ca8u: goto label_4b1ca8;
        case 0x4b1cacu: goto label_4b1cac;
        case 0x4b1cb0u: goto label_4b1cb0;
        case 0x4b1cb4u: goto label_4b1cb4;
        case 0x4b1cb8u: goto label_4b1cb8;
        case 0x4b1cbcu: goto label_4b1cbc;
        case 0x4b1cc0u: goto label_4b1cc0;
        case 0x4b1cc4u: goto label_4b1cc4;
        case 0x4b1cc8u: goto label_4b1cc8;
        case 0x4b1cccu: goto label_4b1ccc;
        case 0x4b1cd0u: goto label_4b1cd0;
        case 0x4b1cd4u: goto label_4b1cd4;
        case 0x4b1cd8u: goto label_4b1cd8;
        case 0x4b1cdcu: goto label_4b1cdc;
        case 0x4b1ce0u: goto label_4b1ce0;
        case 0x4b1ce4u: goto label_4b1ce4;
        case 0x4b1ce8u: goto label_4b1ce8;
        case 0x4b1cecu: goto label_4b1cec;
        case 0x4b1cf0u: goto label_4b1cf0;
        case 0x4b1cf4u: goto label_4b1cf4;
        case 0x4b1cf8u: goto label_4b1cf8;
        case 0x4b1cfcu: goto label_4b1cfc;
        case 0x4b1d00u: goto label_4b1d00;
        case 0x4b1d04u: goto label_4b1d04;
        case 0x4b1d08u: goto label_4b1d08;
        case 0x4b1d0cu: goto label_4b1d0c;
        case 0x4b1d10u: goto label_4b1d10;
        case 0x4b1d14u: goto label_4b1d14;
        case 0x4b1d18u: goto label_4b1d18;
        case 0x4b1d1cu: goto label_4b1d1c;
        case 0x4b1d20u: goto label_4b1d20;
        case 0x4b1d24u: goto label_4b1d24;
        case 0x4b1d28u: goto label_4b1d28;
        case 0x4b1d2cu: goto label_4b1d2c;
        case 0x4b1d30u: goto label_4b1d30;
        case 0x4b1d34u: goto label_4b1d34;
        case 0x4b1d38u: goto label_4b1d38;
        case 0x4b1d3cu: goto label_4b1d3c;
        case 0x4b1d40u: goto label_4b1d40;
        case 0x4b1d44u: goto label_4b1d44;
        case 0x4b1d48u: goto label_4b1d48;
        case 0x4b1d4cu: goto label_4b1d4c;
        case 0x4b1d50u: goto label_4b1d50;
        case 0x4b1d54u: goto label_4b1d54;
        case 0x4b1d58u: goto label_4b1d58;
        case 0x4b1d5cu: goto label_4b1d5c;
        case 0x4b1d60u: goto label_4b1d60;
        case 0x4b1d64u: goto label_4b1d64;
        case 0x4b1d68u: goto label_4b1d68;
        case 0x4b1d6cu: goto label_4b1d6c;
        case 0x4b1d70u: goto label_4b1d70;
        case 0x4b1d74u: goto label_4b1d74;
        case 0x4b1d78u: goto label_4b1d78;
        case 0x4b1d7cu: goto label_4b1d7c;
        case 0x4b1d80u: goto label_4b1d80;
        case 0x4b1d84u: goto label_4b1d84;
        case 0x4b1d88u: goto label_4b1d88;
        case 0x4b1d8cu: goto label_4b1d8c;
        case 0x4b1d90u: goto label_4b1d90;
        case 0x4b1d94u: goto label_4b1d94;
        case 0x4b1d98u: goto label_4b1d98;
        case 0x4b1d9cu: goto label_4b1d9c;
        case 0x4b1da0u: goto label_4b1da0;
        case 0x4b1da4u: goto label_4b1da4;
        case 0x4b1da8u: goto label_4b1da8;
        case 0x4b1dacu: goto label_4b1dac;
        case 0x4b1db0u: goto label_4b1db0;
        case 0x4b1db4u: goto label_4b1db4;
        case 0x4b1db8u: goto label_4b1db8;
        case 0x4b1dbcu: goto label_4b1dbc;
        case 0x4b1dc0u: goto label_4b1dc0;
        case 0x4b1dc4u: goto label_4b1dc4;
        case 0x4b1dc8u: goto label_4b1dc8;
        case 0x4b1dccu: goto label_4b1dcc;
        case 0x4b1dd0u: goto label_4b1dd0;
        case 0x4b1dd4u: goto label_4b1dd4;
        case 0x4b1dd8u: goto label_4b1dd8;
        case 0x4b1ddcu: goto label_4b1ddc;
        case 0x4b1de0u: goto label_4b1de0;
        case 0x4b1de4u: goto label_4b1de4;
        case 0x4b1de8u: goto label_4b1de8;
        case 0x4b1decu: goto label_4b1dec;
        case 0x4b1df0u: goto label_4b1df0;
        case 0x4b1df4u: goto label_4b1df4;
        case 0x4b1df8u: goto label_4b1df8;
        case 0x4b1dfcu: goto label_4b1dfc;
        case 0x4b1e00u: goto label_4b1e00;
        case 0x4b1e04u: goto label_4b1e04;
        case 0x4b1e08u: goto label_4b1e08;
        case 0x4b1e0cu: goto label_4b1e0c;
        case 0x4b1e10u: goto label_4b1e10;
        case 0x4b1e14u: goto label_4b1e14;
        case 0x4b1e18u: goto label_4b1e18;
        case 0x4b1e1cu: goto label_4b1e1c;
        case 0x4b1e20u: goto label_4b1e20;
        case 0x4b1e24u: goto label_4b1e24;
        case 0x4b1e28u: goto label_4b1e28;
        case 0x4b1e2cu: goto label_4b1e2c;
        case 0x4b1e30u: goto label_4b1e30;
        case 0x4b1e34u: goto label_4b1e34;
        case 0x4b1e38u: goto label_4b1e38;
        case 0x4b1e3cu: goto label_4b1e3c;
        case 0x4b1e40u: goto label_4b1e40;
        case 0x4b1e44u: goto label_4b1e44;
        case 0x4b1e48u: goto label_4b1e48;
        case 0x4b1e4cu: goto label_4b1e4c;
        case 0x4b1e50u: goto label_4b1e50;
        case 0x4b1e54u: goto label_4b1e54;
        case 0x4b1e58u: goto label_4b1e58;
        case 0x4b1e5cu: goto label_4b1e5c;
        case 0x4b1e60u: goto label_4b1e60;
        case 0x4b1e64u: goto label_4b1e64;
        case 0x4b1e68u: goto label_4b1e68;
        case 0x4b1e6cu: goto label_4b1e6c;
        case 0x4b1e70u: goto label_4b1e70;
        case 0x4b1e74u: goto label_4b1e74;
        case 0x4b1e78u: goto label_4b1e78;
        case 0x4b1e7cu: goto label_4b1e7c;
        case 0x4b1e80u: goto label_4b1e80;
        case 0x4b1e84u: goto label_4b1e84;
        case 0x4b1e88u: goto label_4b1e88;
        case 0x4b1e8cu: goto label_4b1e8c;
        case 0x4b1e90u: goto label_4b1e90;
        case 0x4b1e94u: goto label_4b1e94;
        case 0x4b1e98u: goto label_4b1e98;
        case 0x4b1e9cu: goto label_4b1e9c;
        case 0x4b1ea0u: goto label_4b1ea0;
        case 0x4b1ea4u: goto label_4b1ea4;
        case 0x4b1ea8u: goto label_4b1ea8;
        case 0x4b1eacu: goto label_4b1eac;
        case 0x4b1eb0u: goto label_4b1eb0;
        case 0x4b1eb4u: goto label_4b1eb4;
        case 0x4b1eb8u: goto label_4b1eb8;
        case 0x4b1ebcu: goto label_4b1ebc;
        case 0x4b1ec0u: goto label_4b1ec0;
        case 0x4b1ec4u: goto label_4b1ec4;
        case 0x4b1ec8u: goto label_4b1ec8;
        case 0x4b1eccu: goto label_4b1ecc;
        case 0x4b1ed0u: goto label_4b1ed0;
        case 0x4b1ed4u: goto label_4b1ed4;
        case 0x4b1ed8u: goto label_4b1ed8;
        case 0x4b1edcu: goto label_4b1edc;
        case 0x4b1ee0u: goto label_4b1ee0;
        case 0x4b1ee4u: goto label_4b1ee4;
        case 0x4b1ee8u: goto label_4b1ee8;
        case 0x4b1eecu: goto label_4b1eec;
        case 0x4b1ef0u: goto label_4b1ef0;
        case 0x4b1ef4u: goto label_4b1ef4;
        case 0x4b1ef8u: goto label_4b1ef8;
        case 0x4b1efcu: goto label_4b1efc;
        case 0x4b1f00u: goto label_4b1f00;
        case 0x4b1f04u: goto label_4b1f04;
        case 0x4b1f08u: goto label_4b1f08;
        case 0x4b1f0cu: goto label_4b1f0c;
        case 0x4b1f10u: goto label_4b1f10;
        case 0x4b1f14u: goto label_4b1f14;
        case 0x4b1f18u: goto label_4b1f18;
        case 0x4b1f1cu: goto label_4b1f1c;
        case 0x4b1f20u: goto label_4b1f20;
        case 0x4b1f24u: goto label_4b1f24;
        case 0x4b1f28u: goto label_4b1f28;
        case 0x4b1f2cu: goto label_4b1f2c;
        case 0x4b1f30u: goto label_4b1f30;
        case 0x4b1f34u: goto label_4b1f34;
        case 0x4b1f38u: goto label_4b1f38;
        case 0x4b1f3cu: goto label_4b1f3c;
        case 0x4b1f40u: goto label_4b1f40;
        case 0x4b1f44u: goto label_4b1f44;
        case 0x4b1f48u: goto label_4b1f48;
        case 0x4b1f4cu: goto label_4b1f4c;
        case 0x4b1f50u: goto label_4b1f50;
        case 0x4b1f54u: goto label_4b1f54;
        case 0x4b1f58u: goto label_4b1f58;
        case 0x4b1f5cu: goto label_4b1f5c;
        case 0x4b1f60u: goto label_4b1f60;
        case 0x4b1f64u: goto label_4b1f64;
        case 0x4b1f68u: goto label_4b1f68;
        case 0x4b1f6cu: goto label_4b1f6c;
        case 0x4b1f70u: goto label_4b1f70;
        case 0x4b1f74u: goto label_4b1f74;
        case 0x4b1f78u: goto label_4b1f78;
        case 0x4b1f7cu: goto label_4b1f7c;
        case 0x4b1f80u: goto label_4b1f80;
        case 0x4b1f84u: goto label_4b1f84;
        case 0x4b1f88u: goto label_4b1f88;
        case 0x4b1f8cu: goto label_4b1f8c;
        case 0x4b1f90u: goto label_4b1f90;
        case 0x4b1f94u: goto label_4b1f94;
        case 0x4b1f98u: goto label_4b1f98;
        case 0x4b1f9cu: goto label_4b1f9c;
        case 0x4b1fa0u: goto label_4b1fa0;
        case 0x4b1fa4u: goto label_4b1fa4;
        case 0x4b1fa8u: goto label_4b1fa8;
        case 0x4b1facu: goto label_4b1fac;
        case 0x4b1fb0u: goto label_4b1fb0;
        case 0x4b1fb4u: goto label_4b1fb4;
        case 0x4b1fb8u: goto label_4b1fb8;
        case 0x4b1fbcu: goto label_4b1fbc;
        case 0x4b1fc0u: goto label_4b1fc0;
        case 0x4b1fc4u: goto label_4b1fc4;
        case 0x4b1fc8u: goto label_4b1fc8;
        case 0x4b1fccu: goto label_4b1fcc;
        case 0x4b1fd0u: goto label_4b1fd0;
        case 0x4b1fd4u: goto label_4b1fd4;
        case 0x4b1fd8u: goto label_4b1fd8;
        case 0x4b1fdcu: goto label_4b1fdc;
        case 0x4b1fe0u: goto label_4b1fe0;
        case 0x4b1fe4u: goto label_4b1fe4;
        case 0x4b1fe8u: goto label_4b1fe8;
        case 0x4b1fecu: goto label_4b1fec;
        case 0x4b1ff0u: goto label_4b1ff0;
        case 0x4b1ff4u: goto label_4b1ff4;
        case 0x4b1ff8u: goto label_4b1ff8;
        case 0x4b1ffcu: goto label_4b1ffc;
        case 0x4b2000u: goto label_4b2000;
        case 0x4b2004u: goto label_4b2004;
        case 0x4b2008u: goto label_4b2008;
        case 0x4b200cu: goto label_4b200c;
        case 0x4b2010u: goto label_4b2010;
        case 0x4b2014u: goto label_4b2014;
        case 0x4b2018u: goto label_4b2018;
        case 0x4b201cu: goto label_4b201c;
        case 0x4b2020u: goto label_4b2020;
        case 0x4b2024u: goto label_4b2024;
        case 0x4b2028u: goto label_4b2028;
        case 0x4b202cu: goto label_4b202c;
        case 0x4b2030u: goto label_4b2030;
        case 0x4b2034u: goto label_4b2034;
        case 0x4b2038u: goto label_4b2038;
        case 0x4b203cu: goto label_4b203c;
        case 0x4b2040u: goto label_4b2040;
        case 0x4b2044u: goto label_4b2044;
        case 0x4b2048u: goto label_4b2048;
        case 0x4b204cu: goto label_4b204c;
        case 0x4b2050u: goto label_4b2050;
        case 0x4b2054u: goto label_4b2054;
        case 0x4b2058u: goto label_4b2058;
        case 0x4b205cu: goto label_4b205c;
        case 0x4b2060u: goto label_4b2060;
        case 0x4b2064u: goto label_4b2064;
        case 0x4b2068u: goto label_4b2068;
        case 0x4b206cu: goto label_4b206c;
        case 0x4b2070u: goto label_4b2070;
        case 0x4b2074u: goto label_4b2074;
        case 0x4b2078u: goto label_4b2078;
        case 0x4b207cu: goto label_4b207c;
        case 0x4b2080u: goto label_4b2080;
        case 0x4b2084u: goto label_4b2084;
        case 0x4b2088u: goto label_4b2088;
        case 0x4b208cu: goto label_4b208c;
        case 0x4b2090u: goto label_4b2090;
        case 0x4b2094u: goto label_4b2094;
        case 0x4b2098u: goto label_4b2098;
        case 0x4b209cu: goto label_4b209c;
        case 0x4b20a0u: goto label_4b20a0;
        case 0x4b20a4u: goto label_4b20a4;
        case 0x4b20a8u: goto label_4b20a8;
        case 0x4b20acu: goto label_4b20ac;
        case 0x4b20b0u: goto label_4b20b0;
        case 0x4b20b4u: goto label_4b20b4;
        case 0x4b20b8u: goto label_4b20b8;
        case 0x4b20bcu: goto label_4b20bc;
        case 0x4b20c0u: goto label_4b20c0;
        case 0x4b20c4u: goto label_4b20c4;
        case 0x4b20c8u: goto label_4b20c8;
        case 0x4b20ccu: goto label_4b20cc;
        case 0x4b20d0u: goto label_4b20d0;
        case 0x4b20d4u: goto label_4b20d4;
        case 0x4b20d8u: goto label_4b20d8;
        case 0x4b20dcu: goto label_4b20dc;
        case 0x4b20e0u: goto label_4b20e0;
        case 0x4b20e4u: goto label_4b20e4;
        case 0x4b20e8u: goto label_4b20e8;
        case 0x4b20ecu: goto label_4b20ec;
        case 0x4b20f0u: goto label_4b20f0;
        case 0x4b20f4u: goto label_4b20f4;
        case 0x4b20f8u: goto label_4b20f8;
        case 0x4b20fcu: goto label_4b20fc;
        case 0x4b2100u: goto label_4b2100;
        case 0x4b2104u: goto label_4b2104;
        case 0x4b2108u: goto label_4b2108;
        case 0x4b210cu: goto label_4b210c;
        case 0x4b2110u: goto label_4b2110;
        case 0x4b2114u: goto label_4b2114;
        case 0x4b2118u: goto label_4b2118;
        case 0x4b211cu: goto label_4b211c;
        case 0x4b2120u: goto label_4b2120;
        case 0x4b2124u: goto label_4b2124;
        case 0x4b2128u: goto label_4b2128;
        case 0x4b212cu: goto label_4b212c;
        case 0x4b2130u: goto label_4b2130;
        case 0x4b2134u: goto label_4b2134;
        case 0x4b2138u: goto label_4b2138;
        case 0x4b213cu: goto label_4b213c;
        case 0x4b2140u: goto label_4b2140;
        case 0x4b2144u: goto label_4b2144;
        case 0x4b2148u: goto label_4b2148;
        case 0x4b214cu: goto label_4b214c;
        case 0x4b2150u: goto label_4b2150;
        case 0x4b2154u: goto label_4b2154;
        case 0x4b2158u: goto label_4b2158;
        case 0x4b215cu: goto label_4b215c;
        case 0x4b2160u: goto label_4b2160;
        case 0x4b2164u: goto label_4b2164;
        case 0x4b2168u: goto label_4b2168;
        case 0x4b216cu: goto label_4b216c;
        case 0x4b2170u: goto label_4b2170;
        case 0x4b2174u: goto label_4b2174;
        case 0x4b2178u: goto label_4b2178;
        case 0x4b217cu: goto label_4b217c;
        case 0x4b2180u: goto label_4b2180;
        case 0x4b2184u: goto label_4b2184;
        case 0x4b2188u: goto label_4b2188;
        case 0x4b218cu: goto label_4b218c;
        case 0x4b2190u: goto label_4b2190;
        case 0x4b2194u: goto label_4b2194;
        case 0x4b2198u: goto label_4b2198;
        case 0x4b219cu: goto label_4b219c;
        case 0x4b21a0u: goto label_4b21a0;
        case 0x4b21a4u: goto label_4b21a4;
        case 0x4b21a8u: goto label_4b21a8;
        case 0x4b21acu: goto label_4b21ac;
        case 0x4b21b0u: goto label_4b21b0;
        case 0x4b21b4u: goto label_4b21b4;
        case 0x4b21b8u: goto label_4b21b8;
        case 0x4b21bcu: goto label_4b21bc;
        case 0x4b21c0u: goto label_4b21c0;
        case 0x4b21c4u: goto label_4b21c4;
        case 0x4b21c8u: goto label_4b21c8;
        case 0x4b21ccu: goto label_4b21cc;
        case 0x4b21d0u: goto label_4b21d0;
        case 0x4b21d4u: goto label_4b21d4;
        case 0x4b21d8u: goto label_4b21d8;
        case 0x4b21dcu: goto label_4b21dc;
        case 0x4b21e0u: goto label_4b21e0;
        case 0x4b21e4u: goto label_4b21e4;
        case 0x4b21e8u: goto label_4b21e8;
        case 0x4b21ecu: goto label_4b21ec;
        case 0x4b21f0u: goto label_4b21f0;
        case 0x4b21f4u: goto label_4b21f4;
        case 0x4b21f8u: goto label_4b21f8;
        case 0x4b21fcu: goto label_4b21fc;
        case 0x4b2200u: goto label_4b2200;
        case 0x4b2204u: goto label_4b2204;
        case 0x4b2208u: goto label_4b2208;
        case 0x4b220cu: goto label_4b220c;
        case 0x4b2210u: goto label_4b2210;
        case 0x4b2214u: goto label_4b2214;
        case 0x4b2218u: goto label_4b2218;
        case 0x4b221cu: goto label_4b221c;
        case 0x4b2220u: goto label_4b2220;
        case 0x4b2224u: goto label_4b2224;
        case 0x4b2228u: goto label_4b2228;
        case 0x4b222cu: goto label_4b222c;
        case 0x4b2230u: goto label_4b2230;
        case 0x4b2234u: goto label_4b2234;
        case 0x4b2238u: goto label_4b2238;
        case 0x4b223cu: goto label_4b223c;
        case 0x4b2240u: goto label_4b2240;
        case 0x4b2244u: goto label_4b2244;
        case 0x4b2248u: goto label_4b2248;
        case 0x4b224cu: goto label_4b224c;
        case 0x4b2250u: goto label_4b2250;
        case 0x4b2254u: goto label_4b2254;
        case 0x4b2258u: goto label_4b2258;
        case 0x4b225cu: goto label_4b225c;
        case 0x4b2260u: goto label_4b2260;
        case 0x4b2264u: goto label_4b2264;
        case 0x4b2268u: goto label_4b2268;
        case 0x4b226cu: goto label_4b226c;
        case 0x4b2270u: goto label_4b2270;
        case 0x4b2274u: goto label_4b2274;
        case 0x4b2278u: goto label_4b2278;
        case 0x4b227cu: goto label_4b227c;
        case 0x4b2280u: goto label_4b2280;
        case 0x4b2284u: goto label_4b2284;
        case 0x4b2288u: goto label_4b2288;
        case 0x4b228cu: goto label_4b228c;
        case 0x4b2290u: goto label_4b2290;
        case 0x4b2294u: goto label_4b2294;
        case 0x4b2298u: goto label_4b2298;
        case 0x4b229cu: goto label_4b229c;
        case 0x4b22a0u: goto label_4b22a0;
        case 0x4b22a4u: goto label_4b22a4;
        case 0x4b22a8u: goto label_4b22a8;
        case 0x4b22acu: goto label_4b22ac;
        case 0x4b22b0u: goto label_4b22b0;
        case 0x4b22b4u: goto label_4b22b4;
        case 0x4b22b8u: goto label_4b22b8;
        case 0x4b22bcu: goto label_4b22bc;
        case 0x4b22c0u: goto label_4b22c0;
        case 0x4b22c4u: goto label_4b22c4;
        case 0x4b22c8u: goto label_4b22c8;
        case 0x4b22ccu: goto label_4b22cc;
        case 0x4b22d0u: goto label_4b22d0;
        case 0x4b22d4u: goto label_4b22d4;
        case 0x4b22d8u: goto label_4b22d8;
        case 0x4b22dcu: goto label_4b22dc;
        case 0x4b22e0u: goto label_4b22e0;
        case 0x4b22e4u: goto label_4b22e4;
        case 0x4b22e8u: goto label_4b22e8;
        case 0x4b22ecu: goto label_4b22ec;
        case 0x4b22f0u: goto label_4b22f0;
        case 0x4b22f4u: goto label_4b22f4;
        case 0x4b22f8u: goto label_4b22f8;
        case 0x4b22fcu: goto label_4b22fc;
        case 0x4b2300u: goto label_4b2300;
        case 0x4b2304u: goto label_4b2304;
        case 0x4b2308u: goto label_4b2308;
        case 0x4b230cu: goto label_4b230c;
        case 0x4b2310u: goto label_4b2310;
        case 0x4b2314u: goto label_4b2314;
        case 0x4b2318u: goto label_4b2318;
        case 0x4b231cu: goto label_4b231c;
        case 0x4b2320u: goto label_4b2320;
        case 0x4b2324u: goto label_4b2324;
        case 0x4b2328u: goto label_4b2328;
        case 0x4b232cu: goto label_4b232c;
        case 0x4b2330u: goto label_4b2330;
        case 0x4b2334u: goto label_4b2334;
        case 0x4b2338u: goto label_4b2338;
        case 0x4b233cu: goto label_4b233c;
        case 0x4b2340u: goto label_4b2340;
        case 0x4b2344u: goto label_4b2344;
        case 0x4b2348u: goto label_4b2348;
        case 0x4b234cu: goto label_4b234c;
        case 0x4b2350u: goto label_4b2350;
        case 0x4b2354u: goto label_4b2354;
        case 0x4b2358u: goto label_4b2358;
        case 0x4b235cu: goto label_4b235c;
        case 0x4b2360u: goto label_4b2360;
        case 0x4b2364u: goto label_4b2364;
        case 0x4b2368u: goto label_4b2368;
        case 0x4b236cu: goto label_4b236c;
        case 0x4b2370u: goto label_4b2370;
        case 0x4b2374u: goto label_4b2374;
        case 0x4b2378u: goto label_4b2378;
        case 0x4b237cu: goto label_4b237c;
        case 0x4b2380u: goto label_4b2380;
        case 0x4b2384u: goto label_4b2384;
        case 0x4b2388u: goto label_4b2388;
        case 0x4b238cu: goto label_4b238c;
        case 0x4b2390u: goto label_4b2390;
        case 0x4b2394u: goto label_4b2394;
        case 0x4b2398u: goto label_4b2398;
        case 0x4b239cu: goto label_4b239c;
        case 0x4b23a0u: goto label_4b23a0;
        case 0x4b23a4u: goto label_4b23a4;
        case 0x4b23a8u: goto label_4b23a8;
        case 0x4b23acu: goto label_4b23ac;
        case 0x4b23b0u: goto label_4b23b0;
        case 0x4b23b4u: goto label_4b23b4;
        case 0x4b23b8u: goto label_4b23b8;
        case 0x4b23bcu: goto label_4b23bc;
        case 0x4b23c0u: goto label_4b23c0;
        case 0x4b23c4u: goto label_4b23c4;
        case 0x4b23c8u: goto label_4b23c8;
        case 0x4b23ccu: goto label_4b23cc;
        case 0x4b23d0u: goto label_4b23d0;
        case 0x4b23d4u: goto label_4b23d4;
        case 0x4b23d8u: goto label_4b23d8;
        case 0x4b23dcu: goto label_4b23dc;
        case 0x4b23e0u: goto label_4b23e0;
        case 0x4b23e4u: goto label_4b23e4;
        case 0x4b23e8u: goto label_4b23e8;
        case 0x4b23ecu: goto label_4b23ec;
        case 0x4b23f0u: goto label_4b23f0;
        case 0x4b23f4u: goto label_4b23f4;
        case 0x4b23f8u: goto label_4b23f8;
        case 0x4b23fcu: goto label_4b23fc;
        case 0x4b2400u: goto label_4b2400;
        case 0x4b2404u: goto label_4b2404;
        case 0x4b2408u: goto label_4b2408;
        case 0x4b240cu: goto label_4b240c;
        case 0x4b2410u: goto label_4b2410;
        case 0x4b2414u: goto label_4b2414;
        case 0x4b2418u: goto label_4b2418;
        case 0x4b241cu: goto label_4b241c;
        case 0x4b2420u: goto label_4b2420;
        case 0x4b2424u: goto label_4b2424;
        case 0x4b2428u: goto label_4b2428;
        case 0x4b242cu: goto label_4b242c;
        case 0x4b2430u: goto label_4b2430;
        case 0x4b2434u: goto label_4b2434;
        case 0x4b2438u: goto label_4b2438;
        case 0x4b243cu: goto label_4b243c;
        case 0x4b2440u: goto label_4b2440;
        case 0x4b2444u: goto label_4b2444;
        case 0x4b2448u: goto label_4b2448;
        case 0x4b244cu: goto label_4b244c;
        case 0x4b2450u: goto label_4b2450;
        case 0x4b2454u: goto label_4b2454;
        case 0x4b2458u: goto label_4b2458;
        case 0x4b245cu: goto label_4b245c;
        case 0x4b2460u: goto label_4b2460;
        case 0x4b2464u: goto label_4b2464;
        case 0x4b2468u: goto label_4b2468;
        case 0x4b246cu: goto label_4b246c;
        case 0x4b2470u: goto label_4b2470;
        case 0x4b2474u: goto label_4b2474;
        case 0x4b2478u: goto label_4b2478;
        case 0x4b247cu: goto label_4b247c;
        case 0x4b2480u: goto label_4b2480;
        case 0x4b2484u: goto label_4b2484;
        case 0x4b2488u: goto label_4b2488;
        case 0x4b248cu: goto label_4b248c;
        case 0x4b2490u: goto label_4b2490;
        case 0x4b2494u: goto label_4b2494;
        case 0x4b2498u: goto label_4b2498;
        case 0x4b249cu: goto label_4b249c;
        case 0x4b24a0u: goto label_4b24a0;
        case 0x4b24a4u: goto label_4b24a4;
        case 0x4b24a8u: goto label_4b24a8;
        case 0x4b24acu: goto label_4b24ac;
        case 0x4b24b0u: goto label_4b24b0;
        case 0x4b24b4u: goto label_4b24b4;
        case 0x4b24b8u: goto label_4b24b8;
        case 0x4b24bcu: goto label_4b24bc;
        case 0x4b24c0u: goto label_4b24c0;
        case 0x4b24c4u: goto label_4b24c4;
        case 0x4b24c8u: goto label_4b24c8;
        case 0x4b24ccu: goto label_4b24cc;
        case 0x4b24d0u: goto label_4b24d0;
        case 0x4b24d4u: goto label_4b24d4;
        case 0x4b24d8u: goto label_4b24d8;
        case 0x4b24dcu: goto label_4b24dc;
        case 0x4b24e0u: goto label_4b24e0;
        case 0x4b24e4u: goto label_4b24e4;
        case 0x4b24e8u: goto label_4b24e8;
        case 0x4b24ecu: goto label_4b24ec;
        case 0x4b24f0u: goto label_4b24f0;
        case 0x4b24f4u: goto label_4b24f4;
        case 0x4b24f8u: goto label_4b24f8;
        case 0x4b24fcu: goto label_4b24fc;
        case 0x4b2500u: goto label_4b2500;
        case 0x4b2504u: goto label_4b2504;
        case 0x4b2508u: goto label_4b2508;
        case 0x4b250cu: goto label_4b250c;
        case 0x4b2510u: goto label_4b2510;
        case 0x4b2514u: goto label_4b2514;
        case 0x4b2518u: goto label_4b2518;
        case 0x4b251cu: goto label_4b251c;
        case 0x4b2520u: goto label_4b2520;
        case 0x4b2524u: goto label_4b2524;
        case 0x4b2528u: goto label_4b2528;
        case 0x4b252cu: goto label_4b252c;
        case 0x4b2530u: goto label_4b2530;
        case 0x4b2534u: goto label_4b2534;
        case 0x4b2538u: goto label_4b2538;
        case 0x4b253cu: goto label_4b253c;
        case 0x4b2540u: goto label_4b2540;
        case 0x4b2544u: goto label_4b2544;
        case 0x4b2548u: goto label_4b2548;
        case 0x4b254cu: goto label_4b254c;
        case 0x4b2550u: goto label_4b2550;
        case 0x4b2554u: goto label_4b2554;
        case 0x4b2558u: goto label_4b2558;
        case 0x4b255cu: goto label_4b255c;
        case 0x4b2560u: goto label_4b2560;
        case 0x4b2564u: goto label_4b2564;
        case 0x4b2568u: goto label_4b2568;
        case 0x4b256cu: goto label_4b256c;
        case 0x4b2570u: goto label_4b2570;
        case 0x4b2574u: goto label_4b2574;
        case 0x4b2578u: goto label_4b2578;
        case 0x4b257cu: goto label_4b257c;
        case 0x4b2580u: goto label_4b2580;
        case 0x4b2584u: goto label_4b2584;
        case 0x4b2588u: goto label_4b2588;
        case 0x4b258cu: goto label_4b258c;
        case 0x4b2590u: goto label_4b2590;
        case 0x4b2594u: goto label_4b2594;
        case 0x4b2598u: goto label_4b2598;
        case 0x4b259cu: goto label_4b259c;
        case 0x4b25a0u: goto label_4b25a0;
        case 0x4b25a4u: goto label_4b25a4;
        case 0x4b25a8u: goto label_4b25a8;
        case 0x4b25acu: goto label_4b25ac;
        case 0x4b25b0u: goto label_4b25b0;
        case 0x4b25b4u: goto label_4b25b4;
        case 0x4b25b8u: goto label_4b25b8;
        case 0x4b25bcu: goto label_4b25bc;
        case 0x4b25c0u: goto label_4b25c0;
        case 0x4b25c4u: goto label_4b25c4;
        case 0x4b25c8u: goto label_4b25c8;
        case 0x4b25ccu: goto label_4b25cc;
        case 0x4b25d0u: goto label_4b25d0;
        case 0x4b25d4u: goto label_4b25d4;
        case 0x4b25d8u: goto label_4b25d8;
        case 0x4b25dcu: goto label_4b25dc;
        case 0x4b25e0u: goto label_4b25e0;
        case 0x4b25e4u: goto label_4b25e4;
        case 0x4b25e8u: goto label_4b25e8;
        case 0x4b25ecu: goto label_4b25ec;
        case 0x4b25f0u: goto label_4b25f0;
        case 0x4b25f4u: goto label_4b25f4;
        case 0x4b25f8u: goto label_4b25f8;
        case 0x4b25fcu: goto label_4b25fc;
        case 0x4b2600u: goto label_4b2600;
        case 0x4b2604u: goto label_4b2604;
        case 0x4b2608u: goto label_4b2608;
        case 0x4b260cu: goto label_4b260c;
        case 0x4b2610u: goto label_4b2610;
        case 0x4b2614u: goto label_4b2614;
        case 0x4b2618u: goto label_4b2618;
        case 0x4b261cu: goto label_4b261c;
        case 0x4b2620u: goto label_4b2620;
        case 0x4b2624u: goto label_4b2624;
        case 0x4b2628u: goto label_4b2628;
        case 0x4b262cu: goto label_4b262c;
        case 0x4b2630u: goto label_4b2630;
        case 0x4b2634u: goto label_4b2634;
        case 0x4b2638u: goto label_4b2638;
        case 0x4b263cu: goto label_4b263c;
        case 0x4b2640u: goto label_4b2640;
        case 0x4b2644u: goto label_4b2644;
        case 0x4b2648u: goto label_4b2648;
        case 0x4b264cu: goto label_4b264c;
        case 0x4b2650u: goto label_4b2650;
        case 0x4b2654u: goto label_4b2654;
        case 0x4b2658u: goto label_4b2658;
        case 0x4b265cu: goto label_4b265c;
        case 0x4b2660u: goto label_4b2660;
        case 0x4b2664u: goto label_4b2664;
        case 0x4b2668u: goto label_4b2668;
        case 0x4b266cu: goto label_4b266c;
        case 0x4b2670u: goto label_4b2670;
        case 0x4b2674u: goto label_4b2674;
        case 0x4b2678u: goto label_4b2678;
        case 0x4b267cu: goto label_4b267c;
        case 0x4b2680u: goto label_4b2680;
        case 0x4b2684u: goto label_4b2684;
        case 0x4b2688u: goto label_4b2688;
        case 0x4b268cu: goto label_4b268c;
        case 0x4b2690u: goto label_4b2690;
        case 0x4b2694u: goto label_4b2694;
        case 0x4b2698u: goto label_4b2698;
        case 0x4b269cu: goto label_4b269c;
        case 0x4b26a0u: goto label_4b26a0;
        case 0x4b26a4u: goto label_4b26a4;
        case 0x4b26a8u: goto label_4b26a8;
        case 0x4b26acu: goto label_4b26ac;
        case 0x4b26b0u: goto label_4b26b0;
        case 0x4b26b4u: goto label_4b26b4;
        case 0x4b26b8u: goto label_4b26b8;
        case 0x4b26bcu: goto label_4b26bc;
        case 0x4b26c0u: goto label_4b26c0;
        case 0x4b26c4u: goto label_4b26c4;
        case 0x4b26c8u: goto label_4b26c8;
        case 0x4b26ccu: goto label_4b26cc;
        case 0x4b26d0u: goto label_4b26d0;
        case 0x4b26d4u: goto label_4b26d4;
        case 0x4b26d8u: goto label_4b26d8;
        case 0x4b26dcu: goto label_4b26dc;
        case 0x4b26e0u: goto label_4b26e0;
        case 0x4b26e4u: goto label_4b26e4;
        case 0x4b26e8u: goto label_4b26e8;
        case 0x4b26ecu: goto label_4b26ec;
        case 0x4b26f0u: goto label_4b26f0;
        case 0x4b26f4u: goto label_4b26f4;
        case 0x4b26f8u: goto label_4b26f8;
        case 0x4b26fcu: goto label_4b26fc;
        case 0x4b2700u: goto label_4b2700;
        case 0x4b2704u: goto label_4b2704;
        case 0x4b2708u: goto label_4b2708;
        case 0x4b270cu: goto label_4b270c;
        default: break;
    }

    ctx->pc = 0x4b1998u;

label_4b1998:
    // 0x4b1998: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x4b1998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_4b199c:
    // 0x4b199c: 0xffb702f0  sd          $s7, 0x2F0($sp)
    ctx->pc = 0x4b199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 23));
label_4b19a0:
    // 0x4b19a0: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x4b19a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
label_4b19a4:
    // 0x4b19a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4b19a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b19a8:
    // 0x4b19a8: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x4b19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
label_4b19ac:
    // 0x4b19ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4b19acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b19b0:
    // 0x4b19b0: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x4b19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
label_4b19b4:
    // 0x4b19b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b19b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b19b8:
    // 0x4b19b8: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x4b19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
label_4b19bc:
    // 0x4b19bc: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b19bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b19c0:
    // 0x4b19c0: 0xffbe0300  sd          $fp, 0x300($sp)
    ctx->pc = 0x4b19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 30));
label_4b19c4:
    // 0x4b19c4: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x4b19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
label_4b19c8:
    // 0x4b19c8: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x4b19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_4b19cc:
    // 0x4b19cc: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x4b19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
label_4b19d0:
    // 0x4b19d0: 0xffb00280  sd          $s0, 0x280($sp)
    ctx->pc = 0x4b19d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
label_4b19d4:
    // 0x4b19d4: 0xafa70260  sw          $a3, 0x260($sp)
    ctx->pc = 0x4b19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 7));
label_4b19d8:
    // 0x4b19d8: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x4b19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_4b19dc:
    // 0x4b19dc: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x4b19dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_4b19e0:
    // 0x4b19e0: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x4b19e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_4b19e4:
    // 0x4b19e4: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x4b19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_4b19e8:
    // 0x4b19e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b19ec:
    if (ctx->pc == 0x4B19ECu) {
        ctx->pc = 0x4B19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19E8u;
        // 0x4b19ec: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B19F0u;
        goto label_4b19f0;
    }
    ctx->pc = 0x4B19E8u;
    {
        const bool branch_taken_0x4b19e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19E8u;
        // 0x4b19ec: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b19e8) {
            ctx->pc = 0x4B1A0Cu;
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B19F0u;
label_4b19f0:
    // 0x4b19f0: 0x10000278  b           . + 4 + (0x278 << 2)
label_4b19f4:
    if (ctx->pc == 0x4B19F4u) {
        ctx->pc = 0x4B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19F0u;
        // 0x4b19f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B19F8u;
        goto label_4b19f8;
    }
    ctx->pc = 0x4B19F0u;
    {
        const bool branch_taken_0x4b19f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19F0u;
        // 0x4b19f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b19f0) {
            ctx->pc = 0x4B23D4u;
            goto label_4b23d4;
        }
    }
    ctx->pc = 0x4B19F8u;
label_4b19f8:
    // 0x4b19f8: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x4b19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4b19fc:
    // 0x4b19fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b1a00:
    // 0x4b1a00: 0x10000002  b           . + 4 + (0x2 << 2)
label_4b1a04:
    if (ctx->pc == 0x4B1A04u) {
        ctx->pc = 0x4B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A00u;
        // 0x4b1a04: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A08u;
        goto label_4b1a08;
    }
    ctx->pc = 0x4B1A00u;
    {
        const bool branch_taken_0x4b1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A00u;
        // 0x4b1a04: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a00) {
            ctx->pc = 0x4B1A0Cu;
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1A08u;
label_4b1a08:
    // 0x4b1a08: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1a0c:
    // 0x4b1a0c: 0x92f10000  lbu         $s1, 0x0($s7)
    ctx->pc = 0x4b1a0cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_4b1a10:
    // 0x4b1a10: 0x12200329  beqz        $s1, . + 4 + (0x329 << 2)
label_4b1a14:
    if (ctx->pc == 0x4B1A14u) {
        ctx->pc = 0x4B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A10u;
        // 0x4b1a14: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A18u;
        goto label_4b1a18;
    }
    ctx->pc = 0x4B1A10u;
    {
        const bool branch_taken_0x4b1a10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A10u;
        // 0x4b1a14: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a10) {
            ctx->pc = 0x4B26B8u;
            goto label_4b26b8;
        }
    }
    ctx->pc = 0x4B1A18u;
label_4b1a18:
    // 0x4b1a18: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4b1a1c:
    // 0x4b1a1c: 0x2462c531  addiu       $v0, $v1, -0x3ACF
    ctx->pc = 0x4b1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
label_4b1a20:
    // 0x4b1a20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b1a24:
    // 0x4b1a24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b1a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b1a28:
    // 0x4b1a28: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4b1a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4b1a2c:
    // 0x4b1a2c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_4b1a30:
    if (ctx->pc == 0x4B1A30u) {
        ctx->pc = 0x4B1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A2Cu;
        // 0x4b1a30: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A34u;
        goto label_4b1a34;
    }
    ctx->pc = 0x4B1A2Cu;
    {
        const bool branch_taken_0x4b1a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A2Cu;
        // 0x4b1a30: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a2c) {
            ctx->pc = 0x4B1A8Cu;
            goto label_4b1a8c;
        }
    }
    ctx->pc = 0x4B1A34u;
label_4b1a34:
    // 0x4b1a34: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b1a38:
    if (ctx->pc == 0x4B1A38u) {
        ctx->pc = 0x4B1A3Cu;
        goto label_4b1a3c;
    }
    ctx->pc = 0x4B1A34u;
    {
        const bool branch_taken_0x4b1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1a34) {
            ctx->pc = 0x4B1A48u;
            goto label_4b1a48;
        }
    }
    ctx->pc = 0x4B1A3Cu;
label_4b1a3c:
    // 0x4b1a3c: 0x0  nop
    ctx->pc = 0x4b1a3cu;
    // NOP
label_4b1a40:
    // 0x4b1a40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b1a44:
    // 0x4b1a44: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x4b1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_4b1a48:
    // 0x4b1a48: 0xc12cc70  jal         func_4B31C0
label_4b1a4c:
    if (ctx->pc == 0x4B1A4Cu) {
        ctx->pc = 0x4B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A48u;
        // 0x4b1a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A50u;
        goto label_4b1a50;
    }
    ctx->pc = 0x4B1A48u;
    SET_GPR_U32(ctx, 31, 0x4B1A50u);
    ctx->pc = 0x4B1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1A48u;
    // 0x4b1a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4B1A48u, 0x4B1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1A50u;
label_4b1a50:
    // 0x4b1a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b1a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1a54:
    // 0x4b1a54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1a58:
    // 0x4b1a58: 0x1222ffe7  beq         $s1, $v0, . + 4 + (-0x19 << 2)
label_4b1a5c:
    if (ctx->pc == 0x4B1A5Cu) {
        ctx->pc = 0x4B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A58u;
        // 0x4b1a5c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A60u;
        goto label_4b1a60;
    }
    ctx->pc = 0x4B1A58u;
    {
        const bool branch_taken_0x4b1a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A58u;
        // 0x4b1a5c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a58) {
            ctx->pc = 0x4B19F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b19f8;
        }
    }
    ctx->pc = 0x4B1A60u;
label_4b1a60:
    // 0x4b1a60: 0x2462c531  addiu       $v0, $v1, -0x3ACF
    ctx->pc = 0x4b1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
label_4b1a64:
    // 0x4b1a64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b1a68:
    // 0x4b1a68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b1a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b1a6c:
    // 0x4b1a6c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4b1a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4b1a70:
    // 0x4b1a70: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4b1a74:
    if (ctx->pc == 0x4B1A74u) {
        ctx->pc = 0x4B1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A70u;
        // 0x4b1a74: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A78u;
        goto label_4b1a78;
    }
    ctx->pc = 0x4B1A70u;
    {
        const bool branch_taken_0x4b1a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A70u;
        // 0x4b1a74: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a70) {
            ctx->pc = 0x4B1A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a40;
        }
    }
    ctx->pc = 0x4B1A78u;
label_4b1a78:
    // 0x4b1a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b1a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b1a7c:
    // 0x4b1a7c: 0xc12cc64  jal         func_4B3190
label_4b1a80:
    if (ctx->pc == 0x4B1A80u) {
        ctx->pc = 0x4B1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A7Cu;
        // 0x4b1a80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A84u;
        goto label_4b1a84;
    }
    ctx->pc = 0x4B1A7Cu;
    SET_GPR_U32(ctx, 31, 0x4B1A84u);
    ctx->pc = 0x4B1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1A7Cu;
    // 0x4b1a80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3190u, 0x4B1A7Cu, 0x4B1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1A84u;
label_4b1a84:
    // 0x4b1a84: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4b1a88:
    if (ctx->pc == 0x4B1A88u) {
        ctx->pc = 0x4B1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A84u;
        // 0x4b1a88: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A8Cu;
        goto label_4b1a8c;
    }
    ctx->pc = 0x4B1A84u;
    {
        const bool branch_taken_0x4b1a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A84u;
        // 0x4b1a88: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a84) {
            ctx->pc = 0x4B1A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a10;
        }
    }
    ctx->pc = 0x4B1A8Cu;
label_4b1a8c:
    // 0x4b1a8c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x4b1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4b1a90:
    // 0x4b1a90: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_4b1a94:
    if (ctx->pc == 0x4B1A94u) {
        ctx->pc = 0x4B1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A90u;
        // 0x4b1a94: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1A98u;
        goto label_4b1a98;
    }
    ctx->pc = 0x4B1A90u;
    {
        const bool branch_taken_0x4b1a90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A90u;
        // 0x4b1a94: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a90) {
            ctx->pc = 0x4B1AC8u;
            goto label_4b1ac8;
        }
    }
    ctx->pc = 0x4B1A98u;
label_4b1a98:
    // 0x4b1a98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b1a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1a9c:
    // 0x4b1a9c: 0x92f10000  lbu         $s1, 0x0($s7)
    ctx->pc = 0x4b1a9cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_4b1aa0:
    // 0x4b1aa0: 0x2e220079  sltiu       $v0, $s1, 0x79
    ctx->pc = 0x4b1aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_4b1aa4:
    // 0x4b1aa4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_4b1aa8:
    if (ctx->pc == 0x4B1AA8u) {
        ctx->pc = 0x4B1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AA4u;
        // 0x4b1aa8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1AACu;
        goto label_4b1aac;
    }
    ctx->pc = 0x4B1AA4u;
    {
        const bool branch_taken_0x4b1aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AA4u;
        // 0x4b1aa8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1aa4) {
            ctx->pc = 0x4B1CD4u;
            goto label_4b1cd4;
        }
    }
    ctx->pc = 0x4B1AACu;
label_4b1aac:
    // 0x4b1aac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b1ab0:
    // 0x4b1ab0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4b1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4b1ab4:
    // 0x4b1ab4: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x4b1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
label_4b1ab8:
    // 0x4b1ab8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b1abc:
    // 0x4b1abc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b1abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b1ac0:
    // 0x4b1ac0: 0x800008  jr          $a0
label_4b1ac4:
    if (ctx->pc == 0x4B1AC4u) {
        ctx->pc = 0x4B1AC8u;
        goto label_4b1ac8;
    }
    ctx->pc = 0x4B1AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B1AC8u: goto label_4b1ac8;
            case 0x4B1AF8u: goto label_4b1af8;
            case 0x4B1B08u: goto label_4b1b08;
            case 0x4B1B20u: goto label_4b1b20;
            case 0x4B1B38u: goto label_4b1b38;
            case 0x4B1B50u: goto label_4b1b50;
            case 0x4B1B78u: goto label_4b1b78;
            case 0x4B1B7Cu: goto label_4b1b7c;
            case 0x4B1B98u: goto label_4b1b98;
            case 0x4B1BB0u: goto label_4b1bb0;
            case 0x4B1BB4u: goto label_4b1bb4;
            case 0x4B1BD0u: goto label_4b1bd0;
            case 0x4B1BECu: goto label_4b1bec;
            case 0x4B1C0Cu: goto label_4b1c0c;
            case 0x4B1C14u: goto label_4b1c14;
            case 0x4B1C1Cu: goto label_4b1c1c;
            case 0x4B1C38u: goto label_4b1c38;
            case 0x4B1C44u: goto label_4b1c44;
            case 0x4B1C64u: goto label_4b1c64;
            case 0x4B1CC8u: goto label_4b1cc8;
            case 0x4B1CD4u: goto label_4b1cd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1AC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B1AC8u;
label_4b1ac8:
    // 0x4b1ac8: 0xc12cc70  jal         func_4B31C0
label_4b1acc:
    if (ctx->pc == 0x4B1ACCu) {
        ctx->pc = 0x4B1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AC8u;
        // 0x4b1acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1AD0u;
        goto label_4b1ad0;
    }
    ctx->pc = 0x4B1AC8u;
    SET_GPR_U32(ctx, 31, 0x4B1AD0u);
    ctx->pc = 0x4B1ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1AC8u;
    // 0x4b1acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4B1AC8u, 0x4B1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1AD0u;
label_4b1ad0:
    // 0x4b1ad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b1ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1ad4:
    // 0x4b1ad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1ad8:
    // 0x4b1ad8: 0x120202eb  beq         $s0, $v0, . + 4 + (0x2EB << 2)
label_4b1adc:
    if (ctx->pc == 0x4B1ADCu) {
        ctx->pc = 0x4B1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AD8u;
        // 0x4b1adc: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1AE0u;
        goto label_4b1ae0;
    }
    ctx->pc = 0x4B1AD8u;
    {
        const bool branch_taken_0x4b1ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AD8u;
        // 0x4b1adc: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ad8) {
            ctx->pc = 0x4B2688u;
            goto label_4b2688;
        }
    }
    ctx->pc = 0x4B1AE0u;
label_4b1ae0:
    // 0x4b1ae0: 0x1611ffc3  bne         $s0, $s1, . + 4 + (-0x3D << 2)
label_4b1ae4:
    if (ctx->pc == 0x4B1AE4u) {
        ctx->pc = 0x4B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AE0u;
        // 0x4b1ae4: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1AE8u;
        goto label_4b1ae8;
    }
    ctx->pc = 0x4B1AE0u;
    {
        const bool branch_taken_0x4b1ae0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AE0u;
        // 0x4b1ae4: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ae0) {
            ctx->pc = 0x4B19F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b19f0;
        }
    }
    ctx->pc = 0x4B1AE8u;
label_4b1ae8:
    // 0x4b1ae8: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1aec:
    // 0x4b1aec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b1aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b1af0:
    // 0x4b1af0: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_4b1af4:
    if (ctx->pc == 0x4B1AF4u) {
        ctx->pc = 0x4B1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AF0u;
        // 0x4b1af4: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1AF8u;
        goto label_4b1af8;
    }
    ctx->pc = 0x4B1AF0u;
    {
        const bool branch_taken_0x4b1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AF0u;
        // 0x4b1af4: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1af0) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1AF8u;
label_4b1af8:
    // 0x4b1af8: 0x166002e9  bnez        $s3, . + 4 + (0x2E9 << 2)
label_4b1afc:
    if (ctx->pc == 0x4B1AFCu) {
        ctx->pc = 0x4B1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AF8u;
        // 0x4b1afc: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B00u;
        goto label_4b1b00;
    }
    ctx->pc = 0x4B1AF8u;
    {
        const bool branch_taken_0x4b1af8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AF8u;
        // 0x4b1afc: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1af8) {
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B1B00u;
label_4b1b00:
    // 0x4b1b00: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_4b1b04:
    if (ctx->pc == 0x4B1B04u) {
        ctx->pc = 0x4B1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B00u;
        // 0x4b1b04: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B08u;
        goto label_4b1b08;
    }
    ctx->pc = 0x4B1B00u;
    {
        const bool branch_taken_0x4b1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B00u;
        // 0x4b1b04: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b00) {
            ctx->pc = 0x4B1AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1aa0;
        }
    }
    ctx->pc = 0x4B1B08u;
label_4b1b08:
    // 0x4b1b08: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x4b1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_4b1b0c:
    // 0x4b1b0c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4b1b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_4b1b10:
    // 0x4b1b10: 0x144002e3  bnez        $v0, . + 4 + (0x2E3 << 2)
label_4b1b14:
    if (ctx->pc == 0x4B1B14u) {
        ctx->pc = 0x4B1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B10u;
        // 0x4b1b14: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B18u;
        goto label_4b1b18;
    }
    ctx->pc = 0x4B1B10u;
    {
        const bool branch_taken_0x4b1b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B10u;
        // 0x4b1b14: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b10) {
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B1B18u;
label_4b1b18:
    // 0x4b1b18: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_4b1b1c:
    if (ctx->pc == 0x4B1B1Cu) {
        ctx->pc = 0x4B1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B18u;
        // 0x4b1b1c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B20u;
        goto label_4b1b20;
    }
    ctx->pc = 0x4B1B18u;
    {
        const bool branch_taken_0x4b1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B18u;
        // 0x4b1b1c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b18) {
            ctx->pc = 0x4B1AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1aa0;
        }
    }
    ctx->pc = 0x4B1B20u;
label_4b1b20:
    // 0x4b1b20: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x4b1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_4b1b24:
    // 0x4b1b24: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4b1b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_4b1b28:
    // 0x4b1b28: 0x144002dd  bnez        $v0, . + 4 + (0x2DD << 2)
label_4b1b2c:
    if (ctx->pc == 0x4B1B2Cu) {
        ctx->pc = 0x4B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B28u;
        // 0x4b1b2c: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B30u;
        goto label_4b1b30;
    }
    ctx->pc = 0x4B1B28u;
    {
        const bool branch_taken_0x4b1b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B28u;
        // 0x4b1b2c: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b28) {
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B1B30u;
label_4b1b30:
    // 0x4b1b30: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_4b1b34:
    if (ctx->pc == 0x4B1B34u) {
        ctx->pc = 0x4B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B30u;
        // 0x4b1b34: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B38u;
        goto label_4b1b38;
    }
    ctx->pc = 0x4B1B30u;
    {
        const bool branch_taken_0x4b1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B30u;
        // 0x4b1b34: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b30) {
            ctx->pc = 0x4B1AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1aa0;
        }
    }
    ctx->pc = 0x4B1B38u;
label_4b1b38:
    // 0x4b1b38: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x4b1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_4b1b3c:
    // 0x4b1b3c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4b1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_4b1b40:
    // 0x4b1b40: 0x144002d7  bnez        $v0, . + 4 + (0x2D7 << 2)
label_4b1b44:
    if (ctx->pc == 0x4B1B44u) {
        ctx->pc = 0x4B1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B40u;
        // 0x4b1b44: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B48u;
        goto label_4b1b48;
    }
    ctx->pc = 0x4B1B40u;
    {
        const bool branch_taken_0x4b1b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B40u;
        // 0x4b1b44: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b40) {
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B1B48u;
label_4b1b48:
    // 0x4b1b48: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_4b1b4c:
    if (ctx->pc == 0x4B1B4Cu) {
        ctx->pc = 0x4B1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B48u;
        // 0x4b1b4c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B50u;
        goto label_4b1b50;
    }
    ctx->pc = 0x4B1B48u;
    {
        const bool branch_taken_0x4b1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B48u;
        // 0x4b1b4c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b48) {
            ctx->pc = 0x4B1AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1aa0;
        }
    }
    ctx->pc = 0x4B1B50u;
label_4b1b50:
    // 0x4b1b50: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x4b1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_4b1b54:
    // 0x4b1b54: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4b1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_4b1b58:
    // 0x4b1b58: 0x144002d1  bnez        $v0, . + 4 + (0x2D1 << 2)
label_4b1b5c:
    if (ctx->pc == 0x4B1B5Cu) {
        ctx->pc = 0x4B1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B58u;
        // 0x4b1b5c: 0x1510b8  dsll        $v0, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B60u;
        goto label_4b1b60;
    }
    ctx->pc = 0x4B1B58u;
    {
        const bool branch_taken_0x4b1b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B58u;
        // 0x4b1b5c: 0x1510b8  dsll        $v0, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b58) {
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B1B60u;
label_4b1b60:
    // 0x4b1b60: 0x36730040  ori         $s3, $s3, 0x40
    ctx->pc = 0x4b1b60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)64);
label_4b1b64:
    // 0x4b1b64: 0x55102d  daddu       $v0, $v0, $s5
    ctx->pc = 0x4b1b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 21));
label_4b1b68:
    // 0x4b1b68: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x4b1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_4b1b6c:
    // 0x4b1b6c: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x4b1b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_4b1b70:
    // 0x4b1b70: 0x1000ffca  b           . + 4 + (-0x36 << 2)
label_4b1b74:
    if (ctx->pc == 0x4B1B74u) {
        ctx->pc = 0x4B1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B70u;
        // 0x4b1b74: 0x6455ffd0  daddiu      $s5, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B78u;
        goto label_4b1b78;
    }
    ctx->pc = 0x4B1B70u;
    {
        const bool branch_taken_0x4b1b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B70u;
        // 0x4b1b74: 0x6455ffd0  daddiu      $s5, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b70) {
            ctx->pc = 0x4B1A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a9c;
        }
    }
    ctx->pc = 0x4B1B78u;
label_4b1b78:
    // 0x4b1b78: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x4b1b78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_4b1b7c:
    // 0x4b1b7c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x4b1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_4b1b80:
    // 0x4b1b80: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1b84:
    // 0x4b1b84: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x4b1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
label_4b1b88:
    // 0x4b1b88: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x4b1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_4b1b8c:
    // 0x4b1b8c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b1b90:
    // 0x4b1b90: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4b1b94:
    if (ctx->pc == 0x4B1B94u) {
        ctx->pc = 0x4B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B90u;
        // 0x4b1b94: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1B98u;
        goto label_4b1b98;
    }
    ctx->pc = 0x4B1B90u;
    {
        const bool branch_taken_0x4b1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B90u;
        // 0x4b1b94: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b90) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1B98u;
label_4b1b98:
    // 0x4b1b98: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x4b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_4b1b9c:
    // 0x4b1b9c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1ba0:
    // 0x4b1ba0: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x4b1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
label_4b1ba4:
    // 0x4b1ba4: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x4b1ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_4b1ba8:
    // 0x4b1ba8: 0x10000056  b           . + 4 + (0x56 << 2)
label_4b1bac:
    if (ctx->pc == 0x4B1BACu) {
        ctx->pc = 0x4B1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BA8u;
        // 0x4b1bac: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1BB0u;
        goto label_4b1bb0;
    }
    ctx->pc = 0x4B1BA8u;
    {
        const bool branch_taken_0x4b1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BA8u;
        // 0x4b1bac: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ba8) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1BB0u;
label_4b1bb0:
    // 0x4b1bb0: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x4b1bb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_4b1bb4:
    // 0x4b1bb4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x4b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_4b1bb8:
    // 0x4b1bb8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4b1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4b1bbc:
    // 0x4b1bbc: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x4b1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_4b1bc0:
    // 0x4b1bc0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1bc4:
    // 0x4b1bc4: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x4b1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_4b1bc8:
    // 0x4b1bc8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_4b1bcc:
    if (ctx->pc == 0x4B1BCCu) {
        ctx->pc = 0x4B1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BC8u;
        // 0x4b1bcc: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1BD0u;
        goto label_4b1bd0;
    }
    ctx->pc = 0x4B1BC8u;
    {
        const bool branch_taken_0x4b1bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BC8u;
        // 0x4b1bcc: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1bc8) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1BD0u;
label_4b1bd0:
    // 0x4b1bd0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x4b1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_4b1bd4:
    // 0x4b1bd4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4b1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b1bd8:
    // 0x4b1bd8: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x4b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_4b1bdc:
    // 0x4b1bdc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1be0:
    // 0x4b1be0: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x4b1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_4b1be4:
    // 0x4b1be4: 0x10000047  b           . + 4 + (0x47 << 2)
label_4b1be8:
    if (ctx->pc == 0x4B1BE8u) {
        ctx->pc = 0x4B1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BE4u;
        // 0x4b1be8: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1BECu;
        goto label_4b1bec;
    }
    ctx->pc = 0x4B1BE4u;
    {
        const bool branch_taken_0x4b1be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BE4u;
        // 0x4b1be8: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1be4) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1BECu;
label_4b1bec:
    // 0x4b1bec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x4b1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_4b1bf0:
    // 0x4b1bf0: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x4b1bf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_4b1bf4:
    // 0x4b1bf4: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x4b1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_4b1bf8:
    // 0x4b1bf8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1bfc:
    // 0x4b1bfc: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x4b1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_4b1c00:
    // 0x4b1c00: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4b1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4b1c04:
    // 0x4b1c04: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4b1c08:
    if (ctx->pc == 0x4B1C08u) {
        ctx->pc = 0x4B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C04u;
        // 0x4b1c08: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C0Cu;
        goto label_4b1c0c;
    }
    ctx->pc = 0x4B1C04u;
    {
        const bool branch_taken_0x4b1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C04u;
        // 0x4b1c08: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c04) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1C0Cu;
label_4b1c0c:
    // 0x4b1c0c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4b1c10:
    if (ctx->pc == 0x4B1C10u) {
        ctx->pc = 0x4B1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C0Cu;
        // 0x4b1c10: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C14u;
        goto label_4b1c14;
    }
    ctx->pc = 0x4B1C0Cu;
    {
        const bool branch_taken_0x4b1c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C0Cu;
        // 0x4b1c10: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c0c) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1C14u;
label_4b1c14:
    // 0x4b1c14: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4b1c18:
    if (ctx->pc == 0x4B1C18u) {
        ctx->pc = 0x4B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C14u;
        // 0x4b1c18: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C1Cu;
        goto label_4b1c1c;
    }
    ctx->pc = 0x4B1C14u;
    {
        const bool branch_taken_0x4b1c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C14u;
        // 0x4b1c18: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c14) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1C1Cu;
label_4b1c1c:
    // 0x4b1c1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4b1c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b1c20:
    // 0x4b1c20: 0xc12c9c4  jal         func_4B2710
label_4b1c24:
    if (ctx->pc == 0x4B1C24u) {
        ctx->pc = 0x4B1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C20u;
        // 0x4b1c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C28u;
        goto label_4b1c28;
    }
    ctx->pc = 0x4B1C20u;
    SET_GPR_U32(ctx, 31, 0x4B1C28u);
    ctx->pc = 0x4B1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1C20u;
    // 0x4b1c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2710u, 0x4B1C20u, 0x4B1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1C28u;
label_4b1c28:
    // 0x4b1c28: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x4b1c28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_4b1c2c:
    // 0x4b1c2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b1c2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1c30:
    // 0x4b1c30: 0x10000034  b           . + 4 + (0x34 << 2)
label_4b1c34:
    if (ctx->pc == 0x4B1C34u) {
        ctx->pc = 0x4B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C30u;
        // 0x4b1c34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C38u;
        goto label_4b1c38;
    }
    ctx->pc = 0x4B1C30u;
    {
        const bool branch_taken_0x4b1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C30u;
        // 0x4b1c34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c30) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1C38u;
label_4b1c38:
    // 0x4b1c38: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x4b1c38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_4b1c3c:
    // 0x4b1c3c: 0x10000031  b           . + 4 + (0x31 << 2)
label_4b1c40:
    if (ctx->pc == 0x4B1C40u) {
        ctx->pc = 0x4B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C3Cu;
        // 0x4b1c40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C44u;
        goto label_4b1c44;
    }
    ctx->pc = 0x4B1C3Cu;
    {
        const bool branch_taken_0x4b1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C3Cu;
        // 0x4b1c40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c3c) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1C44u;
label_4b1c44:
    // 0x4b1c44: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x4b1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_4b1c48:
    // 0x4b1c48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4b1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4b1c4c:
    // 0x4b1c4c: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x4b1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_4b1c50:
    // 0x4b1c50: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x4b1c50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_4b1c54:
    // 0x4b1c54: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x4b1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_4b1c58:
    // 0x4b1c58: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1c5c:
    // 0x4b1c5c: 0x10000029  b           . + 4 + (0x29 << 2)
label_4b1c60:
    if (ctx->pc == 0x4B1C60u) {
        ctx->pc = 0x4B1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C5Cu;
        // 0x4b1c60: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C64u;
        goto label_4b1c64;
    }
    ctx->pc = 0x4B1C5Cu;
    {
        const bool branch_taken_0x4b1c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C5Cu;
        // 0x4b1c60: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c5c) {
            ctx->pc = 0x4B1D04u;
            goto label_4b1d04;
        }
    }
    ctx->pc = 0x4B1C64u;
label_4b1c64:
    // 0x4b1c64: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x4b1c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4b1c68:
    // 0x4b1c68: 0x5440ff68  bnel        $v0, $zero, . + 4 + (-0x98 << 2)
label_4b1c6c:
    if (ctx->pc == 0x4B1C6Cu) {
        ctx->pc = 0x4B1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C68u;
        // 0x4b1c6c: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C70u;
        goto label_4b1c70;
    }
    ctx->pc = 0x4B1C68u;
    {
        const bool branch_taken_0x4b1c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c68) {
            ctx->pc = 0x4B1C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1C68u;
            // 0x4b1c6c: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1C70u;
label_4b1c70:
    // 0x4b1c70: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x4b1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_4b1c74:
    // 0x4b1c74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b1c78:
    if (ctx->pc == 0x4B1C78u) {
        ctx->pc = 0x4B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C74u;
        // 0x4b1c78: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C7Cu;
        goto label_4b1c7c;
    }
    ctx->pc = 0x4B1C74u;
    {
        const bool branch_taken_0x4b1c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C74u;
        // 0x4b1c78: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c74) {
            ctx->pc = 0x4B1C90u;
            goto label_4b1c90;
        }
    }
    ctx->pc = 0x4B1C7Cu;
label_4b1c7c:
    // 0x4b1c7c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b1c7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b1c80:
    // 0x4b1c80: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b1c84:
    // 0x4b1c84: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1c88:
    // 0x4b1c88: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
label_4b1c8c:
    if (ctx->pc == 0x4B1C8Cu) {
        ctx->pc = 0x4B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C88u;
        // 0x4b1c8c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C90u;
        goto label_4b1c90;
    }
    ctx->pc = 0x4B1C88u;
    {
        const bool branch_taken_0x4b1c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C88u;
        // 0x4b1c8c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c88) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1C90u;
label_4b1c90:
    // 0x4b1c90: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x4b1c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_4b1c94:
    // 0x4b1c94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b1c98:
    if (ctx->pc == 0x4B1C98u) {
        ctx->pc = 0x4B1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C94u;
        // 0x4b1c98: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1C9Cu;
        goto label_4b1c9c;
    }
    ctx->pc = 0x4B1C94u;
    {
        const bool branch_taken_0x4b1c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C94u;
        // 0x4b1c98: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c94) {
            ctx->pc = 0x4B1CB0u;
            goto label_4b1cb0;
        }
    }
    ctx->pc = 0x4B1C9Cu;
label_4b1c9c:
    // 0x4b1c9c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b1c9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b1ca0:
    // 0x4b1ca0: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b1ca4:
    // 0x4b1ca4: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1ca8:
    // 0x4b1ca8: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_4b1cac:
    if (ctx->pc == 0x4B1CACu) {
        ctx->pc = 0x4B1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CA8u;
        // 0x4b1cac: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1CB0u;
        goto label_4b1cb0;
    }
    ctx->pc = 0x4B1CA8u;
    {
        const bool branch_taken_0x4b1ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CA8u;
        // 0x4b1cac: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ca8) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1CB0u;
label_4b1cb0:
    // 0x4b1cb0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b1cb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b1cb4:
    // 0x4b1cb4: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x4b1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b1cb8:
    // 0x4b1cb8: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b1cbc:
    // 0x4b1cbc: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1cc0:
    // 0x4b1cc0: 0x1000ff52  b           . + 4 + (-0xAE << 2)
label_4b1cc4:
    if (ctx->pc == 0x4B1CC4u) {
        ctx->pc = 0x4B1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CC0u;
        // 0x4b1cc4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1CC8u;
        goto label_4b1cc8;
    }
    ctx->pc = 0x4B1CC0u;
    {
        const bool branch_taken_0x4b1cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CC0u;
        // 0x4b1cc4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1cc0) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1CC8u;
label_4b1cc8:
    // 0x4b1cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1ccc:
    // 0x4b1ccc: 0x1000027a  b           . + 4 + (0x27A << 2)
label_4b1cd0:
    if (ctx->pc == 0x4B1CD0u) {
        ctx->pc = 0x4B1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CCCu;
        // 0x4b1cd0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1CD4u;
        goto label_4b1cd4;
    }
    ctx->pc = 0x4B1CCCu;
    {
        const bool branch_taken_0x4b1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CCCu;
        // 0x4b1cd0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ccc) {
            ctx->pc = 0x4B26B8u;
            goto label_4b26b8;
        }
    }
    ctx->pc = 0x4B1CD4u;
label_4b1cd4:
    // 0x4b1cd4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x4b1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_4b1cd8:
    // 0x4b1cd8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4b1cdc:
    // 0x4b1cdc: 0x24849a18  addiu       $a0, $a0, -0x65E8
    ctx->pc = 0x4b1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941208));
label_4b1ce0:
    // 0x4b1ce0: 0x2462c531  addiu       $v0, $v1, -0x3ACF
    ctx->pc = 0x4b1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
label_4b1ce4:
    // 0x4b1ce4: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x4b1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_4b1ce8:
    // 0x4b1ce8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b1cec:
    // 0x4b1cec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4b1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b1cf0:
    // 0x4b1cf0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4b1cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1cf4:
    // 0x4b1cf4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b1cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b1cf8:
    // 0x4b1cf8: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x4b1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_4b1cfc:
    // 0x4b1cfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b1cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4b1d00:
    // 0x4b1d00: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x4b1d00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_4b1d04:
    // 0x4b1d04: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1d08:
    // 0x4b1d08: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4b1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b1d0c:
    // 0x4b1d0c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4b1d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b1d10:
    // 0x4b1d10: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4b1d14:
    if (ctx->pc == 0x4B1D14u) {
        ctx->pc = 0x4B1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D10u;
        // 0x4b1d14: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D18u;
        goto label_4b1d18;
    }
    ctx->pc = 0x4B1D10u;
    {
        const bool branch_taken_0x4b1d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1d10) {
            ctx->pc = 0x4B1D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1D10u;
            // 0x4b1d14: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1D34u;
            goto label_4b1d34;
        }
    }
    ctx->pc = 0x4B1D18u;
label_4b1d18:
    // 0x4b1d18: 0xc12c326  jal         func_4B0C98
label_4b1d1c:
    if (ctx->pc == 0x4B1D1Cu) {
        ctx->pc = 0x4B1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D18u;
        // 0x4b1d1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D20u;
        goto label_4b1d20;
    }
    ctx->pc = 0x4B1D18u;
    SET_GPR_U32(ctx, 31, 0x4B1D20u);
    ctx->pc = 0x4B1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1D18u;
    // 0x4b1d1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B1D18u, 0x4B1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D20u;
label_4b1d20:
    // 0x4b1d20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1d24:
    // 0x4b1d24: 0x50430257  beql        $v0, $v1, . + 4 + (0x257 << 2)
label_4b1d28:
    if (ctx->pc == 0x4B1D28u) {
        ctx->pc = 0x4B1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D24u;
        // 0x4b1d28: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D2Cu;
        goto label_4b1d2c;
    }
    ctx->pc = 0x4B1D24u;
    {
        const bool branch_taken_0x4b1d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b1d24) {
            ctx->pc = 0x4B1D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1D24u;
            // 0x4b1d28: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2684u;
            goto label_4b2684;
        }
    }
    ctx->pc = 0x4B1D2Cu;
label_4b1d2c:
    // 0x4b1d2c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1d30:
    // 0x4b1d30: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4b1d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1d34:
    // 0x4b1d34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1d38:
    // 0x4b1d38: 0x10620251  beq         $v1, $v0, . + 4 + (0x251 << 2)
label_4b1d3c:
    if (ctx->pc == 0x4B1D3Cu) {
        ctx->pc = 0x4B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D38u;
        // 0x4b1d3c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D40u;
        goto label_4b1d40;
    }
    ctx->pc = 0x4B1D38u;
    {
        const bool branch_taken_0x4b1d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D38u;
        // 0x4b1d3c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1d38) {
            ctx->pc = 0x4B2680u;
            goto label_4b2680;
        }
    }
    ctx->pc = 0x4B1D40u;
label_4b1d40:
    // 0x4b1d40: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_4b1d44:
    if (ctx->pc == 0x4B1D44u) {
        ctx->pc = 0x4B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D40u;
        // 0x4b1d44: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D48u;
        goto label_4b1d48;
    }
    ctx->pc = 0x4B1D40u;
    {
        const bool branch_taken_0x4b1d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D40u;
        // 0x4b1d44: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1d40) {
            ctx->pc = 0x4B1DC4u;
            goto label_4b1dc4;
        }
    }
    ctx->pc = 0x4B1D48u;
label_4b1d48:
    // 0x4b1d48: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b1d4c:
    // 0x4b1d4c: 0x2444c531  addiu       $a0, $v0, -0x3ACF
    ctx->pc = 0x4b1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_4b1d50:
    // 0x4b1d50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1d54:
    // 0x4b1d54: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b1d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b1d58:
    // 0x4b1d58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4b1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4b1d5c:
    // 0x4b1d5c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4b1d60:
    if (ctx->pc == 0x4B1D60u) {
        ctx->pc = 0x4B1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D5Cu;
        // 0x4b1d60: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D64u;
        goto label_4b1d64;
    }
    ctx->pc = 0x4B1D5Cu;
    {
        const bool branch_taken_0x4b1d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D5Cu;
        // 0x4b1d60: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1d5c) {
            ctx->pc = 0x4B1DC4u;
            goto label_4b1dc4;
        }
    }
    ctx->pc = 0x4B1D64u;
label_4b1d64:
    // 0x4b1d64: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4b1d64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b1d68:
    // 0x4b1d68: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4b1d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1d6c:
    // 0x4b1d6c: 0x0  nop
    ctx->pc = 0x4b1d6cu;
    // NOP
label_4b1d70:
    // 0x4b1d70: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4b1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4b1d74:
    // 0x4b1d74: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4b1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b1d78:
    // 0x4b1d78: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b1d7c:
    // 0x4b1d7c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4b1d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b1d80:
    // 0x4b1d80: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x4b1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b1d84:
    // 0x4b1d84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b1d88:
    // 0x4b1d88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4b1d8c:
    if (ctx->pc == 0x4B1D8Cu) {
        ctx->pc = 0x4B1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D88u;
        // 0x4b1d8c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D90u;
        goto label_4b1d90;
    }
    ctx->pc = 0x4B1D88u;
    {
        const bool branch_taken_0x4b1d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D88u;
        // 0x4b1d8c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1d88) {
            ctx->pc = 0x4B1DA0u;
            goto label_4b1da0;
        }
    }
    ctx->pc = 0x4B1D90u;
label_4b1d90:
    // 0x4b1d90: 0xc12c326  jal         func_4B0C98
label_4b1d94:
    if (ctx->pc == 0x4B1D94u) {
        ctx->pc = 0x4B1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D90u;
        // 0x4b1d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1D98u;
        goto label_4b1d98;
    }
    ctx->pc = 0x4B1D90u;
    SET_GPR_U32(ctx, 31, 0x4B1D98u);
    ctx->pc = 0x4B1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1D90u;
    // 0x4b1d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B1D90u, 0x4B1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D98u;
label_4b1d98:
    // 0x4b1d98: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
label_4b1d9c:
    if (ctx->pc == 0x4B1D9Cu) {
        ctx->pc = 0x4B1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D98u;
        // 0x4b1d9c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1DA0u;
        goto label_4b1da0;
    }
    ctx->pc = 0x4B1D98u;
    {
        const bool branch_taken_0x4b1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x4B1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D98u;
        // 0x4b1d9c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1d98) {
            ctx->pc = 0x4B1DA8u;
            goto label_4b1da8;
        }
    }
    ctx->pc = 0x4B1DA0u;
label_4b1da0:
    // 0x4b1da0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1da4:
    // 0x4b1da4: 0x90b00000  lbu         $s0, 0x0($a1)
    ctx->pc = 0x4b1da4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1da8:
    // 0x4b1da8: 0x12120235  beq         $s0, $s2, . + 4 + (0x235 << 2)
label_4b1dac:
    if (ctx->pc == 0x4B1DACu) {
        ctx->pc = 0x4B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DA8u;
        // 0x4b1dac: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1DB0u;
        goto label_4b1db0;
    }
    ctx->pc = 0x4B1DA8u;
    {
        const bool branch_taken_0x4b1da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DA8u;
        // 0x4b1dac: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1da8) {
            ctx->pc = 0x4B2680u;
            goto label_4b2680;
        }
    }
    ctx->pc = 0x4B1DB0u;
label_4b1db0:
    // 0x4b1db0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b1db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b1db4:
    // 0x4b1db4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4b1db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4b1db8:
    // 0x4b1db8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_4b1dbc:
    if (ctx->pc == 0x4B1DBCu) {
        ctx->pc = 0x4B1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DB8u;
        // 0x4b1dbc: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1DC0u;
        goto label_4b1dc0;
    }
    ctx->pc = 0x4B1DB8u;
    {
        const bool branch_taken_0x4b1db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1db8) {
            ctx->pc = 0x4B1DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1DB8u;
            // 0x4b1dbc: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1d70;
        }
    }
    ctx->pc = 0x4B1DC0u;
label_4b1dc0:
    // 0x4b1dc0: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x4b1dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4b1dc4:
    // 0x4b1dc4: 0x1040ff10  beqz        $v0, . + 4 + (-0xF0 << 2)
label_4b1dc8:
    if (ctx->pc == 0x4B1DC8u) {
        ctx->pc = 0x4B1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DC4u;
        // 0x4b1dc8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1DCCu;
        goto label_4b1dcc;
    }
    ctx->pc = 0x4B1DC4u;
    {
        const bool branch_taken_0x4b1dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DC4u;
        // 0x4b1dc8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1dc4) {
            ctx->pc = 0x4B1A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a08;
        }
    }
    ctx->pc = 0x4B1DCCu;
label_4b1dcc:
    // 0x4b1dcc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4b1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4b1dd0:
    // 0x4b1dd0: 0x244208b0  addiu       $v0, $v0, 0x8B0
    ctx->pc = 0x4b1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
label_4b1dd4:
    // 0x4b1dd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b1dd8:
    // 0x4b1dd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b1ddc:
    // 0x4b1ddc: 0x800008  jr          $a0
label_4b1de0:
    if (ctx->pc == 0x4B1DE0u) {
        ctx->pc = 0x4B1DE4u;
        goto label_4b1de4;
    }
    ctx->pc = 0x4B1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B1DE4u: goto label_4b1de4;
            case 0x4B1EBCu: goto label_4b1ebc;
            case 0x4B2050u: goto label_4b2050;
            case 0x4B2238u: goto label_4b2238;
            case 0x4B2494u: goto label_4b2494;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1DDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B1DE4u;
label_4b1de4:
    // 0x4b1de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1de8:
    // 0x4b1de8: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x4b1de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4b1dec:
    // 0x4b1dec: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_4b1df0:
    if (ctx->pc == 0x4B1DF0u) {
        ctx->pc = 0x4B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DECu;
        // 0x4b1df0: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1DF4u;
        goto label_4b1df4;
    }
    ctx->pc = 0x4B1DECu;
    {
        const bool branch_taken_0x4b1dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DECu;
        // 0x4b1df0: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1dec) {
            ctx->pc = 0x4B1E6Cu;
            goto label_4b1e6c;
        }
    }
    ctx->pc = 0x4B1DF4u;
label_4b1df4:
    // 0x4b1df4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b1df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1df8:
    // 0x4b1df8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4b1df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1dfc:
    // 0x4b1dfc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4b1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b1e00:
    // 0x4b1e00: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x4b1e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_4b1e04:
    // 0x4b1e04: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b1e04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4b1e08:
    // 0x4b1e08: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1e0c:
    // 0x4b1e0c: 0x658023  subu        $s0, $v1, $a1
    ctx->pc = 0x4b1e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b1e10:
    // 0x4b1e10: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x4b1e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4b1e14:
    // 0x4b1e14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4b1e18:
    if (ctx->pc == 0x4B1E18u) {
        ctx->pc = 0x4B1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E14u;
        // 0x4b1e18: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E1Cu;
        goto label_4b1e1c;
    }
    ctx->pc = 0x4B1E14u;
    {
        const bool branch_taken_0x4b1e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E14u;
        // 0x4b1e18: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e14) {
            ctx->pc = 0x4B1E4Cu;
            goto label_4b1e4c;
        }
    }
    ctx->pc = 0x4B1E1Cu;
label_4b1e1c:
    // 0x4b1e1c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x4b1e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4b1e20:
    // 0x4b1e20: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b1e24:
    // 0x4b1e24: 0x2b0a82f  dsubu       $s5, $s5, $s0
    ctx->pc = 0x4b1e24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 16));
label_4b1e28:
    // 0x4b1e28: 0xc12c326  jal         func_4B0C98
label_4b1e2c:
    if (ctx->pc == 0x4B1E2Cu) {
        ctx->pc = 0x4B1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E28u;
        // 0x4b1e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E30u;
        goto label_4b1e30;
    }
    ctx->pc = 0x4B1E28u;
    SET_GPR_U32(ctx, 31, 0x4B1E30u);
    ctx->pc = 0x4B1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E28u;
    // 0x4b1e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B1E28u, 0x4B1E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E30u;
label_4b1e30:
    // 0x4b1e30: 0x5452fff3  bnel        $v0, $s2, . + 4 + (-0xD << 2)
label_4b1e34:
    if (ctx->pc == 0x4B1E34u) {
        ctx->pc = 0x4B1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E30u;
        // 0x4b1e34: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E38u;
        goto label_4b1e38;
    }
    ctx->pc = 0x4B1E30u;
    {
        const bool branch_taken_0x4b1e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4b1e30) {
            ctx->pc = 0x4B1E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1E30u;
            // 0x4b1e34: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1e00;
        }
    }
    ctx->pc = 0x4B1E38u;
label_4b1e38:
    // 0x4b1e38: 0x12200211  beqz        $s1, . + 4 + (0x211 << 2)
label_4b1e3c:
    if (ctx->pc == 0x4B1E3Cu) {
        ctx->pc = 0x4B1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E38u;
        // 0x4b1e3c: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E40u;
        goto label_4b1e40;
    }
    ctx->pc = 0x4B1E38u;
    {
        const bool branch_taken_0x4b1e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E38u;
        // 0x4b1e3c: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e38) {
            ctx->pc = 0x4B2680u;
            goto label_4b2680;
        }
    }
    ctx->pc = 0x4B1E40u;
label_4b1e40:
    // 0x4b1e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b1e44:
    // 0x4b1e44: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b1e48:
    if (ctx->pc == 0x4B1E48u) {
        ctx->pc = 0x4B1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E44u;
        // 0x4b1e48: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E4Cu;
        goto label_4b1e4c;
    }
    ctx->pc = 0x4B1E44u;
    {
        const bool branch_taken_0x4b1e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E44u;
        // 0x4b1e48: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e44) {
            ctx->pc = 0x4B1E58u;
            goto label_4b1e58;
        }
    }
    ctx->pc = 0x4B1E4Cu;
label_4b1e4c:
    // 0x4b1e4c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x4b1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4b1e50:
    // 0x4b1e50: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x4b1e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_4b1e54:
    // 0x4b1e54: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b1e58:
    // 0x4b1e58: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x4b1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b1e5c:
    // 0x4b1e5c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1e60:
    // 0x4b1e60: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4b1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4b1e64:
    // 0x4b1e64: 0x1000fee9  b           . + 4 + (-0x117 << 2)
label_4b1e68:
    if (ctx->pc == 0x4B1E68u) {
        ctx->pc = 0x4B1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E64u;
        // 0x4b1e68: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E6Cu;
        goto label_4b1e6c;
    }
    ctx->pc = 0x4B1E64u;
    {
        const bool branch_taken_0x4b1e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E64u;
        // 0x4b1e68: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e64) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1E6Cu;
label_4b1e6c:
    // 0x4b1e6c: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x4b1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4b1e70:
    // 0x4b1e70: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b1e70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b1e74:
    // 0x4b1e74: 0x8ec5fff8  lw          $a1, -0x8($s6)
    ctx->pc = 0x4b1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b1e78:
    // 0x4b1e78: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x4b1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4b1e7c:
    // 0x4b1e7c: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x4b1e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_4b1e80:
    // 0x4b1e80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b1e80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4b1e84:
    // 0x4b1e84: 0x40f809  jalr        $v0
label_4b1e88:
    if (ctx->pc == 0x4B1E88u) {
        ctx->pc = 0x4B1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E84u;
        // 0x4b1e88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1E8Cu;
        goto label_4b1e8c;
    }
    ctx->pc = 0x4B1E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B1E8Cu);
        ctx->pc = 0x4B1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E84u;
        // 0x4b1e88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1E84u, 0x4B1E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B1E8Cu;
label_4b1e8c:
    // 0x4b1e8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b1e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1e90:
    // 0x4b1e90: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x4b1e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_4b1e94:
    // 0x4b1e94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b1e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4b1e98:
    // 0x4b1e98: 0x145501f9  bne         $v0, $s5, . + 4 + (0x1F9 << 2)
label_4b1e9c:
    if (ctx->pc == 0x4B1E9Cu) {
        ctx->pc = 0x4B1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E98u;
        // 0x4b1e9c: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1EA0u;
        goto label_4b1ea0;
    }
    ctx->pc = 0x4B1E98u;
    {
        const bool branch_taken_0x4b1e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x4B1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E98u;
        // 0x4b1e9c: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e98) {
            ctx->pc = 0x4B2680u;
            goto label_4b2680;
        }
    }
    ctx->pc = 0x4B1EA0u;
label_4b1ea0:
    // 0x4b1ea0: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b1ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b1ea4:
    // 0x4b1ea4: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x4b1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b1ea8:
    // 0x4b1ea8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4b1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4b1eac:
    // 0x4b1eac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b1eb0:
    // 0x4b1eb0: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x4b1eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_4b1eb4:
    // 0x4b1eb4: 0x1000fed5  b           . + 4 + (-0x12B << 2)
label_4b1eb8:
    if (ctx->pc == 0x4B1EB8u) {
        ctx->pc = 0x4B1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EB4u;
        // 0x4b1eb8: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1EBCu;
        goto label_4b1ebc;
    }
    ctx->pc = 0x4B1EB4u;
    {
        const bool branch_taken_0x4b1eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EB4u;
        // 0x4b1eb8: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1eb4) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B1EBCu;
label_4b1ebc:
    // 0x4b1ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1ec0:
    // 0x4b1ec0: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x4b1ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4b1ec4:
    // 0x4b1ec4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_4b1ec8:
    if (ctx->pc == 0x4B1EC8u) {
        ctx->pc = 0x4B1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EC4u;
        // 0x4b1ec8: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1ECCu;
        goto label_4b1ecc;
    }
    ctx->pc = 0x4B1EC4u;
    {
        const bool branch_taken_0x4b1ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EC4u;
        // 0x4b1ec8: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ec4) {
            ctx->pc = 0x4B1F78u;
            goto label_4b1f78;
        }
    }
    ctx->pc = 0x4B1ECCu;
label_4b1ecc:
    // 0x4b1ecc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1ed0:
    // 0x4b1ed0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4b1ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1ed4:
    // 0x4b1ed4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4b1ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_4b1ed8:
    // 0x4b1ed8: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x4b1ed8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b1edc:
    // 0x4b1edc: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_4b1ee0:
    if (ctx->pc == 0x4B1EE0u) {
        ctx->pc = 0x4B1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EDCu;
        // 0x4b1ee0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1EE4u;
        goto label_4b1ee4;
    }
    ctx->pc = 0x4B1EDCu;
    {
        const bool branch_taken_0x4b1edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EDCu;
        // 0x4b1ee0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1edc) {
            ctx->pc = 0x4B1F68u;
            goto label_4b1f68;
        }
    }
    ctx->pc = 0x4B1EE4u;
label_4b1ee4:
    // 0x4b1ee4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4b1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4b1ee8:
    // 0x4b1ee8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b1ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1eec:
    // 0x4b1eec: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b1eecu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b1ef0:
    // 0x4b1ef0: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_4b1ef4:
    if (ctx->pc == 0x4B1EF4u) {
        ctx->pc = 0x4B1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EF0u;
        // 0x4b1ef4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1EF8u;
        goto label_4b1ef8;
    }
    ctx->pc = 0x4B1EF0u;
    {
        const bool branch_taken_0x4b1ef0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EF0u;
        // 0x4b1ef4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ef0) {
            ctx->pc = 0x4B1F68u;
            goto label_4b1f68;
        }
    }
    ctx->pc = 0x4B1EF8u;
label_4b1ef8:
    // 0x4b1ef8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x4b1ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1efc:
    // 0x4b1efc: 0x0  nop
    ctx->pc = 0x4b1efcu;
    // NOP
label_4b1f00:
    // 0x4b1f00: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1f04:
    // 0x4b1f04: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4b1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b1f08:
    // 0x4b1f08: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4b1f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b1f0c:
    // 0x4b1f0c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4b1f10:
    if (ctx->pc == 0x4B1F10u) {
        ctx->pc = 0x4B1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F0Cu;
        // 0x4b1f10: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F14u;
        goto label_4b1f14;
    }
    ctx->pc = 0x4B1F0Cu;
    {
        const bool branch_taken_0x4b1f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1f0c) {
            ctx->pc = 0x4B1F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1F0Cu;
            // 0x4b1f10: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1F2Cu;
            goto label_4b1f2c;
        }
    }
    ctx->pc = 0x4B1F14u;
label_4b1f14:
    // 0x4b1f14: 0xc12c326  jal         func_4B0C98
label_4b1f18:
    if (ctx->pc == 0x4B1F18u) {
        ctx->pc = 0x4B1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F14u;
        // 0x4b1f18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F1Cu;
        goto label_4b1f1c;
    }
    ctx->pc = 0x4B1F14u;
    SET_GPR_U32(ctx, 31, 0x4B1F1Cu);
    ctx->pc = 0x4B1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1F14u;
    // 0x4b1f18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B1F14u, 0x4B1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1F1Cu;
label_4b1f1c:
    // 0x4b1f1c: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_4b1f20:
    if (ctx->pc == 0x4B1F20u) {
        ctx->pc = 0x4B1F24u;
        goto label_4b1f24;
    }
    ctx->pc = 0x4B1F1Cu;
    {
        const bool branch_taken_0x4b1f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x4b1f1c) {
            ctx->pc = 0x4B1F34u;
            goto label_4b1f34;
        }
    }
    ctx->pc = 0x4B1F24u;
label_4b1f24:
    // 0x4b1f24: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1f28:
    // 0x4b1f28: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4b1f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1f2c:
    // 0x4b1f2c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_4b1f30:
    if (ctx->pc == 0x4B1F30u) {
        ctx->pc = 0x4B1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F2Cu;
        // 0x4b1f30: 0x3a21021  addu        $v0, $sp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F34u;
        goto label_4b1f34;
    }
    ctx->pc = 0x4B1F2Cu;
    {
        const bool branch_taken_0x4b1f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4b1f2c) {
            ctx->pc = 0x4B1F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1F2Cu;
            // 0x4b1f30: 0x3a21021  addu        $v0, $sp, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1F48u;
            goto label_4b1f48;
        }
    }
    ctx->pc = 0x4B1F34u;
label_4b1f34:
    // 0x4b1f34: 0x120001d2  beqz        $s0, . + 4 + (0x1D2 << 2)
label_4b1f38:
    if (ctx->pc == 0x4B1F38u) {
        ctx->pc = 0x4B1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F34u;
        // 0x4b1f38: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F3Cu;
        goto label_4b1f3c;
    }
    ctx->pc = 0x4B1F34u;
    {
        const bool branch_taken_0x4b1f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F34u;
        // 0x4b1f38: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f34) {
            ctx->pc = 0x4B2680u;
            goto label_4b2680;
        }
    }
    ctx->pc = 0x4B1F3Cu;
label_4b1f3c:
    // 0x4b1f3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b1f40:
    // 0x4b1f40: 0x10000009  b           . + 4 + (0x9 << 2)
label_4b1f44:
    if (ctx->pc == 0x4B1F44u) {
        ctx->pc = 0x4B1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F40u;
        // 0x4b1f44: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F48u;
        goto label_4b1f48;
    }
    ctx->pc = 0x4B1F40u;
    {
        const bool branch_taken_0x4b1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F40u;
        // 0x4b1f44: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f40) {
            ctx->pc = 0x4B1F68u;
            goto label_4b1f68;
        }
    }
    ctx->pc = 0x4B1F48u;
label_4b1f48:
    // 0x4b1f48: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x4b1f48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b1f4c:
    // 0x4b1f4c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4b1f50:
    if (ctx->pc == 0x4B1F50u) {
        ctx->pc = 0x4B1F54u;
        goto label_4b1f54;
    }
    ctx->pc = 0x4B1F4Cu;
    {
        const bool branch_taken_0x4b1f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1f4c) {
            ctx->pc = 0x4B1F68u;
            goto label_4b1f68;
        }
    }
    ctx->pc = 0x4B1F54u;
label_4b1f54:
    // 0x4b1f54: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4b1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4b1f58:
    // 0x4b1f58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4b1f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4b1f5c:
    // 0x4b1f5c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b1f5cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b1f60:
    // 0x4b1f60: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
label_4b1f64:
    if (ctx->pc == 0x4B1F64u) {
        ctx->pc = 0x4B1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F60u;
        // 0x4b1f64: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F68u;
        goto label_4b1f68;
    }
    ctx->pc = 0x4B1F60u;
    {
        const bool branch_taken_0x4b1f60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F60u;
        // 0x4b1f64: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f60) {
            ctx->pc = 0x4B1F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1f00;
        }
    }
    ctx->pc = 0x4B1F68u;
label_4b1f68:
    // 0x4b1f68: 0x120001cd  beqz        $s0, . + 4 + (0x1CD << 2)
label_4b1f6c:
    if (ctx->pc == 0x4B1F6Cu) {
        ctx->pc = 0x4B1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F68u;
        // 0x4b1f6c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F70u;
        goto label_4b1f70;
    }
    ctx->pc = 0x4B1F68u;
    {
        const bool branch_taken_0x4b1f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F68u;
        // 0x4b1f6c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f68) {
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B1F70u;
label_4b1f70:
    // 0x4b1f70: 0x10000034  b           . + 4 + (0x34 << 2)
label_4b1f74:
    if (ctx->pc == 0x4B1F74u) {
        ctx->pc = 0x4B1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F70u;
        // 0x4b1f74: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F78u;
        goto label_4b1f78;
    }
    ctx->pc = 0x4B1F70u;
    {
        const bool branch_taken_0x4b1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F70u;
        // 0x4b1f74: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f70) {
            ctx->pc = 0x4B2044u;
            goto label_4b2044;
        }
    }
    ctx->pc = 0x4B1F78u;
label_4b1f78:
    // 0x4b1f78: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1f7c:
    // 0x4b1f7c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b1f7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b1f80:
    // 0x4b1f80: 0x8ed2fff8  lw          $s2, -0x8($s6)
    ctx->pc = 0x4b1f80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b1f84:
    // 0x4b1f84: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4b1f84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1f88:
    // 0x4b1f88: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x4b1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_4b1f8c:
    // 0x4b1f8c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x4b1f8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b1f90:
    // 0x4b1f90: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_4b1f94:
    if (ctx->pc == 0x4B1F94u) {
        ctx->pc = 0x4B1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F90u;
        // 0x4b1f94: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1F98u;
        goto label_4b1f98;
    }
    ctx->pc = 0x4B1F90u;
    {
        const bool branch_taken_0x4b1f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F90u;
        // 0x4b1f94: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1f90) {
            ctx->pc = 0x4B2020u;
            goto label_4b2020;
        }
    }
    ctx->pc = 0x4B1F98u;
label_4b1f98:
    // 0x4b1f98: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x4b1f98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_4b1f9c:
    // 0x4b1f9c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4b1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4b1fa0:
    // 0x4b1fa0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b1fa4:
    // 0x4b1fa4: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b1fa4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b1fa8:
    // 0x4b1fa8: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_4b1fac:
    if (ctx->pc == 0x4B1FACu) {
        ctx->pc = 0x4B1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FA8u;
        // 0x4b1fac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1FB0u;
        goto label_4b1fb0;
    }
    ctx->pc = 0x4B1FA8u;
    {
        const bool branch_taken_0x4b1fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FA8u;
        // 0x4b1fac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1fa8) {
            ctx->pc = 0x4B2020u;
            goto label_4b2020;
        }
    }
    ctx->pc = 0x4B1FB0u;
label_4b1fb0:
    // 0x4b1fb0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x4b1fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1fb4:
    // 0x4b1fb4: 0x0  nop
    ctx->pc = 0x4b1fb4u;
    // NOP
label_4b1fb8:
    // 0x4b1fb8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1fbc:
    // 0x4b1fbc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4b1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b1fc0:
    // 0x4b1fc0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4b1fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b1fc4:
    // 0x4b1fc4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4b1fc8:
    if (ctx->pc == 0x4B1FC8u) {
        ctx->pc = 0x4B1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FC4u;
        // 0x4b1fc8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1FCCu;
        goto label_4b1fcc;
    }
    ctx->pc = 0x4B1FC4u;
    {
        const bool branch_taken_0x4b1fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1fc4) {
            ctx->pc = 0x4B1FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1FC4u;
            // 0x4b1fc8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1FE4u;
            goto label_4b1fe4;
        }
    }
    ctx->pc = 0x4B1FCCu;
label_4b1fcc:
    // 0x4b1fcc: 0xc12c326  jal         func_4B0C98
label_4b1fd0:
    if (ctx->pc == 0x4B1FD0u) {
        ctx->pc = 0x4B1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FCCu;
        // 0x4b1fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1FD4u;
        goto label_4b1fd4;
    }
    ctx->pc = 0x4B1FCCu;
    SET_GPR_U32(ctx, 31, 0x4B1FD4u);
    ctx->pc = 0x4B1FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1FCCu;
    // 0x4b1fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B1FCCu, 0x4B1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1FD4u;
label_4b1fd4:
    // 0x4b1fd4: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_4b1fd8:
    if (ctx->pc == 0x4B1FD8u) {
        ctx->pc = 0x4B1FDCu;
        goto label_4b1fdc;
    }
    ctx->pc = 0x4B1FD4u;
    {
        const bool branch_taken_0x4b1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x4b1fd4) {
            ctx->pc = 0x4B1FECu;
            goto label_4b1fec;
        }
    }
    ctx->pc = 0x4B1FDCu;
label_4b1fdc:
    // 0x4b1fdc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b1fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b1fe0:
    // 0x4b1fe0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4b1fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1fe4:
    // 0x4b1fe4: 0x14900006  bne         $a0, $s0, . + 4 + (0x6 << 2)
label_4b1fe8:
    if (ctx->pc == 0x4B1FE8u) {
        ctx->pc = 0x4B1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FE4u;
        // 0x4b1fe8: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1FECu;
        goto label_4b1fec;
    }
    ctx->pc = 0x4B1FE4u;
    {
        const bool branch_taken_0x4b1fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FE4u;
        // 0x4b1fe8: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1fe4) {
            ctx->pc = 0x4B2000u;
            goto label_4b2000;
        }
    }
    ctx->pc = 0x4B1FECu;
label_4b1fec:
    // 0x4b1fec: 0x125101a4  beq         $s2, $s1, . + 4 + (0x1A4 << 2)
label_4b1ff0:
    if (ctx->pc == 0x4B1FF0u) {
        ctx->pc = 0x4B1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FECu;
        // 0x4b1ff0: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1FF4u;
        goto label_4b1ff4;
    }
    ctx->pc = 0x4B1FECu;
    {
        const bool branch_taken_0x4b1fec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x4B1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FECu;
        // 0x4b1ff0: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1fec) {
            ctx->pc = 0x4B2680u;
            goto label_4b2680;
        }
    }
    ctx->pc = 0x4B1FF4u;
label_4b1ff4:
    // 0x4b1ff4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b1ff8:
    // 0x4b1ff8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4b1ffc:
    if (ctx->pc == 0x4B1FFCu) {
        ctx->pc = 0x4B1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FF8u;
        // 0x4b1ffc: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2000u;
        goto label_4b2000;
    }
    ctx->pc = 0x4B1FF8u;
    {
        const bool branch_taken_0x4b1ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FF8u;
        // 0x4b1ffc: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ff8) {
            ctx->pc = 0x4B2020u;
            goto label_4b2020;
        }
    }
    ctx->pc = 0x4B2000u;
label_4b2000:
    // 0x4b2000: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x4b2000u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b2004:
    // 0x4b2004: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4b2008:
    if (ctx->pc == 0x4B2008u) {
        ctx->pc = 0x4B2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2004u;
        // 0x4b2008: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B200Cu;
        goto label_4b200c;
    }
    ctx->pc = 0x4B2004u;
    {
        const bool branch_taken_0x4b2004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2004u;
        // 0x4b2008: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2004) {
            ctx->pc = 0x4B2020u;
            goto label_4b2020;
        }
    }
    ctx->pc = 0x4B200Cu;
label_4b200c:
    // 0x4b200c: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x4b200cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_4b2010:
    // 0x4b2010: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b2010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b2014:
    // 0x4b2014: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b2014u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b2018:
    // 0x4b2018: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
label_4b201c:
    if (ctx->pc == 0x4B201Cu) {
        ctx->pc = 0x4B201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2018u;
        // 0x4b201c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2020u;
        goto label_4b2020;
    }
    ctx->pc = 0x4B2018u;
    {
        const bool branch_taken_0x4b2018 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2018u;
        // 0x4b201c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2018) {
            ctx->pc = 0x4B1FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1fb8;
        }
    }
    ctx->pc = 0x4B2020u;
label_4b2020:
    // 0x4b2020: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x4b2020u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_4b2024:
    // 0x4b2024: 0x1200019f  beqz        $s0, . + 4 + (0x19F << 2)
label_4b2028:
    if (ctx->pc == 0x4B2028u) {
        ctx->pc = 0x4B2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2024u;
        // 0x4b2028: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B202Cu;
        goto label_4b202c;
    }
    ctx->pc = 0x4B2024u;
    {
        const bool branch_taken_0x4b2024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2024u;
        // 0x4b2028: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2024) {
            ctx->pc = 0x4B26A4u;
            goto label_4b26a4;
        }
    }
    ctx->pc = 0x4B202Cu;
label_4b202c:
    // 0x4b202c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x4b202cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_4b2030:
    // 0x4b2030: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x4b2030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b2034:
    // 0x4b2034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b2038:
    // 0x4b2038: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x4b2038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_4b203c:
    // 0x4b203c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x4b203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b2040:
    // 0x4b2040: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b2040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b2044:
    // 0x4b2044: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4b2044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4b2048:
    // 0x4b2048: 0x1000fe70  b           . + 4 + (-0x190 << 2)
label_4b204c:
    if (ctx->pc == 0x4B204Cu) {
        ctx->pc = 0x4B204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2048u;
        // 0x4b204c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2050u;
        goto label_4b2050;
    }
    ctx->pc = 0x4B2048u;
    {
        const bool branch_taken_0x4b2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2048u;
        // 0x4b204c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2048) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B2050u;
label_4b2050:
    // 0x4b2050: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2054:
    // 0x4b2054: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x4b2054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4b2058:
    // 0x4b2058: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_4b205c:
    if (ctx->pc == 0x4B205Cu) {
        ctx->pc = 0x4B205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2058u;
        // 0x4b205c: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2060u;
        goto label_4b2060;
    }
    ctx->pc = 0x4B2058u;
    {
        const bool branch_taken_0x4b2058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2058u;
        // 0x4b205c: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2058) {
            ctx->pc = 0x4B2130u;
            goto label_4b2130;
        }
    }
    ctx->pc = 0x4B2060u;
label_4b2060:
    // 0x4b2060: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b2060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2064:
    // 0x4b2064: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4b2064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4b2068:
    // 0x4b2068: 0x2482c531  addiu       $v0, $a0, -0x3ACF
    ctx->pc = 0x4b2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952241));
label_4b206c:
    // 0x4b206c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4b206cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b2070:
    // 0x4b2070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b2074:
    // 0x4b2074: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x4b2074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b2078:
    // 0x4b2078: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x4b2078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_4b207c:
    // 0x4b207c: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
label_4b2080:
    if (ctx->pc == 0x4B2080u) {
        ctx->pc = 0x4B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B207Cu;
        // 0x4b2080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2084u;
        goto label_4b2084;
    }
    ctx->pc = 0x4B207Cu;
    {
        const bool branch_taken_0x4b207c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B207Cu;
        // 0x4b2080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b207c) {
            ctx->pc = 0x4B211Cu;
            goto label_4b211c;
        }
    }
    ctx->pc = 0x4B2084u;
label_4b2084:
    // 0x4b2084: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4b2088:
    // 0x4b2088: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b2088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b208c:
    // 0x4b208c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b208cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b2090:
    // 0x4b2090: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_4b2094:
    if (ctx->pc == 0x4B2094u) {
        ctx->pc = 0x4B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2090u;
        // 0x4b2094: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2098u;
        goto label_4b2098;
    }
    ctx->pc = 0x4B2090u;
    {
        const bool branch_taken_0x4b2090 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2090u;
        // 0x4b2094: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2090) {
            ctx->pc = 0x4B211Cu;
            goto label_4b211c;
        }
    }
    ctx->pc = 0x4B2098u;
label_4b2098:
    // 0x4b2098: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b2098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b209c:
    // 0x4b209c: 0x0  nop
    ctx->pc = 0x4b209cu;
    // NOP
label_4b20a0:
    // 0x4b20a0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b20a4:
    // 0x4b20a4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4b20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b20a8:
    // 0x4b20a8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4b20a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b20ac:
    // 0x4b20ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4b20b0:
    if (ctx->pc == 0x4B20B0u) {
        ctx->pc = 0x4B20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20ACu;
        // 0x4b20b0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20B4u;
        goto label_4b20b4;
    }
    ctx->pc = 0x4B20ACu;
    {
        const bool branch_taken_0x4b20ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b20ac) {
            ctx->pc = 0x4B20B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B20ACu;
            // 0x4b20b0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B20D0u;
            goto label_4b20d0;
        }
    }
    ctx->pc = 0x4B20B4u;
label_4b20b4:
    // 0x4b20b4: 0xc12c326  jal         func_4B0C98
label_4b20b8:
    if (ctx->pc == 0x4B20B8u) {
        ctx->pc = 0x4B20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20B4u;
        // 0x4b20b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20BCu;
        goto label_4b20bc;
    }
    ctx->pc = 0x4B20B4u;
    SET_GPR_U32(ctx, 31, 0x4B20BCu);
    ctx->pc = 0x4B20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B20B4u;
    // 0x4b20b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B20B4u, 0x4B20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B20BCu;
label_4b20bc:
    // 0x4b20bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b20c0:
    // 0x4b20c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_4b20c4:
    if (ctx->pc == 0x4B20C4u) {
        ctx->pc = 0x4B20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20C0u;
        // 0x4b20c4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20C8u;
        goto label_4b20c8;
    }
    ctx->pc = 0x4B20C0u;
    {
        const bool branch_taken_0x4b20c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20C0u;
        // 0x4b20c4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b20c0) {
            ctx->pc = 0x4B20E0u;
            goto label_4b20e0;
        }
    }
    ctx->pc = 0x4B20C8u;
label_4b20c8:
    // 0x4b20c8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b20c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b20cc:
    // 0x4b20cc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4b20ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b20d0:
    // 0x4b20d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b20d4:
    // 0x4b20d4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_4b20d8:
    if (ctx->pc == 0x4B20D8u) {
        ctx->pc = 0x4B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20D4u;
        // 0x4b20d8: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20DCu;
        goto label_4b20dc;
    }
    ctx->pc = 0x4B20D4u;
    {
        const bool branch_taken_0x4b20d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20D4u;
        // 0x4b20d8: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b20d4) {
            ctx->pc = 0x4B20ECu;
            goto label_4b20ec;
        }
    }
    ctx->pc = 0x4B20DCu;
label_4b20dc:
    // 0x4b20dc: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x4b20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4b20e0:
    // 0x4b20e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b20e4:
    // 0x4b20e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_4b20e8:
    if (ctx->pc == 0x4B20E8u) {
        ctx->pc = 0x4B20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20E4u;
        // 0x4b20e8: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20ECu;
        goto label_4b20ec;
    }
    ctx->pc = 0x4B20E4u;
    {
        const bool branch_taken_0x4b20e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20E4u;
        // 0x4b20e8: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b20e4) {
            ctx->pc = 0x4B2120u;
            goto label_4b2120;
        }
    }
    ctx->pc = 0x4B20ECu;
label_4b20ec:
    // 0x4b20ec: 0x2482c531  addiu       $v0, $a0, -0x3ACF
    ctx->pc = 0x4b20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952241));
label_4b20f0:
    // 0x4b20f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b20f4:
    // 0x4b20f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b20f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b20f8:
    // 0x4b20f8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4b20f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4b20fc:
    // 0x4b20fc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4b2100:
    if (ctx->pc == 0x4B2100u) {
        ctx->pc = 0x4B2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20FCu;
        // 0x4b2100: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2104u;
        goto label_4b2104;
    }
    ctx->pc = 0x4B20FCu;
    {
        const bool branch_taken_0x4b20fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20FCu;
        // 0x4b2100: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b20fc) {
            ctx->pc = 0x4B2120u;
            goto label_4b2120;
        }
    }
    ctx->pc = 0x4B2104u;
label_4b2104:
    // 0x4b2104: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4b2104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4b2108:
    // 0x4b2108: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b2108u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b210c:
    // 0x4b210c: 0x16a0ffe4  bnez        $s5, . + 4 + (-0x1C << 2)
label_4b2110:
    if (ctx->pc == 0x4B2110u) {
        ctx->pc = 0x4B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B210Cu;
        // 0x4b2110: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2114u;
        goto label_4b2114;
    }
    ctx->pc = 0x4B210Cu;
    {
        const bool branch_taken_0x4b210c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B210Cu;
        // 0x4b2110: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b210c) {
            ctx->pc = 0x4B20A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b20a0;
        }
    }
    ctx->pc = 0x4B2114u;
label_4b2114:
    // 0x4b2114: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b2118:
    if (ctx->pc == 0x4B2118u) {
        ctx->pc = 0x4B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2114u;
        // 0x4b2118: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B211Cu;
        goto label_4b211c;
    }
    ctx->pc = 0x4B2114u;
    {
        const bool branch_taken_0x4b2114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2114u;
        // 0x4b2118: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2114) {
            ctx->pc = 0x4B2124u;
            goto label_4b2124;
        }
    }
    ctx->pc = 0x4B211Cu;
label_4b211c:
    // 0x4b211c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b211cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b2120:
    // 0x4b2120: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4b2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b2124:
    // 0x4b2124: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b2124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4b2128:
    // 0x4b2128: 0x1000fe38  b           . + 4 + (-0x1C8 << 2)
label_4b212c:
    if (ctx->pc == 0x4B212Cu) {
        ctx->pc = 0x4B212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2128u;
        // 0x4b212c: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2130u;
        goto label_4b2130;
    }
    ctx->pc = 0x4B2128u;
    {
        const bool branch_taken_0x4b2128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2128u;
        // 0x4b212c: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2128) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B2130u;
label_4b2130:
    // 0x4b2130: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4b2130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4b2134:
    // 0x4b2134: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b2134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2138:
    // 0x4b2138: 0x2483c531  addiu       $v1, $a0, -0x3ACF
    ctx->pc = 0x4b2138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952241));
label_4b213c:
    // 0x4b213c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b213cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b2140:
    // 0x4b2140: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4b2140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b2144:
    // 0x4b2144: 0x8ed2fff8  lw          $s2, -0x8($s6)
    ctx->pc = 0x4b2144u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b2148:
    // 0x4b2148: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4b2148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4b214c:
    // 0x4b214c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b214cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b2150:
    // 0x4b2150: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4b2150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4b2154:
    // 0x4b2154: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4b2158:
    if (ctx->pc == 0x4B2158u) {
        ctx->pc = 0x4B2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2154u;
        // 0x4b2158: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B215Cu;
        goto label_4b215c;
    }
    ctx->pc = 0x4B2154u;
    {
        const bool branch_taken_0x4b2154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2154u;
        // 0x4b2158: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2154) {
            ctx->pc = 0x4B2200u;
            goto label_4b2200;
        }
    }
    ctx->pc = 0x4B215Cu;
label_4b215c:
    // 0x4b215c: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x4b215cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_4b2160:
    // 0x4b2160: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4b2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4b2164:
    // 0x4b2164: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b2164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b2168:
    // 0x4b2168: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b2168u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b216c:
    // 0x4b216c: 0x12a00028  beqz        $s5, . + 4 + (0x28 << 2)
label_4b2170:
    if (ctx->pc == 0x4B2170u) {
        ctx->pc = 0x4B2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B216Cu;
        // 0x4b2170: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2174u;
        goto label_4b2174;
    }
    ctx->pc = 0x4B216Cu;
    {
        const bool branch_taken_0x4b216c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B216Cu;
        // 0x4b2170: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b216c) {
            ctx->pc = 0x4B2210u;
            goto label_4b2210;
        }
    }
    ctx->pc = 0x4B2174u;
label_4b2174:
    // 0x4b2174: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x4b2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b2178:
    // 0x4b2178: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b2178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b217c:
    // 0x4b217c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x4b217cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b2180:
    // 0x4b2180: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b2180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2184:
    // 0x4b2184: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b2188:
    // 0x4b2188: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4b2188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b218c:
    // 0x4b218c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4b2190:
    if (ctx->pc == 0x4B2190u) {
        ctx->pc = 0x4B2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B218Cu;
        // 0x4b2190: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2194u;
        goto label_4b2194;
    }
    ctx->pc = 0x4B218Cu;
    {
        const bool branch_taken_0x4b218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b218c) {
            ctx->pc = 0x4B2190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B218Cu;
            // 0x4b2190: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B21B0u;
            goto label_4b21b0;
        }
    }
    ctx->pc = 0x4B2194u;
label_4b2194:
    // 0x4b2194: 0xc12c326  jal         func_4B0C98
label_4b2198:
    if (ctx->pc == 0x4B2198u) {
        ctx->pc = 0x4B2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2194u;
        // 0x4b2198: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B219Cu;
        goto label_4b219c;
    }
    ctx->pc = 0x4B2194u;
    SET_GPR_U32(ctx, 31, 0x4B219Cu);
    ctx->pc = 0x4B2198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2194u;
    // 0x4b2198: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B2194u, 0x4B219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B219Cu;
label_4b219c:
    // 0x4b219c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b21a0:
    // 0x4b21a0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_4b21a4:
    if (ctx->pc == 0x4B21A4u) {
        ctx->pc = 0x4B21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21A0u;
        // 0x4b21a4: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B21A8u;
        goto label_4b21a8;
    }
    ctx->pc = 0x4B21A0u;
    {
        const bool branch_taken_0x4b21a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21A0u;
        // 0x4b21a4: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21a0) {
            ctx->pc = 0x4B21C0u;
            goto label_4b21c0;
        }
    }
    ctx->pc = 0x4B21A8u;
label_4b21a8:
    // 0x4b21a8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b21a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b21ac:
    // 0x4b21ac: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4b21acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b21b0:
    // 0x4b21b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b21b4:
    // 0x4b21b4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_4b21b8:
    if (ctx->pc == 0x4B21B8u) {
        ctx->pc = 0x4B21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21B4u;
        // 0x4b21b8: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B21BCu;
        goto label_4b21bc;
    }
    ctx->pc = 0x4B21B4u;
    {
        const bool branch_taken_0x4b21b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21B4u;
        // 0x4b21b8: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21b4) {
            ctx->pc = 0x4B21CCu;
            goto label_4b21cc;
        }
    }
    ctx->pc = 0x4B21BCu;
label_4b21bc:
    // 0x4b21bc: 0x8fa30274  lw          $v1, 0x274($sp)
    ctx->pc = 0x4b21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4b21c0:
    // 0x4b21c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b21c4:
    // 0x4b21c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_4b21c8:
    if (ctx->pc == 0x4B21C8u) {
        ctx->pc = 0x4B21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21C4u;
        // 0x4b21c8: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B21CCu;
        goto label_4b21cc;
    }
    ctx->pc = 0x4B21C4u;
    {
        const bool branch_taken_0x4b21c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21C4u;
        // 0x4b21c8: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21c4) {
            ctx->pc = 0x4B221Cu;
            goto label_4b221c;
        }
    }
    ctx->pc = 0x4B21CCu;
label_4b21cc:
    // 0x4b21cc: 0x2462c531  addiu       $v0, $v1, -0x3ACF
    ctx->pc = 0x4b21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
label_4b21d0:
    // 0x4b21d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4b21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4b21d4:
    // 0x4b21d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b21d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b21d8:
    // 0x4b21d8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4b21d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4b21dc:
    // 0x4b21dc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_4b21e0:
    if (ctx->pc == 0x4B21E0u) {
        ctx->pc = 0x4B21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21DCu;
        // 0x4b21e0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B21E4u;
        goto label_4b21e4;
    }
    ctx->pc = 0x4B21DCu;
    {
        const bool branch_taken_0x4b21dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21DCu;
        // 0x4b21e0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21dc) {
            ctx->pc = 0x4B221Cu;
            goto label_4b221c;
        }
    }
    ctx->pc = 0x4B21E4u;
label_4b21e4:
    // 0x4b21e4: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x4b21e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_4b21e8:
    // 0x4b21e8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b21e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4b21ec:
    // 0x4b21ec: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x4b21ecu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_4b21f0:
    // 0x4b21f0: 0x16a0ffe3  bnez        $s5, . + 4 + (-0x1D << 2)
label_4b21f4:
    if (ctx->pc == 0x4B21F4u) {
        ctx->pc = 0x4B21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21F0u;
        // 0x4b21f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B21F8u;
        goto label_4b21f8;
    }
    ctx->pc = 0x4B21F0u;
    {
        const bool branch_taken_0x4b21f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21F0u;
        // 0x4b21f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21f0) {
            ctx->pc = 0x4B2180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2180;
        }
    }
    ctx->pc = 0x4B21F8u;
label_4b21f8:
    // 0x4b21f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4b21fc:
    if (ctx->pc == 0x4B21FCu) {
        ctx->pc = 0x4B21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21F8u;
        // 0x4b21fc: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2200u;
        goto label_4b2200;
    }
    ctx->pc = 0x4B21F8u;
    {
        const bool branch_taken_0x4b21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21F8u;
        // 0x4b21fc: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21f8) {
            ctx->pc = 0x4B2220u;
            goto label_4b2220;
        }
    }
    ctx->pc = 0x4B2200u;
label_4b2200:
    // 0x4b2200: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x4b2200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b2204:
    // 0x4b2204: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b2204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b2208:
    // 0x4b2208: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b220c:
    if (ctx->pc == 0x4B220Cu) {
        ctx->pc = 0x4B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2208u;
        // 0x4b220c: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2210u;
        goto label_4b2210;
    }
    ctx->pc = 0x4B2208u;
    {
        const bool branch_taken_0x4b2208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2208u;
        // 0x4b220c: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2208) {
            ctx->pc = 0x4B221Cu;
            goto label_4b221c;
        }
    }
    ctx->pc = 0x4B2210u;
label_4b2210:
    // 0x4b2210: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x4b2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b2214:
    // 0x4b2214: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b2214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b2218:
    // 0x4b2218: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x4b2218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b221c:
    // 0x4b221c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x4b221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b2220:
    // 0x4b2220: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x4b2220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_4b2224:
    // 0x4b2224: 0xafb00264  sw          $s0, 0x264($sp)
    ctx->pc = 0x4b2224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 16));
label_4b2228:
    // 0x4b2228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b222c:
    // 0x4b222c: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x4b222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
label_4b2230:
    // 0x4b2230: 0x1000fdf6  b           . + 4 + (-0x20A << 2)
label_4b2234:
    if (ctx->pc == 0x4B2234u) {
        ctx->pc = 0x4B2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2230u;
        // 0x4b2234: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2238u;
        goto label_4b2238;
    }
    ctx->pc = 0x4B2230u;
    {
        const bool branch_taken_0x4b2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2230u;
        // 0x4b2234: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2230) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B2238u;
label_4b2238:
    // 0x4b2238: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_4b223c:
    if (ctx->pc == 0x4B223Cu) {
        ctx->pc = 0x4B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2238u;
        // 0x4b223c: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2240u;
        goto label_4b2240;
    }
    ctx->pc = 0x4B2238u;
    {
        const bool branch_taken_0x4b2238 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2238u;
        // 0x4b223c: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2238) {
            ctx->pc = 0x4B2248u;
            goto label_4b2248;
        }
    }
    ctx->pc = 0x4B2240u;
label_4b2240:
    // 0x4b2240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4b2244:
    if (ctx->pc == 0x4B2244u) {
        ctx->pc = 0x4B2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2240u;
        // 0x4b2244: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2248u;
        goto label_4b2248;
    }
    ctx->pc = 0x4B2240u;
    {
        const bool branch_taken_0x4b2240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2240u;
        // 0x4b2244: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2240) {
            ctx->pc = 0x4B2250u;
            goto label_4b2250;
        }
    }
    ctx->pc = 0x4B2248u;
label_4b2248:
    // 0x4b2248: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x4b2248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_4b224c:
    // 0x4b224c: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x4b224cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4b2250:
    // 0x4b2250: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x4b2250u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_4b2254:
    // 0x4b2254: 0x12a00059  beqz        $s5, . + 4 + (0x59 << 2)
label_4b2258:
    if (ctx->pc == 0x4B2258u) {
        ctx->pc = 0x4B2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2254u;
        // 0x4b2258: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B225Cu;
        goto label_4b225c;
    }
    ctx->pc = 0x4B2254u;
    {
        const bool branch_taken_0x4b2254 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2254u;
        // 0x4b2258: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2254) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B225Cu;
label_4b225c:
    // 0x4b225c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2260:
    // 0x4b2260: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x4b2260u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b2264:
    // 0x4b2264: 0x0  nop
    ctx->pc = 0x4b2264u;
    // NOP
label_4b2268:
    // 0x4b2268: 0x2623ffd5  addiu       $v1, $s1, -0x2B
    ctx->pc = 0x4b2268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967253));
label_4b226c:
    // 0x4b226c: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x4b226cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_4b2270:
    // 0x4b2270: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_4b2274:
    if (ctx->pc == 0x4B2274u) {
        ctx->pc = 0x4B2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2270u;
        // 0x4b2274: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2278u;
        goto label_4b2278;
    }
    ctx->pc = 0x4B2270u;
    {
        const bool branch_taken_0x4b2270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2270u;
        // 0x4b2274: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2270) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B2278u;
label_4b2278:
    // 0x4b2278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b2278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b227c:
    // 0x4b227c: 0x244208d0  addiu       $v0, $v0, 0x8D0
    ctx->pc = 0x4b227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2256));
label_4b2280:
    // 0x4b2280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b2284:
    // 0x4b2284: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b2284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b2288:
    // 0x4b2288: 0x800008  jr          $a0
label_4b228c:
    if (ctx->pc == 0x4B228Cu) {
        ctx->pc = 0x4B2290u;
        goto label_4b2290;
    }
    ctx->pc = 0x4B2288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B2290u: goto label_4b2290;
            case 0x4B22BCu: goto label_4b22bc;
            case 0x4B22E4u: goto label_4b22e4;
            case 0x4B2310u: goto label_4b2310;
            case 0x4B2328u: goto label_4b2328;
            case 0x4B233Cu: goto label_4b233c;
            case 0x4B23BCu: goto label_4b23bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B2290u;
label_4b2290:
    // 0x4b2290: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x4b2290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_4b2294:
    // 0x4b2294: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_4b2298:
    if (ctx->pc == 0x4B2298u) {
        ctx->pc = 0x4B2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2294u;
        // 0x4b2298: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B229Cu;
        goto label_4b229c;
    }
    ctx->pc = 0x4B2294u;
    {
        const bool branch_taken_0x4b2294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2294u;
        // 0x4b2298: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2294) {
            ctx->pc = 0x4B22ACu;
            goto label_4b22ac;
        }
    }
    ctx->pc = 0x4B229Cu;
label_4b229c:
    // 0x4b229c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4b229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4b22a0:
    // 0x4b22a0: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x4b22a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_4b22a4:
    // 0x4b22a4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x4b22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_4b22a8:
    // 0x4b22a8: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x4b22a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_4b22ac:
    // 0x4b22ac: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4b22b0:
    if (ctx->pc == 0x4B22B0u) {
        ctx->pc = 0x4B22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22ACu;
        // 0x4b22b0: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B22B4u;
        goto label_4b22b4;
    }
    ctx->pc = 0x4B22ACu;
    {
        const bool branch_taken_0x4b22ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22ACu;
        // 0x4b22b0: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b22ac) {
            ctx->pc = 0x4B2358u;
            goto label_4b2358;
        }
    }
    ctx->pc = 0x4B22B4u;
label_4b22b4:
    // 0x4b22b4: 0x10000028  b           . + 4 + (0x28 << 2)
label_4b22b8:
    if (ctx->pc == 0x4B22B8u) {
        ctx->pc = 0x4B22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22B4u;
        // 0x4b22b8: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B22BCu;
        goto label_4b22bc;
    }
    ctx->pc = 0x4B22B4u;
    {
        const bool branch_taken_0x4b22b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22B4u;
        // 0x4b22b8: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b22b4) {
            ctx->pc = 0x4B2358u;
            goto label_4b2358;
        }
    }
    ctx->pc = 0x4B22BCu;
label_4b22bc:
    // 0x4b22bc: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x4b22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_4b22c0:
    // 0x4b22c0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4b22c4:
    // 0x4b22c4: 0x24421cc0  addiu       $v0, $v0, 0x1CC0
    ctx->pc = 0x4b22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7360));
label_4b22c8:
    // 0x4b22c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4b22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4b22cc:
    // 0x4b22cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b22d0:
    // 0x4b22d0: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x4b22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_4b22d4:
    // 0x4b22d4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x4b22d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4b22d8:
    // 0x4b22d8: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x4b22d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_4b22dc:
    // 0x4b22dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4b22e0:
    if (ctx->pc == 0x4B22E0u) {
        ctx->pc = 0x4B22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22DCu;
        // 0x4b22e0: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B22E4u;
        goto label_4b22e4;
    }
    ctx->pc = 0x4B22DCu;
    {
        const bool branch_taken_0x4b22dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22DCu;
        // 0x4b22e0: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b22dc) {
            ctx->pc = 0x4B235Cu;
            goto label_4b235c;
        }
    }
    ctx->pc = 0x4B22E4u;
label_4b22e4:
    // 0x4b22e4: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x4b22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_4b22e8:
    // 0x4b22e8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4b22ec:
    // 0x4b22ec: 0x24421cc0  addiu       $v0, $v0, 0x1CC0
    ctx->pc = 0x4b22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7360));
label_4b22f0:
    // 0x4b22f0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4b22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4b22f4:
    // 0x4b22f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b22f8:
    // 0x4b22f8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x4b22f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4b22fc:
    // 0x4b22fc: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4b22fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_4b2300:
    // 0x4b2300: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_4b2304:
    if (ctx->pc == 0x4B2304u) {
        ctx->pc = 0x4B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2300u;
        // 0x4b2304: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2308u;
        goto label_4b2308;
    }
    ctx->pc = 0x4B2300u;
    {
        const bool branch_taken_0x4b2300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2300u;
        // 0x4b2304: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2300) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B2308u;
label_4b2308:
    // 0x4b2308: 0x10000013  b           . + 4 + (0x13 << 2)
label_4b230c:
    if (ctx->pc == 0x4B230Cu) {
        ctx->pc = 0x4B230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2308u;
        // 0x4b230c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2310u;
        goto label_4b2310;
    }
    ctx->pc = 0x4B2308u;
    {
        const bool branch_taken_0x4b2308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2308u;
        // 0x4b230c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2308) {
            ctx->pc = 0x4B2358u;
            goto label_4b2358;
        }
    }
    ctx->pc = 0x4B2310u;
label_4b2310:
    // 0x4b2310: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x4b2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_4b2314:
    // 0x4b2314: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x4b2314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_4b2318:
    // 0x4b2318: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_4b231c:
    if (ctx->pc == 0x4B231Cu) {
        ctx->pc = 0x4B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2318u;
        // 0x4b231c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2320u;
        goto label_4b2320;
    }
    ctx->pc = 0x4B2318u;
    {
        const bool branch_taken_0x4b2318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2318u;
        // 0x4b231c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2318) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B2320u;
label_4b2320:
    // 0x4b2320: 0x1000000e  b           . + 4 + (0xE << 2)
label_4b2324:
    if (ctx->pc == 0x4B2324u) {
        ctx->pc = 0x4B2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2320u;
        // 0x4b2324: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2328u;
        goto label_4b2328;
    }
    ctx->pc = 0x4B2320u;
    {
        const bool branch_taken_0x4b2320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2320u;
        // 0x4b2324: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2320) {
            ctx->pc = 0x4B235Cu;
            goto label_4b235c;
        }
    }
    ctx->pc = 0x4B2328u;
label_4b2328:
    // 0x4b2328: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x4b2328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_4b232c:
    // 0x4b232c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4b2330:
    if (ctx->pc == 0x4B2330u) {
        ctx->pc = 0x4B2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B232Cu;
        // 0x4b2330: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2334u;
        goto label_4b2334;
    }
    ctx->pc = 0x4B232Cu;
    {
        const bool branch_taken_0x4b232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B232Cu;
        // 0x4b2330: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b232c) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B2334u;
label_4b2334:
    // 0x4b2334: 0x10000009  b           . + 4 + (0x9 << 2)
label_4b2338:
    if (ctx->pc == 0x4B2338u) {
        ctx->pc = 0x4B2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2334u;
        // 0x4b2338: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B233Cu;
        goto label_4b233c;
    }
    ctx->pc = 0x4B2334u;
    {
        const bool branch_taken_0x4b2334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2334u;
        // 0x4b2338: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2334) {
            ctx->pc = 0x4B235Cu;
            goto label_4b235c;
        }
    }
    ctx->pc = 0x4B233Cu;
label_4b233c:
    // 0x4b233c: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x4b233cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_4b2340:
    // 0x4b2340: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4b2344:
    if (ctx->pc == 0x4B2344u) {
        ctx->pc = 0x4B2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2340u;
        // 0x4b2344: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2348u;
        goto label_4b2348;
    }
    ctx->pc = 0x4B2340u;
    {
        const bool branch_taken_0x4b2340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2340u;
        // 0x4b2344: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2340) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B2348u;
label_4b2348:
    // 0x4b2348: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
label_4b234c:
    if (ctx->pc == 0x4B234Cu) {
        ctx->pc = 0x4B234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2348u;
        // 0x4b234c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2350u;
        goto label_4b2350;
    }
    ctx->pc = 0x4B2348u;
    {
        const bool branch_taken_0x4b2348 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2348u;
        // 0x4b234c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2348) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B2350u;
label_4b2350:
    // 0x4b2350: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x4b2350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_4b2354:
    // 0x4b2354: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x4b2354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_4b2358:
    // 0x4b2358: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x4b2358u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_4b235c:
    // 0x4b235c: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x4b235cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
label_4b2360:
    // 0x4b2360: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b2360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b2364:
    // 0x4b2364: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4b2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2368:
    // 0x4b2368: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4b2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b236c:
    // 0x4b236c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b2370:
    // 0x4b2370: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4b2370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b2374:
    // 0x4b2374: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4b2378:
    if (ctx->pc == 0x4B2378u) {
        ctx->pc = 0x4B2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2374u;
        // 0x4b2378: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B237Cu;
        goto label_4b237c;
    }
    ctx->pc = 0x4B2374u;
    {
        const bool branch_taken_0x4b2374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2374u;
        // 0x4b2378: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2374) {
            ctx->pc = 0x4B2390u;
            goto label_4b2390;
        }
    }
    ctx->pc = 0x4B237Cu;
label_4b237c:
    // 0x4b237c: 0xc12c326  jal         func_4B0C98
label_4b2380:
    if (ctx->pc == 0x4B2380u) {
        ctx->pc = 0x4B2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B237Cu;
        // 0x4b2380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2384u;
        goto label_4b2384;
    }
    ctx->pc = 0x4B237Cu;
    SET_GPR_U32(ctx, 31, 0x4B2384u);
    ctx->pc = 0x4B2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B237Cu;
    // 0x4b2380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B237Cu, 0x4B2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2384u;
label_4b2384:
    // 0x4b2384: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b2384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2388:
    // 0x4b2388: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_4b238c:
    if (ctx->pc == 0x4B238Cu) {
        ctx->pc = 0x4B238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2388u;
        // 0x4b238c: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2390u;
        goto label_4b2390;
    }
    ctx->pc = 0x4B2388u;
    {
        const bool branch_taken_0x4b2388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2388u;
        // 0x4b238c: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2388) {
            ctx->pc = 0x4B23A8u;
            goto label_4b23a8;
        }
    }
    ctx->pc = 0x4B2390u;
label_4b2390:
    // 0x4b2390: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b2390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2394:
    // 0x4b2394: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b2394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2398:
    // 0x4b2398: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4b2398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b239c:
    // 0x4b239c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_4b23a0:
    if (ctx->pc == 0x4B23A0u) {
        ctx->pc = 0x4B23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B239Cu;
        // 0x4b23a0: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23A4u;
        goto label_4b23a4;
    }
    ctx->pc = 0x4B239Cu;
    {
        const bool branch_taken_0x4b239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b239c) {
            ctx->pc = 0x4B23A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B239Cu;
            // 0x4b23a0: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B23B4u;
            goto label_4b23b4;
        }
    }
    ctx->pc = 0x4B23A4u;
label_4b23a4:
    // 0x4b23a4: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x4b23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4b23a8:
    // 0x4b23a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b23ac:
    // 0x4b23ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b23b0:
    if (ctx->pc == 0x4B23B0u) {
        ctx->pc = 0x4B23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23ACu;
        // 0x4b23b0: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23B4u;
        goto label_4b23b4;
    }
    ctx->pc = 0x4B23ACu;
    {
        const bool branch_taken_0x4b23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23ACu;
        // 0x4b23b0: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23ac) {
            ctx->pc = 0x4B23BCu;
            goto label_4b23bc;
        }
    }
    ctx->pc = 0x4B23B4u;
label_4b23b4:
    // 0x4b23b4: 0x56a0ffac  bnel        $s5, $zero, . + 4 + (-0x54 << 2)
label_4b23b8:
    if (ctx->pc == 0x4B23B8u) {
        ctx->pc = 0x4B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23B4u;
        // 0x4b23b8: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23BCu;
        goto label_4b23bc;
    }
    ctx->pc = 0x4B23B4u;
    {
        const bool branch_taken_0x4b23b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b23b4) {
            ctx->pc = 0x4B23B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B23B4u;
            // 0x4b23b8: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2268;
        }
    }
    ctx->pc = 0x4B23BCu;
label_4b23bc:
    // 0x4b23bc: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x4b23bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_4b23c0:
    // 0x4b23c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b23c4:
    if (ctx->pc == 0x4B23C4u) {
        ctx->pc = 0x4B23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23C0u;
        // 0x4b23c4: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23C8u;
        goto label_4b23c8;
    }
    ctx->pc = 0x4B23C0u;
    {
        const bool branch_taken_0x4b23c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23C0u;
        // 0x4b23c4: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23c0) {
            ctx->pc = 0x4B23E4u;
            goto label_4b23e4;
        }
    }
    ctx->pc = 0x4B23C8u;
label_4b23c8:
    // 0x4b23c8: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_4b23cc:
    if (ctx->pc == 0x4B23CCu) {
        ctx->pc = 0x4B23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23C8u;
        // 0x4b23cc: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23D0u;
        goto label_4b23d0;
    }
    ctx->pc = 0x4B23C8u;
    {
        const bool branch_taken_0x4b23c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23C8u;
        // 0x4b23cc: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23c8) {
            ctx->pc = 0x4B26A4u;
            goto label_4b26a4;
        }
    }
    ctx->pc = 0x4B23D0u;
label_4b23d0:
    // 0x4b23d0: 0x9244ffff  lbu         $a0, -0x1($s2)
    ctx->pc = 0x4b23d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_4b23d4:
    // 0x4b23d4: 0xc12cc64  jal         func_4B3190
label_4b23d8:
    if (ctx->pc == 0x4B23D8u) {
        ctx->pc = 0x4B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23D4u;
        // 0x4b23d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23DCu;
        goto label_4b23dc;
    }
    ctx->pc = 0x4B23D4u;
    SET_GPR_U32(ctx, 31, 0x4B23DCu);
    ctx->pc = 0x4B23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B23D4u;
    // 0x4b23d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3190u, 0x4B23D4u, 0x4B23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B23DCu;
label_4b23dc:
    // 0x4b23dc: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_4b23e0:
    if (ctx->pc == 0x4B23E0u) {
        ctx->pc = 0x4B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23DCu;
        // 0x4b23e0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23E4u;
        goto label_4b23e4;
    }
    ctx->pc = 0x4B23DCu;
    {
        const bool branch_taken_0x4b23dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23DCu;
        // 0x4b23e0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23dc) {
            ctx->pc = 0x4B26A4u;
            goto label_4b26a4;
        }
    }
    ctx->pc = 0x4B23E4u;
label_4b23e4:
    // 0x4b23e4: 0x9251ffff  lbu         $s1, -0x1($s2)
    ctx->pc = 0x4b23e4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_4b23e8:
    // 0x4b23e8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x4b23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4b23ec:
    // 0x4b23ec: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_4b23f0:
    if (ctx->pc == 0x4B23F0u) {
        ctx->pc = 0x4B23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23ECu;
        // 0x4b23f0: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23F4u;
        goto label_4b23f4;
    }
    ctx->pc = 0x4B23ECu;
    {
        const bool branch_taken_0x4b23ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23ECu;
        // 0x4b23f0: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23ec) {
            ctx->pc = 0x4B23FCu;
            goto label_4b23fc;
        }
    }
    ctx->pc = 0x4B23F4u;
label_4b23f4:
    // 0x4b23f4: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_4b23f8:
    if (ctx->pc == 0x4B23F8u) {
        ctx->pc = 0x4B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23F4u;
        // 0x4b23f8: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B23FCu;
        goto label_4b23fc;
    }
    ctx->pc = 0x4B23F4u;
    {
        const bool branch_taken_0x4b23f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23F4u;
        // 0x4b23f8: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23f4) {
            ctx->pc = 0x4B2410u;
            goto label_4b2410;
        }
    }
    ctx->pc = 0x4B23FCu;
label_4b23fc:
    // 0x4b23fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2400:
    // 0x4b2400: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b2400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4b2404:
    // 0x4b2404: 0xc12cc64  jal         func_4B3190
label_4b2408:
    if (ctx->pc == 0x4B2408u) {
        ctx->pc = 0x4B2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2404u;
        // 0x4b2408: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B240Cu;
        goto label_4b240c;
    }
    ctx->pc = 0x4B2404u;
    SET_GPR_U32(ctx, 31, 0x4B240Cu);
    ctx->pc = 0x4B2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2404u;
    // 0x4b2408: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3190u, 0x4B2404u, 0x4B240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B240Cu;
label_4b240c:
    // 0x4b240c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x4b240cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4b2410:
    // 0x4b2410: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_4b2414:
    if (ctx->pc == 0x4B2414u) {
        ctx->pc = 0x4B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2410u;
        // 0x4b2414: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2418u;
        goto label_4b2418;
    }
    ctx->pc = 0x4B2410u;
    {
        const bool branch_taken_0x4b2410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2410u;
        // 0x4b2414: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2410) {
            ctx->pc = 0x4B266Cu;
            goto label_4b266c;
        }
    }
    ctx->pc = 0x4B2418u;
label_4b2418:
    // 0x4b2418: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x4b2418u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_4b241c:
    // 0x4b241c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4b2420:
    // 0x4b2420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b2420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2424:
    // 0x4b2424: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x4b2424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4b2428:
    // 0x4b2428: 0x60f809  jalr        $v1
label_4b242c:
    if (ctx->pc == 0x4B242Cu) {
        ctx->pc = 0x4B242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2428u;
        // 0x4b242c: 0x8fa6026c  lw          $a2, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2430u;
        goto label_4b2430;
    }
    ctx->pc = 0x4B2428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4B2430u);
        ctx->pc = 0x4B242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2428u;
        // 0x4b242c: 0x8fa6026c  lw          $a2, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2428u, 0x4B2430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2430u;
label_4b2430:
    // 0x4b2430: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b2430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b2434:
    // 0x4b2434: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x4b2434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_4b2438:
    // 0x4b2438: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_4b243c:
    if (ctx->pc == 0x4B243Cu) {
        ctx->pc = 0x4B243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2438u;
        // 0x4b243c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2440u;
        goto label_4b2440;
    }
    ctx->pc = 0x4B2438u;
    {
        const bool branch_taken_0x4b2438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2438) {
            ctx->pc = 0x4B243Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2438u;
            // 0x4b243c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2474u;
            goto label_4b2474;
        }
    }
    ctx->pc = 0x4B2440u;
label_4b2440:
    // 0x4b2440: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x4b2440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_4b2444:
    // 0x4b2444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b2448:
    if (ctx->pc == 0x4B2448u) {
        ctx->pc = 0x4B2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2444u;
        // 0x4b2448: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B244Cu;
        goto label_4b244c;
    }
    ctx->pc = 0x4B2444u;
    {
        const bool branch_taken_0x4b2444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2444u;
        // 0x4b2448: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2444) {
            ctx->pc = 0x4B2460u;
            goto label_4b2460;
        }
    }
    ctx->pc = 0x4B244Cu;
label_4b244c:
    // 0x4b244c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b244cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b2450:
    // 0x4b2450: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4b2454:
    // 0x4b2454: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b2458:
    // 0x4b2458: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b245c:
    if (ctx->pc == 0x4B245Cu) {
        ctx->pc = 0x4B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2458u;
        // 0x4b245c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2460u;
        goto label_4b2460;
    }
    ctx->pc = 0x4B2458u;
    {
        const bool branch_taken_0x4b2458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2458u;
        // 0x4b245c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2458) {
            ctx->pc = 0x4B2484u;
            goto label_4b2484;
        }
    }
    ctx->pc = 0x4B2460u;
label_4b2460:
    // 0x4b2460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4b2464:
    if (ctx->pc == 0x4B2464u) {
        ctx->pc = 0x4B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2460u;
        // 0x4b2464: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2468u;
        goto label_4b2468;
    }
    ctx->pc = 0x4B2460u;
    {
        const bool branch_taken_0x4b2460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2460u;
        // 0x4b2464: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2460) {
            ctx->pc = 0x4B2474u;
            goto label_4b2474;
        }
    }
    ctx->pc = 0x4B2468u;
label_4b2468:
    // 0x4b2468: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b246c:
    // 0x4b246c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b2470:
    if (ctx->pc == 0x4B2470u) {
        ctx->pc = 0x4B2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B246Cu;
        // 0x4b2470: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2474u;
        goto label_4b2474;
    }
    ctx->pc = 0x4B246Cu;
    {
        const bool branch_taken_0x4b246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B246Cu;
        // 0x4b2470: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b246c) {
            ctx->pc = 0x4B2484u;
            goto label_4b2484;
        }
    }
    ctx->pc = 0x4B2474u;
label_4b2474:
    // 0x4b2474: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b2474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4b2478:
    // 0x4b2478: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b2478u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4b247c:
    // 0x4b247c: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b2480:
    // 0x4b2480: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b2480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b2484:
    // 0x4b2484: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x4b2484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b2488:
    // 0x4b2488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b2488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b248c:
    // 0x4b248c: 0x10000076  b           . + 4 + (0x76 << 2)
label_4b2490:
    if (ctx->pc == 0x4B2490u) {
        ctx->pc = 0x4B2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B248Cu;
        // 0x4b2490: 0xafa40264  sw          $a0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2494u;
        goto label_4b2494;
    }
    ctx->pc = 0x4B248Cu;
    {
        const bool branch_taken_0x4b248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B248Cu;
        // 0x4b2490: 0xafa40264  sw          $a0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b248c) {
            ctx->pc = 0x4B2668u;
            goto label_4b2668;
        }
    }
    ctx->pc = 0x4B2494u;
label_4b2494:
    // 0x4b2494: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_4b2498:
    if (ctx->pc == 0x4B2498u) {
        ctx->pc = 0x4B2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2494u;
        // 0x4b2498: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B249Cu;
        goto label_4b249c;
    }
    ctx->pc = 0x4B2494u;
    {
        const bool branch_taken_0x4b2494 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2494u;
        // 0x4b2498: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2494) {
            ctx->pc = 0x4B24A4u;
            goto label_4b24a4;
        }
    }
    ctx->pc = 0x4B249Cu;
label_4b249c:
    // 0x4b249c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4b24a0:
    if (ctx->pc == 0x4B24A0u) {
        ctx->pc = 0x4B24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B249Cu;
        // 0x4b24a0: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24A4u;
        goto label_4b24a4;
    }
    ctx->pc = 0x4B249Cu;
    {
        const bool branch_taken_0x4b249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B249Cu;
        // 0x4b24a0: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b249c) {
            ctx->pc = 0x4B24ACu;
            goto label_4b24ac;
        }
    }
    ctx->pc = 0x4B24A4u;
label_4b24a4:
    // 0x4b24a4: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x4b24a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_4b24a8:
    // 0x4b24a8: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x4b24a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4b24ac:
    // 0x4b24ac: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x4b24acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_4b24b0:
    // 0x4b24b0: 0x12a00039  beqz        $s5, . + 4 + (0x39 << 2)
label_4b24b4:
    if (ctx->pc == 0x4B24B4u) {
        ctx->pc = 0x4B24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24B0u;
        // 0x4b24b4: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24B8u;
        goto label_4b24b8;
    }
    ctx->pc = 0x4B24B0u;
    {
        const bool branch_taken_0x4b24b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24B0u;
        // 0x4b24b4: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b24b0) {
            ctx->pc = 0x4B2598u;
            goto label_4b2598;
        }
    }
    ctx->pc = 0x4B24B8u;
label_4b24b8:
    // 0x4b24b8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4b24b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b24bc:
    // 0x4b24bc: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x4b24bcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b24c0:
    // 0x4b24c0: 0x2623ffd5  addiu       $v1, $s1, -0x2B
    ctx->pc = 0x4b24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967253));
label_4b24c4:
    // 0x4b24c4: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x4b24c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_4b24c8:
    // 0x4b24c8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_4b24cc:
    if (ctx->pc == 0x4B24CCu) {
        ctx->pc = 0x4B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24C8u;
        // 0x4b24cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24D0u;
        goto label_4b24d0;
    }
    ctx->pc = 0x4B24C8u;
    {
        const bool branch_taken_0x4b24c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24C8u;
        // 0x4b24cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b24c8) {
            ctx->pc = 0x4B2598u;
            goto label_4b2598;
        }
    }
    ctx->pc = 0x4B24D0u;
label_4b24d0:
    // 0x4b24d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b24d4:
    // 0x4b24d4: 0x24420a10  addiu       $v0, $v0, 0xA10
    ctx->pc = 0x4b24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2576));
label_4b24d8:
    // 0x4b24d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b24dc:
    // 0x4b24dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b24e0:
    // 0x4b24e0: 0x800008  jr          $a0
label_4b24e4:
    if (ctx->pc == 0x4B24E4u) {
        ctx->pc = 0x4B24E8u;
        goto label_4b24e8;
    }
    ctx->pc = 0x4B24E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B24E8u: goto label_4b24e8;
            case 0x4B24F4u: goto label_4b24f4;
            case 0x4B2508u: goto label_4b2508;
            case 0x4B251Cu: goto label_4b251c;
            case 0x4B2598u: goto label_4b2598;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B24E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B24E8u;
label_4b24e8:
    // 0x4b24e8: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x4b24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_4b24ec:
    // 0x4b24ec: 0x10000011  b           . + 4 + (0x11 << 2)
label_4b24f0:
    if (ctx->pc == 0x4B24F0u) {
        ctx->pc = 0x4B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24ECu;
        // 0x4b24f0: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24F4u;
        goto label_4b24f4;
    }
    ctx->pc = 0x4B24ECu;
    {
        const bool branch_taken_0x4b24ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24ECu;
        // 0x4b24f0: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b24ec) {
            ctx->pc = 0x4B2534u;
            goto label_4b2534;
        }
    }
    ctx->pc = 0x4B24F4u;
label_4b24f4:
    // 0x4b24f4: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x4b24f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_4b24f8:
    // 0x4b24f8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4b24fc:
    if (ctx->pc == 0x4B24FCu) {
        ctx->pc = 0x4B24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24F8u;
        // 0x4b24fc: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2500u;
        goto label_4b2500;
    }
    ctx->pc = 0x4B24F8u;
    {
        const bool branch_taken_0x4b24f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24F8u;
        // 0x4b24fc: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b24f8) {
            ctx->pc = 0x4B2598u;
            goto label_4b2598;
        }
    }
    ctx->pc = 0x4B2500u;
label_4b2500:
    // 0x4b2500: 0x1000000c  b           . + 4 + (0xC << 2)
label_4b2504:
    if (ctx->pc == 0x4B2504u) {
        ctx->pc = 0x4B2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2500u;
        // 0x4b2504: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2508u;
        goto label_4b2508;
    }
    ctx->pc = 0x4B2500u;
    {
        const bool branch_taken_0x4b2500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2500u;
        // 0x4b2504: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2500) {
            ctx->pc = 0x4B2534u;
            goto label_4b2534;
        }
    }
    ctx->pc = 0x4B2508u;
label_4b2508:
    // 0x4b2508: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x4b2508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_4b250c:
    // 0x4b250c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_4b2510:
    if (ctx->pc == 0x4B2510u) {
        ctx->pc = 0x4B2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B250Cu;
        // 0x4b2510: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2514u;
        goto label_4b2514;
    }
    ctx->pc = 0x4B250Cu;
    {
        const bool branch_taken_0x4b250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B250Cu;
        // 0x4b2510: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b250c) {
            ctx->pc = 0x4B2598u;
            goto label_4b2598;
        }
    }
    ctx->pc = 0x4B2514u;
label_4b2514:
    // 0x4b2514: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b2518:
    if (ctx->pc == 0x4B2518u) {
        ctx->pc = 0x4B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2514u;
        // 0x4b2518: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B251Cu;
        goto label_4b251c;
    }
    ctx->pc = 0x4B2514u;
    {
        const bool branch_taken_0x4b2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2514u;
        // 0x4b2518: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2514) {
            ctx->pc = 0x4B2534u;
            goto label_4b2534;
        }
    }
    ctx->pc = 0x4B251Cu;
label_4b251c:
    // 0x4b251c: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x4b251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_4b2520:
    // 0x4b2520: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x4b2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4b2524:
    // 0x4b2524: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_4b2528:
    if (ctx->pc == 0x4B2528u) {
        ctx->pc = 0x4B2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2524u;
        // 0x4b2528: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B252Cu;
        goto label_4b252c;
    }
    ctx->pc = 0x4B2524u;
    {
        const bool branch_taken_0x4b2524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2524u;
        // 0x4b2528: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2524) {
            ctx->pc = 0x4B2598u;
            goto label_4b2598;
        }
    }
    ctx->pc = 0x4B252Cu;
label_4b252c:
    // 0x4b252c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4b252cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_4b2530:
    // 0x4b2530: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x4b2530u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_4b2534:
    // 0x4b2534: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x4b2534u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
label_4b2538:
    // 0x4b2538: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b2538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b253c:
    // 0x4b253c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4b253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b2540:
    // 0x4b2540: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4b2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4b2544:
    // 0x4b2544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b2548:
    // 0x4b2548: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4b2548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b254c:
    // 0x4b254c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4b2550:
    if (ctx->pc == 0x4B2550u) {
        ctx->pc = 0x4B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B254Cu;
        // 0x4b2550: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2554u;
        goto label_4b2554;
    }
    ctx->pc = 0x4B254Cu;
    {
        const bool branch_taken_0x4b254c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B254Cu;
        // 0x4b2550: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b254c) {
            ctx->pc = 0x4B2568u;
            goto label_4b2568;
        }
    }
    ctx->pc = 0x4B2554u;
label_4b2554:
    // 0x4b2554: 0xc12c326  jal         func_4B0C98
label_4b2558:
    if (ctx->pc == 0x4B2558u) {
        ctx->pc = 0x4B2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2554u;
        // 0x4b2558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B255Cu;
        goto label_4b255c;
    }
    ctx->pc = 0x4B2554u;
    SET_GPR_U32(ctx, 31, 0x4B255Cu);
    ctx->pc = 0x4B2558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2554u;
    // 0x4b2558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B2554u, 0x4B255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B255Cu;
label_4b255c:
    // 0x4b255c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2560:
    // 0x4b2560: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_4b2564:
    if (ctx->pc == 0x4B2564u) {
        ctx->pc = 0x4B2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2560u;
        // 0x4b2564: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2568u;
        goto label_4b2568;
    }
    ctx->pc = 0x4B2560u;
    {
        const bool branch_taken_0x4b2560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2560u;
        // 0x4b2564: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2560) {
            ctx->pc = 0x4B2584u;
            goto label_4b2584;
        }
    }
    ctx->pc = 0x4B2568u;
label_4b2568:
    // 0x4b2568: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4b2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b256c:
    // 0x4b256c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4b256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2570:
    // 0x4b2570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b2570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b2574:
    // 0x4b2574: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4b2574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b2578:
    // 0x4b2578: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_4b257c:
    if (ctx->pc == 0x4B257Cu) {
        ctx->pc = 0x4B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2578u;
        // 0x4b257c: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2580u;
        goto label_4b2580;
    }
    ctx->pc = 0x4B2578u;
    {
        const bool branch_taken_0x4b2578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b2578) {
            ctx->pc = 0x4B257Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2578u;
            // 0x4b257c: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2590u;
            goto label_4b2590;
        }
    }
    ctx->pc = 0x4B2580u;
label_4b2580:
    // 0x4b2580: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x4b2580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4b2584:
    // 0x4b2584: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b2584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b2588:
    // 0x4b2588: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b258c:
    if (ctx->pc == 0x4B258Cu) {
        ctx->pc = 0x4B258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2588u;
        // 0x4b258c: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2590u;
        goto label_4b2590;
    }
    ctx->pc = 0x4B2588u;
    {
        const bool branch_taken_0x4b2588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2588u;
        // 0x4b258c: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2588) {
            ctx->pc = 0x4B2598u;
            goto label_4b2598;
        }
    }
    ctx->pc = 0x4B2590u;
label_4b2590:
    // 0x4b2590: 0x56a0ffcb  bnel        $s5, $zero, . + 4 + (-0x35 << 2)
label_4b2594:
    if (ctx->pc == 0x4B2594u) {
        ctx->pc = 0x4B2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2590u;
        // 0x4b2594: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2598u;
        goto label_4b2598;
    }
    ctx->pc = 0x4B2590u;
    {
        const bool branch_taken_0x4b2590 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2590) {
            ctx->pc = 0x4B2594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2590u;
            // 0x4b2594: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B24C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b24c0;
        }
    }
    ctx->pc = 0x4B2598u;
label_4b2598:
    // 0x4b2598: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x4b2598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_4b259c:
    // 0x4b259c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_4b25a0:
    if (ctx->pc == 0x4B25A0u) {
        ctx->pc = 0x4B25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B259Cu;
        // 0x4b25a0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25A4u;
        goto label_4b25a4;
    }
    ctx->pc = 0x4B259Cu;
    {
        const bool branch_taken_0x4b259c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B259Cu;
        // 0x4b25a0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b259c) {
            ctx->pc = 0x4B2610u;
            goto label_4b2610;
        }
    }
    ctx->pc = 0x4B25A4u;
label_4b25a4:
    // 0x4b25a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4b25a8:
    if (ctx->pc == 0x4B25A8u) {
        ctx->pc = 0x4B25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25A4u;
        // 0x4b25a8: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25ACu;
        goto label_4b25ac;
    }
    ctx->pc = 0x4B25A4u;
    {
        const bool branch_taken_0x4b25a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25A4u;
        // 0x4b25a8: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25a4) {
            ctx->pc = 0x4B25D8u;
            goto label_4b25d8;
        }
    }
    ctx->pc = 0x4B25ACu;
label_4b25ac:
    // 0x4b25ac: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_4b25b0:
    if (ctx->pc == 0x4B25B0u) {
        ctx->pc = 0x4B25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25ACu;
        // 0x4b25b0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25B4u;
        goto label_4b25b4;
    }
    ctx->pc = 0x4B25ACu;
    {
        const bool branch_taken_0x4b25ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25ACu;
        // 0x4b25b0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25ac) {
            ctx->pc = 0x4B26A4u;
            goto label_4b26a4;
        }
    }
    ctx->pc = 0x4B25B4u;
label_4b25b4:
    // 0x4b25b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b25b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4b25b8:
    // 0x4b25b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b25b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b25bc:
    // 0x4b25bc: 0xc12cc64  jal         func_4B3190
label_4b25c0:
    if (ctx->pc == 0x4B25C0u) {
        ctx->pc = 0x4B25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25BCu;
        // 0x4b25c0: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25C4u;
        goto label_4b25c4;
    }
    ctx->pc = 0x4B25BCu;
    SET_GPR_U32(ctx, 31, 0x4B25C4u);
    ctx->pc = 0x4B25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B25BCu;
    // 0x4b25c0: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3190u, 0x4B25BCu, 0x4B25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B25C4u;
label_4b25c4:
    // 0x4b25c4: 0x3d2182b  sltu        $v1, $fp, $s2
    ctx->pc = 0x4b25c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4b25c8:
    // 0x4b25c8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_4b25cc:
    if (ctx->pc == 0x4B25CCu) {
        ctx->pc = 0x4B25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25C8u;
        // 0x4b25cc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25D0u;
        goto label_4b25d0;
    }
    ctx->pc = 0x4B25C8u;
    {
        const bool branch_taken_0x4b25c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25C8u;
        // 0x4b25cc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25c8) {
            ctx->pc = 0x4B25B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b25b8;
        }
    }
    ctx->pc = 0x4B25D0u;
label_4b25d0:
    // 0x4b25d0: 0x10000034  b           . + 4 + (0x34 << 2)
label_4b25d4:
    if (ctx->pc == 0x4B25D4u) {
        ctx->pc = 0x4B25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25D0u;
        // 0x4b25d4: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25D8u;
        goto label_4b25d8;
    }
    ctx->pc = 0x4B25D0u;
    {
        const bool branch_taken_0x4b25d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25D0u;
        // 0x4b25d4: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25d0) {
            ctx->pc = 0x4B26A4u;
            goto label_4b26a4;
        }
    }
    ctx->pc = 0x4B25D8u;
label_4b25d8:
    // 0x4b25d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b25d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4b25dc:
    // 0x4b25dc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x4b25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_4b25e0:
    // 0x4b25e0: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x4b25e0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4b25e4:
    // 0x4b25e4: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_4b25e8:
    if (ctx->pc == 0x4B25E8u) {
        ctx->pc = 0x4B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25E4u;
        // 0x4b25e8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25ECu;
        goto label_4b25ec;
    }
    ctx->pc = 0x4B25E4u;
    {
        const bool branch_taken_0x4b25e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25E4u;
        // 0x4b25e8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25e4) {
            ctx->pc = 0x4B2604u;
            goto label_4b2604;
        }
    }
    ctx->pc = 0x4B25ECu;
label_4b25ec:
    // 0x4b25ec: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_4b25f0:
    if (ctx->pc == 0x4B25F0u) {
        ctx->pc = 0x4B25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25ECu;
        // 0x4b25f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25F4u;
        goto label_4b25f4;
    }
    ctx->pc = 0x4B25ECu;
    {
        const bool branch_taken_0x4b25ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25ECu;
        // 0x4b25f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25ec) {
            ctx->pc = 0x4B2604u;
            goto label_4b2604;
        }
    }
    ctx->pc = 0x4B25F4u;
label_4b25f4:
    // 0x4b25f4: 0xc12cc64  jal         func_4B3190
label_4b25f8:
    if (ctx->pc == 0x4B25F8u) {
        ctx->pc = 0x4B25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25F4u;
        // 0x4b25f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B25FCu;
        goto label_4b25fc;
    }
    ctx->pc = 0x4B25F4u;
    SET_GPR_U32(ctx, 31, 0x4B25FCu);
    ctx->pc = 0x4B25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B25F4u;
    // 0x4b25f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3190u, 0x4B25F4u, 0x4B25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B25FCu;
label_4b25fc:
    // 0x4b25fc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b25fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4b2600:
    // 0x4b2600: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x4b2600u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4b2604:
    // 0x4b2604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b2604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2608:
    // 0x4b2608: 0xc12cc64  jal         func_4B3190
label_4b260c:
    if (ctx->pc == 0x4B260Cu) {
        ctx->pc = 0x4B260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2608u;
        // 0x4b260c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2610u;
        goto label_4b2610;
    }
    ctx->pc = 0x4B2608u;
    SET_GPR_U32(ctx, 31, 0x4B2610u);
    ctx->pc = 0x4B260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2608u;
    // 0x4b260c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3190u, 0x4B2608u, 0x4B2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2610u;
label_4b2610:
    // 0x4b2610: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x4b2610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4b2614:
    // 0x4b2614: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_4b2618:
    if (ctx->pc == 0x4B2618u) {
        ctx->pc = 0x4B2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2614u;
        // 0x4b2618: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B261Cu;
        goto label_4b261c;
    }
    ctx->pc = 0x4B2614u;
    {
        const bool branch_taken_0x4b2614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2614u;
        // 0x4b2618: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2614) {
            ctx->pc = 0x4B266Cu;
            goto label_4b266c;
        }
    }
    ctx->pc = 0x4B261Cu;
label_4b261c:
    // 0x4b261c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x4b261cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_4b2620:
    // 0x4b2620: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b2620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4b2624:
    // 0x4b2624: 0xc12d2b2  jal         func_4B4AC8
label_4b2628:
    if (ctx->pc == 0x4B2628u) {
        ctx->pc = 0x4B2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2624u;
        // 0x4b2628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B262Cu;
        goto label_4b262c;
    }
    ctx->pc = 0x4B2624u;
    SET_GPR_U32(ctx, 31, 0x4B262Cu);
    ctx->pc = 0x4B2628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2624u;
    // 0x4b2628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4AC8u, 0x4B2624u, 0x4B262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B262Cu;
label_4b262c:
    // 0x4b262c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b2630:
    // 0x4b2630: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x4b2630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_4b2634:
    // 0x4b2634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b2638:
    if (ctx->pc == 0x4B2638u) {
        ctx->pc = 0x4B263Cu;
        goto label_4b263c;
    }
    ctx->pc = 0x4B2634u;
    {
        const bool branch_taken_0x4b2634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2634) {
            ctx->pc = 0x4B264Cu;
            goto label_4b264c;
        }
    }
    ctx->pc = 0x4B263Cu;
label_4b263c:
    // 0x4b263c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4b263cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_4b2640:
    // 0x4b2640: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x4b2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b2644:
    // 0x4b2644: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b2648:
    if (ctx->pc == 0x4B2648u) {
        ctx->pc = 0x4B2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2644u;
        // 0x4b2648: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B264Cu;
        goto label_4b264c;
    }
    ctx->pc = 0x4B2644u;
    {
        const bool branch_taken_0x4b2644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2644u;
        // 0x4b2648: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2644) {
            ctx->pc = 0x4B265Cu;
            goto label_4b265c;
        }
    }
    ctx->pc = 0x4B264Cu;
label_4b264c:
    // 0x4b264c: 0xc10b13c  jal         func_42C4F0
label_4b2650:
    if (ctx->pc == 0x4B2650u) {
        ctx->pc = 0x4B2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B264Cu;
        // 0x4b2650: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2654u;
        goto label_4b2654;
    }
    ctx->pc = 0x4B264Cu;
    SET_GPR_U32(ctx, 31, 0x4B2654u);
    ctx->pc = 0x4B2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B264Cu;
    // 0x4b2650: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B264Cu, 0x4B2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2654u;
label_4b2654:
    // 0x4b2654: 0x8ed0fff8  lw          $s0, -0x8($s6)
    ctx->pc = 0x4b2654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_4b2658:
    // 0x4b2658: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4b2658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_4b265c:
    // 0x4b265c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x4b265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b2660:
    // 0x4b2660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b2660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b2664:
    // 0x4b2664: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x4b2664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_4b2668:
    // 0x4b2668: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x4b2668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4b266c:
    // 0x4b266c: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x4b266cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_4b2670:
    // 0x4b2670: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x4b2670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4b2674:
    // 0x4b2674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b2678:
    // 0x4b2678: 0x1000fce4  b           . + 4 + (-0x31C << 2)
label_4b267c:
    if (ctx->pc == 0x4B267Cu) {
        ctx->pc = 0x4B267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2678u;
        // 0x4b267c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2680u;
        goto label_4b2680;
    }
    ctx->pc = 0x4B2678u;
    {
        const bool branch_taken_0x4b2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2678u;
        // 0x4b267c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2678) {
            ctx->pc = 0x4B1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1a0c;
        }
    }
    ctx->pc = 0x4B2680u;
label_4b2680:
    // 0x4b2680: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x4b2680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4b2684:
    // 0x4b2684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b2684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2688:
    // 0x4b2688: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x4b2688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b268c:
    // 0x4b268c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b2690:
    // 0x4b2690: 0xafa40274  sw          $a0, 0x274($sp)
    ctx->pc = 0x4b2690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
label_4b2694:
    // 0x4b2694: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b2694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4b2698:
    // 0x4b2698: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x4b2698u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_4b269c:
    // 0x4b269c: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x4b269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_4b26a0:
    // 0x4b26a0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x4b26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_4b26a4:
    // 0x4b26a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4b26a8:
    if (ctx->pc == 0x4B26A8u) {
        ctx->pc = 0x4B26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B26A4u;
        // 0x4b26a8: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B26ACu;
        goto label_4b26ac;
    }
    ctx->pc = 0x4B26A4u;
    {
        const bool branch_taken_0x4b26a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B26A4u;
        // 0x4b26a8: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b26a4) {
            ctx->pc = 0x4B26D8u;
            goto label_4b26d8;
        }
    }
    ctx->pc = 0x4B26ACu;
label_4b26ac:
    // 0x4b26ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b26acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b26b0:
    // 0x4b26b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4b26b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4b26b4:
    // 0x4b26b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4b26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4b26b8:
    // 0x4b26b8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x4b26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_4b26bc:
    // 0x4b26bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4b26c0:
    if (ctx->pc == 0x4B26C0u) {
        ctx->pc = 0x4B26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B26BCu;
        // 0x4b26c0: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B26C4u;
        goto label_4b26c4;
    }
    ctx->pc = 0x4B26BCu;
    {
        const bool branch_taken_0x4b26bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B26BCu;
        // 0x4b26c0: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b26bc) {
            ctx->pc = 0x4B26D8u;
            goto label_4b26d8;
        }
    }
    ctx->pc = 0x4B26C4u;
label_4b26c4:
    // 0x4b26c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b26c8:
    if (ctx->pc == 0x4B26C8u) {
        ctx->pc = 0x4B26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B26C4u;
        // 0x4b26c8: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B26CCu;
        goto label_4b26cc;
    }
    ctx->pc = 0x4B26C4u;
    {
        const bool branch_taken_0x4b26c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B26C4u;
        // 0x4b26c8: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b26c4) {
            ctx->pc = 0x4B26DCu;
            goto label_4b26dc;
        }
    }
    ctx->pc = 0x4B26CCu;
label_4b26cc:
    // 0x4b26cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b26d0:
    // 0x4b26d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4b26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4b26d4:
    // 0x4b26d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b26d8:
    // 0x4b26d8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x4b26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4b26dc:
    // 0x4b26dc: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x4b26dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_4b26e0:
    // 0x4b26e0: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x4b26e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_4b26e4:
    // 0x4b26e4: 0xdfb702f0  ld          $s7, 0x2F0($sp)
    ctx->pc = 0x4b26e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_4b26e8:
    // 0x4b26e8: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x4b26e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_4b26ec:
    // 0x4b26ec: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x4b26ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_4b26f0:
    // 0x4b26f0: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x4b26f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_4b26f4:
    // 0x4b26f4: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x4b26f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_4b26f8:
    // 0x4b26f8: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x4b26f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_4b26fc:
    // 0x4b26fc: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x4b26fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_4b2700:
    // 0x4b2700: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x4b2700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_4b2704:
    // 0x4b2704: 0x3e00008  jr          $ra
label_4b2708:
    if (ctx->pc == 0x4B2708u) {
        ctx->pc = 0x4B2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2704u;
        // 0x4b2708: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B270Cu;
        goto label_4b270c;
    }
    ctx->pc = 0x4B2704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2704u;
        // 0x4b2708: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B270Cu;
label_4b270c:
    // 0x4b270c: 0x0  nop
    ctx->pc = 0x4b270cu;
    // NOP
    ctx->pc = 0x4b2710u;
}
