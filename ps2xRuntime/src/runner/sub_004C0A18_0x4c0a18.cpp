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

// Function: sub_004C0A18
// Address: 0x4c0a18 - 0x4c1348
void sub_004C0A18_0x4c0a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C0A18_0x4c0a18");
#endif

    switch (ctx->pc) {
        case 0x4c0a18u: goto label_4c0a18;
        case 0x4c0a1cu: goto label_4c0a1c;
        case 0x4c0a20u: goto label_4c0a20;
        case 0x4c0a24u: goto label_4c0a24;
        case 0x4c0a28u: goto label_4c0a28;
        case 0x4c0a2cu: goto label_4c0a2c;
        case 0x4c0a30u: goto label_4c0a30;
        case 0x4c0a34u: goto label_4c0a34;
        case 0x4c0a38u: goto label_4c0a38;
        case 0x4c0a3cu: goto label_4c0a3c;
        case 0x4c0a40u: goto label_4c0a40;
        case 0x4c0a44u: goto label_4c0a44;
        case 0x4c0a48u: goto label_4c0a48;
        case 0x4c0a4cu: goto label_4c0a4c;
        case 0x4c0a50u: goto label_4c0a50;
        case 0x4c0a54u: goto label_4c0a54;
        case 0x4c0a58u: goto label_4c0a58;
        case 0x4c0a5cu: goto label_4c0a5c;
        case 0x4c0a60u: goto label_4c0a60;
        case 0x4c0a64u: goto label_4c0a64;
        case 0x4c0a68u: goto label_4c0a68;
        case 0x4c0a6cu: goto label_4c0a6c;
        case 0x4c0a70u: goto label_4c0a70;
        case 0x4c0a74u: goto label_4c0a74;
        case 0x4c0a78u: goto label_4c0a78;
        case 0x4c0a7cu: goto label_4c0a7c;
        case 0x4c0a80u: goto label_4c0a80;
        case 0x4c0a84u: goto label_4c0a84;
        case 0x4c0a88u: goto label_4c0a88;
        case 0x4c0a8cu: goto label_4c0a8c;
        case 0x4c0a90u: goto label_4c0a90;
        case 0x4c0a94u: goto label_4c0a94;
        case 0x4c0a98u: goto label_4c0a98;
        case 0x4c0a9cu: goto label_4c0a9c;
        case 0x4c0aa0u: goto label_4c0aa0;
        case 0x4c0aa4u: goto label_4c0aa4;
        case 0x4c0aa8u: goto label_4c0aa8;
        case 0x4c0aacu: goto label_4c0aac;
        case 0x4c0ab0u: goto label_4c0ab0;
        case 0x4c0ab4u: goto label_4c0ab4;
        case 0x4c0ab8u: goto label_4c0ab8;
        case 0x4c0abcu: goto label_4c0abc;
        case 0x4c0ac0u: goto label_4c0ac0;
        case 0x4c0ac4u: goto label_4c0ac4;
        case 0x4c0ac8u: goto label_4c0ac8;
        case 0x4c0accu: goto label_4c0acc;
        case 0x4c0ad0u: goto label_4c0ad0;
        case 0x4c0ad4u: goto label_4c0ad4;
        case 0x4c0ad8u: goto label_4c0ad8;
        case 0x4c0adcu: goto label_4c0adc;
        case 0x4c0ae0u: goto label_4c0ae0;
        case 0x4c0ae4u: goto label_4c0ae4;
        case 0x4c0ae8u: goto label_4c0ae8;
        case 0x4c0aecu: goto label_4c0aec;
        case 0x4c0af0u: goto label_4c0af0;
        case 0x4c0af4u: goto label_4c0af4;
        case 0x4c0af8u: goto label_4c0af8;
        case 0x4c0afcu: goto label_4c0afc;
        case 0x4c0b00u: goto label_4c0b00;
        case 0x4c0b04u: goto label_4c0b04;
        case 0x4c0b08u: goto label_4c0b08;
        case 0x4c0b0cu: goto label_4c0b0c;
        case 0x4c0b10u: goto label_4c0b10;
        case 0x4c0b14u: goto label_4c0b14;
        case 0x4c0b18u: goto label_4c0b18;
        case 0x4c0b1cu: goto label_4c0b1c;
        case 0x4c0b20u: goto label_4c0b20;
        case 0x4c0b24u: goto label_4c0b24;
        case 0x4c0b28u: goto label_4c0b28;
        case 0x4c0b2cu: goto label_4c0b2c;
        case 0x4c0b30u: goto label_4c0b30;
        case 0x4c0b34u: goto label_4c0b34;
        case 0x4c0b38u: goto label_4c0b38;
        case 0x4c0b3cu: goto label_4c0b3c;
        case 0x4c0b40u: goto label_4c0b40;
        case 0x4c0b44u: goto label_4c0b44;
        case 0x4c0b48u: goto label_4c0b48;
        case 0x4c0b4cu: goto label_4c0b4c;
        case 0x4c0b50u: goto label_4c0b50;
        case 0x4c0b54u: goto label_4c0b54;
        case 0x4c0b58u: goto label_4c0b58;
        case 0x4c0b5cu: goto label_4c0b5c;
        case 0x4c0b60u: goto label_4c0b60;
        case 0x4c0b64u: goto label_4c0b64;
        case 0x4c0b68u: goto label_4c0b68;
        case 0x4c0b6cu: goto label_4c0b6c;
        case 0x4c0b70u: goto label_4c0b70;
        case 0x4c0b74u: goto label_4c0b74;
        case 0x4c0b78u: goto label_4c0b78;
        case 0x4c0b7cu: goto label_4c0b7c;
        case 0x4c0b80u: goto label_4c0b80;
        case 0x4c0b84u: goto label_4c0b84;
        case 0x4c0b88u: goto label_4c0b88;
        case 0x4c0b8cu: goto label_4c0b8c;
        case 0x4c0b90u: goto label_4c0b90;
        case 0x4c0b94u: goto label_4c0b94;
        case 0x4c0b98u: goto label_4c0b98;
        case 0x4c0b9cu: goto label_4c0b9c;
        case 0x4c0ba0u: goto label_4c0ba0;
        case 0x4c0ba4u: goto label_4c0ba4;
        case 0x4c0ba8u: goto label_4c0ba8;
        case 0x4c0bacu: goto label_4c0bac;
        case 0x4c0bb0u: goto label_4c0bb0;
        case 0x4c0bb4u: goto label_4c0bb4;
        case 0x4c0bb8u: goto label_4c0bb8;
        case 0x4c0bbcu: goto label_4c0bbc;
        case 0x4c0bc0u: goto label_4c0bc0;
        case 0x4c0bc4u: goto label_4c0bc4;
        case 0x4c0bc8u: goto label_4c0bc8;
        case 0x4c0bccu: goto label_4c0bcc;
        case 0x4c0bd0u: goto label_4c0bd0;
        case 0x4c0bd4u: goto label_4c0bd4;
        case 0x4c0bd8u: goto label_4c0bd8;
        case 0x4c0bdcu: goto label_4c0bdc;
        case 0x4c0be0u: goto label_4c0be0;
        case 0x4c0be4u: goto label_4c0be4;
        case 0x4c0be8u: goto label_4c0be8;
        case 0x4c0becu: goto label_4c0bec;
        case 0x4c0bf0u: goto label_4c0bf0;
        case 0x4c0bf4u: goto label_4c0bf4;
        case 0x4c0bf8u: goto label_4c0bf8;
        case 0x4c0bfcu: goto label_4c0bfc;
        case 0x4c0c00u: goto label_4c0c00;
        case 0x4c0c04u: goto label_4c0c04;
        case 0x4c0c08u: goto label_4c0c08;
        case 0x4c0c0cu: goto label_4c0c0c;
        case 0x4c0c10u: goto label_4c0c10;
        case 0x4c0c14u: goto label_4c0c14;
        case 0x4c0c18u: goto label_4c0c18;
        case 0x4c0c1cu: goto label_4c0c1c;
        case 0x4c0c20u: goto label_4c0c20;
        case 0x4c0c24u: goto label_4c0c24;
        case 0x4c0c28u: goto label_4c0c28;
        case 0x4c0c2cu: goto label_4c0c2c;
        case 0x4c0c30u: goto label_4c0c30;
        case 0x4c0c34u: goto label_4c0c34;
        case 0x4c0c38u: goto label_4c0c38;
        case 0x4c0c3cu: goto label_4c0c3c;
        case 0x4c0c40u: goto label_4c0c40;
        case 0x4c0c44u: goto label_4c0c44;
        case 0x4c0c48u: goto label_4c0c48;
        case 0x4c0c4cu: goto label_4c0c4c;
        case 0x4c0c50u: goto label_4c0c50;
        case 0x4c0c54u: goto label_4c0c54;
        case 0x4c0c58u: goto label_4c0c58;
        case 0x4c0c5cu: goto label_4c0c5c;
        case 0x4c0c60u: goto label_4c0c60;
        case 0x4c0c64u: goto label_4c0c64;
        case 0x4c0c68u: goto label_4c0c68;
        case 0x4c0c6cu: goto label_4c0c6c;
        case 0x4c0c70u: goto label_4c0c70;
        case 0x4c0c74u: goto label_4c0c74;
        case 0x4c0c78u: goto label_4c0c78;
        case 0x4c0c7cu: goto label_4c0c7c;
        case 0x4c0c80u: goto label_4c0c80;
        case 0x4c0c84u: goto label_4c0c84;
        case 0x4c0c88u: goto label_4c0c88;
        case 0x4c0c8cu: goto label_4c0c8c;
        case 0x4c0c90u: goto label_4c0c90;
        case 0x4c0c94u: goto label_4c0c94;
        case 0x4c0c98u: goto label_4c0c98;
        case 0x4c0c9cu: goto label_4c0c9c;
        case 0x4c0ca0u: goto label_4c0ca0;
        case 0x4c0ca4u: goto label_4c0ca4;
        case 0x4c0ca8u: goto label_4c0ca8;
        case 0x4c0cacu: goto label_4c0cac;
        case 0x4c0cb0u: goto label_4c0cb0;
        case 0x4c0cb4u: goto label_4c0cb4;
        case 0x4c0cb8u: goto label_4c0cb8;
        case 0x4c0cbcu: goto label_4c0cbc;
        case 0x4c0cc0u: goto label_4c0cc0;
        case 0x4c0cc4u: goto label_4c0cc4;
        case 0x4c0cc8u: goto label_4c0cc8;
        case 0x4c0cccu: goto label_4c0ccc;
        case 0x4c0cd0u: goto label_4c0cd0;
        case 0x4c0cd4u: goto label_4c0cd4;
        case 0x4c0cd8u: goto label_4c0cd8;
        case 0x4c0cdcu: goto label_4c0cdc;
        case 0x4c0ce0u: goto label_4c0ce0;
        case 0x4c0ce4u: goto label_4c0ce4;
        case 0x4c0ce8u: goto label_4c0ce8;
        case 0x4c0cecu: goto label_4c0cec;
        case 0x4c0cf0u: goto label_4c0cf0;
        case 0x4c0cf4u: goto label_4c0cf4;
        case 0x4c0cf8u: goto label_4c0cf8;
        case 0x4c0cfcu: goto label_4c0cfc;
        case 0x4c0d00u: goto label_4c0d00;
        case 0x4c0d04u: goto label_4c0d04;
        case 0x4c0d08u: goto label_4c0d08;
        case 0x4c0d0cu: goto label_4c0d0c;
        case 0x4c0d10u: goto label_4c0d10;
        case 0x4c0d14u: goto label_4c0d14;
        case 0x4c0d18u: goto label_4c0d18;
        case 0x4c0d1cu: goto label_4c0d1c;
        case 0x4c0d20u: goto label_4c0d20;
        case 0x4c0d24u: goto label_4c0d24;
        case 0x4c0d28u: goto label_4c0d28;
        case 0x4c0d2cu: goto label_4c0d2c;
        case 0x4c0d30u: goto label_4c0d30;
        case 0x4c0d34u: goto label_4c0d34;
        case 0x4c0d38u: goto label_4c0d38;
        case 0x4c0d3cu: goto label_4c0d3c;
        case 0x4c0d40u: goto label_4c0d40;
        case 0x4c0d44u: goto label_4c0d44;
        case 0x4c0d48u: goto label_4c0d48;
        case 0x4c0d4cu: goto label_4c0d4c;
        case 0x4c0d50u: goto label_4c0d50;
        case 0x4c0d54u: goto label_4c0d54;
        case 0x4c0d58u: goto label_4c0d58;
        case 0x4c0d5cu: goto label_4c0d5c;
        case 0x4c0d60u: goto label_4c0d60;
        case 0x4c0d64u: goto label_4c0d64;
        case 0x4c0d68u: goto label_4c0d68;
        case 0x4c0d6cu: goto label_4c0d6c;
        case 0x4c0d70u: goto label_4c0d70;
        case 0x4c0d74u: goto label_4c0d74;
        case 0x4c0d78u: goto label_4c0d78;
        case 0x4c0d7cu: goto label_4c0d7c;
        case 0x4c0d80u: goto label_4c0d80;
        case 0x4c0d84u: goto label_4c0d84;
        case 0x4c0d88u: goto label_4c0d88;
        case 0x4c0d8cu: goto label_4c0d8c;
        case 0x4c0d90u: goto label_4c0d90;
        case 0x4c0d94u: goto label_4c0d94;
        case 0x4c0d98u: goto label_4c0d98;
        case 0x4c0d9cu: goto label_4c0d9c;
        case 0x4c0da0u: goto label_4c0da0;
        case 0x4c0da4u: goto label_4c0da4;
        case 0x4c0da8u: goto label_4c0da8;
        case 0x4c0dacu: goto label_4c0dac;
        case 0x4c0db0u: goto label_4c0db0;
        case 0x4c0db4u: goto label_4c0db4;
        case 0x4c0db8u: goto label_4c0db8;
        case 0x4c0dbcu: goto label_4c0dbc;
        case 0x4c0dc0u: goto label_4c0dc0;
        case 0x4c0dc4u: goto label_4c0dc4;
        case 0x4c0dc8u: goto label_4c0dc8;
        case 0x4c0dccu: goto label_4c0dcc;
        case 0x4c0dd0u: goto label_4c0dd0;
        case 0x4c0dd4u: goto label_4c0dd4;
        case 0x4c0dd8u: goto label_4c0dd8;
        case 0x4c0ddcu: goto label_4c0ddc;
        case 0x4c0de0u: goto label_4c0de0;
        case 0x4c0de4u: goto label_4c0de4;
        case 0x4c0de8u: goto label_4c0de8;
        case 0x4c0decu: goto label_4c0dec;
        case 0x4c0df0u: goto label_4c0df0;
        case 0x4c0df4u: goto label_4c0df4;
        case 0x4c0df8u: goto label_4c0df8;
        case 0x4c0dfcu: goto label_4c0dfc;
        case 0x4c0e00u: goto label_4c0e00;
        case 0x4c0e04u: goto label_4c0e04;
        case 0x4c0e08u: goto label_4c0e08;
        case 0x4c0e0cu: goto label_4c0e0c;
        case 0x4c0e10u: goto label_4c0e10;
        case 0x4c0e14u: goto label_4c0e14;
        case 0x4c0e18u: goto label_4c0e18;
        case 0x4c0e1cu: goto label_4c0e1c;
        case 0x4c0e20u: goto label_4c0e20;
        case 0x4c0e24u: goto label_4c0e24;
        case 0x4c0e28u: goto label_4c0e28;
        case 0x4c0e2cu: goto label_4c0e2c;
        case 0x4c0e30u: goto label_4c0e30;
        case 0x4c0e34u: goto label_4c0e34;
        case 0x4c0e38u: goto label_4c0e38;
        case 0x4c0e3cu: goto label_4c0e3c;
        case 0x4c0e40u: goto label_4c0e40;
        case 0x4c0e44u: goto label_4c0e44;
        case 0x4c0e48u: goto label_4c0e48;
        case 0x4c0e4cu: goto label_4c0e4c;
        case 0x4c0e50u: goto label_4c0e50;
        case 0x4c0e54u: goto label_4c0e54;
        case 0x4c0e58u: goto label_4c0e58;
        case 0x4c0e5cu: goto label_4c0e5c;
        case 0x4c0e60u: goto label_4c0e60;
        case 0x4c0e64u: goto label_4c0e64;
        case 0x4c0e68u: goto label_4c0e68;
        case 0x4c0e6cu: goto label_4c0e6c;
        case 0x4c0e70u: goto label_4c0e70;
        case 0x4c0e74u: goto label_4c0e74;
        case 0x4c0e78u: goto label_4c0e78;
        case 0x4c0e7cu: goto label_4c0e7c;
        case 0x4c0e80u: goto label_4c0e80;
        case 0x4c0e84u: goto label_4c0e84;
        case 0x4c0e88u: goto label_4c0e88;
        case 0x4c0e8cu: goto label_4c0e8c;
        case 0x4c0e90u: goto label_4c0e90;
        case 0x4c0e94u: goto label_4c0e94;
        case 0x4c0e98u: goto label_4c0e98;
        case 0x4c0e9cu: goto label_4c0e9c;
        case 0x4c0ea0u: goto label_4c0ea0;
        case 0x4c0ea4u: goto label_4c0ea4;
        case 0x4c0ea8u: goto label_4c0ea8;
        case 0x4c0eacu: goto label_4c0eac;
        case 0x4c0eb0u: goto label_4c0eb0;
        case 0x4c0eb4u: goto label_4c0eb4;
        case 0x4c0eb8u: goto label_4c0eb8;
        case 0x4c0ebcu: goto label_4c0ebc;
        case 0x4c0ec0u: goto label_4c0ec0;
        case 0x4c0ec4u: goto label_4c0ec4;
        case 0x4c0ec8u: goto label_4c0ec8;
        case 0x4c0eccu: goto label_4c0ecc;
        case 0x4c0ed0u: goto label_4c0ed0;
        case 0x4c0ed4u: goto label_4c0ed4;
        case 0x4c0ed8u: goto label_4c0ed8;
        case 0x4c0edcu: goto label_4c0edc;
        case 0x4c0ee0u: goto label_4c0ee0;
        case 0x4c0ee4u: goto label_4c0ee4;
        case 0x4c0ee8u: goto label_4c0ee8;
        case 0x4c0eecu: goto label_4c0eec;
        case 0x4c0ef0u: goto label_4c0ef0;
        case 0x4c0ef4u: goto label_4c0ef4;
        case 0x4c0ef8u: goto label_4c0ef8;
        case 0x4c0efcu: goto label_4c0efc;
        case 0x4c0f00u: goto label_4c0f00;
        case 0x4c0f04u: goto label_4c0f04;
        case 0x4c0f08u: goto label_4c0f08;
        case 0x4c0f0cu: goto label_4c0f0c;
        case 0x4c0f10u: goto label_4c0f10;
        case 0x4c0f14u: goto label_4c0f14;
        case 0x4c0f18u: goto label_4c0f18;
        case 0x4c0f1cu: goto label_4c0f1c;
        case 0x4c0f20u: goto label_4c0f20;
        case 0x4c0f24u: goto label_4c0f24;
        case 0x4c0f28u: goto label_4c0f28;
        case 0x4c0f2cu: goto label_4c0f2c;
        case 0x4c0f30u: goto label_4c0f30;
        case 0x4c0f34u: goto label_4c0f34;
        case 0x4c0f38u: goto label_4c0f38;
        case 0x4c0f3cu: goto label_4c0f3c;
        case 0x4c0f40u: goto label_4c0f40;
        case 0x4c0f44u: goto label_4c0f44;
        case 0x4c0f48u: goto label_4c0f48;
        case 0x4c0f4cu: goto label_4c0f4c;
        case 0x4c0f50u: goto label_4c0f50;
        case 0x4c0f54u: goto label_4c0f54;
        case 0x4c0f58u: goto label_4c0f58;
        case 0x4c0f5cu: goto label_4c0f5c;
        case 0x4c0f60u: goto label_4c0f60;
        case 0x4c0f64u: goto label_4c0f64;
        case 0x4c0f68u: goto label_4c0f68;
        case 0x4c0f6cu: goto label_4c0f6c;
        case 0x4c0f70u: goto label_4c0f70;
        case 0x4c0f74u: goto label_4c0f74;
        case 0x4c0f78u: goto label_4c0f78;
        case 0x4c0f7cu: goto label_4c0f7c;
        case 0x4c0f80u: goto label_4c0f80;
        case 0x4c0f84u: goto label_4c0f84;
        case 0x4c0f88u: goto label_4c0f88;
        case 0x4c0f8cu: goto label_4c0f8c;
        case 0x4c0f90u: goto label_4c0f90;
        case 0x4c0f94u: goto label_4c0f94;
        case 0x4c0f98u: goto label_4c0f98;
        case 0x4c0f9cu: goto label_4c0f9c;
        case 0x4c0fa0u: goto label_4c0fa0;
        case 0x4c0fa4u: goto label_4c0fa4;
        case 0x4c0fa8u: goto label_4c0fa8;
        case 0x4c0facu: goto label_4c0fac;
        case 0x4c0fb0u: goto label_4c0fb0;
        case 0x4c0fb4u: goto label_4c0fb4;
        case 0x4c0fb8u: goto label_4c0fb8;
        case 0x4c0fbcu: goto label_4c0fbc;
        case 0x4c0fc0u: goto label_4c0fc0;
        case 0x4c0fc4u: goto label_4c0fc4;
        case 0x4c0fc8u: goto label_4c0fc8;
        case 0x4c0fccu: goto label_4c0fcc;
        case 0x4c0fd0u: goto label_4c0fd0;
        case 0x4c0fd4u: goto label_4c0fd4;
        case 0x4c0fd8u: goto label_4c0fd8;
        case 0x4c0fdcu: goto label_4c0fdc;
        case 0x4c0fe0u: goto label_4c0fe0;
        case 0x4c0fe4u: goto label_4c0fe4;
        case 0x4c0fe8u: goto label_4c0fe8;
        case 0x4c0fecu: goto label_4c0fec;
        case 0x4c0ff0u: goto label_4c0ff0;
        case 0x4c0ff4u: goto label_4c0ff4;
        case 0x4c0ff8u: goto label_4c0ff8;
        case 0x4c0ffcu: goto label_4c0ffc;
        case 0x4c1000u: goto label_4c1000;
        case 0x4c1004u: goto label_4c1004;
        case 0x4c1008u: goto label_4c1008;
        case 0x4c100cu: goto label_4c100c;
        case 0x4c1010u: goto label_4c1010;
        case 0x4c1014u: goto label_4c1014;
        case 0x4c1018u: goto label_4c1018;
        case 0x4c101cu: goto label_4c101c;
        case 0x4c1020u: goto label_4c1020;
        case 0x4c1024u: goto label_4c1024;
        case 0x4c1028u: goto label_4c1028;
        case 0x4c102cu: goto label_4c102c;
        case 0x4c1030u: goto label_4c1030;
        case 0x4c1034u: goto label_4c1034;
        case 0x4c1038u: goto label_4c1038;
        case 0x4c103cu: goto label_4c103c;
        case 0x4c1040u: goto label_4c1040;
        case 0x4c1044u: goto label_4c1044;
        case 0x4c1048u: goto label_4c1048;
        case 0x4c104cu: goto label_4c104c;
        case 0x4c1050u: goto label_4c1050;
        case 0x4c1054u: goto label_4c1054;
        case 0x4c1058u: goto label_4c1058;
        case 0x4c105cu: goto label_4c105c;
        case 0x4c1060u: goto label_4c1060;
        case 0x4c1064u: goto label_4c1064;
        case 0x4c1068u: goto label_4c1068;
        case 0x4c106cu: goto label_4c106c;
        case 0x4c1070u: goto label_4c1070;
        case 0x4c1074u: goto label_4c1074;
        case 0x4c1078u: goto label_4c1078;
        case 0x4c107cu: goto label_4c107c;
        case 0x4c1080u: goto label_4c1080;
        case 0x4c1084u: goto label_4c1084;
        case 0x4c1088u: goto label_4c1088;
        case 0x4c108cu: goto label_4c108c;
        case 0x4c1090u: goto label_4c1090;
        case 0x4c1094u: goto label_4c1094;
        case 0x4c1098u: goto label_4c1098;
        case 0x4c109cu: goto label_4c109c;
        case 0x4c10a0u: goto label_4c10a0;
        case 0x4c10a4u: goto label_4c10a4;
        case 0x4c10a8u: goto label_4c10a8;
        case 0x4c10acu: goto label_4c10ac;
        case 0x4c10b0u: goto label_4c10b0;
        case 0x4c10b4u: goto label_4c10b4;
        case 0x4c10b8u: goto label_4c10b8;
        case 0x4c10bcu: goto label_4c10bc;
        case 0x4c10c0u: goto label_4c10c0;
        case 0x4c10c4u: goto label_4c10c4;
        case 0x4c10c8u: goto label_4c10c8;
        case 0x4c10ccu: goto label_4c10cc;
        case 0x4c10d0u: goto label_4c10d0;
        case 0x4c10d4u: goto label_4c10d4;
        case 0x4c10d8u: goto label_4c10d8;
        case 0x4c10dcu: goto label_4c10dc;
        case 0x4c10e0u: goto label_4c10e0;
        case 0x4c10e4u: goto label_4c10e4;
        case 0x4c10e8u: goto label_4c10e8;
        case 0x4c10ecu: goto label_4c10ec;
        case 0x4c10f0u: goto label_4c10f0;
        case 0x4c10f4u: goto label_4c10f4;
        case 0x4c10f8u: goto label_4c10f8;
        case 0x4c10fcu: goto label_4c10fc;
        case 0x4c1100u: goto label_4c1100;
        case 0x4c1104u: goto label_4c1104;
        case 0x4c1108u: goto label_4c1108;
        case 0x4c110cu: goto label_4c110c;
        case 0x4c1110u: goto label_4c1110;
        case 0x4c1114u: goto label_4c1114;
        case 0x4c1118u: goto label_4c1118;
        case 0x4c111cu: goto label_4c111c;
        case 0x4c1120u: goto label_4c1120;
        case 0x4c1124u: goto label_4c1124;
        case 0x4c1128u: goto label_4c1128;
        case 0x4c112cu: goto label_4c112c;
        case 0x4c1130u: goto label_4c1130;
        case 0x4c1134u: goto label_4c1134;
        case 0x4c1138u: goto label_4c1138;
        case 0x4c113cu: goto label_4c113c;
        case 0x4c1140u: goto label_4c1140;
        case 0x4c1144u: goto label_4c1144;
        case 0x4c1148u: goto label_4c1148;
        case 0x4c114cu: goto label_4c114c;
        case 0x4c1150u: goto label_4c1150;
        case 0x4c1154u: goto label_4c1154;
        case 0x4c1158u: goto label_4c1158;
        case 0x4c115cu: goto label_4c115c;
        case 0x4c1160u: goto label_4c1160;
        case 0x4c1164u: goto label_4c1164;
        case 0x4c1168u: goto label_4c1168;
        case 0x4c116cu: goto label_4c116c;
        case 0x4c1170u: goto label_4c1170;
        case 0x4c1174u: goto label_4c1174;
        case 0x4c1178u: goto label_4c1178;
        case 0x4c117cu: goto label_4c117c;
        case 0x4c1180u: goto label_4c1180;
        case 0x4c1184u: goto label_4c1184;
        case 0x4c1188u: goto label_4c1188;
        case 0x4c118cu: goto label_4c118c;
        case 0x4c1190u: goto label_4c1190;
        case 0x4c1194u: goto label_4c1194;
        case 0x4c1198u: goto label_4c1198;
        case 0x4c119cu: goto label_4c119c;
        case 0x4c11a0u: goto label_4c11a0;
        case 0x4c11a4u: goto label_4c11a4;
        case 0x4c11a8u: goto label_4c11a8;
        case 0x4c11acu: goto label_4c11ac;
        case 0x4c11b0u: goto label_4c11b0;
        case 0x4c11b4u: goto label_4c11b4;
        case 0x4c11b8u: goto label_4c11b8;
        case 0x4c11bcu: goto label_4c11bc;
        case 0x4c11c0u: goto label_4c11c0;
        case 0x4c11c4u: goto label_4c11c4;
        case 0x4c11c8u: goto label_4c11c8;
        case 0x4c11ccu: goto label_4c11cc;
        case 0x4c11d0u: goto label_4c11d0;
        case 0x4c11d4u: goto label_4c11d4;
        case 0x4c11d8u: goto label_4c11d8;
        case 0x4c11dcu: goto label_4c11dc;
        case 0x4c11e0u: goto label_4c11e0;
        case 0x4c11e4u: goto label_4c11e4;
        case 0x4c11e8u: goto label_4c11e8;
        case 0x4c11ecu: goto label_4c11ec;
        case 0x4c11f0u: goto label_4c11f0;
        case 0x4c11f4u: goto label_4c11f4;
        case 0x4c11f8u: goto label_4c11f8;
        case 0x4c11fcu: goto label_4c11fc;
        case 0x4c1200u: goto label_4c1200;
        case 0x4c1204u: goto label_4c1204;
        case 0x4c1208u: goto label_4c1208;
        case 0x4c120cu: goto label_4c120c;
        case 0x4c1210u: goto label_4c1210;
        case 0x4c1214u: goto label_4c1214;
        case 0x4c1218u: goto label_4c1218;
        case 0x4c121cu: goto label_4c121c;
        case 0x4c1220u: goto label_4c1220;
        case 0x4c1224u: goto label_4c1224;
        case 0x4c1228u: goto label_4c1228;
        case 0x4c122cu: goto label_4c122c;
        case 0x4c1230u: goto label_4c1230;
        case 0x4c1234u: goto label_4c1234;
        case 0x4c1238u: goto label_4c1238;
        case 0x4c123cu: goto label_4c123c;
        case 0x4c1240u: goto label_4c1240;
        case 0x4c1244u: goto label_4c1244;
        case 0x4c1248u: goto label_4c1248;
        case 0x4c124cu: goto label_4c124c;
        case 0x4c1250u: goto label_4c1250;
        case 0x4c1254u: goto label_4c1254;
        case 0x4c1258u: goto label_4c1258;
        case 0x4c125cu: goto label_4c125c;
        case 0x4c1260u: goto label_4c1260;
        case 0x4c1264u: goto label_4c1264;
        case 0x4c1268u: goto label_4c1268;
        case 0x4c126cu: goto label_4c126c;
        case 0x4c1270u: goto label_4c1270;
        case 0x4c1274u: goto label_4c1274;
        case 0x4c1278u: goto label_4c1278;
        case 0x4c127cu: goto label_4c127c;
        case 0x4c1280u: goto label_4c1280;
        case 0x4c1284u: goto label_4c1284;
        case 0x4c1288u: goto label_4c1288;
        case 0x4c128cu: goto label_4c128c;
        case 0x4c1290u: goto label_4c1290;
        case 0x4c1294u: goto label_4c1294;
        case 0x4c1298u: goto label_4c1298;
        case 0x4c129cu: goto label_4c129c;
        case 0x4c12a0u: goto label_4c12a0;
        case 0x4c12a4u: goto label_4c12a4;
        case 0x4c12a8u: goto label_4c12a8;
        case 0x4c12acu: goto label_4c12ac;
        case 0x4c12b0u: goto label_4c12b0;
        case 0x4c12b4u: goto label_4c12b4;
        case 0x4c12b8u: goto label_4c12b8;
        case 0x4c12bcu: goto label_4c12bc;
        case 0x4c12c0u: goto label_4c12c0;
        case 0x4c12c4u: goto label_4c12c4;
        case 0x4c12c8u: goto label_4c12c8;
        case 0x4c12ccu: goto label_4c12cc;
        case 0x4c12d0u: goto label_4c12d0;
        case 0x4c12d4u: goto label_4c12d4;
        case 0x4c12d8u: goto label_4c12d8;
        case 0x4c12dcu: goto label_4c12dc;
        case 0x4c12e0u: goto label_4c12e0;
        case 0x4c12e4u: goto label_4c12e4;
        case 0x4c12e8u: goto label_4c12e8;
        case 0x4c12ecu: goto label_4c12ec;
        case 0x4c12f0u: goto label_4c12f0;
        case 0x4c12f4u: goto label_4c12f4;
        case 0x4c12f8u: goto label_4c12f8;
        case 0x4c12fcu: goto label_4c12fc;
        case 0x4c1300u: goto label_4c1300;
        case 0x4c1304u: goto label_4c1304;
        case 0x4c1308u: goto label_4c1308;
        case 0x4c130cu: goto label_4c130c;
        case 0x4c1310u: goto label_4c1310;
        case 0x4c1314u: goto label_4c1314;
        case 0x4c1318u: goto label_4c1318;
        case 0x4c131cu: goto label_4c131c;
        case 0x4c1320u: goto label_4c1320;
        case 0x4c1324u: goto label_4c1324;
        case 0x4c1328u: goto label_4c1328;
        case 0x4c132cu: goto label_4c132c;
        case 0x4c1330u: goto label_4c1330;
        case 0x4c1334u: goto label_4c1334;
        case 0x4c1338u: goto label_4c1338;
        case 0x4c133cu: goto label_4c133c;
        case 0x4c1340u: goto label_4c1340;
        case 0x4c1344u: goto label_4c1344;
        default: break;
    }

    ctx->pc = 0x4c0a18u;

label_4c0a18:
    // 0x4c0a18: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x4c0a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_4c0a1c:
    // 0x4c0a1c: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x4c0a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_4c0a20:
    // 0x4c0a20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4c0a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a24:
    // 0x4c0a24: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x4c0a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_4c0a28:
    // 0x4c0a28: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x4c0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_4c0a2c:
    // 0x4c0a2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c0a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a30:
    // 0x4c0a30: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x4c0a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_4c0a34:
    // 0x4c0a34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c0a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a38:
    // 0x4c0a38: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x4c0a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_4c0a3c:
    // 0x4c0a3c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4c0a3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a40:
    // 0x4c0a40: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x4c0a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_4c0a44:
    // 0x4c0a44: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x4c0a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a48:
    // 0x4c0a48: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x4c0a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_4c0a4c:
    // 0x4c0a4c: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x4c0a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_4c0a50:
    // 0x4c0a50: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x4c0a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_4c0a54:
    // 0x4c0a54: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x4c0a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_4c0a58:
    // 0x4c0a58: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4c0a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c0a5c:
    // 0x4c0a5c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4c0a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c0a60:
    // 0x4c0a60: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4c0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4c0a64:
    // 0x4c0a64: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4c0a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0a68:
    // 0x4c0a68: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4c0a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0a6c:
    // 0x4c0a6c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4c0a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4c0a70:
    // 0x4c0a70: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4c0a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c0a74:
    // 0x4c0a74: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4c0a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c0a78:
    // 0x4c0a78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4c0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4c0a7c:
    // 0x4c0a7c: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x4c0a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0a80:
    // 0x4c0a80: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x4c0a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0a84:
    // 0x4c0a84: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4c0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_4c0a88:
    // 0x4c0a88: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4c0a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0a8c:
    // 0x4c0a8c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x4c0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c0a90:
    // 0x4c0a90: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x4c0a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c0a94:
    // 0x4c0a94: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x4c0a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c0a98:
    // 0x4c0a98: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4c0a98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4c0a9c:
    // 0x4c0a9c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4c0a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c0aa0:
    // 0x4c0aa0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x4c0aa0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_4c0aa4:
    // 0x4c0aa4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x4c0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0aa8:
    // 0x4c0aa8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x4c0aa8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_4c0aac:
    // 0x4c0aac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4c0aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0ab0:
    // 0x4c0ab0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4c0ab0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_4c0ab4:
    // 0x4c0ab4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4c0ab4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4c0ab8:
    // 0x4c0ab8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x4c0ab8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4c0abc:
    // 0x4c0abc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4c0abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4c0ac0:
    // 0x4c0ac0: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x4c0ac0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4c0ac4:
    // 0x4c0ac4: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x4c0ac4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4c0ac8:
    // 0x4c0ac8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4c0ac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c0acc:
    // 0x4c0acc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4c0accu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c0ad0:
    // 0x4c0ad0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x4c0ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c0ad4:
    // 0x4c0ad4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x4c0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_4c0ad8:
    // 0x4c0ad8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4c0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c0adc:
    // 0x4c0adc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_4c0ae0:
    if (ctx->pc == 0x4C0AE0u) {
        ctx->pc = 0x4C0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0ADCu;
        // 0x4c0ae0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0AE4u;
        goto label_4c0ae4;
    }
    ctx->pc = 0x4C0ADCu;
    {
        const bool branch_taken_0x4c0adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0ADCu;
        // 0x4c0ae0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0adc) {
            ctx->pc = 0x4C0AE8u;
            goto label_4c0ae8;
        }
    }
    ctx->pc = 0x4C0AE4u;
label_4c0ae4:
    // 0x4c0ae4: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x4c0ae4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4c0ae8:
    // 0x4c0ae8: 0x8f84883c  lw          $a0, -0x77C4($gp)
    ctx->pc = 0x4c0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936636)));
label_4c0aec:
    // 0x4c0aec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4c0af0:
    // 0x4c0af0: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4c0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4c0af4:
    // 0x4c0af4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c0af8:
    // 0x4c0af8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0afc:
    // 0x4c0afc: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x4c0afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c0b00:
    // 0x4c0b00: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x4c0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_4c0b04:
    // 0x4c0b04: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4c0b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c0b08:
    // 0x4c0b08: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4c0b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c0b0c:
    // 0x4c0b0c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x4c0b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c0b10:
    // 0x4c0b10: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x4c0b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c0b14:
    // 0x4c0b14: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x4c0b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c0b18:
    // 0x4c0b18: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x4c0b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c0b1c:
    // 0x4c0b1c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x4c0b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0b20:
    // 0x4c0b20: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x4c0b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0b24:
    // 0x4c0b24: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x4c0b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0b28:
    // 0x4c0b28: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x4c0b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0b2c:
    // 0x4c0b2c: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x4c0b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0b30:
    // 0x4c0b30: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x4c0b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0b34:
    // 0x4c0b34: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x4c0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_4c0b38:
    // 0x4c0b38: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x4c0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4c0b3c:
    // 0x4c0b3c: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_4c0b40:
    // 0x4c0b40: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4c0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_4c0b44:
    // 0x4c0b44: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4c0b44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0b48:
    // 0x4c0b48: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x4c0b48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0b4c:
    // 0x4c0b4c: 0x108000a0  beqz        $a0, . + 4 + (0xA0 << 2)
label_4c0b50:
    if (ctx->pc == 0x4C0B50u) {
        ctx->pc = 0x4C0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0B4Cu;
        // 0x4c0b50: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0B54u;
        goto label_4c0b54;
    }
    ctx->pc = 0x4C0B4Cu;
    {
        const bool branch_taken_0x4c0b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0B4Cu;
        // 0x4c0b50: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0b4c) {
            ctx->pc = 0x4C0DD0u;
            goto label_4c0dd0;
        }
    }
    ctx->pc = 0x4C0B54u;
label_4c0b54:
    // 0x4c0b54: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x4c0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4c0b58:
    // 0x4c0b58: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x4c0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_4c0b5c:
    // 0x4c0b5c: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x4c0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4c0b60:
    // 0x4c0b60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0b64:
    // 0x4c0b64: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
label_4c0b68:
    if (ctx->pc == 0x4C0B68u) {
        ctx->pc = 0x4C0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0B64u;
        // 0x4c0b68: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0B6Cu;
        goto label_4c0b6c;
    }
    ctx->pc = 0x4C0B64u;
    {
        const bool branch_taken_0x4c0b64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0B64u;
        // 0x4c0b68: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0b64) {
            ctx->pc = 0x4C0BF4u;
            goto label_4c0bf4;
        }
    }
    ctx->pc = 0x4C0B6Cu;
label_4c0b6c:
    // 0x4c0b6c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4c0b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4c0b70:
    // 0x4c0b70: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x4c0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4c0b74:
    // 0x4c0b74: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0b78:
    // 0x4c0b78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0b7c:
    // 0x4c0b7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0b80:
    // 0x4c0b80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4c0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4c0b84:
    // 0x4c0b84: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4c0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0b88:
    // 0x4c0b88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4c0b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0b8c:
    // 0x4c0b8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4c0b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0b90:
    // 0x4c0b90: 0x0  nop
    ctx->pc = 0x4c0b90u;
    // NOP
label_4c0b94:
    // 0x4c0b94: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4c0b98:
    if (ctx->pc == 0x4C0B98u) {
        ctx->pc = 0x4C0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0B94u;
        // 0x4c0b98: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0B9Cu;
        goto label_4c0b9c;
    }
    ctx->pc = 0x4C0B94u;
    {
        const bool branch_taken_0x4c0b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0b94) {
            ctx->pc = 0x4C0B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0B94u;
            // 0x4c0b98: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0BA8u;
            goto label_4c0ba8;
        }
    }
    ctx->pc = 0x4C0B9Cu;
label_4c0b9c:
    // 0x4c0b9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4c0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c0ba0:
    // 0x4c0ba0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4c0ba4:
    if (ctx->pc == 0x4C0BA4u) {
        ctx->pc = 0x4C0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BA0u;
        // 0x4c0ba4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0BA8u;
        goto label_4c0ba8;
    }
    ctx->pc = 0x4C0BA0u;
    {
        const bool branch_taken_0x4c0ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BA0u;
        // 0x4c0ba4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0ba0) {
            ctx->pc = 0x4C0BDCu;
            goto label_4c0bdc;
        }
    }
    ctx->pc = 0x4C0BA8u;
label_4c0ba8:
    // 0x4c0ba8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4c0bac:
    // 0x4c0bac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0bb0:
    // 0x4c0bb0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4c0bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0bb4:
    // 0x4c0bb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4c0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4c0bb8:
    // 0x4c0bb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4c0bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0bbc:
    // 0x4c0bbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c0bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0bc0:
    // 0x4c0bc0: 0x0  nop
    ctx->pc = 0x4c0bc0u;
    // NOP
label_4c0bc4:
    // 0x4c0bc4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4c0bc8:
    if (ctx->pc == 0x4C0BC8u) {
        ctx->pc = 0x4C0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BC4u;
        // 0x4c0bc8: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0BCCu;
        goto label_4c0bcc;
    }
    ctx->pc = 0x4C0BC4u;
    {
        const bool branch_taken_0x4c0bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BC4u;
        // 0x4c0bc8: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0bc4) {
            ctx->pc = 0x4C0BDCu;
            goto label_4c0bdc;
        }
    }
    ctx->pc = 0x4C0BCCu;
label_4c0bcc:
    // 0x4c0bcc: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4c0bd0:
    // 0x4c0bd0: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_4c0bd4:
    // 0x4c0bd4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4c0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c0bd8:
    // 0x4c0bd8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4c0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4c0bdc:
    // 0x4c0bdc: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4c0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0be0:
    // 0x4c0be0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0be4:
    // 0x4c0be4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0be8:
    // 0x4c0be8: 0x481ffe3  bgez        $a0, . + 4 + (-0x1D << 2)
label_4c0bec:
    if (ctx->pc == 0x4C0BECu) {
        ctx->pc = 0x4C0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BE8u;
        // 0x4c0bec: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0BF0u;
        goto label_4c0bf0;
    }
    ctx->pc = 0x4C0BE8u;
    {
        const bool branch_taken_0x4c0be8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4C0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BE8u;
        // 0x4c0bec: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0be8) {
            ctx->pc = 0x4C0B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0b78;
        }
    }
    ctx->pc = 0x4C0BF0u;
label_4c0bf0:
    // 0x4c0bf0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4c0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0bf4:
    // 0x4c0bf4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4c0bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0bf8:
    // 0x4c0bf8: 0x26420048  addiu       $v0, $s2, 0x48
    ctx->pc = 0x4c0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_4c0bfc:
    // 0x4c0bfc: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x4c0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0c00:
    // 0x4c0c00: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4c0c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0c04:
    // 0x4c0c04: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4c0c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0c08:
    // 0x4c0c08: 0x0  nop
    ctx->pc = 0x4c0c08u;
    // NOP
label_4c0c0c:
    // 0x4c0c0c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4c0c10:
    if (ctx->pc == 0x4C0C10u) {
        ctx->pc = 0x4C0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C0Cu;
        // 0x4c0c10: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C14u;
        goto label_4c0c14;
    }
    ctx->pc = 0x4C0C0Cu;
    {
        const bool branch_taken_0x4c0c0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0c0c) {
            ctx->pc = 0x4C0C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0C0Cu;
            // 0x4c0c10: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0C20u;
            goto label_4c0c20;
        }
    }
    ctx->pc = 0x4C0C14u;
label_4c0c14:
    // 0x4c0c14: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c0c18:
    if (ctx->pc == 0x4C0C18u) {
        ctx->pc = 0x4C0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C14u;
        // 0x4c0c18: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C1Cu;
        goto label_4c0c1c;
    }
    ctx->pc = 0x4C0C14u;
    {
        const bool branch_taken_0x4c0c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C14u;
        // 0x4c0c18: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c14) {
            ctx->pc = 0x4C0C34u;
            goto label_4c0c34;
        }
    }
    ctx->pc = 0x4C0C1Cu;
label_4c0c1c:
    // 0x4c0c1c: 0x0  nop
    ctx->pc = 0x4c0c1cu;
    // NOP
label_4c0c20:
    // 0x4c0c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0c24:
    // 0x4c0c24: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4c0c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0c28:
    // 0x4c0c28: 0x0  nop
    ctx->pc = 0x4c0c28u;
    // NOP
label_4c0c2c:
    // 0x4c0c2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0c30:
    if (ctx->pc == 0x4C0C30u) {
        ctx->pc = 0x4C0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C2Cu;
        // 0x4c0c30: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C34u;
        goto label_4c0c34;
    }
    ctx->pc = 0x4C0C2Cu;
    {
        const bool branch_taken_0x4c0c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0c2c) {
            ctx->pc = 0x4C0C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0C2Cu;
            // 0x4c0c30: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0C34u;
            goto label_4c0c34;
        }
    }
    ctx->pc = 0x4C0C34u;
label_4c0c34:
    // 0x4c0c34: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x4c0c34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0c38:
    // 0x4c0c38: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x4c0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c0c3c:
    // 0x4c0c3c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x4c0c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0c40:
    // 0x4c0c40: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4c0c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0c44:
    // 0x4c0c44: 0x0  nop
    ctx->pc = 0x4c0c44u;
    // NOP
label_4c0c48:
    // 0x4c0c48: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4c0c4c:
    if (ctx->pc == 0x4C0C4Cu) {
        ctx->pc = 0x4C0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C48u;
        // 0x4c0c4c: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C50u;
        goto label_4c0c50;
    }
    ctx->pc = 0x4C0C48u;
    {
        const bool branch_taken_0x4c0c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0c48) {
            ctx->pc = 0x4C0C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0C48u;
            // 0x4c0c4c: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0C58u;
            goto label_4c0c58;
        }
    }
    ctx->pc = 0x4C0C50u;
label_4c0c50:
    // 0x4c0c50: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c0c54:
    if (ctx->pc == 0x4C0C54u) {
        ctx->pc = 0x4C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C50u;
        // 0x4c0c54: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C58u;
        goto label_4c0c58;
    }
    ctx->pc = 0x4C0C50u;
    {
        const bool branch_taken_0x4c0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C50u;
        // 0x4c0c54: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c50) {
            ctx->pc = 0x4C0C6Cu;
            goto label_4c0c6c;
        }
    }
    ctx->pc = 0x4C0C58u;
label_4c0c58:
    // 0x4c0c58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0c5c:
    // 0x4c0c5c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x4c0c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0c60:
    // 0x4c0c60: 0x0  nop
    ctx->pc = 0x4c0c60u;
    // NOP
label_4c0c64:
    // 0x4c0c64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0c68:
    if (ctx->pc == 0x4C0C68u) {
        ctx->pc = 0x4C0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C64u;
        // 0x4c0c68: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C6Cu;
        goto label_4c0c6c;
    }
    ctx->pc = 0x4C0C64u;
    {
        const bool branch_taken_0x4c0c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0c64) {
            ctx->pc = 0x4C0C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0C64u;
            // 0x4c0c68: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0C6Cu;
            goto label_4c0c6c;
        }
    }
    ctx->pc = 0x4C0C6Cu;
label_4c0c6c:
    // 0x4c0c6c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x4c0c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0c70:
    // 0x4c0c70: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0c74:
    // 0x4c0c74: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x4c0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0c78:
    // 0x4c0c78: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4c0c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0c7c:
    // 0x4c0c7c: 0x0  nop
    ctx->pc = 0x4c0c7cu;
    // NOP
label_4c0c80:
    // 0x4c0c80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4c0c84:
    if (ctx->pc == 0x4C0C84u) {
        ctx->pc = 0x4C0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C80u;
        // 0x4c0c84: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C88u;
        goto label_4c0c88;
    }
    ctx->pc = 0x4C0C80u;
    {
        const bool branch_taken_0x4c0c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C80u;
        // 0x4c0c84: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c80) {
            ctx->pc = 0x4C0C90u;
            goto label_4c0c90;
        }
    }
    ctx->pc = 0x4C0C88u;
label_4c0c88:
    // 0x4c0c88: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c0c8c:
    if (ctx->pc == 0x4C0C8Cu) {
        ctx->pc = 0x4C0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C88u;
        // 0x4c0c8c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0C90u;
        goto label_4c0c90;
    }
    ctx->pc = 0x4C0C88u;
    {
        const bool branch_taken_0x4c0c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C88u;
        // 0x4c0c8c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c88) {
            ctx->pc = 0x4C0CA8u;
            goto label_4c0ca8;
        }
    }
    ctx->pc = 0x4C0C90u;
label_4c0c90:
    // 0x4c0c90: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4c0c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0c94:
    // 0x4c0c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0c98:
    // 0x4c0c98: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4c0c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0c9c:
    // 0x4c0c9c: 0x0  nop
    ctx->pc = 0x4c0c9cu;
    // NOP
label_4c0ca0:
    // 0x4c0ca0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0ca4:
    if (ctx->pc == 0x4C0CA4u) {
        ctx->pc = 0x4C0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CA0u;
        // 0x4c0ca4: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CA8u;
        goto label_4c0ca8;
    }
    ctx->pc = 0x4C0CA0u;
    {
        const bool branch_taken_0x4c0ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0ca0) {
            ctx->pc = 0x4C0CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0CA0u;
            // 0x4c0ca4: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0CA8u;
            goto label_4c0ca8;
        }
    }
    ctx->pc = 0x4C0CA8u;
label_4c0ca8:
    // 0x4c0ca8: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x4c0ca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0cac:
    // 0x4c0cac: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4c0cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0cb0:
    // 0x4c0cb0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x4c0cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_4c0cb4:
    // 0x4c0cb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0cb8:
    // 0x4c0cb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c0cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0cbc:
    // 0x4c0cbc: 0x0  nop
    ctx->pc = 0x4c0cbcu;
    // NOP
label_4c0cc0:
    // 0x4c0cc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4c0cc4:
    if (ctx->pc == 0x4C0CC4u) {
        ctx->pc = 0x4C0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CC0u;
        // 0x4c0cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CC8u;
        goto label_4c0cc8;
    }
    ctx->pc = 0x4C0CC0u;
    {
        const bool branch_taken_0x4c0cc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CC0u;
        // 0x4c0cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0cc0) {
            ctx->pc = 0x4C0CCCu;
            goto label_4c0ccc;
        }
    }
    ctx->pc = 0x4C0CC8u;
label_4c0cc8:
    // 0x4c0cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c0cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0ccc:
    // 0x4c0ccc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_4c0cd0:
    if (ctx->pc == 0x4C0CD0u) {
        ctx->pc = 0x4C0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CCCu;
        // 0x4c0cd0: 0x26430038  addiu       $v1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CD4u;
        goto label_4c0cd4;
    }
    ctx->pc = 0x4C0CCCu;
    {
        const bool branch_taken_0x4c0ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CCCu;
        // 0x4c0cd0: 0x26430038  addiu       $v1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0ccc) {
            ctx->pc = 0x4C0DC0u;
            goto label_4c0dc0;
        }
    }
    ctx->pc = 0x4C0CD4u;
label_4c0cd4:
    // 0x4c0cd4: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x4c0cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_4c0cd8:
    // 0x4c0cd8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x4c0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_4c0cdc:
    // 0x4c0cdc: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_4c0ce0:
    if (ctx->pc == 0x4C0CE0u) {
        ctx->pc = 0x4C0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CDCu;
        // 0x4c0ce0: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CE4u;
        goto label_4c0ce4;
    }
    ctx->pc = 0x4C0CDCu;
    {
        const bool branch_taken_0x4c0cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CDCu;
        // 0x4c0ce0: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0cdc) {
            ctx->pc = 0x4C0DC0u;
            goto label_4c0dc0;
        }
    }
    ctx->pc = 0x4C0CE4u;
label_4c0ce4:
    // 0x4c0ce4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4c0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4c0ce8:
    // 0x4c0ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0cec:
    // 0x4c0cec: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x4c0cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4c0cf0:
    // 0x4c0cf0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_4c0cf4:
    if (ctx->pc == 0x4C0CF4u) {
        ctx->pc = 0x4C0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CF0u;
        // 0x4c0cf4: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CF8u;
        goto label_4c0cf8;
    }
    ctx->pc = 0x4C0CF0u;
    {
        const bool branch_taken_0x4c0cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CF0u;
        // 0x4c0cf4: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0cf0) {
            ctx->pc = 0x4C0DB0u;
            goto label_4c0db0;
        }
    }
    ctx->pc = 0x4C0CF8u;
label_4c0cf8:
    // 0x4c0cf8: 0x1217002d  beq         $s0, $s7, . + 4 + (0x2D << 2)
label_4c0cfc:
    if (ctx->pc == 0x4C0CFCu) {
        ctx->pc = 0x4C0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CF8u;
        // 0x4c0cfc: 0x8f828840  lw          $v0, -0x77C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0D00u;
        goto label_4c0d00;
    }
    ctx->pc = 0x4C0CF8u;
    {
        const bool branch_taken_0x4c0cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x4C0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CF8u;
        // 0x4c0cfc: 0x8f828840  lw          $v0, -0x77C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0cf8) {
            ctx->pc = 0x4C0DB0u;
            goto label_4c0db0;
        }
    }
    ctx->pc = 0x4C0D00u;
label_4c0d00:
    // 0x4c0d00: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x4c0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c0d04:
    // 0x4c0d04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0d08:
    // 0x4c0d08: 0x1073002a  beq         $v1, $s3, . + 4 + (0x2A << 2)
label_4c0d0c:
    if (ctx->pc == 0x4C0D0Cu) {
        ctx->pc = 0x4C0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D08u;
        // 0x4c0d0c: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0D10u;
        goto label_4c0d10;
    }
    ctx->pc = 0x4C0D08u;
    {
        const bool branch_taken_0x4c0d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x4C0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D08u;
        // 0x4c0d0c: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0d08) {
            ctx->pc = 0x4C0DB4u;
            goto label_4c0db4;
        }
    }
    ctx->pc = 0x4C0D10u;
label_4c0d10:
    // 0x4c0d10: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x4c0d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_4c0d14:
    // 0x4c0d14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c0d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c0d18:
    // 0x4c0d18: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4c0d1c:
    if (ctx->pc == 0x4C0D1Cu) {
        ctx->pc = 0x4C0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D18u;
        // 0x4c0d1c: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0D20u;
        goto label_4c0d20;
    }
    ctx->pc = 0x4C0D18u;
    {
        const bool branch_taken_0x4c0d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D18u;
        // 0x4c0d1c: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0d18) {
            ctx->pc = 0x4C0DB8u;
            goto label_4c0db8;
        }
    }
    ctx->pc = 0x4C0D20u;
label_4c0d20:
    // 0x4c0d20: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x4c0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_4c0d24:
    // 0x4c0d24: 0xc11a45e  jal         func_469178
label_4c0d28:
    if (ctx->pc == 0x4C0D28u) {
        ctx->pc = 0x4C0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D24u;
        // 0x4c0d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0D2Cu;
        goto label_4c0d2c;
    }
    ctx->pc = 0x4C0D24u;
    SET_GPR_U32(ctx, 31, 0x4C0D2Cu);
    ctx->pc = 0x4C0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0D24u;
    // 0x4c0d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4C0D24u, 0x4C0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0D2Cu;
label_4c0d2c:
    // 0x4c0d2c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x4c0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0d30:
    // 0x4c0d30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4c0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0d34:
    // 0x4c0d34: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x4c0d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0d38:
    // 0x4c0d38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4c0d38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4c0d3c:
    // 0x4c0d3c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x4c0d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c0d40:
    // 0x4c0d40: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x4c0d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_4c0d44:
    // 0x4c0d44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4c0d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0d48:
    // 0x4c0d48: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4c0d48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4c0d4c:
    // 0x4c0d4c: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x4c0d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_4c0d50:
    // 0x4c0d50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4c0d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0d54:
    // 0x4c0d54: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4c0d54u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4c0d58:
    // 0x4c0d58: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x4c0d58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4c0d5c:
    // 0x4c0d5c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4c0d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_4c0d60:
    // 0x4c0d60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4c0d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_4c0d64:
    // 0x4c0d64: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x4c0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c0d68:
    // 0x4c0d68: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4c0d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0d6c:
    // 0x4c0d6c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x4c0d6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_4c0d70:
    // 0x4c0d70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4c0d70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4c0d74:
    // 0x4c0d74: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4c0d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_4c0d78:
    // 0x4c0d78: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4c0d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_4c0d7c:
    // 0x4c0d7c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0d80:
    // 0x4c0d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c0d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0d84:
    // 0x4c0d84: 0x0  nop
    ctx->pc = 0x4c0d84u;
    // NOP
label_4c0d88:
    // 0x4c0d88: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_4c0d8c:
    if (ctx->pc == 0x4C0D8Cu) {
        ctx->pc = 0x4C0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D88u;
        // 0x4c0d8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0D90u;
        goto label_4c0d90;
    }
    ctx->pc = 0x4C0D88u;
    {
        const bool branch_taken_0x4c0d88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0D88u;
        // 0x4c0d8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0d88) {
            ctx->pc = 0x4C0DB0u;
            goto label_4c0db0;
        }
    }
    ctx->pc = 0x4C0D90u;
label_4c0d90:
    // 0x4c0d90: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x4c0d90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_4c0d94:
    // 0x4c0d94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c0d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0d98:
    // 0x4c0d98: 0x460c0304  c1          0xC0304
    ctx->pc = 0x4c0d98u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_4c0d9c:
    // 0x4c0d9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c0d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c0da0:
    // 0x4c0da0: 0x2c0f809  jalr        $s6
label_4c0da4:
    if (ctx->pc == 0x4C0DA4u) {
        ctx->pc = 0x4C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DA0u;
        // 0x4c0da4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0DA8u;
        goto label_4c0da8;
    }
    ctx->pc = 0x4C0DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x4C0DA8u);
        ctx->pc = 0x4C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DA0u;
        // 0x4c0da4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0DA0u, 0x4C0DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C0DA8u;
label_4c0da8:
    // 0x4c0da8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4c0dac:
    if (ctx->pc == 0x4C0DACu) {
        ctx->pc = 0x4C0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DA8u;
        // 0x4c0dac: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0DB0u;
        goto label_4c0db0;
    }
    ctx->pc = 0x4C0DA8u;
    {
        const bool branch_taken_0x4c0da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DA8u;
        // 0x4c0dac: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0da8) {
            ctx->pc = 0x4C0DD4u;
            goto label_4c0dd4;
        }
    }
    ctx->pc = 0x4C0DB0u;
label_4c0db0:
    // 0x4c0db0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4c0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4c0db4:
    // 0x4c0db4: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x4c0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_4c0db8:
    // 0x4c0db8: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
label_4c0dbc:
    if (ctx->pc == 0x4C0DBCu) {
        ctx->pc = 0x4C0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DB8u;
        // 0x4c0dbc: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0DC0u;
        goto label_4c0dc0;
    }
    ctx->pc = 0x4C0DB8u;
    {
        const bool branch_taken_0x4c0db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DB8u;
        // 0x4c0dbc: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0db8) {
            ctx->pc = 0x4C0CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0ce8;
        }
    }
    ctx->pc = 0x4C0DC0u;
label_4c0dc0:
    // 0x4c0dc0: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0dc4:
    // 0x4c0dc4: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x4c0dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0dc8:
    // 0x4c0dc8: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
label_4c0dcc:
    if (ctx->pc == 0x4C0DCCu) {
        ctx->pc = 0x4C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DC8u;
        // 0x4c0dcc: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0DD0u;
        goto label_4c0dd0;
    }
    ctx->pc = 0x4C0DC8u;
    {
        const bool branch_taken_0x4c0dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DC8u;
        // 0x4c0dcc: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0dc8) {
            ctx->pc = 0x4C0B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0b58;
        }
    }
    ctx->pc = 0x4C0DD0u;
label_4c0dd0:
    // 0x4c0dd0: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x4c0dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_4c0dd4:
    // 0x4c0dd4: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x4c0dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_4c0dd8:
    // 0x4c0dd8: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x4c0dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_4c0ddc:
    // 0x4c0ddc: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x4c0ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_4c0de0:
    // 0x4c0de0: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x4c0de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_4c0de4:
    // 0x4c0de4: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x4c0de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4c0de8:
    // 0x4c0de8: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x4c0de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4c0dec:
    // 0x4c0dec: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x4c0decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4c0df0:
    // 0x4c0df0: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x4c0df0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4c0df4:
    // 0x4c0df4: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x4c0df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_4c0df8:
    // 0x4c0df8: 0x3e00008  jr          $ra
label_4c0dfc:
    if (ctx->pc == 0x4C0DFCu) {
        ctx->pc = 0x4C0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DF8u;
        // 0x4c0dfc: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0E00u;
        goto label_4c0e00;
    }
    ctx->pc = 0x4C0DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0DF8u;
        // 0x4c0dfc: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C0E00u;
label_4c0e00:
    // 0x4c0e00: 0x27bd0650  addiu       $sp, $sp, 0x650
    ctx->pc = 0x4c0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_4c0e04:
    // 0x4c0e04: 0x0  nop
    ctx->pc = 0x4c0e04u;
    // NOP
label_4c0e08:
    // 0x4c0e08: 0x27bd03d0  addiu       $sp, $sp, 0x3D0
    ctx->pc = 0x4c0e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4c0e0c:
    // 0x4c0e0c: 0x0  nop
    ctx->pc = 0x4c0e0cu;
    // NOP
label_4c0e10:
    // 0x4c0e10: 0x27bd0430  addiu       $sp, $sp, 0x430
    ctx->pc = 0x4c0e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_4c0e14:
    // 0x4c0e14: 0x0  nop
    ctx->pc = 0x4c0e14u;
    // NOP
label_4c0e18:
    // 0x4c0e18: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x4c0e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4c0e1c:
    // 0x4c0e1c: 0x0  nop
    ctx->pc = 0x4c0e1cu;
    // NOP
label_4c0e20:
    // 0x4c0e20: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x4c0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4c0e24:
    // 0x4c0e24: 0x0  nop
    ctx->pc = 0x4c0e24u;
    // NOP
label_4c0e28:
    // 0x4c0e28: 0x27bd0310  addiu       $sp, $sp, 0x310
    ctx->pc = 0x4c0e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_4c0e2c:
    // 0x4c0e2c: 0x0  nop
    ctx->pc = 0x4c0e2cu;
    // NOP
label_4c0e30:
    // 0x4c0e30: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4c0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4c0e34:
    // 0x4c0e34: 0x0  nop
    ctx->pc = 0x4c0e34u;
    // NOP
label_4c0e38:
    // 0x4c0e38: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x4c0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4c0e3c:
    // 0x4c0e3c: 0x0  nop
    ctx->pc = 0x4c0e3cu;
    // NOP
label_4c0e40:
    // 0x4c0e40: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x4c0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_4c0e44:
    // 0x4c0e44: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x4c0e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_4c0e48:
    // 0x4c0e48: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x4c0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_4c0e4c:
    // 0x4c0e4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c0e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c0e50:
    // 0x4c0e50: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x4c0e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_4c0e54:
    // 0x4c0e54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c0e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0e58:
    // 0x4c0e58: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x4c0e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_4c0e5c:
    // 0x4c0e5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4c0e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c0e60:
    // 0x4c0e60: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x4c0e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_4c0e64:
    // 0x4c0e64: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x4c0e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_4c0e68:
    // 0x4c0e68: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x4c0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_4c0e6c:
    // 0x4c0e6c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4c0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4c0e70:
    // 0x4c0e70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c0e74:
    // 0x4c0e74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x4c0e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4c0e78:
    // 0x4c0e78: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_4c0e7c:
    if (ctx->pc == 0x4C0E7Cu) {
        ctx->pc = 0x4C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0E78u;
        // 0x4c0e7c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0E80u;
        goto label_4c0e80;
    }
    ctx->pc = 0x4C0E78u;
    {
        const bool branch_taken_0x4c0e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0E78u;
        // 0x4c0e7c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0e78) {
            ctx->pc = 0x4C118Cu;
            goto label_4c118c;
        }
    }
    ctx->pc = 0x4C0E80u;
label_4c0e80:
    // 0x4c0e80: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4c0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4c0e84:
    // 0x4c0e84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c0e88:
    // 0x4c0e88: 0x24421b70  addiu       $v0, $v0, 0x1B70
    ctx->pc = 0x4c0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7024));
label_4c0e8c:
    // 0x4c0e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c0e90:
    // 0x4c0e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0e94:
    // 0x4c0e94: 0x800008  jr          $a0
label_4c0e98:
    if (ctx->pc == 0x4C0E98u) {
        ctx->pc = 0x4C0E9Cu;
        goto label_4c0e9c;
    }
    ctx->pc = 0x4C0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4C0E9Cu: goto label_4c0e9c;
            case 0x4C0FF0u: goto label_4c0ff0;
            case 0x4C100Cu: goto label_4c100c;
            case 0x4C1024u: goto label_4c1024;
            case 0x4C1148u: goto label_4c1148;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0E94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C0E9Cu;
label_4c0e9c:
    // 0x4c0e9c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4c0e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c0ea0:
    // 0x4c0ea0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4c0ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c0ea4:
    // 0x4c0ea4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4c0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4c0ea8:
    // 0x4c0ea8: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x4c0ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0eac:
    // 0x4c0eac: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x4c0eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0eb0:
    // 0x4c0eb0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4c0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_4c0eb4:
    // 0x4c0eb4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x4c0eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4c0eb8:
    // 0x4c0eb8: 0x6a290007  ldl         $t1, 0x7($s1)
    ctx->pc = 0x4c0eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4c0ebc:
    // 0x4c0ebc: 0x6e290000  ldr         $t1, 0x0($s1)
    ctx->pc = 0x4c0ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4c0ec0:
    // 0x4c0ec0: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x4c0ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4c0ec4:
    // 0x4c0ec4: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x4c0ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0ec8:
    // 0x4c0ec8: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x4c0ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0ecc:
    // 0x4c0ecc: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x4c0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_4c0ed0:
    // 0x4c0ed0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x4c0ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c0ed4:
    // 0x4c0ed4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x4c0ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c0ed8:
    // 0x4c0ed8: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x4c0ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c0edc:
    // 0x4c0edc: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x4c0edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c0ee0:
    // 0x4c0ee0: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x4c0ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4c0ee4:
    // 0x4c0ee4: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x4c0ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4c0ee8:
    // 0x4c0ee8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x4c0ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0eec:
    // 0x4c0eec: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x4c0eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0ef0:
    // 0x4c0ef0: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x4c0ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0ef4:
    // 0x4c0ef4: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x4c0ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0ef8:
    // 0x4c0ef8: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x4c0ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0efc:
    // 0x4c0efc: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x4c0efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0f00:
    // 0x4c0f00: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4c0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4c0f04:
    // 0x4c0f04: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x4c0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4c0f08:
    // 0x4c0f08: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4c0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_4c0f0c:
    // 0x4c0f0c: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x4c0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_4c0f10:
    // 0x4c0f10: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x4c0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_4c0f14:
    // 0x4c0f14: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0f18:
    // 0x4c0f18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4c0f18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0f1c:
    // 0x4c0f1c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c0f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0f20:
    // 0x4c0f20: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_4c0f24:
    if (ctx->pc == 0x4C0F24u) {
        ctx->pc = 0x4C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F20u;
        // 0x4c0f24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0F28u;
        goto label_4c0f28;
    }
    ctx->pc = 0x4C0F20u;
    {
        const bool branch_taken_0x4c0f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F20u;
        // 0x4c0f24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0f20) {
            ctx->pc = 0x4C1190u;
            goto label_4c1190;
        }
    }
    ctx->pc = 0x4C0F28u;
label_4c0f28:
    // 0x4c0f28: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x4c0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4c0f2c:
    // 0x4c0f2c: 0x0  nop
    ctx->pc = 0x4c0f2cu;
    // NOP
label_4c0f30:
    // 0x4c0f30: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x4c0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_4c0f34:
    // 0x4c0f34: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x4c0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4c0f38:
    // 0x4c0f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0f3c:
    // 0x4c0f3c: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
label_4c0f40:
    if (ctx->pc == 0x4C0F40u) {
        ctx->pc = 0x4C0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F3Cu;
        // 0x4c0f40: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0F44u;
        goto label_4c0f44;
    }
    ctx->pc = 0x4C0F3Cu;
    {
        const bool branch_taken_0x4c0f3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F3Cu;
        // 0x4c0f40: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0f3c) {
            ctx->pc = 0x4C0FC4u;
            goto label_4c0fc4;
        }
    }
    ctx->pc = 0x4C0F44u;
label_4c0f44:
    // 0x4c0f44: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0f48:
    // 0x4c0f48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0f4c:
    // 0x4c0f4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0f50:
    // 0x4c0f50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4c0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c0f54:
    // 0x4c0f54: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4c0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0f58:
    // 0x4c0f58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4c0f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0f5c:
    // 0x4c0f5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4c0f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0f60:
    // 0x4c0f60: 0x0  nop
    ctx->pc = 0x4c0f60u;
    // NOP
label_4c0f64:
    // 0x4c0f64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4c0f68:
    if (ctx->pc == 0x4C0F68u) {
        ctx->pc = 0x4C0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F64u;
        // 0x4c0f68: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0F6Cu;
        goto label_4c0f6c;
    }
    ctx->pc = 0x4C0F64u;
    {
        const bool branch_taken_0x4c0f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0f64) {
            ctx->pc = 0x4C0F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0F64u;
            // 0x4c0f68: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0F78u;
            goto label_4c0f78;
        }
    }
    ctx->pc = 0x4C0F6Cu;
label_4c0f6c:
    // 0x4c0f6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4c0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c0f70:
    // 0x4c0f70: 0x1000000e  b           . + 4 + (0xE << 2)
label_4c0f74:
    if (ctx->pc == 0x4C0F74u) {
        ctx->pc = 0x4C0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F70u;
        // 0x4c0f74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0F78u;
        goto label_4c0f78;
    }
    ctx->pc = 0x4C0F70u;
    {
        const bool branch_taken_0x4c0f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F70u;
        // 0x4c0f74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0f70) {
            ctx->pc = 0x4C0FACu;
            goto label_4c0fac;
        }
    }
    ctx->pc = 0x4C0F78u;
label_4c0f78:
    // 0x4c0f78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4c0f7c:
    // 0x4c0f7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0f80:
    // 0x4c0f80: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4c0f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0f84:
    // 0x4c0f84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4c0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c0f88:
    // 0x4c0f88: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x4c0f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0f8c:
    // 0x4c0f8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c0f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0f90:
    // 0x4c0f90: 0x0  nop
    ctx->pc = 0x4c0f90u;
    // NOP
label_4c0f94:
    // 0x4c0f94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4c0f98:
    if (ctx->pc == 0x4C0F98u) {
        ctx->pc = 0x4C0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F94u;
        // 0x4c0f98: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0F9Cu;
        goto label_4c0f9c;
    }
    ctx->pc = 0x4C0F94u;
    {
        const bool branch_taken_0x4c0f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0F94u;
        // 0x4c0f98: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0f94) {
            ctx->pc = 0x4C0FACu;
            goto label_4c0fac;
        }
    }
    ctx->pc = 0x4C0F9Cu;
label_4c0f9c:
    // 0x4c0f9c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4c0fa0:
    // 0x4c0fa0: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_4c0fa4:
    // 0x4c0fa4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4c0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c0fa8:
    // 0x4c0fa8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4c0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4c0fac:
    // 0x4c0fac: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4c0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0fb0:
    // 0x4c0fb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0fb4:
    // 0x4c0fb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0fb8:
    // 0x4c0fb8: 0x481ffe3  bgez        $a0, . + 4 + (-0x1D << 2)
label_4c0fbc:
    if (ctx->pc == 0x4C0FBCu) {
        ctx->pc = 0x4C0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FB8u;
        // 0x4c0fbc: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0FC0u;
        goto label_4c0fc0;
    }
    ctx->pc = 0x4C0FB8u;
    {
        const bool branch_taken_0x4c0fb8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4C0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FB8u;
        // 0x4c0fbc: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0fb8) {
            ctx->pc = 0x4C0F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0f48;
        }
    }
    ctx->pc = 0x4C0FC0u;
label_4c0fc0:
    // 0x4c0fc0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4c0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0fc4:
    // 0x4c0fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c0fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c0fc8:
    // 0x4c0fc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4c0fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0fcc:
    // 0x4c0fcc: 0x260f809  jalr        $s3
label_4c0fd0:
    if (ctx->pc == 0x4C0FD0u) {
        ctx->pc = 0x4C0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FCCu;
        // 0x4c0fd0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0FD4u;
        goto label_4c0fd4;
    }
    ctx->pc = 0x4C0FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x4C0FD4u);
        ctx->pc = 0x4C0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FCCu;
        // 0x4c0fd0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0FCCu, 0x4C0FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C0FD4u;
label_4c0fd4:
    // 0x4c0fd4: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_4c0fd8:
    if (ctx->pc == 0x4C0FD8u) {
        ctx->pc = 0x4C0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FD4u;
        // 0x4c0fd8: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0FDCu;
        goto label_4c0fdc;
    }
    ctx->pc = 0x4C0FD4u;
    {
        const bool branch_taken_0x4c0fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FD4u;
        // 0x4c0fd8: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0fd4) {
            ctx->pc = 0x4C118Cu;
            goto label_4c118c;
        }
    }
    ctx->pc = 0x4C0FDCu;
label_4c0fdc:
    // 0x4c0fdc: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x4c0fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0fe0:
    // 0x4c0fe0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_4c0fe4:
    if (ctx->pc == 0x4C0FE4u) {
        ctx->pc = 0x4C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FE0u;
        // 0x4c0fe4: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0FE8u;
        goto label_4c0fe8;
    }
    ctx->pc = 0x4C0FE0u;
    {
        const bool branch_taken_0x4c0fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FE0u;
        // 0x4c0fe4: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0fe0) {
            ctx->pc = 0x4C0F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0f30;
        }
    }
    ctx->pc = 0x4C0FE8u;
label_4c0fe8:
    // 0x4c0fe8: 0x10000069  b           . + 4 + (0x69 << 2)
label_4c0fec:
    if (ctx->pc == 0x4C0FECu) {
        ctx->pc = 0x4C0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FE8u;
        // 0x4c0fec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0FF0u;
        goto label_4c0ff0;
    }
    ctx->pc = 0x4C0FE8u;
    {
        const bool branch_taken_0x4c0fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FE8u;
        // 0x4c0fec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0fe8) {
            ctx->pc = 0x4C1190u;
            goto label_4c1190;
        }
    }
    ctx->pc = 0x4C0FF0u;
label_4c0ff0:
    // 0x4c0ff0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c0ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c0ff4:
    // 0x4c0ff4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c0ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c0ff8:
    // 0x4c0ff8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4c0ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c0ffc:
    // 0x4c0ffc: 0xc12fe50  jal         func_4BF940
label_4c1000:
    if (ctx->pc == 0x4C1000u) {
        ctx->pc = 0x4C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FFCu;
        // 0x4c1000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1004u;
        goto label_4c1004;
    }
    ctx->pc = 0x4C0FFCu;
    SET_GPR_U32(ctx, 31, 0x4C1004u);
    ctx->pc = 0x4C1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0FFCu;
    // 0x4c1000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BF940u, 0x4C0FFCu, 0x4C1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1004u;
label_4c1004:
    // 0x4c1004: 0x10000062  b           . + 4 + (0x62 << 2)
label_4c1008:
    if (ctx->pc == 0x4C1008u) {
        ctx->pc = 0x4C1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1004u;
        // 0x4c1008: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C100Cu;
        goto label_4c100c;
    }
    ctx->pc = 0x4C1004u;
    {
        const bool branch_taken_0x4c1004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1004u;
        // 0x4c1008: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1004) {
            ctx->pc = 0x4C1190u;
            goto label_4c1190;
        }
    }
    ctx->pc = 0x4C100Cu;
label_4c100c:
    // 0x4c100c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c100cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1010:
    // 0x4c1010: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c1010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c1014:
    // 0x4c1014: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c1014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c1018:
    // 0x4c1018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c1018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c101c:
    // 0x4c101c: 0x10000059  b           . + 4 + (0x59 << 2)
label_4c1020:
    if (ctx->pc == 0x4C1020u) {
        ctx->pc = 0x4C1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C101Cu;
        // 0x4c1020: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1024u;
        goto label_4c1024;
    }
    ctx->pc = 0x4C101Cu;
    {
        const bool branch_taken_0x4c101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C101Cu;
        // 0x4c1020: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c101c) {
            ctx->pc = 0x4C1184u;
            goto label_4c1184;
        }
    }
    ctx->pc = 0x4C1024u;
label_4c1024:
    // 0x4c1024: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x4c1024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4c1028:
    // 0x4c1028: 0x6a2a0007  ldl         $t2, 0x7($s1)
    ctx->pc = 0x4c1028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c102c:
    // 0x4c102c: 0x6e2a0000  ldr         $t2, 0x0($s1)
    ctx->pc = 0x4c102cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c1030:
    // 0x4c1030: 0x6a2b000f  ldl         $t3, 0xF($s1)
    ctx->pc = 0x4c1030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4c1034:
    // 0x4c1034: 0x6e2b0008  ldr         $t3, 0x8($s1)
    ctx->pc = 0x4c1034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4c1038:
    // 0x4c1038: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x4c1038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c103c:
    // 0x4c103c: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x4c103cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c1040:
    // 0x4c1040: 0xb3aa0027  sdl         $t2, 0x27($sp)
    ctx->pc = 0x4c1040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1044:
    // 0x4c1044: 0xb7aa0020  sdr         $t2, 0x20($sp)
    ctx->pc = 0x4c1044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1048:
    // 0x4c1048: 0xb3ab002f  sdl         $t3, 0x2F($sp)
    ctx->pc = 0x4c1048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c104c:
    // 0x4c104c: 0xb7ab0028  sdr         $t3, 0x28($sp)
    ctx->pc = 0x4c104cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1050:
    // 0x4c1050: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x4c1050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1054:
    // 0x4c1054: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x4c1054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1058:
    // 0x4c1058: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4c1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4c105c:
    // 0x4c105c: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x4c105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4c1060:
    // 0x4c1060: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4c1060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_4c1064:
    // 0x4c1064: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x4c1064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_4c1068:
    // 0x4c1068: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x4c1068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_4c106c:
    // 0x4c106c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c1070:
    // 0x4c1070: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4c1070u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1074:
    // 0x4c1074: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c1074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c1078:
    // 0x4c1078: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_4c107c:
    if (ctx->pc == 0x4C107Cu) {
        ctx->pc = 0x4C107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1078u;
        // 0x4c107c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1080u;
        goto label_4c1080;
    }
    ctx->pc = 0x4C1078u;
    {
        const bool branch_taken_0x4c1078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1078u;
        // 0x4c107c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1078) {
            ctx->pc = 0x4C1190u;
            goto label_4c1190;
        }
    }
    ctx->pc = 0x4C1080u;
label_4c1080:
    // 0x4c1080: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x4c1080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4c1084:
    // 0x4c1084: 0x0  nop
    ctx->pc = 0x4c1084u;
    // NOP
label_4c1088:
    // 0x4c1088: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x4c1088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_4c108c:
    // 0x4c108c: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x4c108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4c1090:
    // 0x4c1090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1094:
    // 0x4c1094: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
label_4c1098:
    if (ctx->pc == 0x4C1098u) {
        ctx->pc = 0x4C1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1094u;
        // 0x4c1098: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C109Cu;
        goto label_4c109c;
    }
    ctx->pc = 0x4C1094u;
    {
        const bool branch_taken_0x4c1094 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1094u;
        // 0x4c1098: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1094) {
            ctx->pc = 0x4C111Cu;
            goto label_4c111c;
        }
    }
    ctx->pc = 0x4C109Cu;
label_4c109c:
    // 0x4c109c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c10a0:
    // 0x4c10a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c10a4:
    // 0x4c10a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c10a8:
    // 0x4c10a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4c10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c10ac:
    // 0x4c10ac: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4c10acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c10b0:
    // 0x4c10b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4c10b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c10b4:
    // 0x4c10b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4c10b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c10b8:
    // 0x4c10b8: 0x0  nop
    ctx->pc = 0x4c10b8u;
    // NOP
label_4c10bc:
    // 0x4c10bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4c10c0:
    if (ctx->pc == 0x4C10C0u) {
        ctx->pc = 0x4C10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C10BCu;
        // 0x4c10c0: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C10C4u;
        goto label_4c10c4;
    }
    ctx->pc = 0x4C10BCu;
    {
        const bool branch_taken_0x4c10bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c10bc) {
            ctx->pc = 0x4C10C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C10BCu;
            // 0x4c10c0: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C10D0u;
            goto label_4c10d0;
        }
    }
    ctx->pc = 0x4C10C4u;
label_4c10c4:
    // 0x4c10c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4c10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c10c8:
    // 0x4c10c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_4c10cc:
    if (ctx->pc == 0x4C10CCu) {
        ctx->pc = 0x4C10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C10C8u;
        // 0x4c10cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C10D0u;
        goto label_4c10d0;
    }
    ctx->pc = 0x4C10C8u;
    {
        const bool branch_taken_0x4c10c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C10C8u;
        // 0x4c10cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c10c8) {
            ctx->pc = 0x4C1104u;
            goto label_4c1104;
        }
    }
    ctx->pc = 0x4C10D0u;
label_4c10d0:
    // 0x4c10d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4c10d4:
    // 0x4c10d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c10d8:
    // 0x4c10d8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4c10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c10dc:
    // 0x4c10dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4c10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c10e0:
    // 0x4c10e0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x4c10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c10e4:
    // 0x4c10e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c10e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c10e8:
    // 0x4c10e8: 0x0  nop
    ctx->pc = 0x4c10e8u;
    // NOP
label_4c10ec:
    // 0x4c10ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4c10f0:
    if (ctx->pc == 0x4C10F0u) {
        ctx->pc = 0x4C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C10ECu;
        // 0x4c10f0: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C10F4u;
        goto label_4c10f4;
    }
    ctx->pc = 0x4C10ECu;
    {
        const bool branch_taken_0x4c10ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C10ECu;
        // 0x4c10f0: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c10ec) {
            ctx->pc = 0x4C1104u;
            goto label_4c1104;
        }
    }
    ctx->pc = 0x4C10F4u;
label_4c10f4:
    // 0x4c10f4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4c10f8:
    // 0x4c10f8: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x4c10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_4c10fc:
    // 0x4c10fc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4c10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c1100:
    // 0x4c1100: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4c1100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4c1104:
    // 0x4c1104: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c1108:
    // 0x4c1108: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c1108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c110c:
    // 0x4c110c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1110:
    // 0x4c1110: 0x481ffe3  bgez        $a0, . + 4 + (-0x1D << 2)
label_4c1114:
    if (ctx->pc == 0x4C1114u) {
        ctx->pc = 0x4C1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1110u;
        // 0x4c1114: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1118u;
        goto label_4c1118;
    }
    ctx->pc = 0x4C1110u;
    {
        const bool branch_taken_0x4c1110 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4C1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1110u;
        // 0x4c1114: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1110) {
            ctx->pc = 0x4C10A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c10a0;
        }
    }
    ctx->pc = 0x4C1118u;
label_4c1118:
    // 0x4c1118: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4c1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c111c:
    // 0x4c111c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1120:
    // 0x4c1120: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4c1120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c1124:
    // 0x4c1124: 0x260f809  jalr        $s3
label_4c1128:
    if (ctx->pc == 0x4C1128u) {
        ctx->pc = 0x4C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1124u;
        // 0x4c1128: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C112Cu;
        goto label_4c112c;
    }
    ctx->pc = 0x4C1124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x4C112Cu);
        ctx->pc = 0x4C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1124u;
        // 0x4c1128: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1124u, 0x4C112Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C112Cu;
label_4c112c:
    // 0x4c112c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4c1130:
    if (ctx->pc == 0x4C1130u) {
        ctx->pc = 0x4C1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C112Cu;
        // 0x4c1130: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1134u;
        goto label_4c1134;
    }
    ctx->pc = 0x4C112Cu;
    {
        const bool branch_taken_0x4c112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C112Cu;
        // 0x4c1130: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c112c) {
            ctx->pc = 0x4C118Cu;
            goto label_4c118c;
        }
    }
    ctx->pc = 0x4C1134u;
label_4c1134:
    // 0x4c1134: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x4c1134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c1138:
    // 0x4c1138: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_4c113c:
    if (ctx->pc == 0x4C113Cu) {
        ctx->pc = 0x4C113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1138u;
        // 0x4c113c: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1140u;
        goto label_4c1140;
    }
    ctx->pc = 0x4C1138u;
    {
        const bool branch_taken_0x4c1138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1138u;
        // 0x4c113c: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1138) {
            ctx->pc = 0x4C1088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1088;
        }
    }
    ctx->pc = 0x4C1140u;
label_4c1140:
    // 0x4c1140: 0x10000013  b           . + 4 + (0x13 << 2)
label_4c1144:
    if (ctx->pc == 0x4C1144u) {
        ctx->pc = 0x4C1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1140u;
        // 0x4c1144: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1148u;
        goto label_4c1148;
    }
    ctx->pc = 0x4C1140u;
    {
        const bool branch_taken_0x4c1140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1140u;
        // 0x4c1144: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1140) {
            ctx->pc = 0x4C1190u;
            goto label_4c1190;
        }
    }
    ctx->pc = 0x4C1148u;
label_4c1148:
    // 0x4c1148: 0xc11a45e  jal         func_469178
label_4c114c:
    if (ctx->pc == 0x4C114Cu) {
        ctx->pc = 0x4C114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1148u;
        // 0x4c114c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1150u;
        goto label_4c1150;
    }
    ctx->pc = 0x4C1148u;
    SET_GPR_U32(ctx, 31, 0x4C1150u);
    ctx->pc = 0x4C114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1148u;
    // 0x4c114c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4C1148u, 0x4C1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1150u;
label_4c1150:
    // 0x4c1150: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x4c1150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4c1154:
    // 0x4c1154: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x4c1154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4c1158:
    // 0x4c1158: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x4c1158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c115c:
    // 0x4c115c: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x4c115cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c1160:
    // 0x4c1160: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x4c1160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1164:
    // 0x4c1164: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x4c1164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1168:
    // 0x4c1168: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x4c1168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c116c:
    // 0x4c116c: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x4c116cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1170:
    // 0x4c1170: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4c1170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1174:
    // 0x4c1174: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c1174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c1178:
    // 0x4c1178: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c1178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c117c:
    // 0x4c117c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c1180:
    // 0x4c1180: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4c1180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4c1184:
    // 0x4c1184: 0xc12ff78  jal         func_4BFDE0
label_4c1188:
    if (ctx->pc == 0x4C1188u) {
        ctx->pc = 0x4C118Cu;
        goto label_4c118c;
    }
    ctx->pc = 0x4C1184u;
    SET_GPR_U32(ctx, 31, 0x4C118Cu);
    ctx->pc = 0x4BFDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BFDE0u, 0x4C1184u, 0x4C118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C118Cu;
label_4c118c:
    // 0x4c118c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4c118cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c1190:
    // 0x4c1190: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x4c1190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4c1194:
    // 0x4c1194: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x4c1194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4c1198:
    // 0x4c1198: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x4c1198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4c119c:
    // 0x4c119c: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x4c119cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4c11a0:
    // 0x4c11a0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x4c11a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4c11a4:
    // 0x4c11a4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x4c11a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_4c11a8:
    // 0x4c11a8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x4c11a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_4c11ac:
    // 0x4c11ac: 0x3e00008  jr          $ra
label_4c11b0:
    if (ctx->pc == 0x4C11B0u) {
        ctx->pc = 0x4C11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C11ACu;
        // 0x4c11b0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C11B4u;
        goto label_4c11b4;
    }
    ctx->pc = 0x4C11ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C11ACu;
        // 0x4c11b0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C11ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C11B4u;
label_4c11b4:
    // 0x4c11b4: 0x0  nop
    ctx->pc = 0x4c11b4u;
    // NOP
label_4c11b8:
    // 0x4c11b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4c11b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c11bc:
    // 0x4c11bc: 0x0  nop
    ctx->pc = 0x4c11bcu;
    // NOP
label_4c11c0:
    // 0x4c11c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4c11c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4c11c4:
    // 0x4c11c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4c11c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4c11c8:
    // 0x4c11c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4c11c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4c11cc:
    // 0x4c11cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c11ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c11d0:
    // 0x4c11d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4c11d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4c11d4:
    // 0x4c11d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c11d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c11d8:
    // 0x4c11d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c11d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c11dc:
    // 0x4c11dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4c11dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c11e0:
    // 0x4c11e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c11e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c11e4:
    // 0x4c11e4: 0xc121c06  jal         func_487018
label_4c11e8:
    if (ctx->pc == 0x4C11E8u) {
        ctx->pc = 0x4C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C11E4u;
        // 0x4c11e8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C11ECu;
        goto label_4c11ec;
    }
    ctx->pc = 0x4C11E4u;
    SET_GPR_U32(ctx, 31, 0x4C11ECu);
    ctx->pc = 0x4C11E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C11E4u;
    // 0x4c11e8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487018u, 0x4C11E4u, 0x4C11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C11ECu;
label_4c11ec:
    // 0x4c11ec: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4c11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4c11f0:
    // 0x4c11f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c11f4:
    // 0x4c11f4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x4c11f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4c11f8:
    // 0x4c11f8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4c11fc:
    if (ctx->pc == 0x4C11FCu) {
        ctx->pc = 0x4C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C11F8u;
        // 0x4c11fc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1200u;
        goto label_4c1200;
    }
    ctx->pc = 0x4C11F8u;
    {
        const bool branch_taken_0x4c11f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C11F8u;
        // 0x4c11fc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c11f8) {
            ctx->pc = 0x4C12E0u;
            goto label_4c12e0;
        }
    }
    ctx->pc = 0x4C1200u;
label_4c1200:
    // 0x4c1200: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c1200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c1204:
    // 0x4c1204: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x4c1204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
label_4c1208:
    // 0x4c1208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c1208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c120c:
    // 0x4c120c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1210:
    // 0x4c1210: 0x800008  jr          $a0
label_4c1214:
    if (ctx->pc == 0x4C1214u) {
        ctx->pc = 0x4C1218u;
        goto label_4c1218;
    }
    ctx->pc = 0x4C1210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4C1218u: goto label_4c1218;
            case 0x4C124Cu: goto label_4c124c;
            case 0x4C1268u: goto label_4c1268;
            case 0x4C1280u: goto label_4c1280;
            case 0x4C129Cu: goto label_4c129c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1210u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C1218u;
label_4c1218:
    // 0x4c1218: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x4c1218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c121c:
    // 0x4c121c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4c121cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c1220:
    // 0x4c1220: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4c1220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c1224:
    // 0x4c1224: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4c1224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c1228:
    // 0x4c1228: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4c1228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c122c:
    // 0x4c122c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c122cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1230:
    // 0x4c1230: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4c1230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4c1234:
    // 0x4c1234: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4c1234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c1238:
    // 0x4c1238: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4c1238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c123c:
    // 0x4c123c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4c123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_4c1240:
    // 0x4c1240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1244:
    // 0x4c1244: 0x10000024  b           . + 4 + (0x24 << 2)
label_4c1248:
    if (ctx->pc == 0x4C1248u) {
        ctx->pc = 0x4C1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1244u;
        // 0x4c1248: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C124Cu;
        goto label_4c124c;
    }
    ctx->pc = 0x4C1244u;
    {
        const bool branch_taken_0x4c1244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1244u;
        // 0x4c1248: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1244) {
            ctx->pc = 0x4C12D8u;
            goto label_4c12d8;
        }
    }
    ctx->pc = 0x4C124Cu;
label_4c124c:
    // 0x4c124c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c124cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1250:
    // 0x4c1250: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c1250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c1254:
    // 0x4c1254: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c1254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c1258:
    // 0x4c1258: 0xc130026  jal         func_4C0098
label_4c125c:
    if (ctx->pc == 0x4C125Cu) {
        ctx->pc = 0x4C125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1258u;
        // 0x4c125c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1260u;
        goto label_4c1260;
    }
    ctx->pc = 0x4C1258u;
    SET_GPR_U32(ctx, 31, 0x4C1260u);
    ctx->pc = 0x4C125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1258u;
    // 0x4c125c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C0098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C0098u, 0x4C1258u, 0x4C1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1260u;
label_4c1260:
    // 0x4c1260: 0x10000020  b           . + 4 + (0x20 << 2)
label_4c1264:
    if (ctx->pc == 0x4C1264u) {
        ctx->pc = 0x4C1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1260u;
        // 0x4c1264: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1268u;
        goto label_4c1268;
    }
    ctx->pc = 0x4C1260u;
    {
        const bool branch_taken_0x4c1260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1260u;
        // 0x4c1264: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1260) {
            ctx->pc = 0x4C12E4u;
            goto label_4c12e4;
        }
    }
    ctx->pc = 0x4C1268u;
label_4c1268:
    // 0x4c1268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c1268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c126c:
    // 0x4c126c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4c126cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c1270:
    // 0x4c1270: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4c1270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c1274:
    // 0x4c1274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1278:
    // 0x4c1278: 0x10000017  b           . + 4 + (0x17 << 2)
label_4c127c:
    if (ctx->pc == 0x4C127Cu) {
        ctx->pc = 0x4C127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1278u;
        // 0x4c127c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1280u;
        goto label_4c1280;
    }
    ctx->pc = 0x4C1278u;
    {
        const bool branch_taken_0x4c1278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1278u;
        // 0x4c127c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1278) {
            ctx->pc = 0x4C12D8u;
            goto label_4c12d8;
        }
    }
    ctx->pc = 0x4C1280u;
label_4c1280:
    // 0x4c1280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c1280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1284:
    // 0x4c1284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c1284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c1288:
    // 0x4c1288: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c1288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c128c:
    // 0x4c128c: 0xc1301d4  jal         func_4C0750
label_4c1290:
    if (ctx->pc == 0x4C1290u) {
        ctx->pc = 0x4C1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C128Cu;
        // 0x4c1290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1294u;
        goto label_4c1294;
    }
    ctx->pc = 0x4C128Cu;
    SET_GPR_U32(ctx, 31, 0x4C1294u);
    ctx->pc = 0x4C1290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C128Cu;
    // 0x4c1290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C0750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C0750u, 0x4C128Cu, 0x4C1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1294u;
label_4c1294:
    // 0x4c1294: 0x10000013  b           . + 4 + (0x13 << 2)
label_4c1298:
    if (ctx->pc == 0x4C1298u) {
        ctx->pc = 0x4C1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1294u;
        // 0x4c1298: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C129Cu;
        goto label_4c129c;
    }
    ctx->pc = 0x4C1294u;
    {
        const bool branch_taken_0x4c1294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1294u;
        // 0x4c1298: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1294) {
            ctx->pc = 0x4C12E4u;
            goto label_4c12e4;
        }
    }
    ctx->pc = 0x4C129Cu;
label_4c129c:
    // 0x4c129c: 0xc11a45e  jal         func_469178
label_4c12a0:
    if (ctx->pc == 0x4C12A0u) {
        ctx->pc = 0x4C12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C129Cu;
        // 0x4c12a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C12A4u;
        goto label_4c12a4;
    }
    ctx->pc = 0x4C129Cu;
    SET_GPR_U32(ctx, 31, 0x4C12A4u);
    ctx->pc = 0x4C12A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C129Cu;
    // 0x4c12a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4C129Cu, 0x4C12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C12A4u;
label_4c12a4:
    // 0x4c12a4: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x4c12a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4c12a8:
    // 0x4c12a8: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x4c12a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4c12ac:
    // 0x4c12ac: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x4c12acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c12b0:
    // 0x4c12b0: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x4c12b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c12b4:
    // 0x4c12b4: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x4c12b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c12b8:
    // 0x4c12b8: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x4c12b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c12bc:
    // 0x4c12bc: 0xb3aa001f  sdl         $t2, 0x1F($sp)
    ctx->pc = 0x4c12bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c12c0:
    // 0x4c12c0: 0xb7aa0018  sdr         $t2, 0x18($sp)
    ctx->pc = 0x4c12c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c12c4:
    // 0x4c12c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c12c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c12c8:
    // 0x4c12c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4c12c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c12cc:
    // 0x4c12cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4c12ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c12d0:
    // 0x4c12d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c12d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c12d4:
    // 0x4c12d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4c12d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4c12d8:
    // 0x4c12d8: 0xc130286  jal         func_4C0A18
label_4c12dc:
    if (ctx->pc == 0x4C12DCu) {
        ctx->pc = 0x4C12E0u;
        goto label_4c12e0;
    }
    ctx->pc = 0x4C12D8u;
    SET_GPR_U32(ctx, 31, 0x4C12E0u);
    ctx->pc = 0x4C0A18u;
    goto label_4c0a18;
    ctx->pc = 0x4C12E0u;
label_4c12e0:
    // 0x4c12e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c12e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c12e4:
    // 0x4c12e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4c12e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c12e8:
    // 0x4c12e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4c12e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c12ec:
    // 0x4c12ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4c12ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c12f0:
    // 0x4c12f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c12f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c12f4:
    // 0x4c12f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c12f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c12f8:
    // 0x4c12f8: 0x3e00008  jr          $ra
label_4c12fc:
    if (ctx->pc == 0x4C12FCu) {
        ctx->pc = 0x4C12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C12F8u;
        // 0x4c12fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1300u;
        goto label_4c1300;
    }
    ctx->pc = 0x4C12F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C12F8u;
        // 0x4c12fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C12F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C1300u;
label_4c1300:
    // 0x4c1300: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4c1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c1304:
    // 0x4c1304: 0x0  nop
    ctx->pc = 0x4c1304u;
    // NOP
label_4c1308:
    // 0x4c1308: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x4c1308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4c130c:
    // 0x4c130c: 0x0  nop
    ctx->pc = 0x4c130cu;
    // NOP
label_4c1310:
    // 0x4c1310: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x4c1310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4c1314:
    // 0x4c1314: 0x0  nop
    ctx->pc = 0x4c1314u;
    // NOP
label_4c1318:
    // 0x4c1318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c1318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4c131c:
    // 0x4c131c: 0x0  nop
    ctx->pc = 0x4c131cu;
    // NOP
label_4c1320:
    // 0x4c1320: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4c1320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1324:
    // 0x4c1324: 0x0  nop
    ctx->pc = 0x4c1324u;
    // NOP
label_4c1328:
    // 0x4c1328: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4c1328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c132c:
    // 0x4c132c: 0x0  nop
    ctx->pc = 0x4c132cu;
    // NOP
label_4c1330:
    // 0x4c1330: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x4c1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_4c1334:
    // 0x4c1334: 0x0  nop
    ctx->pc = 0x4c1334u;
    // NOP
label_4c1338:
    // 0x4c1338: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4c1338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4c133c:
    // 0x4c133c: 0x0  nop
    ctx->pc = 0x4c133cu;
    // NOP
label_4c1340:
    // 0x4c1340: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4c1340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4c1344:
    // 0x4c1344: 0x0  nop
    ctx->pc = 0x4c1344u;
    // NOP
    ctx->pc = 0x4c1348u;
}
