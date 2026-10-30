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

// Function: sub_002B1860
// Address: 0x2b1860 - 0x2b2158
void sub_002B1860_0x2b1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1860_0x2b1860");
#endif

    switch (ctx->pc) {
        case 0x2b1860u: goto label_2b1860;
        case 0x2b1864u: goto label_2b1864;
        case 0x2b1868u: goto label_2b1868;
        case 0x2b186cu: goto label_2b186c;
        case 0x2b1870u: goto label_2b1870;
        case 0x2b1874u: goto label_2b1874;
        case 0x2b1878u: goto label_2b1878;
        case 0x2b187cu: goto label_2b187c;
        case 0x2b1880u: goto label_2b1880;
        case 0x2b1884u: goto label_2b1884;
        case 0x2b1888u: goto label_2b1888;
        case 0x2b188cu: goto label_2b188c;
        case 0x2b1890u: goto label_2b1890;
        case 0x2b1894u: goto label_2b1894;
        case 0x2b1898u: goto label_2b1898;
        case 0x2b189cu: goto label_2b189c;
        case 0x2b18a0u: goto label_2b18a0;
        case 0x2b18a4u: goto label_2b18a4;
        case 0x2b18a8u: goto label_2b18a8;
        case 0x2b18acu: goto label_2b18ac;
        case 0x2b18b0u: goto label_2b18b0;
        case 0x2b18b4u: goto label_2b18b4;
        case 0x2b18b8u: goto label_2b18b8;
        case 0x2b18bcu: goto label_2b18bc;
        case 0x2b18c0u: goto label_2b18c0;
        case 0x2b18c4u: goto label_2b18c4;
        case 0x2b18c8u: goto label_2b18c8;
        case 0x2b18ccu: goto label_2b18cc;
        case 0x2b18d0u: goto label_2b18d0;
        case 0x2b18d4u: goto label_2b18d4;
        case 0x2b18d8u: goto label_2b18d8;
        case 0x2b18dcu: goto label_2b18dc;
        case 0x2b18e0u: goto label_2b18e0;
        case 0x2b18e4u: goto label_2b18e4;
        case 0x2b18e8u: goto label_2b18e8;
        case 0x2b18ecu: goto label_2b18ec;
        case 0x2b18f0u: goto label_2b18f0;
        case 0x2b18f4u: goto label_2b18f4;
        case 0x2b18f8u: goto label_2b18f8;
        case 0x2b18fcu: goto label_2b18fc;
        case 0x2b1900u: goto label_2b1900;
        case 0x2b1904u: goto label_2b1904;
        case 0x2b1908u: goto label_2b1908;
        case 0x2b190cu: goto label_2b190c;
        case 0x2b1910u: goto label_2b1910;
        case 0x2b1914u: goto label_2b1914;
        case 0x2b1918u: goto label_2b1918;
        case 0x2b191cu: goto label_2b191c;
        case 0x2b1920u: goto label_2b1920;
        case 0x2b1924u: goto label_2b1924;
        case 0x2b1928u: goto label_2b1928;
        case 0x2b192cu: goto label_2b192c;
        case 0x2b1930u: goto label_2b1930;
        case 0x2b1934u: goto label_2b1934;
        case 0x2b1938u: goto label_2b1938;
        case 0x2b193cu: goto label_2b193c;
        case 0x2b1940u: goto label_2b1940;
        case 0x2b1944u: goto label_2b1944;
        case 0x2b1948u: goto label_2b1948;
        case 0x2b194cu: goto label_2b194c;
        case 0x2b1950u: goto label_2b1950;
        case 0x2b1954u: goto label_2b1954;
        case 0x2b1958u: goto label_2b1958;
        case 0x2b195cu: goto label_2b195c;
        case 0x2b1960u: goto label_2b1960;
        case 0x2b1964u: goto label_2b1964;
        case 0x2b1968u: goto label_2b1968;
        case 0x2b196cu: goto label_2b196c;
        case 0x2b1970u: goto label_2b1970;
        case 0x2b1974u: goto label_2b1974;
        case 0x2b1978u: goto label_2b1978;
        case 0x2b197cu: goto label_2b197c;
        case 0x2b1980u: goto label_2b1980;
        case 0x2b1984u: goto label_2b1984;
        case 0x2b1988u: goto label_2b1988;
        case 0x2b198cu: goto label_2b198c;
        case 0x2b1990u: goto label_2b1990;
        case 0x2b1994u: goto label_2b1994;
        case 0x2b1998u: goto label_2b1998;
        case 0x2b199cu: goto label_2b199c;
        case 0x2b19a0u: goto label_2b19a0;
        case 0x2b19a4u: goto label_2b19a4;
        case 0x2b19a8u: goto label_2b19a8;
        case 0x2b19acu: goto label_2b19ac;
        case 0x2b19b0u: goto label_2b19b0;
        case 0x2b19b4u: goto label_2b19b4;
        case 0x2b19b8u: goto label_2b19b8;
        case 0x2b19bcu: goto label_2b19bc;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19c8u: goto label_2b19c8;
        case 0x2b19ccu: goto label_2b19cc;
        case 0x2b19d0u: goto label_2b19d0;
        case 0x2b19d4u: goto label_2b19d4;
        case 0x2b19d8u: goto label_2b19d8;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19e0u: goto label_2b19e0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19ecu: goto label_2b19ec;
        case 0x2b19f0u: goto label_2b19f0;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a00u: goto label_2b1a00;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a08u: goto label_2b1a08;
        case 0x2b1a0cu: goto label_2b1a0c;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a18u: goto label_2b1a18;
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a20u: goto label_2b1a20;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a30u: goto label_2b1a30;
        case 0x2b1a34u: goto label_2b1a34;
        case 0x2b1a38u: goto label_2b1a38;
        case 0x2b1a3cu: goto label_2b1a3c;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a48u: goto label_2b1a48;
        case 0x2b1a4cu: goto label_2b1a4c;
        case 0x2b1a50u: goto label_2b1a50;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a5cu: goto label_2b1a5c;
        case 0x2b1a60u: goto label_2b1a60;
        case 0x2b1a64u: goto label_2b1a64;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a70u: goto label_2b1a70;
        case 0x2b1a74u: goto label_2b1a74;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a7cu: goto label_2b1a7c;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a84u: goto label_2b1a84;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a94u: goto label_2b1a94;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1a9cu: goto label_2b1a9c;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1aa4u: goto label_2b1aa4;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1ab4u: goto label_2b1ab4;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1abcu: goto label_2b1abc;
        case 0x2b1ac0u: goto label_2b1ac0;
        case 0x2b1ac4u: goto label_2b1ac4;
        case 0x2b1ac8u: goto label_2b1ac8;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ad4u: goto label_2b1ad4;
        case 0x2b1ad8u: goto label_2b1ad8;
        case 0x2b1adcu: goto label_2b1adc;
        case 0x2b1ae0u: goto label_2b1ae0;
        case 0x2b1ae4u: goto label_2b1ae4;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af0u: goto label_2b1af0;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1af8u: goto label_2b1af8;
        case 0x2b1afcu: goto label_2b1afc;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b08u: goto label_2b1b08;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b10u: goto label_2b1b10;
        case 0x2b1b14u: goto label_2b1b14;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1b1cu: goto label_2b1b1c;
        case 0x2b1b20u: goto label_2b1b20;
        case 0x2b1b24u: goto label_2b1b24;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b2cu: goto label_2b1b2c;
        case 0x2b1b30u: goto label_2b1b30;
        case 0x2b1b34u: goto label_2b1b34;
        case 0x2b1b38u: goto label_2b1b38;
        case 0x2b1b3cu: goto label_2b1b3c;
        case 0x2b1b40u: goto label_2b1b40;
        case 0x2b1b44u: goto label_2b1b44;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b4cu: goto label_2b1b4c;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b54u: goto label_2b1b54;
        case 0x2b1b58u: goto label_2b1b58;
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b60u: goto label_2b1b60;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b68u: goto label_2b1b68;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1b70u: goto label_2b1b70;
        case 0x2b1b74u: goto label_2b1b74;
        case 0x2b1b78u: goto label_2b1b78;
        case 0x2b1b7cu: goto label_2b1b7c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b84u: goto label_2b1b84;
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1b8cu: goto label_2b1b8c;
        case 0x2b1b90u: goto label_2b1b90;
        case 0x2b1b94u: goto label_2b1b94;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1b9cu: goto label_2b1b9c;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1ba8u: goto label_2b1ba8;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bb0u: goto label_2b1bb0;
        case 0x2b1bb4u: goto label_2b1bb4;
        case 0x2b1bb8u: goto label_2b1bb8;
        case 0x2b1bbcu: goto label_2b1bbc;
        case 0x2b1bc0u: goto label_2b1bc0;
        case 0x2b1bc4u: goto label_2b1bc4;
        case 0x2b1bc8u: goto label_2b1bc8;
        case 0x2b1bccu: goto label_2b1bcc;
        case 0x2b1bd0u: goto label_2b1bd0;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1bd8u: goto label_2b1bd8;
        case 0x2b1bdcu: goto label_2b1bdc;
        case 0x2b1be0u: goto label_2b1be0;
        case 0x2b1be4u: goto label_2b1be4;
        case 0x2b1be8u: goto label_2b1be8;
        case 0x2b1becu: goto label_2b1bec;
        case 0x2b1bf0u: goto label_2b1bf0;
        case 0x2b1bf4u: goto label_2b1bf4;
        case 0x2b1bf8u: goto label_2b1bf8;
        case 0x2b1bfcu: goto label_2b1bfc;
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c04u: goto label_2b1c04;
        case 0x2b1c08u: goto label_2b1c08;
        case 0x2b1c0cu: goto label_2b1c0c;
        case 0x2b1c10u: goto label_2b1c10;
        case 0x2b1c14u: goto label_2b1c14;
        case 0x2b1c18u: goto label_2b1c18;
        case 0x2b1c1cu: goto label_2b1c1c;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c2cu: goto label_2b1c2c;
        case 0x2b1c30u: goto label_2b1c30;
        case 0x2b1c34u: goto label_2b1c34;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c40u: goto label_2b1c40;
        case 0x2b1c44u: goto label_2b1c44;
        case 0x2b1c48u: goto label_2b1c48;
        case 0x2b1c4cu: goto label_2b1c4c;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c58u: goto label_2b1c58;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c60u: goto label_2b1c60;
        case 0x2b1c64u: goto label_2b1c64;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c6cu: goto label_2b1c6c;
        case 0x2b1c70u: goto label_2b1c70;
        case 0x2b1c74u: goto label_2b1c74;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1c7cu: goto label_2b1c7c;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1c88u: goto label_2b1c88;
        case 0x2b1c8cu: goto label_2b1c8c;
        case 0x2b1c90u: goto label_2b1c90;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1c98u: goto label_2b1c98;
        case 0x2b1c9cu: goto label_2b1c9c;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1ca4u: goto label_2b1ca4;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cb0u: goto label_2b1cb0;
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1cbcu: goto label_2b1cbc;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1cc4u: goto label_2b1cc4;
        case 0x2b1cc8u: goto label_2b1cc8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cd0u: goto label_2b1cd0;
        case 0x2b1cd4u: goto label_2b1cd4;
        case 0x2b1cd8u: goto label_2b1cd8;
        case 0x2b1cdcu: goto label_2b1cdc;
        case 0x2b1ce0u: goto label_2b1ce0;
        case 0x2b1ce4u: goto label_2b1ce4;
        case 0x2b1ce8u: goto label_2b1ce8;
        case 0x2b1cecu: goto label_2b1cec;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf4u: goto label_2b1cf4;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1cfcu: goto label_2b1cfc;
        case 0x2b1d00u: goto label_2b1d00;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d08u: goto label_2b1d08;
        case 0x2b1d0cu: goto label_2b1d0c;
        case 0x2b1d10u: goto label_2b1d10;
        case 0x2b1d14u: goto label_2b1d14;
        case 0x2b1d18u: goto label_2b1d18;
        case 0x2b1d1cu: goto label_2b1d1c;
        case 0x2b1d20u: goto label_2b1d20;
        case 0x2b1d24u: goto label_2b1d24;
        case 0x2b1d28u: goto label_2b1d28;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d30u: goto label_2b1d30;
        case 0x2b1d34u: goto label_2b1d34;
        case 0x2b1d38u: goto label_2b1d38;
        case 0x2b1d3cu: goto label_2b1d3c;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d44u: goto label_2b1d44;
        case 0x2b1d48u: goto label_2b1d48;
        case 0x2b1d4cu: goto label_2b1d4c;
        case 0x2b1d50u: goto label_2b1d50;
        case 0x2b1d54u: goto label_2b1d54;
        case 0x2b1d58u: goto label_2b1d58;
        case 0x2b1d5cu: goto label_2b1d5c;
        case 0x2b1d60u: goto label_2b1d60;
        case 0x2b1d64u: goto label_2b1d64;
        case 0x2b1d68u: goto label_2b1d68;
        case 0x2b1d6cu: goto label_2b1d6c;
        case 0x2b1d70u: goto label_2b1d70;
        case 0x2b1d74u: goto label_2b1d74;
        case 0x2b1d78u: goto label_2b1d78;
        case 0x2b1d7cu: goto label_2b1d7c;
        case 0x2b1d80u: goto label_2b1d80;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1d88u: goto label_2b1d88;
        case 0x2b1d8cu: goto label_2b1d8c;
        case 0x2b1d90u: goto label_2b1d90;
        case 0x2b1d94u: goto label_2b1d94;
        case 0x2b1d98u: goto label_2b1d98;
        case 0x2b1d9cu: goto label_2b1d9c;
        case 0x2b1da0u: goto label_2b1da0;
        case 0x2b1da4u: goto label_2b1da4;
        case 0x2b1da8u: goto label_2b1da8;
        case 0x2b1dacu: goto label_2b1dac;
        case 0x2b1db0u: goto label_2b1db0;
        case 0x2b1db4u: goto label_2b1db4;
        case 0x2b1db8u: goto label_2b1db8;
        case 0x2b1dbcu: goto label_2b1dbc;
        case 0x2b1dc0u: goto label_2b1dc0;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1dc8u: goto label_2b1dc8;
        case 0x2b1dccu: goto label_2b1dcc;
        case 0x2b1dd0u: goto label_2b1dd0;
        case 0x2b1dd4u: goto label_2b1dd4;
        case 0x2b1dd8u: goto label_2b1dd8;
        case 0x2b1ddcu: goto label_2b1ddc;
        case 0x2b1de0u: goto label_2b1de0;
        case 0x2b1de4u: goto label_2b1de4;
        case 0x2b1de8u: goto label_2b1de8;
        case 0x2b1decu: goto label_2b1dec;
        case 0x2b1df0u: goto label_2b1df0;
        case 0x2b1df4u: goto label_2b1df4;
        case 0x2b1df8u: goto label_2b1df8;
        case 0x2b1dfcu: goto label_2b1dfc;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e04u: goto label_2b1e04;
        case 0x2b1e08u: goto label_2b1e08;
        case 0x2b1e0cu: goto label_2b1e0c;
        case 0x2b1e10u: goto label_2b1e10;
        case 0x2b1e14u: goto label_2b1e14;
        case 0x2b1e18u: goto label_2b1e18;
        case 0x2b1e1cu: goto label_2b1e1c;
        case 0x2b1e20u: goto label_2b1e20;
        case 0x2b1e24u: goto label_2b1e24;
        case 0x2b1e28u: goto label_2b1e28;
        case 0x2b1e2cu: goto label_2b1e2c;
        case 0x2b1e30u: goto label_2b1e30;
        case 0x2b1e34u: goto label_2b1e34;
        case 0x2b1e38u: goto label_2b1e38;
        case 0x2b1e3cu: goto label_2b1e3c;
        case 0x2b1e40u: goto label_2b1e40;
        case 0x2b1e44u: goto label_2b1e44;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e4cu: goto label_2b1e4c;
        case 0x2b1e50u: goto label_2b1e50;
        case 0x2b1e54u: goto label_2b1e54;
        case 0x2b1e58u: goto label_2b1e58;
        case 0x2b1e5cu: goto label_2b1e5c;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e64u: goto label_2b1e64;
        case 0x2b1e68u: goto label_2b1e68;
        case 0x2b1e6cu: goto label_2b1e6c;
        case 0x2b1e70u: goto label_2b1e70;
        case 0x2b1e74u: goto label_2b1e74;
        case 0x2b1e78u: goto label_2b1e78;
        case 0x2b1e7cu: goto label_2b1e7c;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1e84u: goto label_2b1e84;
        case 0x2b1e88u: goto label_2b1e88;
        case 0x2b1e8cu: goto label_2b1e8c;
        case 0x2b1e90u: goto label_2b1e90;
        case 0x2b1e94u: goto label_2b1e94;
        case 0x2b1e98u: goto label_2b1e98;
        case 0x2b1e9cu: goto label_2b1e9c;
        case 0x2b1ea0u: goto label_2b1ea0;
        case 0x2b1ea4u: goto label_2b1ea4;
        case 0x2b1ea8u: goto label_2b1ea8;
        case 0x2b1eacu: goto label_2b1eac;
        case 0x2b1eb0u: goto label_2b1eb0;
        case 0x2b1eb4u: goto label_2b1eb4;
        case 0x2b1eb8u: goto label_2b1eb8;
        case 0x2b1ebcu: goto label_2b1ebc;
        case 0x2b1ec0u: goto label_2b1ec0;
        case 0x2b1ec4u: goto label_2b1ec4;
        case 0x2b1ec8u: goto label_2b1ec8;
        case 0x2b1eccu: goto label_2b1ecc;
        case 0x2b1ed0u: goto label_2b1ed0;
        case 0x2b1ed4u: goto label_2b1ed4;
        case 0x2b1ed8u: goto label_2b1ed8;
        case 0x2b1edcu: goto label_2b1edc;
        case 0x2b1ee0u: goto label_2b1ee0;
        case 0x2b1ee4u: goto label_2b1ee4;
        case 0x2b1ee8u: goto label_2b1ee8;
        case 0x2b1eecu: goto label_2b1eec;
        case 0x2b1ef0u: goto label_2b1ef0;
        case 0x2b1ef4u: goto label_2b1ef4;
        case 0x2b1ef8u: goto label_2b1ef8;
        case 0x2b1efcu: goto label_2b1efc;
        case 0x2b1f00u: goto label_2b1f00;
        case 0x2b1f04u: goto label_2b1f04;
        case 0x2b1f08u: goto label_2b1f08;
        case 0x2b1f0cu: goto label_2b1f0c;
        case 0x2b1f10u: goto label_2b1f10;
        case 0x2b1f14u: goto label_2b1f14;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f1cu: goto label_2b1f1c;
        case 0x2b1f20u: goto label_2b1f20;
        case 0x2b1f24u: goto label_2b1f24;
        case 0x2b1f28u: goto label_2b1f28;
        case 0x2b1f2cu: goto label_2b1f2c;
        case 0x2b1f30u: goto label_2b1f30;
        case 0x2b1f34u: goto label_2b1f34;
        case 0x2b1f38u: goto label_2b1f38;
        case 0x2b1f3cu: goto label_2b1f3c;
        case 0x2b1f40u: goto label_2b1f40;
        case 0x2b1f44u: goto label_2b1f44;
        case 0x2b1f48u: goto label_2b1f48;
        case 0x2b1f4cu: goto label_2b1f4c;
        case 0x2b1f50u: goto label_2b1f50;
        case 0x2b1f54u: goto label_2b1f54;
        case 0x2b1f58u: goto label_2b1f58;
        case 0x2b1f5cu: goto label_2b1f5c;
        case 0x2b1f60u: goto label_2b1f60;
        case 0x2b1f64u: goto label_2b1f64;
        case 0x2b1f68u: goto label_2b1f68;
        case 0x2b1f6cu: goto label_2b1f6c;
        case 0x2b1f70u: goto label_2b1f70;
        case 0x2b1f74u: goto label_2b1f74;
        case 0x2b1f78u: goto label_2b1f78;
        case 0x2b1f7cu: goto label_2b1f7c;
        case 0x2b1f80u: goto label_2b1f80;
        case 0x2b1f84u: goto label_2b1f84;
        case 0x2b1f88u: goto label_2b1f88;
        case 0x2b1f8cu: goto label_2b1f8c;
        case 0x2b1f90u: goto label_2b1f90;
        case 0x2b1f94u: goto label_2b1f94;
        case 0x2b1f98u: goto label_2b1f98;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1fa0u: goto label_2b1fa0;
        case 0x2b1fa4u: goto label_2b1fa4;
        case 0x2b1fa8u: goto label_2b1fa8;
        case 0x2b1facu: goto label_2b1fac;
        case 0x2b1fb0u: goto label_2b1fb0;
        case 0x2b1fb4u: goto label_2b1fb4;
        case 0x2b1fb8u: goto label_2b1fb8;
        case 0x2b1fbcu: goto label_2b1fbc;
        case 0x2b1fc0u: goto label_2b1fc0;
        case 0x2b1fc4u: goto label_2b1fc4;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fccu: goto label_2b1fcc;
        case 0x2b1fd0u: goto label_2b1fd0;
        case 0x2b1fd4u: goto label_2b1fd4;
        case 0x2b1fd8u: goto label_2b1fd8;
        case 0x2b1fdcu: goto label_2b1fdc;
        case 0x2b1fe0u: goto label_2b1fe0;
        case 0x2b1fe4u: goto label_2b1fe4;
        case 0x2b1fe8u: goto label_2b1fe8;
        case 0x2b1fecu: goto label_2b1fec;
        case 0x2b1ff0u: goto label_2b1ff0;
        case 0x2b1ff4u: goto label_2b1ff4;
        case 0x2b1ff8u: goto label_2b1ff8;
        case 0x2b1ffcu: goto label_2b1ffc;
        case 0x2b2000u: goto label_2b2000;
        case 0x2b2004u: goto label_2b2004;
        case 0x2b2008u: goto label_2b2008;
        case 0x2b200cu: goto label_2b200c;
        case 0x2b2010u: goto label_2b2010;
        case 0x2b2014u: goto label_2b2014;
        case 0x2b2018u: goto label_2b2018;
        case 0x2b201cu: goto label_2b201c;
        case 0x2b2020u: goto label_2b2020;
        case 0x2b2024u: goto label_2b2024;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b202cu: goto label_2b202c;
        case 0x2b2030u: goto label_2b2030;
        case 0x2b2034u: goto label_2b2034;
        case 0x2b2038u: goto label_2b2038;
        case 0x2b203cu: goto label_2b203c;
        case 0x2b2040u: goto label_2b2040;
        case 0x2b2044u: goto label_2b2044;
        case 0x2b2048u: goto label_2b2048;
        case 0x2b204cu: goto label_2b204c;
        case 0x2b2050u: goto label_2b2050;
        case 0x2b2054u: goto label_2b2054;
        case 0x2b2058u: goto label_2b2058;
        case 0x2b205cu: goto label_2b205c;
        case 0x2b2060u: goto label_2b2060;
        case 0x2b2064u: goto label_2b2064;
        case 0x2b2068u: goto label_2b2068;
        case 0x2b206cu: goto label_2b206c;
        case 0x2b2070u: goto label_2b2070;
        case 0x2b2074u: goto label_2b2074;
        case 0x2b2078u: goto label_2b2078;
        case 0x2b207cu: goto label_2b207c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b2088u: goto label_2b2088;
        case 0x2b208cu: goto label_2b208c;
        case 0x2b2090u: goto label_2b2090;
        case 0x2b2094u: goto label_2b2094;
        case 0x2b2098u: goto label_2b2098;
        case 0x2b209cu: goto label_2b209c;
        case 0x2b20a0u: goto label_2b20a0;
        case 0x2b20a4u: goto label_2b20a4;
        case 0x2b20a8u: goto label_2b20a8;
        case 0x2b20acu: goto label_2b20ac;
        case 0x2b20b0u: goto label_2b20b0;
        case 0x2b20b4u: goto label_2b20b4;
        case 0x2b20b8u: goto label_2b20b8;
        case 0x2b20bcu: goto label_2b20bc;
        case 0x2b20c0u: goto label_2b20c0;
        case 0x2b20c4u: goto label_2b20c4;
        case 0x2b20c8u: goto label_2b20c8;
        case 0x2b20ccu: goto label_2b20cc;
        case 0x2b20d0u: goto label_2b20d0;
        case 0x2b20d4u: goto label_2b20d4;
        case 0x2b20d8u: goto label_2b20d8;
        case 0x2b20dcu: goto label_2b20dc;
        case 0x2b20e0u: goto label_2b20e0;
        case 0x2b20e4u: goto label_2b20e4;
        case 0x2b20e8u: goto label_2b20e8;
        case 0x2b20ecu: goto label_2b20ec;
        case 0x2b20f0u: goto label_2b20f0;
        case 0x2b20f4u: goto label_2b20f4;
        case 0x2b20f8u: goto label_2b20f8;
        case 0x2b20fcu: goto label_2b20fc;
        case 0x2b2100u: goto label_2b2100;
        case 0x2b2104u: goto label_2b2104;
        case 0x2b2108u: goto label_2b2108;
        case 0x2b210cu: goto label_2b210c;
        case 0x2b2110u: goto label_2b2110;
        case 0x2b2114u: goto label_2b2114;
        case 0x2b2118u: goto label_2b2118;
        case 0x2b211cu: goto label_2b211c;
        case 0x2b2120u: goto label_2b2120;
        case 0x2b2124u: goto label_2b2124;
        case 0x2b2128u: goto label_2b2128;
        case 0x2b212cu: goto label_2b212c;
        case 0x2b2130u: goto label_2b2130;
        case 0x2b2134u: goto label_2b2134;
        case 0x2b2138u: goto label_2b2138;
        case 0x2b213cu: goto label_2b213c;
        case 0x2b2140u: goto label_2b2140;
        case 0x2b2144u: goto label_2b2144;
        case 0x2b2148u: goto label_2b2148;
        case 0x2b214cu: goto label_2b214c;
        case 0x2b2150u: goto label_2b2150;
        case 0x2b2154u: goto label_2b2154;
        default: break;
    }

    ctx->pc = 0x2b1860u;

label_2b1860:
    // 0x2b1860: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2b1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2b1864:
    // 0x2b1864: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b1868:
    // 0x2b1868: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2b1868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2b186c:
    // 0x2b186c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b1870:
    // 0x2b1870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1874:
    // 0x2b1874: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2b1874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2b1878:
    // 0x2b1878: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b1878u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b187c:
    // 0x2b187c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2b187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2b1880:
    // 0x2b1880: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2b1880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2b1884:
    // 0x2b1884: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2b1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2b1888:
    // 0x2b1888: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2b1888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2b188c:
    // 0x2b188c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2b188cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2b1890:
    // 0x2b1890: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2b1890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2b1894:
    // 0x2b1894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b1894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2b1898:
    // 0x2b1898: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2b1898u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2b189c:
    // 0x2b189c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2b189cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2b18a0:
    // 0x2b18a0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2b18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2b18a4:
    // 0x2b18a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b18a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b18a8:
    // 0x2b18a8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2b18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b18ac:
    // 0x2b18ac: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2b18acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_2b18b0:
    // 0x2b18b0: 0xc0a3678  jal         func_28D9E0
label_2b18b4:
    if (ctx->pc == 0x2B18B4u) {
        ctx->pc = 0x2B18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18B0u;
        // 0x2b18b4: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B18B8u;
        goto label_2b18b8;
    }
    ctx->pc = 0x2B18B0u;
    SET_GPR_U32(ctx, 31, 0x2B18B8u);
    ctx->pc = 0x2B18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18B0u;
    // 0x2b18b4: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2B18B0u, 0x2B18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18B8u;
label_2b18b8:
    // 0x2b18b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2b18bc:
    if (ctx->pc == 0x2B18BCu) {
        ctx->pc = 0x2B18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18B8u;
        // 0x2b18bc: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B18C0u;
        goto label_2b18c0;
    }
    ctx->pc = 0x2B18B8u;
    {
        const bool branch_taken_0x2b18b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b18b8) {
            ctx->pc = 0x2B18BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B18B8u;
            // 0x2b18bc: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B18F4u;
            goto label_2b18f4;
        }
    }
    ctx->pc = 0x2B18C0u;
label_2b18c0:
    // 0x2b18c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b18c4:
    // 0x2b18c4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b18c8:
    // 0x2b18c8: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2b18c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b18cc:
    // 0x2b18cc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_2b18d0:
    if (ctx->pc == 0x2B18D0u) {
        ctx->pc = 0x2B18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18CCu;
        // 0x2b18d0: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B18D4u;
        goto label_2b18d4;
    }
    ctx->pc = 0x2B18CCu;
    {
        const bool branch_taken_0x2b18cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b18cc) {
            ctx->pc = 0x2B18D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B18CCu;
            // 0x2b18d0: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B18F4u;
            goto label_2b18f4;
        }
    }
    ctx->pc = 0x2B18D4u;
label_2b18d4:
    // 0x2b18d4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2b18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2b18d8:
    // 0x2b18d8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b18d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b18dc:
    // 0x2b18dc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b18e0:
    // 0x2b18e0: 0x40f809  jalr        $v0
label_2b18e4:
    if (ctx->pc == 0x2B18E4u) {
        ctx->pc = 0x2B18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18E0u;
        // 0x2b18e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B18E8u;
        goto label_2b18e8;
    }
    ctx->pc = 0x2B18E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B18E8u);
        ctx->pc = 0x2B18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18E0u;
        // 0x2b18e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B18E0u, 0x2B18E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B18E8u;
label_2b18e8:
    // 0x2b18e8: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x2b18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
label_2b18ec:
    // 0x2b18ec: 0x202b80a  movz        $s7, $s0, $v0
    ctx->pc = 0x2b18ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
label_2b18f0:
    // 0x2b18f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b18f4:
    // 0x2b18f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b18f8:
    // 0x2b18f8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b18f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b18fc:
    // 0x2b18fc: 0xc0e409a  jal         func_390268
label_2b1900:
    if (ctx->pc == 0x2B1900u) {
        ctx->pc = 0x2B1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18FCu;
        // 0x2b1900: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1904u;
        goto label_2b1904;
    }
    ctx->pc = 0x2B18FCu;
    SET_GPR_U32(ctx, 31, 0x2B1904u);
    ctx->pc = 0x2B1900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18FCu;
    // 0x2b1900: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B18FCu, 0x2B1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1904u;
label_2b1904:
    // 0x2b1904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1908:
    // 0x2b1908: 0xc0a34d6  jal         func_28D358
label_2b190c:
    if (ctx->pc == 0x2B190Cu) {
        ctx->pc = 0x2B190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1908u;
        // 0x2b190c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1910u;
        goto label_2b1910;
    }
    ctx->pc = 0x2B1908u;
    SET_GPR_U32(ctx, 31, 0x2B1910u);
    ctx->pc = 0x2B190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1908u;
    // 0x2b190c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B1908u, 0x2B1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1910u;
label_2b1910:
    // 0x2b1910: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b1910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1914:
    // 0x2b1914: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2b1918:
    if (ctx->pc == 0x2B1918u) {
        ctx->pc = 0x2B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1914u;
        // 0x2b1918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B191Cu;
        goto label_2b191c;
    }
    ctx->pc = 0x2B1914u;
    {
        const bool branch_taken_0x2b1914 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1914u;
        // 0x2b1918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1914) {
            ctx->pc = 0x2B193Cu;
            goto label_2b193c;
        }
    }
    ctx->pc = 0x2B191Cu;
label_2b191c:
    // 0x2b191c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b191cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1920:
    // 0x2b1920: 0xc0a3fde  jal         func_28FF78
label_2b1924:
    if (ctx->pc == 0x2B1924u) {
        ctx->pc = 0x2B1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1920u;
        // 0x2b1924: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1928u;
        goto label_2b1928;
    }
    ctx->pc = 0x2B1920u;
    SET_GPR_U32(ctx, 31, 0x2B1928u);
    ctx->pc = 0x2B1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1920u;
    // 0x2b1924: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2B1920u, 0x2B1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1928u;
label_2b1928:
    // 0x2b1928: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b192c:
    // 0x2b192c: 0xc0a4162  jal         func_290588
label_2b1930:
    if (ctx->pc == 0x2B1930u) {
        ctx->pc = 0x2B1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B192Cu;
        // 0x2b1930: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1934u;
        goto label_2b1934;
    }
    ctx->pc = 0x2B192Cu;
    SET_GPR_U32(ctx, 31, 0x2B1934u);
    ctx->pc = 0x2B1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B192Cu;
    // 0x2b1930: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2B192Cu, 0x2B1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1934u;
label_2b1934:
    // 0x2b1934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b1938:
    if (ctx->pc == 0x2B1938u) {
        ctx->pc = 0x2B1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1934u;
        // 0x2b1938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B193Cu;
        goto label_2b193c;
    }
    ctx->pc = 0x2B1934u;
    {
        const bool branch_taken_0x2b1934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1934u;
        // 0x2b1938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1934) {
            ctx->pc = 0x2B1944u;
            goto label_2b1944;
        }
    }
    ctx->pc = 0x2B193Cu;
label_2b193c:
    // 0x2b193c: 0x100001f8  b           . + 4 + (0x1F8 << 2)
label_2b1940:
    if (ctx->pc == 0x2B1940u) {
        ctx->pc = 0x2B1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B193Cu;
        // 0x2b1940: 0x17100b  movn        $v0, $zero, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1944u;
        goto label_2b1944;
    }
    ctx->pc = 0x2B193Cu;
    {
        const bool branch_taken_0x2b193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B193Cu;
        // 0x2b1940: 0x17100b  movn        $v0, $zero, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b193c) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1944u;
label_2b1944:
    // 0x2b1944: 0xc087502  jal         func_21D408
label_2b1948:
    if (ctx->pc == 0x2B1948u) {
        ctx->pc = 0x2B1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1944u;
        // 0x2b1948: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B194Cu;
        goto label_2b194c;
    }
    ctx->pc = 0x2B1944u;
    SET_GPR_U32(ctx, 31, 0x2B194Cu);
    ctx->pc = 0x2B1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1944u;
    // 0x2b1948: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B1944u, 0x2B194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B194Cu;
label_2b194c:
    // 0x2b194c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2b194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_2b1950:
    // 0x2b1950: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2b1954:
    // 0x2b1954: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2b1954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2b1958:
    // 0x2b1958: 0x908302d4  lbu         $v1, 0x2D4($a0)
    ctx->pc = 0x2b1958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 724)));
label_2b195c:
    // 0x2b195c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2b195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b1960:
    // 0x2b1960: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2b1960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2b1964:
    // 0x2b1964: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2b1968:
    if (ctx->pc == 0x2B1968u) {
        ctx->pc = 0x2B1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1964u;
        // 0x2b1968: 0x3b02b  sltu        $s6, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B196Cu;
        goto label_2b196c;
    }
    ctx->pc = 0x2B1964u;
    {
        const bool branch_taken_0x2b1964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1964u;
        // 0x2b1968: 0x3b02b  sltu        $s6, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1964) {
            ctx->pc = 0x2B19E0u;
            goto label_2b19e0;
        }
    }
    ctx->pc = 0x2B196Cu;
label_2b196c:
    // 0x2b196c: 0x92220058  lbu         $v0, 0x58($s1)
    ctx->pc = 0x2b196cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2b1970:
    // 0x2b1970: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2b1974:
    if (ctx->pc == 0x2B1974u) {
        ctx->pc = 0x2B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1970u;
        // 0x2b1974: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1978u;
        goto label_2b1978;
    }
    ctx->pc = 0x2B1970u;
    {
        const bool branch_taken_0x2b1970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1970u;
        // 0x2b1974: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1970) {
            ctx->pc = 0x2B19E4u;
            goto label_2b19e4;
        }
    }
    ctx->pc = 0x2B1978u;
label_2b1978:
    // 0x2b1978: 0x24831f40  addiu       $v1, $a0, 0x1F40
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
label_2b197c:
    // 0x2b197c: 0x92300055  lbu         $s0, 0x55($s1)
    ctx->pc = 0x2b197cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2b1980:
    // 0x2b1980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1984:
    // 0x2b1984: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_2b1988:
    if (ctx->pc == 0x2B1988u) {
        ctx->pc = 0x2B1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1984u;
        // 0x2b1988: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B198Cu;
        goto label_2b198c;
    }
    ctx->pc = 0x2B1984u;
    {
        const bool branch_taken_0x2b1984 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1984u;
        // 0x2b1988: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1984) {
            ctx->pc = 0x2B19E0u;
            goto label_2b19e0;
        }
    }
    ctx->pc = 0x2B198Cu;
label_2b198c:
    // 0x2b198c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_2b1990:
    if (ctx->pc == 0x2B1990u) {
        ctx->pc = 0x2B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B198Cu;
        // 0x2b1990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1994u;
        goto label_2b1994;
    }
    ctx->pc = 0x2B198Cu;
    {
        const bool branch_taken_0x2b198c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B198Cu;
        // 0x2b1990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b198c) {
            ctx->pc = 0x2B19A4u;
            goto label_2b19a4;
        }
    }
    ctx->pc = 0x2B1994u;
label_2b1994:
    // 0x2b1994: 0xc0c6026  jal         func_318098
label_2b1998:
    if (ctx->pc == 0x2B1998u) {
        ctx->pc = 0x2B1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1994u;
        // 0x2b1998: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B199Cu;
        goto label_2b199c;
    }
    ctx->pc = 0x2B1994u;
    SET_GPR_U32(ctx, 31, 0x2B199Cu);
    ctx->pc = 0x2B1998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1994u;
    // 0x2b1998: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318098u, 0x2B1994u, 0x2B199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B199Cu;
label_2b199c:
    // 0x2b199c: 0x14500011  bne         $v0, $s0, . + 4 + (0x11 << 2)
label_2b19a0:
    if (ctx->pc == 0x2B19A0u) {
        ctx->pc = 0x2B19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B199Cu;
        // 0x2b19a0: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B19A4u;
        goto label_2b19a4;
    }
    ctx->pc = 0x2B199Cu;
    {
        const bool branch_taken_0x2b199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B199Cu;
        // 0x2b19a0: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b199c) {
            ctx->pc = 0x2B19E4u;
            goto label_2b19e4;
        }
    }
    ctx->pc = 0x2B19A4u;
label_2b19a4:
    // 0x2b19a4: 0xc0a47b4  jal         func_291ED0
label_2b19a8:
    if (ctx->pc == 0x2B19A8u) {
        ctx->pc = 0x2B19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19A4u;
        // 0x2b19a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B19ACu;
        goto label_2b19ac;
    }
    ctx->pc = 0x2B19A4u;
    SET_GPR_U32(ctx, 31, 0x2B19ACu);
    ctx->pc = 0x2B19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19A4u;
    // 0x2b19a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B19A4u, 0x2B19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19ACu;
label_2b19ac:
    // 0x2b19ac: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
label_2b19b0:
    if (ctx->pc == 0x2B19B0u) {
        ctx->pc = 0x2B19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19ACu;
        // 0x2b19b0: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B19B4u;
        goto label_2b19b4;
    }
    ctx->pc = 0x2B19ACu;
    {
        const bool branch_taken_0x2b19ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19ACu;
        // 0x2b19b0: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19ac) {
            ctx->pc = 0x2B19E4u;
            goto label_2b19e4;
        }
    }
    ctx->pc = 0x2B19B4u;
label_2b19b4:
    // 0x2b19b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b19b8:
    // 0x2b19b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b19b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b19bc:
    // 0x2b19bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b19bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b19c0:
    // 0x2b19c0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b19c4:
    // 0x2b19c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b19c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b19c8:
    // 0x2b19c8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2b19c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2b19cc:
    // 0x2b19cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b19ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b19d0:
    // 0x2b19d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b19d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b19d4:
    // 0x2b19d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b19d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b19d8:
    // 0x2b19d8: 0xc088178  jal         func_2205E0
label_2b19dc:
    if (ctx->pc == 0x2B19DCu) {
        ctx->pc = 0x2B19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19D8u;
        // 0x2b19dc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B19E0u;
        goto label_2b19e0;
    }
    ctx->pc = 0x2B19D8u;
    SET_GPR_U32(ctx, 31, 0x2B19E0u);
    ctx->pc = 0x2B19DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19D8u;
    // 0x2b19dc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B19D8u, 0x2B19E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19E0u;
label_2b19e0:
    // 0x2b19e0: 0x26630090  addiu       $v1, $s3, 0x90
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2b19e4:
    // 0x2b19e4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2b19e8:
    // 0x2b19e8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2b19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_2b19ec:
    // 0x2b19ec: 0x24904b00  addiu       $s0, $a0, 0x4B00
    ctx->pc = 0x2b19ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2b19f0:
    // 0x2b19f0: 0x26860090  addiu       $a2, $s4, 0x90
    ctx->pc = 0x2b19f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2b19f4:
    // 0x2b19f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b19f8:
    // 0x2b19f8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2b19f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2b19fc:
    // 0x2b19fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2b19fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a00:
    // 0x2b1a00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b1a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a04:
    // 0x2b1a04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b1a08:
    // 0x2b1a08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b1a0c:
    // 0x2b1a0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b1a0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1a10:
    // 0x2b1a10: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2b1a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2b1a14:
    // 0x2b1a14: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2b1a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2b1a18:
    // 0x2b1a18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b1a1c:
    // 0x2b1a1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b1a20:
    // 0x2b1a20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b1a20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1a24:
    // 0x2b1a24: 0xc0cdb38  jal         func_336CE0
label_2b1a28:
    if (ctx->pc == 0x2B1A28u) {
        ctx->pc = 0x2B1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A24u;
        // 0x2b1a28: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A2Cu;
        goto label_2b1a2c;
    }
    ctx->pc = 0x2B1A24u;
    SET_GPR_U32(ctx, 31, 0x2B1A2Cu);
    ctx->pc = 0x2B1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A24u;
    // 0x2b1a28: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B1A24u, 0x2B1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A2Cu;
label_2b1a2c:
    // 0x2b1a2c: 0x92230055  lbu         $v1, 0x55($s1)
    ctx->pc = 0x2b1a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2b1a30:
    // 0x2b1a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1a34:
    // 0x2b1a34: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_2b1a38:
    if (ctx->pc == 0x2B1A38u) {
        ctx->pc = 0x2B1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A34u;
        // 0x2b1a38: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A3Cu;
        goto label_2b1a3c;
    }
    ctx->pc = 0x2B1A34u;
    {
        const bool branch_taken_0x2b1a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A34u;
        // 0x2b1a38: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a34) {
            ctx->pc = 0x2B1B30u;
            goto label_2b1b30;
        }
    }
    ctx->pc = 0x2B1A3Cu;
label_2b1a3c:
    // 0x2b1a3c: 0x92220056  lbu         $v0, 0x56($s1)
    ctx->pc = 0x2b1a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2b1a40:
    // 0x2b1a40: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
label_2b1a44:
    if (ctx->pc == 0x2B1A44u) {
        ctx->pc = 0x2B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A40u;
        // 0x2b1a44: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A48u;
        goto label_2b1a48;
    }
    ctx->pc = 0x2B1A40u;
    {
        const bool branch_taken_0x2b1a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a40) {
            ctx->pc = 0x2B1A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1A40u;
            // 0x2b1a44: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B34u;
            goto label_2b1b34;
        }
    }
    ctx->pc = 0x2B1A48u;
label_2b1a48:
    // 0x2b1a48: 0x87c40002  lh          $a0, 0x2($fp)
    ctx->pc = 0x2b1a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b1a4c:
    // 0x2b1a4c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2b1a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2b1a50:
    // 0x2b1a50: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b1a54:
    // 0x2b1a54: 0xc0cdb38  jal         func_336CE0
label_2b1a58:
    if (ctx->pc == 0x2B1A58u) {
        ctx->pc = 0x2B1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A54u;
        // 0x2b1a58: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A5Cu;
        goto label_2b1a5c;
    }
    ctx->pc = 0x2B1A54u;
    SET_GPR_U32(ctx, 31, 0x2B1A5Cu);
    ctx->pc = 0x2B1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A54u;
    // 0x2b1a58: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B1A54u, 0x2B1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A5Cu;
label_2b1a5c:
    // 0x2b1a5c: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x2b1a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
label_2b1a60:
    // 0x2b1a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b1a64:
    // 0x2b1a64: 0x0  nop
    ctx->pc = 0x2b1a64u;
    // NOP
label_2b1a68:
    // 0x2b1a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b1a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1a6c:
    // 0x2b1a6c: 0x0  nop
    ctx->pc = 0x2b1a6cu;
    // NOP
label_2b1a70:
    // 0x2b1a70: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b1a74:
    if (ctx->pc == 0x2B1A74u) {
        ctx->pc = 0x2B1A78u;
        goto label_2b1a78;
    }
    ctx->pc = 0x2B1A70u;
    {
        const bool branch_taken_0x2b1a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1a70) {
            ctx->pc = 0x2B1A88u;
            goto label_2b1a88;
        }
    }
    ctx->pc = 0x2B1A78u;
label_2b1a78:
    // 0x2b1a78: 0xc0a36c8  jal         func_28DB20
label_2b1a7c:
    if (ctx->pc == 0x2B1A7Cu) {
        ctx->pc = 0x2B1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A78u;
        // 0x2b1a7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A80u;
        goto label_2b1a80;
    }
    ctx->pc = 0x2B1A78u;
    SET_GPR_U32(ctx, 31, 0x2B1A80u);
    ctx->pc = 0x2B1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A78u;
    // 0x2b1a7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B1A78u, 0x2B1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A80u;
label_2b1a80:
    // 0x2b1a80: 0x104001a7  beqz        $v0, . + 4 + (0x1A7 << 2)
label_2b1a84:
    if (ctx->pc == 0x2B1A84u) {
        ctx->pc = 0x2B1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A80u;
        // 0x2b1a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A88u;
        goto label_2b1a88;
    }
    ctx->pc = 0x2B1A80u;
    {
        const bool branch_taken_0x2b1a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A80u;
        // 0x2b1a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a80) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1A88u;
label_2b1a88:
    // 0x2b1a88: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b1a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2b1a8c:
    // 0x2b1a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1a90:
    // 0x2b1a90: 0x0  nop
    ctx->pc = 0x2b1a90u;
    // NOP
label_2b1a94:
    // 0x2b1a94: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2b1a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1a98:
    // 0x2b1a98: 0x0  nop
    ctx->pc = 0x2b1a98u;
    // NOP
label_2b1a9c:
    // 0x2b1a9c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_2b1aa0:
    if (ctx->pc == 0x2B1AA0u) {
        ctx->pc = 0x2B1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A9Cu;
        // 0x2b1aa0: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AA4u;
        goto label_2b1aa4;
    }
    ctx->pc = 0x2B1A9Cu;
    {
        const bool branch_taken_0x2b1a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1a9c) {
            ctx->pc = 0x2B1AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1A9Cu;
            // 0x2b1aa0: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B34u;
            goto label_2b1b34;
        }
    }
    ctx->pc = 0x2B1AA4u;
label_2b1aa4:
    // 0x2b1aa4: 0x92230059  lbu         $v1, 0x59($s1)
    ctx->pc = 0x2b1aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_2b1aa8:
    // 0x2b1aa8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1aac:
    if (ctx->pc == 0x2B1AACu) {
        ctx->pc = 0x2B1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AA8u;
        // 0x2b1aac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AB0u;
        goto label_2b1ab0;
    }
    ctx->pc = 0x2B1AA8u;
    {
        const bool branch_taken_0x2b1aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AA8u;
        // 0x2b1aac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1aa8) {
            ctx->pc = 0x2B1AB8u;
            goto label_2b1ab8;
        }
    }
    ctx->pc = 0x2B1AB0u;
label_2b1ab0:
    // 0x2b1ab0: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
label_2b1ab4:
    if (ctx->pc == 0x2B1AB4u) {
        ctx->pc = 0x2B1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AB0u;
        // 0x2b1ab4: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AB8u;
        goto label_2b1ab8;
    }
    ctx->pc = 0x2B1AB0u;
    {
        const bool branch_taken_0x2b1ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1ab0) {
            ctx->pc = 0x2B1AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1AB0u;
            // 0x2b1ab4: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B34u;
            goto label_2b1b34;
        }
    }
    ctx->pc = 0x2B1AB8u;
label_2b1ab8:
    // 0x2b1ab8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1abc:
    // 0x2b1abc: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b1abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b1ac0:
    // 0x2b1ac0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_2b1ac4:
    if (ctx->pc == 0x2B1AC4u) {
        ctx->pc = 0x2B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AC0u;
        // 0x2b1ac4: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AC8u;
        goto label_2b1ac8;
    }
    ctx->pc = 0x2B1AC0u;
    {
        const bool branch_taken_0x2b1ac0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AC0u;
        // 0x2b1ac4: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ac0) {
            ctx->pc = 0x2B1B30u;
            goto label_2b1b30;
        }
    }
    ctx->pc = 0x2B1AC8u;
label_2b1ac8:
    // 0x2b1ac8: 0xc0a36c2  jal         func_28DB08
label_2b1acc:
    if (ctx->pc == 0x2B1ACCu) {
        ctx->pc = 0x2B1AD0u;
        goto label_2b1ad0;
    }
    ctx->pc = 0x2B1AC8u;
    SET_GPR_U32(ctx, 31, 0x2B1AD0u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2B1AC8u, 0x2B1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AD0u;
label_2b1ad0:
    // 0x2b1ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b1ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ad4:
    // 0x2b1ad4: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
label_2b1ad8:
    if (ctx->pc == 0x2B1AD8u) {
        ctx->pc = 0x2B1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AD4u;
        // 0x2b1ad8: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1ADCu;
        goto label_2b1adc;
    }
    ctx->pc = 0x2B1AD4u;
    {
        const bool branch_taken_0x2b1ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ad4) {
            ctx->pc = 0x2B1AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1AD4u;
            // 0x2b1ad8: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B34u;
            goto label_2b1b34;
        }
    }
    ctx->pc = 0x2B1ADCu;
label_2b1adc:
    // 0x2b1adc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b1adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2b1ae0:
    // 0x2b1ae0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2b1ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2b1ae4:
    // 0x2b1ae4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b1ae8:
    // 0x2b1ae8: 0x40f809  jalr        $v0
label_2b1aec:
    if (ctx->pc == 0x2B1AECu) {
        ctx->pc = 0x2B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AE8u;
        // 0x2b1aec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AF0u;
        goto label_2b1af0;
    }
    ctx->pc = 0x2B1AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1AF0u);
        ctx->pc = 0x2B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AE8u;
        // 0x2b1aec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1AE8u, 0x2B1AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1AF0u;
label_2b1af0:
    // 0x2b1af0: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
label_2b1af4:
    if (ctx->pc == 0x2B1AF4u) {
        ctx->pc = 0x2B1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AF0u;
        // 0x2b1af4: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AF8u;
        goto label_2b1af8;
    }
    ctx->pc = 0x2B1AF0u;
    {
        const bool branch_taken_0x2b1af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b1af0) {
            ctx->pc = 0x2B1AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1AF0u;
            // 0x2b1af4: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B34u;
            goto label_2b1b34;
        }
    }
    ctx->pc = 0x2B1AF8u;
label_2b1af8:
    // 0x2b1af8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b1afc:
    // 0x2b1afc: 0xc0cdb38  jal         func_336CE0
label_2b1b00:
    if (ctx->pc == 0x2B1B00u) {
        ctx->pc = 0x2B1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AFCu;
        // 0x2b1b00: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B04u;
        goto label_2b1b04;
    }
    ctx->pc = 0x2B1AFCu;
    SET_GPR_U32(ctx, 31, 0x2B1B04u);
    ctx->pc = 0x2B1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AFCu;
    // 0x2b1b00: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B1AFCu, 0x2B1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B04u;
label_2b1b04:
    // 0x2b1b04: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2b1b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_2b1b08:
    // 0x2b1b08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b1b0c:
    // 0x2b1b0c: 0x0  nop
    ctx->pc = 0x2b1b0cu;
    // NOP
label_2b1b10:
    // 0x2b1b10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b1b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1b14:
    // 0x2b1b14: 0x0  nop
    ctx->pc = 0x2b1b14u;
    // NOP
label_2b1b18:
    // 0x2b1b18: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2b1b1c:
    if (ctx->pc == 0x2B1B1Cu) {
        ctx->pc = 0x2B1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B18u;
        // 0x2b1b1c: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B20u;
        goto label_2b1b20;
    }
    ctx->pc = 0x2B1B18u;
    {
        const bool branch_taken_0x2b1b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1b18) {
            ctx->pc = 0x2B1B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B18u;
            // 0x2b1b1c: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B34u;
            goto label_2b1b34;
        }
    }
    ctx->pc = 0x2B1B20u;
label_2b1b20:
    // 0x2b1b20: 0xc0a36c8  jal         func_28DB20
label_2b1b24:
    if (ctx->pc == 0x2B1B24u) {
        ctx->pc = 0x2B1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B20u;
        // 0x2b1b24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B28u;
        goto label_2b1b28;
    }
    ctx->pc = 0x2B1B20u;
    SET_GPR_U32(ctx, 31, 0x2B1B28u);
    ctx->pc = 0x2B1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B20u;
    // 0x2b1b24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B1B20u, 0x2B1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B28u;
label_2b1b28:
    // 0x2b1b28: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
label_2b1b2c:
    if (ctx->pc == 0x2B1B2Cu) {
        ctx->pc = 0x2B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B28u;
        // 0x2b1b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B30u;
        goto label_2b1b30;
    }
    ctx->pc = 0x2B1B28u;
    {
        const bool branch_taken_0x2b1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B28u;
        // 0x2b1b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b28) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1B30u;
label_2b1b30:
    // 0x2b1b30: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2b1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2b1b34:
    // 0x2b1b34: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_2b1b38:
    if (ctx->pc == 0x2B1B38u) {
        ctx->pc = 0x2B1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B34u;
        // 0x2b1b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B3Cu;
        goto label_2b1b3c;
    }
    ctx->pc = 0x2B1B34u;
    {
        const bool branch_taken_0x2b1b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B34u;
        // 0x2b1b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b34) {
            ctx->pc = 0x2B1D44u;
            goto label_2b1d44;
        }
    }
    ctx->pc = 0x2B1B3Cu;
label_2b1b3c:
    // 0x2b1b3c: 0x56c2000e  bnel        $s6, $v0, . + 4 + (0xE << 2)
label_2b1b40:
    if (ctx->pc == 0x2B1B40u) {
        ctx->pc = 0x2B1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B3Cu;
        // 0x2b1b40: 0x92320055  lbu         $s2, 0x55($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B44u;
        goto label_2b1b44;
    }
    ctx->pc = 0x2B1B3Cu;
    {
        const bool branch_taken_0x2b1b3c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1b3c) {
            ctx->pc = 0x2B1B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B3Cu;
            // 0x2b1b40: 0x92320055  lbu         $s2, 0x55($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B78u;
            goto label_2b1b78;
        }
    }
    ctx->pc = 0x2B1B44u;
label_2b1b44:
    // 0x2b1b44: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2b1b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2b1b48:
    // 0x2b1b48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1b4c:
    // 0x2b1b4c: 0x0  nop
    ctx->pc = 0x2b1b4cu;
    // NOP
label_2b1b50:
    // 0x2b1b50: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b1b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1b54:
    // 0x2b1b54: 0x0  nop
    ctx->pc = 0x2b1b54u;
    // NOP
label_2b1b58:
    // 0x2b1b58: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2b1b5c:
    if (ctx->pc == 0x2B1B5Cu) {
        ctx->pc = 0x2B1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B58u;
        // 0x2b1b5c: 0x92320055  lbu         $s2, 0x55($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B60u;
        goto label_2b1b60;
    }
    ctx->pc = 0x2B1B58u;
    {
        const bool branch_taken_0x2b1b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1b58) {
            ctx->pc = 0x2B1B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B58u;
            // 0x2b1b5c: 0x92320055  lbu         $s2, 0x55($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B78u;
            goto label_2b1b78;
        }
    }
    ctx->pc = 0x2B1B60u;
label_2b1b60:
    // 0x2b1b60: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2b1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2b1b64:
    // 0x2b1b64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b1b68:
    if (ctx->pc == 0x2B1B68u) {
        ctx->pc = 0x2B1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B64u;
        // 0x2b1b68: 0x2442ffbe  addiu       $v0, $v0, -0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967230));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B6Cu;
        goto label_2b1b6c;
    }
    ctx->pc = 0x2B1B64u;
    {
        const bool branch_taken_0x2b1b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B64u;
        // 0x2b1b68: 0x2442ffbe  addiu       $v0, $v0, -0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b64) {
            ctx->pc = 0x2B1B70u;
            goto label_2b1b70;
        }
    }
    ctx->pc = 0x2B1B6Cu;
label_2b1b6c:
    // 0x2b1b6c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2b1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_2b1b70:
    // 0x2b1b70: 0x92320055  lbu         $s2, 0x55($s1)
    ctx->pc = 0x2b1b70u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2b1b74:
    // 0x2b1b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1b78:
    // 0x2b1b78: 0x56420073  bnel        $s2, $v0, . + 4 + (0x73 << 2)
label_2b1b7c:
    if (ctx->pc == 0x2B1B7Cu) {
        ctx->pc = 0x2B1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B78u;
        // 0x2b1b7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B80u;
        goto label_2b1b80;
    }
    ctx->pc = 0x2B1B78u;
    {
        const bool branch_taken_0x2b1b78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1b78) {
            ctx->pc = 0x2B1B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B78u;
            // 0x2b1b7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D48u;
            goto label_2b1d48;
        }
    }
    ctx->pc = 0x2B1B80u;
label_2b1b80:
    // 0x2b1b80: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2b1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2b1b84:
    // 0x2b1b84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b1b88:
    // 0x2b1b88: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b1b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b1b8c:
    // 0x2b1b8c: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
label_2b1b90:
    if (ctx->pc == 0x2B1B90u) {
        ctx->pc = 0x2B1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B8Cu;
        // 0x2b1b90: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B94u;
        goto label_2b1b94;
    }
    ctx->pc = 0x2B1B8Cu;
    {
        const bool branch_taken_0x2b1b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b8c) {
            ctx->pc = 0x2B1B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B8Cu;
            // 0x2b1b90: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D48u;
            goto label_2b1d48;
        }
    }
    ctx->pc = 0x2B1B94u;
label_2b1b94:
    // 0x2b1b94: 0x92230059  lbu         $v1, 0x59($s1)
    ctx->pc = 0x2b1b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_2b1b98:
    // 0x2b1b98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1b9c:
    if (ctx->pc == 0x2B1B9Cu) {
        ctx->pc = 0x2B1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B98u;
        // 0x2b1b9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BA0u;
        goto label_2b1ba0;
    }
    ctx->pc = 0x2B1B98u;
    {
        const bool branch_taken_0x2b1b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B98u;
        // 0x2b1b9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b98) {
            ctx->pc = 0x2B1BA8u;
            goto label_2b1ba8;
        }
    }
    ctx->pc = 0x2B1BA0u;
label_2b1ba0:
    // 0x2b1ba0: 0x54620069  bnel        $v1, $v0, . + 4 + (0x69 << 2)
label_2b1ba4:
    if (ctx->pc == 0x2B1BA4u) {
        ctx->pc = 0x2B1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BA0u;
        // 0x2b1ba4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BA8u;
        goto label_2b1ba8;
    }
    ctx->pc = 0x2B1BA0u;
    {
        const bool branch_taken_0x2b1ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1ba0) {
            ctx->pc = 0x2B1BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1BA0u;
            // 0x2b1ba4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D48u;
            goto label_2b1d48;
        }
    }
    ctx->pc = 0x2B1BA8u;
label_2b1ba8:
    // 0x2b1ba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1bac:
    // 0x2b1bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bb0:
    // 0x2b1bb0: 0xc0a2fc0  jal         func_28BF00
label_2b1bb4:
    if (ctx->pc == 0x2B1BB4u) {
        ctx->pc = 0x2B1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BB0u;
        // 0x2b1bb4: 0xc454012c  lwc1        $f20, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BB8u;
        goto label_2b1bb8;
    }
    ctx->pc = 0x2B1BB0u;
    SET_GPR_U32(ctx, 31, 0x2B1BB8u);
    ctx->pc = 0x2B1BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BB0u;
    // 0x2b1bb4: 0xc454012c  lwc1        $f20, 0x12C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2B1BB0u, 0x2B1BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BB8u;
label_2b1bb8:
    // 0x2b1bb8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2b1bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2b1bbc:
    // 0x2b1bbc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2b1bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2b1bc0:
    // 0x2b1bc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b1bc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b1bc4:
    // 0x2b1bc4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b1bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2b1bc8:
    // 0x2b1bc8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2b1bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2b1bcc:
    // 0x2b1bcc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b1bccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2b1bd0:
    // 0x2b1bd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bd4:
    // 0x2b1bd4: 0xc0888fa  jal         func_2223E8
label_2b1bd8:
    if (ctx->pc == 0x2B1BD8u) {
        ctx->pc = 0x2B1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BD4u;
        // 0x2b1bd8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BDCu;
        goto label_2b1bdc;
    }
    ctx->pc = 0x2B1BD4u;
    SET_GPR_U32(ctx, 31, 0x2B1BDCu);
    ctx->pc = 0x2B1BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BD4u;
    // 0x2b1bd8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x2B1BD4u, 0x2B1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BDCu;
label_2b1bdc:
    // 0x2b1bdc: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
label_2b1be0:
    if (ctx->pc == 0x2B1BE0u) {
        ctx->pc = 0x2B1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BDCu;
        // 0x2b1be0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BE4u;
        goto label_2b1be4;
    }
    ctx->pc = 0x2B1BDCu;
    {
        const bool branch_taken_0x2b1bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1bdc) {
            ctx->pc = 0x2B1BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1BDCu;
            // 0x2b1be0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D48u;
            goto label_2b1d48;
        }
    }
    ctx->pc = 0x2B1BE4u;
label_2b1be4:
    // 0x2b1be4: 0xc0a36c8  jal         func_28DB20
label_2b1be8:
    if (ctx->pc == 0x2B1BE8u) {
        ctx->pc = 0x2B1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BE4u;
        // 0x2b1be8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BECu;
        goto label_2b1bec;
    }
    ctx->pc = 0x2B1BE4u;
    SET_GPR_U32(ctx, 31, 0x2B1BECu);
    ctx->pc = 0x2B1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BE4u;
    // 0x2b1be8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B1BE4u, 0x2B1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BECu;
label_2b1bec:
    // 0x2b1bec: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
label_2b1bf0:
    if (ctx->pc == 0x2B1BF0u) {
        ctx->pc = 0x2B1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BECu;
        // 0x2b1bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1BF4u;
        goto label_2b1bf4;
    }
    ctx->pc = 0x2B1BECu;
    {
        const bool branch_taken_0x2b1bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BECu;
        // 0x2b1bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bec) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1BF4u;
label_2b1bf4:
    // 0x2b1bf4: 0x92220058  lbu         $v0, 0x58($s1)
    ctx->pc = 0x2b1bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2b1bf8:
    // 0x2b1bf8: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_2b1bfc:
    if (ctx->pc == 0x2B1BFCu) {
        ctx->pc = 0x2B1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BF8u;
        // 0x2b1bfc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C00u;
        goto label_2b1c00;
    }
    ctx->pc = 0x2B1BF8u;
    {
        const bool branch_taken_0x2b1bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1bf8) {
            ctx->pc = 0x2B1BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1BF8u;
            // 0x2b1bfc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1C98u;
            goto label_2b1c98;
        }
    }
    ctx->pc = 0x2B1C00u;
label_2b1c00:
    // 0x2b1c00: 0x92220055  lbu         $v0, 0x55($s1)
    ctx->pc = 0x2b1c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2b1c04:
    // 0x2b1c04: 0x14520021  bne         $v0, $s2, . + 4 + (0x21 << 2)
label_2b1c08:
    if (ctx->pc == 0x2B1C08u) {
        ctx->pc = 0x2B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C04u;
        // 0x2b1c08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C0Cu;
        goto label_2b1c0c;
    }
    ctx->pc = 0x2B1C04u;
    {
        const bool branch_taken_0x2b1c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C04u;
        // 0x2b1c08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c04) {
            ctx->pc = 0x2B1C8Cu;
            goto label_2b1c8c;
        }
    }
    ctx->pc = 0x2B1C0Cu;
label_2b1c0c:
    // 0x2b1c0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b1c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c10:
    // 0x2b1c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c14:
    // 0x2b1c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c18:
    // 0x2b1c18: 0xc0888a2  jal         func_222288
label_2b1c1c:
    if (ctx->pc == 0x2B1C1Cu) {
        ctx->pc = 0x2B1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C18u;
        // 0x2b1c1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C20u;
        goto label_2b1c20;
    }
    ctx->pc = 0x2B1C18u;
    SET_GPR_U32(ctx, 31, 0x2B1C20u);
    ctx->pc = 0x2B1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C18u;
    // 0x2b1c1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2B1C18u, 0x2B1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C20u;
label_2b1c20:
    // 0x2b1c20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b1c24:
    if (ctx->pc == 0x2B1C24u) {
        ctx->pc = 0x2B1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C20u;
        // 0x2b1c24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C28u;
        goto label_2b1c28;
    }
    ctx->pc = 0x2B1C20u;
    {
        const bool branch_taken_0x2b1c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1c20) {
            ctx->pc = 0x2B1C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1C20u;
            // 0x2b1c24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1C34u;
            goto label_2b1c34;
        }
    }
    ctx->pc = 0x2B1C28u;
label_2b1c28:
    // 0x2b1c28: 0x16d20018  bne         $s6, $s2, . + 4 + (0x18 << 2)
label_2b1c2c:
    if (ctx->pc == 0x2B1C2Cu) {
        ctx->pc = 0x2B1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C28u;
        // 0x2b1c2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C30u;
        goto label_2b1c30;
    }
    ctx->pc = 0x2B1C28u;
    {
        const bool branch_taken_0x2b1c28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C28u;
        // 0x2b1c2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c28) {
            ctx->pc = 0x2B1C8Cu;
            goto label_2b1c8c;
        }
    }
    ctx->pc = 0x2B1C30u;
label_2b1c30:
    // 0x2b1c30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1c34:
    // 0x2b1c34: 0xc0a3032  jal         func_28C0C8
label_2b1c38:
    if (ctx->pc == 0x2B1C38u) {
        ctx->pc = 0x2B1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C34u;
        // 0x2b1c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C3Cu;
        goto label_2b1c3c;
    }
    ctx->pc = 0x2B1C34u;
    SET_GPR_U32(ctx, 31, 0x2B1C3Cu);
    ctx->pc = 0x2B1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C34u;
    // 0x2b1c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x2B1C34u, 0x2B1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C3Cu;
label_2b1c3c:
    // 0x2b1c3c: 0xc0a47b4  jal         func_291ED0
label_2b1c40:
    if (ctx->pc == 0x2B1C40u) {
        ctx->pc = 0x2B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C3Cu;
        // 0x2b1c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C44u;
        goto label_2b1c44;
    }
    ctx->pc = 0x2B1C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C44u);
    ctx->pc = 0x2B1C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C3Cu;
    // 0x2b1c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B1C3Cu, 0x2B1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C44u;
label_2b1c44:
    // 0x2b1c44: 0x14520011  bne         $v0, $s2, . + 4 + (0x11 << 2)
label_2b1c48:
    if (ctx->pc == 0x2B1C48u) {
        ctx->pc = 0x2B1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C44u;
        // 0x2b1c48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C4Cu;
        goto label_2b1c4c;
    }
    ctx->pc = 0x2B1C44u;
    {
        const bool branch_taken_0x2b1c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C44u;
        // 0x2b1c48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c44) {
            ctx->pc = 0x2B1C8Cu;
            goto label_2b1c8c;
        }
    }
    ctx->pc = 0x2B1C4Cu;
label_2b1c4c:
    // 0x2b1c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c50:
    // 0x2b1c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c54:
    // 0x2b1c54: 0xc0ac3b6  jal         func_2B0ED8
label_2b1c58:
    if (ctx->pc == 0x2B1C58u) {
        ctx->pc = 0x2B1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C54u;
        // 0x2b1c58: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C5Cu;
        goto label_2b1c5c;
    }
    ctx->pc = 0x2B1C54u;
    SET_GPR_U32(ctx, 31, 0x2B1C5Cu);
    ctx->pc = 0x2B1C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C54u;
    // 0x2b1c58: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B1C54u, 0x2B1C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C5Cu;
label_2b1c5c:
    // 0x2b1c5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2b1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2b1c60:
    // 0x2b1c60: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2b1c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2b1c64:
    // 0x2b1c64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1c68:
    // 0x2b1c68: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2b1c68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2b1c6c:
    // 0x2b1c6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c70:
    // 0x2b1c70: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b1c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2b1c74:
    // 0x2b1c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c78:
    // 0x2b1c78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b1c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1c7c:
    // 0x2b1c7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b1c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1c80:
    // 0x2b1c80: 0xc088178  jal         func_2205E0
label_2b1c84:
    if (ctx->pc == 0x2B1C84u) {
        ctx->pc = 0x2B1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C80u;
        // 0x2b1c84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C88u;
        goto label_2b1c88;
    }
    ctx->pc = 0x2B1C80u;
    SET_GPR_U32(ctx, 31, 0x2B1C88u);
    ctx->pc = 0x2B1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C80u;
    // 0x2b1c84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B1C80u, 0x2B1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C88u;
label_2b1c88:
    // 0x2b1c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1c8c:
    // 0x2b1c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b1c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c90:
    // 0x2b1c90: 0x10000123  b           . + 4 + (0x123 << 2)
label_2b1c94:
    if (ctx->pc == 0x2B1C94u) {
        ctx->pc = 0x2B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C90u;
        // 0x2b1c94: 0xa2230058  sb          $v1, 0x58($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C98u;
        goto label_2b1c98;
    }
    ctx->pc = 0x2B1C90u;
    {
        const bool branch_taken_0x2b1c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C90u;
        // 0x2b1c94: 0xa2230058  sb          $v1, 0x58($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c90) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1C98u;
label_2b1c98:
    // 0x2b1c98: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2b1c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b1c9c:
    // 0x2b1c9c: 0x16120120  bne         $s0, $s2, . + 4 + (0x120 << 2)
label_2b1ca0:
    if (ctx->pc == 0x2B1CA0u) {
        ctx->pc = 0x2B1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C9Cu;
        // 0x2b1ca0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CA4u;
        goto label_2b1ca4;
    }
    ctx->pc = 0x2B1C9Cu;
    {
        const bool branch_taken_0x2b1c9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C9Cu;
        // 0x2b1ca0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c9c) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1CA4u;
label_2b1ca4:
    // 0x2b1ca4: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2b1ca8:
    // 0x2b1ca8: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2b1cac:
    // 0x2b1cac: 0xc043d5e  jal         func_10F578
label_2b1cb0:
    if (ctx->pc == 0x2B1CB0u) {
        ctx->pc = 0x2B1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CACu;
        // 0x2b1cb0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CB4u;
        goto label_2b1cb4;
    }
    ctx->pc = 0x2B1CACu;
    SET_GPR_U32(ctx, 31, 0x2B1CB4u);
    ctx->pc = 0x2B1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1CACu;
    // 0x2b1cb0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2B1CACu, 0x2B1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CB4u;
label_2b1cb4:
    // 0x2b1cb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1cb8:
    // 0x2b1cb8: 0x10500119  beq         $v0, $s0, . + 4 + (0x119 << 2)
label_2b1cbc:
    if (ctx->pc == 0x2B1CBCu) {
        ctx->pc = 0x2B1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CB8u;
        // 0x2b1cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CC0u;
        goto label_2b1cc0;
    }
    ctx->pc = 0x2B1CB8u;
    {
        const bool branch_taken_0x2b1cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CB8u;
        // 0x2b1cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cb8) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1CC0u;
label_2b1cc0:
    // 0x2b1cc0: 0x92320055  lbu         $s2, 0x55($s1)
    ctx->pc = 0x2b1cc0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2b1cc4:
    // 0x2b1cc4: 0x16500116  bne         $s2, $s0, . + 4 + (0x116 << 2)
label_2b1cc8:
    if (ctx->pc == 0x2B1CC8u) {
        ctx->pc = 0x2B1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CC4u;
        // 0x2b1cc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CCCu;
        goto label_2b1ccc;
    }
    ctx->pc = 0x2B1CC4u;
    {
        const bool branch_taken_0x2b1cc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CC4u;
        // 0x2b1cc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cc4) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1CCCu;
label_2b1ccc:
    // 0x2b1ccc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b1cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1cd0:
    // 0x2b1cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1cd4:
    // 0x2b1cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1cd8:
    // 0x2b1cd8: 0xc0888a2  jal         func_222288
label_2b1cdc:
    if (ctx->pc == 0x2B1CDCu) {
        ctx->pc = 0x2B1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CD8u;
        // 0x2b1cdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CE0u;
        goto label_2b1ce0;
    }
    ctx->pc = 0x2B1CD8u;
    SET_GPR_U32(ctx, 31, 0x2B1CE0u);
    ctx->pc = 0x2B1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1CD8u;
    // 0x2b1cdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2B1CD8u, 0x2B1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CE0u;
label_2b1ce0:
    // 0x2b1ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b1ce4:
    if (ctx->pc == 0x2B1CE4u) {
        ctx->pc = 0x2B1CE8u;
        goto label_2b1ce8;
    }
    ctx->pc = 0x2B1CE0u;
    {
        const bool branch_taken_0x2b1ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ce0) {
            ctx->pc = 0x2B1CF0u;
            goto label_2b1cf0;
        }
    }
    ctx->pc = 0x2B1CE8u;
label_2b1ce8:
    // 0x2b1ce8: 0x16d2010d  bne         $s6, $s2, . + 4 + (0x10D << 2)
label_2b1cec:
    if (ctx->pc == 0x2B1CECu) {
        ctx->pc = 0x2B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE8u;
        // 0x2b1cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CF0u;
        goto label_2b1cf0;
    }
    ctx->pc = 0x2B1CE8u;
    {
        const bool branch_taken_0x2b1ce8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE8u;
        // 0x2b1cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ce8) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1CF0u;
label_2b1cf0:
    // 0x2b1cf0: 0xc0a47b4  jal         func_291ED0
label_2b1cf4:
    if (ctx->pc == 0x2B1CF4u) {
        ctx->pc = 0x2B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CF0u;
        // 0x2b1cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CF8u;
        goto label_2b1cf8;
    }
    ctx->pc = 0x2B1CF0u;
    SET_GPR_U32(ctx, 31, 0x2B1CF8u);
    ctx->pc = 0x2B1CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1CF0u;
    // 0x2b1cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B1CF0u, 0x2B1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CF8u;
label_2b1cf8:
    // 0x2b1cf8: 0x14520109  bne         $v0, $s2, . + 4 + (0x109 << 2)
label_2b1cfc:
    if (ctx->pc == 0x2B1CFCu) {
        ctx->pc = 0x2B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CF8u;
        // 0x2b1cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D00u;
        goto label_2b1d00;
    }
    ctx->pc = 0x2B1CF8u;
    {
        const bool branch_taken_0x2b1cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CF8u;
        // 0x2b1cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cf8) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1D00u;
label_2b1d00:
    // 0x2b1d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d04:
    // 0x2b1d04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1d08:
    // 0x2b1d08: 0xc0ac3b6  jal         func_2B0ED8
label_2b1d0c:
    if (ctx->pc == 0x2B1D0Cu) {
        ctx->pc = 0x2B1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D08u;
        // 0x2b1d0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D10u;
        goto label_2b1d10;
    }
    ctx->pc = 0x2B1D08u;
    SET_GPR_U32(ctx, 31, 0x2B1D10u);
    ctx->pc = 0x2B1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D08u;
    // 0x2b1d0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B1D08u, 0x2B1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D10u;
label_2b1d10:
    // 0x2b1d10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2b1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2b1d14:
    // 0x2b1d14: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2b1d18:
    // 0x2b1d18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1d1c:
    // 0x2b1d1c: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2b1d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2b1d20:
    // 0x2b1d20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d24:
    // 0x2b1d24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2b1d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2b1d28:
    // 0x2b1d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d2c:
    // 0x2b1d2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b1d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1d30:
    // 0x2b1d30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b1d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1d34:
    // 0x2b1d34: 0xc088178  jal         func_2205E0
label_2b1d38:
    if (ctx->pc == 0x2B1D38u) {
        ctx->pc = 0x2B1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D34u;
        // 0x2b1d38: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D3Cu;
        goto label_2b1d3c;
    }
    ctx->pc = 0x2B1D34u;
    SET_GPR_U32(ctx, 31, 0x2B1D3Cu);
    ctx->pc = 0x2B1D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D34u;
    // 0x2b1d38: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B1D34u, 0x2B1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D3Cu;
label_2b1d3c:
    // 0x2b1d3c: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_2b1d40:
    if (ctx->pc == 0x2B1D40u) {
        ctx->pc = 0x2B1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D3Cu;
        // 0x2b1d40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D44u;
        goto label_2b1d44;
    }
    ctx->pc = 0x2B1D3Cu;
    {
        const bool branch_taken_0x2b1d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D3Cu;
        // 0x2b1d40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d3c) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1D44u;
label_2b1d44:
    // 0x2b1d44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1d48:
    // 0x2b1d48: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b1d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b1d4c:
    // 0x2b1d4c: 0x58400022  blezl       $v0, . + 4 + (0x22 << 2)
label_2b1d50:
    if (ctx->pc == 0x2B1D50u) {
        ctx->pc = 0x2B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D4Cu;
        // 0x2b1d50: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D54u;
        goto label_2b1d54;
    }
    ctx->pc = 0x2B1D4Cu;
    {
        const bool branch_taken_0x2b1d4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b1d4c) {
            ctx->pc = 0x2B1D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D4Cu;
            // 0x2b1d50: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1DD8u;
            goto label_2b1dd8;
        }
    }
    ctx->pc = 0x2B1D54u;
label_2b1d54:
    // 0x2b1d54: 0x16e000f2  bnez        $s7, . + 4 + (0xF2 << 2)
label_2b1d58:
    if (ctx->pc == 0x2B1D58u) {
        ctx->pc = 0x2B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D54u;
        // 0x2b1d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D5Cu;
        goto label_2b1d5c;
    }
    ctx->pc = 0x2B1D54u;
    {
        const bool branch_taken_0x2b1d54 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D54u;
        // 0x2b1d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d54) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1D5Cu;
label_2b1d5c:
    // 0x2b1d5c: 0xc137832  jal         func_4DE0C8
label_2b1d60:
    if (ctx->pc == 0x2B1D60u) {
        ctx->pc = 0x2B1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D5Cu;
        // 0x2b1d60: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D64u;
        goto label_2b1d64;
    }
    ctx->pc = 0x2B1D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D64u);
    ctx->pc = 0x2B1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D5Cu;
    // 0x2b1d60: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2B1D5Cu, 0x2B1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D64u;
label_2b1d64:
    // 0x2b1d64: 0x144000ee  bnez        $v0, . + 4 + (0xEE << 2)
label_2b1d68:
    if (ctx->pc == 0x2B1D68u) {
        ctx->pc = 0x2B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D64u;
        // 0x2b1d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D6Cu;
        goto label_2b1d6c;
    }
    ctx->pc = 0x2B1D64u;
    {
        const bool branch_taken_0x2b1d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D64u;
        // 0x2b1d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d64) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1D6Cu;
label_2b1d6c:
    // 0x2b1d6c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b1d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1d70:
    // 0x2b1d70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b1d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d74:
    // 0x2b1d74: 0x26100164  addiu       $s0, $s0, 0x164
    ctx->pc = 0x2b1d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_2b1d78:
    // 0x2b1d78: 0xc13b748  jal         func_4EDD20
label_2b1d7c:
    if (ctx->pc == 0x2B1D7Cu) {
        ctx->pc = 0x2B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D78u;
        // 0x2b1d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D80u;
        goto label_2b1d80;
    }
    ctx->pc = 0x2B1D78u;
    SET_GPR_U32(ctx, 31, 0x2B1D80u);
    ctx->pc = 0x2B1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D78u;
    // 0x2b1d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2B1D78u, 0x2B1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D80u;
label_2b1d80:
    // 0x2b1d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d84:
    // 0x2b1d84: 0xc137826  jal         func_4DE098
label_2b1d88:
    if (ctx->pc == 0x2B1D88u) {
        ctx->pc = 0x2B1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D84u;
        // 0x2b1d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D8Cu;
        goto label_2b1d8c;
    }
    ctx->pc = 0x2B1D84u;
    SET_GPR_U32(ctx, 31, 0x2B1D8Cu);
    ctx->pc = 0x2B1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D84u;
    // 0x2b1d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2B1D84u, 0x2B1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D8Cu;
label_2b1d8c:
    // 0x2b1d8c: 0xc0e409a  jal         func_390268
label_2b1d90:
    if (ctx->pc == 0x2B1D90u) {
        ctx->pc = 0x2B1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D8Cu;
        // 0x2b1d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D94u;
        goto label_2b1d94;
    }
    ctx->pc = 0x2B1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D94u);
    ctx->pc = 0x2B1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D8Cu;
    // 0x2b1d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B1D8Cu, 0x2B1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D94u;
label_2b1d94:
    // 0x2b1d94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b1d98:
    if (ctx->pc == 0x2B1D98u) {
        ctx->pc = 0x2B1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D94u;
        // 0x2b1d98: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D9Cu;
        goto label_2b1d9c;
    }
    ctx->pc = 0x2B1D94u;
    {
        const bool branch_taken_0x2b1d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D94u;
        // 0x2b1d98: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d94) {
            ctx->pc = 0x2B1DC4u;
            goto label_2b1dc4;
        }
    }
    ctx->pc = 0x2B1D9Cu;
label_2b1d9c:
    // 0x2b1d9c: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2b1d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2b1da0:
    // 0x2b1da0: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2b1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b1da4:
    // 0x2b1da4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b1da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b1da8:
    // 0x2b1da8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b1dac:
    // 0x2b1dac: 0xc0cdb38  jal         func_336CE0
label_2b1db0:
    if (ctx->pc == 0x2B1DB0u) {
        ctx->pc = 0x2B1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DACu;
        // 0x2b1db0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DB4u;
        goto label_2b1db4;
    }
    ctx->pc = 0x2B1DACu;
    SET_GPR_U32(ctx, 31, 0x2B1DB4u);
    ctx->pc = 0x2B1DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DACu;
    // 0x2b1db0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B1DACu, 0x2B1DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DB4u;
label_2b1db4:
    // 0x2b1db4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b1db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1db8:
    // 0x2b1db8: 0x0  nop
    ctx->pc = 0x2b1db8u;
    // NOP
label_2b1dbc:
    // 0x2b1dbc: 0x450100d8  bc1t        . + 4 + (0xD8 << 2)
label_2b1dc0:
    if (ctx->pc == 0x2B1DC0u) {
        ctx->pc = 0x2B1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DBCu;
        // 0x2b1dc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DC4u;
        goto label_2b1dc4;
    }
    ctx->pc = 0x2B1DBCu;
    {
        const bool branch_taken_0x2b1dbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DBCu;
        // 0x2b1dc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dbc) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1DC4u;
label_2b1dc4:
    // 0x2b1dc4: 0xc0a36c8  jal         func_28DB20
label_2b1dc8:
    if (ctx->pc == 0x2B1DC8u) {
        ctx->pc = 0x2B1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DC4u;
        // 0x2b1dc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DCCu;
        goto label_2b1dcc;
    }
    ctx->pc = 0x2B1DC4u;
    SET_GPR_U32(ctx, 31, 0x2B1DCCu);
    ctx->pc = 0x2B1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DC4u;
    // 0x2b1dc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B1DC4u, 0x2B1DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DCCu;
label_2b1dcc:
    // 0x2b1dcc: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
label_2b1dd0:
    if (ctx->pc == 0x2B1DD0u) {
        ctx->pc = 0x2B1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DCCu;
        // 0x2b1dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DD4u;
        goto label_2b1dd4;
    }
    ctx->pc = 0x2B1DCCu;
    {
        const bool branch_taken_0x2b1dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DCCu;
        // 0x2b1dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dcc) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1DD4u;
label_2b1dd4:
    // 0x2b1dd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1dd8:
    // 0x2b1dd8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b1dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1ddc:
    // 0x2b1ddc: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2b1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2b1de0:
    // 0x2b1de0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x2b1de0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1de4:
    // 0x2b1de4: 0x52b00001  beql        $s5, $s0, . + 4 + (0x1 << 2)
label_2b1de8:
    if (ctx->pc == 0x2B1DE8u) {
        ctx->pc = 0x2B1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DE4u;
        // 0x2b1de8: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DECu;
        goto label_2b1dec;
    }
    ctx->pc = 0x2B1DE4u;
    {
        const bool branch_taken_0x2b1de4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b1de4) {
            ctx->pc = 0x2B1DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1DE4u;
            // 0x2b1de8: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1DECu;
            goto label_2b1dec;
        }
    }
    ctx->pc = 0x2B1DECu;
label_2b1dec:
    // 0x2b1dec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1df0:
    // 0x2b1df0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b1df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1df4:
    // 0x2b1df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1df8:
    // 0x2b1df8: 0xc0888a2  jal         func_222288
label_2b1dfc:
    if (ctx->pc == 0x2B1DFCu) {
        ctx->pc = 0x2B1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DF8u;
        // 0x2b1dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E00u;
        goto label_2b1e00;
    }
    ctx->pc = 0x2B1DF8u;
    SET_GPR_U32(ctx, 31, 0x2B1E00u);
    ctx->pc = 0x2B1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DF8u;
    // 0x2b1dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2B1DF8u, 0x2B1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E00u;
label_2b1e00:
    // 0x2b1e00: 0x14500098  bne         $v0, $s0, . + 4 + (0x98 << 2)
label_2b1e04:
    if (ctx->pc == 0x2B1E04u) {
        ctx->pc = 0x2B1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E00u;
        // 0x2b1e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E08u;
        goto label_2b1e08;
    }
    ctx->pc = 0x2B1E00u;
    {
        const bool branch_taken_0x2b1e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E00u;
        // 0x2b1e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e00) {
            ctx->pc = 0x2B2064u;
            goto label_2b2064;
        }
    }
    ctx->pc = 0x2B1E08u;
label_2b1e08:
    // 0x2b1e08: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2b1e0c:
    // 0x2b1e0c: 0x87c40002  lh          $a0, 0x2($fp)
    ctx->pc = 0x2b1e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b1e10:
    // 0x2b1e10: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2b1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b1e14:
    // 0x2b1e14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b1e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1e18:
    // 0x2b1e18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b1e1c:
    // 0x2b1e1c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b1e20:
    // 0x2b1e20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b1e24:
    // 0x2b1e24: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x2b1e24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2b1e28:
    // 0x2b1e28: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b1e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b1e2c:
    // 0x2b1e2c: 0xc0cdb38  jal         func_336CE0
label_2b1e30:
    if (ctx->pc == 0x2B1E30u) {
        ctx->pc = 0x2B1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E2Cu;
        // 0x2b1e30: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E34u;
        goto label_2b1e34;
    }
    ctx->pc = 0x2B1E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E34u);
    ctx->pc = 0x2B1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E2Cu;
    // 0x2b1e30: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B1E2Cu, 0x2B1E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E34u;
label_2b1e34:
    // 0x2b1e34: 0x16d0000d  bne         $s6, $s0, . + 4 + (0xD << 2)
label_2b1e38:
    if (ctx->pc == 0x2B1E38u) {
        ctx->pc = 0x2B1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E34u;
        // 0x2b1e38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E3Cu;
        goto label_2b1e3c;
    }
    ctx->pc = 0x2B1E34u;
    {
        const bool branch_taken_0x2b1e34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E34u;
        // 0x2b1e38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e34) {
            ctx->pc = 0x2B1E6Cu;
            goto label_2b1e6c;
        }
    }
    ctx->pc = 0x2B1E3Cu;
label_2b1e3c:
    // 0x2b1e3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1e40:
    // 0x2b1e40: 0x906202d5  lbu         $v0, 0x2D5($v1)
    ctx->pc = 0x2b1e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 725)));
label_2b1e44:
    // 0x2b1e44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1e48:
    // 0x2b1e48: 0x14560008  bne         $v0, $s6, . + 4 + (0x8 << 2)
label_2b1e4c:
    if (ctx->pc == 0x2B1E4Cu) {
        ctx->pc = 0x2B1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E48u;
        // 0x2b1e4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E50u;
        goto label_2b1e50;
    }
    ctx->pc = 0x2B1E48u;
    {
        const bool branch_taken_0x2b1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2B1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E48u;
        // 0x2b1e4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e48) {
            ctx->pc = 0x2B1E6Cu;
            goto label_2b1e6c;
        }
    }
    ctx->pc = 0x2B1E50u;
label_2b1e50:
    // 0x2b1e50: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2b1e54:
    // 0x2b1e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1e58:
    // 0x2b1e58: 0x0  nop
    ctx->pc = 0x2b1e58u;
    // NOP
label_2b1e5c:
    // 0x2b1e5c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2b1e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1e60:
    // 0x2b1e60: 0x0  nop
    ctx->pc = 0x2b1e60u;
    // NOP
label_2b1e64:
    // 0x2b1e64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2b1e68:
    if (ctx->pc == 0x2B1E68u) {
        ctx->pc = 0x2B1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E64u;
        // 0x2b1e68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E6Cu;
        goto label_2b1e6c;
    }
    ctx->pc = 0x2B1E64u;
    {
        const bool branch_taken_0x2b1e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1e64) {
            ctx->pc = 0x2B1E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E64u;
            // 0x2b1e68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E6Cu;
            goto label_2b1e6c;
        }
    }
    ctx->pc = 0x2B1E6Cu;
label_2b1e6c:
    // 0x2b1e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1e70:
    // 0x2b1e70: 0x1602007c  bne         $s0, $v0, . + 4 + (0x7C << 2)
label_2b1e74:
    if (ctx->pc == 0x2B1E74u) {
        ctx->pc = 0x2B1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E70u;
        // 0x2b1e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E78u;
        goto label_2b1e78;
    }
    ctx->pc = 0x2B1E70u;
    {
        const bool branch_taken_0x2b1e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E70u;
        // 0x2b1e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e70) {
            ctx->pc = 0x2B2064u;
            goto label_2b2064;
        }
    }
    ctx->pc = 0x2B1E78u;
label_2b1e78:
    // 0x2b1e78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1e7c:
    // 0x2b1e7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b1e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1e80:
    // 0x2b1e80: 0xc0a33f8  jal         func_28CFE0
label_2b1e84:
    if (ctx->pc == 0x2B1E84u) {
        ctx->pc = 0x2B1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E80u;
        // 0x2b1e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E88u;
        goto label_2b1e88;
    }
    ctx->pc = 0x2B1E80u;
    SET_GPR_U32(ctx, 31, 0x2B1E88u);
    ctx->pc = 0x2B1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E80u;
    // 0x2b1e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B1E80u, 0x2B1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E88u;
label_2b1e88:
    // 0x2b1e88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1e8c:
    // 0x2b1e8c: 0xc0a354e  jal         func_28D538
label_2b1e90:
    if (ctx->pc == 0x2B1E90u) {
        ctx->pc = 0x2B1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E8Cu;
        // 0x2b1e90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E94u;
        goto label_2b1e94;
    }
    ctx->pc = 0x2B1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E94u);
    ctx->pc = 0x2B1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E8Cu;
    // 0x2b1e90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x2B1E8Cu, 0x2B1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E94u;
label_2b1e94:
    // 0x2b1e94: 0x16e0000e  bnez        $s7, . + 4 + (0xE << 2)
label_2b1e98:
    if (ctx->pc == 0x2B1E98u) {
        ctx->pc = 0x2B1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E94u;
        // 0x2b1e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E9Cu;
        goto label_2b1e9c;
    }
    ctx->pc = 0x2B1E94u;
    {
        const bool branch_taken_0x2b1e94 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E94u;
        // 0x2b1e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e94) {
            ctx->pc = 0x2B1ED0u;
            goto label_2b1ed0;
        }
    }
    ctx->pc = 0x2B1E9Cu;
label_2b1e9c:
    // 0x2b1e9c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b1e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2b1ea0:
    // 0x2b1ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1ea4:
    // 0x2b1ea4: 0x0  nop
    ctx->pc = 0x2b1ea4u;
    // NOP
label_2b1ea8:
    // 0x2b1ea8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2b1ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1eac:
    // 0x2b1eac: 0x0  nop
    ctx->pc = 0x2b1eacu;
    // NOP
label_2b1eb0:
    // 0x2b1eb0: 0x4501009b  bc1t        . + 4 + (0x9B << 2)
label_2b1eb4:
    if (ctx->pc == 0x2B1EB4u) {
        ctx->pc = 0x2B1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EB0u;
        // 0x2b1eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1EB8u;
        goto label_2b1eb8;
    }
    ctx->pc = 0x2B1EB0u;
    {
        const bool branch_taken_0x2b1eb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EB0u;
        // 0x2b1eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1eb0) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1EB8u;
label_2b1eb8:
    // 0x2b1eb8: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x2b1eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_2b1ebc:
    // 0x2b1ebc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2b1ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2b1ec0:
    // 0x2b1ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b1ec4:
    if (ctx->pc == 0x2B1EC4u) {
        ctx->pc = 0x2B1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EC0u;
        // 0x2b1ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1EC8u;
        goto label_2b1ec8;
    }
    ctx->pc = 0x2B1EC0u;
    {
        const bool branch_taken_0x2b1ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EC0u;
        // 0x2b1ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ec0) {
            ctx->pc = 0x2B1ED0u;
            goto label_2b1ed0;
        }
    }
    ctx->pc = 0x2B1EC8u;
label_2b1ec8:
    // 0x2b1ec8: 0x10000095  b           . + 4 + (0x95 << 2)
label_2b1ecc:
    if (ctx->pc == 0x2B1ECCu) {
        ctx->pc = 0x2B1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EC8u;
        // 0x2b1ecc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1ED0u;
        goto label_2b1ed0;
    }
    ctx->pc = 0x2B1EC8u;
    {
        const bool branch_taken_0x2b1ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EC8u;
        // 0x2b1ecc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ec8) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B1ED0u;
label_2b1ed0:
    // 0x2b1ed0: 0x16a2004e  bne         $s5, $v0, . + 4 + (0x4E << 2)
label_2b1ed4:
    if (ctx->pc == 0x2B1ED4u) {
        ctx->pc = 0x2B1ED8u;
        goto label_2b1ed8;
    }
    ctx->pc = 0x2B1ED0u;
    {
        const bool branch_taken_0x2b1ed0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1ed0) {
            ctx->pc = 0x2B200Cu;
            goto label_2b200c;
        }
    }
    ctx->pc = 0x2B1ED8u;
label_2b1ed8:
    // 0x2b1ed8: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x2b1ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_2b1edc:
    // 0x2b1edc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1ee0:
    // 0x2b1ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1ee4:
    // 0x2b1ee4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2b1ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2b1ee8:
    // 0x2b1ee8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b1ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b1eec:
    // 0x2b1eec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b1ef0:
    // 0x2b1ef0: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x2b1ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
label_2b1ef4:
    // 0x2b1ef4: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x2b1ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1ef8:
    // 0x2b1ef8: 0x46020302  mul.s       $f12, $f0, $f2
    ctx->pc = 0x2b1ef8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2b1efc:
    // 0x2b1efc: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x2b1efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2b1f00:
    // 0x2b1f00: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2b1f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1f04:
    // 0x2b1f04: 0x0  nop
    ctx->pc = 0x2b1f04u;
    // NOP
label_2b1f08:
    // 0x2b1f08: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_2b1f0c:
    if (ctx->pc == 0x2B1F0Cu) {
        ctx->pc = 0x2B1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F08u;
        // 0x2b1f0c: 0xc475013c  lwc1        $f21, 0x13C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F10u;
        goto label_2b1f10;
    }
    ctx->pc = 0x2B1F08u;
    {
        const bool branch_taken_0x2b1f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F08u;
        // 0x2b1f0c: 0xc475013c  lwc1        $f21, 0x13C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f08) {
            ctx->pc = 0x2B1FC8u;
            goto label_2b1fc8;
        }
    }
    ctx->pc = 0x2B1F10u;
label_2b1f10:
    // 0x2b1f10: 0x87c40002  lh          $a0, 0x2($fp)
    ctx->pc = 0x2b1f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b1f14:
    // 0x2b1f14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2b1f18:
    // 0x2b1f18: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x2b1f18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2b1f1c:
    // 0x2b1f1c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2b1f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b1f20:
    // 0x2b1f20: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b1f24:
    // 0x2b1f24: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2b1f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2b1f28:
    // 0x2b1f28: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b1f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2b1f2c:
    // 0x2b1f2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b1f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b1f30:
    // 0x2b1f30: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x2b1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_2b1f34:
    // 0x2b1f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b1f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f38:
    // 0x2b1f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f3c:
    // 0x2b1f3c: 0xc0a7cf2  jal         func_29F3C8
label_2b1f40:
    if (ctx->pc == 0x2B1F40u) {
        ctx->pc = 0x2B1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F3Cu;
        // 0x2b1f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F44u;
        goto label_2b1f44;
    }
    ctx->pc = 0x2B1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2B1F44u);
    ctx->pc = 0x2B1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F3Cu;
    // 0x2b1f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2B1F3Cu, 0x2B1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F44u;
label_2b1f44:
    // 0x2b1f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f48:
    // 0x2b1f48: 0x1615001f  bne         $s0, $s5, . + 4 + (0x1F << 2)
label_2b1f4c:
    if (ctx->pc == 0x2B1F4Cu) {
        ctx->pc = 0x2B1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F48u;
        // 0x2b1f4c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F50u;
        goto label_2b1f50;
    }
    ctx->pc = 0x2B1F48u;
    {
        const bool branch_taken_0x2b1f48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F48u;
        // 0x2b1f4c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f48) {
            ctx->pc = 0x2B1FC8u;
            goto label_2b1fc8;
        }
    }
    ctx->pc = 0x2B1F50u;
label_2b1f50:
    // 0x2b1f50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b1f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f54:
    // 0x2b1f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f58:
    // 0x2b1f58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f5c:
    // 0x2b1f5c: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x2b1f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2b1f60:
    // 0x2b1f60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b1f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1f64:
    // 0x2b1f64: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x2b1f64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2b1f68:
    // 0x2b1f68: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b1f6c:
    // 0x2b1f6c: 0xc09381e  jal         func_24E078
label_2b1f70:
    if (ctx->pc == 0x2B1F70u) {
        ctx->pc = 0x2B1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F6Cu;
        // 0x2b1f70: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F74u;
        goto label_2b1f74;
    }
    ctx->pc = 0x2B1F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B1F74u);
    ctx->pc = 0x2B1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F6Cu;
    // 0x2b1f70: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2B1F6Cu, 0x2B1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F74u;
label_2b1f74:
    // 0x2b1f74: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_2b1f78:
    if (ctx->pc == 0x2B1F78u) {
        ctx->pc = 0x2B1F7Cu;
        goto label_2b1f7c;
    }
    ctx->pc = 0x2B1F74u;
    {
        const bool branch_taken_0x2b1f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b1f74) {
            ctx->pc = 0x2B1FC8u;
            goto label_2b1fc8;
        }
    }
    ctx->pc = 0x2B1F7Cu;
label_2b1f7c:
    // 0x2b1f7c: 0xc08bfbc  jal         func_22FEF0
label_2b1f80:
    if (ctx->pc == 0x2B1F80u) {
        ctx->pc = 0x2B1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F7Cu;
        // 0x2b1f80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F84u;
        goto label_2b1f84;
    }
    ctx->pc = 0x2B1F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1F84u);
    ctx->pc = 0x2B1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F7Cu;
    // 0x2b1f80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B1F7Cu, 0x2B1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F84u;
label_2b1f84:
    // 0x2b1f84: 0xc0a367c  jal         func_28D9F0
label_2b1f88:
    if (ctx->pc == 0x2B1F88u) {
        ctx->pc = 0x2B1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F84u;
        // 0x2b1f88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F8Cu;
        goto label_2b1f8c;
    }
    ctx->pc = 0x2B1F84u;
    SET_GPR_U32(ctx, 31, 0x2B1F8Cu);
    ctx->pc = 0x2B1F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F84u;
    // 0x2b1f88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B1F84u, 0x2B1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F8Cu;
label_2b1f8c:
    // 0x2b1f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f90:
    // 0x2b1f90: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_2b1f94:
    if (ctx->pc == 0x2B1F94u) {
        ctx->pc = 0x2B1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F90u;
        // 0x2b1f94: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F98u;
        goto label_2b1f98;
    }
    ctx->pc = 0x2B1F90u;
    {
        const bool branch_taken_0x2b1f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F90u;
        // 0x2b1f94: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f90) {
            ctx->pc = 0x2B2054u;
            goto label_2b2054;
        }
    }
    ctx->pc = 0x2B1F98u;
label_2b1f98:
    // 0x2b1f98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b1f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1f9c:
    // 0x2b1f9c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b1f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b1fa0:
    // 0x2b1fa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b1fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fa4:
    // 0x2b1fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b1fa8:
    // 0x2b1fa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1fac:
    // 0x2b1fac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b1facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1fb0:
    // 0x2b1fb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b1fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fb4:
    // 0x2b1fb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b1fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fb8:
    // 0x2b1fb8: 0xc0bee7a  jal         func_2FB9E8
label_2b1fbc:
    if (ctx->pc == 0x2B1FBCu) {
        ctx->pc = 0x2B1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FB8u;
        // 0x2b1fbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FC0u;
        goto label_2b1fc0;
    }
    ctx->pc = 0x2B1FB8u;
    SET_GPR_U32(ctx, 31, 0x2B1FC0u);
    ctx->pc = 0x2B1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FB8u;
    // 0x2b1fbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B1FB8u, 0x2B1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FC0u;
label_2b1fc0:
    // 0x2b1fc0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2b1fc4:
    if (ctx->pc == 0x2B1FC4u) {
        ctx->pc = 0x2B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC0u;
        // 0x2b1fc4: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FC8u;
        goto label_2b1fc8;
    }
    ctx->pc = 0x2B1FC0u;
    {
        const bool branch_taken_0x2b1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC0u;
        // 0x2b1fc4: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fc0) {
            ctx->pc = 0x2B2058u;
            goto label_2b2058;
        }
    }
    ctx->pc = 0x2B1FC8u;
label_2b1fc8:
    // 0x2b1fc8: 0xc08bfa0  jal         func_22FE80
label_2b1fcc:
    if (ctx->pc == 0x2B1FCCu) {
        ctx->pc = 0x2B1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC8u;
        // 0x2b1fcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FD0u;
        goto label_2b1fd0;
    }
    ctx->pc = 0x2B1FC8u;
    SET_GPR_U32(ctx, 31, 0x2B1FD0u);
    ctx->pc = 0x2B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FC8u;
    // 0x2b1fcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B1FC8u, 0x2B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FD0u;
label_2b1fd0:
    // 0x2b1fd0: 0xc0a367c  jal         func_28D9F0
label_2b1fd4:
    if (ctx->pc == 0x2B1FD4u) {
        ctx->pc = 0x2B1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FD0u;
        // 0x2b1fd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FD8u;
        goto label_2b1fd8;
    }
    ctx->pc = 0x2B1FD0u;
    SET_GPR_U32(ctx, 31, 0x2B1FD8u);
    ctx->pc = 0x2B1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FD0u;
    // 0x2b1fd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B1FD0u, 0x2B1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FD8u;
label_2b1fd8:
    // 0x2b1fd8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2b1fdc:
    if (ctx->pc == 0x2B1FDCu) {
        ctx->pc = 0x2B1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FD8u;
        // 0x2b1fdc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FE0u;
        goto label_2b1fe0;
    }
    ctx->pc = 0x2B1FD8u;
    {
        const bool branch_taken_0x2b1fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FD8u;
        // 0x2b1fdc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fd8) {
            ctx->pc = 0x2B2054u;
            goto label_2b2054;
        }
    }
    ctx->pc = 0x2B1FE0u;
label_2b1fe0:
    // 0x2b1fe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b1fe4:
    // 0x2b1fe4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b1fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b1fe8:
    // 0x2b1fe8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b1fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1fec:
    // 0x2b1fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ff0:
    // 0x2b1ff0: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2b1ff0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2b1ff4:
    // 0x2b1ff4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b1ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ff8:
    // 0x2b1ff8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b1ffc:
    // 0x2b1ffc: 0xc0bf3d4  jal         func_2FCF50
label_2b2000:
    if (ctx->pc == 0x2B2000u) {
        ctx->pc = 0x2B2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FFCu;
        // 0x2b2000: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2004u;
        goto label_2b2004;
    }
    ctx->pc = 0x2B1FFCu;
    SET_GPR_U32(ctx, 31, 0x2B2004u);
    ctx->pc = 0x2B2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FFCu;
    // 0x2b2000: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B1FFCu, 0x2B2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2004u;
label_2b2004:
    // 0x2b2004: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b2008:
    if (ctx->pc == 0x2B2008u) {
        ctx->pc = 0x2B2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2004u;
        // 0x2b2008: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B200Cu;
        goto label_2b200c;
    }
    ctx->pc = 0x2B2004u;
    {
        const bool branch_taken_0x2b2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2004u;
        // 0x2b2008: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2004) {
            ctx->pc = 0x2B2058u;
            goto label_2b2058;
        }
    }
    ctx->pc = 0x2B200Cu;
label_2b200c:
    // 0x2b200c: 0xc0a4e54  jal         func_293950
label_2b2010:
    if (ctx->pc == 0x2B2010u) {
        ctx->pc = 0x2B2014u;
        goto label_2b2014;
    }
    ctx->pc = 0x2B200Cu;
    SET_GPR_U32(ctx, 31, 0x2B2014u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B200Cu, 0x2B2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2014u;
label_2b2014:
    // 0x2b2014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2018:
    // 0x2b2018: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2b201c:
    if (ctx->pc == 0x2B201Cu) {
        ctx->pc = 0x2B201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2018u;
        // 0x2b201c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2020u;
        goto label_2b2020;
    }
    ctx->pc = 0x2B2018u;
    {
        const bool branch_taken_0x2b2018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2018) {
            ctx->pc = 0x2B201Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2018u;
            // 0x2b201c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B204Cu;
            goto label_2b204c;
        }
    }
    ctx->pc = 0x2B2020u;
label_2b2020:
    // 0x2b2020: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b2024:
    // 0x2b2024: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b2024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b2028:
    // 0x2b2028: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b202c:
    // 0x2b202c: 0x40f809  jalr        $v0
label_2b2030:
    if (ctx->pc == 0x2B2030u) {
        ctx->pc = 0x2B2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B202Cu;
        // 0x2b2030: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2034u;
        goto label_2b2034;
    }
    ctx->pc = 0x2B202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2034u);
        ctx->pc = 0x2B2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B202Cu;
        // 0x2b2030: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B202Cu, 0x2B2034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2034u;
label_2b2034:
    // 0x2b2034: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b2038:
    // 0x2b2038: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b2038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b203c:
    // 0x2b203c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2040:
    // 0x2b2040: 0xc0abd6c  jal         func_2AF5B0
label_2b2044:
    if (ctx->pc == 0x2B2044u) {
        ctx->pc = 0x2B2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2040u;
        // 0x2b2044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2048u;
        goto label_2b2048;
    }
    ctx->pc = 0x2B2040u;
    SET_GPR_U32(ctx, 31, 0x2B2048u);
    ctx->pc = 0x2B2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2040u;
    // 0x2b2044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2B2040u, 0x2B2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2048u;
label_2b2048:
    // 0x2b2048: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b204c:
    // 0x2b204c: 0xc0a35d6  jal         func_28D758
label_2b2050:
    if (ctx->pc == 0x2B2050u) {
        ctx->pc = 0x2B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B204Cu;
        // 0x2b2050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2054u;
        goto label_2b2054;
    }
    ctx->pc = 0x2B204Cu;
    SET_GPR_U32(ctx, 31, 0x2B2054u);
    ctx->pc = 0x2B2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B204Cu;
    // 0x2b2050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B204Cu, 0x2B2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2054u;
label_2b2054:
    // 0x2b2054: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2b2054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_2b2058:
    // 0x2b2058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b205c:
    // 0x2b205c: 0x10000030  b           . + 4 + (0x30 << 2)
label_2b2060:
    if (ctx->pc == 0x2B2060u) {
        ctx->pc = 0x2B2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B205Cu;
        // 0x2b2060: 0xa2200055  sb          $zero, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2064u;
        goto label_2b2064;
    }
    ctx->pc = 0x2B205Cu;
    {
        const bool branch_taken_0x2b205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B205Cu;
        // 0x2b2060: 0xa2200055  sb          $zero, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b205c) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B2064u;
label_2b2064:
    // 0x2b2064: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2b2064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2b2068:
    // 0x2b2068: 0xa2220055  sb          $v0, 0x55($s1)
    ctx->pc = 0x2b2068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 2));
label_2b206c:
    // 0x2b206c: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x2b206cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_2b2070:
    // 0x2b2070: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2b2074:
    if (ctx->pc == 0x2B2074u) {
        ctx->pc = 0x2B2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2070u;
        // 0x2b2074: 0xa220005c  sb          $zero, 0x5C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2078u;
        goto label_2b2078;
    }
    ctx->pc = 0x2B2070u;
    {
        const bool branch_taken_0x2b2070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2070u;
        // 0x2b2074: 0xa220005c  sb          $zero, 0x5C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2070) {
            ctx->pc = 0x2B2090u;
            goto label_2b2090;
        }
    }
    ctx->pc = 0x2B2078u;
label_2b2078:
    // 0x2b2078: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2b2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2b207c:
    // 0x2b207c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2b2080:
    if (ctx->pc == 0x2B2080u) {
        ctx->pc = 0x2B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B207Cu;
        // 0x2b2080: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2084u;
        goto label_2b2084;
    }
    ctx->pc = 0x2B207Cu;
    {
        const bool branch_taken_0x2b207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b207c) {
            ctx->pc = 0x2B2080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B207Cu;
            // 0x2b2080: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2094u;
            goto label_2b2094;
        }
    }
    ctx->pc = 0x2B2084u;
label_2b2084:
    // 0x2b2084: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b2088:
    // 0x2b2088: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2b2088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b208c:
    // 0x2b208c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2b208cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_2b2090:
    // 0x2b2090: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b2090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b2094:
    // 0x2b2094: 0xc0a3032  jal         func_28C0C8
label_2b2098:
    if (ctx->pc == 0x2B2098u) {
        ctx->pc = 0x2B2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2094u;
        // 0x2b2098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B209Cu;
        goto label_2b209c;
    }
    ctx->pc = 0x2B2094u;
    SET_GPR_U32(ctx, 31, 0x2B209Cu);
    ctx->pc = 0x2B2098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2094u;
    // 0x2b2098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x2B2094u, 0x2B209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B209Cu;
label_2b209c:
    // 0x2b209c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2b209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2b20a0:
    // 0x2b20a0: 0x906202d4  lbu         $v0, 0x2D4($v1)
    ctx->pc = 0x2b20a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 724)));
label_2b20a4:
    // 0x2b20a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b20a8:
    if (ctx->pc == 0x2B20A8u) {
        ctx->pc = 0x2B20ACu;
        goto label_2b20ac;
    }
    ctx->pc = 0x2B20A4u;
    {
        const bool branch_taken_0x2b20a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20a4) {
            ctx->pc = 0x2B20C8u;
            goto label_2b20c8;
        }
    }
    ctx->pc = 0x2B20ACu;
label_2b20ac:
    // 0x2b20ac: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2b20acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2b20b0:
    // 0x2b20b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b20b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b20b4:
    // 0x2b20b4: 0x0  nop
    ctx->pc = 0x2b20b4u;
    // NOP
label_2b20b8:
    // 0x2b20b8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b20b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b20bc:
    // 0x2b20bc: 0x0  nop
    ctx->pc = 0x2b20bcu;
    // NOP
label_2b20c0:
    // 0x2b20c0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_2b20c4:
    if (ctx->pc == 0x2B20C4u) {
        ctx->pc = 0x2B20C8u;
        goto label_2b20c8;
    }
    ctx->pc = 0x2B20C0u;
    {
        const bool branch_taken_0x2b20c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b20c0) {
            ctx->pc = 0x2B2104u;
            goto label_2b2104;
        }
    }
    ctx->pc = 0x2B20C8u;
label_2b20c8:
    // 0x2b20c8: 0xc0ac48c  jal         func_2B1230
label_2b20cc:
    if (ctx->pc == 0x2B20CCu) {
        ctx->pc = 0x2B20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20C8u;
        // 0x2b20cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20D0u;
        goto label_2b20d0;
    }
    ctx->pc = 0x2B20C8u;
    SET_GPR_U32(ctx, 31, 0x2B20D0u);
    ctx->pc = 0x2B20CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20C8u;
    // 0x2b20cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1230u, 0x2B20C8u, 0x2B20D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20D0u;
label_2b20d0:
    // 0x2b20d0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b20d4:
    // 0x2b20d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2b20d8:
    if (ctx->pc == 0x2B20D8u) {
        ctx->pc = 0x2B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20D4u;
        // 0x2b20d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20DCu;
        goto label_2b20dc;
    }
    ctx->pc = 0x2B20D4u;
    {
        const bool branch_taken_0x2b20d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20D4u;
        // 0x2b20d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20d4) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B20DCu;
label_2b20dc:
    // 0x2b20dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b20e0:
    // 0x2b20e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b20e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b20e4:
    // 0x2b20e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b20e8:
    // 0x2b20e8: 0x40f809  jalr        $v0
label_2b20ec:
    if (ctx->pc == 0x2B20ECu) {
        ctx->pc = 0x2B20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20E8u;
        // 0x2b20ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20F0u;
        goto label_2b20f0;
    }
    ctx->pc = 0x2B20E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B20F0u);
        ctx->pc = 0x2B20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20E8u;
        // 0x2b20ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B20E8u, 0x2B20F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B20F0u;
label_2b20f0:
    // 0x2b20f0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b20f4:
    // 0x2b20f4: 0xc10586e  jal         func_4161B8
label_2b20f8:
    if (ctx->pc == 0x2B20F8u) {
        ctx->pc = 0x2B20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20F4u;
        // 0x2b20f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20FCu;
        goto label_2b20fc;
    }
    ctx->pc = 0x2B20F4u;
    SET_GPR_U32(ctx, 31, 0x2B20FCu);
    ctx->pc = 0x2B20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20F4u;
    // 0x2b20f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2B20F4u, 0x2B20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20FCu;
label_2b20fc:
    // 0x2b20fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b2100:
    if (ctx->pc == 0x2B2100u) {
        ctx->pc = 0x2B2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20FCu;
        // 0x2b2100: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2104u;
        goto label_2b2104;
    }
    ctx->pc = 0x2B20FCu;
    {
        const bool branch_taken_0x2b20fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20FCu;
        // 0x2b2100: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20fc) {
            ctx->pc = 0x2B211Cu;
            goto label_2b211c;
        }
    }
    ctx->pc = 0x2B2104u;
label_2b2104:
    // 0x2b2104: 0xc0ac51e  jal         func_2B1478
label_2b2108:
    if (ctx->pc == 0x2B2108u) {
        ctx->pc = 0x2B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2104u;
        // 0x2b2108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B210Cu;
        goto label_2b210c;
    }
    ctx->pc = 0x2B2104u;
    SET_GPR_U32(ctx, 31, 0x2B210Cu);
    ctx->pc = 0x2B2108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2104u;
    // 0x2b2108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1478u, 0x2B2104u, 0x2B210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B210Cu;
label_2b210c:
    // 0x2b210c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b2110:
    if (ctx->pc == 0x2B2110u) {
        ctx->pc = 0x2B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B210Cu;
        // 0x2b2110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2114u;
        goto label_2b2114;
    }
    ctx->pc = 0x2B210Cu;
    {
        const bool branch_taken_0x2b210c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B210Cu;
        // 0x2b2110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b210c) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B2114u;
label_2b2114:
    // 0x2b2114: 0xc0ac48c  jal         func_2B1230
label_2b2118:
    if (ctx->pc == 0x2B2118u) {
        ctx->pc = 0x2B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2114u;
        // 0x2b2118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B211Cu;
        goto label_2b211c;
    }
    ctx->pc = 0x2B2114u;
    SET_GPR_U32(ctx, 31, 0x2B211Cu);
    ctx->pc = 0x2B2118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2114u;
    // 0x2b2118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1230u, 0x2B2114u, 0x2B211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B211Cu;
label_2b211c:
    // 0x2b211c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b211cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2120:
    // 0x2b2120: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2b2120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b2124:
    // 0x2b2124: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2b2124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b2128:
    // 0x2b2128: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2b2128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b212c:
    // 0x2b212c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2b212cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b2130:
    // 0x2b2130: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2b2130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b2134:
    // 0x2b2134: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2b2134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2138:
    // 0x2b2138: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2b2138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b213c:
    // 0x2b213c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b213cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b2140:
    // 0x2b2140: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2b2140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b2144:
    // 0x2b2144: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b2144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b2148:
    // 0x2b2148: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2b2148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b214c:
    // 0x2b214c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2b214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b2150:
    // 0x2b2150: 0x3e00008  jr          $ra
label_2b2154:
    if (ctx->pc == 0x2B2154u) {
        ctx->pc = 0x2B2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2150u;
        // 0x2b2154: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2158u;
        goto label_fallthrough_0x2b2150;
    }
    ctx->pc = 0x2B2150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2150u;
        // 0x2b2154: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b2150:
    ctx->pc = 0x2B2158u;
}
