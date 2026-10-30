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

// Function: sub_003C8B28
// Address: 0x3c8b28 - 0x3c9f78
void sub_003C8B28_0x3c8b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8B28_0x3c8b28");
#endif

    switch (ctx->pc) {
        case 0x3c8b28u: goto label_3c8b28;
        case 0x3c8b2cu: goto label_3c8b2c;
        case 0x3c8b30u: goto label_3c8b30;
        case 0x3c8b34u: goto label_3c8b34;
        case 0x3c8b38u: goto label_3c8b38;
        case 0x3c8b3cu: goto label_3c8b3c;
        case 0x3c8b40u: goto label_3c8b40;
        case 0x3c8b44u: goto label_3c8b44;
        case 0x3c8b48u: goto label_3c8b48;
        case 0x3c8b4cu: goto label_3c8b4c;
        case 0x3c8b50u: goto label_3c8b50;
        case 0x3c8b54u: goto label_3c8b54;
        case 0x3c8b58u: goto label_3c8b58;
        case 0x3c8b5cu: goto label_3c8b5c;
        case 0x3c8b60u: goto label_3c8b60;
        case 0x3c8b64u: goto label_3c8b64;
        case 0x3c8b68u: goto label_3c8b68;
        case 0x3c8b6cu: goto label_3c8b6c;
        case 0x3c8b70u: goto label_3c8b70;
        case 0x3c8b74u: goto label_3c8b74;
        case 0x3c8b78u: goto label_3c8b78;
        case 0x3c8b7cu: goto label_3c8b7c;
        case 0x3c8b80u: goto label_3c8b80;
        case 0x3c8b84u: goto label_3c8b84;
        case 0x3c8b88u: goto label_3c8b88;
        case 0x3c8b8cu: goto label_3c8b8c;
        case 0x3c8b90u: goto label_3c8b90;
        case 0x3c8b94u: goto label_3c8b94;
        case 0x3c8b98u: goto label_3c8b98;
        case 0x3c8b9cu: goto label_3c8b9c;
        case 0x3c8ba0u: goto label_3c8ba0;
        case 0x3c8ba4u: goto label_3c8ba4;
        case 0x3c8ba8u: goto label_3c8ba8;
        case 0x3c8bacu: goto label_3c8bac;
        case 0x3c8bb0u: goto label_3c8bb0;
        case 0x3c8bb4u: goto label_3c8bb4;
        case 0x3c8bb8u: goto label_3c8bb8;
        case 0x3c8bbcu: goto label_3c8bbc;
        case 0x3c8bc0u: goto label_3c8bc0;
        case 0x3c8bc4u: goto label_3c8bc4;
        case 0x3c8bc8u: goto label_3c8bc8;
        case 0x3c8bccu: goto label_3c8bcc;
        case 0x3c8bd0u: goto label_3c8bd0;
        case 0x3c8bd4u: goto label_3c8bd4;
        case 0x3c8bd8u: goto label_3c8bd8;
        case 0x3c8bdcu: goto label_3c8bdc;
        case 0x3c8be0u: goto label_3c8be0;
        case 0x3c8be4u: goto label_3c8be4;
        case 0x3c8be8u: goto label_3c8be8;
        case 0x3c8becu: goto label_3c8bec;
        case 0x3c8bf0u: goto label_3c8bf0;
        case 0x3c8bf4u: goto label_3c8bf4;
        case 0x3c8bf8u: goto label_3c8bf8;
        case 0x3c8bfcu: goto label_3c8bfc;
        case 0x3c8c00u: goto label_3c8c00;
        case 0x3c8c04u: goto label_3c8c04;
        case 0x3c8c08u: goto label_3c8c08;
        case 0x3c8c0cu: goto label_3c8c0c;
        case 0x3c8c10u: goto label_3c8c10;
        case 0x3c8c14u: goto label_3c8c14;
        case 0x3c8c18u: goto label_3c8c18;
        case 0x3c8c1cu: goto label_3c8c1c;
        case 0x3c8c20u: goto label_3c8c20;
        case 0x3c8c24u: goto label_3c8c24;
        case 0x3c8c28u: goto label_3c8c28;
        case 0x3c8c2cu: goto label_3c8c2c;
        case 0x3c8c30u: goto label_3c8c30;
        case 0x3c8c34u: goto label_3c8c34;
        case 0x3c8c38u: goto label_3c8c38;
        case 0x3c8c3cu: goto label_3c8c3c;
        case 0x3c8c40u: goto label_3c8c40;
        case 0x3c8c44u: goto label_3c8c44;
        case 0x3c8c48u: goto label_3c8c48;
        case 0x3c8c4cu: goto label_3c8c4c;
        case 0x3c8c50u: goto label_3c8c50;
        case 0x3c8c54u: goto label_3c8c54;
        case 0x3c8c58u: goto label_3c8c58;
        case 0x3c8c5cu: goto label_3c8c5c;
        case 0x3c8c60u: goto label_3c8c60;
        case 0x3c8c64u: goto label_3c8c64;
        case 0x3c8c68u: goto label_3c8c68;
        case 0x3c8c6cu: goto label_3c8c6c;
        case 0x3c8c70u: goto label_3c8c70;
        case 0x3c8c74u: goto label_3c8c74;
        case 0x3c8c78u: goto label_3c8c78;
        case 0x3c8c7cu: goto label_3c8c7c;
        case 0x3c8c80u: goto label_3c8c80;
        case 0x3c8c84u: goto label_3c8c84;
        case 0x3c8c88u: goto label_3c8c88;
        case 0x3c8c8cu: goto label_3c8c8c;
        case 0x3c8c90u: goto label_3c8c90;
        case 0x3c8c94u: goto label_3c8c94;
        case 0x3c8c98u: goto label_3c8c98;
        case 0x3c8c9cu: goto label_3c8c9c;
        case 0x3c8ca0u: goto label_3c8ca0;
        case 0x3c8ca4u: goto label_3c8ca4;
        case 0x3c8ca8u: goto label_3c8ca8;
        case 0x3c8cacu: goto label_3c8cac;
        case 0x3c8cb0u: goto label_3c8cb0;
        case 0x3c8cb4u: goto label_3c8cb4;
        case 0x3c8cb8u: goto label_3c8cb8;
        case 0x3c8cbcu: goto label_3c8cbc;
        case 0x3c8cc0u: goto label_3c8cc0;
        case 0x3c8cc4u: goto label_3c8cc4;
        case 0x3c8cc8u: goto label_3c8cc8;
        case 0x3c8cccu: goto label_3c8ccc;
        case 0x3c8cd0u: goto label_3c8cd0;
        case 0x3c8cd4u: goto label_3c8cd4;
        case 0x3c8cd8u: goto label_3c8cd8;
        case 0x3c8cdcu: goto label_3c8cdc;
        case 0x3c8ce0u: goto label_3c8ce0;
        case 0x3c8ce4u: goto label_3c8ce4;
        case 0x3c8ce8u: goto label_3c8ce8;
        case 0x3c8cecu: goto label_3c8cec;
        case 0x3c8cf0u: goto label_3c8cf0;
        case 0x3c8cf4u: goto label_3c8cf4;
        case 0x3c8cf8u: goto label_3c8cf8;
        case 0x3c8cfcu: goto label_3c8cfc;
        case 0x3c8d00u: goto label_3c8d00;
        case 0x3c8d04u: goto label_3c8d04;
        case 0x3c8d08u: goto label_3c8d08;
        case 0x3c8d0cu: goto label_3c8d0c;
        case 0x3c8d10u: goto label_3c8d10;
        case 0x3c8d14u: goto label_3c8d14;
        case 0x3c8d18u: goto label_3c8d18;
        case 0x3c8d1cu: goto label_3c8d1c;
        case 0x3c8d20u: goto label_3c8d20;
        case 0x3c8d24u: goto label_3c8d24;
        case 0x3c8d28u: goto label_3c8d28;
        case 0x3c8d2cu: goto label_3c8d2c;
        case 0x3c8d30u: goto label_3c8d30;
        case 0x3c8d34u: goto label_3c8d34;
        case 0x3c8d38u: goto label_3c8d38;
        case 0x3c8d3cu: goto label_3c8d3c;
        case 0x3c8d40u: goto label_3c8d40;
        case 0x3c8d44u: goto label_3c8d44;
        case 0x3c8d48u: goto label_3c8d48;
        case 0x3c8d4cu: goto label_3c8d4c;
        case 0x3c8d50u: goto label_3c8d50;
        case 0x3c8d54u: goto label_3c8d54;
        case 0x3c8d58u: goto label_3c8d58;
        case 0x3c8d5cu: goto label_3c8d5c;
        case 0x3c8d60u: goto label_3c8d60;
        case 0x3c8d64u: goto label_3c8d64;
        case 0x3c8d68u: goto label_3c8d68;
        case 0x3c8d6cu: goto label_3c8d6c;
        case 0x3c8d70u: goto label_3c8d70;
        case 0x3c8d74u: goto label_3c8d74;
        case 0x3c8d78u: goto label_3c8d78;
        case 0x3c8d7cu: goto label_3c8d7c;
        case 0x3c8d80u: goto label_3c8d80;
        case 0x3c8d84u: goto label_3c8d84;
        case 0x3c8d88u: goto label_3c8d88;
        case 0x3c8d8cu: goto label_3c8d8c;
        case 0x3c8d90u: goto label_3c8d90;
        case 0x3c8d94u: goto label_3c8d94;
        case 0x3c8d98u: goto label_3c8d98;
        case 0x3c8d9cu: goto label_3c8d9c;
        case 0x3c8da0u: goto label_3c8da0;
        case 0x3c8da4u: goto label_3c8da4;
        case 0x3c8da8u: goto label_3c8da8;
        case 0x3c8dacu: goto label_3c8dac;
        case 0x3c8db0u: goto label_3c8db0;
        case 0x3c8db4u: goto label_3c8db4;
        case 0x3c8db8u: goto label_3c8db8;
        case 0x3c8dbcu: goto label_3c8dbc;
        case 0x3c8dc0u: goto label_3c8dc0;
        case 0x3c8dc4u: goto label_3c8dc4;
        case 0x3c8dc8u: goto label_3c8dc8;
        case 0x3c8dccu: goto label_3c8dcc;
        case 0x3c8dd0u: goto label_3c8dd0;
        case 0x3c8dd4u: goto label_3c8dd4;
        case 0x3c8dd8u: goto label_3c8dd8;
        case 0x3c8ddcu: goto label_3c8ddc;
        case 0x3c8de0u: goto label_3c8de0;
        case 0x3c8de4u: goto label_3c8de4;
        case 0x3c8de8u: goto label_3c8de8;
        case 0x3c8decu: goto label_3c8dec;
        case 0x3c8df0u: goto label_3c8df0;
        case 0x3c8df4u: goto label_3c8df4;
        case 0x3c8df8u: goto label_3c8df8;
        case 0x3c8dfcu: goto label_3c8dfc;
        case 0x3c8e00u: goto label_3c8e00;
        case 0x3c8e04u: goto label_3c8e04;
        case 0x3c8e08u: goto label_3c8e08;
        case 0x3c8e0cu: goto label_3c8e0c;
        case 0x3c8e10u: goto label_3c8e10;
        case 0x3c8e14u: goto label_3c8e14;
        case 0x3c8e18u: goto label_3c8e18;
        case 0x3c8e1cu: goto label_3c8e1c;
        case 0x3c8e20u: goto label_3c8e20;
        case 0x3c8e24u: goto label_3c8e24;
        case 0x3c8e28u: goto label_3c8e28;
        case 0x3c8e2cu: goto label_3c8e2c;
        case 0x3c8e30u: goto label_3c8e30;
        case 0x3c8e34u: goto label_3c8e34;
        case 0x3c8e38u: goto label_3c8e38;
        case 0x3c8e3cu: goto label_3c8e3c;
        case 0x3c8e40u: goto label_3c8e40;
        case 0x3c8e44u: goto label_3c8e44;
        case 0x3c8e48u: goto label_3c8e48;
        case 0x3c8e4cu: goto label_3c8e4c;
        case 0x3c8e50u: goto label_3c8e50;
        case 0x3c8e54u: goto label_3c8e54;
        case 0x3c8e58u: goto label_3c8e58;
        case 0x3c8e5cu: goto label_3c8e5c;
        case 0x3c8e60u: goto label_3c8e60;
        case 0x3c8e64u: goto label_3c8e64;
        case 0x3c8e68u: goto label_3c8e68;
        case 0x3c8e6cu: goto label_3c8e6c;
        case 0x3c8e70u: goto label_3c8e70;
        case 0x3c8e74u: goto label_3c8e74;
        case 0x3c8e78u: goto label_3c8e78;
        case 0x3c8e7cu: goto label_3c8e7c;
        case 0x3c8e80u: goto label_3c8e80;
        case 0x3c8e84u: goto label_3c8e84;
        case 0x3c8e88u: goto label_3c8e88;
        case 0x3c8e8cu: goto label_3c8e8c;
        case 0x3c8e90u: goto label_3c8e90;
        case 0x3c8e94u: goto label_3c8e94;
        case 0x3c8e98u: goto label_3c8e98;
        case 0x3c8e9cu: goto label_3c8e9c;
        case 0x3c8ea0u: goto label_3c8ea0;
        case 0x3c8ea4u: goto label_3c8ea4;
        case 0x3c8ea8u: goto label_3c8ea8;
        case 0x3c8eacu: goto label_3c8eac;
        case 0x3c8eb0u: goto label_3c8eb0;
        case 0x3c8eb4u: goto label_3c8eb4;
        case 0x3c8eb8u: goto label_3c8eb8;
        case 0x3c8ebcu: goto label_3c8ebc;
        case 0x3c8ec0u: goto label_3c8ec0;
        case 0x3c8ec4u: goto label_3c8ec4;
        case 0x3c8ec8u: goto label_3c8ec8;
        case 0x3c8eccu: goto label_3c8ecc;
        case 0x3c8ed0u: goto label_3c8ed0;
        case 0x3c8ed4u: goto label_3c8ed4;
        case 0x3c8ed8u: goto label_3c8ed8;
        case 0x3c8edcu: goto label_3c8edc;
        case 0x3c8ee0u: goto label_3c8ee0;
        case 0x3c8ee4u: goto label_3c8ee4;
        case 0x3c8ee8u: goto label_3c8ee8;
        case 0x3c8eecu: goto label_3c8eec;
        case 0x3c8ef0u: goto label_3c8ef0;
        case 0x3c8ef4u: goto label_3c8ef4;
        case 0x3c8ef8u: goto label_3c8ef8;
        case 0x3c8efcu: goto label_3c8efc;
        case 0x3c8f00u: goto label_3c8f00;
        case 0x3c8f04u: goto label_3c8f04;
        case 0x3c8f08u: goto label_3c8f08;
        case 0x3c8f0cu: goto label_3c8f0c;
        case 0x3c8f10u: goto label_3c8f10;
        case 0x3c8f14u: goto label_3c8f14;
        case 0x3c8f18u: goto label_3c8f18;
        case 0x3c8f1cu: goto label_3c8f1c;
        case 0x3c8f20u: goto label_3c8f20;
        case 0x3c8f24u: goto label_3c8f24;
        case 0x3c8f28u: goto label_3c8f28;
        case 0x3c8f2cu: goto label_3c8f2c;
        case 0x3c8f30u: goto label_3c8f30;
        case 0x3c8f34u: goto label_3c8f34;
        case 0x3c8f38u: goto label_3c8f38;
        case 0x3c8f3cu: goto label_3c8f3c;
        case 0x3c8f40u: goto label_3c8f40;
        case 0x3c8f44u: goto label_3c8f44;
        case 0x3c8f48u: goto label_3c8f48;
        case 0x3c8f4cu: goto label_3c8f4c;
        case 0x3c8f50u: goto label_3c8f50;
        case 0x3c8f54u: goto label_3c8f54;
        case 0x3c8f58u: goto label_3c8f58;
        case 0x3c8f5cu: goto label_3c8f5c;
        case 0x3c8f60u: goto label_3c8f60;
        case 0x3c8f64u: goto label_3c8f64;
        case 0x3c8f68u: goto label_3c8f68;
        case 0x3c8f6cu: goto label_3c8f6c;
        case 0x3c8f70u: goto label_3c8f70;
        case 0x3c8f74u: goto label_3c8f74;
        case 0x3c8f78u: goto label_3c8f78;
        case 0x3c8f7cu: goto label_3c8f7c;
        case 0x3c8f80u: goto label_3c8f80;
        case 0x3c8f84u: goto label_3c8f84;
        case 0x3c8f88u: goto label_3c8f88;
        case 0x3c8f8cu: goto label_3c8f8c;
        case 0x3c8f90u: goto label_3c8f90;
        case 0x3c8f94u: goto label_3c8f94;
        case 0x3c8f98u: goto label_3c8f98;
        case 0x3c8f9cu: goto label_3c8f9c;
        case 0x3c8fa0u: goto label_3c8fa0;
        case 0x3c8fa4u: goto label_3c8fa4;
        case 0x3c8fa8u: goto label_3c8fa8;
        case 0x3c8facu: goto label_3c8fac;
        case 0x3c8fb0u: goto label_3c8fb0;
        case 0x3c8fb4u: goto label_3c8fb4;
        case 0x3c8fb8u: goto label_3c8fb8;
        case 0x3c8fbcu: goto label_3c8fbc;
        case 0x3c8fc0u: goto label_3c8fc0;
        case 0x3c8fc4u: goto label_3c8fc4;
        case 0x3c8fc8u: goto label_3c8fc8;
        case 0x3c8fccu: goto label_3c8fcc;
        case 0x3c8fd0u: goto label_3c8fd0;
        case 0x3c8fd4u: goto label_3c8fd4;
        case 0x3c8fd8u: goto label_3c8fd8;
        case 0x3c8fdcu: goto label_3c8fdc;
        case 0x3c8fe0u: goto label_3c8fe0;
        case 0x3c8fe4u: goto label_3c8fe4;
        case 0x3c8fe8u: goto label_3c8fe8;
        case 0x3c8fecu: goto label_3c8fec;
        case 0x3c8ff0u: goto label_3c8ff0;
        case 0x3c8ff4u: goto label_3c8ff4;
        case 0x3c8ff8u: goto label_3c8ff8;
        case 0x3c8ffcu: goto label_3c8ffc;
        case 0x3c9000u: goto label_3c9000;
        case 0x3c9004u: goto label_3c9004;
        case 0x3c9008u: goto label_3c9008;
        case 0x3c900cu: goto label_3c900c;
        case 0x3c9010u: goto label_3c9010;
        case 0x3c9014u: goto label_3c9014;
        case 0x3c9018u: goto label_3c9018;
        case 0x3c901cu: goto label_3c901c;
        case 0x3c9020u: goto label_3c9020;
        case 0x3c9024u: goto label_3c9024;
        case 0x3c9028u: goto label_3c9028;
        case 0x3c902cu: goto label_3c902c;
        case 0x3c9030u: goto label_3c9030;
        case 0x3c9034u: goto label_3c9034;
        case 0x3c9038u: goto label_3c9038;
        case 0x3c903cu: goto label_3c903c;
        case 0x3c9040u: goto label_3c9040;
        case 0x3c9044u: goto label_3c9044;
        case 0x3c9048u: goto label_3c9048;
        case 0x3c904cu: goto label_3c904c;
        case 0x3c9050u: goto label_3c9050;
        case 0x3c9054u: goto label_3c9054;
        case 0x3c9058u: goto label_3c9058;
        case 0x3c905cu: goto label_3c905c;
        case 0x3c9060u: goto label_3c9060;
        case 0x3c9064u: goto label_3c9064;
        case 0x3c9068u: goto label_3c9068;
        case 0x3c906cu: goto label_3c906c;
        case 0x3c9070u: goto label_3c9070;
        case 0x3c9074u: goto label_3c9074;
        case 0x3c9078u: goto label_3c9078;
        case 0x3c907cu: goto label_3c907c;
        case 0x3c9080u: goto label_3c9080;
        case 0x3c9084u: goto label_3c9084;
        case 0x3c9088u: goto label_3c9088;
        case 0x3c908cu: goto label_3c908c;
        case 0x3c9090u: goto label_3c9090;
        case 0x3c9094u: goto label_3c9094;
        case 0x3c9098u: goto label_3c9098;
        case 0x3c909cu: goto label_3c909c;
        case 0x3c90a0u: goto label_3c90a0;
        case 0x3c90a4u: goto label_3c90a4;
        case 0x3c90a8u: goto label_3c90a8;
        case 0x3c90acu: goto label_3c90ac;
        case 0x3c90b0u: goto label_3c90b0;
        case 0x3c90b4u: goto label_3c90b4;
        case 0x3c90b8u: goto label_3c90b8;
        case 0x3c90bcu: goto label_3c90bc;
        case 0x3c90c0u: goto label_3c90c0;
        case 0x3c90c4u: goto label_3c90c4;
        case 0x3c90c8u: goto label_3c90c8;
        case 0x3c90ccu: goto label_3c90cc;
        case 0x3c90d0u: goto label_3c90d0;
        case 0x3c90d4u: goto label_3c90d4;
        case 0x3c90d8u: goto label_3c90d8;
        case 0x3c90dcu: goto label_3c90dc;
        case 0x3c90e0u: goto label_3c90e0;
        case 0x3c90e4u: goto label_3c90e4;
        case 0x3c90e8u: goto label_3c90e8;
        case 0x3c90ecu: goto label_3c90ec;
        case 0x3c90f0u: goto label_3c90f0;
        case 0x3c90f4u: goto label_3c90f4;
        case 0x3c90f8u: goto label_3c90f8;
        case 0x3c90fcu: goto label_3c90fc;
        case 0x3c9100u: goto label_3c9100;
        case 0x3c9104u: goto label_3c9104;
        case 0x3c9108u: goto label_3c9108;
        case 0x3c910cu: goto label_3c910c;
        case 0x3c9110u: goto label_3c9110;
        case 0x3c9114u: goto label_3c9114;
        case 0x3c9118u: goto label_3c9118;
        case 0x3c911cu: goto label_3c911c;
        case 0x3c9120u: goto label_3c9120;
        case 0x3c9124u: goto label_3c9124;
        case 0x3c9128u: goto label_3c9128;
        case 0x3c912cu: goto label_3c912c;
        case 0x3c9130u: goto label_3c9130;
        case 0x3c9134u: goto label_3c9134;
        case 0x3c9138u: goto label_3c9138;
        case 0x3c913cu: goto label_3c913c;
        case 0x3c9140u: goto label_3c9140;
        case 0x3c9144u: goto label_3c9144;
        case 0x3c9148u: goto label_3c9148;
        case 0x3c914cu: goto label_3c914c;
        case 0x3c9150u: goto label_3c9150;
        case 0x3c9154u: goto label_3c9154;
        case 0x3c9158u: goto label_3c9158;
        case 0x3c915cu: goto label_3c915c;
        case 0x3c9160u: goto label_3c9160;
        case 0x3c9164u: goto label_3c9164;
        case 0x3c9168u: goto label_3c9168;
        case 0x3c916cu: goto label_3c916c;
        case 0x3c9170u: goto label_3c9170;
        case 0x3c9174u: goto label_3c9174;
        case 0x3c9178u: goto label_3c9178;
        case 0x3c917cu: goto label_3c917c;
        case 0x3c9180u: goto label_3c9180;
        case 0x3c9184u: goto label_3c9184;
        case 0x3c9188u: goto label_3c9188;
        case 0x3c918cu: goto label_3c918c;
        case 0x3c9190u: goto label_3c9190;
        case 0x3c9194u: goto label_3c9194;
        case 0x3c9198u: goto label_3c9198;
        case 0x3c919cu: goto label_3c919c;
        case 0x3c91a0u: goto label_3c91a0;
        case 0x3c91a4u: goto label_3c91a4;
        case 0x3c91a8u: goto label_3c91a8;
        case 0x3c91acu: goto label_3c91ac;
        case 0x3c91b0u: goto label_3c91b0;
        case 0x3c91b4u: goto label_3c91b4;
        case 0x3c91b8u: goto label_3c91b8;
        case 0x3c91bcu: goto label_3c91bc;
        case 0x3c91c0u: goto label_3c91c0;
        case 0x3c91c4u: goto label_3c91c4;
        case 0x3c91c8u: goto label_3c91c8;
        case 0x3c91ccu: goto label_3c91cc;
        case 0x3c91d0u: goto label_3c91d0;
        case 0x3c91d4u: goto label_3c91d4;
        case 0x3c91d8u: goto label_3c91d8;
        case 0x3c91dcu: goto label_3c91dc;
        case 0x3c91e0u: goto label_3c91e0;
        case 0x3c91e4u: goto label_3c91e4;
        case 0x3c91e8u: goto label_3c91e8;
        case 0x3c91ecu: goto label_3c91ec;
        case 0x3c91f0u: goto label_3c91f0;
        case 0x3c91f4u: goto label_3c91f4;
        case 0x3c91f8u: goto label_3c91f8;
        case 0x3c91fcu: goto label_3c91fc;
        case 0x3c9200u: goto label_3c9200;
        case 0x3c9204u: goto label_3c9204;
        case 0x3c9208u: goto label_3c9208;
        case 0x3c920cu: goto label_3c920c;
        case 0x3c9210u: goto label_3c9210;
        case 0x3c9214u: goto label_3c9214;
        case 0x3c9218u: goto label_3c9218;
        case 0x3c921cu: goto label_3c921c;
        case 0x3c9220u: goto label_3c9220;
        case 0x3c9224u: goto label_3c9224;
        case 0x3c9228u: goto label_3c9228;
        case 0x3c922cu: goto label_3c922c;
        case 0x3c9230u: goto label_3c9230;
        case 0x3c9234u: goto label_3c9234;
        case 0x3c9238u: goto label_3c9238;
        case 0x3c923cu: goto label_3c923c;
        case 0x3c9240u: goto label_3c9240;
        case 0x3c9244u: goto label_3c9244;
        case 0x3c9248u: goto label_3c9248;
        case 0x3c924cu: goto label_3c924c;
        case 0x3c9250u: goto label_3c9250;
        case 0x3c9254u: goto label_3c9254;
        case 0x3c9258u: goto label_3c9258;
        case 0x3c925cu: goto label_3c925c;
        case 0x3c9260u: goto label_3c9260;
        case 0x3c9264u: goto label_3c9264;
        case 0x3c9268u: goto label_3c9268;
        case 0x3c926cu: goto label_3c926c;
        case 0x3c9270u: goto label_3c9270;
        case 0x3c9274u: goto label_3c9274;
        case 0x3c9278u: goto label_3c9278;
        case 0x3c927cu: goto label_3c927c;
        case 0x3c9280u: goto label_3c9280;
        case 0x3c9284u: goto label_3c9284;
        case 0x3c9288u: goto label_3c9288;
        case 0x3c928cu: goto label_3c928c;
        case 0x3c9290u: goto label_3c9290;
        case 0x3c9294u: goto label_3c9294;
        case 0x3c9298u: goto label_3c9298;
        case 0x3c929cu: goto label_3c929c;
        case 0x3c92a0u: goto label_3c92a0;
        case 0x3c92a4u: goto label_3c92a4;
        case 0x3c92a8u: goto label_3c92a8;
        case 0x3c92acu: goto label_3c92ac;
        case 0x3c92b0u: goto label_3c92b0;
        case 0x3c92b4u: goto label_3c92b4;
        case 0x3c92b8u: goto label_3c92b8;
        case 0x3c92bcu: goto label_3c92bc;
        case 0x3c92c0u: goto label_3c92c0;
        case 0x3c92c4u: goto label_3c92c4;
        case 0x3c92c8u: goto label_3c92c8;
        case 0x3c92ccu: goto label_3c92cc;
        case 0x3c92d0u: goto label_3c92d0;
        case 0x3c92d4u: goto label_3c92d4;
        case 0x3c92d8u: goto label_3c92d8;
        case 0x3c92dcu: goto label_3c92dc;
        case 0x3c92e0u: goto label_3c92e0;
        case 0x3c92e4u: goto label_3c92e4;
        case 0x3c92e8u: goto label_3c92e8;
        case 0x3c92ecu: goto label_3c92ec;
        case 0x3c92f0u: goto label_3c92f0;
        case 0x3c92f4u: goto label_3c92f4;
        case 0x3c92f8u: goto label_3c92f8;
        case 0x3c92fcu: goto label_3c92fc;
        case 0x3c9300u: goto label_3c9300;
        case 0x3c9304u: goto label_3c9304;
        case 0x3c9308u: goto label_3c9308;
        case 0x3c930cu: goto label_3c930c;
        case 0x3c9310u: goto label_3c9310;
        case 0x3c9314u: goto label_3c9314;
        case 0x3c9318u: goto label_3c9318;
        case 0x3c931cu: goto label_3c931c;
        case 0x3c9320u: goto label_3c9320;
        case 0x3c9324u: goto label_3c9324;
        case 0x3c9328u: goto label_3c9328;
        case 0x3c932cu: goto label_3c932c;
        case 0x3c9330u: goto label_3c9330;
        case 0x3c9334u: goto label_3c9334;
        case 0x3c9338u: goto label_3c9338;
        case 0x3c933cu: goto label_3c933c;
        case 0x3c9340u: goto label_3c9340;
        case 0x3c9344u: goto label_3c9344;
        case 0x3c9348u: goto label_3c9348;
        case 0x3c934cu: goto label_3c934c;
        case 0x3c9350u: goto label_3c9350;
        case 0x3c9354u: goto label_3c9354;
        case 0x3c9358u: goto label_3c9358;
        case 0x3c935cu: goto label_3c935c;
        case 0x3c9360u: goto label_3c9360;
        case 0x3c9364u: goto label_3c9364;
        case 0x3c9368u: goto label_3c9368;
        case 0x3c936cu: goto label_3c936c;
        case 0x3c9370u: goto label_3c9370;
        case 0x3c9374u: goto label_3c9374;
        case 0x3c9378u: goto label_3c9378;
        case 0x3c937cu: goto label_3c937c;
        case 0x3c9380u: goto label_3c9380;
        case 0x3c9384u: goto label_3c9384;
        case 0x3c9388u: goto label_3c9388;
        case 0x3c938cu: goto label_3c938c;
        case 0x3c9390u: goto label_3c9390;
        case 0x3c9394u: goto label_3c9394;
        case 0x3c9398u: goto label_3c9398;
        case 0x3c939cu: goto label_3c939c;
        case 0x3c93a0u: goto label_3c93a0;
        case 0x3c93a4u: goto label_3c93a4;
        case 0x3c93a8u: goto label_3c93a8;
        case 0x3c93acu: goto label_3c93ac;
        case 0x3c93b0u: goto label_3c93b0;
        case 0x3c93b4u: goto label_3c93b4;
        case 0x3c93b8u: goto label_3c93b8;
        case 0x3c93bcu: goto label_3c93bc;
        case 0x3c93c0u: goto label_3c93c0;
        case 0x3c93c4u: goto label_3c93c4;
        case 0x3c93c8u: goto label_3c93c8;
        case 0x3c93ccu: goto label_3c93cc;
        case 0x3c93d0u: goto label_3c93d0;
        case 0x3c93d4u: goto label_3c93d4;
        case 0x3c93d8u: goto label_3c93d8;
        case 0x3c93dcu: goto label_3c93dc;
        case 0x3c93e0u: goto label_3c93e0;
        case 0x3c93e4u: goto label_3c93e4;
        case 0x3c93e8u: goto label_3c93e8;
        case 0x3c93ecu: goto label_3c93ec;
        case 0x3c93f0u: goto label_3c93f0;
        case 0x3c93f4u: goto label_3c93f4;
        case 0x3c93f8u: goto label_3c93f8;
        case 0x3c93fcu: goto label_3c93fc;
        case 0x3c9400u: goto label_3c9400;
        case 0x3c9404u: goto label_3c9404;
        case 0x3c9408u: goto label_3c9408;
        case 0x3c940cu: goto label_3c940c;
        case 0x3c9410u: goto label_3c9410;
        case 0x3c9414u: goto label_3c9414;
        case 0x3c9418u: goto label_3c9418;
        case 0x3c941cu: goto label_3c941c;
        case 0x3c9420u: goto label_3c9420;
        case 0x3c9424u: goto label_3c9424;
        case 0x3c9428u: goto label_3c9428;
        case 0x3c942cu: goto label_3c942c;
        case 0x3c9430u: goto label_3c9430;
        case 0x3c9434u: goto label_3c9434;
        case 0x3c9438u: goto label_3c9438;
        case 0x3c943cu: goto label_3c943c;
        case 0x3c9440u: goto label_3c9440;
        case 0x3c9444u: goto label_3c9444;
        case 0x3c9448u: goto label_3c9448;
        case 0x3c944cu: goto label_3c944c;
        case 0x3c9450u: goto label_3c9450;
        case 0x3c9454u: goto label_3c9454;
        case 0x3c9458u: goto label_3c9458;
        case 0x3c945cu: goto label_3c945c;
        case 0x3c9460u: goto label_3c9460;
        case 0x3c9464u: goto label_3c9464;
        case 0x3c9468u: goto label_3c9468;
        case 0x3c946cu: goto label_3c946c;
        case 0x3c9470u: goto label_3c9470;
        case 0x3c9474u: goto label_3c9474;
        case 0x3c9478u: goto label_3c9478;
        case 0x3c947cu: goto label_3c947c;
        case 0x3c9480u: goto label_3c9480;
        case 0x3c9484u: goto label_3c9484;
        case 0x3c9488u: goto label_3c9488;
        case 0x3c948cu: goto label_3c948c;
        case 0x3c9490u: goto label_3c9490;
        case 0x3c9494u: goto label_3c9494;
        case 0x3c9498u: goto label_3c9498;
        case 0x3c949cu: goto label_3c949c;
        case 0x3c94a0u: goto label_3c94a0;
        case 0x3c94a4u: goto label_3c94a4;
        case 0x3c94a8u: goto label_3c94a8;
        case 0x3c94acu: goto label_3c94ac;
        case 0x3c94b0u: goto label_3c94b0;
        case 0x3c94b4u: goto label_3c94b4;
        case 0x3c94b8u: goto label_3c94b8;
        case 0x3c94bcu: goto label_3c94bc;
        case 0x3c94c0u: goto label_3c94c0;
        case 0x3c94c4u: goto label_3c94c4;
        case 0x3c94c8u: goto label_3c94c8;
        case 0x3c94ccu: goto label_3c94cc;
        case 0x3c94d0u: goto label_3c94d0;
        case 0x3c94d4u: goto label_3c94d4;
        case 0x3c94d8u: goto label_3c94d8;
        case 0x3c94dcu: goto label_3c94dc;
        case 0x3c94e0u: goto label_3c94e0;
        case 0x3c94e4u: goto label_3c94e4;
        case 0x3c94e8u: goto label_3c94e8;
        case 0x3c94ecu: goto label_3c94ec;
        case 0x3c94f0u: goto label_3c94f0;
        case 0x3c94f4u: goto label_3c94f4;
        case 0x3c94f8u: goto label_3c94f8;
        case 0x3c94fcu: goto label_3c94fc;
        case 0x3c9500u: goto label_3c9500;
        case 0x3c9504u: goto label_3c9504;
        case 0x3c9508u: goto label_3c9508;
        case 0x3c950cu: goto label_3c950c;
        case 0x3c9510u: goto label_3c9510;
        case 0x3c9514u: goto label_3c9514;
        case 0x3c9518u: goto label_3c9518;
        case 0x3c951cu: goto label_3c951c;
        case 0x3c9520u: goto label_3c9520;
        case 0x3c9524u: goto label_3c9524;
        case 0x3c9528u: goto label_3c9528;
        case 0x3c952cu: goto label_3c952c;
        case 0x3c9530u: goto label_3c9530;
        case 0x3c9534u: goto label_3c9534;
        case 0x3c9538u: goto label_3c9538;
        case 0x3c953cu: goto label_3c953c;
        case 0x3c9540u: goto label_3c9540;
        case 0x3c9544u: goto label_3c9544;
        case 0x3c9548u: goto label_3c9548;
        case 0x3c954cu: goto label_3c954c;
        case 0x3c9550u: goto label_3c9550;
        case 0x3c9554u: goto label_3c9554;
        case 0x3c9558u: goto label_3c9558;
        case 0x3c955cu: goto label_3c955c;
        case 0x3c9560u: goto label_3c9560;
        case 0x3c9564u: goto label_3c9564;
        case 0x3c9568u: goto label_3c9568;
        case 0x3c956cu: goto label_3c956c;
        case 0x3c9570u: goto label_3c9570;
        case 0x3c9574u: goto label_3c9574;
        case 0x3c9578u: goto label_3c9578;
        case 0x3c957cu: goto label_3c957c;
        case 0x3c9580u: goto label_3c9580;
        case 0x3c9584u: goto label_3c9584;
        case 0x3c9588u: goto label_3c9588;
        case 0x3c958cu: goto label_3c958c;
        case 0x3c9590u: goto label_3c9590;
        case 0x3c9594u: goto label_3c9594;
        case 0x3c9598u: goto label_3c9598;
        case 0x3c959cu: goto label_3c959c;
        case 0x3c95a0u: goto label_3c95a0;
        case 0x3c95a4u: goto label_3c95a4;
        case 0x3c95a8u: goto label_3c95a8;
        case 0x3c95acu: goto label_3c95ac;
        case 0x3c95b0u: goto label_3c95b0;
        case 0x3c95b4u: goto label_3c95b4;
        case 0x3c95b8u: goto label_3c95b8;
        case 0x3c95bcu: goto label_3c95bc;
        case 0x3c95c0u: goto label_3c95c0;
        case 0x3c95c4u: goto label_3c95c4;
        case 0x3c95c8u: goto label_3c95c8;
        case 0x3c95ccu: goto label_3c95cc;
        case 0x3c95d0u: goto label_3c95d0;
        case 0x3c95d4u: goto label_3c95d4;
        case 0x3c95d8u: goto label_3c95d8;
        case 0x3c95dcu: goto label_3c95dc;
        case 0x3c95e0u: goto label_3c95e0;
        case 0x3c95e4u: goto label_3c95e4;
        case 0x3c95e8u: goto label_3c95e8;
        case 0x3c95ecu: goto label_3c95ec;
        case 0x3c95f0u: goto label_3c95f0;
        case 0x3c95f4u: goto label_3c95f4;
        case 0x3c95f8u: goto label_3c95f8;
        case 0x3c95fcu: goto label_3c95fc;
        case 0x3c9600u: goto label_3c9600;
        case 0x3c9604u: goto label_3c9604;
        case 0x3c9608u: goto label_3c9608;
        case 0x3c960cu: goto label_3c960c;
        case 0x3c9610u: goto label_3c9610;
        case 0x3c9614u: goto label_3c9614;
        case 0x3c9618u: goto label_3c9618;
        case 0x3c961cu: goto label_3c961c;
        case 0x3c9620u: goto label_3c9620;
        case 0x3c9624u: goto label_3c9624;
        case 0x3c9628u: goto label_3c9628;
        case 0x3c962cu: goto label_3c962c;
        case 0x3c9630u: goto label_3c9630;
        case 0x3c9634u: goto label_3c9634;
        case 0x3c9638u: goto label_3c9638;
        case 0x3c963cu: goto label_3c963c;
        case 0x3c9640u: goto label_3c9640;
        case 0x3c9644u: goto label_3c9644;
        case 0x3c9648u: goto label_3c9648;
        case 0x3c964cu: goto label_3c964c;
        case 0x3c9650u: goto label_3c9650;
        case 0x3c9654u: goto label_3c9654;
        case 0x3c9658u: goto label_3c9658;
        case 0x3c965cu: goto label_3c965c;
        case 0x3c9660u: goto label_3c9660;
        case 0x3c9664u: goto label_3c9664;
        case 0x3c9668u: goto label_3c9668;
        case 0x3c966cu: goto label_3c966c;
        case 0x3c9670u: goto label_3c9670;
        case 0x3c9674u: goto label_3c9674;
        case 0x3c9678u: goto label_3c9678;
        case 0x3c967cu: goto label_3c967c;
        case 0x3c9680u: goto label_3c9680;
        case 0x3c9684u: goto label_3c9684;
        case 0x3c9688u: goto label_3c9688;
        case 0x3c968cu: goto label_3c968c;
        case 0x3c9690u: goto label_3c9690;
        case 0x3c9694u: goto label_3c9694;
        case 0x3c9698u: goto label_3c9698;
        case 0x3c969cu: goto label_3c969c;
        case 0x3c96a0u: goto label_3c96a0;
        case 0x3c96a4u: goto label_3c96a4;
        case 0x3c96a8u: goto label_3c96a8;
        case 0x3c96acu: goto label_3c96ac;
        case 0x3c96b0u: goto label_3c96b0;
        case 0x3c96b4u: goto label_3c96b4;
        case 0x3c96b8u: goto label_3c96b8;
        case 0x3c96bcu: goto label_3c96bc;
        case 0x3c96c0u: goto label_3c96c0;
        case 0x3c96c4u: goto label_3c96c4;
        case 0x3c96c8u: goto label_3c96c8;
        case 0x3c96ccu: goto label_3c96cc;
        case 0x3c96d0u: goto label_3c96d0;
        case 0x3c96d4u: goto label_3c96d4;
        case 0x3c96d8u: goto label_3c96d8;
        case 0x3c96dcu: goto label_3c96dc;
        case 0x3c96e0u: goto label_3c96e0;
        case 0x3c96e4u: goto label_3c96e4;
        case 0x3c96e8u: goto label_3c96e8;
        case 0x3c96ecu: goto label_3c96ec;
        case 0x3c96f0u: goto label_3c96f0;
        case 0x3c96f4u: goto label_3c96f4;
        case 0x3c96f8u: goto label_3c96f8;
        case 0x3c96fcu: goto label_3c96fc;
        case 0x3c9700u: goto label_3c9700;
        case 0x3c9704u: goto label_3c9704;
        case 0x3c9708u: goto label_3c9708;
        case 0x3c970cu: goto label_3c970c;
        case 0x3c9710u: goto label_3c9710;
        case 0x3c9714u: goto label_3c9714;
        case 0x3c9718u: goto label_3c9718;
        case 0x3c971cu: goto label_3c971c;
        case 0x3c9720u: goto label_3c9720;
        case 0x3c9724u: goto label_3c9724;
        case 0x3c9728u: goto label_3c9728;
        case 0x3c972cu: goto label_3c972c;
        case 0x3c9730u: goto label_3c9730;
        case 0x3c9734u: goto label_3c9734;
        case 0x3c9738u: goto label_3c9738;
        case 0x3c973cu: goto label_3c973c;
        case 0x3c9740u: goto label_3c9740;
        case 0x3c9744u: goto label_3c9744;
        case 0x3c9748u: goto label_3c9748;
        case 0x3c974cu: goto label_3c974c;
        case 0x3c9750u: goto label_3c9750;
        case 0x3c9754u: goto label_3c9754;
        case 0x3c9758u: goto label_3c9758;
        case 0x3c975cu: goto label_3c975c;
        case 0x3c9760u: goto label_3c9760;
        case 0x3c9764u: goto label_3c9764;
        case 0x3c9768u: goto label_3c9768;
        case 0x3c976cu: goto label_3c976c;
        case 0x3c9770u: goto label_3c9770;
        case 0x3c9774u: goto label_3c9774;
        case 0x3c9778u: goto label_3c9778;
        case 0x3c977cu: goto label_3c977c;
        case 0x3c9780u: goto label_3c9780;
        case 0x3c9784u: goto label_3c9784;
        case 0x3c9788u: goto label_3c9788;
        case 0x3c978cu: goto label_3c978c;
        case 0x3c9790u: goto label_3c9790;
        case 0x3c9794u: goto label_3c9794;
        case 0x3c9798u: goto label_3c9798;
        case 0x3c979cu: goto label_3c979c;
        case 0x3c97a0u: goto label_3c97a0;
        case 0x3c97a4u: goto label_3c97a4;
        case 0x3c97a8u: goto label_3c97a8;
        case 0x3c97acu: goto label_3c97ac;
        case 0x3c97b0u: goto label_3c97b0;
        case 0x3c97b4u: goto label_3c97b4;
        case 0x3c97b8u: goto label_3c97b8;
        case 0x3c97bcu: goto label_3c97bc;
        case 0x3c97c0u: goto label_3c97c0;
        case 0x3c97c4u: goto label_3c97c4;
        case 0x3c97c8u: goto label_3c97c8;
        case 0x3c97ccu: goto label_3c97cc;
        case 0x3c97d0u: goto label_3c97d0;
        case 0x3c97d4u: goto label_3c97d4;
        case 0x3c97d8u: goto label_3c97d8;
        case 0x3c97dcu: goto label_3c97dc;
        case 0x3c97e0u: goto label_3c97e0;
        case 0x3c97e4u: goto label_3c97e4;
        case 0x3c97e8u: goto label_3c97e8;
        case 0x3c97ecu: goto label_3c97ec;
        case 0x3c97f0u: goto label_3c97f0;
        case 0x3c97f4u: goto label_3c97f4;
        case 0x3c97f8u: goto label_3c97f8;
        case 0x3c97fcu: goto label_3c97fc;
        case 0x3c9800u: goto label_3c9800;
        case 0x3c9804u: goto label_3c9804;
        case 0x3c9808u: goto label_3c9808;
        case 0x3c980cu: goto label_3c980c;
        case 0x3c9810u: goto label_3c9810;
        case 0x3c9814u: goto label_3c9814;
        case 0x3c9818u: goto label_3c9818;
        case 0x3c981cu: goto label_3c981c;
        case 0x3c9820u: goto label_3c9820;
        case 0x3c9824u: goto label_3c9824;
        case 0x3c9828u: goto label_3c9828;
        case 0x3c982cu: goto label_3c982c;
        case 0x3c9830u: goto label_3c9830;
        case 0x3c9834u: goto label_3c9834;
        case 0x3c9838u: goto label_3c9838;
        case 0x3c983cu: goto label_3c983c;
        case 0x3c9840u: goto label_3c9840;
        case 0x3c9844u: goto label_3c9844;
        case 0x3c9848u: goto label_3c9848;
        case 0x3c984cu: goto label_3c984c;
        case 0x3c9850u: goto label_3c9850;
        case 0x3c9854u: goto label_3c9854;
        case 0x3c9858u: goto label_3c9858;
        case 0x3c985cu: goto label_3c985c;
        case 0x3c9860u: goto label_3c9860;
        case 0x3c9864u: goto label_3c9864;
        case 0x3c9868u: goto label_3c9868;
        case 0x3c986cu: goto label_3c986c;
        case 0x3c9870u: goto label_3c9870;
        case 0x3c9874u: goto label_3c9874;
        case 0x3c9878u: goto label_3c9878;
        case 0x3c987cu: goto label_3c987c;
        case 0x3c9880u: goto label_3c9880;
        case 0x3c9884u: goto label_3c9884;
        case 0x3c9888u: goto label_3c9888;
        case 0x3c988cu: goto label_3c988c;
        case 0x3c9890u: goto label_3c9890;
        case 0x3c9894u: goto label_3c9894;
        case 0x3c9898u: goto label_3c9898;
        case 0x3c989cu: goto label_3c989c;
        case 0x3c98a0u: goto label_3c98a0;
        case 0x3c98a4u: goto label_3c98a4;
        case 0x3c98a8u: goto label_3c98a8;
        case 0x3c98acu: goto label_3c98ac;
        case 0x3c98b0u: goto label_3c98b0;
        case 0x3c98b4u: goto label_3c98b4;
        case 0x3c98b8u: goto label_3c98b8;
        case 0x3c98bcu: goto label_3c98bc;
        case 0x3c98c0u: goto label_3c98c0;
        case 0x3c98c4u: goto label_3c98c4;
        case 0x3c98c8u: goto label_3c98c8;
        case 0x3c98ccu: goto label_3c98cc;
        case 0x3c98d0u: goto label_3c98d0;
        case 0x3c98d4u: goto label_3c98d4;
        case 0x3c98d8u: goto label_3c98d8;
        case 0x3c98dcu: goto label_3c98dc;
        case 0x3c98e0u: goto label_3c98e0;
        case 0x3c98e4u: goto label_3c98e4;
        case 0x3c98e8u: goto label_3c98e8;
        case 0x3c98ecu: goto label_3c98ec;
        case 0x3c98f0u: goto label_3c98f0;
        case 0x3c98f4u: goto label_3c98f4;
        case 0x3c98f8u: goto label_3c98f8;
        case 0x3c98fcu: goto label_3c98fc;
        case 0x3c9900u: goto label_3c9900;
        case 0x3c9904u: goto label_3c9904;
        case 0x3c9908u: goto label_3c9908;
        case 0x3c990cu: goto label_3c990c;
        case 0x3c9910u: goto label_3c9910;
        case 0x3c9914u: goto label_3c9914;
        case 0x3c9918u: goto label_3c9918;
        case 0x3c991cu: goto label_3c991c;
        case 0x3c9920u: goto label_3c9920;
        case 0x3c9924u: goto label_3c9924;
        case 0x3c9928u: goto label_3c9928;
        case 0x3c992cu: goto label_3c992c;
        case 0x3c9930u: goto label_3c9930;
        case 0x3c9934u: goto label_3c9934;
        case 0x3c9938u: goto label_3c9938;
        case 0x3c993cu: goto label_3c993c;
        case 0x3c9940u: goto label_3c9940;
        case 0x3c9944u: goto label_3c9944;
        case 0x3c9948u: goto label_3c9948;
        case 0x3c994cu: goto label_3c994c;
        case 0x3c9950u: goto label_3c9950;
        case 0x3c9954u: goto label_3c9954;
        case 0x3c9958u: goto label_3c9958;
        case 0x3c995cu: goto label_3c995c;
        case 0x3c9960u: goto label_3c9960;
        case 0x3c9964u: goto label_3c9964;
        case 0x3c9968u: goto label_3c9968;
        case 0x3c996cu: goto label_3c996c;
        case 0x3c9970u: goto label_3c9970;
        case 0x3c9974u: goto label_3c9974;
        case 0x3c9978u: goto label_3c9978;
        case 0x3c997cu: goto label_3c997c;
        case 0x3c9980u: goto label_3c9980;
        case 0x3c9984u: goto label_3c9984;
        case 0x3c9988u: goto label_3c9988;
        case 0x3c998cu: goto label_3c998c;
        case 0x3c9990u: goto label_3c9990;
        case 0x3c9994u: goto label_3c9994;
        case 0x3c9998u: goto label_3c9998;
        case 0x3c999cu: goto label_3c999c;
        case 0x3c99a0u: goto label_3c99a0;
        case 0x3c99a4u: goto label_3c99a4;
        case 0x3c99a8u: goto label_3c99a8;
        case 0x3c99acu: goto label_3c99ac;
        case 0x3c99b0u: goto label_3c99b0;
        case 0x3c99b4u: goto label_3c99b4;
        case 0x3c99b8u: goto label_3c99b8;
        case 0x3c99bcu: goto label_3c99bc;
        case 0x3c99c0u: goto label_3c99c0;
        case 0x3c99c4u: goto label_3c99c4;
        case 0x3c99c8u: goto label_3c99c8;
        case 0x3c99ccu: goto label_3c99cc;
        case 0x3c99d0u: goto label_3c99d0;
        case 0x3c99d4u: goto label_3c99d4;
        case 0x3c99d8u: goto label_3c99d8;
        case 0x3c99dcu: goto label_3c99dc;
        case 0x3c99e0u: goto label_3c99e0;
        case 0x3c99e4u: goto label_3c99e4;
        case 0x3c99e8u: goto label_3c99e8;
        case 0x3c99ecu: goto label_3c99ec;
        case 0x3c99f0u: goto label_3c99f0;
        case 0x3c99f4u: goto label_3c99f4;
        case 0x3c99f8u: goto label_3c99f8;
        case 0x3c99fcu: goto label_3c99fc;
        case 0x3c9a00u: goto label_3c9a00;
        case 0x3c9a04u: goto label_3c9a04;
        case 0x3c9a08u: goto label_3c9a08;
        case 0x3c9a0cu: goto label_3c9a0c;
        case 0x3c9a10u: goto label_3c9a10;
        case 0x3c9a14u: goto label_3c9a14;
        case 0x3c9a18u: goto label_3c9a18;
        case 0x3c9a1cu: goto label_3c9a1c;
        case 0x3c9a20u: goto label_3c9a20;
        case 0x3c9a24u: goto label_3c9a24;
        case 0x3c9a28u: goto label_3c9a28;
        case 0x3c9a2cu: goto label_3c9a2c;
        case 0x3c9a30u: goto label_3c9a30;
        case 0x3c9a34u: goto label_3c9a34;
        case 0x3c9a38u: goto label_3c9a38;
        case 0x3c9a3cu: goto label_3c9a3c;
        case 0x3c9a40u: goto label_3c9a40;
        case 0x3c9a44u: goto label_3c9a44;
        case 0x3c9a48u: goto label_3c9a48;
        case 0x3c9a4cu: goto label_3c9a4c;
        case 0x3c9a50u: goto label_3c9a50;
        case 0x3c9a54u: goto label_3c9a54;
        case 0x3c9a58u: goto label_3c9a58;
        case 0x3c9a5cu: goto label_3c9a5c;
        case 0x3c9a60u: goto label_3c9a60;
        case 0x3c9a64u: goto label_3c9a64;
        case 0x3c9a68u: goto label_3c9a68;
        case 0x3c9a6cu: goto label_3c9a6c;
        case 0x3c9a70u: goto label_3c9a70;
        case 0x3c9a74u: goto label_3c9a74;
        case 0x3c9a78u: goto label_3c9a78;
        case 0x3c9a7cu: goto label_3c9a7c;
        case 0x3c9a80u: goto label_3c9a80;
        case 0x3c9a84u: goto label_3c9a84;
        case 0x3c9a88u: goto label_3c9a88;
        case 0x3c9a8cu: goto label_3c9a8c;
        case 0x3c9a90u: goto label_3c9a90;
        case 0x3c9a94u: goto label_3c9a94;
        case 0x3c9a98u: goto label_3c9a98;
        case 0x3c9a9cu: goto label_3c9a9c;
        case 0x3c9aa0u: goto label_3c9aa0;
        case 0x3c9aa4u: goto label_3c9aa4;
        case 0x3c9aa8u: goto label_3c9aa8;
        case 0x3c9aacu: goto label_3c9aac;
        case 0x3c9ab0u: goto label_3c9ab0;
        case 0x3c9ab4u: goto label_3c9ab4;
        case 0x3c9ab8u: goto label_3c9ab8;
        case 0x3c9abcu: goto label_3c9abc;
        case 0x3c9ac0u: goto label_3c9ac0;
        case 0x3c9ac4u: goto label_3c9ac4;
        case 0x3c9ac8u: goto label_3c9ac8;
        case 0x3c9accu: goto label_3c9acc;
        case 0x3c9ad0u: goto label_3c9ad0;
        case 0x3c9ad4u: goto label_3c9ad4;
        case 0x3c9ad8u: goto label_3c9ad8;
        case 0x3c9adcu: goto label_3c9adc;
        case 0x3c9ae0u: goto label_3c9ae0;
        case 0x3c9ae4u: goto label_3c9ae4;
        case 0x3c9ae8u: goto label_3c9ae8;
        case 0x3c9aecu: goto label_3c9aec;
        case 0x3c9af0u: goto label_3c9af0;
        case 0x3c9af4u: goto label_3c9af4;
        case 0x3c9af8u: goto label_3c9af8;
        case 0x3c9afcu: goto label_3c9afc;
        case 0x3c9b00u: goto label_3c9b00;
        case 0x3c9b04u: goto label_3c9b04;
        case 0x3c9b08u: goto label_3c9b08;
        case 0x3c9b0cu: goto label_3c9b0c;
        case 0x3c9b10u: goto label_3c9b10;
        case 0x3c9b14u: goto label_3c9b14;
        case 0x3c9b18u: goto label_3c9b18;
        case 0x3c9b1cu: goto label_3c9b1c;
        case 0x3c9b20u: goto label_3c9b20;
        case 0x3c9b24u: goto label_3c9b24;
        case 0x3c9b28u: goto label_3c9b28;
        case 0x3c9b2cu: goto label_3c9b2c;
        case 0x3c9b30u: goto label_3c9b30;
        case 0x3c9b34u: goto label_3c9b34;
        case 0x3c9b38u: goto label_3c9b38;
        case 0x3c9b3cu: goto label_3c9b3c;
        case 0x3c9b40u: goto label_3c9b40;
        case 0x3c9b44u: goto label_3c9b44;
        case 0x3c9b48u: goto label_3c9b48;
        case 0x3c9b4cu: goto label_3c9b4c;
        case 0x3c9b50u: goto label_3c9b50;
        case 0x3c9b54u: goto label_3c9b54;
        case 0x3c9b58u: goto label_3c9b58;
        case 0x3c9b5cu: goto label_3c9b5c;
        case 0x3c9b60u: goto label_3c9b60;
        case 0x3c9b64u: goto label_3c9b64;
        case 0x3c9b68u: goto label_3c9b68;
        case 0x3c9b6cu: goto label_3c9b6c;
        case 0x3c9b70u: goto label_3c9b70;
        case 0x3c9b74u: goto label_3c9b74;
        case 0x3c9b78u: goto label_3c9b78;
        case 0x3c9b7cu: goto label_3c9b7c;
        case 0x3c9b80u: goto label_3c9b80;
        case 0x3c9b84u: goto label_3c9b84;
        case 0x3c9b88u: goto label_3c9b88;
        case 0x3c9b8cu: goto label_3c9b8c;
        case 0x3c9b90u: goto label_3c9b90;
        case 0x3c9b94u: goto label_3c9b94;
        case 0x3c9b98u: goto label_3c9b98;
        case 0x3c9b9cu: goto label_3c9b9c;
        case 0x3c9ba0u: goto label_3c9ba0;
        case 0x3c9ba4u: goto label_3c9ba4;
        case 0x3c9ba8u: goto label_3c9ba8;
        case 0x3c9bacu: goto label_3c9bac;
        case 0x3c9bb0u: goto label_3c9bb0;
        case 0x3c9bb4u: goto label_3c9bb4;
        case 0x3c9bb8u: goto label_3c9bb8;
        case 0x3c9bbcu: goto label_3c9bbc;
        case 0x3c9bc0u: goto label_3c9bc0;
        case 0x3c9bc4u: goto label_3c9bc4;
        case 0x3c9bc8u: goto label_3c9bc8;
        case 0x3c9bccu: goto label_3c9bcc;
        case 0x3c9bd0u: goto label_3c9bd0;
        case 0x3c9bd4u: goto label_3c9bd4;
        case 0x3c9bd8u: goto label_3c9bd8;
        case 0x3c9bdcu: goto label_3c9bdc;
        case 0x3c9be0u: goto label_3c9be0;
        case 0x3c9be4u: goto label_3c9be4;
        case 0x3c9be8u: goto label_3c9be8;
        case 0x3c9becu: goto label_3c9bec;
        case 0x3c9bf0u: goto label_3c9bf0;
        case 0x3c9bf4u: goto label_3c9bf4;
        case 0x3c9bf8u: goto label_3c9bf8;
        case 0x3c9bfcu: goto label_3c9bfc;
        case 0x3c9c00u: goto label_3c9c00;
        case 0x3c9c04u: goto label_3c9c04;
        case 0x3c9c08u: goto label_3c9c08;
        case 0x3c9c0cu: goto label_3c9c0c;
        case 0x3c9c10u: goto label_3c9c10;
        case 0x3c9c14u: goto label_3c9c14;
        case 0x3c9c18u: goto label_3c9c18;
        case 0x3c9c1cu: goto label_3c9c1c;
        case 0x3c9c20u: goto label_3c9c20;
        case 0x3c9c24u: goto label_3c9c24;
        case 0x3c9c28u: goto label_3c9c28;
        case 0x3c9c2cu: goto label_3c9c2c;
        case 0x3c9c30u: goto label_3c9c30;
        case 0x3c9c34u: goto label_3c9c34;
        case 0x3c9c38u: goto label_3c9c38;
        case 0x3c9c3cu: goto label_3c9c3c;
        case 0x3c9c40u: goto label_3c9c40;
        case 0x3c9c44u: goto label_3c9c44;
        case 0x3c9c48u: goto label_3c9c48;
        case 0x3c9c4cu: goto label_3c9c4c;
        case 0x3c9c50u: goto label_3c9c50;
        case 0x3c9c54u: goto label_3c9c54;
        case 0x3c9c58u: goto label_3c9c58;
        case 0x3c9c5cu: goto label_3c9c5c;
        case 0x3c9c60u: goto label_3c9c60;
        case 0x3c9c64u: goto label_3c9c64;
        case 0x3c9c68u: goto label_3c9c68;
        case 0x3c9c6cu: goto label_3c9c6c;
        case 0x3c9c70u: goto label_3c9c70;
        case 0x3c9c74u: goto label_3c9c74;
        case 0x3c9c78u: goto label_3c9c78;
        case 0x3c9c7cu: goto label_3c9c7c;
        case 0x3c9c80u: goto label_3c9c80;
        case 0x3c9c84u: goto label_3c9c84;
        case 0x3c9c88u: goto label_3c9c88;
        case 0x3c9c8cu: goto label_3c9c8c;
        case 0x3c9c90u: goto label_3c9c90;
        case 0x3c9c94u: goto label_3c9c94;
        case 0x3c9c98u: goto label_3c9c98;
        case 0x3c9c9cu: goto label_3c9c9c;
        case 0x3c9ca0u: goto label_3c9ca0;
        case 0x3c9ca4u: goto label_3c9ca4;
        case 0x3c9ca8u: goto label_3c9ca8;
        case 0x3c9cacu: goto label_3c9cac;
        case 0x3c9cb0u: goto label_3c9cb0;
        case 0x3c9cb4u: goto label_3c9cb4;
        case 0x3c9cb8u: goto label_3c9cb8;
        case 0x3c9cbcu: goto label_3c9cbc;
        case 0x3c9cc0u: goto label_3c9cc0;
        case 0x3c9cc4u: goto label_3c9cc4;
        case 0x3c9cc8u: goto label_3c9cc8;
        case 0x3c9cccu: goto label_3c9ccc;
        case 0x3c9cd0u: goto label_3c9cd0;
        case 0x3c9cd4u: goto label_3c9cd4;
        case 0x3c9cd8u: goto label_3c9cd8;
        case 0x3c9cdcu: goto label_3c9cdc;
        case 0x3c9ce0u: goto label_3c9ce0;
        case 0x3c9ce4u: goto label_3c9ce4;
        case 0x3c9ce8u: goto label_3c9ce8;
        case 0x3c9cecu: goto label_3c9cec;
        case 0x3c9cf0u: goto label_3c9cf0;
        case 0x3c9cf4u: goto label_3c9cf4;
        case 0x3c9cf8u: goto label_3c9cf8;
        case 0x3c9cfcu: goto label_3c9cfc;
        case 0x3c9d00u: goto label_3c9d00;
        case 0x3c9d04u: goto label_3c9d04;
        case 0x3c9d08u: goto label_3c9d08;
        case 0x3c9d0cu: goto label_3c9d0c;
        case 0x3c9d10u: goto label_3c9d10;
        case 0x3c9d14u: goto label_3c9d14;
        case 0x3c9d18u: goto label_3c9d18;
        case 0x3c9d1cu: goto label_3c9d1c;
        case 0x3c9d20u: goto label_3c9d20;
        case 0x3c9d24u: goto label_3c9d24;
        case 0x3c9d28u: goto label_3c9d28;
        case 0x3c9d2cu: goto label_3c9d2c;
        case 0x3c9d30u: goto label_3c9d30;
        case 0x3c9d34u: goto label_3c9d34;
        case 0x3c9d38u: goto label_3c9d38;
        case 0x3c9d3cu: goto label_3c9d3c;
        case 0x3c9d40u: goto label_3c9d40;
        case 0x3c9d44u: goto label_3c9d44;
        case 0x3c9d48u: goto label_3c9d48;
        case 0x3c9d4cu: goto label_3c9d4c;
        case 0x3c9d50u: goto label_3c9d50;
        case 0x3c9d54u: goto label_3c9d54;
        case 0x3c9d58u: goto label_3c9d58;
        case 0x3c9d5cu: goto label_3c9d5c;
        case 0x3c9d60u: goto label_3c9d60;
        case 0x3c9d64u: goto label_3c9d64;
        case 0x3c9d68u: goto label_3c9d68;
        case 0x3c9d6cu: goto label_3c9d6c;
        case 0x3c9d70u: goto label_3c9d70;
        case 0x3c9d74u: goto label_3c9d74;
        case 0x3c9d78u: goto label_3c9d78;
        case 0x3c9d7cu: goto label_3c9d7c;
        case 0x3c9d80u: goto label_3c9d80;
        case 0x3c9d84u: goto label_3c9d84;
        case 0x3c9d88u: goto label_3c9d88;
        case 0x3c9d8cu: goto label_3c9d8c;
        case 0x3c9d90u: goto label_3c9d90;
        case 0x3c9d94u: goto label_3c9d94;
        case 0x3c9d98u: goto label_3c9d98;
        case 0x3c9d9cu: goto label_3c9d9c;
        case 0x3c9da0u: goto label_3c9da0;
        case 0x3c9da4u: goto label_3c9da4;
        case 0x3c9da8u: goto label_3c9da8;
        case 0x3c9dacu: goto label_3c9dac;
        case 0x3c9db0u: goto label_3c9db0;
        case 0x3c9db4u: goto label_3c9db4;
        case 0x3c9db8u: goto label_3c9db8;
        case 0x3c9dbcu: goto label_3c9dbc;
        case 0x3c9dc0u: goto label_3c9dc0;
        case 0x3c9dc4u: goto label_3c9dc4;
        case 0x3c9dc8u: goto label_3c9dc8;
        case 0x3c9dccu: goto label_3c9dcc;
        case 0x3c9dd0u: goto label_3c9dd0;
        case 0x3c9dd4u: goto label_3c9dd4;
        case 0x3c9dd8u: goto label_3c9dd8;
        case 0x3c9ddcu: goto label_3c9ddc;
        case 0x3c9de0u: goto label_3c9de0;
        case 0x3c9de4u: goto label_3c9de4;
        case 0x3c9de8u: goto label_3c9de8;
        case 0x3c9decu: goto label_3c9dec;
        case 0x3c9df0u: goto label_3c9df0;
        case 0x3c9df4u: goto label_3c9df4;
        case 0x3c9df8u: goto label_3c9df8;
        case 0x3c9dfcu: goto label_3c9dfc;
        case 0x3c9e00u: goto label_3c9e00;
        case 0x3c9e04u: goto label_3c9e04;
        case 0x3c9e08u: goto label_3c9e08;
        case 0x3c9e0cu: goto label_3c9e0c;
        case 0x3c9e10u: goto label_3c9e10;
        case 0x3c9e14u: goto label_3c9e14;
        case 0x3c9e18u: goto label_3c9e18;
        case 0x3c9e1cu: goto label_3c9e1c;
        case 0x3c9e20u: goto label_3c9e20;
        case 0x3c9e24u: goto label_3c9e24;
        case 0x3c9e28u: goto label_3c9e28;
        case 0x3c9e2cu: goto label_3c9e2c;
        case 0x3c9e30u: goto label_3c9e30;
        case 0x3c9e34u: goto label_3c9e34;
        case 0x3c9e38u: goto label_3c9e38;
        case 0x3c9e3cu: goto label_3c9e3c;
        case 0x3c9e40u: goto label_3c9e40;
        case 0x3c9e44u: goto label_3c9e44;
        case 0x3c9e48u: goto label_3c9e48;
        case 0x3c9e4cu: goto label_3c9e4c;
        case 0x3c9e50u: goto label_3c9e50;
        case 0x3c9e54u: goto label_3c9e54;
        case 0x3c9e58u: goto label_3c9e58;
        case 0x3c9e5cu: goto label_3c9e5c;
        case 0x3c9e60u: goto label_3c9e60;
        case 0x3c9e64u: goto label_3c9e64;
        case 0x3c9e68u: goto label_3c9e68;
        case 0x3c9e6cu: goto label_3c9e6c;
        case 0x3c9e70u: goto label_3c9e70;
        case 0x3c9e74u: goto label_3c9e74;
        case 0x3c9e78u: goto label_3c9e78;
        case 0x3c9e7cu: goto label_3c9e7c;
        case 0x3c9e80u: goto label_3c9e80;
        case 0x3c9e84u: goto label_3c9e84;
        case 0x3c9e88u: goto label_3c9e88;
        case 0x3c9e8cu: goto label_3c9e8c;
        case 0x3c9e90u: goto label_3c9e90;
        case 0x3c9e94u: goto label_3c9e94;
        case 0x3c9e98u: goto label_3c9e98;
        case 0x3c9e9cu: goto label_3c9e9c;
        case 0x3c9ea0u: goto label_3c9ea0;
        case 0x3c9ea4u: goto label_3c9ea4;
        case 0x3c9ea8u: goto label_3c9ea8;
        case 0x3c9eacu: goto label_3c9eac;
        case 0x3c9eb0u: goto label_3c9eb0;
        case 0x3c9eb4u: goto label_3c9eb4;
        case 0x3c9eb8u: goto label_3c9eb8;
        case 0x3c9ebcu: goto label_3c9ebc;
        case 0x3c9ec0u: goto label_3c9ec0;
        case 0x3c9ec4u: goto label_3c9ec4;
        case 0x3c9ec8u: goto label_3c9ec8;
        case 0x3c9eccu: goto label_3c9ecc;
        case 0x3c9ed0u: goto label_3c9ed0;
        case 0x3c9ed4u: goto label_3c9ed4;
        case 0x3c9ed8u: goto label_3c9ed8;
        case 0x3c9edcu: goto label_3c9edc;
        case 0x3c9ee0u: goto label_3c9ee0;
        case 0x3c9ee4u: goto label_3c9ee4;
        case 0x3c9ee8u: goto label_3c9ee8;
        case 0x3c9eecu: goto label_3c9eec;
        case 0x3c9ef0u: goto label_3c9ef0;
        case 0x3c9ef4u: goto label_3c9ef4;
        case 0x3c9ef8u: goto label_3c9ef8;
        case 0x3c9efcu: goto label_3c9efc;
        case 0x3c9f00u: goto label_3c9f00;
        case 0x3c9f04u: goto label_3c9f04;
        case 0x3c9f08u: goto label_3c9f08;
        case 0x3c9f0cu: goto label_3c9f0c;
        case 0x3c9f10u: goto label_3c9f10;
        case 0x3c9f14u: goto label_3c9f14;
        case 0x3c9f18u: goto label_3c9f18;
        case 0x3c9f1cu: goto label_3c9f1c;
        case 0x3c9f20u: goto label_3c9f20;
        case 0x3c9f24u: goto label_3c9f24;
        case 0x3c9f28u: goto label_3c9f28;
        case 0x3c9f2cu: goto label_3c9f2c;
        case 0x3c9f30u: goto label_3c9f30;
        case 0x3c9f34u: goto label_3c9f34;
        case 0x3c9f38u: goto label_3c9f38;
        case 0x3c9f3cu: goto label_3c9f3c;
        case 0x3c9f40u: goto label_3c9f40;
        case 0x3c9f44u: goto label_3c9f44;
        case 0x3c9f48u: goto label_3c9f48;
        case 0x3c9f4cu: goto label_3c9f4c;
        case 0x3c9f50u: goto label_3c9f50;
        case 0x3c9f54u: goto label_3c9f54;
        case 0x3c9f58u: goto label_3c9f58;
        case 0x3c9f5cu: goto label_3c9f5c;
        case 0x3c9f60u: goto label_3c9f60;
        case 0x3c9f64u: goto label_3c9f64;
        case 0x3c9f68u: goto label_3c9f68;
        case 0x3c9f6cu: goto label_3c9f6c;
        case 0x3c9f70u: goto label_3c9f70;
        case 0x3c9f74u: goto label_3c9f74;
        default: break;
    }

    ctx->pc = 0x3c8b28u;

label_3c8b28:
    // 0x3c8b28: 0x27bdfa50  addiu       $sp, $sp, -0x5B0
    ctx->pc = 0x3c8b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965840));
label_3c8b2c:
    // 0x3c8b2c: 0x7fb10560  sq          $s1, 0x560($sp)
    ctx->pc = 0x3c8b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 17));
label_3c8b30:
    // 0x3c8b30: 0x7fb60510  sq          $s6, 0x510($sp)
    ctx->pc = 0x3c8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 22));
label_3c8b34:
    // 0x3c8b34: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3c8b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8b38:
    // 0x3c8b38: 0x7fb00570  sq          $s0, 0x570($sp)
    ctx->pc = 0x3c8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 16));
label_3c8b3c:
    // 0x3c8b3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c8b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b40:
    // 0x3c8b40: 0x7fb20550  sq          $s2, 0x550($sp)
    ctx->pc = 0x3c8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 18));
label_3c8b44:
    // 0x3c8b44: 0x7fb30540  sq          $s3, 0x540($sp)
    ctx->pc = 0x3c8b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 19));
label_3c8b48:
    // 0x3c8b48: 0x7fb40530  sq          $s4, 0x530($sp)
    ctx->pc = 0x3c8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 20));
label_3c8b4c:
    // 0x3c8b4c: 0x7fb50520  sq          $s5, 0x520($sp)
    ctx->pc = 0x3c8b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 21));
label_3c8b50:
    // 0x3c8b50: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x3c8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_3c8b54:
    // 0x3c8b54: 0x7fbe04f0  sq          $fp, 0x4F0($sp)
    ctx->pc = 0x3c8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 30));
label_3c8b58:
    // 0x3c8b58: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x3c8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
label_3c8b5c:
    // 0x3c8b5c: 0xe7b805a0  swc1        $f24, 0x5A0($sp)
    ctx->pc = 0x3c8b5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_3c8b60:
    // 0x3c8b60: 0xe7b70598  swc1        $f23, 0x598($sp)
    ctx->pc = 0x3c8b60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_3c8b64:
    // 0x3c8b64: 0xe7b60590  swc1        $f22, 0x590($sp)
    ctx->pc = 0x3c8b64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_3c8b68:
    // 0x3c8b68: 0xe7b50588  swc1        $f21, 0x588($sp)
    ctx->pc = 0x3c8b68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_3c8b6c:
    // 0x3c8b6c: 0xe7b40580  swc1        $f20, 0x580($sp)
    ctx->pc = 0x3c8b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_3c8b70:
    // 0x3c8b70: 0xafa404d0  sw          $a0, 0x4D0($sp)
    ctx->pc = 0x3c8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 4));
label_3c8b74:
    // 0x3c8b74: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3c8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3c8b78:
    // 0x3c8b78: 0x105104ee  beq         $v0, $s1, . + 4 + (0x4EE << 2)
label_3c8b7c:
    if (ctx->pc == 0x3C8B7Cu) {
        ctx->pc = 0x3C8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B78u;
        // 0x3c8b7c: 0x7bb00570  lq          $s0, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B80u;
        goto label_3c8b80;
    }
    ctx->pc = 0x3C8B78u;
    {
        const bool branch_taken_0x3c8b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3C8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B78u;
        // 0x3c8b7c: 0x7bb00570  lq          $s0, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b78) {
            ctx->pc = 0x3C9F34u;
            goto label_3c9f34;
        }
    }
    ctx->pc = 0x3C8B80u;
label_3c8b80:
    // 0x3c8b80: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x3c8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3c8b84:
    // 0x3c8b84: 0x504004ec  beql        $v0, $zero, . + 4 + (0x4EC << 2)
label_3c8b88:
    if (ctx->pc == 0x3C8B88u) {
        ctx->pc = 0x3C8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B84u;
        // 0x3c8b88: 0x7bb10560  lq          $s1, 0x560($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B8Cu;
        goto label_3c8b8c;
    }
    ctx->pc = 0x3C8B84u;
    {
        const bool branch_taken_0x3c8b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b84) {
            ctx->pc = 0x3C8B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8B84u;
            // 0x3c8b88: 0x7bb10560  lq          $s1, 0x560($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9F38u;
            goto label_3c9f38;
        }
    }
    ctx->pc = 0x3C8B8Cu;
label_3c8b8c:
    // 0x3c8b8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8b90:
    // 0x3c8b90: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3c8b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3c8b94:
    // 0x3c8b94: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c8b98:
    // 0x3c8b98: 0x8fa304d0  lw          $v1, 0x4D0($sp)
    ctx->pc = 0x3c8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c8b9c:
    // 0x3c8b9c: 0x40f809  jalr        $v0
label_3c8ba0:
    if (ctx->pc == 0x3C8BA0u) {
        ctx->pc = 0x3C8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B9Cu;
        // 0x3c8ba0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8BA4u;
        goto label_3c8ba4;
    }
    ctx->pc = 0x3C8B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C8BA4u);
        ctx->pc = 0x3C8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B9Cu;
        // 0x3c8ba0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8B9Cu, 0x3C8BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8BA4u;
label_3c8ba4:
    // 0x3c8ba4: 0x8fa404d0  lw          $a0, 0x4D0($sp)
    ctx->pc = 0x3c8ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c8ba8:
    // 0x3c8ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c8ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8bac:
    // 0x3c8bac: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x3c8bacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_3c8bb0:
    // 0x3c8bb0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3c8bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3c8bb4:
    // 0x3c8bb4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c8bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c8bb8:
    // 0x3c8bb8: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x3c8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
label_3c8bbc:
    // 0x3c8bbc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3c8bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8bc0:
    // 0x3c8bc0: 0x8fa404d0  lw          $a0, 0x4D0($sp)
    ctx->pc = 0x3c8bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c8bc4:
    // 0x3c8bc4: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x3c8bc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_3c8bc8:
    // 0x3c8bc8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c8bc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c8bcc:
    // 0x3c8bcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3c8bccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c8bd0:
    // 0x3c8bd0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c8bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8bd4:
    // 0x3c8bd4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c8bd4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c8bd8:
    // 0x3c8bd8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c8bd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c8bdc:
    // 0x3c8bdc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c8bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8be0:
    // 0x3c8be0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c8be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8be4:
    // 0x3c8be4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c8be4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c8be8:
    // 0x3c8be8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c8be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8bec:
    // 0x3c8bec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c8becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c8bf0:
    // 0x3c8bf0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c8bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c8bf4:
    // 0x3c8bf4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c8bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8bf8:
    // 0x3c8bf8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c8bf8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c8bfc:
    // 0x3c8bfc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c8bfcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8c00:
    // 0x3c8c00: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c8c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8c04:
    // 0x3c8c04: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c8c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8c08:
    // 0x3c8c08: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c8c08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c8c0c:
    // 0x3c8c0c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c8c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c8c10:
    // 0x3c8c10: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3c8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3c8c14:
    // 0x3c8c14: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c8c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c8c18:
    // 0x3c8c18: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x3c8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_3c8c1c:
    // 0x3c8c1c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x3c8c1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8c20:
    // 0x3c8c20: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c8c24:
    // 0x3c8c24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c8c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c8c28:
    // 0x3c8c28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c8c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c8c2c:
    // 0x3c8c2c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3c8c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3c8c30:
    // 0x3c8c30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c8c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8c34:
    // 0x3c8c34: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c8c34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c8c38:
    // 0x3c8c38: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c8c38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c8c3c:
    // 0x3c8c3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c8c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8c40:
    // 0x3c8c40: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c8c40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8c44:
    // 0x3c8c44: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c8c44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c8c48:
    // 0x3c8c48: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c8c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8c4c:
    // 0x3c8c4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c8c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c8c50:
    // 0x3c8c50: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c8c50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c8c54:
    // 0x3c8c54: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c8c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8c58:
    // 0x3c8c58: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c8c58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c8c5c:
    // 0x3c8c5c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c8c5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c8c60:
    // 0x3c8c60: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c8c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8c64:
    // 0x3c8c64: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c8c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c8c68:
    // 0x3c8c68: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3c8c68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c8c6c:
    // 0x3c8c6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c8c70:
    // 0x3c8c70: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c8c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c8c74:
    // 0x3c8c74: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3c8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3c8c78:
    // 0x3c8c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c8c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8c7c:
    // 0x3c8c7c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3c8c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3c8c80:
    // 0x3c8c80: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c8c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c8c84:
    // 0x3c8c84: 0xc1073cc  jal         func_41CF30
label_3c8c88:
    if (ctx->pc == 0x3C8C88u) {
        ctx->pc = 0x3C8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C84u;
        // 0x3c8c88: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8C8Cu;
        goto label_3c8c8c;
    }
    ctx->pc = 0x3C8C84u;
    SET_GPR_U32(ctx, 31, 0x3C8C8Cu);
    ctx->pc = 0x3C8C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8C84u;
    // 0x3c8c88: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C8C84u, 0x3C8C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8C8Cu;
label_3c8c8c:
    // 0x3c8c8c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c8c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3c8c90:
    // 0x3c8c90: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x3c8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_3c8c94:
    // 0x3c8c94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3c8c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3c8c98:
    // 0x3c8c98: 0xafa204d4  sw          $v0, 0x4D4($sp)
    ctx->pc = 0x3c8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1236), GPR_U32(ctx, 2));
label_3c8c9c:
    // 0x3c8c9c: 0x14710009  bne         $v1, $s1, . + 4 + (0x9 << 2)
label_3c8ca0:
    if (ctx->pc == 0x3C8CA0u) {
        ctx->pc = 0x3C8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C9Cu;
        // 0x3c8ca0: 0xaed10008  sw          $s1, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CA4u;
        goto label_3c8ca4;
    }
    ctx->pc = 0x3C8C9Cu;
    {
        const bool branch_taken_0x3c8c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x3C8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C9Cu;
        // 0x3c8ca0: 0xaed10008  sw          $s1, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c9c) {
            ctx->pc = 0x3C8CC4u;
            goto label_3c8cc4;
        }
    }
    ctx->pc = 0x3C8CA4u;
label_3c8ca4:
    // 0x3c8ca4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c8ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c8ca8:
    // 0x3c8ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8cac:
    // 0x3c8cac: 0xc10d6e8  jal         func_435BA0
label_3c8cb0:
    if (ctx->pc == 0x3C8CB0u) {
        ctx->pc = 0x3C8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CACu;
        // 0x3c8cb0: 0x24a544b8  addiu       $a1, $a1, 0x44B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CB4u;
        goto label_3c8cb4;
    }
    ctx->pc = 0x3C8CACu;
    SET_GPR_U32(ctx, 31, 0x3C8CB4u);
    ctx->pc = 0x3C8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8CACu;
    // 0x3c8cb0: 0x24a544b8  addiu       $a1, $a1, 0x44B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C8CACu, 0x3C8CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8CB4u;
label_3c8cb4:
    // 0x3c8cb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3c8cb8:
    if (ctx->pc == 0x3C8CB8u) {
        ctx->pc = 0x3C8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CB4u;
        // 0x3c8cb8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CBCu;
        goto label_3c8cbc;
    }
    ctx->pc = 0x3C8CB4u;
    {
        const bool branch_taken_0x3c8cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CB4u;
        // 0x3c8cb8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8cb4) {
            ctx->pc = 0x3C8CC8u;
            goto label_3c8cc8;
        }
    }
    ctx->pc = 0x3C8CBCu;
label_3c8cbc:
    // 0x3c8cbc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c8cc0:
    // 0x3c8cc0: 0x245044c8  addiu       $s0, $v0, 0x44C8
    ctx->pc = 0x3c8cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17608));
label_3c8cc4:
    // 0x3c8cc4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c8cc8:
    // 0x3c8cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ccc:
    // 0x3c8ccc: 0x24a544d8  addiu       $a1, $a1, 0x44D8
    ctx->pc = 0x3c8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17624));
label_3c8cd0:
    // 0x3c8cd0: 0xc10d6e8  jal         func_435BA0
label_3c8cd4:
    if (ctx->pc == 0x3C8CD4u) {
        ctx->pc = 0x3C8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CD0u;
        // 0x3c8cd4: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CD8u;
        goto label_3c8cd8;
    }
    ctx->pc = 0x3C8CD0u;
    SET_GPR_U32(ctx, 31, 0x3C8CD8u);
    ctx->pc = 0x3C8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8CD0u;
    // 0x3c8cd4: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C8CD0u, 0x3C8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8CD8u;
label_3c8cd8:
    // 0x3c8cd8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3c8cdc:
    if (ctx->pc == 0x3C8CDCu) {
        ctx->pc = 0x3C8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CD8u;
        // 0x3c8cdc: 0x262544e8  addiu       $a1, $s1, 0x44E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CE0u;
        goto label_3c8ce0;
    }
    ctx->pc = 0x3C8CD8u;
    {
        const bool branch_taken_0x3c8cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CD8u;
        // 0x3c8cdc: 0x262544e8  addiu       $a1, $s1, 0x44E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8cd8) {
            ctx->pc = 0x3C8D0Cu;
            goto label_3c8d0c;
        }
    }
    ctx->pc = 0x3C8CE0u;
label_3c8ce0:
    // 0x3c8ce0: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3c8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c8ce4:
    // 0x3c8ce4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3c8ce8:
    if (ctx->pc == 0x3C8CE8u) {
        ctx->pc = 0x3C8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CE4u;
        // 0x3c8ce8: 0x263044e8  addiu       $s0, $s1, 0x44E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CECu;
        goto label_3c8cec;
    }
    ctx->pc = 0x3C8CE4u;
    {
        const bool branch_taken_0x3c8ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CE4u;
        // 0x3c8ce8: 0x263044e8  addiu       $s0, $s1, 0x44E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ce4) {
            ctx->pc = 0x3C8D0Cu;
            goto label_3c8d0c;
        }
    }
    ctx->pc = 0x3C8CECu;
label_3c8cec:
    // 0x3c8cec: 0x3c055acb  lui         $a1, 0x5ACB
    ctx->pc = 0x3c8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23243 << 16));
label_3c8cf0:
    // 0x3c8cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c8cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8cf4:
    // 0x3c8cf4: 0x34a52300  ori         $a1, $a1, 0x2300
    ctx->pc = 0x3c8cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8960);
label_3c8cf8:
    // 0x3c8cf8: 0xc045cb2  jal         func_1172C8
label_3c8cfc:
    if (ctx->pc == 0x3C8CFCu) {
        ctx->pc = 0x3C8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CF8u;
        // 0x3c8cfc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8D00u;
        goto label_3c8d00;
    }
    ctx->pc = 0x3C8CF8u;
    SET_GPR_U32(ctx, 31, 0x3C8D00u);
    ctx->pc = 0x3C8CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8CF8u;
    // 0x3c8cfc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3C8CF8u, 0x3C8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D00u;
label_3c8d00:
    // 0x3c8d00: 0xaec20014  sw          $v0, 0x14($s6)
    ctx->pc = 0x3c8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
label_3c8d04:
    // 0x3c8d04: 0x263044e8  addiu       $s0, $s1, 0x44E8
    ctx->pc = 0x3c8d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17640));
label_3c8d08:
    // 0x3c8d08: 0x262544e8  addiu       $a1, $s1, 0x44E8
    ctx->pc = 0x3c8d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17640));
label_3c8d0c:
    // 0x3c8d0c: 0xc10d6e8  jal         func_435BA0
label_3c8d10:
    if (ctx->pc == 0x3C8D10u) {
        ctx->pc = 0x3C8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D0Cu;
        // 0x3c8d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8D14u;
        goto label_3c8d14;
    }
    ctx->pc = 0x3C8D0Cu;
    SET_GPR_U32(ctx, 31, 0x3C8D14u);
    ctx->pc = 0x3C8D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D0Cu;
    // 0x3c8d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C8D0Cu, 0x3C8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D14u;
label_3c8d14:
    // 0x3c8d14: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
label_3c8d18:
    if (ctx->pc == 0x3C8D18u) {
        ctx->pc = 0x3C8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D14u;
        // 0x3c8d18: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8D1Cu;
        goto label_3c8d1c;
    }
    ctx->pc = 0x3C8D14u;
    {
        const bool branch_taken_0x3c8d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8d14) {
            ctx->pc = 0x3C8D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8D14u;
            // 0x3c8d18: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8E60u;
            goto label_3c8e60;
        }
    }
    ctx->pc = 0x3C8D1Cu;
label_3c8d1c:
    // 0x3c8d1c: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c8d20:
    // 0x3c8d20: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3c8d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c8d24:
    // 0x3c8d24: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c8d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8d28:
    // 0x3c8d28: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3c8d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c8d2c:
    // 0x3c8d2c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c8d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c8d30:
    // 0x3c8d30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8d34:
    // 0x3c8d34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c8d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c8d38:
    // 0x3c8d38: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c8d38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c8d3c:
    // 0x3c8d3c: 0x26104500  addiu       $s0, $s0, 0x4500
    ctx->pc = 0x3c8d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17664));
label_3c8d40:
    // 0x3c8d40: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c8d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c8d44:
    // 0x3c8d44: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3c8d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3c8d48:
    // 0x3c8d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d4c:
    // 0x3c8d4c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3c8d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3c8d50:
    // 0x3c8d50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c8d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d54:
    // 0x3c8d54: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3c8d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c8d58:
    // 0x3c8d58: 0xc0e9fa6  jal         func_3A7E98
label_3c8d5c:
    if (ctx->pc == 0x3C8D5Cu) {
        ctx->pc = 0x3C8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D58u;
        // 0x3c8d5c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8D60u;
        goto label_3c8d60;
    }
    ctx->pc = 0x3C8D58u;
    SET_GPR_U32(ctx, 31, 0x3C8D60u);
    ctx->pc = 0x3C8D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D58u;
    // 0x3c8d5c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C8D58u, 0x3C8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D60u;
label_3c8d60:
    // 0x3c8d60: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3c8d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c8d64:
    // 0x3c8d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d68:
    // 0x3c8d68: 0xc0f15bc  jal         func_3C56F0
label_3c8d6c:
    if (ctx->pc == 0x3C8D6Cu) {
        ctx->pc = 0x3C8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D68u;
        // 0x3c8d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8D70u;
        goto label_3c8d70;
    }
    ctx->pc = 0x3C8D68u;
    SET_GPR_U32(ctx, 31, 0x3C8D70u);
    ctx->pc = 0x3C8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D68u;
    // 0x3c8d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8D68u, 0x3C8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D70u;
label_3c8d70:
    // 0x3c8d70: 0xaed30018  sw          $s3, 0x18($s6)
    ctx->pc = 0x3c8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 19));
label_3c8d74:
    // 0x3c8d74: 0x8fa204d4  lw          $v0, 0x4D4($sp)
    ctx->pc = 0x3c8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3c8d78:
    // 0x3c8d78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3c8d7c:
    if (ctx->pc == 0x3C8D7Cu) {
        ctx->pc = 0x3C8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D78u;
        // 0x3c8d7c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8D80u;
        goto label_3c8d80;
    }
    ctx->pc = 0x3C8D78u;
    {
        const bool branch_taken_0x3c8d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D78u;
        // 0x3c8d7c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d78) {
            ctx->pc = 0x3C8DD0u;
            goto label_3c8dd0;
        }
    }
    ctx->pc = 0x3C8D80u;
label_3c8d80:
    // 0x3c8d80: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c8d80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c8d84:
    // 0x3c8d84: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3c8d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3c8d88:
    // 0x3c8d88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8d8c:
    // 0x3c8d8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c8d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8d90:
    // 0x3c8d90: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3c8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c8d94:
    // 0x3c8d94: 0x8fa304d0  lw          $v1, 0x4D0($sp)
    ctx->pc = 0x3c8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c8d98:
    // 0x3c8d98: 0x26104510  addiu       $s0, $s0, 0x4510
    ctx->pc = 0x3c8d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17680));
label_3c8d9c:
    // 0x3c8d9c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c8da0:
    // 0x3c8da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8da4:
    // 0x3c8da4: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c8da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c8da8:
    // 0x3c8da8: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3c8da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c8dac:
    // 0x3c8dac: 0xafa30470  sw          $v1, 0x470($sp)
    ctx->pc = 0x3c8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
label_3c8db0:
    // 0x3c8db0: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3c8db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c8db4:
    // 0x3c8db4: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3c8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3c8db8:
    // 0x3c8db8: 0xc0e9fd0  jal         func_3A7F40
label_3c8dbc:
    if (ctx->pc == 0x3C8DBCu) {
        ctx->pc = 0x3C8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DB8u;
        // 0x3c8dbc: 0x27a80470  addiu       $t0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8DC0u;
        goto label_3c8dc0;
    }
    ctx->pc = 0x3C8DB8u;
    SET_GPR_U32(ctx, 31, 0x3C8DC0u);
    ctx->pc = 0x3C8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8DB8u;
    // 0x3c8dbc: 0x27a80470  addiu       $t0, $sp, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C8DB8u, 0x3C8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8DC0u;
label_3c8dc0:
    // 0x3c8dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8dc4:
    // 0x3c8dc4: 0xc0f15bc  jal         func_3C56F0
label_3c8dc8:
    if (ctx->pc == 0x3C8DC8u) {
        ctx->pc = 0x3C8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DC4u;
        // 0x3c8dc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8DCCu;
        goto label_3c8dcc;
    }
    ctx->pc = 0x3C8DC4u;
    SET_GPR_U32(ctx, 31, 0x3C8DCCu);
    ctx->pc = 0x3C8DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8DC4u;
    // 0x3c8dc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8DC4u, 0x3C8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8DCCu;
label_3c8dcc:
    // 0x3c8dcc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3c8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3c8dd0:
    // 0x3c8dd0: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x3c8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3c8dd4:
    // 0x3c8dd4: 0x1453001a  bne         $v0, $s3, . + 4 + (0x1A << 2)
label_3c8dd8:
    if (ctx->pc == 0x3C8DD8u) {
        ctx->pc = 0x3C8DDCu;
        goto label_3c8ddc;
    }
    ctx->pc = 0x3C8DD4u;
    {
        const bool branch_taken_0x3c8dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3c8dd4) {
            ctx->pc = 0x3C8E40u;
            goto label_3c8e40;
        }
    }
    ctx->pc = 0x3C8DDCu;
label_3c8ddc:
    // 0x3c8ddc: 0xc6c10020  lwc1        $f1, 0x20($s6)
    ctx->pc = 0x3c8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c8de0:
    // 0x3c8de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c8de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8de4:
    // 0x3c8de4: 0x0  nop
    ctx->pc = 0x3c8de4u;
    // NOP
label_3c8de8:
    // 0x3c8de8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c8de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c8dec:
    // 0x3c8dec: 0x0  nop
    ctx->pc = 0x3c8decu;
    // NOP
label_3c8df0:
    // 0x3c8df0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_3c8df4:
    if (ctx->pc == 0x3C8DF4u) {
        ctx->pc = 0x3C8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DF0u;
        // 0x3c8df4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8DF8u;
        goto label_3c8df8;
    }
    ctx->pc = 0x3C8DF0u;
    {
        const bool branch_taken_0x3c8df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DF0u;
        // 0x3c8df4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8df0) {
            ctx->pc = 0x3C8E40u;
            goto label_3c8e40;
        }
    }
    ctx->pc = 0x3C8DF8u;
label_3c8df8:
    // 0x3c8df8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c8dfc:
    // 0x3c8dfc: 0x8c44cf14  lw          $a0, -0x30EC($v0)
    ctx->pc = 0x3c8dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
label_3c8e00:
    // 0x3c8e00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c8e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8e04:
    // 0x3c8e04: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3c8e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3c8e08:
    // 0x3c8e08: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3c8e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3c8e0c:
    // 0x3c8e0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c8e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c8e10:
    // 0x3c8e10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c8e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8e14:
    // 0x3c8e14: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3c8e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3c8e18:
    // 0x3c8e18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8e1c:
    // 0x3c8e1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c8e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c8e20:
    // 0x3c8e20: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3c8e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c8e24:
    // 0x3c8e24: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3c8e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_3c8e28:
    // 0x3c8e28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8e2c:
    // 0x3c8e2c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3c8e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c8e30:
    // 0x3c8e30: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3c8e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c8e34:
    // 0x3c8e34: 0xc06701c  jal         func_19C070
label_3c8e38:
    if (ctx->pc == 0x3C8E38u) {
        ctx->pc = 0x3C8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E34u;
        // 0x3c8e38: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8E3Cu;
        goto label_3c8e3c;
    }
    ctx->pc = 0x3C8E34u;
    SET_GPR_U32(ctx, 31, 0x3C8E3Cu);
    ctx->pc = 0x3C8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E34u;
    // 0x3c8e38: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C070u, 0x3C8E34u, 0x3C8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E3Cu;
label_3c8e3c:
    // 0x3c8e3c: 0xaec2001c  sw          $v0, 0x1C($s6)
    ctx->pc = 0x3c8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
label_3c8e40:
    // 0x3c8e40: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3c8e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3c8e44:
    // 0x3c8e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c8e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8e48:
    // 0x3c8e48: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c8e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c8e4c:
    // 0x3c8e4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8e50:
    // 0x3c8e50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c8e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8e54:
    // 0x3c8e54: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x3c8e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_3c8e58:
    // 0x3c8e58: 0x10000435  b           . + 4 + (0x435 << 2)
label_3c8e5c:
    if (ctx->pc == 0x3C8E5Cu) {
        ctx->pc = 0x3C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E58u;
        // 0x3c8e5c: 0xe6c10024  swc1        $f1, 0x24($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8E60u;
        goto label_3c8e60;
    }
    ctx->pc = 0x3C8E58u;
    {
        const bool branch_taken_0x3c8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E58u;
        // 0x3c8e5c: 0xe6c10024  swc1        $f1, 0x24($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e58) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C8E60u;
label_3c8e60:
    // 0x3c8e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8e64:
    // 0x3c8e64: 0x24a54520  addiu       $a1, $a1, 0x4520
    ctx->pc = 0x3c8e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17696));
label_3c8e68:
    // 0x3c8e68: 0xc10d6e8  jal         func_435BA0
label_3c8e6c:
    if (ctx->pc == 0x3C8E6Cu) {
        ctx->pc = 0x3C8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E68u;
        // 0x3c8e6c: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8E70u;
        goto label_3c8e70;
    }
    ctx->pc = 0x3C8E68u;
    SET_GPR_U32(ctx, 31, 0x3C8E70u);
    ctx->pc = 0x3C8E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E68u;
    // 0x3c8e6c: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C8E68u, 0x3C8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E70u;
label_3c8e70:
    // 0x3c8e70: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3c8e74:
    if (ctx->pc == 0x3C8E74u) {
        ctx->pc = 0x3C8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E70u;
        // 0x3c8e74: 0x262544c8  addiu       $a1, $s1, 0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8E78u;
        goto label_3c8e78;
    }
    ctx->pc = 0x3C8E70u;
    {
        const bool branch_taken_0x3c8e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E70u;
        // 0x3c8e74: 0x262544c8  addiu       $a1, $s1, 0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e70) {
            ctx->pc = 0x3C8EA4u;
            goto label_3c8ea4;
        }
    }
    ctx->pc = 0x3C8E78u;
label_3c8e78:
    // 0x3c8e78: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3c8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c8e7c:
    // 0x3c8e7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3c8e80:
    if (ctx->pc == 0x3C8E80u) {
        ctx->pc = 0x3C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E7Cu;
        // 0x3c8e80: 0x263044c8  addiu       $s0, $s1, 0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8E84u;
        goto label_3c8e84;
    }
    ctx->pc = 0x3C8E7Cu;
    {
        const bool branch_taken_0x3c8e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E7Cu;
        // 0x3c8e80: 0x263044c8  addiu       $s0, $s1, 0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e7c) {
            ctx->pc = 0x3C8EA4u;
            goto label_3c8ea4;
        }
    }
    ctx->pc = 0x3C8E84u;
label_3c8e84:
    // 0x3c8e84: 0x3c05ede7  lui         $a1, 0xEDE7
    ctx->pc = 0x3c8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60903 << 16));
label_3c8e88:
    // 0x3c8e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c8e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8e8c:
    // 0x3c8e8c: 0x34a5ad1d  ori         $a1, $a1, 0xAD1D
    ctx->pc = 0x3c8e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44317);
label_3c8e90:
    // 0x3c8e90: 0xc045cb2  jal         func_1172C8
label_3c8e94:
    if (ctx->pc == 0x3C8E94u) {
        ctx->pc = 0x3C8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E90u;
        // 0x3c8e94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8E98u;
        goto label_3c8e98;
    }
    ctx->pc = 0x3C8E90u;
    SET_GPR_U32(ctx, 31, 0x3C8E98u);
    ctx->pc = 0x3C8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E90u;
    // 0x3c8e94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3C8E90u, 0x3C8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E98u;
label_3c8e98:
    // 0x3c8e98: 0xaec20014  sw          $v0, 0x14($s6)
    ctx->pc = 0x3c8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
label_3c8e9c:
    // 0x3c8e9c: 0x263044c8  addiu       $s0, $s1, 0x44C8
    ctx->pc = 0x3c8e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
label_3c8ea0:
    // 0x3c8ea0: 0x262544c8  addiu       $a1, $s1, 0x44C8
    ctx->pc = 0x3c8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
label_3c8ea4:
    // 0x3c8ea4: 0xc10d6e8  jal         func_435BA0
label_3c8ea8:
    if (ctx->pc == 0x3C8EA8u) {
        ctx->pc = 0x3C8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EA4u;
        // 0x3c8ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8EACu;
        goto label_3c8eac;
    }
    ctx->pc = 0x3C8EA4u;
    SET_GPR_U32(ctx, 31, 0x3C8EACu);
    ctx->pc = 0x3C8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8EA4u;
    // 0x3c8ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C8EA4u, 0x3C8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8EACu;
label_3c8eac:
    // 0x3c8eac: 0x5440017e  bnel        $v0, $zero, . + 4 + (0x17E << 2)
label_3c8eb0:
    if (ctx->pc == 0x3C8EB0u) {
        ctx->pc = 0x3C8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EACu;
        // 0x3c8eb0: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8EB4u;
        goto label_3c8eb4;
    }
    ctx->pc = 0x3C8EACu;
    {
        const bool branch_taken_0x3c8eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8eac) {
            ctx->pc = 0x3C8EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8EACu;
            // 0x3c8eb0: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C94A8u;
            goto label_3c94a8;
        }
    }
    ctx->pc = 0x3C8EB4u;
label_3c8eb4:
    // 0x3c8eb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c8eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8eb8:
    // 0x3c8eb8: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3c8eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3c8ebc:
    // 0x3c8ebc: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x3c8ebcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c8ec0:
    // 0x3c8ec0: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3c8ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c8ec4:
    // 0x3c8ec4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c8ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c8ec8:
    // 0x3c8ec8: 0xc136b24  jal         func_4DAC90
label_3c8ecc:
    if (ctx->pc == 0x3C8ECCu) {
        ctx->pc = 0x3C8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EC8u;
        // 0x3c8ecc: 0x26944500  addiu       $s4, $s4, 0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8ED0u;
        goto label_3c8ed0;
    }
    ctx->pc = 0x3C8EC8u;
    SET_GPR_U32(ctx, 31, 0x3C8ED0u);
    ctx->pc = 0x3C8ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8EC8u;
    // 0x3c8ecc: 0x26944500  addiu       $s4, $s4, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C8EC8u, 0x3C8ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8ED0u;
label_3c8ed0:
    // 0x3c8ed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c8ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c8ed4:
    // 0x3c8ed4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c8ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c8ed8:
    // 0x3c8ed8: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c8ed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c8edc:
    // 0x3c8edc: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3c8edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c8ee0:
    // 0x3c8ee0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c8ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ee4:
    // 0x3c8ee4: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3c8ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c8ee8:
    // 0x3c8ee8: 0xc136b18  jal         func_4DAC60
label_3c8eec:
    if (ctx->pc == 0x3C8EECu) {
        ctx->pc = 0x3C8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EE8u;
        // 0x3c8eec: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8EF0u;
        goto label_3c8ef0;
    }
    ctx->pc = 0x3C8EE8u;
    SET_GPR_U32(ctx, 31, 0x3C8EF0u);
    ctx->pc = 0x3C8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8EE8u;
    // 0x3c8eec: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C8EE8u, 0x3C8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8EF0u;
label_3c8ef0:
    // 0x3c8ef0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3c8ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3c8ef4:
    // 0x3c8ef4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c8ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c8ef8:
    // 0x3c8ef8: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c8ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c8efc:
    // 0x3c8efc: 0x27b30480  addiu       $s3, $sp, 0x480
    ctx->pc = 0x3c8efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c8f00:
    // 0x3c8f00: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c8f04:
    // 0x3c8f04: 0x27be0440  addiu       $fp, $sp, 0x440
    ctx->pc = 0x3c8f04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c8f08:
    // 0x3c8f08: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c8f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c8f0c:
    // 0x3c8f0c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c8f10:
    // 0x3c8f10: 0xafa30480  sw          $v1, 0x480($sp)
    ctx->pc = 0x3c8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 3));
label_3c8f14:
    // 0x3c8f14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3c8f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f18:
    // 0x3c8f18: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c8f1c:
    // 0x3c8f1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c8f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f20:
    // 0x3c8f20: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3c8f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3c8f24:
    // 0x3c8f24: 0xc0e9fa6  jal         func_3A7E98
label_3c8f28:
    if (ctx->pc == 0x3C8F28u) {
        ctx->pc = 0x3C8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F24u;
        // 0x3c8f28: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8F2Cu;
        goto label_3c8f2c;
    }
    ctx->pc = 0x3C8F24u;
    SET_GPR_U32(ctx, 31, 0x3C8F2Cu);
    ctx->pc = 0x3C8F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8F24u;
    // 0x3c8f28: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C8F24u, 0x3C8F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8F2Cu;
label_3c8f2c:
    // 0x3c8f2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c8f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c8f30:
    // 0x3c8f30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c8f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c8f34:
    // 0x3c8f34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f38:
    // 0x3c8f38: 0xc0f15bc  jal         func_3C56F0
label_3c8f3c:
    if (ctx->pc == 0x3C8F3Cu) {
        ctx->pc = 0x3C8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F38u;
        // 0x3c8f3c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8F40u;
        goto label_3c8f40;
    }
    ctx->pc = 0x3C8F38u;
    SET_GPR_U32(ctx, 31, 0x3C8F40u);
    ctx->pc = 0x3C8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8F38u;
    // 0x3c8f3c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8F38u, 0x3C8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8F40u;
label_3c8f40:
    // 0x3c8f40: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c8f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c8f44:
    // 0x3c8f44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8f48:
    // 0x3c8f48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c8f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8f4c:
    // 0x3c8f4c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c8f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c8f50:
    // 0x3c8f50: 0xc136b24  jal         func_4DAC90
label_3c8f54:
    if (ctx->pc == 0x3C8F54u) {
        ctx->pc = 0x3C8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F50u;
        // 0x3c8f54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8F58u;
        goto label_3c8f58;
    }
    ctx->pc = 0x3C8F50u;
    SET_GPR_U32(ctx, 31, 0x3C8F58u);
    ctx->pc = 0x3C8F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8F50u;
    // 0x3c8f54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C8F50u, 0x3C8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8F58u;
label_3c8f58:
    // 0x3c8f58: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c8f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c8f5c:
    // 0x3c8f5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c8f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f60:
    // 0x3c8f60: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c8f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c8f64:
    // 0x3c8f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f68:
    // 0x3c8f68: 0xc136b18  jal         func_4DAC60
label_3c8f6c:
    if (ctx->pc == 0x3C8F6Cu) {
        ctx->pc = 0x3C8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F68u;
        // 0x3c8f6c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8F70u;
        goto label_3c8f70;
    }
    ctx->pc = 0x3C8F68u;
    SET_GPR_U32(ctx, 31, 0x3C8F70u);
    ctx->pc = 0x3C8F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8F68u;
    // 0x3c8f6c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C8F68u, 0x3C8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8F70u;
label_3c8f70:
    // 0x3c8f70: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c8f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c8f74:
    // 0x3c8f74: 0x27b10490  addiu       $s1, $sp, 0x490
    ctx->pc = 0x3c8f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c8f78:
    // 0x3c8f78: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c8f7c:
    // 0x3c8f7c: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3c8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c8f80:
    // 0x3c8f80: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c8f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c8f84:
    // 0x3c8f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f88:
    // 0x3c8f88: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c8f8c:
    // 0x3c8f8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c8f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f90:
    // 0x3c8f90: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x3c8f90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c8f94:
    // 0x3c8f94: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c8f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c8f98:
    // 0x3c8f98: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c8f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c8f9c:
    // 0x3c8f9c: 0xc136b18  jal         func_4DAC60
label_3c8fa0:
    if (ctx->pc == 0x3C8FA0u) {
        ctx->pc = 0x3C8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F9Cu;
        // 0x3c8fa0: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8FA4u;
        goto label_3c8fa4;
    }
    ctx->pc = 0x3C8F9Cu;
    SET_GPR_U32(ctx, 31, 0x3C8FA4u);
    ctx->pc = 0x3C8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8F9Cu;
    // 0x3c8fa0: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C8F9Cu, 0x3C8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8FA4u;
label_3c8fa4:
    // 0x3c8fa4: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c8fa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c8fa8:
    // 0x3c8fa8: 0x27b204a0  addiu       $s2, $sp, 0x4A0
    ctx->pc = 0x3c8fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3c8fac:
    // 0x3c8fac: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c8facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c8fb0:
    // 0x3c8fb0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c8fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8fb4:
    // 0x3c8fb4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c8fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c8fb8:
    // 0x3c8fb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c8fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8fbc:
    // 0x3c8fbc: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c8fc0:
    // 0x3c8fc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c8fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c8fc4:
    // 0x3c8fc4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c8fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c8fc8:
    // 0x3c8fc8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c8fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c8fcc:
    // 0x3c8fcc: 0xc0e9fa6  jal         func_3A7E98
label_3c8fd0:
    if (ctx->pc == 0x3C8FD0u) {
        ctx->pc = 0x3C8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FCCu;
        // 0x3c8fd0: 0xe7b50490  swc1        $f21, 0x490($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8FD4u;
        goto label_3c8fd4;
    }
    ctx->pc = 0x3C8FCCu;
    SET_GPR_U32(ctx, 31, 0x3C8FD4u);
    ctx->pc = 0x3C8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8FCCu;
    // 0x3c8fd0: 0xe7b50490  swc1        $f21, 0x490($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C8FCCu, 0x3C8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8FD4u;
label_3c8fd4:
    // 0x3c8fd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8fd8:
    // 0x3c8fd8: 0xc0f15bc  jal         func_3C56F0
label_3c8fdc:
    if (ctx->pc == 0x3C8FDCu) {
        ctx->pc = 0x3C8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FD8u;
        // 0x3c8fdc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8FE0u;
        goto label_3c8fe0;
    }
    ctx->pc = 0x3C8FD8u;
    SET_GPR_U32(ctx, 31, 0x3C8FE0u);
    ctx->pc = 0x3C8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8FD8u;
    // 0x3c8fdc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8FD8u, 0x3C8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8FE0u;
label_3c8fe0:
    // 0x3c8fe0: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3c8fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_3c8fe4:
    // 0x3c8fe4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8fe8:
    // 0x3c8fe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c8fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8fec:
    // 0x3c8fec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c8fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c8ff0:
    // 0x3c8ff0: 0xc136b24  jal         func_4DAC90
label_3c8ff4:
    if (ctx->pc == 0x3C8FF4u) {
        ctx->pc = 0x3C8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FF0u;
        // 0x3c8ff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8FF8u;
        goto label_3c8ff8;
    }
    ctx->pc = 0x3C8FF0u;
    SET_GPR_U32(ctx, 31, 0x3C8FF8u);
    ctx->pc = 0x3C8FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8FF0u;
    // 0x3c8ff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C8FF0u, 0x3C8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8FF8u;
label_3c8ff8:
    // 0x3c8ff8: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c8ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c8ffc:
    // 0x3c8ffc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c8ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9000:
    // 0x3c9000: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c9000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9004:
    // 0x3c9004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9008:
    // 0x3c9008: 0xc136b18  jal         func_4DAC60
label_3c900c:
    if (ctx->pc == 0x3C900Cu) {
        ctx->pc = 0x3C900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9008u;
        // 0x3c900c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9010u;
        goto label_3c9010;
    }
    ctx->pc = 0x3C9008u;
    SET_GPR_U32(ctx, 31, 0x3C9010u);
    ctx->pc = 0x3C900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9008u;
    // 0x3c900c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9008u, 0x3C9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9010u;
label_3c9010:
    // 0x3c9010: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9014:
    // 0x3c9014: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3c9014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c9018:
    // 0x3c9018: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c9018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c901c:
    // 0x3c901c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9020:
    // 0x3c9020: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9024:
    // 0x3c9024: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9028:
    // 0x3c9028: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c9028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c902c:
    // 0x3c902c: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x3c902cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c9030:
    // 0x3c9030: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c9030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c9034:
    // 0x3c9034: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9038:
    // 0x3c9038: 0xc136b18  jal         func_4DAC60
label_3c903c:
    if (ctx->pc == 0x3C903Cu) {
        ctx->pc = 0x3C903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9038u;
        // 0x3c903c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9040u;
        goto label_3c9040;
    }
    ctx->pc = 0x3C9038u;
    SET_GPR_U32(ctx, 31, 0x3C9040u);
    ctx->pc = 0x3C903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9038u;
    // 0x3c903c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9038u, 0x3C9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9040u;
label_3c9040:
    // 0x3c9040: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9044:
    // 0x3c9044: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c9044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9048:
    // 0x3c9048: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c904c:
    // 0x3c904c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c904cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9050:
    // 0x3c9050: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9054:
    // 0x3c9054: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9058:
    // 0x3c9058: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c9058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c905c:
    // 0x3c905c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c905cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9060:
    // 0x3c9060: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9064:
    // 0x3c9064: 0xc0e9fa6  jal         func_3A7E98
label_3c9068:
    if (ctx->pc == 0x3C9068u) {
        ctx->pc = 0x3C9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9064u;
        // 0x3c9068: 0xe7b50490  swc1        $f21, 0x490($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C906Cu;
        goto label_3c906c;
    }
    ctx->pc = 0x3C9064u;
    SET_GPR_U32(ctx, 31, 0x3C906Cu);
    ctx->pc = 0x3C9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9064u;
    // 0x3c9068: 0xe7b50490  swc1        $f21, 0x490($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9064u, 0x3C906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C906Cu;
label_3c906c:
    // 0x3c906c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9070:
    // 0x3c9070: 0xc0f15bc  jal         func_3C56F0
label_3c9074:
    if (ctx->pc == 0x3C9074u) {
        ctx->pc = 0x3C9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9070u;
        // 0x3c9074: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9078u;
        goto label_3c9078;
    }
    ctx->pc = 0x3C9070u;
    SET_GPR_U32(ctx, 31, 0x3C9078u);
    ctx->pc = 0x3C9074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9070u;
    // 0x3c9074: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9070u, 0x3C9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9078u;
label_3c9078:
    // 0x3c9078: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c9078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c907c:
    // 0x3c907c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9080:
    // 0x3c9080: 0xc136b24  jal         func_4DAC90
label_3c9084:
    if (ctx->pc == 0x3C9084u) {
        ctx->pc = 0x3C9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9080u;
        // 0x3c9084: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9088u;
        goto label_3c9088;
    }
    ctx->pc = 0x3C9080u;
    SET_GPR_U32(ctx, 31, 0x3C9088u);
    ctx->pc = 0x3C9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9080u;
    // 0x3c9084: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9080u, 0x3C9088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9088u;
label_3c9088:
    // 0x3c9088: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c9088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c908c:
    // 0x3c908c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9090:
    // 0x3c9090: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3c9090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c9094:
    // 0x3c9094: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3c9094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9098:
    // 0x3c9098: 0xc136b18  jal         func_4DAC60
label_3c909c:
    if (ctx->pc == 0x3C909Cu) {
        ctx->pc = 0x3C909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9098u;
        // 0x3c909c: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C90A0u;
        goto label_3c90a0;
    }
    ctx->pc = 0x3C9098u;
    SET_GPR_U32(ctx, 31, 0x3C90A0u);
    ctx->pc = 0x3C909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9098u;
    // 0x3c909c: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9098u, 0x3C90A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90A0u;
label_3c90a0:
    // 0x3c90a0: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c90a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c90a4:
    // 0x3c90a4: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c90a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c90a8:
    // 0x3c90a8: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c90ac:
    // 0x3c90ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3c90acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c90b0:
    // 0x3c90b0: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c90b4:
    // 0x3c90b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c90b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c90b8:
    // 0x3c90b8: 0xafa30480  sw          $v1, 0x480($sp)
    ctx->pc = 0x3c90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 3));
label_3c90bc:
    // 0x3c90bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c90bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c90c0:
    // 0x3c90c0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c90c4:
    // 0x3c90c4: 0xc0e9fa6  jal         func_3A7E98
label_3c90c8:
    if (ctx->pc == 0x3C90C8u) {
        ctx->pc = 0x3C90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C90C4u;
        // 0x3c90c8: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C90CCu;
        goto label_3c90cc;
    }
    ctx->pc = 0x3C90C4u;
    SET_GPR_U32(ctx, 31, 0x3C90CCu);
    ctx->pc = 0x3C90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90C4u;
    // 0x3c90c8: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C90C4u, 0x3C90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90CCu;
label_3c90cc:
    // 0x3c90cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c90ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c90d0:
    // 0x3c90d0: 0xc0f15bc  jal         func_3C56F0
label_3c90d4:
    if (ctx->pc == 0x3C90D4u) {
        ctx->pc = 0x3C90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C90D0u;
        // 0x3c90d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C90D8u;
        goto label_3c90d8;
    }
    ctx->pc = 0x3C90D0u;
    SET_GPR_U32(ctx, 31, 0x3C90D8u);
    ctx->pc = 0x3C90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90D0u;
    // 0x3c90d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C90D0u, 0x3C90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90D8u;
label_3c90d8:
    // 0x3c90d8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c90d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c90dc:
    // 0x3c90dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c90dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c90e0:
    // 0x3c90e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c90e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c90e4:
    // 0x3c90e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c90e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c90e8:
    // 0x3c90e8: 0xc136b24  jal         func_4DAC90
label_3c90ec:
    if (ctx->pc == 0x3C90ECu) {
        ctx->pc = 0x3C90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C90E8u;
        // 0x3c90ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C90F0u;
        goto label_3c90f0;
    }
    ctx->pc = 0x3C90E8u;
    SET_GPR_U32(ctx, 31, 0x3C90F0u);
    ctx->pc = 0x3C90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90E8u;
    // 0x3c90ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C90E8u, 0x3C90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90F0u;
label_3c90f0:
    // 0x3c90f0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c90f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c90f4:
    // 0x3c90f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c90f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c90f8:
    // 0x3c90f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c90f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c90fc:
    // 0x3c90fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c90fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9100:
    // 0x3c9100: 0xc136b18  jal         func_4DAC60
label_3c9104:
    if (ctx->pc == 0x3C9104u) {
        ctx->pc = 0x3C9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9100u;
        // 0x3c9104: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9108u;
        goto label_3c9108;
    }
    ctx->pc = 0x3C9100u;
    SET_GPR_U32(ctx, 31, 0x3C9108u);
    ctx->pc = 0x3C9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9100u;
    // 0x3c9104: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9100u, 0x3C9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9108u;
label_3c9108:
    // 0x3c9108: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c910c:
    // 0x3c910c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9110:
    // 0x3c9110: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c9110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c9114:
    // 0x3c9114: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9118:
    // 0x3c9118: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c911c:
    // 0x3c911c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9120:
    // 0x3c9120: 0xc136b24  jal         func_4DAC90
label_3c9124:
    if (ctx->pc == 0x3C9124u) {
        ctx->pc = 0x3C9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9120u;
        // 0x3c9124: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9128u;
        goto label_3c9128;
    }
    ctx->pc = 0x3C9120u;
    SET_GPR_U32(ctx, 31, 0x3C9128u);
    ctx->pc = 0x3C9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9120u;
    // 0x3c9124: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9120u, 0x3C9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9128u;
label_3c9128:
    // 0x3c9128: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c912c:
    // 0x3c912c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9130:
    // 0x3c9130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9134:
    // 0x3c9134: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c9134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9138:
    // 0x3c9138: 0xc136b18  jal         func_4DAC60
label_3c913c:
    if (ctx->pc == 0x3C913Cu) {
        ctx->pc = 0x3C913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9138u;
        // 0x3c913c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9140u;
        goto label_3c9140;
    }
    ctx->pc = 0x3C9138u;
    SET_GPR_U32(ctx, 31, 0x3C9140u);
    ctx->pc = 0x3C913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9138u;
    // 0x3c913c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9138u, 0x3C9140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9140u;
label_3c9140:
    // 0x3c9140: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9144:
    // 0x3c9144: 0x27b004b0  addiu       $s0, $sp, 0x4B0
    ctx->pc = 0x3c9144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3c9148:
    // 0x3c9148: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c9148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c914c:
    // 0x3c914c: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3c914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c9150:
    // 0x3c9150: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9154:
    // 0x3c9154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9158:
    // 0x3c9158: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c9158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c915c:
    // 0x3c915c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9160:
    // 0x3c9160: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c9160u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9164:
    // 0x3c9164: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c9168:
    // 0x3c9168: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c916c:
    // 0x3c916c: 0xc136b18  jal         func_4DAC60
label_3c9170:
    if (ctx->pc == 0x3C9170u) {
        ctx->pc = 0x3C9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C916Cu;
        // 0x3c9170: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9174u;
        goto label_3c9174;
    }
    ctx->pc = 0x3C916Cu;
    SET_GPR_U32(ctx, 31, 0x3C9174u);
    ctx->pc = 0x3C9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C916Cu;
    // 0x3c9170: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C916Cu, 0x3C9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9174u;
label_3c9174:
    // 0x3c9174: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9178:
    // 0x3c9178: 0x27b504c0  addiu       $s5, $sp, 0x4C0
    ctx->pc = 0x3c9178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3c917c:
    // 0x3c917c: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9180:
    // 0x3c9180: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c9180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9184:
    // 0x3c9184: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9188:
    // 0x3c9188: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c918c:
    // 0x3c918c: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c9190:
    // 0x3c9190: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9194:
    // 0x3c9194: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9198:
    // 0x3c9198: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c919c:
    // 0x3c919c: 0xc0e9fa6  jal         func_3A7E98
label_3c91a0:
    if (ctx->pc == 0x3C91A0u) {
        ctx->pc = 0x3C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C919Cu;
        // 0x3c91a0: 0xe7b504b0  swc1        $f21, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C91A4u;
        goto label_3c91a4;
    }
    ctx->pc = 0x3C919Cu;
    SET_GPR_U32(ctx, 31, 0x3C91A4u);
    ctx->pc = 0x3C91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C919Cu;
    // 0x3c91a0: 0xe7b504b0  swc1        $f21, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C919Cu, 0x3C91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C91A4u;
label_3c91a4:
    // 0x3c91a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c91a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c91a8:
    // 0x3c91a8: 0xc0f15bc  jal         func_3C56F0
label_3c91ac:
    if (ctx->pc == 0x3C91ACu) {
        ctx->pc = 0x3C91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91A8u;
        // 0x3c91ac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C91B0u;
        goto label_3c91b0;
    }
    ctx->pc = 0x3C91A8u;
    SET_GPR_U32(ctx, 31, 0x3C91B0u);
    ctx->pc = 0x3C91ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C91A8u;
    // 0x3c91ac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C91A8u, 0x3C91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C91B0u;
label_3c91b0:
    // 0x3c91b0: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3c91b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_3c91b4:
    // 0x3c91b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c91b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c91b8:
    // 0x3c91b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c91b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c91bc:
    // 0x3c91bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c91bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c91c0:
    // 0x3c91c0: 0xc136b24  jal         func_4DAC90
label_3c91c4:
    if (ctx->pc == 0x3C91C4u) {
        ctx->pc = 0x3C91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91C0u;
        // 0x3c91c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C91C8u;
        goto label_3c91c8;
    }
    ctx->pc = 0x3C91C0u;
    SET_GPR_U32(ctx, 31, 0x3C91C8u);
    ctx->pc = 0x3C91C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C91C0u;
    // 0x3c91c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C91C0u, 0x3C91C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C91C8u;
label_3c91c8:
    // 0x3c91c8: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c91c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c91cc:
    // 0x3c91cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c91ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c91d0:
    // 0x3c91d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c91d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c91d4:
    // 0x3c91d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c91d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c91d8:
    // 0x3c91d8: 0xc136b18  jal         func_4DAC60
label_3c91dc:
    if (ctx->pc == 0x3C91DCu) {
        ctx->pc = 0x3C91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91D8u;
        // 0x3c91dc: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C91E0u;
        goto label_3c91e0;
    }
    ctx->pc = 0x3C91D8u;
    SET_GPR_U32(ctx, 31, 0x3C91E0u);
    ctx->pc = 0x3C91DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C91D8u;
    // 0x3c91dc: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C91D8u, 0x3C91E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C91E0u;
label_3c91e0:
    // 0x3c91e0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c91e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c91e4:
    // 0x3c91e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c91e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c91e8:
    // 0x3c91e8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c91e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c91ec:
    // 0x3c91ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c91ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c91f0:
    // 0x3c91f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c91f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c91f4:
    // 0x3c91f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c91f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c91f8:
    // 0x3c91f8: 0xc136b24  jal         func_4DAC90
label_3c91fc:
    if (ctx->pc == 0x3C91FCu) {
        ctx->pc = 0x3C91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91F8u;
        // 0x3c91fc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9200u;
        goto label_3c9200;
    }
    ctx->pc = 0x3C91F8u;
    SET_GPR_U32(ctx, 31, 0x3C9200u);
    ctx->pc = 0x3C91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C91F8u;
    // 0x3c91fc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C91F8u, 0x3C9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9200u;
label_3c9200:
    // 0x3c9200: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9204:
    // 0x3c9204: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c9204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9208:
    // 0x3c9208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c920c:
    // 0x3c920c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c920cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9210:
    // 0x3c9210: 0xc136b18  jal         func_4DAC60
label_3c9214:
    if (ctx->pc == 0x3C9214u) {
        ctx->pc = 0x3C9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9210u;
        // 0x3c9214: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9218u;
        goto label_3c9218;
    }
    ctx->pc = 0x3C9210u;
    SET_GPR_U32(ctx, 31, 0x3C9218u);
    ctx->pc = 0x3C9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9210u;
    // 0x3c9214: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9210u, 0x3C9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9218u;
label_3c9218:
    // 0x3c9218: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c921c:
    // 0x3c921c: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3c921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c9220:
    // 0x3c9220: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c9220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c9224:
    // 0x3c9224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9228:
    // 0x3c9228: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c922c:
    // 0x3c922c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c922cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9230:
    // 0x3c9230: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c9230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c9234:
    // 0x3c9234: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c9234u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9238:
    // 0x3c9238: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c923c:
    // 0x3c923c: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c923cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9240:
    // 0x3c9240: 0xc136b18  jal         func_4DAC60
label_3c9244:
    if (ctx->pc == 0x3C9244u) {
        ctx->pc = 0x3C9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9240u;
        // 0x3c9244: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9248u;
        goto label_3c9248;
    }
    ctx->pc = 0x3C9240u;
    SET_GPR_U32(ctx, 31, 0x3C9248u);
    ctx->pc = 0x3C9244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9240u;
    // 0x3c9244: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9240u, 0x3C9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9248u;
label_3c9248:
    // 0x3c9248: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c924c:
    // 0x3c924c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c924cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9250:
    // 0x3c9250: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9254:
    // 0x3c9254: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9258:
    // 0x3c9258: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c925c:
    // 0x3c925c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9260:
    // 0x3c9260: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c9260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c9264:
    // 0x3c9264: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9268:
    // 0x3c9268: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c926c:
    // 0x3c926c: 0xc0e9fa6  jal         func_3A7E98
label_3c9270:
    if (ctx->pc == 0x3C9270u) {
        ctx->pc = 0x3C9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C926Cu;
        // 0x3c9270: 0xe7b504b0  swc1        $f21, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9274u;
        goto label_3c9274;
    }
    ctx->pc = 0x3C926Cu;
    SET_GPR_U32(ctx, 31, 0x3C9274u);
    ctx->pc = 0x3C9270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C926Cu;
    // 0x3c9270: 0xe7b504b0  swc1        $f21, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C926Cu, 0x3C9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9274u;
label_3c9274:
    // 0x3c9274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9278:
    // 0x3c9278: 0xc0f15bc  jal         func_3C56F0
label_3c927c:
    if (ctx->pc == 0x3C927Cu) {
        ctx->pc = 0x3C927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9278u;
        // 0x3c927c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9280u;
        goto label_3c9280;
    }
    ctx->pc = 0x3C9278u;
    SET_GPR_U32(ctx, 31, 0x3C9280u);
    ctx->pc = 0x3C927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9278u;
    // 0x3c927c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9278u, 0x3C9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9280u;
label_3c9280:
    // 0x3c9280: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c9280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c9284:
    // 0x3c9284: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9288:
    // 0x3c9288: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c928c:
    // 0x3c928c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9290:
    // 0x3c9290: 0xc136b24  jal         func_4DAC90
label_3c9294:
    if (ctx->pc == 0x3C9294u) {
        ctx->pc = 0x3C9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9290u;
        // 0x3c9294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9298u;
        goto label_3c9298;
    }
    ctx->pc = 0x3C9290u;
    SET_GPR_U32(ctx, 31, 0x3C9298u);
    ctx->pc = 0x3C9294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9290u;
    // 0x3c9294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9290u, 0x3C9298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9298u;
label_3c9298:
    // 0x3c9298: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c929c:
    // 0x3c929c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c92a0:
    // 0x3c92a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c92a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c92a4:
    // 0x3c92a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c92a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c92a8:
    // 0x3c92a8: 0xc136b18  jal         func_4DAC60
label_3c92ac:
    if (ctx->pc == 0x3C92ACu) {
        ctx->pc = 0x3C92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C92A8u;
        // 0x3c92ac: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C92B0u;
        goto label_3c92b0;
    }
    ctx->pc = 0x3C92A8u;
    SET_GPR_U32(ctx, 31, 0x3C92B0u);
    ctx->pc = 0x3C92ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C92A8u;
    // 0x3c92ac: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C92A8u, 0x3C92B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C92B0u;
label_3c92b0:
    // 0x3c92b0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c92b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c92b4:
    // 0x3c92b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c92b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c92b8:
    // 0x3c92b8: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3c92b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_3c92bc:
    // 0x3c92bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c92bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c92c0:
    // 0x3c92c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c92c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c92c4:
    // 0x3c92c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c92c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c92c8:
    // 0x3c92c8: 0xc136b24  jal         func_4DAC90
label_3c92cc:
    if (ctx->pc == 0x3C92CCu) {
        ctx->pc = 0x3C92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C92C8u;
        // 0x3c92cc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C92D0u;
        goto label_3c92d0;
    }
    ctx->pc = 0x3C92C8u;
    SET_GPR_U32(ctx, 31, 0x3C92D0u);
    ctx->pc = 0x3C92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C92C8u;
    // 0x3c92cc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C92C8u, 0x3C92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C92D0u;
label_3c92d0:
    // 0x3c92d0: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c92d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c92d4:
    // 0x3c92d4: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c92d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c92d8:
    // 0x3c92d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c92dc:
    // 0x3c92dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c92dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c92e0:
    // 0x3c92e0: 0xc136b18  jal         func_4DAC60
label_3c92e4:
    if (ctx->pc == 0x3C92E4u) {
        ctx->pc = 0x3C92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C92E0u;
        // 0x3c92e4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C92E8u;
        goto label_3c92e8;
    }
    ctx->pc = 0x3C92E0u;
    SET_GPR_U32(ctx, 31, 0x3C92E8u);
    ctx->pc = 0x3C92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C92E0u;
    // 0x3c92e4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C92E0u, 0x3C92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C92E8u;
label_3c92e8:
    // 0x3c92e8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c92e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c92ec:
    // 0x3c92ec: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3c92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c92f0:
    // 0x3c92f0: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c92f4:
    // 0x3c92f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c92f8:
    // 0x3c92f8: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c92f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c92fc:
    // 0x3c92fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c92fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9300:
    // 0x3c9300: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c9300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c9304:
    // 0x3c9304: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c9304u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9308:
    // 0x3c9308: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c930c:
    // 0x3c930c: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c930cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9310:
    // 0x3c9310: 0xc136b18  jal         func_4DAC60
label_3c9314:
    if (ctx->pc == 0x3C9314u) {
        ctx->pc = 0x3C9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9310u;
        // 0x3c9314: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9318u;
        goto label_3c9318;
    }
    ctx->pc = 0x3C9310u;
    SET_GPR_U32(ctx, 31, 0x3C9318u);
    ctx->pc = 0x3C9314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9310u;
    // 0x3c9314: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9310u, 0x3C9318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9318u;
label_3c9318:
    // 0x3c9318: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c931c:
    // 0x3c931c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c931cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9320:
    // 0x3c9320: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9324:
    // 0x3c9324: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9328:
    // 0x3c9328: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c932c:
    // 0x3c932c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9330:
    // 0x3c9330: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c9330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c9334:
    // 0x3c9334: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9338:
    // 0x3c9338: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c933c:
    // 0x3c933c: 0xc0e9fa6  jal         func_3A7E98
label_3c9340:
    if (ctx->pc == 0x3C9340u) {
        ctx->pc = 0x3C9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C933Cu;
        // 0x3c9340: 0xe7b504b0  swc1        $f21, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9344u;
        goto label_3c9344;
    }
    ctx->pc = 0x3C933Cu;
    SET_GPR_U32(ctx, 31, 0x3C9344u);
    ctx->pc = 0x3C9340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C933Cu;
    // 0x3c9340: 0xe7b504b0  swc1        $f21, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C933Cu, 0x3C9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9344u;
label_3c9344:
    // 0x3c9344: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9348:
    // 0x3c9348: 0xc0f15bc  jal         func_3C56F0
label_3c934c:
    if (ctx->pc == 0x3C934Cu) {
        ctx->pc = 0x3C934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9348u;
        // 0x3c934c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9350u;
        goto label_3c9350;
    }
    ctx->pc = 0x3C9348u;
    SET_GPR_U32(ctx, 31, 0x3C9350u);
    ctx->pc = 0x3C934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9348u;
    // 0x3c934c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9348u, 0x3C9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9350u;
label_3c9350:
    // 0x3c9350: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3c9350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_3c9354:
    // 0x3c9354: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9358:
    // 0x3c9358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c935c:
    // 0x3c935c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9360:
    // 0x3c9360: 0xc136b24  jal         func_4DAC90
label_3c9364:
    if (ctx->pc == 0x3C9364u) {
        ctx->pc = 0x3C9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9360u;
        // 0x3c9364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9368u;
        goto label_3c9368;
    }
    ctx->pc = 0x3C9360u;
    SET_GPR_U32(ctx, 31, 0x3C9368u);
    ctx->pc = 0x3C9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9360u;
    // 0x3c9364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9360u, 0x3C9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9368u;
label_3c9368:
    // 0x3c9368: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c936c:
    // 0x3c936c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9370:
    // 0x3c9370: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9374:
    // 0x3c9374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9378:
    // 0x3c9378: 0xc136b18  jal         func_4DAC60
label_3c937c:
    if (ctx->pc == 0x3C937Cu) {
        ctx->pc = 0x3C937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9378u;
        // 0x3c937c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9380u;
        goto label_3c9380;
    }
    ctx->pc = 0x3C9378u;
    SET_GPR_U32(ctx, 31, 0x3C9380u);
    ctx->pc = 0x3C937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9378u;
    // 0x3c937c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9378u, 0x3C9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9380u;
label_3c9380:
    // 0x3c9380: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9384:
    // 0x3c9384: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9388:
    // 0x3c9388: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3c9388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_3c938c:
    // 0x3c938c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c938cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9390:
    // 0x3c9390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9394:
    // 0x3c9394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9398:
    // 0x3c9398: 0xc136b24  jal         func_4DAC90
label_3c939c:
    if (ctx->pc == 0x3C939Cu) {
        ctx->pc = 0x3C939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9398u;
        // 0x3c939c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C93A0u;
        goto label_3c93a0;
    }
    ctx->pc = 0x3C9398u;
    SET_GPR_U32(ctx, 31, 0x3C93A0u);
    ctx->pc = 0x3C939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9398u;
    // 0x3c939c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9398u, 0x3C93A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C93A0u;
label_3c93a0:
    // 0x3c93a0: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c93a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c93a4:
    // 0x3c93a4: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c93a8:
    // 0x3c93a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c93a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c93ac:
    // 0x3c93ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c93acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c93b0:
    // 0x3c93b0: 0xc136b18  jal         func_4DAC60
label_3c93b4:
    if (ctx->pc == 0x3C93B4u) {
        ctx->pc = 0x3C93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93B0u;
        // 0x3c93b4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C93B8u;
        goto label_3c93b8;
    }
    ctx->pc = 0x3C93B0u;
    SET_GPR_U32(ctx, 31, 0x3C93B8u);
    ctx->pc = 0x3C93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C93B0u;
    // 0x3c93b4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C93B0u, 0x3C93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C93B8u;
label_3c93b8:
    // 0x3c93b8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c93b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c93bc:
    // 0x3c93bc: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3c93bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c93c0:
    // 0x3c93c0: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c93c4:
    // 0x3c93c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c93c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c93c8:
    // 0x3c93c8: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c93c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c93cc:
    // 0x3c93cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c93ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c93d0:
    // 0x3c93d0: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c93d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c93d4:
    // 0x3c93d4: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c93d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c93d8:
    // 0x3c93d8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c93d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c93dc:
    // 0x3c93dc: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c93dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c93e0:
    // 0x3c93e0: 0xc136b18  jal         func_4DAC60
label_3c93e4:
    if (ctx->pc == 0x3C93E4u) {
        ctx->pc = 0x3C93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93E0u;
        // 0x3c93e4: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C93E8u;
        goto label_3c93e8;
    }
    ctx->pc = 0x3C93E0u;
    SET_GPR_U32(ctx, 31, 0x3C93E8u);
    ctx->pc = 0x3C93E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C93E0u;
    // 0x3c93e4: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C93E0u, 0x3C93E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C93E8u;
label_3c93e8:
    // 0x3c93e8: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c93e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c93ec:
    // 0x3c93ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c93ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c93f0:
    // 0x3c93f0: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c93f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c93f4:
    // 0x3c93f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c93f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c93f8:
    // 0x3c93f8: 0xe7b504b0  swc1        $f21, 0x4B0($sp)
    ctx->pc = 0x3c93f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3c93fc:
    // 0x3c93fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c93fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9400:
    // 0x3c9400: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9404:
    // 0x3c9404: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9408:
    // 0x3c9408: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c9408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c940c:
    // 0x3c940c: 0xc0e9fa6  jal         func_3A7E98
label_3c9410:
    if (ctx->pc == 0x3C9410u) {
        ctx->pc = 0x3C9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C940Cu;
        // 0x3c9410: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9414u;
        goto label_3c9414;
    }
    ctx->pc = 0x3C940Cu;
    SET_GPR_U32(ctx, 31, 0x3C9414u);
    ctx->pc = 0x3C9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C940Cu;
    // 0x3c9410: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C940Cu, 0x3C9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9414u;
label_3c9414:
    // 0x3c9414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9418:
    // 0x3c9418: 0xc0f15bc  jal         func_3C56F0
label_3c941c:
    if (ctx->pc == 0x3C941Cu) {
        ctx->pc = 0x3C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9418u;
        // 0x3c941c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9420u;
        goto label_3c9420;
    }
    ctx->pc = 0x3C9418u;
    SET_GPR_U32(ctx, 31, 0x3C9420u);
    ctx->pc = 0x3C941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9418u;
    // 0x3c941c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9418u, 0x3C9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9420u;
label_3c9420:
    // 0x3c9420: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3c9420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3c9424:
    // 0x3c9424: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c9424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c9428:
    // 0x3c9428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c9428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c942c:
    // 0x3c942c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c942cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c9430:
    // 0x3c9430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9434:
    // 0x3c9434: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c9434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c9438:
    // 0x3c9438: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c9438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c943c:
    // 0x3c943c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9440:
    // 0x3c9440: 0xe6c10020  swc1        $f1, 0x20($s6)
    ctx->pc = 0x3c9440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_3c9444:
    // 0x3c9444: 0xc0e96a4  jal         func_3A5A90
label_3c9448:
    if (ctx->pc == 0x3C9448u) {
        ctx->pc = 0x3C9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9444u;
        // 0x3c9448: 0xe6c00024  swc1        $f0, 0x24($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C944Cu;
        goto label_3c944c;
    }
    ctx->pc = 0x3C9444u;
    SET_GPR_U32(ctx, 31, 0x3C944Cu);
    ctx->pc = 0x3C9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9444u;
    // 0x3c9448: 0xe6c00024  swc1        $f0, 0x24($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A90u, 0x3C9444u, 0x3C944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C944Cu;
label_3c944c:
    // 0x3c944c: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x3c944cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
label_3c9450:
    // 0x3c9450: 0x8fa404d4  lw          $a0, 0x4D4($sp)
    ctx->pc = 0x3c9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3c9454:
    // 0x3c9454: 0x108002b6  beqz        $a0, . + 4 + (0x2B6 << 2)
label_3c9458:
    if (ctx->pc == 0x3C9458u) {
        ctx->pc = 0x3C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9454u;
        // 0x3c9458: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C945Cu;
        goto label_3c945c;
    }
    ctx->pc = 0x3C9454u;
    {
        const bool branch_taken_0x3c9454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9454u;
        // 0x3c9458: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9454) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C945Cu;
label_3c945c:
    // 0x3c945c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c945cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c9460:
    // 0x3c9460: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x3c9460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_3c9464:
    // 0x3c9464: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9468:
    // 0x3c9468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c946c:
    // 0x3c946c: 0x26104510  addiu       $s0, $s0, 0x4510
    ctx->pc = 0x3c946cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17680));
label_3c9470:
    // 0x3c9470: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9474:
    // 0x3c9474: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9478:
    // 0x3c9478: 0x8fa204d0  lw          $v0, 0x4D0($sp)
    ctx->pc = 0x3c9478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c947c:
    // 0x3c947c: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3c947cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9480:
    // 0x3c9480: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c9480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c9484:
    // 0x3c9484: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9488:
    // 0x3c9488: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x3c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_3c948c:
    // 0x3c948c: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3c948cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c9490:
    // 0x3c9490: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3c9490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3c9494:
    // 0x3c9494: 0xc0e9fd0  jal         func_3A7F40
label_3c9498:
    if (ctx->pc == 0x3C9498u) {
        ctx->pc = 0x3C9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9494u;
        // 0x3c9498: 0x27a70460  addiu       $a3, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C949Cu;
        goto label_3c949c;
    }
    ctx->pc = 0x3C9494u;
    SET_GPR_U32(ctx, 31, 0x3C949Cu);
    ctx->pc = 0x3C9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9494u;
    // 0x3c9498: 0x27a70460  addiu       $a3, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C9494u, 0x3C949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C949Cu;
label_3c949c:
    // 0x3c949c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c94a0:
    // 0x3c94a0: 0x10000293  b           . + 4 + (0x293 << 2)
label_3c94a4:
    if (ctx->pc == 0x3C94A4u) {
        ctx->pc = 0x3C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94A0u;
        // 0x3c94a4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94A8u;
        goto label_3c94a8;
    }
    ctx->pc = 0x3C94A0u;
    {
        const bool branch_taken_0x3c94a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94A0u;
        // 0x3c94a4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94a0) {
            ctx->pc = 0x3C9EF0u;
            goto label_3c9ef0;
        }
    }
    ctx->pc = 0x3C94A8u;
label_3c94a8:
    // 0x3c94a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c94a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c94ac:
    // 0x3c94ac: 0x24a54530  addiu       $a1, $a1, 0x4530
    ctx->pc = 0x3c94acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17712));
label_3c94b0:
    // 0x3c94b0: 0xc10d6e8  jal         func_435BA0
label_3c94b4:
    if (ctx->pc == 0x3C94B4u) {
        ctx->pc = 0x3C94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94B0u;
        // 0x3c94b4: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94B8u;
        goto label_3c94b8;
    }
    ctx->pc = 0x3C94B0u;
    SET_GPR_U32(ctx, 31, 0x3C94B8u);
    ctx->pc = 0x3C94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C94B0u;
    // 0x3c94b4: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C94B0u, 0x3C94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C94B8u;
label_3c94b8:
    // 0x3c94b8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3c94bc:
    if (ctx->pc == 0x3C94BCu) {
        ctx->pc = 0x3C94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94B8u;
        // 0x3c94bc: 0x26254540  addiu       $a1, $s1, 0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94C0u;
        goto label_3c94c0;
    }
    ctx->pc = 0x3C94B8u;
    {
        const bool branch_taken_0x3c94b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94B8u;
        // 0x3c94bc: 0x26254540  addiu       $a1, $s1, 0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94b8) {
            ctx->pc = 0x3C94ECu;
            goto label_3c94ec;
        }
    }
    ctx->pc = 0x3C94C0u;
label_3c94c0:
    // 0x3c94c0: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3c94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c94c4:
    // 0x3c94c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3c94c8:
    if (ctx->pc == 0x3C94C8u) {
        ctx->pc = 0x3C94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94C4u;
        // 0x3c94c8: 0x26304540  addiu       $s0, $s1, 0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94CCu;
        goto label_3c94cc;
    }
    ctx->pc = 0x3C94C4u;
    {
        const bool branch_taken_0x3c94c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94C4u;
        // 0x3c94c8: 0x26304540  addiu       $s0, $s1, 0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94c4) {
            ctx->pc = 0x3C94ECu;
            goto label_3c94ec;
        }
    }
    ctx->pc = 0x3C94CCu;
label_3c94cc:
    // 0x3c94cc: 0x3c05bd66  lui         $a1, 0xBD66
    ctx->pc = 0x3c94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48486 << 16));
label_3c94d0:
    // 0x3c94d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c94d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c94d4:
    // 0x3c94d4: 0x34a5398b  ori         $a1, $a1, 0x398B
    ctx->pc = 0x3c94d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14731);
label_3c94d8:
    // 0x3c94d8: 0xc045cb2  jal         func_1172C8
label_3c94dc:
    if (ctx->pc == 0x3C94DCu) {
        ctx->pc = 0x3C94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94D8u;
        // 0x3c94dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94E0u;
        goto label_3c94e0;
    }
    ctx->pc = 0x3C94D8u;
    SET_GPR_U32(ctx, 31, 0x3C94E0u);
    ctx->pc = 0x3C94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C94D8u;
    // 0x3c94dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3C94D8u, 0x3C94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C94E0u;
label_3c94e0:
    // 0x3c94e0: 0xaec20014  sw          $v0, 0x14($s6)
    ctx->pc = 0x3c94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
label_3c94e4:
    // 0x3c94e4: 0x26304540  addiu       $s0, $s1, 0x4540
    ctx->pc = 0x3c94e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17728));
label_3c94e8:
    // 0x3c94e8: 0x26254540  addiu       $a1, $s1, 0x4540
    ctx->pc = 0x3c94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17728));
label_3c94ec:
    // 0x3c94ec: 0xc10d6e8  jal         func_435BA0
label_3c94f0:
    if (ctx->pc == 0x3C94F0u) {
        ctx->pc = 0x3C94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94ECu;
        // 0x3c94f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94F4u;
        goto label_3c94f4;
    }
    ctx->pc = 0x3C94ECu;
    SET_GPR_U32(ctx, 31, 0x3C94F4u);
    ctx->pc = 0x3C94F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C94ECu;
    // 0x3c94f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C94ECu, 0x3C94F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C94F4u;
label_3c94f4:
    // 0x3c94f4: 0x54400213  bnel        $v0, $zero, . + 4 + (0x213 << 2)
label_3c94f8:
    if (ctx->pc == 0x3C94F8u) {
        ctx->pc = 0x3C94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94F4u;
        // 0x3c94f8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C94FCu;
        goto label_3c94fc;
    }
    ctx->pc = 0x3C94F4u;
    {
        const bool branch_taken_0x3c94f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c94f4) {
            ctx->pc = 0x3C94F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C94F4u;
            // 0x3c94f8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9D44u;
            goto label_3c9d44;
        }
    }
    ctx->pc = 0x3C94FCu;
label_3c94fc:
    // 0x3c94fc: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x3c94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c9500:
    // 0x3c9500: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9504:
    // 0x3c9504: 0xafa404dc  sw          $a0, 0x4DC($sp)
    ctx->pc = 0x3c9504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1244), GPR_U32(ctx, 4));
label_3c9508:
    // 0x3c9508: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x3c9508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c950c:
    // 0x3c950c: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3c950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c9510:
    // 0x3c9510: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c9510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9514:
    // 0x3c9514: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3c9514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3c9518:
    // 0x3c9518: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c9518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c951c:
    // 0x3c951c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c951cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c9520:
    // 0x3c9520: 0x27be0440  addiu       $fp, $sp, 0x440
    ctx->pc = 0x3c9520u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c9524:
    // 0x3c9524: 0xafa404d8  sw          $a0, 0x4D8($sp)
    ctx->pc = 0x3c9524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1240), GPR_U32(ctx, 4));
label_3c9528:
    // 0x3c9528: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c9528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c952c:
    // 0x3c952c: 0x8fa704dc  lw          $a3, 0x4DC($sp)
    ctx->pc = 0x3c952cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9530:
    // 0x3c9530: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3c9530u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3c9534:
    // 0x3c9534: 0xafa30460  sw          $v1, 0x460($sp)
    ctx->pc = 0x3c9534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 3));
label_3c9538:
    // 0x3c9538: 0x26944500  addiu       $s4, $s4, 0x4500
    ctx->pc = 0x3c9538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17664));
label_3c953c:
    // 0x3c953c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9540:
    // 0x3c9540: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9544:
    // 0x3c9544: 0xe7b80450  swc1        $f24, 0x450($sp)
    ctx->pc = 0x3c9544u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3c9548:
    // 0x3c9548: 0xc0e9fa6  jal         func_3A7E98
label_3c954c:
    if (ctx->pc == 0x3C954Cu) {
        ctx->pc = 0x3C954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9548u;
        // 0x3c954c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9550u;
        goto label_3c9550;
    }
    ctx->pc = 0x3C9548u;
    SET_GPR_U32(ctx, 31, 0x3C9550u);
    ctx->pc = 0x3C954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9548u;
    // 0x3c954c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9548u, 0x3C9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9550u;
label_3c9550:
    // 0x3c9550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c9550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c9554:
    // 0x3c9554: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c9554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c9558:
    // 0x3c9558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c955c:
    // 0x3c955c: 0xc0f15bc  jal         func_3C56F0
label_3c9560:
    if (ctx->pc == 0x3C9560u) {
        ctx->pc = 0x3C9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C955Cu;
        // 0x3c9560: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9564u;
        goto label_3c9564;
    }
    ctx->pc = 0x3C955Cu;
    SET_GPR_U32(ctx, 31, 0x3C9564u);
    ctx->pc = 0x3C9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C955Cu;
    // 0x3c9560: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C955Cu, 0x3C9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9564u;
label_3c9564:
    // 0x3c9564: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x3c9564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_3c9568:
    // 0x3c9568: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c956c:
    // 0x3c956c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c956cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c9570:
    // 0x3c9570: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3c9570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3c9574:
    // 0x3c9574: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9578:
    // 0x3c9578: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c957c:
    // 0x3c957c: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c9580:
    // 0x3c9580: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3c9580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3c9584:
    // 0x3c9584: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c9584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c9588:
    // 0x3c9588: 0xc136b24  jal         func_4DAC90
label_3c958c:
    if (ctx->pc == 0x3C958Cu) {
        ctx->pc = 0x3C958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9588u;
        // 0x3c958c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9590u;
        goto label_3c9590;
    }
    ctx->pc = 0x3C9588u;
    SET_GPR_U32(ctx, 31, 0x3C9590u);
    ctx->pc = 0x3C958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9588u;
    // 0x3c958c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9588u, 0x3C9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9590u;
label_3c9590:
    // 0x3c9590: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c9590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c9594:
    // 0x3c9594: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c9594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c9598:
    // 0x3c9598: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c959c:
    // 0x3c959c: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c959cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c95a0:
    // 0x3c95a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c95a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c95a4:
    // 0x3c95a4: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c95a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c95a8:
    // 0x3c95a8: 0xc136b18  jal         func_4DAC60
label_3c95ac:
    if (ctx->pc == 0x3C95ACu) {
        ctx->pc = 0x3C95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C95A8u;
        // 0x3c95ac: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C95B0u;
        goto label_3c95b0;
    }
    ctx->pc = 0x3C95A8u;
    SET_GPR_U32(ctx, 31, 0x3C95B0u);
    ctx->pc = 0x3C95ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C95A8u;
    // 0x3c95ac: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C95A8u, 0x3C95B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C95B0u;
label_3c95b0:
    // 0x3c95b0: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c95b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c95b4:
    // 0x3c95b4: 0x27b00490  addiu       $s0, $sp, 0x490
    ctx->pc = 0x3c95b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c95b8:
    // 0x3c95b8: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c95bc:
    // 0x3c95bc: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3c95bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c95c0:
    // 0x3c95c0: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c95c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c95c4:
    // 0x3c95c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c95c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c95c8:
    // 0x3c95c8: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c95c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c95cc:
    // 0x3c95cc: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c95d0:
    // 0x3c95d0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3c95d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c95d4:
    // 0x3c95d4: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c95d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c95d8:
    // 0x3c95d8: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c95d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c95dc:
    // 0x3c95dc: 0xc136b18  jal         func_4DAC60
label_3c95e0:
    if (ctx->pc == 0x3C95E0u) {
        ctx->pc = 0x3C95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C95DCu;
        // 0x3c95e0: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C95E4u;
        goto label_3c95e4;
    }
    ctx->pc = 0x3C95DCu;
    SET_GPR_U32(ctx, 31, 0x3C95E4u);
    ctx->pc = 0x3C95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C95DCu;
    // 0x3c95e0: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C95DCu, 0x3C95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C95E4u;
label_3c95e4:
    // 0x3c95e4: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c95e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c95e8:
    // 0x3c95e8: 0x27b204a0  addiu       $s2, $sp, 0x4A0
    ctx->pc = 0x3c95e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3c95ec:
    // 0x3c95ec: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c95f0:
    // 0x3c95f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c95f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c95f4:
    // 0x3c95f4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c95f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c95f8:
    // 0x3c95f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c95f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c95fc:
    // 0x3c95fc: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c9600:
    // 0x3c9600: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9604:
    // 0x3c9604: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9608:
    // 0x3c9608: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c960c:
    // 0x3c960c: 0xc0e9fa6  jal         func_3A7E98
label_3c9610:
    if (ctx->pc == 0x3C9610u) {
        ctx->pc = 0x3C9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C960Cu;
        // 0x3c9610: 0xe7b40490  swc1        $f20, 0x490($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9614u;
        goto label_3c9614;
    }
    ctx->pc = 0x3C960Cu;
    SET_GPR_U32(ctx, 31, 0x3C9614u);
    ctx->pc = 0x3C9610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C960Cu;
    // 0x3c9610: 0xe7b40490  swc1        $f20, 0x490($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C960Cu, 0x3C9614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9614u;
label_3c9614:
    // 0x3c9614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9618:
    // 0x3c9618: 0xc0f15bc  jal         func_3C56F0
label_3c961c:
    if (ctx->pc == 0x3C961Cu) {
        ctx->pc = 0x3C961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9618u;
        // 0x3c961c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9620u;
        goto label_3c9620;
    }
    ctx->pc = 0x3C9618u;
    SET_GPR_U32(ctx, 31, 0x3C9620u);
    ctx->pc = 0x3C961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9618u;
    // 0x3c961c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9618u, 0x3C9620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9620u;
label_3c9620:
    // 0x3c9620: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3c9620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3c9624:
    // 0x3c9624: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9628:
    // 0x3c9628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c962c:
    // 0x3c962c: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c9630:
    // 0x3c9630: 0xc136b24  jal         func_4DAC90
label_3c9634:
    if (ctx->pc == 0x3C9634u) {
        ctx->pc = 0x3C9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9630u;
        // 0x3c9634: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9638u;
        goto label_3c9638;
    }
    ctx->pc = 0x3C9630u;
    SET_GPR_U32(ctx, 31, 0x3C9638u);
    ctx->pc = 0x3C9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9630u;
    // 0x3c9634: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9630u, 0x3C9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9638u;
label_3c9638:
    // 0x3c9638: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c963c:
    // 0x3c963c: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c9640:
    // 0x3c9640: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9644:
    // 0x3c9644: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c9644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9648:
    // 0x3c9648: 0xc136b18  jal         func_4DAC60
label_3c964c:
    if (ctx->pc == 0x3C964Cu) {
        ctx->pc = 0x3C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9648u;
        // 0x3c964c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9650u;
        goto label_3c9650;
    }
    ctx->pc = 0x3C9648u;
    SET_GPR_U32(ctx, 31, 0x3C9650u);
    ctx->pc = 0x3C964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9648u;
    // 0x3c964c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9648u, 0x3C9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9650u;
label_3c9650:
    // 0x3c9650: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9654:
    // 0x3c9654: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3c9654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c9658:
    // 0x3c9658: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c9658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c965c:
    // 0x3c965c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9660:
    // 0x3c9660: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9664:
    // 0x3c9664: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c9664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c9668:
    // 0x3c9668: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c9668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c966c:
    // 0x3c966c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3c966cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9670:
    // 0x3c9670: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c9674:
    // 0x3c9674: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9678:
    // 0x3c9678: 0xc136b18  jal         func_4DAC60
label_3c967c:
    if (ctx->pc == 0x3C967Cu) {
        ctx->pc = 0x3C967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9678u;
        // 0x3c967c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9680u;
        goto label_3c9680;
    }
    ctx->pc = 0x3C9678u;
    SET_GPR_U32(ctx, 31, 0x3C9680u);
    ctx->pc = 0x3C967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9678u;
    // 0x3c967c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9678u, 0x3C9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9680u;
label_3c9680:
    // 0x3c9680: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9684:
    // 0x3c9684: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c9684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9688:
    // 0x3c9688: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c968c:
    // 0x3c968c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c968cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9690:
    // 0x3c9690: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9694:
    // 0x3c9694: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9698:
    // 0x3c9698: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c9698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c969c:
    // 0x3c969c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c96a0:
    // 0x3c96a0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c96a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c96a4:
    // 0x3c96a4: 0xc0e9fa6  jal         func_3A7E98
label_3c96a8:
    if (ctx->pc == 0x3C96A8u) {
        ctx->pc = 0x3C96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C96A4u;
        // 0x3c96a8: 0xe7b40490  swc1        $f20, 0x490($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C96ACu;
        goto label_3c96ac;
    }
    ctx->pc = 0x3C96A4u;
    SET_GPR_U32(ctx, 31, 0x3C96ACu);
    ctx->pc = 0x3C96A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96A4u;
    // 0x3c96a8: 0xe7b40490  swc1        $f20, 0x490($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C96A4u, 0x3C96ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C96ACu;
label_3c96ac:
    // 0x3c96ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c96acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c96b0:
    // 0x3c96b0: 0xc0f15bc  jal         func_3C56F0
label_3c96b4:
    if (ctx->pc == 0x3C96B4u) {
        ctx->pc = 0x3C96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C96B0u;
        // 0x3c96b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C96B8u;
        goto label_3c96b8;
    }
    ctx->pc = 0x3C96B0u;
    SET_GPR_U32(ctx, 31, 0x3C96B8u);
    ctx->pc = 0x3C96B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96B0u;
    // 0x3c96b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C96B0u, 0x3C96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C96B8u;
label_3c96b8:
    // 0x3c96b8: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c96bc:
    // 0x3c96bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c96bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c96c0:
    // 0x3c96c0: 0xc136b24  jal         func_4DAC90
label_3c96c4:
    if (ctx->pc == 0x3C96C4u) {
        ctx->pc = 0x3C96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C96C0u;
        // 0x3c96c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C96C8u;
        goto label_3c96c8;
    }
    ctx->pc = 0x3C96C0u;
    SET_GPR_U32(ctx, 31, 0x3C96C8u);
    ctx->pc = 0x3C96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96C0u;
    // 0x3c96c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C96C0u, 0x3C96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C96C8u;
label_3c96c8:
    // 0x3c96c8: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c96c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c96cc:
    // 0x3c96cc: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c96d0:
    // 0x3c96d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c96d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c96d4:
    // 0x3c96d4: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c96d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c96d8:
    // 0x3c96d8: 0xc136b18  jal         func_4DAC60
label_3c96dc:
    if (ctx->pc == 0x3C96DCu) {
        ctx->pc = 0x3C96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C96D8u;
        // 0x3c96dc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C96E0u;
        goto label_3c96e0;
    }
    ctx->pc = 0x3C96D8u;
    SET_GPR_U32(ctx, 31, 0x3C96E0u);
    ctx->pc = 0x3C96DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96D8u;
    // 0x3c96dc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C96D8u, 0x3C96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C96E0u;
label_3c96e0:
    // 0x3c96e0: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c96e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c96e4:
    // 0x3c96e4: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3c96e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c96e8:
    // 0x3c96e8: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c96ec:
    // 0x3c96ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c96ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c96f0:
    // 0x3c96f0: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c96f4:
    // 0x3c96f4: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c96f8:
    // 0x3c96f8: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c96f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c96fc:
    // 0x3c96fc: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c96fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9700:
    // 0x3c9700: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c9704:
    // 0x3c9704: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9708:
    // 0x3c9708: 0xc136b18  jal         func_4DAC60
label_3c970c:
    if (ctx->pc == 0x3C970Cu) {
        ctx->pc = 0x3C970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9708u;
        // 0x3c970c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9710u;
        goto label_3c9710;
    }
    ctx->pc = 0x3C9708u;
    SET_GPR_U32(ctx, 31, 0x3C9710u);
    ctx->pc = 0x3C970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9708u;
    // 0x3c970c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9708u, 0x3C9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9710u;
label_3c9710:
    // 0x3c9710: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9714:
    // 0x3c9714: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c9714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9718:
    // 0x3c9718: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c971c:
    // 0x3c971c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c971cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9720:
    // 0x3c9720: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9724:
    // 0x3c9724: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9728:
    // 0x3c9728: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c9728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c972c:
    // 0x3c972c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c972cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9730:
    // 0x3c9730: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9734:
    // 0x3c9734: 0xc0e9fa6  jal         func_3A7E98
label_3c9738:
    if (ctx->pc == 0x3C9738u) {
        ctx->pc = 0x3C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9734u;
        // 0x3c9738: 0xe7b70490  swc1        $f23, 0x490($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C973Cu;
        goto label_3c973c;
    }
    ctx->pc = 0x3C9734u;
    SET_GPR_U32(ctx, 31, 0x3C973Cu);
    ctx->pc = 0x3C9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9734u;
    // 0x3c9738: 0xe7b70490  swc1        $f23, 0x490($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9734u, 0x3C973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C973Cu;
label_3c973c:
    // 0x3c973c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c973cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9740:
    // 0x3c9740: 0xc0f15bc  jal         func_3C56F0
label_3c9744:
    if (ctx->pc == 0x3C9744u) {
        ctx->pc = 0x3C9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9740u;
        // 0x3c9744: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9748u;
        goto label_3c9748;
    }
    ctx->pc = 0x3C9740u;
    SET_GPR_U32(ctx, 31, 0x3C9748u);
    ctx->pc = 0x3C9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9740u;
    // 0x3c9744: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9740u, 0x3C9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9748u;
label_3c9748:
    // 0x3c9748: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3c9748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3c974c:
    // 0x3c974c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c974cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9750:
    // 0x3c9750: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c9750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c9754:
    // 0x3c9754: 0xc136b24  jal         func_4DAC90
label_3c9758:
    if (ctx->pc == 0x3C9758u) {
        ctx->pc = 0x3C9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9754u;
        // 0x3c9758: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C975Cu;
        goto label_3c975c;
    }
    ctx->pc = 0x3C9754u;
    SET_GPR_U32(ctx, 31, 0x3C975Cu);
    ctx->pc = 0x3C9758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9754u;
    // 0x3c9758: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9754u, 0x3C975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C975Cu;
label_3c975c:
    // 0x3c975c: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c975cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9760:
    // 0x3c9760: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c9764:
    // 0x3c9764: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9768:
    // 0x3c9768: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c9768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c976c:
    // 0x3c976c: 0xc136b18  jal         func_4DAC60
label_3c9770:
    if (ctx->pc == 0x3C9770u) {
        ctx->pc = 0x3C9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C976Cu;
        // 0x3c9770: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9774u;
        goto label_3c9774;
    }
    ctx->pc = 0x3C976Cu;
    SET_GPR_U32(ctx, 31, 0x3C9774u);
    ctx->pc = 0x3C9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C976Cu;
    // 0x3c9770: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C976Cu, 0x3C9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9774u;
label_3c9774:
    // 0x3c9774: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9778:
    // 0x3c9778: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3c9778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c977c:
    // 0x3c977c: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c977cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9780:
    // 0x3c9780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9784:
    // 0x3c9784: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9788:
    // 0x3c9788: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c9788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c978c:
    // 0x3c978c: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c978cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c9790:
    // 0x3c9790: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c9790u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9794:
    // 0x3c9794: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c9798:
    // 0x3c9798: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c979c:
    // 0x3c979c: 0xc136b18  jal         func_4DAC60
label_3c97a0:
    if (ctx->pc == 0x3C97A0u) {
        ctx->pc = 0x3C97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C979Cu;
        // 0x3c97a0: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97A4u;
        goto label_3c97a4;
    }
    ctx->pc = 0x3C979Cu;
    SET_GPR_U32(ctx, 31, 0x3C97A4u);
    ctx->pc = 0x3C97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C979Cu;
    // 0x3c97a0: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C979Cu, 0x3C97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C97A4u;
label_3c97a4:
    // 0x3c97a4: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c97a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c97a8:
    // 0x3c97a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c97a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c97ac:
    // 0x3c97ac: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c97acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c97b0:
    // 0x3c97b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c97b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c97b4:
    // 0x3c97b4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c97b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c97b8:
    // 0x3c97b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c97b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c97bc:
    // 0x3c97bc: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c97c0:
    // 0x3c97c0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c97c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c97c4:
    // 0x3c97c4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c97c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c97c8:
    // 0x3c97c8: 0xc0e9fa6  jal         func_3A7E98
label_3c97cc:
    if (ctx->pc == 0x3C97CCu) {
        ctx->pc = 0x3C97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C97C8u;
        // 0x3c97cc: 0xe7b70490  swc1        $f23, 0x490($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97D0u;
        goto label_3c97d0;
    }
    ctx->pc = 0x3C97C8u;
    SET_GPR_U32(ctx, 31, 0x3C97D0u);
    ctx->pc = 0x3C97CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C97C8u;
    // 0x3c97cc: 0xe7b70490  swc1        $f23, 0x490($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C97C8u, 0x3C97D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C97D0u;
label_3c97d0:
    // 0x3c97d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c97d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c97d4:
    // 0x3c97d4: 0xc0f15bc  jal         func_3C56F0
label_3c97d8:
    if (ctx->pc == 0x3C97D8u) {
        ctx->pc = 0x3C97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C97D4u;
        // 0x3c97d8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97DCu;
        goto label_3c97dc;
    }
    ctx->pc = 0x3C97D4u;
    SET_GPR_U32(ctx, 31, 0x3C97DCu);
    ctx->pc = 0x3C97D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C97D4u;
    // 0x3c97d8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C97D4u, 0x3C97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C97DCu;
label_3c97dc:
    // 0x3c97dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c97dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c97e0:
    // 0x3c97e0: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3c97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c97e4:
    // 0x3c97e4: 0xc136b24  jal         func_4DAC90
label_3c97e8:
    if (ctx->pc == 0x3C97E8u) {
        ctx->pc = 0x3C97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C97E4u;
        // 0x3c97e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97ECu;
        goto label_3c97ec;
    }
    ctx->pc = 0x3C97E4u;
    SET_GPR_U32(ctx, 31, 0x3C97ECu);
    ctx->pc = 0x3C97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C97E4u;
    // 0x3c97e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C97E4u, 0x3C97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C97ECu;
label_3c97ec:
    // 0x3c97ec: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c97ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c97f0:
    // 0x3c97f0: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3c97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c97f4:
    // 0x3c97f4: 0x8fa604dc  lw          $a2, 0x4DC($sp)
    ctx->pc = 0x3c97f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c97f8:
    // 0x3c97f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c97f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c97fc:
    // 0x3c97fc: 0xc136b18  jal         func_4DAC60
label_3c9800:
    if (ctx->pc == 0x3C9800u) {
        ctx->pc = 0x3C9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C97FCu;
        // 0x3c9800: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9804u;
        goto label_3c9804;
    }
    ctx->pc = 0x3C97FCu;
    SET_GPR_U32(ctx, 31, 0x3C9804u);
    ctx->pc = 0x3C9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C97FCu;
    // 0x3c9800: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C97FCu, 0x3C9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9804u;
label_3c9804:
    // 0x3c9804: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c9804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c9808:
    // 0x3c9808: 0x27b30480  addiu       $s3, $sp, 0x480
    ctx->pc = 0x3c9808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c980c:
    // 0x3c980c: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9810:
    // 0x3c9810: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c9810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9814:
    // 0x3c9814: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9818:
    // 0x3c9818: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3c9818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c981c:
    // 0x3c981c: 0xafa30480  sw          $v1, 0x480($sp)
    ctx->pc = 0x3c981cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 3));
label_3c9820:
    // 0x3c9820: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9824:
    // 0x3c9824: 0xe7b80470  swc1        $f24, 0x470($sp)
    ctx->pc = 0x3c9824u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3c9828:
    // 0x3c9828: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c982c:
    // 0x3c982c: 0xc0e9fa6  jal         func_3A7E98
label_3c9830:
    if (ctx->pc == 0x3C9830u) {
        ctx->pc = 0x3C9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C982Cu;
        // 0x3c9830: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9834u;
        goto label_3c9834;
    }
    ctx->pc = 0x3C982Cu;
    SET_GPR_U32(ctx, 31, 0x3C9834u);
    ctx->pc = 0x3C9830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C982Cu;
    // 0x3c9830: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C982Cu, 0x3C9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9834u;
label_3c9834:
    // 0x3c9834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9838:
    // 0x3c9838: 0xc0f15bc  jal         func_3C56F0
label_3c983c:
    if (ctx->pc == 0x3C983Cu) {
        ctx->pc = 0x3C983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9838u;
        // 0x3c983c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9840u;
        goto label_3c9840;
    }
    ctx->pc = 0x3C9838u;
    SET_GPR_U32(ctx, 31, 0x3C9840u);
    ctx->pc = 0x3C983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9838u;
    // 0x3c983c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9838u, 0x3C9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9840u;
label_3c9840:
    // 0x3c9840: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3c9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3c9844:
    // 0x3c9844: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9848:
    // 0x3c9848: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c984c:
    // 0x3c984c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9850:
    // 0x3c9850: 0xc136b24  jal         func_4DAC90
label_3c9854:
    if (ctx->pc == 0x3C9854u) {
        ctx->pc = 0x3C9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9850u;
        // 0x3c9854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9858u;
        goto label_3c9858;
    }
    ctx->pc = 0x3C9850u;
    SET_GPR_U32(ctx, 31, 0x3C9858u);
    ctx->pc = 0x3C9854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9850u;
    // 0x3c9854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9850u, 0x3C9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9858u;
label_3c9858:
    // 0x3c9858: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c985c:
    // 0x3c985c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9860:
    // 0x3c9860: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9864:
    // 0x3c9864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9868:
    // 0x3c9868: 0xc136b18  jal         func_4DAC60
label_3c986c:
    if (ctx->pc == 0x3C986Cu) {
        ctx->pc = 0x3C986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9868u;
        // 0x3c986c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9870u;
        goto label_3c9870;
    }
    ctx->pc = 0x3C9868u;
    SET_GPR_U32(ctx, 31, 0x3C9870u);
    ctx->pc = 0x3C986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9868u;
    // 0x3c986c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9868u, 0x3C9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9870u;
label_3c9870:
    // 0x3c9870: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9874:
    // 0x3c9874: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9878:
    // 0x3c9878: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3c9878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3c987c:
    // 0x3c987c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c987cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9880:
    // 0x3c9880: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9884:
    // 0x3c9884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9888:
    // 0x3c9888: 0xc136b24  jal         func_4DAC90
label_3c988c:
    if (ctx->pc == 0x3C988Cu) {
        ctx->pc = 0x3C988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9888u;
        // 0x3c988c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9890u;
        goto label_3c9890;
    }
    ctx->pc = 0x3C9888u;
    SET_GPR_U32(ctx, 31, 0x3C9890u);
    ctx->pc = 0x3C988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9888u;
    // 0x3c988c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9888u, 0x3C9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9890u;
label_3c9890:
    // 0x3c9890: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9894:
    // 0x3c9894: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c9894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9898:
    // 0x3c9898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c989c:
    // 0x3c989c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c989cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c98a0:
    // 0x3c98a0: 0xc136b18  jal         func_4DAC60
label_3c98a4:
    if (ctx->pc == 0x3C98A4u) {
        ctx->pc = 0x3C98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C98A0u;
        // 0x3c98a4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C98A8u;
        goto label_3c98a8;
    }
    ctx->pc = 0x3C98A0u;
    SET_GPR_U32(ctx, 31, 0x3C98A8u);
    ctx->pc = 0x3C98A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C98A0u;
    // 0x3c98a4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C98A0u, 0x3C98A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C98A8u;
label_3c98a8:
    // 0x3c98a8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c98a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c98ac:
    // 0x3c98ac: 0x27b104b0  addiu       $s1, $sp, 0x4B0
    ctx->pc = 0x3c98acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3c98b0:
    // 0x3c98b0: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c98b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c98b4:
    // 0x3c98b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c98b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c98b8:
    // 0x3c98b8: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c98b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c98bc:
    // 0x3c98bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c98bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c98c0:
    // 0x3c98c0: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c98c4:
    // 0x3c98c4: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c98c8:
    // 0x3c98c8: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3c98c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c98cc:
    // 0x3c98cc: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c98ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c98d0:
    // 0x3c98d0: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c98d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c98d4:
    // 0x3c98d4: 0xc136b18  jal         func_4DAC60
label_3c98d8:
    if (ctx->pc == 0x3C98D8u) {
        ctx->pc = 0x3C98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C98D4u;
        // 0x3c98d8: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C98DCu;
        goto label_3c98dc;
    }
    ctx->pc = 0x3C98D4u;
    SET_GPR_U32(ctx, 31, 0x3C98DCu);
    ctx->pc = 0x3C98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C98D4u;
    // 0x3c98d8: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C98D4u, 0x3C98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C98DCu;
label_3c98dc:
    // 0x3c98dc: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c98dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c98e0:
    // 0x3c98e0: 0x27b504c0  addiu       $s5, $sp, 0x4C0
    ctx->pc = 0x3c98e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3c98e4:
    // 0x3c98e4: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c98e8:
    // 0x3c98e8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c98e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c98ec:
    // 0x3c98ec: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c98f0:
    // 0x3c98f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c98f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c98f4:
    // 0x3c98f4: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c98f8:
    // 0x3c98f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c98f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c98fc:
    // 0x3c98fc: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c98fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9900:
    // 0x3c9900: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9904:
    // 0x3c9904: 0xc0e9fa6  jal         func_3A7E98
label_3c9908:
    if (ctx->pc == 0x3C9908u) {
        ctx->pc = 0x3C9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9904u;
        // 0x3c9908: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C990Cu;
        goto label_3c990c;
    }
    ctx->pc = 0x3C9904u;
    SET_GPR_U32(ctx, 31, 0x3C990Cu);
    ctx->pc = 0x3C9908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9904u;
    // 0x3c9908: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9904u, 0x3C990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C990Cu;
label_3c990c:
    // 0x3c990c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9910:
    // 0x3c9910: 0xc0f15bc  jal         func_3C56F0
label_3c9914:
    if (ctx->pc == 0x3C9914u) {
        ctx->pc = 0x3C9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9910u;
        // 0x3c9914: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9918u;
        goto label_3c9918;
    }
    ctx->pc = 0x3C9910u;
    SET_GPR_U32(ctx, 31, 0x3C9918u);
    ctx->pc = 0x3C9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9910u;
    // 0x3c9914: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9910u, 0x3C9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9918u;
label_3c9918:
    // 0x3c9918: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3c9918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3c991c:
    // 0x3c991c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c991cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9920:
    // 0x3c9920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9924:
    // 0x3c9924: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c9924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9928:
    // 0x3c9928: 0xc136b24  jal         func_4DAC90
label_3c992c:
    if (ctx->pc == 0x3C992Cu) {
        ctx->pc = 0x3C992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9928u;
        // 0x3c992c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9930u;
        goto label_3c9930;
    }
    ctx->pc = 0x3C9928u;
    SET_GPR_U32(ctx, 31, 0x3C9930u);
    ctx->pc = 0x3C992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9928u;
    // 0x3c992c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9928u, 0x3C9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9930u;
label_3c9930:
    // 0x3c9930: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9934:
    // 0x3c9934: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9938:
    // 0x3c9938: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c993c:
    // 0x3c993c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9940:
    // 0x3c9940: 0xc136b18  jal         func_4DAC60
label_3c9944:
    if (ctx->pc == 0x3C9944u) {
        ctx->pc = 0x3C9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9940u;
        // 0x3c9944: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9948u;
        goto label_3c9948;
    }
    ctx->pc = 0x3C9940u;
    SET_GPR_U32(ctx, 31, 0x3C9948u);
    ctx->pc = 0x3C9944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9940u;
    // 0x3c9944: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9940u, 0x3C9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9948u;
label_3c9948:
    // 0x3c9948: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c994c:
    // 0x3c994c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9950:
    // 0x3c9950: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3c9950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3c9954:
    // 0x3c9954: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9958:
    // 0x3c9958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c995c:
    // 0x3c995c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9960:
    // 0x3c9960: 0xc136b24  jal         func_4DAC90
label_3c9964:
    if (ctx->pc == 0x3C9964u) {
        ctx->pc = 0x3C9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9960u;
        // 0x3c9964: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9968u;
        goto label_3c9968;
    }
    ctx->pc = 0x3C9960u;
    SET_GPR_U32(ctx, 31, 0x3C9968u);
    ctx->pc = 0x3C9964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9960u;
    // 0x3c9964: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9960u, 0x3C9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9968u;
label_3c9968:
    // 0x3c9968: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c996c:
    // 0x3c996c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9970:
    // 0x3c9970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9974:
    // 0x3c9974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9978:
    // 0x3c9978: 0xc136b18  jal         func_4DAC60
label_3c997c:
    if (ctx->pc == 0x3C997Cu) {
        ctx->pc = 0x3C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9978u;
        // 0x3c997c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9980u;
        goto label_3c9980;
    }
    ctx->pc = 0x3C9978u;
    SET_GPR_U32(ctx, 31, 0x3C9980u);
    ctx->pc = 0x3C997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9978u;
    // 0x3c997c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9978u, 0x3C9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9980u;
label_3c9980:
    // 0x3c9980: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9984:
    // 0x3c9984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9988:
    // 0x3c9988: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c9988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c998c:
    // 0x3c998c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c998cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9990:
    // 0x3c9990: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9994:
    // 0x3c9994: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c9994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c9998:
    // 0x3c9998: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c9998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c999c:
    // 0x3c999c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3c999cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c99a0:
    // 0x3c99a0: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c99a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c99a4:
    // 0x3c99a4: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c99a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c99a8:
    // 0x3c99a8: 0xc136b18  jal         func_4DAC60
label_3c99ac:
    if (ctx->pc == 0x3C99ACu) {
        ctx->pc = 0x3C99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99A8u;
        // 0x3c99ac: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99B0u;
        goto label_3c99b0;
    }
    ctx->pc = 0x3C99A8u;
    SET_GPR_U32(ctx, 31, 0x3C99B0u);
    ctx->pc = 0x3C99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99A8u;
    // 0x3c99ac: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C99A8u, 0x3C99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C99B0u;
label_3c99b0:
    // 0x3c99b0: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c99b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c99b4:
    // 0x3c99b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c99b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c99b8:
    // 0x3c99b8: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c99bc:
    // 0x3c99bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c99bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c99c0:
    // 0x3c99c0: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c99c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c99c4:
    // 0x3c99c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c99c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c99c8:
    // 0x3c99c8: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c99cc:
    // 0x3c99cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c99ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c99d0:
    // 0x3c99d0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c99d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c99d4:
    // 0x3c99d4: 0xc0e9fa6  jal         func_3A7E98
label_3c99d8:
    if (ctx->pc == 0x3C99D8u) {
        ctx->pc = 0x3C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99D4u;
        // 0x3c99d8: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99DCu;
        goto label_3c99dc;
    }
    ctx->pc = 0x3C99D4u;
    SET_GPR_U32(ctx, 31, 0x3C99DCu);
    ctx->pc = 0x3C99D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99D4u;
    // 0x3c99d8: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C99D4u, 0x3C99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C99DCu;
label_3c99dc:
    // 0x3c99dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c99dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c99e0:
    // 0x3c99e0: 0xc0f15bc  jal         func_3C56F0
label_3c99e4:
    if (ctx->pc == 0x3C99E4u) {
        ctx->pc = 0x3C99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99E0u;
        // 0x3c99e4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99E8u;
        goto label_3c99e8;
    }
    ctx->pc = 0x3C99E0u;
    SET_GPR_U32(ctx, 31, 0x3C99E8u);
    ctx->pc = 0x3C99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99E0u;
    // 0x3c99e4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C99E0u, 0x3C99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C99E8u;
label_3c99e8:
    // 0x3c99e8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3c99e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3c99ec:
    // 0x3c99ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c99ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c99f0:
    // 0x3c99f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c99f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c99f4:
    // 0x3c99f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c99f8:
    // 0x3c99f8: 0xc136b24  jal         func_4DAC90
label_3c99fc:
    if (ctx->pc == 0x3C99FCu) {
        ctx->pc = 0x3C99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99F8u;
        // 0x3c99fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A00u;
        goto label_3c9a00;
    }
    ctx->pc = 0x3C99F8u;
    SET_GPR_U32(ctx, 31, 0x3C9A00u);
    ctx->pc = 0x3C99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99F8u;
    // 0x3c99fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C99F8u, 0x3C9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A00u;
label_3c9a00:
    // 0x3c9a00: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9a04:
    // 0x3c9a04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a08:
    // 0x3c9a08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a0c:
    // 0x3c9a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a10:
    // 0x3c9a10: 0xc136b18  jal         func_4DAC60
label_3c9a14:
    if (ctx->pc == 0x3C9A14u) {
        ctx->pc = 0x3C9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A10u;
        // 0x3c9a14: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A18u;
        goto label_3c9a18;
    }
    ctx->pc = 0x3C9A10u;
    SET_GPR_U32(ctx, 31, 0x3C9A18u);
    ctx->pc = 0x3C9A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9A10u;
    // 0x3c9a14: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9A10u, 0x3C9A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A18u;
label_3c9a18:
    // 0x3c9a18: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9a1c:
    // 0x3c9a1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9a20:
    // 0x3c9a20: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3c9a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3c9a24:
    // 0x3c9a24: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9a28:
    // 0x3c9a28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9a2c:
    // 0x3c9a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a30:
    // 0x3c9a30: 0xc136b24  jal         func_4DAC90
label_3c9a34:
    if (ctx->pc == 0x3C9A34u) {
        ctx->pc = 0x3C9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A30u;
        // 0x3c9a34: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A38u;
        goto label_3c9a38;
    }
    ctx->pc = 0x3C9A30u;
    SET_GPR_U32(ctx, 31, 0x3C9A38u);
    ctx->pc = 0x3C9A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9A30u;
    // 0x3c9a34: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9A30u, 0x3C9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A38u;
label_3c9a38:
    // 0x3c9a38: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9a38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9a3c:
    // 0x3c9a3c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9a40:
    // 0x3c9a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a44:
    // 0x3c9a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a48:
    // 0x3c9a48: 0xc136b18  jal         func_4DAC60
label_3c9a4c:
    if (ctx->pc == 0x3C9A4Cu) {
        ctx->pc = 0x3C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A48u;
        // 0x3c9a4c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A50u;
        goto label_3c9a50;
    }
    ctx->pc = 0x3C9A48u;
    SET_GPR_U32(ctx, 31, 0x3C9A50u);
    ctx->pc = 0x3C9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9A48u;
    // 0x3c9a4c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9A48u, 0x3C9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A50u;
label_3c9a50:
    // 0x3c9a50: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9a54:
    // 0x3c9a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a58:
    // 0x3c9a58: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9a5c:
    // 0x3c9a5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c9a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a60:
    // 0x3c9a60: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9a64:
    // 0x3c9a64: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c9a68:
    // 0x3c9a68: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c9a6c:
    // 0x3c9a6c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3c9a6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c9a70:
    // 0x3c9a70: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c9a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c9a74:
    // 0x3c9a74: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9a78:
    // 0x3c9a78: 0xc136b18  jal         func_4DAC60
label_3c9a7c:
    if (ctx->pc == 0x3C9A7Cu) {
        ctx->pc = 0x3C9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A78u;
        // 0x3c9a7c: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A80u;
        goto label_3c9a80;
    }
    ctx->pc = 0x3C9A78u;
    SET_GPR_U32(ctx, 31, 0x3C9A80u);
    ctx->pc = 0x3C9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9A78u;
    // 0x3c9a7c: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9A78u, 0x3C9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A80u;
label_3c9a80:
    // 0x3c9a80: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9a84:
    // 0x3c9a84: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c9a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a88:
    // 0x3c9a88: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9a8c:
    // 0x3c9a8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c9a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a90:
    // 0x3c9a90: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9a94:
    // 0x3c9a94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a98:
    // 0x3c9a98: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c9a9c:
    // 0x3c9a9c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9aa0:
    // 0x3c9aa0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9aa4:
    // 0x3c9aa4: 0xc0e9fa6  jal         func_3A7E98
label_3c9aa8:
    if (ctx->pc == 0x3C9AA8u) {
        ctx->pc = 0x3C9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AA4u;
        // 0x3c9aa8: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9AACu;
        goto label_3c9aac;
    }
    ctx->pc = 0x3C9AA4u;
    SET_GPR_U32(ctx, 31, 0x3C9AACu);
    ctx->pc = 0x3C9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9AA4u;
    // 0x3c9aa8: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9AA4u, 0x3C9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AACu;
label_3c9aac:
    // 0x3c9aac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ab0:
    // 0x3c9ab0: 0xc0f15bc  jal         func_3C56F0
label_3c9ab4:
    if (ctx->pc == 0x3C9AB4u) {
        ctx->pc = 0x3C9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AB0u;
        // 0x3c9ab4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9AB8u;
        goto label_3c9ab8;
    }
    ctx->pc = 0x3C9AB0u;
    SET_GPR_U32(ctx, 31, 0x3C9AB8u);
    ctx->pc = 0x3C9AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9AB0u;
    // 0x3c9ab4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9AB0u, 0x3C9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AB8u;
label_3c9ab8:
    // 0x3c9ab8: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3c9ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3c9abc:
    // 0x3c9abc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9ac0:
    // 0x3c9ac0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9ac4:
    // 0x3c9ac4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c9ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9ac8:
    // 0x3c9ac8: 0xc136b24  jal         func_4DAC90
label_3c9acc:
    if (ctx->pc == 0x3C9ACCu) {
        ctx->pc = 0x3C9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AC8u;
        // 0x3c9acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9AD0u;
        goto label_3c9ad0;
    }
    ctx->pc = 0x3C9AC8u;
    SET_GPR_U32(ctx, 31, 0x3C9AD0u);
    ctx->pc = 0x3C9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9AC8u;
    // 0x3c9acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9AC8u, 0x3C9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AD0u;
label_3c9ad0:
    // 0x3c9ad0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9ad4:
    // 0x3c9ad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ad8:
    // 0x3c9ad8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9adc:
    // 0x3c9adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ae0:
    // 0x3c9ae0: 0xc136b18  jal         func_4DAC60
label_3c9ae4:
    if (ctx->pc == 0x3C9AE4u) {
        ctx->pc = 0x3C9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AE0u;
        // 0x3c9ae4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9AE8u;
        goto label_3c9ae8;
    }
    ctx->pc = 0x3C9AE0u;
    SET_GPR_U32(ctx, 31, 0x3C9AE8u);
    ctx->pc = 0x3C9AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9AE0u;
    // 0x3c9ae4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9AE0u, 0x3C9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AE8u;
label_3c9ae8:
    // 0x3c9ae8: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9aec:
    // 0x3c9aec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9af0:
    // 0x3c9af0: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3c9af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3c9af4:
    // 0x3c9af4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9af8:
    // 0x3c9af8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9afc:
    // 0x3c9afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b00:
    // 0x3c9b00: 0xc136b24  jal         func_4DAC90
label_3c9b04:
    if (ctx->pc == 0x3C9B04u) {
        ctx->pc = 0x3C9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B00u;
        // 0x3c9b04: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B08u;
        goto label_3c9b08;
    }
    ctx->pc = 0x3C9B00u;
    SET_GPR_U32(ctx, 31, 0x3C9B08u);
    ctx->pc = 0x3C9B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B00u;
    // 0x3c9b04: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9B00u, 0x3C9B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B08u;
label_3c9b08:
    // 0x3c9b08: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9b0c:
    // 0x3c9b0c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3c9b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9b10:
    // 0x3c9b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b14:
    // 0x3c9b14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b18:
    // 0x3c9b18: 0xc136b18  jal         func_4DAC60
label_3c9b1c:
    if (ctx->pc == 0x3C9B1Cu) {
        ctx->pc = 0x3C9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B18u;
        // 0x3c9b1c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B20u;
        goto label_3c9b20;
    }
    ctx->pc = 0x3C9B18u;
    SET_GPR_U32(ctx, 31, 0x3C9B20u);
    ctx->pc = 0x3C9B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B18u;
    // 0x3c9b1c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9B18u, 0x3C9B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B20u;
label_3c9b20:
    // 0x3c9b20: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3c9b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c9b24:
    // 0x3c9b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b28:
    // 0x3c9b28: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9b2c:
    // 0x3c9b2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c9b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b30:
    // 0x3c9b30: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9b34:
    // 0x3c9b34: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3c9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3c9b38:
    // 0x3c9b38: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x3c9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
label_3c9b3c:
    // 0x3c9b3c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3c9b3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3c9b40:
    // 0x3c9b40: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c9b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c9b44:
    // 0x3c9b44: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9b48:
    // 0x3c9b48: 0xc136b18  jal         func_4DAC60
label_3c9b4c:
    if (ctx->pc == 0x3C9B4Cu) {
        ctx->pc = 0x3C9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B48u;
        // 0x3c9b4c: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B50u;
        goto label_3c9b50;
    }
    ctx->pc = 0x3C9B48u;
    SET_GPR_U32(ctx, 31, 0x3C9B50u);
    ctx->pc = 0x3C9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B48u;
    // 0x3c9b4c: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9B48u, 0x3C9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B50u;
label_3c9b50:
    // 0x3c9b50: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c9b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c9b54:
    // 0x3c9b54: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c9b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b58:
    // 0x3c9b58: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9b5c:
    // 0x3c9b5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c9b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b60:
    // 0x3c9b60: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9b64:
    // 0x3c9b64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b68:
    // 0x3c9b68: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3c9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3c9b6c:
    // 0x3c9b6c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b70:
    // 0x3c9b70: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9b74:
    // 0x3c9b74: 0xc0e9fa6  jal         func_3A7E98
label_3c9b78:
    if (ctx->pc == 0x3C9B78u) {
        ctx->pc = 0x3C9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B74u;
        // 0x3c9b78: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B7Cu;
        goto label_3c9b7c;
    }
    ctx->pc = 0x3C9B74u;
    SET_GPR_U32(ctx, 31, 0x3C9B7Cu);
    ctx->pc = 0x3C9B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B74u;
    // 0x3c9b78: 0xe7b404b0  swc1        $f20, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9B74u, 0x3C9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B7Cu;
label_3c9b7c:
    // 0x3c9b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b80:
    // 0x3c9b80: 0xc0f15bc  jal         func_3C56F0
label_3c9b84:
    if (ctx->pc == 0x3C9B84u) {
        ctx->pc = 0x3C9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B80u;
        // 0x3c9b84: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B88u;
        goto label_3c9b88;
    }
    ctx->pc = 0x3C9B80u;
    SET_GPR_U32(ctx, 31, 0x3C9B88u);
    ctx->pc = 0x3C9B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B80u;
    // 0x3c9b84: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9B80u, 0x3C9B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B88u;
label_3c9b88:
    // 0x3c9b88: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3c9b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3c9b8c:
    // 0x3c9b8c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c9b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c9b90:
    // 0x3c9b90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9b94:
    // 0x3c9b94: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9b98:
    // 0x3c9b98: 0xc136b24  jal         func_4DAC90
label_3c9b9c:
    if (ctx->pc == 0x3C9B9Cu) {
        ctx->pc = 0x3C9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B98u;
        // 0x3c9b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9BA0u;
        goto label_3c9ba0;
    }
    ctx->pc = 0x3C9B98u;
    SET_GPR_U32(ctx, 31, 0x3C9BA0u);
    ctx->pc = 0x3C9B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B98u;
    // 0x3c9b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9B98u, 0x3C9BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9BA0u;
label_3c9ba0:
    // 0x3c9ba0: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9ba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9ba4:
    // 0x3c9ba4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ba8:
    // 0x3c9ba8: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c9ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9bac:
    // 0x3c9bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c9bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bb0:
    // 0x3c9bb0: 0xc136b18  jal         func_4DAC60
label_3c9bb4:
    if (ctx->pc == 0x3C9BB4u) {
        ctx->pc = 0x3C9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9BB0u;
        // 0x3c9bb4: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9BB8u;
        goto label_3c9bb8;
    }
    ctx->pc = 0x3C9BB0u;
    SET_GPR_U32(ctx, 31, 0x3C9BB8u);
    ctx->pc = 0x3C9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9BB0u;
    // 0x3c9bb4: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9BB0u, 0x3C9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9BB8u;
label_3c9bb8:
    // 0x3c9bb8: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9bbc:
    // 0x3c9bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bc0:
    // 0x3c9bc0: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c9bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9bc4:
    // 0x3c9bc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bc8:
    // 0x3c9bc8: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9bcc:
    // 0x3c9bcc: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c9bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c9bd0:
    // 0x3c9bd0: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c9bd4:
    // 0x3c9bd4: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c9bd4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9bd8:
    // 0x3c9bd8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c9bdc:
    // 0x3c9bdc: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9be0:
    // 0x3c9be0: 0xc136b18  jal         func_4DAC60
label_3c9be4:
    if (ctx->pc == 0x3C9BE4u) {
        ctx->pc = 0x3C9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9BE0u;
        // 0x3c9be4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9BE8u;
        goto label_3c9be8;
    }
    ctx->pc = 0x3C9BE0u;
    SET_GPR_U32(ctx, 31, 0x3C9BE8u);
    ctx->pc = 0x3C9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9BE0u;
    // 0x3c9be4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9BE0u, 0x3C9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9BE8u;
label_3c9be8:
    // 0x3c9be8: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9bec:
    // 0x3c9bec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c9becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bf0:
    // 0x3c9bf0: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9bf4:
    // 0x3c9bf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bf8:
    // 0x3c9bf8: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9bfc:
    // 0x3c9bfc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c00:
    // 0x3c9c00: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c9c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c9c04:
    // 0x3c9c04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c08:
    // 0x3c9c08: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c9c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c9c0c:
    // 0x3c9c0c: 0xc0e9fa6  jal         func_3A7E98
label_3c9c10:
    if (ctx->pc == 0x3C9C10u) {
        ctx->pc = 0x3C9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C0Cu;
        // 0x3c9c10: 0xe7b70490  swc1        $f23, 0x490($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C14u;
        goto label_3c9c14;
    }
    ctx->pc = 0x3C9C0Cu;
    SET_GPR_U32(ctx, 31, 0x3C9C14u);
    ctx->pc = 0x3C9C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9C0Cu;
    // 0x3c9c10: 0xe7b70490  swc1        $f23, 0x490($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9C0Cu, 0x3C9C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9C14u;
label_3c9c14:
    // 0x3c9c14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c18:
    // 0x3c9c18: 0xc0f15bc  jal         func_3C56F0
label_3c9c1c:
    if (ctx->pc == 0x3C9C1Cu) {
        ctx->pc = 0x3C9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C18u;
        // 0x3c9c1c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C20u;
        goto label_3c9c20;
    }
    ctx->pc = 0x3C9C18u;
    SET_GPR_U32(ctx, 31, 0x3C9C20u);
    ctx->pc = 0x3C9C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9C18u;
    // 0x3c9c1c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9C18u, 0x3C9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9C20u;
label_3c9c20:
    // 0x3c9c20: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x3c9c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_3c9c24:
    // 0x3c9c24: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c9c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c9c28:
    // 0x3c9c28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9c2c:
    // 0x3c9c2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9c30:
    // 0x3c9c30: 0xc136b24  jal         func_4DAC90
label_3c9c34:
    if (ctx->pc == 0x3C9C34u) {
        ctx->pc = 0x3C9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C30u;
        // 0x3c9c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C38u;
        goto label_3c9c38;
    }
    ctx->pc = 0x3C9C30u;
    SET_GPR_U32(ctx, 31, 0x3C9C38u);
    ctx->pc = 0x3C9C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9C30u;
    // 0x3c9c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C9C30u, 0x3C9C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9C38u;
label_3c9c38:
    // 0x3c9c38: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9c3c:
    // 0x3c9c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c9c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c40:
    // 0x3c9c40: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3c9c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9c44:
    // 0x3c9c44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c9c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c48:
    // 0x3c9c48: 0xc136b18  jal         func_4DAC60
label_3c9c4c:
    if (ctx->pc == 0x3C9C4Cu) {
        ctx->pc = 0x3C9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C48u;
        // 0x3c9c4c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C50u;
        goto label_3c9c50;
    }
    ctx->pc = 0x3C9C48u;
    SET_GPR_U32(ctx, 31, 0x3C9C50u);
    ctx->pc = 0x3C9C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9C48u;
    // 0x3c9c4c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9C48u, 0x3C9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9C50u;
label_3c9c50:
    // 0x3c9c50: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3c9c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c9c54:
    // 0x3c9c54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c58:
    // 0x3c9c58: 0x8fa504dc  lw          $a1, 0x4DC($sp)
    ctx->pc = 0x3c9c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9c5c:
    // 0x3c9c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c60:
    // 0x3c9c60: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c9c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c9c64:
    // 0x3c9c64: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3c9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3c9c68:
    // 0x3c9c68: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3c9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3c9c6c:
    // 0x3c9c6c: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3c9c6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c9c70:
    // 0x3c9c70: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c9c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c9c74:
    // 0x3c9c74: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9c78:
    // 0x3c9c78: 0xc136b18  jal         func_4DAC60
label_3c9c7c:
    if (ctx->pc == 0x3C9C7Cu) {
        ctx->pc = 0x3C9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C78u;
        // 0x3c9c7c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C80u;
        goto label_3c9c80;
    }
    ctx->pc = 0x3C9C78u;
    SET_GPR_U32(ctx, 31, 0x3C9C80u);
    ctx->pc = 0x3C9C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9C78u;
    // 0x3c9c7c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C9C78u, 0x3C9C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9C80u;
label_3c9c80:
    // 0x3c9c80: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9c84:
    // 0x3c9c84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c9c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c88:
    // 0x3c9c88: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c9c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c9c8c:
    // 0x3c9c8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c9c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c90:
    // 0x3c9c90: 0xe7b70490  swc1        $f23, 0x490($sp)
    ctx->pc = 0x3c9c90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_3c9c94:
    // 0x3c9c94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9c98:
    // 0x3c9c98: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9c9c:
    // 0x3c9c9c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ca0:
    // 0x3c9ca0: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_3c9ca4:
    // 0x3c9ca4: 0xc0e9fa6  jal         func_3A7E98
label_3c9ca8:
    if (ctx->pc == 0x3C9CA8u) {
        ctx->pc = 0x3C9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9CA4u;
        // 0x3c9ca8: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9CACu;
        goto label_3c9cac;
    }
    ctx->pc = 0x3C9CA4u;
    SET_GPR_U32(ctx, 31, 0x3C9CACu);
    ctx->pc = 0x3C9CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9CA4u;
    // 0x3c9ca8: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9CA4u, 0x3C9CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9CACu;
label_3c9cac:
    // 0x3c9cac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c9cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9cb0:
    // 0x3c9cb0: 0xc0f15bc  jal         func_3C56F0
label_3c9cb4:
    if (ctx->pc == 0x3C9CB4u) {
        ctx->pc = 0x3C9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9CB0u;
        // 0x3c9cb4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9CB8u;
        goto label_3c9cb8;
    }
    ctx->pc = 0x3C9CB0u;
    SET_GPR_U32(ctx, 31, 0x3C9CB8u);
    ctx->pc = 0x3C9CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9CB0u;
    // 0x3c9cb4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9CB0u, 0x3C9CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9CB8u;
label_3c9cb8:
    // 0x3c9cb8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3c9cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3c9cbc:
    // 0x3c9cbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c9cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c9cc0:
    // 0x3c9cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c9cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c9cc4:
    // 0x3c9cc4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x3c9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_3c9cc8:
    // 0x3c9cc8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3c9cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3c9ccc:
    // 0x3c9ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9cd0:
    // 0x3c9cd0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c9cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c9cd4:
    // 0x3c9cd4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c9cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c9cd8:
    // 0x3c9cd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c9cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9cdc:
    // 0x3c9cdc: 0xe6c10020  swc1        $f1, 0x20($s6)
    ctx->pc = 0x3c9cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_3c9ce0:
    // 0x3c9ce0: 0xc0e96a4  jal         func_3A5A90
label_3c9ce4:
    if (ctx->pc == 0x3C9CE4u) {
        ctx->pc = 0x3C9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9CE0u;
        // 0x3c9ce4: 0xe6c00024  swc1        $f0, 0x24($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9CE8u;
        goto label_3c9ce8;
    }
    ctx->pc = 0x3C9CE0u;
    SET_GPR_U32(ctx, 31, 0x3C9CE8u);
    ctx->pc = 0x3C9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9CE0u;
    // 0x3c9ce4: 0xe6c00024  swc1        $f0, 0x24($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A90u, 0x3C9CE0u, 0x3C9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9CE8u;
label_3c9ce8:
    // 0x3c9ce8: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x3c9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
label_3c9cec:
    // 0x3c9cec: 0x8fa204d4  lw          $v0, 0x4D4($sp)
    ctx->pc = 0x3c9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3c9cf0:
    // 0x3c9cf0: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_3c9cf4:
    if (ctx->pc == 0x3C9CF4u) {
        ctx->pc = 0x3C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9CF0u;
        // 0x3c9cf4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9CF8u;
        goto label_3c9cf8;
    }
    ctx->pc = 0x3C9CF0u;
    {
        const bool branch_taken_0x3c9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9CF0u;
        // 0x3c9cf4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9cf0) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C9CF8u;
label_3c9cf8:
    // 0x3c9cf8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c9cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c9cfc:
    // 0x3c9cfc: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x3c9cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_3c9d00:
    // 0x3c9d00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3c9d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3c9d04:
    // 0x3c9d04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9d08:
    // 0x3c9d08: 0x26104510  addiu       $s0, $s0, 0x4510
    ctx->pc = 0x3c9d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17680));
label_3c9d0c:
    // 0x3c9d0c: 0x8fa304d0  lw          $v1, 0x4D0($sp)
    ctx->pc = 0x3c9d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c9d10:
    // 0x3c9d10: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c9d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d14:
    // 0x3c9d14: 0x8fa604d8  lw          $a2, 0x4D8($sp)
    ctx->pc = 0x3c9d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_3c9d18:
    // 0x3c9d18: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3c9d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c9d1c:
    // 0x3c9d1c: 0x8fa704dc  lw          $a3, 0x4DC($sp)
    ctx->pc = 0x3c9d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_3c9d20:
    // 0x3c9d20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c9d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d24:
    // 0x3c9d24: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9d28:
    // 0x3c9d28: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c9d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c9d2c:
    // 0x3c9d2c: 0xafa30470  sw          $v1, 0x470($sp)
    ctx->pc = 0x3c9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
label_3c9d30:
    // 0x3c9d30: 0xc0e9fd0  jal         func_3A7F40
label_3c9d34:
    if (ctx->pc == 0x3C9D34u) {
        ctx->pc = 0x3C9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D30u;
        // 0x3c9d34: 0xafa00450  sw          $zero, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D38u;
        goto label_3c9d38;
    }
    ctx->pc = 0x3C9D30u;
    SET_GPR_U32(ctx, 31, 0x3C9D38u);
    ctx->pc = 0x3C9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D30u;
    // 0x3c9d34: 0xafa00450  sw          $zero, 0x450($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C9D30u, 0x3C9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9D38u;
label_3c9d38:
    // 0x3c9d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d3c:
    // 0x3c9d3c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3c9d40:
    if (ctx->pc == 0x3C9D40u) {
        ctx->pc = 0x3C9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D3Cu;
        // 0x3c9d40: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D44u;
        goto label_3c9d44;
    }
    ctx->pc = 0x3C9D3Cu;
    {
        const bool branch_taken_0x3c9d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D3Cu;
        // 0x3c9d40: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9d3c) {
            ctx->pc = 0x3C9EF0u;
            goto label_3c9ef0;
        }
    }
    ctx->pc = 0x3C9D44u;
label_3c9d44:
    // 0x3c9d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d48:
    // 0x3c9d48: 0xc10d6e8  jal         func_435BA0
label_3c9d4c:
    if (ctx->pc == 0x3C9D4Cu) {
        ctx->pc = 0x3C9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D48u;
        // 0x3c9d4c: 0x24a54558  addiu       $a1, $a1, 0x4558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D50u;
        goto label_3c9d50;
    }
    ctx->pc = 0x3C9D48u;
    SET_GPR_U32(ctx, 31, 0x3C9D50u);
    ctx->pc = 0x3C9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D48u;
    // 0x3c9d4c: 0x24a54558  addiu       $a1, $a1, 0x4558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C9D48u, 0x3C9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9D50u;
label_3c9d50:
    // 0x3c9d50: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_3c9d54:
    if (ctx->pc == 0x3C9D54u) {
        ctx->pc = 0x3C9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D50u;
        // 0x3c9d54: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D58u;
        goto label_3c9d58;
    }
    ctx->pc = 0x3C9D50u;
    {
        const bool branch_taken_0x3c9d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D50u;
        // 0x3c9d54: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9d50) {
            ctx->pc = 0x3C9DCCu;
            goto label_3c9dcc;
        }
    }
    ctx->pc = 0x3C9D58u;
label_3c9d58:
    // 0x3c9d58: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9d5c:
    // 0x3c9d5c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3c9d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c9d60:
    // 0x3c9d60: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3c9d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_3c9d64:
    // 0x3c9d64: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3c9d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3c9d68:
    // 0x3c9d68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9d6c:
    // 0x3c9d6c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c9d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c9d70:
    // 0x3c9d70: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c9d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9d74:
    // 0x3c9d74: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3c9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c9d78:
    // 0x3c9d78: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3c9d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3c9d7c:
    // 0x3c9d7c: 0x26104500  addiu       $s0, $s0, 0x4500
    ctx->pc = 0x3c9d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17664));
label_3c9d80:
    // 0x3c9d80: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9d84:
    // 0x3c9d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d88:
    // 0x3c9d88: 0xafa30460  sw          $v1, 0x460($sp)
    ctx->pc = 0x3c9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 3));
label_3c9d8c:
    // 0x3c9d8c: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3c9d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c9d90:
    // 0x3c9d90: 0xc0e9fa6  jal         func_3A7E98
label_3c9d94:
    if (ctx->pc == 0x3C9D94u) {
        ctx->pc = 0x3C9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D90u;
        // 0x3c9d94: 0x27a70460  addiu       $a3, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D98u;
        goto label_3c9d98;
    }
    ctx->pc = 0x3C9D90u;
    SET_GPR_U32(ctx, 31, 0x3C9D98u);
    ctx->pc = 0x3C9D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D90u;
    // 0x3c9d94: 0x27a70460  addiu       $a3, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9D90u, 0x3C9D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9D98u;
label_3c9d98:
    // 0x3c9d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d9c:
    // 0x3c9d9c: 0xc0f15bc  jal         func_3C56F0
label_3c9da0:
    if (ctx->pc == 0x3C9DA0u) {
        ctx->pc = 0x3C9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D9Cu;
        // 0x3c9da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9DA4u;
        goto label_3c9da4;
    }
    ctx->pc = 0x3C9D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C9DA4u);
    ctx->pc = 0x3C9DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D9Cu;
    // 0x3c9da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9D9Cu, 0x3C9DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9DA4u;
label_3c9da4:
    // 0x3c9da4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3c9da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3c9da8:
    // 0x3c9da8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c9da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c9dac:
    // 0x3c9dac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c9db0:
    // 0x3c9db0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c9db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c9db4:
    // 0x3c9db4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9db8:
    // 0x3c9db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9dbc:
    // 0x3c9dbc: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x3c9dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
label_3c9dc0:
    // 0x3c9dc0: 0xe6c10020  swc1        $f1, 0x20($s6)
    ctx->pc = 0x3c9dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_3c9dc4:
    // 0x3c9dc4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3c9dc8:
    if (ctx->pc == 0x3C9DC8u) {
        ctx->pc = 0x3C9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DC4u;
        // 0x3c9dc8: 0xe6c00024  swc1        $f0, 0x24($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9DCCu;
        goto label_3c9dcc;
    }
    ctx->pc = 0x3C9DC4u;
    {
        const bool branch_taken_0x3c9dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DC4u;
        // 0x3c9dc8: 0xe6c00024  swc1        $f0, 0x24($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9dc4) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C9DCCu;
label_3c9dcc:
    // 0x3c9dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9dd0:
    // 0x3c9dd0: 0x24a54568  addiu       $a1, $a1, 0x4568
    ctx->pc = 0x3c9dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17768));
label_3c9dd4:
    // 0x3c9dd4: 0xc10d6e8  jal         func_435BA0
label_3c9dd8:
    if (ctx->pc == 0x3C9DD8u) {
        ctx->pc = 0x3C9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DD4u;
        // 0x3c9dd8: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9DDCu;
        goto label_3c9ddc;
    }
    ctx->pc = 0x3C9DD4u;
    SET_GPR_U32(ctx, 31, 0x3C9DDCu);
    ctx->pc = 0x3C9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9DD4u;
    // 0x3c9dd8: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C9DD4u, 0x3C9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9DDCu;
label_3c9ddc:
    // 0x3c9ddc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3c9de0:
    if (ctx->pc == 0x3C9DE0u) {
        ctx->pc = 0x3C9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DDCu;
        // 0x3c9de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9DE4u;
        goto label_3c9de4;
    }
    ctx->pc = 0x3C9DDCu;
    {
        const bool branch_taken_0x3c9ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DDCu;
        // 0x3c9de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9ddc) {
            ctx->pc = 0x3C9E10u;
            goto label_3c9e10;
        }
    }
    ctx->pc = 0x3C9DE4u;
label_3c9de4:
    // 0x3c9de4: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c9de8:
    // 0x3c9de8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3c9dec:
    if (ctx->pc == 0x3C9DECu) {
        ctx->pc = 0x3C9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DE8u;
        // 0x3c9dec: 0x26304580  addiu       $s0, $s1, 0x4580 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9DF0u;
        goto label_3c9df0;
    }
    ctx->pc = 0x3C9DE8u;
    {
        const bool branch_taken_0x3c9de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DE8u;
        // 0x3c9dec: 0x26304580  addiu       $s0, $s1, 0x4580 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9de8) {
            ctx->pc = 0x3C9E0Cu;
            goto label_3c9e0c;
        }
    }
    ctx->pc = 0x3C9DF0u;
label_3c9df0:
    // 0x3c9df0: 0x3c055acb  lui         $a1, 0x5ACB
    ctx->pc = 0x3c9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23243 << 16));
label_3c9df4:
    // 0x3c9df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c9df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9df8:
    // 0x3c9df8: 0x34a52300  ori         $a1, $a1, 0x2300
    ctx->pc = 0x3c9df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8960);
label_3c9dfc:
    // 0x3c9dfc: 0xc045cb2  jal         func_1172C8
label_3c9e00:
    if (ctx->pc == 0x3C9E00u) {
        ctx->pc = 0x3C9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DFCu;
        // 0x3c9e00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E04u;
        goto label_3c9e04;
    }
    ctx->pc = 0x3C9DFCu;
    SET_GPR_U32(ctx, 31, 0x3C9E04u);
    ctx->pc = 0x3C9E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9DFCu;
    // 0x3c9e00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3C9DFCu, 0x3C9E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E04u;
label_3c9e04:
    // 0x3c9e04: 0xaec20014  sw          $v0, 0x14($s6)
    ctx->pc = 0x3c9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
label_3c9e08:
    // 0x3c9e08: 0x26304580  addiu       $s0, $s1, 0x4580
    ctx->pc = 0x3c9e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17792));
label_3c9e0c:
    // 0x3c9e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e10:
    // 0x3c9e10: 0xc10d6e8  jal         func_435BA0
label_3c9e14:
    if (ctx->pc == 0x3C9E14u) {
        ctx->pc = 0x3C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E10u;
        // 0x3c9e14: 0x26254580  addiu       $a1, $s1, 0x4580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E18u;
        goto label_3c9e18;
    }
    ctx->pc = 0x3C9E10u;
    SET_GPR_U32(ctx, 31, 0x3C9E18u);
    ctx->pc = 0x3C9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E10u;
    // 0x3c9e14: 0x26254580  addiu       $a1, $s1, 0x4580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x3C9E10u, 0x3C9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E18u;
label_3c9e18:
    // 0x3c9e18: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_3c9e1c:
    if (ctx->pc == 0x3C9E1Cu) {
        ctx->pc = 0x3C9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E18u;
        // 0x3c9e1c: 0xc6c10020  lwc1        $f1, 0x20($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E20u;
        goto label_3c9e20;
    }
    ctx->pc = 0x3C9E18u;
    {
        const bool branch_taken_0x3c9e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9e18) {
            ctx->pc = 0x3C9E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9E18u;
            // 0x3c9e1c: 0xc6c10020  lwc1        $f1, 0x20($s6) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9F00u;
            goto label_3c9f00;
        }
    }
    ctx->pc = 0x3C9E20u;
label_3c9e20:
    // 0x3c9e20: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c9e24:
    // 0x3c9e24: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3c9e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c9e28:
    // 0x3c9e28: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3c9e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3c9e2c:
    // 0x3c9e2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c9e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c9e30:
    // 0x3c9e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9e34:
    // 0x3c9e34: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3c9e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c9e38:
    // 0x3c9e38: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c9e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9e3c:
    // 0x3c9e3c: 0x27b30450  addiu       $s3, $sp, 0x450
    ctx->pc = 0x3c9e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c9e40:
    // 0x3c9e40: 0x27b40460  addiu       $s4, $sp, 0x460
    ctx->pc = 0x3c9e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c9e44:
    // 0x3c9e44: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c9e44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c9e48:
    // 0x3c9e48: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3c9e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3c9e4c:
    // 0x3c9e4c: 0x26104500  addiu       $s0, $s0, 0x4500
    ctx->pc = 0x3c9e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17664));
label_3c9e50:
    // 0x3c9e50: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9e54:
    // 0x3c9e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e58:
    // 0x3c9e58: 0xafa30460  sw          $v1, 0x460($sp)
    ctx->pc = 0x3c9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 3));
label_3c9e5c:
    // 0x3c9e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c9e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e60:
    // 0x3c9e60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e64:
    // 0x3c9e64: 0xc0e9fa6  jal         func_3A7E98
label_3c9e68:
    if (ctx->pc == 0x3C9E68u) {
        ctx->pc = 0x3C9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E64u;
        // 0x3c9e68: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E6Cu;
        goto label_3c9e6c;
    }
    ctx->pc = 0x3C9E64u;
    SET_GPR_U32(ctx, 31, 0x3C9E6Cu);
    ctx->pc = 0x3C9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E64u;
    // 0x3c9e68: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C9E64u, 0x3C9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E6Cu;
label_3c9e6c:
    // 0x3c9e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e70:
    // 0x3c9e70: 0xc0f15bc  jal         func_3C56F0
label_3c9e74:
    if (ctx->pc == 0x3C9E74u) {
        ctx->pc = 0x3C9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E70u;
        // 0x3c9e74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E78u;
        goto label_3c9e78;
    }
    ctx->pc = 0x3C9E70u;
    SET_GPR_U32(ctx, 31, 0x3C9E78u);
    ctx->pc = 0x3C9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E70u;
    // 0x3c9e74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9E70u, 0x3C9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E78u;
label_3c9e78:
    // 0x3c9e78: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3c9e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3c9e7c:
    // 0x3c9e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c9e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c9e80:
    // 0x3c9e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c9e84:
    // 0x3c9e84: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c9e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c9e88:
    // 0x3c9e88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9e8c:
    // 0x3c9e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9e90:
    // 0x3c9e90: 0xe6c10020  swc1        $f1, 0x20($s6)
    ctx->pc = 0x3c9e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_3c9e94:
    // 0x3c9e94: 0xe6c00024  swc1        $f0, 0x24($s6)
    ctx->pc = 0x3c9e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
label_3c9e98:
    // 0x3c9e98: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x3c9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
label_3c9e9c:
    // 0x3c9e9c: 0x8fa404d4  lw          $a0, 0x4D4($sp)
    ctx->pc = 0x3c9e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3c9ea0:
    // 0x3c9ea0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_3c9ea4:
    if (ctx->pc == 0x3C9EA4u) {
        ctx->pc = 0x3C9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EA0u;
        // 0x3c9ea4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9EA8u;
        goto label_3c9ea8;
    }
    ctx->pc = 0x3C9EA0u;
    {
        const bool branch_taken_0x3c9ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EA0u;
        // 0x3c9ea4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9ea0) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C9EA8u;
label_3c9ea8:
    // 0x3c9ea8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c9ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c9eac:
    // 0x3c9eac: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c9eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c9eb0:
    // 0x3c9eb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c9eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c9eb4:
    // 0x3c9eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9eb8:
    // 0x3c9eb8: 0x26104510  addiu       $s0, $s0, 0x4510
    ctx->pc = 0x3c9eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17680));
label_3c9ebc:
    // 0x3c9ebc: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c9ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c9ec0:
    // 0x3c9ec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c9ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ec4:
    // 0x3c9ec4: 0x8fa204d0  lw          $v0, 0x4D0($sp)
    ctx->pc = 0x3c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c9ec8:
    // 0x3c9ec8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ecc:
    // 0x3c9ecc: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c9eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c9ed0:
    // 0x3c9ed0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c9ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ed4:
    // 0x3c9ed4: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x3c9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_3c9ed8:
    // 0x3c9ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9edc:
    // 0x3c9edc: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3c9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3c9ee0:
    // 0x3c9ee0: 0xc0e9fd0  jal         func_3A7F40
label_3c9ee4:
    if (ctx->pc == 0x3C9EE4u) {
        ctx->pc = 0x3C9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EE0u;
        // 0x3c9ee4: 0x27a80470  addiu       $t0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9EE8u;
        goto label_3c9ee8;
    }
    ctx->pc = 0x3C9EE0u;
    SET_GPR_U32(ctx, 31, 0x3C9EE8u);
    ctx->pc = 0x3C9EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9EE0u;
    // 0x3c9ee4: 0x27a80470  addiu       $t0, $sp, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C9EE0u, 0x3C9EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9EE8u;
label_3c9ee8:
    // 0x3c9ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9eec:
    // 0x3c9eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c9eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ef0:
    // 0x3c9ef0: 0xc0f15bc  jal         func_3C56F0
label_3c9ef4:
    if (ctx->pc == 0x3C9EF4u) {
        ctx->pc = 0x3C9EF8u;
        goto label_3c9ef8;
    }
    ctx->pc = 0x3C9EF0u;
    SET_GPR_U32(ctx, 31, 0x3C9EF8u);
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C9EF0u, 0x3C9EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9EF8u;
label_3c9ef8:
    // 0x3c9ef8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3c9efc:
    if (ctx->pc == 0x3C9EFCu) {
        ctx->pc = 0x3C9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EF8u;
        // 0x3c9efc: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F00u;
        goto label_3c9f00;
    }
    ctx->pc = 0x3C9EF8u;
    {
        const bool branch_taken_0x3c9ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EF8u;
        // 0x3c9efc: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9ef8) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C9F00u;
label_3c9f00:
    // 0x3c9f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c9f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9f04:
    // 0x3c9f04: 0x0  nop
    ctx->pc = 0x3c9f04u;
    // NOP
label_3c9f08:
    // 0x3c9f08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3c9f08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9f0c:
    // 0x3c9f0c: 0x0  nop
    ctx->pc = 0x3c9f0cu;
    // NOP
label_3c9f10:
    // 0x3c9f10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3c9f14:
    if (ctx->pc == 0x3C9F14u) {
        ctx->pc = 0x3C9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F10u;
        // 0x3c9f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F18u;
        goto label_3c9f18;
    }
    ctx->pc = 0x3C9F10u;
    {
        const bool branch_taken_0x3c9f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F10u;
        // 0x3c9f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f10) {
            ctx->pc = 0x3C9F30u;
            goto label_3c9f30;
        }
    }
    ctx->pc = 0x3C9F18u;
label_3c9f18:
    // 0x3c9f18: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3c9f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_3c9f1c:
    // 0x3c9f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9f20:
    // 0x3c9f20: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x3c9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
label_3c9f24:
    // 0x3c9f24: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x3c9f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_3c9f28:
    // 0x3c9f28: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x3c9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
label_3c9f2c:
    // 0x3c9f2c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x3c9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_3c9f30:
    // 0x3c9f30: 0x7bb00570  lq          $s0, 0x570($sp)
    ctx->pc = 0x3c9f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3c9f34:
    // 0x3c9f34: 0x7bb10560  lq          $s1, 0x560($sp)
    ctx->pc = 0x3c9f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3c9f38:
    // 0x3c9f38: 0x7bb20550  lq          $s2, 0x550($sp)
    ctx->pc = 0x3c9f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3c9f3c:
    // 0x3c9f3c: 0x7bb30540  lq          $s3, 0x540($sp)
    ctx->pc = 0x3c9f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3c9f40:
    // 0x3c9f40: 0x7bb40530  lq          $s4, 0x530($sp)
    ctx->pc = 0x3c9f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3c9f44:
    // 0x3c9f44: 0x7bb50520  lq          $s5, 0x520($sp)
    ctx->pc = 0x3c9f44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3c9f48:
    // 0x3c9f48: 0x7bb60510  lq          $s6, 0x510($sp)
    ctx->pc = 0x3c9f48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c9f4c:
    // 0x3c9f4c: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x3c9f4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3c9f50:
    // 0x3c9f50: 0x7bbe04f0  lq          $fp, 0x4F0($sp)
    ctx->pc = 0x3c9f50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3c9f54:
    // 0x3c9f54: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x3c9f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c9f58:
    // 0x3c9f58: 0xc7b805a0  lwc1        $f24, 0x5A0($sp)
    ctx->pc = 0x3c9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c9f5c:
    // 0x3c9f5c: 0xc7b70598  lwc1        $f23, 0x598($sp)
    ctx->pc = 0x3c9f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c9f60:
    // 0x3c9f60: 0xc7b60590  lwc1        $f22, 0x590($sp)
    ctx->pc = 0x3c9f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c9f64:
    // 0x3c9f64: 0xc7b50588  lwc1        $f21, 0x588($sp)
    ctx->pc = 0x3c9f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c9f68:
    // 0x3c9f68: 0xc7b40580  lwc1        $f20, 0x580($sp)
    ctx->pc = 0x3c9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9f6c:
    // 0x3c9f6c: 0x3e00008  jr          $ra
label_3c9f70:
    if (ctx->pc == 0x3C9F70u) {
        ctx->pc = 0x3C9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F6Cu;
        // 0x3c9f70: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F74u;
        goto label_3c9f74;
    }
    ctx->pc = 0x3C9F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F6Cu;
        // 0x3c9f70: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9F74u;
label_3c9f74:
    // 0x3c9f74: 0x0  nop
    ctx->pc = 0x3c9f74u;
    // NOP
    ctx->pc = 0x3c9f78u;
}
