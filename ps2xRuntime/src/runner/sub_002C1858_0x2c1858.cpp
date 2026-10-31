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

// Function: sub_002C1858
// Address: 0x2c1858 - 0x2c1e10
void sub_002C1858_0x2c1858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1858_0x2c1858");
#endif

    switch (ctx->pc) {
        case 0x2c1858u: goto label_2c1858;
        case 0x2c185cu: goto label_2c185c;
        case 0x2c1860u: goto label_2c1860;
        case 0x2c1864u: goto label_2c1864;
        case 0x2c1868u: goto label_2c1868;
        case 0x2c186cu: goto label_2c186c;
        case 0x2c1870u: goto label_2c1870;
        case 0x2c1874u: goto label_2c1874;
        case 0x2c1878u: goto label_2c1878;
        case 0x2c187cu: goto label_2c187c;
        case 0x2c1880u: goto label_2c1880;
        case 0x2c1884u: goto label_2c1884;
        case 0x2c1888u: goto label_2c1888;
        case 0x2c188cu: goto label_2c188c;
        case 0x2c1890u: goto label_2c1890;
        case 0x2c1894u: goto label_2c1894;
        case 0x2c1898u: goto label_2c1898;
        case 0x2c189cu: goto label_2c189c;
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c18a4u: goto label_2c18a4;
        case 0x2c18a8u: goto label_2c18a8;
        case 0x2c18acu: goto label_2c18ac;
        case 0x2c18b0u: goto label_2c18b0;
        case 0x2c18b4u: goto label_2c18b4;
        case 0x2c18b8u: goto label_2c18b8;
        case 0x2c18bcu: goto label_2c18bc;
        case 0x2c18c0u: goto label_2c18c0;
        case 0x2c18c4u: goto label_2c18c4;
        case 0x2c18c8u: goto label_2c18c8;
        case 0x2c18ccu: goto label_2c18cc;
        case 0x2c18d0u: goto label_2c18d0;
        case 0x2c18d4u: goto label_2c18d4;
        case 0x2c18d8u: goto label_2c18d8;
        case 0x2c18dcu: goto label_2c18dc;
        case 0x2c18e0u: goto label_2c18e0;
        case 0x2c18e4u: goto label_2c18e4;
        case 0x2c18e8u: goto label_2c18e8;
        case 0x2c18ecu: goto label_2c18ec;
        case 0x2c18f0u: goto label_2c18f0;
        case 0x2c18f4u: goto label_2c18f4;
        case 0x2c18f8u: goto label_2c18f8;
        case 0x2c18fcu: goto label_2c18fc;
        case 0x2c1900u: goto label_2c1900;
        case 0x2c1904u: goto label_2c1904;
        case 0x2c1908u: goto label_2c1908;
        case 0x2c190cu: goto label_2c190c;
        case 0x2c1910u: goto label_2c1910;
        case 0x2c1914u: goto label_2c1914;
        case 0x2c1918u: goto label_2c1918;
        case 0x2c191cu: goto label_2c191c;
        case 0x2c1920u: goto label_2c1920;
        case 0x2c1924u: goto label_2c1924;
        case 0x2c1928u: goto label_2c1928;
        case 0x2c192cu: goto label_2c192c;
        case 0x2c1930u: goto label_2c1930;
        case 0x2c1934u: goto label_2c1934;
        case 0x2c1938u: goto label_2c1938;
        case 0x2c193cu: goto label_2c193c;
        case 0x2c1940u: goto label_2c1940;
        case 0x2c1944u: goto label_2c1944;
        case 0x2c1948u: goto label_2c1948;
        case 0x2c194cu: goto label_2c194c;
        case 0x2c1950u: goto label_2c1950;
        case 0x2c1954u: goto label_2c1954;
        case 0x2c1958u: goto label_2c1958;
        case 0x2c195cu: goto label_2c195c;
        case 0x2c1960u: goto label_2c1960;
        case 0x2c1964u: goto label_2c1964;
        case 0x2c1968u: goto label_2c1968;
        case 0x2c196cu: goto label_2c196c;
        case 0x2c1970u: goto label_2c1970;
        case 0x2c1974u: goto label_2c1974;
        case 0x2c1978u: goto label_2c1978;
        case 0x2c197cu: goto label_2c197c;
        case 0x2c1980u: goto label_2c1980;
        case 0x2c1984u: goto label_2c1984;
        case 0x2c1988u: goto label_2c1988;
        case 0x2c198cu: goto label_2c198c;
        case 0x2c1990u: goto label_2c1990;
        case 0x2c1994u: goto label_2c1994;
        case 0x2c1998u: goto label_2c1998;
        case 0x2c199cu: goto label_2c199c;
        case 0x2c19a0u: goto label_2c19a0;
        case 0x2c19a4u: goto label_2c19a4;
        case 0x2c19a8u: goto label_2c19a8;
        case 0x2c19acu: goto label_2c19ac;
        case 0x2c19b0u: goto label_2c19b0;
        case 0x2c19b4u: goto label_2c19b4;
        case 0x2c19b8u: goto label_2c19b8;
        case 0x2c19bcu: goto label_2c19bc;
        case 0x2c19c0u: goto label_2c19c0;
        case 0x2c19c4u: goto label_2c19c4;
        case 0x2c19c8u: goto label_2c19c8;
        case 0x2c19ccu: goto label_2c19cc;
        case 0x2c19d0u: goto label_2c19d0;
        case 0x2c19d4u: goto label_2c19d4;
        case 0x2c19d8u: goto label_2c19d8;
        case 0x2c19dcu: goto label_2c19dc;
        case 0x2c19e0u: goto label_2c19e0;
        case 0x2c19e4u: goto label_2c19e4;
        case 0x2c19e8u: goto label_2c19e8;
        case 0x2c19ecu: goto label_2c19ec;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c19f4u: goto label_2c19f4;
        case 0x2c19f8u: goto label_2c19f8;
        case 0x2c19fcu: goto label_2c19fc;
        case 0x2c1a00u: goto label_2c1a00;
        case 0x2c1a04u: goto label_2c1a04;
        case 0x2c1a08u: goto label_2c1a08;
        case 0x2c1a0cu: goto label_2c1a0c;
        case 0x2c1a10u: goto label_2c1a10;
        case 0x2c1a14u: goto label_2c1a14;
        case 0x2c1a18u: goto label_2c1a18;
        case 0x2c1a1cu: goto label_2c1a1c;
        case 0x2c1a20u: goto label_2c1a20;
        case 0x2c1a24u: goto label_2c1a24;
        case 0x2c1a28u: goto label_2c1a28;
        case 0x2c1a2cu: goto label_2c1a2c;
        case 0x2c1a30u: goto label_2c1a30;
        case 0x2c1a34u: goto label_2c1a34;
        case 0x2c1a38u: goto label_2c1a38;
        case 0x2c1a3cu: goto label_2c1a3c;
        case 0x2c1a40u: goto label_2c1a40;
        case 0x2c1a44u: goto label_2c1a44;
        case 0x2c1a48u: goto label_2c1a48;
        case 0x2c1a4cu: goto label_2c1a4c;
        case 0x2c1a50u: goto label_2c1a50;
        case 0x2c1a54u: goto label_2c1a54;
        case 0x2c1a58u: goto label_2c1a58;
        case 0x2c1a5cu: goto label_2c1a5c;
        case 0x2c1a60u: goto label_2c1a60;
        case 0x2c1a64u: goto label_2c1a64;
        case 0x2c1a68u: goto label_2c1a68;
        case 0x2c1a6cu: goto label_2c1a6c;
        case 0x2c1a70u: goto label_2c1a70;
        case 0x2c1a74u: goto label_2c1a74;
        case 0x2c1a78u: goto label_2c1a78;
        case 0x2c1a7cu: goto label_2c1a7c;
        case 0x2c1a80u: goto label_2c1a80;
        case 0x2c1a84u: goto label_2c1a84;
        case 0x2c1a88u: goto label_2c1a88;
        case 0x2c1a8cu: goto label_2c1a8c;
        case 0x2c1a90u: goto label_2c1a90;
        case 0x2c1a94u: goto label_2c1a94;
        case 0x2c1a98u: goto label_2c1a98;
        case 0x2c1a9cu: goto label_2c1a9c;
        case 0x2c1aa0u: goto label_2c1aa0;
        case 0x2c1aa4u: goto label_2c1aa4;
        case 0x2c1aa8u: goto label_2c1aa8;
        case 0x2c1aacu: goto label_2c1aac;
        case 0x2c1ab0u: goto label_2c1ab0;
        case 0x2c1ab4u: goto label_2c1ab4;
        case 0x2c1ab8u: goto label_2c1ab8;
        case 0x2c1abcu: goto label_2c1abc;
        case 0x2c1ac0u: goto label_2c1ac0;
        case 0x2c1ac4u: goto label_2c1ac4;
        case 0x2c1ac8u: goto label_2c1ac8;
        case 0x2c1accu: goto label_2c1acc;
        case 0x2c1ad0u: goto label_2c1ad0;
        case 0x2c1ad4u: goto label_2c1ad4;
        case 0x2c1ad8u: goto label_2c1ad8;
        case 0x2c1adcu: goto label_2c1adc;
        case 0x2c1ae0u: goto label_2c1ae0;
        case 0x2c1ae4u: goto label_2c1ae4;
        case 0x2c1ae8u: goto label_2c1ae8;
        case 0x2c1aecu: goto label_2c1aec;
        case 0x2c1af0u: goto label_2c1af0;
        case 0x2c1af4u: goto label_2c1af4;
        case 0x2c1af8u: goto label_2c1af8;
        case 0x2c1afcu: goto label_2c1afc;
        case 0x2c1b00u: goto label_2c1b00;
        case 0x2c1b04u: goto label_2c1b04;
        case 0x2c1b08u: goto label_2c1b08;
        case 0x2c1b0cu: goto label_2c1b0c;
        case 0x2c1b10u: goto label_2c1b10;
        case 0x2c1b14u: goto label_2c1b14;
        case 0x2c1b18u: goto label_2c1b18;
        case 0x2c1b1cu: goto label_2c1b1c;
        case 0x2c1b20u: goto label_2c1b20;
        case 0x2c1b24u: goto label_2c1b24;
        case 0x2c1b28u: goto label_2c1b28;
        case 0x2c1b2cu: goto label_2c1b2c;
        case 0x2c1b30u: goto label_2c1b30;
        case 0x2c1b34u: goto label_2c1b34;
        case 0x2c1b38u: goto label_2c1b38;
        case 0x2c1b3cu: goto label_2c1b3c;
        case 0x2c1b40u: goto label_2c1b40;
        case 0x2c1b44u: goto label_2c1b44;
        case 0x2c1b48u: goto label_2c1b48;
        case 0x2c1b4cu: goto label_2c1b4c;
        case 0x2c1b50u: goto label_2c1b50;
        case 0x2c1b54u: goto label_2c1b54;
        case 0x2c1b58u: goto label_2c1b58;
        case 0x2c1b5cu: goto label_2c1b5c;
        case 0x2c1b60u: goto label_2c1b60;
        case 0x2c1b64u: goto label_2c1b64;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1b6cu: goto label_2c1b6c;
        case 0x2c1b70u: goto label_2c1b70;
        case 0x2c1b74u: goto label_2c1b74;
        case 0x2c1b78u: goto label_2c1b78;
        case 0x2c1b7cu: goto label_2c1b7c;
        case 0x2c1b80u: goto label_2c1b80;
        case 0x2c1b84u: goto label_2c1b84;
        case 0x2c1b88u: goto label_2c1b88;
        case 0x2c1b8cu: goto label_2c1b8c;
        case 0x2c1b90u: goto label_2c1b90;
        case 0x2c1b94u: goto label_2c1b94;
        case 0x2c1b98u: goto label_2c1b98;
        case 0x2c1b9cu: goto label_2c1b9c;
        case 0x2c1ba0u: goto label_2c1ba0;
        case 0x2c1ba4u: goto label_2c1ba4;
        case 0x2c1ba8u: goto label_2c1ba8;
        case 0x2c1bacu: goto label_2c1bac;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bb4u: goto label_2c1bb4;
        case 0x2c1bb8u: goto label_2c1bb8;
        case 0x2c1bbcu: goto label_2c1bbc;
        case 0x2c1bc0u: goto label_2c1bc0;
        case 0x2c1bc4u: goto label_2c1bc4;
        case 0x2c1bc8u: goto label_2c1bc8;
        case 0x2c1bccu: goto label_2c1bcc;
        case 0x2c1bd0u: goto label_2c1bd0;
        case 0x2c1bd4u: goto label_2c1bd4;
        case 0x2c1bd8u: goto label_2c1bd8;
        case 0x2c1bdcu: goto label_2c1bdc;
        case 0x2c1be0u: goto label_2c1be0;
        case 0x2c1be4u: goto label_2c1be4;
        case 0x2c1be8u: goto label_2c1be8;
        case 0x2c1becu: goto label_2c1bec;
        case 0x2c1bf0u: goto label_2c1bf0;
        case 0x2c1bf4u: goto label_2c1bf4;
        case 0x2c1bf8u: goto label_2c1bf8;
        case 0x2c1bfcu: goto label_2c1bfc;
        case 0x2c1c00u: goto label_2c1c00;
        case 0x2c1c04u: goto label_2c1c04;
        case 0x2c1c08u: goto label_2c1c08;
        case 0x2c1c0cu: goto label_2c1c0c;
        case 0x2c1c10u: goto label_2c1c10;
        case 0x2c1c14u: goto label_2c1c14;
        case 0x2c1c18u: goto label_2c1c18;
        case 0x2c1c1cu: goto label_2c1c1c;
        case 0x2c1c20u: goto label_2c1c20;
        case 0x2c1c24u: goto label_2c1c24;
        case 0x2c1c28u: goto label_2c1c28;
        case 0x2c1c2cu: goto label_2c1c2c;
        case 0x2c1c30u: goto label_2c1c30;
        case 0x2c1c34u: goto label_2c1c34;
        case 0x2c1c38u: goto label_2c1c38;
        case 0x2c1c3cu: goto label_2c1c3c;
        case 0x2c1c40u: goto label_2c1c40;
        case 0x2c1c44u: goto label_2c1c44;
        case 0x2c1c48u: goto label_2c1c48;
        case 0x2c1c4cu: goto label_2c1c4c;
        case 0x2c1c50u: goto label_2c1c50;
        case 0x2c1c54u: goto label_2c1c54;
        case 0x2c1c58u: goto label_2c1c58;
        case 0x2c1c5cu: goto label_2c1c5c;
        case 0x2c1c60u: goto label_2c1c60;
        case 0x2c1c64u: goto label_2c1c64;
        case 0x2c1c68u: goto label_2c1c68;
        case 0x2c1c6cu: goto label_2c1c6c;
        case 0x2c1c70u: goto label_2c1c70;
        case 0x2c1c74u: goto label_2c1c74;
        case 0x2c1c78u: goto label_2c1c78;
        case 0x2c1c7cu: goto label_2c1c7c;
        case 0x2c1c80u: goto label_2c1c80;
        case 0x2c1c84u: goto label_2c1c84;
        case 0x2c1c88u: goto label_2c1c88;
        case 0x2c1c8cu: goto label_2c1c8c;
        case 0x2c1c90u: goto label_2c1c90;
        case 0x2c1c94u: goto label_2c1c94;
        case 0x2c1c98u: goto label_2c1c98;
        case 0x2c1c9cu: goto label_2c1c9c;
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1ca4u: goto label_2c1ca4;
        case 0x2c1ca8u: goto label_2c1ca8;
        case 0x2c1cacu: goto label_2c1cac;
        case 0x2c1cb0u: goto label_2c1cb0;
        case 0x2c1cb4u: goto label_2c1cb4;
        case 0x2c1cb8u: goto label_2c1cb8;
        case 0x2c1cbcu: goto label_2c1cbc;
        case 0x2c1cc0u: goto label_2c1cc0;
        case 0x2c1cc4u: goto label_2c1cc4;
        case 0x2c1cc8u: goto label_2c1cc8;
        case 0x2c1cccu: goto label_2c1ccc;
        case 0x2c1cd0u: goto label_2c1cd0;
        case 0x2c1cd4u: goto label_2c1cd4;
        case 0x2c1cd8u: goto label_2c1cd8;
        case 0x2c1cdcu: goto label_2c1cdc;
        case 0x2c1ce0u: goto label_2c1ce0;
        case 0x2c1ce4u: goto label_2c1ce4;
        case 0x2c1ce8u: goto label_2c1ce8;
        case 0x2c1cecu: goto label_2c1cec;
        case 0x2c1cf0u: goto label_2c1cf0;
        case 0x2c1cf4u: goto label_2c1cf4;
        case 0x2c1cf8u: goto label_2c1cf8;
        case 0x2c1cfcu: goto label_2c1cfc;
        case 0x2c1d00u: goto label_2c1d00;
        case 0x2c1d04u: goto label_2c1d04;
        case 0x2c1d08u: goto label_2c1d08;
        case 0x2c1d0cu: goto label_2c1d0c;
        case 0x2c1d10u: goto label_2c1d10;
        case 0x2c1d14u: goto label_2c1d14;
        case 0x2c1d18u: goto label_2c1d18;
        case 0x2c1d1cu: goto label_2c1d1c;
        case 0x2c1d20u: goto label_2c1d20;
        case 0x2c1d24u: goto label_2c1d24;
        case 0x2c1d28u: goto label_2c1d28;
        case 0x2c1d2cu: goto label_2c1d2c;
        case 0x2c1d30u: goto label_2c1d30;
        case 0x2c1d34u: goto label_2c1d34;
        case 0x2c1d38u: goto label_2c1d38;
        case 0x2c1d3cu: goto label_2c1d3c;
        case 0x2c1d40u: goto label_2c1d40;
        case 0x2c1d44u: goto label_2c1d44;
        case 0x2c1d48u: goto label_2c1d48;
        case 0x2c1d4cu: goto label_2c1d4c;
        case 0x2c1d50u: goto label_2c1d50;
        case 0x2c1d54u: goto label_2c1d54;
        case 0x2c1d58u: goto label_2c1d58;
        case 0x2c1d5cu: goto label_2c1d5c;
        case 0x2c1d60u: goto label_2c1d60;
        case 0x2c1d64u: goto label_2c1d64;
        case 0x2c1d68u: goto label_2c1d68;
        case 0x2c1d6cu: goto label_2c1d6c;
        case 0x2c1d70u: goto label_2c1d70;
        case 0x2c1d74u: goto label_2c1d74;
        case 0x2c1d78u: goto label_2c1d78;
        case 0x2c1d7cu: goto label_2c1d7c;
        case 0x2c1d80u: goto label_2c1d80;
        case 0x2c1d84u: goto label_2c1d84;
        case 0x2c1d88u: goto label_2c1d88;
        case 0x2c1d8cu: goto label_2c1d8c;
        case 0x2c1d90u: goto label_2c1d90;
        case 0x2c1d94u: goto label_2c1d94;
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1d9cu: goto label_2c1d9c;
        case 0x2c1da0u: goto label_2c1da0;
        case 0x2c1da4u: goto label_2c1da4;
        case 0x2c1da8u: goto label_2c1da8;
        case 0x2c1dacu: goto label_2c1dac;
        case 0x2c1db0u: goto label_2c1db0;
        case 0x2c1db4u: goto label_2c1db4;
        case 0x2c1db8u: goto label_2c1db8;
        case 0x2c1dbcu: goto label_2c1dbc;
        case 0x2c1dc0u: goto label_2c1dc0;
        case 0x2c1dc4u: goto label_2c1dc4;
        case 0x2c1dc8u: goto label_2c1dc8;
        case 0x2c1dccu: goto label_2c1dcc;
        case 0x2c1dd0u: goto label_2c1dd0;
        case 0x2c1dd4u: goto label_2c1dd4;
        case 0x2c1dd8u: goto label_2c1dd8;
        case 0x2c1ddcu: goto label_2c1ddc;
        case 0x2c1de0u: goto label_2c1de0;
        case 0x2c1de4u: goto label_2c1de4;
        case 0x2c1de8u: goto label_2c1de8;
        case 0x2c1decu: goto label_2c1dec;
        case 0x2c1df0u: goto label_2c1df0;
        case 0x2c1df4u: goto label_2c1df4;
        case 0x2c1df8u: goto label_2c1df8;
        case 0x2c1dfcu: goto label_2c1dfc;
        case 0x2c1e00u: goto label_2c1e00;
        case 0x2c1e04u: goto label_2c1e04;
        case 0x2c1e08u: goto label_2c1e08;
        case 0x2c1e0cu: goto label_2c1e0c;
        default: break;
    }

    ctx->pc = 0x2c1858u;

label_2c1858:
    // 0x2c1858: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c1858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2c185c:
    // 0x2c185c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c185cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c1860:
    // 0x2c1860: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2c1860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2c1864:
    // 0x2c1864: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c1864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c1868:
    // 0x2c1868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c186c:
    // 0x2c186c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2c186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2c1870:
    // 0x2c1870: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2c1870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2c1874:
    // 0x2c1874: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2c1874u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c1878:
    // 0x2c1878: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2c1878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2c187c:
    // 0x2c187c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c1880:
    // 0x2c1880: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2c1880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2c1884:
    // 0x2c1884: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2c1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2c1888:
    // 0x2c1888: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2c1888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2c188c:
    // 0x2c188c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c1890:
    // 0x2c1890: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c1890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1894:
    // 0x2c1894: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2c1894u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c1898:
    // 0x2c1898: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2c1898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c189c:
    // 0x2c189c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c18a0:
    // 0x2c18a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c18a4:
    // 0x2c18a4: 0xc089fac  jal         func_227EB0
label_2c18a8:
    if (ctx->pc == 0x2C18A8u) {
        ctx->pc = 0x2C18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18A4u;
        // 0x2c18a8: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18ACu;
        goto label_2c18ac;
    }
    ctx->pc = 0x2C18A4u;
    SET_GPR_U32(ctx, 31, 0x2C18ACu);
    ctx->pc = 0x2C18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18A4u;
    // 0x2c18a8: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2C18A4u, 0x2C18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18ACu;
label_2c18ac:
    // 0x2c18ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c18acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c18b0:
    // 0x2c18b0: 0x1043014b  beq         $v0, $v1, . + 4 + (0x14B << 2)
label_2c18b4:
    if (ctx->pc == 0x2C18B4u) {
        ctx->pc = 0x2C18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B0u;
        // 0x2c18b4: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18B8u;
        goto label_2c18b8;
    }
    ctx->pc = 0x2C18B0u;
    {
        const bool branch_taken_0x2c18b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B0u;
        // 0x2c18b4: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18b0) {
            ctx->pc = 0x2C1DE0u;
            goto label_2c1de0;
        }
    }
    ctx->pc = 0x2C18B8u;
label_2c18b8:
    // 0x2c18b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c18b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c18bc:
    // 0x2c18bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2c18c0:
    if (ctx->pc == 0x2C18C0u) {
        ctx->pc = 0x2C18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18BCu;
        // 0x2c18c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18C4u;
        goto label_2c18c4;
    }
    ctx->pc = 0x2C18BCu;
    {
        const bool branch_taken_0x2c18bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18bc) {
            ctx->pc = 0x2C18C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C18BCu;
            // 0x2c18c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18C4u;
            goto label_2c18c4;
        }
    }
    ctx->pc = 0x2C18C4u;
label_2c18c4:
    // 0x2c18c4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2c18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2c18c8:
    // 0x2c18c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c18c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2c18cc:
    // 0x2c18cc: 0x2010  mfhi        $a0
    ctx->pc = 0x2c18ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2c18d0:
    // 0x2c18d0: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_2c18d4:
    if (ctx->pc == 0x2C18D4u) {
        ctx->pc = 0x2C18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18D0u;
        // 0x2c18d4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18D8u;
        goto label_2c18d8;
    }
    ctx->pc = 0x2C18D0u;
    {
        const bool branch_taken_0x2c18d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18D0u;
        // 0x2c18d4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18d0) {
            ctx->pc = 0x2C1928u;
            goto label_2c1928;
        }
    }
    ctx->pc = 0x2C18D8u;
label_2c18d8:
    // 0x2c18d8: 0xc04808c  jal         func_120230
label_2c18dc:
    if (ctx->pc == 0x2C18DCu) {
        ctx->pc = 0x2C18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18D8u;
        // 0x2c18dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18E0u;
        goto label_2c18e0;
    }
    ctx->pc = 0x2C18D8u;
    SET_GPR_U32(ctx, 31, 0x2C18E0u);
    ctx->pc = 0x2C18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18D8u;
    // 0x2c18dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2C18D8u, 0x2C18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18E0u;
label_2c18e0:
    // 0x2c18e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c18e4:
    // 0x2c18e4: 0xc441cc60  lwc1        $f1, -0x33A0($v0)
    ctx->pc = 0x2c18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c18e8:
    // 0x2c18e8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c18e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2c18ec:
    // 0x2c18ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c18ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c18f0:
    // 0x2c18f0: 0x0  nop
    ctx->pc = 0x2c18f0u;
    // NOP
label_2c18f4:
    // 0x2c18f4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2c18f8:
    if (ctx->pc == 0x2C18F8u) {
        ctx->pc = 0x2C18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F4u;
        // 0x2c18f8: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18FCu;
        goto label_2c18fc;
    }
    ctx->pc = 0x2C18F4u;
    {
        const bool branch_taken_0x2c18f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F4u;
        // 0x2c18f8: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18f4) {
            ctx->pc = 0x2C1928u;
            goto label_2c1928;
        }
    }
    ctx->pc = 0x2C18FCu;
label_2c18fc:
    // 0x2c18fc: 0xc0b05f0  jal         func_2C17C0
label_2c1900:
    if (ctx->pc == 0x2C1900u) {
        ctx->pc = 0x2C1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18FCu;
        // 0x2c1900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1904u;
        goto label_2c1904;
    }
    ctx->pc = 0x2C18FCu;
    SET_GPR_U32(ctx, 31, 0x2C1904u);
    ctx->pc = 0x2C1900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18FCu;
    // 0x2c1900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C17C0u, 0x2C18FCu, 0x2C1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1904u;
label_2c1904:
    // 0x2c1904: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c1904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c1908:
    // 0x2c1908: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c1908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c190c:
    // 0x2c190c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c1910:
    // 0x2c1910: 0x40f809  jalr        $v0
label_2c1914:
    if (ctx->pc == 0x2C1914u) {
        ctx->pc = 0x2C1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1910u;
        // 0x2c1914: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1918u;
        goto label_2c1918;
    }
    ctx->pc = 0x2C1910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C1918u);
        ctx->pc = 0x2C1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1910u;
        // 0x2c1914: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1910u, 0x2C1918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C1918u;
label_2c1918:
    // 0x2c1918: 0xc08cfbc  jal         func_233EF0
label_2c191c:
    if (ctx->pc == 0x2C191Cu) {
        ctx->pc = 0x2C191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1918u;
        // 0x2c191c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1920u;
        goto label_2c1920;
    }
    ctx->pc = 0x2C1918u;
    SET_GPR_U32(ctx, 31, 0x2C1920u);
    ctx->pc = 0x2C191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1918u;
    // 0x2c191c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x2C1918u, 0x2C1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1920u;
label_2c1920:
    // 0x2c1920: 0x10000130  b           . + 4 + (0x130 << 2)
label_2c1924:
    if (ctx->pc == 0x2C1924u) {
        ctx->pc = 0x2C1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1920u;
        // 0x2c1924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1928u;
        goto label_2c1928;
    }
    ctx->pc = 0x2C1920u;
    {
        const bool branch_taken_0x2c1920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1920u;
        // 0x2c1924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1920) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1928u;
label_2c1928:
    // 0x2c1928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c192c:
    // 0x2c192c: 0xc0a68c0  jal         func_29A300
label_2c1930:
    if (ctx->pc == 0x2C1930u) {
        ctx->pc = 0x2C1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C192Cu;
        // 0x2c1930: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1934u;
        goto label_2c1934;
    }
    ctx->pc = 0x2C192Cu;
    SET_GPR_U32(ctx, 31, 0x2C1934u);
    ctx->pc = 0x2C1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C192Cu;
    // 0x2c1930: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A300u, 0x2C192Cu, 0x2C1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1934u;
label_2c1934:
    // 0x2c1934: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c1934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c1938:
    // 0x2c1938: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2c193c:
    if (ctx->pc == 0x2C193Cu) {
        ctx->pc = 0x2C193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1938u;
        // 0x2c193c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1940u;
        goto label_2c1940;
    }
    ctx->pc = 0x2C1938u;
    {
        const bool branch_taken_0x2c1938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1938) {
            ctx->pc = 0x2C193Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1938u;
            // 0x2c193c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C194Cu;
            goto label_2c194c;
        }
    }
    ctx->pc = 0x2C1940u;
label_2c1940:
    // 0x2c1940: 0xc0b058e  jal         func_2C1638
label_2c1944:
    if (ctx->pc == 0x2C1944u) {
        ctx->pc = 0x2C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1940u;
        // 0x2c1944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1948u;
        goto label_2c1948;
    }
    ctx->pc = 0x2C1940u;
    SET_GPR_U32(ctx, 31, 0x2C1948u);
    ctx->pc = 0x2C1944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1940u;
    // 0x2c1944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1638u, 0x2C1940u, 0x2C1948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1948u;
label_2c1948:
    // 0x2c1948: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c1948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c194c:
    // 0x2c194c: 0xc0a2fd0  jal         func_28BF40
label_2c1950:
    if (ctx->pc == 0x2C1950u) {
        ctx->pc = 0x2C1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C194Cu;
        // 0x2c1950: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1954u;
        goto label_2c1954;
    }
    ctx->pc = 0x2C194Cu;
    SET_GPR_U32(ctx, 31, 0x2C1954u);
    ctx->pc = 0x2C1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C194Cu;
    // 0x2c1950: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2C194Cu, 0x2C1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1954u;
label_2c1954:
    // 0x2c1954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c1954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1958:
    // 0x2c1958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c195c:
    // 0x2c195c: 0x56420040  bnel        $s2, $v0, . + 4 + (0x40 << 2)
label_2c1960:
    if (ctx->pc == 0x2C1960u) {
        ctx->pc = 0x2C1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C195Cu;
        // 0x2c1960: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1964u;
        goto label_2c1964;
    }
    ctx->pc = 0x2C195Cu;
    {
        const bool branch_taken_0x2c195c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c195c) {
            ctx->pc = 0x2C1960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C195Cu;
            // 0x2c1960: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C1964u;
label_2c1964:
    // 0x2c1964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c1964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1968:
    // 0x2c1968: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c1968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c196c:
    // 0x2c196c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2c1970:
    // 0x2c1970: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_2c1974:
    if (ctx->pc == 0x2C1974u) {
        ctx->pc = 0x2C1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1970u;
        // 0x2c1974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1978u;
        goto label_2c1978;
    }
    ctx->pc = 0x2C1970u;
    {
        const bool branch_taken_0x2c1970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1970u;
        // 0x2c1974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1970) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C1978u;
label_2c1978:
    // 0x2c1978: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c1978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c197c:
    // 0x2c197c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2c1980:
    // 0x2c1980: 0xc1067b8  jal         func_419EE0
label_2c1984:
    if (ctx->pc == 0x2C1984u) {
        ctx->pc = 0x2C1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1980u;
        // 0x2c1984: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1988u;
        goto label_2c1988;
    }
    ctx->pc = 0x2C1980u;
    SET_GPR_U32(ctx, 31, 0x2C1988u);
    ctx->pc = 0x2C1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1980u;
    // 0x2c1984: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2C1980u, 0x2C1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1988u;
label_2c1988:
    // 0x2c1988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c198c:
    // 0x2c198c: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_2c1990:
    if (ctx->pc == 0x2C1990u) {
        ctx->pc = 0x2C1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C198Cu;
        // 0x2c1990: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1994u;
        goto label_2c1994;
    }
    ctx->pc = 0x2C198Cu;
    {
        const bool branch_taken_0x2c198c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C198Cu;
        // 0x2c1990: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c198c) {
            ctx->pc = 0x2C1A5Cu;
            goto label_2c1a5c;
        }
    }
    ctx->pc = 0x2C1994u;
label_2c1994:
    // 0x2c1994: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c1994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2c1998:
    // 0x2c1998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c199c:
    // 0x2c199c: 0x0  nop
    ctx->pc = 0x2c199cu;
    // NOP
label_2c19a0:
    // 0x2c19a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c19a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c19a4:
    // 0x2c19a4: 0x0  nop
    ctx->pc = 0x2c19a4u;
    // NOP
label_2c19a8:
    // 0x2c19a8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_2c19ac:
    if (ctx->pc == 0x2C19ACu) {
        ctx->pc = 0x2C19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19A8u;
        // 0x2c19ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19B0u;
        goto label_2c19b0;
    }
    ctx->pc = 0x2C19A8u;
    {
        const bool branch_taken_0x2c19a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19A8u;
        // 0x2c19ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19a8) {
            ctx->pc = 0x2C1A5Cu;
            goto label_2c1a5c;
        }
    }
    ctx->pc = 0x2C19B0u;
label_2c19b0:
    // 0x2c19b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c19b4:
    // 0x2c19b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c19b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c19b8:
    // 0x2c19b8: 0xc0889b8  jal         func_2226E0
label_2c19bc:
    if (ctx->pc == 0x2C19BCu) {
        ctx->pc = 0x2C19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19B8u;
        // 0x2c19bc: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19C0u;
        goto label_2c19c0;
    }
    ctx->pc = 0x2C19B8u;
    SET_GPR_U32(ctx, 31, 0x2C19C0u);
    ctx->pc = 0x2C19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C19B8u;
    // 0x2c19bc: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x2C19B8u, 0x2C19C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19C0u;
label_2c19c0:
    // 0x2c19c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c19c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c19c4:
    // 0x2c19c4: 0x16920026  bne         $s4, $s2, . + 4 + (0x26 << 2)
label_2c19c8:
    if (ctx->pc == 0x2C19C8u) {
        ctx->pc = 0x2C19CCu;
        goto label_2c19cc;
    }
    ctx->pc = 0x2C19C4u;
    {
        const bool branch_taken_0x2c19c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        if (branch_taken_0x2c19c4) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C19CCu;
label_2c19cc:
    // 0x2c19cc: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2c19ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2c19d0:
    // 0x2c19d0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2c19d4:
    if (ctx->pc == 0x2C19D4u) {
        ctx->pc = 0x2C19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19D0u;
        // 0x2c19d4: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19D8u;
        goto label_2c19d8;
    }
    ctx->pc = 0x2C19D0u;
    {
        const bool branch_taken_0x2c19d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19D0u;
        // 0x2c19d4: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19d0) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C19D8u;
label_2c19d8:
    // 0x2c19d8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c19d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2c19dc:
    // 0x2c19dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c19dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c19e0:
    // 0x2c19e0: 0x0  nop
    ctx->pc = 0x2c19e0u;
    // NOP
label_2c19e4:
    // 0x2c19e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c19e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c19e8:
    // 0x2c19e8: 0x0  nop
    ctx->pc = 0x2c19e8u;
    // NOP
label_2c19ec:
    // 0x2c19ec: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2c19f0:
    if (ctx->pc == 0x2C19F0u) {
        ctx->pc = 0x2C19F4u;
        goto label_2c19f4;
    }
    ctx->pc = 0x2C19ECu;
    {
        const bool branch_taken_0x2c19ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c19ec) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C19F4u;
label_2c19f4:
    // 0x2c19f4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2c19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2c19f8:
    // 0x2c19f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2c19f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2c19fc:
    // 0x2c19fc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2c1a00:
    if (ctx->pc == 0x2C1A00u) {
        ctx->pc = 0x2C1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19FCu;
        // 0x2c1a00: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A04u;
        goto label_2c1a04;
    }
    ctx->pc = 0x2C19FCu;
    {
        const bool branch_taken_0x2c19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19FCu;
        // 0x2c1a00: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19fc) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C1A04u;
label_2c1a04:
    // 0x2c1a04: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2c1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2c1a08:
    // 0x2c1a08: 0xc043d5e  jal         func_10F578
label_2c1a0c:
    if (ctx->pc == 0x2C1A0Cu) {
        ctx->pc = 0x2C1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A08u;
        // 0x2c1a0c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A10u;
        goto label_2c1a10;
    }
    ctx->pc = 0x2C1A08u;
    SET_GPR_U32(ctx, 31, 0x2C1A10u);
    ctx->pc = 0x2C1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A08u;
    // 0x2c1a0c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C1A08u, 0x2C1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A10u;
label_2c1a10:
    // 0x2c1a10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2c1a14:
    if (ctx->pc == 0x2C1A14u) {
        ctx->pc = 0x2C1A18u;
        goto label_2c1a18;
    }
    ctx->pc = 0x2C1A10u;
    {
        const bool branch_taken_0x2c1a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a10) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C1A18u;
label_2c1a18:
    // 0x2c1a18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c1a1c:
    // 0x2c1a1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c1a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c1a20:
    // 0x2c1a20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c1a24:
    // 0x2c1a24: 0x40f809  jalr        $v0
label_2c1a28:
    if (ctx->pc == 0x2C1A28u) {
        ctx->pc = 0x2C1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A24u;
        // 0x2c1a28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A2Cu;
        goto label_2c1a2c;
    }
    ctx->pc = 0x2C1A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C1A2Cu);
        ctx->pc = 0x2C1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A24u;
        // 0x2c1a28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1A24u, 0x2C1A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C1A2Cu;
label_2c1a2c:
    // 0x2c1a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c1a30:
    // 0x2c1a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1a34:
    // 0x2c1a34: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c1a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a38:
    // 0x2c1a38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a3c:
    // 0x2c1a3c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2c1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2c1a40:
    // 0x2c1a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a44:
    // 0x2c1a44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c1a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1a48:
    // 0x2c1a48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c1a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1a4c:
    // 0x2c1a4c: 0xc088178  jal         func_2205E0
label_2c1a50:
    if (ctx->pc == 0x2C1A50u) {
        ctx->pc = 0x2C1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A4Cu;
        // 0x2c1a50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A54u;
        goto label_2c1a54;
    }
    ctx->pc = 0x2C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1A54u);
    ctx->pc = 0x2C1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A4Cu;
    // 0x2c1a50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C1A4Cu, 0x2C1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A54u;
label_2c1a54:
    // 0x2c1a54: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c1a58:
    if (ctx->pc == 0x2C1A58u) {
        ctx->pc = 0x2C1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A54u;
        // 0x2c1a58: 0xa2340050  sb          $s4, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A5Cu;
        goto label_2c1a5c;
    }
    ctx->pc = 0x2C1A54u;
    {
        const bool branch_taken_0x2c1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A54u;
        // 0x2c1a58: 0xa2340050  sb          $s4, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a54) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C1A5Cu;
label_2c1a5c:
    // 0x2c1a5c: 0xa2200050  sb          $zero, 0x50($s1)
    ctx->pc = 0x2c1a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
label_2c1a60:
    // 0x2c1a60: 0xc08ce0c  jal         func_233830
label_2c1a64:
    if (ctx->pc == 0x2C1A64u) {
        ctx->pc = 0x2C1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A60u;
        // 0x2c1a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A68u;
        goto label_2c1a68;
    }
    ctx->pc = 0x2C1A60u;
    SET_GPR_U32(ctx, 31, 0x2C1A68u);
    ctx->pc = 0x2C1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A60u;
    // 0x2c1a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233830u, 0x2C1A60u, 0x2C1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A68u;
label_2c1a68:
    // 0x2c1a68: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2c1a6c:
    // 0x2c1a6c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2c1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2c1a70:
    // 0x2c1a70: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2c1a74:
    // 0x2c1a74: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2c1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2c1a78:
    // 0x2c1a78: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2c1a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c1a7c:
    // 0x2c1a7c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2c1a80:
    if (ctx->pc == 0x2C1A80u) {
        ctx->pc = 0x2C1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A7Cu;
        // 0x2c1a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A84u;
        goto label_2c1a84;
    }
    ctx->pc = 0x2C1A7Cu;
    {
        const bool branch_taken_0x2c1a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A7Cu;
        // 0x2c1a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a7c) {
            ctx->pc = 0x2C1AE4u;
            goto label_2c1ae4;
        }
    }
    ctx->pc = 0x2C1A84u;
label_2c1a84:
    // 0x2c1a84: 0x244361a8  addiu       $v1, $v0, 0x61A8
    ctx->pc = 0x2c1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25000));
label_2c1a88:
    // 0x2c1a88: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2c1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2c1a8c:
    // 0x2c1a8c: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2c1a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_2c1a90:
    // 0x2c1a90: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2c1a94:
    // 0x2c1a94: 0xc043d5e  jal         func_10F578
label_2c1a98:
    if (ctx->pc == 0x2C1A98u) {
        ctx->pc = 0x2C1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A94u;
        // 0x2c1a98: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A9Cu;
        goto label_2c1a9c;
    }
    ctx->pc = 0x2C1A94u;
    SET_GPR_U32(ctx, 31, 0x2C1A9Cu);
    ctx->pc = 0x2C1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A94u;
    // 0x2c1a98: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C1A94u, 0x2C1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A9Cu;
label_2c1a9c:
    // 0x2c1a9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2c1aa0:
    if (ctx->pc == 0x2C1AA0u) {
        ctx->pc = 0x2C1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A9Cu;
        // 0x2c1aa0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AA4u;
        goto label_2c1aa4;
    }
    ctx->pc = 0x2C1A9Cu;
    {
        const bool branch_taken_0x2c1a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A9Cu;
        // 0x2c1aa0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a9c) {
            ctx->pc = 0x2C1AE8u;
            goto label_2c1ae8;
        }
    }
    ctx->pc = 0x2C1AA4u;
label_2c1aa4:
    // 0x2c1aa4: 0xc0a47b4  jal         func_291ED0
label_2c1aa8:
    if (ctx->pc == 0x2C1AA8u) {
        ctx->pc = 0x2C1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AA4u;
        // 0x2c1aa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AACu;
        goto label_2c1aac;
    }
    ctx->pc = 0x2C1AA4u;
    SET_GPR_U32(ctx, 31, 0x2C1AACu);
    ctx->pc = 0x2C1AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1AA4u;
    // 0x2c1aa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C1AA4u, 0x2C1AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AACu;
label_2c1aac:
    // 0x2c1aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1ab0:
    // 0x2c1ab0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_2c1ab4:
    if (ctx->pc == 0x2C1AB4u) {
        ctx->pc = 0x2C1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AB0u;
        // 0x2c1ab4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AB8u;
        goto label_2c1ab8;
    }
    ctx->pc = 0x2C1AB0u;
    {
        const bool branch_taken_0x2c1ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AB0u;
        // 0x2c1ab4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ab0) {
            ctx->pc = 0x2C1AE8u;
            goto label_2c1ae8;
        }
    }
    ctx->pc = 0x2C1AB8u;
label_2c1ab8:
    // 0x2c1ab8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c1abc:
    // 0x2c1abc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c1ac0:
    // 0x2c1ac0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1ac4:
    // 0x2c1ac4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2c1ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c1ac8:
    // 0x2c1ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c1acc:
    // 0x2c1acc: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2c1accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2c1ad0:
    // 0x2c1ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ad4:
    // 0x2c1ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ad8:
    // 0x2c1ad8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c1ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1adc:
    // 0x2c1adc: 0xc088178  jal         func_2205E0
label_2c1ae0:
    if (ctx->pc == 0x2C1AE0u) {
        ctx->pc = 0x2C1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1ADCu;
        // 0x2c1ae0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AE4u;
        goto label_2c1ae4;
    }
    ctx->pc = 0x2C1ADCu;
    SET_GPR_U32(ctx, 31, 0x2C1AE4u);
    ctx->pc = 0x2C1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ADCu;
    // 0x2c1ae0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C1ADCu, 0x2C1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AE4u;
label_2c1ae4:
    // 0x2c1ae4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c1ae8:
    // 0x2c1ae8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c1ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c1aec:
    // 0x2c1aec: 0xc136afa  jal         func_4DABE8
label_2c1af0:
    if (ctx->pc == 0x2C1AF0u) {
        ctx->pc = 0x2C1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AECu;
        // 0x2c1af0: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AF4u;
        goto label_2c1af4;
    }
    ctx->pc = 0x2C1AECu;
    SET_GPR_U32(ctx, 31, 0x2C1AF4u);
    ctx->pc = 0x2C1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1AECu;
    // 0x2c1af0: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C1AECu, 0x2C1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AF4u;
label_2c1af4:
    // 0x2c1af4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2c1af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1af8:
    // 0x2c1af8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c1af8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c1afc:
    // 0x2c1afc: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2c1afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c1b00:
    // 0x2c1b00: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c1b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c1b04:
    // 0x2c1b04: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c1b04u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c1b08:
    // 0x2c1b08: 0x3c0142a5  lui         $at, 0x42A5
    ctx->pc = 0x2c1b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17061 << 16));
label_2c1b0c:
    // 0x2c1b0c: 0x34219eb9  ori         $at, $at, 0x9EB9
    ctx->pc = 0x2c1b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40633);
label_2c1b10:
    // 0x2c1b10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c1b14:
    // 0x2c1b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c1b18:
    // 0x2c1b18: 0x0  nop
    ctx->pc = 0x2c1b18u;
    // NOP
label_2c1b1c:
    // 0x2c1b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c1b20:
    // 0x2c1b20: 0x0  nop
    ctx->pc = 0x2c1b20u;
    // NOP
label_2c1b24:
    // 0x2c1b24: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2c1b28:
    if (ctx->pc == 0x2C1B28u) {
        ctx->pc = 0x2C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B24u;
        // 0x2c1b28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B2Cu;
        goto label_2c1b2c;
    }
    ctx->pc = 0x2C1B24u;
    {
        const bool branch_taken_0x2c1b24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B24u;
        // 0x2c1b28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b24) {
            ctx->pc = 0x2C1B90u;
            goto label_2c1b90;
        }
    }
    ctx->pc = 0x2C1B2Cu;
label_2c1b2c:
    // 0x2c1b2c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x2c1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2c1b30:
    // 0x2c1b30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1b34:
    // 0x2c1b34: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2c1b38:
    if (ctx->pc == 0x2C1B38u) {
        ctx->pc = 0x2C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B34u;
        // 0x2c1b38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B3Cu;
        goto label_2c1b3c;
    }
    ctx->pc = 0x2C1B34u;
    {
        const bool branch_taken_0x2c1b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b34) {
            ctx->pc = 0x2C1B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1B34u;
            // 0x2c1b38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1B3Cu;
            goto label_2c1b3c;
        }
    }
    ctx->pc = 0x2C1B3Cu;
label_2c1b3c:
    // 0x2c1b3c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2c1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2c1b40:
    // 0x2c1b40: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c1b40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2c1b44:
    // 0x2c1b44: 0x2010  mfhi        $a0
    ctx->pc = 0x2c1b44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2c1b48:
    // 0x2c1b48: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_2c1b4c:
    if (ctx->pc == 0x2C1B4Cu) {
        ctx->pc = 0x2C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B48u;
        // 0x2c1b4c: 0x8e03b734  lw          $v1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B50u;
        goto label_2c1b50;
    }
    ctx->pc = 0x2C1B48u;
    {
        const bool branch_taken_0x2c1b48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B48u;
        // 0x2c1b4c: 0x8e03b734  lw          $v1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b48) {
            ctx->pc = 0x2C1B94u;
            goto label_2c1b94;
        }
    }
    ctx->pc = 0x2C1B50u;
label_2c1b50:
    // 0x2c1b50: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2c1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2c1b54:
    // 0x2c1b54: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2c1b58:
    if (ctx->pc == 0x2C1B58u) {
        ctx->pc = 0x2C1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B54u;
        // 0x2c1b58: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B5Cu;
        goto label_2c1b5c;
    }
    ctx->pc = 0x2C1B54u;
    {
        const bool branch_taken_0x2c1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b54) {
            ctx->pc = 0x2C1B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1B54u;
            // 0x2c1b58: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1B98u;
            goto label_2c1b98;
        }
    }
    ctx->pc = 0x2C1B5Cu;
label_2c1b5c:
    // 0x2c1b5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c1b60:
    // 0x2c1b60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c1b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b64:
    // 0x2c1b64: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x2c1b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c1b68:
    // 0x2c1b68: 0xc0b16be  jal         func_2C5AF8
label_2c1b6c:
    if (ctx->pc == 0x2C1B6Cu) {
        ctx->pc = 0x2C1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B68u;
        // 0x2c1b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B70u;
        goto label_2c1b70;
    }
    ctx->pc = 0x2C1B68u;
    SET_GPR_U32(ctx, 31, 0x2C1B70u);
    ctx->pc = 0x2C1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B68u;
    // 0x2c1b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AF8u, 0x2C1B68u, 0x2C1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B70u;
label_2c1b70:
    // 0x2c1b70: 0x8e6501a8  lw          $a1, 0x1A8($s3)
    ctx->pc = 0x2c1b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2c1b74:
    // 0x2c1b74: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2c1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2c1b78:
    // 0x2c1b78: 0x14a2009a  bne         $a1, $v0, . + 4 + (0x9A << 2)
label_2c1b7c:
    if (ctx->pc == 0x2C1B7Cu) {
        ctx->pc = 0x2C1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B78u;
        // 0x2c1b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B80u;
        goto label_2c1b80;
    }
    ctx->pc = 0x2C1B78u;
    {
        const bool branch_taken_0x2c1b78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B78u;
        // 0x2c1b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b78) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1B80u;
label_2c1b80:
    // 0x2c1b80: 0xc0a2ab0  jal         func_28AAC0
label_2c1b84:
    if (ctx->pc == 0x2C1B84u) {
        ctx->pc = 0x2C1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B80u;
        // 0x2c1b84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B88u;
        goto label_2c1b88;
    }
    ctx->pc = 0x2C1B80u;
    SET_GPR_U32(ctx, 31, 0x2C1B88u);
    ctx->pc = 0x2C1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B80u;
    // 0x2c1b84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C1B80u, 0x2C1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B88u;
label_2c1b88:
    // 0x2c1b88: 0x10000096  b           . + 4 + (0x96 << 2)
label_2c1b8c:
    if (ctx->pc == 0x2C1B8Cu) {
        ctx->pc = 0x2C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B88u;
        // 0x2c1b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B90u;
        goto label_2c1b90;
    }
    ctx->pc = 0x2C1B88u;
    {
        const bool branch_taken_0x2c1b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B88u;
        // 0x2c1b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b88) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1B90u;
label_2c1b90:
    // 0x2c1b90: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x2c1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2c1b94:
    // 0x2c1b94: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2c1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2c1b98:
    // 0x2c1b98: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2c1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c1b9c:
    // 0x2c1b9c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c1b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c1ba0:
    // 0x2c1ba0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2c1ba4:
    if (ctx->pc == 0x2C1BA4u) {
        ctx->pc = 0x2C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BA0u;
        // 0x2c1ba4: 0x24821f40  addiu       $v0, $a0, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BA8u;
        goto label_2c1ba8;
    }
    ctx->pc = 0x2C1BA0u;
    {
        const bool branch_taken_0x2c1ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BA0u;
        // 0x2c1ba4: 0x24821f40  addiu       $v0, $a0, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ba0) {
            ctx->pc = 0x2C1C78u;
            goto label_2c1c78;
        }
    }
    ctx->pc = 0x2C1BA8u;
label_2c1ba8:
    // 0x2c1ba8: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2c1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_2c1bac:
    // 0x2c1bac: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2c1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2c1bb0:
    // 0x2c1bb0: 0x54600032  bnel        $v1, $zero, . + 4 + (0x32 << 2)
label_2c1bb4:
    if (ctx->pc == 0x2C1BB4u) {
        ctx->pc = 0x2C1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BB0u;
        // 0x2c1bb4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BB8u;
        goto label_2c1bb8;
    }
    ctx->pc = 0x2C1BB0u;
    {
        const bool branch_taken_0x2c1bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1bb0) {
            ctx->pc = 0x2C1BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1BB0u;
            // 0x2c1bb4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C7Cu;
            goto label_2c1c7c;
        }
    }
    ctx->pc = 0x2C1BB8u;
label_2c1bb8:
    // 0x2c1bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c1bbc:
    // 0x2c1bbc: 0xc105d9c  jal         func_417670
label_2c1bc0:
    if (ctx->pc == 0x2C1BC0u) {
        ctx->pc = 0x2C1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BBCu;
        // 0x2c1bc0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BC4u;
        goto label_2c1bc4;
    }
    ctx->pc = 0x2C1BBCu;
    SET_GPR_U32(ctx, 31, 0x2C1BC4u);
    ctx->pc = 0x2C1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BBCu;
    // 0x2c1bc0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417670u, 0x2C1BBCu, 0x2C1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BC4u;
label_2c1bc4:
    // 0x2c1bc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c1bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1bc8:
    // 0x2c1bc8: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_2c1bcc:
    if (ctx->pc == 0x2C1BCCu) {
        ctx->pc = 0x2C1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BC8u;
        // 0x2c1bcc: 0xc7a1002c  lwc1        $f1, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BD0u;
        goto label_2c1bd0;
    }
    ctx->pc = 0x2C1BC8u;
    {
        const bool branch_taken_0x2c1bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BC8u;
        // 0x2c1bcc: 0xc7a1002c  lwc1        $f1, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bc8) {
            ctx->pc = 0x2C1C78u;
            goto label_2c1c78;
        }
    }
    ctx->pc = 0x2C1BD0u;
label_2c1bd0:
    // 0x2c1bd0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c1bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2c1bd4:
    // 0x2c1bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c1bd8:
    // 0x2c1bd8: 0x0  nop
    ctx->pc = 0x2c1bd8u;
    // NOP
label_2c1bdc:
    // 0x2c1bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c1be0:
    // 0x2c1be0: 0x0  nop
    ctx->pc = 0x2c1be0u;
    // NOP
label_2c1be4:
    // 0x2c1be4: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_2c1be8:
    if (ctx->pc == 0x2C1BE8u) {
        ctx->pc = 0x2C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BE4u;
        // 0x2c1be8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BECu;
        goto label_2c1bec;
    }
    ctx->pc = 0x2C1BE4u;
    {
        const bool branch_taken_0x2c1be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1be4) {
            ctx->pc = 0x2C1BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1BE4u;
            // 0x2c1be8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C7Cu;
            goto label_2c1c7c;
        }
    }
    ctx->pc = 0x2C1BECu;
label_2c1bec:
    // 0x2c1bec: 0xc10587a  jal         func_4161E8
label_2c1bf0:
    if (ctx->pc == 0x2C1BF0u) {
        ctx->pc = 0x2C1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BECu;
        // 0x2c1bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BF4u;
        goto label_2c1bf4;
    }
    ctx->pc = 0x2C1BECu;
    SET_GPR_U32(ctx, 31, 0x2C1BF4u);
    ctx->pc = 0x2C1BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BECu;
    // 0x2c1bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1BECu, 0x2C1BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BF4u;
label_2c1bf4:
    // 0x2c1bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c1bf8:
    // 0x2c1bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1bfc:
    // 0x2c1bfc: 0xc091e94  jal         func_247A50
label_2c1c00:
    if (ctx->pc == 0x2C1C00u) {
        ctx->pc = 0x2C1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BFCu;
        // 0x2c1c00: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C04u;
        goto label_2c1c04;
    }
    ctx->pc = 0x2C1BFCu;
    SET_GPR_U32(ctx, 31, 0x2C1C04u);
    ctx->pc = 0x2C1C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BFCu;
    // 0x2c1c00: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A50u, 0x2C1BFCu, 0x2C1C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C04u;
label_2c1c04:
    // 0x2c1c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1c08:
    // 0x2c1c08: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
label_2c1c0c:
    if (ctx->pc == 0x2C1C0Cu) {
        ctx->pc = 0x2C1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C08u;
        // 0x2c1c0c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C10u;
        goto label_2c1c10;
    }
    ctx->pc = 0x2C1C08u;
    {
        const bool branch_taken_0x2c1c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c1c08) {
            ctx->pc = 0x2C1C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C08u;
            // 0x2c1c0c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C7Cu;
            goto label_2c1c7c;
        }
    }
    ctx->pc = 0x2C1C10u;
label_2c1c10:
    // 0x2c1c10: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2c1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c1c14:
    // 0x2c1c14: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2c1c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2c1c18:
    // 0x2c1c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c1c1c:
    // 0x2c1c1c: 0x0  nop
    ctx->pc = 0x2c1c1cu;
    // NOP
label_2c1c20:
    // 0x2c1c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c1c24:
    // 0x2c1c24: 0x0  nop
    ctx->pc = 0x2c1c24u;
    // NOP
label_2c1c28:
    // 0x2c1c28: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2c1c2c:
    if (ctx->pc == 0x2C1C2Cu) {
        ctx->pc = 0x2C1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C28u;
        // 0x2c1c2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C30u;
        goto label_2c1c30;
    }
    ctx->pc = 0x2C1C28u;
    {
        const bool branch_taken_0x2c1c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1c28) {
            ctx->pc = 0x2C1C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C28u;
            // 0x2c1c2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C7Cu;
            goto label_2c1c7c;
        }
    }
    ctx->pc = 0x2C1C30u;
label_2c1c30:
    // 0x2c1c30: 0xc0a4e54  jal         func_293950
label_2c1c34:
    if (ctx->pc == 0x2C1C34u) {
        ctx->pc = 0x2C1C38u;
        goto label_2c1c38;
    }
    ctx->pc = 0x2C1C30u;
    SET_GPR_U32(ctx, 31, 0x2C1C38u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C1C30u, 0x2C1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C38u;
label_2c1c38:
    // 0x2c1c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c3c:
    // 0x2c1c3c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2c1c40:
    if (ctx->pc == 0x2C1C40u) {
        ctx->pc = 0x2C1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C3Cu;
        // 0x2c1c40: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C44u;
        goto label_2c1c44;
    }
    ctx->pc = 0x2C1C3Cu;
    {
        const bool branch_taken_0x2c1c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C3Cu;
        // 0x2c1c40: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c3c) {
            ctx->pc = 0x2C1C64u;
            goto label_2c1c64;
        }
    }
    ctx->pc = 0x2C1C44u;
label_2c1c44:
    // 0x2c1c44: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1c48:
    // 0x2c1c48: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x2c1c48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2c1c4c:
    // 0x2c1c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c50:
    // 0x2c1c50: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2c1c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2c1c54:
    // 0x2c1c54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c1c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2c1c58:
    // 0x2c1c58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1c5c:
    // 0x2c1c5c: 0xc0b6dda  jal         func_2DB768
label_2c1c60:
    if (ctx->pc == 0x2C1C60u) {
        ctx->pc = 0x2C1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C5Cu;
        // 0x2c1c60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C64u;
        goto label_2c1c64;
    }
    ctx->pc = 0x2C1C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C1C64u);
    ctx->pc = 0x2C1C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C5Cu;
    // 0x2c1c60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x2C1C5Cu, 0x2C1C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C64u;
label_2c1c64:
    // 0x2c1c64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1c68:
    // 0x2c1c68: 0xc0a35d6  jal         func_28D758
label_2c1c6c:
    if (ctx->pc == 0x2C1C6Cu) {
        ctx->pc = 0x2C1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C68u;
        // 0x2c1c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C70u;
        goto label_2c1c70;
    }
    ctx->pc = 0x2C1C68u;
    SET_GPR_U32(ctx, 31, 0x2C1C70u);
    ctx->pc = 0x2C1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C68u;
    // 0x2c1c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C1C68u, 0x2C1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C70u;
label_2c1c70:
    // 0x2c1c70: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2c1c74:
    if (ctx->pc == 0x2C1C74u) {
        ctx->pc = 0x2C1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C70u;
        // 0x2c1c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C78u;
        goto label_2c1c78;
    }
    ctx->pc = 0x2C1C70u;
    {
        const bool branch_taken_0x2c1c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C70u;
        // 0x2c1c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c70) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1C78u;
label_2c1c78:
    // 0x2c1c78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1c7c:
    // 0x2c1c7c: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c1c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2c1c80:
    // 0x2c1c80: 0x1c400057  bgtz        $v0, . + 4 + (0x57 << 2)
label_2c1c84:
    if (ctx->pc == 0x2C1C84u) {
        ctx->pc = 0x2C1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C80u;
        // 0x2c1c84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C88u;
        goto label_2c1c88;
    }
    ctx->pc = 0x2C1C80u;
    {
        const bool branch_taken_0x2c1c80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C80u;
        // 0x2c1c84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c80) {
            ctx->pc = 0x2C1DE0u;
            goto label_2c1de0;
        }
    }
    ctx->pc = 0x2C1C88u;
label_2c1c88:
    // 0x2c1c88: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2c1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2c1c8c:
    // 0x2c1c8c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2c1c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2c1c90:
    // 0x2c1c90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c1c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c1c94:
    // 0x2c1c94: 0x1450002d  bne         $v0, $s0, . + 4 + (0x2D << 2)
label_2c1c98:
    if (ctx->pc == 0x2C1C98u) {
        ctx->pc = 0x2C1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C94u;
        // 0x2c1c98: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C9Cu;
        goto label_2c1c9c;
    }
    ctx->pc = 0x2C1C94u;
    {
        const bool branch_taken_0x2c1c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2C1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C94u;
        // 0x2c1c98: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c94) {
            ctx->pc = 0x2C1D4Cu;
            goto label_2c1d4c;
        }
    }
    ctx->pc = 0x2C1C9Cu;
label_2c1c9c:
    // 0x2c1c9c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2c1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2c1ca0:
    // 0x2c1ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1ca4:
    if (ctx->pc == 0x2C1CA4u) {
        ctx->pc = 0x2C1CA8u;
        goto label_2c1ca8;
    }
    ctx->pc = 0x2C1CA0u;
    {
        const bool branch_taken_0x2c1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ca0) {
            ctx->pc = 0x2C1CBCu;
            goto label_2c1cbc;
        }
    }
    ctx->pc = 0x2C1CA8u;
label_2c1ca8:
    // 0x2c1ca8: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2c1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
label_2c1cac:
    // 0x2c1cac: 0xc0b05f0  jal         func_2C17C0
label_2c1cb0:
    if (ctx->pc == 0x2C1CB0u) {
        ctx->pc = 0x2C1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CACu;
        // 0x2c1cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1CB4u;
        goto label_2c1cb4;
    }
    ctx->pc = 0x2C1CACu;
    SET_GPR_U32(ctx, 31, 0x2C1CB4u);
    ctx->pc = 0x2C1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CACu;
    // 0x2c1cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C17C0u, 0x2C1CACu, 0x2C1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CB4u;
label_2c1cb4:
    // 0x2c1cb4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2c1cb8:
    if (ctx->pc == 0x2C1CB8u) {
        ctx->pc = 0x2C1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CB4u;
        // 0x2c1cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1CBCu;
        goto label_2c1cbc;
    }
    ctx->pc = 0x2C1CB4u;
    {
        const bool branch_taken_0x2c1cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CB4u;
        // 0x2c1cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cb4) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1CBCu;
label_2c1cbc:
    // 0x2c1cbc: 0xc0e409a  jal         func_390268
label_2c1cc0:
    if (ctx->pc == 0x2C1CC0u) {
        ctx->pc = 0x2C1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CBCu;
        // 0x2c1cc0: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1CC4u;
        goto label_2c1cc4;
    }
    ctx->pc = 0x2C1CBCu;
    SET_GPR_U32(ctx, 31, 0x2C1CC4u);
    ctx->pc = 0x2C1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CBCu;
    // 0x2c1cc0: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C1CBCu, 0x2C1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CC4u;
label_2c1cc4:
    // 0x2c1cc4: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x2c1cc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2c1cc8:
    // 0x2c1cc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c1cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ccc:
    // 0x2c1ccc: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x2c1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2c1cd0:
    // 0x2c1cd0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c1cd4:
    // 0x2c1cd4: 0xc0cdb38  jal         func_336CE0
label_2c1cd8:
    if (ctx->pc == 0x2C1CD8u) {
        ctx->pc = 0x2C1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CD4u;
        // 0x2c1cd8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1CDCu;
        goto label_2c1cdc;
    }
    ctx->pc = 0x2C1CD4u;
    SET_GPR_U32(ctx, 31, 0x2C1CDCu);
    ctx->pc = 0x2C1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CD4u;
    // 0x2c1cd8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C1CD4u, 0x2C1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CDCu;
label_2c1cdc:
    // 0x2c1cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c1ce0:
    // 0x2c1ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c1ce4:
    // 0x2c1ce4: 0x0  nop
    ctx->pc = 0x2c1ce4u;
    // NOP
label_2c1ce8:
    // 0x2c1ce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c1cec:
    // 0x2c1cec: 0x0  nop
    ctx->pc = 0x2c1cecu;
    // NOP
label_2c1cf0:
    // 0x2c1cf0: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_2c1cf4:
    if (ctx->pc == 0x2C1CF4u) {
        ctx->pc = 0x2C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CF0u;
        // 0x2c1cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1CF8u;
        goto label_2c1cf8;
    }
    ctx->pc = 0x2C1CF0u;
    {
        const bool branch_taken_0x2c1cf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CF0u;
        // 0x2c1cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cf0) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1CF8u;
label_2c1cf8:
    // 0x2c1cf8: 0xa2300051  sb          $s0, 0x51($s1)
    ctx->pc = 0x2c1cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 16));
label_2c1cfc:
    // 0x2c1cfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1d00:
    // 0x2c1d00: 0xc0a2ab0  jal         func_28AAC0
label_2c1d04:
    if (ctx->pc == 0x2C1D04u) {
        ctx->pc = 0x2C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D00u;
        // 0x2c1d04: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D08u;
        goto label_2c1d08;
    }
    ctx->pc = 0x2C1D00u;
    SET_GPR_U32(ctx, 31, 0x2C1D08u);
    ctx->pc = 0x2C1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D00u;
    // 0x2c1d04: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C1D00u, 0x2C1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D08u;
label_2c1d08:
    // 0x2c1d08: 0xc0a4e54  jal         func_293950
label_2c1d0c:
    if (ctx->pc == 0x2C1D0Cu) {
        ctx->pc = 0x2C1D10u;
        goto label_2c1d10;
    }
    ctx->pc = 0x2C1D08u;
    SET_GPR_U32(ctx, 31, 0x2C1D10u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C1D08u, 0x2C1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D10u;
label_2c1d10:
    // 0x2c1d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d14:
    // 0x2c1d14: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c1d18:
    if (ctx->pc == 0x2C1D18u) {
        ctx->pc = 0x2C1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D14u;
        // 0x2c1d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D1Cu;
        goto label_2c1d1c;
    }
    ctx->pc = 0x2C1D14u;
    {
        const bool branch_taken_0x2c1d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D14u;
        // 0x2c1d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d14) {
            ctx->pc = 0x2C1D38u;
            goto label_2c1d38;
        }
    }
    ctx->pc = 0x2C1D1Cu;
label_2c1d1c:
    // 0x2c1d1c: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x2c1d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2c1d20:
    // 0x2c1d20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1d24:
    // 0x2c1d24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d28:
    // 0x2c1d28: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c1d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2c1d2c:
    // 0x2c1d2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1d30:
    // 0x2c1d30: 0xc0b7eea  jal         func_2DFBA8
label_2c1d34:
    if (ctx->pc == 0x2C1D34u) {
        ctx->pc = 0x2C1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D30u;
        // 0x2c1d34: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D38u;
        goto label_2c1d38;
    }
    ctx->pc = 0x2C1D30u;
    SET_GPR_U32(ctx, 31, 0x2C1D38u);
    ctx->pc = 0x2C1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D30u;
    // 0x2c1d34: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2C1D30u, 0x2C1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D38u;
label_2c1d38:
    // 0x2c1d38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1d3c:
    // 0x2c1d3c: 0xc0a35d6  jal         func_28D758
label_2c1d40:
    if (ctx->pc == 0x2C1D40u) {
        ctx->pc = 0x2C1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D3Cu;
        // 0x2c1d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D44u;
        goto label_2c1d44;
    }
    ctx->pc = 0x2C1D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D44u);
    ctx->pc = 0x2C1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D3Cu;
    // 0x2c1d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C1D3Cu, 0x2C1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D44u;
label_2c1d44:
    // 0x2c1d44: 0x10000027  b           . + 4 + (0x27 << 2)
label_2c1d48:
    if (ctx->pc == 0x2C1D48u) {
        ctx->pc = 0x2C1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D44u;
        // 0x2c1d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D4Cu;
        goto label_2c1d4c;
    }
    ctx->pc = 0x2C1D44u;
    {
        const bool branch_taken_0x2c1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D44u;
        // 0x2c1d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d44) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1D4Cu;
label_2c1d4c:
    // 0x2c1d4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c1d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d50:
    // 0x2c1d50: 0xc0cdb38  jal         func_336CE0
label_2c1d54:
    if (ctx->pc == 0x2C1D54u) {
        ctx->pc = 0x2C1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D50u;
        // 0x2c1d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D58u;
        goto label_2c1d58;
    }
    ctx->pc = 0x2C1D50u;
    SET_GPR_U32(ctx, 31, 0x2C1D58u);
    ctx->pc = 0x2C1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D50u;
    // 0x2c1d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C1D50u, 0x2C1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D58u;
label_2c1d58:
    // 0x2c1d58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1d5c:
    // 0x2c1d5c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2c1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2c1d60:
    // 0x2c1d60: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_2c1d64:
    if (ctx->pc == 0x2C1D64u) {
        ctx->pc = 0x2C1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D60u;
        // 0x2c1d64: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D68u;
        goto label_2c1d68;
    }
    ctx->pc = 0x2C1D60u;
    {
        const bool branch_taken_0x2c1d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2C1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D60u;
        // 0x2c1d64: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d60) {
            ctx->pc = 0x2C1D78u;
            goto label_2c1d78;
        }
    }
    ctx->pc = 0x2C1D68u;
label_2c1d68:
    // 0x2c1d68: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_2c1d6c:
    // 0x2c1d6c: 0xa46200f4  sh          $v0, 0xF4($v1)
    ctx->pc = 0x2c1d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 244), (uint16_t)GPR_U32(ctx, 2));
label_2c1d70:
    // 0x2c1d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1d74:
    // 0x2c1d74: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2c1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
label_2c1d78:
    // 0x2c1d78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c1d7c:
    // 0x2c1d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c1d80:
    // 0x2c1d80: 0x0  nop
    ctx->pc = 0x2c1d80u;
    // NOP
label_2c1d84:
    // 0x2c1d84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c1d88:
    // 0x2c1d88: 0x0  nop
    ctx->pc = 0x2c1d88u;
    // NOP
label_2c1d8c:
    // 0x2c1d8c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2c1d90:
    if (ctx->pc == 0x2C1D90u) {
        ctx->pc = 0x2C1D94u;
        goto label_2c1d94;
    }
    ctx->pc = 0x2C1D8Cu;
    {
        const bool branch_taken_0x2c1d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1d8c) {
            ctx->pc = 0x2C1DD8u;
            goto label_2c1dd8;
        }
    }
    ctx->pc = 0x2C1D94u;
label_2c1d94:
    // 0x2c1d94: 0xc0a367c  jal         func_28D9F0
label_2c1d98:
    if (ctx->pc == 0x2C1D98u) {
        ctx->pc = 0x2C1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D94u;
        // 0x2c1d98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1D9Cu;
        goto label_2c1d9c;
    }
    ctx->pc = 0x2C1D94u;
    SET_GPR_U32(ctx, 31, 0x2C1D9Cu);
    ctx->pc = 0x2C1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D94u;
    // 0x2c1d98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C1D94u, 0x2C1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D9Cu;
label_2c1d9c:
    // 0x2c1d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1da0:
    // 0x2c1da0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2c1da4:
    if (ctx->pc == 0x2C1DA4u) {
        ctx->pc = 0x2C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DA0u;
        // 0x2c1da4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1DA8u;
        goto label_2c1da8;
    }
    ctx->pc = 0x2C1DA0u;
    {
        const bool branch_taken_0x2c1da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DA0u;
        // 0x2c1da4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1da0) {
            ctx->pc = 0x2C1DE0u;
            goto label_2c1de0;
        }
    }
    ctx->pc = 0x2C1DA8u;
label_2c1da8:
    // 0x2c1da8: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2c1dac:
    // 0x2c1dac: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c1dacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c1db0:
    // 0x2c1db0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c1db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1db4:
    // 0x2c1db4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c1db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1db8:
    // 0x2c1db8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c1db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1dbc:
    // 0x2c1dbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c1dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c1dc0:
    // 0x2c1dc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1dc4:
    // 0x2c1dc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c1dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1dc8:
    // 0x2c1dc8: 0xc0bee7a  jal         func_2FB9E8
label_2c1dcc:
    if (ctx->pc == 0x2C1DCCu) {
        ctx->pc = 0x2C1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DC8u;
        // 0x2c1dcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1DD0u;
        goto label_2c1dd0;
    }
    ctx->pc = 0x2C1DC8u;
    SET_GPR_U32(ctx, 31, 0x2C1DD0u);
    ctx->pc = 0x2C1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DC8u;
    // 0x2c1dcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C1DC8u, 0x2C1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DD0u;
label_2c1dd0:
    // 0x2c1dd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c1dd4:
    if (ctx->pc == 0x2C1DD4u) {
        ctx->pc = 0x2C1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DD0u;
        // 0x2c1dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1DD8u;
        goto label_2c1dd8;
    }
    ctx->pc = 0x2C1DD0u;
    {
        const bool branch_taken_0x2c1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DD0u;
        // 0x2c1dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1dd0) {
            ctx->pc = 0x2C1DE4u;
            goto label_2c1de4;
        }
    }
    ctx->pc = 0x2C1DD8u;
label_2c1dd8:
    // 0x2c1dd8: 0xc0b0556  jal         func_2C1558
label_2c1ddc:
    if (ctx->pc == 0x2C1DDCu) {
        ctx->pc = 0x2C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DD8u;
        // 0x2c1ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1DE0u;
        goto label_2c1de0;
    }
    ctx->pc = 0x2C1DD8u;
    SET_GPR_U32(ctx, 31, 0x2C1DE0u);
    ctx->pc = 0x2C1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DD8u;
    // 0x2c1ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1558u, 0x2C1DD8u, 0x2C1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DE0u;
label_2c1de0:
    // 0x2c1de0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1de4:
    // 0x2c1de4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2c1de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c1de8:
    // 0x2c1de8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2c1de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c1dec:
    // 0x2c1dec: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2c1decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c1df0:
    // 0x2c1df0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2c1df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c1df4:
    // 0x2c1df4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2c1df4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c1df8:
    // 0x2c1df8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2c1df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c1dfc:
    // 0x2c1dfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c1dfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c1e00:
    // 0x2c1e00: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2c1e00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c1e04:
    // 0x2c1e04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1e08:
    // 0x2c1e08: 0x3e00008  jr          $ra
label_2c1e0c:
    if (ctx->pc == 0x2C1E0Cu) {
        ctx->pc = 0x2C1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E08u;
        // 0x2c1e0c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1E10u;
        goto label_fallthrough_0x2c1e08;
    }
    ctx->pc = 0x2C1E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E08u;
        // 0x2c1e0c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c1e08:
    ctx->pc = 0x2C1E10u;
}
