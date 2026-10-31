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

// Function: sub_002B8AD8
// Address: 0x2b8ad8 - 0x2b9538
void sub_002B8AD8_0x2b8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8AD8_0x2b8ad8");
#endif

    switch (ctx->pc) {
        case 0x2b8ad8u: goto label_2b8ad8;
        case 0x2b8adcu: goto label_2b8adc;
        case 0x2b8ae0u: goto label_2b8ae0;
        case 0x2b8ae4u: goto label_2b8ae4;
        case 0x2b8ae8u: goto label_2b8ae8;
        case 0x2b8aecu: goto label_2b8aec;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8af4u: goto label_2b8af4;
        case 0x2b8af8u: goto label_2b8af8;
        case 0x2b8afcu: goto label_2b8afc;
        case 0x2b8b00u: goto label_2b8b00;
        case 0x2b8b04u: goto label_2b8b04;
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b0cu: goto label_2b8b0c;
        case 0x2b8b10u: goto label_2b8b10;
        case 0x2b8b14u: goto label_2b8b14;
        case 0x2b8b18u: goto label_2b8b18;
        case 0x2b8b1cu: goto label_2b8b1c;
        case 0x2b8b20u: goto label_2b8b20;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b28u: goto label_2b8b28;
        case 0x2b8b2cu: goto label_2b8b2c;
        case 0x2b8b30u: goto label_2b8b30;
        case 0x2b8b34u: goto label_2b8b34;
        case 0x2b8b38u: goto label_2b8b38;
        case 0x2b8b3cu: goto label_2b8b3c;
        case 0x2b8b40u: goto label_2b8b40;
        case 0x2b8b44u: goto label_2b8b44;
        case 0x2b8b48u: goto label_2b8b48;
        case 0x2b8b4cu: goto label_2b8b4c;
        case 0x2b8b50u: goto label_2b8b50;
        case 0x2b8b54u: goto label_2b8b54;
        case 0x2b8b58u: goto label_2b8b58;
        case 0x2b8b5cu: goto label_2b8b5c;
        case 0x2b8b60u: goto label_2b8b60;
        case 0x2b8b64u: goto label_2b8b64;
        case 0x2b8b68u: goto label_2b8b68;
        case 0x2b8b6cu: goto label_2b8b6c;
        case 0x2b8b70u: goto label_2b8b70;
        case 0x2b8b74u: goto label_2b8b74;
        case 0x2b8b78u: goto label_2b8b78;
        case 0x2b8b7cu: goto label_2b8b7c;
        case 0x2b8b80u: goto label_2b8b80;
        case 0x2b8b84u: goto label_2b8b84;
        case 0x2b8b88u: goto label_2b8b88;
        case 0x2b8b8cu: goto label_2b8b8c;
        case 0x2b8b90u: goto label_2b8b90;
        case 0x2b8b94u: goto label_2b8b94;
        case 0x2b8b98u: goto label_2b8b98;
        case 0x2b8b9cu: goto label_2b8b9c;
        case 0x2b8ba0u: goto label_2b8ba0;
        case 0x2b8ba4u: goto label_2b8ba4;
        case 0x2b8ba8u: goto label_2b8ba8;
        case 0x2b8bacu: goto label_2b8bac;
        case 0x2b8bb0u: goto label_2b8bb0;
        case 0x2b8bb4u: goto label_2b8bb4;
        case 0x2b8bb8u: goto label_2b8bb8;
        case 0x2b8bbcu: goto label_2b8bbc;
        case 0x2b8bc0u: goto label_2b8bc0;
        case 0x2b8bc4u: goto label_2b8bc4;
        case 0x2b8bc8u: goto label_2b8bc8;
        case 0x2b8bccu: goto label_2b8bcc;
        case 0x2b8bd0u: goto label_2b8bd0;
        case 0x2b8bd4u: goto label_2b8bd4;
        case 0x2b8bd8u: goto label_2b8bd8;
        case 0x2b8bdcu: goto label_2b8bdc;
        case 0x2b8be0u: goto label_2b8be0;
        case 0x2b8be4u: goto label_2b8be4;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8becu: goto label_2b8bec;
        case 0x2b8bf0u: goto label_2b8bf0;
        case 0x2b8bf4u: goto label_2b8bf4;
        case 0x2b8bf8u: goto label_2b8bf8;
        case 0x2b8bfcu: goto label_2b8bfc;
        case 0x2b8c00u: goto label_2b8c00;
        case 0x2b8c04u: goto label_2b8c04;
        case 0x2b8c08u: goto label_2b8c08;
        case 0x2b8c0cu: goto label_2b8c0c;
        case 0x2b8c10u: goto label_2b8c10;
        case 0x2b8c14u: goto label_2b8c14;
        case 0x2b8c18u: goto label_2b8c18;
        case 0x2b8c1cu: goto label_2b8c1c;
        case 0x2b8c20u: goto label_2b8c20;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c28u: goto label_2b8c28;
        case 0x2b8c2cu: goto label_2b8c2c;
        case 0x2b8c30u: goto label_2b8c30;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c38u: goto label_2b8c38;
        case 0x2b8c3cu: goto label_2b8c3c;
        case 0x2b8c40u: goto label_2b8c40;
        case 0x2b8c44u: goto label_2b8c44;
        case 0x2b8c48u: goto label_2b8c48;
        case 0x2b8c4cu: goto label_2b8c4c;
        case 0x2b8c50u: goto label_2b8c50;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c58u: goto label_2b8c58;
        case 0x2b8c5cu: goto label_2b8c5c;
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c64u: goto label_2b8c64;
        case 0x2b8c68u: goto label_2b8c68;
        case 0x2b8c6cu: goto label_2b8c6c;
        case 0x2b8c70u: goto label_2b8c70;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c78u: goto label_2b8c78;
        case 0x2b8c7cu: goto label_2b8c7c;
        case 0x2b8c80u: goto label_2b8c80;
        case 0x2b8c84u: goto label_2b8c84;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c8cu: goto label_2b8c8c;
        case 0x2b8c90u: goto label_2b8c90;
        case 0x2b8c94u: goto label_2b8c94;
        case 0x2b8c98u: goto label_2b8c98;
        case 0x2b8c9cu: goto label_2b8c9c;
        case 0x2b8ca0u: goto label_2b8ca0;
        case 0x2b8ca4u: goto label_2b8ca4;
        case 0x2b8ca8u: goto label_2b8ca8;
        case 0x2b8cacu: goto label_2b8cac;
        case 0x2b8cb0u: goto label_2b8cb0;
        case 0x2b8cb4u: goto label_2b8cb4;
        case 0x2b8cb8u: goto label_2b8cb8;
        case 0x2b8cbcu: goto label_2b8cbc;
        case 0x2b8cc0u: goto label_2b8cc0;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cc8u: goto label_2b8cc8;
        case 0x2b8cccu: goto label_2b8ccc;
        case 0x2b8cd0u: goto label_2b8cd0;
        case 0x2b8cd4u: goto label_2b8cd4;
        case 0x2b8cd8u: goto label_2b8cd8;
        case 0x2b8cdcu: goto label_2b8cdc;
        case 0x2b8ce0u: goto label_2b8ce0;
        case 0x2b8ce4u: goto label_2b8ce4;
        case 0x2b8ce8u: goto label_2b8ce8;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8cf0u: goto label_2b8cf0;
        case 0x2b8cf4u: goto label_2b8cf4;
        case 0x2b8cf8u: goto label_2b8cf8;
        case 0x2b8cfcu: goto label_2b8cfc;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d04u: goto label_2b8d04;
        case 0x2b8d08u: goto label_2b8d08;
        case 0x2b8d0cu: goto label_2b8d0c;
        case 0x2b8d10u: goto label_2b8d10;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d18u: goto label_2b8d18;
        case 0x2b8d1cu: goto label_2b8d1c;
        case 0x2b8d20u: goto label_2b8d20;
        case 0x2b8d24u: goto label_2b8d24;
        case 0x2b8d28u: goto label_2b8d28;
        case 0x2b8d2cu: goto label_2b8d2c;
        case 0x2b8d30u: goto label_2b8d30;
        case 0x2b8d34u: goto label_2b8d34;
        case 0x2b8d38u: goto label_2b8d38;
        case 0x2b8d3cu: goto label_2b8d3c;
        case 0x2b8d40u: goto label_2b8d40;
        case 0x2b8d44u: goto label_2b8d44;
        case 0x2b8d48u: goto label_2b8d48;
        case 0x2b8d4cu: goto label_2b8d4c;
        case 0x2b8d50u: goto label_2b8d50;
        case 0x2b8d54u: goto label_2b8d54;
        case 0x2b8d58u: goto label_2b8d58;
        case 0x2b8d5cu: goto label_2b8d5c;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d64u: goto label_2b8d64;
        case 0x2b8d68u: goto label_2b8d68;
        case 0x2b8d6cu: goto label_2b8d6c;
        case 0x2b8d70u: goto label_2b8d70;
        case 0x2b8d74u: goto label_2b8d74;
        case 0x2b8d78u: goto label_2b8d78;
        case 0x2b8d7cu: goto label_2b8d7c;
        case 0x2b8d80u: goto label_2b8d80;
        case 0x2b8d84u: goto label_2b8d84;
        case 0x2b8d88u: goto label_2b8d88;
        case 0x2b8d8cu: goto label_2b8d8c;
        case 0x2b8d90u: goto label_2b8d90;
        case 0x2b8d94u: goto label_2b8d94;
        case 0x2b8d98u: goto label_2b8d98;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8da0u: goto label_2b8da0;
        case 0x2b8da4u: goto label_2b8da4;
        case 0x2b8da8u: goto label_2b8da8;
        case 0x2b8dacu: goto label_2b8dac;
        case 0x2b8db0u: goto label_2b8db0;
        case 0x2b8db4u: goto label_2b8db4;
        case 0x2b8db8u: goto label_2b8db8;
        case 0x2b8dbcu: goto label_2b8dbc;
        case 0x2b8dc0u: goto label_2b8dc0;
        case 0x2b8dc4u: goto label_2b8dc4;
        case 0x2b8dc8u: goto label_2b8dc8;
        case 0x2b8dccu: goto label_2b8dcc;
        case 0x2b8dd0u: goto label_2b8dd0;
        case 0x2b8dd4u: goto label_2b8dd4;
        case 0x2b8dd8u: goto label_2b8dd8;
        case 0x2b8ddcu: goto label_2b8ddc;
        case 0x2b8de0u: goto label_2b8de0;
        case 0x2b8de4u: goto label_2b8de4;
        case 0x2b8de8u: goto label_2b8de8;
        case 0x2b8decu: goto label_2b8dec;
        case 0x2b8df0u: goto label_2b8df0;
        case 0x2b8df4u: goto label_2b8df4;
        case 0x2b8df8u: goto label_2b8df8;
        case 0x2b8dfcu: goto label_2b8dfc;
        case 0x2b8e00u: goto label_2b8e00;
        case 0x2b8e04u: goto label_2b8e04;
        case 0x2b8e08u: goto label_2b8e08;
        case 0x2b8e0cu: goto label_2b8e0c;
        case 0x2b8e10u: goto label_2b8e10;
        case 0x2b8e14u: goto label_2b8e14;
        case 0x2b8e18u: goto label_2b8e18;
        case 0x2b8e1cu: goto label_2b8e1c;
        case 0x2b8e20u: goto label_2b8e20;
        case 0x2b8e24u: goto label_2b8e24;
        case 0x2b8e28u: goto label_2b8e28;
        case 0x2b8e2cu: goto label_2b8e2c;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e34u: goto label_2b8e34;
        case 0x2b8e38u: goto label_2b8e38;
        case 0x2b8e3cu: goto label_2b8e3c;
        case 0x2b8e40u: goto label_2b8e40;
        case 0x2b8e44u: goto label_2b8e44;
        case 0x2b8e48u: goto label_2b8e48;
        case 0x2b8e4cu: goto label_2b8e4c;
        case 0x2b8e50u: goto label_2b8e50;
        case 0x2b8e54u: goto label_2b8e54;
        case 0x2b8e58u: goto label_2b8e58;
        case 0x2b8e5cu: goto label_2b8e5c;
        case 0x2b8e60u: goto label_2b8e60;
        case 0x2b8e64u: goto label_2b8e64;
        case 0x2b8e68u: goto label_2b8e68;
        case 0x2b8e6cu: goto label_2b8e6c;
        case 0x2b8e70u: goto label_2b8e70;
        case 0x2b8e74u: goto label_2b8e74;
        case 0x2b8e78u: goto label_2b8e78;
        case 0x2b8e7cu: goto label_2b8e7c;
        case 0x2b8e80u: goto label_2b8e80;
        case 0x2b8e84u: goto label_2b8e84;
        case 0x2b8e88u: goto label_2b8e88;
        case 0x2b8e8cu: goto label_2b8e8c;
        case 0x2b8e90u: goto label_2b8e90;
        case 0x2b8e94u: goto label_2b8e94;
        case 0x2b8e98u: goto label_2b8e98;
        case 0x2b8e9cu: goto label_2b8e9c;
        case 0x2b8ea0u: goto label_2b8ea0;
        case 0x2b8ea4u: goto label_2b8ea4;
        case 0x2b8ea8u: goto label_2b8ea8;
        case 0x2b8eacu: goto label_2b8eac;
        case 0x2b8eb0u: goto label_2b8eb0;
        case 0x2b8eb4u: goto label_2b8eb4;
        case 0x2b8eb8u: goto label_2b8eb8;
        case 0x2b8ebcu: goto label_2b8ebc;
        case 0x2b8ec0u: goto label_2b8ec0;
        case 0x2b8ec4u: goto label_2b8ec4;
        case 0x2b8ec8u: goto label_2b8ec8;
        case 0x2b8eccu: goto label_2b8ecc;
        case 0x2b8ed0u: goto label_2b8ed0;
        case 0x2b8ed4u: goto label_2b8ed4;
        case 0x2b8ed8u: goto label_2b8ed8;
        case 0x2b8edcu: goto label_2b8edc;
        case 0x2b8ee0u: goto label_2b8ee0;
        case 0x2b8ee4u: goto label_2b8ee4;
        case 0x2b8ee8u: goto label_2b8ee8;
        case 0x2b8eecu: goto label_2b8eec;
        case 0x2b8ef0u: goto label_2b8ef0;
        case 0x2b8ef4u: goto label_2b8ef4;
        case 0x2b8ef8u: goto label_2b8ef8;
        case 0x2b8efcu: goto label_2b8efc;
        case 0x2b8f00u: goto label_2b8f00;
        case 0x2b8f04u: goto label_2b8f04;
        case 0x2b8f08u: goto label_2b8f08;
        case 0x2b8f0cu: goto label_2b8f0c;
        case 0x2b8f10u: goto label_2b8f10;
        case 0x2b8f14u: goto label_2b8f14;
        case 0x2b8f18u: goto label_2b8f18;
        case 0x2b8f1cu: goto label_2b8f1c;
        case 0x2b8f20u: goto label_2b8f20;
        case 0x2b8f24u: goto label_2b8f24;
        case 0x2b8f28u: goto label_2b8f28;
        case 0x2b8f2cu: goto label_2b8f2c;
        case 0x2b8f30u: goto label_2b8f30;
        case 0x2b8f34u: goto label_2b8f34;
        case 0x2b8f38u: goto label_2b8f38;
        case 0x2b8f3cu: goto label_2b8f3c;
        case 0x2b8f40u: goto label_2b8f40;
        case 0x2b8f44u: goto label_2b8f44;
        case 0x2b8f48u: goto label_2b8f48;
        case 0x2b8f4cu: goto label_2b8f4c;
        case 0x2b8f50u: goto label_2b8f50;
        case 0x2b8f54u: goto label_2b8f54;
        case 0x2b8f58u: goto label_2b8f58;
        case 0x2b8f5cu: goto label_2b8f5c;
        case 0x2b8f60u: goto label_2b8f60;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f68u: goto label_2b8f68;
        case 0x2b8f6cu: goto label_2b8f6c;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f74u: goto label_2b8f74;
        case 0x2b8f78u: goto label_2b8f78;
        case 0x2b8f7cu: goto label_2b8f7c;
        case 0x2b8f80u: goto label_2b8f80;
        case 0x2b8f84u: goto label_2b8f84;
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8f90u: goto label_2b8f90;
        case 0x2b8f94u: goto label_2b8f94;
        case 0x2b8f98u: goto label_2b8f98;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fa4u: goto label_2b8fa4;
        case 0x2b8fa8u: goto label_2b8fa8;
        case 0x2b8facu: goto label_2b8fac;
        case 0x2b8fb0u: goto label_2b8fb0;
        case 0x2b8fb4u: goto label_2b8fb4;
        case 0x2b8fb8u: goto label_2b8fb8;
        case 0x2b8fbcu: goto label_2b8fbc;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fc4u: goto label_2b8fc4;
        case 0x2b8fc8u: goto label_2b8fc8;
        case 0x2b8fccu: goto label_2b8fcc;
        case 0x2b8fd0u: goto label_2b8fd0;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fe0u: goto label_2b8fe0;
        case 0x2b8fe4u: goto label_2b8fe4;
        case 0x2b8fe8u: goto label_2b8fe8;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b8ff0u: goto label_2b8ff0;
        case 0x2b8ff4u: goto label_2b8ff4;
        case 0x2b8ff8u: goto label_2b8ff8;
        case 0x2b8ffcu: goto label_2b8ffc;
        case 0x2b9000u: goto label_2b9000;
        case 0x2b9004u: goto label_2b9004;
        case 0x2b9008u: goto label_2b9008;
        case 0x2b900cu: goto label_2b900c;
        case 0x2b9010u: goto label_2b9010;
        case 0x2b9014u: goto label_2b9014;
        case 0x2b9018u: goto label_2b9018;
        case 0x2b901cu: goto label_2b901c;
        case 0x2b9020u: goto label_2b9020;
        case 0x2b9024u: goto label_2b9024;
        case 0x2b9028u: goto label_2b9028;
        case 0x2b902cu: goto label_2b902c;
        case 0x2b9030u: goto label_2b9030;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9038u: goto label_2b9038;
        case 0x2b903cu: goto label_2b903c;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9044u: goto label_2b9044;
        case 0x2b9048u: goto label_2b9048;
        case 0x2b904cu: goto label_2b904c;
        case 0x2b9050u: goto label_2b9050;
        case 0x2b9054u: goto label_2b9054;
        case 0x2b9058u: goto label_2b9058;
        case 0x2b905cu: goto label_2b905c;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9088u: goto label_2b9088;
        case 0x2b908cu: goto label_2b908c;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b909cu: goto label_2b909c;
        case 0x2b90a0u: goto label_2b90a0;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90a8u: goto label_2b90a8;
        case 0x2b90acu: goto label_2b90ac;
        case 0x2b90b0u: goto label_2b90b0;
        case 0x2b90b4u: goto label_2b90b4;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b90bcu: goto label_2b90bc;
        case 0x2b90c0u: goto label_2b90c0;
        case 0x2b90c4u: goto label_2b90c4;
        case 0x2b90c8u: goto label_2b90c8;
        case 0x2b90ccu: goto label_2b90cc;
        case 0x2b90d0u: goto label_2b90d0;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90d8u: goto label_2b90d8;
        case 0x2b90dcu: goto label_2b90dc;
        case 0x2b90e0u: goto label_2b90e0;
        case 0x2b90e4u: goto label_2b90e4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b90ecu: goto label_2b90ec;
        case 0x2b90f0u: goto label_2b90f0;
        case 0x2b90f4u: goto label_2b90f4;
        case 0x2b90f8u: goto label_2b90f8;
        case 0x2b90fcu: goto label_2b90fc;
        case 0x2b9100u: goto label_2b9100;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9108u: goto label_2b9108;
        case 0x2b910cu: goto label_2b910c;
        case 0x2b9110u: goto label_2b9110;
        case 0x2b9114u: goto label_2b9114;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b911cu: goto label_2b911c;
        case 0x2b9120u: goto label_2b9120;
        case 0x2b9124u: goto label_2b9124;
        case 0x2b9128u: goto label_2b9128;
        case 0x2b912cu: goto label_2b912c;
        case 0x2b9130u: goto label_2b9130;
        case 0x2b9134u: goto label_2b9134;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b913cu: goto label_2b913c;
        case 0x2b9140u: goto label_2b9140;
        case 0x2b9144u: goto label_2b9144;
        case 0x2b9148u: goto label_2b9148;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9154u: goto label_2b9154;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9160u: goto label_2b9160;
        case 0x2b9164u: goto label_2b9164;
        case 0x2b9168u: goto label_2b9168;
        case 0x2b916cu: goto label_2b916c;
        case 0x2b9170u: goto label_2b9170;
        case 0x2b9174u: goto label_2b9174;
        case 0x2b9178u: goto label_2b9178;
        case 0x2b917cu: goto label_2b917c;
        case 0x2b9180u: goto label_2b9180;
        case 0x2b9184u: goto label_2b9184;
        case 0x2b9188u: goto label_2b9188;
        case 0x2b918cu: goto label_2b918c;
        case 0x2b9190u: goto label_2b9190;
        case 0x2b9194u: goto label_2b9194;
        case 0x2b9198u: goto label_2b9198;
        case 0x2b919cu: goto label_2b919c;
        case 0x2b91a0u: goto label_2b91a0;
        case 0x2b91a4u: goto label_2b91a4;
        case 0x2b91a8u: goto label_2b91a8;
        case 0x2b91acu: goto label_2b91ac;
        case 0x2b91b0u: goto label_2b91b0;
        case 0x2b91b4u: goto label_2b91b4;
        case 0x2b91b8u: goto label_2b91b8;
        case 0x2b91bcu: goto label_2b91bc;
        case 0x2b91c0u: goto label_2b91c0;
        case 0x2b91c4u: goto label_2b91c4;
        case 0x2b91c8u: goto label_2b91c8;
        case 0x2b91ccu: goto label_2b91cc;
        case 0x2b91d0u: goto label_2b91d0;
        case 0x2b91d4u: goto label_2b91d4;
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91e0u: goto label_2b91e0;
        case 0x2b91e4u: goto label_2b91e4;
        case 0x2b91e8u: goto label_2b91e8;
        case 0x2b91ecu: goto label_2b91ec;
        case 0x2b91f0u: goto label_2b91f0;
        case 0x2b91f4u: goto label_2b91f4;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9204u: goto label_2b9204;
        case 0x2b9208u: goto label_2b9208;
        case 0x2b920cu: goto label_2b920c;
        case 0x2b9210u: goto label_2b9210;
        case 0x2b9214u: goto label_2b9214;
        case 0x2b9218u: goto label_2b9218;
        case 0x2b921cu: goto label_2b921c;
        case 0x2b9220u: goto label_2b9220;
        case 0x2b9224u: goto label_2b9224;
        case 0x2b9228u: goto label_2b9228;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9230u: goto label_2b9230;
        case 0x2b9234u: goto label_2b9234;
        case 0x2b9238u: goto label_2b9238;
        case 0x2b923cu: goto label_2b923c;
        case 0x2b9240u: goto label_2b9240;
        case 0x2b9244u: goto label_2b9244;
        case 0x2b9248u: goto label_2b9248;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b9250u: goto label_2b9250;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b9258u: goto label_2b9258;
        case 0x2b925cu: goto label_2b925c;
        case 0x2b9260u: goto label_2b9260;
        case 0x2b9264u: goto label_2b9264;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b9270u: goto label_2b9270;
        case 0x2b9274u: goto label_2b9274;
        case 0x2b9278u: goto label_2b9278;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9280u: goto label_2b9280;
        case 0x2b9284u: goto label_2b9284;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b928cu: goto label_2b928c;
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b92d8u: goto label_2b92d8;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b92e0u: goto label_2b92e0;
        case 0x2b92e4u: goto label_2b92e4;
        case 0x2b92e8u: goto label_2b92e8;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93a4u: goto label_2b93a4;
        case 0x2b93a8u: goto label_2b93a8;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93b0u: goto label_2b93b0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93c0u: goto label_2b93c0;
        case 0x2b93c4u: goto label_2b93c4;
        case 0x2b93c8u: goto label_2b93c8;
        case 0x2b93ccu: goto label_2b93cc;
        case 0x2b93d0u: goto label_2b93d0;
        case 0x2b93d4u: goto label_2b93d4;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93dcu: goto label_2b93dc;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e4u: goto label_2b93e4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93ecu: goto label_2b93ec;
        case 0x2b93f0u: goto label_2b93f0;
        case 0x2b93f4u: goto label_2b93f4;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b93fcu: goto label_2b93fc;
        case 0x2b9400u: goto label_2b9400;
        case 0x2b9404u: goto label_2b9404;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b940cu: goto label_2b940c;
        case 0x2b9410u: goto label_2b9410;
        case 0x2b9414u: goto label_2b9414;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b941cu: goto label_2b941c;
        case 0x2b9420u: goto label_2b9420;
        case 0x2b9424u: goto label_2b9424;
        case 0x2b9428u: goto label_2b9428;
        case 0x2b942cu: goto label_2b942c;
        case 0x2b9430u: goto label_2b9430;
        case 0x2b9434u: goto label_2b9434;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b943cu: goto label_2b943c;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        default: break;
    }

    ctx->pc = 0x2b8ad8u;

label_2b8ad8:
    // 0x2b8ad8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2b8ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2b8adc:
    // 0x2b8adc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2b8adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_2b8ae0:
    // 0x2b8ae0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2b8ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_2b8ae4:
    // 0x2b8ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ae8:
    // 0x2b8ae8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2b8ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_2b8aec:
    // 0x2b8aec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b8aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2b8af0:
    // 0x2b8af0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2b8af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_2b8af4:
    // 0x2b8af4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2b8af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2b8af8:
    // 0x2b8af8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2b8af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_2b8afc:
    // 0x2b8afc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2b8afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2b8b00:
    // 0x2b8b00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b8b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b8b04:
    // 0x2b8b04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b8b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2b8b08:
    // 0x2b8b08: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2b8b08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2b8b0c:
    // 0x2b8b0c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2b8b0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2b8b10:
    // 0x2b8b10: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2b8b10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2b8b14:
    // 0x2b8b14: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2b8b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2b8b18:
    // 0x2b8b18: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8b1c:
    // 0x2b8b1c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b8b20:
    // 0x2b8b20: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8b24:
    // 0x2b8b24: 0xc0e409a  jal         func_390268
label_2b8b28:
    if (ctx->pc == 0x2B8B28u) {
        ctx->pc = 0x2B8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B24u;
        // 0x2b8b28: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B2Cu;
        goto label_2b8b2c;
    }
    ctx->pc = 0x2B8B24u;
    SET_GPR_U32(ctx, 31, 0x2B8B2Cu);
    ctx->pc = 0x2B8B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B24u;
    // 0x2b8b28: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8B24u, 0x2B8B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B2Cu;
label_2b8b2c:
    // 0x2b8b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b30:
    // 0x2b8b30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b34:
    // 0x2b8b34: 0xc0a352c  jal         func_28D4B0
label_2b8b38:
    if (ctx->pc == 0x2B8B38u) {
        ctx->pc = 0x2B8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B34u;
        // 0x2b8b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B3Cu;
        goto label_2b8b3c;
    }
    ctx->pc = 0x2B8B34u;
    SET_GPR_U32(ctx, 31, 0x2B8B3Cu);
    ctx->pc = 0x2B8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B34u;
    // 0x2b8b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B8B34u, 0x2B8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B3Cu;
label_2b8b3c:
    // 0x2b8b3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b8b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b40:
    // 0x2b8b40: 0x12a00266  beqz        $s5, . + 4 + (0x266 << 2)
label_2b8b44:
    if (ctx->pc == 0x2B8B44u) {
        ctx->pc = 0x2B8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B40u;
        // 0x2b8b44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B48u;
        goto label_2b8b48;
    }
    ctx->pc = 0x2B8B40u;
    {
        const bool branch_taken_0x2b8b40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B40u;
        // 0x2b8b44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b40) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8B48u;
label_2b8b48:
    // 0x2b8b48: 0x9222003d  lbu         $v0, 0x3D($s1)
    ctx->pc = 0x2b8b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_2b8b4c:
    // 0x2b8b4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8b50:
    // 0x2b8b50: 0x10520262  beq         $v0, $s2, . + 4 + (0x262 << 2)
label_2b8b54:
    if (ctx->pc == 0x2B8B54u) {
        ctx->pc = 0x2B8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B50u;
        // 0x2b8b54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B58u;
        goto label_2b8b58;
    }
    ctx->pc = 0x2B8B50u;
    {
        const bool branch_taken_0x2b8b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B50u;
        // 0x2b8b54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b50) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8B58u;
label_2b8b58:
    // 0x2b8b58: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2b8b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2b8b5c:
    // 0x2b8b5c: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2b8b60:
    if (ctx->pc == 0x2B8B60u) {
        ctx->pc = 0x2B8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B5Cu;
        // 0x2b8b60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B64u;
        goto label_2b8b64;
    }
    ctx->pc = 0x2B8B5Cu;
    {
        const bool branch_taken_0x2b8b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B5Cu;
        // 0x2b8b60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b5c) {
            ctx->pc = 0x2B8B6Cu;
            goto label_2b8b6c;
        }
    }
    ctx->pc = 0x2B8B64u;
label_2b8b64:
    // 0x2b8b64: 0x1000025d  b           . + 4 + (0x25D << 2)
label_2b8b68:
    if (ctx->pc == 0x2B8B68u) {
        ctx->pc = 0x2B8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B64u;
        // 0x2b8b68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B6Cu;
        goto label_2b8b6c;
    }
    ctx->pc = 0x2B8B64u;
    {
        const bool branch_taken_0x2b8b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B64u;
        // 0x2b8b68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b64) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8B6Cu;
label_2b8b6c:
    // 0x2b8b6c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2b8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2b8b70:
    // 0x2b8b70: 0x8c64014c  lw          $a0, 0x14C($v1)
    ctx->pc = 0x2b8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_2b8b74:
    // 0x2b8b74: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_2b8b78:
    if (ctx->pc == 0x2B8B78u) {
        ctx->pc = 0x2B8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B74u;
        // 0x2b8b78: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B7Cu;
        goto label_2b8b7c;
    }
    ctx->pc = 0x2B8B74u;
    {
        const bool branch_taken_0x2b8b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B74u;
        // 0x2b8b78: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b74) {
            ctx->pc = 0x2B8B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8b64;
        }
    }
    ctx->pc = 0x2B8B7Cu;
label_2b8b7c:
    // 0x2b8b7c: 0xc088f2c  jal         func_223CB0
label_2b8b80:
    if (ctx->pc == 0x2B8B80u) {
        ctx->pc = 0x2B8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B7Cu;
        // 0x2b8b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B84u;
        goto label_2b8b84;
    }
    ctx->pc = 0x2B8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B84u);
    ctx->pc = 0x2B8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B7Cu;
    // 0x2b8b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x2B8B7Cu, 0x2B8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B84u;
label_2b8b84:
    // 0x2b8b84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b88:
    // 0x2b8b88: 0x1612002c  bne         $s0, $s2, . + 4 + (0x2C << 2)
label_2b8b8c:
    if (ctx->pc == 0x2B8B8Cu) {
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B90u;
        goto label_2b8b90;
    }
    ctx->pc = 0x2B8B88u;
    {
        const bool branch_taken_0x2b8b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b88) {
            ctx->pc = 0x2B8C3Cu;
            goto label_2b8c3c;
        }
    }
    ctx->pc = 0x2B8B90u;
label_2b8b90:
    // 0x2b8b90: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2b8b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2b8b94:
    // 0x2b8b94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b8b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b98:
    // 0x2b8b98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b8b9c:
    // 0x2b8b9c: 0xc088edc  jal         func_223B70
label_2b8ba0:
    if (ctx->pc == 0x2B8BA0u) {
        ctx->pc = 0x2B8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B9Cu;
        // 0x2b8ba0: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BA4u;
        goto label_2b8ba4;
    }
    ctx->pc = 0x2B8B9Cu;
    SET_GPR_U32(ctx, 31, 0x2B8BA4u);
    ctx->pc = 0x2B8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B9Cu;
    // 0x2b8ba0: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2B8B9Cu, 0x2B8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BA4u;
label_2b8ba4:
    // 0x2b8ba4: 0x1050024d  beq         $v0, $s0, . + 4 + (0x24D << 2)
label_2b8ba8:
    if (ctx->pc == 0x2B8BA8u) {
        ctx->pc = 0x2B8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA4u;
        // 0x2b8ba8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BACu;
        goto label_2b8bac;
    }
    ctx->pc = 0x2B8BA4u;
    {
        const bool branch_taken_0x2b8ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA4u;
        // 0x2b8ba8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ba4) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8BACu;
label_2b8bac:
    // 0x2b8bac: 0xc089f98  jal         func_227E60
label_2b8bb0:
    if (ctx->pc == 0x2B8BB0u) {
        ctx->pc = 0x2B8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BACu;
        // 0x2b8bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BB4u;
        goto label_2b8bb4;
    }
    ctx->pc = 0x2B8BACu;
    SET_GPR_U32(ctx, 31, 0x2B8BB4u);
    ctx->pc = 0x2B8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BACu;
    // 0x2b8bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2B8BACu, 0x2B8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BB4u;
label_2b8bb4:
    // 0x2b8bb4: 0x1050ffeb  beq         $v0, $s0, . + 4 + (-0x15 << 2)
label_2b8bb8:
    if (ctx->pc == 0x2B8BB8u) {
        ctx->pc = 0x2B8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BB4u;
        // 0x2b8bb8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BBCu;
        goto label_2b8bbc;
    }
    ctx->pc = 0x2B8BB4u;
    {
        const bool branch_taken_0x2b8bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BB4u;
        // 0x2b8bb8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bb4) {
            ctx->pc = 0x2B8B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8b64;
        }
    }
    ctx->pc = 0x2B8BBCu;
label_2b8bbc:
    // 0x2b8bbc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b8bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8bc0:
    // 0x2b8bc0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2b8bc4:
    if (ctx->pc == 0x2B8BC4u) {
        ctx->pc = 0x2B8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BC0u;
        // 0x2b8bc4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BC8u;
        goto label_2b8bc8;
    }
    ctx->pc = 0x2B8BC0u;
    {
        const bool branch_taken_0x2b8bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8bc0) {
            ctx->pc = 0x2B8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8BC0u;
            // 0x2b8bc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8BC8u;
            goto label_2b8bc8;
        }
    }
    ctx->pc = 0x2B8BC8u;
label_2b8bc8:
    // 0x2b8bc8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2b8bcc:
    // 0x2b8bcc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2b8bccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2b8bd0:
    // 0x2b8bd0: 0x2010  mfhi        $a0
    ctx->pc = 0x2b8bd0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b8bd4:
    // 0x2b8bd4: 0x14800241  bnez        $a0, . + 4 + (0x241 << 2)
label_2b8bd8:
    if (ctx->pc == 0x2B8BD8u) {
        ctx->pc = 0x2B8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD4u;
        // 0x2b8bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BDCu;
        goto label_2b8bdc;
    }
    ctx->pc = 0x2B8BD4u;
    {
        const bool branch_taken_0x2b8bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD4u;
        // 0x2b8bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bd4) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8BDCu;
label_2b8bdc:
    // 0x2b8bdc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b8bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2b8be0:
    // 0x2b8be0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b8be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2b8be4:
    // 0x2b8be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8be8:
    // 0x2b8be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8bec:
    // 0x2b8bec: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x2b8becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2b8bf0:
    // 0x2b8bf0: 0xc0ae21a  jal         func_2B8868
label_2b8bf4:
    if (ctx->pc == 0x2B8BF4u) {
        ctx->pc = 0x2B8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF0u;
        // 0x2b8bf4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BF8u;
        goto label_2b8bf8;
    }
    ctx->pc = 0x2B8BF0u;
    SET_GPR_U32(ctx, 31, 0x2B8BF8u);
    ctx->pc = 0x2B8BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BF0u;
    // 0x2b8bf4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8868u, 0x2B8BF0u, 0x2B8BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BF8u;
label_2b8bf8:
    // 0x2b8bf8: 0x50400238  beql        $v0, $zero, . + 4 + (0x238 << 2)
label_2b8bfc:
    if (ctx->pc == 0x2B8BFCu) {
        ctx->pc = 0x2B8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF8u;
        // 0x2b8bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C00u;
        goto label_2b8c00;
    }
    ctx->pc = 0x2B8BF8u;
    {
        const bool branch_taken_0x2b8bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8bf8) {
            ctx->pc = 0x2B8BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8BF8u;
            // 0x2b8bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8C00u;
label_2b8c00:
    // 0x2b8c00: 0x10530236  beq         $v0, $s3, . + 4 + (0x236 << 2)
label_2b8c04:
    if (ctx->pc == 0x2B8C04u) {
        ctx->pc = 0x2B8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C00u;
        // 0x2b8c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C08u;
        goto label_2b8c08;
    }
    ctx->pc = 0x2B8C00u;
    {
        const bool branch_taken_0x2b8c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C00u;
        // 0x2b8c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c00) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8C08u;
label_2b8c08:
    // 0x2b8c08: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x2b8c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_2b8c0c:
    // 0x2b8c0c: 0x14400233  bnez        $v0, . + 4 + (0x233 << 2)
label_2b8c10:
    if (ctx->pc == 0x2B8C10u) {
        ctx->pc = 0x2B8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C0Cu;
        // 0x2b8c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C14u;
        goto label_2b8c14;
    }
    ctx->pc = 0x2B8C0Cu;
    {
        const bool branch_taken_0x2b8c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C0Cu;
        // 0x2b8c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c0c) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8C14u;
label_2b8c14:
    // 0x2b8c14: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2b8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b8c18:
    // 0x2b8c18: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x2b8c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_2b8c1c:
    // 0x2b8c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8c20:
    // 0x2b8c20: 0x0  nop
    ctx->pc = 0x2b8c20u;
    // NOP
label_2b8c24:
    // 0x2b8c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b8c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b8c28:
    // 0x2b8c28: 0x0  nop
    ctx->pc = 0x2b8c28u;
    // NOP
label_2b8c2c:
    // 0x2b8c2c: 0x4501022b  bc1t        . + 4 + (0x22B << 2)
label_2b8c30:
    if (ctx->pc == 0x2B8C30u) {
        ctx->pc = 0x2B8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C2Cu;
        // 0x2b8c30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C34u;
        goto label_2b8c34;
    }
    ctx->pc = 0x2B8C2Cu;
    {
        const bool branch_taken_0x2b8c2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C2Cu;
        // 0x2b8c30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c2c) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8C34u;
label_2b8c34:
    // 0x2b8c34: 0x10000229  b           . + 4 + (0x229 << 2)
label_2b8c38:
    if (ctx->pc == 0x2B8C38u) {
        ctx->pc = 0x2B8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C34u;
        // 0x2b8c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C3Cu;
        goto label_2b8c3c;
    }
    ctx->pc = 0x2B8C34u;
    {
        const bool branch_taken_0x2b8c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C34u;
        // 0x2b8c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c34) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8C3Cu;
label_2b8c3c:
    // 0x2b8c3c: 0xc088edc  jal         func_223B70
label_2b8c40:
    if (ctx->pc == 0x2B8C40u) {
        ctx->pc = 0x2B8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C3Cu;
        // 0x2b8c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C44u;
        goto label_2b8c44;
    }
    ctx->pc = 0x2B8C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C44u);
    ctx->pc = 0x2B8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C3Cu;
    // 0x2b8c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2B8C3Cu, 0x2B8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C44u;
label_2b8c44:
    // 0x2b8c44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b8c48:
    if (ctx->pc == 0x2B8C48u) {
        ctx->pc = 0x2B8C4Cu;
        goto label_2b8c4c;
    }
    ctx->pc = 0x2B8C44u;
    {
        const bool branch_taken_0x2b8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8c44) {
            ctx->pc = 0x2B8C5Cu;
            goto label_2b8c5c;
        }
    }
    ctx->pc = 0x2B8C4Cu;
label_2b8c4c:
    // 0x2b8c4c: 0xc089f76  jal         func_227DD8
label_2b8c50:
    if (ctx->pc == 0x2B8C50u) {
        ctx->pc = 0x2B8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C4Cu;
        // 0x2b8c50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C54u;
        goto label_2b8c54;
    }
    ctx->pc = 0x2B8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C54u);
    ctx->pc = 0x2B8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C4Cu;
    // 0x2b8c50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2B8C4Cu, 0x2B8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C54u;
label_2b8c54:
    // 0x2b8c54: 0x10400221  beqz        $v0, . + 4 + (0x221 << 2)
label_2b8c58:
    if (ctx->pc == 0x2B8C58u) {
        ctx->pc = 0x2B8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C54u;
        // 0x2b8c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C5Cu;
        goto label_2b8c5c;
    }
    ctx->pc = 0x2B8C54u;
    {
        const bool branch_taken_0x2b8c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C54u;
        // 0x2b8c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c54) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8C5Cu;
label_2b8c5c:
    // 0x2b8c5c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2b8c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2b8c60:
    // 0x2b8c60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b8c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c64:
    // 0x2b8c64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2b8c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2b8c68:
    // 0x2b8c68: 0xc089998  jal         func_226660
label_2b8c6c:
    if (ctx->pc == 0x2B8C6Cu) {
        ctx->pc = 0x2B8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C68u;
        // 0x2b8c6c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C70u;
        goto label_2b8c70;
    }
    ctx->pc = 0x2B8C68u;
    SET_GPR_U32(ctx, 31, 0x2B8C70u);
    ctx->pc = 0x2B8C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C68u;
    // 0x2b8c6c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B8C68u, 0x2B8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C70u;
label_2b8c70:
    // 0x2b8c70: 0x10540128  beq         $v0, $s4, . + 4 + (0x128 << 2)
label_2b8c74:
    if (ctx->pc == 0x2B8C74u) {
        ctx->pc = 0x2B8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C70u;
        // 0x2b8c74: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C78u;
        goto label_2b8c78;
    }
    ctx->pc = 0x2B8C70u;
    {
        const bool branch_taken_0x2b8c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C70u;
        // 0x2b8c74: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c70) {
            ctx->pc = 0x2B9114u;
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B8C78u;
label_2b8c78:
    // 0x2b8c78: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2b8c7c:
    // 0x2b8c7c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2b8c80:
    // 0x2b8c80: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b8c84:
    // 0x2b8c84: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2b8c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2b8c88:
    // 0x2b8c88: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b8c88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c8c:
    // 0x2b8c8c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b8c90:
    // 0x2b8c90: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b8c90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c94:
    // 0x2b8c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b8c98:
    // 0x2b8c98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b8c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c9c:
    // 0x2b8c9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b8c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8ca0:
    // 0x2b8ca0: 0xc0cdb38  jal         func_336CE0
label_2b8ca4:
    if (ctx->pc == 0x2B8CA4u) {
        ctx->pc = 0x2B8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA0u;
        // 0x2b8ca4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CA8u;
        goto label_2b8ca8;
    }
    ctx->pc = 0x2B8CA0u;
    SET_GPR_U32(ctx, 31, 0x2B8CA8u);
    ctx->pc = 0x2B8CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CA0u;
    // 0x2b8ca4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B8CA0u, 0x2B8CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CA8u;
label_2b8ca8:
    // 0x2b8ca8: 0x82a201b0  lb          $v0, 0x1B0($s5)
    ctx->pc = 0x2b8ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 432)));
label_2b8cac:
    // 0x2b8cac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b8cacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b8cb0:
    // 0x2b8cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8cb4:
    // 0x2b8cb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b8cb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2b8cb8:
    // 0x2b8cb8: 0xc4740140  lwc1        $f20, 0x140($v1)
    ctx->pc = 0x2b8cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b8cbc:
    // 0x2b8cbc: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2b8cbcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b8cc0:
    // 0x2b8cc0: 0x16540015  bne         $s2, $s4, . + 4 + (0x15 << 2)
label_2b8cc4:
    if (ctx->pc == 0x2B8CC4u) {
        ctx->pc = 0x2B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CC0u;
        // 0x2b8cc4: 0xc476013c  lwc1        $f22, 0x13C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CC8u;
        goto label_2b8cc8;
    }
    ctx->pc = 0x2B8CC0u;
    {
        const bool branch_taken_0x2b8cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CC0u;
        // 0x2b8cc4: 0xc476013c  lwc1        $f22, 0x13C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8cc0) {
            ctx->pc = 0x2B8D18u;
            goto label_2b8d18;
        }
    }
    ctx->pc = 0x2B8CC8u;
label_2b8cc8:
    // 0x2b8cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ccc:
    // 0x2b8ccc: 0xc047e78  jal         func_11F9E0
label_2b8cd0:
    if (ctx->pc == 0x2B8CD0u) {
        ctx->pc = 0x2B8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CCCu;
        // 0x2b8cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CD4u;
        goto label_2b8cd4;
    }
    ctx->pc = 0x2B8CCCu;
    SET_GPR_U32(ctx, 31, 0x2B8CD4u);
    ctx->pc = 0x2B8CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CCCu;
    // 0x2b8cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x2B8CCCu, 0x2B8CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CD4u;
label_2b8cd4:
    // 0x2b8cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8cd8:
    // 0x2b8cd8: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_2b8cdc:
    if (ctx->pc == 0x2B8CDCu) {
        ctx->pc = 0x2B8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CD8u;
        // 0x2b8cdc: 0x92340030  lbu         $s4, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CE0u;
        goto label_2b8ce0;
    }
    ctx->pc = 0x2B8CD8u;
    {
        const bool branch_taken_0x2b8cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8cd8) {
            ctx->pc = 0x2B8CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8CD8u;
            // 0x2b8cdc: 0x92340030  lbu         $s4, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8D1Cu;
            goto label_2b8d1c;
        }
    }
    ctx->pc = 0x2B8CE0u;
label_2b8ce0:
    // 0x2b8ce0: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2b8ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_2b8ce4:
    // 0x2b8ce4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b8ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b8ce8:
    // 0x2b8ce8: 0x0  nop
    ctx->pc = 0x2b8ce8u;
    // NOP
label_2b8cec:
    // 0x2b8cec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b8cf0:
    if (ctx->pc == 0x2B8CF0u) {
        ctx->pc = 0x2B8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CECu;
        // 0x2b8cf0: 0x8fc2489c  lw          $v0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CF4u;
        goto label_2b8cf4;
    }
    ctx->pc = 0x2B8CECu;
    {
        const bool branch_taken_0x2b8cec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CECu;
        // 0x2b8cf0: 0x8fc2489c  lw          $v0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8cec) {
            ctx->pc = 0x2B8D10u;
            goto label_2b8d10;
        }
    }
    ctx->pc = 0x2B8CF4u;
label_2b8cf4:
    // 0x2b8cf4: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_2b8cf8:
    // 0x2b8cf8: 0x54720008  bnel        $v1, $s2, . + 4 + (0x8 << 2)
label_2b8cfc:
    if (ctx->pc == 0x2B8CFCu) {
        ctx->pc = 0x2B8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CF8u;
        // 0x2b8cfc: 0x92340030  lbu         $s4, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D00u;
        goto label_2b8d00;
    }
    ctx->pc = 0x2B8CF8u;
    {
        const bool branch_taken_0x2b8cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b8cf8) {
            ctx->pc = 0x2B8CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8CF8u;
            // 0x2b8cfc: 0x92340030  lbu         $s4, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8D1Cu;
            goto label_2b8d1c;
        }
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0xc049956  jal         func_126558
label_2b8d04:
    if (ctx->pc == 0x2B8D04u) {
        ctx->pc = 0x2B8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D00u;
        // 0x2b8d04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D08u;
        goto label_2b8d08;
    }
    ctx->pc = 0x2B8D00u;
    SET_GPR_U32(ctx, 31, 0x2B8D08u);
    ctx->pc = 0x2B8D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D00u;
    // 0x2b8d04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126558u, 0x2B8D00u, 0x2B8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D08u;
label_2b8d08:
    // 0x2b8d08: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b8d0c:
    if (ctx->pc == 0x2B8D0Cu) {
        ctx->pc = 0x2B8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D08u;
        // 0x2b8d0c: 0x92340030  lbu         $s4, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D10u;
        goto label_2b8d10;
    }
    ctx->pc = 0x2B8D08u;
    {
        const bool branch_taken_0x2b8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D08u;
        // 0x2b8d0c: 0x92340030  lbu         $s4, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d08) {
            ctx->pc = 0x2B8D1Cu;
            goto label_2b8d1c;
        }
    }
    ctx->pc = 0x2B8D10u;
label_2b8d10:
    // 0x2b8d10: 0xc049a1e  jal         func_126878
label_2b8d14:
    if (ctx->pc == 0x2B8D14u) {
        ctx->pc = 0x2B8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D10u;
        // 0x2b8d14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D18u;
        goto label_2b8d18;
    }
    ctx->pc = 0x2B8D10u;
    SET_GPR_U32(ctx, 31, 0x2B8D18u);
    ctx->pc = 0x2B8D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D10u;
    // 0x2b8d14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126878u, 0x2B8D10u, 0x2B8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D18u;
label_2b8d18:
    // 0x2b8d18: 0x92340030  lbu         $s4, 0x30($s1)
    ctx->pc = 0x2b8d18u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_2b8d1c:
    // 0x2b8d1c: 0x168000ed  bnez        $s4, . + 4 + (0xED << 2)
label_2b8d20:
    if (ctx->pc == 0x2B8D20u) {
        ctx->pc = 0x2B8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D1Cu;
        // 0x2b8d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D24u;
        goto label_2b8d24;
    }
    ctx->pc = 0x2B8D1Cu;
    {
        const bool branch_taken_0x2b8d1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D1Cu;
        // 0x2b8d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d1c) {
            ctx->pc = 0x2B90D4u;
            goto label_2b90d4;
        }
    }
    ctx->pc = 0x2B8D24u;
label_2b8d24:
    // 0x2b8d24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b8d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8d28:
    // 0x2b8d28: 0xc08bfbc  jal         func_22FEF0
label_2b8d2c:
    if (ctx->pc == 0x2B8D2Cu) {
        ctx->pc = 0x2B8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D28u;
        // 0x2b8d2c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D30u;
        goto label_2b8d30;
    }
    ctx->pc = 0x2B8D28u;
    SET_GPR_U32(ctx, 31, 0x2B8D30u);
    ctx->pc = 0x2B8D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D28u;
    // 0x2b8d2c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B8D28u, 0x2B8D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D30u;
label_2b8d30:
    // 0x2b8d30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8d34:
    // 0x2b8d34: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b8d38:
    // 0x2b8d38: 0x5840007f  blezl       $v0, . + 4 + (0x7F << 2)
label_2b8d3c:
    if (ctx->pc == 0x2B8D3Cu) {
        ctx->pc = 0x2B8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D38u;
        // 0x2b8d3c: 0x8c820284  lw          $v0, 0x284($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D40u;
        goto label_2b8d40;
    }
    ctx->pc = 0x2B8D38u;
    {
        const bool branch_taken_0x2b8d38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8d38) {
            ctx->pc = 0x2B8D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8D38u;
            // 0x2b8d3c: 0x8c820284  lw          $v0, 0x284($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F38u;
            goto label_2b8f38;
        }
    }
    ctx->pc = 0x2B8D40u;
label_2b8d40:
    // 0x2b8d40: 0xc0a36c2  jal         func_28DB08
label_2b8d44:
    if (ctx->pc == 0x2B8D44u) {
        ctx->pc = 0x2B8D48u;
        goto label_2b8d48;
    }
    ctx->pc = 0x2B8D40u;
    SET_GPR_U32(ctx, 31, 0x2B8D48u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2B8D40u, 0x2B8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D48u;
label_2b8d48:
    // 0x2b8d48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b8d4c:
    // 0x2b8d4c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2b8d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2b8d50:
    // 0x2b8d50: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2b8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b8d54:
    // 0x2b8d54: 0xa0f809  jalr        $a1
label_2b8d58:
    if (ctx->pc == 0x2B8D58u) {
        ctx->pc = 0x2B8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D54u;
        // 0x2b8d58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D5Cu;
        goto label_2b8d5c;
    }
    ctx->pc = 0x2B8D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2B8D5Cu);
        ctx->pc = 0x2B8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D54u;
        // 0x2b8d58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8D54u, 0x2B8D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B8D5Cu;
label_2b8d5c:
    // 0x2b8d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b8d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8d60:
    // 0x2b8d60: 0x1474006e  bne         $v1, $s4, . + 4 + (0x6E << 2)
label_2b8d64:
    if (ctx->pc == 0x2B8D64u) {
        ctx->pc = 0x2B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D60u;
        // 0x2b8d64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D68u;
        goto label_2b8d68;
    }
    ctx->pc = 0x2B8D60u;
    {
        const bool branch_taken_0x2b8d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D60u;
        // 0x2b8d64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d60) {
            ctx->pc = 0x2B8F1Cu;
            goto label_2b8f1c;
        }
    }
    ctx->pc = 0x2B8D68u;
label_2b8d68:
    // 0x2b8d68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b8d6c:
    // 0x2b8d6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8d70:
    // 0x2b8d70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2b8d74:
    if (ctx->pc == 0x2B8D74u) {
        ctx->pc = 0x2B8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D70u;
        // 0x2b8d74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D78u;
        goto label_2b8d78;
    }
    ctx->pc = 0x2B8D70u;
    {
        const bool branch_taken_0x2b8d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d70) {
            ctx->pc = 0x2B8D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8D70u;
            // 0x2b8d74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8D78u;
            goto label_2b8d78;
        }
    }
    ctx->pc = 0x2B8D78u;
label_2b8d78:
    // 0x2b8d78: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2b8d7c:
    // 0x2b8d7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2b8d7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2b8d80:
    // 0x2b8d80: 0x2010  mfhi        $a0
    ctx->pc = 0x2b8d80u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b8d84:
    // 0x2b8d84: 0x148001d5  bnez        $a0, . + 4 + (0x1D5 << 2)
label_2b8d88:
    if (ctx->pc == 0x2B8D88u) {
        ctx->pc = 0x2B8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D84u;
        // 0x2b8d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D8Cu;
        goto label_2b8d8c;
    }
    ctx->pc = 0x2B8D84u;
    {
        const bool branch_taken_0x2b8d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D84u;
        // 0x2b8d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d84) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8D8Cu;
label_2b8d8c:
    // 0x2b8d8c: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2b8d8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2b8d90:
    // 0x2b8d90: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2b8d94:
    // 0x2b8d94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b8d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b8d98:
    // 0x2b8d98: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x2b8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_2b8d9c:
    // 0x2b8d9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8da0:
    // 0x2b8da0: 0xc136b80  jal         func_4DAE00
label_2b8da4:
    if (ctx->pc == 0x2B8DA4u) {
        ctx->pc = 0x2B8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DA0u;
        // 0x2b8da4: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DA8u;
        goto label_2b8da8;
    }
    ctx->pc = 0x2B8DA0u;
    SET_GPR_U32(ctx, 31, 0x2B8DA8u);
    ctx->pc = 0x2B8DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DA0u;
    // 0x2b8da4: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B8DA0u, 0x2B8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DA8u;
label_2b8da8:
    // 0x2b8da8: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_2b8dac:
    if (ctx->pc == 0x2B8DACu) {
        ctx->pc = 0x2B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DA8u;
        // 0x2b8dac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DB0u;
        goto label_2b8db0;
    }
    ctx->pc = 0x2B8DA8u;
    {
        const bool branch_taken_0x2b8da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DA8u;
        // 0x2b8dac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8da8) {
            ctx->pc = 0x2B9114u;
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B8DB0u;
label_2b8db0:
    // 0x2b8db0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8db4:
    // 0x2b8db4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2b8db8:
    // 0x2b8db8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b8db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2b8dbc:
    // 0x2b8dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8dc0:
    // 0x2b8dc0: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2b8dc4:
    // 0x2b8dc4: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x2b8dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
label_2b8dc8:
    // 0x2b8dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8dcc:
    // 0x2b8dcc: 0xc136d6c  jal         func_4DB5B0
label_2b8dd0:
    if (ctx->pc == 0x2B8DD0u) {
        ctx->pc = 0x2B8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DCCu;
        // 0x2b8dd0: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DD4u;
        goto label_2b8dd4;
    }
    ctx->pc = 0x2B8DCCu;
    SET_GPR_U32(ctx, 31, 0x2B8DD4u);
    ctx->pc = 0x2B8DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DCCu;
    // 0x2b8dd0: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2B8DCCu, 0x2B8DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DD4u;
label_2b8dd4:
    // 0x2b8dd4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2b8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_2b8dd8:
    // 0x2b8dd8: 0xc0e409a  jal         func_390268
label_2b8ddc:
    if (ctx->pc == 0x2B8DDCu) {
        ctx->pc = 0x2B8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DD8u;
        // 0x2b8ddc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DE0u;
        goto label_2b8de0;
    }
    ctx->pc = 0x2B8DD8u;
    SET_GPR_U32(ctx, 31, 0x2B8DE0u);
    ctx->pc = 0x2B8DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DD8u;
    // 0x2b8ddc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8DD8u, 0x2B8DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DE0u;
label_2b8de0:
    // 0x2b8de0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b8de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8de4:
    // 0x2b8de4: 0x124001bd  beqz        $s2, . + 4 + (0x1BD << 2)
label_2b8de8:
    if (ctx->pc == 0x2B8DE8u) {
        ctx->pc = 0x2B8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DE4u;
        // 0x2b8de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DECu;
        goto label_2b8dec;
    }
    ctx->pc = 0x2B8DE4u;
    {
        const bool branch_taken_0x2b8de4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DE4u;
        // 0x2b8de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8de4) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8DECu;
label_2b8dec:
    // 0x2b8dec: 0xc08a10a  jal         func_228428
label_2b8df0:
    if (ctx->pc == 0x2B8DF0u) {
        ctx->pc = 0x2B8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DECu;
        // 0x2b8df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DF4u;
        goto label_2b8df4;
    }
    ctx->pc = 0x2B8DECu;
    SET_GPR_U32(ctx, 31, 0x2B8DF4u);
    ctx->pc = 0x2B8DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DECu;
    // 0x2b8df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2B8DECu, 0x2B8DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DF4u;
label_2b8df4:
    // 0x2b8df4: 0x145401b9  bne         $v0, $s4, . + 4 + (0x1B9 << 2)
label_2b8df8:
    if (ctx->pc == 0x2B8DF8u) {
        ctx->pc = 0x2B8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DF4u;
        // 0x2b8df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8DFCu;
        goto label_2b8dfc;
    }
    ctx->pc = 0x2B8DF4u;
    {
        const bool branch_taken_0x2b8df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DF4u;
        // 0x2b8df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8df4) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8DFCu;
label_2b8dfc:
    // 0x2b8dfc: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2b8dfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_2b8e00:
    // 0x2b8e00: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2b8e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b8e04:
    // 0x2b8e04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b8e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b8e08:
    // 0x2b8e08: 0x0  nop
    ctx->pc = 0x2b8e08u;
    // NOP
label_2b8e0c:
    // 0x2b8e0c: 0x450000c1  bc1f        . + 4 + (0xC1 << 2)
label_2b8e10:
    if (ctx->pc == 0x2B8E10u) {
        ctx->pc = 0x2B8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E0Cu;
        // 0x2b8e10: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E14u;
        goto label_2b8e14;
    }
    ctx->pc = 0x2B8E0Cu;
    {
        const bool branch_taken_0x2b8e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E0Cu;
        // 0x2b8e10: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e0c) {
            ctx->pc = 0x2B9114u;
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B8E14u;
label_2b8e14:
    // 0x2b8e14: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2b8e14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2b8e18:
    // 0x2b8e18: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2b8e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2b8e1c:
    // 0x2b8e1c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b8e20:
    // 0x2b8e20: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b8e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b8e24:
    // 0x2b8e24: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2b8e28:
    // 0x2b8e28: 0xc0cd8ec  jal         func_3363B0
label_2b8e2c:
    if (ctx->pc == 0x2B8E2Cu) {
        ctx->pc = 0x2B8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E28u;
        // 0x2b8e2c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E30u;
        goto label_2b8e30;
    }
    ctx->pc = 0x2B8E28u;
    SET_GPR_U32(ctx, 31, 0x2B8E30u);
    ctx->pc = 0x2B8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E28u;
    // 0x2b8e2c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B8E28u, 0x2B8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E30u;
label_2b8e30:
    // 0x2b8e30: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2b8e34:
    // 0x2b8e34: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2b8e34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2b8e38:
    // 0x2b8e38: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b8e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b8e3c:
    // 0x2b8e3c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x2b8e3cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8e40:
    // 0x2b8e40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b8e40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b8e44:
    // 0x2b8e44: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2b8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2b8e48:
    // 0x2b8e48: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b8e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2b8e4c:
    // 0x2b8e4c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2b8e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2b8e50:
    // 0x2b8e50: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2b8e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2b8e54:
    // 0x2b8e54: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b8e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b8e58:
    // 0x2b8e58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b8e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b8e5c:
    // 0x2b8e5c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b8e5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b8e60:
    // 0x2b8e60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b8e60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b8e64:
    // 0x2b8e64: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b8e64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2b8e68:
    // 0x2b8e68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b8e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b8e6c:
    // 0x2b8e6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b8e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b8e70:
    // 0x2b8e70: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2b8e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b8e74:
    // 0x2b8e74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b8e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b8e78:
    // 0x2b8e78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b8e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b8e7c:
    // 0x2b8e7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b8e7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2b8e80:
    // 0x2b8e80: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b8e80u;
    // VWAITQ (Q already resolved in this runtime)
label_2b8e84:
    // 0x2b8e84: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2b8e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b8e88:
    // 0x2b8e88: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b8e88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b8e8c:
    // 0x2b8e8c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2b8e90:
    // 0x2b8e90: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2b8e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2b8e94:
    // 0x2b8e94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b8e94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b8e98:
    // 0x2b8e98: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2b8e98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b8e9c:
    // 0x2b8e9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2b8e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b8ea0:
    // 0x2b8ea0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2b8ea0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2b8ea4:
    // 0x2b8ea4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b8ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2b8ea8:
    // 0x2b8ea8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b8ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8eac:
    // 0x2b8eac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b8eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2b8eb0:
    // 0x2b8eb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b8eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b8eb4:
    // 0x2b8eb4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2b8eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2b8eb8:
    // 0x2b8eb8: 0x45000096  bc1f        . + 4 + (0x96 << 2)
label_2b8ebc:
    if (ctx->pc == 0x2B8EBCu) {
        ctx->pc = 0x2B8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EB8u;
        // 0x2b8ebc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8EC0u;
        goto label_2b8ec0;
    }
    ctx->pc = 0x2B8EB8u;
    {
        const bool branch_taken_0x2b8eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EB8u;
        // 0x2b8ebc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8eb8) {
            ctx->pc = 0x2B9114u;
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B8EC0u;
label_2b8ec0:
    // 0x2b8ec0: 0xc0a36c8  jal         func_28DB20
label_2b8ec4:
    if (ctx->pc == 0x2B8EC4u) {
        ctx->pc = 0x2B8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EC0u;
        // 0x2b8ec4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8EC8u;
        goto label_2b8ec8;
    }
    ctx->pc = 0x2B8EC0u;
    SET_GPR_U32(ctx, 31, 0x2B8EC8u);
    ctx->pc = 0x2B8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8EC0u;
    // 0x2b8ec4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B8EC0u, 0x2B8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8EC8u;
label_2b8ec8:
    // 0x2b8ec8: 0x14540184  bne         $v0, $s4, . + 4 + (0x184 << 2)
label_2b8ecc:
    if (ctx->pc == 0x2B8ECCu) {
        ctx->pc = 0x2B8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EC8u;
        // 0x2b8ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8ED0u;
        goto label_2b8ed0;
    }
    ctx->pc = 0x2B8EC8u;
    {
        const bool branch_taken_0x2b8ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EC8u;
        // 0x2b8ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ec8) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8ED0u;
label_2b8ed0:
    // 0x2b8ed0: 0xc0a367c  jal         func_28D9F0
label_2b8ed4:
    if (ctx->pc == 0x2B8ED4u) {
        ctx->pc = 0x2B8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ED0u;
        // 0x2b8ed4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8ED8u;
        goto label_2b8ed8;
    }
    ctx->pc = 0x2B8ED0u;
    SET_GPR_U32(ctx, 31, 0x2B8ED8u);
    ctx->pc = 0x2B8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8ED0u;
    // 0x2b8ed4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B8ED0u, 0x2B8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8ED8u;
label_2b8ed8:
    // 0x2b8ed8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b8edc:
    if (ctx->pc == 0x2B8EDCu) {
        ctx->pc = 0x2B8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ED8u;
        // 0x2b8edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8EE0u;
        goto label_2b8ee0;
    }
    ctx->pc = 0x2B8ED8u;
    {
        const bool branch_taken_0x2b8ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ED8u;
        // 0x2b8edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ed8) {
            ctx->pc = 0x2B8F08u;
            goto label_2b8f08;
        }
    }
    ctx->pc = 0x2B8EE0u;
label_2b8ee0:
    // 0x2b8ee0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b8ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b8ee4:
    // 0x2b8ee4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b8ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b8ee8:
    // 0x2b8ee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b8ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b8eec:
    // 0x2b8eec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b8eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8ef0:
    // 0x2b8ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ef4:
    // 0x2b8ef4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b8ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8ef8:
    // 0x2b8ef8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b8ef8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2b8efc:
    // 0x2b8efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b8efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f00:
    // 0x2b8f00: 0xc0be968  jal         func_2FA5A0
label_2b8f04:
    if (ctx->pc == 0x2B8F04u) {
        ctx->pc = 0x2B8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F00u;
        // 0x2b8f04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F08u;
        goto label_2b8f08;
    }
    ctx->pc = 0x2B8F00u;
    SET_GPR_U32(ctx, 31, 0x2B8F08u);
    ctx->pc = 0x2B8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F00u;
    // 0x2b8f04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2B8F00u, 0x2B8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F08u;
label_2b8f08:
    // 0x2b8f08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8f0c:
    // 0x2b8f0c: 0xc0a2ab0  jal         func_28AAC0
label_2b8f10:
    if (ctx->pc == 0x2B8F10u) {
        ctx->pc = 0x2B8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F0Cu;
        // 0x2b8f10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F14u;
        goto label_2b8f14;
    }
    ctx->pc = 0x2B8F0Cu;
    SET_GPR_U32(ctx, 31, 0x2B8F14u);
    ctx->pc = 0x2B8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F0Cu;
    // 0x2b8f10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2B8F0Cu, 0x2B8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F14u;
label_2b8f14:
    // 0x2b8f14: 0x10000171  b           . + 4 + (0x171 << 2)
label_2b8f18:
    if (ctx->pc == 0x2B8F18u) {
        ctx->pc = 0x2B8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F14u;
        // 0x2b8f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F1Cu;
        goto label_2b8f1c;
    }
    ctx->pc = 0x2B8F14u;
    {
        const bool branch_taken_0x2b8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F14u;
        // 0x2b8f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f14) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8F1Cu;
label_2b8f1c:
    // 0x2b8f1c: 0x1462016f  bne         $v1, $v0, . + 4 + (0x16F << 2)
label_2b8f20:
    if (ctx->pc == 0x2B8F20u) {
        ctx->pc = 0x2B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F1Cu;
        // 0x2b8f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F24u;
        goto label_2b8f24;
    }
    ctx->pc = 0x2B8F1Cu;
    {
        const bool branch_taken_0x2b8f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F1Cu;
        // 0x2b8f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f1c) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8F24u;
label_2b8f24:
    // 0x2b8f24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8f28:
    // 0x2b8f28: 0xc0a2ab0  jal         func_28AAC0
label_2b8f2c:
    if (ctx->pc == 0x2B8F2Cu) {
        ctx->pc = 0x2B8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F28u;
        // 0x2b8f2c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F30u;
        goto label_2b8f30;
    }
    ctx->pc = 0x2B8F28u;
    SET_GPR_U32(ctx, 31, 0x2B8F30u);
    ctx->pc = 0x2B8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F28u;
    // 0x2b8f2c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2B8F28u, 0x2B8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F30u;
label_2b8f30:
    // 0x2b8f30: 0x1000016a  b           . + 4 + (0x16A << 2)
label_2b8f34:
    if (ctx->pc == 0x2B8F34u) {
        ctx->pc = 0x2B8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F30u;
        // 0x2b8f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F38u;
        goto label_2b8f38;
    }
    ctx->pc = 0x2B8F30u;
    {
        const bool branch_taken_0x2b8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F30u;
        // 0x2b8f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f30) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8F38u;
label_2b8f38:
    // 0x2b8f38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b8f3c:
    if (ctx->pc == 0x2B8F3Cu) {
        ctx->pc = 0x2B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F38u;
        // 0x2b8f3c: 0xac800284  sw          $zero, 0x284($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F40u;
        goto label_2b8f40;
    }
    ctx->pc = 0x2B8F38u;
    {
        const bool branch_taken_0x2b8f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f38) {
            ctx->pc = 0x2B8F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F38u;
            // 0x2b8f3c: 0xac800284  sw          $zero, 0x284($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F40u;
            goto label_2b8f40;
        }
    }
    ctx->pc = 0x2B8F40u;
label_2b8f40:
    // 0x2b8f40: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b8f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2b8f44:
    // 0x2b8f44: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2b8f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b8f48:
    // 0x2b8f48: 0x0  nop
    ctx->pc = 0x2b8f48u;
    // NOP
label_2b8f4c:
    // 0x2b8f4c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_2b8f50:
    if (ctx->pc == 0x2B8F50u) {
        ctx->pc = 0x2B8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F4Cu;
        // 0x2b8f50: 0x9222003e  lbu         $v0, 0x3E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F54u;
        goto label_2b8f54;
    }
    ctx->pc = 0x2B8F4Cu;
    {
        const bool branch_taken_0x2b8f4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8f4c) {
            ctx->pc = 0x2B8F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F4Cu;
            // 0x2b8f50: 0x9222003e  lbu         $v0, 0x3E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F8Cu;
            goto label_2b8f8c;
        }
    }
    ctx->pc = 0x2B8F54u;
label_2b8f54:
    // 0x2b8f54: 0xc08bfa0  jal         func_22FE80
label_2b8f58:
    if (ctx->pc == 0x2B8F58u) {
        ctx->pc = 0x2B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F54u;
        // 0x2b8f58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F5Cu;
        goto label_2b8f5c;
    }
    ctx->pc = 0x2B8F54u;
    SET_GPR_U32(ctx, 31, 0x2B8F5Cu);
    ctx->pc = 0x2B8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F54u;
    // 0x2b8f58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B8F54u, 0x2B8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F5Cu;
label_2b8f5c:
    // 0x2b8f5c: 0xc0a36c8  jal         func_28DB20
label_2b8f60:
    if (ctx->pc == 0x2B8F60u) {
        ctx->pc = 0x2B8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F5Cu;
        // 0x2b8f60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F64u;
        goto label_2b8f64;
    }
    ctx->pc = 0x2B8F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8F64u);
    ctx->pc = 0x2B8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F5Cu;
    // 0x2b8f60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B8F5Cu, 0x2B8F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F64u;
label_2b8f64:
    // 0x2b8f64: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_2b8f68:
    if (ctx->pc == 0x2B8F68u) {
        ctx->pc = 0x2B8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F64u;
        // 0x2b8f68: 0x2404f7ff  addiu       $a0, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F6Cu;
        goto label_2b8f6c;
    }
    ctx->pc = 0x2B8F64u;
    {
        const bool branch_taken_0x2b8f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F64u;
        // 0x2b8f68: 0x2404f7ff  addiu       $a0, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f64) {
            ctx->pc = 0x2B9114u;
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B8F6Cu;
label_2b8f6c:
    // 0x2b8f6c: 0xde6300e0  ld          $v1, 0xE0($s3)
    ctx->pc = 0x2b8f6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2b8f70:
    // 0x2b8f70: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2b8f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2b8f74:
    // 0x2b8f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f78:
    // 0x2b8f78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b8f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2b8f7c:
    // 0x2b8f7c: 0xfe6300e0  sd          $v1, 0xE0($s3)
    ctx->pc = 0x2b8f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 3));
label_2b8f80:
    // 0x2b8f80: 0xa2340030  sb          $s4, 0x30($s1)
    ctx->pc = 0x2b8f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 20));
label_2b8f84:
    // 0x2b8f84: 0x10000155  b           . + 4 + (0x155 << 2)
label_2b8f88:
    if (ctx->pc == 0x2B8F88u) {
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F8Cu;
        goto label_2b8f8c;
    }
    ctx->pc = 0x2B8F84u;
    {
        const bool branch_taken_0x2b8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f84) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B8F8Cu;
label_2b8f8c:
    // 0x2b8f8c: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
label_2b8f90:
    if (ctx->pc == 0x2B8F90u) {
        ctx->pc = 0x2B8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F8Cu;
        // 0x2b8f90: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F94u;
        goto label_2b8f94;
    }
    ctx->pc = 0x2B8F8Cu;
    {
        const bool branch_taken_0x2b8f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b8f8c) {
            ctx->pc = 0x2B8F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F8Cu;
            // 0x2b8f90: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FBCu;
            goto label_2b8fbc;
        }
    }
    ctx->pc = 0x2B8F94u;
label_2b8f94:
    // 0x2b8f94: 0xa220003e  sb          $zero, 0x3E($s1)
    ctx->pc = 0x2b8f94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 0));
label_2b8f98:
    // 0x2b8f98: 0xc089bdc  jal         func_226F70
label_2b8f9c:
    if (ctx->pc == 0x2B8F9Cu) {
        ctx->pc = 0x2B8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F98u;
        // 0x2b8f9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FA0u;
        goto label_2b8fa0;
    }
    ctx->pc = 0x2B8F98u;
    SET_GPR_U32(ctx, 31, 0x2B8FA0u);
    ctx->pc = 0x2B8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F98u;
    // 0x2b8f9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B8F98u, 0x2B8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FA0u;
label_2b8fa0:
    // 0x2b8fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fa4:
    // 0x2b8fa4: 0xc0a7c8c  jal         func_29F230
label_2b8fa8:
    if (ctx->pc == 0x2B8FA8u) {
        ctx->pc = 0x2B8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA4u;
        // 0x2b8fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FACu;
        goto label_2b8fac;
    }
    ctx->pc = 0x2B8FA4u;
    SET_GPR_U32(ctx, 31, 0x2B8FACu);
    ctx->pc = 0x2B8FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FA4u;
    // 0x2b8fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2B8FA4u, 0x2B8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FACu;
label_2b8fac:
    // 0x2b8fac: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2b8fb0:
    if (ctx->pc == 0x2B8FB0u) {
        ctx->pc = 0x2B8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FACu;
        // 0x2b8fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FB4u;
        goto label_2b8fb4;
    }
    ctx->pc = 0x2B8FACu;
    {
        const bool branch_taken_0x2b8fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FACu;
        // 0x2b8fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fac) {
            ctx->pc = 0x2B9090u;
            goto label_2b9090;
        }
    }
    ctx->pc = 0x2B8FB4u;
label_2b8fb4:
    // 0x2b8fb4: 0x10000072  b           . + 4 + (0x72 << 2)
label_2b8fb8:
    if (ctx->pc == 0x2B8FB8u) {
        ctx->pc = 0x2B8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FB4u;
        // 0x2b8fb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FBCu;
        goto label_2b8fbc;
    }
    ctx->pc = 0x2B8FB4u;
    {
        const bool branch_taken_0x2b8fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FB4u;
        // 0x2b8fb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fb4) {
            ctx->pc = 0x2B9180u;
            goto label_2b9180;
        }
    }
    ctx->pc = 0x2B8FBCu;
label_2b8fbc:
    // 0x2b8fbc: 0xc136b80  jal         func_4DAE00
label_2b8fc0:
    if (ctx->pc == 0x2B8FC0u) {
        ctx->pc = 0x2B8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FBCu;
        // 0x2b8fc0: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FC4u;
        goto label_2b8fc4;
    }
    ctx->pc = 0x2B8FBCu;
    SET_GPR_U32(ctx, 31, 0x2B8FC4u);
    ctx->pc = 0x2B8FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FBCu;
    // 0x2b8fc0: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B8FBCu, 0x2B8FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FC4u;
label_2b8fc4:
    // 0x2b8fc4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2b8fc8:
    if (ctx->pc == 0x2B8FC8u) {
        ctx->pc = 0x2B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC4u;
        // 0x2b8fc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FCCu;
        goto label_2b8fcc;
    }
    ctx->pc = 0x2B8FC4u;
    {
        const bool branch_taken_0x2b8fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC4u;
        // 0x2b8fc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fc4) {
            ctx->pc = 0x2B9090u;
            goto label_2b9090;
        }
    }
    ctx->pc = 0x2B8FCCu;
label_2b8fcc:
    // 0x2b8fcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8fd0:
    // 0x2b8fd0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b8fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2b8fd4:
    // 0x2b8fd4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b8fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2b8fd8:
    // 0x2b8fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8fdc:
    // 0x2b8fdc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b8fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2b8fe0:
    // 0x2b8fe0: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x2b8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
label_2b8fe4:
    // 0x2b8fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fe8:
    // 0x2b8fe8: 0xc136d6c  jal         func_4DB5B0
label_2b8fec:
    if (ctx->pc == 0x2B8FECu) {
        ctx->pc = 0x2B8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FE8u;
        // 0x2b8fec: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FF0u;
        goto label_2b8ff0;
    }
    ctx->pc = 0x2B8FE8u;
    SET_GPR_U32(ctx, 31, 0x2B8FF0u);
    ctx->pc = 0x2B8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FE8u;
    // 0x2b8fec: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2B8FE8u, 0x2B8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FF0u;
label_2b8ff0:
    // 0x2b8ff0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2b8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_2b8ff4:
    // 0x2b8ff4: 0xc0e409a  jal         func_390268
label_2b8ff8:
    if (ctx->pc == 0x2B8FF8u) {
        ctx->pc = 0x2B8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FF4u;
        // 0x2b8ff8: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FFCu;
        goto label_2b8ffc;
    }
    ctx->pc = 0x2B8FF4u;
    SET_GPR_U32(ctx, 31, 0x2B8FFCu);
    ctx->pc = 0x2B8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FF4u;
    // 0x2b8ff8: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8FF4u, 0x2B8FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FFCu;
label_2b8ffc:
    // 0x2b8ffc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2b9000:
    if (ctx->pc == 0x2B9000u) {
        ctx->pc = 0x2B9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FFCu;
        // 0x2b9000: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9004u;
        goto label_2b9004;
    }
    ctx->pc = 0x2B8FFCu;
    {
        const bool branch_taken_0x2b8ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FFCu;
        // 0x2b9000: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ffc) {
            ctx->pc = 0x2B9090u;
            goto label_2b9090;
        }
    }
    ctx->pc = 0x2B9004u;
label_2b9004:
    // 0x2b9004: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2b9004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_2b9008:
    // 0x2b9008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b9008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b900c:
    // 0x2b900c: 0x0  nop
    ctx->pc = 0x2b900cu;
    // NOP
label_2b9010:
    // 0x2b9010: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2b9014:
    if (ctx->pc == 0x2B9014u) {
        ctx->pc = 0x2B9018u;
        goto label_2b9018;
    }
    ctx->pc = 0x2B9010u;
    {
        const bool branch_taken_0x2b9010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9010) {
            ctx->pc = 0x2B9090u;
            goto label_2b9090;
        }
    }
    ctx->pc = 0x2B9018u;
label_2b9018:
    // 0x2b9018: 0xc0a36c8  jal         func_28DB20
label_2b901c:
    if (ctx->pc == 0x2B901Cu) {
        ctx->pc = 0x2B901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9018u;
        // 0x2b901c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9020u;
        goto label_2b9020;
    }
    ctx->pc = 0x2B9018u;
    SET_GPR_U32(ctx, 31, 0x2B9020u);
    ctx->pc = 0x2B901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9018u;
    // 0x2b901c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B9018u, 0x2B9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9020u;
label_2b9020:
    // 0x2b9020: 0x1454001b  bne         $v0, $s4, . + 4 + (0x1B << 2)
label_2b9024:
    if (ctx->pc == 0x2B9024u) {
        ctx->pc = 0x2B9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9020u;
        // 0x2b9024: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9028u;
        goto label_2b9028;
    }
    ctx->pc = 0x2B9020u;
    {
        const bool branch_taken_0x2b9020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9020u;
        // 0x2b9024: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9020) {
            ctx->pc = 0x2B9090u;
            goto label_2b9090;
        }
    }
    ctx->pc = 0x2B9028u;
label_2b9028:
    // 0x2b9028: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2b9028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2b902c:
    // 0x2b902c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b902cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b9030:
    // 0x2b9030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9034:
    // 0x2b9034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b9034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b9038:
    // 0x2b9038: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2b9038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b903c:
    // 0x2b903c: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x2b903cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_2b9040:
    // 0x2b9040: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2b9040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2b9044:
    // 0x2b9044: 0xc088708  jal         func_221C20
label_2b9048:
    if (ctx->pc == 0x2B9048u) {
        ctx->pc = 0x2B9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9044u;
        // 0x2b9048: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B904Cu;
        goto label_2b904c;
    }
    ctx->pc = 0x2B9044u;
    SET_GPR_U32(ctx, 31, 0x2B904Cu);
    ctx->pc = 0x2B9048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9044u;
    // 0x2b9048: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2B9044u, 0x2B904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B904Cu;
label_2b904c:
    // 0x2b904c: 0xc0a367c  jal         func_28D9F0
label_2b9050:
    if (ctx->pc == 0x2B9050u) {
        ctx->pc = 0x2B9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B904Cu;
        // 0x2b9050: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9054u;
        goto label_2b9054;
    }
    ctx->pc = 0x2B904Cu;
    SET_GPR_U32(ctx, 31, 0x2B9054u);
    ctx->pc = 0x2B9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B904Cu;
    // 0x2b9050: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B904Cu, 0x2B9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9054u;
label_2b9054:
    // 0x2b9054: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b9058:
    if (ctx->pc == 0x2B9058u) {
        ctx->pc = 0x2B9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9054u;
        // 0x2b9058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B905Cu;
        goto label_2b905c;
    }
    ctx->pc = 0x2B9054u;
    {
        const bool branch_taken_0x2b9054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9054u;
        // 0x2b9058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9054) {
            ctx->pc = 0x2B9084u;
            goto label_2b9084;
        }
    }
    ctx->pc = 0x2B905Cu;
label_2b905c:
    // 0x2b905c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b9060:
    // 0x2b9060: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b9060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b9064:
    // 0x2b9064: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b9068:
    // 0x2b9068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b906c:
    // 0x2b906c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9070:
    // 0x2b9070: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b9070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9074:
    // 0x2b9074: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b9074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2b9078:
    // 0x2b9078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b9078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b907c:
    // 0x2b907c: 0xc0be968  jal         func_2FA5A0
label_2b9080:
    if (ctx->pc == 0x2B9080u) {
        ctx->pc = 0x2B9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B907Cu;
        // 0x2b9080: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9084u;
        goto label_2b9084;
    }
    ctx->pc = 0x2B907Cu;
    SET_GPR_U32(ctx, 31, 0x2B9084u);
    ctx->pc = 0x2B9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B907Cu;
    // 0x2b9080: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2B907Cu, 0x2B9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9084u;
label_2b9084:
    // 0x2b9084: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b9084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9088:
    // 0x2b9088: 0xc0a2ab0  jal         func_28AAC0
label_2b908c:
    if (ctx->pc == 0x2B908Cu) {
        ctx->pc = 0x2B908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9088u;
        // 0x2b908c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9090u;
        goto label_2b9090;
    }
    ctx->pc = 0x2B9088u;
    SET_GPR_U32(ctx, 31, 0x2B9090u);
    ctx->pc = 0x2B908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9088u;
    // 0x2b908c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2B9088u, 0x2B9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9090u;
label_2b9090:
    // 0x2b9090: 0xc0a367c  jal         func_28D9F0
label_2b9094:
    if (ctx->pc == 0x2B9094u) {
        ctx->pc = 0x2B9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9090u;
        // 0x2b9094: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9098u;
        goto label_2b9098;
    }
    ctx->pc = 0x2B9090u;
    SET_GPR_U32(ctx, 31, 0x2B9098u);
    ctx->pc = 0x2B9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9090u;
    // 0x2b9094: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B9090u, 0x2B9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9098u;
label_2b9098:
    // 0x2b9098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b909c:
    // 0x2b909c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_2b90a0:
    if (ctx->pc == 0x2B90A0u) {
        ctx->pc = 0x2B90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B909Cu;
        // 0x2b90a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90A4u;
        goto label_2b90a4;
    }
    ctx->pc = 0x2B909Cu;
    {
        const bool branch_taken_0x2b909c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B909Cu;
        // 0x2b90a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b909c) {
            ctx->pc = 0x2B9114u;
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B90A4u;
label_2b90a4:
    // 0x2b90a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b90a8:
    // 0x2b90a8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b90a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b90ac:
    // 0x2b90ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b90acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b90b0:
    // 0x2b90b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b90b4:
    // 0x2b90b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b90b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b90b8:
    // 0x2b90b8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b90bc:
    // 0x2b90bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b90bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b90c0:
    // 0x2b90c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b90c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b90c4:
    // 0x2b90c4: 0xc0bee7a  jal         func_2FB9E8
label_2b90c8:
    if (ctx->pc == 0x2B90C8u) {
        ctx->pc = 0x2B90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90C4u;
        // 0x2b90c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90CCu;
        goto label_2b90cc;
    }
    ctx->pc = 0x2B90C4u;
    SET_GPR_U32(ctx, 31, 0x2B90CCu);
    ctx->pc = 0x2B90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90C4u;
    // 0x2b90c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B90C4u, 0x2B90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90CCu;
label_2b90cc:
    // 0x2b90cc: 0x10000103  b           . + 4 + (0x103 << 2)
label_2b90d0:
    if (ctx->pc == 0x2B90D0u) {
        ctx->pc = 0x2B90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90CCu;
        // 0x2b90d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90D4u;
        goto label_2b90d4;
    }
    ctx->pc = 0x2B90CCu;
    {
        const bool branch_taken_0x2b90cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90CCu;
        // 0x2b90d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90cc) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B90D4u;
label_2b90d4:
    // 0x2b90d4: 0x168200ff  bne         $s4, $v0, . + 4 + (0xFF << 2)
label_2b90d8:
    if (ctx->pc == 0x2B90D8u) {
        ctx->pc = 0x2B90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D4u;
        // 0x2b90d8: 0x3a830002  xori        $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90DCu;
        goto label_2b90dc;
    }
    ctx->pc = 0x2B90D4u;
    {
        const bool branch_taken_0x2b90d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D4u;
        // 0x2b90d8: 0x3a830002  xori        $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90d4) {
            ctx->pc = 0x2B94D4u;
            goto label_2b94d4;
        }
    }
    ctx->pc = 0x2B90DCu;
label_2b90dc:
    // 0x2b90dc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b90dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2b90e0:
    // 0x2b90e0: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x2b90e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_2b90e4:
    // 0x2b90e4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2b90e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_2b90e8:
    // 0x2b90e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b90e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b90ec:
    // 0x2b90ec: 0x0  nop
    ctx->pc = 0x2b90ecu;
    // NOP
label_2b90f0:
    // 0x2b90f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b90f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b90f4:
    // 0x2b90f4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b90f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b90f8:
    // 0x2b90f8: 0x0  nop
    ctx->pc = 0x2b90f8u;
    // NOP
label_2b90fc:
    // 0x2b90fc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2b9100:
    if (ctx->pc == 0x2B9100u) {
        ctx->pc = 0x2B9104u;
        goto label_2b9104;
    }
    ctx->pc = 0x2B90FCu;
    {
        const bool branch_taken_0x2b90fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b90fc) {
            ctx->pc = 0x2B911Cu;
            goto label_2b911c;
        }
    }
    ctx->pc = 0x2B9104u;
label_2b9104:
    // 0x2b9104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b9104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9108:
    // 0x2b9108: 0xc0a337e  jal         func_28CDF8
label_2b910c:
    if (ctx->pc == 0x2B910Cu) {
        ctx->pc = 0x2B910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9108u;
        // 0x2b910c: 0x8225003b  lb          $a1, 0x3B($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9110u;
        goto label_2b9110;
    }
    ctx->pc = 0x2B9108u;
    SET_GPR_U32(ctx, 31, 0x2B9110u);
    ctx->pc = 0x2B910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9108u;
    // 0x2b910c: 0x8225003b  lb          $a1, 0x3B($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2B9108u, 0x2B9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9110u;
label_2b9110:
    // 0x2b9110: 0xa2200030  sb          $zero, 0x30($s1)
    ctx->pc = 0x2b9110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
label_2b9114:
    // 0x2b9114: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_2b9118:
    if (ctx->pc == 0x2B9118u) {
        ctx->pc = 0x2B9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9114u;
        // 0x2b9118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B911Cu;
        goto label_2b911c;
    }
    ctx->pc = 0x2B9114u;
    {
        const bool branch_taken_0x2b9114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9114u;
        // 0x2b9118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9114) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B911Cu;
label_2b911c:
    // 0x2b911c: 0xc08bfa0  jal         func_22FE80
label_2b9120:
    if (ctx->pc == 0x2B9120u) {
        ctx->pc = 0x2B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B911Cu;
        // 0x2b9120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9124u;
        goto label_2b9124;
    }
    ctx->pc = 0x2B911Cu;
    SET_GPR_U32(ctx, 31, 0x2B9124u);
    ctx->pc = 0x2B9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B911Cu;
    // 0x2b9120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B911Cu, 0x2B9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9124u;
label_2b9124:
    // 0x2b9124: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9128:
    // 0x2b9128: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b9128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b912c:
    // 0x2b912c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b912cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b9130:
    // 0x2b9130: 0x105400ea  beq         $v0, $s4, . + 4 + (0xEA << 2)
label_2b9134:
    if (ctx->pc == 0x2B9134u) {
        ctx->pc = 0x2B9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9130u;
        // 0x2b9134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9138u;
        goto label_2b9138;
    }
    ctx->pc = 0x2B9130u;
    {
        const bool branch_taken_0x2b9130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9130u;
        // 0x2b9134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9130) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B9138u;
label_2b9138:
    // 0x2b9138: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2b9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2b913c:
    // 0x2b913c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b9140:
    if (ctx->pc == 0x2B9140u) {
        ctx->pc = 0x2B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B913Cu;
        // 0x2b9140: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9144u;
        goto label_2b9144;
    }
    ctx->pc = 0x2B913Cu;
    {
        const bool branch_taken_0x2b913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b913c) {
            ctx->pc = 0x2B9140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B913Cu;
            // 0x2b9140: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9144u;
            goto label_2b9144;
        }
    }
    ctx->pc = 0x2B9144u;
label_2b9144:
    // 0x2b9144: 0xc089bdc  jal         func_226F70
label_2b9148:
    if (ctx->pc == 0x2B9148u) {
        ctx->pc = 0x2B9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9144u;
        // 0x2b9148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B914Cu;
        goto label_2b914c;
    }
    ctx->pc = 0x2B9144u;
    SET_GPR_U32(ctx, 31, 0x2B914Cu);
    ctx->pc = 0x2B9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9144u;
    // 0x2b9148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B9144u, 0x2B914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B914Cu;
label_2b914c:
    // 0x2b914c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2b914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_2b9150:
    // 0x2b9150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b9154:
    // 0x2b9154: 0x0  nop
    ctx->pc = 0x2b9154u;
    // NOP
label_2b9158:
    // 0x2b9158: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b9158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b915c:
    // 0x2b915c: 0x0  nop
    ctx->pc = 0x2b915cu;
    // NOP
label_2b9160:
    // 0x2b9160: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2b9164:
    if (ctx->pc == 0x2B9164u) {
        ctx->pc = 0x2B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9160u;
        // 0x2b9164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9168u;
        goto label_2b9168;
    }
    ctx->pc = 0x2B9160u;
    {
        const bool branch_taken_0x2b9160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9160u;
        // 0x2b9164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9160) {
            ctx->pc = 0x2B9174u;
            goto label_2b9174;
        }
    }
    ctx->pc = 0x2B9168u;
label_2b9168:
    // 0x2b9168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b916c:
    // 0x2b916c: 0xc0a7c8c  jal         func_29F230
label_2b9170:
    if (ctx->pc == 0x2B9170u) {
        ctx->pc = 0x2B9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B916Cu;
        // 0x2b9170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9174u;
        goto label_2b9174;
    }
    ctx->pc = 0x2B916Cu;
    SET_GPR_U32(ctx, 31, 0x2B9174u);
    ctx->pc = 0x2B9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B916Cu;
    // 0x2b9170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2B916Cu, 0x2B9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9174u;
label_2b9174:
    // 0x2b9174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b9178:
    if (ctx->pc == 0x2B9178u) {
        ctx->pc = 0x2B9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9174u;
        // 0x2b9178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B917Cu;
        goto label_2b917c;
    }
    ctx->pc = 0x2B9174u;
    {
        const bool branch_taken_0x2b9174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9174u;
        // 0x2b9178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9174) {
            ctx->pc = 0x2B9190u;
            goto label_2b9190;
        }
    }
    ctx->pc = 0x2B917Cu;
label_2b917c:
    // 0x2b917c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9180:
    // 0x2b9180: 0xc0ae1a2  jal         func_2B8688
label_2b9184:
    if (ctx->pc == 0x2B9184u) {
        ctx->pc = 0x2B9188u;
        goto label_2b9188;
    }
    ctx->pc = 0x2B9180u;
    SET_GPR_U32(ctx, 31, 0x2B9188u);
    ctx->pc = 0x2B8688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8688u, 0x2B9180u, 0x2B9188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9188u;
label_2b9188:
    // 0x2b9188: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2b918c:
    if (ctx->pc == 0x2B918Cu) {
        ctx->pc = 0x2B918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9188u;
        // 0x2b918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9190u;
        goto label_2b9190;
    }
    ctx->pc = 0x2B9188u;
    {
        const bool branch_taken_0x2b9188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9188u;
        // 0x2b918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9188) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B9190u;
label_2b9190:
    // 0x2b9190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b9194:
    // 0x2b9194: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b9194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b9198:
    // 0x2b9198: 0x0  nop
    ctx->pc = 0x2b9198u;
    // NOP
label_2b919c:
    // 0x2b919c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2b919cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b91a0:
    // 0x2b91a0: 0x0  nop
    ctx->pc = 0x2b91a0u;
    // NOP
label_2b91a4:
    // 0x2b91a4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2b91a8:
    if (ctx->pc == 0x2B91A8u) {
        ctx->pc = 0x2B91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91A4u;
        // 0x2b91a8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91ACu;
        goto label_2b91ac;
    }
    ctx->pc = 0x2B91A4u;
    {
        const bool branch_taken_0x2b91a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91A4u;
        // 0x2b91a8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91a4) {
            ctx->pc = 0x2B9224u;
            goto label_2b9224;
        }
    }
    ctx->pc = 0x2B91ACu;
label_2b91ac:
    // 0x2b91ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b91acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b91b0:
    // 0x2b91b0: 0x90820152  lbu         $v0, 0x152($a0)
    ctx->pc = 0x2b91b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 338)));
label_2b91b4:
    // 0x2b91b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b91b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b91b8:
    // 0x2b91b8: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_2b91bc:
    if (ctx->pc == 0x2B91BCu) {
        ctx->pc = 0x2B91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B8u;
        // 0x2b91bc: 0x8c70bd30  lw          $s0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91C0u;
        goto label_2b91c0;
    }
    ctx->pc = 0x2B91B8u;
    {
        const bool branch_taken_0x2b91b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B8u;
        // 0x2b91bc: 0x8c70bd30  lw          $s0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91b8) {
            ctx->pc = 0x2B91D0u;
            goto label_2b91d0;
        }
    }
    ctx->pc = 0x2B91C0u;
label_2b91c0:
    // 0x2b91c0: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2b91c4:
    // 0x2b91c4: 0xc13b782  jal         func_4EDE08
label_2b91c8:
    if (ctx->pc == 0x2B91C8u) {
        ctx->pc = 0x2B91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91C4u;
        // 0x2b91c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91CCu;
        goto label_2b91cc;
    }
    ctx->pc = 0x2B91C4u;
    SET_GPR_U32(ctx, 31, 0x2B91CCu);
    ctx->pc = 0x2B91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91C4u;
    // 0x2b91c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2B91C4u, 0x2B91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91CCu;
label_2b91cc:
    // 0x2b91cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b91ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b91d0:
    // 0x2b91d0: 0x9225003b  lbu         $a1, 0x3B($s1)
    ctx->pc = 0x2b91d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_2b91d4:
    // 0x2b91d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b91d8:
    // 0x2b91d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b91d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b91dc:
    // 0x2b91dc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2b91e0:
    // 0x2b91e0: 0xc0a337e  jal         func_28CDF8
label_2b91e4:
    if (ctx->pc == 0x2B91E4u) {
        ctx->pc = 0x2B91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91E0u;
        // 0x2b91e4: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91E8u;
        goto label_2b91e8;
    }
    ctx->pc = 0x2B91E0u;
    SET_GPR_U32(ctx, 31, 0x2B91E8u);
    ctx->pc = 0x2B91E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91E0u;
    // 0x2b91e4: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2B91E0u, 0x2B91E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91E8u;
label_2b91e8:
    // 0x2b91e8: 0xc0a367c  jal         func_28D9F0
label_2b91ec:
    if (ctx->pc == 0x2B91ECu) {
        ctx->pc = 0x2B91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91E8u;
        // 0x2b91ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91F0u;
        goto label_2b91f0;
    }
    ctx->pc = 0x2B91E8u;
    SET_GPR_U32(ctx, 31, 0x2B91F0u);
    ctx->pc = 0x2B91ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91E8u;
    // 0x2b91ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B91E8u, 0x2B91F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91F0u;
label_2b91f0:
    // 0x2b91f0: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
label_2b91f4:
    if (ctx->pc == 0x2B91F4u) {
        ctx->pc = 0x2B91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91F0u;
        // 0x2b91f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91F8u;
        goto label_2b91f8;
    }
    ctx->pc = 0x2B91F0u;
    {
        const bool branch_taken_0x2b91f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91F0u;
        // 0x2b91f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91f0) {
            ctx->pc = 0x2B9114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B91F8u;
label_2b91f8:
    // 0x2b91f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b91f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b91fc:
    // 0x2b91fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b91fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b9200:
    // 0x2b9200: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9204:
    // 0x2b9204: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2b9204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9208:
    // 0x2b9208: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b9208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b920c:
    // 0x2b920c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b920cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9210:
    // 0x2b9210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b9210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9214:
    // 0x2b9214: 0xc0bee7a  jal         func_2FB9E8
label_2b9218:
    if (ctx->pc == 0x2B9218u) {
        ctx->pc = 0x2B9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9214u;
        // 0x2b9218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B921Cu;
        goto label_2b921c;
    }
    ctx->pc = 0x2B9214u;
    SET_GPR_U32(ctx, 31, 0x2B921Cu);
    ctx->pc = 0x2B9218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9214u;
    // 0x2b9218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B9214u, 0x2B921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B921Cu;
label_2b921c:
    // 0x2b921c: 0x100000af  b           . + 4 + (0xAF << 2)
label_2b9220:
    if (ctx->pc == 0x2B9220u) {
        ctx->pc = 0x2B9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B921Cu;
        // 0x2b9220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9224u;
        goto label_2b9224;
    }
    ctx->pc = 0x2B921Cu;
    {
        const bool branch_taken_0x2b921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B921Cu;
        // 0x2b9220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b921c) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B9224u;
label_2b9224:
    // 0x2b9224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9228:
    // 0x2b9228: 0xc087106  jal         func_21C418
label_2b922c:
    if (ctx->pc == 0x2B922Cu) {
        ctx->pc = 0x2B922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9228u;
        // 0x2b922c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9230u;
        goto label_2b9230;
    }
    ctx->pc = 0x2B9228u;
    SET_GPR_U32(ctx, 31, 0x2B9230u);
    ctx->pc = 0x2B922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9228u;
    // 0x2b922c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C418u, 0x2B9228u, 0x2B9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9230u;
label_2b9230:
    // 0x2b9230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9234:
    // 0x2b9234: 0x52000073  beql        $s0, $zero, . + 4 + (0x73 << 2)
label_2b9238:
    if (ctx->pc == 0x2B9238u) {
        ctx->pc = 0x2B9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9234u;
        // 0x2b9238: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B923Cu;
        goto label_2b923c;
    }
    ctx->pc = 0x2B9234u;
    {
        const bool branch_taken_0x2b9234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9234) {
            ctx->pc = 0x2B9238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9234u;
            // 0x2b9238: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9404u;
            goto label_2b9404;
        }
    }
    ctx->pc = 0x2B923Cu;
label_2b923c:
    // 0x2b923c: 0xc0e57ce  jal         func_395F38
label_2b9240:
    if (ctx->pc == 0x2B9240u) {
        ctx->pc = 0x2B9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B923Cu;
        // 0x2b9240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9244u;
        goto label_2b9244;
    }
    ctx->pc = 0x2B923Cu;
    SET_GPR_U32(ctx, 31, 0x2B9244u);
    ctx->pc = 0x2B9240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B923Cu;
    // 0x2b9240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2B923Cu, 0x2B9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9244u;
label_2b9244:
    // 0x2b9244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9248:
    // 0x2b9248: 0xc08a61a  jal         func_229868
label_2b924c:
    if (ctx->pc == 0x2B924Cu) {
        ctx->pc = 0x2B924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9248u;
        // 0x2b924c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9250u;
        goto label_2b9250;
    }
    ctx->pc = 0x2B9248u;
    SET_GPR_U32(ctx, 31, 0x2B9250u);
    ctx->pc = 0x2B924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9248u;
    // 0x2b924c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B9248u, 0x2B9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9250u;
label_2b9250:
    // 0x2b9250: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_2b9254:
    if (ctx->pc == 0x2B9254u) {
        ctx->pc = 0x2B9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9250u;
        // 0x2b9254: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9258u;
        goto label_2b9258;
    }
    ctx->pc = 0x2B9250u;
    {
        const bool branch_taken_0x2b9250 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9250u;
        // 0x2b9254: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9250) {
            ctx->pc = 0x2B92BCu;
            goto label_2b92bc;
        }
    }
    ctx->pc = 0x2B9258u;
label_2b9258:
    // 0x2b9258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b9258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b925c:
    // 0x2b925c: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x2b925cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_2b9260:
    // 0x2b9260: 0xc0e44cc  jal         func_391330
label_2b9264:
    if (ctx->pc == 0x2B9264u) {
        ctx->pc = 0x2B9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9260u;
        // 0x2b9264: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9268u;
        goto label_2b9268;
    }
    ctx->pc = 0x2B9260u;
    SET_GPR_U32(ctx, 31, 0x2B9268u);
    ctx->pc = 0x2B9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9260u;
    // 0x2b9264: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2B9260u, 0x2B9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9268u;
label_2b9268:
    // 0x2b9268: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x2b9268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_2b926c:
    // 0x2b926c: 0x54740065  bnel        $v1, $s4, . + 4 + (0x65 << 2)
label_2b9270:
    if (ctx->pc == 0x2B9270u) {
        ctx->pc = 0x2B9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B926Cu;
        // 0x2b9270: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9274u;
        goto label_2b9274;
    }
    ctx->pc = 0x2B926Cu;
    {
        const bool branch_taken_0x2b926c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b926c) {
            ctx->pc = 0x2B9270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B926Cu;
            // 0x2b9270: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9404u;
            goto label_2b9404;
        }
    }
    ctx->pc = 0x2B9274u;
label_2b9274:
    // 0x2b9274: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b9274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9278:
    // 0x2b9278: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b9278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b927c:
    // 0x2b927c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b927cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b9280:
    // 0x2b9280: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b9284:
    // 0x2b9284: 0x40f809  jalr        $v0
label_2b9288:
    if (ctx->pc == 0x2B9288u) {
        ctx->pc = 0x2B9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9284u;
        // 0x2b9288: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B928Cu;
        goto label_2b928c;
    }
    ctx->pc = 0x2B9284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B928Cu);
        ctx->pc = 0x2B9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9284u;
        // 0x2b9288: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9284u, 0x2B928Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B928Cu;
label_2b928c:
    // 0x2b928c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x2b928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_2b9290:
    // 0x2b9290: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b9290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9294:
    // 0x2b9294: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b9294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2b9298:
    // 0x2b9298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b929c:
    // 0x2b929c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b929cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b92a0:
    // 0x2b92a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b92a4:
    // 0x2b92a4: 0xc0a3892  jal         func_28E248
label_2b92a8:
    if (ctx->pc == 0x2B92A8u) {
        ctx->pc = 0x2B92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A4u;
        // 0x2b92a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92ACu;
        goto label_2b92ac;
    }
    ctx->pc = 0x2B92A4u;
    SET_GPR_U32(ctx, 31, 0x2B92ACu);
    ctx->pc = 0x2B92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92A4u;
    // 0x2b92a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B92A4u, 0x2B92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92ACu;
label_2b92ac:
    // 0x2b92ac: 0xc0ae28c  jal         func_2B8A30
label_2b92b0:
    if (ctx->pc == 0x2B92B0u) {
        ctx->pc = 0x2B92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92ACu;
        // 0x2b92b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92B4u;
        goto label_2b92b4;
    }
    ctx->pc = 0x2B92ACu;
    SET_GPR_U32(ctx, 31, 0x2B92B4u);
    ctx->pc = 0x2B92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92ACu;
    // 0x2b92b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A30u, 0x2B92ACu, 0x2B92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92B4u;
label_2b92b4:
    // 0x2b92b4: 0x10000089  b           . + 4 + (0x89 << 2)
label_2b92b8:
    if (ctx->pc == 0x2B92B8u) {
        ctx->pc = 0x2B92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B4u;
        // 0x2b92b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92BCu;
        goto label_2b92bc;
    }
    ctx->pc = 0x2B92B4u;
    {
        const bool branch_taken_0x2b92b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B4u;
        // 0x2b92b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b4) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B92BCu;
label_2b92bc:
    // 0x2b92bc: 0x52000051  beql        $s0, $zero, . + 4 + (0x51 << 2)
label_2b92c0:
    if (ctx->pc == 0x2B92C0u) {
        ctx->pc = 0x2B92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92BCu;
        // 0x2b92c0: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92C4u;
        goto label_2b92c4;
    }
    ctx->pc = 0x2B92BCu;
    {
        const bool branch_taken_0x2b92bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b92bc) {
            ctx->pc = 0x2B92C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B92BCu;
            // 0x2b92c0: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9404u;
            goto label_2b9404;
        }
    }
    ctx->pc = 0x2B92C4u;
label_2b92c4:
    // 0x2b92c4: 0xc087502  jal         func_21D408
label_2b92c8:
    if (ctx->pc == 0x2B92C8u) {
        ctx->pc = 0x2B92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C4u;
        // 0x2b92c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92CCu;
        goto label_2b92cc;
    }
    ctx->pc = 0x2B92C4u;
    SET_GPR_U32(ctx, 31, 0x2B92CCu);
    ctx->pc = 0x2B92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92C4u;
    // 0x2b92c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B92C4u, 0x2B92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92CCu;
label_2b92cc:
    // 0x2b92cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b92ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b92d0:
    // 0x2b92d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b92d4:
    // 0x2b92d4: 0xc0a404e  jal         func_290138
label_2b92d8:
    if (ctx->pc == 0x2B92D8u) {
        ctx->pc = 0x2B92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D4u;
        // 0x2b92d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92DCu;
        goto label_2b92dc;
    }
    ctx->pc = 0x2B92D4u;
    SET_GPR_U32(ctx, 31, 0x2B92DCu);
    ctx->pc = 0x2B92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92D4u;
    // 0x2b92d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2B92D4u, 0x2B92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92DCu;
label_2b92dc:
    // 0x2b92dc: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
label_2b92e0:
    if (ctx->pc == 0x2B92E0u) {
        ctx->pc = 0x2B92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92DCu;
        // 0x2b92e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92E4u;
        goto label_2b92e4;
    }
    ctx->pc = 0x2B92DCu;
    {
        const bool branch_taken_0x2b92dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92DCu;
        // 0x2b92e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92dc) {
            ctx->pc = 0x2B92FCu;
            goto label_2b92fc;
        }
    }
    ctx->pc = 0x2B92E4u;
label_2b92e4:
    // 0x2b92e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b92e8:
    // 0x2b92e8: 0xc0a33f8  jal         func_28CFE0
label_2b92ec:
    if (ctx->pc == 0x2B92ECu) {
        ctx->pc = 0x2B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E8u;
        // 0x2b92ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92F0u;
        goto label_2b92f0;
    }
    ctx->pc = 0x2B92E8u;
    SET_GPR_U32(ctx, 31, 0x2B92F0u);
    ctx->pc = 0x2B92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92E8u;
    // 0x2b92ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B92E8u, 0x2B92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92F0u;
label_2b92f0:
    // 0x2b92f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b92f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b92f4:
    // 0x2b92f4: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
label_2b92f8:
    if (ctx->pc == 0x2B92F8u) {
        ctx->pc = 0x2B92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92F4u;
        // 0x2b92f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92FCu;
        goto label_2b92fc;
    }
    ctx->pc = 0x2B92F4u;
    {
        const bool branch_taken_0x2b92f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92F4u;
        // 0x2b92f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92f4) {
            ctx->pc = 0x2B9180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9180;
        }
    }
    ctx->pc = 0x2B92FCu;
label_2b92fc:
    // 0x2b92fc: 0xc0a36c8  jal         func_28DB20
label_2b9300:
    if (ctx->pc == 0x2B9300u) {
        ctx->pc = 0x2B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92FCu;
        // 0x2b9300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9304u;
        goto label_2b9304;
    }
    ctx->pc = 0x2B92FCu;
    SET_GPR_U32(ctx, 31, 0x2B9304u);
    ctx->pc = 0x2B9300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92FCu;
    // 0x2b9300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B92FCu, 0x2B9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9304u;
label_2b9304:
    // 0x2b9304: 0x54540023  bnel        $v0, $s4, . + 4 + (0x23 << 2)
label_2b9308:
    if (ctx->pc == 0x2B9308u) {
        ctx->pc = 0x2B9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9304u;
        // 0x2b9308: 0x86020092  lh          $v0, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B930Cu;
        goto label_2b930c;
    }
    ctx->pc = 0x2B9304u;
    {
        const bool branch_taken_0x2b9304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b9304) {
            ctx->pc = 0x2B9308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9304u;
            // 0x2b9308: 0x86020092  lh          $v0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9394u;
            goto label_2b9394;
        }
    }
    ctx->pc = 0x2B930Cu;
label_2b930c:
    // 0x2b930c: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2b930cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2b9310:
    // 0x2b9310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9314:
    // 0x2b9314: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2b9314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9318:
    // 0x2b9318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b931c:
    // 0x2b931c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b931cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b9320:
    // 0x2b9320: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b9320u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b9324:
    // 0x2b9324: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b9324u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b9328:
    // 0x2b9328: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b9328u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b932c:
    // 0x2b932c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b932cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2b9330:
    // 0x2b9330: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b9330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b9334:
    // 0x2b9334: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b9334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b9338:
    // 0x2b9338: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2b9338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b933c:
    // 0x2b933c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b933cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b9340:
    // 0x2b9340: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b9340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b9344:
    // 0x2b9344: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b9344u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2b9348:
    // 0x2b9348: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9348u;
    // VWAITQ (Q already resolved in this runtime)
label_2b934c:
    // 0x2b934c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2b934cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b9350:
    // 0x2b9350: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b9350u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b9354:
    // 0x2b9354: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b9354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2b9358:
    // 0x2b9358: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2b9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2b935c:
    // 0x2b935c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2b935cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b9360:
    // 0x2b9360: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2b9360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2b9364:
    // 0x2b9364: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b9364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2b9368:
    // 0x2b9368: 0xc0a2892  jal         func_28A248
label_2b936c:
    if (ctx->pc == 0x2B936Cu) {
        ctx->pc = 0x2B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9368u;
        // 0x2b936c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9370u;
        goto label_2b9370;
    }
    ctx->pc = 0x2B9368u;
    SET_GPR_U32(ctx, 31, 0x2B9370u);
    ctx->pc = 0x2B936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9368u;
    // 0x2b936c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x2B9368u, 0x2B9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9370u;
label_2b9370:
    // 0x2b9370: 0xc0a367c  jal         func_28D9F0
label_2b9374:
    if (ctx->pc == 0x2B9374u) {
        ctx->pc = 0x2B9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9370u;
        // 0x2b9374: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9378u;
        goto label_2b9378;
    }
    ctx->pc = 0x2B9370u;
    SET_GPR_U32(ctx, 31, 0x2B9378u);
    ctx->pc = 0x2B9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9370u;
    // 0x2b9374: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B9370u, 0x2B9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9378u;
label_2b9378:
    // 0x2b9378: 0x1040ff66  beqz        $v0, . + 4 + (-0x9A << 2)
label_2b937c:
    if (ctx->pc == 0x2B937Cu) {
        ctx->pc = 0x2B937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9378u;
        // 0x2b937c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9380u;
        goto label_2b9380;
    }
    ctx->pc = 0x2B9378u;
    {
        const bool branch_taken_0x2b9378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9378u;
        // 0x2b937c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9378) {
            ctx->pc = 0x2B9114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B9380u;
label_2b9380:
    // 0x2b9380: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b9380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9384:
    // 0x2b9384: 0xc0bebdc  jal         func_2FAF70
label_2b9388:
    if (ctx->pc == 0x2B9388u) {
        ctx->pc = 0x2B9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9384u;
        // 0x2b9388: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B938Cu;
        goto label_2b938c;
    }
    ctx->pc = 0x2B9384u;
    SET_GPR_U32(ctx, 31, 0x2B938Cu);
    ctx->pc = 0x2B9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9384u;
    // 0x2b9388: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2B9384u, 0x2B938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B938Cu;
label_2b938c:
    // 0x2b938c: 0x10000053  b           . + 4 + (0x53 << 2)
label_2b9390:
    if (ctx->pc == 0x2B9390u) {
        ctx->pc = 0x2B9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B938Cu;
        // 0x2b9390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9394u;
        goto label_2b9394;
    }
    ctx->pc = 0x2B938Cu;
    {
        const bool branch_taken_0x2b938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B938Cu;
        // 0x2b9390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b938c) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B9394u;
label_2b9394:
    // 0x2b9394: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b9394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2b9398:
    // 0x2b9398: 0x24664b00  addiu       $a2, $v1, 0x4B00
    ctx->pc = 0x2b9398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b939c:
    // 0x2b939c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2b939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_2b93a0:
    // 0x2b93a0: 0x34216595  ori         $at, $at, 0x6595
    ctx->pc = 0x2b93a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26005);
label_2b93a4:
    // 0x2b93a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b93a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b93a8:
    // 0x2b93a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b93ac:
    // 0x2b93ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b93acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b93b0:
    // 0x2b93b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2b93b4:
    // 0x2b93b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2b93b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b93b8:
    // 0x2b93b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b93b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b93bc:
    // 0x2b93bc: 0xc088708  jal         func_221C20
label_2b93c0:
    if (ctx->pc == 0x2B93C0u) {
        ctx->pc = 0x2B93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93BCu;
        // 0x2b93c0: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93C4u;
        goto label_2b93c4;
    }
    ctx->pc = 0x2B93BCu;
    SET_GPR_U32(ctx, 31, 0x2B93C4u);
    ctx->pc = 0x2B93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93BCu;
    // 0x2b93c0: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2B93BCu, 0x2B93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93C4u;
label_2b93c4:
    // 0x2b93c4: 0xc0a367c  jal         func_28D9F0
label_2b93c8:
    if (ctx->pc == 0x2B93C8u) {
        ctx->pc = 0x2B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93C4u;
        // 0x2b93c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93CCu;
        goto label_2b93cc;
    }
    ctx->pc = 0x2B93C4u;
    SET_GPR_U32(ctx, 31, 0x2B93CCu);
    ctx->pc = 0x2B93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93C4u;
    // 0x2b93c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B93C4u, 0x2B93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93CCu;
label_2b93cc:
    // 0x2b93cc: 0x1040ff51  beqz        $v0, . + 4 + (-0xAF << 2)
label_2b93d0:
    if (ctx->pc == 0x2B93D0u) {
        ctx->pc = 0x2B93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93CCu;
        // 0x2b93d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93D4u;
        goto label_2b93d4;
    }
    ctx->pc = 0x2B93CCu;
    {
        const bool branch_taken_0x2b93cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93CCu;
        // 0x2b93d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93cc) {
            ctx->pc = 0x2B9114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B93D4u;
label_2b93d4:
    // 0x2b93d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b93d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b93d8:
    // 0x2b93d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b93d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b93dc:
    // 0x2b93dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b93dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b93e0:
    // 0x2b93e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b93e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b93e4:
    // 0x2b93e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b93e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b93e8:
    // 0x2b93e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b93e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b93ec:
    // 0x2b93ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b93ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2b93f0:
    // 0x2b93f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b93f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b93f4:
    // 0x2b93f4: 0xc0be968  jal         func_2FA5A0
label_2b93f8:
    if (ctx->pc == 0x2B93F8u) {
        ctx->pc = 0x2B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93F4u;
        // 0x2b93f8: 0x24090021  addiu       $t1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93FCu;
        goto label_2b93fc;
    }
    ctx->pc = 0x2B93F4u;
    SET_GPR_U32(ctx, 31, 0x2B93FCu);
    ctx->pc = 0x2B93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93F4u;
    // 0x2b93f8: 0x24090021  addiu       $t1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2B93F4u, 0x2B93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93FCu;
label_2b93fc:
    // 0x2b93fc: 0x10000037  b           . + 4 + (0x37 << 2)
label_2b9400:
    if (ctx->pc == 0x2B9400u) {
        ctx->pc = 0x2B9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93FCu;
        // 0x2b9400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9404u;
        goto label_2b9404;
    }
    ctx->pc = 0x2B93FCu;
    {
        const bool branch_taken_0x2b93fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93FCu;
        // 0x2b9400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93fc) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B9404u;
label_2b9404:
    // 0x2b9404: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2b9408:
    if (ctx->pc == 0x2B9408u) {
        ctx->pc = 0x2B9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9404u;
        // 0x2b9408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B940Cu;
        goto label_2b940c;
    }
    ctx->pc = 0x2B9404u;
    {
        const bool branch_taken_0x2b9404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9404u;
        // 0x2b9408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9404) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B940Cu;
label_2b940c:
    // 0x2b940c: 0xc088e88  jal         func_223A20
label_2b9410:
    if (ctx->pc == 0x2B9410u) {
        ctx->pc = 0x2B9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B940Cu;
        // 0x2b9410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9414u;
        goto label_2b9414;
    }
    ctx->pc = 0x2B940Cu;
    SET_GPR_U32(ctx, 31, 0x2B9414u);
    ctx->pc = 0x2B9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B940Cu;
    // 0x2b9410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2B940Cu, 0x2B9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9414u;
label_2b9414:
    // 0x2b9414: 0x1040ff3f  beqz        $v0, . + 4 + (-0xC1 << 2)
label_2b9418:
    if (ctx->pc == 0x2B9418u) {
        ctx->pc = 0x2B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9414u;
        // 0x2b9418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B941Cu;
        goto label_2b941c;
    }
    ctx->pc = 0x2B9414u;
    {
        const bool branch_taken_0x2b9414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9414u;
        // 0x2b9418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9414) {
            ctx->pc = 0x2B9114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9114;
        }
    }
    ctx->pc = 0x2B941Cu;
label_2b941c:
    // 0x2b941c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2b941cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2b9420:
    // 0x2b9420: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2b9420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2b9424:
    // 0x2b9424: 0xc089998  jal         func_226660
label_2b9428:
    if (ctx->pc == 0x2B9428u) {
        ctx->pc = 0x2B9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9424u;
        // 0x2b9428: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B942Cu;
        goto label_2b942c;
    }
    ctx->pc = 0x2B9424u;
    SET_GPR_U32(ctx, 31, 0x2B942Cu);
    ctx->pc = 0x2B9428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9424u;
    // 0x2b9428: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B9424u, 0x2B942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B942Cu;
label_2b942c:
    // 0x2b942c: 0x1050002b  beq         $v0, $s0, . + 4 + (0x2B << 2)
label_2b9430:
    if (ctx->pc == 0x2B9430u) {
        ctx->pc = 0x2B9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B942Cu;
        // 0x2b9430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9434u;
        goto label_2b9434;
    }
    ctx->pc = 0x2B942Cu;
    {
        const bool branch_taken_0x2b942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B942Cu;
        // 0x2b9430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b942c) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B9434u;
label_2b9434:
    // 0x2b9434: 0xa230003c  sb          $s0, 0x3C($s1)
    ctx->pc = 0x2b9434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 16));
label_2b9438:
    // 0x2b9438: 0xc088edc  jal         func_223B70
label_2b943c:
    if (ctx->pc == 0x2B943Cu) {
        ctx->pc = 0x2B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9438u;
        // 0x2b943c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9440u;
        goto label_2b9440;
    }
    ctx->pc = 0x2B9438u;
    SET_GPR_U32(ctx, 31, 0x2B9440u);
    ctx->pc = 0x2B943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9438u;
    // 0x2b943c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2B9438u, 0x2B9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9440u;
label_2b9440:
    // 0x2b9440: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
label_2b9444:
    if (ctx->pc == 0x2B9444u) {
        ctx->pc = 0x2B9448u;
        goto label_2b9448;
    }
    ctx->pc = 0x2B9440u;
    {
        const bool branch_taken_0x2b9440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b9440) {
            ctx->pc = 0x2B946Cu;
            goto label_2b946c;
        }
    }
    ctx->pc = 0x2B9448u;
label_2b9448:
    // 0x2b9448: 0xc0a367c  jal         func_28D9F0
label_2b944c:
    if (ctx->pc == 0x2B944Cu) {
        ctx->pc = 0x2B944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9448u;
        // 0x2b944c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9450u;
        goto label_2b9450;
    }
    ctx->pc = 0x2B9448u;
    SET_GPR_U32(ctx, 31, 0x2B9450u);
    ctx->pc = 0x2B944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9448u;
    // 0x2b944c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B9448u, 0x2B9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9450u;
label_2b9450:
    // 0x2b9450: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2b9454:
    if (ctx->pc == 0x2B9454u) {
        ctx->pc = 0x2B9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9450u;
        // 0x2b9454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9458u;
        goto label_2b9458;
    }
    ctx->pc = 0x2B9450u;
    {
        const bool branch_taken_0x2b9450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9450u;
        // 0x2b9454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9450) {
            ctx->pc = 0x2B94C4u;
            goto label_2b94c4;
        }
    }
    ctx->pc = 0x2B9458u;
label_2b9458:
    // 0x2b9458: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b9458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b945c:
    // 0x2b945c: 0xc0becce  jal         func_2FB338
label_2b9460:
    if (ctx->pc == 0x2B9460u) {
        ctx->pc = 0x2B9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B945Cu;
        // 0x2b9460: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9464u;
        goto label_2b9464;
    }
    ctx->pc = 0x2B945Cu;
    SET_GPR_U32(ctx, 31, 0x2B9464u);
    ctx->pc = 0x2B9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B945Cu;
    // 0x2b9460: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB338u, 0x2B945Cu, 0x2B9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9464u;
label_2b9464:
    // 0x2b9464: 0x10000018  b           . + 4 + (0x18 << 2)
label_2b9468:
    if (ctx->pc == 0x2B9468u) {
        ctx->pc = 0x2B9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9464u;
        // 0x2b9468: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B946Cu;
        goto label_2b946c;
    }
    ctx->pc = 0x2B9464u;
    {
        const bool branch_taken_0x2b9464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9464u;
        // 0x2b9468: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9464) {
            ctx->pc = 0x2B94C8u;
            goto label_2b94c8;
        }
    }
    ctx->pc = 0x2B946Cu;
label_2b946c:
    // 0x2b946c: 0xc089f76  jal         func_227DD8
label_2b9470:
    if (ctx->pc == 0x2B9470u) {
        ctx->pc = 0x2B9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B946Cu;
        // 0x2b9470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9474u;
        goto label_2b9474;
    }
    ctx->pc = 0x2B946Cu;
    SET_GPR_U32(ctx, 31, 0x2B9474u);
    ctx->pc = 0x2B9470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B946Cu;
    // 0x2b9470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2B946Cu, 0x2B9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9474u;
label_2b9474:
    // 0x2b9474: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_2b9478:
    if (ctx->pc == 0x2B9478u) {
        ctx->pc = 0x2B9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9474u;
        // 0x2b9478: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B947Cu;
        goto label_2b947c;
    }
    ctx->pc = 0x2B9474u;
    {
        const bool branch_taken_0x2b9474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9474u;
        // 0x2b9478: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9474) {
            ctx->pc = 0x2B94C8u;
            goto label_2b94c8;
        }
    }
    ctx->pc = 0x2B947Cu;
label_2b947c:
    // 0x2b947c: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x2b947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_2b9480:
    // 0x2b9480: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b9484:
    if (ctx->pc == 0x2B9484u) {
        ctx->pc = 0x2B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9480u;
        // 0x2b9484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9488u;
        goto label_2b9488;
    }
    ctx->pc = 0x2B9480u;
    {
        const bool branch_taken_0x2b9480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9480u;
        // 0x2b9484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9480) {
            ctx->pc = 0x2B94A8u;
            goto label_2b94a8;
        }
    }
    ctx->pc = 0x2B9488u;
label_2b9488:
    // 0x2b9488: 0xc08702a  jal         func_21C0A8
label_2b948c:
    if (ctx->pc == 0x2B948Cu) {
        ctx->pc = 0x2B948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9488u;
        // 0x2b948c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9490u;
        goto label_2b9490;
    }
    ctx->pc = 0x2B9488u;
    SET_GPR_U32(ctx, 31, 0x2B9490u);
    ctx->pc = 0x2B948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9488u;
    // 0x2b948c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x2B9488u, 0x2B9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9490u;
label_2b9490:
    // 0x2b9490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b9494:
    if (ctx->pc == 0x2B9494u) {
        ctx->pc = 0x2B9498u;
        goto label_2b9498;
    }
    ctx->pc = 0x2B9490u;
    {
        const bool branch_taken_0x2b9490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9490) {
            ctx->pc = 0x2B94A8u;
            goto label_2b94a8;
        }
    }
    ctx->pc = 0x2B9498u;
label_2b9498:
    // 0x2b9498: 0x8ea300d4  lw          $v1, 0xD4($s5)
    ctx->pc = 0x2b9498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_2b949c:
    // 0x2b949c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2b949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_2b94a0:
    // 0x2b94a0: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x2b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_2b94a4:
    // 0x2b94a4: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x2b94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
label_2b94a8:
    // 0x2b94a8: 0xc0a367c  jal         func_28D9F0
label_2b94ac:
    if (ctx->pc == 0x2B94ACu) {
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A8u;
        // 0x2b94ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94B0u;
        goto label_2b94b0;
    }
    ctx->pc = 0x2B94A8u;
    SET_GPR_U32(ctx, 31, 0x2B94B0u);
    ctx->pc = 0x2B94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94A8u;
    // 0x2b94ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B94A8u, 0x2B94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94B0u;
label_2b94b0:
    // 0x2b94b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b94b4:
    if (ctx->pc == 0x2B94B4u) {
        ctx->pc = 0x2B94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B0u;
        // 0x2b94b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94B8u;
        goto label_2b94b8;
    }
    ctx->pc = 0x2B94B0u;
    {
        const bool branch_taken_0x2b94b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B0u;
        // 0x2b94b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94b0) {
            ctx->pc = 0x2B94C4u;
            goto label_2b94c4;
        }
    }
    ctx->pc = 0x2B94B8u;
label_2b94b8:
    // 0x2b94b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b94bc:
    // 0x2b94bc: 0xc0bed06  jal         func_2FB418
label_2b94c0:
    if (ctx->pc == 0x2B94C0u) {
        ctx->pc = 0x2B94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94BCu;
        // 0x2b94c0: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94C4u;
        goto label_2b94c4;
    }
    ctx->pc = 0x2B94BCu;
    SET_GPR_U32(ctx, 31, 0x2B94C4u);
    ctx->pc = 0x2B94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94BCu;
    // 0x2b94c0: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB418u, 0x2B94BCu, 0x2B94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94C4u;
label_2b94c4:
    // 0x2b94c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b94c8:
    // 0x2b94c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b94c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b94cc:
    // 0x2b94cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b94d0:
    if (ctx->pc == 0x2B94D0u) {
        ctx->pc = 0x2B94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94CCu;
        // 0x2b94d0: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94D4u;
        goto label_2b94d4;
    }
    ctx->pc = 0x2B94CCu;
    {
        const bool branch_taken_0x2b94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94CCu;
        // 0x2b94d0: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94cc) {
            ctx->pc = 0x2B94DCu;
            goto label_2b94dc;
        }
    }
    ctx->pc = 0x2B94D4u;
label_2b94d4:
    // 0x2b94d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b94d8:
    // 0x2b94d8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2b94d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2b94dc:
    // 0x2b94dc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2b94dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b94e0:
    // 0x2b94e0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2b94e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b94e4:
    // 0x2b94e4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2b94e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b94e8:
    // 0x2b94e8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2b94e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b94ec:
    // 0x2b94ec: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2b94ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b94f0:
    // 0x2b94f0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2b94f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b94f4:
    // 0x2b94f4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2b94f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b94f8:
    // 0x2b94f8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2b94f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b94fc:
    // 0x2b94fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b94fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b9500:
    // 0x2b9500: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b9500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9504:
    // 0x2b9504: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2b9504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b9508:
    // 0x2b9508: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2b9508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b950c:
    // 0x2b950c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2b950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b9510:
    // 0x2b9510: 0x3e00008  jr          $ra
label_2b9514:
    if (ctx->pc == 0x2B9514u) {
        ctx->pc = 0x2B9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9510u;
        // 0x2b9514: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9518u;
        goto label_2b9518;
    }
    ctx->pc = 0x2B9510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9510u;
        // 0x2b9514: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9518u;
label_2b9518:
    // 0x2b9518: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b951c:
    // 0x2b951c: 0x0  nop
    ctx->pc = 0x2b951cu;
    // NOP
label_2b9520:
    // 0x2b9520: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2b9520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2b9524:
    // 0x2b9524: 0x0  nop
    ctx->pc = 0x2b9524u;
    // NOP
label_2b9528:
    // 0x2b9528: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b952c:
    // 0x2b952c: 0x0  nop
    ctx->pc = 0x2b952cu;
    // NOP
label_2b9530:
    // 0x2b9530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b9534:
    // 0x2b9534: 0x0  nop
    ctx->pc = 0x2b9534u;
    // NOP
    ctx->pc = 0x2b9538u;
}
