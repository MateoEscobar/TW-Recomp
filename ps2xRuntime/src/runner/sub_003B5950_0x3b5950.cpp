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

// Function: sub_003B5950
// Address: 0x3b5950 - 0x3b61d8
void sub_003B5950_0x3b5950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5950_0x3b5950");
#endif

    switch (ctx->pc) {
        case 0x3b5950u: goto label_3b5950;
        case 0x3b5954u: goto label_3b5954;
        case 0x3b5958u: goto label_3b5958;
        case 0x3b595cu: goto label_3b595c;
        case 0x3b5960u: goto label_3b5960;
        case 0x3b5964u: goto label_3b5964;
        case 0x3b5968u: goto label_3b5968;
        case 0x3b596cu: goto label_3b596c;
        case 0x3b5970u: goto label_3b5970;
        case 0x3b5974u: goto label_3b5974;
        case 0x3b5978u: goto label_3b5978;
        case 0x3b597cu: goto label_3b597c;
        case 0x3b5980u: goto label_3b5980;
        case 0x3b5984u: goto label_3b5984;
        case 0x3b5988u: goto label_3b5988;
        case 0x3b598cu: goto label_3b598c;
        case 0x3b5990u: goto label_3b5990;
        case 0x3b5994u: goto label_3b5994;
        case 0x3b5998u: goto label_3b5998;
        case 0x3b599cu: goto label_3b599c;
        case 0x3b59a0u: goto label_3b59a0;
        case 0x3b59a4u: goto label_3b59a4;
        case 0x3b59a8u: goto label_3b59a8;
        case 0x3b59acu: goto label_3b59ac;
        case 0x3b59b0u: goto label_3b59b0;
        case 0x3b59b4u: goto label_3b59b4;
        case 0x3b59b8u: goto label_3b59b8;
        case 0x3b59bcu: goto label_3b59bc;
        case 0x3b59c0u: goto label_3b59c0;
        case 0x3b59c4u: goto label_3b59c4;
        case 0x3b59c8u: goto label_3b59c8;
        case 0x3b59ccu: goto label_3b59cc;
        case 0x3b59d0u: goto label_3b59d0;
        case 0x3b59d4u: goto label_3b59d4;
        case 0x3b59d8u: goto label_3b59d8;
        case 0x3b59dcu: goto label_3b59dc;
        case 0x3b59e0u: goto label_3b59e0;
        case 0x3b59e4u: goto label_3b59e4;
        case 0x3b59e8u: goto label_3b59e8;
        case 0x3b59ecu: goto label_3b59ec;
        case 0x3b59f0u: goto label_3b59f0;
        case 0x3b59f4u: goto label_3b59f4;
        case 0x3b59f8u: goto label_3b59f8;
        case 0x3b59fcu: goto label_3b59fc;
        case 0x3b5a00u: goto label_3b5a00;
        case 0x3b5a04u: goto label_3b5a04;
        case 0x3b5a08u: goto label_3b5a08;
        case 0x3b5a0cu: goto label_3b5a0c;
        case 0x3b5a10u: goto label_3b5a10;
        case 0x3b5a14u: goto label_3b5a14;
        case 0x3b5a18u: goto label_3b5a18;
        case 0x3b5a1cu: goto label_3b5a1c;
        case 0x3b5a20u: goto label_3b5a20;
        case 0x3b5a24u: goto label_3b5a24;
        case 0x3b5a28u: goto label_3b5a28;
        case 0x3b5a2cu: goto label_3b5a2c;
        case 0x3b5a30u: goto label_3b5a30;
        case 0x3b5a34u: goto label_3b5a34;
        case 0x3b5a38u: goto label_3b5a38;
        case 0x3b5a3cu: goto label_3b5a3c;
        case 0x3b5a40u: goto label_3b5a40;
        case 0x3b5a44u: goto label_3b5a44;
        case 0x3b5a48u: goto label_3b5a48;
        case 0x3b5a4cu: goto label_3b5a4c;
        case 0x3b5a50u: goto label_3b5a50;
        case 0x3b5a54u: goto label_3b5a54;
        case 0x3b5a58u: goto label_3b5a58;
        case 0x3b5a5cu: goto label_3b5a5c;
        case 0x3b5a60u: goto label_3b5a60;
        case 0x3b5a64u: goto label_3b5a64;
        case 0x3b5a68u: goto label_3b5a68;
        case 0x3b5a6cu: goto label_3b5a6c;
        case 0x3b5a70u: goto label_3b5a70;
        case 0x3b5a74u: goto label_3b5a74;
        case 0x3b5a78u: goto label_3b5a78;
        case 0x3b5a7cu: goto label_3b5a7c;
        case 0x3b5a80u: goto label_3b5a80;
        case 0x3b5a84u: goto label_3b5a84;
        case 0x3b5a88u: goto label_3b5a88;
        case 0x3b5a8cu: goto label_3b5a8c;
        case 0x3b5a90u: goto label_3b5a90;
        case 0x3b5a94u: goto label_3b5a94;
        case 0x3b5a98u: goto label_3b5a98;
        case 0x3b5a9cu: goto label_3b5a9c;
        case 0x3b5aa0u: goto label_3b5aa0;
        case 0x3b5aa4u: goto label_3b5aa4;
        case 0x3b5aa8u: goto label_3b5aa8;
        case 0x3b5aacu: goto label_3b5aac;
        case 0x3b5ab0u: goto label_3b5ab0;
        case 0x3b5ab4u: goto label_3b5ab4;
        case 0x3b5ab8u: goto label_3b5ab8;
        case 0x3b5abcu: goto label_3b5abc;
        case 0x3b5ac0u: goto label_3b5ac0;
        case 0x3b5ac4u: goto label_3b5ac4;
        case 0x3b5ac8u: goto label_3b5ac8;
        case 0x3b5accu: goto label_3b5acc;
        case 0x3b5ad0u: goto label_3b5ad0;
        case 0x3b5ad4u: goto label_3b5ad4;
        case 0x3b5ad8u: goto label_3b5ad8;
        case 0x3b5adcu: goto label_3b5adc;
        case 0x3b5ae0u: goto label_3b5ae0;
        case 0x3b5ae4u: goto label_3b5ae4;
        case 0x3b5ae8u: goto label_3b5ae8;
        case 0x3b5aecu: goto label_3b5aec;
        case 0x3b5af0u: goto label_3b5af0;
        case 0x3b5af4u: goto label_3b5af4;
        case 0x3b5af8u: goto label_3b5af8;
        case 0x3b5afcu: goto label_3b5afc;
        case 0x3b5b00u: goto label_3b5b00;
        case 0x3b5b04u: goto label_3b5b04;
        case 0x3b5b08u: goto label_3b5b08;
        case 0x3b5b0cu: goto label_3b5b0c;
        case 0x3b5b10u: goto label_3b5b10;
        case 0x3b5b14u: goto label_3b5b14;
        case 0x3b5b18u: goto label_3b5b18;
        case 0x3b5b1cu: goto label_3b5b1c;
        case 0x3b5b20u: goto label_3b5b20;
        case 0x3b5b24u: goto label_3b5b24;
        case 0x3b5b28u: goto label_3b5b28;
        case 0x3b5b2cu: goto label_3b5b2c;
        case 0x3b5b30u: goto label_3b5b30;
        case 0x3b5b34u: goto label_3b5b34;
        case 0x3b5b38u: goto label_3b5b38;
        case 0x3b5b3cu: goto label_3b5b3c;
        case 0x3b5b40u: goto label_3b5b40;
        case 0x3b5b44u: goto label_3b5b44;
        case 0x3b5b48u: goto label_3b5b48;
        case 0x3b5b4cu: goto label_3b5b4c;
        case 0x3b5b50u: goto label_3b5b50;
        case 0x3b5b54u: goto label_3b5b54;
        case 0x3b5b58u: goto label_3b5b58;
        case 0x3b5b5cu: goto label_3b5b5c;
        case 0x3b5b60u: goto label_3b5b60;
        case 0x3b5b64u: goto label_3b5b64;
        case 0x3b5b68u: goto label_3b5b68;
        case 0x3b5b6cu: goto label_3b5b6c;
        case 0x3b5b70u: goto label_3b5b70;
        case 0x3b5b74u: goto label_3b5b74;
        case 0x3b5b78u: goto label_3b5b78;
        case 0x3b5b7cu: goto label_3b5b7c;
        case 0x3b5b80u: goto label_3b5b80;
        case 0x3b5b84u: goto label_3b5b84;
        case 0x3b5b88u: goto label_3b5b88;
        case 0x3b5b8cu: goto label_3b5b8c;
        case 0x3b5b90u: goto label_3b5b90;
        case 0x3b5b94u: goto label_3b5b94;
        case 0x3b5b98u: goto label_3b5b98;
        case 0x3b5b9cu: goto label_3b5b9c;
        case 0x3b5ba0u: goto label_3b5ba0;
        case 0x3b5ba4u: goto label_3b5ba4;
        case 0x3b5ba8u: goto label_3b5ba8;
        case 0x3b5bacu: goto label_3b5bac;
        case 0x3b5bb0u: goto label_3b5bb0;
        case 0x3b5bb4u: goto label_3b5bb4;
        case 0x3b5bb8u: goto label_3b5bb8;
        case 0x3b5bbcu: goto label_3b5bbc;
        case 0x3b5bc0u: goto label_3b5bc0;
        case 0x3b5bc4u: goto label_3b5bc4;
        case 0x3b5bc8u: goto label_3b5bc8;
        case 0x3b5bccu: goto label_3b5bcc;
        case 0x3b5bd0u: goto label_3b5bd0;
        case 0x3b5bd4u: goto label_3b5bd4;
        case 0x3b5bd8u: goto label_3b5bd8;
        case 0x3b5bdcu: goto label_3b5bdc;
        case 0x3b5be0u: goto label_3b5be0;
        case 0x3b5be4u: goto label_3b5be4;
        case 0x3b5be8u: goto label_3b5be8;
        case 0x3b5becu: goto label_3b5bec;
        case 0x3b5bf0u: goto label_3b5bf0;
        case 0x3b5bf4u: goto label_3b5bf4;
        case 0x3b5bf8u: goto label_3b5bf8;
        case 0x3b5bfcu: goto label_3b5bfc;
        case 0x3b5c00u: goto label_3b5c00;
        case 0x3b5c04u: goto label_3b5c04;
        case 0x3b5c08u: goto label_3b5c08;
        case 0x3b5c0cu: goto label_3b5c0c;
        case 0x3b5c10u: goto label_3b5c10;
        case 0x3b5c14u: goto label_3b5c14;
        case 0x3b5c18u: goto label_3b5c18;
        case 0x3b5c1cu: goto label_3b5c1c;
        case 0x3b5c20u: goto label_3b5c20;
        case 0x3b5c24u: goto label_3b5c24;
        case 0x3b5c28u: goto label_3b5c28;
        case 0x3b5c2cu: goto label_3b5c2c;
        case 0x3b5c30u: goto label_3b5c30;
        case 0x3b5c34u: goto label_3b5c34;
        case 0x3b5c38u: goto label_3b5c38;
        case 0x3b5c3cu: goto label_3b5c3c;
        case 0x3b5c40u: goto label_3b5c40;
        case 0x3b5c44u: goto label_3b5c44;
        case 0x3b5c48u: goto label_3b5c48;
        case 0x3b5c4cu: goto label_3b5c4c;
        case 0x3b5c50u: goto label_3b5c50;
        case 0x3b5c54u: goto label_3b5c54;
        case 0x3b5c58u: goto label_3b5c58;
        case 0x3b5c5cu: goto label_3b5c5c;
        case 0x3b5c60u: goto label_3b5c60;
        case 0x3b5c64u: goto label_3b5c64;
        case 0x3b5c68u: goto label_3b5c68;
        case 0x3b5c6cu: goto label_3b5c6c;
        case 0x3b5c70u: goto label_3b5c70;
        case 0x3b5c74u: goto label_3b5c74;
        case 0x3b5c78u: goto label_3b5c78;
        case 0x3b5c7cu: goto label_3b5c7c;
        case 0x3b5c80u: goto label_3b5c80;
        case 0x3b5c84u: goto label_3b5c84;
        case 0x3b5c88u: goto label_3b5c88;
        case 0x3b5c8cu: goto label_3b5c8c;
        case 0x3b5c90u: goto label_3b5c90;
        case 0x3b5c94u: goto label_3b5c94;
        case 0x3b5c98u: goto label_3b5c98;
        case 0x3b5c9cu: goto label_3b5c9c;
        case 0x3b5ca0u: goto label_3b5ca0;
        case 0x3b5ca4u: goto label_3b5ca4;
        case 0x3b5ca8u: goto label_3b5ca8;
        case 0x3b5cacu: goto label_3b5cac;
        case 0x3b5cb0u: goto label_3b5cb0;
        case 0x3b5cb4u: goto label_3b5cb4;
        case 0x3b5cb8u: goto label_3b5cb8;
        case 0x3b5cbcu: goto label_3b5cbc;
        case 0x3b5cc0u: goto label_3b5cc0;
        case 0x3b5cc4u: goto label_3b5cc4;
        case 0x3b5cc8u: goto label_3b5cc8;
        case 0x3b5cccu: goto label_3b5ccc;
        case 0x3b5cd0u: goto label_3b5cd0;
        case 0x3b5cd4u: goto label_3b5cd4;
        case 0x3b5cd8u: goto label_3b5cd8;
        case 0x3b5cdcu: goto label_3b5cdc;
        case 0x3b5ce0u: goto label_3b5ce0;
        case 0x3b5ce4u: goto label_3b5ce4;
        case 0x3b5ce8u: goto label_3b5ce8;
        case 0x3b5cecu: goto label_3b5cec;
        case 0x3b5cf0u: goto label_3b5cf0;
        case 0x3b5cf4u: goto label_3b5cf4;
        case 0x3b5cf8u: goto label_3b5cf8;
        case 0x3b5cfcu: goto label_3b5cfc;
        case 0x3b5d00u: goto label_3b5d00;
        case 0x3b5d04u: goto label_3b5d04;
        case 0x3b5d08u: goto label_3b5d08;
        case 0x3b5d0cu: goto label_3b5d0c;
        case 0x3b5d10u: goto label_3b5d10;
        case 0x3b5d14u: goto label_3b5d14;
        case 0x3b5d18u: goto label_3b5d18;
        case 0x3b5d1cu: goto label_3b5d1c;
        case 0x3b5d20u: goto label_3b5d20;
        case 0x3b5d24u: goto label_3b5d24;
        case 0x3b5d28u: goto label_3b5d28;
        case 0x3b5d2cu: goto label_3b5d2c;
        case 0x3b5d30u: goto label_3b5d30;
        case 0x3b5d34u: goto label_3b5d34;
        case 0x3b5d38u: goto label_3b5d38;
        case 0x3b5d3cu: goto label_3b5d3c;
        case 0x3b5d40u: goto label_3b5d40;
        case 0x3b5d44u: goto label_3b5d44;
        case 0x3b5d48u: goto label_3b5d48;
        case 0x3b5d4cu: goto label_3b5d4c;
        case 0x3b5d50u: goto label_3b5d50;
        case 0x3b5d54u: goto label_3b5d54;
        case 0x3b5d58u: goto label_3b5d58;
        case 0x3b5d5cu: goto label_3b5d5c;
        case 0x3b5d60u: goto label_3b5d60;
        case 0x3b5d64u: goto label_3b5d64;
        case 0x3b5d68u: goto label_3b5d68;
        case 0x3b5d6cu: goto label_3b5d6c;
        case 0x3b5d70u: goto label_3b5d70;
        case 0x3b5d74u: goto label_3b5d74;
        case 0x3b5d78u: goto label_3b5d78;
        case 0x3b5d7cu: goto label_3b5d7c;
        case 0x3b5d80u: goto label_3b5d80;
        case 0x3b5d84u: goto label_3b5d84;
        case 0x3b5d88u: goto label_3b5d88;
        case 0x3b5d8cu: goto label_3b5d8c;
        case 0x3b5d90u: goto label_3b5d90;
        case 0x3b5d94u: goto label_3b5d94;
        case 0x3b5d98u: goto label_3b5d98;
        case 0x3b5d9cu: goto label_3b5d9c;
        case 0x3b5da0u: goto label_3b5da0;
        case 0x3b5da4u: goto label_3b5da4;
        case 0x3b5da8u: goto label_3b5da8;
        case 0x3b5dacu: goto label_3b5dac;
        case 0x3b5db0u: goto label_3b5db0;
        case 0x3b5db4u: goto label_3b5db4;
        case 0x3b5db8u: goto label_3b5db8;
        case 0x3b5dbcu: goto label_3b5dbc;
        case 0x3b5dc0u: goto label_3b5dc0;
        case 0x3b5dc4u: goto label_3b5dc4;
        case 0x3b5dc8u: goto label_3b5dc8;
        case 0x3b5dccu: goto label_3b5dcc;
        case 0x3b5dd0u: goto label_3b5dd0;
        case 0x3b5dd4u: goto label_3b5dd4;
        case 0x3b5dd8u: goto label_3b5dd8;
        case 0x3b5ddcu: goto label_3b5ddc;
        case 0x3b5de0u: goto label_3b5de0;
        case 0x3b5de4u: goto label_3b5de4;
        case 0x3b5de8u: goto label_3b5de8;
        case 0x3b5decu: goto label_3b5dec;
        case 0x3b5df0u: goto label_3b5df0;
        case 0x3b5df4u: goto label_3b5df4;
        case 0x3b5df8u: goto label_3b5df8;
        case 0x3b5dfcu: goto label_3b5dfc;
        case 0x3b5e00u: goto label_3b5e00;
        case 0x3b5e04u: goto label_3b5e04;
        case 0x3b5e08u: goto label_3b5e08;
        case 0x3b5e0cu: goto label_3b5e0c;
        case 0x3b5e10u: goto label_3b5e10;
        case 0x3b5e14u: goto label_3b5e14;
        case 0x3b5e18u: goto label_3b5e18;
        case 0x3b5e1cu: goto label_3b5e1c;
        case 0x3b5e20u: goto label_3b5e20;
        case 0x3b5e24u: goto label_3b5e24;
        case 0x3b5e28u: goto label_3b5e28;
        case 0x3b5e2cu: goto label_3b5e2c;
        case 0x3b5e30u: goto label_3b5e30;
        case 0x3b5e34u: goto label_3b5e34;
        case 0x3b5e38u: goto label_3b5e38;
        case 0x3b5e3cu: goto label_3b5e3c;
        case 0x3b5e40u: goto label_3b5e40;
        case 0x3b5e44u: goto label_3b5e44;
        case 0x3b5e48u: goto label_3b5e48;
        case 0x3b5e4cu: goto label_3b5e4c;
        case 0x3b5e50u: goto label_3b5e50;
        case 0x3b5e54u: goto label_3b5e54;
        case 0x3b5e58u: goto label_3b5e58;
        case 0x3b5e5cu: goto label_3b5e5c;
        case 0x3b5e60u: goto label_3b5e60;
        case 0x3b5e64u: goto label_3b5e64;
        case 0x3b5e68u: goto label_3b5e68;
        case 0x3b5e6cu: goto label_3b5e6c;
        case 0x3b5e70u: goto label_3b5e70;
        case 0x3b5e74u: goto label_3b5e74;
        case 0x3b5e78u: goto label_3b5e78;
        case 0x3b5e7cu: goto label_3b5e7c;
        case 0x3b5e80u: goto label_3b5e80;
        case 0x3b5e84u: goto label_3b5e84;
        case 0x3b5e88u: goto label_3b5e88;
        case 0x3b5e8cu: goto label_3b5e8c;
        case 0x3b5e90u: goto label_3b5e90;
        case 0x3b5e94u: goto label_3b5e94;
        case 0x3b5e98u: goto label_3b5e98;
        case 0x3b5e9cu: goto label_3b5e9c;
        case 0x3b5ea0u: goto label_3b5ea0;
        case 0x3b5ea4u: goto label_3b5ea4;
        case 0x3b5ea8u: goto label_3b5ea8;
        case 0x3b5eacu: goto label_3b5eac;
        case 0x3b5eb0u: goto label_3b5eb0;
        case 0x3b5eb4u: goto label_3b5eb4;
        case 0x3b5eb8u: goto label_3b5eb8;
        case 0x3b5ebcu: goto label_3b5ebc;
        case 0x3b5ec0u: goto label_3b5ec0;
        case 0x3b5ec4u: goto label_3b5ec4;
        case 0x3b5ec8u: goto label_3b5ec8;
        case 0x3b5eccu: goto label_3b5ecc;
        case 0x3b5ed0u: goto label_3b5ed0;
        case 0x3b5ed4u: goto label_3b5ed4;
        case 0x3b5ed8u: goto label_3b5ed8;
        case 0x3b5edcu: goto label_3b5edc;
        case 0x3b5ee0u: goto label_3b5ee0;
        case 0x3b5ee4u: goto label_3b5ee4;
        case 0x3b5ee8u: goto label_3b5ee8;
        case 0x3b5eecu: goto label_3b5eec;
        case 0x3b5ef0u: goto label_3b5ef0;
        case 0x3b5ef4u: goto label_3b5ef4;
        case 0x3b5ef8u: goto label_3b5ef8;
        case 0x3b5efcu: goto label_3b5efc;
        case 0x3b5f00u: goto label_3b5f00;
        case 0x3b5f04u: goto label_3b5f04;
        case 0x3b5f08u: goto label_3b5f08;
        case 0x3b5f0cu: goto label_3b5f0c;
        case 0x3b5f10u: goto label_3b5f10;
        case 0x3b5f14u: goto label_3b5f14;
        case 0x3b5f18u: goto label_3b5f18;
        case 0x3b5f1cu: goto label_3b5f1c;
        case 0x3b5f20u: goto label_3b5f20;
        case 0x3b5f24u: goto label_3b5f24;
        case 0x3b5f28u: goto label_3b5f28;
        case 0x3b5f2cu: goto label_3b5f2c;
        case 0x3b5f30u: goto label_3b5f30;
        case 0x3b5f34u: goto label_3b5f34;
        case 0x3b5f38u: goto label_3b5f38;
        case 0x3b5f3cu: goto label_3b5f3c;
        case 0x3b5f40u: goto label_3b5f40;
        case 0x3b5f44u: goto label_3b5f44;
        case 0x3b5f48u: goto label_3b5f48;
        case 0x3b5f4cu: goto label_3b5f4c;
        case 0x3b5f50u: goto label_3b5f50;
        case 0x3b5f54u: goto label_3b5f54;
        case 0x3b5f58u: goto label_3b5f58;
        case 0x3b5f5cu: goto label_3b5f5c;
        case 0x3b5f60u: goto label_3b5f60;
        case 0x3b5f64u: goto label_3b5f64;
        case 0x3b5f68u: goto label_3b5f68;
        case 0x3b5f6cu: goto label_3b5f6c;
        case 0x3b5f70u: goto label_3b5f70;
        case 0x3b5f74u: goto label_3b5f74;
        case 0x3b5f78u: goto label_3b5f78;
        case 0x3b5f7cu: goto label_3b5f7c;
        case 0x3b5f80u: goto label_3b5f80;
        case 0x3b5f84u: goto label_3b5f84;
        case 0x3b5f88u: goto label_3b5f88;
        case 0x3b5f8cu: goto label_3b5f8c;
        case 0x3b5f90u: goto label_3b5f90;
        case 0x3b5f94u: goto label_3b5f94;
        case 0x3b5f98u: goto label_3b5f98;
        case 0x3b5f9cu: goto label_3b5f9c;
        case 0x3b5fa0u: goto label_3b5fa0;
        case 0x3b5fa4u: goto label_3b5fa4;
        case 0x3b5fa8u: goto label_3b5fa8;
        case 0x3b5facu: goto label_3b5fac;
        case 0x3b5fb0u: goto label_3b5fb0;
        case 0x3b5fb4u: goto label_3b5fb4;
        case 0x3b5fb8u: goto label_3b5fb8;
        case 0x3b5fbcu: goto label_3b5fbc;
        case 0x3b5fc0u: goto label_3b5fc0;
        case 0x3b5fc4u: goto label_3b5fc4;
        case 0x3b5fc8u: goto label_3b5fc8;
        case 0x3b5fccu: goto label_3b5fcc;
        case 0x3b5fd0u: goto label_3b5fd0;
        case 0x3b5fd4u: goto label_3b5fd4;
        case 0x3b5fd8u: goto label_3b5fd8;
        case 0x3b5fdcu: goto label_3b5fdc;
        case 0x3b5fe0u: goto label_3b5fe0;
        case 0x3b5fe4u: goto label_3b5fe4;
        case 0x3b5fe8u: goto label_3b5fe8;
        case 0x3b5fecu: goto label_3b5fec;
        case 0x3b5ff0u: goto label_3b5ff0;
        case 0x3b5ff4u: goto label_3b5ff4;
        case 0x3b5ff8u: goto label_3b5ff8;
        case 0x3b5ffcu: goto label_3b5ffc;
        case 0x3b6000u: goto label_3b6000;
        case 0x3b6004u: goto label_3b6004;
        case 0x3b6008u: goto label_3b6008;
        case 0x3b600cu: goto label_3b600c;
        case 0x3b6010u: goto label_3b6010;
        case 0x3b6014u: goto label_3b6014;
        case 0x3b6018u: goto label_3b6018;
        case 0x3b601cu: goto label_3b601c;
        case 0x3b6020u: goto label_3b6020;
        case 0x3b6024u: goto label_3b6024;
        case 0x3b6028u: goto label_3b6028;
        case 0x3b602cu: goto label_3b602c;
        case 0x3b6030u: goto label_3b6030;
        case 0x3b6034u: goto label_3b6034;
        case 0x3b6038u: goto label_3b6038;
        case 0x3b603cu: goto label_3b603c;
        case 0x3b6040u: goto label_3b6040;
        case 0x3b6044u: goto label_3b6044;
        case 0x3b6048u: goto label_3b6048;
        case 0x3b604cu: goto label_3b604c;
        case 0x3b6050u: goto label_3b6050;
        case 0x3b6054u: goto label_3b6054;
        case 0x3b6058u: goto label_3b6058;
        case 0x3b605cu: goto label_3b605c;
        case 0x3b6060u: goto label_3b6060;
        case 0x3b6064u: goto label_3b6064;
        case 0x3b6068u: goto label_3b6068;
        case 0x3b606cu: goto label_3b606c;
        case 0x3b6070u: goto label_3b6070;
        case 0x3b6074u: goto label_3b6074;
        case 0x3b6078u: goto label_3b6078;
        case 0x3b607cu: goto label_3b607c;
        case 0x3b6080u: goto label_3b6080;
        case 0x3b6084u: goto label_3b6084;
        case 0x3b6088u: goto label_3b6088;
        case 0x3b608cu: goto label_3b608c;
        case 0x3b6090u: goto label_3b6090;
        case 0x3b6094u: goto label_3b6094;
        case 0x3b6098u: goto label_3b6098;
        case 0x3b609cu: goto label_3b609c;
        case 0x3b60a0u: goto label_3b60a0;
        case 0x3b60a4u: goto label_3b60a4;
        case 0x3b60a8u: goto label_3b60a8;
        case 0x3b60acu: goto label_3b60ac;
        case 0x3b60b0u: goto label_3b60b0;
        case 0x3b60b4u: goto label_3b60b4;
        case 0x3b60b8u: goto label_3b60b8;
        case 0x3b60bcu: goto label_3b60bc;
        case 0x3b60c0u: goto label_3b60c0;
        case 0x3b60c4u: goto label_3b60c4;
        case 0x3b60c8u: goto label_3b60c8;
        case 0x3b60ccu: goto label_3b60cc;
        case 0x3b60d0u: goto label_3b60d0;
        case 0x3b60d4u: goto label_3b60d4;
        case 0x3b60d8u: goto label_3b60d8;
        case 0x3b60dcu: goto label_3b60dc;
        case 0x3b60e0u: goto label_3b60e0;
        case 0x3b60e4u: goto label_3b60e4;
        case 0x3b60e8u: goto label_3b60e8;
        case 0x3b60ecu: goto label_3b60ec;
        case 0x3b60f0u: goto label_3b60f0;
        case 0x3b60f4u: goto label_3b60f4;
        case 0x3b60f8u: goto label_3b60f8;
        case 0x3b60fcu: goto label_3b60fc;
        case 0x3b6100u: goto label_3b6100;
        case 0x3b6104u: goto label_3b6104;
        case 0x3b6108u: goto label_3b6108;
        case 0x3b610cu: goto label_3b610c;
        case 0x3b6110u: goto label_3b6110;
        case 0x3b6114u: goto label_3b6114;
        case 0x3b6118u: goto label_3b6118;
        case 0x3b611cu: goto label_3b611c;
        case 0x3b6120u: goto label_3b6120;
        case 0x3b6124u: goto label_3b6124;
        case 0x3b6128u: goto label_3b6128;
        case 0x3b612cu: goto label_3b612c;
        case 0x3b6130u: goto label_3b6130;
        case 0x3b6134u: goto label_3b6134;
        case 0x3b6138u: goto label_3b6138;
        case 0x3b613cu: goto label_3b613c;
        case 0x3b6140u: goto label_3b6140;
        case 0x3b6144u: goto label_3b6144;
        case 0x3b6148u: goto label_3b6148;
        case 0x3b614cu: goto label_3b614c;
        case 0x3b6150u: goto label_3b6150;
        case 0x3b6154u: goto label_3b6154;
        case 0x3b6158u: goto label_3b6158;
        case 0x3b615cu: goto label_3b615c;
        case 0x3b6160u: goto label_3b6160;
        case 0x3b6164u: goto label_3b6164;
        case 0x3b6168u: goto label_3b6168;
        case 0x3b616cu: goto label_3b616c;
        case 0x3b6170u: goto label_3b6170;
        case 0x3b6174u: goto label_3b6174;
        case 0x3b6178u: goto label_3b6178;
        case 0x3b617cu: goto label_3b617c;
        case 0x3b6180u: goto label_3b6180;
        case 0x3b6184u: goto label_3b6184;
        case 0x3b6188u: goto label_3b6188;
        case 0x3b618cu: goto label_3b618c;
        case 0x3b6190u: goto label_3b6190;
        case 0x3b6194u: goto label_3b6194;
        case 0x3b6198u: goto label_3b6198;
        case 0x3b619cu: goto label_3b619c;
        case 0x3b61a0u: goto label_3b61a0;
        case 0x3b61a4u: goto label_3b61a4;
        case 0x3b61a8u: goto label_3b61a8;
        case 0x3b61acu: goto label_3b61ac;
        case 0x3b61b0u: goto label_3b61b0;
        case 0x3b61b4u: goto label_3b61b4;
        case 0x3b61b8u: goto label_3b61b8;
        case 0x3b61bcu: goto label_3b61bc;
        case 0x3b61c0u: goto label_3b61c0;
        case 0x3b61c4u: goto label_3b61c4;
        case 0x3b61c8u: goto label_3b61c8;
        case 0x3b61ccu: goto label_3b61cc;
        case 0x3b61d0u: goto label_3b61d0;
        case 0x3b61d4u: goto label_3b61d4;
        default: break;
    }

    ctx->pc = 0x3b5950u;

label_3b5950:
    // 0x3b5950: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x3b5950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_3b5954:
    // 0x3b5954: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x3b5954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_3b5958:
    // 0x3b5958: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x3b5958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_3b595c:
    // 0x3b595c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b595cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b5960:
    // 0x3b5960: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x3b5960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_3b5964:
    // 0x3b5964: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3b5964u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5968:
    // 0x3b5968: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x3b5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_3b596c:
    // 0x3b596c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3b596cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b5970:
    // 0x3b5970: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3b5970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_3b5974:
    // 0x3b5974: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3b5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_3b5978:
    // 0x3b5978: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3b5978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_3b597c:
    // 0x3b597c: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x3b597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_3b5980:
    // 0x3b5980: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x3b5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_3b5984:
    // 0x3b5984: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3b5984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_3b5988:
    // 0x3b5988: 0xe7bc0200  swc1        $f28, 0x200($sp)
    ctx->pc = 0x3b5988u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_3b598c:
    // 0x3b598c: 0xe7bb01f8  swc1        $f27, 0x1F8($sp)
    ctx->pc = 0x3b598cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_3b5990:
    // 0x3b5990: 0xe7ba01f0  swc1        $f26, 0x1F0($sp)
    ctx->pc = 0x3b5990u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3b5994:
    // 0x3b5994: 0xe7b901e8  swc1        $f25, 0x1E8($sp)
    ctx->pc = 0x3b5994u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_3b5998:
    // 0x3b5998: 0xe7b801e0  swc1        $f24, 0x1E0($sp)
    ctx->pc = 0x3b5998u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_3b599c:
    // 0x3b599c: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x3b599cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_3b59a0:
    // 0x3b59a0: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x3b59a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3b59a4:
    // 0x3b59a4: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x3b59a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_3b59a8:
    // 0x3b59a8: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x3b59a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_3b59ac:
    // 0x3b59ac: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3b59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3b59b0:
    // 0x3b59b0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b59b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b59b4:
    // 0x3b59b4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b59b8:
    // 0x3b59b8: 0x40f809  jalr        $v0
label_3b59bc:
    if (ctx->pc == 0x3B59BCu) {
        ctx->pc = 0x3B59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59B8u;
        // 0x3b59bc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59C0u;
        goto label_3b59c0;
    }
    ctx->pc = 0x3B59B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B59C0u);
        ctx->pc = 0x3B59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59B8u;
        // 0x3b59bc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B59B8u, 0x3B59C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B59C0u;
label_3b59c0:
    // 0x3b59c0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3b59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_3b59c4:
    // 0x3b59c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b59c8:
    // 0x3b59c8: 0x120201e8  beq         $s0, $v0, . + 4 + (0x1E8 << 2)
label_3b59cc:
    if (ctx->pc == 0x3B59CCu) {
        ctx->pc = 0x3B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59C8u;
        // 0x3b59cc: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59D0u;
        goto label_3b59d0;
    }
    ctx->pc = 0x3B59C8u;
    {
        const bool branch_taken_0x3b59c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59C8u;
        // 0x3b59cc: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59c8) {
            ctx->pc = 0x3B616Cu;
            goto label_3b616c;
        }
    }
    ctx->pc = 0x3B59D0u;
label_3b59d0:
    // 0x3b59d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b59d4:
    if (ctx->pc == 0x3B59D4u) {
        ctx->pc = 0x3B59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59D0u;
        // 0x3b59d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59D8u;
        goto label_3b59d8;
    }
    ctx->pc = 0x3B59D0u;
    {
        const bool branch_taken_0x3b59d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59D0u;
        // 0x3b59d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59d0) {
            ctx->pc = 0x3B59E8u;
            goto label_3b59e8;
        }
    }
    ctx->pc = 0x3B59D8u;
label_3b59d8:
    // 0x3b59d8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3b59dc:
    if (ctx->pc == 0x3B59DCu) {
        ctx->pc = 0x3B59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59D8u;
        // 0x3b59dc: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59E0u;
        goto label_3b59e0;
    }
    ctx->pc = 0x3B59D8u;
    {
        const bool branch_taken_0x3b59d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59D8u;
        // 0x3b59dc: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59d8) {
            ctx->pc = 0x3B59FCu;
            goto label_3b59fc;
        }
    }
    ctx->pc = 0x3B59E0u;
label_3b59e0:
    // 0x3b59e0: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_3b59e4:
    if (ctx->pc == 0x3B59E4u) {
        ctx->pc = 0x3B59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59E0u;
        // 0x3b59e4: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59E8u;
        goto label_3b59e8;
    }
    ctx->pc = 0x3B59E0u;
    {
        const bool branch_taken_0x3b59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59E0u;
        // 0x3b59e4: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59e0) {
            ctx->pc = 0x3B6188u;
            goto label_3b6188;
        }
    }
    ctx->pc = 0x3B59E8u;
label_3b59e8:
    // 0x3b59e8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3b59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3b59ec:
    // 0x3b59ec: 0x120201d6  beq         $s0, $v0, . + 4 + (0x1D6 << 2)
label_3b59f0:
    if (ctx->pc == 0x3B59F0u) {
        ctx->pc = 0x3B59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59ECu;
        // 0x3b59f0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59F4u;
        goto label_3b59f4;
    }
    ctx->pc = 0x3B59ECu;
    {
        const bool branch_taken_0x3b59ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59ECu;
        // 0x3b59f0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59ec) {
            ctx->pc = 0x3B6148u;
            goto label_3b6148;
        }
    }
    ctx->pc = 0x3B59F4u;
label_3b59f4:
    // 0x3b59f4: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_3b59f8:
    if (ctx->pc == 0x3B59F8u) {
        ctx->pc = 0x3B59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59F4u;
        // 0x3b59f8: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B59FCu;
        goto label_3b59fc;
    }
    ctx->pc = 0x3B59F4u;
    {
        const bool branch_taken_0x3b59f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59F4u;
        // 0x3b59f8: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59f4) {
            ctx->pc = 0x3B6188u;
            goto label_3b6188;
        }
    }
    ctx->pc = 0x3B59FCu;
label_3b59fc:
    // 0x3b59fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5a00:
    // 0x3b5a00: 0xc0ea12a  jal         func_3A84A8
label_3b5a04:
    if (ctx->pc == 0x3B5A04u) {
        ctx->pc = 0x3B5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A00u;
        // 0x3b5a04: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A08u;
        goto label_3b5a08;
    }
    ctx->pc = 0x3B5A00u;
    SET_GPR_U32(ctx, 31, 0x3B5A08u);
    ctx->pc = 0x3B5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A00u;
    // 0x3b5a04: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B5A00u, 0x3B5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A08u;
label_3b5a08:
    // 0x3b5a08: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b5a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5a0c:
    // 0x3b5a0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5a10:
    // 0x3b5a10: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b5a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5a14:
    // 0x3b5a14: 0xc0ea12a  jal         func_3A84A8
label_3b5a18:
    if (ctx->pc == 0x3B5A18u) {
        ctx->pc = 0x3B5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A14u;
        // 0x3b5a18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A1Cu;
        goto label_3b5a1c;
    }
    ctx->pc = 0x3B5A14u;
    SET_GPR_U32(ctx, 31, 0x3B5A1Cu);
    ctx->pc = 0x3B5A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A14u;
    // 0x3b5a18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B5A14u, 0x3B5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A1Cu;
label_3b5a1c:
    // 0x3b5a1c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b5a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5a20:
    // 0x3b5a20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b5a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5a24:
    // 0x3b5a24: 0xc0ea146  jal         func_3A8518
label_3b5a28:
    if (ctx->pc == 0x3B5A28u) {
        ctx->pc = 0x3B5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A24u;
        // 0x3b5a28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A2Cu;
        goto label_3b5a2c;
    }
    ctx->pc = 0x3B5A24u;
    SET_GPR_U32(ctx, 31, 0x3B5A2Cu);
    ctx->pc = 0x3B5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A24u;
    // 0x3b5a28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B5A24u, 0x3B5A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A2Cu;
label_3b5a2c:
    // 0x3b5a2c: 0xc0ea146  jal         func_3A8518
label_3b5a30:
    if (ctx->pc == 0x3B5A30u) {
        ctx->pc = 0x3B5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A2Cu;
        // 0x3b5a30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A34u;
        goto label_3b5a34;
    }
    ctx->pc = 0x3B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x3B5A34u);
    ctx->pc = 0x3B5A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A2Cu;
    // 0x3b5a30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B5A2Cu, 0x3B5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A34u;
label_3b5a34:
    // 0x3b5a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5a38:
    // 0x3b5a38: 0xc0ea14c  jal         func_3A8530
label_3b5a3c:
    if (ctx->pc == 0x3B5A3Cu) {
        ctx->pc = 0x3B5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A38u;
        // 0x3b5a3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A40u;
        goto label_3b5a40;
    }
    ctx->pc = 0x3B5A38u;
    SET_GPR_U32(ctx, 31, 0x3B5A40u);
    ctx->pc = 0x3B5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A38u;
    // 0x3b5a3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B5A38u, 0x3B5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A40u;
label_3b5a40:
    // 0x3b5a40: 0xc0ea14c  jal         func_3A8530
label_3b5a44:
    if (ctx->pc == 0x3B5A44u) {
        ctx->pc = 0x3B5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A40u;
        // 0x3b5a44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A48u;
        goto label_3b5a48;
    }
    ctx->pc = 0x3B5A40u;
    SET_GPR_U32(ctx, 31, 0x3B5A48u);
    ctx->pc = 0x3B5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A40u;
    // 0x3b5a44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B5A40u, 0x3B5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A48u;
label_3b5a48:
    // 0x3b5a48: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5a4c:
    // 0x3b5a4c: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x3b5a4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b5a50:
    // 0x3b5a50: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b5a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5a54:
    // 0x3b5a54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b5a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5a58:
    // 0x3b5a58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3b5a5c:
    // 0x3b5a5c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3b5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b5a60:
    // 0x3b5a60: 0xc0e90ca  jal         func_3A4328
label_3b5a64:
    if (ctx->pc == 0x3B5A64u) {
        ctx->pc = 0x3B5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A60u;
        // 0x3b5a64: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5A68u;
        goto label_3b5a68;
    }
    ctx->pc = 0x3B5A60u;
    SET_GPR_U32(ctx, 31, 0x3B5A68u);
    ctx->pc = 0x3B5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A60u;
    // 0x3b5a64: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B5A60u, 0x3B5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A68u;
label_3b5a68:
    // 0x3b5a68: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b5a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b5a6c:
    // 0x3b5a6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b5a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b5a70:
    // 0x3b5a70: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b5a70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b5a74:
    // 0x3b5a74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b5a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b5a78:
    // 0x3b5a78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b5a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b5a7c:
    // 0x3b5a7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b5a7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b5a80:
    // 0x3b5a80: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b5a80u;
    // VWAITQ (Q already resolved in this runtime)
label_3b5a84:
    // 0x3b5a84: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b5a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b5a88:
    // 0x3b5a88: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b5a88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b5a8c:
    // 0x3b5a8c: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x3b5a8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b5a90:
    // 0x3b5a90: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b5a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b5a94:
    // 0x3b5a94: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b5a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b5a98:
    // 0x3b5a98: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5a9c:
    // 0x3b5a9c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b5a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b5aa0:
    // 0x3b5aa0: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3b5aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3b5aa4:
    // 0x3b5aa4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3b5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3b5aa8:
    // 0x3b5aa8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3b5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5aac:
    // 0x3b5aac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3b5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b5ab0:
    // 0x3b5ab0: 0x1c6001a0  bgtz        $v1, . + 4 + (0x1A0 << 2)
label_3b5ab4:
    if (ctx->pc == 0x3B5AB4u) {
        ctx->pc = 0x3B5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AB0u;
        // 0x3b5ab4: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5AB8u;
        goto label_3b5ab8;
    }
    ctx->pc = 0x3B5AB0u;
    {
        const bool branch_taken_0x3b5ab0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3B5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AB0u;
        // 0x3b5ab4: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ab0) {
            ctx->pc = 0x3B6134u;
            goto label_3b6134;
        }
    }
    ctx->pc = 0x3B5AB8u;
label_3b5ab8:
    // 0x3b5ab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b5abc:
    // 0x3b5abc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3b5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b5ac0:
    // 0x3b5ac0: 0x1043019c  beq         $v0, $v1, . + 4 + (0x19C << 2)
label_3b5ac4:
    if (ctx->pc == 0x3B5AC4u) {
        ctx->pc = 0x3B5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AC0u;
        // 0x3b5ac4: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5AC8u;
        goto label_3b5ac8;
    }
    ctx->pc = 0x3B5AC0u;
    {
        const bool branch_taken_0x3b5ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AC0u;
        // 0x3b5ac4: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ac0) {
            ctx->pc = 0x3B6134u;
            goto label_3b6134;
        }
    }
    ctx->pc = 0x3B5AC8u;
label_3b5ac8:
    // 0x3b5ac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b5ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b5acc:
    // 0x3b5acc: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3b5accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3b5ad0:
    // 0x3b5ad0: 0xc0e91b2  jal         func_3A46C8
label_3b5ad4:
    if (ctx->pc == 0x3B5AD4u) {
        ctx->pc = 0x3B5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AD0u;
        // 0x3b5ad4: 0x8ec400d8  lw          $a0, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5AD8u;
        goto label_3b5ad8;
    }
    ctx->pc = 0x3B5AD0u;
    SET_GPR_U32(ctx, 31, 0x3B5AD8u);
    ctx->pc = 0x3B5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5AD0u;
    // 0x3b5ad4: 0x8ec400d8  lw          $a0, 0xD8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B5AD0u, 0x3B5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5AD8u;
label_3b5ad8:
    // 0x3b5ad8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b5ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b5adc:
    // 0x3b5adc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b5adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b5ae0:
    // 0x3b5ae0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b5ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b5ae4:
    // 0x3b5ae4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b5ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b5ae8:
    // 0x3b5ae8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b5ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b5aec:
    // 0x3b5aec: 0xc0e91b2  jal         func_3A46C8
label_3b5af0:
    if (ctx->pc == 0x3B5AF0u) {
        ctx->pc = 0x3B5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AECu;
        // 0x3b5af0: 0x8ec400dc  lw          $a0, 0xDC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5AF4u;
        goto label_3b5af4;
    }
    ctx->pc = 0x3B5AECu;
    SET_GPR_U32(ctx, 31, 0x3B5AF4u);
    ctx->pc = 0x3B5AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5AECu;
    // 0x3b5af0: 0x8ec400dc  lw          $a0, 0xDC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B5AECu, 0x3B5AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5AF4u;
label_3b5af4:
    // 0x3b5af4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3b5af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3b5af8:
    // 0x3b5af8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b5af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b5afc:
    // 0x3b5afc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b5afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b5b00:
    // 0x3b5b00: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b5b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b5b04:
    // 0x3b5b04: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3b5b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3b5b08:
    // 0x3b5b08: 0xc0e92c0  jal         func_3A4B00
label_3b5b0c:
    if (ctx->pc == 0x3B5B0Cu) {
        ctx->pc = 0x3B5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B08u;
        // 0x3b5b0c: 0x8ec400e0  lw          $a0, 0xE0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5B10u;
        goto label_3b5b10;
    }
    ctx->pc = 0x3B5B08u;
    SET_GPR_U32(ctx, 31, 0x3B5B10u);
    ctx->pc = 0x3B5B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5B08u;
    // 0x3b5b0c: 0x8ec400e0  lw          $a0, 0xE0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B5B08u, 0x3B5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5B10u;
label_3b5b10:
    // 0x3b5b10: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b5b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b5b14:
    // 0x3b5b14: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3b5b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3b5b18:
    // 0x3b5b18: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x3b5b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b5b1c:
    // 0x3b5b1c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3b5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3b5b20:
    // 0x3b5b20: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b5b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b5b24:
    // 0x3b5b24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b5b28:
    // 0x3b5b28: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3b5b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3b5b2c:
    // 0x3b5b2c: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3b5b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3b5b30:
    // 0x3b5b30: 0xe6b9000c  swc1        $f25, 0xC($s5)
    ctx->pc = 0x3b5b30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b5b34:
    // 0x3b5b34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b5b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5b38:
    // 0x3b5b38: 0xaec300cc  sw          $v1, 0xCC($s6)
    ctx->pc = 0x3b5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 3));
label_3b5b3c:
    // 0x3b5b3c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b5b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b5b40:
    // 0x3b5b40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b5b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5b44:
    // 0x3b5b44: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b5b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b5b48:
    // 0x3b5b48: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3b5b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3b5b4c:
    // 0x3b5b4c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5b50:
    // 0x3b5b50: 0xc136b18  jal         func_4DAC60
label_3b5b54:
    if (ctx->pc == 0x3B5B54u) {
        ctx->pc = 0x3B5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B50u;
        // 0x3b5b54: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5B58u;
        goto label_3b5b58;
    }
    ctx->pc = 0x3B5B50u;
    SET_GPR_U32(ctx, 31, 0x3B5B58u);
    ctx->pc = 0x3B5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5B50u;
    // 0x3b5b54: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B5B50u, 0x3B5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5B58u;
label_3b5b58:
    // 0x3b5b58: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5b5c:
    // 0x3b5b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b5b60:
    // 0x3b5b60: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b5b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b5b64:
    // 0x3b5b64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b5b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b5b68:
    // 0x3b5b68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b5b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b5b6c:
    // 0x3b5b6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b5b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b5b70:
    // 0x3b5b70: 0xc136b24  jal         func_4DAC90
label_3b5b74:
    if (ctx->pc == 0x3B5B74u) {
        ctx->pc = 0x3B5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B70u;
        // 0x3b5b74: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5B78u;
        goto label_3b5b78;
    }
    ctx->pc = 0x3B5B70u;
    SET_GPR_U32(ctx, 31, 0x3B5B78u);
    ctx->pc = 0x3B5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5B70u;
    // 0x3b5b74: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B5B70u, 0x3B5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5B78u;
label_3b5b78:
    // 0x3b5b78: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b5b78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5b7c:
    // 0x3b5b7c: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3b5b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3b5b80:
    // 0x3b5b80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b5b80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b5b84:
    // 0x3b5b84: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x3b5b84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_3b5b88:
    // 0x3b5b88: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b5b8c:
    // 0x3b5b8c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3b5b8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3b5b90:
    // 0x3b5b90: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x3b5b90u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
label_3b5b94:
    // 0x3b5b94: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3b5b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3b5b98:
    // 0x3b5b98: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b5b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b5b9c:
    // 0x3b5b9c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b5b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ba0:
    // 0x3b5ba0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b5ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ba4:
    // 0x3b5ba4: 0xc0f16c0  jal         func_3C5B00
label_3b5ba8:
    if (ctx->pc == 0x3B5BA8u) {
        ctx->pc = 0x3B5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BA4u;
        // 0x3b5ba8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5BACu;
        goto label_3b5bac;
    }
    ctx->pc = 0x3B5BA4u;
    SET_GPR_U32(ctx, 31, 0x3B5BACu);
    ctx->pc = 0x3B5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BA4u;
    // 0x3b5ba8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B5BA4u, 0x3B5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BACu;
label_3b5bac:
    // 0x3b5bac: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3b5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3b5bb0:
    // 0x3b5bb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5bb4:
    // 0x3b5bb4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b5bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b5bb8:
    // 0x3b5bb8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b5bbc:
    // 0x3b5bbc: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3b5bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3b5bc0:
    // 0x3b5bc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b5bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5bc4:
    // 0x3b5bc4: 0xe6b9000c  swc1        $f25, 0xC($s5)
    ctx->pc = 0x3b5bc4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b5bc8:
    // 0x3b5bc8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5bcc:
    // 0x3b5bcc: 0xc136b18  jal         func_4DAC60
label_3b5bd0:
    if (ctx->pc == 0x3B5BD0u) {
        ctx->pc = 0x3B5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BCCu;
        // 0x3b5bd0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5BD4u;
        goto label_3b5bd4;
    }
    ctx->pc = 0x3B5BCCu;
    SET_GPR_U32(ctx, 31, 0x3B5BD4u);
    ctx->pc = 0x3B5BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BCCu;
    // 0x3b5bd0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B5BCCu, 0x3B5BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BD4u;
label_3b5bd4:
    // 0x3b5bd4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5bd8:
    // 0x3b5bd8: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b5bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b5bdc:
    // 0x3b5bdc: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3b5bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3b5be0:
    // 0x3b5be0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3b5be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3b5be4:
    // 0x3b5be4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b5be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b5be8:
    // 0x3b5be8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b5be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b5bec:
    // 0x3b5bec: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5bf0:
    // 0x3b5bf0: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x3b5bf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_3b5bf4:
    // 0x3b5bf4: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x3b5bf4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
label_3b5bf8:
    // 0x3b5bf8: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b5bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b5bfc:
    // 0x3b5bfc: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b5bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b5c00:
    // 0x3b5c00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b5c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b5c04:
    // 0x3b5c04: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5c08:
    // 0x3b5c08: 0xc0f16c0  jal         func_3C5B00
label_3b5c0c:
    if (ctx->pc == 0x3B5C0Cu) {
        ctx->pc = 0x3B5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C08u;
        // 0x3b5c0c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5C10u;
        goto label_3b5c10;
    }
    ctx->pc = 0x3B5C08u;
    SET_GPR_U32(ctx, 31, 0x3B5C10u);
    ctx->pc = 0x3B5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C08u;
    // 0x3b5c0c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B5C08u, 0x3B5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C10u;
label_3b5c10:
    // 0x3b5c10: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3b5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3b5c14:
    // 0x3b5c14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b5c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5c18:
    // 0x3b5c18: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3b5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3b5c1c:
    // 0x3b5c1c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b5c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b5c20:
    // 0x3b5c20: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3b5c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3b5c24:
    // 0x3b5c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b5c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5c28:
    // 0x3b5c28: 0xe6b9000c  swc1        $f25, 0xC($s5)
    ctx->pc = 0x3b5c28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b5c2c:
    // 0x3b5c2c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5c30:
    // 0x3b5c30: 0xc136b18  jal         func_4DAC60
label_3b5c34:
    if (ctx->pc == 0x3B5C34u) {
        ctx->pc = 0x3B5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C30u;
        // 0x3b5c34: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5C38u;
        goto label_3b5c38;
    }
    ctx->pc = 0x3B5C30u;
    SET_GPR_U32(ctx, 31, 0x3B5C38u);
    ctx->pc = 0x3B5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C30u;
    // 0x3b5c34: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B5C30u, 0x3B5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C38u;
label_3b5c38:
    // 0x3b5c38: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5c3c:
    // 0x3b5c3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b5c40:
    // 0x3b5c40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b5c44:
    // 0x3b5c44: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3b5c44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3b5c48:
    // 0x3b5c48: 0xc136b24  jal         func_4DAC90
label_3b5c4c:
    if (ctx->pc == 0x3B5C4Cu) {
        ctx->pc = 0x3B5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C48u;
        // 0x3b5c4c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5C50u;
        goto label_3b5c50;
    }
    ctx->pc = 0x3B5C48u;
    SET_GPR_U32(ctx, 31, 0x3B5C50u);
    ctx->pc = 0x3B5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C48u;
    // 0x3b5c4c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B5C48u, 0x3B5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C50u;
label_3b5c50:
    // 0x3b5c50: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b5c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5c54:
    // 0x3b5c54: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b5c54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b5c58:
    // 0x3b5c58: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3b5c58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3b5c5c:
    // 0x3b5c5c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x3b5c5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_3b5c60:
    // 0x3b5c60: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b5c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b5c64:
    // 0x3b5c64: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x3b5c64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
label_3b5c68:
    // 0x3b5c68: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b5c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b5c6c:
    // 0x3b5c6c: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b5c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b5c70:
    // 0x3b5c70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b5c70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b5c74:
    // 0x3b5c74: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3b5c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3b5c78:
    // 0x3b5c78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b5c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5c7c:
    // 0x3b5c7c: 0xc0f16c0  jal         func_3C5B00
label_3b5c80:
    if (ctx->pc == 0x3B5C80u) {
        ctx->pc = 0x3B5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C7Cu;
        // 0x3b5c80: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5C84u;
        goto label_3b5c84;
    }
    ctx->pc = 0x3B5C7Cu;
    SET_GPR_U32(ctx, 31, 0x3B5C84u);
    ctx->pc = 0x3B5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C7Cu;
    // 0x3b5c80: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B5C7Cu, 0x3B5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C84u;
label_3b5c84:
    // 0x3b5c84: 0xc0e8fc0  jal         func_3A3F00
label_3b5c88:
    if (ctx->pc == 0x3B5C88u) {
        ctx->pc = 0x3B5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C84u;
        // 0x3b5c88: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5C8Cu;
        goto label_3b5c8c;
    }
    ctx->pc = 0x3B5C84u;
    SET_GPR_U32(ctx, 31, 0x3B5C8Cu);
    ctx->pc = 0x3B5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C84u;
    // 0x3b5c88: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3B5C84u, 0x3B5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C8Cu;
label_3b5c8c:
    // 0x3b5c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b5c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5c90:
    // 0x3b5c90: 0xc0e90ca  jal         func_3A4328
label_3b5c94:
    if (ctx->pc == 0x3B5C94u) {
        ctx->pc = 0x3B5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C90u;
        // 0x3b5c94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5C98u;
        goto label_3b5c98;
    }
    ctx->pc = 0x3B5C90u;
    SET_GPR_U32(ctx, 31, 0x3B5C98u);
    ctx->pc = 0x3B5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C90u;
    // 0x3b5c94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B5C90u, 0x3B5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C98u;
label_3b5c98:
    // 0x3b5c98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b5c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b5c9c:
    // 0x3b5c9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b5c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ca0:
    // 0x3b5ca0: 0xc136afa  jal         func_4DABE8
label_3b5ca4:
    if (ctx->pc == 0x3B5CA4u) {
        ctx->pc = 0x3B5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CA0u;
        // 0x3b5ca4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5CA8u;
        goto label_3b5ca8;
    }
    ctx->pc = 0x3B5CA0u;
    SET_GPR_U32(ctx, 31, 0x3B5CA8u);
    ctx->pc = 0x3B5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CA0u;
    // 0x3b5ca4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3B5CA0u, 0x3B5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5CA8u;
label_3b5ca8:
    // 0x3b5ca8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b5ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5cac:
    // 0x3b5cac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b5cb0:
    // 0x3b5cb0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b5cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b5cb4:
    // 0x3b5cb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b5cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b5cb8:
    // 0x3b5cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b5cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b5cbc:
    // 0x3b5cbc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3b5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b5cc0:
    // 0x3b5cc0: 0xc136b24  jal         func_4DAC90
label_3b5cc4:
    if (ctx->pc == 0x3B5CC4u) {
        ctx->pc = 0x3B5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CC0u;
        // 0x3b5cc4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5CC8u;
        goto label_3b5cc8;
    }
    ctx->pc = 0x3B5CC0u;
    SET_GPR_U32(ctx, 31, 0x3B5CC8u);
    ctx->pc = 0x3B5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CC0u;
    // 0x3b5cc4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B5CC0u, 0x3B5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5CC8u;
label_3b5cc8:
    // 0x3b5cc8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b5cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5ccc:
    // 0x3b5ccc: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b5cd0:
    // 0x3b5cd0: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3b5cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3b5cd4:
    // 0x3b5cd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b5cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b5cd8:
    // 0x3b5cd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5cdc:
    // 0x3b5cdc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b5cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b5ce0:
    // 0x3b5ce0: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b5ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b5ce4:
    // 0x3b5ce4: 0xc0f15f6  jal         func_3C57D8
label_3b5ce8:
    if (ctx->pc == 0x3B5CE8u) {
        ctx->pc = 0x3B5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CE4u;
        // 0x3b5ce8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5CECu;
        goto label_3b5cec;
    }
    ctx->pc = 0x3B5CE4u;
    SET_GPR_U32(ctx, 31, 0x3B5CECu);
    ctx->pc = 0x3B5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CE4u;
    // 0x3b5ce8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B5CE4u, 0x3B5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5CECu;
label_3b5cec:
    // 0x3b5cec: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3b5cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3b5cf0:
    // 0x3b5cf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b5cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b5cf4:
    // 0x3b5cf4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b5cf8:
    // 0x3b5cf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5cfc:
    // 0x3b5cfc: 0xc0f15f6  jal         func_3C57D8
label_3b5d00:
    if (ctx->pc == 0x3B5D00u) {
        ctx->pc = 0x3B5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CFCu;
        // 0x3b5d00: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D04u;
        goto label_3b5d04;
    }
    ctx->pc = 0x3B5CFCu;
    SET_GPR_U32(ctx, 31, 0x3B5D04u);
    ctx->pc = 0x3B5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CFCu;
    // 0x3b5d00: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B5CFCu, 0x3B5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D04u;
label_3b5d04:
    // 0x3b5d04: 0x3c059fc8  lui         $a1, 0x9FC8
    ctx->pc = 0x3b5d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40904 << 16));
label_3b5d08:
    // 0x3b5d08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b5d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5d0c:
    // 0x3b5d0c: 0xc0e9132  jal         func_3A44C8
label_3b5d10:
    if (ctx->pc == 0x3B5D10u) {
        ctx->pc = 0x3B5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D0Cu;
        // 0x3b5d10: 0x34a5637e  ori         $a1, $a1, 0x637E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25470);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D14u;
        goto label_3b5d14;
    }
    ctx->pc = 0x3B5D0Cu;
    SET_GPR_U32(ctx, 31, 0x3B5D14u);
    ctx->pc = 0x3B5D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D0Cu;
    // 0x3b5d10: 0x34a5637e  ori         $a1, $a1, 0x637E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25470);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B5D0Cu, 0x3B5D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D14u;
label_3b5d14:
    // 0x3b5d14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b5d18:
    // 0x3b5d18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b5d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b5d1c:
    // 0x3b5d1c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3b5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3b5d20:
    // 0x3b5d20: 0xc1073cc  jal         func_41CF30
label_3b5d24:
    if (ctx->pc == 0x3B5D24u) {
        ctx->pc = 0x3B5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D20u;
        // 0x3b5d24: 0xaec200c4  sw          $v0, 0xC4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D28u;
        goto label_3b5d28;
    }
    ctx->pc = 0x3B5D20u;
    SET_GPR_U32(ctx, 31, 0x3B5D28u);
    ctx->pc = 0x3B5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D20u;
    // 0x3b5d24: 0xaec200c4  sw          $v0, 0xC4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B5D20u, 0x3B5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D28u;
label_3b5d28:
    // 0x3b5d28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b5d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b5d2c:
    // 0x3b5d2c: 0x144000ee  bnez        $v0, . + 4 + (0xEE << 2)
label_3b5d30:
    if (ctx->pc == 0x3B5D30u) {
        ctx->pc = 0x3B5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D2Cu;
        // 0x3b5d30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D34u;
        goto label_3b5d34;
    }
    ctx->pc = 0x3B5D2Cu;
    {
        const bool branch_taken_0x3b5d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D2Cu;
        // 0x3b5d30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d2c) {
            ctx->pc = 0x3B60E8u;
            goto label_3b60e8;
        }
    }
    ctx->pc = 0x3B5D34u;
label_3b5d34:
    // 0x3b5d34: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3b5d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3b5d38:
    // 0x3b5d38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b5d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b5d3c:
    // 0x3b5d3c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3b5d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3b5d40:
    // 0x3b5d40: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3b5d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3b5d44:
    // 0x3b5d44: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b5d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b5d48:
    // 0x3b5d48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b5d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b5d4c:
    // 0x3b5d4c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b5d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b5d50:
    // 0x3b5d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5d54:
    // 0x3b5d54: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5d58:
    // 0x3b5d58: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3b5d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3b5d5c:
    // 0x3b5d5c: 0x34210529  ori         $at, $at, 0x529
    ctx->pc = 0x3b5d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1321);
label_3b5d60:
    // 0x3b5d60: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b5d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b5d64:
    // 0x3b5d64: 0xc0cd518  jal         func_335460
label_3b5d68:
    if (ctx->pc == 0x3B5D68u) {
        ctx->pc = 0x3B5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D64u;
        // 0x3b5d68: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D6Cu;
        goto label_3b5d6c;
    }
    ctx->pc = 0x3B5D64u;
    SET_GPR_U32(ctx, 31, 0x3B5D6Cu);
    ctx->pc = 0x3B5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D64u;
    // 0x3b5d68: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5D64u, 0x3B5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D6Cu;
label_3b5d6c:
    // 0x3b5d6c: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b5d6cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5d70:
    // 0x3b5d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5d74:
    // 0x3b5d74: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5d74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5d78:
    // 0x3b5d78: 0xc0cd518  jal         func_335460
label_3b5d7c:
    if (ctx->pc == 0x3B5D7Cu) {
        ctx->pc = 0x3B5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D78u;
        // 0x3b5d7c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D80u;
        goto label_3b5d80;
    }
    ctx->pc = 0x3B5D78u;
    SET_GPR_U32(ctx, 31, 0x3B5D80u);
    ctx->pc = 0x3B5D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D78u;
    // 0x3b5d7c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5D78u, 0x3B5D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D80u;
label_3b5d80:
    // 0x3b5d80: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b5d80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5d84:
    // 0x3b5d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5d88:
    // 0x3b5d88: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5d88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5d8c:
    // 0x3b5d8c: 0xc0cd518  jal         func_335460
label_3b5d90:
    if (ctx->pc == 0x3B5D90u) {
        ctx->pc = 0x3B5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D8Cu;
        // 0x3b5d90: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5D94u;
        goto label_3b5d94;
    }
    ctx->pc = 0x3B5D8Cu;
    SET_GPR_U32(ctx, 31, 0x3B5D94u);
    ctx->pc = 0x3B5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D8Cu;
    // 0x3b5d90: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5D8Cu, 0x3B5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D94u;
label_3b5d94:
    // 0x3b5d94: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b5d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5d98:
    // 0x3b5d98: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b5d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b5d9c:
    // 0x3b5d9c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b5d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b5da0:
    // 0x3b5da0: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x3b5da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b5da4:
    // 0x3b5da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5da8:
    // 0x3b5da8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b5da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5dac:
    // 0x3b5dac: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b5dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b5db0:
    // 0x3b5db0: 0xe639000c  swc1        $f25, 0xC($s1)
    ctx->pc = 0x3b5db0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b5db4:
    // 0x3b5db4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5db8:
    // 0x3b5db8: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3b5db8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b5dbc:
    // 0x3b5dbc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5dc0:
    // 0x3b5dc0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b5dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b5dc4:
    // 0x3b5dc4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3b5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3b5dc8:
    // 0x3b5dc8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3b5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3b5dcc:
    // 0x3b5dcc: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3b5dccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b5dd0:
    // 0x3b5dd0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5dd4:
    // 0x3b5dd4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b5dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b5dd8:
    // 0x3b5dd8: 0xc0e911e  jal         func_3A4478
label_3b5ddc:
    if (ctx->pc == 0x3B5DDCu) {
        ctx->pc = 0x3B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5DD8u;
        // 0x3b5ddc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5DE0u;
        goto label_3b5de0;
    }
    ctx->pc = 0x3B5DD8u;
    SET_GPR_U32(ctx, 31, 0x3B5DE0u);
    ctx->pc = 0x3B5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5DD8u;
    // 0x3b5ddc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B5DD8u, 0x3B5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5DE0u;
label_3b5de0:
    // 0x3b5de0: 0x3c01bc19  lui         $at, 0xBC19
    ctx->pc = 0x3b5de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48153 << 16));
label_3b5de4:
    // 0x3b5de4: 0x342106cd  ori         $at, $at, 0x6CD
    ctx->pc = 0x3b5de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1741);
label_3b5de8:
    // 0x3b5de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b5de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5dec:
    // 0x3b5dec: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3b5decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b5df0:
    // 0x3b5df0: 0x3c01bb49  lui         $at, 0xBB49
    ctx->pc = 0x3b5df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47945 << 16));
label_3b5df4:
    // 0x3b5df4: 0x3421d9d3  ori         $at, $at, 0xD9D3
    ctx->pc = 0x3b5df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55763);
label_3b5df8:
    // 0x3b5df8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3b5df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b5dfc:
    // 0x3b5dfc: 0x3c013d59  lui         $at, 0x3D59
    ctx->pc = 0x3b5dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15705 << 16));
label_3b5e00:
    // 0x3b5e00: 0x3421945b  ori         $at, $at, 0x945B
    ctx->pc = 0x3b5e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37979);
label_3b5e04:
    // 0x3b5e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b5e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5e08:
    // 0x3b5e08: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x3b5e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b5e0c:
    // 0x3b5e0c: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x3b5e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b5e10:
    // 0x3b5e10: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3b5e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b5e14:
    // 0x3b5e14: 0xe679000c  swc1        $f25, 0xC($s3)
    ctx->pc = 0x3b5e14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b5e18:
    // 0x3b5e18: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5e1c:
    // 0x3b5e1c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b5e1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5e20:
    // 0x3b5e20: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b5e24:
    // 0x3b5e24: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b5e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b5e28:
    // 0x3b5e28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b5e28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b5e2c:
    // 0x3b5e2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b5e2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b5e30:
    // 0x3b5e30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b5e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5e34:
    // 0x3b5e34: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b5e34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b5e38:
    // 0x3b5e38: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b5e38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b5e3c:
    // 0x3b5e3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b5e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5e40:
    // 0x3b5e40: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b5e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5e44:
    // 0x3b5e44: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b5e44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b5e48:
    // 0x3b5e48: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b5e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5e4c:
    // 0x3b5e4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b5e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b5e50:
    // 0x3b5e50: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b5e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b5e54:
    // 0x3b5e54: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b5e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5e58:
    // 0x3b5e58: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b5e58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b5e5c:
    // 0x3b5e5c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b5e5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5e60:
    // 0x3b5e60: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b5e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5e64:
    // 0x3b5e64: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b5e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5e68:
    // 0x3b5e68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b5e68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b5e6c:
    // 0x3b5e6c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b5e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b5e70:
    // 0x3b5e70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b5e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b5e74:
    // 0x3b5e74: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b5e78:
    // 0x3b5e78: 0x26102370  addiu       $s0, $s0, 0x2370
    ctx->pc = 0x3b5e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9072));
label_3b5e7c:
    // 0x3b5e7c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3b5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3b5e80:
    // 0x3b5e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e84:
    // 0x3b5e84: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5e88:
    // 0x3b5e88: 0xc0e90ca  jal         func_3A4328
label_3b5e8c:
    if (ctx->pc == 0x3B5E8Cu) {
        ctx->pc = 0x3B5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E88u;
        // 0x3b5e8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5E90u;
        goto label_3b5e90;
    }
    ctx->pc = 0x3B5E88u;
    SET_GPR_U32(ctx, 31, 0x3B5E90u);
    ctx->pc = 0x3B5E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E88u;
    // 0x3b5e8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B5E88u, 0x3B5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5E90u;
label_3b5e90:
    // 0x3b5e90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b5e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5e94:
    // 0x3b5e94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b5e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e98:
    // 0x3b5e98: 0xc136b18  jal         func_4DAC60
label_3b5e9c:
    if (ctx->pc == 0x3B5E9Cu) {
        ctx->pc = 0x3B5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E98u;
        // 0x3b5e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5EA0u;
        goto label_3b5ea0;
    }
    ctx->pc = 0x3B5E98u;
    SET_GPR_U32(ctx, 31, 0x3B5EA0u);
    ctx->pc = 0x3B5E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E98u;
    // 0x3b5e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B5E98u, 0x3B5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EA0u;
label_3b5ea0:
    // 0x3b5ea0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b5ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5ea4:
    // 0x3b5ea4: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x3b5ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b5ea8:
    // 0x3b5ea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b5ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5eac:
    // 0x3b5eac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b5eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b5eb0:
    // 0x3b5eb0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5eb4:
    // 0x3b5eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5eb8:
    // 0x3b5eb8: 0xc0e94fc  jal         func_3A53F0
label_3b5ebc:
    if (ctx->pc == 0x3B5EBCu) {
        ctx->pc = 0x3B5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EB8u;
        // 0x3b5ebc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5EC0u;
        goto label_3b5ec0;
    }
    ctx->pc = 0x3B5EB8u;
    SET_GPR_U32(ctx, 31, 0x3B5EC0u);
    ctx->pc = 0x3B5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EB8u;
    // 0x3b5ebc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B5EB8u, 0x3B5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EC0u;
label_3b5ec0:
    // 0x3b5ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ec4:
    // 0x3b5ec4: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3b5ec4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3b5ec8:
    // 0x3b5ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ecc:
    // 0x3b5ecc: 0xc0cd518  jal         func_335460
label_3b5ed0:
    if (ctx->pc == 0x3B5ED0u) {
        ctx->pc = 0x3B5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5ECCu;
        // 0x3b5ed0: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5ED4u;
        goto label_3b5ed4;
    }
    ctx->pc = 0x3B5ECCu;
    SET_GPR_U32(ctx, 31, 0x3B5ED4u);
    ctx->pc = 0x3B5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5ECCu;
    // 0x3b5ed0: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5ECCu, 0x3B5ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5ED4u;
label_3b5ed4:
    // 0x3b5ed4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b5ed8:
    // 0x3b5ed8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b5ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b5edc:
    // 0x3b5edc: 0xc136b24  jal         func_4DAC90
label_3b5ee0:
    if (ctx->pc == 0x3B5EE0u) {
        ctx->pc = 0x3B5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EDCu;
        // 0x3b5ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5EE4u;
        goto label_3b5ee4;
    }
    ctx->pc = 0x3B5EDCu;
    SET_GPR_U32(ctx, 31, 0x3B5EE4u);
    ctx->pc = 0x3B5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EDCu;
    // 0x3b5ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B5EDCu, 0x3B5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EE4u;
label_3b5ee4:
    // 0x3b5ee4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5ee8:
    // 0x3b5ee8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b5ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5eec:
    // 0x3b5eec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ef0:
    // 0x3b5ef0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5ef4:
    // 0x3b5ef4: 0xc0ea158  jal         func_3A8560
label_3b5ef8:
    if (ctx->pc == 0x3B5EF8u) {
        ctx->pc = 0x3B5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EF4u;
        // 0x3b5ef8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5EFCu;
        goto label_3b5efc;
    }
    ctx->pc = 0x3B5EF4u;
    SET_GPR_U32(ctx, 31, 0x3B5EFCu);
    ctx->pc = 0x3B5EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EF4u;
    // 0x3b5ef8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B5EF4u, 0x3B5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EFCu;
label_3b5efc:
    // 0x3b5efc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b5efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b5f00:
    // 0x3b5f00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b5f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f04:
    // 0x3b5f04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f08:
    // 0x3b5f08: 0xc0ea158  jal         func_3A8560
label_3b5f0c:
    if (ctx->pc == 0x3B5F0Cu) {
        ctx->pc = 0x3B5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F08u;
        // 0x3b5f0c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5F10u;
        goto label_3b5f10;
    }
    ctx->pc = 0x3B5F08u;
    SET_GPR_U32(ctx, 31, 0x3B5F10u);
    ctx->pc = 0x3B5F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F08u;
    // 0x3b5f0c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B5F08u, 0x3B5F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F10u;
label_3b5f10:
    // 0x3b5f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b5f14:
    // 0x3b5f14: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3b5f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f18:
    // 0x3b5f18: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b5f1c:
    // 0x3b5f1c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b5f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b5f20:
    // 0x3b5f20: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b5f24:
    // 0x3b5f24: 0x40f809  jalr        $v0
label_3b5f28:
    if (ctx->pc == 0x3B5F28u) {
        ctx->pc = 0x3B5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F24u;
        // 0x3b5f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5F2Cu;
        goto label_3b5f2c;
    }
    ctx->pc = 0x3B5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B5F2Cu);
        ctx->pc = 0x3B5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F24u;
        // 0x3b5f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5F24u, 0x3B5F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5F2Cu;
label_3b5f2c:
    // 0x3b5f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f30:
    // 0x3b5f30: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5f30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5f34:
    // 0x3b5f34: 0xc0cd518  jal         func_335460
label_3b5f38:
    if (ctx->pc == 0x3B5F38u) {
        ctx->pc = 0x3B5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F34u;
        // 0x3b5f38: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5F3Cu;
        goto label_3b5f3c;
    }
    ctx->pc = 0x3B5F34u;
    SET_GPR_U32(ctx, 31, 0x3B5F3Cu);
    ctx->pc = 0x3B5F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F34u;
    // 0x3b5f38: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5F34u, 0x3B5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F3Cu;
label_3b5f3c:
    // 0x3b5f3c: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b5f3cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5f40:
    // 0x3b5f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f44:
    // 0x3b5f44: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5f48:
    // 0x3b5f48: 0xc0cd518  jal         func_335460
label_3b5f4c:
    if (ctx->pc == 0x3B5F4Cu) {
        ctx->pc = 0x3B5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F48u;
        // 0x3b5f4c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5F50u;
        goto label_3b5f50;
    }
    ctx->pc = 0x3B5F48u;
    SET_GPR_U32(ctx, 31, 0x3B5F50u);
    ctx->pc = 0x3B5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F48u;
    // 0x3b5f4c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5F48u, 0x3B5F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F50u;
label_3b5f50:
    // 0x3b5f50: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b5f50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5f54:
    // 0x3b5f54: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5f54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5f58:
    // 0x3b5f58: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3b5f58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3b5f5c:
    // 0x3b5f5c: 0xc0cd518  jal         func_335460
label_3b5f60:
    if (ctx->pc == 0x3B5F60u) {
        ctx->pc = 0x3B5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F5Cu;
        // 0x3b5f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5F64u;
        goto label_3b5f64;
    }
    ctx->pc = 0x3B5F5Cu;
    SET_GPR_U32(ctx, 31, 0x3B5F64u);
    ctx->pc = 0x3B5F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F5Cu;
    // 0x3b5f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5F5Cu, 0x3B5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F64u;
label_3b5f64:
    // 0x3b5f64: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b5f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5f68:
    // 0x3b5f68: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b5f68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b5f6c:
    // 0x3b5f6c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b5f6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b5f70:
    // 0x3b5f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f74:
    // 0x3b5f74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b5f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f78:
    // 0x3b5f78: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b5f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b5f7c:
    // 0x3b5f7c: 0xe639000c  swc1        $f25, 0xC($s1)
    ctx->pc = 0x3b5f7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b5f80:
    // 0x3b5f80: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5f80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5f84:
    // 0x3b5f84: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5f88:
    // 0x3b5f88: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b5f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b5f8c:
    // 0x3b5f8c: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3b5f8cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b5f90:
    // 0x3b5f90: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3b5f90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b5f94:
    // 0x3b5f94: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3b5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3b5f98:
    // 0x3b5f98: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3b5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3b5f9c:
    // 0x3b5f9c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5fa0:
    // 0x3b5fa0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b5fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b5fa4:
    // 0x3b5fa4: 0xc0e911e  jal         func_3A4478
label_3b5fa8:
    if (ctx->pc == 0x3B5FA8u) {
        ctx->pc = 0x3B5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5FA4u;
        // 0x3b5fa8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5FACu;
        goto label_3b5fac;
    }
    ctx->pc = 0x3B5FA4u;
    SET_GPR_U32(ctx, 31, 0x3B5FACu);
    ctx->pc = 0x3B5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5FA4u;
    // 0x3b5fa8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B5FA4u, 0x3B5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5FACu;
label_3b5fac:
    // 0x3b5fac: 0x3c01bc27  lui         $at, 0xBC27
    ctx->pc = 0x3b5facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48167 << 16));
label_3b5fb0:
    // 0x3b5fb0: 0x34219bbb  ori         $at, $at, 0x9BBB
    ctx->pc = 0x3b5fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39867);
label_3b5fb4:
    // 0x3b5fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b5fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5fb8:
    // 0x3b5fb8: 0xe679000c  swc1        $f25, 0xC($s3)
    ctx->pc = 0x3b5fb8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b5fbc:
    // 0x3b5fbc: 0x3c013aab  lui         $at, 0x3AAB
    ctx->pc = 0x3b5fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15019 << 16));
label_3b5fc0:
    // 0x3b5fc0: 0x3421b44e  ori         $at, $at, 0xB44E
    ctx->pc = 0x3b5fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46158);
label_3b5fc4:
    // 0x3b5fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b5fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5fc8:
    // 0x3b5fc8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b5fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b5fcc:
    // 0x3b5fcc: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x3b5fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b5fd0:
    // 0x3b5fd0: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x3b5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_3b5fd4:
    // 0x3b5fd4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5fd8:
    // 0x3b5fd8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b5fd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5fdc:
    // 0x3b5fdc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b5fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b5fe0:
    // 0x3b5fe0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b5fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b5fe4:
    // 0x3b5fe4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b5fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b5fe8:
    // 0x3b5fe8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b5fe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b5fec:
    // 0x3b5fec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b5fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5ff0:
    // 0x3b5ff0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b5ff0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b5ff4:
    // 0x3b5ff4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b5ff4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b5ff8:
    // 0x3b5ff8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b5ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5ffc:
    // 0x3b5ffc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b5ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6000:
    // 0x3b6000: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b6000u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6004:
    // 0x3b6004: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6008:
    // 0x3b6008: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b600c:
    // 0x3b600c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b600cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6010:
    // 0x3b6010: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b6010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6014:
    // 0x3b6014: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6014u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6018:
    // 0x3b6018: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6018u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b601c:
    // 0x3b601c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b601cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6020:
    // 0x3b6020: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b6020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6024:
    // 0x3b6024: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6024u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6028:
    // 0x3b6028: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b6028u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b602c:
    // 0x3b602c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b6030:
    // 0x3b6030: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b6030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b6034:
    // 0x3b6034: 0x26102388  addiu       $s0, $s0, 0x2388
    ctx->pc = 0x3b6034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9096));
label_3b6038:
    // 0x3b6038: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b6038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b603c:
    // 0x3b603c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6040:
    // 0x3b6040: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b6040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b6044:
    // 0x3b6044: 0xc0e90ca  jal         func_3A4328
label_3b6048:
    if (ctx->pc == 0x3B6048u) {
        ctx->pc = 0x3B6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6044u;
        // 0x3b6048: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B604Cu;
        goto label_3b604c;
    }
    ctx->pc = 0x3B6044u;
    SET_GPR_U32(ctx, 31, 0x3B604Cu);
    ctx->pc = 0x3B6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6044u;
    // 0x3b6048: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B6044u, 0x3B604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B604Cu;
label_3b604c:
    // 0x3b604c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6050:
    // 0x3b6050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6054:
    // 0x3b6054: 0xc136b18  jal         func_4DAC60
label_3b6058:
    if (ctx->pc == 0x3B6058u) {
        ctx->pc = 0x3B6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6054u;
        // 0x3b6058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B605Cu;
        goto label_3b605c;
    }
    ctx->pc = 0x3B6054u;
    SET_GPR_U32(ctx, 31, 0x3B605Cu);
    ctx->pc = 0x3B6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6054u;
    // 0x3b6058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6054u, 0x3B605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B605Cu;
label_3b605c:
    // 0x3b605c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b605cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6060:
    // 0x3b6060: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b6060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b6064:
    // 0x3b6064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b6064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6068:
    // 0x3b6068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b606c:
    // 0x3b606c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b6070:
    // 0x3b6070: 0xc0e94fc  jal         func_3A53F0
label_3b6074:
    if (ctx->pc == 0x3B6074u) {
        ctx->pc = 0x3B6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6070u;
        // 0x3b6074: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6078u;
        goto label_3b6078;
    }
    ctx->pc = 0x3B6070u;
    SET_GPR_U32(ctx, 31, 0x3B6078u);
    ctx->pc = 0x3B6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6070u;
    // 0x3b6074: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B6070u, 0x3B6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6078u;
label_3b6078:
    // 0x3b6078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b607c:
    // 0x3b607c: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3b607cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3b6080:
    // 0x3b6080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6084:
    // 0x3b6084: 0xc0cd518  jal         func_335460
label_3b6088:
    if (ctx->pc == 0x3B6088u) {
        ctx->pc = 0x3B6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6084u;
        // 0x3b6088: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B608Cu;
        goto label_3b608c;
    }
    ctx->pc = 0x3B6084u;
    SET_GPR_U32(ctx, 31, 0x3B608Cu);
    ctx->pc = 0x3B6088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6084u;
    // 0x3b6088: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6084u, 0x3B608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B608Cu;
label_3b608c:
    // 0x3b608c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b6090:
    // 0x3b6090: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b6090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b6094:
    // 0x3b6094: 0xc136b24  jal         func_4DAC90
label_3b6098:
    if (ctx->pc == 0x3B6098u) {
        ctx->pc = 0x3B6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6094u;
        // 0x3b6098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B609Cu;
        goto label_3b609c;
    }
    ctx->pc = 0x3B6094u;
    SET_GPR_U32(ctx, 31, 0x3B609Cu);
    ctx->pc = 0x3B6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6094u;
    // 0x3b6098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B6094u, 0x3B609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B609Cu;
label_3b609c:
    // 0x3b609c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b609cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b60a0:
    // 0x3b60a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b60a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b60a4:
    // 0x3b60a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b60a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b60a8:
    // 0x3b60a8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b60a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b60ac:
    // 0x3b60ac: 0xc0ea158  jal         func_3A8560
label_3b60b0:
    if (ctx->pc == 0x3B60B0u) {
        ctx->pc = 0x3B60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60ACu;
        // 0x3b60b0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B60B4u;
        goto label_3b60b4;
    }
    ctx->pc = 0x3B60ACu;
    SET_GPR_U32(ctx, 31, 0x3B60B4u);
    ctx->pc = 0x3B60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60ACu;
    // 0x3b60b0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B60ACu, 0x3B60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60B4u;
label_3b60b4:
    // 0x3b60b4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b60b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b60b8:
    // 0x3b60b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b60b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b60bc:
    // 0x3b60bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b60bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b60c0:
    // 0x3b60c0: 0xc0ea158  jal         func_3A8560
label_3b60c4:
    if (ctx->pc == 0x3B60C4u) {
        ctx->pc = 0x3B60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60C0u;
        // 0x3b60c4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B60C8u;
        goto label_3b60c8;
    }
    ctx->pc = 0x3B60C0u;
    SET_GPR_U32(ctx, 31, 0x3B60C8u);
    ctx->pc = 0x3B60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60C0u;
    // 0x3b60c4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B60C0u, 0x3B60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60C8u;
label_3b60c8:
    // 0x3b60c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b60cc:
    // 0x3b60cc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3b60ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b60d0:
    // 0x3b60d0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b60d4:
    // 0x3b60d4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b60d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b60d8:
    // 0x3b60d8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b60dc:
    // 0x3b60dc: 0x40f809  jalr        $v0
label_3b60e0:
    if (ctx->pc == 0x3B60E0u) {
        ctx->pc = 0x3B60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60DCu;
        // 0x3b60e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B60E4u;
        goto label_3b60e4;
    }
    ctx->pc = 0x3B60DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B60E4u);
        ctx->pc = 0x3B60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60DCu;
        // 0x3b60e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B60DCu, 0x3B60E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B60E4u;
label_3b60e4:
    // 0x3b60e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b60e8:
    // 0x3b60e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b60ec:
    // 0x3b60ec: 0xc1073cc  jal         func_41CF30
label_3b60f0:
    if (ctx->pc == 0x3B60F0u) {
        ctx->pc = 0x3B60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60ECu;
        // 0x3b60f0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B60F4u;
        goto label_3b60f4;
    }
    ctx->pc = 0x3B60ECu;
    SET_GPR_U32(ctx, 31, 0x3B60F4u);
    ctx->pc = 0x3B60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60ECu;
    // 0x3b60f0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B60ECu, 0x3B60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60F4u;
label_3b60f4:
    // 0x3b60f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b60f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b60f8:
    // 0x3b60f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3b60fc:
    if (ctx->pc == 0x3B60FCu) {
        ctx->pc = 0x3B60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60F8u;
        // 0x3b60fc: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6100u;
        goto label_3b6100;
    }
    ctx->pc = 0x3B60F8u;
    {
        const bool branch_taken_0x3b60f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60F8u;
        // 0x3b60fc: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b60f8) {
            ctx->pc = 0x3B6128u;
            goto label_3b6128;
        }
    }
    ctx->pc = 0x3B6100u;
label_3b6100:
    // 0x3b6100: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6104:
    // 0x3b6104: 0xc0e8dee  jal         func_3A37B8
label_3b6108:
    if (ctx->pc == 0x3B6108u) {
        ctx->pc = 0x3B6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6104u;
        // 0x3b6108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B610Cu;
        goto label_3b610c;
    }
    ctx->pc = 0x3B6104u;
    SET_GPR_U32(ctx, 31, 0x3B610Cu);
    ctx->pc = 0x3B6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6104u;
    // 0x3b6108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B6104u, 0x3B610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B610Cu;
label_3b610c:
    // 0x3b610c: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x3b610cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_3b6110:
    // 0x3b6110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b6110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6114:
    // 0x3b6114: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3b6114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b6118:
    // 0x3b6118: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b6118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b611c:
    // 0x3b611c: 0xc045ca0  jal         func_117280
label_3b6120:
    if (ctx->pc == 0x3B6120u) {
        ctx->pc = 0x3B6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B611Cu;
        // 0x3b6120: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6124u;
        goto label_3b6124;
    }
    ctx->pc = 0x3B611Cu;
    SET_GPR_U32(ctx, 31, 0x3B6124u);
    ctx->pc = 0x3B6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B611Cu;
    // 0x3b6120: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3B611Cu, 0x3B6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6124u;
label_3b6124:
    // 0x3b6124: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b6128:
    // 0x3b6128: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3b6128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b612c:
    // 0x3b612c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3b612cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3b6130:
    // 0x3b6130: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b6130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b6134:
    // 0x3b6134: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6138:
    // 0x3b6138: 0xc0e9bb2  jal         func_3A6EC8
label_3b613c:
    if (ctx->pc == 0x3B613Cu) {
        ctx->pc = 0x3B613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6138u;
        // 0x3b613c: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6140u;
        goto label_3b6140;
    }
    ctx->pc = 0x3B6138u;
    SET_GPR_U32(ctx, 31, 0x3B6140u);
    ctx->pc = 0x3B613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6138u;
    // 0x3b613c: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B6138u, 0x3B6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6140u;
label_3b6140:
    // 0x3b6140: 0x10000010  b           . + 4 + (0x10 << 2)
label_3b6144:
    if (ctx->pc == 0x3B6144u) {
        ctx->pc = 0x3B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6140u;
        // 0x3b6144: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6148u;
        goto label_3b6148;
    }
    ctx->pc = 0x3B6140u;
    {
        const bool branch_taken_0x3b6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6140u;
        // 0x3b6144: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6140) {
            ctx->pc = 0x3B6184u;
            goto label_3b6184;
        }
    }
    ctx->pc = 0x3B6148u;
label_3b6148:
    // 0x3b6148: 0xc0ea146  jal         func_3A8518
label_3b614c:
    if (ctx->pc == 0x3B614Cu) {
        ctx->pc = 0x3B614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6148u;
        // 0x3b614c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6150u;
        goto label_3b6150;
    }
    ctx->pc = 0x3B6148u;
    SET_GPR_U32(ctx, 31, 0x3B6150u);
    ctx->pc = 0x3B614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6148u;
    // 0x3b614c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B6148u, 0x3B6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6150u;
label_3b6150:
    // 0x3b6150: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b6154:
    // 0x3b6154: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6158:
    // 0x3b6158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b6158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b615c:
    // 0x3b615c: 0xc0e9bb2  jal         func_3A6EC8
label_3b6160:
    if (ctx->pc == 0x3B6160u) {
        ctx->pc = 0x3B6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B615Cu;
        // 0x3b6160: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6164u;
        goto label_3b6164;
    }
    ctx->pc = 0x3B615Cu;
    SET_GPR_U32(ctx, 31, 0x3B6164u);
    ctx->pc = 0x3B6160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B615Cu;
    // 0x3b6160: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B615Cu, 0x3B6164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6164u;
label_3b6164:
    // 0x3b6164: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b6168:
    if (ctx->pc == 0x3B6168u) {
        ctx->pc = 0x3B6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6164u;
        // 0x3b6168: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B616Cu;
        goto label_3b616c;
    }
    ctx->pc = 0x3B6164u;
    {
        const bool branch_taken_0x3b6164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6164u;
        // 0x3b6168: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6164) {
            ctx->pc = 0x3B6184u;
            goto label_3b6184;
        }
    }
    ctx->pc = 0x3B616Cu;
label_3b616c:
    // 0x3b616c: 0xc0ea146  jal         func_3A8518
label_3b6170:
    if (ctx->pc == 0x3B6170u) {
        ctx->pc = 0x3B6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B616Cu;
        // 0x3b6170: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6174u;
        goto label_3b6174;
    }
    ctx->pc = 0x3B616Cu;
    SET_GPR_U32(ctx, 31, 0x3B6174u);
    ctx->pc = 0x3B6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B616Cu;
    // 0x3b6170: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B616Cu, 0x3B6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6174u;
label_3b6174:
    // 0x3b6174: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6178:
    // 0x3b6178: 0xc0e85fa  jal         func_3A17E8
label_3b617c:
    if (ctx->pc == 0x3B617Cu) {
        ctx->pc = 0x3B617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6178u;
        // 0x3b617c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6180u;
        goto label_3b6180;
    }
    ctx->pc = 0x3B6178u;
    SET_GPR_U32(ctx, 31, 0x3B6180u);
    ctx->pc = 0x3B617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6178u;
    // 0x3b617c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3B6178u, 0x3B6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6180u;
label_3b6180:
    // 0x3b6180: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3b6180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3b6184:
    // 0x3b6184: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3b6184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3b6188:
    // 0x3b6188: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3b6188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3b618c:
    // 0x3b618c: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x3b618cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3b6190:
    // 0x3b6190: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x3b6190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3b6194:
    // 0x3b6194: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x3b6194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3b6198:
    // 0x3b6198: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x3b6198u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3b619c:
    // 0x3b619c: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x3b619cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3b61a0:
    // 0x3b61a0: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x3b61a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3b61a4:
    // 0x3b61a4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3b61a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_3b61a8:
    // 0x3b61a8: 0xc7bc0200  lwc1        $f28, 0x200($sp)
    ctx->pc = 0x3b61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3b61ac:
    // 0x3b61ac: 0xc7bb01f8  lwc1        $f27, 0x1F8($sp)
    ctx->pc = 0x3b61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3b61b0:
    // 0x3b61b0: 0xc7ba01f0  lwc1        $f26, 0x1F0($sp)
    ctx->pc = 0x3b61b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3b61b4:
    // 0x3b61b4: 0xc7b901e8  lwc1        $f25, 0x1E8($sp)
    ctx->pc = 0x3b61b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b61b8:
    // 0x3b61b8: 0xc7b801e0  lwc1        $f24, 0x1E0($sp)
    ctx->pc = 0x3b61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b61bc:
    // 0x3b61bc: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x3b61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b61c0:
    // 0x3b61c0: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x3b61c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b61c4:
    // 0x3b61c4: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x3b61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b61c8:
    // 0x3b61c8: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x3b61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b61cc:
    // 0x3b61cc: 0x3e00008  jr          $ra
label_3b61d0:
    if (ctx->pc == 0x3B61D0u) {
        ctx->pc = 0x3B61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B61CCu;
        // 0x3b61d0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B61D4u;
        goto label_3b61d4;
    }
    ctx->pc = 0x3B61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B61CCu;
        // 0x3b61d0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B61D4u;
label_3b61d4:
    // 0x3b61d4: 0x0  nop
    ctx->pc = 0x3b61d4u;
    // NOP
    ctx->pc = 0x3b61d8u;
}
