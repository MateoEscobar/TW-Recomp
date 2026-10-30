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

// Function: sub_003D1908
// Address: 0x3d1908 - 0x3d1f38
void sub_003D1908_0x3d1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1908_0x3d1908");
#endif

    switch (ctx->pc) {
        case 0x3d1908u: goto label_3d1908;
        case 0x3d190cu: goto label_3d190c;
        case 0x3d1910u: goto label_3d1910;
        case 0x3d1914u: goto label_3d1914;
        case 0x3d1918u: goto label_3d1918;
        case 0x3d191cu: goto label_3d191c;
        case 0x3d1920u: goto label_3d1920;
        case 0x3d1924u: goto label_3d1924;
        case 0x3d1928u: goto label_3d1928;
        case 0x3d192cu: goto label_3d192c;
        case 0x3d1930u: goto label_3d1930;
        case 0x3d1934u: goto label_3d1934;
        case 0x3d1938u: goto label_3d1938;
        case 0x3d193cu: goto label_3d193c;
        case 0x3d1940u: goto label_3d1940;
        case 0x3d1944u: goto label_3d1944;
        case 0x3d1948u: goto label_3d1948;
        case 0x3d194cu: goto label_3d194c;
        case 0x3d1950u: goto label_3d1950;
        case 0x3d1954u: goto label_3d1954;
        case 0x3d1958u: goto label_3d1958;
        case 0x3d195cu: goto label_3d195c;
        case 0x3d1960u: goto label_3d1960;
        case 0x3d1964u: goto label_3d1964;
        case 0x3d1968u: goto label_3d1968;
        case 0x3d196cu: goto label_3d196c;
        case 0x3d1970u: goto label_3d1970;
        case 0x3d1974u: goto label_3d1974;
        case 0x3d1978u: goto label_3d1978;
        case 0x3d197cu: goto label_3d197c;
        case 0x3d1980u: goto label_3d1980;
        case 0x3d1984u: goto label_3d1984;
        case 0x3d1988u: goto label_3d1988;
        case 0x3d198cu: goto label_3d198c;
        case 0x3d1990u: goto label_3d1990;
        case 0x3d1994u: goto label_3d1994;
        case 0x3d1998u: goto label_3d1998;
        case 0x3d199cu: goto label_3d199c;
        case 0x3d19a0u: goto label_3d19a0;
        case 0x3d19a4u: goto label_3d19a4;
        case 0x3d19a8u: goto label_3d19a8;
        case 0x3d19acu: goto label_3d19ac;
        case 0x3d19b0u: goto label_3d19b0;
        case 0x3d19b4u: goto label_3d19b4;
        case 0x3d19b8u: goto label_3d19b8;
        case 0x3d19bcu: goto label_3d19bc;
        case 0x3d19c0u: goto label_3d19c0;
        case 0x3d19c4u: goto label_3d19c4;
        case 0x3d19c8u: goto label_3d19c8;
        case 0x3d19ccu: goto label_3d19cc;
        case 0x3d19d0u: goto label_3d19d0;
        case 0x3d19d4u: goto label_3d19d4;
        case 0x3d19d8u: goto label_3d19d8;
        case 0x3d19dcu: goto label_3d19dc;
        case 0x3d19e0u: goto label_3d19e0;
        case 0x3d19e4u: goto label_3d19e4;
        case 0x3d19e8u: goto label_3d19e8;
        case 0x3d19ecu: goto label_3d19ec;
        case 0x3d19f0u: goto label_3d19f0;
        case 0x3d19f4u: goto label_3d19f4;
        case 0x3d19f8u: goto label_3d19f8;
        case 0x3d19fcu: goto label_3d19fc;
        case 0x3d1a00u: goto label_3d1a00;
        case 0x3d1a04u: goto label_3d1a04;
        case 0x3d1a08u: goto label_3d1a08;
        case 0x3d1a0cu: goto label_3d1a0c;
        case 0x3d1a10u: goto label_3d1a10;
        case 0x3d1a14u: goto label_3d1a14;
        case 0x3d1a18u: goto label_3d1a18;
        case 0x3d1a1cu: goto label_3d1a1c;
        case 0x3d1a20u: goto label_3d1a20;
        case 0x3d1a24u: goto label_3d1a24;
        case 0x3d1a28u: goto label_3d1a28;
        case 0x3d1a2cu: goto label_3d1a2c;
        case 0x3d1a30u: goto label_3d1a30;
        case 0x3d1a34u: goto label_3d1a34;
        case 0x3d1a38u: goto label_3d1a38;
        case 0x3d1a3cu: goto label_3d1a3c;
        case 0x3d1a40u: goto label_3d1a40;
        case 0x3d1a44u: goto label_3d1a44;
        case 0x3d1a48u: goto label_3d1a48;
        case 0x3d1a4cu: goto label_3d1a4c;
        case 0x3d1a50u: goto label_3d1a50;
        case 0x3d1a54u: goto label_3d1a54;
        case 0x3d1a58u: goto label_3d1a58;
        case 0x3d1a5cu: goto label_3d1a5c;
        case 0x3d1a60u: goto label_3d1a60;
        case 0x3d1a64u: goto label_3d1a64;
        case 0x3d1a68u: goto label_3d1a68;
        case 0x3d1a6cu: goto label_3d1a6c;
        case 0x3d1a70u: goto label_3d1a70;
        case 0x3d1a74u: goto label_3d1a74;
        case 0x3d1a78u: goto label_3d1a78;
        case 0x3d1a7cu: goto label_3d1a7c;
        case 0x3d1a80u: goto label_3d1a80;
        case 0x3d1a84u: goto label_3d1a84;
        case 0x3d1a88u: goto label_3d1a88;
        case 0x3d1a8cu: goto label_3d1a8c;
        case 0x3d1a90u: goto label_3d1a90;
        case 0x3d1a94u: goto label_3d1a94;
        case 0x3d1a98u: goto label_3d1a98;
        case 0x3d1a9cu: goto label_3d1a9c;
        case 0x3d1aa0u: goto label_3d1aa0;
        case 0x3d1aa4u: goto label_3d1aa4;
        case 0x3d1aa8u: goto label_3d1aa8;
        case 0x3d1aacu: goto label_3d1aac;
        case 0x3d1ab0u: goto label_3d1ab0;
        case 0x3d1ab4u: goto label_3d1ab4;
        case 0x3d1ab8u: goto label_3d1ab8;
        case 0x3d1abcu: goto label_3d1abc;
        case 0x3d1ac0u: goto label_3d1ac0;
        case 0x3d1ac4u: goto label_3d1ac4;
        case 0x3d1ac8u: goto label_3d1ac8;
        case 0x3d1accu: goto label_3d1acc;
        case 0x3d1ad0u: goto label_3d1ad0;
        case 0x3d1ad4u: goto label_3d1ad4;
        case 0x3d1ad8u: goto label_3d1ad8;
        case 0x3d1adcu: goto label_3d1adc;
        case 0x3d1ae0u: goto label_3d1ae0;
        case 0x3d1ae4u: goto label_3d1ae4;
        case 0x3d1ae8u: goto label_3d1ae8;
        case 0x3d1aecu: goto label_3d1aec;
        case 0x3d1af0u: goto label_3d1af0;
        case 0x3d1af4u: goto label_3d1af4;
        case 0x3d1af8u: goto label_3d1af8;
        case 0x3d1afcu: goto label_3d1afc;
        case 0x3d1b00u: goto label_3d1b00;
        case 0x3d1b04u: goto label_3d1b04;
        case 0x3d1b08u: goto label_3d1b08;
        case 0x3d1b0cu: goto label_3d1b0c;
        case 0x3d1b10u: goto label_3d1b10;
        case 0x3d1b14u: goto label_3d1b14;
        case 0x3d1b18u: goto label_3d1b18;
        case 0x3d1b1cu: goto label_3d1b1c;
        case 0x3d1b20u: goto label_3d1b20;
        case 0x3d1b24u: goto label_3d1b24;
        case 0x3d1b28u: goto label_3d1b28;
        case 0x3d1b2cu: goto label_3d1b2c;
        case 0x3d1b30u: goto label_3d1b30;
        case 0x3d1b34u: goto label_3d1b34;
        case 0x3d1b38u: goto label_3d1b38;
        case 0x3d1b3cu: goto label_3d1b3c;
        case 0x3d1b40u: goto label_3d1b40;
        case 0x3d1b44u: goto label_3d1b44;
        case 0x3d1b48u: goto label_3d1b48;
        case 0x3d1b4cu: goto label_3d1b4c;
        case 0x3d1b50u: goto label_3d1b50;
        case 0x3d1b54u: goto label_3d1b54;
        case 0x3d1b58u: goto label_3d1b58;
        case 0x3d1b5cu: goto label_3d1b5c;
        case 0x3d1b60u: goto label_3d1b60;
        case 0x3d1b64u: goto label_3d1b64;
        case 0x3d1b68u: goto label_3d1b68;
        case 0x3d1b6cu: goto label_3d1b6c;
        case 0x3d1b70u: goto label_3d1b70;
        case 0x3d1b74u: goto label_3d1b74;
        case 0x3d1b78u: goto label_3d1b78;
        case 0x3d1b7cu: goto label_3d1b7c;
        case 0x3d1b80u: goto label_3d1b80;
        case 0x3d1b84u: goto label_3d1b84;
        case 0x3d1b88u: goto label_3d1b88;
        case 0x3d1b8cu: goto label_3d1b8c;
        case 0x3d1b90u: goto label_3d1b90;
        case 0x3d1b94u: goto label_3d1b94;
        case 0x3d1b98u: goto label_3d1b98;
        case 0x3d1b9cu: goto label_3d1b9c;
        case 0x3d1ba0u: goto label_3d1ba0;
        case 0x3d1ba4u: goto label_3d1ba4;
        case 0x3d1ba8u: goto label_3d1ba8;
        case 0x3d1bacu: goto label_3d1bac;
        case 0x3d1bb0u: goto label_3d1bb0;
        case 0x3d1bb4u: goto label_3d1bb4;
        case 0x3d1bb8u: goto label_3d1bb8;
        case 0x3d1bbcu: goto label_3d1bbc;
        case 0x3d1bc0u: goto label_3d1bc0;
        case 0x3d1bc4u: goto label_3d1bc4;
        case 0x3d1bc8u: goto label_3d1bc8;
        case 0x3d1bccu: goto label_3d1bcc;
        case 0x3d1bd0u: goto label_3d1bd0;
        case 0x3d1bd4u: goto label_3d1bd4;
        case 0x3d1bd8u: goto label_3d1bd8;
        case 0x3d1bdcu: goto label_3d1bdc;
        case 0x3d1be0u: goto label_3d1be0;
        case 0x3d1be4u: goto label_3d1be4;
        case 0x3d1be8u: goto label_3d1be8;
        case 0x3d1becu: goto label_3d1bec;
        case 0x3d1bf0u: goto label_3d1bf0;
        case 0x3d1bf4u: goto label_3d1bf4;
        case 0x3d1bf8u: goto label_3d1bf8;
        case 0x3d1bfcu: goto label_3d1bfc;
        case 0x3d1c00u: goto label_3d1c00;
        case 0x3d1c04u: goto label_3d1c04;
        case 0x3d1c08u: goto label_3d1c08;
        case 0x3d1c0cu: goto label_3d1c0c;
        case 0x3d1c10u: goto label_3d1c10;
        case 0x3d1c14u: goto label_3d1c14;
        case 0x3d1c18u: goto label_3d1c18;
        case 0x3d1c1cu: goto label_3d1c1c;
        case 0x3d1c20u: goto label_3d1c20;
        case 0x3d1c24u: goto label_3d1c24;
        case 0x3d1c28u: goto label_3d1c28;
        case 0x3d1c2cu: goto label_3d1c2c;
        case 0x3d1c30u: goto label_3d1c30;
        case 0x3d1c34u: goto label_3d1c34;
        case 0x3d1c38u: goto label_3d1c38;
        case 0x3d1c3cu: goto label_3d1c3c;
        case 0x3d1c40u: goto label_3d1c40;
        case 0x3d1c44u: goto label_3d1c44;
        case 0x3d1c48u: goto label_3d1c48;
        case 0x3d1c4cu: goto label_3d1c4c;
        case 0x3d1c50u: goto label_3d1c50;
        case 0x3d1c54u: goto label_3d1c54;
        case 0x3d1c58u: goto label_3d1c58;
        case 0x3d1c5cu: goto label_3d1c5c;
        case 0x3d1c60u: goto label_3d1c60;
        case 0x3d1c64u: goto label_3d1c64;
        case 0x3d1c68u: goto label_3d1c68;
        case 0x3d1c6cu: goto label_3d1c6c;
        case 0x3d1c70u: goto label_3d1c70;
        case 0x3d1c74u: goto label_3d1c74;
        case 0x3d1c78u: goto label_3d1c78;
        case 0x3d1c7cu: goto label_3d1c7c;
        case 0x3d1c80u: goto label_3d1c80;
        case 0x3d1c84u: goto label_3d1c84;
        case 0x3d1c88u: goto label_3d1c88;
        case 0x3d1c8cu: goto label_3d1c8c;
        case 0x3d1c90u: goto label_3d1c90;
        case 0x3d1c94u: goto label_3d1c94;
        case 0x3d1c98u: goto label_3d1c98;
        case 0x3d1c9cu: goto label_3d1c9c;
        case 0x3d1ca0u: goto label_3d1ca0;
        case 0x3d1ca4u: goto label_3d1ca4;
        case 0x3d1ca8u: goto label_3d1ca8;
        case 0x3d1cacu: goto label_3d1cac;
        case 0x3d1cb0u: goto label_3d1cb0;
        case 0x3d1cb4u: goto label_3d1cb4;
        case 0x3d1cb8u: goto label_3d1cb8;
        case 0x3d1cbcu: goto label_3d1cbc;
        case 0x3d1cc0u: goto label_3d1cc0;
        case 0x3d1cc4u: goto label_3d1cc4;
        case 0x3d1cc8u: goto label_3d1cc8;
        case 0x3d1cccu: goto label_3d1ccc;
        case 0x3d1cd0u: goto label_3d1cd0;
        case 0x3d1cd4u: goto label_3d1cd4;
        case 0x3d1cd8u: goto label_3d1cd8;
        case 0x3d1cdcu: goto label_3d1cdc;
        case 0x3d1ce0u: goto label_3d1ce0;
        case 0x3d1ce4u: goto label_3d1ce4;
        case 0x3d1ce8u: goto label_3d1ce8;
        case 0x3d1cecu: goto label_3d1cec;
        case 0x3d1cf0u: goto label_3d1cf0;
        case 0x3d1cf4u: goto label_3d1cf4;
        case 0x3d1cf8u: goto label_3d1cf8;
        case 0x3d1cfcu: goto label_3d1cfc;
        case 0x3d1d00u: goto label_3d1d00;
        case 0x3d1d04u: goto label_3d1d04;
        case 0x3d1d08u: goto label_3d1d08;
        case 0x3d1d0cu: goto label_3d1d0c;
        case 0x3d1d10u: goto label_3d1d10;
        case 0x3d1d14u: goto label_3d1d14;
        case 0x3d1d18u: goto label_3d1d18;
        case 0x3d1d1cu: goto label_3d1d1c;
        case 0x3d1d20u: goto label_3d1d20;
        case 0x3d1d24u: goto label_3d1d24;
        case 0x3d1d28u: goto label_3d1d28;
        case 0x3d1d2cu: goto label_3d1d2c;
        case 0x3d1d30u: goto label_3d1d30;
        case 0x3d1d34u: goto label_3d1d34;
        case 0x3d1d38u: goto label_3d1d38;
        case 0x3d1d3cu: goto label_3d1d3c;
        case 0x3d1d40u: goto label_3d1d40;
        case 0x3d1d44u: goto label_3d1d44;
        case 0x3d1d48u: goto label_3d1d48;
        case 0x3d1d4cu: goto label_3d1d4c;
        case 0x3d1d50u: goto label_3d1d50;
        case 0x3d1d54u: goto label_3d1d54;
        case 0x3d1d58u: goto label_3d1d58;
        case 0x3d1d5cu: goto label_3d1d5c;
        case 0x3d1d60u: goto label_3d1d60;
        case 0x3d1d64u: goto label_3d1d64;
        case 0x3d1d68u: goto label_3d1d68;
        case 0x3d1d6cu: goto label_3d1d6c;
        case 0x3d1d70u: goto label_3d1d70;
        case 0x3d1d74u: goto label_3d1d74;
        case 0x3d1d78u: goto label_3d1d78;
        case 0x3d1d7cu: goto label_3d1d7c;
        case 0x3d1d80u: goto label_3d1d80;
        case 0x3d1d84u: goto label_3d1d84;
        case 0x3d1d88u: goto label_3d1d88;
        case 0x3d1d8cu: goto label_3d1d8c;
        case 0x3d1d90u: goto label_3d1d90;
        case 0x3d1d94u: goto label_3d1d94;
        case 0x3d1d98u: goto label_3d1d98;
        case 0x3d1d9cu: goto label_3d1d9c;
        case 0x3d1da0u: goto label_3d1da0;
        case 0x3d1da4u: goto label_3d1da4;
        case 0x3d1da8u: goto label_3d1da8;
        case 0x3d1dacu: goto label_3d1dac;
        case 0x3d1db0u: goto label_3d1db0;
        case 0x3d1db4u: goto label_3d1db4;
        case 0x3d1db8u: goto label_3d1db8;
        case 0x3d1dbcu: goto label_3d1dbc;
        case 0x3d1dc0u: goto label_3d1dc0;
        case 0x3d1dc4u: goto label_3d1dc4;
        case 0x3d1dc8u: goto label_3d1dc8;
        case 0x3d1dccu: goto label_3d1dcc;
        case 0x3d1dd0u: goto label_3d1dd0;
        case 0x3d1dd4u: goto label_3d1dd4;
        case 0x3d1dd8u: goto label_3d1dd8;
        case 0x3d1ddcu: goto label_3d1ddc;
        case 0x3d1de0u: goto label_3d1de0;
        case 0x3d1de4u: goto label_3d1de4;
        case 0x3d1de8u: goto label_3d1de8;
        case 0x3d1decu: goto label_3d1dec;
        case 0x3d1df0u: goto label_3d1df0;
        case 0x3d1df4u: goto label_3d1df4;
        case 0x3d1df8u: goto label_3d1df8;
        case 0x3d1dfcu: goto label_3d1dfc;
        case 0x3d1e00u: goto label_3d1e00;
        case 0x3d1e04u: goto label_3d1e04;
        case 0x3d1e08u: goto label_3d1e08;
        case 0x3d1e0cu: goto label_3d1e0c;
        case 0x3d1e10u: goto label_3d1e10;
        case 0x3d1e14u: goto label_3d1e14;
        case 0x3d1e18u: goto label_3d1e18;
        case 0x3d1e1cu: goto label_3d1e1c;
        case 0x3d1e20u: goto label_3d1e20;
        case 0x3d1e24u: goto label_3d1e24;
        case 0x3d1e28u: goto label_3d1e28;
        case 0x3d1e2cu: goto label_3d1e2c;
        case 0x3d1e30u: goto label_3d1e30;
        case 0x3d1e34u: goto label_3d1e34;
        case 0x3d1e38u: goto label_3d1e38;
        case 0x3d1e3cu: goto label_3d1e3c;
        case 0x3d1e40u: goto label_3d1e40;
        case 0x3d1e44u: goto label_3d1e44;
        case 0x3d1e48u: goto label_3d1e48;
        case 0x3d1e4cu: goto label_3d1e4c;
        case 0x3d1e50u: goto label_3d1e50;
        case 0x3d1e54u: goto label_3d1e54;
        case 0x3d1e58u: goto label_3d1e58;
        case 0x3d1e5cu: goto label_3d1e5c;
        case 0x3d1e60u: goto label_3d1e60;
        case 0x3d1e64u: goto label_3d1e64;
        case 0x3d1e68u: goto label_3d1e68;
        case 0x3d1e6cu: goto label_3d1e6c;
        case 0x3d1e70u: goto label_3d1e70;
        case 0x3d1e74u: goto label_3d1e74;
        case 0x3d1e78u: goto label_3d1e78;
        case 0x3d1e7cu: goto label_3d1e7c;
        case 0x3d1e80u: goto label_3d1e80;
        case 0x3d1e84u: goto label_3d1e84;
        case 0x3d1e88u: goto label_3d1e88;
        case 0x3d1e8cu: goto label_3d1e8c;
        case 0x3d1e90u: goto label_3d1e90;
        case 0x3d1e94u: goto label_3d1e94;
        case 0x3d1e98u: goto label_3d1e98;
        case 0x3d1e9cu: goto label_3d1e9c;
        case 0x3d1ea0u: goto label_3d1ea0;
        case 0x3d1ea4u: goto label_3d1ea4;
        case 0x3d1ea8u: goto label_3d1ea8;
        case 0x3d1eacu: goto label_3d1eac;
        case 0x3d1eb0u: goto label_3d1eb0;
        case 0x3d1eb4u: goto label_3d1eb4;
        case 0x3d1eb8u: goto label_3d1eb8;
        case 0x3d1ebcu: goto label_3d1ebc;
        case 0x3d1ec0u: goto label_3d1ec0;
        case 0x3d1ec4u: goto label_3d1ec4;
        case 0x3d1ec8u: goto label_3d1ec8;
        case 0x3d1eccu: goto label_3d1ecc;
        case 0x3d1ed0u: goto label_3d1ed0;
        case 0x3d1ed4u: goto label_3d1ed4;
        case 0x3d1ed8u: goto label_3d1ed8;
        case 0x3d1edcu: goto label_3d1edc;
        case 0x3d1ee0u: goto label_3d1ee0;
        case 0x3d1ee4u: goto label_3d1ee4;
        case 0x3d1ee8u: goto label_3d1ee8;
        case 0x3d1eecu: goto label_3d1eec;
        case 0x3d1ef0u: goto label_3d1ef0;
        case 0x3d1ef4u: goto label_3d1ef4;
        case 0x3d1ef8u: goto label_3d1ef8;
        case 0x3d1efcu: goto label_3d1efc;
        case 0x3d1f00u: goto label_3d1f00;
        case 0x3d1f04u: goto label_3d1f04;
        case 0x3d1f08u: goto label_3d1f08;
        case 0x3d1f0cu: goto label_3d1f0c;
        case 0x3d1f10u: goto label_3d1f10;
        case 0x3d1f14u: goto label_3d1f14;
        case 0x3d1f18u: goto label_3d1f18;
        case 0x3d1f1cu: goto label_3d1f1c;
        case 0x3d1f20u: goto label_3d1f20;
        case 0x3d1f24u: goto label_3d1f24;
        case 0x3d1f28u: goto label_3d1f28;
        case 0x3d1f2cu: goto label_3d1f2c;
        case 0x3d1f30u: goto label_3d1f30;
        case 0x3d1f34u: goto label_3d1f34;
        default: break;
    }

    ctx->pc = 0x3d1908u;

label_3d1908:
    // 0x3d1908: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3d1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3d190c:
    // 0x3d190c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3d190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3d1910:
    // 0x3d1910: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3d1910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3d1914:
    // 0x3d1914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d1914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d1918:
    // 0x3d1918: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3d1918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3d191c:
    // 0x3d191c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d191cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d1920:
    // 0x3d1920: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3d1920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3d1924:
    // 0x3d1924: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d1924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d1928:
    // 0x3d1928: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3d1928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3d192c:
    // 0x3d192c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3d192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3d1930:
    // 0x3d1930: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3d1930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3d1934:
    // 0x3d1934: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3d1934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3d1938:
    // 0x3d1938: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d1938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d193c:
    // 0x3d193c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d193cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d1940:
    // 0x3d1940: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d1944:
    // 0x3d1944: 0x40f809  jalr        $v0
label_3d1948:
    if (ctx->pc == 0x3D1948u) {
        ctx->pc = 0x3D1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1944u;
        // 0x3d1948: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D194Cu;
        goto label_3d194c;
    }
    ctx->pc = 0x3D1944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D194Cu);
        ctx->pc = 0x3D1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1944u;
        // 0x3d1948: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1944u, 0x3D194Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D194Cu;
label_3d194c:
    // 0x3d194c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d194cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1950:
    // 0x3d1950: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x3d1950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_3d1954:
    // 0x3d1954: 0x1040016e  beqz        $v0, . + 4 + (0x16E << 2)
label_3d1958:
    if (ctx->pc == 0x3D1958u) {
        ctx->pc = 0x3D1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1954u;
        // 0x3d1958: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D195Cu;
        goto label_3d195c;
    }
    ctx->pc = 0x3D1954u;
    {
        const bool branch_taken_0x3d1954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1954u;
        // 0x3d1958: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1954) {
            ctx->pc = 0x3D1F10u;
            goto label_3d1f10;
        }
    }
    ctx->pc = 0x3D195Cu;
label_3d195c:
    // 0x3d195c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3d195cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d1960:
    // 0x3d1960: 0x24424bd0  addiu       $v0, $v0, 0x4BD0
    ctx->pc = 0x3d1960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19408));
label_3d1964:
    // 0x3d1964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d1968:
    // 0x3d1968: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d1968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d196c:
    // 0x3d196c: 0x800008  jr          $a0
label_3d1970:
    if (ctx->pc == 0x3D1970u) {
        ctx->pc = 0x3D1974u;
        goto label_3d1974;
    }
    ctx->pc = 0x3D196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D1974u: goto label_3d1974;
            case 0x3D1990u: goto label_3d1990;
            case 0x3D1BB8u: goto label_3d1bb8;
            case 0x3D1BDCu: goto label_3d1bdc;
            case 0x3D1C48u: goto label_3d1c48;
            case 0x3D1CA0u: goto label_3d1ca0;
            case 0x3D1CD8u: goto label_3d1cd8;
            case 0x3D1DB8u: goto label_3d1db8;
            case 0x3D1F10u: goto label_3d1f10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D196Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D1974u;
label_3d1974:
    // 0x3d1974: 0xc0ea146  jal         func_3A8518
label_3d1978:
    if (ctx->pc == 0x3D1978u) {
        ctx->pc = 0x3D1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1974u;
        // 0x3d1978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D197Cu;
        goto label_3d197c;
    }
    ctx->pc = 0x3D1974u;
    SET_GPR_U32(ctx, 31, 0x3D197Cu);
    ctx->pc = 0x3D1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1974u;
    // 0x3d1978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D1974u, 0x3D197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D197Cu;
label_3d197c:
    // 0x3d197c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1980:
    // 0x3d1980: 0xc0e85fa  jal         func_3A17E8
label_3d1984:
    if (ctx->pc == 0x3D1984u) {
        ctx->pc = 0x3D1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1980u;
        // 0x3d1984: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1988u;
        goto label_3d1988;
    }
    ctx->pc = 0x3D1980u;
    SET_GPR_U32(ctx, 31, 0x3D1988u);
    ctx->pc = 0x3D1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1980u;
    // 0x3d1984: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3D1980u, 0x3D1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1988u;
label_3d1988:
    // 0x3d1988: 0x10000162  b           . + 4 + (0x162 << 2)
label_3d198c:
    if (ctx->pc == 0x3D198Cu) {
        ctx->pc = 0x3D198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1988u;
        // 0x3d198c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1990u;
        goto label_3d1990;
    }
    ctx->pc = 0x3D1988u;
    {
        const bool branch_taken_0x3d1988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1988u;
        // 0x3d198c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1988) {
            ctx->pc = 0x3D1F14u;
            goto label_3d1f14;
        }
    }
    ctx->pc = 0x3D1990u;
label_3d1990:
    // 0x3d1990: 0xc0ea146  jal         func_3A8518
label_3d1994:
    if (ctx->pc == 0x3D1994u) {
        ctx->pc = 0x3D1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1990u;
        // 0x3d1994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1998u;
        goto label_3d1998;
    }
    ctx->pc = 0x3D1990u;
    SET_GPR_U32(ctx, 31, 0x3D1998u);
    ctx->pc = 0x3D1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1990u;
    // 0x3d1994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D1990u, 0x3D1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1998u;
label_3d1998:
    // 0x3d1998: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d199c:
    // 0x3d199c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d199cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d19a0:
    // 0x3d19a0: 0xc0ea12a  jal         func_3A84A8
label_3d19a4:
    if (ctx->pc == 0x3D19A4u) {
        ctx->pc = 0x3D19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19A0u;
        // 0x3d19a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19A8u;
        goto label_3d19a8;
    }
    ctx->pc = 0x3D19A0u;
    SET_GPR_U32(ctx, 31, 0x3D19A8u);
    ctx->pc = 0x3D19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19A0u;
    // 0x3d19a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D19A0u, 0x3D19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19A8u;
label_3d19a8:
    // 0x3d19a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d19a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d19ac:
    // 0x3d19ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d19acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d19b0:
    // 0x3d19b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d19b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d19b4:
    // 0x3d19b4: 0xc0ea12a  jal         func_3A84A8
label_3d19b8:
    if (ctx->pc == 0x3D19B8u) {
        ctx->pc = 0x3D19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19B4u;
        // 0x3d19b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19BCu;
        goto label_3d19bc;
    }
    ctx->pc = 0x3D19B4u;
    SET_GPR_U32(ctx, 31, 0x3D19BCu);
    ctx->pc = 0x3D19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19B4u;
    // 0x3d19b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D19B4u, 0x3D19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19BCu;
label_3d19bc:
    // 0x3d19bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d19bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d19c0:
    // 0x3d19c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d19c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d19c4:
    // 0x3d19c4: 0xc0ea146  jal         func_3A8518
label_3d19c8:
    if (ctx->pc == 0x3D19C8u) {
        ctx->pc = 0x3D19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19C4u;
        // 0x3d19c8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19CCu;
        goto label_3d19cc;
    }
    ctx->pc = 0x3D19C4u;
    SET_GPR_U32(ctx, 31, 0x3D19CCu);
    ctx->pc = 0x3D19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19C4u;
    // 0x3d19c8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D19C4u, 0x3D19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19CCu;
label_3d19cc:
    // 0x3d19cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d19ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d19d0:
    // 0x3d19d0: 0xc0ea14c  jal         func_3A8530
label_3d19d4:
    if (ctx->pc == 0x3D19D4u) {
        ctx->pc = 0x3D19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19D0u;
        // 0x3d19d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19D8u;
        goto label_3d19d8;
    }
    ctx->pc = 0x3D19D0u;
    SET_GPR_U32(ctx, 31, 0x3D19D8u);
    ctx->pc = 0x3D19D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19D0u;
    // 0x3d19d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D19D0u, 0x3D19D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19D8u;
label_3d19d8:
    // 0x3d19d8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d19dc:
    // 0x3d19dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d19dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d19e0:
    // 0x3d19e0: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3d19e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3d19e4:
    // 0x3d19e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d19e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d19e8:
    // 0x3d19e8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3d19e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3d19ec:
    // 0x3d19ec: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3d19ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3d19f0:
    // 0x3d19f0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3d19f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3d19f4:
    // 0x3d19f4: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x3d19f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
label_3d19f8:
    // 0x3d19f8: 0xc0e896e  jal         func_3A25B8
label_3d19fc:
    if (ctx->pc == 0x3D19FCu) {
        ctx->pc = 0x3D19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19F8u;
        // 0x3d19fc: 0xae930020  sw          $s3, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A00u;
        goto label_3d1a00;
    }
    ctx->pc = 0x3D19F8u;
    SET_GPR_U32(ctx, 31, 0x3D1A00u);
    ctx->pc = 0x3D19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19F8u;
    // 0x3d19fc: 0xae930020  sw          $s3, 0x20($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3D19F8u, 0x3D1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A00u;
label_3d1a00:
    // 0x3d1a00: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3d1a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3d1a04:
    // 0x3d1a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a08:
    // 0x3d1a08: 0xc0e896c  jal         func_3A25B0
label_3d1a0c:
    if (ctx->pc == 0x3D1A0Cu) {
        ctx->pc = 0x3D1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A08u;
        // 0x3d1a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A10u;
        goto label_3d1a10;
    }
    ctx->pc = 0x3D1A08u;
    SET_GPR_U32(ctx, 31, 0x3D1A10u);
    ctx->pc = 0x3D1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1A08u;
    // 0x3d1a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3D1A08u, 0x3D1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A10u;
label_3d1a10:
    // 0x3d1a10: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1a14:
    // 0x3d1a14: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3d1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_3d1a18:
    // 0x3d1a18: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x3d1a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3d1a1c:
    // 0x3d1a1c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d1a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d1a20:
    // 0x3d1a20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d1a24:
    if (ctx->pc == 0x3D1A24u) {
        ctx->pc = 0x3D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A20u;
        // 0x3d1a24: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A28u;
        goto label_3d1a28;
    }
    ctx->pc = 0x3D1A20u;
    {
        const bool branch_taken_0x3d1a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A20u;
        // 0x3d1a24: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a20) {
            ctx->pc = 0x3D1A30u;
            goto label_3d1a30;
        }
    }
    ctx->pc = 0x3D1A28u;
label_3d1a28:
    // 0x3d1a28: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x3d1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_3d1a2c:
    // 0x3d1a2c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d1a30:
    // 0x3d1a30: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3d1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1a34:
    // 0x3d1a34: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3d1a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_3d1a38:
    // 0x3d1a38: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d1a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d1a3c:
    // 0x3d1a3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3d1a40:
    if (ctx->pc == 0x3D1A40u) {
        ctx->pc = 0x3D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A3Cu;
        // 0x3d1a40: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A44u;
        goto label_3d1a44;
    }
    ctx->pc = 0x3D1A3Cu;
    {
        const bool branch_taken_0x3d1a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A3Cu;
        // 0x3d1a40: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a3c) {
            ctx->pc = 0x3D1A48u;
            goto label_3d1a48;
        }
    }
    ctx->pc = 0x3D1A44u;
label_3d1a44:
    // 0x3d1a44: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d1a48:
    // 0x3d1a48: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d1a48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1a4c:
    // 0x3d1a4c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3d1a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d1a50:
    // 0x3d1a50: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d1a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1a54:
    // 0x3d1a54: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3d1a54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3d1a58:
    // 0x3d1a58: 0x16a00029  bnez        $s5, . + 4 + (0x29 << 2)
label_3d1a5c:
    if (ctx->pc == 0x3D1A5Cu) {
        ctx->pc = 0x3D1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A58u;
        // 0x3d1a5c: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A60u;
        goto label_3d1a60;
    }
    ctx->pc = 0x3D1A58u;
    {
        const bool branch_taken_0x3d1a58 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A58u;
        // 0x3d1a5c: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a58) {
            ctx->pc = 0x3D1B00u;
            goto label_3d1b00;
        }
    }
    ctx->pc = 0x3D1A60u;
label_3d1a60:
    // 0x3d1a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a64:
    // 0x3d1a64: 0xc0e8e26  jal         func_3A3898
label_3d1a68:
    if (ctx->pc == 0x3D1A68u) {
        ctx->pc = 0x3D1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A64u;
        // 0x3d1a68: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A6Cu;
        goto label_3d1a6c;
    }
    ctx->pc = 0x3D1A64u;
    SET_GPR_U32(ctx, 31, 0x3D1A6Cu);
    ctx->pc = 0x3D1A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1A64u;
    // 0x3d1a68: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3D1A64u, 0x3D1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A6Cu;
label_3d1a6c:
    // 0x3d1a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d1a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d1a70:
    // 0x3d1a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d1a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1a74:
    // 0x3d1a74: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d1a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d1a78:
    // 0x3d1a78: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3d1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3d1a7c:
    // 0x3d1a7c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d1a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d1a80:
    // 0x3d1a80: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3d1a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d1a84:
    // 0x3d1a84: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d1a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1a88:
    // 0x3d1a88: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d1a88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d1a8c:
    // 0x3d1a8c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d1a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d1a90:
    // 0x3d1a90: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d1a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d1a94:
    // 0x3d1a94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d1a94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d1a98:
    // 0x3d1a98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d1a98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d1a9c:
    // 0x3d1a9c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d1a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1aa0:
    // 0x3d1aa0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d1aa0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d1aa4:
    // 0x3d1aa4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d1aa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d1aa8:
    // 0x3d1aa8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d1aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1aac:
    // 0x3d1aac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d1aacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1ab0:
    // 0x3d1ab0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d1ab0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d1ab4:
    // 0x3d1ab4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d1ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1ab8:
    // 0x3d1ab8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d1ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d1abc:
    // 0x3d1abc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d1abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d1ac0:
    // 0x3d1ac0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d1ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1ac4:
    // 0x3d1ac4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d1ac4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d1ac8:
    // 0x3d1ac8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d1ac8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1acc:
    // 0x3d1acc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d1accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1ad0:
    // 0x3d1ad0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d1ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1ad4:
    // 0x3d1ad4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d1ad4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d1ad8:
    // 0x3d1ad8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3d1ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3d1adc:
    // 0x3d1adc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d1adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1ae0:
    // 0x3d1ae0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d1ae4:
    // 0x3d1ae4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d1ae8:
    // 0x3d1ae8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3d1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3d1aec:
    // 0x3d1aec: 0xc136b18  jal         func_4DAC60
label_3d1af0:
    if (ctx->pc == 0x3D1AF0u) {
        ctx->pc = 0x3D1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1AECu;
        // 0x3d1af0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1AF4u;
        goto label_3d1af4;
    }
    ctx->pc = 0x3D1AECu;
    SET_GPR_U32(ctx, 31, 0x3D1AF4u);
    ctx->pc = 0x3D1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1AECu;
    // 0x3d1af0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D1AECu, 0x3D1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1AF4u;
label_3d1af4:
    // 0x3d1af4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d1af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d1af8:
    // 0x3d1af8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d1afc:
    // 0x3d1afc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d1afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d1b00:
    // 0x3d1b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b04:
    // 0x3d1b04: 0xc0ea176  jal         func_3A85D8
label_3d1b08:
    if (ctx->pc == 0x3D1B08u) {
        ctx->pc = 0x3D1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B04u;
        // 0x3d1b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B0Cu;
        goto label_3d1b0c;
    }
    ctx->pc = 0x3D1B04u;
    SET_GPR_U32(ctx, 31, 0x3D1B0Cu);
    ctx->pc = 0x3D1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B04u;
    // 0x3d1b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3D1B04u, 0x3D1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B0Cu;
label_3d1b0c:
    // 0x3d1b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d1b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d1b10:
    // 0x3d1b10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d1b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d1b14:
    // 0x3d1b14: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d1b18:
    // 0x3d1b18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d1b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b1c:
    // 0x3d1b1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d1b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d1b20:
    // 0x3d1b20: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d1b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d1b24:
    // 0x3d1b24: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d1b28:
    // 0x3d1b28: 0x40f809  jalr        $v0
label_3d1b2c:
    if (ctx->pc == 0x3D1B2Cu) {
        ctx->pc = 0x3D1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B28u;
        // 0x3d1b2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B30u;
        goto label_3d1b30;
    }
    ctx->pc = 0x3D1B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1B30u);
        ctx->pc = 0x3D1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B28u;
        // 0x3d1b2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1B28u, 0x3D1B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1B30u;
label_3d1b30:
    // 0x3d1b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b34:
    // 0x3d1b34: 0xc0e8e26  jal         func_3A3898
label_3d1b38:
    if (ctx->pc == 0x3D1B38u) {
        ctx->pc = 0x3D1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B34u;
        // 0x3d1b38: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B3Cu;
        goto label_3d1b3c;
    }
    ctx->pc = 0x3D1B34u;
    SET_GPR_U32(ctx, 31, 0x3D1B3Cu);
    ctx->pc = 0x3D1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B34u;
    // 0x3d1b38: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3D1B34u, 0x3D1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B3Cu;
label_3d1b3c:
    // 0x3d1b3c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d1b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d1b40:
    // 0x3d1b40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d1b44:
    // 0x3d1b44: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3d1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3d1b48:
    // 0x3d1b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b4c:
    // 0x3d1b4c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d1b50:
    // 0x3d1b50: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d1b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d1b54:
    // 0x3d1b54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d1b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1b58:
    // 0x3d1b58: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d1b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d1b5c:
    // 0x3d1b5c: 0xc0e8dee  jal         func_3A37B8
label_3d1b60:
    if (ctx->pc == 0x3D1B60u) {
        ctx->pc = 0x3D1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B5Cu;
        // 0x3d1b60: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B64u;
        goto label_3d1b64;
    }
    ctx->pc = 0x3D1B5Cu;
    SET_GPR_U32(ctx, 31, 0x3D1B64u);
    ctx->pc = 0x3D1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B5Cu;
    // 0x3d1b60: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3D1B5Cu, 0x3D1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B64u;
label_3d1b64:
    // 0x3d1b64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d1b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b68:
    // 0x3d1b68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d1b68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d1b6c:
    // 0x3d1b6c: 0xc0ea164  jal         func_3A8590
label_3d1b70:
    if (ctx->pc == 0x3D1B70u) {
        ctx->pc = 0x3D1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B6Cu;
        // 0x3d1b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B74u;
        goto label_3d1b74;
    }
    ctx->pc = 0x3D1B6Cu;
    SET_GPR_U32(ctx, 31, 0x3D1B74u);
    ctx->pc = 0x3D1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B6Cu;
    // 0x3d1b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3D1B6Cu, 0x3D1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B74u;
label_3d1b74:
    // 0x3d1b74: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1b78:
    // 0x3d1b78: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d1b7c:
    // 0x3d1b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b80:
    // 0x3d1b80: 0xc0ea158  jal         func_3A8560
label_3d1b84:
    if (ctx->pc == 0x3D1B84u) {
        ctx->pc = 0x3D1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B80u;
        // 0x3d1b84: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B88u;
        goto label_3d1b88;
    }
    ctx->pc = 0x3D1B80u;
    SET_GPR_U32(ctx, 31, 0x3D1B88u);
    ctx->pc = 0x3D1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B80u;
    // 0x3d1b84: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3D1B80u, 0x3D1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B88u;
label_3d1b88:
    // 0x3d1b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b8c:
    // 0x3d1b8c: 0xc0ea16a  jal         func_3A85A8
label_3d1b90:
    if (ctx->pc == 0x3D1B90u) {
        ctx->pc = 0x3D1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B8Cu;
        // 0x3d1b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1B94u;
        goto label_3d1b94;
    }
    ctx->pc = 0x3D1B8Cu;
    SET_GPR_U32(ctx, 31, 0x3D1B94u);
    ctx->pc = 0x3D1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B8Cu;
    // 0x3d1b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D1B8Cu, 0x3D1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B94u;
label_3d1b94:
    // 0x3d1b94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d1b98:
    // 0x3d1b98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d1b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b9c:
    // 0x3d1b9c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3d1b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3d1ba0:
    // 0x3d1ba0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d1ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d1ba4:
    // 0x3d1ba4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d1ba8:
    // 0x3d1ba8: 0x40f809  jalr        $v0
label_3d1bac:
    if (ctx->pc == 0x3D1BACu) {
        ctx->pc = 0x3D1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BA8u;
        // 0x3d1bac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BB0u;
        goto label_3d1bb0;
    }
    ctx->pc = 0x3D1BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1BB0u);
        ctx->pc = 0x3D1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BA8u;
        // 0x3d1bac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1BA8u, 0x3D1BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1BB0u;
label_3d1bb0:
    // 0x3d1bb0: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_3d1bb4:
    if (ctx->pc == 0x3D1BB4u) {
        ctx->pc = 0x3D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BB0u;
        // 0x3d1bb4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BB8u;
        goto label_3d1bb8;
    }
    ctx->pc = 0x3D1BB0u;
    {
        const bool branch_taken_0x3d1bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BB0u;
        // 0x3d1bb4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bb0) {
            ctx->pc = 0x3D1F14u;
            goto label_3d1f14;
        }
    }
    ctx->pc = 0x3D1BB8u;
label_3d1bb8:
    // 0x3d1bb8: 0xc0ea146  jal         func_3A8518
label_3d1bbc:
    if (ctx->pc == 0x3D1BBCu) {
        ctx->pc = 0x3D1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BB8u;
        // 0x3d1bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BC0u;
        goto label_3d1bc0;
    }
    ctx->pc = 0x3D1BB8u;
    SET_GPR_U32(ctx, 31, 0x3D1BC0u);
    ctx->pc = 0x3D1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1BB8u;
    // 0x3d1bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D1BB8u, 0x3D1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1BC0u;
label_3d1bc0:
    // 0x3d1bc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3d1bc4:
    if (ctx->pc == 0x3D1BC4u) {
        ctx->pc = 0x3D1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BC0u;
        // 0x3d1bc4: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BC8u;
        goto label_3d1bc8;
    }
    ctx->pc = 0x3D1BC0u;
    {
        const bool branch_taken_0x3d1bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BC0u;
        // 0x3d1bc4: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bc0) {
            ctx->pc = 0x3D1BD4u;
            goto label_3d1bd4;
        }
    }
    ctx->pc = 0x3D1BC8u;
label_3d1bc8:
    // 0x3d1bc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d1bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3d1bcc:
    // 0x3d1bcc: 0x100000cf  b           . + 4 + (0xCF << 2)
label_3d1bd0:
    if (ctx->pc == 0x3D1BD0u) {
        ctx->pc = 0x3D1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BCCu;
        // 0x3d1bd0: 0x38428000  xori        $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BD4u;
        goto label_3d1bd4;
    }
    ctx->pc = 0x3D1BCCu;
    {
        const bool branch_taken_0x3d1bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BCCu;
        // 0x3d1bd0: 0x38428000  xori        $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bcc) {
            ctx->pc = 0x3D1F0Cu;
            goto label_3d1f0c;
        }
    }
    ctx->pc = 0x3D1BD4u;
label_3d1bd4:
    // 0x3d1bd4: 0x100000cd  b           . + 4 + (0xCD << 2)
label_3d1bd8:
    if (ctx->pc == 0x3D1BD8u) {
        ctx->pc = 0x3D1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BD4u;
        // 0x3d1bd8: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BDCu;
        goto label_3d1bdc;
    }
    ctx->pc = 0x3D1BD4u;
    {
        const bool branch_taken_0x3d1bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BD4u;
        // 0x3d1bd8: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bd4) {
            ctx->pc = 0x3D1F0Cu;
            goto label_3d1f0c;
        }
    }
    ctx->pc = 0x3D1BDCu;
label_3d1bdc:
    // 0x3d1bdc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1be0:
    // 0x3d1be0: 0xc0ea12a  jal         func_3A84A8
label_3d1be4:
    if (ctx->pc == 0x3D1BE4u) {
        ctx->pc = 0x3D1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BE0u;
        // 0x3d1be4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BE8u;
        goto label_3d1be8;
    }
    ctx->pc = 0x3D1BE0u;
    SET_GPR_U32(ctx, 31, 0x3D1BE8u);
    ctx->pc = 0x3D1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1BE0u;
    // 0x3d1be4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D1BE0u, 0x3D1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1BE8u;
label_3d1be8:
    // 0x3d1be8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1bec:
    // 0x3d1bec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1bf0:
    // 0x3d1bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d1bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1bf4:
    // 0x3d1bf4: 0xc0ea12a  jal         func_3A84A8
label_3d1bf8:
    if (ctx->pc == 0x3D1BF8u) {
        ctx->pc = 0x3D1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BF4u;
        // 0x3d1bf8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BFCu;
        goto label_3d1bfc;
    }
    ctx->pc = 0x3D1BF4u;
    SET_GPR_U32(ctx, 31, 0x3D1BFCu);
    ctx->pc = 0x3D1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1BF4u;
    // 0x3d1bf8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D1BF4u, 0x3D1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1BFCu;
label_3d1bfc:
    // 0x3d1bfc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1c00:
    // 0x3d1c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c04:
    // 0x3d1c04: 0xc0ea146  jal         func_3A8518
label_3d1c08:
    if (ctx->pc == 0x3D1C08u) {
        ctx->pc = 0x3D1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C04u;
        // 0x3d1c08: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C0Cu;
        goto label_3d1c0c;
    }
    ctx->pc = 0x3D1C04u;
    SET_GPR_U32(ctx, 31, 0x3D1C0Cu);
    ctx->pc = 0x3D1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C04u;
    // 0x3d1c08: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D1C04u, 0x3D1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C0Cu;
label_3d1c0c:
    // 0x3d1c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c10:
    // 0x3d1c10: 0xc0ea146  jal         func_3A8518
label_3d1c14:
    if (ctx->pc == 0x3D1C14u) {
        ctx->pc = 0x3D1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C10u;
        // 0x3d1c14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C18u;
        goto label_3d1c18;
    }
    ctx->pc = 0x3D1C10u;
    SET_GPR_U32(ctx, 31, 0x3D1C18u);
    ctx->pc = 0x3D1C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C10u;
    // 0x3d1c14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D1C10u, 0x3D1C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C18u;
label_3d1c18:
    // 0x3d1c18: 0xc0ea14c  jal         func_3A8530
label_3d1c1c:
    if (ctx->pc == 0x3D1C1Cu) {
        ctx->pc = 0x3D1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C18u;
        // 0x3d1c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C20u;
        goto label_3d1c20;
    }
    ctx->pc = 0x3D1C18u;
    SET_GPR_U32(ctx, 31, 0x3D1C20u);
    ctx->pc = 0x3D1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C18u;
    // 0x3d1c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D1C18u, 0x3D1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C20u;
label_3d1c20:
    // 0x3d1c20: 0xc0ea14c  jal         func_3A8530
label_3d1c24:
    if (ctx->pc == 0x3D1C24u) {
        ctx->pc = 0x3D1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C20u;
        // 0x3d1c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C28u;
        goto label_3d1c28;
    }
    ctx->pc = 0x3D1C20u;
    SET_GPR_U32(ctx, 31, 0x3D1C28u);
    ctx->pc = 0x3D1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C20u;
    // 0x3d1c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D1C20u, 0x3D1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C28u;
label_3d1c28:
    // 0x3d1c28: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x3d1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_3d1c2c:
    // 0x3d1c2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3d1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d1c30:
    // 0x3d1c30: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x3d1c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_3d1c34:
    // 0x3d1c34: 0x120200b6  beq         $s0, $v0, . + 4 + (0xB6 << 2)
label_3d1c38:
    if (ctx->pc == 0x3D1C38u) {
        ctx->pc = 0x3D1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C34u;
        // 0x3d1c38: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C3Cu;
        goto label_3d1c3c;
    }
    ctx->pc = 0x3D1C34u;
    {
        const bool branch_taken_0x3d1c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C34u;
        // 0x3d1c38: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c34) {
            ctx->pc = 0x3D1F10u;
            goto label_3d1f10;
        }
    }
    ctx->pc = 0x3D1C3Cu;
label_3d1c3c:
    // 0x3d1c3c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d1c40:
    // 0x3d1c40: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_3d1c44:
    if (ctx->pc == 0x3D1C44u) {
        ctx->pc = 0x3D1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C40u;
        // 0x3d1c44: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C48u;
        goto label_3d1c48;
    }
    ctx->pc = 0x3D1C40u;
    {
        const bool branch_taken_0x3d1c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C40u;
        // 0x3d1c44: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c40) {
            ctx->pc = 0x3D1F10u;
            goto label_3d1f10;
        }
    }
    ctx->pc = 0x3D1C48u;
label_3d1c48:
    // 0x3d1c48: 0xc0ea14c  jal         func_3A8530
label_3d1c4c:
    if (ctx->pc == 0x3D1C4Cu) {
        ctx->pc = 0x3D1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C48u;
        // 0x3d1c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C50u;
        goto label_3d1c50;
    }
    ctx->pc = 0x3D1C48u;
    SET_GPR_U32(ctx, 31, 0x3D1C50u);
    ctx->pc = 0x3D1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C48u;
    // 0x3d1c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D1C48u, 0x3D1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C50u;
label_3d1c50:
    // 0x3d1c50: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3d1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1c54:
    // 0x3d1c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d1c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c58:
    // 0x3d1c58: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3d1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_3d1c5c:
    // 0x3d1c5c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d1c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d1c60:
    // 0x3d1c60: 0x544000ac  bnel        $v0, $zero, . + 4 + (0xAC << 2)
label_3d1c64:
    if (ctx->pc == 0x3D1C64u) {
        ctx->pc = 0x3D1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C60u;
        // 0x3d1c64: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C68u;
        goto label_3d1c68;
    }
    ctx->pc = 0x3D1C60u;
    {
        const bool branch_taken_0x3d1c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1c60) {
            ctx->pc = 0x3D1C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1C60u;
            // 0x3d1c64: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1F14u;
            goto label_3d1f14;
        }
    }
    ctx->pc = 0x3D1C68u;
label_3d1c68:
    // 0x3d1c68: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x3d1c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3d1c6c:
    // 0x3d1c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c70:
    // 0x3d1c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c74:
    // 0x3d1c74: 0xc0ea176  jal         func_3A85D8
label_3d1c78:
    if (ctx->pc == 0x3D1C78u) {
        ctx->pc = 0x3D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C74u;
        // 0x3d1c78: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C7Cu;
        goto label_3d1c7c;
    }
    ctx->pc = 0x3D1C74u;
    SET_GPR_U32(ctx, 31, 0x3D1C7Cu);
    ctx->pc = 0x3D1C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C74u;
    // 0x3d1c78: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3D1C74u, 0x3D1C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C7Cu;
label_3d1c7c:
    // 0x3d1c7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d1c80:
    // 0x3d1c80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d1c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c84:
    // 0x3d1c84: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d1c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d1c88:
    // 0x3d1c88: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d1c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d1c8c:
    // 0x3d1c8c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d1c90:
    // 0x3d1c90: 0x40f809  jalr        $v0
label_3d1c94:
    if (ctx->pc == 0x3D1C94u) {
        ctx->pc = 0x3D1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C90u;
        // 0x3d1c94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C98u;
        goto label_3d1c98;
    }
    ctx->pc = 0x3D1C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1C98u);
        ctx->pc = 0x3D1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C90u;
        // 0x3d1c94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1C90u, 0x3D1C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1C98u;
label_3d1c98:
    // 0x3d1c98: 0x1000009e  b           . + 4 + (0x9E << 2)
label_3d1c9c:
    if (ctx->pc == 0x3D1C9Cu) {
        ctx->pc = 0x3D1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C98u;
        // 0x3d1c9c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1CA0u;
        goto label_3d1ca0;
    }
    ctx->pc = 0x3D1C98u;
    {
        const bool branch_taken_0x3d1c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C98u;
        // 0x3d1c9c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c98) {
            ctx->pc = 0x3D1F14u;
            goto label_3d1f14;
        }
    }
    ctx->pc = 0x3D1CA0u;
label_3d1ca0:
    // 0x3d1ca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d1ca4:
    // 0x3d1ca4: 0xc0e90ca  jal         func_3A4328
label_3d1ca8:
    if (ctx->pc == 0x3D1CA8u) {
        ctx->pc = 0x3D1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CA4u;
        // 0x3d1ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1CACu;
        goto label_3d1cac;
    }
    ctx->pc = 0x3D1CA4u;
    SET_GPR_U32(ctx, 31, 0x3D1CACu);
    ctx->pc = 0x3D1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CA4u;
    // 0x3d1ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D1CA4u, 0x3D1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CACu;
label_3d1cac:
    // 0x3d1cac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3d1cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1cb0:
    // 0x3d1cb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d1cb4:
    // 0x3d1cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1cb8:
    // 0x3d1cb8: 0xc0e911e  jal         func_3A4478
label_3d1cbc:
    if (ctx->pc == 0x3D1CBCu) {
        ctx->pc = 0x3D1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CB8u;
        // 0x3d1cbc: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1CC0u;
        goto label_3d1cc0;
    }
    ctx->pc = 0x3D1CB8u;
    SET_GPR_U32(ctx, 31, 0x3D1CC0u);
    ctx->pc = 0x3D1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CB8u;
    // 0x3d1cbc: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D1CB8u, 0x3D1CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CC0u;
label_3d1cc0:
    // 0x3d1cc0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1cc4:
    // 0x3d1cc4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d1cc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1cc8:
    // 0x3d1cc8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3d1cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3d1ccc:
    // 0x3d1ccc: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3d1cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3d1cd0:
    // 0x3d1cd0: 0x1000008e  b           . + 4 + (0x8E << 2)
label_3d1cd4:
    if (ctx->pc == 0x3D1CD4u) {
        ctx->pc = 0x3D1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CD0u;
        // 0x3d1cd4: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1CD8u;
        goto label_3d1cd8;
    }
    ctx->pc = 0x3D1CD0u;
    {
        const bool branch_taken_0x3d1cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CD0u;
        // 0x3d1cd4: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1cd0) {
            ctx->pc = 0x3D1F0Cu;
            goto label_3d1f0c;
        }
    }
    ctx->pc = 0x3D1CD8u;
label_3d1cd8:
    // 0x3d1cd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1cdc:
    // 0x3d1cdc: 0xc0ea12a  jal         func_3A84A8
label_3d1ce0:
    if (ctx->pc == 0x3D1CE0u) {
        ctx->pc = 0x3D1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CDCu;
        // 0x3d1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1CE4u;
        goto label_3d1ce4;
    }
    ctx->pc = 0x3D1CDCu;
    SET_GPR_U32(ctx, 31, 0x3D1CE4u);
    ctx->pc = 0x3D1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CDCu;
    // 0x3d1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D1CDCu, 0x3D1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CE4u;
label_3d1ce4:
    // 0x3d1ce4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1ce8:
    // 0x3d1ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d1ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1cec:
    // 0x3d1cec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1cf0:
    // 0x3d1cf0: 0xc0ea12a  jal         func_3A84A8
label_3d1cf4:
    if (ctx->pc == 0x3D1CF4u) {
        ctx->pc = 0x3D1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CF0u;
        // 0x3d1cf4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1CF8u;
        goto label_3d1cf8;
    }
    ctx->pc = 0x3D1CF0u;
    SET_GPR_U32(ctx, 31, 0x3D1CF8u);
    ctx->pc = 0x3D1CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CF0u;
    // 0x3d1cf4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D1CF0u, 0x3D1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CF8u;
label_3d1cf8:
    // 0x3d1cf8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3d1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1cfc:
    // 0x3d1cfc: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3d1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_3d1d00:
    // 0x3d1d00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1d00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1d04:
    // 0x3d1d04: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x3d1d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3d1d08:
    // 0x3d1d08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d1d0c:
    if (ctx->pc == 0x3D1D0Cu) {
        ctx->pc = 0x3D1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D08u;
        // 0x3d1d0c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1D10u;
        goto label_3d1d10;
    }
    ctx->pc = 0x3D1D08u;
    {
        const bool branch_taken_0x3d1d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D08u;
        // 0x3d1d0c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d08) {
            ctx->pc = 0x3D1D18u;
            goto label_3d1d18;
        }
    }
    ctx->pc = 0x3D1D10u;
label_3d1d10:
    // 0x3d1d10: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x3d1d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_3d1d14:
    // 0x3d1d14: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d1d18:
    // 0x3d1d18: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d1d1c:
    // 0x3d1d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d20:
    // 0x3d1d20: 0xc0f3222  jal         func_3CC888
label_3d1d24:
    if (ctx->pc == 0x3D1D24u) {
        ctx->pc = 0x3D1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D20u;
        // 0x3d1d24: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1D28u;
        goto label_3d1d28;
    }
    ctx->pc = 0x3D1D20u;
    SET_GPR_U32(ctx, 31, 0x3D1D28u);
    ctx->pc = 0x3D1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1D20u;
    // 0x3d1d24: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D1D20u, 0x3D1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1D28u;
label_3d1d28:
    // 0x3d1d28: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d1d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d1d2c:
    // 0x3d1d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d30:
    // 0x3d1d30: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x3d1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
label_3d1d34:
    // 0x3d1d34: 0xc0f3222  jal         func_3CC888
label_3d1d38:
    if (ctx->pc == 0x3D1D38u) {
        ctx->pc = 0x3D1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D34u;
        // 0x3d1d38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1D3Cu;
        goto label_3d1d3c;
    }
    ctx->pc = 0x3D1D34u;
    SET_GPR_U32(ctx, 31, 0x3D1D3Cu);
    ctx->pc = 0x3D1D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1D34u;
    // 0x3d1d38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D1D34u, 0x3D1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1D3Cu;
label_3d1d3c:
    // 0x3d1d3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d1d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d1d40:
    // 0x3d1d40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d1d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1d44:
    // 0x3d1d44: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3d1d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d1d48:
    // 0x3d1d48: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3d1d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d1d4c:
    // 0x3d1d4c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d1d50:
    // 0x3d1d50: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d1d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d1d54:
    // 0x3d1d54: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d1d58:
    // 0x3d1d58: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d1d5c:
    // 0x3d1d5c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3d1d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d1d60:
    // 0x3d1d60: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3d1d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3d1d64:
    // 0x3d1d64: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d1d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d1d68:
    // 0x3d1d68: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d1d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1d6c:
    // 0x3d1d6c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d1d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d1d70:
    // 0x3d1d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d1d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d1d74:
    // 0x3d1d74: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d1d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d1d78:
    // 0x3d1d78: 0xc0cd518  jal         func_335460
label_3d1d7c:
    if (ctx->pc == 0x3D1D7Cu) {
        ctx->pc = 0x3D1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D78u;
        // 0x3d1d7c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1D80u;
        goto label_3d1d80;
    }
    ctx->pc = 0x3D1D78u;
    SET_GPR_U32(ctx, 31, 0x3D1D80u);
    ctx->pc = 0x3D1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1D78u;
    // 0x3d1d7c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D1D78u, 0x3D1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1D80u;
label_3d1d80:
    // 0x3d1d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d84:
    // 0x3d1d84: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1d88:
    // 0x3d1d88: 0xc136b24  jal         func_4DAC90
label_3d1d8c:
    if (ctx->pc == 0x3D1D8Cu) {
        ctx->pc = 0x3D1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D88u;
        // 0x3d1d8c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1D90u;
        goto label_3d1d90;
    }
    ctx->pc = 0x3D1D88u;
    SET_GPR_U32(ctx, 31, 0x3D1D90u);
    ctx->pc = 0x3D1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1D88u;
    // 0x3d1d8c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D1D88u, 0x3D1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1D90u;
label_3d1d90:
    // 0x3d1d90: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1d94:
    // 0x3d1d94: 0x3c050420  lui         $a1, 0x420
    ctx->pc = 0x3d1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1056 << 16));
label_3d1d98:
    // 0x3d1d98: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3d1d98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1d9c:
    // 0x3d1d9c: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3d1d9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1da0:
    // 0x3d1da0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3d1da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3d1da4:
    // 0x3d1da4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d1da8:
    // 0x3d1da8: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x3d1da8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_3d1dac:
    // 0x3d1dac: 0x7e240040  sq          $a0, 0x40($s1)
    ctx->pc = 0x3d1dacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 4));
label_3d1db0:
    // 0x3d1db0: 0x10000057  b           . + 4 + (0x57 << 2)
label_3d1db4:
    if (ctx->pc == 0x3D1DB4u) {
        ctx->pc = 0x3D1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DB0u;
        // 0x3d1db4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1DB8u;
        goto label_3d1db8;
    }
    ctx->pc = 0x3D1DB0u;
    {
        const bool branch_taken_0x3d1db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DB0u;
        // 0x3d1db4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1db0) {
            ctx->pc = 0x3D1F10u;
            goto label_3d1f10;
        }
    }
    ctx->pc = 0x3D1DB8u;
label_3d1db8:
    // 0x3d1db8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d1dbc:
    // 0x3d1dbc: 0xc0ea12a  jal         func_3A84A8
label_3d1dc0:
    if (ctx->pc == 0x3D1DC0u) {
        ctx->pc = 0x3D1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DBCu;
        // 0x3d1dc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1DC4u;
        goto label_3d1dc4;
    }
    ctx->pc = 0x3D1DBCu;
    SET_GPR_U32(ctx, 31, 0x3D1DC4u);
    ctx->pc = 0x3D1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1DBCu;
    // 0x3d1dc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D1DBCu, 0x3D1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1DC4u;
label_3d1dc4:
    // 0x3d1dc4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d1dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1dc8:
    // 0x3d1dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1dcc:
    // 0x3d1dcc: 0xc0ea14c  jal         func_3A8530
label_3d1dd0:
    if (ctx->pc == 0x3D1DD0u) {
        ctx->pc = 0x3D1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DCCu;
        // 0x3d1dd0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1DD4u;
        goto label_3d1dd4;
    }
    ctx->pc = 0x3D1DCCu;
    SET_GPR_U32(ctx, 31, 0x3D1DD4u);
    ctx->pc = 0x3D1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1DCCu;
    // 0x3d1dd0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D1DCCu, 0x3D1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1DD4u;
label_3d1dd4:
    // 0x3d1dd4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3d1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1dd8:
    // 0x3d1dd8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3d1dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3d1ddc:
    // 0x3d1ddc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_3d1de0:
    if (ctx->pc == 0x3D1DE0u) {
        ctx->pc = 0x3D1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DDCu;
        // 0x3d1de0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1DE4u;
        goto label_3d1de4;
    }
    ctx->pc = 0x3D1DDCu;
    {
        const bool branch_taken_0x3d1ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DDCu;
        // 0x3d1de0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ddc) {
            ctx->pc = 0x3D1EF8u;
            goto label_3d1ef8;
        }
    }
    ctx->pc = 0x3D1DE4u;
label_3d1de4:
    // 0x3d1de4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3d1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3d1de8:
    // 0x3d1de8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3d1de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d1dec:
    // 0x3d1dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1df0:
    // 0x3d1df0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x3d1df0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_3d1df4:
    // 0x3d1df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1df8:
    // 0x3d1df8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1dfc:
    // 0x3d1dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d1e00:
    // 0x3d1e00: 0xc0e90ca  jal         func_3A4328
label_3d1e04:
    if (ctx->pc == 0x3D1E04u) {
        ctx->pc = 0x3D1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1E00u;
        // 0x3d1e04: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1E08u;
        goto label_3d1e08;
    }
    ctx->pc = 0x3D1E00u;
    SET_GPR_U32(ctx, 31, 0x3D1E08u);
    ctx->pc = 0x3D1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E00u;
    // 0x3d1e04: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D1E00u, 0x3D1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E08u;
label_3d1e08:
    // 0x3d1e08: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d1e08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1e0c:
    // 0x3d1e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1e10:
    // 0x3d1e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1e14:
    // 0x3d1e14: 0xc0e911e  jal         func_3A4478
label_3d1e18:
    if (ctx->pc == 0x3D1E18u) {
        ctx->pc = 0x3D1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1E14u;
        // 0x3d1e18: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1E1Cu;
        goto label_3d1e1c;
    }
    ctx->pc = 0x3D1E14u;
    SET_GPR_U32(ctx, 31, 0x3D1E1Cu);
    ctx->pc = 0x3D1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E14u;
    // 0x3d1e18: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D1E14u, 0x3D1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E1Cu;
label_3d1e1c:
    // 0x3d1e1c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1e20:
    // 0x3d1e20: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d1e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1e24:
    // 0x3d1e24: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d1e24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1e28:
    // 0x3d1e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1e2c:
    // 0x3d1e2c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3d1e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3d1e30:
    // 0x3d1e30: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x3d1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3d1e34:
    // 0x3d1e34: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3d1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3d1e38:
    // 0x3d1e38: 0xc0e911e  jal         func_3A4478
label_3d1e3c:
    if (ctx->pc == 0x3D1E3Cu) {
        ctx->pc = 0x3D1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1E38u;
        // 0x3d1e3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1E40u;
        goto label_3d1e40;
    }
    ctx->pc = 0x3D1E38u;
    SET_GPR_U32(ctx, 31, 0x3D1E40u);
    ctx->pc = 0x3D1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E38u;
    // 0x3d1e3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D1E38u, 0x3D1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E40u;
label_3d1e40:
    // 0x3d1e40: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x3d1e40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3d1e44:
    // 0x3d1e44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1e48:
    // 0x3d1e48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3d1e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3d1e4c:
    // 0x3d1e4c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3d1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3d1e50:
    // 0x3d1e50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d1e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d1e54:
    // 0x3d1e54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d1e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d1e58:
    // 0x3d1e58: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d1e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1e5c:
    // 0x3d1e5c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d1e5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d1e60:
    // 0x3d1e60: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d1e60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d1e64:
    // 0x3d1e64: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d1e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1e68:
    // 0x3d1e68: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d1e68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1e6c:
    // 0x3d1e6c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d1e6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d1e70:
    // 0x3d1e70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d1e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1e74:
    // 0x3d1e74: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d1e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d1e78:
    // 0x3d1e78: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d1e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d1e7c:
    // 0x3d1e7c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d1e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1e80:
    // 0x3d1e80: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d1e80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d1e84:
    // 0x3d1e84: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d1e84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d1e88:
    // 0x3d1e88: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d1e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1e8c:
    // 0x3d1e8c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d1e8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d1e90:
    // 0x3d1e90: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d1e90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d1e94:
    // 0x3d1e94: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3d1e94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3d1e98:
    // 0x3d1e98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d1e9c:
    // 0x3d1e9c: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3d1e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3d1ea0:
    // 0x3d1ea0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d1ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d1ea4:
    // 0x3d1ea4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d1ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d1ea8:
    // 0x3d1ea8: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x3d1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_3d1eac:
    // 0x3d1eac: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3d1eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3d1eb0:
    // 0x3d1eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1eb4:
    // 0x3d1eb4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3d1eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3d1eb8:
    // 0x3d1eb8: 0xc136b24  jal         func_4DAC90
label_3d1ebc:
    if (ctx->pc == 0x3D1EBCu) {
        ctx->pc = 0x3D1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1EB8u;
        // 0x3d1ebc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1EC0u;
        goto label_3d1ec0;
    }
    ctx->pc = 0x3D1EB8u;
    SET_GPR_U32(ctx, 31, 0x3D1EC0u);
    ctx->pc = 0x3D1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1EB8u;
    // 0x3d1ebc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D1EB8u, 0x3D1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1EC0u;
label_3d1ec0:
    // 0x3d1ec0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1ec4:
    // 0x3d1ec4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3d1ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3d1ec8:
    // 0x3d1ec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d1ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1ecc:
    // 0x3d1ecc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3d1eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3d1ed0:
    // 0x3d1ed0: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3d1ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3d1ed4:
    // 0x3d1ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d1ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d1ed8:
    // 0x3d1ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d1ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1edc:
    // 0x3d1edc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3d1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3d1ee0:
    // 0x3d1ee0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3d1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3d1ee4:
    // 0x3d1ee4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3d1ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d1ee8:
    // 0x3d1ee8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3d1ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d1eec:
    // 0x3d1eec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1ef0:
    // 0x3d1ef0: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3d1ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3d1ef4:
    // 0x3d1ef4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3d1ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3d1ef8:
    // 0x3d1ef8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3d1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d1efc:
    // 0x3d1efc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3d1efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_3d1f00:
    // 0x3d1f00: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d1f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d1f04:
    // 0x3d1f04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3d1f08:
    if (ctx->pc == 0x3D1F08u) {
        ctx->pc = 0x3D1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F04u;
        // 0x3d1f08: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1F0Cu;
        goto label_3d1f0c;
    }
    ctx->pc = 0x3D1F04u;
    {
        const bool branch_taken_0x3d1f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F04u;
        // 0x3d1f08: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1f04) {
            ctx->pc = 0x3D1F10u;
            goto label_3d1f10;
        }
    }
    ctx->pc = 0x3D1F0Cu;
label_3d1f0c:
    // 0x3d1f0c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d1f10:
    // 0x3d1f10: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3d1f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3d1f14:
    // 0x3d1f14: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3d1f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3d1f18:
    // 0x3d1f18: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3d1f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3d1f1c:
    // 0x3d1f1c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3d1f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3d1f20:
    // 0x3d1f20: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3d1f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3d1f24:
    // 0x3d1f24: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3d1f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3d1f28:
    // 0x3d1f28: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3d1f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3d1f2c:
    // 0x3d1f2c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3d1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d1f30:
    // 0x3d1f30: 0x3e00008  jr          $ra
label_3d1f34:
    if (ctx->pc == 0x3D1F34u) {
        ctx->pc = 0x3D1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F30u;
        // 0x3d1f34: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1F38u;
        goto label_fallthrough_0x3d1f30;
    }
    ctx->pc = 0x3D1F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F30u;
        // 0x3d1f34: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d1f30:
    ctx->pc = 0x3D1F38u;
}
