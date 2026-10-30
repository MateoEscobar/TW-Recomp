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

// Function: sub_002C3A08
// Address: 0x2c3a08 - 0x2c4060
void sub_002C3A08_0x2c3a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3A08_0x2c3a08");
#endif

    switch (ctx->pc) {
        case 0x2c3a08u: goto label_2c3a08;
        case 0x2c3a0cu: goto label_2c3a0c;
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a14u: goto label_2c3a14;
        case 0x2c3a18u: goto label_2c3a18;
        case 0x2c3a1cu: goto label_2c3a1c;
        case 0x2c3a20u: goto label_2c3a20;
        case 0x2c3a24u: goto label_2c3a24;
        case 0x2c3a28u: goto label_2c3a28;
        case 0x2c3a2cu: goto label_2c3a2c;
        case 0x2c3a30u: goto label_2c3a30;
        case 0x2c3a34u: goto label_2c3a34;
        case 0x2c3a38u: goto label_2c3a38;
        case 0x2c3a3cu: goto label_2c3a3c;
        case 0x2c3a40u: goto label_2c3a40;
        case 0x2c3a44u: goto label_2c3a44;
        case 0x2c3a48u: goto label_2c3a48;
        case 0x2c3a4cu: goto label_2c3a4c;
        case 0x2c3a50u: goto label_2c3a50;
        case 0x2c3a54u: goto label_2c3a54;
        case 0x2c3a58u: goto label_2c3a58;
        case 0x2c3a5cu: goto label_2c3a5c;
        case 0x2c3a60u: goto label_2c3a60;
        case 0x2c3a64u: goto label_2c3a64;
        case 0x2c3a68u: goto label_2c3a68;
        case 0x2c3a6cu: goto label_2c3a6c;
        case 0x2c3a70u: goto label_2c3a70;
        case 0x2c3a74u: goto label_2c3a74;
        case 0x2c3a78u: goto label_2c3a78;
        case 0x2c3a7cu: goto label_2c3a7c;
        case 0x2c3a80u: goto label_2c3a80;
        case 0x2c3a84u: goto label_2c3a84;
        case 0x2c3a88u: goto label_2c3a88;
        case 0x2c3a8cu: goto label_2c3a8c;
        case 0x2c3a90u: goto label_2c3a90;
        case 0x2c3a94u: goto label_2c3a94;
        case 0x2c3a98u: goto label_2c3a98;
        case 0x2c3a9cu: goto label_2c3a9c;
        case 0x2c3aa0u: goto label_2c3aa0;
        case 0x2c3aa4u: goto label_2c3aa4;
        case 0x2c3aa8u: goto label_2c3aa8;
        case 0x2c3aacu: goto label_2c3aac;
        case 0x2c3ab0u: goto label_2c3ab0;
        case 0x2c3ab4u: goto label_2c3ab4;
        case 0x2c3ab8u: goto label_2c3ab8;
        case 0x2c3abcu: goto label_2c3abc;
        case 0x2c3ac0u: goto label_2c3ac0;
        case 0x2c3ac4u: goto label_2c3ac4;
        case 0x2c3ac8u: goto label_2c3ac8;
        case 0x2c3accu: goto label_2c3acc;
        case 0x2c3ad0u: goto label_2c3ad0;
        case 0x2c3ad4u: goto label_2c3ad4;
        case 0x2c3ad8u: goto label_2c3ad8;
        case 0x2c3adcu: goto label_2c3adc;
        case 0x2c3ae0u: goto label_2c3ae0;
        case 0x2c3ae4u: goto label_2c3ae4;
        case 0x2c3ae8u: goto label_2c3ae8;
        case 0x2c3aecu: goto label_2c3aec;
        case 0x2c3af0u: goto label_2c3af0;
        case 0x2c3af4u: goto label_2c3af4;
        case 0x2c3af8u: goto label_2c3af8;
        case 0x2c3afcu: goto label_2c3afc;
        case 0x2c3b00u: goto label_2c3b00;
        case 0x2c3b04u: goto label_2c3b04;
        case 0x2c3b08u: goto label_2c3b08;
        case 0x2c3b0cu: goto label_2c3b0c;
        case 0x2c3b10u: goto label_2c3b10;
        case 0x2c3b14u: goto label_2c3b14;
        case 0x2c3b18u: goto label_2c3b18;
        case 0x2c3b1cu: goto label_2c3b1c;
        case 0x2c3b20u: goto label_2c3b20;
        case 0x2c3b24u: goto label_2c3b24;
        case 0x2c3b28u: goto label_2c3b28;
        case 0x2c3b2cu: goto label_2c3b2c;
        case 0x2c3b30u: goto label_2c3b30;
        case 0x2c3b34u: goto label_2c3b34;
        case 0x2c3b38u: goto label_2c3b38;
        case 0x2c3b3cu: goto label_2c3b3c;
        case 0x2c3b40u: goto label_2c3b40;
        case 0x2c3b44u: goto label_2c3b44;
        case 0x2c3b48u: goto label_2c3b48;
        case 0x2c3b4cu: goto label_2c3b4c;
        case 0x2c3b50u: goto label_2c3b50;
        case 0x2c3b54u: goto label_2c3b54;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3b5cu: goto label_2c3b5c;
        case 0x2c3b60u: goto label_2c3b60;
        case 0x2c3b64u: goto label_2c3b64;
        case 0x2c3b68u: goto label_2c3b68;
        case 0x2c3b6cu: goto label_2c3b6c;
        case 0x2c3b70u: goto label_2c3b70;
        case 0x2c3b74u: goto label_2c3b74;
        case 0x2c3b78u: goto label_2c3b78;
        case 0x2c3b7cu: goto label_2c3b7c;
        case 0x2c3b80u: goto label_2c3b80;
        case 0x2c3b84u: goto label_2c3b84;
        case 0x2c3b88u: goto label_2c3b88;
        case 0x2c3b8cu: goto label_2c3b8c;
        case 0x2c3b90u: goto label_2c3b90;
        case 0x2c3b94u: goto label_2c3b94;
        case 0x2c3b98u: goto label_2c3b98;
        case 0x2c3b9cu: goto label_2c3b9c;
        case 0x2c3ba0u: goto label_2c3ba0;
        case 0x2c3ba4u: goto label_2c3ba4;
        case 0x2c3ba8u: goto label_2c3ba8;
        case 0x2c3bacu: goto label_2c3bac;
        case 0x2c3bb0u: goto label_2c3bb0;
        case 0x2c3bb4u: goto label_2c3bb4;
        case 0x2c3bb8u: goto label_2c3bb8;
        case 0x2c3bbcu: goto label_2c3bbc;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bc4u: goto label_2c3bc4;
        case 0x2c3bc8u: goto label_2c3bc8;
        case 0x2c3bccu: goto label_2c3bcc;
        case 0x2c3bd0u: goto label_2c3bd0;
        case 0x2c3bd4u: goto label_2c3bd4;
        case 0x2c3bd8u: goto label_2c3bd8;
        case 0x2c3bdcu: goto label_2c3bdc;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3be4u: goto label_2c3be4;
        case 0x2c3be8u: goto label_2c3be8;
        case 0x2c3becu: goto label_2c3bec;
        case 0x2c3bf0u: goto label_2c3bf0;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3bfcu: goto label_2c3bfc;
        case 0x2c3c00u: goto label_2c3c00;
        case 0x2c3c04u: goto label_2c3c04;
        case 0x2c3c08u: goto label_2c3c08;
        case 0x2c3c0cu: goto label_2c3c0c;
        case 0x2c3c10u: goto label_2c3c10;
        case 0x2c3c14u: goto label_2c3c14;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c1cu: goto label_2c3c1c;
        case 0x2c3c20u: goto label_2c3c20;
        case 0x2c3c24u: goto label_2c3c24;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c2cu: goto label_2c3c2c;
        case 0x2c3c30u: goto label_2c3c30;
        case 0x2c3c34u: goto label_2c3c34;
        case 0x2c3c38u: goto label_2c3c38;
        case 0x2c3c3cu: goto label_2c3c3c;
        case 0x2c3c40u: goto label_2c3c40;
        case 0x2c3c44u: goto label_2c3c44;
        case 0x2c3c48u: goto label_2c3c48;
        case 0x2c3c4cu: goto label_2c3c4c;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c54u: goto label_2c3c54;
        case 0x2c3c58u: goto label_2c3c58;
        case 0x2c3c5cu: goto label_2c3c5c;
        case 0x2c3c60u: goto label_2c3c60;
        case 0x2c3c64u: goto label_2c3c64;
        case 0x2c3c68u: goto label_2c3c68;
        case 0x2c3c6cu: goto label_2c3c6c;
        case 0x2c3c70u: goto label_2c3c70;
        case 0x2c3c74u: goto label_2c3c74;
        case 0x2c3c78u: goto label_2c3c78;
        case 0x2c3c7cu: goto label_2c3c7c;
        case 0x2c3c80u: goto label_2c3c80;
        case 0x2c3c84u: goto label_2c3c84;
        case 0x2c3c88u: goto label_2c3c88;
        case 0x2c3c8cu: goto label_2c3c8c;
        case 0x2c3c90u: goto label_2c3c90;
        case 0x2c3c94u: goto label_2c3c94;
        case 0x2c3c98u: goto label_2c3c98;
        case 0x2c3c9cu: goto label_2c3c9c;
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3ca4u: goto label_2c3ca4;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cacu: goto label_2c3cac;
        case 0x2c3cb0u: goto label_2c3cb0;
        case 0x2c3cb4u: goto label_2c3cb4;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3cc0u: goto label_2c3cc0;
        case 0x2c3cc4u: goto label_2c3cc4;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3cccu: goto label_2c3ccc;
        case 0x2c3cd0u: goto label_2c3cd0;
        case 0x2c3cd4u: goto label_2c3cd4;
        case 0x2c3cd8u: goto label_2c3cd8;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3ce0u: goto label_2c3ce0;
        case 0x2c3ce4u: goto label_2c3ce4;
        case 0x2c3ce8u: goto label_2c3ce8;
        case 0x2c3cecu: goto label_2c3cec;
        case 0x2c3cf0u: goto label_2c3cf0;
        case 0x2c3cf4u: goto label_2c3cf4;
        case 0x2c3cf8u: goto label_2c3cf8;
        case 0x2c3cfcu: goto label_2c3cfc;
        case 0x2c3d00u: goto label_2c3d00;
        case 0x2c3d04u: goto label_2c3d04;
        case 0x2c3d08u: goto label_2c3d08;
        case 0x2c3d0cu: goto label_2c3d0c;
        case 0x2c3d10u: goto label_2c3d10;
        case 0x2c3d14u: goto label_2c3d14;
        case 0x2c3d18u: goto label_2c3d18;
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3d20u: goto label_2c3d20;
        case 0x2c3d24u: goto label_2c3d24;
        case 0x2c3d28u: goto label_2c3d28;
        case 0x2c3d2cu: goto label_2c3d2c;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d34u: goto label_2c3d34;
        case 0x2c3d38u: goto label_2c3d38;
        case 0x2c3d3cu: goto label_2c3d3c;
        case 0x2c3d40u: goto label_2c3d40;
        case 0x2c3d44u: goto label_2c3d44;
        case 0x2c3d48u: goto label_2c3d48;
        case 0x2c3d4cu: goto label_2c3d4c;
        case 0x2c3d50u: goto label_2c3d50;
        case 0x2c3d54u: goto label_2c3d54;
        case 0x2c3d58u: goto label_2c3d58;
        case 0x2c3d5cu: goto label_2c3d5c;
        case 0x2c3d60u: goto label_2c3d60;
        case 0x2c3d64u: goto label_2c3d64;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d6cu: goto label_2c3d6c;
        case 0x2c3d70u: goto label_2c3d70;
        case 0x2c3d74u: goto label_2c3d74;
        case 0x2c3d78u: goto label_2c3d78;
        case 0x2c3d7cu: goto label_2c3d7c;
        case 0x2c3d80u: goto label_2c3d80;
        case 0x2c3d84u: goto label_2c3d84;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d8cu: goto label_2c3d8c;
        case 0x2c3d90u: goto label_2c3d90;
        case 0x2c3d94u: goto label_2c3d94;
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3da0u: goto label_2c3da0;
        case 0x2c3da4u: goto label_2c3da4;
        case 0x2c3da8u: goto label_2c3da8;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3db0u: goto label_2c3db0;
        case 0x2c3db4u: goto label_2c3db4;
        case 0x2c3db8u: goto label_2c3db8;
        case 0x2c3dbcu: goto label_2c3dbc;
        case 0x2c3dc0u: goto label_2c3dc0;
        case 0x2c3dc4u: goto label_2c3dc4;
        case 0x2c3dc8u: goto label_2c3dc8;
        case 0x2c3dccu: goto label_2c3dcc;
        case 0x2c3dd0u: goto label_2c3dd0;
        case 0x2c3dd4u: goto label_2c3dd4;
        case 0x2c3dd8u: goto label_2c3dd8;
        case 0x2c3ddcu: goto label_2c3ddc;
        case 0x2c3de0u: goto label_2c3de0;
        case 0x2c3de4u: goto label_2c3de4;
        case 0x2c3de8u: goto label_2c3de8;
        case 0x2c3decu: goto label_2c3dec;
        case 0x2c3df0u: goto label_2c3df0;
        case 0x2c3df4u: goto label_2c3df4;
        case 0x2c3df8u: goto label_2c3df8;
        case 0x2c3dfcu: goto label_2c3dfc;
        case 0x2c3e00u: goto label_2c3e00;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e08u: goto label_2c3e08;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e10u: goto label_2c3e10;
        case 0x2c3e14u: goto label_2c3e14;
        case 0x2c3e18u: goto label_2c3e18;
        case 0x2c3e1cu: goto label_2c3e1c;
        case 0x2c3e20u: goto label_2c3e20;
        case 0x2c3e24u: goto label_2c3e24;
        case 0x2c3e28u: goto label_2c3e28;
        case 0x2c3e2cu: goto label_2c3e2c;
        case 0x2c3e30u: goto label_2c3e30;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e38u: goto label_2c3e38;
        case 0x2c3e3cu: goto label_2c3e3c;
        case 0x2c3e40u: goto label_2c3e40;
        case 0x2c3e44u: goto label_2c3e44;
        case 0x2c3e48u: goto label_2c3e48;
        case 0x2c3e4cu: goto label_2c3e4c;
        case 0x2c3e50u: goto label_2c3e50;
        case 0x2c3e54u: goto label_2c3e54;
        case 0x2c3e58u: goto label_2c3e58;
        case 0x2c3e5cu: goto label_2c3e5c;
        case 0x2c3e60u: goto label_2c3e60;
        case 0x2c3e64u: goto label_2c3e64;
        case 0x2c3e68u: goto label_2c3e68;
        case 0x2c3e6cu: goto label_2c3e6c;
        case 0x2c3e70u: goto label_2c3e70;
        case 0x2c3e74u: goto label_2c3e74;
        case 0x2c3e78u: goto label_2c3e78;
        case 0x2c3e7cu: goto label_2c3e7c;
        case 0x2c3e80u: goto label_2c3e80;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3e88u: goto label_2c3e88;
        case 0x2c3e8cu: goto label_2c3e8c;
        case 0x2c3e90u: goto label_2c3e90;
        case 0x2c3e94u: goto label_2c3e94;
        case 0x2c3e98u: goto label_2c3e98;
        case 0x2c3e9cu: goto label_2c3e9c;
        case 0x2c3ea0u: goto label_2c3ea0;
        case 0x2c3ea4u: goto label_2c3ea4;
        case 0x2c3ea8u: goto label_2c3ea8;
        case 0x2c3eacu: goto label_2c3eac;
        case 0x2c3eb0u: goto label_2c3eb0;
        case 0x2c3eb4u: goto label_2c3eb4;
        case 0x2c3eb8u: goto label_2c3eb8;
        case 0x2c3ebcu: goto label_2c3ebc;
        case 0x2c3ec0u: goto label_2c3ec0;
        case 0x2c3ec4u: goto label_2c3ec4;
        case 0x2c3ec8u: goto label_2c3ec8;
        case 0x2c3eccu: goto label_2c3ecc;
        case 0x2c3ed0u: goto label_2c3ed0;
        case 0x2c3ed4u: goto label_2c3ed4;
        case 0x2c3ed8u: goto label_2c3ed8;
        case 0x2c3edcu: goto label_2c3edc;
        case 0x2c3ee0u: goto label_2c3ee0;
        case 0x2c3ee4u: goto label_2c3ee4;
        case 0x2c3ee8u: goto label_2c3ee8;
        case 0x2c3eecu: goto label_2c3eec;
        case 0x2c3ef0u: goto label_2c3ef0;
        case 0x2c3ef4u: goto label_2c3ef4;
        case 0x2c3ef8u: goto label_2c3ef8;
        case 0x2c3efcu: goto label_2c3efc;
        case 0x2c3f00u: goto label_2c3f00;
        case 0x2c3f04u: goto label_2c3f04;
        case 0x2c3f08u: goto label_2c3f08;
        case 0x2c3f0cu: goto label_2c3f0c;
        case 0x2c3f10u: goto label_2c3f10;
        case 0x2c3f14u: goto label_2c3f14;
        case 0x2c3f18u: goto label_2c3f18;
        case 0x2c3f1cu: goto label_2c3f1c;
        case 0x2c3f20u: goto label_2c3f20;
        case 0x2c3f24u: goto label_2c3f24;
        case 0x2c3f28u: goto label_2c3f28;
        case 0x2c3f2cu: goto label_2c3f2c;
        case 0x2c3f30u: goto label_2c3f30;
        case 0x2c3f34u: goto label_2c3f34;
        case 0x2c3f38u: goto label_2c3f38;
        case 0x2c3f3cu: goto label_2c3f3c;
        case 0x2c3f40u: goto label_2c3f40;
        case 0x2c3f44u: goto label_2c3f44;
        case 0x2c3f48u: goto label_2c3f48;
        case 0x2c3f4cu: goto label_2c3f4c;
        case 0x2c3f50u: goto label_2c3f50;
        case 0x2c3f54u: goto label_2c3f54;
        case 0x2c3f58u: goto label_2c3f58;
        case 0x2c3f5cu: goto label_2c3f5c;
        case 0x2c3f60u: goto label_2c3f60;
        case 0x2c3f64u: goto label_2c3f64;
        case 0x2c3f68u: goto label_2c3f68;
        case 0x2c3f6cu: goto label_2c3f6c;
        case 0x2c3f70u: goto label_2c3f70;
        case 0x2c3f74u: goto label_2c3f74;
        case 0x2c3f78u: goto label_2c3f78;
        case 0x2c3f7cu: goto label_2c3f7c;
        case 0x2c3f80u: goto label_2c3f80;
        case 0x2c3f84u: goto label_2c3f84;
        case 0x2c3f88u: goto label_2c3f88;
        case 0x2c3f8cu: goto label_2c3f8c;
        case 0x2c3f90u: goto label_2c3f90;
        case 0x2c3f94u: goto label_2c3f94;
        case 0x2c3f98u: goto label_2c3f98;
        case 0x2c3f9cu: goto label_2c3f9c;
        case 0x2c3fa0u: goto label_2c3fa0;
        case 0x2c3fa4u: goto label_2c3fa4;
        case 0x2c3fa8u: goto label_2c3fa8;
        case 0x2c3facu: goto label_2c3fac;
        case 0x2c3fb0u: goto label_2c3fb0;
        case 0x2c3fb4u: goto label_2c3fb4;
        case 0x2c3fb8u: goto label_2c3fb8;
        case 0x2c3fbcu: goto label_2c3fbc;
        case 0x2c3fc0u: goto label_2c3fc0;
        case 0x2c3fc4u: goto label_2c3fc4;
        case 0x2c3fc8u: goto label_2c3fc8;
        case 0x2c3fccu: goto label_2c3fcc;
        case 0x2c3fd0u: goto label_2c3fd0;
        case 0x2c3fd4u: goto label_2c3fd4;
        case 0x2c3fd8u: goto label_2c3fd8;
        case 0x2c3fdcu: goto label_2c3fdc;
        case 0x2c3fe0u: goto label_2c3fe0;
        case 0x2c3fe4u: goto label_2c3fe4;
        case 0x2c3fe8u: goto label_2c3fe8;
        case 0x2c3fecu: goto label_2c3fec;
        case 0x2c3ff0u: goto label_2c3ff0;
        case 0x2c3ff4u: goto label_2c3ff4;
        case 0x2c3ff8u: goto label_2c3ff8;
        case 0x2c3ffcu: goto label_2c3ffc;
        case 0x2c4000u: goto label_2c4000;
        case 0x2c4004u: goto label_2c4004;
        case 0x2c4008u: goto label_2c4008;
        case 0x2c400cu: goto label_2c400c;
        case 0x2c4010u: goto label_2c4010;
        case 0x2c4014u: goto label_2c4014;
        case 0x2c4018u: goto label_2c4018;
        case 0x2c401cu: goto label_2c401c;
        case 0x2c4020u: goto label_2c4020;
        case 0x2c4024u: goto label_2c4024;
        case 0x2c4028u: goto label_2c4028;
        case 0x2c402cu: goto label_2c402c;
        case 0x2c4030u: goto label_2c4030;
        case 0x2c4034u: goto label_2c4034;
        case 0x2c4038u: goto label_2c4038;
        case 0x2c403cu: goto label_2c403c;
        case 0x2c4040u: goto label_2c4040;
        case 0x2c4044u: goto label_2c4044;
        case 0x2c4048u: goto label_2c4048;
        case 0x2c404cu: goto label_2c404c;
        case 0x2c4050u: goto label_2c4050;
        case 0x2c4054u: goto label_2c4054;
        case 0x2c4058u: goto label_2c4058;
        case 0x2c405cu: goto label_2c405c;
        default: break;
    }

    ctx->pc = 0x2c3a08u;

label_2c3a08:
    // 0x2c3a08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c3a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2c3a0c:
    // 0x2c3a0c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2c3a10:
    // 0x2c3a10: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2c3a14:
    // 0x2c3a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3a18:
    // 0x2c3a18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c3a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2c3a1c:
    // 0x2c3a1c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2c3a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2c3a20:
    // 0x2c3a20: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2c3a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2c3a24:
    // 0x2c3a24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c3a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2c3a28:
    // 0x2c3a28: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2c3a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2c3a2c:
    // 0x2c3a2c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2c3a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2c3a30:
    // 0x2c3a30: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2c3a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2c3a34:
    // 0x2c3a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c3a38:
    // 0x2c3a38: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c3a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2c3a3c:
    // 0x2c3a3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3a40:
    // 0x2c3a40: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c3a44:
    // 0x2c3a44: 0x8c750040  lw          $s5, 0x40($v1)
    ctx->pc = 0x2c3a44u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2c3a48:
    // 0x2c3a48: 0x52a0000b  beql        $s5, $zero, . + 4 + (0xB << 2)
label_2c3a4c:
    if (ctx->pc == 0x2C3A4Cu) {
        ctx->pc = 0x2C3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A48u;
        // 0x2c3a4c: 0x92a3003b  lbu         $v1, 0x3B($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A50u;
        goto label_2c3a50;
    }
    ctx->pc = 0x2C3A48u;
    {
        const bool branch_taken_0x2c3a48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a48) {
            ctx->pc = 0x2C3A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3A48u;
            // 0x2c3a4c: 0x92a3003b  lbu         $v1, 0x3B($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 59)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A78u;
            goto label_2c3a78;
        }
    }
    ctx->pc = 0x2C3A50u;
label_2c3a50:
    // 0x2c3a50: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x2c3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_2c3a54:
    // 0x2c3a54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2c3a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2c3a58:
    // 0x2c3a58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c3a5c:
    // 0x2c3a5c: 0x40f809  jalr        $v0
label_2c3a60:
    if (ctx->pc == 0x2C3A60u) {
        ctx->pc = 0x2C3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A5Cu;
        // 0x2c3a60: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A64u;
        goto label_2c3a64;
    }
    ctx->pc = 0x2C3A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3A64u);
        ctx->pc = 0x2C3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A5Cu;
        // 0x2c3a60: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3A5Cu, 0x2C3A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3A64u;
label_2c3a64:
    // 0x2c3a64: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2c3a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2c3a68:
    // 0x2c3a68: 0x14400170  bnez        $v0, . + 4 + (0x170 << 2)
label_2c3a6c:
    if (ctx->pc == 0x2C3A6Cu) {
        ctx->pc = 0x2C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A68u;
        // 0x2c3a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A70u;
        goto label_2c3a70;
    }
    ctx->pc = 0x2C3A68u;
    {
        const bool branch_taken_0x2c3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A68u;
        // 0x2c3a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a68) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3A70u;
label_2c3a70:
    // 0x2c3a70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3a74:
    // 0x2c3a74: 0x92a3003b  lbu         $v1, 0x3B($s5)
    ctx->pc = 0x2c3a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 59)));
label_2c3a78:
    // 0x2c3a78: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c3a7c:
    // 0x2c3a7c: 0xc05a596  jal         func_169658
label_2c3a80:
    if (ctx->pc == 0x2C3A80u) {
        ctx->pc = 0x2C3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A7Cu;
        // 0x2c3a80: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A84u;
        goto label_2c3a84;
    }
    ctx->pc = 0x2C3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A84u);
    ctx->pc = 0x2C3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A7Cu;
    // 0x2c3a80: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2C3A7Cu, 0x2C3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A84u;
label_2c3a84:
    // 0x2c3a84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3a88:
    // 0x2c3a88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c3a8c:
    // 0x2c3a8c: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x2c3a8cu;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c3a90:
    // 0x2c3a90: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2c3a94:
    // 0x2c3a94: 0xc05959e  jal         func_165678
label_2c3a98:
    if (ctx->pc == 0x2C3A98u) {
        ctx->pc = 0x2C3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A94u;
        // 0x2c3a98: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3A9Cu;
        goto label_2c3a9c;
    }
    ctx->pc = 0x2C3A94u;
    SET_GPR_U32(ctx, 31, 0x2C3A9Cu);
    ctx->pc = 0x2C3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A94u;
    // 0x2c3a98: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2C3A94u, 0x2C3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A9Cu;
label_2c3a9c:
    // 0x2c3a9c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c3a9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3aa0:
    // 0x2c3aa0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c3aa4:
    // 0x2c3aa4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2c3aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2c3aa8:
    // 0x2c3aa8: 0x24744b00  addiu       $s4, $v1, 0x4B00
    ctx->pc = 0x2c3aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c3aac:
    // 0x2c3aac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c3ab0:
    // 0x2c3ab0: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2c3ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c3ab4:
    // 0x2c3ab4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c3ab8:
    // 0x2c3ab8: 0x1276002a  beq         $s3, $s6, . + 4 + (0x2A << 2)
label_2c3abc:
    if (ctx->pc == 0x2C3ABCu) {
        ctx->pc = 0x2C3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AB8u;
        // 0x2c3abc: 0x54b821  addu        $s7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AC0u;
        goto label_2c3ac0;
    }
    ctx->pc = 0x2C3AB8u;
    {
        const bool branch_taken_0x2c3ab8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x2C3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AB8u;
        // 0x2c3abc: 0x54b821  addu        $s7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ab8) {
            ctx->pc = 0x2C3B64u;
            goto label_2c3b64;
        }
    }
    ctx->pc = 0x2C3AC0u;
label_2c3ac0:
    // 0x2c3ac0: 0x86c50092  lh          $a1, 0x92($s6)
    ctx->pc = 0x2c3ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2c3ac4:
    // 0x2c3ac4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c3ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ac8:
    // 0x2c3ac8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c3ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c3acc:
    // 0x2c3acc: 0xc0cdb38  jal         func_336CE0
label_2c3ad0:
    if (ctx->pc == 0x2C3AD0u) {
        ctx->pc = 0x2C3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ACCu;
        // 0x2c3ad0: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AD4u;
        goto label_2c3ad4;
    }
    ctx->pc = 0x2C3ACCu;
    SET_GPR_U32(ctx, 31, 0x2C3AD4u);
    ctx->pc = 0x2C3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3ACCu;
    // 0x2c3ad0: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C3ACCu, 0x2C3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AD4u;
label_2c3ad4:
    // 0x2c3ad4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2c3ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
label_2c3ad8:
    // 0x2c3ad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c3adc:
    // 0x2c3adc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2c3ae0:
    if (ctx->pc == 0x2C3AE0u) {
        ctx->pc = 0x2C3AE4u;
        goto label_2c3ae4;
    }
    ctx->pc = 0x2C3ADCu;
    {
        const bool branch_taken_0x2c3adc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3adc) {
            ctx->pc = 0x2C3AECu;
            goto label_2c3aec;
        }
    }
    ctx->pc = 0x2C3AE4u;
label_2c3ae4:
    // 0x2c3ae4: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2c3ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2c3ae8:
    // 0x2c3ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c3aec:
    // 0x2c3aec: 0x0  nop
    ctx->pc = 0x2c3aecu;
    // NOP
label_2c3af0:
    // 0x2c3af0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3af0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3af4:
    // 0x2c3af4: 0x0  nop
    ctx->pc = 0x2c3af4u;
    // NOP
label_2c3af8:
    // 0x2c3af8: 0x45020078  bc1fl       . + 4 + (0x78 << 2)
label_2c3afc:
    if (ctx->pc == 0x2C3AFCu) {
        ctx->pc = 0x2C3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AF8u;
        // 0x2c3afc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B00u;
        goto label_2c3b00;
    }
    ctx->pc = 0x2C3AF8u;
    {
        const bool branch_taken_0x2c3af8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3af8) {
            ctx->pc = 0x2C3AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AF8u;
            // 0x2c3afc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CDCu;
            goto label_2c3cdc;
        }
    }
    ctx->pc = 0x2C3B00u;
label_2c3b00:
    // 0x2c3b00: 0xc0a36c8  jal         func_28DB20
label_2c3b04:
    if (ctx->pc == 0x2C3B04u) {
        ctx->pc = 0x2C3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B00u;
        // 0x2c3b04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B08u;
        goto label_2c3b08;
    }
    ctx->pc = 0x2C3B00u;
    SET_GPR_U32(ctx, 31, 0x2C3B08u);
    ctx->pc = 0x2C3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B00u;
    // 0x2c3b04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C3B00u, 0x2C3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B08u;
label_2c3b08:
    // 0x2c3b08: 0xc0a4e54  jal         func_293950
label_2c3b0c:
    if (ctx->pc == 0x2C3B0Cu) {
        ctx->pc = 0x2C3B10u;
        goto label_2c3b10;
    }
    ctx->pc = 0x2C3B08u;
    SET_GPR_U32(ctx, 31, 0x2C3B10u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C3B08u, 0x2C3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B10u;
label_2c3b10:
    // 0x2c3b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b14:
    // 0x2c3b14: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2c3b18:
    if (ctx->pc == 0x2C3B18u) {
        ctx->pc = 0x2C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B14u;
        // 0x2c3b18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B1Cu;
        goto label_2c3b1c;
    }
    ctx->pc = 0x2C3B14u;
    {
        const bool branch_taken_0x2c3b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b14) {
            ctx->pc = 0x2C3B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B14u;
            // 0x2c3b18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B54u;
            goto label_2c3b54;
        }
    }
    ctx->pc = 0x2C3B1Cu;
label_2c3b1c:
    // 0x2c3b1c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2c3b20:
    // 0x2c3b20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c3b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c3b24:
    // 0x2c3b24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c3b28:
    // 0x2c3b28: 0x40f809  jalr        $v0
label_2c3b2c:
    if (ctx->pc == 0x2C3B2Cu) {
        ctx->pc = 0x2C3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B28u;
        // 0x2c3b2c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B30u;
        goto label_2c3b30;
    }
    ctx->pc = 0x2C3B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3B30u);
        ctx->pc = 0x2C3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B28u;
        // 0x2c3b2c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3B28u, 0x2C3B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3B30u;
label_2c3b30:
    // 0x2c3b30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3b34:
    // 0x2c3b34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b38:
    // 0x2c3b38: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c3b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2c3b3c:
    // 0x2c3b3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3b40:
    // 0x2c3b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b44:
    // 0x2c3b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b48:
    // 0x2c3b48: 0xc0b7eea  jal         func_2DFBA8
label_2c3b4c:
    if (ctx->pc == 0x2C3B4Cu) {
        ctx->pc = 0x2C3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B48u;
        // 0x2c3b4c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B50u;
        goto label_2c3b50;
    }
    ctx->pc = 0x2C3B48u;
    SET_GPR_U32(ctx, 31, 0x2C3B50u);
    ctx->pc = 0x2C3B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B48u;
    // 0x2c3b4c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2C3B48u, 0x2C3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B50u;
label_2c3b50:
    // 0x2c3b50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3b54:
    // 0x2c3b54: 0xc0a35d6  jal         func_28D758
label_2c3b58:
    if (ctx->pc == 0x2C3B58u) {
        ctx->pc = 0x2C3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B54u;
        // 0x2c3b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B5Cu;
        goto label_2c3b5c;
    }
    ctx->pc = 0x2C3B54u;
    SET_GPR_U32(ctx, 31, 0x2C3B5Cu);
    ctx->pc = 0x2C3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B54u;
    // 0x2c3b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C3B54u, 0x2C3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B5Cu;
label_2c3b5c:
    // 0x2c3b5c: 0x10000133  b           . + 4 + (0x133 << 2)
label_2c3b60:
    if (ctx->pc == 0x2C3B60u) {
        ctx->pc = 0x2C3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B5Cu;
        // 0x2c3b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B64u;
        goto label_2c3b64;
    }
    ctx->pc = 0x2C3B5Cu;
    {
        const bool branch_taken_0x2c3b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B5Cu;
        // 0x2c3b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b5c) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3B64u;
label_2c3b64:
    // 0x2c3b64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c3b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b68:
    // 0x2c3b68: 0xc0cdb38  jal         func_336CE0
label_2c3b6c:
    if (ctx->pc == 0x2C3B6Cu) {
        ctx->pc = 0x2C3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B68u;
        // 0x2c3b6c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B70u;
        goto label_2c3b70;
    }
    ctx->pc = 0x2C3B68u;
    SET_GPR_U32(ctx, 31, 0x2C3B70u);
    ctx->pc = 0x2C3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B68u;
    // 0x2c3b6c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C3B68u, 0x2C3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B70u;
label_2c3b70:
    // 0x2c3b70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c3b74:
    // 0x2c3b74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c3b74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c3b78:
    // 0x2c3b78: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c3b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2c3b7c:
    // 0x2c3b7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c3b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b80:
    // 0x2c3b80: 0xc1067b8  jal         func_419EE0
label_2c3b84:
    if (ctx->pc == 0x2C3B84u) {
        ctx->pc = 0x2C3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B80u;
        // 0x2c3b84: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B88u;
        goto label_2c3b88;
    }
    ctx->pc = 0x2C3B80u;
    SET_GPR_U32(ctx, 31, 0x2C3B88u);
    ctx->pc = 0x2C3B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B80u;
    // 0x2c3b84: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2C3B80u, 0x2C3B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B88u;
label_2c3b88:
    // 0x2c3b88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b8c:
    // 0x2c3b8c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2c3b90:
    if (ctx->pc == 0x2C3B90u) {
        ctx->pc = 0x2C3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B8Cu;
        // 0x2c3b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B94u;
        goto label_2c3b94;
    }
    ctx->pc = 0x2C3B8Cu;
    {
        const bool branch_taken_0x2c3b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B8Cu;
        // 0x2c3b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b8c) {
            ctx->pc = 0x2C3BC8u;
            goto label_2c3bc8;
        }
    }
    ctx->pc = 0x2C3B94u;
label_2c3b94:
    // 0x2c3b94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b98:
    // 0x2c3b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b9c:
    // 0x2c3b9c: 0xc0888a2  jal         func_222288
label_2c3ba0:
    if (ctx->pc == 0x2C3BA0u) {
        ctx->pc = 0x2C3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B9Cu;
        // 0x2c3ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BA4u;
        goto label_2c3ba4;
    }
    ctx->pc = 0x2C3B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C3BA4u);
    ctx->pc = 0x2C3BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B9Cu;
    // 0x2c3ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C3B9Cu, 0x2C3BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BA4u;
label_2c3ba4:
    // 0x2c3ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3ba8:
    // 0x2c3ba8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2c3bac:
    if (ctx->pc == 0x2C3BACu) {
        ctx->pc = 0x2C3BB0u;
        goto label_2c3bb0;
    }
    ctx->pc = 0x2C3BA8u;
    {
        const bool branch_taken_0x2c3ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3ba8) {
            ctx->pc = 0x2C3BC8u;
            goto label_2c3bc8;
        }
    }
    ctx->pc = 0x2C3BB0u;
label_2c3bb0:
    // 0x2c3bb0: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2c3bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2c3bb4:
    // 0x2c3bb4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2c3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c3bb8:
    // 0x2c3bb8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c3bbc:
    // 0x2c3bbc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2c3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2c3bc0:
    // 0x2c3bc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c3bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c3bc4:
    // 0x2c3bc4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c3bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c3bc8:
    // 0x2c3bc8: 0x56400044  bnel        $s2, $zero, . + 4 + (0x44 << 2)
label_2c3bcc:
    if (ctx->pc == 0x2C3BCCu) {
        ctx->pc = 0x2C3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BC8u;
        // 0x2c3bcc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BD0u;
        goto label_2c3bd0;
    }
    ctx->pc = 0x2C3BC8u;
    {
        const bool branch_taken_0x2c3bc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3bc8) {
            ctx->pc = 0x2C3BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BC8u;
            // 0x2c3bcc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CDCu;
            goto label_2c3cdc;
        }
    }
    ctx->pc = 0x2C3BD0u;
label_2c3bd0:
    // 0x2c3bd0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c3bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2c3bd4:
    // 0x2c3bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c3bd8:
    // 0x2c3bd8: 0x0  nop
    ctx->pc = 0x2c3bd8u;
    // NOP
label_2c3bdc:
    // 0x2c3bdc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c3bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3be0:
    // 0x2c3be0: 0x0  nop
    ctx->pc = 0x2c3be0u;
    // NOP
label_2c3be4:
    // 0x2c3be4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2c3be8:
    if (ctx->pc == 0x2C3BE8u) {
        ctx->pc = 0x2C3BECu;
        goto label_2c3bec;
    }
    ctx->pc = 0x2C3BE4u;
    {
        const bool branch_taken_0x2c3be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3be4) {
            ctx->pc = 0x2C3C30u;
            goto label_2c3c30;
        }
    }
    ctx->pc = 0x2C3BECu;
label_2c3bec:
    // 0x2c3bec: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2c3bf0:
    if (ctx->pc == 0x2C3BF0u) {
        ctx->pc = 0x2C3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BECu;
        // 0x2c3bf0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BF4u;
        goto label_2c3bf4;
    }
    ctx->pc = 0x2C3BECu;
    {
        const bool branch_taken_0x2c3bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BECu;
        // 0x2c3bf0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bec) {
            ctx->pc = 0x2C3C24u;
            goto label_2c3c24;
        }
    }
    ctx->pc = 0x2C3BF4u;
label_2c3bf4:
    // 0x2c3bf4: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x2c3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_2c3bf8:
    // 0x2c3bf8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2c3bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2c3bfc:
    // 0x2c3bfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c3c00:
    if (ctx->pc == 0x2C3C00u) {
        ctx->pc = 0x2C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BFCu;
        // 0x2c3c00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C04u;
        goto label_2c3c04;
    }
    ctx->pc = 0x2C3BFCu;
    {
        const bool branch_taken_0x2c3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BFCu;
        // 0x2c3c00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bfc) {
            ctx->pc = 0x2C3C24u;
            goto label_2c3c24;
        }
    }
    ctx->pc = 0x2C3C04u;
label_2c3c04:
    // 0x2c3c04: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2c3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c3c08:
    // 0x2c3c08: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2c3c0c:
    if (ctx->pc == 0x2C3C0Cu) {
        ctx->pc = 0x2C3C10u;
        goto label_2c3c10;
    }
    ctx->pc = 0x2C3C08u;
    {
        const bool branch_taken_0x2c3c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3c08) {
            ctx->pc = 0x2C3C30u;
            goto label_2c3c30;
        }
    }
    ctx->pc = 0x2C3C10u;
label_2c3c10:
    // 0x2c3c10: 0xc0a36c8  jal         func_28DB20
label_2c3c14:
    if (ctx->pc == 0x2C3C14u) {
        ctx->pc = 0x2C3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C10u;
        // 0x2c3c14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C18u;
        goto label_2c3c18;
    }
    ctx->pc = 0x2C3C10u;
    SET_GPR_U32(ctx, 31, 0x2C3C18u);
    ctx->pc = 0x2C3C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C10u;
    // 0x2c3c14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C3C10u, 0x2C3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C18u;
label_2c3c18:
    // 0x2c3c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c3c1c:
    // 0x2c3c1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c3c20:
    if (ctx->pc == 0x2C3C20u) {
        ctx->pc = 0x2C3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C1Cu;
        // 0x2c3c20: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C24u;
        goto label_2c3c24;
    }
    ctx->pc = 0x2C3C1Cu;
    {
        const bool branch_taken_0x2c3c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C1Cu;
        // 0x2c3c20: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c1c) {
            ctx->pc = 0x2C3C30u;
            goto label_2c3c30;
        }
    }
    ctx->pc = 0x2C3C24u;
label_2c3c24:
    // 0x2c3c24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c3c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3c28:
    // 0x2c3c28: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2c3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2c3c2c:
    // 0x2c3c2c: 0xa2b2003b  sb          $s2, 0x3B($s5)
    ctx->pc = 0x2c3c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 59), (uint8_t)GPR_U32(ctx, 18));
label_2c3c30:
    // 0x2c3c30: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2c3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2c3c34:
    // 0x2c3c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c3c38:
    // 0x2c3c38: 0x0  nop
    ctx->pc = 0x2c3c38u;
    // NOP
label_2c3c3c:
    // 0x2c3c3c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c3c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3c40:
    // 0x2c3c40: 0x0  nop
    ctx->pc = 0x2c3c40u;
    // NOP
label_2c3c44:
    // 0x2c3c44: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2c3c48:
    if (ctx->pc == 0x2C3C48u) {
        ctx->pc = 0x2C3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C44u;
        // 0x2c3c48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C4Cu;
        goto label_2c3c4c;
    }
    ctx->pc = 0x2C3C44u;
    {
        const bool branch_taken_0x2c3c44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3c44) {
            ctx->pc = 0x2C3C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C44u;
            // 0x2c3c48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C5Cu;
            goto label_2c3c5c;
        }
    }
    ctx->pc = 0x2C3C4Cu;
label_2c3c4c:
    // 0x2c3c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3c50:
    // 0x2c3c50: 0x17c20006  bne         $fp, $v0, . + 4 + (0x6 << 2)
label_2c3c54:
    if (ctx->pc == 0x2C3C54u) {
        ctx->pc = 0x2C3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C50u;
        // 0x2c3c54: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C58u;
        goto label_2c3c58;
    }
    ctx->pc = 0x2C3C50u;
    {
        const bool branch_taken_0x2c3c50 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C50u;
        // 0x2c3c54: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c50) {
            ctx->pc = 0x2C3C6Cu;
            goto label_2c3c6c;
        }
    }
    ctx->pc = 0x2C3C58u;
label_2c3c58:
    // 0x2c3c58: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c3c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3c5c:
    // 0x2c3c5c: 0xa2b2003b  sb          $s2, 0x3B($s5)
    ctx->pc = 0x2c3c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 59), (uint8_t)GPR_U32(ctx, 18));
label_2c3c60:
    // 0x2c3c60: 0xc0a36c8  jal         func_28DB20
label_2c3c64:
    if (ctx->pc == 0x2C3C64u) {
        ctx->pc = 0x2C3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C60u;
        // 0x2c3c64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C68u;
        goto label_2c3c68;
    }
    ctx->pc = 0x2C3C60u;
    SET_GPR_U32(ctx, 31, 0x2C3C68u);
    ctx->pc = 0x2C3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C60u;
    // 0x2c3c64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C3C60u, 0x2C3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C68u;
label_2c3c68:
    // 0x2c3c68: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c3c6c:
    // 0x2c3c6c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2c3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2c3c70:
    // 0x2c3c70: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2c3c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c3c74:
    // 0x2c3c74: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3c74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3c78:
    // 0x2c3c78: 0x0  nop
    ctx->pc = 0x2c3c78u;
    // NOP
label_2c3c7c:
    // 0x2c3c7c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2c3c80:
    if (ctx->pc == 0x2C3C80u) {
        ctx->pc = 0x2C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C7Cu;
        // 0x2c3c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C84u;
        goto label_2c3c84;
    }
    ctx->pc = 0x2C3C7Cu;
    {
        const bool branch_taken_0x2c3c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C7Cu;
        // 0x2c3c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c7c) {
            ctx->pc = 0x2C3CC4u;
            goto label_2c3cc4;
        }
    }
    ctx->pc = 0x2C3C84u;
label_2c3c84:
    // 0x2c3c84: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c3c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c3c88:
    // 0x2c3c88: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2c3c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c3c8c:
    // 0x2c3c8c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3c8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3c90:
    // 0x2c3c90: 0x0  nop
    ctx->pc = 0x2c3c90u;
    // NOP
label_2c3c94:
    // 0x2c3c94: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2c3c98:
    if (ctx->pc == 0x2C3C98u) {
        ctx->pc = 0x2C3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C94u;
        // 0x2c3c98: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C9Cu;
        goto label_2c3c9c;
    }
    ctx->pc = 0x2C3C94u;
    {
        const bool branch_taken_0x2c3c94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C94u;
        // 0x2c3c98: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c94) {
            ctx->pc = 0x2C3CC4u;
            goto label_2c3cc4;
        }
    }
    ctx->pc = 0x2C3C9Cu;
label_2c3c9c:
    // 0x2c3c9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c3ca0:
    // 0x2c3ca0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3ca0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3ca4:
    // 0x2c3ca4: 0x0  nop
    ctx->pc = 0x2c3ca4u;
    // NOP
label_2c3ca8:
    // 0x2c3ca8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2c3cac:
    if (ctx->pc == 0x2C3CACu) {
        ctx->pc = 0x2C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CA8u;
        // 0x2c3cac: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CB0u;
        goto label_2c3cb0;
    }
    ctx->pc = 0x2C3CA8u;
    {
        const bool branch_taken_0x2c3ca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CA8u;
        // 0x2c3cac: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ca8) {
            ctx->pc = 0x2C3CC4u;
            goto label_2c3cc4;
        }
    }
    ctx->pc = 0x2C3CB0u;
label_2c3cb0:
    // 0x2c3cb0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2c3cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c3cb4:
    // 0x2c3cb4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3cb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3cb8:
    // 0x2c3cb8: 0x0  nop
    ctx->pc = 0x2c3cb8u;
    // NOP
label_2c3cbc:
    // 0x2c3cbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2c3cc0:
    if (ctx->pc == 0x2C3CC0u) {
        ctx->pc = 0x2C3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CBCu;
        // 0x2c3cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CC4u;
        goto label_2c3cc4;
    }
    ctx->pc = 0x2C3CBCu;
    {
        const bool branch_taken_0x2c3cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3cbc) {
            ctx->pc = 0x2C3CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3CBCu;
            // 0x2c3cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CC4u;
            goto label_2c3cc4;
        }
    }
    ctx->pc = 0x2C3CC4u;
label_2c3cc4:
    // 0x2c3cc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c3cc8:
    // 0x2c3cc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c3ccc:
    if (ctx->pc == 0x2C3CCCu) {
        ctx->pc = 0x2C3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CC8u;
        // 0x2c3ccc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CD0u;
        goto label_2c3cd0;
    }
    ctx->pc = 0x2C3CC8u;
    {
        const bool branch_taken_0x2c3cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cc8) {
            ctx->pc = 0x2C3CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3CC8u;
            // 0x2c3ccc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CDCu;
            goto label_2c3cdc;
        }
    }
    ctx->pc = 0x2C3CD0u;
label_2c3cd0:
    // 0x2c3cd0: 0xc0a36c8  jal         func_28DB20
label_2c3cd4:
    if (ctx->pc == 0x2C3CD4u) {
        ctx->pc = 0x2C3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CD0u;
        // 0x2c3cd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CD8u;
        goto label_2c3cd8;
    }
    ctx->pc = 0x2C3CD0u;
    SET_GPR_U32(ctx, 31, 0x2C3CD8u);
    ctx->pc = 0x2C3CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CD0u;
    // 0x2c3cd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C3CD0u, 0x2C3CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CD8u;
label_2c3cd8:
    // 0x2c3cd8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3cdc:
    // 0x2c3cdc: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2c3cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2c3ce0:
    // 0x2c3ce0: 0x1c4000d1  bgtz        $v0, . + 4 + (0xD1 << 2)
label_2c3ce4:
    if (ctx->pc == 0x2C3CE4u) {
        ctx->pc = 0x2C3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CE0u;
        // 0x2c3ce4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CE8u;
        goto label_2c3ce8;
    }
    ctx->pc = 0x2C3CE0u;
    {
        const bool branch_taken_0x2c3ce0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CE0u;
        // 0x2c3ce4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ce0) {
            ctx->pc = 0x2C4028u;
            goto label_2c4028;
        }
    }
    ctx->pc = 0x2C3CE8u;
label_2c3ce8:
    // 0x2c3ce8: 0x165400ac  bne         $s2, $s4, . + 4 + (0xAC << 2)
label_2c3cec:
    if (ctx->pc == 0x2C3CECu) {
        ctx->pc = 0x2C3CF0u;
        goto label_2c3cf0;
    }
    ctx->pc = 0x2C3CE8u;
    {
        const bool branch_taken_0x2c3ce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c3ce8) {
            ctx->pc = 0x2C3F9Cu;
            goto label_2c3f9c;
        }
    }
    ctx->pc = 0x2C3CF0u;
label_2c3cf0:
    // 0x2c3cf0: 0xc08bfa0  jal         func_22FE80
label_2c3cf4:
    if (ctx->pc == 0x2C3CF4u) {
        ctx->pc = 0x2C3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CF0u;
        // 0x2c3cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CF8u;
        goto label_2c3cf8;
    }
    ctx->pc = 0x2C3CF0u;
    SET_GPR_U32(ctx, 31, 0x2C3CF8u);
    ctx->pc = 0x2C3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CF0u;
    // 0x2c3cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2C3CF0u, 0x2C3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CF8u;
label_2c3cf8:
    // 0x2c3cf8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c3cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c3cfc:
    // 0x2c3cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d00:
    // 0x2c3d00: 0xc0a7c8c  jal         func_29F230
label_2c3d04:
    if (ctx->pc == 0x2C3D04u) {
        ctx->pc = 0x2C3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D00u;
        // 0x2c3d04: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D08u;
        goto label_2c3d08;
    }
    ctx->pc = 0x2C3D00u;
    SET_GPR_U32(ctx, 31, 0x2C3D08u);
    ctx->pc = 0x2C3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D00u;
    // 0x2c3d04: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2C3D00u, 0x2C3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D08u;
label_2c3d08:
    // 0x2c3d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d0c:
    // 0x2c3d0c: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
label_2c3d10:
    if (ctx->pc == 0x2C3D10u) {
        ctx->pc = 0x2C3D14u;
        goto label_2c3d14;
    }
    ctx->pc = 0x2C3D0Cu;
    {
        const bool branch_taken_0x2c3d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d0c) {
            ctx->pc = 0x2C3EB0u;
            goto label_2c3eb0;
        }
    }
    ctx->pc = 0x2C3D14u;
label_2c3d14:
    // 0x2c3d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3d18:
    // 0x2c3d18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c3d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c3d1c:
    // 0x2c3d1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c3d20:
    // 0x2c3d20: 0x40f809  jalr        $v0
label_2c3d24:
    if (ctx->pc == 0x2C3D24u) {
        ctx->pc = 0x2C3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D20u;
        // 0x2c3d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D28u;
        goto label_2c3d28;
    }
    ctx->pc = 0x2C3D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3D28u);
        ctx->pc = 0x2C3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D20u;
        // 0x2c3d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D20u, 0x2C3D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3D28u;
label_2c3d28:
    // 0x2c3d28: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2c3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2c3d2c:
    // 0x2c3d2c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c3d30:
    // 0x2c3d30: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c3d34:
    // 0x2c3d34: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c3d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d38:
    // 0x2c3d38: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2c3d3c:
    // 0x2c3d3c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c3d40:
    // 0x2c3d40: 0xc0cdb38  jal         func_336CE0
label_2c3d44:
    if (ctx->pc == 0x2C3D44u) {
        ctx->pc = 0x2C3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D40u;
        // 0x2c3d44: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D48u;
        goto label_2c3d48;
    }
    ctx->pc = 0x2C3D40u;
    SET_GPR_U32(ctx, 31, 0x2C3D48u);
    ctx->pc = 0x2C3D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D40u;
    // 0x2c3d44: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C3D40u, 0x2C3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D48u;
label_2c3d48:
    // 0x2c3d48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3d4c:
    // 0x2c3d4c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2c3d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2c3d50:
    // 0x2c3d50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c3d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c3d54:
    // 0x2c3d54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c3d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2c3d58:
    // 0x2c3d58: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2c3d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c3d5c:
    // 0x2c3d5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c3d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2c3d60:
    // 0x2c3d60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c3d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2c3d64:
    // 0x2c3d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3d68:
    // 0x2c3d68: 0x0  nop
    ctx->pc = 0x2c3d68u;
    // NOP
label_2c3d6c:
    // 0x2c3d6c: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
label_2c3d70:
    if (ctx->pc == 0x2C3D70u) {
        ctx->pc = 0x2C3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D6Cu;
        // 0x2c3d70: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D74u;
        goto label_2c3d74;
    }
    ctx->pc = 0x2C3D6Cu;
    {
        const bool branch_taken_0x2c3d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3d6c) {
            ctx->pc = 0x2C3D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3D6Cu;
            // 0x2c3d70: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DE4u;
            goto label_2c3de4;
        }
    }
    ctx->pc = 0x2C3D74u;
label_2c3d74:
    // 0x2c3d74: 0x16760063  bne         $s3, $s6, . + 4 + (0x63 << 2)
label_2c3d78:
    if (ctx->pc == 0x2C3D78u) {
        ctx->pc = 0x2C3D7Cu;
        goto label_2c3d7c;
    }
    ctx->pc = 0x2C3D74u;
    {
        const bool branch_taken_0x2c3d74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        if (branch_taken_0x2c3d74) {
            ctx->pc = 0x2C3F04u;
            goto label_2c3f04;
        }
    }
    ctx->pc = 0x2C3D7Cu;
label_2c3d7c:
    // 0x2c3d7c: 0xc0a4e54  jal         func_293950
label_2c3d80:
    if (ctx->pc == 0x2C3D80u) {
        ctx->pc = 0x2C3D84u;
        goto label_2c3d84;
    }
    ctx->pc = 0x2C3D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3D84u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C3D7Cu, 0x2C3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D84u;
label_2c3d84:
    // 0x2c3d84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d88:
    // 0x2c3d88: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_2c3d8c:
    if (ctx->pc == 0x2C3D8Cu) {
        ctx->pc = 0x2C3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D88u;
        // 0x2c3d8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D90u;
        goto label_2c3d90;
    }
    ctx->pc = 0x2C3D88u;
    {
        const bool branch_taken_0x2c3d88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d88) {
            ctx->pc = 0x2C3D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3D88u;
            // 0x2c3d8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DD4u;
            goto label_2c3dd4;
        }
    }
    ctx->pc = 0x2C3D90u;
label_2c3d90:
    // 0x2c3d90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3d94:
    // 0x2c3d94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c3d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c3d98:
    // 0x2c3d98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c3d9c:
    // 0x2c3d9c: 0x40f809  jalr        $v0
label_2c3da0:
    if (ctx->pc == 0x2C3DA0u) {
        ctx->pc = 0x2C3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D9Cu;
        // 0x2c3da0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DA4u;
        goto label_2c3da4;
    }
    ctx->pc = 0x2C3D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3DA4u);
        ctx->pc = 0x2C3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D9Cu;
        // 0x2c3da0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D9Cu, 0x2C3DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3DA4u;
label_2c3da4:
    // 0x2c3da4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c3da8:
    // 0x2c3da8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3dac:
    // 0x2c3dac: 0x90680adb  lbu         $t0, 0xADB($v1)
    ctx->pc = 0x2c3dacu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2779)));
label_2c3db0:
    // 0x2c3db0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3db4:
    // 0x2c3db4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2c3db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_2c3db8:
    // 0x2c3db8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3dbc:
    // 0x2c3dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dc0:
    // 0x2c3dc0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_2c3dc4:
    // 0x2c3dc4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c3dc8:
    // 0x2c3dc8: 0xc0ac13c  jal         func_2B04F0
label_2c3dcc:
    if (ctx->pc == 0x2C3DCCu) {
        ctx->pc = 0x2C3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DC8u;
        // 0x2c3dcc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DD0u;
        goto label_2c3dd0;
    }
    ctx->pc = 0x2C3DC8u;
    SET_GPR_U32(ctx, 31, 0x2C3DD0u);
    ctx->pc = 0x2C3DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DC8u;
    // 0x2c3dcc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x2C3DC8u, 0x2C3DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DD0u;
label_2c3dd0:
    // 0x2c3dd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3dd4:
    // 0x2c3dd4: 0xc0a35d6  jal         func_28D758
label_2c3dd8:
    if (ctx->pc == 0x2C3DD8u) {
        ctx->pc = 0x2C3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DD4u;
        // 0x2c3dd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DDCu;
        goto label_2c3ddc;
    }
    ctx->pc = 0x2C3DD4u;
    SET_GPR_U32(ctx, 31, 0x2C3DDCu);
    ctx->pc = 0x2C3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DD4u;
    // 0x2c3dd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C3DD4u, 0x2C3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DDCu;
label_2c3ddc:
    // 0x2c3ddc: 0x10000093  b           . + 4 + (0x93 << 2)
label_2c3de0:
    if (ctx->pc == 0x2C3DE0u) {
        ctx->pc = 0x2C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DDCu;
        // 0x2c3de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DE4u;
        goto label_2c3de4;
    }
    ctx->pc = 0x2C3DDCu;
    {
        const bool branch_taken_0x2c3ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DDCu;
        // 0x2c3de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ddc) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3DE4u;
label_2c3de4:
    // 0x2c3de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c3de8:
    // 0x2c3de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dec:
    // 0x2c3dec: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2c3decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2c3df0:
    // 0x2c3df0: 0xc0888a2  jal         func_222288
label_2c3df4:
    if (ctx->pc == 0x2C3DF4u) {
        ctx->pc = 0x2C3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF0u;
        // 0x2c3df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DF8u;
        goto label_2c3df8;
    }
    ctx->pc = 0x2C3DF0u;
    SET_GPR_U32(ctx, 31, 0x2C3DF8u);
    ctx->pc = 0x2C3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DF0u;
    // 0x2c3df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C3DF0u, 0x2C3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DF8u;
label_2c3df8:
    // 0x2c3df8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2c3dfc:
    if (ctx->pc == 0x2C3DFCu) {
        ctx->pc = 0x2C3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF8u;
        // 0x2c3dfc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E00u;
        goto label_2c3e00;
    }
    ctx->pc = 0x2C3DF8u;
    {
        const bool branch_taken_0x2c3df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF8u;
        // 0x2c3dfc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3df8) {
            ctx->pc = 0x2C3EFCu;
            goto label_2c3efc;
        }
    }
    ctx->pc = 0x2C3E00u;
label_2c3e00:
    // 0x2c3e00: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2c3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2c3e04:
    // 0x2c3e04: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2c3e08:
    if (ctx->pc == 0x2C3E08u) {
        ctx->pc = 0x2C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E04u;
        // 0x2c3e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E0Cu;
        goto label_2c3e0c;
    }
    ctx->pc = 0x2C3E04u;
    {
        const bool branch_taken_0x2c3e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E04u;
        // 0x2c3e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e04) {
            ctx->pc = 0x2C3E2Cu;
            goto label_2c3e2c;
        }
    }
    ctx->pc = 0x2C3E0Cu;
label_2c3e0c:
    // 0x2c3e0c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2c3e10:
    if (ctx->pc == 0x2C3E10u) {
        ctx->pc = 0x2C3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E0Cu;
        // 0x2c3e10: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E14u;
        goto label_2c3e14;
    }
    ctx->pc = 0x2C3E0Cu;
    {
        const bool branch_taken_0x2c3e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E0Cu;
        // 0x2c3e10: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e0c) {
            ctx->pc = 0x2C3E2Cu;
            goto label_2c3e2c;
        }
    }
    ctx->pc = 0x2C3E14u;
label_2c3e14:
    // 0x2c3e14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2c3e18:
    if (ctx->pc == 0x2C3E18u) {
        ctx->pc = 0x2C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E14u;
        // 0x2c3e18: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E1Cu;
        goto label_2c3e1c;
    }
    ctx->pc = 0x2C3E14u;
    {
        const bool branch_taken_0x2c3e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E14u;
        // 0x2c3e18: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e14) {
            ctx->pc = 0x2C3E2Cu;
            goto label_2c3e2c;
        }
    }
    ctx->pc = 0x2C3E1Cu;
label_2c3e1c:
    // 0x2c3e1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2c3e20:
    if (ctx->pc == 0x2C3E20u) {
        ctx->pc = 0x2C3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E1Cu;
        // 0x2c3e20: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E24u;
        goto label_2c3e24;
    }
    ctx->pc = 0x2C3E1Cu;
    {
        const bool branch_taken_0x2c3e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E1Cu;
        // 0x2c3e20: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e1c) {
            ctx->pc = 0x2C3E2Cu;
            goto label_2c3e2c;
        }
    }
    ctx->pc = 0x2C3E24u;
label_2c3e24:
    // 0x2c3e24: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2c3e28:
    if (ctx->pc == 0x2C3E28u) {
        ctx->pc = 0x2C3E2Cu;
        goto label_2c3e2c;
    }
    ctx->pc = 0x2C3E24u;
    {
        const bool branch_taken_0x2c3e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3e24) {
            ctx->pc = 0x2C3E84u;
            goto label_2c3e84;
        }
    }
    ctx->pc = 0x2C3E2Cu;
label_2c3e2c:
    // 0x2c3e2c: 0xc0a367c  jal         func_28D9F0
label_2c3e30:
    if (ctx->pc == 0x2C3E30u) {
        ctx->pc = 0x2C3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E2Cu;
        // 0x2c3e30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E34u;
        goto label_2c3e34;
    }
    ctx->pc = 0x2C3E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E34u);
    ctx->pc = 0x2C3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E2Cu;
    // 0x2c3e30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C3E2Cu, 0x2C3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E34u;
label_2c3e34:
    // 0x2c3e34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e38:
    // 0x2c3e38: 0x1240007c  beqz        $s2, . + 4 + (0x7C << 2)
label_2c3e3c:
    if (ctx->pc == 0x2C3E3Cu) {
        ctx->pc = 0x2C3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E38u;
        // 0x2c3e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E40u;
        goto label_2c3e40;
    }
    ctx->pc = 0x2C3E38u;
    {
        const bool branch_taken_0x2c3e38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E38u;
        // 0x2c3e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e38) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3E40u;
label_2c3e40:
    // 0x2c3e40: 0xc087420  jal         func_21D080
label_2c3e44:
    if (ctx->pc == 0x2C3E44u) {
        ctx->pc = 0x2C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E40u;
        // 0x2c3e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E48u;
        goto label_2c3e48;
    }
    ctx->pc = 0x2C3E40u;
    SET_GPR_U32(ctx, 31, 0x2C3E48u);
    ctx->pc = 0x2C3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E40u;
    // 0x2c3e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2C3E40u, 0x2C3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E48u;
label_2c3e48:
    // 0x2c3e48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c3e4c:
    // 0x2c3e4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3e50:
    // 0x2c3e50: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2c3e50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c3e54:
    // 0x2c3e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e58:
    // 0x2c3e58: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2c3e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2c3e5c:
    // 0x2c3e5c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2c3e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2c3e60:
    // 0x2c3e60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3e64:
    // 0x2c3e64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e68:
    // 0x2c3e68: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c3e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c3e6c:
    // 0x2c3e6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3e70:
    // 0x2c3e70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c3e70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e74:
    // 0x2c3e74: 0xc0bee7a  jal         func_2FB9E8
label_2c3e78:
    if (ctx->pc == 0x2C3E78u) {
        ctx->pc = 0x2C3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E74u;
        // 0x2c3e78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E7Cu;
        goto label_2c3e7c;
    }
    ctx->pc = 0x2C3E74u;
    SET_GPR_U32(ctx, 31, 0x2C3E7Cu);
    ctx->pc = 0x2C3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E74u;
    // 0x2c3e78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C3E74u, 0x2C3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E7Cu;
label_2c3e7c:
    // 0x2c3e7c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2c3e80:
    if (ctx->pc == 0x2C3E80u) {
        ctx->pc = 0x2C3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E7Cu;
        // 0x2c3e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E84u;
        goto label_2c3e84;
    }
    ctx->pc = 0x2C3E7Cu;
    {
        const bool branch_taken_0x2c3e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E7Cu;
        // 0x2c3e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e7c) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3E84u;
label_2c3e84:
    // 0x2c3e84: 0xc0a4e54  jal         func_293950
label_2c3e88:
    if (ctx->pc == 0x2C3E88u) {
        ctx->pc = 0x2C3E8Cu;
        goto label_2c3e8c;
    }
    ctx->pc = 0x2C3E84u;
    SET_GPR_U32(ctx, 31, 0x2C3E8Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C3E84u, 0x2C3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E8Cu;
label_2c3e8c:
    // 0x2c3e8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e90:
    // 0x2c3e90: 0x1200ff2f  beqz        $s0, . + 4 + (-0xD1 << 2)
label_2c3e94:
    if (ctx->pc == 0x2C3E94u) {
        ctx->pc = 0x2C3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E90u;
        // 0x2c3e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E98u;
        goto label_2c3e98;
    }
    ctx->pc = 0x2C3E90u;
    {
        const bool branch_taken_0x2c3e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E90u;
        // 0x2c3e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e90) {
            ctx->pc = 0x2C3B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b50;
        }
    }
    ctx->pc = 0x2C3E98u;
label_2c3e98:
    // 0x2c3e98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3e9c:
    // 0x2c3e9c: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x2c3e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2c3ea0:
    // 0x2c3ea0: 0xc0acb08  jal         func_2B2C20
label_2c3ea4:
    if (ctx->pc == 0x2C3EA4u) {
        ctx->pc = 0x2C3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EA0u;
        // 0x2c3ea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EA8u;
        goto label_2c3ea8;
    }
    ctx->pc = 0x2C3EA0u;
    SET_GPR_U32(ctx, 31, 0x2C3EA8u);
    ctx->pc = 0x2C3EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EA0u;
    // 0x2c3ea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2C3EA0u, 0x2C3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EA8u;
label_2c3ea8:
    // 0x2c3ea8: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
label_2c3eac:
    if (ctx->pc == 0x2C3EACu) {
        ctx->pc = 0x2C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EA8u;
        // 0x2c3eac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EB0u;
        goto label_2c3eb0;
    }
    ctx->pc = 0x2C3EA8u;
    {
        const bool branch_taken_0x2c3ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EA8u;
        // 0x2c3eac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ea8) {
            ctx->pc = 0x2C3B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b54;
        }
    }
    ctx->pc = 0x2C3EB0u;
label_2c3eb0:
    // 0x2c3eb0: 0xc0e409a  jal         func_390268
label_2c3eb4:
    if (ctx->pc == 0x2C3EB4u) {
        ctx->pc = 0x2C3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EB0u;
        // 0x2c3eb4: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EB8u;
        goto label_2c3eb8;
    }
    ctx->pc = 0x2C3EB0u;
    SET_GPR_U32(ctx, 31, 0x2C3EB8u);
    ctx->pc = 0x2C3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EB0u;
    // 0x2c3eb4: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C3EB0u, 0x2C3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EB8u;
label_2c3eb8:
    // 0x2c3eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ebc:
    // 0x2c3ebc: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2c3ec0:
    if (ctx->pc == 0x2C3EC0u) {
        ctx->pc = 0x2C3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EBCu;
        // 0x2c3ec0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EC4u;
        goto label_2c3ec4;
    }
    ctx->pc = 0x2C3EBCu;
    {
        const bool branch_taken_0x2c3ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EBCu;
        // 0x2c3ec0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ebc) {
            ctx->pc = 0x2C3F5Cu;
            goto label_2c3f5c;
        }
    }
    ctx->pc = 0x2C3EC4u;
label_2c3ec4:
    // 0x2c3ec4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2c3ec4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2c3ec8:
    // 0x2c3ec8: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c3ecc:
    // 0x2c3ecc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c3eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ed0:
    // 0x2c3ed0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c3ed4:
    // 0x2c3ed4: 0xc0cdb38  jal         func_336CE0
label_2c3ed8:
    if (ctx->pc == 0x2C3ED8u) {
        ctx->pc = 0x2C3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ED4u;
        // 0x2c3ed8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EDCu;
        goto label_2c3edc;
    }
    ctx->pc = 0x2C3ED4u;
    SET_GPR_U32(ctx, 31, 0x2C3EDCu);
    ctx->pc = 0x2C3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3ED4u;
    // 0x2c3ed8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C3ED4u, 0x2C3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EDCu;
label_2c3edc:
    // 0x2c3edc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3ee0:
    // 0x2c3ee0: 0xc0a2fc0  jal         func_28BF00
label_2c3ee4:
    if (ctx->pc == 0x2C3EE4u) {
        ctx->pc = 0x2C3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EE0u;
        // 0x2c3ee4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EE8u;
        goto label_2c3ee8;
    }
    ctx->pc = 0x2C3EE0u;
    SET_GPR_U32(ctx, 31, 0x2C3EE8u);
    ctx->pc = 0x2C3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EE0u;
    // 0x2c3ee4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2C3EE0u, 0x2C3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EE8u;
label_2c3ee8:
    // 0x2c3ee8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c3ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2c3eec:
    // 0x2c3eec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c3eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3ef0:
    // 0x2c3ef0: 0x0  nop
    ctx->pc = 0x2c3ef0u;
    // NOP
label_2c3ef4:
    // 0x2c3ef4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2c3ef8:
    if (ctx->pc == 0x2C3EF8u) {
        ctx->pc = 0x2C3EFCu;
        goto label_2c3efc;
    }
    ctx->pc = 0x2C3EF4u;
    {
        const bool branch_taken_0x2c3ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3ef4) {
            ctx->pc = 0x2C3F5Cu;
            goto label_2c3f5c;
        }
    }
    ctx->pc = 0x2C3EFCu;
label_2c3efc:
    // 0x2c3efc: 0x1276ff9f  beq         $s3, $s6, . + 4 + (-0x61 << 2)
label_2c3f00:
    if (ctx->pc == 0x2C3F00u) {
        ctx->pc = 0x2C3F04u;
        goto label_2c3f04;
    }
    ctx->pc = 0x2C3EFCu;
    {
        const bool branch_taken_0x2c3efc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2c3efc) {
            ctx->pc = 0x2C3D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3d7c;
        }
    }
    ctx->pc = 0x2C3F04u;
label_2c3f04:
    // 0x2c3f04: 0xc0a4e54  jal         func_293950
label_2c3f08:
    if (ctx->pc == 0x2C3F08u) {
        ctx->pc = 0x2C3F0Cu;
        goto label_2c3f0c;
    }
    ctx->pc = 0x2C3F04u;
    SET_GPR_U32(ctx, 31, 0x2C3F0Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C3F04u, 0x2C3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F0Cu;
label_2c3f0c:
    // 0x2c3f0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f10:
    // 0x2c3f10: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_2c3f14:
    if (ctx->pc == 0x2C3F14u) {
        ctx->pc = 0x2C3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F10u;
        // 0x2c3f14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F18u;
        goto label_2c3f18;
    }
    ctx->pc = 0x2C3F10u;
    {
        const bool branch_taken_0x2c3f10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f10) {
            ctx->pc = 0x2C3F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F10u;
            // 0x2c3f14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3F4Cu;
            goto label_2c3f4c;
        }
    }
    ctx->pc = 0x2C3F18u;
label_2c3f18:
    // 0x2c3f18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3f1c:
    // 0x2c3f1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c3f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c3f20:
    // 0x2c3f20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c3f24:
    // 0x2c3f24: 0x40f809  jalr        $v0
label_2c3f28:
    if (ctx->pc == 0x2C3F28u) {
        ctx->pc = 0x2C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F24u;
        // 0x2c3f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F2Cu;
        goto label_2c3f2c;
    }
    ctx->pc = 0x2C3F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3F2Cu);
        ctx->pc = 0x2C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F24u;
        // 0x2c3f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F24u, 0x2C3F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3F2Cu;
label_2c3f2c:
    // 0x2c3f2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3f30:
    // 0x2c3f30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f34:
    // 0x2c3f34: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2c3f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_2c3f38:
    // 0x2c3f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3f3c:
    // 0x2c3f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f40:
    // 0x2c3f40: 0xc0ac856  jal         func_2B2158
label_2c3f44:
    if (ctx->pc == 0x2C3F44u) {
        ctx->pc = 0x2C3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F40u;
        // 0x2c3f44: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F48u;
        goto label_2c3f48;
    }
    ctx->pc = 0x2C3F40u;
    SET_GPR_U32(ctx, 31, 0x2C3F48u);
    ctx->pc = 0x2C3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F40u;
    // 0x2c3f44: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2158u, 0x2C3F40u, 0x2C3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F48u;
label_2c3f48:
    // 0x2c3f48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3f4c:
    // 0x2c3f4c: 0xc0a35d6  jal         func_28D758
label_2c3f50:
    if (ctx->pc == 0x2C3F50u) {
        ctx->pc = 0x2C3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F4Cu;
        // 0x2c3f50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F54u;
        goto label_2c3f54;
    }
    ctx->pc = 0x2C3F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F54u);
    ctx->pc = 0x2C3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F4Cu;
    // 0x2c3f50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C3F4Cu, 0x2C3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F54u;
label_2c3f54:
    // 0x2c3f54: 0x10000035  b           . + 4 + (0x35 << 2)
label_2c3f58:
    if (ctx->pc == 0x2C3F58u) {
        ctx->pc = 0x2C3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F54u;
        // 0x2c3f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F5Cu;
        goto label_2c3f5c;
    }
    ctx->pc = 0x2C3F54u;
    {
        const bool branch_taken_0x2c3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F54u;
        // 0x2c3f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f54) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3F5Cu;
label_2c3f5c:
    // 0x2c3f5c: 0xc0a4e54  jal         func_293950
label_2c3f60:
    if (ctx->pc == 0x2C3F60u) {
        ctx->pc = 0x2C3F64u;
        goto label_2c3f64;
    }
    ctx->pc = 0x2C3F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F64u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C3F5Cu, 0x2C3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F64u;
label_2c3f64:
    // 0x2c3f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f68:
    // 0x2c3f68: 0x1200fef9  beqz        $s0, . + 4 + (-0x107 << 2)
label_2c3f6c:
    if (ctx->pc == 0x2C3F6Cu) {
        ctx->pc = 0x2C3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F68u;
        // 0x2c3f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F70u;
        goto label_2c3f70;
    }
    ctx->pc = 0x2C3F68u;
    {
        const bool branch_taken_0x2c3f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F68u;
        // 0x2c3f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f68) {
            ctx->pc = 0x2C3B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b50;
        }
    }
    ctx->pc = 0x2C3F70u;
label_2c3f70:
    // 0x2c3f70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3f74:
    // 0x2c3f74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3f78:
    // 0x2c3f78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c3f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3f7c:
    // 0x2c3f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f80:
    // 0x2c3f80: 0x24080bb8  addiu       $t0, $zero, 0xBB8
    ctx->pc = 0x2c3f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2c3f84:
    // 0x2c3f84: 0x24091770  addiu       $t1, $zero, 0x1770
    ctx->pc = 0x2c3f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2c3f88:
    // 0x2c3f88: 0x240a07d0  addiu       $t2, $zero, 0x7D0
    ctx->pc = 0x2c3f88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2c3f8c:
    // 0x2c3f8c: 0xc0ad026  jal         func_2B4098
label_2c3f90:
    if (ctx->pc == 0x2C3F90u) {
        ctx->pc = 0x2C3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F8Cu;
        // 0x2c3f90: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F94u;
        goto label_2c3f94;
    }
    ctx->pc = 0x2C3F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F94u);
    ctx->pc = 0x2C3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F8Cu;
    // 0x2c3f90: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4098u, 0x2C3F8Cu, 0x2C3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F94u;
label_2c3f94:
    // 0x2c3f94: 0x1000feef  b           . + 4 + (-0x111 << 2)
label_2c3f98:
    if (ctx->pc == 0x2C3F98u) {
        ctx->pc = 0x2C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F94u;
        // 0x2c3f98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F9Cu;
        goto label_2c3f9c;
    }
    ctx->pc = 0x2C3F94u;
    {
        const bool branch_taken_0x2c3f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F94u;
        // 0x2c3f98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f94) {
            ctx->pc = 0x2C3B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b54;
        }
    }
    ctx->pc = 0x2C3F9Cu;
label_2c3f9c:
    // 0x2c3f9c: 0x16760023  bne         $s3, $s6, . + 4 + (0x23 << 2)
label_2c3fa0:
    if (ctx->pc == 0x2C3FA0u) {
        ctx->pc = 0x2C3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F9Cu;
        // 0x2c3fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FA4u;
        goto label_2c3fa4;
    }
    ctx->pc = 0x2C3F9Cu;
    {
        const bool branch_taken_0x2c3f9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F9Cu;
        // 0x2c3fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f9c) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C3FA4u;
label_2c3fa4:
    // 0x2c3fa4: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
label_2c3fa8:
    if (ctx->pc == 0x2C3FA8u) {
        ctx->pc = 0x2C3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FA4u;
        // 0x2c3fa8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FACu;
        goto label_2c3fac;
    }
    ctx->pc = 0x2C3FA4u;
    {
        const bool branch_taken_0x2c3fa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FA4u;
        // 0x2c3fa8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fa4) {
            ctx->pc = 0x2C4030u;
            goto label_2c4030;
        }
    }
    ctx->pc = 0x2C3FACu;
label_2c3fac:
    // 0x2c3fac: 0xc0a2ab0  jal         func_28AAC0
label_2c3fb0:
    if (ctx->pc == 0x2C3FB0u) {
        ctx->pc = 0x2C3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FACu;
        // 0x2c3fb0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FB4u;
        goto label_2c3fb4;
    }
    ctx->pc = 0x2C3FACu;
    SET_GPR_U32(ctx, 31, 0x2C3FB4u);
    ctx->pc = 0x2C3FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FACu;
    // 0x2c3fb0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C3FACu, 0x2C3FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FB4u;
label_2c3fb4:
    // 0x2c3fb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c3fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c3fb8:
    // 0x2c3fb8: 0xc0cdb38  jal         func_336CE0
label_2c3fbc:
    if (ctx->pc == 0x2C3FBCu) {
        ctx->pc = 0x2C3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FB8u;
        // 0x2c3fbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FC0u;
        goto label_2c3fc0;
    }
    ctx->pc = 0x2C3FB8u;
    SET_GPR_U32(ctx, 31, 0x2C3FC0u);
    ctx->pc = 0x2C3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FB8u;
    // 0x2c3fbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C3FB8u, 0x2C3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FC0u;
label_2c3fc0:
    // 0x2c3fc0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2c3fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2c3fc4:
    // 0x2c3fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c3fc8:
    // 0x2c3fc8: 0x0  nop
    ctx->pc = 0x2c3fc8u;
    // NOP
label_2c3fcc:
    // 0x2c3fcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3fd0:
    // 0x2c3fd0: 0x0  nop
    ctx->pc = 0x2c3fd0u;
    // NOP
label_2c3fd4:
    // 0x2c3fd4: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2c3fd8:
    if (ctx->pc == 0x2C3FD8u) {
        ctx->pc = 0x2C3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FD4u;
        // 0x2c3fd8: 0xa2b4003b  sb          $s4, 0x3B($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 59), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FDCu;
        goto label_2c3fdc;
    }
    ctx->pc = 0x2C3FD4u;
    {
        const bool branch_taken_0x2c3fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3fd4) {
            ctx->pc = 0x2C3FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3FD4u;
            // 0x2c3fd8: 0xa2b4003b  sb          $s4, 0x3B($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 59), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4028u;
            goto label_2c4028;
        }
    }
    ctx->pc = 0x2C3FDCu;
label_2c3fdc:
    // 0x2c3fdc: 0xc0a367c  jal         func_28D9F0
label_2c3fe0:
    if (ctx->pc == 0x2C3FE0u) {
        ctx->pc = 0x2C3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FDCu;
        // 0x2c3fe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FE4u;
        goto label_2c3fe4;
    }
    ctx->pc = 0x2C3FDCu;
    SET_GPR_U32(ctx, 31, 0x2C3FE4u);
    ctx->pc = 0x2C3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FDCu;
    // 0x2c3fe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C3FDCu, 0x2C3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FE4u;
label_2c3fe4:
    // 0x2c3fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3fe8:
    // 0x2c3fe8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2c3fec:
    if (ctx->pc == 0x2C3FECu) {
        ctx->pc = 0x2C3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FE8u;
        // 0x2c3fec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FF0u;
        goto label_2c3ff0;
    }
    ctx->pc = 0x2C3FE8u;
    {
        const bool branch_taken_0x2c3fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FE8u;
        // 0x2c3fec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fe8) {
            ctx->pc = 0x2C4018u;
            goto label_2c4018;
        }
    }
    ctx->pc = 0x2C3FF0u;
label_2c3ff0:
    // 0x2c3ff0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c3ff4:
    // 0x2c3ff4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c3ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c3ff8:
    // 0x2c3ff8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c3ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ffc:
    // 0x2c3ffc: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x2c3ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c4000:
    // 0x2c4000: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4004:
    // 0x2c4004: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c4004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2c4008:
    // 0x2c4008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c400c:
    // 0x2c400c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c400cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4010:
    // 0x2c4010: 0xc0bee7a  jal         func_2FB9E8
label_2c4014:
    if (ctx->pc == 0x2C4014u) {
        ctx->pc = 0x2C4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4010u;
        // 0x2c4014: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4018u;
        goto label_2c4018;
    }
    ctx->pc = 0x2C4010u;
    SET_GPR_U32(ctx, 31, 0x2C4018u);
    ctx->pc = 0x2C4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4010u;
    // 0x2c4014: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C4010u, 0x2C4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4018u;
label_2c4018:
    // 0x2c4018: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2c4018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c401c:
    // 0x2c401c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c401cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4020:
    // 0x2c4020: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c4024:
    if (ctx->pc == 0x2C4024u) {
        ctx->pc = 0x2C4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4020u;
        // 0x2c4024: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4028u;
        goto label_2c4028;
    }
    ctx->pc = 0x2C4020u;
    {
        const bool branch_taken_0x2c4020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4020u;
        // 0x2c4024: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4020) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C4028u;
label_2c4028:
    // 0x2c4028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c402c:
    // 0x2c402c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c402cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c4030:
    // 0x2c4030: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c4030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c4034:
    // 0x2c4034: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c4034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c4038:
    // 0x2c4038: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2c4038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c403c:
    // 0x2c403c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2c403cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c4040:
    // 0x2c4040: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c4040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4044:
    // 0x2c4044: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2c4044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4048:
    // 0x2c4048: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2c4048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c404c:
    // 0x2c404c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2c404cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4050:
    // 0x2c4050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4054:
    // 0x2c4054: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c4054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c4058:
    // 0x2c4058: 0x3e00008  jr          $ra
label_2c405c:
    if (ctx->pc == 0x2C405Cu) {
        ctx->pc = 0x2C405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4058u;
        // 0x2c405c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4060u;
        goto label_fallthrough_0x2c4058;
    }
    ctx->pc = 0x2C4058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4058u;
        // 0x2c405c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4058:
    ctx->pc = 0x2C4060u;
}
